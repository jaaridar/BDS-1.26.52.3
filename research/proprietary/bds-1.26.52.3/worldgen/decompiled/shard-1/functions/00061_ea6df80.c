/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xea6df80
 * Label: string:ambient.cave
 * Body:  [[0ea6df80, 0ea6df97] [0ea6e03e, 0ea6e044] [0ea6e0d3, 0ea6e0e4]]
 * Ghidra: FUN_0ea6df80
 */


undefined8 FUN_0ea6df80(uint param_1)

{
  undefined8 uVar1;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x0ea6df96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_01e35cdc + *(int *)(&UNK_01e35cdc + (ulong)param_1 * 4)))();
    return uVar1;
  }
  return 0;
}


