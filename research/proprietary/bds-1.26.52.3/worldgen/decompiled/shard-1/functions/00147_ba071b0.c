/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbb071b0 (ELF vaddr 0xba071b0)
 * Label: string:ZN6Editor7Network22PayloadServiceProvider16_registerPayloadI
 * Body:  [[0bb071b0, 0bb071c5]]
 * Ghidra: FUN_0bb071b0
 */


long FUN_0bb071b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01c6730c) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


