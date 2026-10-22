/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce48710 (ELF vaddr 0xcd48710)
 * Label: caller-of-callee
 * Body:  [[0ce48710, 0ce48e87]]
 * Ghidra: FUN_0ce48710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ce48710(void)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  undefined4 auStack_f0 [2];
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  char cStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  _DAT_0f7079c0 = (long *)0x0;
  uRam000000000f7079c8 = 0;
  _DAT_0f7079b0 = 0;
  _DAT_0f7079b8 = 0;
  _DAT_0f7079a0 = 0;
  _DAT_0f7079a8 = 0;
  _DAT_0f7079d0 = 0x3f600000;
  func_0x048af640(&DAT_0f7079a0,8);
  uRam000000000f7079e8 = 0;
  uRam000000000f7079ea = 0;
  _DAT_0f7079d8 = 0;
  uRam000000000f7079e0 = 0;
  _DAT_0f7079e2 = 0;
  _DAT_0f707988 = &UNK_0f534768;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &UNK_0ef44a60;
  _DAT_0f707990 = puVar5 + 3;
  *(undefined1 *)(puVar5 + 3) = 1;
  _DAT_0f707988 = &UNK_0ef471f0;
  _DAT_0f707998 = puVar5;
  func_0x0d8a4910(&DAT_0f707988);
  if ((DAT_0f707bb0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f707bb0), iVar4 != 0)) {
    func_0x0ce6f920();
    __cxa_atexit(&UNK_048ae800,&DAT_0f707b30,0xf53dab8);
    func_0x0410844d(&DAT_0f707bb0);
  }
  plVar7 = (long *)(_DAT_0f7079a0 +
                   (ulong)((int)((ulong)(_DAT_0f7079a8 - _DAT_0f7079a0) >> 3) - 1U &
                          *(uint *)(_DAT_0f707b30 + 4)) * 8);
  do {
    lVar3 = *plVar7;
    if (lVar3 == -1) goto LAB_0ce48843;
    plVar7 = (long *)(_DAT_0f7079b8 + lVar3 * 0x18);
  } while (*(uint *)(_DAT_0f7079b8 + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f707b30 + 4));
  if (plVar7 == _DAT_0f7079c0) {
LAB_0ce48843:
    puVar6 = &DAT_0f707b30;
    if (iRam000000000f707b90 != -0x2b3da790) goto LAB_0ce488ac;
LAB_0ce48871:
    lVar3 = *(long *)(puVar6 + 0x68);
    if (lVar3 == 0) goto LAB_0ce488ac;
    bVar11 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar10 = lVar3 + 9;
    if (bVar11) {
      lVar10 = *(long *)(lVar3 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0ce70030(auStack_80,lVar10,uVar9);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0ce48871;
LAB_0ce488ac:
    func_0x0ce70030(auStack_80,0,0);
  }
  if (cStack_50 != '\0') {
    return;
  }
  uStack_58 = 0x1e1bc4d500000004;
  if ((DAT_0f707bd0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f707bd0), iVar4 != 0)) {
    func_0x0ce6fa30();
    func_0x0410844d(&DAT_0f707bd0);
  }
  auStack_f0[0] = uStack_58._4_4_;
  plStack_e8 = (long *)0x0;
  uStack_e0 = (long *)((ulong)uStack_e0._4_4_ << 0x20);
  uStack_d8 = 1;
  puStack_d0 = &SUB_048aead0;
  puStack_c8 = &UNK_04905970;
  puStack_c0 = &UNK_0ce70b50;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  FUN_049057f0(&uStack_78,auStack_f0);
  func_0x048aea50(auStack_f0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  iStack_30 = iStack_60;
  iStack_2c = iStack_5c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar5 = &UNK_0ef44b00;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = FUN_04108328(&DAT_0f551bc8), iVar4 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_f0[0] = _DAT_0f551bb4;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef46c48;
  plStack_e8 = plVar7 + 3;
  plVar7[3] = (long)puVar5;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0xff;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_e0 = plVar7;
  func_0x048afd20(&uStack_48,auStack_f0);
  plVar7 = uStack_e0;
  if (uStack_e0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_e0 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar7);
    }
  }
  if ((DAT_0f707bd0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f707bd0), iVar4 != 0)) {
    func_0x0ce6fa30();
    func_0x0410844d(&DAT_0f707bd0);
  }
  if (iStack_5c == 2) {
    piVar8 = *(int **)(*(long *)(CONCAT44(uStack_64,uStack_68) + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != iStack_60) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    lVar3 = *(long *)(piVar8 + 0xc);
    while (lVar3 != CONCAT44(uStack_6c,uStack_70)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar3 = *(long *)(piVar8 + 0xc);
    }
  }
  else {
    if (iStack_5c != 1) {
      if (iStack_5c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_64,uStack_68) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0ce48b03;
    }
    piVar8 = *(int **)(*(long *)(CONCAT44(uStack_64,uStack_68) + 0x78) + 0x48);
    iVar4 = *piVar8;
    while (iVar4 != iStack_60) {
      piVar8 = piVar8 + 0x1a;
      iVar4 = *piVar8;
    }
  }
  *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 2;
LAB_0ce48b03:
  if ((DAT_0f707bd0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f707bd0), iVar4 != 0)) {
    func_0x0ce6fa30();
    func_0x0410844d(&DAT_0f707bd0);
  }
  auStack_f0[0] = 0xbf75c8f8;
  plStack_e8 = (long *)0x0;
  uStack_e0 = (long *)CONCAT44(uStack_e0._4_4_,1);
  uStack_d8 = 0;
  puStack_d0 = &SUB_048b2190;
  puStack_c8 = &SUB_048b06d0;
  puStack_c0 = &UNK_0ce70d40;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  FUN_049057f0(&uStack_78,auStack_f0);
  func_0x048aea50(auStack_f0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  iStack_30 = iStack_60;
  iStack_2c = iStack_5c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar5 = &UNK_0ef44b00;
  if ((DAT_0f551cb0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f551cb0), iVar4 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_f0[0] = _DAT_0f551c9c;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef46c98;
  plStack_e8 = plVar7 + 3;
  plVar7[3] = (long)puVar5;
  *(undefined1 *)(plVar7 + 4) = 0xff;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_e0 = plVar7;
  func_0x048afd20(&uStack_48,auStack_f0);
  plVar7 = uStack_e0;
  if (uStack_e0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_e0 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      func_0x0412c2d0(plVar7);
    }
  }
  return;
}


