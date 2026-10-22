/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d7850 (ELF vaddr 0xd1d7850)
 * Label: caller-of-seed
 * Body:  [[0d2d7850, 0d2d78ab]]
 * Ghidra: FUN_0d2d7850
 */


undefined8 * FUN_0d2d7850(undefined8 *param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  *param_1 = &UNK_0f45f638;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x0ee252c0(&uStack_38);
  param_1[4] = uStack_20;
  param_1[2] = uStack_30;
  param_1[3] = uStack_28;
  param_1[1] = uStack_38;
  param_1[5] = 0;
  return param_1;
}


