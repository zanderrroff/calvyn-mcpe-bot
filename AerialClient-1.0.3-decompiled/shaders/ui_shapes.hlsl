cbuffer Params : register(b0) {
    float4 uScreen;
    float4 uRect;
    float4 uColorA;
    float4 uColorB;
    float4 uP;    // radius, thickness, mode, gradient
    float4 uP2;   // aa
};

Texture2D    tex : register(t0);
SamplerState smp : register(s0);

struct VSOut { float4 pos : SV_POSITION; float2 px : TEXCOORD0; float2 uv : TEXCOORD1; };

VSOut vs_main(uint id : SV_VertexID) {
    float2 c  = float2(id & 1, (id >> 1) & 1);
    float2 mn = uRect.xy;
    float2 mx = uRect.zw;
    float expand = (uP.z < 0.5) ? uP2.x : 0.0;
    float2 p = lerp(mn - expand, mx + expand, c);
    VSOut o;
    o.px  = p;
    o.uv  = c;
    o.pos = float4(p / uScreen.xy * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
    return o;
}

float sdRound(float2 p, float2 h, float r) {
    float2 q = abs(p) - h + r;
    return min(max(q.x, q.y), 0.0) + length(max(q, 0.0)) - r;
}

float4 ps_main(VSOut i) : SV_TARGET {
    float mode = uP.z;
    if (mode > 1.5) {
        float2 auv = lerp(uColorB.xy, uColorB.zw, i.uv);
        float cov = tex.Sample(smp, auv).r;
        return float4(uColorA.rgb, uColorA.a * cov);
    }
    if (mode > 0.5) {
        float4 t = tex.Sample(smp, i.uv);
        return t * uColorA;
    }
    float2 mn = uRect.xy;
    float2 mx = uRect.zw;
    float2 center = (mn + mx) * 0.5;
    float2 half = (mx - mn) * 0.5;
    float r = min(uP.x, min(half.x, half.y));
    float d = sdRound(i.px - center, half, r);
    float aa = max(uP2.x, 0.001);
    float cov;
    if (uP.y > 0.0)
        cov = 1.0 - smoothstep(0.0, aa, abs(d) - uP.y * 0.5);
    else
        cov = 1.0 - smoothstep(-aa, 0.0, d);
    float4 col = uColorA;
    if (uP.w > 0.5) {
        float t = (uP.w < 1.5) ? saturate((i.px.y - mn.y) / max(mx.y - mn.y, 0.001))
                               : saturate((i.px.x - mn.x) / max(mx.x - mn.x, 0.001));
        col = lerp(uColorA, uColorB, t);
    }
    return float4(col.rgb, col.a * cov);
}

struct GVSIn  { float2 pos : POSITION; float4 col : COLOR; };
struct GVSOut { float4 pos : SV_POSITION; float4 col : COLOR; };

GVSOut gvs_main(GVSIn i) {
    GVSOut o;
    o.pos = float4(i.pos / uScreen.xy * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
    o.col = i.col;
    return o;
}

float4 gps_main(GVSOut i) : SV_TARGET { return i.col; }
