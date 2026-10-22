/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb5db60 (ELF vaddr 0xca5db60)
 * Label: caller-of-callee
 * Body:  [[0cb5db60, 0cb5dd74] [0cb5dd80, 0cb5dfc1] [0cb5dfd0, 0cb5e243] [0cb5e250, 0cb5e47e] [0cb5e480, 0cb5e6f5] [0cb5e700, 0cb5eba5] [0cb5ebb0, 0cb5eddc] [0cb5ede0, 0cb5f05d] [0cb5f060, 0cb5f518] [0cb5f520, 0cb5f9d5] [0cb5f9e0, 0cb5fc0c] [0cb5fc10, 0cb5fe9d] [0cb5fea0, 0cb600e1] [0cb600f0, 0cb6036d] [0cb60370, 0cb605a5] [0cb605b0, 0cb6082d] [0cb60830, 0cb60a66] [0cb60a70, 0cb60ce5] [0cb60cf0, 0cb60f31] [0cb60f40, 0cb611bd] [0cb611c0, 0cb6140c] [0cb61410, 0cb6168d] [0cb61690, 0cb618d2] [0cb618e0, 0cb61edb] [0cb61ee0, 0cb62730] [0cb62740, 0cb62d74] [0cb62d80, 0cb635e6] [0cb635f0, 0cb639a8] [0cb63b5c, 0cb63b72] [0cb63b8d, 0cb63bcf] [0cb63c10, 0cb63c7b] [0cb63cf2, 0cb63d2c] [0cb63d98, 0cb63db2]]
 * Ghidra: FUN_0cb5db60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb5db60(undefined8 *param_1)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  bool bVar25;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 *puStack_5a0;
  undefined8 uStack_598;
  byte bStack_590;
  undefined7 uStack_58f;
  undefined8 uStack_580;
  byte bStack_578;
  undefined7 uStack_577;
  undefined8 uStack_568;
  byte bStack_560;
  undefined7 uStack_55f;
  undefined8 uStack_550;
  byte bStack_540;
  undefined7 uStack_53f;
  undefined8 uStack_530;
  undefined1 uStack_520;
  byte bStack_518;
  undefined7 uStack_517;
  undefined8 uStack_508;
  long lStack_500;
  long lStack_4f0;
  char cStack_4e8;
  uint uStack_4e0;
  uint uStack_4dc;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined4 *puStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  byte bStack_498;
  undefined7 uStack_497;
  undefined8 uStack_488;
  byte bStack_480;
  undefined7 uStack_47f;
  long lStack_478;
  long lStack_470;
  byte bStack_468;
  undefined7 uStack_467;
  undefined8 uStack_458;
  uint uStack_450;
  undefined4 uStack_44c;
  uint uStack_448;
  undefined4 uStack_444;
  undefined4 *puStack_440;
  undefined8 uStack_438;
  undefined1 uStack_428;
  byte bStack_420;
  undefined7 uStack_41f;
  undefined8 uStack_410;
  long lStack_408;
  long lStack_3f8;
  char cStack_3f0;
  undefined8 uStack_3e8;
  undefined4 auStack_3e0 [2];
  byte bStack_3d8;
  undefined7 uStack_3d7;
  undefined8 uStack_3c8;
  byte bStack_3c0;
  undefined7 uStack_3bf;
  undefined8 uStack_3b0;
  byte bStack_3a8;
  undefined7 uStack_3a7;
  undefined8 uStack_398;
  byte bStack_390;
  undefined7 uStack_38f;
  undefined8 uStack_380;
  byte bStack_370;
  undefined7 uStack_36f;
  undefined8 uStack_360;
  undefined1 uStack_350;
  byte bStack_348;
  undefined7 uStack_347;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  char cStack_318;
  undefined8 uStack_310;
  undefined4 *puStack_308;
  undefined4 *puStack_300;
  undefined4 *puStack_2f8;
  undefined4 *puStack_2f0;
  byte *pbStack_2e8;
  byte bStack_2e0;
  undefined7 uStack_2df;
  undefined8 uStack_2d0;
  byte bStack_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2b8;
  byte bStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a0;
  byte bStack_298;
  undefined7 uStack_297;
  undefined8 uStack_288;
  byte bStack_278;
  undefined7 uStack_277;
  undefined8 uStack_268;
  undefined1 uStack_258;
  byte bStack_250;
  undefined7 uStack_24f;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  char cStack_220;
  uint uStack_218;
  uint uStack_214;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined4 *puStack_200;
  undefined4 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e4;
  undefined4 uStack_1d4;
  undefined4 *puStack_1d0;
  undefined4 *puStack_1c8;
  undefined4 *puStack_1c0;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b0;
  long lStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  uint uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  undefined4 **ppuStack_170;
  undefined4 **ppuStack_168;
  undefined4 **ppuStack_160;
  undefined1 uStack_158;
  undefined4 **ppuStack_150;
  undefined1 uStack_148;
  byte bStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_130;
  byte bStack_128;
  undefined7 uStack_127;
  undefined8 uStack_118;
  byte bStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_100;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_e8;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_c8;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_40;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar19 = _UNK_011ae8a4;
  *(ulong *)((long)puVar16 + 0xe) = CONCAT62(_UNK_011ae89e,_DAT_011ae89c);
  *(undefined8 *)((long)puVar16 + 0x16) = uVar19;
  uVar6 = _UNK_011ae896;
  uVar5 = _UNK_011ae892;
  uVar3 = CONCAT22(_DAT_011ae89c,_UNK_011ae89a);
  *puVar16 = _DAT_011ae88e;
  puVar16[1] = uVar5;
  puVar16[2] = uVar6;
  puVar16[3] = uVar3;
  *(undefined1 *)((long)puVar16 + 0x1e) = 0;
  puStack_5a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_5a0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_011ae8a4;
  uStack_5b0 = 0x29;
  uStack_5a8 = 0x25;
  *(ulong *)((long)puStack_5a0 + 0xe) = CONCAT62(_UNK_011ae89e,_DAT_011ae89c);
  *(undefined8 *)((long)puStack_5a0 + 0x16) = uVar19;
  uVar6 = _UNK_011ae896;
  uVar5 = _UNK_011ae892;
  uVar3 = CONCAT22(_DAT_011ae89c,_UNK_011ae89a);
  *puStack_5a0 = _DAT_011ae88e;
  puStack_5a0[1] = uVar5;
  puStack_5a0[2] = uVar6;
  puStack_5a0[3] = uVar3;
  *(undefined4 *)((long)puStack_5a0 + 0x1e) = 0x726f6e2f;
  *(undefined4 *)((long)puStack_5a0 + 0x21) = 0x6c616d72;
  *(undefined1 *)((long)puStack_5a0 + 0x25) = 0;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_49c = 0x14;
  uStack_4b8 = (undefined4 **)CONCAT44(_UNK_014e25c4,_DAT_014e25c0);
  uStack_4b0 = CONCAT44(_UNK_014e25cc,_UNK_014e25c8);
  func_0x0cbad820(&uStack_4b8,&UNK_0124ebc1,0x10,&UNK_01e79d91,0,0);
  puVar18 = (undefined4 *)((long)&uStack_5b0 + 1);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5dd08;
LAB_0cb5dd3d:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5dd3d;
LAB_0cb5dd08:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_5b0 = 0x29;
  uStack_5a8 = 0x26;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar19 = *(undefined8 *)(puVar16 + 4);
  uVar3 = puVar16[6];
  *(undefined2 *)(puVar17 + 7) = *(undefined2 *)(puVar16 + 7);
  puVar17[6] = uVar3;
  *(undefined8 *)(puVar17 + 4) = uVar19;
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  puVar17[2] = uVar7;
  puVar17[3] = uVar8;
  *(undefined8 *)((long)puVar17 + 0x1e) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x26) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_49c = 0x14;
  uStack_4b8 = (undefined4 **)CONCAT44(uStack_4b8._4_4_,0x40800000);
  uStack_4b0 = _DAT_014e86e0;
  func_0x0cbad820(&uStack_4b8,&UNK_0124ebc1,0x10,&UNK_01e79d91,0,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5df55;
LAB_0cb5df8a:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5df8a;
LAB_0cb5df55:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x20);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_014573dc;
  *(undefined8 *)(puVar16 + 4) = _DAT_014573d4;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_014573d0;
  uVar5 = _UNK_014573cc;
  uVar3 = _UNK_014573c8;
  *puVar16 = _DAT_014573c4;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined2 *)(puVar16 + 8) = 0x6b73;
  *(undefined1 *)((long)puVar16 + 0x22) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_014573dc;
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x29;
  *(undefined8 *)(puVar17 + 4) = _DAT_014573d4;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_014573d0;
  uVar5 = _UNK_014573cc;
  uVar3 = _UNK_014573c8;
  *puVar17 = _DAT_014573c4;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined2 *)(puVar17 + 8) = 0x6b73;
  *(undefined4 *)((long)puVar17 + 0x22) = 0x726f6e2f;
  *(undefined4 *)((long)puVar17 + 0x25) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x29) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_0124ebb2,0xe,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5e1d7;
LAB_0cb5e20c:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5e20c;
LAB_0cb5e1d7:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2a;
  uVar3 = *puVar16;
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  *(undefined2 *)(puVar17 + 8) = *(undefined2 *)(puVar16 + 8);
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar3;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  *(undefined8 *)((long)puVar17 + 0x22) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x2a) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_0124ebb2,0xe,&UNK_01387b5d,0x2e,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5e412;
LAB_0cb5e447:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5e447;
LAB_0cb5e412:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x28);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_011ca9ab;
  *(undefined8 *)(puVar16 + 4) = _DAT_011ca9a3;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_011ca99f;
  uVar5 = _UNK_011ca99b;
  uVar3 = _UNK_011ca997;
  *puVar16 = _DAT_011ca993;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  puVar16[8] = 0x72656469;
  *(undefined1 *)(puVar16 + 9) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_011ca9ab;
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2b;
  *(undefined8 *)(puVar17 + 4) = _DAT_011ca9a3;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_011ca99f;
  uVar5 = _UNK_011ca99b;
  uVar3 = _UNK_011ca997;
  *puVar17 = _DAT_011ca993;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined8 *)(puVar17 + 8) = 0x726f6e2f72656469;
  *(undefined4 *)((long)puVar17 + 0x27) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x2b) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_012b137e,0x10,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5e689;
LAB_0cb5e6be:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5e6be;
LAB_0cb5e689:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2c;
  uVar3 = *puVar16;
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  puVar17[8] = puVar16[8];
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar3;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  *(undefined8 *)(puVar17 + 9) = 0x73756f6e696d6f2f;
  *(undefined1 *)(puVar17 + 0xb) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  uStack_4b8 = (undefined4 **)_DAT_014e6060;
  func_0x0cbad820(&uStack_4b8,&UNK_012b137e,0x10,&UNK_01e79d91,0,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5e8c3;
LAB_0cb5e8f8:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5e8f8;
LAB_0cb5e8c3:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x28);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_011ca9d0;
  *(undefined8 *)(puVar16 + 4) = _DAT_011ca9c8;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_011ca9c4;
  uVar5 = _UNK_011ca9c0;
  uVar3 = _UNK_011ca9bc;
  *puVar16 = _DAT_011ca9b8;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  puVar16[8] = 0x6569626d;
  *(undefined1 *)(puVar16 + 9) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_011ca9d0;
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2b;
  *(undefined8 *)(puVar17 + 4) = _DAT_011ca9c8;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_011ca9c4;
  uVar5 = _UNK_011ca9c0;
  uVar3 = _UNK_011ca9bc;
  *puVar17 = _DAT_011ca9b8;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined8 *)(puVar17 + 8) = 0x726f6e2f6569626d;
  *(undefined4 *)((long)puVar17 + 0x27) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x2b) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013efa25,0x10,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5eb39;
LAB_0cb5eb6e:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5eb6e;
LAB_0cb5eb39:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2c;
  uVar3 = *puVar16;
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  puVar17[8] = puVar16[8];
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar3;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  *(undefined8 *)(puVar17 + 9) = 0x73756f6e696d6f2f;
  *(undefined1 *)(puVar17 + 0xb) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013efa25,0x10,&UNK_01387b5d,0x2e,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5ed70;
LAB_0cb5eda5:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5eda5;
LAB_0cb5ed70:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x28);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_013d6792;
  *(ulong *)((long)puVar16 + 0x1e) = CONCAT62(_UNK_013d678c,_DAT_013d678a);
  *(undefined8 *)((long)puVar16 + 0x26) = uVar19;
  uVar19 = CONCAT26(_DAT_013d678a,_UNK_013d6784);
  *(undefined8 *)(puVar16 + 4) = _DAT_013d677c;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_013d6778;
  uVar5 = _UNK_013d6774;
  uVar3 = _UNK_013d6770;
  *puVar16 = _DAT_013d676c;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined1 *)((long)puVar16 + 0x2e) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_013d6792;
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x35;
  *(ulong *)((long)puVar17 + 0x1e) = CONCAT62(_UNK_013d678c,_DAT_013d678a);
  *(undefined8 *)((long)puVar17 + 0x26) = uVar19;
  uVar19 = CONCAT26(_DAT_013d678a,_UNK_013d6784);
  *(undefined8 *)(puVar17 + 4) = _DAT_013d677c;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_013d6778;
  uVar5 = _UNK_013d6774;
  uVar3 = _UNK_013d6770;
  *puVar17 = _DAT_013d676c;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined4 *)((long)puVar17 + 0x2e) = 0x726f6e2f;
  *(undefined4 *)((long)puVar17 + 0x31) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x35) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013d5d8c,0x10,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5eff1;
LAB_0cb5f026:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5f026;
LAB_0cb5eff1:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x36;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar9 = puVar16[4];
  uVar10 = puVar16[5];
  uVar11 = puVar16[6];
  uVar12 = puVar16[7];
  uVar19 = *(undefined8 *)(puVar16 + 8);
  uVar3 = puVar16[10];
  *(undefined2 *)(puVar17 + 0xb) = *(undefined2 *)(puVar16 + 0xb);
  puVar17[10] = uVar3;
  *(undefined8 *)(puVar17 + 8) = uVar19;
  puVar17[4] = uVar9;
  puVar17[5] = uVar10;
  puVar17[6] = uVar11;
  puVar17[7] = uVar12;
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  puVar17[2] = uVar7;
  puVar17[3] = uVar8;
  *(undefined8 *)((long)puVar17 + 0x2e) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x36) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013d5d8c,0x10,&UNK_0124f7a2,0x2f,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5f233;
LAB_0cb5f268:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5f268;
LAB_0cb5f233:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x30);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_0124f683;
  *(undefined8 *)(puVar16 + 4) = _DAT_0124f67b;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_0124f677;
  uVar5 = _UNK_0124f673;
  uVar3 = _UNK_0124f66f;
  *puVar16 = _DAT_0124f66b;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined8 *)((long)puVar16 + 0x1f) = 0x6e6f74656c656b73;
  *(undefined1 *)((long)puVar16 + 0x27) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_0124f683;
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2e;
  *(undefined8 *)(puVar17 + 4) = _DAT_0124f67b;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_0124f677;
  uVar5 = _UNK_0124f673;
  uVar3 = _UNK_0124f66f;
  *puVar17 = _DAT_0124f66b;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined8 *)((long)puVar17 + 0x1f) = 0x6e6f74656c656b73;
  *(undefined4 *)((long)puVar17 + 0x27) = 0x726f6e2f;
  *(undefined4 *)((long)puVar17 + 0x2a) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x2e) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013ba2bb,0x12,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5f4ac;
LAB_0cb5f4e1:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5f4e1;
LAB_0cb5f4ac:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2f;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar9 = puVar16[4];
  uVar10 = puVar16[5];
  uVar11 = puVar16[6];
  uVar12 = puVar16[7];
  uVar3 = puVar16[8];
  uVar2 = *(undefined2 *)(puVar16 + 9);
  *(undefined1 *)((long)puVar17 + 0x26) = *(undefined1 *)((long)puVar16 + 0x26);
  *(undefined2 *)(puVar17 + 9) = uVar2;
  puVar17[8] = uVar3;
  puVar17[4] = uVar9;
  puVar17[5] = uVar10;
  puVar17[6] = uVar11;
  puVar17[7] = uVar12;
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  puVar17[2] = uVar7;
  puVar17[3] = uVar8;
  *(undefined8 *)((long)puVar17 + 0x27) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x2f) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013ba2bb,0x12,&UNK_0124f7a2,0x2f,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5f6f3;
LAB_0cb5f728:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5f728;
LAB_0cb5f6f3:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x28);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_014a5528;
  *(undefined8 *)(puVar16 + 4) = _DAT_014a5520;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_014a551c;
  uVar5 = _UNK_014a5518;
  uVar3 = _UNK_014a5514;
  *puVar16 = _DAT_014a5510;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  puVar16[8] = 0x79617274;
  *(undefined1 *)(puVar16 + 9) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_014a5528;
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2b;
  *(undefined8 *)(puVar17 + 4) = _DAT_014a5520;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_014a551c;
  uVar5 = _UNK_014a5518;
  uVar3 = _UNK_014a5514;
  *puVar17 = _DAT_014a5510;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined8 *)(puVar17 + 8) = 0x726f6e2f79617274;
  *(undefined4 *)((long)puVar17 + 0x27) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x2b) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_011fba30,0xf,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5f969;
LAB_0cb5f99e:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5f99e;
LAB_0cb5f969:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_5b0 = 0x31;
  uStack_5a8 = 0x2c;
  uVar3 = *puVar16;
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  puVar17[8] = puVar16[8];
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar3;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  *(undefined8 *)(puVar17 + 9) = 0x73756f6e696d6f2f;
  *(undefined1 *)(puVar17 + 0xb) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_011fba30,0xf,&UNK_0124f7a2,0x2f,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5fba0;
LAB_0cb5fbd5:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5fbd5;
LAB_0cb5fba0:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x28);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_013524c1;
  *(undefined8 *)(puVar16 + 8) = _DAT_013524b9;
  *(undefined8 *)(puVar16 + 10) = uVar19;
  uVar19 = _UNK_013524b1;
  *(undefined8 *)(puVar16 + 4) = _DAT_013524a9;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_013524a5;
  uVar5 = _UNK_013524a1;
  uVar3 = _UNK_0135249d;
  *puVar16 = _DAT_01352499;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined4 *)((long)puVar16 + 0x2f) = 0x6e6f7465;
  *(undefined1 *)((long)puVar16 + 0x33) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar19 = _UNK_013524c1;
  uStack_5b0 = 0x41;
  uStack_5a8 = 0x3a;
  *(undefined8 *)(puVar17 + 8) = _DAT_013524b9;
  *(undefined8 *)(puVar17 + 10) = uVar19;
  uVar19 = _UNK_013524b1;
  *(undefined8 *)(puVar17 + 4) = _DAT_013524a9;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_013524a5;
  uVar5 = _UNK_013524a1;
  uVar3 = _UNK_0135249d;
  *puVar17 = _DAT_01352499;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined8 *)((long)puVar17 + 0x2f) = 0x726f6e2f6e6f7465;
  *(undefined4 *)((long)puVar17 + 0x36) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x3a) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40800000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x40000000,(undefined4)uStack_4b0);
  uStack_49c = 0xa0;
  func_0x0cbad820(&uStack_4b8,&UNK_013d5d8c,0x10,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb5fe31;
LAB_0cb5fe66:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb5fe66;
LAB_0cb5fe31:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uStack_5b0 = 0x41;
  uStack_5a8 = 0x3b;
  uVar3 = *puVar16;
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  uVar12 = puVar16[8];
  uVar13 = puVar16[9];
  uVar14 = puVar16[10];
  uVar15 = puVar16[0xb];
  uVar2 = *(undefined2 *)(puVar16 + 0xc);
  *(undefined1 *)((long)puVar17 + 0x32) = *(undefined1 *)((long)puVar16 + 0x32);
  *(undefined2 *)(puVar17 + 0xc) = uVar2;
  puVar17[8] = uVar12;
  puVar17[9] = uVar13;
  puVar17[10] = uVar14;
  puVar17[0xb] = uVar15;
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar3;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  *(undefined8 *)((long)puVar17 + 0x33) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x3b) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40800000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x40000000,(undefined4)uStack_4b0);
  uStack_49c = 0xa0;
  func_0x0cbad820(&uStack_4b8,&UNK_013d5d8c,0x10,&UNK_0124f7a2,0x2f,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb60075;
LAB_0cb600aa:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb600aa;
LAB_0cb60075:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x38);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_01233afe;
  *(ulong *)(puVar16 + 7) = CONCAT44(_UNK_01233afa,_DAT_01233af6);
  *(undefined8 *)(puVar16 + 9) = uVar19;
  uVar19 = CONCAT44(_DAT_01233af6,_UNK_01233af2);
  *(undefined8 *)(puVar16 + 4) = _DAT_01233aea;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_01233ae6;
  uVar5 = _UNK_01233ae2;
  uVar3 = _UNK_01233ade;
  *puVar16 = _DAT_01233ada;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined1 *)(puVar16 + 0xb) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_01233afe;
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x33;
  *(ulong *)(puVar17 + 7) = CONCAT44(_UNK_01233afa,_DAT_01233af6);
  *(undefined8 *)(puVar17 + 9) = uVar19;
  uVar19 = CONCAT44(_DAT_01233af6,_UNK_01233af2);
  *(undefined8 *)(puVar17 + 4) = _DAT_01233aea;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_01233ae6;
  uVar5 = _UNK_01233ae2;
  uVar3 = _UNK_01233ade;
  *puVar17 = _DAT_01233ada;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  puVar17[0xb] = 0x726f6e2f;
  *(undefined4 *)((long)puVar17 + 0x2f) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x33) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40800000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x40000000,(undefined4)uStack_4b0);
  uStack_49c = 0xa0;
  func_0x0cbad820(&uStack_4b8,&UNK_013ba2bb,0x12,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb60301;
LAB_0cb60336:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb60336;
LAB_0cb60301:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x34;
  uVar3 = *puVar16;
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  uVar19 = *(undefined8 *)(puVar16 + 8);
  puVar17[10] = puVar16[10];
  *(undefined8 *)(puVar17 + 8) = uVar19;
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar3;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  *(undefined8 *)(puVar17 + 0xb) = 0x73756f6e696d6f2f;
  *(undefined1 *)(puVar17 + 0xd) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40800000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x40000000,(undefined4)uStack_4b0);
  uStack_49c = 0xa0;
  func_0x0cbad820(&uStack_4b8,&UNK_013ba2bb,0x12,&UNK_0124f7a2,0x2f,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb60539;
LAB_0cb6056e:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb6056e;
LAB_0cb60539:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x30);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_01409c7d;
  *(ulong *)((long)puVar16 + 0x19) = CONCAT17(UNK_01409c7c,_DAT_01409c75);
  *(undefined8 *)((long)puVar16 + 0x21) = uVar19;
  uVar19 = CONCAT71(_DAT_01409c75,UNK_01409c74);
  *(undefined8 *)(puVar16 + 4) = _DAT_01409c6c;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_01409c68;
  uVar5 = _UNK_01409c64;
  uVar3 = _UNK_01409c60;
  *puVar16 = _DAT_01409c5c;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined1 *)((long)puVar16 + 0x29) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_01409c7d;
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x30;
  *(ulong *)((long)puVar17 + 0x19) = CONCAT17(UNK_01409c7c,_DAT_01409c75);
  *(undefined8 *)((long)puVar17 + 0x21) = uVar19;
  uVar19 = CONCAT71(_DAT_01409c75,UNK_01409c74);
  *(undefined8 *)(puVar17 + 4) = _DAT_01409c6c;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_01409c68;
  uVar5 = _UNK_01409c64;
  uVar3 = _UNK_01409c60;
  *puVar17 = _DAT_01409c5c;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined4 *)((long)puVar17 + 0x29) = 0x726f6e2f;
  puVar17[0xb] = 0x6c616d72;
  *(undefined1 *)(puVar17 + 0xc) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40800000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x40000000,(undefined4)uStack_4b0);
  uStack_49c = 0xa0;
  func_0x0cbad820(&uStack_4b8,&UNK_011fba30,0xf,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb607c1;
LAB_0cb607f6:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb607f6;
LAB_0cb607c1:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x31;
  uVar3 = *puVar16;
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  uVar19 = *(undefined8 *)(puVar16 + 8);
  *(undefined1 *)(puVar17 + 10) = *(undefined1 *)(puVar16 + 10);
  *(undefined8 *)(puVar17 + 8) = uVar19;
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar3;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  *(undefined8 *)((long)puVar17 + 0x29) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x31) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40800000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x40000000,(undefined4)uStack_4b0);
  uStack_49c = 0xa0;
  func_0x0cbad820(&uStack_4b8,&UNK_011fba30,0xf,&UNK_0124f7a2,0x2f,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb609fa;
LAB_0cb60a2f:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb60a2f;
LAB_0cb609fa:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x30);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_0143f078;
  *(ulong *)((long)puVar16 + 0x1f) = CONCAT71(_UNK_0143f071,DAT_0143f070);
  *(undefined8 *)((long)puVar16 + 0x27) = uVar19;
  uVar19 = CONCAT17(DAT_0143f070,_UNK_0143f069);
  *(undefined8 *)(puVar16 + 4) = _DAT_0143f061;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_0143f05d;
  uVar5 = _UNK_0143f059;
  uVar3 = _UNK_0143f055;
  *puVar16 = _DAT_0143f051;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined1 *)((long)puVar16 + 0x2f) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_0143f078;
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x36;
  *(ulong *)((long)puVar17 + 0x1f) = CONCAT71(_UNK_0143f071,DAT_0143f070);
  *(undefined8 *)((long)puVar17 + 0x27) = uVar19;
  uVar19 = CONCAT17(DAT_0143f070,_UNK_0143f069);
  *(undefined8 *)(puVar17 + 4) = _DAT_0143f061;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_0143f05d;
  uVar5 = _UNK_0143f059;
  uVar3 = _UNK_0143f055;
  *puVar17 = _DAT_0143f051;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined4 *)((long)puVar17 + 0x2f) = 0x726f6e2f;
  *(undefined4 *)((long)puVar17 + 0x32) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x36) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013efa25,0x10,&UNK_01254d89,0,1);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb60c79;
LAB_0cb60cae:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb60cae;
LAB_0cb60c79:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x37;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar9 = puVar16[4];
  uVar10 = puVar16[5];
  uVar11 = puVar16[6];
  uVar12 = puVar16[7];
  uVar19 = *(undefined8 *)(puVar16 + 8);
  uVar3 = puVar16[10];
  uVar2 = *(undefined2 *)(puVar16 + 0xb);
  *(undefined1 *)((long)puVar17 + 0x2e) = *(undefined1 *)((long)puVar16 + 0x2e);
  *(undefined2 *)(puVar17 + 0xb) = uVar2;
  puVar17[10] = uVar3;
  *(undefined8 *)(puVar17 + 8) = uVar19;
  puVar17[4] = uVar9;
  puVar17[5] = uVar10;
  puVar17[6] = uVar11;
  puVar17[7] = uVar12;
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  puVar17[2] = uVar7;
  puVar17[3] = uVar8;
  *(undefined8 *)((long)puVar17 + 0x2f) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x37) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_013efa25,0x10,&UNK_01387b5d,0x2e,1);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb60ec5;
LAB_0cb60efa:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb60efa;
LAB_0cb60ec5:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x30);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_014dadf6;
  *(ulong *)((long)puVar16 + 0x1f) = CONCAT71(_UNK_014dadef,DAT_014dadee);
  *(undefined8 *)((long)puVar16 + 0x27) = uVar19;
  uVar19 = CONCAT17(DAT_014dadee,_UNK_014dade7);
  *(undefined8 *)(puVar16 + 4) = _DAT_014daddf;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_014daddb;
  uVar5 = _UNK_014dadd7;
  uVar3 = _UNK_014dadd3;
  *puVar16 = _DAT_014dadcf;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined1 *)((long)puVar16 + 0x2f) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_014dadf6;
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x36;
  *(ulong *)((long)puVar17 + 0x1f) = CONCAT71(_UNK_014dadef,DAT_014dadee);
  *(undefined8 *)((long)puVar17 + 0x27) = uVar19;
  uVar19 = CONCAT17(DAT_014dadee,_UNK_014dade7);
  *(undefined8 *)(puVar17 + 4) = _DAT_014daddf;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_014daddb;
  uVar5 = _UNK_014dadd7;
  uVar3 = _UNK_014dadd3;
  *puVar17 = _DAT_014dadcf;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined4 *)((long)puVar17 + 0x2f) = 0x726f6e2f;
  *(undefined4 *)((long)puVar17 + 0x32) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x36) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_01298b5b,0x15,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb61151;
LAB_0cb61186:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb61186;
LAB_0cb61151:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x37;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar9 = puVar16[4];
  uVar10 = puVar16[5];
  uVar11 = puVar16[6];
  uVar12 = puVar16[7];
  uVar19 = *(undefined8 *)(puVar16 + 8);
  uVar3 = puVar16[10];
  uVar2 = *(undefined2 *)(puVar16 + 0xb);
  *(undefined1 *)((long)puVar17 + 0x2e) = *(undefined1 *)((long)puVar16 + 0x2e);
  *(undefined2 *)(puVar17 + 0xb) = uVar2;
  puVar17[10] = uVar3;
  *(undefined8 *)(puVar17 + 8) = uVar19;
  puVar17[4] = uVar9;
  puVar17[5] = uVar10;
  puVar17[6] = uVar11;
  puVar17[7] = uVar12;
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  puVar17[2] = uVar7;
  puVar17[3] = uVar8;
  *(undefined8 *)((long)puVar17 + 0x2f) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x37) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  uStack_4b8 = (undefined4 **)_DAT_014e6060;
  func_0x0cbad820(&uStack_4b8,&UNK_01298b5b,0x15,&UNK_01e79d91,0,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb613a0;
LAB_0cb613d5:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb613d5;
LAB_0cb613a0:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x30);
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_0129be81;
  *(ulong *)((long)puVar16 + 0x1e) = CONCAT62(_UNK_0129be7b,_DAT_0129be79);
  *(undefined8 *)((long)puVar16 + 0x26) = uVar19;
  uVar19 = CONCAT26(_DAT_0129be79,_UNK_0129be73);
  *(undefined8 *)(puVar16 + 4) = _DAT_0129be6b;
  *(undefined8 *)(puVar16 + 6) = uVar19;
  uVar6 = _UNK_0129be67;
  uVar5 = _UNK_0129be63;
  uVar3 = _UNK_0129be5f;
  *puVar16 = _DAT_0129be5b;
  puVar16[1] = uVar3;
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  *(undefined1 *)((long)puVar16 + 0x2e) = 0;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_0129be81;
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x35;
  *(ulong *)((long)puVar17 + 0x1e) = CONCAT62(_UNK_0129be7b,_DAT_0129be79);
  *(undefined8 *)((long)puVar17 + 0x26) = uVar19;
  uVar19 = CONCAT26(_DAT_0129be79,_UNK_0129be73);
  *(undefined8 *)(puVar17 + 4) = _DAT_0129be6b;
  *(undefined8 *)(puVar17 + 6) = uVar19;
  uVar6 = _UNK_0129be67;
  uVar5 = _UNK_0129be63;
  uVar3 = _UNK_0129be5f;
  *puVar17 = _DAT_0129be5b;
  puVar17[1] = uVar3;
  puVar17[2] = uVar5;
  puVar17[3] = uVar6;
  *(undefined4 *)((long)puVar17 + 0x2e) = 0x726f6e2f;
  *(undefined4 *)((long)puVar17 + 0x31) = 0x6c616d72;
  *(undefined1 *)((long)puVar17 + 0x35) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b8 = (undefined4 **)CONCAT44(0x40400000,(undefined4)uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  func_0x0cbad820(&uStack_4b8,&UNK_0124eb9d,0x14,&UNK_01e79d91,0,0);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    puVar17 = puVar18;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar17 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar17,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb61621;
LAB_0cb61656:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb61656;
LAB_0cb61621:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    lVar22 = lVar23;
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar22 = CONCAT71(uStack_47f,bStack_480);
    }
    lStack_478 = lVar23;
    func_0x0412a280(lVar22,lStack_470 - lVar22);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uStack_5b0 = 0x39;
  uStack_5a8 = 0x36;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar9 = puVar16[4];
  uVar10 = puVar16[5];
  uVar11 = puVar16[6];
  uVar12 = puVar16[7];
  uVar19 = *(undefined8 *)(puVar16 + 8);
  uVar3 = puVar16[10];
  *(undefined2 *)(puVar17 + 0xb) = *(undefined2 *)(puVar16 + 0xb);
  puVar17[10] = uVar3;
  *(undefined8 *)(puVar17 + 8) = uVar19;
  puVar17[4] = uVar9;
  puVar17[5] = uVar10;
  puVar17[6] = uVar11;
  puVar17[7] = uVar12;
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  puVar17[2] = uVar7;
  puVar17[3] = uVar8;
  *(undefined8 *)((long)puVar17 + 0x2e) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar17 + 0x36) = 0;
  puStack_5a0 = puVar17;
  func_0x0c8f69c0(&uStack_4b8);
  uStack_4b0 = CONCAT44(0x3f000000,(undefined4)uStack_4b0);
  uStack_49c = 0x14;
  uStack_4b8 = (undefined4 **)_DAT_014e6060;
  func_0x0cbad820(&uStack_4b8,&UNK_0124eb9d,0x14,&UNK_01e79d91,0,0);
  func_0x0cbae820(&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((uStack_5b0 & 1) == 0) {
      puStack_440 = puStack_5a0;
      uStack_450 = (uint)uStack_5b0;
      uStack_44c = uStack_5b0._4_4_;
      uStack_448 = (uint)uStack_5a8;
      uStack_444 = uStack_5a8._4_4_;
    }
    else {
      func_0x04885070(&uStack_450,puStack_5a0,uStack_5a8);
    }
  }
  else {
    uVar20 = uStack_5b0 >> 1 & 0x7f;
    if ((uStack_5b0 & 1) != 0) {
      uVar20 = uStack_5a8;
      puVar18 = puStack_5a0;
    }
    FUN_04885120(&uStack_450,puVar18,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_5b0,&uStack_5b0,&uStack_4b8);
  if ((uStack_450 & 1) == 0) {
    if ((bStack_468 & 1) == 0) goto LAB_0cb61866;
LAB_0cb6189b:
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  else {
    func_0x0412a280(puStack_440,CONCAT44(uStack_44c,uStack_450) & 0xfffffffffffffffe);
    if ((bStack_468 & 1) != 0) goto LAB_0cb6189b;
LAB_0cb61866:
    lVar23 = CONCAT71(uStack_47f,bStack_480);
  }
  if (lVar23 != 0) {
    if (lVar23 != lStack_478) {
      do {
        if ((*(byte *)(lStack_478 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lStack_478 + -0x10),
                          *(ulong *)(lStack_478 + -0x20) & 0xfffffffffffffffe);
        }
        lStack_478 = lStack_478 + -0x20;
      } while (lStack_478 != lVar23);
      lVar23 = CONCAT71(uStack_47f,bStack_480);
    }
    func_0x0412a280(lVar23,lStack_470 - lVar23);
  }
  pbStack_2e8 = &bStack_498;
  func_0x0c904760(&pbStack_2e8);
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x30);
  puStack_200 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_200 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar19 = _UNK_011ca9fe;
  uStack_210 = 0x31;
  uStack_208 = 0x29;
  *(ulong *)((long)puStack_200 + 0x19) = CONCAT17(UNK_011ca9fd,_DAT_011ca9f6);
  *(undefined8 *)((long)puStack_200 + 0x21) = uVar19;
  uVar19 = CONCAT71(_DAT_011ca9f6,UNK_011ca9f5);
  *(undefined8 *)(puStack_200 + 4) = _DAT_011ca9ed;
  *(undefined8 *)(puStack_200 + 6) = uVar19;
  uVar6 = _UNK_011ca9e9;
  uVar5 = _UNK_011ca9e5;
  uVar3 = _UNK_011ca9e1;
  *puStack_200 = _DAT_011ca9dd;
  puStack_200[1] = uVar3;
  puStack_200[2] = uVar5;
  puStack_200[3] = uVar6;
  *(undefined1 *)((long)puStack_200 + 0x29) = 0;
  puStack_4c8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puStack_4c8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar19 = _UNK_011ca9fe;
  uStack_4d8 = 0x39;
  uStack_4d0 = 0x30;
  *(ulong *)((long)puStack_4c8 + 0x19) = CONCAT17(UNK_011ca9fd,_DAT_011ca9f6);
  *(undefined8 *)((long)puStack_4c8 + 0x21) = uVar19;
  uVar19 = CONCAT71(_DAT_011ca9f6,UNK_011ca9f5);
  *(undefined8 *)(puStack_4c8 + 4) = _DAT_011ca9ed;
  *(undefined8 *)(puStack_4c8 + 6) = uVar19;
  uVar6 = _UNK_011ca9e9;
  uVar5 = _UNK_011ca9e5;
  uVar3 = _UNK_011ca9e1;
  *puStack_4c8 = _DAT_011ca9dd;
  puStack_4c8[1] = uVar3;
  puStack_4c8[2] = uVar5;
  puStack_4c8[3] = uVar6;
  *(undefined4 *)((long)puStack_4c8 + 0x29) = 0x726f6e2f;
  puStack_4c8[0xb] = 0x6c616d72;
  *(undefined1 *)(puStack_4c8 + 0xc) = 0;
  func_0x0c8f69c0(&uStack_1f0);
  uStack_1f0 = CONCAT44(0x40400000,(undefined4)uStack_1f0);
  uStack_1e4 = 0x3f000000;
  uStack_1d4 = 0x14;
  func_0x0b04cea0(&bStack_b8,&UNK_014d77ad);
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,3);
  func_0x0b04c660(&uStack_5a8,&bStack_b8);
  uStack_520 = 0;
  bStack_518 = 0;
  cStack_4e8 = '\0';
  uStack_4e0 = uStack_4e0 & 0xffffff00;
  uStack_4dc = uStack_4dc & 0xffffff00;
  if ((bStack_50 & 1) != 0) {
    func_0x0412a280(uStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
  }
  if ((bStack_70 & 1) != 0) {
    func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
  }
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  if ((bStack_a0 & 1) != 0) {
    func_0x0412a280(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
  }
  if ((bStack_b8 & 1) != 0) {
    func_0x0412a280(uStack_a8,CONCAT71(uStack_b7,bStack_b8) & 0xfffffffffffffffe);
  }
  uStack_4e0 = 1;
  uStack_4dc = CONCAT31(uStack_4dc._1_3_,1);
  func_0x0b04cea0(&bStack_140,&UNK_014d77ad);
  pbStack_2e8 = (byte *)CONCAT44(pbStack_2e8._4_4_,1);
  func_0x0b04c660(&bStack_2e0,&bStack_140);
  uStack_258 = 0;
  bStack_250 = 0;
  cStack_220 = '\0';
  uStack_218 = uStack_218 & 0xffffff00;
  uStack_214 = uStack_214 & 0xffffff00;
  if ((bStack_d8 & 1) != 0) {
    func_0x0412a280(uStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
  }
  if ((bStack_f8 & 1) != 0) {
    func_0x0412a280(uStack_e8,CONCAT71(uStack_f7,bStack_f8) & 0xfffffffffffffffe);
  }
  if ((bStack_110 & 1) != 0) {
    func_0x0412a280(uStack_100,CONCAT71(uStack_10f,bStack_110) & 0xfffffffffffffffe);
  }
  if ((bStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe);
  }
  if ((bStack_140 & 1) != 0) {
    func_0x0412a280(uStack_130,CONCAT71(uStack_13f,bStack_140) & 0xfffffffffffffffe);
  }
  uStack_4e0 = 2;
  uStack_4dc = CONCAT31(uStack_4dc._1_3_,1);
  uStack_4b8 = (undefined4 **)CONCAT44(uStack_4b8._4_4_,(uint)uStack_5b0);
  func_0x0b04c660(&uStack_4b0,&uStack_5a8);
  uStack_428 = uStack_520;
  bStack_420 = 0;
  cStack_3f0 = 0;
  bVar25 = cStack_4e8 == '\x01';
  if (bVar25) {
    func_0x0c9ec1c0(&bStack_420,&bStack_518);
  }
  uStack_3e8 = CONCAT44(uStack_4dc,uStack_4e0);
  auStack_3e0[0] = pbStack_2e8._0_4_;
  cStack_3f0 = bVar25;
  func_0x0b04c660(&bStack_3d8,&bStack_2e0);
  uStack_350 = uStack_258;
  bStack_348 = 0;
  cStack_318 = 0;
  bVar25 = cStack_220 == '\x01';
  if (bVar25) {
    func_0x0c9ec1c0(&bStack_348,&bStack_250);
  }
  uStack_310 = CONCAT44(uStack_214,uStack_218);
  puStack_308 = (undefined4 *)0x0;
  puStack_300 = (undefined4 *)0x0;
  puStack_2f8 = (undefined4 *)0x0;
  ppuStack_150 = &puStack_308;
  uStack_148 = 0;
  cStack_318 = bVar25;
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_2f8 = puVar16 + 0x6c;
  ppuStack_170 = &puStack_308;
  ppuStack_168 = &puStack_1f8;
  ppuStack_160 = &puStack_2f0;
  uStack_158 = 0;
  *puVar16 = (undefined4)uStack_4b8;
  puStack_308 = puVar16;
  puStack_300 = puVar16;
  puStack_2f0 = puVar16;
  puStack_1f8 = puVar16;
  func_0x0b04c660(puVar16 + 2,&uStack_4b0);
  *(undefined1 *)(puVar16 + 0x24) = uStack_428;
  *(undefined1 *)(puVar16 + 0x26) = 0;
  *(undefined1 *)(puVar16 + 0x32) = 0;
  if (cStack_3f0 == '\x01') {
    func_0x0c9ec1c0(puVar16 + 0x26,&bStack_420);
    *(undefined1 *)(puVar16 + 0x32) = 1;
  }
  puVar18 = puStack_2f0;
  *(undefined8 *)(puVar16 + 0x34) = uStack_3e8;
  puStack_2f0[0x36] = auStack_3e0[0];
  puVar16 = puStack_2f0 + 0x38;
  puStack_2f0 = puStack_2f0 + 0x36;
  func_0x0b04c660(puVar16,&bStack_3d8);
  *(undefined1 *)(puVar18 + 0x5a) = uStack_350;
  *(undefined1 *)(puVar18 + 0x5c) = 0;
  *(undefined1 *)(puVar18 + 0x68) = 0;
  if (cStack_318 == '\x01') {
    func_0x0c9ec1c0(puVar18 + 0x5c,&bStack_348);
    *(undefined1 *)(puVar18 + 0x68) = 1;
  }
  puVar17 = puStack_1d0;
  *(undefined8 *)(puVar18 + 0x6a) = uStack_310;
  puStack_300 = puStack_2f0 + 0x36;
  puVar18 = puStack_300;
  puVar16 = puStack_1c8;
  if (puStack_1d0 != (undefined4 *)0x0) {
    for (; puVar17 != puVar16; puVar16 = puVar16 + -0x36) {
      if (*(char *)(puVar16 + -4) == '\x01') {
        lVar23 = *(long *)(puVar16 + -10);
        if (lVar23 != 0) {
          *(long *)(puVar16 + -8) = lVar23;
          func_0x0412a280(lVar23,*(long *)(puVar16 + -6) - lVar23);
        }
        if ((*(byte *)(puVar16 + -0x10) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar16 + -0xc),
                          *(ulong *)(puVar16 + -0x10) & 0xfffffffffffffffe);
        }
      }
      func_0x04a3a0b0(puVar16 + -0x34);
    }
    puStack_1c8 = puVar17;
    func_0x0412a280(puStack_1d0,(long)puStack_1c0 - (long)puStack_1d0);
    puVar18 = puStack_300;
  }
  puStack_1d0 = puStack_308;
  puStack_1c0 = puStack_2f8;
  puStack_308 = (undefined4 *)0x0;
  puStack_300 = (undefined4 *)0x0;
  puStack_2f8 = (undefined4 *)0x0;
  ppuStack_170 = &puStack_308;
  puStack_1c8 = puVar18;
  func_0x0c904760(&ppuStack_170);
  if (cStack_318 != '\0') {
    if (lStack_330 != 0) {
      lStack_328 = lStack_330;
      func_0x0412a280(lStack_330,lStack_320 - lStack_330);
    }
    if ((bStack_348 & 1) != 0) {
      func_0x0412a280(uStack_338,CONCAT71(uStack_347,bStack_348) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_370 & 1) != 0) {
    func_0x0412a280(uStack_360,CONCAT71(uStack_36f,bStack_370) & 0xfffffffffffffffe);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,CONCAT71(uStack_38f,bStack_390) & 0xfffffffffffffffe);
  }
  if ((bStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,CONCAT71(uStack_3a7,bStack_3a8) & 0xfffffffffffffffe);
  }
  if ((bStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,CONCAT71(uStack_3bf,bStack_3c0) & 0xfffffffffffffffe);
  }
  if ((bStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,CONCAT71(uStack_3d7,bStack_3d8) & 0xfffffffffffffffe);
  }
  if (cStack_3f0 == '\x01') {
    if (lStack_408 != 0) {
      func_0x0412a280(lStack_408,lStack_3f8 - lStack_408);
    }
    if ((bStack_420 & 1) != 0) {
      func_0x0412a280(uStack_410,CONCAT71(uStack_41f,bStack_420) & 0xfffffffffffffffe);
    }
  }
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,CONCAT44(uStack_444,uStack_448) & 0xfffffffffffffffe);
  }
  if ((bStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
  }
  if ((bStack_480 & 1) != 0) {
    func_0x0412a280(lStack_470,CONCAT71(uStack_47f,bStack_480) & 0xfffffffffffffffe);
  }
  if ((bStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,CONCAT71(uStack_497,bStack_498) & 0xfffffffffffffffe);
  }
  if ((uStack_4b0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_49c,uStack_4a0),uStack_4b0 & 0xfffffffffffffffe);
  }
  if (cStack_220 == '\x01') {
    if (lStack_238 != 0) {
      lStack_230 = lStack_238;
      func_0x0412a280(lStack_238,lStack_228 - lStack_238);
    }
    if ((bStack_250 & 1) != 0) {
      func_0x0412a280(uStack_240,CONCAT71(uStack_24f,bStack_250) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,CONCAT71(uStack_277,bStack_278) & 0xfffffffffffffffe);
  }
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe);
  }
  if ((bStack_2b0 & 1) != 0) {
    func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
  }
  if ((bStack_2c8 & 1) != 0) {
    func_0x0412a280(uStack_2b8,CONCAT71(uStack_2c7,bStack_2c8) & 0xfffffffffffffffe);
  }
  if ((bStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,CONCAT71(uStack_2df,bStack_2e0) & 0xfffffffffffffffe);
  }
  if (cStack_4e8 == '\x01') {
    if (lStack_500 != 0) {
      func_0x0412a280(lStack_500,lStack_4f0 - lStack_500);
    }
    if ((bStack_518 & 1) != 0) {
      func_0x0412a280(uStack_508,CONCAT71(uStack_517,bStack_518) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_540 & 1) != 0) {
    func_0x0412a280(uStack_530,CONCAT71(uStack_53f,bStack_540) & 0xfffffffffffffffe);
  }
  if ((bStack_560 & 1) != 0) {
    func_0x0412a280(uStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
  }
  if ((bStack_578 & 1) != 0) {
    func_0x0412a280(uStack_568,CONCAT71(uStack_577,bStack_578) & 0xfffffffffffffffe);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(uStack_580,CONCAT71(uStack_58f,bStack_590) & 0xfffffffffffffffe);
  }
  if ((uStack_5a8 & 1) != 0) {
    func_0x0412a280(uStack_598,uStack_5a8 & 0xfffffffffffffffe);
  }
  puVar16 = (undefined4 *)((long)&uStack_4d8 + 1);
  if ((uStack_188 & 1) == 0) {
    if ((uStack_4d8 & 1) == 0) {
      puStack_178 = puStack_4c8;
      uStack_188 = (uint)uStack_4d8;
      uStack_184 = uStack_4d8._4_4_;
      uStack_180 = (undefined4)uStack_4d0;
      uStack_17c = uStack_4d0._4_4_;
    }
    else {
      func_0x04885070(&uStack_188,puStack_4c8,uStack_4d0);
    }
  }
  else {
    uVar20 = uStack_4d8 >> 1 & 0x7f;
    if ((uStack_4d8 & 1) != 0) {
      uVar20 = uStack_4d0;
      puVar16 = puStack_4c8;
    }
    FUN_04885120(&uStack_188,puVar16,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_4d8,&uStack_4d8,&uStack_1f0);
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(puStack_178,CONCAT44(uStack_184,uStack_188) & 0xfffffffffffffffe);
  }
  puVar16 = puStack_1b8;
  if ((bStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
    puVar16 = puStack_1b8;
  }
  puStack_1b8 = puVar16;
  if (puVar16 != (undefined4 *)0x0) {
    while (puVar17 = puStack_1b0, puVar16 != puVar17) {
      if ((*(byte *)(puVar17 + -8) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar17 + -4),*(ulong *)(puVar17 + -8) & 0xfffffffffffffffe)
        ;
      }
      puStack_1b0 = puVar17 + -8;
    }
    puStack_1b0 = puVar16;
    func_0x0412a280(puStack_1b8,lStack_1a8 - (long)puStack_1b8);
  }
  uStack_4b8 = &puStack_1d0;
  func_0x0c904760(&uStack_4b8);
  if ((uStack_4d8 & 1) != 0) {
    func_0x0412a280(puStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
  }
  uVar20 = uStack_210;
  uVar21 = uStack_208;
  if ((uStack_210 & 1) == 0) {
    uVar21 = uStack_210 >> 1 & 0x7f;
  }
  uVar1 = uVar21 + 8;
  if (0xfffffffffffffff7 < uVar1) {
    uVar19 = func_0x04882e30();
    func_0x0c9c4720(&puStack_1d0);
    func_0x04a3a0b0(puVar17);
    func_0x0c904d00(&ppuStack_170);
    puStack_300 = (undefined4 *)uVar1;
    func_0x0c904760(&ppuStack_150);
    func_0x0c8f7cc0(auStack_3e0);
    func_0x0c8f7cc0(&uStack_4b8);
    func_0x0c8f7cc0(&pbStack_2e8);
    func_0x0c8f7cc0(&uStack_5b0);
    func_0x0c8f6c60(&uStack_1f0);
    if ((uStack_4d8 & 1) != 0) {
      func_0x0412a280(puStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
    }
    if ((uStack_210 & 1) != 0) {
      func_0x0412a280(puStack_200,uStack_210 & 0xfffffffffffffffe);
    }
    func_0x0cb63dc0(param_1);
    uVar19 = func_0x0eee2d70(uVar19);
    func_0x0c8f6c60(&uStack_4b8);
    if ((uStack_5b0 & 1) != 0) {
      func_0x0412a280(puStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
    }
    func_0x0412a280(uVar1,0x30);
    func_0x0cb63dc0(param_1);
    func_0x0eee2d70(uVar19);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar1 < 0x17) {
    uStack_4d0 = 0;
    puStack_4c8 = (undefined4 *)0x0;
    uStack_4d8 = (ulong)(byte)((char)uVar1 * '\x02');
    puVar16 = (undefined4 *)((long)&uStack_4d8 + 1);
    if (uVar21 == 0) goto LAB_0cb6289b;
  }
  else {
    uVar24 = 0x1a;
    if ((uVar1 | 7) != 0x17) {
      uVar24 = (uVar1 | 7) + 1;
    }
    puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
    if (puVar16 == (undefined4 *)0x0) {
      func_0x0eec74c0(uVar24,0);
    }
    uStack_4d8 = uVar24 | 1;
    uStack_4d0 = uVar1;
    puStack_4c8 = puVar16;
  }
  puVar18 = puStack_200;
  if ((uVar20 & 1) == 0) {
    puVar18 = (undefined4 *)((long)&uStack_210 + 1);
  }
  memmove(puVar16,puVar18,uVar21);
LAB_0cb6289b:
  *(undefined8 *)((long)puVar16 + uVar21) = 0x73756f6e696d6f2f;
  *(undefined1 *)((long)puVar16 + uVar21 + 8) = 0;
  func_0x0c8f69c0(&uStack_1f0);
  uStack_1e4 = 0x3f000000;
  uStack_1d4 = 0x14;
  uStack_1f0 = _DAT_014e6060;
  func_0x0b04cea0(&bStack_b8,&UNK_014d77ad);
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,3);
  func_0x0b04c660(&uStack_5a8,&bStack_b8);
  uStack_520 = 0;
  bStack_518 = 0;
  cStack_4e8 = '\0';
  uStack_4e0 = uStack_4e0 & 0xffffff00;
  uStack_4dc = uStack_4dc & 0xffffff00;
  if ((bStack_50 & 1) != 0) {
    func_0x0412a280(uStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
  }
  if ((bStack_70 & 1) != 0) {
    func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
  }
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  if ((bStack_a0 & 1) != 0) {
    func_0x0412a280(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
  }
  if ((bStack_b8 & 1) != 0) {
    func_0x0412a280(uStack_a8,CONCAT71(uStack_b7,bStack_b8) & 0xfffffffffffffffe);
  }
  uStack_4e0 = 1;
  uStack_4dc = CONCAT31(uStack_4dc._1_3_,1);
  func_0x0b04cea0(&bStack_140,&UNK_014d77ad);
  pbStack_2e8 = (byte *)CONCAT44(pbStack_2e8._4_4_,1);
  func_0x0b04c660(&bStack_2e0,&bStack_140);
  uStack_258 = 0;
  bStack_250 = 0;
  cStack_220 = '\0';
  uStack_218 = uStack_218 & 0xffffff00;
  uStack_214 = uStack_214 & 0xffffff00;
  if ((bStack_d8 & 1) != 0) {
    func_0x0412a280(uStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
  }
  if ((bStack_f8 & 1) != 0) {
    func_0x0412a280(uStack_e8,CONCAT71(uStack_f7,bStack_f8) & 0xfffffffffffffffe);
  }
  if ((bStack_110 & 1) != 0) {
    func_0x0412a280(uStack_100,CONCAT71(uStack_10f,bStack_110) & 0xfffffffffffffffe);
  }
  if ((bStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe);
  }
  if ((bStack_140 & 1) != 0) {
    func_0x0412a280(uStack_130,CONCAT71(uStack_13f,bStack_140) & 0xfffffffffffffffe);
  }
  uStack_4e0 = 2;
  uStack_4dc = CONCAT31(uStack_4dc._1_3_,1);
  uStack_4b8 = (undefined4 **)CONCAT44(uStack_4b8._4_4_,(uint)uStack_5b0);
  func_0x0b04c660(&uStack_4b0,&uStack_5a8);
  uStack_428 = uStack_520;
  bStack_420 = 0;
  cStack_3f0 = 0;
  bVar25 = cStack_4e8 == '\x01';
  if (bVar25) {
    func_0x0c9ec1c0(&bStack_420,&bStack_518);
  }
  uStack_3e8 = CONCAT44(uStack_4dc,uStack_4e0);
  auStack_3e0[0] = pbStack_2e8._0_4_;
  cStack_3f0 = bVar25;
  func_0x0b04c660(&bStack_3d8,&bStack_2e0);
  uStack_350 = uStack_258;
  bStack_348 = 0;
  cStack_318 = 0;
  bVar25 = cStack_220 == '\x01';
  if (bVar25) {
    func_0x0c9ec1c0(&bStack_348,&bStack_250);
  }
  uStack_310 = CONCAT44(uStack_214,uStack_218);
  puStack_308 = (undefined4 *)0x0;
  puStack_300 = (undefined4 *)0x0;
  puStack_2f8 = (undefined4 *)0x0;
  ppuStack_150 = &puStack_308;
  uStack_148 = 0;
  cStack_318 = bVar25;
  puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar16 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_2f8 = puVar16 + 0x6c;
  ppuStack_170 = &puStack_308;
  ppuStack_168 = &puStack_1f8;
  ppuStack_160 = &puStack_2f0;
  uStack_158 = 0;
  *puVar16 = (undefined4)uStack_4b8;
  puStack_308 = puVar16;
  puStack_300 = puVar16;
  puStack_2f0 = puVar16;
  puStack_1f8 = puVar16;
  func_0x0b04c660(puVar16 + 2,&uStack_4b0);
  *(undefined1 *)(puVar16 + 0x24) = uStack_428;
  *(undefined1 *)(puVar16 + 0x26) = 0;
  *(undefined1 *)(puVar16 + 0x32) = 0;
  if (cStack_3f0 == '\x01') {
    func_0x0c9ec1c0(puVar16 + 0x26,&bStack_420);
    *(undefined1 *)(puVar16 + 0x32) = 1;
  }
  puVar18 = puStack_2f0;
  *(undefined8 *)(puVar16 + 0x34) = uStack_3e8;
  puStack_2f0[0x36] = auStack_3e0[0];
  puVar16 = puStack_2f0 + 0x38;
  puStack_2f0 = puStack_2f0 + 0x36;
  func_0x0b04c660(puVar16,&bStack_3d8);
  *(undefined1 *)(puVar18 + 0x5a) = uStack_350;
  *(undefined1 *)(puVar18 + 0x5c) = 0;
  *(undefined1 *)(puVar18 + 0x68) = 0;
  if (cStack_318 == '\x01') {
    func_0x0c9ec1c0(puVar18 + 0x5c,&bStack_348);
    *(undefined1 *)(puVar18 + 0x68) = 1;
  }
  puVar17 = puStack_1d0;
  *(undefined8 *)(puVar18 + 0x6a) = uStack_310;
  puStack_300 = puStack_2f0 + 0x36;
  puVar18 = puStack_300;
  puVar16 = puStack_1c8;
  if (puStack_1d0 != (undefined4 *)0x0) {
    for (; puVar17 != puVar16; puVar16 = puVar16 + -0x36) {
      if (*(char *)(puVar16 + -4) == '\x01') {
        lVar23 = *(long *)(puVar16 + -10);
        if (lVar23 != 0) {
          *(long *)(puVar16 + -8) = lVar23;
          func_0x0412a280(lVar23,*(long *)(puVar16 + -6) - lVar23);
        }
        if ((*(byte *)(puVar16 + -0x10) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar16 + -0xc),
                          *(ulong *)(puVar16 + -0x10) & 0xfffffffffffffffe);
        }
      }
      func_0x04a3a0b0(puVar16 + -0x34);
    }
    puStack_1c8 = puVar17;
    func_0x0412a280(puStack_1d0,(long)puStack_1c0 - (long)puStack_1d0);
    puVar18 = puStack_300;
  }
  puStack_1d0 = puStack_308;
  puStack_1c0 = puStack_2f8;
  puStack_308 = (undefined4 *)0x0;
  puStack_300 = (undefined4 *)0x0;
  puStack_2f8 = (undefined4 *)0x0;
  ppuStack_170 = &puStack_308;
  puStack_1c8 = puVar18;
  func_0x0c904760(&ppuStack_170);
  if (cStack_318 != '\0') {
    if (lStack_330 != 0) {
      lStack_328 = lStack_330;
      func_0x0412a280(lStack_330,lStack_320 - lStack_330);
    }
    if ((bStack_348 & 1) != 0) {
      func_0x0412a280(uStack_338,CONCAT71(uStack_347,bStack_348) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_370 & 1) != 0) {
    func_0x0412a280(uStack_360,CONCAT71(uStack_36f,bStack_370) & 0xfffffffffffffffe);
  }
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,CONCAT71(uStack_38f,bStack_390) & 0xfffffffffffffffe);
  }
  if ((bStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,CONCAT71(uStack_3a7,bStack_3a8) & 0xfffffffffffffffe);
  }
  if ((bStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,CONCAT71(uStack_3bf,bStack_3c0) & 0xfffffffffffffffe);
  }
  if ((bStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,CONCAT71(uStack_3d7,bStack_3d8) & 0xfffffffffffffffe);
  }
  if (cStack_3f0 == '\x01') {
    if (lStack_408 != 0) {
      func_0x0412a280(lStack_408,lStack_3f8 - lStack_408);
    }
    if ((bStack_420 & 1) != 0) {
      func_0x0412a280(uStack_410,CONCAT71(uStack_41f,bStack_420) & 0xfffffffffffffffe);
    }
  }
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,CONCAT44(uStack_444,uStack_448) & 0xfffffffffffffffe);
  }
  if ((bStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
  }
  if ((bStack_480 & 1) != 0) {
    func_0x0412a280(lStack_470,CONCAT71(uStack_47f,bStack_480) & 0xfffffffffffffffe);
  }
  if ((bStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,CONCAT71(uStack_497,bStack_498) & 0xfffffffffffffffe);
  }
  if ((uStack_4b0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_49c,uStack_4a0),uStack_4b0 & 0xfffffffffffffffe);
  }
  func_0x0cbae820(&uStack_1f0);
  if (cStack_220 == '\x01') {
    if (lStack_238 != 0) {
      lStack_230 = lStack_238;
      func_0x0412a280(lStack_238,lStack_228 - lStack_238);
    }
    if ((bStack_250 & 1) != 0) {
      func_0x0412a280(uStack_240,CONCAT71(uStack_24f,bStack_250) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,CONCAT71(uStack_277,bStack_278) & 0xfffffffffffffffe);
  }
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,CONCAT71(uStack_297,bStack_298) & 0xfffffffffffffffe);
  }
  if ((bStack_2b0 & 1) != 0) {
    func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
  }
  if ((bStack_2c8 & 1) != 0) {
    func_0x0412a280(uStack_2b8,CONCAT71(uStack_2c7,bStack_2c8) & 0xfffffffffffffffe);
  }
  if ((bStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,CONCAT71(uStack_2df,bStack_2e0) & 0xfffffffffffffffe);
  }
  if (cStack_4e8 == '\x01') {
    if (lStack_500 != 0) {
      func_0x0412a280(lStack_500,lStack_4f0 - lStack_500);
    }
    if ((bStack_518 & 1) != 0) {
      func_0x0412a280(uStack_508,CONCAT71(uStack_517,bStack_518) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_540 & 1) != 0) {
    func_0x0412a280(uStack_530,CONCAT71(uStack_53f,bStack_540) & 0xfffffffffffffffe);
  }
  if ((bStack_560 & 1) != 0) {
    func_0x0412a280(uStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
  }
  if ((bStack_578 & 1) != 0) {
    func_0x0412a280(uStack_568,CONCAT71(uStack_577,bStack_578) & 0xfffffffffffffffe);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(uStack_580,CONCAT71(uStack_58f,bStack_590) & 0xfffffffffffffffe);
  }
  if ((uStack_5a8 & 1) == 0) {
    uVar20 = uStack_4d8;
  }
  else {
    func_0x0412a280(uStack_598,uStack_5a8 & 0xfffffffffffffffe);
    uVar20 = uStack_4d8;
  }
  uStack_4d8 = uVar20;
  if ((uStack_188 & 1) == 0) {
    if (((byte)uStack_4d8 & 1) == 0) {
      uStack_4d8._0_4_ = (uint)uVar20;
      uStack_4d8._4_4_ = (undefined4)(uVar20 >> 0x20);
      uStack_4d0._4_4_ = (undefined4)(uStack_4d0 >> 0x20);
      uStack_188 = (uint)uStack_4d8;
      uStack_184 = uStack_4d8._4_4_;
      uStack_180 = (undefined4)uStack_4d0;
      uStack_17c = uStack_4d0._4_4_;
      puStack_178 = puStack_4c8;
    }
    else {
      func_0x04885070(&uStack_188,puStack_4c8,uStack_4d0);
    }
  }
  else {
    uVar20 = (ulong)((byte)uStack_4d8 >> 1);
    puVar16 = (undefined4 *)((long)&uStack_4d8 + 1);
    if (((byte)uStack_4d8 & 1) != 0) {
      uVar20 = uStack_4d0;
      puVar16 = puStack_4c8;
    }
    FUN_04885120(&uStack_188,puVar16,uVar20);
  }
  func_0x0cbadf80(param_1,&uStack_4d8,&uStack_4d8,&uStack_1f0);
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(puStack_178,CONCAT44(uStack_184,uStack_188) & 0xfffffffffffffffe);
  }
  puVar16 = puStack_1b8;
  if ((bStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
    puVar16 = puStack_1b8;
  }
  puStack_1b8 = puVar16;
  puVar18 = puStack_1b0;
  if (puVar16 != (undefined4 *)0x0) {
    for (; puVar16 != puVar18; puVar18 = puVar18 + -8) {
      if ((*(byte *)(puVar18 + -8) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar18 + -4),*(ulong *)(puVar18 + -8) & 0xfffffffffffffffe)
        ;
      }
    }
    func_0x0412a280(puStack_1b8,lStack_1a8 - (long)puStack_1b8);
  }
  uStack_4b8 = &puStack_1d0;
  func_0x0c904760(&uStack_4b8);
  if ((uStack_4d8 & 1) != 0) {
    func_0x0412a280(puStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
  }
  if ((uStack_210 & 1) != 0) {
    func_0x0412a280(puStack_200,uStack_210 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11ae88e  minecraft:trial_chamber/breeze
 * 0x11ae89c  l_chamber/breeze
 * 0x11ca993  minecraft:trial_chamber/melee/spider
 * 0x11ca9a3  chamber/melee/spider
 * 0x11ca9b8  minecraft:trial_chamber/melee/zombie
 * 0x11ca9c8  chamber/melee/zombie
 * 0x1233ada  minecraft:trial_chamber/slow_ranged/skeleton
 * 0x1233aea  chamber/slow_ranged/skeleton
 * 0x1233af6  _ranged/skeleton
 * 0x124f66b  minecraft:trial_chamber/ranged/skeleton
 * 0x124f67b  chamber/ranged/skeleton
 * 0x1352499  minecraft:trial_chamber/slow_ranged/poison_skeleton
 * 0x13524a9  chamber/slow_ranged/poison_skeleton
 * 0x13524b9  ged/poison_skeleton
 * 0x13d676c  minecraft:trial_chamber/ranged/poison_skeleton
 * 0x13d677c  chamber/ranged/poison_skeleton
 * 0x13d678a  /poison_skeleton
 * 0x1409c5c  minecraft:trial_chamber/slow_ranged/stray
 * 0x1409c6c  chamber/slow_ranged/stray
 * 0x1409c75  low_ranged/stray
 * 0x14573c4  minecraft:trial_chamber/melee/husk
 * 0x14573d4  chamber/melee/husk
 * 0x14a5510  minecraft:trial_chamber/ranged/stray
 * 0x14a5520  chamber/ranged/stray
 */
