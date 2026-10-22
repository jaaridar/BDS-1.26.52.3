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
    func_0x0eee2dd0(*param_8,0);
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
    func_0x0eee2dd0(plStack_2218,0,0x4010);
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
    func_0x0eee2dd0(afStack_1034,0,0x1004);
    lStack_2220 = lVar15;
    func_0x05287930(&plStack_2038,uVar18,*(undefined4 *)auStack_2248,
                    *(undefined4 *)((long)auStack_2248 + 4),lStack_21b0,plVar14,lVar15);
    func_0x0eee2f00(afStack_1034,&plStack_2038,0x1004);
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
      FUN_0d2ecfa0(&plStack_2038,&plStack_2148);
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
    func_0x04891200();
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

/* ---- assembly ---- */
/* 05288b10 */  PUSH RBP
/* 05288b11 */  PUSH R15
/* 05288b13 */  PUSH R14
/* 05288b15 */  PUSH R13
/* 05288b17 */  PUSH R12
/* 05288b19 */  PUSH RBX
/* 05288b1a */  SUB RSP,0x2238
/* 05288b21 */  MOV qword ptr [RSP + 0x110],R9
/* 05288b29 */  MOV qword ptr [RSP + 0xe0],R8
/* 05288b31 */  MOV qword ptr [RSP + 0xb8],RCX
/* 05288b39 */  MOV R14,RDX
/* 05288b3c */  MOV qword ptr [RSP + 0xc0],RSI
/* 05288b44 */  MOV R15,RDI
/* 05288b47 */  MOV RCX,qword ptr [RDI + 0x28]
/* 05288b4b */  MOVSX EAX,word ptr [RCX + 0xa8]
/* 05288b52 */  MOV qword ptr [RSP + 0xa8],RAX
/* 05288b5a */  MOV qword ptr [RSP + 0xd0],RCX
/* 05288b62 */  MOVZX EAX,word ptr [RCX + 0xac]
/* 05288b69 */  MOV dword ptr [RSP + 0x1c],EAX
/* 05288b6d */  LEA RDI,[0xf6ff9e0]
/* 05288b74 */  LEA RSI,[0xf71bd88]
/* 05288b7b */  MOV EDX,0x1
/* 05288b80 */  CALL 0x0cc41df0
/* 05288b85 */  MOV qword ptr [RSP + 0x118],RAX
/* 05288b8d */  CMP qword ptr [RSP + 0x2278],0x0
/* 05288b96 */  JZ 0x05288bb6
/* 05288b98 */  MOV RAX,qword ptr [RSP + 0x2278]
/* 05288ba0 */  MOV RDI,qword ptr [RAX]
/* 05288ba3 */  MOV RDX,qword ptr [RAX + 0x8]
/* 05288ba7 */  SUB RDX,RDI
/* 05288baa */  TEST RDX,RDX
/* 05288bad */  JLE 0x05288bb6
/* 05288baf */  XOR ESI,ESI
/* 05288bb1 */  CALL 0x0eee2dd0
/* 05288bb6 */  LEA RBX,[R15 + 0x6e0]
/* 05288bbd */  MOV RAX,qword ptr [0x0f5463b0]
/* 05288bc4 */  LEA RDI,[0xf5463b0]
/* 05288bcb */  MOV ESI,0x4180
/* 05288bd0 */  CALL qword ptr [RAX + 0x10]
/* 05288bd3 */  MOV R13,RAX
/* 05288bd6 */  TEST RAX,RAX
/* 05288bd9 */  JZ 0x0528a33c
/* 05288bdf */  MOV qword ptr [R13],RBX
/* 05288be3 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 05288beb */  ADD EAX,0x4
/* 05288bee */  MOV word ptr [R13 + 0x8],AX
/* 05288bf3 */  LEA RAX,[R13 + 0x10]
/* 05288bf7 */  MOV qword ptr [RSP + 0xf8],RAX
/* 05288bff */  XORPS XMM0,XMM0
/* 05288c02 */  MOVUPS xmmword ptr [R13 + 0x10],XMM0
/* 05288c07 */  MOVUPS xmmword ptr [R13 + 0x20],XMM0
/* 05288c0c */  MOVUPS xmmword ptr [R13 + 0x30],XMM0
/* 05288c11 */  MOVUPS xmmword ptr [R13 + 0x40],XMM0
/* 05288c16 */  MOVUPS xmmword ptr [R13 + 0x50],XMM0
/* 05288c1b */  MOV dword ptr [R13 + 0x60],0x0
/* 05288c23 */  LEA RAX,[R13 + 0x68]
/* 05288c27 */  MOV qword ptr [RSP + 0xf0],RAX
/* 05288c2f */  MOVUPS xmmword ptr [R13 + 0x68],XMM0
/* 05288c34 */  MOVUPS xmmword ptr [R13 + 0x78],XMM0
/* 05288c39 */  MOVUPS xmmword ptr [R13 + 0x88],XMM0
/* 05288c41 */  MOVUPS xmmword ptr [R13 + 0x98],XMM0
/* 05288c49 */  MOVUPS xmmword ptr [R13 + 0xa8],XMM0
/* 05288c51 */  MOV dword ptr [R13 + 0xb8],0x0
/* 05288c5c */  LEA RAX,[R13 + 0xc0]
/* 05288c63 */  MOV qword ptr [RSP + 0xe8],RAX
/* 05288c6b */  MOVUPS xmmword ptr [R13 + 0xc0],XMM0
/* 05288c73 */  MOVUPS xmmword ptr [R13 + 0xd0],XMM0
/* 05288c7b */  MOVUPS xmmword ptr [R13 + 0xe0],XMM0
/* 05288c83 */  MOVUPS xmmword ptr [R13 + 0xf0],XMM0
/* 05288c8b */  MOVUPS xmmword ptr [R13 + 0x100],XMM0
/* 05288c93 */  MOV dword ptr [R13 + 0x110],0x0
/* 05288c9e */  LEA RAX,[R13 + 0x118]
/* 05288ca5 */  MOV qword ptr [RSP + 0xb0],RAX
/* 05288cad */  MOVUPS xmmword ptr [R13 + 0x158],XMM0
/* 05288cb5 */  MOVUPS xmmword ptr [R13 + 0x148],XMM0
/* 05288cbd */  MOVUPS xmmword ptr [R13 + 0x138],XMM0
/* 05288cc5 */  MOVUPS xmmword ptr [R13 + 0x128],XMM0
/* 05288ccd */  MOVUPS xmmword ptr [R13 + 0x118],XMM0
/* 05288cd5 */  MOV dword ptr [R13 + 0x168],0x0
/* 05288ce0 */  LEA RDI,[R13 + 0x170]
/* 05288ce7 */  MOV EDX,0x4010
/* 05288cec */  MOV qword ptr [RSP + 0x50],RDI
/* 05288cf1 */  XOR ESI,ESI
/* 05288cf3 */  CALL 0x0eee2dd0
/* 05288cf8 */  MOV EAX,0x78
/* 05288cfd */  MOVAPS XMM0,xmmword ptr [0x014ea7c0]
/* 05288d04 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 05288d10 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
/* 05288d16 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
/* 05288d1c */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
/* 05288d22 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
/* 05288d28 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
/* 05288d2e */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
/* 05288d34 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
/* 05288d3a */  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
/* 05288d40 */  ADD RAX,0x20
/* 05288d44 */  CMP RAX,0x478
/* 05288d4a */  JNZ 0x05288d10
/* 05288d4c */  MOV dword ptr [R13 + 0x1170],0x3f800000
/* 05288d57 */  LEA RAX,[R13 + 0x1174]
/* 05288d5e */  MOV qword ptr [RSP + 0xd8],RAX
/* 05288d66 */  MOV EAX,0x479
/* 05288d6b */  NOP dword ptr [RAX + RAX*0x1]
/* 05288d70 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
/* 05288d76 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
/* 05288d7c */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
/* 05288d82 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
/* 05288d88 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
/* 05288d8e */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
/* 05288d94 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
/* 05288d9a */  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
/* 05288da0 */  ADD RAX,0x20
/* 05288da4 */  CMP RAX,0x879
/* 05288daa */  JNZ 0x05288d70
/* 05288dac */  MOV qword ptr [RSP + 0x20],R14
/* 05288db1 */  MOV qword ptr [RSP + 0xa0],R15
/* 05288db9 */  MOV dword ptr [R13 + 0x2174],0x3f800000
/* 05288dc4 */  LEA R12,[R13 + 0x2178]
/* 05288dcb */  MOV EAX,0x87a
/* 05288dd0 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
/* 05288dd6 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
/* 05288ddc */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
/* 05288de2 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
/* 05288de8 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
/* 05288dee */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
/* 05288df4 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
/* 05288dfa */  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
/* 05288e00 */  ADD RAX,0x20
/* 05288e04 */  CMP RAX,0xc7a
/* 05288e0a */  JNZ 0x05288dd0
/* 05288e0c */  MOV dword ptr [R13 + 0x3178],0x3f800000
/* 05288e17 */  MOV RBP,R13
/* 05288e1a */  ADD RBP,0x317c
/* 05288e21 */  MOV EAX,0xc7b
/* 05288e26 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 05288e30 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
/* 05288e36 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
/* 05288e3c */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
/* 05288e42 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
/* 05288e48 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
/* 05288e4e */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
/* 05288e54 */  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
/* 05288e5a */  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
/* 05288e60 */  ADD RAX,0x20
/* 05288e64 */  CMP RAX,0x107b
/* 05288e6a */  JNZ 0x05288e30
/* 05288e6c */  MOV dword ptr [R13 + 0x417c],0x3f800000
/* 05288e77 */  LEA RDI,[0xf5463b0]
/* 05288e7e */  MOV RAX,qword ptr [0x0f5463b0]
/* 05288e85 */  MOV ESI,0x3160
/* 05288e8a */  CALL qword ptr [RAX + 0x10]
/* 05288e8d */  MOV RBX,RAX
/* 05288e90 */  TEST RAX,RAX
/* 05288e93 */  JZ 0x0528a34d
/* 05288e99 */  MOV R14,qword ptr [RSP + 0xa0]
/* 05288ea1 */  LEA RSI,[R14 + 0x7c0]
/* 05288ea8 */  MOV RDI,RBX
/* 05288eab */  CALL 0x05268e90
/* 05288eb0 */  XORPS XMM0,XMM0
/* 05288eb3 */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 05288ebb */  MOVAPS xmmword ptr [RSP + 0x200],XMM0
/* 05288ec3 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
/* 05288ecb */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
/* 05288ed3 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 05288edb */  MOV dword ptr [RSP + 0x220],0x0
/* 05288ee6 */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 05288eeb */  MOV qword ptr [RSP + 0x40],0x0
/* 05288ef4 */  LEA R15,[RSP + 0x1234]
/* 05288efc */  MOV EDX,0x1004
/* 05288f01 */  MOV RDI,R15
/* 05288f04 */  XOR ESI,ESI
/* 05288f06 */  CALL 0x0eee2dd0
/* 05288f0b */  MOV RAX,qword ptr [RSP + 0x20]
/* 05288f10 */  MOV EDX,dword ptr [RAX]
/* 05288f12 */  MOV ECX,dword ptr [RAX + 0x4]
/* 05288f15 */  MOV qword ptr [RSP + 0x48],RBX
/* 05288f1a */  MOV qword ptr [RSP],RBX
/* 05288f1e */  LEA RDI,[RSP + 0x230]
/* 05288f26 */  MOV RSI,R14
/* 05288f29 */  MOV R8,qword ptr [RSP + 0xb8]
/* 05288f31 */  MOV R9,R13
/* 05288f34 */  CALL 0x05287930
/* 05288f39 */  LEA RSI,[RSP + 0x230]
/* 05288f41 */  MOV EDX,0x1004
/* 05288f46 */  MOV RDI,R15
/* 05288f49 */  CALL 0x0eee2f00
/* 05288f4e */  XORPS XMM0,XMM0
/* 05288f51 */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
/* 05288f59 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
/* 05288f61 */  MOVAPS xmmword ptr [RSP + 0x200],XMM0
/* 05288f69 */  MOVUPS xmmword ptr [RSP + 0x20c],XMM0
/* 05288f71 */  MOV qword ptr [RSP + 0x1d0],0x401
/* 05288f7d */  MOV qword ptr [RSP + 0x1d8],R15
/* 05288f85 */  MOVSD XMM0,qword ptr [0x014e9c40]
/* 05288f8d */  MOVSD qword ptr [RSP + 0x21c],XMM0
/* 05288f96 */  LEA RDI,[0xf5463b0]
/* 05288f9d */  MOV RAX,qword ptr [0x0f5463b0]
/* 05288fa4 */  MOV ESI,0x8
/* 05288fa9 */  CALL qword ptr [RAX + 0x10]
/* 05288fac */  MOV RBX,RAX
/* 05288faf */  TEST RAX,RAX
/* 05288fb2 */  JZ 0x0528a35e
/* 05288fb8 */  MOV qword ptr [RSP + 0x30],RBX
/* 05288fbd */  MOV RAX,RBX
/* 05288fc0 */  ADD RAX,0x8
/* 05288fc4 */  MOV qword ptr [RSP + 0x40],RAX
/* 05288fc9 */  LEA RAX,[RSP + 0x1d0]
/* 05288fd1 */  MOV qword ptr [RBX],RAX
/* 05288fd4 */  LEA RDI,[0xf5463b0]
/* 05288fdb */  MOV RAX,qword ptr [0x0f5463b0]
/* 05288fe2 */  MOV ESI,0x40
/* 05288fe7 */  CALL qword ptr [RAX + 0x10]
/* 05288fea */  MOV R15,RAX
/* 05288fed */  TEST RAX,RAX
/* 05288ff0 */  JZ 0x0528a36f
/* 05288ff6 */  LEA R14,[R15 + 0x8]
/* 05288ffa */  MOV RAX,R15
/* 05288ffd */  ADD RAX,0x40
/* 05289001 */  MOV RCX,qword ptr [RBX]
/* 05289004 */  MOV qword ptr [R15],RCX
/* 05289007 */  MOV qword ptr [RSP + 0x30],R15
/* 0528900c */  MOV qword ptr [RSP + 0x38],R14
/* 05289011 */  MOV qword ptr [RSP + 0x40],RAX
/* 05289016 */  MOV ESI,0x8
/* 0528901b */  MOV RDI,RBX
/* 0528901e */  CALL 0x0412a280
/* 05289023 */  MOV qword ptr [R13 + 0x10],0x401
/* 0528902b */  MOV RAX,qword ptr [RSP + 0x50]
/* 05289030 */  MOV qword ptr [R13 + 0x18],RAX
/* 05289034 */  XORPS XMM1,XMM1
/* 05289037 */  MOVUPS xmmword ptr [R13 + 0x20],XMM1
/* 0528903c */  MOVUPS xmmword ptr [R13 + 0x30],XMM1
/* 05289041 */  MOVUPS xmmword ptr [R13 + 0x40],XMM1
/* 05289046 */  MOVUPS xmmword ptr [R13 + 0x4c],XMM1
/* 0528904b */  MOVSD XMM0,qword ptr [0x014e9c40]
/* 05289053 */  MOVSD qword ptr [R13 + 0x5c],XMM0
/* 05289059 */  MOV qword ptr [R13 + 0x68],0x401
/* 05289061 */  MOV RAX,qword ptr [RSP + 0xd8]
/* 05289069 */  MOV qword ptr [R13 + 0x70],RAX
/* 0528906d */  MOVUPS xmmword ptr [R13 + 0x78],XMM1
/* 05289072 */  MOVUPS xmmword ptr [R13 + 0x88],XMM1
/* 0528907a */  MOVUPS xmmword ptr [R13 + 0x98],XMM1
/* 05289082 */  MOVUPS xmmword ptr [R13 + 0xa4],XMM1
/* 0528908a */  MOVSD qword ptr [R13 + 0xb4],XMM0
/* 05289093 */  MOV qword ptr [R13 + 0xc0],0x401
/* 0528909e */  MOV qword ptr [R13 + 0xc8],R12
/* 052890a5 */  MOVUPS xmmword ptr [R13 + 0xd0],XMM1
/* 052890ad */  MOVUPS xmmword ptr [R13 + 0xe0],XMM1
/* 052890b5 */  MOVUPS xmmword ptr [R13 + 0xf0],XMM1
/* 052890bd */  MOVUPS xmmword ptr [R13 + 0xfc],XMM1
/* 052890c5 */  MOVSD qword ptr [R13 + 0x10c],XMM0
/* 052890ce */  MOV qword ptr [R13 + 0x118],0x401
/* 052890d9 */  MOV qword ptr [R13 + 0x120],RBP
/* 052890e0 */  MOVUPS xmmword ptr [R13 + 0x128],XMM1
/* 052890e8 */  MOVUPS xmmword ptr [R13 + 0x138],XMM1
/* 052890f0 */  MOVUPS xmmword ptr [R13 + 0x148],XMM1
/* 052890f8 */  MOVUPS xmmword ptr [R13 + 0x154],XMM1
/* 05289100 */  MOVSD qword ptr [R13 + 0x164],XMM0
/* 05289109 */  MOV RAX,qword ptr [RSP + 0xf8]
/* 05289111 */  MOV qword ptr [RSP + 0x230],RAX
/* 05289119 */  MOV RAX,qword ptr [RSP + 0xf0]
/* 05289121 */  MOV qword ptr [RSP + 0x238],RAX
/* 05289129 */  MOV RAX,qword ptr [RSP + 0xe8]
/* 05289131 */  MOV qword ptr [RSP + 0x240],RAX
/* 05289139 */  MOV RAX,qword ptr [RSP + 0xb0]
/* 05289141 */  MOV qword ptr [RSP + 0x248],RAX
/* 05289149 */  LEA RCX,[RSP + 0x250]
/* 05289151 */  LEA RDI,[RSP + 0x30]
/* 05289156 */  LEA RDX,[RSP + 0x230]
/* 0528915e */  MOV R8D,0x4
/* 05289164 */  MOV RSI,R14
/* 05289167 */  CALL 0x052bd680
/* 0528916c */  MOV RDI,qword ptr [RSP + 0x48]
/* 05289171 */  LEA RAX,[RDI + 0x3010]
/* 05289178 */  MOV qword ptr [RDI + 0x3010],0x401
/* 05289183 */  MOV qword ptr [RDI + 0x3018],RDI
/* 0528918a */  XORPS XMM0,XMM0
/* 0528918d */  MOVUPS xmmword ptr [RDI + 0x3020],XMM0
/* 05289194 */  MOVUPS xmmword ptr [RDI + 0x3030],XMM0
/* 0528919b */  MOVUPS xmmword ptr [RDI + 0x3040],XMM0
/* 052891a2 */  MOVUPS xmmword ptr [RDI + 0x304c],XMM0
/* 052891a9 */  MOVSD XMM1,qword ptr [0x014e9c40]
/* 052891b1 */  MOVSD qword ptr [RDI + 0x305c],XMM1
/* 052891b9 */  LEA RCX,[RDI + 0x1004]
/* 052891c0 */  LEA RDX,[RDI + 0x3068]
/* 052891c7 */  MOV qword ptr [RDI + 0x3068],0x401
/* 052891d2 */  MOV qword ptr [RDI + 0x3070],RCX
/* 052891d9 */  MOVUPS xmmword ptr [RDI + 0x3078],XMM0
/* 052891e0 */  MOVUPS xmmword ptr [RDI + 0x3088],XMM0
/* 052891e7 */  MOVUPS xmmword ptr [RDI + 0x3098],XMM0
/* 052891ee */  MOVUPS xmmword ptr [RDI + 0x30a4],XMM0
/* 052891f5 */  MOVSD qword ptr [RDI + 0x30b4],XMM1
/* 052891fd */  LEA RCX,[RDI + 0x2008]
/* 05289204 */  LEA RSI,[RDI + 0x30c0]
/* 0528920b */  MOV qword ptr [RDI + 0x30c0],0x401
/* 05289216 */  MOV qword ptr [RDI + 0x30c8],RCX
/* 0528921d */  MOVUPS xmmword ptr [RDI + 0x30d0],XMM0
/* 05289224 */  MOVUPS xmmword ptr [RDI + 0x30e0],XMM0
/* 0528922b */  MOVUPS xmmword ptr [RDI + 0x30f0],XMM0
/* 05289232 */  MOVUPS xmmword ptr [RDI + 0x30fc],XMM0
/* 05289239 */  MOVSD qword ptr [RDI + 0x310c],XMM1
/* 05289241 */  MOV qword ptr [RSP + 0x120],RAX
/* 05289249 */  MOV qword ptr [RSP + 0x128],RDX
/* 05289251 */  MOV qword ptr [RSP + 0x130],RSI
/* 05289259 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0528925e */  LEA RCX,[RSP + 0x138]
/* 05289266 */  LEA RDI,[RSP + 0x30]
/* 0528926b */  LEA RDX,[RSP + 0x120]
/* 05289273 */  MOV R8D,0x3
/* 05289279 */  CALL 0x052bd680
/* 0528927e */  MOV R14,qword ptr [RSP + 0xa0]
/* 05289286 */  MOV RBX,qword ptr [RSP + 0x20]
/* 0528928b */  XORPS XMM0,XMM0
/* 0528928e */  MOVAPS xmmword ptr [RSP + 0x80],XMM0
/* 05289296 */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0528929b */  MOVAPS xmmword ptr [RSP + 0x60],XMM0
/* 052892a0 */  MOVAPS xmmword ptr [RSP + 0x260],XMM0
/* 052892a8 */  MOVAPS xmmword ptr [RSP + 0x250],XMM0
/* 052892b0 */  MOVAPS xmmword ptr [RSP + 0x240],XMM0
/* 052892b8 */  MOVAPS xmmword ptr [RSP + 0x230],XMM0
/* 052892c0 */  MOV qword ptr [RSP + 0x270],0x0
/* 052892cc */  CMP byte ptr [RSP + 0x2270],0x0
/* 052892d4 */  JZ 0x0528941f
/* 052892da */  MOV RDI,R14
/* 052892dd */  CALL 0x0ca729d0
/* 052892e2 */  MOV R15,qword ptr [R14 + 0x78]
/* 052892e6 */  MOV RSI,qword ptr [RSP + 0xd0]
/* 052892ee */  ADD RSI,0x220
/* 052892f5 */  LEA RDI,[RSP + 0x120]
/* 052892fd */  MOV RDX,RBX
/* 05289300 */  CALL 0x0d2ee510
/* 05289305 */  LEA RDI,[RSP + 0x230]
/* 0528930d */  LEA R12,[RSP + 0x120]
/* 05289315 */  MOV RSI,R12
/* 05289318 */  CALL 0x0d2ecfa0
/* 0528931d */  MOV RDI,R12
/* 05289320 */  CALL 0x0d2ecea0
/* 05289325 */  ADD R15,0x48
/* 05289329 */  MOV RDX,qword ptr [RBX]
/* 0528932c */  LEA RDI,[RSP + 0x120]
/* 05289334 */  MOV RSI,R15
/* 05289337 */  CALL 0x0d2efee0
/* 0528933c */  MOV RDI,qword ptr [RSP + 0x60]
/* 05289341 */  TEST RDI,RDI
/* 05289344 */  JZ 0x05289358
/* 05289346 */  MOV qword ptr [RSP + 0x68],RDI
/* 0528934b */  MOV RSI,qword ptr [RSP + 0x70]
/* 05289350 */  SUB RSI,RDI
/* 05289353 */  CALL 0x0412a280
/* 05289358 */  MOVAPS XMM0,xmmword ptr [RSP + 0x120]
/* 05289360 */  MOVAPS xmmword ptr [RSP + 0x60],XMM0
/* 05289365 */  MOV RAX,qword ptr [RSP + 0x130]
/* 0528936d */  MOV qword ptr [RSP + 0x70],RAX
/* 05289372 */  XORPS XMM1,XMM1
/* 05289375 */  MOVAPS xmmword ptr [RSP + 0x120],XMM1
/* 0528937d */  MOV qword ptr [RSP + 0x130],0x0
/* 05289389 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0528938e */  TEST RDI,RDI
/* 05289391 */  JZ 0x052893b8
/* 05289393 */  MOV qword ptr [RSP + 0x80],RDI
/* 0528939b */  MOV RSI,qword ptr [RSP + 0x88]
/* 052893a3 */  SUB RSI,RDI
/* 052893a6 */  CALL 0x0412a280
/* 052893ab */  XORPS XMM1,XMM1
/* 052893ae */  MOV RDI,qword ptr [RSP + 0x120]
/* 052893b6 */  JMP 0x052893ba
/* 052893b8 */  XOR EDI,EDI
/* 052893ba */  MOVUPS XMM0,xmmword ptr [RSP + 0x138]
/* 052893c2 */  MOVUPS xmmword ptr [RSP + 0x78],XMM0
/* 052893c7 */  MOV RAX,qword ptr [RSP + 0x148]
/* 052893cf */  MOV qword ptr [RSP + 0x88],RAX
/* 052893d7 */  MOVUPS xmmword ptr [RSP + 0x138],XMM1
/* 052893df */  MOV qword ptr [RSP + 0x148],0x0
/* 052893eb */  TEST RDI,RDI
/* 052893ee */  JZ 0x05289408
/* 052893f0 */  MOV qword ptr [RSP + 0x128],RDI
/* 052893f8 */  MOV RSI,qword ptr [RSP + 0x130]
/* 05289400 */  SUB RSI,RDI
/* 05289403 */  CALL 0x0412a280
/* 05289408 */  MOV RAX,qword ptr [RSP + 0x250]
/* 05289410 */  MOV byte ptr [RSP + 0x50],0x1
/* 05289415 */  CMP RAX,qword ptr [RSP + 0x248]
/* 0528941d */  JNZ 0x05289467
/* 0528941f */  MOV RAX,qword ptr [RSP + 0x268]
/* 05289427 */  MOV byte ptr [RSP + 0x50],0x1
/* 0528942c */  CMP RAX,qword ptr [RSP + 0x260]
/* 05289434 */  JNZ 0x05289467
/* 05289436 */  MOV RAX,qword ptr [RSP + 0x238]
/* 0528943e */  CMP RAX,qword ptr [RSP + 0x230]
/* 05289446 */  JNZ 0x05289467
/* 05289448 */  MOV RAX,qword ptr [RSP + 0x60]
/* 0528944d */  XOR RAX,qword ptr [RSP + 0x68]
/* 05289452 */  MOV RCX,qword ptr [RSP + 0x80]
/* 0528945a */  XOR RCX,qword ptr [RSP + 0x78]
/* 0528945f */  OR RCX,RAX
/* 05289462 */  SETNZ byte ptr [RSP + 0x50]
/* 05289467 */  MOV RAX,qword ptr [RSP + 0xc0]
/* 0528946f */  MOV ECX,dword ptr [RAX + 0x14]
/* 05289472 */  IMUL ECX,dword ptr [RAX + 0x10]
/* 05289476 */  IMUL ECX,dword ptr [RAX + 0x18]
/* 0528947a */  MOV dword ptr [RSP + 0xe8],ECX
/* 05289481 */  MOV qword ptr [RSP + 0x10],0x0
/* 0528948a */  MOV dword ptr [RSP + 0x18],0x0
/* 05289492 */  MOV RAX,qword ptr [RSP + 0x110]
/* 0528949a */  MOV RAX,qword ptr [RAX + 0x20]
/* 0528949e */  MOV qword ptr [RSP + 0xb0],RAX
/* 052894a6 */  MOV R15D,dword ptr [RBX]
/* 052894a9 */  MOV R12D,dword ptr [RBX + 0x4]
/* 052894ad */  MOV RSI,qword ptr [R14 + 0xca8]
/* 052894b4 */  LEA RDI,[RSP + 0x120]
/* 052894bc */  MOV RDX,RBX
/* 052894bf */  CALL 0x0525af30
/* 052894c4 */  SHL R12D,0x4
/* 052894c8 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 052894cc */  SUB EAX,dword ptr [RSP + 0xa8]
/* 052894d3 */  SHR AL,0x3
/* 052894d6 */  MOV dword ptr [RSP + 0x1c],EAX
/* 052894da */  SHL R15D,0x4
/* 052894de */  XOR EAX,EAX
/* 052894e0 */  MOV qword ptr [RSP + 0x1c0],R15
/* 052894e8 */  MOV qword ptr [RSP + 0x1a8],R12
/* 052894f0 */  LEA RCX,[RAX + RAX*0x4]
/* 052894f4 */  MOV qword ptr [RSP + 0x188],RCX
/* 052894fc */  LEA RCX,[RAX + RAX*0x4]
/* 05289500 */  ADD RCX,0x5
/* 05289504 */  MOV qword ptr [RSP + 0x180],RCX
/* 0528950c */  MOV qword ptr [RSP + 0x170],RAX
/* 05289514 */  LEA RAX,[RAX*0x4]
/* 0528951c */  MOV qword ptr [RSP + 0x1c8],RAX
/* 05289524 */  ADD EAX,R15D
/* 05289527 */  SAR EAX,0x2
/* 0528952a */  XOR ECX,ECX
/* 0528952c */  MOV qword ptr [RSP + 0x178],RAX
/* 05289534 */  LEA ESI,[R12 + RCX*0x4]
/* 05289538 */  SAR ESI,0x2
/* 0528953b */  SHL RSI,0x20
/* 0528953f */  OR RSI,RAX
/* 05289542 */  MOV RDI,R14
/* 05289545 */  MOV RBX,RCX
/* 05289548 */  CALL 0x052884e0
/* 0528954d */  MOV RCX,qword ptr [RSP + 0x188]
/* 05289555 */  ADD RCX,RBX
/* 05289558 */  LEA RDX,[RCX + RCX*0x4]
/* 0528955c */  LEA RCX,[RCX + RDX*0x8]
/* 05289560 */  MOV qword ptr [RSP + 0xc8],RCX
/* 05289568 */  MOV RCX,qword ptr [RSP + 0x180]
/* 05289570 */  MOV qword ptr [RSP + 0x108],RBX
/* 05289578 */  ADD RCX,RBX
/* 0528957b */  LEA RDX,[RCX + RCX*0x4]
/* 0528957f */  LEA RSI,[RCX + RDX*0x8]
/* 05289583 */  MOV qword ptr [RSP + 0x98],RSI
/* 0528958b */  MOV SIL,0x28
/* 0528958e */  CMP byte ptr [RSP + 0x50],0x0
/* 05289593 */  JNZ 0x05289660
/* 05289599 */  CWDE
/* 0528959a */  SUB EAX,dword ptr [RSP + 0xa8]
/* 052895a1 */  LEA EDI,[RAX + 0x7]
/* 052895a4 */  TEST EAX,EAX
/* 052895a6 */  CMOVNS EDI,EAX
/* 052895a9 */  SHR EDI,0x3
/* 052895ac */  MOVZX EAX,byte ptr [RSP + 0x1c]
/* 052895b1 */  CMP AL,DIL
/* 052895b4 */  MOV R9D,EDI
/* 052895b7 */  CMOVA R9D,EAX
/* 052895bb */  CMP DIL,0x26
/* 052895bf */  JA 0x05289660
/* 052895c5 */  MOV RSI,qword ptr [RSP + 0xc8]
/* 052895cd */  LEA RAX,[RSI + -0x1]
/* 052895d1 */  LEA RDI,[RSI + 0x28]
/* 052895d5 */  MOV RSI,qword ptr [RSP + 0x98]
/* 052895dd */  LEA R8,[RSI + 0x28]
/* 052895e1 */  MOVZX R9D,R9B
/* 052895e5 */  INC R9D
/* 052895e8 */  LEA R10D,[RSI + -0x1]
/* 052895ec */  MOV SIL,0x28
/* 052895ef */  MOV R11D,0x28
/* 052895f5 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 05289600 */  MOV R11D,R11D
/* 05289603 */  LEA RBX,[RAX + R11*0x1]
/* 05289607 */  XORPS XMM0,XMM0
/* 0528960a */  UCOMISS XMM0,dword ptr [RSP + RBX*0x4 + 0x1234]
/* 05289612 */  JBE 0x05289650
/* 05289614 */  LEA RBX,[RDI + R11*0x1]
/* 05289618 */  UCOMISS XMM0,dword ptr [RSP + RBX*0x4 + 0x1234]
/* 05289620 */  JBE 0x05289650
/* 05289622 */  LEA EBX,[R10 + R11*0x1]
/* 05289626 */  UCOMISS XMM0,dword ptr [RSP + RBX*0x4 + 0x1234]
/* 0528962e */  JBE 0x05289650
/* 05289630 */  ADD R11,R8
/* 05289633 */  UCOMISS XMM0,dword ptr [RSP + R11*0x4 + 0x1234]
/* 0528963c */  JBE 0x05289650
/* 0528963e */  DEC SIL
/* 05289641 */  MOVZX R11D,SIL
/* 05289645 */  CMP R9D,R11D
/* 05289648 */  JC 0x05289600
/* 0528964a */  NOP word ptr [RAX + RAX*0x1]
/* 05289650 */  TEST SIL,SIL
/* 05289653 */  JZ 0x0528a240
/* 05289659 */  NOP dword ptr [RAX]
/* 05289660 */  LEA RAX,[RCX + RDX*0x8]
/* 05289664 */  ADD RAX,0x29
/* 05289668 */  MOV qword ptr [RSP + 0x198],RAX
/* 05289670 */  MOV RAX,qword ptr [RSP + 0x108]
/* 05289678 */  LEA EAX,[RAX*0x4]
/* 0528967f */  MOV qword ptr [RSP + 0x1b0],RAX
/* 05289687 */  MOV RAX,qword ptr [RSP + 0x98]
/* 0528968f */  ADD RAX,0x2a
/* 05289693 */  MOV qword ptr [RSP + 0x190],RAX
/* 0528969b */  MOVZX EAX,SIL
/* 0528969f */  MOV qword ptr [RSP + 0x1a0],RAX
/* 052896a7 */  MOV qword ptr [RSP + 0x58],0x0
/* 052896b0 */  JMP 0x052896e3
/* 052896c0 */  MOV RCX,qword ptr [RSP + 0x58]
/* 052896c5 */  INC RCX
/* 052896c8 */  MOV qword ptr [RSP + 0x58],RCX
/* 052896cd */  CMP RCX,qword ptr [RSP + 0x1a0]
/* 052896d5 */  MOV R14,qword ptr [RSP + 0xa0]
/* 052896dd */  JZ 0x0528a240
/* 052896e3 */  MOV RAX,qword ptr [RSP + 0x30]
/* 052896e8 */  MOV RCX,qword ptr [RSP + 0x38]
/* 052896ed */  CMP RAX,RCX
/* 052896f0 */  MOV R14,qword ptr [RSP + 0x58]
/* 052896f5 */  JZ 0x052897f7
/* 052896fb */  MOV RDX,qword ptr [RSP + 0x198]
/* 05289703 */  ADD RDX,R14
/* 05289706 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0528970e */  ADD RSI,R14
/* 05289711 */  MOV RDI,qword ptr [RSP + 0xc8]
/* 05289719 */  ADD RDI,R14
/* 0528971c */  MOV R8,qword ptr [RSP + 0x190]
/* 05289724 */  ADD R8,R14
/* 05289727 */  NOP word ptr [RAX + RAX*0x1]
/* 05289730 */  MOV R9,qword ptr [RAX]
/* 05289733 */  MOV R10,qword ptr [R9]
/* 05289736 */  CMP R10,RDI
/* 05289739 */  JBE 0x0528a332
/* 0528973f */  MOV R11,qword ptr [R9 + 0x8]
/* 05289743 */  MOVSS XMM0,dword ptr [R11 + RDI*0x4]
/* 05289749 */  MOVSS dword ptr [R9 + 0x10],XMM0
/* 0528974f */  CMP R10,RSI
/* 05289752 */  JBE 0x0528a332
/* 05289758 */  MOVSS XMM0,dword ptr [R11 + RSI*0x4]
/* 0528975e */  MOVSS dword ptr [R9 + 0x14],XMM0
/* 05289764 */  MOV RBX,qword ptr [RSP + 0xc8]
/* 0528976c */  LEA RBX,[R11 + RBX*0x4]
/* 05289770 */  MOVSS XMM0,dword ptr [RBX + R14*0x4 + 0xa4]
/* 0528977a */  MOVSS dword ptr [R9 + 0x18],XMM0
/* 05289780 */  CMP R10,RDX
/* 05289783 */  JBE 0x0528a332
/* 05289789 */  MOVSS XMM0,dword ptr [R11 + RDX*0x4]
/* 0528978f */  MOVSS dword ptr [R9 + 0x1c],XMM0
/* 05289795 */  MOVSS XMM0,dword ptr [RBX + R14*0x4 + 0x4]
/* 0528979c */  MOVSS dword ptr [R9 + 0x20],XMM0
/* 052897a2 */  MOV R14,qword ptr [RSP + 0x98]
/* 052897aa */  LEA R14,[R11 + R14*0x4]
/* 052897ae */  MOV RBP,qword ptr [RSP + 0x58]
/* 052897b3 */  MOVSS XMM0,dword ptr [R14 + RBP*0x4 + 0x4]
/* 052897ba */  MOV R14,qword ptr [RSP + 0x58]
/* 052897bf */  MOVSS dword ptr [R9 + 0x24],XMM0
/* 052897c5 */  MOVSS XMM0,dword ptr [RBX + R14*0x4 + 0xa8]
/* 052897cf */  MOVSS dword ptr [R9 + 0x28],XMM0
/* 052897d5 */  CMP R10,R8
/* 052897d8 */  JBE 0x0528a332
/* 052897de */  MOVSS XMM0,dword ptr [R11 + R8*0x4]
/* 052897e4 */  MOVSS dword ptr [R9 + 0x2c],XMM0
/* 052897ea */  ADD RAX,0x8
/* 052897ee */  CMP RAX,RCX
/* 052897f1 */  JNZ 0x05289730
/* 052897f7 */  LEA EAX,[R14*0x8]
/* 052897ff */  MOVZX EAX,AX
/* 05289802 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0528980a */  XOR ESI,ESI
/* 0528980c */  JMP 0x0528982b
/* 05289810 */  MOV RSI,qword ptr [RSP + 0x1b8]
/* 05289818 */  INC ESI
/* 0528981a */  CMP ESI,0x4
/* 0528981d */  MOV R12,qword ptr [RSP + 0x1a8]
/* 05289825 */  JZ 0x052896c0
/* 0528982b */  MOV RAX,qword ptr [RSP + 0x30]
/* 05289830 */  MOV RCX,qword ptr [RSP + 0x38]
/* 05289835 */  CMP RAX,RCX
/* 05289838 */  JZ 0x05289893
/* 0528983a */  XORPS XMM0,XMM0
/* 0528983d */  CVTSI2SS XMM0,ESI
/* 05289841 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 05289850 */  MOV RDX,qword ptr [RAX]
/* 05289853 */  MOVSS XMM1,dword ptr [RDX + 0x4c]
/* 05289858 */  MULSS XMM1,XMM0
/* 0528985c */  MOVSD XMM2,qword ptr [RDX + 0x10]
/* 05289861 */  MOVSD XMM3,qword ptr [RDX + 0x18]
/* 05289866 */  MOVSD XMM4,qword ptr [RDX + 0x20]
/* 0528986b */  MOVSD XMM5,qword ptr [RDX + 0x28]
/* 05289870 */  SUBPS XMM3,XMM2
/* 05289873 */  SUBPS XMM5,XMM4
/* 05289876 */  MOVLHPS XMM3,XMM5
/* 05289879 */  SHUFPS XMM1,XMM1,0x0
/* 0528987d */  MULPS XMM1,XMM3
/* 05289880 */  MOVLHPS XMM2,XMM4
/* 05289883 */  ADDPS XMM2,XMM1
/* 05289886 */  MOVUPS xmmword ptr [RDX + 0x30],XMM2
/* 0528988a */  ADD RAX,0x8
/* 0528988e */  CMP RAX,RCX
/* 05289891 */  JNZ 0x05289850
/* 05289893 */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0528989b */  MOV qword ptr [RSP + 0x1b8],RSI
/* 052898a3 */  LEA ECX,[RSI + RAX*0x1]
/* 052898a6 */  LEA EAX,[RCX + R12*0x1]
/* 052898aa */  MOV dword ptr [RSP + 0x18],EAX
/* 052898ae */  MOV RAX,qword ptr [RSP + 0xc0]
/* 052898b6 */  MOV EAX,dword ptr [RAX + 0x10]
/* 052898b9 */  MOV qword ptr [RSP + 0xf8],RCX
/* 052898c1 */  IMUL EAX,ECX
/* 052898c4 */  CDQE
/* 052898c6 */  MOV qword ptr [RSP + 0xd8],RAX
/* 052898ce */  XOR ESI,ESI
/* 052898d0 */  JMP 0x052898fd
/* 052898e0 */  MOV RSI,qword ptr [RSP + 0xd0]
/* 052898e8 */  INC RSI
/* 052898eb */  CMP RSI,0x4
/* 052898ef */  MOV R15,qword ptr [RSP + 0x1c0]
/* 052898f7 */  JZ 0x05289810
/* 052898fd */  MOV RAX,qword ptr [RSP + 0x30]
/* 05289902 */  MOV RCX,qword ptr [RSP + 0x38]
/* 05289907 */  CMP RAX,RCX
/* 0528990a */  JZ 0x05289954
/* 0528990c */  MOVZX EDX,SIL
/* 05289910 */  XORPS XMM0,XMM0
/* 05289913 */  CVTSI2SS XMM0,EDX
/* 05289917 */  NOP word ptr [RAX + RAX*0x1]
/* 05289920 */  MOV RDX,qword ptr [RAX]
/* 05289923 */  MOVSS XMM1,dword ptr [RDX + 0x4c]
/* 05289928 */  MULSS XMM1,XMM0
/* 0528992c */  MOVUPS XMM2,xmmword ptr [RDX + 0x30]
/* 05289930 */  MOVAPS XMM3,XMM2
/* 05289933 */  SHUFPS XMM3,XMM2,0xed
/* 05289937 */  SHUFPS XMM2,XMM2,0xe8
/* 0528993b */  SUBPS XMM3,XMM2
/* 0528993e */  UNPCKLPS XMM1,XMM1
/* 05289941 */  MULPS XMM1,XMM3
/* 05289944 */  ADDPS XMM1,XMM2
/* 05289947 */  MOVLPS qword ptr [RDX + 0x40],XMM1
/* 0528994b */  ADD RAX,0x8
/* 0528994f */  CMP RAX,RCX
/* 05289952 */  JNZ 0x05289920
/* 05289954 */  MOV RAX,qword ptr [RSP + 0x1c8]
/* 0528995c */  MOV qword ptr [RSP + 0xd0],RSI
/* 05289964 */  ADD RAX,RSI
/* 05289967 */  MOV qword ptr [RSP + 0xb8],RAX
/* 0528996f */  ADD EAX,R15D
/* 05289972 */  MOV dword ptr [RSP + 0x10],EAX
/* 05289976 */  XOR EBP,EBP
/* 05289978 */  JMP 0x0528998b
/* 05289980 */  INC EBP
/* 05289982 */  CMP EBP,0x8
/* 05289985 */  JZ 0x052898e0
/* 0528998b */  MOV RAX,qword ptr [RSP + 0x30]
/* 05289990 */  MOV RCX,qword ptr [RSP + 0x38]
/* 05289995 */  CMP RAX,RCX
/* 05289998 */  JZ 0x052899e0
/* 0528999a */  XORPS XMM0,XMM0
/* 0528999d */  CVTSI2SS XMM0,EBP
/* 052899a1 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 052899b0 */  MOV RDX,qword ptr [RAX]
/* 052899b3 */  MOVSS XMM1,dword ptr [RDX + 0x50]
/* 052899b8 */  MULSS XMM1,XMM0
/* 052899bc */  MOVSS XMM2,dword ptr [RDX + 0x40]
/* 052899c1 */  MOVSS XMM3,dword ptr [RDX + 0x44]
/* 052899c6 */  SUBSS XMM3,XMM2
/* 052899ca */  MULSS XMM3,XMM1
/* 052899ce */  ADDSS XMM3,XMM2
/* 052899d2 */  MOVSS dword ptr [RDX + 0x48],XMM3
/* 052899d7 */  ADD RAX,0x8
/* 052899db */  CMP RAX,RCX
/* 052899de */  JNZ 0x052899b0
/* 052899e0 */  MOV RAX,qword ptr [RSP + 0xf0]
/* 052899e8 */  ADD EAX,EBP
/* 052899ea */  MOV RCX,qword ptr [RSP + 0xc0]
/* 052899f2 */  MOV R14D,dword ptr [RCX + 0x18]
/* 052899f6 */  IMUL R14D,dword ptr [RSP + 0xb8]
/* 052899ff */  ADD R14D,dword ptr [RSP + 0xf8]
/* 05289a07 */  IMUL R14D,dword ptr [RCX + 0x14]
/* 05289a0c */  ADD R14D,EAX
/* 05289a0f */  CMP R14D,dword ptr [RSP + 0xe8]
/* 05289a17 */  JNC 0x05289980
/* 05289a1d */  MOVSS XMM0,dword ptr [RSP + 0x218]
/* 05289a26 */  CWDE
/* 05289a27 */  ADD EAX,dword ptr [RSP + 0xa8]
/* 05289a2e */  MOV dword ptr [RSP + 0x14],EAX
/* 05289a32 */  MULSS XMM0,dword ptr [0x01198cf8]
/* 05289a3a */  MOVSS XMM2,dword ptr [0x011983f0]
/* 05289a42 */  MOVAPS XMM3,XMM2
/* 05289a45 */  CMPLTSS XMM3,XMM0
/* 05289a4a */  MAXSS XMM0,dword ptr [0x011985d4]
/* 05289a52 */  MOVAPS XMM1,XMM3
/* 05289a55 */  ANDPS XMM1,XMM2
/* 05289a58 */  ANDNPS XMM3,XMM0
/* 05289a5b */  ORPS XMM3,XMM1
/* 05289a5e */  MOVAPS XMM0,XMM3
/* 05289a61 */  MULSS XMM0,XMM3
/* 05289a65 */  MULSS XMM0,XMM3
/* 05289a69 */  DIVSS XMM0,dword ptr [0x01198350]
/* 05289a71 */  MULSS XMM3,dword ptr [0x011986e0]
/* 05289a79 */  ADDSS XMM3,XMM0
/* 05289a7d */  MOVSX ECX,word ptr [R13 + 0x8]
/* 05289a82 */  CMP EAX,ECX
/* 05289a84 */  MOVAPS xmmword ptr [RSP + 0x20],XMM3
/* 05289a89 */  JL 0x05289b38
/* 05289a8f */  XORPS XMM2,XMM2
/* 05289a92 */  UCOMISS XMM2,XMM3
/* 05289a95 */  JNC 0x05289b38
/* 05289a9b */  UCOMISS XMM2,dword ptr [R13 + 0x58]
/* 05289aa0 */  JA 0x05289b38
/* 05289aa6 */  MOVSS XMM1,dword ptr [R13 + 0xb0]
/* 05289aaf */  MOVSS XMM0,dword ptr [0x011983f0]
/* 05289ab7 */  ADDSS XMM1,XMM0
/* 05289abb */  MULSS XMM1,dword ptr [0x011986e0]
/* 05289ac3 */  UCOMISS XMM2,XMM1
/* 05289ac6 */  MOVSS XMM0,dword ptr [0x01198844]
/* 05289ace */  JA 0x05289af8
/* 05289ad0 */  MOVSS XMM0,dword ptr [0x011983f0]
/* 05289ad8 */  UCOMISS XMM1,XMM0
/* 05289adb */  MOVSS XMM0,dword ptr [0x01198a9c]
/* 05289ae3 */  JA 0x05289af8
/* 05289ae5 */  MOVSS XMM0,dword ptr [0x01198844]
/* 05289aed */  MULSS XMM1,XMM0
/* 05289af1 */  ADDSS XMM1,XMM0
/* 05289af5 */  MOVAPS XMM0,XMM1
/* 05289af8 */  MOVSS XMM1,dword ptr [R13 + 0x108]
/* 05289b01 */  MOVSS XMM2,dword ptr [R13 + 0x160]
/* 05289b0a */  UNPCKLPS XMM1,XMM2
/* 05289b0d */  MULPS XMM1,xmmword ptr [0x014e57e0]
/* 05289b14 */  ANDPS XMM1,xmmword ptr [0x014e7ba0]
/* 05289b1b */  SHUFPS XMM0,XMM0,0x0
/* 05289b1f */  SUBPS XMM1,XMM0
/* 05289b22 */  MOVAPS XMM0,XMM1
/* 05289b25 */  SHUFPS XMM0,XMM1,0x55
/* 05289b29 */  MAXSS XMM0,XMM1
/* 05289b2d */  MINSS XMM0,dword ptr [RSP + 0x20]
/* 05289b33 */  MOVAPS xmmword ptr [RSP + 0x20],XMM0
/* 05289b38 */  CMP byte ptr [RSP + 0x50],0x0
/* 05289b3d */  JZ 0x05289b90
/* 05289b3f */  MOV RSI,qword ptr [RSP + 0x10]
/* 05289b44 */  MOV EDX,dword ptr [RSP + 0x18]
/* 05289b48 */  LEA RDI,[RSP + 0x60]
/* 05289b4d */  CALL 0x0d2f06a0
/* 05289b52 */  MOVAPS XMM1,xmmword ptr [RSP + 0x20]
/* 05289b57 */  CVTSS2SD XMM1,XMM1
/* 05289b5b */  ADDSD XMM0,XMM1
/* 05289b5f */  CVTSD2SS XMM0,XMM0
/* 05289b63 */  LEA RDI,[RSP + 0x230]
/* 05289b6b */  LEA RSI,[RSP + 0x10]
/* 05289b70 */  MOVSS dword ptr [RSP + 0x20],XMM0
/* 05289b76 */  CALL 0x0d2ee730
/* 05289b7b */  MOVAPS XMM1,XMM0
/* 05289b7e */  ADDSS XMM1,dword ptr [RSP + 0x20]
/* 05289b84 */  JMP 0x05289b95
/* 05289b90 */  MOVAPS XMM1,xmmword ptr [RSP + 0x20]
/* 05289b95 */  MOV RBX,R13
/* 05289b98 */  MOV R12,qword ptr [RSP + 0x120]
/* 05289ba0 */  XORPS XMM0,XMM0
/* 05289ba3 */  MOVAPS xmmword ptr [RSP + 0x20],XMM1
/* 05289ba8 */  UCOMISS XMM0,XMM1
/* 05289bab */  JNC 0x05289cd0
/* 05289bb1 */  MOV RAX,qword ptr [RSP + 0xe0]
/* 05289bb9 */  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
/* 05289bbe */  UCOMISS XMM0,dword ptr [0x011983fc]
/* 05289bc5 */  JBE 0x05289d01
/* 05289bcb */  MOV RCX,qword ptr [RSP + 0x10]
/* 05289bd0 */  MOVSXD RDX,dword ptr [RSP + 0x18]
/* 05289bd5 */  MOV RAX,RCX
/* 05289bd8 */  MOV RSI,0x2fc20f00000000
/* 05289be2 */  IMUL RAX,RSI
/* 05289be6 */  IMUL RSI,RDX,0x6ebfff5
/* 05289bed */  XOR RAX,RCX
/* 05289bf0 */  SAR RAX,0x20
/* 05289bf4 */  XOR RAX,RSI
/* 05289bf7 */  IMUL RSI,RAX,0x285b825
/* 05289bfe */  ADD RSI,0xb
/* 05289c02 */  IMUL RSI,RAX
/* 05289c06 */  SAR RSI,0x10
/* 05289c0a */  MOV R9,qword ptr [RSP + 0xa0]
/* 05289c12 */  XOR RSI,qword ptr [R9 + 0xc68]
/* 05289c19 */  MOV RAX,RCX
/* 05289c1c */  SHR RAX,0x20
/* 05289c20 */  MOV R8,qword ptr [R9 + 0xc70]
/* 05289c27 */  MOV RDI,RSI
/* 05289c2a */  OR RDI,R8
/* 05289c2d */  MOV RDI,-0x61c8864680b583eb
/* 05289c37 */  CMOVZ RSI,RDI
/* 05289c3b */  MOV RDI,qword ptr [R9 + 0xc78]
/* 05289c42 */  MOV R9,0x6a09e667f3bcc909
/* 05289c4c */  CMOVZ R8,R9
/* 05289c50 */  TEST RCX,RCX
/* 05289c53 */  JS 0x05289da0
/* 05289c59 */  MOV R15,qword ptr [RSP + 0x118]
/* 05289c61 */  CMP EAX,0x8
/* 05289c64 */  MOV R13,RBX
/* 05289c67 */  JA 0x05289da6
/* 05289c6d */  XORPS XMM0,XMM0
/* 05289c70 */  CVTSI2SS XMM0,EAX
/* 05289c74 */  MULSS XMM0,dword ptr [0x01198a50]
/* 05289c7c */  MOVSS XMM2,dword ptr [0x011983f0]
/* 05289c84 */  MOVAPS XMM1,XMM2
/* 05289c87 */  SUBSS XMM1,XMM0
/* 05289c8b */  CMPLTSS XMM2,XMM0
/* 05289c90 */  ADD R8,RSI
/* 05289c93 */  ROL R8,0x11
/* 05289c97 */  ADD R8,RSI
/* 05289c9a */  SHR R8,0x28
/* 05289c9e */  XORPS XMM0,XMM0
/* 05289ca1 */  CVTSI2SS XMM0,R8D
/* 05289ca6 */  ANDNPS XMM2,XMM1
/* 05289ca9 */  MULSS XMM0,dword ptr [0x01198a44]
/* 05289cb1 */  UCOMISS XMM2,XMM0
/* 05289cb4 */  CMOVBE RDI,qword ptr [RSP + 0x118]
/* 05289cbd */  MOV R15,RDI
/* 05289cc0 */  JMP 0x05289da6
/* 05289cd0 */  MOV RDI,qword ptr [RSP + 0xe0]
/* 05289cd8 */  LEA RSI,[RSP + 0x10]
/* 05289cdd */  CALL 0x05258c60
/* 05289ce2 */  MOV RAX,qword ptr [RSP + 0xe0]
/* 05289cea */  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
/* 05289cef */  ADDSS XMM0,dword ptr [RAX + 0x20]
/* 05289cf4 */  UCOMISS XMM0,dword ptr [0x011983fc]
/* 05289cfb */  JA 0x05289bcb
/* 05289d01 */  MOV ECX,dword ptr [RSP + 0x14]
/* 05289d05 */  CMP ECX,dword ptr [RAX + 0x1c]
/* 05289d08 */  JGE 0x05289d43
/* 05289d0a */  XOR EDX,EDX
/* 05289d0c */  CMP byte ptr [RAX + 0x24],0x0
/* 05289d10 */  SETNZ SIL
/* 05289d14 */  CMP qword ptr [RSP + 0xb0],0x0
/* 05289d1d */  MOV RDI,RAX
/* 05289d20 */  MOV R13,RBX
/* 05289d23 */  JZ 0x0528a078
/* 05289d29 */  MOVZX EAX,byte ptr [RDI + 0x25]
/* 05289d2d */  MOV DL,SIL
/* 05289d30 */  MOV R15,qword ptr [RDI + RDX*0x8 + 0x58]
/* 05289d35 */  TEST R12,R12
/* 05289d38 */  JNZ 0x0528a08b
/* 05289d3e */  JMP 0x0528a140
/* 05289d43 */  CMP qword ptr [0x0f6ffb10],0x0
/* 05289d4b */  MOV R13,RBX
/* 05289d4e */  JNZ 0x05289d8a
/* 05289d50 */  LEA RDI,[0x13a28c0]
/* 05289d57 */  LEA RSI,[0x11e3821]
/* 05289d5e */  MOV EDX,0x2fd
/* 05289d63 */  LEA RCX,[0x13a2868]
/* 05289d6a */  LEA R8,[0x13a2901]
/* 05289d71 */  XOR EAX,EAX
/* 05289d73 */  CALL 0x0eeddcf0
/* 05289d78 */  TEST AL,AL
/* 05289d7a */  MOV R13,RBX
/* 05289d7d */  JZ 0x05289d8a
/* 05289d7f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 05289d8a */  MOV RAX,qword ptr [0x0f6ffb10]
/* 05289d91 */  MOV RAX,qword ptr [RAX]
/* 05289d94 */  MOV R15,qword ptr [RAX + 0x200]
/* 05289d9b */  JMP 0x0528a071
/* 05289da0 */  MOV R15,RDI
/* 05289da3 */  MOV R13,RBX
/* 05289da6 */  XORPS XMM1,XMM1
/* 05289da9 */  CVTSI2SS XMM1,EAX
/* 05289dad */  MOV RSI,qword ptr [RSP + 0x48]
/* 05289db2 */  MOVSS XMM3,dword ptr [RSI + 0x3058]
/* 05289dba */  XOR R12D,R12D
/* 05289dbd */  XORPS XMM4,XMM4
/* 05289dc0 */  UCOMISS XMM3,XMM4
/* 05289dc3 */  SETBE R12B
/* 05289dc7 */  SHL R12D,0x5
/* 05289dcb */  XORPS XMM0,XMM0
/* 05289dce */  CVTSI2SS XMM0,dword ptr [R12 + RSI*0x1 + 0x3138]
/* 05289dd8 */  MOVAPS XMM2,XMM1
/* 05289ddb */  SUBSS XMM2,XMM0
/* 05289ddf */  XOR EAX,EAX
/* 05289de1 */  UCOMISS XMM4,XMM2
/* 05289de4 */  JA 0x0528a140
/* 05289dea */  XORPS XMM0,XMM0
/* 05289ded */  CVTSI2SS XMM0,dword ptr [R12 + RSI*0x1 + 0x313c]
/* 05289df7 */  SUBSS XMM0,XMM1
/* 05289dfb */  UCOMISS XMM4,XMM0
/* 05289dfe */  JA 0x0528a140
/* 05289e04 */  MINSS XMM0,XMM2
/* 05289e08 */  DIVSS XMM0,dword ptr [0x011987c0]
/* 05289e10 */  MOVSS XMM2,dword ptr [0x011983f0]
/* 05289e18 */  CMPLTSS XMM2,XMM0
/* 05289e1d */  MULSS XMM0,dword ptr [0x011987c4]
/* 05289e25 */  ADDSS XMM0,dword ptr [0x01198728]
/* 05289e2d */  ANDNPS XMM2,XMM0
/* 05289e30 */  ANDPS XMM3,xmmword ptr [0x014e7ba0]
/* 05289e37 */  ADDSS XMM2,XMM3
/* 05289e3b */  MOVSS XMM0,dword ptr [0x01198c0c]
/* 05289e43 */  UCOMISS XMM0,XMM2
/* 05289e46 */  JA 0x0528a071
/* 05289e4c */  XORPS XMM0,XMM0
/* 05289e4f */  CVTSI2SS XMM0,ECX
/* 05289e53 */  XORPS XMM2,XMM2
/* 05289e56 */  CVTSI2SS XMM2,EDX
/* 05289e5a */  CVTTSS2SI ECX,XMM0
/* 05289e5e */  CVTTSS2SI EAX,XMM1
/* 05289e62 */  SHL RAX,0x20
/* 05289e66 */  OR RCX,RAX
/* 05289e69 */  CVTTSS2SI EDX,XMM2
/* 05289e6d */  MOV RSI,qword ptr [RSP + 0x48]
/* 05289e72 */  MOV RDI,qword ptr [RSI + 0x3118]
/* 05289e79 */  MOV R8,0x2fc20f00000000
/* 05289e83 */  IMUL RCX,R8
/* 05289e87 */  MOVSXD RDX,EDX
/* 05289e8a */  IMUL RDX,RDX,0x6ebfff5
/* 05289e91 */  XOR RCX,RAX
/* 05289e94 */  SAR RCX,0x20
/* 05289e98 */  XOR RCX,RDX
/* 05289e9b */  IMUL RAX,RCX,0x285b825
/* 05289ea2 */  ADD RAX,0xb
/* 05289ea6 */  IMUL RAX,RCX
/* 05289eaa */  SAR RAX,0x10
/* 05289eae */  XOR RAX,qword ptr [RDI + 0xe8]
/* 05289eb5 */  MOV R13,qword ptr [RDI + 0xf0]
/* 05289ebc */  MOV RCX,RAX
/* 05289ebf */  OR RCX,R13
/* 05289ec2 */  MOV RCX,-0x61c8864680b583eb
/* 05289ecc */  CMOVZ RAX,RCX
/* 05289ed0 */  MOV RCX,0x6a09e667f3bcc909
/* 05289eda */  CMOVZ R13,RCX
/* 05289ede */  LEA RCX,[RAX + R13*0x1]
/* 05289ee2 */  ROL RCX,0x11
/* 05289ee6 */  ADD RCX,RAX
/* 05289ee9 */  SHR RCX,0x28
/* 05289eed */  XORPS XMM4,XMM4
/* 05289ef0 */  CVTSI2SS XMM4,ECX
/* 05289ef4 */  MULSS XMM4,dword ptr [0x01198a44]
/* 05289efc */  UCOMISS XMM4,dword ptr [0x01198c10]
/* 05289f03 */  JA 0x0528a135
/* 05289f09 */  MOVSS XMM4,dword ptr [RSI + 0x30b0]
/* 05289f11 */  MOVSS XMM5,dword ptr [RSI + 0x3108]
/* 05289f19 */  UNPCKLPS XMM4,XMM5
/* 05289f1c */  ANDPS XMM4,xmmword ptr [0x014e7ba0]
/* 05289f23 */  ADDPS XMM4,xmmword ptr [0x014e8750]
/* 05289f2a */  MOVAPS XMM5,XMM4
/* 05289f2d */  SHUFPS XMM5,XMM4,0x55
/* 05289f31 */  MAXSS XMM4,XMM5
/* 05289f35 */  XORPS XMM5,XMM5
/* 05289f38 */  UCOMISS XMM5,XMM4
/* 05289f3b */  JBE 0x0528a135
/* 05289f41 */  XOR R13,RAX
/* 05289f44 */  ROL RAX,0x31
/* 05289f48 */  MOV R15,R13
/* 05289f4b */  SHL R15,0x15
/* 05289f4f */  XOR R15,RAX
/* 05289f52 */  XOR R15,R13
/* 05289f55 */  ROL R13,0x1c
/* 05289f59 */  LEA RAX,[R15 + R13*0x1]
/* 05289f5d */  ROL RAX,0x11
/* 05289f61 */  ADD RAX,R15
/* 05289f64 */  SHR RAX,0x28
/* 05289f68 */  XORPS XMM4,XMM4
/* 05289f6b */  CVTSI2SS XMM4,EAX
/* 05289f6f */  MULSS XMM4,dword ptr [0x01198a44]
/* 05289f77 */  MOVSS dword ptr [RSP + 0x20],XMM4
/* 05289f7d */  ADDSS XMM3,dword ptr [0x01198450]
/* 05289f85 */  DIVSS XMM3,dword ptr [0x01198414]
/* 05289f8d */  UCOMISS XMM5,XMM3
/* 05289f90 */  MOVSS XMM4,dword ptr [0x01198a9c]
/* 05289f98 */  JA 0x05289fc2
/* 05289f9a */  MOVSS XMM4,dword ptr [0x011983f0]
/* 05289fa2 */  UCOMISS XMM3,XMM4
/* 05289fa5 */  MOVSS XMM4,dword ptr [0x01198aec]
/* 05289fad */  JA 0x05289fc2
/* 05289faf */  MULSS XMM3,dword ptr [0x01198414]
/* 05289fb7 */  ADDSS XMM3,dword ptr [0x01198a9c]
/* 05289fbf */  MOVAPS XMM4,XMM3
/* 05289fc2 */  MOVSS dword ptr [RSP + 0x100],XMM4
/* 05289fcb */  ADD RDI,0xa8
/* 05289fd2 */  CALL 0x0d3414e0
/* 05289fd7 */  MOVSS XMM1,dword ptr [RSP + 0x100]
/* 05289fe0 */  UCOMISS XMM1,dword ptr [RSP + 0x20]
/* 05289fe5 */  MOV EAX,0x10
/* 05289fea */  JBE 0x0528a059
/* 05289fec */  MOVSS XMM1,dword ptr [0x011985d4]
/* 05289ff4 */  UCOMISS XMM1,XMM0
/* 05289ff7 */  JA 0x0528a059
/* 05289ff9 */  MOVSS XMM1,dword ptr [0x011983f0]
/* 0528a001 */  MINSS XMM1,XMM0
/* 0528a005 */  UCOMISS XMM1,dword ptr [0x01198b44]
/* 0528a00c */  JBE 0x0528a059
/* 0528a00e */  XOR R13,R15
/* 0528a011 */  MOV RAX,R13
/* 0528a014 */  ROL RAX,0x1c
/* 0528a018 */  ROL R15,0x31
/* 0528a01c */  MOV RCX,R13
/* 0528a01f */  SHL RCX,0x15
/* 0528a023 */  XOR RCX,R15
/* 0528a026 */  XOR RCX,R13
/* 0528a029 */  ADD RAX,RCX
/* 0528a02c */  ROL RAX,0x11
/* 0528a030 */  ADD RAX,RCX
/* 0528a033 */  SHR RAX,0x28
/* 0528a037 */  XORPS XMM0,XMM0
/* 0528a03a */  CVTSI2SS XMM0,EAX
/* 0528a03e */  MULSS XMM0,dword ptr [0x01198a44]
/* 0528a046 */  XOR EAX,EAX
/* 0528a048 */  MOVSS XMM1,dword ptr [0x01198b4c]
/* 0528a050 */  UCOMISS XMM1,XMM0
/* 0528a053 */  SETA AL
/* 0528a056 */  SHL EAX,0x3
/* 0528a059 */  MOV RCX,qword ptr [RSP + 0x48]
/* 0528a05e */  ADD RCX,R12
/* 0528a061 */  ADD RCX,0x3120
/* 0528a068 */  MOV R15,qword ptr [RCX + RAX*0x1]
/* 0528a06c */  JMP 0x0528a135
/* 0528a071 */  XOR EAX,EAX
/* 0528a073 */  JMP 0x0528a140
/* 0528a078 */  XOR EAX,EAX
/* 0528a07a */  MOV DL,SIL
/* 0528a07d */  MOV R15,qword ptr [RDI + RDX*0x8 + 0x58]
/* 0528a082 */  TEST R12,R12
/* 0528a085 */  JZ 0x0528a140
/* 0528a08b */  MOV EDX,dword ptr [RSP + 0x10]
/* 0528a08f */  MOV ESI,dword ptr [RSP + 0x18]
/* 0528a093 */  SAR EDX,0x2
/* 0528a096 */  SAR ESI,0x2
/* 0528a099 */  MOVSXD RDI,dword ptr [R12 + 0x18]
/* 0528a09e */  MOVSXD RDX,EDX
/* 0528a0a1 */  SUB RDX,RDI
/* 0528a0a4 */  MOVSXD RDI,dword ptr [R12 + 0x1c]
/* 0528a0a9 */  MOVSXD RSI,ESI
/* 0528a0ac */  SUB RSI,RDI
/* 0528a0af */  IMUL RDX,RDX,0x660
/* 0528a0b6 */  ADD RDX,qword ptr [R12]
/* 0528a0ba */  IMUL RSI,RSI,0x198
/* 0528a0c1 */  MOVSS XMM0,dword ptr [RSI + RDX*0x1]
/* 0528a0c6 */  UCOMISS XMM0,dword ptr [0x0119845c]
/* 0528a0cd */  JA 0x0528a140
/* 0528a0cf */  MOVSX EDI,word ptr [R12 + 0x20]
/* 0528a0d5 */  SUB ECX,EDI
/* 0528a0d7 */  MOV EDI,ECX
/* 0528a0d9 */  SAR EDI,0x1f
/* 0528a0dc */  MOV R8D,EDI
/* 0528a0df */  SUB R8D,ECX
/* 0528a0e2 */  LEA ECX,[R8 + 0x7]
/* 0528a0e6 */  TEST R8D,R8D
/* 0528a0e9 */  CMOVNS ECX,R8D
/* 0528a0ed */  SAR ECX,0x3
/* 0528a0f0 */  SUB EDI,ECX
/* 0528a0f2 */  CMP EDI,0x28
/* 0528a0f5 */  JA 0x0528a140
/* 0528a0f7 */  ADD RDX,RSI
/* 0528a0fa */  MOV ECX,EDI
/* 0528a0fc */  MOVZX ECX,byte ptr [RDX + RCX*0x1 + 0x16c]
/* 0528a104 */  TEST CL,CL
/* 0528a106 */  JZ 0x0528a140
/* 0528a108 */  CMP CL,0x1
/* 0528a10b */  JNZ 0x0528a140
/* 0528a10d */  MOV RCX,qword ptr [R15 + 0x68]
/* 0528a111 */  MOV RCX,qword ptr [RCX + 0x20]
/* 0528a115 */  CMP byte ptr [RCX],0x5
/* 0528a118 */  JNZ 0x0528a140
/* 0528a11a */  LEA RDI,[0xf6ff9e0]
/* 0528a121 */  LEA RSI,[0xf6eaec0]
/* 0528a128 */  MOV EDX,0x1
/* 0528a12d */  CALL 0x0cc41df0
/* 0528a132 */  MOV R15,RAX
/* 0528a135 */  XOR EAX,EAX
/* 0528a137 */  MOV R13,RBX
/* 0528a13a */  NOP word ptr [RAX + RAX*0x1]
/* 0528a140 */  MOV RCX,qword ptr [RSP + 0xc0]
/* 0528a148 */  MOV RCX,qword ptr [RCX]
/* 0528a14b */  MOV EDX,R14D
/* 0528a14e */  MOV qword ptr [RCX + RDX*0x8],R15
/* 0528a152 */  CMP qword ptr [RSP + 0xb0],0x0
/* 0528a15b */  JZ 0x0528a197
/* 0528a15d */  TEST AL,AL
/* 0528a15f */  JZ 0x0528a197
/* 0528a161 */  MOV dword ptr [RSP + 0x104],0x1
/* 0528a16c */  MOV RAX,qword ptr [RSP + 0x110]
/* 0528a174 */  MOV RDI,qword ptr [RAX + 0x20]
/* 0528a178 */  TEST RDI,RDI
/* 0528a17b */  JZ 0x0528a337
/* 0528a181 */  MOV RAX,qword ptr [RDI]
/* 0528a184 */  LEA RSI,[RSP + 0x10]
/* 0528a189 */  MOV RDX,R15
/* 0528a18c */  LEA RCX,[RSP + 0x104]
/* 0528a194 */  CALL qword ptr [RAX + 0x30]
/* 0528a197 */  CMP qword ptr [RSP + 0x2278],0x0
/* 0528a1a0 */  JZ 0x05289980
/* 0528a1a6 */  CMP qword ptr [0x0f6ffb10],0x0
/* 0528a1ae */  JNZ 0x0528a1f0
/* 0528a1b0 */  LEA RDI,[0x13a28c0]
/* 0528a1b7 */  LEA RSI,[0x11e3821]
/* 0528a1be */  MOV EDX,0x2fd
/* 0528a1c3 */  LEA RCX,[0x13a2868]
/* 0528a1ca */  LEA R8,[0x13a2901]
/* 0528a1d1 */  XOR EAX,EAX
/* 0528a1d3 */  CALL 0x0eeddcf0
/* 0528a1d8 */  TEST AL,AL
/* 0528a1da */  MOV R13,RBX
/* 0528a1dd */  JZ 0x0528a1f0
/* 0528a1df */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0528a1ea */  NOP word ptr [RAX + RAX*0x1]
/* 0528a1f0 */  MOV RAX,qword ptr [0x0f6ffb10]
/* 0528a1f7 */  MOV RAX,qword ptr [RAX]
/* 0528a1fa */  CMP R15,qword ptr [RAX + 0x200]
/* 0528a201 */  JZ 0x05289980
/* 0528a207 */  MOV RAX,qword ptr [RSP + 0xb8]
/* 0528a20f */  ADD RAX,RAX
/* 0528a212 */  MOV RCX,qword ptr [RSP + 0x2278]
/* 0528a21a */  ADD RAX,qword ptr [RCX]
/* 0528a21d */  MOV ECX,dword ptr [RSP + 0x14]
/* 0528a221 */  INC ECX
/* 0528a223 */  MOV RSI,qword ptr [RSP + 0xd8]
/* 0528a22b */  MOVZX EDX,word ptr [RAX + RSI*0x2]
/* 0528a22f */  CMP DX,CX
/* 0528a232 */  CMOVG ECX,EDX
/* 0528a235 */  MOV word ptr [RAX + RSI*0x2],CX
/* 0528a239 */  JMP 0x05289980
/* 0528a240 */  MOV RCX,qword ptr [RSP + 0x108]
/* 0528a248 */  INC RCX
/* 0528a24b */  CMP RCX,0x4
/* 0528a24f */  MOV RAX,qword ptr [RSP + 0x178]
/* 0528a257 */  JNZ 0x05289534
/* 0528a25d */  MOV RAX,qword ptr [RSP + 0x170]
/* 0528a265 */  INC RAX
/* 0528a268 */  CMP RAX,0x4
/* 0528a26c */  JNZ 0x052894f0
/* 0528a272 */  MOV R15,qword ptr [RSP + 0x128]
/* 0528a27a */  TEST R15,R15
/* 0528a27d */  JZ 0x0528a2a2
/* 0528a27f */  MOV RAX,-0x1
/* 0528a286 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0528a28c */  TEST RAX,RAX
/* 0528a28f */  JNZ 0x0528a2a2
/* 0528a291 */  MOV RAX,qword ptr [R15]
/* 0528a294 */  MOV RDI,R15
/* 0528a297 */  CALL qword ptr [RAX + 0x10]
/* 0528a29a */  MOV RDI,R15
/* 0528a29d */  CALL 0x0412c2d0
/* 0528a2a2 */  LEA RDI,[RSP + 0x230]
/* 0528a2aa */  CALL 0x0d2ecea0
/* 0528a2af */  MOV RDI,qword ptr [RSP + 0x78]
/* 0528a2b4 */  TEST RDI,RDI
/* 0528a2b7 */  JZ 0x0528a2d1
/* 0528a2b9 */  MOV qword ptr [RSP + 0x80],RDI
/* 0528a2c1 */  MOV RSI,qword ptr [RSP + 0x88]
/* 0528a2c9 */  SUB RSI,RDI
/* 0528a2cc */  CALL 0x0412a280
/* 0528a2d1 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0528a2d6 */  TEST RDI,RDI
/* 0528a2d9 */  JZ 0x0528a2ed
/* 0528a2db */  MOV qword ptr [RSP + 0x68],RDI
/* 0528a2e0 */  MOV RSI,qword ptr [RSP + 0x70]
/* 0528a2e5 */  SUB RSI,RDI
/* 0528a2e8 */  CALL 0x0412a280
/* 0528a2ed */  MOV RDI,qword ptr [RSP + 0x30]
/* 0528a2f2 */  TEST RDI,RDI
/* 0528a2f5 */  JZ 0x0528a304
/* 0528a2f7 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0528a2fc */  SUB RSI,RDI
/* 0528a2ff */  CALL 0x0412a280
/* 0528a304 */  MOV ESI,0x3160
/* 0528a309 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0528a30e */  CALL 0x0412a280
/* 0528a313 */  MOV ESI,0x4180
/* 0528a318 */  MOV RDI,R13
/* 0528a31b */  CALL 0x0412a280
/* 0528a320 */  ADD RSP,0x2238
/* 0528a327 */  POP RBX
/* 0528a328 */  POP R12
/* 0528a32a */  POP R13
/* 0528a32c */  POP R14
/* 0528a32e */  POP R15
/* 0528a330 */  POP RBP
/* 0528a331 */  RET
/* 0528a332 */  CALL 0x04890760
/* 0528a337 */  CALL 0x04891200
/* 0528a33c */  MOV EDI,0x4180
/* 0528a341 */  XOR ESI,ESI
/* 0528a343 */  CALL 0x0eec74c0
/* 0528a348 */  JMP 0x05288bdf
/* 0528a34d */  MOV EDI,0x3160
/* 0528a352 */  XOR ESI,ESI
/* 0528a354 */  CALL 0x0eec74c0
/* 0528a359 */  JMP 0x05288e99
/* 0528a35e */  MOV EDI,0x8
/* 0528a363 */  XOR ESI,ESI
/* 0528a365 */  CALL 0x0eec74c0
/* 0528a36a */  JMP 0x05288fb8
/* 0528a36f */  MOV EDI,0x40
/* 0528a374 */  XOR ESI,ESI
/* 0528a376 */  CALL 0x0eec74c0
/* 0528a37b */  JMP 0x05288ff6
