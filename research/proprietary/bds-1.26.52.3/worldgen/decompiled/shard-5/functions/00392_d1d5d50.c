/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5d50 (ELF vaddr 0xd1d5d50)
 * Label: caller-of-seed
 * Body:  [[0d2d5d50, 0d2d5daa]]
 * Ghidra: FUN_0d2d5d50
 */


undefined8 * FUN_0d2d5d50(undefined8 *param_1)

{
  *param_1 = &UNK_0f45e800;
  param_1[1] = &UNK_0ef512d0;
  param_1[2] = 0x9e3779b97f4a7c15;
  param_1[3] = 0x6a09e667f3bcc909;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  func_0x0d2d5c30();
  return param_1;
}


