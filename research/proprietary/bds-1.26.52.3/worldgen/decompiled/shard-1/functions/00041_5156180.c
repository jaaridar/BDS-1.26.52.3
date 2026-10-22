/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5256180 (ELF vaddr 0x5156180)
 * Label: callee-of:0x5182630
 * Body:  [[05256180, 05257ae9]]
 * Ghidra: FUN_05256180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05256180(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint5 uVar4;
  uint5 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  uint7 *puVar14;
  long *in_FS_OFFSET;
  byte bStack_4d8;
  uint7 uStack_4d7;
  undefined8 uStack_4d0;
  uint7 *puStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  byte bStack_498;
  undefined4 uStack_497;
  uint3 uStack_493;
  byte bStack_490;
  undefined4 uStack_48f;
  uint3 uStack_48b;
  undefined1 uStack_488;
  undefined4 uStack_487;
  undefined1 uStack_483;
  undefined2 uStack_482;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  byte bStack_458;
  undefined4 uStack_457;
  uint3 uStack_453;
  byte bStack_450;
  undefined4 uStack_44f;
  uint3 uStack_44b;
  undefined1 uStack_448;
  undefined1 uStack_447;
  undefined6 uStack_446;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  byte bStack_418;
  undefined4 uStack_417;
  uint3 uStack_413;
  byte bStack_410;
  undefined4 uStack_40f;
  uint3 uStack_40b;
  undefined1 uStack_408;
  undefined1 uStack_407;
  undefined6 uStack_406;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  byte bStack_3d8;
  undefined4 uStack_3d7;
  uint3 uStack_3d3;
  byte bStack_3d0;
  undefined4 uStack_3cf;
  uint3 uStack_3cb;
  undefined1 uStack_3c8;
  undefined2 uStack_3c7;
  undefined5 uStack_3c5;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_398;
  undefined4 *puStack_390;
  undefined4 *puStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined4 *puStack_358;
  undefined4 *puStack_350;
  undefined4 *puStack_348;
  byte bStack_340;
  undefined4 uStack_33f;
  undefined4 uStack_33b;
  undefined4 uStack_337;
  undefined1 uStack_333;
  undefined2 uStack_332;
  undefined1 uStack_330;
  undefined5 uStack_32f;
  undefined1 uStack_32a;
  undefined1 uStack_329;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined4 uStack_2d8;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined4 uStack_298;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined4 uStack_258;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined4 uStack_218;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined4 uStack_158;
  long *plStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
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
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  bStack_340 = 0x2a;
  uStack_33f = _DAT_0149569f;
  uStack_33b = _UNK_014956a3;
  uStack_337 = _UNK_014956a7;
  uStack_333 = (undefined1)_UNK_014956ab;
  uStack_332 = 0x6570;
  uStack_330 = 0x72;
  uStack_32f = 0x6572757461;
  uStack_32a = 0;
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar9 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar9;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  plVar1 = (long *)(lVar2 + -0x1750);
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x10))(plVar1);
  if ((bStack_340 & 1) == 0) {
    puVar10 = &uStack_33f;
    uVar12 = (uint)(bStack_340 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT17(uStack_329,CONCAT16(uStack_32a,CONCAT51(uStack_32f,uStack_330)));
    uVar12 = CONCAT31((undefined3)uStack_337,uStack_33b._3_1_);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_498);
  uVar4 = CONCAT41(uStack_497,bStack_498);
  uVar5 = CONCAT41(uStack_48f,bStack_490);
  uStack_50 = ((ulong)(uStack_493 >> 0x10) | (ulong)uStack_493 & 0xff00 |
               ((ulong)uStack_493 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
               ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
               ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_493,uVar4) << 0x38) ^
              *(ulong *)(param_2 + 8);
  uStack_48 = ((ulong)(uStack_48b >> 0x10) | (ulong)uStack_48b & 0xff00 |
               ((ulong)uStack_48b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
               ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
               ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_48b,uVar5) << 0x38) ^
              *(ulong *)(param_2 + 0x10);
  puStack_58 = &UNK_0ef512d0;
  if (uStack_48 == 0 && uStack_50 == 0) {
    uStack_50 = 0x9e3779b97f4a7c15;
    uStack_48 = 0x6a09e667f3bcc909;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  if ((bStack_340 & 1) != 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x0412a280(CONCAT17(uStack_329,CONCAT16(uStack_32a,CONCAT51(uStack_32f,uStack_330))),
                    CONCAT35((undefined3)uStack_33b,CONCAT41(uStack_33f,bStack_340)) &
                    0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  uVar8 = _UNK_0164139c;
  uVar7 = _UNK_01641398;
  uVar6 = _UNK_01641394;
  bStack_498 = (byte)puVar10;
  uStack_497 = (undefined4)((ulong)puVar10 >> 8);
  uStack_493 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 6;
  uStack_488 = SUB81(puVar11,0);
  uStack_487 = (undefined4)((ulong)puVar11 >> 8);
  uStack_483 = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_482 = (undefined2)((ulong)puVar11 >> 0x30);
  *puVar10 = _DAT_01641390;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  puVar10[3] = uVar8;
  *(undefined8 *)(puVar10 + 4) = 0;
  _uStack_493 = CONCAT13(uStack_488,uStack_493);
  uStack_48b = (uint3)((ulong)puVar11 >> 0x28);
  uStack_48f = uStack_487;
  func_0x0d3411f0(&bStack_340,&puStack_58,0xfffffff6,&bStack_498,1);
  lVar3 = CONCAT35(uStack_493,CONCAT41(uStack_497,bStack_498));
  if (lVar3 != 0) {
    _uStack_493 = CONCAT13(bStack_498,uStack_493);
    uStack_48f = uStack_497;
    _uStack_48b = CONCAT13(uStack_488,uStack_493);
    func_0x0412a280(lVar3,CONCAT26(uStack_482,CONCAT15(uStack_483,CONCAT41(uStack_487,uStack_488)))
                          - lVar3);
  }
  bStack_498 = 0x28;
  uStack_497 = _DAT_012228fb;
  _uStack_493 = _UNK_012228ff;
  uStack_48f = _UNK_01222903;
  _uStack_48b = _UNK_01222907;
  uStack_487 = 0x6e6f6974;
  uStack_483 = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar9 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar9;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_498 & 1) == 0) {
    puVar10 = &uStack_497;
    uVar12 = (uint)(bStack_498 >> 1);
  }
  else {
    puVar10 = (undefined4 *)
              CONCAT26(uStack_482,CONCAT15(uStack_483,CONCAT41(uStack_487,uStack_488)));
    uVar12 = CONCAT31((undefined3)uStack_48f,bStack_490);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_398);
  uStack_78 = ((ulong)uStack_398 >> 0x38 | ((ulong)uStack_398 & 0xff000000000000) >> 0x28 |
               ((ulong)uStack_398 & 0xff0000000000) >> 0x18 |
               ((ulong)uStack_398 & 0xff00000000) >> 8 | ((ulong)uStack_398 & 0xff000000) << 8 |
               ((ulong)uStack_398 & 0xff0000) << 0x18 | ((ulong)uStack_398 & 0xff00) << 0x28 |
              (long)uStack_398 << 0x38) ^ *(ulong *)(param_2 + 8);
  uStack_70 = ((ulong)puStack_390 >> 0x38 | ((ulong)puStack_390 & 0xff000000000000) >> 0x28 |
               ((ulong)puStack_390 & 0xff0000000000) >> 0x18 |
               ((ulong)puStack_390 & 0xff00000000) >> 8 | ((ulong)puStack_390 & 0xff000000) << 8 |
               ((ulong)puStack_390 & 0xff0000) << 0x18 | ((ulong)puStack_390 & 0xff00) << 0x28 |
              (long)puStack_390 << 0x38) ^ *(ulong *)(param_2 + 0x10);
  puStack_80 = &UNK_0ef512d0;
  if (uStack_70 == 0 && uStack_78 == 0) {
    uStack_78 = 0x9e3779b97f4a7c15;
    uStack_70 = 0x6a09e667f3bcc909;
  }
  uStack_60 = 0;
  uStack_68 = 0;
  if ((bStack_498 & 1) != 0) {
    uStack_60 = 0;
    uStack_68 = 0;
    func_0x0412a280(CONCAT26(uStack_482,CONCAT15(uStack_483,CONCAT41(uStack_487,uStack_488))),
                    CONCAT35(uStack_493,CONCAT41(uStack_497,bStack_498)) & 0xfffffffffffffffe);
  }
  uStack_398 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (uStack_398 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  uVar8 = _UNK_016413b4;
  uVar7 = _UNK_016413b0;
  uVar6 = _UNK_016413ac;
  puStack_390 = uStack_398 + 6;
  *uStack_398 = _DAT_016413a8;
  uStack_398[1] = uVar6;
  uStack_398[2] = uVar7;
  uStack_398[3] = uVar8;
  *(undefined8 *)(uStack_398 + 4) = 0;
  puStack_388 = puStack_390;
  func_0x0d3411f0(&bStack_498,&puStack_80,0xfffffff8,&uStack_398,1);
  if (uStack_398 != (undefined4 *)0x0) {
    puStack_390 = uStack_398;
    func_0x0412a280(uStack_398,(long)puStack_388 - (long)uStack_398);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar9 = _UNK_0145f3aa;
  uStack_398 = (undefined4 *)0x21;
  puStack_390 = (undefined4 *)0x19;
  *(ulong *)((long)puVar10 + 9) = CONCAT17(UNK_0145f3a9,CONCAT43(_UNK_0145f3a5,_DAT_0145f3a2));
  *(undefined8 *)((long)puVar10 + 0x11) = uVar9;
  uVar8 = _UNK_0145f3a5;
  uVar7 = _UNK_0145f3a1;
  uVar6 = _UNK_0145f39d;
  *puVar10 = _DAT_0145f399;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  puVar10[3] = uVar8;
  *(undefined1 *)((long)puVar10 + 0x19) = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar9 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar9;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  puStack_388 = puVar10;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((ulong)uStack_398 & 1) == 0) {
    uVar13 = (ulong)uStack_398 >> 1 & 0x7f;
    puVar10 = (undefined4 *)((long)&uStack_398 + 1);
  }
  else {
    uVar13 = (ulong)puStack_390 & 0xffffffff;
    puVar10 = puStack_388;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar13);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_3d8);
  uVar4 = CONCAT41(uStack_3d7,bStack_3d8);
  uVar5 = CONCAT41(uStack_3cf,bStack_3d0);
  uStack_a0 = ((ulong)(uStack_3d3 >> 0x10) | (ulong)uStack_3d3 & 0xff00 |
               ((ulong)uStack_3d3 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
               ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
               ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_3d3,uVar4) << 0x38) ^
              *(ulong *)(param_2 + 8);
  uStack_98 = ((ulong)(uStack_3cb >> 0x10) | (ulong)uStack_3cb & 0xff00 |
               ((ulong)uStack_3cb & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
               ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
               ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_3cb,uVar5) << 0x38) ^
              *(ulong *)(param_2 + 0x10);
  puStack_a8 = &UNK_0ef512d0;
  if (uStack_98 == 0 && uStack_a0 == 0) {
    uStack_a0 = 0x9e3779b97f4a7c15;
    uStack_98 = 0x6a09e667f3bcc909;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  if (((ulong)uStack_398 & 1) != 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x0412a280(puStack_388,(ulong)uStack_398 & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x24);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x24,0);
  }
  uVar9 = _UNK_016413d8;
  bStack_3d8 = (byte)puVar10;
  uStack_3d7 = (undefined4)((ulong)puVar10 >> 8);
  uStack_3d3 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 9;
  uStack_3c8 = SUB81(puVar11,0);
  uStack_3c7 = (undefined2)((ulong)puVar11 >> 8);
  uStack_3c5 = (undefined5)((ulong)puVar11 >> 0x18);
  *(undefined8 *)(puVar10 + 4) = _DAT_016413d0;
  *(undefined8 *)(puVar10 + 6) = uVar9;
  uVar8 = _UNK_016413cc;
  uVar7 = _UNK_016413c8;
  uVar6 = _UNK_016413c4;
  *puVar10 = _DAT_016413c0;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  puVar10[3] = uVar8;
  puVar10[8] = 0x3f800000;
  _uStack_3d3 = CONCAT13(uStack_3c8,uStack_3d3);
  uStack_3cf = (undefined4)((ulong)puVar11 >> 8);
  uStack_3cb = (uint3)((ulong)puVar11 >> 0x28);
  func_0x0d3411f0(&uStack_398,&puStack_a8,0xfffffff7,&bStack_3d8,1);
  lVar3 = CONCAT35(uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8));
  if (lVar3 != 0) {
    _uStack_3d3 = CONCAT13(bStack_3d8,uStack_3d3);
    uStack_3cf = uStack_3d7;
    _uStack_3cb = CONCAT13(uStack_3c8,uStack_3d3);
    func_0x0412a280(lVar3,CONCAT53(uStack_3c5,CONCAT21(uStack_3c7,uStack_3c8)) - lVar3);
  }
  bStack_3d8 = 0x22;
  uStack_3d7 = _DAT_014c97d5;
  _uStack_3d3 = _UNK_014c97d9;
  uStack_3cf = _UNK_014c97dd;
  _uStack_3cb = _UNK_014c97e1;
  uStack_3c7 = 0x6e;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar9 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar9;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_3d8 & 1) == 0) {
    puVar10 = &uStack_3d7;
    uVar12 = (uint)(bStack_3d8 >> 1);
  }
  else {
    puVar10 = (undefined4 *)CONCAT53(uStack_3c5,CONCAT21(uStack_3c7,uStack_3c8));
    uVar12 = CONCAT31((undefined3)uStack_3cf,bStack_3d0);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_4d8);
  uStack_c8 = ((ulong)(uStack_4d7 >> 0x30) | ((ulong)uStack_4d7 & 0xff0000000000) >> 0x20 |
               ((ulong)uStack_4d7 & 0xff00000000) >> 0x10 | (ulong)uStack_4d7 & 0xff000000 |
               ((ulong)uStack_4d7 & 0xff0000) << 0x10 | ((ulong)uStack_4d7 & 0xff00) << 0x20 |
               ((ulong)uStack_4d7 & 0xff) << 0x30 | CONCAT71(uStack_4d7,bStack_4d8) << 0x38) ^
              *(ulong *)(param_2 + 8);
  uStack_c0 = ((ulong)(uStack_4d0._4_4_ >> 0x18) | ((ulong)uStack_4d0._4_4_ & 0xff0000) >> 8 |
               ((ulong)uStack_4d0._4_4_ & 0xff00) << 8 | ((ulong)uStack_4d0._4_4_ & 0xff) << 0x18 |
               ((ulong)(uint)uStack_4d0 & 0xff000000) << 8 |
               ((ulong)(uint)uStack_4d0 & 0xff0000) << 0x18 |
               ((ulong)(uint)uStack_4d0 & 0xff00) << 0x28 |
              CONCAT44(uStack_4d0._4_4_,(uint)uStack_4d0) << 0x38) ^ *(ulong *)(param_2 + 0x10);
  puStack_d0 = &UNK_0ef512d0;
  if (uStack_c0 == 0 && uStack_c8 == 0) {
    uStack_c8 = 0x9e3779b97f4a7c15;
    uStack_c0 = 0x6a09e667f3bcc909;
  }
  uStack_b0 = 0;
  uStack_b8 = 0;
  if ((bStack_3d8 & 1) != 0) {
    uStack_b0 = 0;
    uStack_b8 = 0;
    func_0x0412a280(CONCAT53(uStack_3c5,CONCAT21(uStack_3c7,uStack_3c8)),
                    CONCAT35(uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x14);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x14,0);
  }
  uVar8 = _UNK_016413f0;
  uVar7 = _UNK_016413ec;
  uVar6 = _UNK_016413e8;
  bStack_4d8 = (byte)puVar10;
  uStack_4d7 = (uint7)((ulong)puVar10 >> 8);
  puStack_4c8 = (uint7 *)(puVar10 + 5);
  *puVar10 = _DAT_016413e4;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  puVar10[3] = uVar8;
  puVar10[4] = 0x3f800000;
  uStack_4d0 = (undefined4 *)puStack_4c8;
  func_0x0d3411f0(&bStack_3d8,&puStack_d0,0xfffffff7,&bStack_4d8,1);
  lVar3 = CONCAT71(uStack_4d7,bStack_4d8);
  if (lVar3 != 0) {
    uStack_4d0._0_4_ = (uint)lVar3;
    uStack_4d0._4_4_ = (uint)(uStack_4d7 >> 0x18);
    func_0x0412a280(lVar3,(long)puStack_4c8 - lVar3);
  }
  bStack_4d8 = 0x1e;
  uStack_4d7 = 0x617263656e696d;
  uStack_4d0._0_4_ = 0x723a7466;
  uStack_4d0._4_4_ = 0x65676469;
  puStack_4c8 = (uint7 *)((ulong)puStack_4c8 & 0xffffffffffffff00);
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar9 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar9;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  puVar14 = puStack_4c8;
  uVar12 = (uint)uStack_4d0;
  if ((bStack_4d8 & 1) == 0) {
    puVar14 = &uStack_4d7;
    uVar12 = (uint)(bStack_4d8 >> 1);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar14,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_418);
  uVar4 = CONCAT41(uStack_417,bStack_418);
  uVar5 = CONCAT41(uStack_40f,bStack_410);
  uStack_f0 = ((ulong)(uStack_413 >> 0x10) | (ulong)uStack_413 & 0xff00 |
               ((ulong)uStack_413 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
               ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
               ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_413,uVar4) << 0x38) ^
              *(ulong *)(param_2 + 8);
  uStack_e8 = ((ulong)(uStack_40b >> 0x10) | (ulong)uStack_40b & 0xff00 |
               ((ulong)uStack_40b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
               ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
               ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_40b,uVar5) << 0x38) ^
              *(ulong *)(param_2 + 0x10);
  puStack_f8 = &UNK_0ef512d0;
  if (uStack_e8 == 0 && uStack_f0 == 0) {
    uStack_f0 = 0x9e3779b97f4a7c15;
    uStack_e8 = 0x6a09e667f3bcc909;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  if ((bStack_4d8 & 1) != 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    func_0x0412a280(puStack_4c8,CONCAT71(uStack_4d7,bStack_4d8) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  uVar8 = _UNK_01641404;
  uVar7 = _UNK_01641400;
  uVar6 = _UNK_016413fc;
  bStack_418 = (byte)puVar10;
  uStack_417 = (undefined4)((ulong)puVar10 >> 8);
  uStack_413 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 6;
  uStack_408 = SUB81(puVar11,0);
  uStack_407 = (undefined1)((ulong)puVar11 >> 8);
  uStack_406 = (undefined6)((ulong)puVar11 >> 0x10);
  *puVar10 = _DAT_016413f8;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  puVar10[3] = uVar8;
  *(undefined8 *)(puVar10 + 4) = 0;
  _uStack_413 = CONCAT13(uStack_408,uStack_413);
  uStack_40f = (undefined4)((ulong)puVar11 >> 8);
  uStack_40b = (uint3)((ulong)puVar11 >> 0x28);
  func_0x0d3411f0(&bStack_4d8,&puStack_f8,0xfffffff9,&bStack_418,1);
  lVar3 = CONCAT35(uStack_413,CONCAT41(uStack_417,bStack_418));
  if (lVar3 != 0) {
    _uStack_413 = CONCAT13(bStack_418,uStack_413);
    uStack_40f = uStack_417;
    _uStack_40b = CONCAT13(uStack_408,uStack_413);
    func_0x0412a280(lVar3,CONCAT62(uStack_406,CONCAT11(uStack_407,uStack_408)) - lVar3);
  }
  bStack_418 = 0x20;
  uStack_417 = _DAT_013ac811;
  _uStack_413 = _UNK_013ac815;
  uStack_40f = _UNK_013ac819;
  _uStack_40b = _UNK_013ac81d;
  uStack_407 = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar9 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar9;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_418 & 1) == 0) {
    puVar10 = &uStack_417;
    uVar12 = (uint)(bStack_418 >> 1);
  }
  else {
    puVar10 = (undefined4 *)CONCAT62(uStack_406,CONCAT11(uStack_407,uStack_408));
    uVar12 = CONCAT31((undefined3)uStack_40f,bStack_410);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&bStack_458);
  uVar4 = CONCAT41(uStack_457,bStack_458);
  uVar5 = CONCAT41(uStack_44f,bStack_450);
  uStack_118 = ((ulong)(uStack_453 >> 0x10) | (ulong)uStack_453 & 0xff00 |
                ((ulong)uStack_453 & 0xff) << 0x10 | ((ulong)uVar4 & 0xff00000000) >> 8 |
                ((ulong)uVar4 & 0xff000000) << 8 | ((ulong)uVar4 & 0xff0000) << 0x18 |
                ((ulong)uVar4 & 0xff00) << 0x28 | CONCAT35(uStack_453,uVar4) << 0x38) ^
               *(ulong *)(param_2 + 8);
  uStack_110 = ((ulong)(uStack_44b >> 0x10) | (ulong)uStack_44b & 0xff00 |
                ((ulong)uStack_44b & 0xff) << 0x10 | ((ulong)uVar5 & 0xff00000000) >> 8 |
                ((ulong)uVar5 & 0xff000000) << 8 | ((ulong)uVar5 & 0xff0000) << 0x18 |
                ((ulong)uVar5 & 0xff00) << 0x28 | CONCAT35(uStack_44b,uVar5) << 0x38) ^
               *(ulong *)(param_2 + 0x10);
  puStack_120 = &UNK_0ef512d0;
  if (uStack_110 == 0 && uStack_118 == 0) {
    uStack_118 = 0x9e3779b97f4a7c15;
    uStack_110 = 0x6a09e667f3bcc909;
  }
  uStack_100 = 0;
  uStack_108 = 0;
  if ((bStack_418 & 1) != 0) {
    uStack_100 = 0;
    uStack_108 = 0;
    func_0x0412a280(CONCAT62(uStack_406,CONCAT11(uStack_407,uStack_408)),
                    CONCAT35(uStack_413,CONCAT41(uStack_417,bStack_418)) & 0xfffffffffffffffe);
  }
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uVar8 = _UNK_014ea46c;
  uVar7 = _UNK_014ea468;
  uVar6 = _UNK_014ea464;
  bStack_458 = (byte)puVar10;
  uStack_457 = (undefined4)((ulong)puVar10 >> 8);
  uStack_453 = (uint3)((ulong)puVar10 >> 0x28);
  puVar11 = puVar10 + 4;
  uStack_448 = SUB81(puVar11,0);
  uStack_447 = (undefined1)((ulong)puVar11 >> 8);
  uStack_446 = (undefined6)((ulong)puVar11 >> 0x10);
  *puVar10 = _DAT_014ea460;
  puVar10[1] = uVar6;
  puVar10[2] = uVar7;
  puVar10[3] = uVar8;
  _uStack_453 = CONCAT13(uStack_448,uStack_453);
  uStack_44f = (undefined4)((ulong)puVar11 >> 8);
  uStack_44b = (uint3)((ulong)puVar11 >> 0x28);
  func_0x0d3411f0(&bStack_418,&puStack_120,0xfffffffd,&bStack_458,1);
  lVar3 = CONCAT35(uStack_453,CONCAT41(uStack_457,bStack_458));
  if (lVar3 != 0) {
    _uStack_453 = CONCAT13(bStack_458,uStack_453);
    uStack_44f = uStack_457;
    _uStack_44b = CONCAT13(uStack_448,uStack_453);
    func_0x0412a280(lVar3,CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448)) - lVar3);
  }
  bStack_458 = 0x20;
  uStack_457 = _DAT_014ae693;
  _uStack_453 = _UNK_014ae697;
  uStack_44f = _UNK_014ae69b;
  _uStack_44b = _UNK_014ae69f;
  uStack_447 = 0;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar9 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar9;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((bStack_458 & 1) == 0) {
    puVar10 = &uStack_457;
    uVar12 = (uint)(bStack_458 >> 1);
  }
  else {
    puVar10 = (undefined4 *)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
    uVar12 = CONCAT31((undefined3)uStack_44f,bStack_450);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar12);
  (**(code **)(*plVar1 + 0x20))(plVar1,&puStack_358);
  uStack_140 = ((ulong)puStack_358 >> 0x38 | ((ulong)puStack_358 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_358 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_358 & 0xff00000000) >> 8 | ((ulong)puStack_358 & 0xff000000) << 8 |
                ((ulong)puStack_358 & 0xff0000) << 0x18 | ((ulong)puStack_358 & 0xff00) << 0x28 |
               (long)puStack_358 << 0x38) ^ *(ulong *)(param_2 + 8);
  uStack_138 = ((ulong)puStack_350 >> 0x38 | ((ulong)puStack_350 & 0xff000000000000) >> 0x28 |
                ((ulong)puStack_350 & 0xff0000000000) >> 0x18 |
                ((ulong)puStack_350 & 0xff00000000) >> 8 | ((ulong)puStack_350 & 0xff000000) << 8 |
                ((ulong)puStack_350 & 0xff0000) << 0x18 | ((ulong)puStack_350 & 0xff00) << 0x28 |
               (long)puStack_350 << 0x38) ^ *(ulong *)(param_2 + 0x10);
  puStack_148 = &UNK_0ef512d0;
  if (uStack_138 == 0 && uStack_140 == 0) {
    uStack_140 = 0x9e3779b97f4a7c15;
    uStack_138 = 0x6a09e667f3bcc909;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  if ((bStack_458 & 1) != 0) {
    uStack_128 = 0;
    uStack_130 = 0;
    func_0x0412a280(CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448)),
                    CONCAT35(uStack_453,CONCAT41(uStack_457,bStack_458)) & 0xfffffffffffffffe);
  }
  puStack_358 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puStack_358 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar9 = _UNK_01641448;
  puStack_350 = puStack_358 + 0x10;
  *(undefined8 *)(puStack_358 + 0xc) = _DAT_01641440;
  *(undefined8 *)(puStack_358 + 0xe) = uVar9;
  uVar9 = _UNK_01641438;
  *(undefined8 *)(puStack_358 + 8) = _DAT_01641430;
  *(undefined8 *)(puStack_358 + 10) = uVar9;
  uVar9 = _UNK_01641428;
  *(undefined8 *)(puStack_358 + 4) = _DAT_01641420;
  *(undefined8 *)(puStack_358 + 6) = uVar9;
  uVar8 = _UNK_0164141c;
  uVar7 = _UNK_01641418;
  uVar6 = _UNK_01641414;
  *puStack_358 = _DAT_01641410;
  puStack_358[1] = uVar6;
  puStack_358[2] = uVar7;
  puStack_358[3] = uVar8;
  puStack_348 = puStack_350;
  func_0x0d3411f0(&bStack_458,&puStack_148,0xfffffff0,&puStack_358,1);
  if (puStack_358 != (undefined4 *)0x0) {
    puStack_350 = puStack_358;
    func_0x0412a280(puStack_358,(long)puStack_348 - (long)puStack_358);
  }
  func_0x049cce40(&lStack_188,&bStack_340);
  func_0x049cce40(&lStack_1c8,&bStack_498);
  func_0x049cce40(&lStack_208,&uStack_398);
  func_0x049cce40(&lStack_248,&bStack_3d8);
  func_0x049cce40(&lStack_288,&bStack_4d8);
  func_0x049cce40(&lStack_2c8,&bStack_418);
  func_0x049cce40(&lStack_308,&bStack_458);
  *param_1 = lStack_188;
  param_1[1] = lStack_180;
  param_1[2] = lStack_178;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  param_1[3] = lStack_170;
  param_1[4] = lStack_168;
  param_1[5] = lStack_160;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  *(undefined4 *)(param_1 + 6) = uStack_158;
  plStack_150 = param_1 + 7;
  param_1[7] = lStack_1c8;
  param_1[8] = lStack_1c0;
  param_1[9] = lStack_1b8;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  param_1[10] = lStack_1b0;
  param_1[0xb] = lStack_1a8;
  param_1[0xc] = lStack_1a0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  *(undefined4 *)(param_1 + 0xd) = uStack_198;
  param_1[0xe] = lStack_208;
  param_1[0xf] = lStack_200;
  param_1[0x10] = lStack_1f8;
  lStack_208 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  param_1[0x11] = lStack_1f0;
  param_1[0x12] = lStack_1e8;
  param_1[0x13] = lStack_1e0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x14) = uStack_1d8;
  param_1[0x15] = lStack_248;
  param_1[0x16] = lStack_240;
  param_1[0x17] = lStack_238;
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_238 = 0;
  param_1[0x18] = lStack_230;
  param_1[0x19] = lStack_228;
  param_1[0x1a] = lStack_220;
  lStack_230 = 0;
  lStack_228 = 0;
  lStack_220 = 0;
  *(undefined4 *)(param_1 + 0x1b) = uStack_218;
  param_1[0x1c] = lStack_288;
  param_1[0x1d] = lStack_280;
  param_1[0x1e] = lStack_278;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  param_1[0x1f] = lStack_270;
  param_1[0x20] = lStack_268;
  param_1[0x21] = lStack_260;
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  *(undefined4 *)(param_1 + 0x22) = uStack_258;
  param_1[0x23] = lStack_2c8;
  param_1[0x24] = lStack_2c0;
  param_1[0x25] = lStack_2b8;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  param_1[0x26] = lStack_2b0;
  param_1[0x27] = lStack_2a8;
  param_1[0x28] = lStack_2a0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  lStack_2a0 = 0;
  *(undefined4 *)(param_1 + 0x29) = uStack_298;
  param_1[0x2a] = lStack_308;
  param_1[0x2b] = lStack_300;
  param_1[0x2c] = lStack_2f8;
  lStack_308 = 0;
  lStack_300 = 0;
  lStack_2f8 = 0;
  *(undefined4 *)(param_1 + 0x2d) = (undefined4)uStack_2f0;
  *(undefined4 *)((long)param_1 + 0x16c) = uStack_2f0._4_4_;
  *(undefined4 *)(param_1 + 0x2e) = (undefined4)uStack_2e8;
  *(undefined4 *)((long)param_1 + 0x174) = uStack_2e8._4_4_;
  param_1[0x2f] = lStack_2e0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  lStack_2e0 = 0;
  *(undefined4 *)(param_1 + 0x30) = uStack_2d8;
  func_0x04a43690(param_1 + 0x31);
  if (uStack_2f0 != 0) {
    uStack_2e8 = uStack_2f0;
    func_0x0412a280(uStack_2f0,lStack_2e0 - uStack_2f0);
  }
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    func_0x0412a280(lStack_308,lStack_2f8 - lStack_308);
  }
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    func_0x0412a280(lStack_2b0,lStack_2a0 - lStack_2b0);
  }
  if (lStack_2c8 != 0) {
    lStack_2c0 = lStack_2c8;
    func_0x0412a280(lStack_2c8,lStack_2b8 - lStack_2c8);
  }
  if (lStack_270 != 0) {
    lStack_268 = lStack_270;
    func_0x0412a280(lStack_270,lStack_260 - lStack_270);
  }
  if (lStack_288 != 0) {
    lStack_280 = lStack_288;
    func_0x0412a280(lStack_288,lStack_278 - lStack_288);
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    func_0x0412a280(lStack_230,lStack_220 - lStack_230);
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    func_0x0412a280(lStack_248,lStack_238 - lStack_248);
  }
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    func_0x0412a280(lStack_1f0,lStack_1e0 - lStack_1f0);
  }
  if (lStack_208 != 0) {
    lStack_200 = lStack_208;
    func_0x0412a280(lStack_208,lStack_1f8 - lStack_208);
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    func_0x0412a280(lStack_1b0,lStack_1a0 - lStack_1b0);
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    func_0x0412a280(lStack_1c8,lStack_1b8 - lStack_1c8);
  }
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    func_0x0412a280(lStack_170,lStack_160 - lStack_170);
  }
  if (lStack_188 != 0) {
    lStack_180 = lStack_188;
    func_0x0412a280(lStack_188,lStack_178 - lStack_188);
  }
  if (lStack_440 != 0) {
    lStack_438 = lStack_440;
    func_0x0412a280(lStack_440,lStack_430 - lStack_440);
  }
  lVar2 = CONCAT35(uStack_453,CONCAT41(uStack_457,bStack_458));
  if (lVar2 != 0) {
    _uStack_453 = CONCAT13(bStack_458,uStack_453);
    uStack_44f = uStack_457;
    _uStack_44b = CONCAT13(uStack_448,uStack_453);
    func_0x0412a280(lVar2,CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448)) - lVar2);
  }
  if (lStack_400 != 0) {
    lStack_3f8 = lStack_400;
    func_0x0412a280(lStack_400,lStack_3f0 - lStack_400);
  }
  lVar2 = CONCAT35(uStack_413,CONCAT41(uStack_417,bStack_418));
  if (lVar2 != 0) {
    _uStack_413 = CONCAT13(bStack_418,uStack_413);
    uStack_40f = uStack_417;
    _uStack_40b = CONCAT13(uStack_408,uStack_413);
    func_0x0412a280(lVar2,CONCAT62(uStack_406,CONCAT11(uStack_407,uStack_408)) - lVar2);
  }
  if (lStack_4c0 != 0) {
    lStack_4b8 = lStack_4c0;
    func_0x0412a280(lStack_4c0,lStack_4b0 - lStack_4c0);
  }
  lVar2 = CONCAT71(uStack_4d7,bStack_4d8);
  if (lVar2 != 0) {
    uStack_4d0._0_4_ = (uint)lVar2;
    uStack_4d0._4_4_ = (uint)(uStack_4d7 >> 0x18);
    func_0x0412a280(lVar2,(long)puStack_4c8 - lVar2);
  }
  if (lStack_3c0 != 0) {
    lStack_3b8 = lStack_3c0;
    func_0x0412a280(lStack_3c0,lStack_3b0 - lStack_3c0);
  }
  lVar2 = CONCAT35(uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8));
  if (lVar2 != 0) {
    _uStack_3d3 = CONCAT13(bStack_3d8,uStack_3d3);
    uStack_3cf = uStack_3d7;
    _uStack_3cb = CONCAT13(uStack_3c8,uStack_3d3);
    func_0x0412a280(lVar2,CONCAT53(uStack_3c5,CONCAT21(uStack_3c7,uStack_3c8)) - lVar2);
  }
  if (lStack_380 != 0) {
    lStack_378 = lStack_380;
    func_0x0412a280(lStack_380,lStack_370 - lStack_380);
  }
  if (uStack_398 != (undefined4 *)0x0) {
    puStack_390 = uStack_398;
    func_0x0412a280(uStack_398,(long)puStack_388 - (long)uStack_398);
  }
  if (lStack_480 != 0) {
    lStack_478 = lStack_480;
    func_0x0412a280(lStack_480,lStack_470 - lStack_480);
  }
  lVar2 = CONCAT35(uStack_493,CONCAT41(uStack_497,bStack_498));
  if (lVar2 != 0) {
    _uStack_493 = CONCAT13(bStack_498,uStack_493);
    uStack_48f = uStack_497;
    _uStack_48b = CONCAT13(uStack_488,uStack_493);
    func_0x0412a280(lVar2,CONCAT26(uStack_482,CONCAT15(uStack_483,CONCAT41(uStack_487,uStack_488)))
                          - lVar2);
  }
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    func_0x0412a280(lStack_328,lStack_318 - lStack_328);
  }
  uVar6 = uStack_33b;
  lVar2 = CONCAT35((undefined3)uStack_33b,CONCAT41(uStack_33f,bStack_340));
  if (lVar2 != 0) {
    uStack_33b = CONCAT13(bStack_340,(undefined3)uStack_33b);
    uStack_337 = uStack_33f;
    uStack_333 = (undefined1)uVar6;
    uStack_332 = (undefined2)((uint)uVar6 >> 8);
    func_0x0412a280(lVar2,CONCAT17(uStack_329,CONCAT16(uStack_32a,CONCAT51(uStack_32f,uStack_330)))
                          - lVar2);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x12228fb  minecraft:vegetation
 * 0x13ac811  minecraft:offset
 * 0x145f399  minecraft:continentalness
 * 0x145f3a2  :continentalness
 * 0x149569f  minecraft:temperature
 * 0x14ae693  minecraft:jagged
 * 0x14c97d5  minecraft:erosion
 */
