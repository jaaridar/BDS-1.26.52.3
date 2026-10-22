/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5334490 (ELF vaddr 0x5234490)
 * Label: callee-of:0xc967b50
 * Body:  [[05334490, 053344ad] [053344b0, 053344ef]]
 * Ghidra: FUN_05334490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05334490(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar4 = param_1[1];
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    do {
      plVar2 = *(long **)(lVar4 + -8);
      *(undefined8 *)(lVar4 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        in_RAX = (**(code **)(*plVar2 + 8))();
      }
      lVar4 = lVar4 + -8;
    } while (lVar4 != lVar1);
    lVar3 = *param_1;
  }
  param_1[1] = lVar1;
  if (lVar3 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
  }
  return in_RAX;
}


