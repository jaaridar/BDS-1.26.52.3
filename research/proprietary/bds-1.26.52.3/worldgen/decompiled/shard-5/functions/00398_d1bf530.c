/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2bf530 (ELF vaddr 0xd1bf530)
 * Label: caller-of-seed
 * Body:  [[0d2bf530, 0d2bf782]]
 * Ghidra: FUN_0d2bf530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2bf530(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined *unaff_R12;
  long *unaff_R14;
  long *unaff_R15;
  long *plStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  long lStack_78;
  long *plStack_70;
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [16];
  uint uStack_38;
  
  lStack_78 = *param_2;
  plStack_70 = (long *)param_2[1];
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plStack_70[1] = plStack_70[1] + 1;
    UNLOCK();
  }
  if (lStack_78 == 0) goto LAB_0d2bf76d;
  unaff_R12 = &UNK_0f45e658;
  puStack_98 = &UNK_0f45e658;
  unaff_R14 = (long *)auStack_90;
  auStack_90[0] = 0;
  uStack_80 = 0xffffffff;
  uVar4 = *(uint *)(param_3 + 0x18);
  if ((ulong)uVar4 != 0xffffffff) {
    plStack_a0 = unaff_R14;
    (**(code **)(&UNK_0f45e478 + (ulong)uVar4 * 8))(&plStack_a0,param_3 + 8);
    uStack_80 = uVar4;
  }
  func_0x0d2d8280(&puStack_68,&lStack_78,&puStack_98);
  unaff_R15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (unaff_R15 == (long *)0x0) goto LAB_0d2bf772;
  while( true ) {
    uVar4 = uStack_38;
    unaff_R15[1] = 0;
    unaff_R15[2] = 0;
    *unaff_R15 = (long)&UNK_0f45e508;
    unaff_R15[3] = (long)&UNK_0f45f7f8;
    unaff_R15[4] = lStack_60;
    unaff_R15[5] = (long)plStack_58;
    if (plStack_58 != (long *)0x0) {
      LOCK();
      plStack_58[1] = plStack_58[1] + 1;
      UNLOCK();
    }
    if (lStack_60 != 0) break;
LAB_0d2bf76d:
    func_0x04890760();
LAB_0d2bf772:
    func_0x0eec74c0(0x50,0);
  }
  unaff_R15[6] = (long)unaff_R12;
  *(undefined1 *)(unaff_R15 + 7) = 0;
  *(undefined4 *)(unaff_R15 + 9) = 0xffffffff;
  if ((ulong)uStack_38 != 0xffffffff) {
    plStack_a0 = unaff_R15 + 7;
    (**(code **)(&UNK_0f45e548 + (ulong)uStack_38 * 8))(&plStack_a0,auStack_48);
    *(uint *)(unaff_R15 + 9) = uVar4;
  }
  *param_1 = unaff_R15 + 3;
  param_1[1] = unaff_R15;
  LOCK();
  unaff_R15[1] = unaff_R15[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = unaff_R15 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 == 0) {
    (**(code **)(*unaff_R15 + 0x10))(unaff_R15);
    FUN_0412c2d0(unaff_R15);
  }
  puStack_68 = &UNK_0f45f7f8;
  puStack_50 = unaff_R12;
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f45e468 + (ulong)uStack_38 * 8))(&plStack_a0,auStack_48);
  }
  uStack_38 = 0xffffffff;
  if (plStack_58 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      FUN_0412c2d0(plStack_58);
    }
  }
  puStack_98 = unaff_R12;
  if ((ulong)uStack_80 != 0xffffffff) {
    (**(code **)(&UNK_0f45e468 + (ulong)uStack_80 * 8))(&plStack_a0,unaff_R14);
  }
  plVar1 = plStack_70;
  uStack_80 = 0xffffffff;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      FUN_0412c2d0(plVar1);
    }
  }
  return param_1;
}


