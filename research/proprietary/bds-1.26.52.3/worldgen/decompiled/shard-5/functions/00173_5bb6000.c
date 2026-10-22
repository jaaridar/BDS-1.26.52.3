/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cb6000 (ELF vaddr 0x5bb6000)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cb6000, 05cb6032] [05cb6040, 05cb6093]]
 * Ghidra: FUN_05cb6000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_05cb6000(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = &UNK_0f40da60;
  *param_1 = &UNK_0f40da60;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    return puVar3;
  }
  lVar5 = param_1[3];
  lVar4 = lVar1;
  if (lVar1 != lVar5) {
    do {
      *(undefined **)(lVar5 + -0x18) = &UNK_0f3773c0;
      plVar2 = *(long **)(lVar5 + -0x10);
      *(undefined8 *)(lVar5 + -0x10) = 0;
      if (plVar2 != (long *)0x0) {
        puVar3 = (undefined *)(**(code **)(*plVar2 + 0x90))();
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != lVar1);
    lVar4 = param_1[2];
  }
  param_1[3] = lVar1;
  if (lVar4 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar4);
  }
  return puVar3;
}


