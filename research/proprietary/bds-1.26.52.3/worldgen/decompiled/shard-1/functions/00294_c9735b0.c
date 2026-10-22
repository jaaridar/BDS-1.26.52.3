/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca735b0 (ELF vaddr 0xc9735b0)
 * Label: caller-of-seed
 * Body:  [[0ca735b0, 0ca73621]]
 * Ghidra: FUN_0ca735b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca735b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = param_1 + -2;
  param_1[-2] = &UNK_0f3ec808;
  param_1[-1] = &UNK_0f3ec9a8;
  *param_1 = &UNK_0f3ecab8;
  param_1[5] = &UNK_0f3ecae8;
  plVar2 = (long *)param_1[0x9a];
  if (plVar2 == param_1 + 0x96) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (plVar2 == (long *)0x0) goto SUB_0412a280;
  }
  (**(code **)(*plVar2 + lVar3))();
SUB_0412a280:
  uVar4 = func_0x0ca5ddd0(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar1);
  }
  return uVar4;
}


