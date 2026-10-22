/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527a6a0 (ELF vaddr 0x517a6a0)
 * Label: OverworldGenerator::vslot0
 * Body:  [[0527a6a0, 0527a6ce]]
 * Ghidra: wg_OverworldGenerator__vslot0
 */


/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void wg_OverworldGenerator__vslot0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar2 = param_1 + -0xe;
  param_1[-0xe] = &UNK_0ef9d2a0;
  *param_1 = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x1a);
  *puVar2 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar3;
  }
  lVar4 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar4 != 0) {
    func_0x0412a280(lVar4,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar4 = param_1[1];
  param_1[1] = 0;
  if (lVar4 != 0) {
    func_0x0d352b40(lVar4);
    func_0x0412a280(lVar4,0x1c8);
  }
  *puVar2 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-1] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-3] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *puVar2 = &UNK_0f534768;
  plVar6 = (long *)param_1[-0xc];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


