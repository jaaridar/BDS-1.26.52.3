/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb68dc90 (ELF vaddr 0xb58dc90)
 * Label: caller-of-callee
 * Body:  [[0b68dc90, 0b68e8cc]]
 * Ghidra: FUN_0b68dc90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b68dc90(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  undefined4 auStack_1e0 [2];
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined4 auStack_178 [2];
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f6b5748 == '\0') && (iVar3 = FUN_04108328(&DAT_0f6b5748), iVar3 != 0)) {
    func_0x0b6ae890();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6b56c8,0xf53dab8);
    func_0x0410844d(&DAT_0f6b5748);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6b56c8 + 4)) * 8);
  do {
    lVar2 = *plVar5;
    if (lVar2 == -1) goto LAB_0b68dd00;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f6b56c8 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0b68dd00:
    puVar4 = &DAT_0f6b56c8;
    if (iRam000000000f6b5728 != -0x2b3da790) goto LAB_0b68dd6d;
LAB_0b68dd2b:
    lVar2 = *(long *)(puVar4 + 0x68);
    if (lVar2 == 0) goto LAB_0b68dd6d;
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0b6ae200(&uStack_a8,param_1,lVar9,uVar8);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0b68dd2b;
LAB_0b68dd6d:
    func_0x0b6ae200(&uStack_a8,param_1,0,0);
  }
  if (cStack_78 == '\0') {
    func_0x0b6aec90(auStack_178,CONCAT44(uStack_a4,uStack_a8) + 0x18);
    if (uStack_160._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)((long)uStack_168 + 0x78) + 0x60);
      iVar3 = *piVar7;
      while (iVar3 != (int)uStack_160) {
        piVar7 = piVar7 + 0x16;
        iVar3 = *piVar7;
      }
      lVar2 = *(long *)(piVar7 + 0xc);
      while ((long *)lVar2 != plStack_170) {
        piVar7 = *(int **)(piVar7 + 0xe);
        lVar2 = *(long *)(piVar7 + 0xc);
      }
LAB_0b68ddff:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_160._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)((long)uStack_168 + 0x78) + 0x48);
        iVar3 = *piVar7;
        while (iVar3 != (int)uStack_160) {
          piVar7 = piVar7 + 0x1a;
          iVar3 = *piVar7;
        }
        goto LAB_0b68ddff;
      }
      if (uStack_160._4_4_ == 0) {
        *(uint *)((long)uStack_168 + 0x18) = *(uint *)((long)uStack_168 + 0x18) | 0x40000;
      }
    }
    func_0x0b6af1f0(auStack_178,&uStack_a8,&UNK_011e9523);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0ef46ce8;
    if (uStack_160 != (long *)0x0) {
      lVar2 = *uStack_160;
      uStack_160 = plVar5;
      (**(code **)(lVar2 + 8))();
      plVar5 = uStack_160;
    }
    uStack_160 = plVar5;
    auStack_1e0[0] = (undefined4)uStack_168;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 1;
    uStack_1c0 = 0;
    uStack_1b8 = &UNK_0490ce30;
    puStack_1b0 = &SUB_048b06d0;
    puStack_1a8 = &SUB_0490cb20;
    puStack_1a0 = &UNK_0b6af730;
    puStack_198 = &UNK_0b6af890;
    uStack_190 = 0;
    uStack_188 = 0;
    plStack_180 = (long *)0x0;
    func_0x048b05a0(plStack_170,auStack_1e0);
    plVar5 = plStack_180;
    if (plStack_180 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x0b6af430(auStack_178);
    cStack_38 = cStack_78;
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    uStack_58 = uStack_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    uStack_68 = CONCAT44(uStack_a4,uStack_a8);
    func_0x048b0bc0(&uStack_160);
    func_0x0b6aec90(auStack_178,uStack_68 + 0x18);
    if (uStack_160._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)((long)uStack_168 + 0x78) + 0x60);
      iVar3 = *piVar7;
      while (iVar3 != (int)uStack_160) {
        piVar7 = piVar7 + 0x16;
        iVar3 = *piVar7;
      }
      lVar2 = *(long *)(piVar7 + 0xc);
      while ((long *)lVar2 != plStack_170) {
        piVar7 = *(int **)(piVar7 + 0xe);
        lVar2 = *(long *)(piVar7 + 0xc);
      }
LAB_0b68e03f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_160._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)((long)uStack_168 + 0x78) + 0x48);
        iVar3 = *piVar7;
        while (iVar3 != (int)uStack_160) {
          piVar7 = piVar7 + 0x1a;
          iVar3 = *piVar7;
        }
        goto LAB_0b68e03f;
      }
      if (uStack_160._4_4_ == 0) {
        *(uint *)((long)uStack_168 + 0x18) = *(uint *)((long)uStack_168 + 0x18) | 0x40000;
      }
    }
    func_0x0b6af1f0(auStack_178,&uStack_68,&UNK_012ba56c);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0ef46ce8;
    if (uStack_160 != (long *)0x0) {
      lVar2 = *uStack_160;
      uStack_160 = plVar5;
      (**(code **)(lVar2 + 8))();
      plVar5 = uStack_160;
    }
    uStack_160 = plVar5;
    auStack_1e0[0] = (undefined4)uStack_168;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 1;
    uStack_1c0 = 0;
    uStack_1b8 = &UNK_0490ce30;
    puStack_1b0 = &SUB_048b06d0;
    puStack_1a8 = &SUB_0490cb20;
    puStack_1a0 = &UNK_0b6afa60;
    puStack_198 = &UNK_0b6afbc0;
    uStack_190 = 0;
    uStack_188 = 0;
    plStack_180 = (long *)0x0;
    func_0x048b05a0(plStack_170,auStack_1e0);
    plVar5 = plStack_180;
    if (plStack_180 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x0b6af430(auStack_178);
    func_0x048b0bc0(&uStack_160);
  }
  if ((DAT_0f6b5800 == '\0') && (iVar3 = FUN_04108328(&DAT_0f6b5800), iVar3 != 0)) {
    func_0x0b6afe60();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6b5780,0xf53dab8);
    func_0x0410844d(&DAT_0f6b5800);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6b5780 + 4)) * 8);
  do {
    lVar2 = *plVar5;
    if (lVar2 == -1) goto LAB_0b68e1b0;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f6b5780 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0b68e1b0:
    puVar4 = &DAT_0f6b5780;
    if (iRam000000000f6b57e0 != -0x2b3da790) goto LAB_0b68e217;
LAB_0b68e1db:
    lVar2 = *(long *)(puVar4 + 0x68);
    if (lVar2 == 0) goto LAB_0b68e217;
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0b6b0270(auStack_1e0,param_1,lVar9,uVar8);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0b68e1db;
LAB_0b68e217:
    func_0x0b6b0270(auStack_1e0,param_1,&UNK_012d6995,9);
  }
  if ((char)puStack_1b0 != '\0') {
    return;
  }
  uStack_1b8 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f6b5820 == '\0') && (iVar3 = FUN_04108328(&DAT_0f6b5820), iVar3 != 0)) {
    func_0x0b6aff70();
    func_0x0410844d(&DAT_0f6b5820);
  }
  auStack_178[0] = uStack_1b8._4_4_;
  plStack_170 = (long *)0x0;
  uStack_168 = (long *)((ulong)uStack_168._4_4_ << 0x20);
  uStack_160 = (long *)0x1;
  puStack_158 = &SUB_048aead0;
  puStack_150 = &UNK_0b6b0d80;
  puStack_148 = &UNK_0b6b0e40;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  FUN_049057f0(&uStack_1d8,auStack_178);
  func_0x048aea50(auStack_178);
  uStack_98 = (undefined4)uStack_1c8;
  uStack_94 = uStack_1c8._4_4_;
  uStack_90 = (int)uStack_1c0;
  uStack_8c = uStack_1c0._4_4_;
  uStack_a8 = (undefined4)uStack_1d8;
  uStack_a4 = uStack_1d8._4_4_;
  uStack_a0 = uStack_1d0;
  uStack_9c = uStack_1cc;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f2ce078;
  if ((DAT_0f551bc8 == '\0') && (iVar3 = FUN_04108328(&DAT_0f551bc8), iVar3 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_178[0] = _DAT_0f551bb4;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef46c48;
  plStack_170 = plVar5 + 3;
  plVar5[3] = (long)puVar6;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0xff;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_168 = plVar5;
  func_0x048afd20(&uStack_a8,auStack_178);
  plVar5 = uStack_168;
  if (uStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_168 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_168 + 0x10))(uStack_168);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar5);
    }
  }
  if ((DAT_0f6b5820 == '\0') && (iVar3 = FUN_04108328(&DAT_0f6b5820), iVar3 != 0)) {
    func_0x0b6aff70();
    func_0x0410844d(&DAT_0f6b5820);
  }
  if (uStack_1c0._4_4_ == 2) {
    piVar7 = *(int **)(*(long *)(uStack_1c8 + 0x78) + 0x60);
    iVar3 = *piVar7;
    while (iVar3 != (int)uStack_1c0) {
      piVar7 = piVar7 + 0x16;
      iVar3 = *piVar7;
    }
    lVar2 = *(long *)(piVar7 + 0xc);
    while (lVar2 != CONCAT44(uStack_1cc,uStack_1d0)) {
      piVar7 = *(int **)(piVar7 + 0xe);
      lVar2 = *(long *)(piVar7 + 0xc);
    }
  }
  else {
    if (uStack_1c0._4_4_ != 1) {
      if (uStack_1c0._4_4_ == 0) {
        *(uint *)(uStack_1c8 + 0x18) = *(uint *)(uStack_1c8 + 0x18) | 0x20000;
      }
      goto LAB_0b68e4e3;
    }
    piVar7 = *(int **)(*(long *)(uStack_1c8 + 0x78) + 0x48);
    iVar3 = *piVar7;
    while (iVar3 != (int)uStack_1c0) {
      piVar7 = piVar7 + 0x1a;
      iVar3 = *piVar7;
    }
  }
  *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 2;
LAB_0b68e4e3:
  if ((DAT_0f6b5820 == '\0') && (iVar3 = FUN_04108328(&DAT_0f6b5820), iVar3 != 0)) {
    func_0x0b6aff70();
    func_0x0410844d(&DAT_0f6b5820);
  }
  auStack_178[0] = 0xbf75c8f8;
  plStack_170 = (long *)0x0;
  uStack_168 = (long *)CONCAT44(uStack_168._4_4_,1);
  uStack_160 = (long *)0x0;
  puStack_158 = &UNK_0b6ae7d0;
  puStack_150 = &SUB_048b06d0;
  puStack_148 = &UNK_0b6b12e0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  FUN_049057f0(&uStack_1d8,auStack_178);
  func_0x048aea50(auStack_178);
  uStack_98 = (undefined4)uStack_1c8;
  uStack_94 = uStack_1c8._4_4_;
  uStack_90 = (int)uStack_1c0;
  uStack_8c = uStack_1c0._4_4_;
  uStack_a8 = (undefined4)uStack_1d8;
  uStack_a4 = uStack_1d8._4_4_;
  uStack_a0 = uStack_1d0;
  uStack_9c = uStack_1cc;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f2ce078;
  if ((DAT_0f551cb0 == '\0') && (iVar3 = FUN_04108328(&DAT_0f551cb0), iVar3 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_178[0] = _DAT_0f551c9c;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef46c98;
  plStack_170 = plVar5 + 3;
  plVar5[3] = (long)puVar6;
  *(undefined1 *)(plVar5 + 4) = 0xff;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_168 = plVar5;
  func_0x048afd20(&uStack_a8,auStack_178);
  plVar5 = uStack_168;
  if (uStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_168 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_168 + 0x10))(uStack_168);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar5);
    }
  }
  return;
}


