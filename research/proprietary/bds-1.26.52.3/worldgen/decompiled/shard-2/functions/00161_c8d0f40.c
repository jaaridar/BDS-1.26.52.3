/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9d0f40 (ELF vaddr 0xc8d0f40)
 * Label: callee-of:0x517c470
 * Body:  [[0c9d0f40, 0c9d10bf]]
 * Ghidra: FUN_0c9d0f40
 */


/* WARNING: Possible PIC construction at 0x0c9d105e: Changing call to branch */

void FUN_0c9d0f40(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  *param_1 = &UNK_0f3ea710;
  lVar4 = param_1[0x15];
  if (param_1[0x16] != lVar4) {
    uVar6 = 0;
    do {
      plVar5 = *(long **)(lVar4 + uVar6 * 8);
      (**(code **)(*plVar5 + 0x18))(plVar5,param_1);
      uVar6 = uVar6 + 1;
      lVar4 = param_1[0x15];
    } while (uVar6 < (ulong)(param_1[0x16] - lVar4 >> 3));
  }
  puVar3 = (undefined8 *)param_1[0x2b];
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    func_0x0412a280(puVar3,0x18);
    puVar3 = puVar2;
  }
  lVar4 = param_1[0x29];
  param_1[0x29] = 0;
  if (lVar4 != 0) {
    func_0x0412a280(lVar4,param_1[0x2a] << 3);
  }
  lVar4 = param_1[0x26];
  if (lVar4 != 0) {
    param_1[0x27] = lVar4;
    func_0x0412a280(lVar4,param_1[0x28] - lVar4);
  }
  lVar4 = param_1[0x23];
  if (lVar4 != 0) {
    param_1[0x24] = lVar4;
    func_0x0412a280(lVar4,param_1[0x25] - lVar4);
  }
  lVar4 = param_1[0x20];
  if (lVar4 != 0) {
    param_1[0x21] = lVar4;
    func_0x0412a280(lVar4,param_1[0x22] - lVar4);
  }
  plVar5 = (long *)param_1[0x1b];
  if (plVar5 == (long *)0x0) {
    lVar4 = param_1[0x15];
    if (lVar4 != 0) {
      param_1[0x16] = lVar4;
      func_0x0412a280(lVar4,param_1[0x17] - lVar4);
    }
    func_0x06176ab0(param_1 + 0xd);
    lVar4 = param_1[9];
    if (lVar4 != 0) {
      param_1[10] = lVar4;
      func_0x0412a280(lVar4,param_1[0xb] - lVar4);
    }
    plVar5 = (long *)param_1[2];
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  if (plVar5[2] != 0) {
    LOCK();
    plVar1 = plVar5 + 2;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}


