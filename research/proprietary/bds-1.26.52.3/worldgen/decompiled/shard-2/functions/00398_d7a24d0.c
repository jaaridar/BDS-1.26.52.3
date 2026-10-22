/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd8a24d0 (ELF vaddr 0xd7a24d0)
 * Label: caller-of-callee
 * Body:  [[0d8a24d0, 0d8a2fb7] [0d8a2fc0, 0d8a3300]]
 * Ghidra: FUN_0d8a24d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d8a24d0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  char cStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  
  if ((DAT_0f72b900 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72b900), iVar5 != 0)) {
    func_0x0d8b0670();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72b880,0xf53dab8);
    func_0x0410844d(&DAT_0f72b900);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f72b880 + 4)) * 8);
  do {
    lVar9 = *plVar8;
    if (lVar9 == -1) goto LAB_0d8a2540;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f72b880 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0d8a2540:
    puVar6 = &DAT_0f72b880;
    if (iRam000000000f72b8e0 != -0x2b3da790) goto LAB_0d8a25aa;
LAB_0d8a256b:
    lVar9 = *(long *)(puVar6 + 0x68);
    if (lVar9 == 0) goto LAB_0d8a25aa;
    bVar14 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar12 = lVar9 + 9;
    if (bVar14) {
      lVar12 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar14) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0d8afe60(&lStack_90,param_1,lVar12,uVar13);
    if (cStack_60 == '\0') goto LAB_0d8a25d1;
LAB_0d8a298d:
    lVar9 = func_0x05eada80(param_1 + 0x18);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0d8a2a65;
LAB_0d8a29a2:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0d8a2a65;
    bVar14 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar6 = (undefined *)(lVar9 + 9);
    if (bVar14) {
      puVar6 = *(undefined **)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar14) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar6 = (undefined *)plVar8[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0d8a256b;
LAB_0d8a25aa:
    func_0x0d8afe60(&lStack_90,param_1,&UNK_01440310,0xf);
    if (cStack_60 != '\0') goto LAB_0d8a298d;
LAB_0d8a25d1:
    uStack_68 = 0x1e1bc4d500000004;
    if ((DAT_0f72b920 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72b920), iVar5 != 0)) {
      func_0x0d8b0780();
      func_0x0410844d(&DAT_0f72b920);
    }
    lStack_108 = CONCAT44(lStack_108._4_4_,uStack_68._4_4_);
    plStack_100 = (long *)0x0;
    uStack_f8 = (long *)((ulong)uStack_f8._4_4_ << 0x20);
    uStack_f0 = 1;
    puStack_e8 = &SUB_048aead0;
    puStack_e0 = &UNK_04905970;
    puStack_d8 = &UNK_0d8b1410;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x049057f0(&uStack_88,&lStack_108);
    FUN_048aea50(&lStack_108);
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    iStack_40 = iStack_70;
    iStack_3c = iStack_6c;
    uStack_58 = uStack_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar7 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    lStack_108 = CONCAT44(lStack_108._4_4_,_DAT_0f551bb4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c48;
    plStack_100 = plVar8 + 3;
    plVar8[3] = (long)puVar7;
    plVar8[4] = 0;
    *(undefined1 *)(plVar8 + 5) = 0xff;
    uStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    uStack_f8 = plVar8;
    FUN_048afd20(&uStack_58,&lStack_108);
    plVar8 = uStack_f8;
    if (uStack_f8 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_f8 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_f8 + 0x10))(uStack_f8);
        FUN_0412c2d0(plVar8);
      }
    }
    plVar8 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_a0 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        FUN_0412c2d0(plVar8);
      }
    }
    if ((DAT_0f72b920 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72b920), iVar5 != 0)) {
      func_0x0d8b0780();
      func_0x0410844d(&DAT_0f72b920);
    }
    if (iStack_6c == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_74,uStack_78) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != iStack_70) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar9 = *(long *)(piVar10 + 0xc);
      while (lVar9 != CONCAT44(uStack_7c,uStack_80)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar9 = *(long *)(piVar10 + 0xc);
      }
LAB_0d8a27ff:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 2;
    }
    else {
      if (iStack_6c == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_74,uStack_78) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != iStack_70) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0d8a27ff;
      }
      if (iStack_6c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_74,uStack_78) + 0x18);
        *puVar1 = *puVar1 | 0x20000;
      }
    }
    if ((DAT_0f72b920 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72b920), iVar5 != 0)) {
      func_0x0d8b0780();
      func_0x0410844d(&DAT_0f72b920);
    }
    lStack_108 = CONCAT44(lStack_108._4_4_,0xbf75c8f8);
    plStack_100 = (long *)0x0;
    uStack_f8 = (long *)CONCAT44(uStack_f8._4_4_,1);
    uStack_f0 = 0;
    puStack_e8 = &SUB_048b2190;
    puStack_e0 = &SUB_048b06d0;
    puStack_d8 = &UNK_0d8b1690;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x049057f0(&uStack_88,&lStack_108);
    FUN_048aea50(&lStack_108);
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    iStack_40 = iStack_70;
    iStack_3c = iStack_6c;
    uStack_58 = uStack_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar7 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    lStack_108 = CONCAT44(lStack_108._4_4_,_DAT_0f551c9c);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c98;
    plStack_100 = plVar8 + 3;
    plVar8[3] = (long)puVar7;
    *(undefined1 *)(plVar8 + 4) = 0xff;
    uStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    uStack_f8 = plVar8;
    FUN_048afd20(&uStack_58,&lStack_108);
    plVar8 = uStack_f8;
    if (uStack_f8 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_f8 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_f8 + 0x10))(uStack_f8);
        FUN_0412c2d0(plVar8);
      }
    }
    plVar8 = plStack_a0;
    if (plStack_a0 == (long *)0x0) goto LAB_0d8a298d;
    LOCK();
    plVar2 = plStack_a0 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 != 0) goto LAB_0d8a298d;
    (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
    FUN_0412c2d0(plVar8);
    lVar9 = func_0x05eada80(param_1 + 0x18);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0d8a29a2;
LAB_0d8a2a65:
    puVar6 = &UNK_0130f1c1;
    uVar13 = 10;
  }
  func_0x07920610(&lStack_90,param_1,puVar6,uVar13,0);
  if (cStack_60 != '\0') {
    return;
  }
  uStack_68 = 0x1e1bc4d500000004;
  if ((DAT_0f561458 == '\0') && (iVar5 = func_0x04108328(&DAT_0f561458), iVar5 != 0)) {
    func_0x05eada10(0xf561440);
    func_0x0410844d(&DAT_0f561458);
  }
  lStack_108 = CONCAT44(lStack_108._4_4_,uStack_68._4_4_);
  plStack_100 = (long *)0x0;
  uStack_f8 = (long *)((ulong)uStack_f8 & 0xffffffff00000000);
  uStack_f0 = 1;
  puStack_e8 = &SUB_048aead0;
  puStack_e0 = &UNK_0d8b5c60;
  puStack_d8 = &UNK_0d8b5d20;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x049057f0(&uStack_88,&lStack_108);
  FUN_048aea50(&lStack_108);
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  iStack_40 = iStack_70;
  iStack_3c = iStack_6c;
  uStack_58 = uStack_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f489de0;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  lStack_108 = CONCAT44(lStack_108._4_4_,_DAT_0f551bb4);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plStack_100 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_f8 = plVar8;
  FUN_048afd20(&uStack_58,&lStack_108);
  plVar8 = uStack_f8;
  if (uStack_f8 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_f8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_f8 + 0x10))(uStack_f8);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      FUN_0412c2d0(plVar8);
    }
  }
  if ((DAT_0f561458 == '\0') && (iVar5 = func_0x04108328(&DAT_0f561458), iVar5 != 0)) {
    func_0x05eada10(0xf561440);
    func_0x0410844d(&DAT_0f561458);
  }
  if (iStack_6c == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_74,uStack_78) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != iStack_70) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    lVar9 = *(long *)(piVar10 + 0xc);
    while (lVar9 != CONCAT44(uStack_7c,uStack_80)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar9 = *(long *)(piVar10 + 0xc);
    }
  }
  else {
    if (iStack_6c != 1) {
      if (iStack_6c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_74,uStack_78) + 0x18);
        *puVar1 = *puVar1 | 0x20000;
      }
      goto LAB_0d8a2cc3;
    }
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_74,uStack_78) + 0x78) + 0x48);
    iVar5 = *piVar10;
    while (iVar5 != iStack_70) {
      piVar10 = piVar10 + 0x1a;
      iVar5 = *piVar10;
    }
  }
  *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 2;
LAB_0d8a2cc3:
  if ((DAT_0f561458 == '\0') && (iVar5 = func_0x04108328(&DAT_0f561458), iVar5 != 0)) {
    func_0x05eada10(0xf561440);
    func_0x0410844d(&DAT_0f561458);
  }
  lStack_108 = CONCAT44(lStack_108._4_4_,0xbf75c8f8);
  plStack_100 = (long *)0x0;
  uStack_f8 = (long *)CONCAT44(uStack_f8._4_4_,1);
  uStack_f0 = 0;
  puStack_e8 = &UNK_0d8b05b0;
  puStack_e0 = &SUB_048b06d0;
  puStack_d8 = &UNK_0d8b6340;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x049057f0(&uStack_88,&lStack_108);
  FUN_048aea50(&lStack_108);
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  iStack_40 = iStack_70;
  iStack_3c = iStack_6c;
  uStack_58 = uStack_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f489de0;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  lStack_108 = CONCAT44(lStack_108._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plStack_100 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_f8 = plVar8;
  FUN_048afd20(&uStack_58,&lStack_108);
  plVar8 = uStack_f8;
  if (uStack_f8 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_f8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_f8 + 0x10))(uStack_f8);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      FUN_0412c2d0(plVar8);
    }
  }
  uVar3 = uStack_68._4_4_;
  if ((int)uStack_68 == 4) {
    uVar11 = func_0x05eada80(lStack_90 + 0x18);
    lVar9 = func_0x048b1040(lStack_90 + 0x18,uVar11,uVar3,1);
    if (lVar9 == 0) {
      lStack_108 = 0;
      plStack_100 = (long *)0x0;
      func_0x048b10d0(&lStack_108);
      lVar12 = *(long *)(lStack_108 + 0x38);
      lVar9 = lStack_108;
    }
    else {
      lVar12 = *(long *)(lVar9 + 0x38);
    }
    if (lVar12 != 0) goto LAB_0d8a2fc5;
    lStack_108 = 0;
    plStack_100 = (long *)0x0;
    func_0x048b10d0(&lStack_108);
    lVar4 = lStack_108;
    while (lVar12 = lVar4, lVar12 != 0) {
LAB_0d8a2fc5:
      lVar9 = lVar12;
      lVar4 = *(long *)(lVar12 + 0x38);
      if (*(long *)(lVar12 + 0x38) == 0) {
        lStack_108 = 0;
        plStack_100 = (long *)0x0;
        func_0x048b10d0(&lStack_108);
        lVar4 = lStack_108;
      }
    }
    lVar9 = *(long *)(lVar9 + 0x48);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  else {
    if ((int)uStack_68 != 1) {
      return;
    }
    uVar11 = func_0x05eada80(lStack_90 + 0x18);
    lVar9 = func_0x048b0c90(lStack_90 + 0x18,uVar11,uVar3,1);
    if (lVar9 == 0) {
      lStack_108 = 0;
      plStack_100 = (long *)0x0;
      func_0x048b0d20(&lStack_108);
      lVar9 = lStack_108;
    }
    lVar9 = *(long *)(lVar9 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  puVar7[1] = 0xffffffffffffffff;
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 0xff;
  *puVar7 = &UNK_0f489bd0;
  plVar8 = *(long **)(lVar9 + 8);
  *(undefined8 **)(lVar9 + 8) = puVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


