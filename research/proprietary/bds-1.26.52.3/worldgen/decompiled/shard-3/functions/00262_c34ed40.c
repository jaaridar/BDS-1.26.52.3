/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc44ed40 (ELF vaddr 0xc34ed40)
 * Label: callee-of:0xc5cb4d0
 * Body:  [[0c44ed40, 0c44ed91]]
 * Ghidra: FUN_0c44ed40
 */


void FUN_0c44ed40(undefined8 *param_1)

{
  *param_1 = &UNK_0f36e918;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x1b) = 0;
  *(undefined2 *)((long)param_1 + 0x23) = 0x101;
  *(undefined1 *)((long)param_1 + 0x25) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  func_0x0c454290();
  return;
}


