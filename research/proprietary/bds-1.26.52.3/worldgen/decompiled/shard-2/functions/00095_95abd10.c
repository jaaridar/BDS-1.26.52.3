/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x95abd10
 * Label: string:minecraft:overworld
 * Body:  [[095abd10, 095abd2c] [095abd34, 095abd3e]]
 * Ghidra: FUN_095abd10
 */


long FUN_095abd10(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  bool in_ZF;
  
  if (in_ZF) {
    lVar1 = param_3;
    if (*(char *)(param_2 + 0x18) != *(char *)(param_3 + 0x18)) {
      lVar1 = 0;
    }
    if (*(long *)(param_2 + 0x10) != *(long *)(param_3 + 0x10)) {
      lVar1 = 0;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


