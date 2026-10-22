/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ca820 (ELF vaddr 0xc5ca820)
 * Label: JigsawBlock::vslot76
 * Body:  [[0c6ca820, 0c6ca913] [0cc41df0, 0cc41e9f]]
 * Ghidra: wg_JigsawBlock__vslot76
 */


/* WARNING: Possible PIC construction at 0x0cc41e81: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cc41e86) */

undefined8
wg_JigsawBlock__vslot76(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_RBX;
  undefined8 *puVar7;
  undefined *unaff_R14;
  long *unaff_R15;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_38;
  
  plVar3 = (long *)func_0x0412c300(*(undefined8 *)(param_2 + 0x1c8));
  plVar1 = *(long **)(param_2 + 0x1c0);
  LOCK();
  plVar4 = plVar3 + 1;
  lVar6 = *plVar4;
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    func_0x0412c2d0(plVar3);
  }
  plVar4 = (long *)(**(code **)(*plVar1 + 0x68))(plVar1);
  (**(code **)(*plVar4 + 0x1f8))(plVar4,param_2,0xf6e9de0,param_3,param_4);
  uVar5 = (**(code **)(**(long **)(param_2 + 0x1d0) + 0x628))();
  puStack_58 = &UNK_0f39b2c0;
  lStack_50 = param_2;
  uStack_48 = param_3;
  plStack_38 = (long *)&puStack_58;
  FUN_0c618c50(uVar5,&puStack_58);
  if ((undefined **)plStack_38 == &puStack_58) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (plStack_38 == (long *)0x0) goto LAB_0c6ca8ef;
  }
  (**(code **)(*plStack_38 + lVar6))();
LAB_0c6ca8ef:
  uVar5 = 1;
  while( true ) {
    *(long **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    unaff_R14 = &DAT_0f6eaec0;
    *(undefined4 *)((long)register0x00000020 + -0x38) = uRam000000000f6ffb28;
    *(undefined4 *)((long)register0x00000020 + -0x34) = uRam000000000f6ffb2c;
    *(undefined4 *)((long)register0x00000020 + -0x30) = uRam000000000f6ffb30;
    *(undefined4 *)((long)register0x00000020 + -0x2c) = uRam000000000f6ffb34;
    if (CONCAT44(uRam000000000f6ffb34,uRam000000000f6ffb30) != 0) {
      LOCK();
      plVar4 = (long *)(CONCAT44(uRam000000000f6ffb34,uRam000000000f6ffb30) + 8);
      *plVar4 = *plVar4 + 1;
      UNLOCK();
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e28;
    func_0x0cc46520((undefined1 *)((long)register0x00000020 + -0x28),
                    (undefined1 *)((long)register0x00000020 + -0x38),uVar5);
    unaff_R15 = *(long **)((long)register0x00000020 + -0x30);
    if (unaff_R15 != (long *)0x0) {
      LOCK();
      plVar4 = unaff_R15 + 1;
      lVar6 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        pcVar2 = *(code **)(*unaff_R15 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e4d;
        (*pcVar2)(unaff_R15);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e55;
        func_0x0412c2d0(unaff_R15);
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e67;
    lVar6 = func_0x0cc422f0(0xf6ff9e0,&DAT_0f6eaec0,0,0,0);
    if (lVar6 != 0) break;
    uVar5 = 0;
    puVar7 = (undefined8 *)((long)register0x00000020 + -0x40);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    *puVar7 = 0xcc41e86;
    unaff_RBX = 0xf6ff9e0;
  }
  uVar5 = *(undefined8 *)(lVar6 + 0x200);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0xcc41e93;
  func_0x0cc465d0((undefined1 *)((long)register0x00000020 + -0x28));
  return uVar5;
}


