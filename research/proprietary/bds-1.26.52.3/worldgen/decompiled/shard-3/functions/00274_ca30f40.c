/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb30f40 (ELF vaddr 0xca30f40)
 * Label: callee-of:0xc964ba0
 * Body:  [[0cb30f40, 0cb31233]]
 * Ghidra: FUN_0cb30f40
 */


void FUN_0cb30f40(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
  plStack_80 = (long *)0x0;
  puStack_68 = &UNK_0f3f21f0;
  plStack_60 = (long *)&UNK_0cb312b0;
  uStack_58 = 0;
  lStack_50 = param_1;
  (**(code **)(*plVar7 + 0x10))(&uStack_78,plVar7,&puStack_68,0,&plStack_80,0);
  if (puStack_68 != (undefined *)0x0) {
    (**(code **)(puStack_68 + 8))(&puStack_68);
  }
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if (&uStack_78 != puVar1) {
    if (*(long *)(param_1 + 0x58) == 0) {
      lVar8 = 0;
    }
    else {
      plVar7 = (long *)func_0x0412c300();
      plStack_60 = plVar7;
      if (plVar7 != (long *)0x0) {
        puStack_68 = (undefined *)*puVar1;
        if (puStack_68 != (undefined *)0x0) {
          (**(code **)(**(long **)(puStack_68 + 0x28) + 0x10))();
        }
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      lVar8 = *(long *)(param_1 + 0x58);
    }
    uVar3 = (undefined4)uStack_78;
    uVar4 = uStack_78._4_4_;
    uVar5 = (undefined4)uStack_70;
    uVar6 = uStack_70._4_4_;
    uStack_78 = (undefined *)0x0;
    uStack_70 = 0;
    *(undefined4 *)puVar1 = uVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
    if (lVar8 != 0) {
      func_0x0412c2d0();
    }
  }
  if (uStack_70 != 0) {
    plVar7 = (long *)func_0x0412c300();
    plStack_60 = plVar7;
    if (plVar7 != (long *)0x0) {
      puStack_68 = uStack_78;
      if (uStack_78 != (undefined *)0x0) {
        (**(code **)(**(long **)(uStack_78 + 0x28) + 0x10))();
      }
      LOCK();
      plVar2 = plVar7 + 1;
      lVar8 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
    if (uStack_70 != 0) {
      func_0x0412c2d0();
    }
  }
  plVar7 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = (long *)(**(code **)(*param_2 + 0x38))(param_2);
  plStack_80 = (long *)0x0;
  puStack_68 = &UNK_0f3f2208;
  plStack_60 = (long *)0xe1;
  uStack_58 = 0;
  lStack_50 = param_1;
  (**(code **)(*plVar7 + 0x10))(&uStack_78,plVar7,&puStack_68,0,&plStack_80,0);
  if (puStack_68 != (undefined *)0x0) {
    (**(code **)(puStack_68 + 8))(&puStack_68);
  }
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if (&uStack_78 != puVar1) {
    if (*(long *)(param_1 + 0x68) == 0) {
      lVar8 = 0;
    }
    else {
      plVar7 = (long *)func_0x0412c300();
      plStack_60 = plVar7;
      if (plVar7 != (long *)0x0) {
        puStack_68 = (undefined *)*puVar1;
        if (puStack_68 != (undefined *)0x0) {
          (**(code **)(**(long **)(puStack_68 + 0x28) + 0x10))();
        }
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      lVar8 = *(long *)(param_1 + 0x68);
    }
    uVar3 = (undefined4)uStack_78;
    uVar4 = uStack_78._4_4_;
    uVar5 = (undefined4)uStack_70;
    uVar6 = uStack_70._4_4_;
    uStack_78 = (undefined *)0x0;
    uStack_70 = 0;
    *(undefined4 *)puVar1 = uVar3;
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    if (lVar8 != 0) {
      func_0x0412c2d0();
    }
  }
  if (uStack_70 != 0) {
    plVar7 = (long *)func_0x0412c300();
    plStack_60 = plVar7;
    if (plVar7 != (long *)0x0) {
      puStack_68 = uStack_78;
      if (uStack_78 != (undefined *)0x0) {
        (**(code **)(**(long **)(uStack_78 + 0x28) + 0x10))();
      }
      LOCK();
      plVar2 = plVar7 + 1;
      lVar8 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
    if (uStack_70 != 0) {
      func_0x0412c2d0();
    }
  }
  plVar7 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  return;
}


