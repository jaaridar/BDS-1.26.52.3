/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd41ee60 (ELF vaddr 0xd31ee60)
 * Label: callee-of:0x4de9260
 * Body:  [[0d41ee60, 0d41fa67]]
 * Ghidra: FUN_0d41ee60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d41ee60(undefined8 param_1)

{
  byte *pbVar1;
  uint *puVar2;
  long **pplVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long **pplVar14;
  long lVar15;
  bool bVar16;
  undefined1 uStack_201;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long **pplStack_1d8;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined7 uStack_19f;
  undefined8 uStack_198;
  uint *puStack_188;
  long *plStack_180;
  ulong auStack_178 [4];
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_f0;
  undefined *apuStack_e8 [4];
  undefined **ppuStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_19f = 0;
  uStack_198 = 0;
  bStack_1b0 = 0x20;
  uStack_1af = _DAT_012009e7;
  uStack_1ab = _UNK_012009eb;
  uStack_1a7 = _UNK_012009ef;
  uStack_1a3 = _UNK_012009f3;
  uStack_1b8 = 0xdeed4927f3abb593;
  uStack_70 = 0;
  uStack_130 = 0;
  lStack_78 = 0;
  plStack_138 = (long *)&UNK_0f471d78;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plStack_1f8 = plStack_138;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f46bc80;
  plStack_1f0 = (long *)0x0;
  plStack_138 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_201,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f46bcd0;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  if (plStack_1f8 == (long *)0x0) {
    plVar8[0x3a] = 0;
    plVar9 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1f8)(&plStack_1f8,plVar8 + 0x2e);
    plVar9 = plStack_1f8;
    plStack_1f8 = (long *)0x0;
    plVar8[0x2e] = (long)plVar9;
    plVar8[0x3a] = 0;
    if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar8[0x14],plVar8[0x12] & 0xfffffffffffffffe);
      plVar9 = plStack_1f8;
    }
  }
  pbVar1 = (byte *)(plVar8 + 0x12);
  pbVar1[0] = 0x22;
  uVar6 = _UNK_01207d03;
  uVar5 = _UNK_01207cff;
  uVar4 = _UNK_01207cfb;
  pbVar1[1] = 0x66;
  *(undefined4 *)((long)plVar8 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar8 + 0x96) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x9a) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x9e) = uVar6;
  *(undefined4 *)((long)plVar8 + 0xa2) = 0;
  *(undefined2 *)((long)plVar8 + 0xa6) = 0;
  plVar8[0x11] = 0xf6c39062bb9edf3;
  plVar8[0x15] = 0;
  if (plVar9 != (long *)0x0) {
    (*(code *)plVar9[1])(&plStack_1f8);
  }
  plVar9 = plVar8 + 1;
  if (plStack_138 != (long *)0x0) {
    (*(code *)plStack_138[1])(&plStack_138);
  }
  LOCK();
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  plStack_200 = plVar9;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_180 = plVar8 + 4;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f46bdb0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[4] = (long)&UNK_0f46be00;
  plVar9[0xe] = (long)plStack_180;
  plVar9[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_1f8 = plVar9 + 4;
  plStack_1f0 = plVar9;
  puStack_188 = (uint *)pbVar1;
  uStack_f0 = param_1;
  puVar10 = (undefined4 *)func_0x05072e10(param_1,&uStack_1b8,1);
  plVar11 = plVar8 + 0x11;
  plVar12 = *(long **)(puVar10 + 0x24);
  if (plVar12 < *(long **)(puVar10 + 0x26)) {
    plVar12[2] = 0;
    plVar12[3] = 0;
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    if (plVar12 == plVar11) {
LAB_0d41f199:
      *plVar12 = *plVar11;
      plVar12[5] = (long)(plVar9 + 4);
      plVar12[6] = (long)plVar9;
LAB_0d41f205:
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_188 & 1) == 0) {
        plVar12[3] = *(long *)((long)puStack_188 + 0x10);
        lVar15 = *(long *)((long)puStack_188 + 8);
        plVar12[1] = *(long *)puStack_188;
        plVar12[2] = lVar15;
        goto LAB_0d41f199;
      }
      func_0x04885070(plVar12 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar12 = *plVar11;
      plVar12[5] = (long)plStack_1f8;
      plVar12[6] = (long)plStack_1f0;
      plVar9 = plStack_1f0;
      if (plStack_1f0 != (long *)0x0) goto LAB_0d41f205;
    }
    plVar12 = plVar12 + 7;
    *(long **)(puVar10 + 0x24) = plVar12;
  }
  else {
    plVar12 = (long *)func_0x05076510(puVar10 + 0x22,plVar11,&plStack_1f8);
  }
  plVar9 = plStack_200;
  *(long **)(puVar10 + 0x24) = plVar12;
  uVar4 = *puVar10;
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar11 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar11 = *plVar11 + 1;
    UNLOCK();
  }
  plVar11 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_1f0;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  if (plStack_1f0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_1f0 + 1;
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      FUN_0412c2d0(plVar11);
    }
  }
  LOCK();
  lVar15 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
    LOCK();
    lVar15 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar15 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
  }
  apuStack_e8[0] = &UNK_0f471da0;
  ppuStack_c8 = apuStack_e8;
  pplVar14 = (long **)(plVar8 + 0x36);
  pplStack_1d8 = &plStack_1f8;
  plStack_1f8 = (long *)&UNK_0f471da0;
  lVar15 = 0x20;
  if (pplVar14 == &plStack_1f8) {
LAB_0d41f3fe:
    (**(code **)((long)*pplStack_1d8 + lVar15))();
  }
  else {
    pplVar3 = (long **)plVar8[0x3a];
    if (pplVar3 == pplVar14) {
      plStack_138 = (long *)&UNK_0f471da0;
      pplStack_1d8 = (long **)0x0;
      (*(code *)(*pplVar3)[3])(pplVar3,&plStack_1f8);
      (**(code **)(*(long *)plVar8[0x3a] + 0x20))();
      plVar8[0x3a] = 0;
      pplStack_1d8 = &plStack_1f8;
      (*(code *)plStack_138[3])(&plStack_138,pplVar14);
      (*(code *)plStack_138[4])(&plStack_138);
      plVar8[0x3a] = (long)pplVar14;
      if (pplStack_1d8 != &plStack_1f8) goto LAB_0d41f3f3;
      goto LAB_0d41f3fe;
    }
    plVar8[0x36] = (long)&UNK_0f471da0;
    pplStack_1d8 = pplVar3;
    plVar8[0x3a] = (long)pplVar14;
    if (pplVar3 == &plStack_1f8) goto LAB_0d41f3fe;
LAB_0d41f3f3:
    lVar15 = 0x28;
    if (pplStack_1d8 != (long **)0x0) goto LAB_0d41f3fe;
  }
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  (**(code **)(*plStack_180 + 0x10))(plStack_180,&uStack_158);
  if ((uStack_158 & 1) != 0) {
    func_0x0412a280(uStack_148,uStack_158 & 0xfffffffffffffffe);
  }
  if (ppuStack_c8 == apuStack_e8) {
    lVar15 = 0x20;
LAB_0d41f64e:
    (**(code **)(*ppuStack_c8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_c8 != (undefined **)0x0) goto LAB_0d41f64e;
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_1b0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_19f,uStack_1a3._3_1_),
                    CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,bStack_1b0)) &
                    0xfffffffffffffffe);
  }
  uStack_1a7 = 0;
  uStack_1a3 = 0;
  uStack_19f = 0;
  uStack_1b8 = 0;
  bStack_1b0 = 0;
  uStack_1af = 0;
  uStack_1ab = 0;
  uStack_198 = 0;
  func_0x0412f5e0(&bStack_1b0,&UNK_013026f0,0x1e);
  uStack_1b8 = 0xe5807c44d1afaa71;
  uStack_b0 = 0;
  uStack_130 = 0;
  lStack_b8 = 0;
  plStack_138 = (long *)&UNK_0f471e20;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_1f8 = plStack_138;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f46be60;
  plStack_1f0 = (long *)0x0;
  plStack_138 = (long *)0x0;
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_201,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar9 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0f46beb0;
  plVar8[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  if (plStack_1f8 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1f8)(&plStack_1f8,plVar8 + 0x30);
    plVar11 = plStack_1f8;
  }
  plStack_1f8 = (long *)0x0;
  plVar8[0x30] = (long)plVar11;
  puVar2 = (uint *)(plVar8 + 0x12);
  if (plVar9 == (long *)&DAT_0f552078) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552090;
        uVar6 = uRam000000000f55208c;
        uVar5 = _DAT_0f552088;
        uVar4 = uRam000000000f552084;
        *puVar2 = _DAT_0f552080;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar4;
        *(undefined4 *)(plVar8 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar16 = (_DAT_0f552080 & 1) != 0;
      lVar15 = 0xf552081;
      if (bVar16) {
        lVar15 = _DAT_0f552090;
      }
      uVar13 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar16) {
        uVar13 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar2,lVar15,uVar13);
    }
    plVar8[0x11] = _DAT_0f552078;
    plVar8[0x15] = 0;
    if (plStack_1f8 != (long *)0x0) {
      (*(code *)plStack_1f8[1])(&plStack_1f8);
    }
  }
  plVar11 = plVar8 + 1;
  plStack_200 = plVar9;
  if (plStack_138 != (long *)0x0) {
    (*(code *)plStack_138[1])(&plStack_138);
  }
  LOCK();
  *plVar11 = *plVar11 + 1;
  UNLOCK();
  puStack_188 = puVar2;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f46bf90;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[4] = (long)&UNK_0f46bfe0;
  plVar9[0xe] = (long)(plVar8 + 4);
  plVar9[0xf] = (long)plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plStack_1f8 = plVar9 + 4;
  plStack_1f0 = plVar9;
  plStack_180 = plVar8 + 4;
  puVar10 = (undefined4 *)func_0x05072e10(uStack_f0,&uStack_1b8,0);
  plVar12 = *(long **)(puVar10 + 0x24);
  if (*(long **)(puVar10 + 0x26) <= plVar12) {
    plVar12 = (long *)func_0x05076510(puVar10 + 0x22,plStack_200,&plStack_1f8);
    goto LAB_0d41f8ab;
  }
  plVar12[2] = 0;
  plVar12[3] = 0;
  *plVar12 = 0;
  plVar12[1] = 0;
  plVar12[4] = 0;
  if (plVar12 == plStack_200) {
LAB_0d41f82e:
    *plVar12 = *plStack_200;
    plVar12[5] = (long)(plVar9 + 4);
    plVar12[6] = (long)plVar9;
LAB_0d41f89b:
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_188 & 1) == 0) {
      plVar12[3] = *(long *)(puStack_188 + 4);
      lVar15 = *(long *)(puStack_188 + 2);
      plVar12[1] = *(long *)puStack_188;
      plVar12[2] = lVar15;
      goto LAB_0d41f82e;
    }
    func_0x04885070(plVar12 + 1,plVar8[0x14],plVar8[0x13]);
    *plVar12 = *plStack_200;
    plVar12[5] = (long)plStack_1f8;
    plVar12[6] = (long)plStack_1f0;
    plVar9 = plStack_1f0;
    if (plStack_1f0 != (long *)0x0) goto LAB_0d41f89b;
  }
  plVar12 = plVar12 + 7;
  *(long **)(puVar10 + 0x24) = plVar12;
LAB_0d41f8ab:
  *(long **)(puVar10 + 0x24) = plVar12;
  uVar4 = *puVar10;
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  plVar9 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar7;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_1f0;
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  if (plStack_1f0 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_1f0 + 1;
    lVar15 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      FUN_0412c2d0(plVar9);
    }
  }
  LOCK();
  lVar15 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
    LOCK();
    lVar15 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar15 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  if (lVar15 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0412c2d0(plVar8);
  }
  auStack_178[0] = 0;
  auStack_178[1] = 0;
  auStack_178[2] = 0;
  (**(code **)(*plStack_180 + 0x10))(plStack_180,auStack_178);
  if ((auStack_178[0] & 1) != 0) {
    func_0x0412a280(auStack_178[2],auStack_178[0] & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_1b0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_19f,uStack_1a3._3_1_),
                    CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,bStack_1b0)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12009e7  feature_to_place
 * 0x1207cf7  eature_reference
 */
