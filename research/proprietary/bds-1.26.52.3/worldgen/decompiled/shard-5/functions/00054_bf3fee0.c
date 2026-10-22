/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc03fee0 (ELF vaddr 0xbf3fee0)
 * Label: caller-of-callee
 * Body:  [[0c03fee0, 0c04043d] [0c040440, 0c040482] [0c040490, 0c0411d1] [0c0411e0, 0c0415d7]]
 * Ghidra: FUN_0c03fee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c03fee0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  long *plVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_3b8 [8];
  long *plStack_3b0;
  ulong uStack_3a8;
  code *pcStack_3a0;
  code *pcStack_398;
  undefined4 uStack_390;
  char cStack_38c;
  char cStack_388;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  char cStack_360;
  long lStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined1 *puStack_338;
  undefined *puStack_330;
  undefined1 *puStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined4 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined2 uStack_298;
  undefined2 uStack_296;
  uint uStack_294;
  uint uStack_290;
  undefined1 uStack_28c;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined4 uStack_238;
  undefined1 auStack_230 [24];
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  ulong auStack_200 [2];
  undefined *puStack_1f0;
  code *pcStack_1e8;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined2 uStack_12a;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined4 uStack_ee;
  undefined2 uStack_ea;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_68 [56];
  
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  uVar4 = _UNK_0129a6bd;
  puVar9[10] = _DAT_0129a6b5;
  puVar9[0xb] = uVar4;
  uVar4 = _UNK_0129a6ad;
  puVar9[8] = _DAT_0129a6a5;
  puVar9[9] = uVar4;
  uVar4 = _UNK_0129a69d;
  puVar9[6] = _DAT_0129a695;
  puVar9[7] = uVar4;
  uVar4 = _UNK_0129a68d;
  puVar9[4] = _DAT_0129a685;
  puVar9[5] = uVar4;
  uVar4 = _UNK_0129a67d;
  puVar9[2] = _DAT_0129a675;
  puVar9[3] = uVar4;
  uVar4 = _UNK_0129a66d;
  *puVar9 = _DAT_0129a665;
  puVar9[1] = uVar4;
  *(undefined1 *)(puVar9 + 0xc) = 0;
  uStack_378 = uStack_378 & 0xffffffffffffff00;
  cStack_360 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_378 = *param_3;
    uStack_370 = 0;
    uVar17 = param_3[1];
    if ((uVar17 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((uVar17 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar17 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar17 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_368 = 0;
    uVar18 = param_3[2];
    uStack_370 = uVar17;
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar18 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar18 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_360 = '\x01';
    uStack_368 = uVar18;
  }
  lVar11 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar21 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar12 = lVar11 + 9;
    if (bVar21) {
      lVar12 = *(long *)(lVar11 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar21) {
      uVar17 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0c069d90(auStack_3b8,param_1,lVar12,uVar17,1);
  }
  else {
    func_0x0c069d90(auStack_3b8,param_1,0,0,1);
  }
  if (cStack_388 == '\0') {
    uStack_278._4_4_ = (uint)((ulong)uStack_278 >> 0x20);
    uStack_288._4_4_ = (undefined4)((ulong)uStack_288 >> 0x20);
    if ((DAT_0f6d3210 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d3210), iVar7 != 0)) {
      func_0x0ee25020(0xf6d31e8,&UNK_01267571);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d31e8,0xf53dab8);
      FUN_0410844d(&DAT_0f6d3210);
    }
    uVar17 = (ulong)(DAT_0f6d31f0 >> 1);
    lVar11 = 0xf6d31f1;
    if ((DAT_0f6d31f0 & 1) != 0) {
      uVar17 = _DAT_0f6d31f8;
      lVar11 = _DAT_0f6d3200;
    }
    func_0x0c06a780(&lStack_358,auStack_3b8,lVar11,uVar17,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f34e808;
    if (uStack_340 != (long *)0x0) {
      lVar11 = *uStack_340;
      uStack_340 = plVar10;
      (**(code **)(lVar11 + 8))();
      plVar10 = uStack_340;
    }
    uStack_340 = plVar10;
    uStack_288 = CONCAT44(uStack_288._4_4_,plStack_348._0_4_);
    plStack_280 = (long *)0x0;
    uStack_278 = (long *)((ulong)uStack_278._4_4_ << 0x20);
    uStack_270 = 1;
    uStack_268 = 0;
    uStack_260 = &UNK_0c09c900;
    puStack_258 = &SUB_048b06d0;
    puStack_250 = &UNK_0c09c620;
    puStack_248 = &UNK_0c09c9c0;
    puStack_240 = &UNK_0c09cc30;
    uStack_238 = 0;
    auStack_230._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(plStack_350,&uStack_288);
    uVar4 = auStack_230._8_8_;
    if ((long *)auStack_230._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_230._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_230._8_8_ + 0x10))(auStack_230._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar7 = *(int *)((long)plStack_350 + 0x1c);
    if (iVar7 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_350 + 0x10) + 0x78) + 0x60);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_350 + 0x18)) {
        piVar14 = piVar14 + 0x16;
        iVar7 = *piVar14;
      }
      lVar11 = *(long *)(piVar14 + 0xc);
      while (lVar11 != *(long *)((long)plStack_350 + 8)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar11 = *(long *)(piVar14 + 0xc);
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 1) {
      piVar14 = *(int **)(*(long *)(*(long *)((long)plStack_350 + 0x10) + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != *(int *)((long)plStack_350 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar7 == 0) {
      puVar1 = (uint *)(*(long *)((long)plStack_350 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_358);
    func_0x048b0bc0(&uStack_340);
  }
  if ((DAT_0f6d3210 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d3210), iVar7 != 0)) {
    func_0x0ee25020(0xf6d31e8,&UNK_01267571);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d31e8,0xf53dab8);
    FUN_0410844d(&DAT_0f6d3210);
  }
  uVar17 = (ulong)(DAT_0f6d31f0 >> 1);
  lVar11 = 0xf6d31f1;
  if ((DAT_0f6d31f0 & 1) != 0) {
    uVar17 = _DAT_0f6d31f8;
    lVar11 = _DAT_0f6d3200;
  }
  lVar12 = func_0x0c09bf00(param_1 + 0x18);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar21 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar11 = lVar12 + 9;
    if (bVar21) {
      lVar11 = *(long *)(lVar12 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar21) {
      uVar17 = *(ulong *)(lVar12 + 0x10);
    }
  }
  func_0x0c09d080(&uStack_288,param_1,lVar11,uVar17);
  lVar12 = uStack_288 + 0x18;
  lVar11 = func_0x0c09bf00(lVar12);
  for (pbVar16 = *(byte **)(uStack_288 + 0x50); pbVar16 != *(byte **)(uStack_288 + 0x58);
      pbVar16 = pbVar16 + 0x38) {
    bVar3 = *pbVar16;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0c04049a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0c04049a:
      if ((bVar3 & 1) == 0) {
        pbVar20 = pbVar16 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar16 + 0x10);
      }
      auVar22[0] = -(*pbVar20 == DAT_014eaba0);
      auVar22[1] = -(pbVar20[1] == DAT_014eaba0._1_1_);
      auVar22[2] = -(pbVar20[2] == DAT_014eaba0._2_1_);
      auVar22[3] = -(pbVar20[3] == DAT_014eaba0._3_1_);
      auVar22[4] = -(pbVar20[4] == DAT_014eaba0._4_1_);
      auVar22[5] = -(pbVar20[5] == DAT_014eaba0._5_1_);
      auVar22[6] = -(pbVar20[6] == DAT_014eaba0._6_1_);
      auVar22[7] = -(pbVar20[7] == DAT_014eaba0._7_1_);
      auVar22[8] = -(pbVar20[8] == DAT_014eaba0._8_1_);
      auVar22[9] = -(pbVar20[9] == DAT_014eaba0._9_1_);
      auVar22[10] = -(pbVar20[10] == DAT_014eaba0._10_1_);
      auVar22[0xb] = -(pbVar20[0xb] == DAT_014eaba0._11_1_);
      auVar22[0xc] = -(pbVar20[0xc] == DAT_014eaba0._12_1_);
      auVar22[0xd] = -(pbVar20[0xd] == DAT_014eaba0._13_1_);
      auVar22[0xe] = -(pbVar20[0xe] == DAT_014eaba0._14_1_);
      auVar22[0xf] = -(pbVar20[0xf] == DAT_014eaba0._15_1_);
      auVar23[0] = -(pbVar20[10] == DAT_014e4ff0);
      auVar23[1] = -(pbVar20[0xb] == DAT_014e4ff0._1_1_);
      auVar23[2] = -(pbVar20[0xc] == DAT_014e4ff0._2_1_);
      auVar23[3] = -(pbVar20[0xd] == DAT_014e4ff0._3_1_);
      auVar23[4] = -(pbVar20[0xe] == DAT_014e4ff0._4_1_);
      auVar23[5] = -(pbVar20[0xf] == DAT_014e4ff0._5_1_);
      auVar23[6] = -(pbVar20[0x10] == DAT_014e4ff0._6_1_);
      auVar23[7] = -(pbVar20[0x11] == DAT_014e4ff0._7_1_);
      auVar23[8] = -(pbVar20[0x12] == DAT_014e4ff0._8_1_);
      auVar23[9] = -(pbVar20[0x13] == DAT_014e4ff0._9_1_);
      auVar23[10] = -(pbVar20[0x14] == DAT_014e4ff0._10_1_);
      auVar23[0xb] = -(pbVar20[0x15] == DAT_014e4ff0._11_1_);
      auVar23[0xc] = -(pbVar20[0x16] == DAT_014e4ff0._12_1_);
      auVar23[0xd] = -(pbVar20[0x17] == DAT_014e4ff0._13_1_);
      auVar23[0xe] = -(pbVar20[0x18] == DAT_014e4ff0._14_1_);
      auVar23[0xf] = -(pbVar20[0x19] == DAT_014e4ff0._15_1_);
      auVar23 = auVar23 & auVar22;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar16 == *(byte **)(uStack_288 + 0x58)) {
LAB_0c0404c9:
    if ((int)uStack_260 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0c04053d;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auStack_3b8 = (undefined1  [8])func_0x048b0c90(lVar12,lVar11,uStack_260._4_4_,1);
      if (auStack_3b8 == (undefined1  [8])0x0) {
        _auStack_3b8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_3b8);
        if (auStack_3b8 == (undefined1  [8])0x0) goto LAB_0c04053d;
      }
      if ((*(int *)((long)auStack_3b8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_3b8 + 0x58) != 0)) {
        lVar11 = *(long *)((long)auStack_3b8 + 0x58) + 0x40;
      }
      else {
LAB_0c04053d:
        lVar11 = 0;
      }
    }
    puStack_1f0 = &UNK_0488e0b0;
    uStack_1e0 = 0x48b5725f;
    pcStack_1e8 = (code *)0x0;
    uStack_1dc = 0;
    auStack_200[0] = 0;
    _auStack_3b8 = (undefined1  [16])0x0;
    pcStack_3a0 = (code *)&UNK_0488e0b0;
    pcStack_398 = (code *)0x0;
    uStack_390 = 0x48b5725f;
    cStack_38c = '\0';
    puStack_208 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_208 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_218 = 0x21;
    uStack_210 = 0x1a;
    *(ulong *)((long)puStack_208 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_208 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_208 = _DAT_013bbacd;
    puStack_208[1] = uVar4;
    *(undefined1 *)((long)puStack_208 + 0x1a) = 0;
    lVar11 = func_0x048b5060(lVar11,&uStack_218);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_3b8) {
      pcVar13 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar19 = (undefined8 *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar19);
        if (cStack_38c != '\0') {
          if (cStack_38c == '\x02') {
            (*pcStack_3a0)(5,&plStack_3b0,puVar19);
          }
          else {
            plVar10 = plStack_3b0;
            plStack_3b0 = (long *)0x0;
            *puVar19 = plVar10;
          }
        }
      }
      *(code **)(lVar11 + 0x38) = pcStack_3a0;
      *(code **)(lVar11 + 0x40) = pcStack_398;
      *(undefined4 *)(lVar11 + 0x48) = uStack_390;
      *(char *)(lVar11 + 0x4c) = cStack_38c;
      pcVar13 = pcStack_398;
    }
    if ((uStack_218 & 1) != 0) {
      func_0x0412a280(puStack_208,uStack_218 & 0xfffffffffffffffe);
      pcVar13 = pcStack_398;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(&plStack_3b0);
    }
    if (pcStack_1e8 != (code *)0x0) {
      (*pcStack_1e8)(auStack_200);
    }
  }
  else {
    iVar7 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0c0404c9;
  }
  puStack_328 = puStack_258;
  puStack_338 = (undefined1 *)uStack_268;
  puStack_330 = uStack_260;
  plStack_348 = uStack_278;
  uStack_340 = (long *)uStack_270;
  lStack_358 = uStack_288;
  plStack_350 = plStack_280;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffc49;
  _auStack_3b8 = auVar5 << 8;
  pcStack_3a0 = (code *)((ulong)pcStack_3a0 & 0xffffffffffffff00);
  if (cStack_360 == '\x01') {
    plStack_3b0 = (long *)0x0;
    auStack_3b8 = (undefined1  [8])uStack_378;
    auVar22 = _auStack_3b8;
    plStack_3b0 = (long *)uStack_370;
    if ((uStack_370 & 0x80000000000000) != 0) {
      uVar17 = uStack_370 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar17 - 8);
      lVar11 = lVar12 + 9;
      _auStack_3b8 = auVar22;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar17,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      plStack_3b0 = (long *)((ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_3a8 = 0;
    uVar17 = uStack_368;
    if ((uStack_368 & 0x80000000000000) != 0) {
      uVar17 = uStack_368 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar17 - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar17,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar17 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_3a0 = (code *)CONCAT71(pcStack_3a0._1_7_,1);
    uStack_3a8 = uVar17;
  }
  func_0x0412e5e0(auStack_200,puVar9,0x60);
  lStack_1d8 = lStack_358;
  lStack_1d0 = (long)plStack_350;
  uStack_1c8 = (ulong)plStack_348;
  uStack_1c0 = (ulong)uStack_340;
  uStack_1b8 = puStack_338;
  uStack_1b0 = puStack_330;
  puStack_1a8 = puStack_328;
  if ((auStack_200[0] & 1) != 0) {
    func_0x0412a280(puStack_1f0,auStack_200[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_3a0 == '\x01') {
    if ((uStack_3a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_3a8 = 0;
    if (((ulong)plStack_3b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_3b0 & 0xff00ffffffffffff) - 8);
    }
  }
  uStack_1b0 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f6d4928 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d4928), iVar7 != 0)) {
    func_0x0c09be90(0xf6d4910);
    FUN_0410844d(&DAT_0f6d4928);
  }
  lStack_358 = CONCAT44(lStack_358._4_4_,uStack_1b0._4_4_);
  plStack_350 = (long *)0x0;
  plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
  uStack_340 = (long *)0x1;
  puStack_338 = &SUB_048aead0;
  puStack_330 = &UNK_079717a0;
  puStack_328 = &UNK_0c09d930;
  lStack_320 = 0;
  uStack_318 = (ulong)uStack_318._4_4_ << 0x20;
  lStack_310 = 0;
  lStack_308 = 0;
  func_0x049057f0(&lStack_1d0,&lStack_358);
  func_0x048aea50(&lStack_358);
  uStack_278 = (long *)uStack_1c0;
  uStack_270 = uStack_1b8;
  uStack_288 = lStack_1d0;
  plStack_280 = (long *)uStack_1c8;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0f0126a0;
  if ((DAT_0f551bc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551bc8), iVar7 != 0)) {
    func_0x04905be0(0xf551bb0);
    FUN_0410844d(&DAT_0f551bc8);
  }
  lStack_358 = CONCAT44(lStack_358._4_4_,_DAT_0f551bb4);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c48;
  plStack_350 = plVar10 + 3;
  plVar10[3] = (long)puVar19;
  plVar10[4] = 0;
  *(undefined1 *)(plVar10 + 5) = 0xff;
  _auStack_3b8 = ZEXT816(0);
  plStack_348 = plVar10;
  func_0x048afd20(&uStack_288,&lStack_358);
  plVar10 = plStack_348;
  if (plStack_348 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_348 + 1;
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_348 + 0x10))(plStack_348);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_3b0;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_3b0 + 1;
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar10);
    }
  }
  lStack_e8 = lStack_1d8;
  lStack_e0 = lStack_1d0;
  uStack_d8 = uStack_1c8;
  uStack_d0 = uStack_1c0;
  uStack_c8 = uStack_1b8;
  uStack_c0 = uStack_1b0;
  puStack_b8 = puStack_1a8;
  uStack_ee = 0;
  uStack_ea = 0;
  uStack_120 = 0xffffffffffffffff;
  uStack_118 = 0;
  uStack_110 = 0xff;
  puStack_128 = &UNK_0f0edc68;
  uStack_108 = 0;
  uStack_100 = _DAT_014f0238;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x0c042ca0(&lStack_1a0,&lStack_e8,&puStack_128);
  func_0x0c09d5c0(&lStack_358,lStack_1a0 + 0x18);
  if (uStack_340._4_4_ == 2) {
    piVar14 = *(int **)(plStack_348[0xf] + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)uStack_340) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    plVar10 = *(long **)(piVar14 + 0xc);
    while (plVar10 != plStack_350) {
      piVar14 = *(int **)(piVar14 + 0xe);
      plVar10 = *(long **)(piVar14 + 0xc);
    }
LAB_0c040c6f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_340._4_4_ == 1) {
      piVar14 = *(int **)(plStack_348[0xf] + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != (int)uStack_340) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0c040c6f;
    }
    if (uStack_340._4_4_ == 0) {
      *(uint *)(plStack_348 + 3) = *(uint *)(plStack_348 + 3) | 0x40000;
    }
  }
  if ((DAT_0f6d4928 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6d4928), iVar7 != 0)) {
    func_0x0c09be90(0xf6d4910);
    FUN_0410844d(&DAT_0f6d4928);
  }
  uStack_178 = 0x425ed3ca00000001;
  lVar11 = lStack_1a0 + 0x18;
  lStack_358 = func_0x0c09bf00(lVar11);
  plStack_350 = (long *)lVar11;
  func_0x0ed621a0(&lStack_358,uStack_178._4_4_);
  plStack_350 = &uStack_198;
  lStack_358 = CONCAT62(lStack_358._2_6_,0x10);
  plStack_348 = (long *)CONCAT44(plStack_348._4_4_,uStack_178._4_4_);
  uStack_340 = (long *)0x0;
  puStack_338 = (undefined1 *)0x0;
  puStack_330 = (undefined *)0x0;
  puStack_328 = (undefined1 *)0x0;
  lStack_320 = 0;
  uStack_318 = CONCAT17(uStack_318._7_1_,0x65756c61760a);
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  lStack_2e8 = 0;
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  uStack_2d0 = 0x3f600000;
  FUN_048afb10(&lStack_300,8);
  lStack_2a8 = 0;
  lStack_2a0 = 0;
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  uStack_298 = 0xff00;
  uStack_294 = uStack_294 & 0xffffff00;
  uStack_290 = uStack_290 & 0xffffff00;
  uStack_28c = 0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0f0126a0;
  if (uStack_340 != (long *)0x0) {
    lVar11 = *uStack_340;
    uStack_340 = puVar19;
    (**(code **)(lVar11 + 8))();
    puVar19 = uStack_340;
  }
  uStack_340 = puVar19;
  uStack_288 = CONCAT44(uStack_288._4_4_,plStack_348._0_4_);
  plStack_280 = (long *)0x0;
  uStack_278 = (long *)((ulong)uStack_278 & 0xffffffff00000000);
  uStack_270 = 1;
  uStack_268 = 0;
  uStack_260 = &UNK_05daeda0;
  puStack_258 = &SUB_048b06d0;
  puStack_250 = &UNK_05daea90;
  puStack_248 = &UNK_0c09db20;
  puStack_240 = &UNK_0c09dc80;
  uStack_238 = 0;
  auStack_230._0_16_ = ZEXT816(0);
  func_0x048b05a0(plStack_350,&uStack_288);
  uVar4 = auStack_230._8_8_;
  if ((long *)auStack_230._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_230._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_230._8_8_ + 0x10))(auStack_230._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  plVar10 = plStack_350;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  uStack_288 = CONCAT44(uStack_288._4_4_,_DAT_0f550a0c);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  puVar6 = puStack_338;
  puVar19 = uStack_340;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0ef439d0;
  plStack_280 = plVar15 + 3;
  uStack_340 = (long *)0x0;
  puStack_338 = (undefined1 *)0x0;
  plVar15[3] = (long)puVar19;
  plVar15[4] = (long)puVar6;
  plVar15[7] = lStack_320;
  plVar15[5] = (long)puStack_330;
  plVar15[6] = (long)puStack_328;
  puStack_330 = (undefined *)0x0;
  puStack_328 = (undefined1 *)0x0;
  lStack_320 = 0;
  plVar15[10] = lStack_308;
  plVar15[8] = uStack_318;
  plVar15[9] = lStack_310;
  uStack_318 = 0;
  lStack_310 = 0;
  lStack_308 = 0;
  plVar15[0xb] = lStack_300;
  plVar15[0xc] = lStack_2f8;
  plVar15[0xd] = lStack_2f0;
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  plVar15[0xe] = lStack_2e8;
  plVar15[0xf] = lStack_2e0;
  plVar15[0x10] = lStack_2d8;
  lStack_2e8 = 0;
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  *(undefined4 *)(plVar15 + 0x11) = uStack_2d0;
  plVar15[0x12] = lStack_2c8;
  plVar15[0x13] = lStack_2c0;
  plVar15[0x14] = lStack_2b8;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  plVar15[0x17] = lStack_2a0;
  plVar15[0x15] = lStack_2b0;
  plVar15[0x16] = lStack_2a8;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  lStack_2a0 = 0;
  *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_28c,CONCAT43(uStack_290,uStack_294._1_3_));
  plVar15[0x18] = CONCAT44(uStack_294,CONCAT22(uStack_296,uStack_298));
  _auStack_3b8 = ZEXT816(0);
  uStack_278 = plVar15;
  func_0x048afd20(plVar10,&uStack_288);
  plVar15 = uStack_278;
  if (uStack_278 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_278 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_278 + 0x10))(uStack_278);
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_3b0;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3b0 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar15);
    }
  }
  lVar11 = plVar10[2];
  iVar7 = *(int *)((long)plVar10 + 0x1c);
  if (iVar7 == 2) {
    piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != *(int *)(plVar10 + 3)) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != plVar10[1]; piVar14 = *(int **)(piVar14 + 0xe)) {
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)lStack_358 << 0x10;
      }
      goto LAB_0c0411ed;
    }
    piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
    iVar7 = *piVar14;
    while (iVar7 != *(int *)(plVar10 + 3)) {
      piVar14 = piVar14 + 0x1a;
      iVar7 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | (int)lStack_358 << 0x10;
LAB_0c0411ed:
  uStack_78 = uStack_170;
  uStack_88 = uStack_180;
  uStack_80 = uStack_178;
  uStack_98 = uStack_190;
  uStack_90 = uStack_188;
  lStack_a8 = lStack_1a0;
  uStack_a0 = uStack_198;
  func_0x048b0bc0(&uStack_340);
  uStack_12e = 0;
  uStack_12a = 0;
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0;
  uStack_150 = 0xff;
  puStack_168 = &UNK_0f0edc68;
  uStack_148 = 0;
  uStack_140 = _DAT_014f0238;
  uStack_138 = 0;
  uStack_130 = 0;
  func_0x0c042ca0(auStack_68,&lStack_a8,&puStack_168);
  if (cStack_360 == '\x01') {
    if ((uStack_368 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8);
    }
    uStack_368 = 0;
    if ((uStack_370 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_370 & 0xff00ffffffffffff) - 8);
    }
    uStack_370 = 0;
  }
  func_0x0412a280(puVar9,0x68);
  return;
}



/* ---- referenced strings ----
 * 0x129a665  Modifies use behavior, including how long the item takes to use and the player's movement speed.
 * 0x129a675  avior, including how long the item takes to use and the player's movement speed.
 * 0x129a685   how long the item takes to use and the player's movement speed.
 * 0x129a695  em takes to use and the player's movement speed.
 * 0x129a6a5  and the player's movement speed.
 * 0x129a6b5   movement speed.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
