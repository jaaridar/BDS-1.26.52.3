/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x64252c0 (ELF vaddr 0x63252c0)
 * Label: callee-of:0x61407e0
 * Body:  [[064252c0, 06425314] [06425320, 06425368] [06425370, 06425421]]
 * Ghidra: FUN_064252c0
 */


void FUN_064252c0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &UNK_0f02f610;
  func_0x0d366a60(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    plVar4 = (long *)puVar5[4];
    puVar5[4] = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    FUN_0412a280(puVar5,0x28);
    puVar5 = puVar3;
  }
  lVar2 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar2 != 0) {
    FUN_0412a280(lVar2,param_1[0xf] << 3);
  }
  puVar5 = (undefined8 *)param_1[5];
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    plVar4 = (long *)puVar5[4];
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0412c2d0(plVar4);
      }
    }
    FUN_0412a280(puVar5,0x28);
    puVar5 = puVar3;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    FUN_0412a280(lVar2,param_1[4] << 3);
  }
  *param_1 = &UNK_0f534768;
  plVar4 = (long *)param_1[2];
  if (plVar4 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  else {
    *(undefined1 *)param_1[1] = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (plVar4[2] != 0) {
        LOCK();
        plVar1 = plVar4 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))();
      return;
    }
  }
  return;
}


