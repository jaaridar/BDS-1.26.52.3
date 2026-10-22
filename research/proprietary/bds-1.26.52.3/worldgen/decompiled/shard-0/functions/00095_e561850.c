/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe561850
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e561850, 0e5618db]]
 * Ghidra: FUN_0e561850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0e561850(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[2] = &UNK_0e561370;
  *(undefined4 *)(param_1 + 4) = 0xc1ae334d;
  param_1[3] = &UNK_0e561570;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *param_1 = puVar1;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = &UNK_0e5611e0;
  return param_1;
}


