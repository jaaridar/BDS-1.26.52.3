/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xddec0b0 (ELF vaddr 0xdcec0b0)
 * Label: caller-of-callee
 * Body:  [[0ddec0b0, 0ddec9c7] [0ddec9d0, 0ddecd47]]
 * Ghidra: FUN_0ddec0b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ddec0b0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  bool bVar13;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_170;
  int iStack_16c;
  long *plStack_168;
  byte bStack_160;
  undefined7 uStack_15f;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined8 uStack_100;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  char cStack_38;
  
  func_0x0dea1120();
  lVar5 = func_0x0de61a80(param_1 + 0x18);
  if ((*(int *)(lVar5 + 0x60) == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    bVar13 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar10 = lVar5 + 9;
    if (bVar13) {
      lVar10 = *(long *)(lVar5 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x0de61f00(&uStack_68,param_1,lVar10,uVar11);
    uStack_128 = uStack_68;
    uStack_124 = uStack_64;
    uStack_120 = uStack_60;
    uStack_11c = uStack_5c;
    uStack_118 = uStack_58;
    uStack_114 = uStack_54;
    uStack_110 = uStack_50;
    uStack_10c = uStack_4c;
    iStack_108 = iStack_48;
    iStack_104 = iStack_44;
  }
  else {
    func_0x0de61f00(&uStack_68,param_1,&UNK_014ddd72,0x10);
    uStack_128 = uStack_68;
    uStack_124 = uStack_64;
    uStack_120 = uStack_60;
    uStack_11c = uStack_5c;
    uStack_118 = uStack_58;
    uStack_114 = uStack_54;
    uStack_110 = uStack_50;
    uStack_10c = uStack_4c;
    iStack_108 = iStack_48;
    iStack_104 = iStack_44;
  }
  if (cStack_38 != '\0') {
    return;
  }
  uStack_100 = 0x1e1bc4d500000004;
  if ((DAT_0f73ebe8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f73ebe8), iVar4 != 0)) {
    func_0x0de61c70(0xf73ebd0);
    func_0x0410844d(&DAT_0f73ebe8);
  }
  uStack_208 = (undefined *)CONCAT44(uStack_208._4_4_,uStack_100._4_4_);
  uStack_200 = (long *)0x0;
  uStack_1f8 = (long *)((ulong)uStack_1f8._4_4_ << 0x20);
  uStack_1f0 = 1;
  puStack_1e8 = &SUB_048aead0;
  puStack_1e0 = &UNK_0de62760;
  puStack_1d8 = &UNK_0de62820;
  lStack_1d0 = 0;
  uStack_1c8 = (ulong)uStack_1c8._4_4_ << 0x20;
  lStack_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  func_0x049057f0(&uStack_120,&uStack_208);
  func_0x048aea50(&uStack_208);
  uStack_178 = uStack_110;
  uStack_174 = uStack_10c;
  iStack_170 = iStack_108;
  iStack_16c = iStack_104;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f4a2430;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551bc8), iVar4 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_208 = (undefined *)CONCAT44(uStack_208._4_4_,_DAT_0f551bb4);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef46c48;
  uStack_200 = plVar7 + 3;
  plVar7[3] = (long)puVar6;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0xff;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  uStack_1f8 = plVar7;
  func_0x048afd20(&uStack_188,&uStack_208);
  plVar7 = uStack_1f8;
  if (uStack_1f8 != (long *)0x0) {
    LOCK();
    plVar12 = uStack_1f8 + 1;
    lVar5 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_1f8 + 0x10))(uStack_1f8);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_140 + 1;
    lVar5 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      func_0x0412c2d0(plVar7);
    }
  }
  if ((DAT_0f73ebe8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f73ebe8), iVar4 != 0)) {
    func_0x0de61c70(0xf73ebd0);
    func_0x0410844d(&DAT_0f73ebe8);
  }
  if (iStack_104 == 2) {
    piVar8 = *(int **)(*(long *)(CONCAT44(uStack_10c,uStack_110) + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != iStack_108) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    lVar5 = *(long *)(piVar8 + 0xc);
    while (lVar5 != CONCAT44(uStack_114,uStack_118)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar5 = *(long *)(piVar8 + 0xc);
    }
LAB_0ddec3bf:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 2;
  }
  else {
    if (iStack_104 == 1) {
      piVar8 = *(int **)(*(long *)(CONCAT44(uStack_10c,uStack_110) + 0x78) + 0x48);
      iVar4 = *piVar8;
      while (iVar4 != iStack_108) {
        piVar8 = piVar8 + 0x1a;
        iVar4 = *piVar8;
      }
      goto LAB_0ddec3bf;
    }
    if (iStack_104 == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_10c,uStack_110) + 0x18);
      *puVar1 = *puVar1 | 0x20000;
    }
  }
  if ((DAT_0f73ebe8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f73ebe8), iVar4 != 0)) {
    func_0x0de61c70(0xf73ebd0);
    func_0x0410844d(&DAT_0f73ebe8);
  }
  uStack_208 = (undefined *)CONCAT44(uStack_208._4_4_,0xbf75c8f8);
  uStack_200 = (long *)0x0;
  uStack_1f8 = (long *)CONCAT44(uStack_1f8._4_4_,1);
  uStack_1f0 = 0;
  puStack_1e8 = &UNK_0de62bf0;
  puStack_1e0 = &SUB_048b06d0;
  puStack_1d8 = &UNK_0de66f60;
  lStack_1d0 = 0;
  uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
  lStack_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  func_0x049057f0(&uStack_120,&uStack_208);
  func_0x048aea50(&uStack_208);
  uStack_178 = uStack_110;
  uStack_174 = uStack_10c;
  iStack_170 = iStack_108;
  iStack_16c = iStack_104;
  uStack_188 = CONCAT44(uStack_11c,uStack_120);
  uStack_180 = CONCAT44(uStack_114,uStack_118);
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f4a2430;
  if ((DAT_0f551cb0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551cb0), iVar4 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_208 = (undefined *)CONCAT44(uStack_208._4_4_,_DAT_0f551c9c);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef46c98;
  uStack_200 = plVar7 + 3;
  plVar7[3] = (long)puVar6;
  *(undefined1 *)(plVar7 + 4) = 0xff;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  uStack_1f8 = plVar7;
  func_0x048afd20(&uStack_188,&uStack_208);
  plVar7 = uStack_1f8;
  if (uStack_1f8 != (long *)0x0) {
    LOCK();
    plVar12 = uStack_1f8 + 1;
    lVar5 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_1f8 + 0x10))(uStack_1f8);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_140 + 1;
    lVar5 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      func_0x0412c2d0(plVar7);
    }
  }
  iVar4 = (int)uStack_100;
  uVar3 = uStack_100._4_4_;
  puStack_1e8 = (undefined1 *)0x0;
  uStack_1a0 = 0;
  lStack_198 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  lStack_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  puStack_1e0 = (undefined *)0x0;
  puStack_1d8 = (undefined *)0x0;
  lStack_190 = 0;
  uStack_200 = (long *)0xffffffffffffffff;
  uStack_1f8 = (long *)0x0;
  uStack_1f0 = 0xff;
  uStack_208 = &UNK_0f4e3c70;
  func_0x041679a0(&puStack_1e8);
  puStack_1e0 = (undefined *)func_0x041681f0(&puStack_1e8,0xf547a30);
  puStack_1d8 = (undefined *)func_0x041681f0(&puStack_1e8,0xf547770);
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  bStack_160 = 0x16;
  uStack_15f = 0x6f647c7075285e;
  uStack_158 = 0x24296e77;
  uStack_154 = 0;
  func_0x0ed60210(&uStack_208,&bStack_160,0);
  uStack_d0 = (undefined1)uStack_1f0;
  uStack_e0 = (undefined4)uStack_200;
  uStack_dc = uStack_200._4_4_;
  uStack_d8 = (undefined4)uStack_1f8;
  uStack_d4 = uStack_1f8._4_4_;
  puStack_e8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_c8,&puStack_1e8);
  lStack_c0 = (long)puStack_1e0;
  lStack_b8 = (long)puStack_1d8;
  lStack_b0 = lStack_1d0;
  lStack_a8 = uStack_1c8;
  lStack_a0 = lStack_1c0;
  plStack_98 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    LOCK();
    plStack_1b8[1] = plStack_1b8[1] + 1;
    UNLOCK();
  }
  lStack_90 = lStack_1b0;
  if ((uStack_1a8 & 1) == 0) {
    lStack_78 = lStack_198;
    uStack_88 = uStack_1a8;
    uStack_80 = uStack_1a0;
  }
  else {
    func_0x0412e5e0(&uStack_88,lStack_198,uStack_1a0);
  }
  lStack_70 = lStack_190;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(0x98,0);
  }
  plStack_168 = plVar7 + 1;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0f0fb8c0;
  plStack_130 = plVar7 + 3;
  *(undefined4 *)(plVar7 + 4) = uStack_e0;
  *(undefined4 *)((long)plVar7 + 0x24) = uStack_dc;
  *(undefined4 *)(plVar7 + 5) = uStack_d8;
  *(undefined4 *)((long)plVar7 + 0x2c) = uStack_d4;
  *(undefined1 *)(plVar7 + 6) = uStack_d0;
  plVar7[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar7 + 7,auStack_c8);
  plVar12 = plStack_168;
  plVar7[8] = lStack_c0;
  plVar7[9] = lStack_b8;
  plVar7[10] = lStack_b0;
  plVar7[0xb] = lStack_a8;
  plVar7[0xc] = lStack_a0;
  plVar7[0xd] = (long)plStack_98;
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  plVar7[0xe] = lStack_90;
  plVar7[0x11] = lStack_78;
  *(undefined4 *)(plVar7 + 0xf) = (undefined4)uStack_88;
  *(undefined4 *)((long)plVar7 + 0x7c) = uStack_88._4_4_;
  *(undefined4 *)(plVar7 + 0x10) = (undefined4)uStack_80;
  *(undefined4 *)((long)plVar7 + 0x84) = uStack_80._4_4_;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  plVar7[0x12] = lStack_70;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  if (iVar4 == 4) {
    lVar5 = CONCAT44(uStack_124,uStack_128) + 0x18;
    uVar9 = func_0x0de61a80(lVar5);
    lVar5 = func_0x048b1040(lVar5,uVar9,uVar3,1);
    if (lVar5 == 0) {
      uStack_188 = 0;
      uStack_180 = 0;
      func_0x048b10d0(&uStack_188);
      lVar10 = *(long *)(uStack_188 + 0x38);
      lVar5 = uStack_188;
      if (lVar10 == 0) goto LAB_0ddec999;
LAB_0ddec9be:
      do {
        lVar5 = lVar10;
        lVar10 = *(long *)(lVar5 + 0x38);
        if (*(long *)(lVar5 + 0x38) == 0) {
          uStack_188 = 0;
          uStack_180 = 0;
          func_0x048b10d0(&uStack_188);
          lVar10 = uStack_188;
        }
      } while (lVar10 != 0);
    }
    else {
      lVar10 = *(long *)(lVar5 + 0x38);
      if (*(long *)(lVar5 + 0x38) != 0) goto LAB_0ddec9be;
LAB_0ddec999:
      uStack_188 = 0;
      uStack_180 = 0;
      func_0x048b10d0(&uStack_188);
      lVar10 = uStack_188;
      if (uStack_188 != 0) goto LAB_0ddec9be;
    }
    lVar5 = *(long *)(lVar5 + 0x48);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x48,0);
    }
  }
  else {
    if (iVar4 != 1) {
      LOCK();
      lVar5 = *plStack_168;
      *plStack_168 = *plStack_168 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
      goto LAB_0ddeca87;
    }
    lVar5 = CONCAT44(uStack_124,uStack_128) + 0x18;
    uVar9 = func_0x0de61a80(lVar5);
    lVar5 = func_0x048b0c90(lVar5,uVar9,uVar3,1);
    if (lVar5 == 0) {
      uStack_188 = 0;
      uStack_180 = 0;
      FUN_048b0d20(&uStack_188);
      lVar5 = uStack_188;
    }
    lVar5 = *(long *)(lVar5 + 0x58);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x48,0);
    }
  }
  plVar12 = plStack_168;
  puVar6[1] = 2;
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0xff;
  *puVar6 = &UNK_0f4e3d70;
  puVar6[4] = 1;
  puVar6[5] = plStack_130;
  puVar6[6] = plVar7;
  puVar6[7] = 0;
  puVar6[8] = 0;
  plVar2 = *(long **)(lVar5 + 8);
  *(undefined8 **)(lVar5 + 8) = puVar6;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
LAB_0ddeca87:
  LOCK();
  lVar5 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
  }
  if ((uStack_88 & 1) == 0) {
    puStack_e8 = &UNK_0f4e3c70;
    plVar7 = plStack_98;
  }
  else {
    puStack_e8 = &UNK_0f4e3c70;
    func_0x0412a280(lStack_78,uStack_88 & 0xfffffffffffffffe);
    plVar7 = plStack_98;
  }
  plStack_98 = plVar7;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    lVar5 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(auStack_c8);
  if ((bStack_160 & 1) != 0) {
    func_0x0412a280(uStack_150,CONCAT71(uStack_15f,bStack_160) & 0xfffffffffffffffe);
  }
  if ((uStack_1a8 & 1) == 0) {
    uStack_208 = &UNK_0f4e3c70;
    plVar7 = plStack_1b8;
  }
  else {
    uStack_208 = &UNK_0f4e3c70;
    func_0x0412a280(lStack_198,uStack_1a8 & 0xfffffffffffffffe);
    plVar7 = plStack_1b8;
  }
  plStack_1b8 = plVar7;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    lVar5 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(&puStack_1e8);
  return;
}


