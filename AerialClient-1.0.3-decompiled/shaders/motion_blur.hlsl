struct VSOut { float4 pos : SV_POSITION; float2 uv : TEXCOORD0; };

VSOut vs_main(uint id : SV_VertexID) {
    VSOut output;
    output.uv  = float2((id << 1) & 2, id & 2);
    output.pos = float4(output.uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
    return output;
}

cbuffer Params : register(b0) {
    float blend;
    float opacity;
    float2 padding;
};

Texture2D    sceneTexture   : register(t0);
Texture2D    historyTexture : register(t1);
SamplerState linearClamp    : register(s0);

float4 ps_accumulate(VSOut input) : SV_TARGET {
    return float4(sceneTexture.Sample(linearClamp, input.uv).rgb, blend);
}

float4 ps_present(VSOut input) : SV_TARGET {
    return float4(historyTexture.Sample(linearClamp, input.uv).rgb, opacity);
}
