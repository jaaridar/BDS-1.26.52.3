/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6337430 (ELF vaddr 0x6237430)
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[06337430, 06337441]]
 * Ghidra: FUN_06337430
 */


undefined8 FUN_06337430(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01738121) {
    uVar1 = param_1;
  }
  return uVar1;
}


