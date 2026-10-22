/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83eb930 (ELF vaddr 0x82eb930)
 * Label: string:Jigsaw Structure Data Tag
 * Body:  [[083eb930, 083ec041] [083ec050, 083ec184]]
 * Ghidra: FUN_083eb930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083eb930(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined4 uStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined4 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  uint uStack_dc;
  uint uStack_d8;
  undefined1 uStack_d4;
  undefined4 auStack_d0 [2];
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_50;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  char cStack_20;
  
  func_0x07cab540();
  if ((DAT_0f5d2330 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d2330), iVar5 != 0)) {
    func_0x0848db20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d22b0,0xf53dab8);
    FUN_0410844d(&DAT_0f5d2330);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d22b0 + 4)) * 8);
  do {
    lVar2 = *plVar7;
    if (lVar2 == -1) goto LAB_083eb9a0;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d22b0 + 4));
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_083eb9a0:
    puVar6 = &DAT_0f5d22b0;
    if (iRam000000000f5d2310 != -0x2b3da790) goto LAB_083eba0d;
LAB_083eb9cb:
    lVar2 = *(long *)(puVar6 + 0x68);
    if (lVar2 == 0) goto LAB_083eba0d;
    bVar11 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar10 = lVar2 + 9;
    if (bVar11) {
      lVar10 = *(long *)(lVar2 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x08499fb0(&lStack_50,param_1,lVar10,uVar9);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_083eb9cb;
LAB_083eba0d:
    func_0x08499fb0(&lStack_50,param_1,&UNK_01363510,0x20);
  }
  if (cStack_20 != '\0') {
    return;
  }
  if ((DAT_0f5d2298 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d2298), iVar5 != 0)) {
    func_0x0848d9e0();
    FUN_0410844d(&DAT_0f5d2298);
  }
  uStack_28 = 0x255f7c6100000001;
  if ((DAT_0f5d2330 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d2330), iVar5 != 0)) {
    func_0x0848db20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5d22b0,0xf53dab8);
    FUN_0410844d(&DAT_0f5d2330);
  }
  puStack_198 = (undefined1 *)(lStack_50 + 0x18);
  plVar7 = (long *)(*(long *)(lStack_50 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_50 + 0x20) - *(long *)(lStack_50 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5d22b0 + 4)) * 8);
  do {
    lVar2 = *plVar7;
    if (lVar2 == -1) goto LAB_083ebad0;
    plVar7 = (long *)(*(long *)(lStack_50 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lStack_50 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d22b0 + 4)
          );
  if (plVar7 == *(long **)(lStack_50 + 0x38)) {
LAB_083ebad0:
    puStack_1a0 = &DAT_0f5d22b0;
  }
  else {
    puStack_1a0 = (undefined *)plVar7[2];
  }
  func_0x0ed621a0(&puStack_1a0,uStack_28._4_4_);
  puStack_1a0 = (undefined *)CONCAT62(puStack_1a0._2_6_,1);
  uStack_190 = uStack_28._4_4_;
  plStack_188 = (long *)0x0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  puStack_198 = auStack_48;
  puStack_150 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_150 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01465ce5;
  lStack_160 = 0x21;
  lStack_158 = 0x19;
  *(ulong *)((long)puStack_150 + 9) = CONCAT17(UNK_01465ce4,_DAT_01465cdd);
  *(undefined8 *)((long)puStack_150 + 0x11) = uVar3;
  uVar3 = CONCAT71(_DAT_01465cdd,UNK_01465cdc);
  *puStack_150 = _DAT_01465cd4;
  puStack_150[1] = uVar3;
  *(undefined1 *)((long)puStack_150 + 0x19) = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_118 = 0x3f600000;
  func_0x048afb10(&lStack_148,8);
  uStack_f0 = 0;
  lStack_e8 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_e0 = 0xff00;
  uStack_dc = uStack_dc & 0xffffff00;
  uStack_d8 = uStack_d8 & 0xffffff00;
  uStack_d4 = 0;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f0f7d80;
  if (plStack_188 != (long *)0x0) {
    lVar2 = *plStack_188;
    plStack_188 = plVar7;
    (**(code **)(lVar2 + 8))();
    plVar7 = plStack_188;
  }
  plStack_188 = plVar7;
  auStack_d0[0] = uStack_190;
  plStack_c8 = (long *)0x0;
  uStack_c0 = (long *)((ulong)uStack_c0._4_4_ << 0x20);
  uStack_b8 = 1;
  uStack_b0 = 0;
  puStack_a8 = &UNK_077e83c0;
  puStack_a0 = &SUB_048b06d0;
  puStack_98 = &UNK_077e83d0;
  puStack_90 = &UNK_0849ab10;
  puStack_88 = &UNK_0849ac70;
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  func_0x048b05a0(puStack_198,auStack_d0);
  plVar7 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar7);
    }
  }
  puVar4 = puStack_198;
  iVar5 = *(int *)(puStack_198 + 0x1c);
  if (iVar5 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(puStack_198 + 0x10) + 0x78) + 0x60);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(puStack_198 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar5 = *piVar8;
    }
    lVar2 = *(long *)(piVar8 + 0xc);
    while (lVar2 != *(long *)(puStack_198 + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar2 = *(long *)(piVar8 + 0xc);
    }
LAB_083ebd5f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (iVar5 == 1) {
      piVar8 = *(int **)(*(long *)(*(long *)(puStack_198 + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar8;
      while (iVar5 != *(int *)(puStack_198 + 0x18)) {
        piVar8 = piVar8 + 0x1a;
        iVar5 = *piVar8;
      }
      goto LAB_083ebd5f;
    }
    if (iVar5 == 0) {
      *(uint *)(*(long *)(puStack_198 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_198 + 0x10) + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_d0[0] = _DAT_0f550a0c;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar2 = lStack_180;
  plVar1 = plStack_188;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef439d0;
  plStack_c8 = plVar7 + 3;
  plStack_188 = (long *)0x0;
  lStack_180 = 0;
  plVar7[3] = (long)plVar1;
  plVar7[4] = lVar2;
  plVar7[7] = lStack_168;
  plVar7[5] = lStack_178;
  plVar7[6] = lStack_170;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  plVar7[10] = (long)puStack_150;
  plVar7[8] = lStack_160;
  plVar7[9] = lStack_158;
  lStack_160 = 0;
  lStack_158 = 0;
  puStack_150 = (undefined8 *)0x0;
  plVar7[0xb] = lStack_148;
  plVar7[0xc] = lStack_140;
  plVar7[0xd] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  plVar7[0xe] = lStack_130;
  plVar7[0xf] = lStack_128;
  plVar7[0x10] = lStack_120;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  *(undefined4 *)(plVar7 + 0x11) = uStack_118;
  plVar7[0x12] = lStack_110;
  plVar7[0x13] = lStack_108;
  plVar7[0x14] = lStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  plVar7[0x17] = lStack_e8;
  *(undefined4 *)(plVar7 + 0x15) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar7 + 0xac) = uStack_f8._4_4_;
  *(undefined4 *)(plVar7 + 0x16) = (undefined4)uStack_f0;
  *(undefined4 *)((long)plVar7 + 0xb4) = uStack_f0._4_4_;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  *(ulong *)((long)plVar7 + 0xc5) = CONCAT17(uStack_d4,CONCAT43(uStack_d8,uStack_dc._1_3_));
  plVar7[0x18] = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_c0 = plVar7;
  func_0x048afd20(puVar4,auStack_d0);
  plVar7 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar7);
    }
  }
  lVar2 = *(long *)(puVar4 + 0x10);
  iVar5 = *(int *)(puVar4 + 0x1c);
  if (iVar5 == 2) {
    piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(puVar4 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar5 = *piVar8;
    }
    for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar4 + 8); piVar8 = *(int **)(piVar8 + 0xe)) {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_1a0 << 0x10;
      }
      goto LAB_083ec05d;
    }
    piVar8 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(puVar4 + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar5 = *piVar8;
    }
  }
  piVar8[4] = piVar8[4] | (int)puStack_1a0 << 0x10;
LAB_083ec05d:
  func_0x048b0bc0(&plStack_188);
  return;
}



/* ---- referenced strings ----
 * 0x1465cd4  Jigsaw Structure Data Tag
 * 0x1465cdd  ructure Data Tag
 */
