/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5288b10 (ELF vaddr 0x5188b10)
 * Label: OverworldGeneratorMultinoise::vslot64
 * Body:  [[05288b10, 052896b1] [052896c0, 0528980d] [05289810, 052898d1] [052898e0, 05289979] [05289980, 05289b85] [05289b90, 05289cc4] [05289cd0, 0528a23d] [0528a240, 0528a37f]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGeneratorMultinoise__vslot64
               (ulong param_1,long *param_2,ulong param_3,long param_4,long param_5,long param_6,
               char param_7,long *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  ulong *puVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [8];
  char cVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  short sVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  byte bVar25;
  byte bVar26;
  int iVar27;
  ulong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_2258;
  int iStack_2250;
  uint uStack_224c;
  undefined1 auStack_2248 [8];
  float fStack_2240;
  float fStack_223c;
  long *plStack_2238;
  long *plStack_2230;
  long *plStack_2228;
  long lStack_2220;
  long *plStack_2218;
  ulong uStack_2210;
  long *plStack_2208;
  long *plStack_2200;
  long lStack_21f8;
  long lStack_21f0;
  long lStack_21e8;
  long lStack_21e0;
  long lStack_21d0;
  ulong uStack_21c8;
  ulong uStack_21c0;
  long *plStack_21b8;
  long lStack_21b0;
  long *plStack_21a8;
  long lStack_21a0;
  long lStack_2198;
  long lStack_2190;
  long lStack_2188;
  long *plStack_2180;
  long *plStack_2178;
  long *plStack_2170;
  float fStack_2168;
  undefined4 uStack_2164;
  long *plStack_2160;
  long lStack_2158;
  ulong uStack_2150;
  long *plStack_2148;
  long *plStack_2140;
  long lStack_2138;
  long lStack_2130;
  long lStack_2128;
  long lStack_2120;
  long lStack_20f8;
  ulong uStack_20f0;
  long lStack_20e8;
  long lStack_20e0;
  long lStack_20d8;
  long lStack_20d0;
  ulong uStack_20c8;
  ulong uStack_20c0;
  ulong uStack_20b8;
  ulong uStack_20b0;
  ulong uStack_20a8;
  long lStack_20a0;
  undefined8 uStack_2098;
  float *pfStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined4 uStack_2060;
  undefined4 uStack_205c;
  undefined4 uStack_2058;
  undefined4 uStack_2054;
  float fStack_2050;
  undefined4 uStack_204c;
  undefined4 uStack_2048;
  long *plStack_2038;
  long *plStack_2030;
  long *plStack_2028;
  long *plStack_2020;
  long alStack_2018 [508];
  float afStack_1034 [1025];
  
  lStack_2198 = *(long *)(param_1 + 0x28);
  uStack_21c0 = (ulong)(uint)(int)*(short *)(lStack_2198 + 0xa8);
  uStack_224c = (uint)*(ushort *)(lStack_2198 + 0xac);
  lStack_21b0 = param_4;
  plStack_21a8 = param_2;
  lStack_2188 = param_5;
  lStack_2158 = param_6;
  uStack_2150 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
  if ((param_8 != (long *)0x0) && (0 < param_8[1] - *param_8)) {
    memset(*param_8,0);
  }
  plVar16 = (long *)(param_1 + 0x6e0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x4180);
  if (plVar14 == (long *)0x0) goto LAB_0528a33c;
  do {
    *plVar14 = (long)plVar16;
    *(short *)(plVar14 + 1) = (short)uStack_21c0 + 4;
    plStack_2170 = plVar14 + 2;
    plVar14[2] = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[9] = 0;
    plVar14[10] = 0;
    plVar14[0xb] = 0;
    *(undefined4 *)(plVar14 + 0xc) = 0;
    plStack_2178 = plVar14 + 0xd;
    plVar14[0xd] = 0;
    plVar14[0xe] = 0;
    plVar14[0xf] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x14] = 0;
    plVar14[0x15] = 0;
    plVar14[0x16] = 0;
    *(undefined4 *)(plVar14 + 0x17) = 0;
    plStack_2180 = plVar14 + 0x18;
    plVar14[0x18] = 0;
    plVar14[0x19] = 0;
    plVar14[0x1a] = 0;
    plVar14[0x1b] = 0;
    plVar14[0x1c] = 0;
    plVar14[0x1d] = 0;
    plVar14[0x1e] = 0;
    plVar14[0x1f] = 0;
    plVar14[0x20] = 0;
    plVar14[0x21] = 0;
    *(undefined4 *)(plVar14 + 0x22) = 0;
    plStack_21b8 = plVar14 + 0x23;
    plVar14[0x2b] = 0;
    plVar14[0x2c] = 0;
    plVar14[0x29] = 0;
    plVar14[0x2a] = 0;
    plVar14[0x27] = 0;
    plVar14[0x28] = 0;
    plVar14[0x25] = 0;
    plVar14[0x26] = 0;
    plVar14[0x23] = 0;
    plVar14[0x24] = 0;
    *(undefined4 *)(plVar14 + 0x2d) = 0;
    plStack_2218 = plVar14 + 0x2e;
    memset(plStack_2218,0,0x4010);
    uVar8 = _UNK_014ea7cc;
    uVar7 = _UNK_014ea7c8;
    uVar6 = _UNK_014ea7c4;
    uVar5 = _DAT_014ea7c0;
    lVar15 = 0x78;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0x478);
    *(undefined4 *)(plVar14 + 0x22e) = 0x3f800000;
    lStack_2190 = (long)plVar14 + 0x1174;
    lVar15 = 0x479;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0x879);
    auStack_2248 = (undefined1  [8])param_3;
    *(undefined4 *)((long)plVar14 + 0x2174) = 0x3f800000;
    lVar15 = 0x87a;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0xc7a);
    *(undefined4 *)(plVar14 + 0x62f) = 0x3f800000;
    lVar15 = 0xc7b;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0x107b);
    *(undefined4 *)((long)plVar14 + 0x417c) = 0x3f800000;
    uStack_21c8 = param_1;
    lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3160);
    if (lVar15 == 0) {
      func_0x0eec74c0(0x3160,0);
    }
    uVar18 = uStack_21c8;
    func_0x05268e90(lVar15,uStack_21c8 + 0x7c0);
    uStack_2058 = 0;
    uStack_2054 = 0;
    fStack_2050 = 0.0;
    uStack_204c = 0;
    uStack_2068 = 0;
    uStack_2060 = 0;
    uStack_205c = 0;
    uStack_2078 = 0;
    uStack_2070 = 0;
    uStack_2088 = 0;
    uStack_2080 = 0;
    uStack_2098 = 0;
    pfStack_2090 = (float *)0x0;
    uStack_2048 = 0;
    plStack_2238 = (long *)0x0;
    plStack_2230 = (long *)0x0;
    plStack_2228 = (long *)0x0;
    memset(afStack_1034,0,0x1004);
    lStack_2220 = lVar15;
    func_0x05287930(&plStack_2038,uVar18,*(undefined4 *)auStack_2248,
                    *(undefined4 *)((long)auStack_2248 + 4),lStack_21b0,plVar14,lVar15);
    memcpy(afStack_1034,&plStack_2038,0x1004);
    uStack_2088 = 0;
    uStack_2080 = 0;
    uStack_2078 = 0;
    uStack_2070 = 0;
    uStack_2068 = 0;
    uStack_2060 = 0;
    uStack_205c = 0;
    uStack_2058 = 0;
    uStack_2054 = 0;
    fStack_2050 = 0.0;
    uStack_2098 = 0x401;
    uStack_204c = (undefined4)_DAT_014e9c40;
    uStack_2048 = (undefined4)((ulong)_DAT_014e9c40 >> 0x20);
    pfStack_2090 = afStack_1034;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    plStack_2228 = plVar16 + 1;
    *plVar16 = (long)&uStack_2098;
    plStack_2238 = plVar16;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar17 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    plStack_2228 = plVar17 + 8;
    *plVar17 = *plVar16;
    plStack_2238 = plVar17;
    plStack_2230 = plVar17 + 1;
    func_0x0412a280(plVar16,8);
    plVar14[2] = 0x401;
    plVar14[3] = (long)plStack_2218;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[9] = 0;
    *(undefined8 *)((long)plVar14 + 0x4c) = 0;
    *(undefined8 *)((long)plVar14 + 0x54) = 0;
    uVar32 = _DAT_014e9c40;
    *(undefined8 *)((long)plVar14 + 0x5c) = _DAT_014e9c40;
    plVar14[0xd] = 0x401;
    plVar14[0xe] = lStack_2190;
    plVar14[0xf] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x14] = 0;
    *(undefined8 *)((long)plVar14 + 0xa4) = 0;
    *(undefined8 *)((long)plVar14 + 0xac) = 0;
    *(undefined8 *)((long)plVar14 + 0xb4) = uVar32;
    plVar14[0x18] = 0x401;
    plVar14[0x19] = (long)(plVar14 + 0x42f);
    plVar14[0x1a] = 0;
    plVar14[0x1b] = 0;
    plVar14[0x1c] = 0;
    plVar14[0x1d] = 0;
    plVar14[0x1e] = 0;
    plVar14[0x1f] = 0;
    *(undefined8 *)((long)plVar14 + 0xfc) = 0;
    *(undefined8 *)((long)plVar14 + 0x104) = 0;
    *(undefined8 *)((long)plVar14 + 0x10c) = uVar32;
    plVar14[0x23] = 0x401;
    plVar14[0x24] = (long)plVar14 + 0x317c;
    plVar14[0x25] = 0;
    plVar14[0x26] = 0;
    plVar14[0x27] = 0;
    plVar14[0x28] = 0;
    plVar14[0x29] = 0;
    plVar14[0x2a] = 0;
    *(undefined8 *)((long)plVar14 + 0x154) = 0;
    *(undefined8 *)((long)plVar14 + 0x15c) = 0;
    *(undefined8 *)((long)plVar14 + 0x164) = uVar32;
    plStack_2038 = plStack_2170;
    plStack_2030 = plStack_2178;
    plStack_2028 = plStack_2180;
    plStack_2020 = plStack_21b8;
    func_0x052bd680(&plStack_2238,plVar17 + 1,&plStack_2038,alStack_2018,4);
    plStack_2148 = (long *)(lStack_2220 + 0x3010);
    *(undefined8 *)(lStack_2220 + 0x3010) = 0x401;
    *(long *)(lStack_2220 + 0x3018) = lStack_2220;
    *(undefined8 *)(lStack_2220 + 0x3020) = 0;
    *(undefined8 *)(lStack_2220 + 0x3028) = 0;
    *(undefined8 *)(lStack_2220 + 0x3030) = 0;
    *(undefined8 *)(lStack_2220 + 0x3038) = 0;
    *(undefined8 *)(lStack_2220 + 0x3040) = 0;
    *(undefined8 *)(lStack_2220 + 0x3048) = 0;
    *(undefined8 *)(lStack_2220 + 0x304c) = 0;
    *(undefined8 *)(lStack_2220 + 0x3054) = 0;
    uVar32 = _DAT_014e9c40;
    *(undefined8 *)(lStack_2220 + 0x305c) = _DAT_014e9c40;
    plStack_2140 = (long *)(lStack_2220 + 0x3068);
    *(undefined8 *)(lStack_2220 + 0x3068) = 0x401;
    *(long *)(lStack_2220 + 0x3070) = lStack_2220 + 0x1004;
    *(undefined8 *)(lStack_2220 + 0x3078) = 0;
    *(undefined8 *)(lStack_2220 + 0x3080) = 0;
    *(undefined8 *)(lStack_2220 + 0x3088) = 0;
    *(undefined8 *)(lStack_2220 + 0x3090) = 0;
    *(undefined8 *)(lStack_2220 + 0x3098) = 0;
    *(undefined8 *)(lStack_2220 + 0x30a0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30a4) = 0;
    *(undefined8 *)(lStack_2220 + 0x30ac) = 0;
    *(undefined8 *)(lStack_2220 + 0x30b4) = uVar32;
    lStack_2138 = lStack_2220 + 0x30c0;
    *(undefined8 *)(lStack_2220 + 0x30c0) = 0x401;
    *(long *)(lStack_2220 + 0x30c8) = lStack_2220 + 0x2008;
    *(undefined8 *)(lStack_2220 + 0x30d0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30d8) = 0;
    *(undefined8 *)(lStack_2220 + 0x30e0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30e8) = 0;
    *(undefined8 *)(lStack_2220 + 0x30f0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30f8) = 0;
    *(undefined8 *)(lStack_2220 + 0x30fc) = 0;
    *(undefined8 *)(lStack_2220 + 0x3104) = 0;
    *(undefined8 *)(lStack_2220 + 0x310c) = uVar32;
    func_0x052bd680(&plStack_2238,plStack_2230,&plStack_2148,&lStack_2130,3);
    uVar18 = uStack_21c8;
    auVar9 = auStack_2248;
    lStack_21e8 = 0;
    lStack_21e0 = 0;
    lStack_21f8 = 0;
    lStack_21f0 = 0;
    plStack_2208 = (long *)0x0;
    plStack_2200 = (long *)0x0;
    alStack_2018[2] = 0;
    alStack_2018[3] = 0;
    alStack_2018[0] = 0;
    alStack_2018[1] = 0;
    plStack_2028 = (long *)0x0;
    plStack_2020 = (long *)0x0;
    plStack_2038 = (long *)0x0;
    plStack_2030 = (long *)0x0;
    alStack_2018[4] = 0;
    if (param_7 == '\0') {
LAB_0528941f:
      plStack_2218 = (long *)CONCAT71(plStack_2218._1_7_,1);
      if ((alStack_2018[3] == alStack_2018[2]) && (plStack_2030 == plStack_2038)) {
        plStack_2218 = (long *)CONCAT71(plStack_2218._1_7_,
                                        lStack_21e8 != lStack_21f0 || plStack_2208 != plStack_2200);
      }
    }
    else {
      func_0x0ca729d0(uStack_21c8);
      lVar15 = *(long *)(uVar18 + 0x78);
      func_0x0d2ee510(&plStack_2148,lStack_2198 + 0x220,auVar9);
      func_0x0d2ecfa0(&plStack_2038,&plStack_2148);
      func_0x0d2ecea0(&plStack_2148);
      func_0x0d2efee0(&plStack_2148,lVar15 + 0x48,*(undefined8 *)auVar9);
      if (plStack_2208 != (long *)0x0) {
        plStack_2200 = plStack_2208;
        func_0x0412a280(plStack_2208,lStack_21f8 - (long)plStack_2208);
      }
      plStack_2208 = plStack_2148;
      plStack_2200 = plStack_2140;
      lStack_21f8 = lStack_2138;
      plStack_2148 = (long *)0x0;
      plStack_2140 = (long *)0x0;
      lStack_2138 = 0;
      if (lStack_21f0 != 0) {
        lStack_21e8 = lStack_21f0;
        func_0x0412a280(lStack_21f0,lStack_21e0 - lStack_21f0);
      }
      lStack_21f0 = lStack_2130;
      lStack_21e8 = lStack_2128;
      lStack_21e0 = lStack_2120;
      lStack_2130 = 0;
      lStack_2128 = 0;
      lStack_2120 = 0;
      if (plStack_2148 != (long *)0x0) {
        plStack_2140 = plStack_2148;
        func_0x0412a280(plStack_2148,lStack_2138 - (long)plStack_2148);
      }
      plStack_2218 = (long *)CONCAT71(plStack_2218._1_7_,1);
      if ((long *)alStack_2018[0] == plStack_2020) goto LAB_0528941f;
    }
    plStack_2180 = (long *)CONCAT44(plStack_2180._4_4_,
                                    *(int *)((long)plStack_21a8 + 0x14) * (int)plStack_21a8[2] *
                                    (int)plStack_21a8[3]);
    uStack_2258 = 0;
    iStack_2250 = 0;
    plStack_21b8 = *(long **)(lStack_2158 + 0x20);
    iVar24 = *(int *)auVar9;
    iVar13 = *(int *)((long)auVar9 + 4);
    func_0x0525af30(&plStack_2148,*(undefined8 *)(uVar18 + 0xca8),auVar9);
    uVar19 = (ulong)(uint)(iVar13 << 4);
    uStack_224c = CONCAT31((int3)(uStack_224c - (int)uStack_21c0 >> 8),
                           (byte)(uStack_224c - (int)uStack_21c0) >> 3);
    param_1 = (ulong)(uint)(iVar24 << 4);
    lVar15 = 0;
    uStack_20c0 = uVar19;
    uStack_20a8 = param_1;
LAB_052894f0:
    lStack_20e0 = lVar15 * 5;
    lStack_20e8 = lVar15 * 5 + 5;
    lStack_20a0 = lVar15 * 4;
    uStack_20f0 = (ulong)(uint)((int)lStack_20a0 + (int)param_1 >> 2);
    plVar17 = (long *)0x0;
    lStack_20f8 = lVar15;
    while( true ) {
      sVar11 = wg_OverworldGeneratorMultinoise__vslot52
                         (uVar18,(ulong)(uint)((int)uVar19 + (int)plVar17 * 4 >> 2) << 0x20 |
                                 uStack_20f0);
      lStack_21a0 = (lStack_20e0 + (long)plVar17) * 0x29;
      lStack_21d0 = (lStack_20e8 + (long)plVar17) * 0x29;
      bVar25 = 0x28;
      plVar16 = plVar17;
      plStack_2160 = plVar17;
      if ((char)plStack_2218 != '\0') break;
      uVar12 = sVar11 - (int)uStack_21c0;
      uVar22 = uVar12 + 7;
      if (-1 < (int)uVar12) {
        uVar22 = uVar12;
      }
      bVar26 = (byte)(uVar22 >> 3);
      uVar22 = uVar22 >> 3;
      if (bVar26 < (byte)uStack_224c) {
        uVar22 = uStack_224c & 0xff;
      }
      if (0x26 < bVar26) break;
      bVar25 = 0x28;
      uVar12 = 0x28;
      do {
        uVar28 = (ulong)uVar12;
        plVar16 = (long *)(lStack_21a0 + -1 + uVar28);
        if ((((0.0 < afStack_1034[(long)plVar16] || afStack_1034[(long)plVar16] == 0.0) ||
             (plVar16 = (long *)(lStack_21a0 + 0x28 + uVar28),
             0.0 < afStack_1034[(long)plVar16] || afStack_1034[(long)plVar16] == 0.0)) ||
            (plVar16 = (long *)(ulong)((int)lStack_21d0 + -1 + uVar12),
            0.0 < afStack_1034[(long)plVar16] || afStack_1034[(long)plVar16] == 0.0)) ||
           (0.0 < afStack_1034[uVar28 + lStack_21d0 + 0x28] ||
            afStack_1034[uVar28 + lStack_21d0 + 0x28] == 0.0)) break;
        bVar25 = bVar25 - 1;
        uVar12 = (uint)bVar25;
      } while ((uVar22 & 0xff) + 1 < uVar12);
      if (bVar25 != 0) break;
LAB_0528a240:
      plVar16 = plStack_2140;
      plVar17 = (long *)((long)plStack_2160 + 1);
      if (plVar17 == (long *)0x4) goto code_r0x0528a25d;
    }
    lStack_20d0 = (lStack_20e8 + (long)plVar17) * 0x29 + 0x29;
    uStack_20b8 = (ulong)(uint)((int)plVar17 * 4);
    lStack_20d8 = lStack_21d0 + 0x2a;
    uStack_20c8 = (ulong)bVar25;
    uStack_2210 = 0;
    while (param_3 = uStack_2210, plStack_2238 == plStack_2230) {
LAB_052897f7:
      plStack_2178 = (long *)(ulong)((int)uStack_2210 * 8 & 0xffff);
      uVar18 = 0;
      do {
        if (plStack_2238 != plStack_2230) {
          plVar17 = plStack_2238;
          do {
            lVar15 = *plVar17;
            fVar33 = *(float *)(lVar15 + 0x4c) * (float)(int)uVar18;
            fVar30 = (float)*(undefined8 *)(lVar15 + 0x10);
            fVar31 = (float)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x20);
            fVar34 = (float)*(undefined8 *)(lVar15 + 0x20);
            fVar35 = (float)((ulong)*(undefined8 *)(lVar15 + 0x20) >> 0x20);
            *(float *)(lVar15 + 0x30) =
                 fVar30 + fVar33 * ((float)*(undefined8 *)(lVar15 + 0x18) - fVar30);
            *(float *)(lVar15 + 0x34) =
                 fVar31 + fVar33 * ((float)((ulong)*(undefined8 *)(lVar15 + 0x18) >> 0x20) - fVar31)
            ;
            *(float *)(lVar15 + 0x38) =
                 fVar34 + fVar33 * ((float)*(undefined8 *)(lVar15 + 0x28) - fVar34);
            *(float *)(lVar15 + 0x3c) =
                 fVar35 + fVar33 * ((float)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20) - fVar35)
            ;
            plVar17 = plVar17 + 1;
          } while (plVar17 != plStack_2230);
        }
        uVar22 = (int)uVar18 + (int)uStack_20b8;
        plStack_2170 = (long *)(ulong)uVar22;
        iStack_2250 = uVar22 + (int)uVar19;
        lStack_2190 = (long)(int)((int)plStack_21a8[2] * uVar22);
        lVar15 = 0;
        uStack_20b0 = uVar18;
        do {
          if (plStack_2238 != plStack_2230) {
            plVar17 = plStack_2238;
            do {
              lVar20 = *plVar17;
              fVar33 = *(float *)(lVar20 + 0x4c) * (float)((uint)lVar15 & 0xff);
              *(ulong *)(lVar20 + 0x40) =
                   CONCAT44(fVar33 * (*(float *)(lVar20 + 0x3c) - *(float *)(lVar20 + 0x38)) +
                            *(float *)(lVar20 + 0x38),
                            fVar33 * (*(float *)(lVar20 + 0x34) - *(float *)(lVar20 + 0x30)) +
                            *(float *)(lVar20 + 0x30));
              plVar17 = plVar17 + 1;
            } while (plVar17 != plStack_2230);
          }
          lStack_21b0 = lStack_20a0 + lVar15;
          uStack_2258 = CONCAT44(uStack_2258._4_4_,(int)lStack_21b0 + (int)param_1);
          iVar24 = 0;
          lStack_2198 = lVar15;
          do {
            if (plStack_2238 != plStack_2230) {
              plVar17 = plStack_2238;
              do {
                lVar15 = *plVar17;
                *(float *)(lVar15 + 0x48) =
                     (*(float *)(lVar15 + 0x44) - *(float *)(lVar15 + 0x40)) *
                     *(float *)(lVar15 + 0x50) * (float)iVar24 + *(float *)(lVar15 + 0x40);
                plVar17 = plVar17 + 1;
              } while (plVar17 != plStack_2230);
            }
            iVar13 = (int)plStack_2178 + iVar24;
            uVar22 = ((int)plStack_21a8[3] * (int)lStack_21b0 + (int)plStack_2170) *
                     *(int *)((long)plStack_21a8 + 0x14) + iVar13;
            param_3 = (ulong)uVar22;
            if (uVar22 < (uint)plStack_2180) {
              iVar13 = (short)iVar13 + (int)uStack_21c0;
              uStack_2258 = CONCAT44(iVar13,(int)uStack_2258);
              fVar30 = fStack_2050 * _DAT_01198cf8;
              fVar33 = fVar30;
              if (fVar30 <= _DAT_011985d4) {
                fVar33 = _DAT_011985d4;
              }
              fVar33 = (float)(~-(uint)(_DAT_011983f0 < fVar30) & (uint)fVar33 |
                              -(uint)(_DAT_011983f0 < fVar30) & (uint)_DAT_011983f0);
              fVar33 = fVar33 * _DAT_011986e0 + (fVar33 * fVar33 * fVar33) / _DAT_01198350;
              _auStack_2248 = ZEXT416((uint)fVar33);
              if ((((short)plVar14[1] <= iVar13) && (0.0 < fVar33)) &&
                 (0.0 < *(float *)(plVar14 + 0xb) || *(float *)(plVar14 + 0xb) == 0.0)) {
                fVar30 = (*(float *)(plVar14 + 0x16) + _DAT_011983f0) * _DAT_011986e0;
                auStack_2248._4_4_ = _DAT_01198844;
                if ((0.0 <= fVar30) && (auStack_2248._4_4_ = _DAT_01198a9c, fVar30 <= _DAT_011983f0)
                   ) {
                  auStack_2248._4_4_ = fVar30 * _DAT_01198844 + _DAT_01198844;
                }
                fVar30 = (float)((uint)(*(float *)(plVar14 + 0x21) * _DAT_014e57e0) & _DAT_014e7ba0)
                         - (float)auStack_2248._4_4_;
                auStack_2248._4_4_ =
                     (float)((uint)(*(float *)(plVar14 + 0x2c) * _UNK_014e57e4) & _UNK_014e7ba4) -
                     (float)auStack_2248._4_4_;
                auStack_2248._0_4_ = auStack_2248._4_4_;
                if ((float)auStack_2248._4_4_ <= fVar30) {
                  auStack_2248._0_4_ = fVar30;
                }
                if (fVar33 <= (float)auStack_2248._0_4_) {
                  auStack_2248._0_4_ = fVar33;
                }
                fStack_2240 = (float)auStack_2248._4_4_;
                fStack_223c = (float)auStack_2248._4_4_;
              }
              if ((char)plStack_2218 == '\0') {
              }
              else {
                dVar4 = (double)func_0x0d2f06a0(&plStack_2208,uStack_2258,iStack_2250);
                auStack_2248._0_4_ = (float)(dVar4 + (double)(float)auStack_2248._0_4_);
                uVar32 = func_0x0d2ee730(&plStack_2038);
                auStack_2248._0_4_ = (float)uVar32 + (float)auStack_2248._0_4_;
                auStack_2248._4_4_ = (int)((ulong)uVar32 >> 0x20);
                fStack_2240 = (float)extraout_XMM0_Dc;
                fStack_223c = (float)extraout_XMM0_Dd;
              }
              plVar16 = plStack_2148;
              if ((float)auStack_2248._0_4_ <= 0.0) {
                func_0x05258c60(lStack_2188);
                if ((float)auStack_2248._0_4_ + *(float *)(lStack_2188 + 0x20) <= _DAT_011983fc)
                goto LAB_05289d01;
LAB_05289bcb:
                uVar18 = (long)(uStack_2258 * 0x2fc20f00000000 ^ uStack_2258) >> 0x20 ^
                         (long)iStack_2250 * 0x6ebfff5;
                uVar18 = (long)((uVar18 * 0x285b825 + 0xb) * uVar18) >> 0x10 ^
                         *(ulong *)(uStack_21c8 + 0xc68);
                lVar15 = *(long *)(uStack_21c8 + 0xc70);
                bVar29 = uVar18 == 0;
                if (bVar29 && lVar15 == 0) {
                  uVar18 = 0x9e3779b97f4a7c15;
                }
                if (bVar29 && lVar15 == 0) {
                  lVar15 = 0x6a09e667f3bcc909;
                }
                uVar12 = (uint)(uStack_2258 >> 0x20);
                param_1 = *(ulong *)(uStack_21c8 + 0xc78);
                if (((-1 < (long)uStack_2258) && (param_1 = uStack_2150, uVar12 < 9)) &&
                   (param_1 = *(ulong *)(uStack_21c8 + 0xc78),
                   (float)(~-(uint)(_DAT_011983f0 < (float)(int)uVar12 * _DAT_01198a50) &
                          (uint)(_DAT_011983f0 - (float)(int)uVar12 * _DAT_01198a50)) <=
                   (float)(uint)(((lVar15 + uVar18) * 0x20000 | lVar15 + uVar18 >> 0x2f) + uVar18 >>
                                0x28) * _DAT_01198a44)) {
                  param_1 = uStack_2150;
                }
                fVar33 = (float)(int)uVar12;
                lVar15 = (ulong)(*(float *)(lStack_2220 + 0x3058) <= 0.0) * 0x20;
                fVar30 = fVar33 - (float)*(int *)(lVar15 + 0x3138 + lStack_2220);
                cVar10 = '\0';
                if ((0.0 <= fVar30) &&
                   (fVar31 = (float)*(int *)(lVar15 + 0x313c + lStack_2220) - fVar33, cVar10 = '\0',
                   0.0 <= fVar31)) {
                  if (fVar30 <= fVar31) {
                    fVar31 = fVar30;
                  }
                  fVar30 = (float)((uint)*(float *)(lStack_2220 + 0x3058) & _DAT_014e7ba0);
                  if ((float)(~-(uint)(_DAT_011983f0 < fVar31 / _DAT_011987c0) &
                             (uint)((fVar31 / _DAT_011987c0) * _DAT_011987c4 + _DAT_01198728)) +
                      fVar30 < _DAT_01198c0c) {
LAB_0528a071:
                    cVar10 = '\0';
                  }
                  else {
                    lVar20 = *(long *)(lStack_2220 + 0x3118);
                    uVar18 = (long)(CONCAT44((int)fVar33,(int)(float)(int)uStack_2258) *
                                    0x2fc20f00000000 ^ (ulong)(uint)(int)fVar33 << 0x20) >> 0x20 ^
                             (long)(int)(float)iStack_2250 * 0x6ebfff5;
                    uVar19 = (long)((uVar18 * 0x285b825 + 0xb) * uVar18) >> 0x10 ^
                             *(ulong *)(lVar20 + 0xe8);
                    uVar18 = *(ulong *)(lVar20 + 0xf0);
                    if (uVar19 == 0 && uVar18 == 0) {
                      uVar19 = 0x9e3779b97f4a7c15;
                      uVar18 = 0x6a09e667f3bcc909;
                    }
                    if ((float)(uint)(((uVar19 + uVar18) * 0x20000 | uVar19 + uVar18 >> 0x2f) +
                                      uVar19 >> 0x28) * _DAT_01198a44 <= _DAT_01198c10) {
                      fVar33 = (float)(*(uint *)(lStack_2220 + 0x30b0) & _DAT_014e7ba0) +
                               _DAT_014e8750;
                      fVar31 = (float)(*(uint *)(lStack_2220 + 0x3108) & _UNK_014e7ba4) +
                               _UNK_014e8754;
                      if (fVar33 <= fVar31) {
                        fVar33 = fVar31;
                      }
                      if (fVar33 < 0.0) {
                        uVar18 = uVar18 ^ uVar19;
                        uVar28 = uVar18 << 0x15 ^ (uVar19 << 0x31 | uVar19 >> 0xf) ^ uVar18;
                        uVar19 = uVar18 << 0x1c | uVar18 >> 0x24;
                        uVar18 = uVar28 + uVar19;
                        auStack_2248._0_4_ =
                             (float)(uint)((uVar18 * 0x20000 | uVar18 >> 0x2f) + uVar28 >> 0x28) *
                             _DAT_01198a44;
                        fVar33 = (fVar30 + _DAT_01198450) / _DAT_01198414;
                        fStack_2168 = _DAT_01198a9c;
                        if ((0.0 <= fVar33) &&
                           (fStack_2168 = _DAT_01198aec, fVar33 <= _DAT_011983f0)) {
                          fStack_2168 = fVar33 * _DAT_01198414 + _DAT_01198a9c;
                        }
                        fVar33 = (float)func_0x0d3414e0(lVar20 + 0xa8);
                        lVar20 = 0x10;
                        if (((float)auStack_2248._0_4_ < fStack_2168) && (_DAT_011985d4 <= fVar33))
                        {
                          fVar30 = _DAT_011983f0;
                          if (fVar33 <= _DAT_011983f0) {
                            fVar30 = fVar33;
                          }
                          if (_DAT_01198b44 < fVar30) {
                            uVar19 = uVar19 ^ uVar28;
                            uVar28 = uVar19 << 0x15 ^ (uVar28 << 0x31 | uVar28 >> 0xf) ^ uVar19;
                            uVar18 = (uVar19 << 0x1c | uVar19 >> 0x24) + uVar28;
                            lVar20 = (ulong)((float)(uint)((uVar18 * 0x20000 | uVar18 >> 0x2f) +
                                                           uVar28 >> 0x28) * _DAT_01198a44 <
                                            _DAT_01198b4c) << 3;
                          }
                        }
                        param_1 = *(ulong *)(lStack_2220 + lVar15 + 0x3120 + lVar20);
                      }
                    }
LAB_0528a135:
                    cVar10 = '\0';
                  }
                }
              }
              else {
                if (_DAT_011983fc < (float)auStack_2248._0_4_) goto LAB_05289bcb;
LAB_05289d01:
                if (*(int *)(lStack_2188 + 0x1c) <= uStack_2258._4_4_) {
                  if ((_DAT_0f6ffb10 == (long *)0x0) &&
                     (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                               &UNK_013a2901), cVar10 != '\0')) {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                  param_1 = *(ulong *)(*_DAT_0f6ffb10 + 0x200);
                  goto LAB_0528a071;
                }
                bVar29 = *(char *)(lStack_2188 + 0x24) != '\0';
                if (plStack_21b8 == (long *)0x0) {
                  cVar10 = '\0';
                  param_1 = *(ulong *)(lStack_2188 + 0x58 + (ulong)bVar29 * 8);
                  cVar2 = '\0';
                  if (plVar16 == (long *)0x0) goto LAB_0528a140;
LAB_0528a08b:
                  cVar10 = cVar2;
                  lVar15 = ((long)((int)uStack_2258 >> 2) - (long)(int)plVar16[3]) * 0x660 +
                           *plVar16;
                  lVar20 = ((long)(iStack_2250 >> 2) - (long)*(int *)((long)plVar16 + 0x1c)) * 0x198
                  ;
                  if (_DAT_0119845c < *(float *)(lVar20 + lVar15)) goto LAB_0528a140;
                  iVar23 = uStack_2258._4_4_ - (short)plVar16[4];
                  iVar27 = iVar23 >> 0x1f;
                  iVar23 = iVar27 - iVar23;
                  iVar13 = iVar23 + 7;
                  if (-1 < iVar23) {
                    iVar13 = iVar23;
                  }
                  uVar12 = iVar27 - (iVar13 >> 3);
                  if ((((0x28 < uVar12) ||
                       (cVar2 = *(char *)(lVar15 + lVar20 + 0x16c + (ulong)uVar12), cVar2 == '\0'))
                      || (cVar2 != '\x01')) ||
                     (**(char **)(*(long *)(param_1 + 0x68) + 0x20) != '\x05')) goto LAB_0528a140;
                  param_1 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
                  goto LAB_0528a135;
                }
                cVar10 = *(char *)(lStack_2188 + 0x25);
                param_1 = *(ulong *)(lStack_2188 + 0x58 + (ulong)bVar29 * 8);
                cVar2 = cVar10;
                if (plVar16 != (long *)0x0) goto LAB_0528a08b;
              }
LAB_0528a140:
              *(ulong *)(*plStack_21a8 + (ulong)uVar22 * 8) = param_1;
              plVar16 = plVar14;
              if ((plStack_21b8 != (long *)0x0) && (cVar10 != '\0')) {
                uStack_2164 = 1;
                plVar17 = *(long **)(lStack_2158 + 0x20);
                if (plVar17 == (long *)0x0) goto LAB_0528a337;
                (**(code **)(*plVar17 + 0x30))(plVar17,&uStack_2258,param_1,&uStack_2164);
              }
              if (param_8 != (long *)0x0) {
                if ((_DAT_0f6ffb10 == (long *)0x0) &&
                   (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                             &UNK_013a2901), cVar10 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if (param_1 != *(ulong *)(*_DAT_0f6ffb10 + 0x200)) {
                  lVar15 = lStack_21b0 * 2 + *param_8;
                  sVar21 = (short)(uStack_2258 >> 0x20) + 1;
                  sVar11 = *(short *)(lVar15 + lStack_2190 * 2);
                  if (sVar21 < sVar11) {
                    sVar21 = sVar11;
                  }
                  *(short *)(lVar15 + lStack_2190 * 2) = sVar21;
                }
              }
            }
            iVar24 = iVar24 + 1;
          } while (iVar24 != 8);
          lVar15 = lStack_2198 + 1;
          param_1 = uStack_20a8;
        } while (lVar15 != 4);
        uVar22 = (int)uStack_20b0 + 1;
        uVar18 = (ulong)uVar22;
        uVar19 = uStack_20c0;
      } while (uVar22 != 4);
      uStack_2210 = uStack_2210 + 1;
      uVar18 = uStack_21c8;
      if (uStack_2210 == uStack_20c8) goto LAB_0528a240;
    }
    plVar17 = plStack_2238;
    while( true ) {
      puVar3 = (ulong *)*plVar17;
      uVar18 = *puVar3;
      if (uVar18 <= lStack_21a0 + uStack_2210) break;
      uVar28 = puVar3[1];
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(uVar28 + (lStack_21a0 + uStack_2210) * 4);
      if (uVar18 <= lStack_21d0 + uStack_2210) break;
      *(undefined4 *)((long)puVar3 + 0x14) =
           *(undefined4 *)(uVar28 + (lStack_21d0 + uStack_2210) * 4);
      plVar16 = (long *)(uVar28 + lStack_21a0 * 4);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)plVar16 + uStack_2210 * 4 + 0xa4);
      if (uVar18 <= lStack_20d0 + uStack_2210) break;
      *(undefined4 *)((long)puVar3 + 0x1c) =
           *(undefined4 *)(uVar28 + (lStack_20d0 + uStack_2210) * 4);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((long)plVar16 + uStack_2210 * 4 + 4);
      *(undefined4 *)((long)puVar3 + 0x24) =
           *(undefined4 *)(uVar28 + lStack_21d0 * 4 + 4 + uStack_2210 * 4);
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)((long)plVar16 + uStack_2210 * 4 + 0xa8);
      if (uVar18 <= lStack_20d8 + uStack_2210) break;
      *(undefined4 *)((long)puVar3 + 0x2c) =
           *(undefined4 *)(uVar28 + (lStack_20d8 + uStack_2210) * 4);
      plVar17 = plVar17 + 1;
      if (plVar17 == plStack_2230) goto LAB_052897f7;
    }
    func_0x04890760();
LAB_0528a337:
    FUN_04891200();
LAB_0528a33c:
    func_0x0eec74c0(0x4180);
  } while( true );
code_r0x0528a25d:
  lVar15 = lStack_20f8 + 1;
  if (lVar15 == 4) {
    if (plStack_2140 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_2140 + 1;
      lVar15 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_2140 + 0x10))(plStack_2140);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0d2ecea0(&plStack_2038);
    if (lStack_21f0 != 0) {
      lStack_21e8 = lStack_21f0;
      func_0x0412a280(lStack_21f0,lStack_21e0 - lStack_21f0);
    }
    if (plStack_2208 != (long *)0x0) {
      plStack_2200 = plStack_2208;
      func_0x0412a280(plStack_2208,lStack_21f8 - (long)plStack_2208);
    }
    if (plStack_2238 != (long *)0x0) {
      func_0x0412a280(plStack_2238,(long)plStack_2228 - (long)plStack_2238);
    }
    func_0x0412a280(lStack_2220,0x3160);
    func_0x0412a280(plVar14,0x4180);
    return;
  }
  goto LAB_052894f0;
}



/* ---- referenced strings ----
 * 0x1198c10  333?
 */
