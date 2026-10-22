/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb5d820 (ELF vaddr 0xda5d820)
 * Label: caller-of-callee
 * Body:  [[0db5d820, 0db5d953] [0db5d960, 0db5d991] [0db5d9a0, 0db5e690] [0db5e6a0, 0db5e91a]]
 * Ghidra: FUN_0db5d820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db5d820(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  code *pcVar21;
  byte *pbVar22;
  bool bVar23;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  code *pcStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  ulong uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  char cStack_22c;
  ulong uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  char cStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  char cStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  char cStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  char cStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  char cStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0db46bd0();
  lVar11 = func_0x0b0fd360(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar18 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0dbf6320(&uStack_180,param_1,lVar20,uVar18);
  }
  else {
    func_0x0dbf6320(&uStack_180,param_1,&UNK_01471fe1,0xe);
  }
  if (cStack_150 != '\0') {
    return;
  }
  func_0x05d54750(&uStack_278,&UNK_0f299a38);
  uStack_188 = uStack_270;
  uStack_48 = uStack_278;
  uStack_44 = uStack_274;
  uStack_40 = (undefined4)uStack_270;
  uStack_3c = uStack_270._4_4_;
  uStack_270 = 0;
  uStack_280 = uStack_268;
  uStack_268 = 0;
  lVar20 = CONCAT44(uStack_17c,uStack_180) + 0x18;
  lVar11 = func_0x0b0fd360(lVar20);
  pbVar4 = *(byte **)(CONCAT44(uStack_17c,uStack_180) + 0x58);
  for (pbVar22 = *(byte **)(CONCAT44(uStack_17c,uStack_180) + 0x50); pbVar22 != pbVar4;
      pbVar22 = pbVar22 + 0x38) {
    bVar3 = *pbVar22;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x24) goto LAB_0db5d9aa;
    }
    else if (*(long *)(pbVar22 + 8) == 0x24) {
LAB_0db5d9aa:
      if ((bVar3 & 1) == 0) {
        pbVar19 = pbVar22 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar22 + 0x10);
      }
      iVar9 = func_0x0eee3000(&DAT_014518a9,pbVar19,0x24);
      if (iVar9 == 0) break;
    }
  }
  if (pbVar22 == pbVar4) {
LAB_0db5d9d8:
    if (iStack_158 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0db5da54;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      puVar12 = (undefined *)func_0x048b0c90(lVar20,lVar11,uStack_154,1);
      if (puVar12 == (undefined *)0x0) {
        puStack_258 = (undefined *)0x0;
        puStack_250 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_258);
        puVar12 = puStack_258;
        if (puStack_258 == (undefined *)0x0) goto LAB_0db5da54;
      }
      if ((*(int *)(puVar12 + 0x50) == -0x45dcb126) && (*(long *)(puVar12 + 0x58) != 0)) {
        lVar11 = *(long *)(puVar12 + 0x58) + 0x40;
      }
      else {
LAB_0db5da54:
        lVar11 = 0;
      }
    }
    uStack_2e8 = 0;
    puStack_2d8 = &UNK_048b4ab0;
    pcStack_2d0 = (code *)&UNK_048b49f0;
    uStack_2c8 = CONCAT35(uStack_2c8._5_3_,0x1d33bd9c5);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar13 = 0x6f44726f7463411a;
    *(undefined4 *)(puVar13 + 1) = 0x656d7563;
    *(undefined2 *)((long)puVar13 + 0xc) = 0x746e;
    *(undefined2 *)((long)puVar13 + 0xe) = 0;
    puVar13[2] = 0;
    *(undefined2 *)(puVar13 + 3) = 0x802;
    *(undefined4 *)(puVar13 + 4) = uStack_48;
    *(undefined4 *)((long)puVar13 + 0x24) = uStack_44;
    *(undefined4 *)(puVar13 + 5) = uStack_40;
    *(undefined4 *)((long)puVar13 + 0x2c) = uStack_3c;
    puVar13[6] = uStack_280;
    puStack_258 = &UNK_048b46e0;
    uStack_240 = (code *)&UNK_048b4ab0;
    uStack_238 = (code *)&UNK_048b49f0;
    uStack_230 = 0xd33bd9c5;
    cStack_22c = '\x01';
    uStack_2e8 = 0;
    puStack_250 = puVar13;
    uStack_138 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (uStack_138 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar16 = _UNK_014518c1;
    uStack_148 = 0x29;
    uStack_140 = 0x24;
    *(undefined8 *)(uStack_138 + 4) = _DAT_014518b9;
    *(undefined8 *)(uStack_138 + 6) = uVar16;
    uVar7 = _UNK_014518b5;
    uVar6 = _UNK_014518b1;
    uVar5 = _UNK_014518ad;
    *uStack_138 = _DAT_014518a9;
    uStack_138[1] = uVar5;
    uStack_138[2] = uVar6;
    uStack_138[3] = uVar7;
    uStack_138[8] = 0x5d797472;
    *(undefined1 *)(uStack_138 + 9) = 0;
    lVar11 = FUN_048b5060(lVar11,&uStack_148);
    *(undefined **)(lVar11 + 0x20) = &UNK_048b46e0;
    pcVar21 = (code *)&UNK_048b49f0;
    if ((undefined **)(lVar11 + 0x20) != &puStack_258) {
      puVar13 = (undefined8 *)(lVar11 + 0x28);
      if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0db5dc1c:
        puVar8 = puStack_250;
        puStack_250 = (undefined8 *)0x0;
        *puVar13 = puVar8;
      }
      else {
        (**(code **)(lVar11 + 0x40))(puVar13);
        if (cStack_22c != '\0') {
          if (cStack_22c != '\x02') goto LAB_0db5dc1c;
          (*uStack_240)(5,&puStack_250,puVar13);
        }
      }
      *(int *)(lVar11 + 0x38) = (int)uStack_240;
      *(int *)(lVar11 + 0x3c) = uStack_240._4_4_;
      *(undefined4 *)(lVar11 + 0x40) = (undefined4)uStack_238;
      *(undefined4 *)(lVar11 + 0x44) = uStack_238._4_4_;
      *(undefined4 *)(lVar11 + 0x48) = uStack_230;
      *(char *)(lVar11 + 0x4c) = cStack_22c;
      pcVar21 = uStack_238;
    }
    if ((uStack_148 & 1) != 0) {
      func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
      pcVar21 = uStack_238;
    }
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(&puStack_250);
    }
    if (pcStack_2d0 != (code *)0x0) {
      (*pcStack_2d0)(&uStack_2e8);
    }
    uStack_188 = 0;
    uStack_280 = 0;
  }
  else {
    iVar9 = *(int *)(pbVar22 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550768), iVar10 != 0)) {
      FUN_048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar9 == _DAT_0f550754) goto LAB_0db5d9d8;
  }
  cStack_98 = cStack_150;
  uStack_a8 = uStack_160;
  uStack_a4 = uStack_15c;
  iStack_a0 = iStack_158;
  uStack_9c = uStack_154;
  uStack_b8 = uStack_170;
  uStack_b4 = uStack_16c;
  uStack_b0 = uStack_168;
  uStack_ac = uStack_164;
  uStack_c8 = uStack_180;
  uStack_c4 = uStack_17c;
  uStack_c0 = uStack_178;
  uStack_bc = uStack_174;
  func_0x0dbf6c20(&puStack_258,&uStack_c8,&UNK_011ea907,0xb,1);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f4e6600;
  if (uStack_240 != (code *)0x0) {
    lVar11 = *(long *)uStack_240;
    uStack_240 = (code *)plVar14;
    (**(code **)(lVar11 + 8))();
    plVar14 = (long *)uStack_240;
  }
  uStack_240 = (code *)plVar14;
  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_248);
  uStack_2e0 = 0;
  puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
  pcStack_2d0 = (code *)0x1;
  uStack_2c8 = 0;
  puStack_2c0 = &UNK_07cf8580;
  puStack_2b8 = &SUB_048b06d0;
  puStack_2b0 = &UNK_07cf8590;
  puStack_2a8 = &UNK_0dbf7120;
  puStack_2a0 = &UNK_0dbf7360;
  uStack_298 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  func_0x048b05a0(puStack_250,&uStack_2e8);
  plVar14 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_288 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      FUN_0412c2d0(plVar14);
    }
  }
  func_0x0dbf6e20(&puStack_258);
  cStack_58 = cStack_98;
  uStack_68 = uStack_a8;
  uStack_64 = uStack_a4;
  iStack_60 = iStack_a0;
  uStack_5c = uStack_9c;
  uStack_78 = uStack_b8;
  uStack_74 = uStack_b4;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  func_0x048b0bc0(&uStack_240);
  func_0x0dbf6c20(&puStack_258,&uStack_88,&UNK_011ed181,10,0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f496778;
  if (uStack_240 != (code *)0x0) {
    lVar11 = *(long *)uStack_240;
    uStack_240 = (code *)plVar14;
    (**(code **)(lVar11 + 8))();
    plVar14 = (long *)uStack_240;
  }
  uStack_240 = (code *)plVar14;
  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_248);
  uStack_2e0 = 0;
  puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
  pcStack_2d0 = (code *)0x1;
  uStack_2c8 = 0;
  puStack_2c0 = &UNK_0dbf7760;
  puStack_2b8 = &SUB_048b06d0;
  puStack_2b0 = &SUB_0daac800;
  puStack_2a8 = &UNK_0dbf7770;
  puStack_2a0 = &UNK_0dbf7ab0;
  uStack_298 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  func_0x048b05a0(puStack_250,&uStack_2e8);
  plVar14 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_288 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      FUN_0412c2d0(plVar14);
    }
  }
  func_0x0dbf6e20(&puStack_258);
  cStack_d8 = cStack_58;
  uStack_e8 = uStack_68;
  uStack_e4 = uStack_64;
  iStack_e0 = iStack_60;
  uStack_dc = uStack_5c;
  uStack_f8 = uStack_78;
  uStack_f4 = uStack_74;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  uStack_108 = uStack_88;
  uStack_104 = uStack_84;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  func_0x048b0bc0(&uStack_240);
  func_0x0dbf6860(&puStack_258,CONCAT44(uStack_104,uStack_108) + 0x18);
  if (uStack_240._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_244,uStack_248) + 0x78) + 0x60);
    iVar9 = *piVar15;
    while (iVar9 != (int)uStack_240) {
      piVar15 = piVar15 + 0x16;
      iVar9 = *piVar15;
    }
    puVar13 = *(undefined8 **)(piVar15 + 0xc);
    while (puVar13 != puStack_250) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar13 = *(undefined8 **)(piVar15 + 0xc);
    }
LAB_0db5e06f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_240._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_244,uStack_248) + 0x78) + 0x48);
      iVar9 = *piVar15;
      while (iVar9 != (int)uStack_240) {
        piVar15 = piVar15 + 0x1a;
        iVar9 = *piVar15;
      }
      goto LAB_0db5e06f;
    }
    if (uStack_240._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_244,uStack_248) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0dbf6c20(&puStack_258,&uStack_108,&UNK_0145f58d,0x10,0x10);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f4967f0;
  if (uStack_240 != (code *)0x0) {
    lVar11 = *(long *)uStack_240;
    uStack_240 = (code *)plVar14;
    (**(code **)(lVar11 + 8))();
    plVar14 = (long *)uStack_240;
  }
  uStack_240 = (code *)plVar14;
  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_248);
  uStack_2e0 = 0;
  puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
  pcStack_2d0 = (code *)0x1;
  uStack_2c8 = 0;
  puStack_2c0 = &UNK_0dbfe540;
  puStack_2b8 = &SUB_048b06d0;
  puStack_2b0 = &UNK_0dbfc2a0;
  puStack_2a8 = &UNK_0dbfe600;
  puStack_2a0 = &UNK_0dbfe7d0;
  uStack_298 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  func_0x048b05a0(puStack_250,&uStack_2e8);
  plVar14 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_288 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      FUN_0412c2d0(plVar14);
    }
  }
  func_0x0dbf6e20(&puStack_258);
  cStack_118 = cStack_d8;
  uStack_128 = uStack_e8;
  uStack_124 = uStack_e4;
  iStack_120 = iStack_e0;
  uStack_11c = uStack_dc;
  uStack_138 = (undefined4 *)CONCAT44(uStack_f4,uStack_f8);
  uStack_130 = uStack_f0;
  uStack_12c = uStack_ec;
  uStack_148 = CONCAT44(uStack_104,uStack_108);
  uStack_140 = CONCAT44(uStack_fc,uStack_100);
  func_0x048b0bc0(&uStack_240);
  func_0x0dbf6c20(&puStack_258,&uStack_148,&UNK_01416889,6,0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f4e6600;
  if (uStack_240 != (code *)0x0) {
    lVar11 = *(long *)uStack_240;
    uStack_240 = (code *)plVar14;
    (**(code **)(lVar11 + 8))();
    plVar14 = (long *)uStack_240;
  }
  uStack_240 = (code *)plVar14;
  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_248);
  uStack_2e0 = 0;
  puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
  pcStack_2d0 = (code *)0x1;
  uStack_2c8 = 0;
  puStack_2c0 = &UNK_07cf8580;
  puStack_2b8 = &SUB_048b06d0;
  puStack_2b0 = &UNK_07cf8590;
  puStack_2a8 = &UNK_0dbfec50;
  puStack_2a0 = &UNK_0dbfeea0;
  uStack_298 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  func_0x048b05a0(puStack_250,&uStack_2e8);
  plVar14 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_288 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      FUN_0412c2d0(plVar14);
    }
  }
  func_0x0dbf6e20(&puStack_258);
  func_0x048b0bc0(&uStack_240);
  if ((uStack_280 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_280 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_188 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
  }
  uStack_268 = 0;
  if ((uStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
  }
  uStack_270 = 0;
  func_0x0e6c8ad0(param_1);
  func_0x0dbf6c20(&puStack_258,&uStack_180,&UNK_011ccec2,5,0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f492920;
  if (uStack_240 != (code *)0x0) {
    lVar11 = *(long *)uStack_240;
    uStack_240 = (code *)plVar14;
    (**(code **)(lVar11 + 8))();
    plVar14 = (long *)uStack_240;
  }
  uStack_240 = (code *)plVar14;
  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_248);
  uStack_2e0 = 0;
  puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
  pcStack_2d0 = (code *)0x1;
  uStack_2c8 = 0;
  puStack_2c0 = &UNK_0dad3780;
  puStack_2b8 = &SUB_048b06d0;
  puStack_2b0 = &UNK_0dad3440;
  puStack_2a8 = &UNK_0dbff080;
  puStack_2a0 = &UNK_0dbff2a0;
  uStack_298 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  func_0x048b05a0(puStack_250,&uStack_2e8);
  plVar14 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_288 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      FUN_0412c2d0(plVar14);
    }
  }
  func_0x0dbf6e20(&puStack_258);
  func_0x048b0bc0(&uStack_240);
  lVar11 = CONCAT44(uStack_17c,uStack_180) + 0x18;
  uVar16 = func_0x0b0fd360(lVar11);
  if (iStack_158 == 1) {
    puVar12 = (undefined *)func_0x048b0c90(lVar11,uVar16,uStack_154,1);
    if (puVar12 == (undefined *)0x0) {
      puStack_258 = (undefined *)0x0;
      puStack_250 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_258);
      puVar12 = puStack_258;
    }
    *(undefined1 *)(*(long *)(puVar12 + 0x58) + 0xa9) = 4;
    goto LAB_0db5e72e;
  }
  puVar12 = (undefined *)func_0x048b1040(lVar11,uVar16,uStack_154,1);
  if (puVar12 == (undefined *)0x0) {
    puStack_258 = (undefined *)0x0;
    puStack_250 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_258);
    puVar17 = *(undefined **)(puStack_258 + 0x38);
    puVar12 = puStack_258;
    if (puVar17 == (undefined *)0x0) goto LAB_0db5e65f;
LAB_0db5e687:
    do {
      puVar12 = puVar17;
      puVar17 = *(undefined **)(puVar12 + 0x38);
      if (*(undefined **)(puVar12 + 0x38) == (undefined *)0x0) {
        puStack_258 = (undefined *)0x0;
        puStack_250 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_258);
        puVar17 = puStack_258;
      }
    } while (puVar17 != (undefined *)0x0);
  }
  else {
    puVar17 = *(undefined **)(puVar12 + 0x38);
    if (puVar17 != (undefined *)0x0) goto LAB_0db5e687;
LAB_0db5e65f:
    puStack_258 = (undefined *)0x0;
    puStack_250 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_258);
    puVar17 = puStack_258;
    if (puStack_258 != (undefined *)0x0) goto LAB_0db5e687;
  }
  *(undefined1 *)(*(long *)(puVar12 + 0x48) + 0x10) = 4;
  if ((puVar12[0x12] & 2) != 0) {
    uVar16 = func_0x0b0fd360(lVar11);
    puVar12 = (undefined *)func_0x048b1040(lVar11,uVar16,0xbf75c8f8,1);
    if (puVar12 == (undefined *)0x0) {
      puStack_258 = (undefined *)0x0;
      puStack_250 = (undefined8 *)0x0;
      func_0x048b10d0(&puStack_258);
      puVar12 = puStack_258;
    }
    *(undefined1 *)(*(long *)(puVar12 + 0x48) + 8) = 4;
  }
LAB_0db5e72e:
  func_0x0dbf6c20(&puStack_258,&uStack_180,&UNK_014d7499,8,0);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4e6600;
  if (uStack_240 != (code *)0x0) {
    lVar11 = *(long *)uStack_240;
    uStack_240 = (code *)puVar13;
    (**(code **)(lVar11 + 8))();
    puVar13 = (undefined8 *)uStack_240;
  }
  uStack_240 = (code *)puVar13;
  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_248);
  uStack_2e0 = 0;
  puStack_2d8 = (undefined *)((ulong)puStack_2d8 & 0xffffffff00000000);
  pcStack_2d0 = (code *)0x1;
  uStack_2c8 = 0;
  puStack_2c0 = &UNK_07cf8580;
  puStack_2b8 = &SUB_048b06d0;
  puStack_2b0 = &UNK_07cf8590;
  puStack_2a8 = &UNK_0dbff480;
  puStack_2a0 = &UNK_0dbff6d0;
  uStack_298 = 0;
  uStack_290 = 0;
  plStack_288 = (long *)0x0;
  func_0x048b05a0(puStack_250,&uStack_2e8);
  plVar14 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_288 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      FUN_0412c2d0(plVar14);
    }
  }
  func_0x0dbf6e20(&puStack_258);
  func_0x048b0bc0(&uStack_240);
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
