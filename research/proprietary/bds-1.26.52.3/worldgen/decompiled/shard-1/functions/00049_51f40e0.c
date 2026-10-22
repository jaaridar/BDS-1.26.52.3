/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f40e0 (ELF vaddr 0x51f40e0)
 * Label: VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::vslot2
 * Body:  [[052f40e0, 052f4d81]]
 * Ghidra: wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot2(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *in_FS_OFFSET;
  undefined8 uStack_2e8;
  undefined4 *puStack_2e0;
  undefined4 *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2a8;
  undefined4 *puStack_2a0;
  undefined4 *puStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined4 uStack_238;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined4 *puStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined4 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  uVar7 = (long)param_2 ^ 0x6a09e667f3bcc909;
  uVar10 = (uVar7 >> 0x1e ^ uVar7) * -0x40a7b892e31b1a47;
  uVar10 = (uVar10 >> 0x1b ^ uVar10) * -0x6b2fb644ecceee15;
  uVar10 = uVar10 >> 0x1f ^ uVar10;
  uVar7 = (uVar7 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar7 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47;
  uVar7 = (uVar7 >> 0x1b ^ uVar7) * -0x6b2fb644ecceee15;
  uVar7 = uVar7 >> 0x1f ^ uVar7;
  if (uVar7 == 0 && uVar10 == 0) {
    uVar10 = 0x9e3779b97f4a7c15;
    uVar7 = 0x6a09e667f3bcc909;
  }
  lStack_1f0 = param_1;
  puStack_218 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_218 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_013aca09;
  uVar4 = _UNK_013aca05;
  uVar3 = _UNK_013aca01;
  uStack_228 = 0x21;
  uStack_220 = 0x18;
  *puStack_218 = _DAT_013ac9fd;
  puStack_218[1] = uVar3;
  puStack_218[2] = uVar4;
  puStack_218[3] = uVar5;
  *(undefined8 *)(puStack_218 + 4) = 0x72616c6c69705f67;
  *(undefined1 *)(puStack_218 + 6) = 0;
  lVar9 = *in_FS_OFFSET;
  if (*(char *)(lVar9 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar9 + -0x16b0) = 1;
    *(undefined **)(lVar9 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar9 + -0x1738) = 0x1032547698badcfe;
    uVar6 = _UNK_014e11d8;
    *(undefined8 *)(lVar9 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar9 + -0x1740) = uVar6;
    *(undefined8 *)(lVar9 + -0x1730) = 0;
    *(undefined8 *)(lVar9 + -0x1728) = 0;
    *(undefined8 *)(lVar9 + -0x1720) = 0;
    *(undefined8 *)(lVar9 + -0x1718) = 0;
    *(undefined8 *)(lVar9 + -0x1710) = 0;
    *(undefined8 *)(lVar9 + -0x1708) = 0;
    *(undefined8 *)(lVar9 + -0x1700) = 0;
    *(undefined8 *)(lVar9 + -0x16f8) = 0;
    *(undefined8 *)(lVar9 + -0x16f0) = 0;
    *(undefined8 *)(lVar9 + -0x16e8) = 0;
    *(undefined8 *)(lVar9 + -0x16e0) = 0;
    *(undefined8 *)(lVar9 + -0x16d8) = 0;
    *(undefined8 *)(lVar9 + -0x16d0) = 0;
    *(undefined8 *)(lVar9 + -0x16c8) = 0;
    *(undefined8 *)(lVar9 + -0x16c0) = 0;
    *(undefined8 *)(lVar9 + -0x16b8) = 0;
  }
  plVar1 = (long *)(lVar9 + -0x1750);
  (**(code **)(*(long *)(lVar9 + -0x1750) + 0x10))(plVar1);
  if ((uStack_228 & 1) == 0) {
    uVar11 = uStack_228 >> 1 & 0x7f;
    puVar8 = (undefined4 *)((long)&uStack_228 + 1);
  }
  else {
    uVar11 = uStack_220 & 0xffffffff;
    puVar8 = puStack_218;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar8,uVar11);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_2a8);
  uVar12 = uVar7 ^ uVar10;
  uVar11 = uVar12 << 0x15 ^ (uVar10 << 0x31 | uVar10 >> 0xf) ^ uVar12;
  uVar12 = (uVar12 << 0x1c | uVar12 >> 0x24) + uVar11;
  uVar10 = ((uVar7 + uVar10) * 0x20000 | uVar7 + uVar10 >> 0x2f) + uVar10;
  uVar11 = (uVar12 * 0x20000 | uVar12 >> 0x2f) + uVar11;
  uStack_c8 = ((ulong)uStack_2a8 >> 0x38 | ((ulong)uStack_2a8 & 0xff000000000000) >> 0x28 |
               ((ulong)uStack_2a8 & 0xff0000000000) >> 0x18 |
               ((ulong)uStack_2a8 & 0xff00000000) >> 8 | ((ulong)uStack_2a8 & 0xff000000) << 8 |
               ((ulong)uStack_2a8 & 0xff0000) << 0x18 | ((ulong)uStack_2a8 & 0xff00) << 0x28 |
              (long)uStack_2a8 << 0x38) ^ uVar10;
  uStack_c0 = ((ulong)puStack_2a0 >> 0x38 | ((ulong)puStack_2a0 & 0xff000000000000) >> 0x28 |
               ((ulong)puStack_2a0 & 0xff0000000000) >> 0x18 |
               ((ulong)puStack_2a0 & 0xff00000000) >> 8 | ((ulong)puStack_2a0 & 0xff000000) << 8 |
               ((ulong)puStack_2a0 & 0xff0000) << 0x18 | ((ulong)puStack_2a0 & 0xff00) << 0x28 |
              (long)puStack_2a0 << 0x38) ^ uVar11;
  puStack_d0 = &UNK_0ef512d0;
  if (uStack_c0 == 0 && uStack_c8 == 0) {
    uStack_c8 = 0x9e3779b97f4a7c15;
    uStack_c0 = 0x6a09e667f3bcc909;
  }
  uStack_b0 = 0;
  uStack_b8 = 0;
  if ((uStack_228 & 1) != 0) {
    uStack_b0 = 0;
    uStack_b8 = 0;
    func_0x0412a280(puStack_218,uStack_228 & 0xfffffffffffffffe);
  }
  uStack_2a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (uStack_2a8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uVar5 = _UNK_014ea7cc;
  uVar4 = _UNK_014ea7c8;
  uVar3 = _UNK_014ea7c4;
  puStack_2a0 = uStack_2a8 + 4;
  *uStack_2a8 = _DAT_014ea7c0;
  uStack_2a8[1] = uVar3;
  uStack_2a8[2] = uVar4;
  uStack_2a8[3] = uVar5;
  puStack_298 = puStack_2a0;
  func_0x0d3411f0(&uStack_228,&puStack_d0,0xfffffffa,&uStack_2a8,1);
  if (uStack_2a8 != (undefined4 *)0x0) {
    puStack_2a0 = uStack_2a8;
    func_0x0412a280(uStack_2a8,(long)puStack_298 - (long)uStack_2a8);
  }
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_012583f9;
  uStack_2a8 = (undefined4 *)0x21;
  puStack_2a0 = (undefined4 *)0x1d;
  *(ulong *)((long)puVar8 + 0xd) = CONCAT53(_UNK_012583f4,_DAT_012583f1);
  *(undefined8 *)((long)puVar8 + 0x15) = uVar6;
  uVar5 = _UNK_012583f0;
  uVar4 = _UNK_012583ec;
  uVar3 = _UNK_012583e8;
  *puVar8 = _DAT_012583e4;
  puVar8[1] = uVar3;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  *(undefined1 *)((long)puVar8 + 0x1d) = 0;
  if (*(char *)(lVar9 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar9 + -0x16b0) = 1;
    *(undefined **)(lVar9 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar9 + -0x1738) = 0x1032547698badcfe;
    uVar6 = _UNK_014e11d8;
    *(undefined8 *)(lVar9 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar9 + -0x1740) = uVar6;
    *(undefined8 *)(lVar9 + -0x1730) = 0;
    *(undefined8 *)(lVar9 + -0x1728) = 0;
    *(undefined8 *)(lVar9 + -0x1720) = 0;
    *(undefined8 *)(lVar9 + -0x1718) = 0;
    *(undefined8 *)(lVar9 + -0x1710) = 0;
    *(undefined8 *)(lVar9 + -0x1708) = 0;
    *(undefined8 *)(lVar9 + -0x1700) = 0;
    *(undefined8 *)(lVar9 + -0x16f8) = 0;
    *(undefined8 *)(lVar9 + -0x16f0) = 0;
    *(undefined8 *)(lVar9 + -0x16e8) = 0;
    *(undefined8 *)(lVar9 + -0x16e0) = 0;
    *(undefined8 *)(lVar9 + -0x16d8) = 0;
    *(undefined8 *)(lVar9 + -0x16d0) = 0;
    *(undefined8 *)(lVar9 + -0x16c8) = 0;
    *(undefined8 *)(lVar9 + -0x16c0) = 0;
    *(undefined8 *)(lVar9 + -0x16b8) = 0;
  }
  puStack_298 = puVar8;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_2a8 & 1) == 0) {
    uVar7 = (ulong)uStack_2a8 >> 1 & 0x7f;
    puVar8 = (undefined4 *)((long)&uStack_2a8 + 1);
  }
  else {
    uVar7 = (ulong)puStack_2a0 & 0xffffffff;
    puVar8 = puStack_298;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar8,uVar7);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_2e8);
  uStack_f0 = ((ulong)uStack_2e8 >> 0x38 | ((ulong)uStack_2e8 & 0xff000000000000) >> 0x28 |
               ((ulong)uStack_2e8 & 0xff0000000000) >> 0x18 |
               ((ulong)uStack_2e8 & 0xff00000000) >> 8 | ((ulong)uStack_2e8 & 0xff000000) << 8 |
               ((ulong)uStack_2e8 & 0xff0000) << 0x18 | ((ulong)uStack_2e8 & 0xff00) << 0x28 |
              (long)uStack_2e8 << 0x38) ^ uVar10;
  uStack_e8 = ((ulong)puStack_2e0 >> 0x38 | ((ulong)puStack_2e0 & 0xff000000000000) >> 0x28 |
               ((ulong)puStack_2e0 & 0xff0000000000) >> 0x18 |
               ((ulong)puStack_2e0 & 0xff00000000) >> 8 | ((ulong)puStack_2e0 & 0xff000000) << 8 |
               ((ulong)puStack_2e0 & 0xff0000) << 0x18 | ((ulong)puStack_2e0 & 0xff00) << 0x28 |
              (long)puStack_2e0 << 0x38) ^ uVar11;
  puStack_f8 = &UNK_0ef512d0;
  if (uStack_e8 == 0 && uStack_f0 == 0) {
    uStack_f0 = 0x9e3779b97f4a7c15;
    uStack_e8 = 0x6a09e667f3bcc909;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (((ulong)uStack_2a8 & 1) != 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    func_0x0412a280(puStack_298,(ulong)uStack_2a8 & 0xfffffffffffffffe);
  }
  uStack_2e8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (uStack_2e8 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_2e0 = uStack_2e8 + 1;
  *uStack_2e8 = 0x3f800000;
  puStack_2d8 = puStack_2e0;
  func_0x0d3411f0(&uStack_2a8,&puStack_f8,0xfffffffd,&uStack_2e8,1);
  if (uStack_2e8 != (undefined4 *)0x0) {
    puStack_2e0 = uStack_2e8;
    func_0x0412a280(uStack_2e8,(long)puStack_2d8 - (long)uStack_2e8);
  }
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar6 = _UNK_012724e3;
  uStack_2e8 = (undefined4 *)0x21;
  puStack_2e0 = (undefined4 *)0x19;
  *(ulong *)((long)puVar8 + 9) = CONCAT17(UNK_012724e2,CONCAT43(_UNK_012724de,_DAT_012724db));
  *(undefined8 *)((long)puVar8 + 0x11) = uVar6;
  uVar5 = _UNK_012724de;
  uVar4 = _UNK_012724da;
  uVar3 = _UNK_012724d6;
  *puVar8 = _DAT_012724d2;
  puVar8[1] = uVar3;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  *(undefined1 *)((long)puVar8 + 0x19) = 0;
  if (*(char *)(lVar9 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar9 + -0x16b0) = 1;
    *(undefined **)(lVar9 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar9 + -0x1738) = 0x1032547698badcfe;
    uVar6 = _UNK_014e11d8;
    *(undefined8 *)(lVar9 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar9 + -0x1740) = uVar6;
    *(undefined8 *)(lVar9 + -0x1730) = 0;
    *(undefined8 *)(lVar9 + -0x1728) = 0;
    *(undefined8 *)(lVar9 + -0x1720) = 0;
    *(undefined8 *)(lVar9 + -0x1718) = 0;
    *(undefined8 *)(lVar9 + -0x1710) = 0;
    *(undefined8 *)(lVar9 + -0x1708) = 0;
    *(undefined8 *)(lVar9 + -0x1700) = 0;
    *(undefined8 *)(lVar9 + -0x16f8) = 0;
    *(undefined8 *)(lVar9 + -0x16f0) = 0;
    *(undefined8 *)(lVar9 + -0x16e8) = 0;
    *(undefined8 *)(lVar9 + -0x16e0) = 0;
    *(undefined8 *)(lVar9 + -0x16d8) = 0;
    *(undefined8 *)(lVar9 + -0x16d0) = 0;
    *(undefined8 *)(lVar9 + -0x16c8) = 0;
    *(undefined8 *)(lVar9 + -0x16c0) = 0;
    *(undefined8 *)(lVar9 + -0x16b8) = 0;
  }
  puStack_2d8 = puVar8;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_2e8 & 1) == 0) {
    uVar7 = (ulong)uStack_2e8 >> 1 & 0x7f;
    puVar8 = (undefined4 *)((long)&uStack_2e8 + 1);
  }
  else {
    uVar7 = (ulong)puStack_2e0 & 0xffffffff;
    puVar8 = puStack_2d8;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar8,uVar7);
  (**(code **)(*plVar1 + 0x20))(plVar1,&puStack_268);
  uStack_118 = ((ulong)puStack_268 >> 0x38 | ((ulong)puStack_268 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_268 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_268 & 0xff00000000) >> 8 | ((ulong)puStack_268 & 0xff000000) << 8 |
                ((ulong)puStack_268 & 0xff0000) << 0x18 | ((ulong)puStack_268 & 0xff00) << 0x28 |
               (long)puStack_268 << 0x38) ^ uVar10;
  uStack_110 = ((ulong)puStack_260 >> 0x38 | ((ulong)puStack_260 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_260 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_260 & 0xff00000000) >> 8 | ((ulong)puStack_260 & 0xff000000) << 8 |
                ((ulong)puStack_260 & 0xff0000) << 0x18 | ((ulong)puStack_260 & 0xff00) << 0x28 |
               (long)puStack_260 << 0x38) ^ uVar11;
  puStack_120 = &UNK_0ef512d0;
  if (uStack_110 == 0 && uStack_118 == 0) {
    uStack_118 = 0x9e3779b97f4a7c15;
    uStack_110 = 0x6a09e667f3bcc909;
  }
  uStack_100 = 0;
  uStack_108 = 0;
  if (((ulong)uStack_2e8 & 1) != 0) {
    uStack_100 = 0;
    uStack_108 = 0;
    func_0x0412a280(puStack_2d8,(ulong)uStack_2e8 & 0xfffffffffffffffe);
  }
  puStack_268 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc);
  if (puStack_268 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xc,0);
  }
  puStack_260 = (undefined8 *)((long)puStack_268 + 0xc);
  *puStack_268 = _DAT_014e5300;
  *(undefined4 *)(puStack_268 + 1) = 0x3f800000;
  puStack_258 = puStack_260;
  func_0x0d3411f0(&uStack_2e8,&puStack_120,0xfffffffa,&puStack_268,1);
  if (puStack_268 != (undefined8 *)0x0) {
    puStack_260 = puStack_268;
    func_0x0412a280(puStack_268,(long)puStack_258 - (long)puStack_268);
  }
  func_0x049cce40(&puStack_268,&uStack_228);
  func_0x049cce40(&lStack_a8,&uStack_2e8);
  func_0x049cce40(&lStack_68,&uStack_2a8);
  puStack_1e8 = puStack_268;
  puStack_1e0 = puStack_260;
  puStack_1d8 = puStack_258;
  puStack_268 = (undefined8 *)0x0;
  puStack_260 = (undefined8 *)0x0;
  puStack_258 = (undefined8 *)0x0;
  lStack_1d0 = lStack_250;
  lStack_1c8 = lStack_248;
  lStack_1c0 = lStack_240;
  lStack_250 = 0;
  lStack_248 = 0;
  lStack_240 = 0;
  uStack_1b8 = uStack_238;
  lStack_1b0 = lStack_a8;
  lStack_1a8 = lStack_a0;
  lStack_1a0 = lStack_98;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_198 = lStack_90;
  lStack_190 = lStack_88;
  lStack_188 = lStack_80;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_180 = uStack_78;
  lStack_178 = lStack_68;
  lStack_170 = lStack_60;
  lStack_168 = lStack_58;
  lStack_68 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_160 = (undefined4)uStack_50;
  uStack_15c = uStack_50._4_4_;
  lStack_158 = lStack_48;
  lStack_150 = lStack_40;
  uStack_50 = 0;
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_148 = uStack_38;
  puStack_140 = &UNK_0ef51388;
  uStack_138 = uVar10;
  uStack_130 = uVar11;
  if (lStack_2d0 != 0) {
    lStack_2c8 = lStack_2d0;
    func_0x0412a280(lStack_2d0,lStack_2c0 - lStack_2d0);
  }
  if (uStack_2e8 != (undefined4 *)0x0) {
    puStack_2e0 = uStack_2e8;
    func_0x0412a280(uStack_2e8,(long)puStack_2d8 - (long)uStack_2e8);
  }
  if (lStack_290 != 0) {
    lStack_288 = lStack_290;
    func_0x0412a280(lStack_290,lStack_280 - lStack_290);
  }
  if (uStack_2a8 != (undefined4 *)0x0) {
    puStack_2a0 = uStack_2a8;
    func_0x0412a280(uStack_2a8,(long)puStack_298 - (long)uStack_2a8);
  }
  if (lStack_210 != 0) {
    lStack_208 = lStack_210;
    func_0x0412a280(lStack_210,lStack_200 - lStack_210);
  }
  if (uStack_228 != 0) {
    uStack_220 = uStack_228;
    func_0x0412a280(uStack_228,(long)puStack_218 - uStack_228);
  }
  lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
  if (lVar9 == 0) {
    func_0x0eec74c0(0xc0,0);
  }
  func_0x049cce40(lVar9,&puStack_1e8);
  func_0x049cce40(lVar9 + 0x38,&lStack_1b0);
  func_0x049cce40(lVar9 + 0x70,&lStack_178);
  *(undefined **)(lVar9 + 0xa8) = &UNK_0ef51388;
  *(undefined4 *)(lVar9 + 0xb0) = (undefined4)uStack_138;
  *(undefined4 *)(lVar9 + 0xb4) = uStack_138._4_4_;
  *(undefined4 *)(lVar9 + 0xb8) = (undefined4)uStack_130;
  *(undefined4 *)(lVar9 + 0xbc) = uStack_130._4_4_;
  lVar2 = *(long *)(lStack_1f0 + 8);
  *(long *)(lStack_1f0 + 8) = lVar9;
  if (lVar2 != 0) {
    func_0x052f4f20(lVar2);
    func_0x0412a280(lVar2,0xc0);
  }
  lVar9 = CONCAT44(uStack_15c,uStack_160);
  if (lVar9 != 0) {
    lStack_158 = lVar9;
    func_0x0412a280(lVar9,lStack_150 - lVar9);
  }
  if (lStack_178 != 0) {
    lStack_170 = lStack_178;
    func_0x0412a280(lStack_178,lStack_168 - lStack_178);
  }
  if (lStack_198 != 0) {
    lStack_190 = lStack_198;
    func_0x0412a280(lStack_198,lStack_188 - lStack_198);
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    func_0x0412a280(lStack_1b0,lStack_1a0 - lStack_1b0);
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    func_0x0412a280(lStack_1d0,lStack_1c0 - lStack_1d0);
  }
  if (puStack_1e8 != (undefined8 *)0x0) {
    puStack_1e0 = puStack_1e8;
    func_0x0412a280(puStack_1e8,(long)puStack_1d8 - (long)puStack_1e8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12583e4  minecraft:iceberg_pillar_roof
 * 0x12583f1  berg_pillar_roof
 * 0x12724d2  minecraft:iceberg_surface
 * 0x12724db  :iceberg_surface
 * 0x13ac9fd  minecraft:iceberg_pillar
 */
