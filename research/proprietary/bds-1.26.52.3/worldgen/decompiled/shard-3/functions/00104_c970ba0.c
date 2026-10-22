/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca70ba0 (ELF vaddr 0xc970ba0)
 * Label: WorldGenerator::vslot0
 * Body:  [[0ca70ba0, 0ca70ba8]]
 * Ghidra: wg_WorldGenerator__vslot0
 */


void wg_WorldGenerator__vslot0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar6 = param_1 + -0xe;
  *puVar6 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar4 = (undefined8 *)param_1[0x10];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0412a280(puVar4,0x18);
    puVar4 = puVar2;
  }
  lVar3 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar3 = param_1[1];
  param_1[1] = 0;
  if (lVar3 != 0) {
    func_0x0d352b40(lVar3);
    func_0x0412a280(lVar3,0x1c8);
  }
  *puVar6 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0412c2d0(plVar5);
      }
    }
    if (param_1[-1] != 0) {
      FUN_0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0412c2d0(plVar5);
      }
    }
    if (param_1[-3] != 0) {
      FUN_0412c2d0();
    }
  }
  plVar5 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *puVar6 = &UNK_0f534768;
  plVar5 = (long *)param_1[-0xc];
  if (plVar5 != (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 != 0) {
      return;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (plVar5[2] != 0) {
      LOCK();
      plVar1 = plVar5 + 2;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 != 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x20))();
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  return;
}


