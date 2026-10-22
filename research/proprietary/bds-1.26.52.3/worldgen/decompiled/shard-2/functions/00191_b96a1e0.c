/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xba6a1e0 (ELF vaddr 0xb96a1e0)
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[0ba6a1e0, 0ba6a1f1]]
 * Ghidra: FUN_0ba6a1e0
 */


undefined8 FUN_0ba6a1e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01c56106) {
    uVar1 = param_1;
  }
  return uVar1;
}


