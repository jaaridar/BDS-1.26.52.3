/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412d440 (ELF vaddr 0x402d440)
 * Label: callee-of:0xca2f0d0
 * Body:  [[0412d440, 0412d444]]
 * Ghidra: thunk_FUN_0412d1e0
 */


void thunk_FUN_0412d1e0(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


