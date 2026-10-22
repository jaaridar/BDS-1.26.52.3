/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x529ba70 (ELF vaddr 0x519ba70)
 * Label: OverworldGenerator2d::vslot0
 * Body:  [[0412c2d0, 0412c2f1] [0529ba70, 0529bcab]]
 * Ghidra: wg_OverworldGenerator2d__vslot0
 */


/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void wg_OverworldGenerator2d__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[0x47];
  param_1[0x47] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  lVar2 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  lVar2 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  lVar2 = param_1[0x43];
  param_1[0x43] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  lVar2 = param_1[0x42];
  param_1[0x42] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  lVar2 = param_1[0x41];
  param_1[0x41] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  lVar2 = param_1[0x40];
  param_1[0x40] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  lVar2 = param_1[0x3f];
  param_1[0x3f] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  lVar2 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      thunk_FUN_0ee326a0(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    thunk_FUN_0ee326a0(lVar2,0x28);
  }
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x28);
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar5 = (undefined8 *)param_1[0x1e];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    thunk_FUN_0ee326a0(puVar5,0x18);
    puVar5 = puVar4;
  }
  lVar2 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar2 != 0) {
    thunk_FUN_0ee326a0(lVar2,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar2 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar2 != 0) {
    func_0x0d352b40(lVar2);
    thunk_FUN_0ee326a0(lVar2,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar6 = (long *)param_1[2];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


