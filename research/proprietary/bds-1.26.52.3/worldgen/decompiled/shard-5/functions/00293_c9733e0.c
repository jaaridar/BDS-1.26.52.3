/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca733e0 (ELF vaddr 0xc9733e0)
 * Label: caller-of-seed
 * Body:  [[0ca733e0, 0ca7344e]]
 * Ghidra: FUN_0ca733e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca733e0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &UNK_0f3ec808;
  param_1[1] = &UNK_0f3ec9a8;
  param_1[2] = &UNK_0f3ecab8;
  param_1[7] = &UNK_0f3ecae8;
  plVar1 = (long *)param_1[0x9c];
  if (plVar1 == param_1 + 0x98) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto FUN_0412a280;
  }
  (**(code **)(*plVar1 + lVar2))();
FUN_0412a280:
  uVar3 = func_0x0ca5ddd0(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar3;
}


