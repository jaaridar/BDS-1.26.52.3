/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc03b3f0 (ELF vaddr 0xbf3b3f0)
 * Label: caller-of-callee
 * Body:  [[0c03b3f0, 0c03b91e] [0c03b920, 0c03b962] [0c03b970, 0c03cf95]]
 * Ghidra: FUN_0c03b3f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c03b3f0(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  int *piVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  byte *pbVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uStack_488;
  undefined4 uStack_484;
  long lStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined4 uStack_438;
  undefined1 auStack_430 [16];
  undefined8 *puStack_420;
  undefined1 auStack_418 [8];
  ulong uStack_410;
  ulong uStack_408;
  code *pcStack_400;
  code *pcStack_3f8;
  undefined4 uStack_3f0;
  char cStack_3ec;
  char cStack_3e8;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  char cStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined1 *puStack_388;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  ulong auStack_2d0 [2];
  undefined *puStack_2c0;
  code *pcStack_2b8;
  undefined4 uStack_2b0;
  undefined1 uStack_2ac;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined1 *puStack_278;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  puStack_420 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puStack_420 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar4 = _UNK_013bba3b;
  puStack_420[6] = _DAT_013bba33;
  puStack_420[7] = uVar4;
  uVar4 = _UNK_013bba2b;
  puStack_420[4] = _DAT_013bba23;
  puStack_420[5] = uVar4;
  uVar4 = _UNK_013bba1b;
  puStack_420[2] = _DAT_013bba13;
  puStack_420[3] = uVar4;
  uVar4 = _UNK_013bba0b;
  *puStack_420 = _DAT_013bba03;
  puStack_420[1] = uVar4;
  *(undefined1 *)(puStack_420 + 8) = 0;
  uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
  cStack_3c0 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_3d8 = *param_3;
    uStack_3d0 = 0;
    uVar15 = param_3[1];
    if ((uVar15 & 0x80000000000000) != 0) {
      lVar10 = *(long *)((uVar15 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar10 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar9,8);
      }
      *plVar8 = lVar10;
      func_0x0eee2f00(plVar8 + 1,uVar15 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar8 + lVar10 + 8) = 0;
      uVar15 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_3c8 = 0;
    uVar16 = param_3[2];
    uStack_3d0 = uVar15;
    if ((uVar16 & 0x80000000000000) != 0) {
      lVar10 = *(long *)((uVar16 & 0xff00ffffffffffff) - 8);
      lVar9 = lVar10 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar9,8);
      }
      *plVar8 = lVar10;
      func_0x0eee2f00(plVar8 + 1,uVar16 & 0xff00ffffffffffff,lVar10);
      *(undefined1 *)((long)plVar8 + lVar10 + 8) = 0;
      uVar16 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_3c0 = '\x01';
    uStack_3c8 = uVar16;
  }
  lVar9 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar10 = lVar9 + 9;
    if (bVar19) {
      lVar10 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar19) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0c069d90(auStack_418,param_1,lVar10,uVar15,1);
  }
  else {
    func_0x0c069d90(auStack_418,param_1,0,0,1);
  }
  if (cStack_3e8 == '\0') {
    if ((DAT_0f6d3180 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d3180), iVar6 != 0)) {
      func_0x0ee25020(0xf6d3158,&DAT_012ccabc);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d3158,0xf53dab8);
      func_0x0410844d(&DAT_0f6d3180);
    }
    uVar15 = (ulong)(DAT_0f6d3160 >> 1);
    lVar9 = 0xf6d3161;
    if ((DAT_0f6d3160 & 1) != 0) {
      uVar15 = _DAT_0f6d3168;
      lVar9 = _DAT_0f6d3170;
    }
    func_0x0c06a780(&lStack_3b8,auStack_418,lVar9,uVar15,0);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f34e430;
    if (uStack_3a0 != (long *)0x0) {
      lVar9 = *uStack_3a0;
      uStack_3a0 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = uStack_3a0;
    }
    uStack_3a0 = plVar8;
    uStack_488 = (undefined4)lStack_3a8;
    lStack_480 = 0;
    uStack_478 = 0;
    plStack_470 = (long *)0x1;
    uStack_468 = 0;
    uStack_460 = &UNK_0c08ad50;
    puStack_458 = &SUB_048b06d0;
    puStack_450 = &UNK_0c08aa70;
    puStack_448 = &UNK_0c08ae10;
    puStack_440 = &UNK_0c08b080;
    uStack_438 = 0;
    auStack_430 = (undefined1  [16])0x0;
    func_0x048b05a0(lStack_3b0,&uStack_488);
    uVar4 = auStack_430._8_8_;
    if ((long *)auStack_430._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_430._8_8_ + 8);
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_430._8_8_ + 0x10))(auStack_430._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar6 = *(int *)(lStack_3b0 + 0x1c);
    if (iVar6 == 2) {
      piVar12 = *(int **)(*(long *)(*(long *)(lStack_3b0 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(lStack_3b0 + 0x18)) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      lVar9 = *(long *)(piVar12 + 0xc);
      while (lVar9 != *(long *)(lStack_3b0 + 8)) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar9 = *(long *)(piVar12 + 0xc);
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar12 = *(int **)(*(long *)(*(long *)(lStack_3b0 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(lStack_3b0 + 0x18)) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_3b0 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_3b8);
    FUN_048b0bc0(&uStack_3a0);
  }
  if ((DAT_0f6d3180 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6d3180), iVar6 != 0)) {
    func_0x0ee25020(0xf6d3158,&DAT_012ccabc);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3158,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3180);
  }
  uVar15 = (ulong)(DAT_0f6d3160 >> 1);
  lVar9 = 0xf6d3161;
  if ((DAT_0f6d3160 & 1) != 0) {
    uVar15 = _DAT_0f6d3168;
    lVar9 = _DAT_0f6d3170;
  }
  lVar10 = func_0x0c08a300(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar19 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar9 = lVar10 + 9;
    if (bVar19) {
      lVar9 = *(long *)(lVar10 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar19) {
      uVar15 = *(ulong *)(lVar10 + 0x10);
    }
  }
  func_0x0c08b4d0(&uStack_488,param_1,lVar9,uVar15);
  lVar10 = CONCAT44(uStack_484,uStack_488) + 0x18;
  lVar9 = func_0x0c08a300(lVar10);
  pbVar3 = *(byte **)(CONCAT44(uStack_484,uStack_488) + 0x58);
  for (pbVar14 = *(byte **)(CONCAT44(uStack_484,uStack_488) + 0x50); pbVar14 != pbVar3;
      pbVar14 = pbVar14 + 0x38) {
    bVar2 = *pbVar14;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c03b97a;
    }
    else if (*(long *)(pbVar14 + 8) == 0x1a) {
LAB_0c03b97a:
      if ((bVar2 & 1) == 0) {
        pbVar18 = pbVar14 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar14 + 0x10);
      }
      auVar20[0] = -(*pbVar18 == DAT_014eaba0);
      auVar20[1] = -(pbVar18[1] == DAT_014eaba0._1_1_);
      auVar20[2] = -(pbVar18[2] == DAT_014eaba0._2_1_);
      auVar20[3] = -(pbVar18[3] == DAT_014eaba0._3_1_);
      auVar20[4] = -(pbVar18[4] == DAT_014eaba0._4_1_);
      auVar20[5] = -(pbVar18[5] == DAT_014eaba0._5_1_);
      auVar20[6] = -(pbVar18[6] == DAT_014eaba0._6_1_);
      auVar20[7] = -(pbVar18[7] == DAT_014eaba0._7_1_);
      auVar20[8] = -(pbVar18[8] == DAT_014eaba0._8_1_);
      auVar20[9] = -(pbVar18[9] == DAT_014eaba0._9_1_);
      auVar20[10] = -(pbVar18[10] == DAT_014eaba0._10_1_);
      auVar20[0xb] = -(pbVar18[0xb] == DAT_014eaba0._11_1_);
      auVar20[0xc] = -(pbVar18[0xc] == DAT_014eaba0._12_1_);
      auVar20[0xd] = -(pbVar18[0xd] == DAT_014eaba0._13_1_);
      auVar20[0xe] = -(pbVar18[0xe] == DAT_014eaba0._14_1_);
      auVar20[0xf] = -(pbVar18[0xf] == DAT_014eaba0._15_1_);
      auVar21[0] = -(pbVar18[10] == DAT_014e4ff0);
      auVar21[1] = -(pbVar18[0xb] == DAT_014e4ff0._1_1_);
      auVar21[2] = -(pbVar18[0xc] == DAT_014e4ff0._2_1_);
      auVar21[3] = -(pbVar18[0xd] == DAT_014e4ff0._3_1_);
      auVar21[4] = -(pbVar18[0xe] == DAT_014e4ff0._4_1_);
      auVar21[5] = -(pbVar18[0xf] == DAT_014e4ff0._5_1_);
      auVar21[6] = -(pbVar18[0x10] == DAT_014e4ff0._6_1_);
      auVar21[7] = -(pbVar18[0x11] == DAT_014e4ff0._7_1_);
      auVar21[8] = -(pbVar18[0x12] == DAT_014e4ff0._8_1_);
      auVar21[9] = -(pbVar18[0x13] == DAT_014e4ff0._9_1_);
      auVar21[10] = -(pbVar18[0x14] == DAT_014e4ff0._10_1_);
      auVar21[0xb] = -(pbVar18[0x15] == DAT_014e4ff0._11_1_);
      auVar21[0xc] = -(pbVar18[0x16] == DAT_014e4ff0._12_1_);
      auVar21[0xd] = -(pbVar18[0x17] == DAT_014e4ff0._13_1_);
      auVar21[0xe] = -(pbVar18[0x18] == DAT_014e4ff0._14_1_);
      auVar21[0xf] = -(pbVar18[0x19] == DAT_014e4ff0._15_1_);
      auVar21 = auVar21 & auVar20;
      if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar14 == pbVar3) {
LAB_0c03b9a9:
    if ((int)uStack_460 == 0) {
      if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
      goto LAB_0c03ba17;
      lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
    }
    else {
      auStack_418 = (undefined1  [8])func_0x048b0c90(lVar10,lVar9,uStack_460._4_4_,1);
      if (auStack_418 == (undefined1  [8])0x0) {
        _auStack_418 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_418);
        if (auStack_418 == (undefined1  [8])0x0) goto LAB_0c03ba17;
      }
      if ((*(int *)((long)auStack_418 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_418 + 0x58) != 0)) {
        lVar9 = *(long *)((long)auStack_418 + 0x58) + 0x40;
      }
      else {
LAB_0c03ba17:
        lVar9 = 0;
      }
    }
    puStack_2c0 = &UNK_0488e0b0;
    uStack_2b0 = 0x48b5725f;
    pcStack_2b8 = (code *)0x0;
    uStack_2ac = 0;
    auStack_2d0[0] = 0;
    _auStack_418 = (undefined1  [16])0x0;
    pcStack_400 = (code *)&UNK_0488e0b0;
    pcStack_3f8 = (code *)0x0;
    uStack_3f0 = 0x48b5725f;
    cStack_3ec = '\0';
    puStack_2d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_2d8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_2e8 = 0x21;
    uStack_2e0 = 0x1a;
    *(ulong *)((long)puStack_2d8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_2d8 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_2d8 = _DAT_013bbacd;
    puStack_2d8[1] = uVar4;
    *(undefined1 *)((long)puStack_2d8 + 0x1a) = 0;
    lVar9 = func_0x048b5060(lVar9,&uStack_2e8);
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if ((undefined1 *)(lVar9 + 0x20) == auStack_418) {
      pcVar11 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
        puVar17 = (ulong *)(lVar9 + 0x28);
        (**(code **)(lVar9 + 0x40))(puVar17);
        if (cStack_3ec != '\0') {
          if (cStack_3ec == '\x02') {
            (*pcStack_400)(5,&uStack_410,puVar17);
          }
          else {
            uVar15 = uStack_410;
            uStack_410 = 0;
            *puVar17 = uVar15;
          }
        }
      }
      *(code **)(lVar9 + 0x38) = pcStack_400;
      *(code **)(lVar9 + 0x40) = pcStack_3f8;
      *(undefined4 *)(lVar9 + 0x48) = uStack_3f0;
      *(char *)(lVar9 + 0x4c) = cStack_3ec;
      pcVar11 = pcStack_3f8;
    }
    if ((uStack_2e8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_2d8,uStack_2e8 & 0xfffffffffffffffe);
      pcVar11 = pcStack_3f8;
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(&uStack_410);
    }
    if (pcStack_2b8 != (code *)0x0) {
      (*pcStack_2b8)(auStack_2d0);
    }
  }
  else {
    iVar6 = *(int *)(pbVar14 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0c03b9a9;
  }
  puStack_388 = puStack_458;
  lStack_3b8 = CONCAT44(uStack_484,uStack_488);
  lStack_3a8 = CONCAT44(uStack_474,uStack_478);
  uStack_398 = uStack_468;
  puStack_390 = uStack_460;
  uStack_3a0 = plStack_470;
  lStack_3b0 = lStack_480;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffbe9;
  _auStack_418 = auVar5 << 8;
  pcStack_400 = (code *)((ulong)pcStack_400 & 0xffffffffffffff00);
  if (cStack_3c0 == '\x01') {
    uStack_410 = 0;
    auStack_418 = (undefined1  [8])uStack_3d8;
    auVar20 = _auStack_418;
    uStack_410 = uStack_3d0;
    if ((uStack_3d0 & 0x80000000000000) != 0) {
      uVar15 = uStack_3d0 & 0xff00ffffffffffff;
      lVar10 = *(long *)(uVar15 - 8);
      lVar9 = lVar10 + 9;
      _auStack_418 = auVar20;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar9,8);
      }
      *plVar8 = lVar10;
      func_0x0eee2f00(plVar8 + 1,uVar15,lVar10);
      *(undefined1 *)((long)plVar8 + lVar10 + 8) = 0;
      uStack_410 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_408 = 0;
    uVar15 = uStack_3c8;
    if ((uStack_3c8 & 0x80000000000000) != 0) {
      uVar15 = uStack_3c8 & 0xff00ffffffffffff;
      lVar10 = *(long *)(uVar15 - 8);
      lVar9 = lVar10 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar9,8);
      if (lVar9 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar9,8);
      }
      *plVar8 = lVar10;
      func_0x0eee2f00(plVar8 + 1,uVar15,lVar10);
      *(undefined1 *)((long)plVar8 + lVar10 + 8) = 0;
      uVar15 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_400 = (code *)CONCAT71(pcStack_400._1_7_,1);
    uStack_408 = uVar15;
  }
  FUN_0412e5e0(auStack_2d0,puStack_420,0x40);
  lStack_2a8 = lStack_3b8;
  lStack_2a0 = lStack_3b0;
  lStack_298 = lStack_3a8;
  plStack_290 = uStack_3a0;
  uStack_288 = uStack_398;
  puStack_280 = puStack_390;
  puStack_278 = puStack_388;
  if ((auStack_2d0[0] & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_2c0,auStack_2d0[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_400 == '\x01') {
    if ((uStack_408 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_408 & 0xff00ffffffffffff) - 8);
    }
    uStack_408 = 0;
    if ((uStack_410 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_410 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c08ba10(&lStack_3b8,lStack_2a8 + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_3a0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_3b0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
LAB_0c03bf0f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_3a0) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0c03bf0f;
    }
    if (uStack_3a0._4_4_ == 0) {
      *(uint *)(lStack_3a8 + 0x18) = *(uint *)(lStack_3a8 + 0x18) | 0x40000;
    }
  }
  func_0x0c08bdd0(&lStack_3b8,&lStack_2a8,&UNK_012cca97,0x12);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar9 = *uStack_3a0;
    uStack_3a0 = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = uStack_3a0;
  }
  uStack_3a0 = plVar8;
  uStack_488 = (undefined4)lStack_3a8;
  lStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x1;
  uStack_468 = 0;
  uStack_460 = &UNK_04906f70;
  puStack_458 = &SUB_048b06d0;
  puStack_450 = &SUB_04906c50;
  puStack_448 = &UNK_0c08c330;
  puStack_440 = &UNK_0c08c490;
  uStack_438 = 0;
  auStack_430 = ZEXT816(0);
  func_0x048b05a0(lStack_3b0,&uStack_488);
  uVar4 = auStack_430._8_8_;
  if ((long *)auStack_430._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_430._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_430._8_8_ + 0x10))(auStack_430._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c08c030(&lStack_3b8);
  uStack_138 = puStack_278._0_1_;
  uStack_148 = uStack_288;
  puStack_140 = puStack_280;
  lStack_158 = lStack_298;
  plStack_150 = plStack_290;
  lStack_168 = lStack_2a8;
  lStack_160 = lStack_2a0;
  FUN_048b0bc0(&uStack_3a0);
  lStack_268 = lStack_168;
  lStack_260 = lStack_160;
  lStack_258 = lStack_158;
  plStack_250 = plStack_150;
  uStack_248 = uStack_148;
  puStack_240 = puStack_140;
  uStack_238 = CONCAT71(uStack_137,uStack_138);
  func_0x0c08ba10(&lStack_3b8,lStack_168 + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_3a0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_3b0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
LAB_0c03c1af:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_3a0) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0c03c1af;
    }
    if (uStack_3a0._4_4_ == 0) {
      *(uint *)(lStack_3a8 + 0x18) = *(uint *)(lStack_3a8 + 0x18) | 0x40000;
    }
  }
  func_0x0c08bdd0(&lStack_3b8,&lStack_268,&UNK_012ccaaa,0x11);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0126a0;
  if (uStack_3a0 != (long *)0x0) {
    lVar9 = *uStack_3a0;
    uStack_3a0 = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = uStack_3a0;
  }
  uStack_3a0 = plVar8;
  uStack_488 = (undefined4)lStack_3a8;
  lStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x1;
  uStack_468 = 0;
  uStack_460 = &UNK_05daeda0;
  puStack_458 = &SUB_048b06d0;
  puStack_450 = &SUB_05daea90;
  puStack_448 = &UNK_0c08c670;
  puStack_440 = &UNK_0c08c7d0;
  uStack_438 = 0;
  auStack_430 = ZEXT816(0);
  func_0x048b05a0(lStack_3b0,&uStack_488);
  uVar4 = auStack_430._8_8_;
  if ((long *)auStack_430._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_430._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_430._8_8_ + 0x10))(auStack_430._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c08c030(&lStack_3b8);
  uStack_f8 = (undefined1)uStack_238;
  uStack_108 = uStack_248;
  puStack_100 = puStack_240;
  lStack_118 = lStack_258;
  plStack_110 = plStack_250;
  lStack_128 = lStack_268;
  lStack_120 = lStack_260;
  FUN_048b0bc0(&uStack_3a0);
  lStack_228 = lStack_128;
  lStack_220 = lStack_120;
  lStack_218 = lStack_118;
  plStack_210 = plStack_110;
  uStack_208 = uStack_108;
  puStack_200 = puStack_100;
  uStack_1f8 = CONCAT71(uStack_f7,uStack_f8);
  func_0x0c08ba10(&lStack_3b8,lStack_128 + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_3a0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_3b0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
LAB_0c03c43f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_3a0) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0c03c43f;
    }
    if (uStack_3a0._4_4_ == 0) {
      *(uint *)(lStack_3a8 + 0x18) = *(uint *)(lStack_3a8 + 0x18) | 0x40000;
    }
  }
  func_0x0c08bdd0(&lStack_3b8,&lStack_228,&UNK_01422394,0x11);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0126a0;
  if (uStack_3a0 != (long *)0x0) {
    lVar9 = *uStack_3a0;
    uStack_3a0 = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = uStack_3a0;
  }
  uStack_3a0 = plVar8;
  uStack_488 = (undefined4)lStack_3a8;
  lStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x1;
  uStack_468 = 0;
  uStack_460 = &UNK_05daeda0;
  puStack_458 = &SUB_048b06d0;
  puStack_450 = &SUB_05daea90;
  puStack_448 = &UNK_0c08c9b0;
  puStack_440 = &UNK_0c08cb10;
  uStack_438 = 0;
  auStack_430 = ZEXT816(0);
  func_0x048b05a0(lStack_3b0,&uStack_488);
  uVar4 = auStack_430._8_8_;
  if ((long *)auStack_430._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_430._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_430._8_8_ + 0x10))(auStack_430._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c08c030(&lStack_3b8);
  uStack_b8 = (undefined1)uStack_1f8;
  uStack_c8 = uStack_208;
  puStack_c0 = puStack_200;
  lStack_d8 = lStack_218;
  plStack_d0 = plStack_210;
  lStack_e8 = lStack_228;
  lStack_e0 = lStack_220;
  FUN_048b0bc0(&uStack_3a0);
  lStack_1e8 = lStack_e8;
  lStack_1e0 = lStack_e0;
  lStack_1d8 = lStack_d8;
  plStack_1d0 = plStack_d0;
  uStack_1c8 = uStack_c8;
  puStack_1c0 = puStack_c0;
  uStack_1b8 = CONCAT71(uStack_b7,uStack_b8);
  func_0x0c08ba10(&lStack_3b8,lStack_e8 + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_3a0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_3b0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
LAB_0c03c6bf:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_3a0) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0c03c6bf;
    }
    if (uStack_3a0._4_4_ == 0) {
      *(uint *)(lStack_3a8 + 0x18) = *(uint *)(lStack_3a8 + 0x18) | 0x40000;
    }
  }
  func_0x0c08bdd0(&lStack_3b8,&lStack_1e8,&UNK_013eee5c,0x12);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0126a0;
  if (uStack_3a0 != (long *)0x0) {
    lVar9 = *uStack_3a0;
    uStack_3a0 = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = uStack_3a0;
  }
  uStack_3a0 = plVar8;
  uStack_488 = (undefined4)lStack_3a8;
  lStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x1;
  uStack_468 = 0;
  uStack_460 = &UNK_05daeda0;
  puStack_458 = &SUB_048b06d0;
  puStack_450 = &SUB_05daea90;
  puStack_448 = &UNK_0c08ccf0;
  puStack_440 = &UNK_0c08ce50;
  uStack_438 = 0;
  auStack_430 = ZEXT816(0);
  func_0x048b05a0(lStack_3b0,&uStack_488);
  uVar4 = auStack_430._8_8_;
  if ((long *)auStack_430._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_430._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_430._8_8_ + 0x10))(auStack_430._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c08c030(&lStack_3b8);
  uStack_78 = (undefined1)uStack_1b8;
  uStack_88 = uStack_1c8;
  puStack_80 = puStack_1c0;
  lStack_98 = lStack_1d8;
  plStack_90 = plStack_1d0;
  lStack_a8 = lStack_1e8;
  lStack_a0 = lStack_1e0;
  FUN_048b0bc0(&uStack_3a0);
  lStack_1a8 = lStack_a8;
  lStack_1a0 = lStack_a0;
  lStack_198 = lStack_98;
  plStack_190 = plStack_90;
  uStack_188 = uStack_88;
  puStack_180 = puStack_80;
  uStack_178 = CONCAT71(uStack_77,uStack_78);
  func_0x0c08ba10(&lStack_3b8,lStack_a8 + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_3a0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_3b0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
LAB_0c03c93f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_3a0) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0c03c93f;
    }
    if (uStack_3a0._4_4_ == 0) {
      *(uint *)(lStack_3a8 + 0x18) = *(uint *)(lStack_3a8 + 0x18) | 0x40000;
    }
  }
  func_0x0c08bdd0(&lStack_3b8,&lStack_1a8,&UNK_0136d158,0x10);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0126a0;
  if (uStack_3a0 != (long *)0x0) {
    lVar9 = *uStack_3a0;
    uStack_3a0 = plVar8;
    (**(code **)(lVar9 + 8))();
    plVar8 = uStack_3a0;
  }
  uStack_3a0 = plVar8;
  uStack_488 = (undefined4)lStack_3a8;
  lStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x1;
  uStack_468 = 0;
  uStack_460 = &UNK_05daeda0;
  puStack_458 = &SUB_048b06d0;
  puStack_450 = &SUB_05daea90;
  puStack_448 = &UNK_0c08d030;
  puStack_440 = &UNK_0c08d190;
  uStack_438 = 0;
  auStack_430 = ZEXT816(0);
  func_0x048b05a0(lStack_3b0,&uStack_488);
  uVar4 = auStack_430._8_8_;
  if ((long *)auStack_430._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_430._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_430._8_8_ + 0x10))(auStack_430._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c08c030(&lStack_3b8);
  uStack_38 = (undefined1)uStack_178;
  uStack_48 = uStack_188;
  puStack_40 = puStack_180;
  lStack_58 = lStack_198;
  plStack_50 = plStack_190;
  lStack_68 = lStack_1a8;
  lStack_60 = lStack_1a0;
  FUN_048b0bc0(&uStack_3a0);
  func_0x0c08ba10(&lStack_3b8,lStack_68 + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_3a0) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_3b0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_3a0._4_4_ != 1) {
      if (uStack_3a0._4_4_ == 0) {
        *(uint *)(lStack_3a8 + 0x18) = *(uint *)(lStack_3a8 + 0x18) | 0x40000;
      }
      goto LAB_0c03cb83;
    }
    piVar12 = *(int **)(*(long *)(lStack_3a8 + 0x78) + 0x48);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_3a0) {
      piVar12 = piVar12 + 0x1a;
      iVar6 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
LAB_0c03cb83:
  func_0x0c08bdd0(&lStack_3b8,&lStack_68,&UNK_011adb5a,0x1c);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar9 = *uStack_3a0;
    uStack_3a0 = puVar13;
    (**(code **)(lVar9 + 8))();
    puVar13 = uStack_3a0;
  }
  uStack_3a0 = puVar13;
  uStack_488 = (undefined4)lStack_3a8;
  lStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x1;
  uStack_468 = 0;
  uStack_460 = &UNK_04906f70;
  puStack_458 = &SUB_048b06d0;
  puStack_450 = &SUB_04906c50;
  puStack_448 = &UNK_0c08d370;
  puStack_440 = &UNK_0c08d4d0;
  uStack_438 = 0;
  auStack_430 = ZEXT816(0);
  func_0x048b05a0(lStack_3b0,&uStack_488);
  uVar4 = auStack_430._8_8_;
  if ((long *)auStack_430._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_430._8_8_ + 8);
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_430._8_8_ + 0x10))(auStack_430._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c08c030(&lStack_3b8);
  FUN_048b0bc0(&uStack_3a0);
  if (cStack_3c0 == '\x01') {
    if ((uStack_3c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3c8 & 0xff00ffffffffffff) - 8);
    }
    uStack_3c8 = 0;
    if ((uStack_3d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3d0 & 0xff00ffffffffffff) - 8);
    }
    uStack_3d0 = 0;
  }
  thunk_FUN_0ee326a0(puStack_420,0x48);
  return;
}



/* ---- referenced strings ----
 * 0x13bba03  Throwable items can be thrown by the player, such as a snowball.
 * 0x13bba13  can be thrown by the player, such as a snowball.
 * 0x13bba23   the player, such as a snowball.
 * 0x13bba33  h as a snowball.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
