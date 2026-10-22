/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0de0 (ELF vaddr 0x47b0de0)
 * Label: callee-of:0x82eb2d0
 * Body:  [[048b0de0, 048b0e68]]
 * Ghidra: FUN_048b0de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_048b0de0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UNK_0ef44ab0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 9) = 0x3f600000;
  func_0x048af640(puVar1 + 3,8);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return param_1;
}


