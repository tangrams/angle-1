#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
//   fxc /Gec /nologo /E standardvs /T vs_4_0_level_9_1 /Fh
//    compiled/winrt/standardvs.h /Vn g_vs20_standardvs /Qstrip_reflect
//    /Qstrip_debug Blit.vs
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// POSITION                 0   xyzw        0     NONE  float   xyzw
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Position              0   xyzw        0      POS  float   xyzw
// TEXCOORD                 0   xyzw        1     NONE  float   xyzw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c1         cb0             0         1  ( FLT, FLT, FLT, FLT)
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c0                              Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_0
    def c2, 0.5, -0.5, 1, 0
    dcl_texcoord v0
    mad oT0, v0, c2.xyzz, c2.xxww
    add r0, v0, c1
    mad oPos.xy, r0.w, c0, r0
    mov oPos.zw, r0

// approximately 4 instruction slots used
vs_4_0
dcl_constantbuffer cb0[1], immediateIndexed
dcl_input v0.xyzw
dcl_output_siv o0.xyzw, position
dcl_output o1.xyzw
add o0.xyzw, v0.xyzw, cb0[0].xyzw
mad o1.xyzw, v0.xyzw, l(0.500000, -0.500000, 1.000000, 1.000000), l(0.500000, 0.500000, 0.000000, 0.000000)
ret 
// Approximately 0 instruction slots used
#endif

const BYTE g_vs20_standardvs[] =
{
     68,  88,  66,  67, 124, 197, 
     15, 183, 222, 189,  77, 224, 
    136,  16, 208, 197, 110,  59, 
     46,  79,   1,   0,   0,   0, 
     16,   2,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    220,   0,   0,   0, 132,   1, 
      0,   0, 184,   1,   0,   0, 
     65, 111, 110,  57, 164,   0, 
      0,   0, 164,   0,   0,   0, 
      0,   2, 254, 255, 112,   0, 
      0,   0,  52,   0,   0,   0, 
      1,   0,  36,   0,   0,   0, 
     48,   0,   0,   0,  48,   0, 
      0,   0,  36,   0,   1,   0, 
     48,   0,   0,   0,   0,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   2, 254, 255,  81,   0, 
      0,   5,   2,   0,  15, 160, 
      0,   0,   0,  63,   0,   0, 
      0, 191,   0,   0, 128,  63, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      0,   0,  15, 144,   4,   0, 
      0,   4,   0,   0,  15, 224, 
      0,   0, 228, 144,   2,   0, 
    164, 160,   2,   0, 240, 160, 
      2,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 144, 
      1,   0, 228, 160,   4,   0, 
      0,   4,   0,   0,   3, 192, 
      0,   0, 255, 128,   0,   0, 
    228, 160,   0,   0, 228, 128, 
      1,   0,   0,   2,   0,   0, 
     12, 192,   0,   0, 228, 128, 
    255, 255,   0,   0,  83,  72, 
     68,  82, 160,   0,   0,   0, 
     64,   0,   1,   0,  40,   0, 
      0,   0,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     95,   0,   0,   3, 242,  16, 
     16,   0,   0,   0,   0,   0, 
    103,   0,   0,   4, 242,  32, 
     16,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   8, 242,  32,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     50,   0,   0,  15, 242,  32, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,  63,   0,   0, 
      0, 191,   0,   0, 128,  63, 
      0,   0, 128,  63,   2,  64, 
      0,   0,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  73,  83, 
     71,  78,  44,   0,   0,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0,  80,  79,  83,  73, 
     84,  73,  79,  78,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     80,   0,   0,   0,   2,   0, 
      0,   0,   8,   0,   0,   0, 
     56,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     68,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  80, 111, 115, 
    105, 116, 105, 111, 110,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0, 171, 171, 171
};
