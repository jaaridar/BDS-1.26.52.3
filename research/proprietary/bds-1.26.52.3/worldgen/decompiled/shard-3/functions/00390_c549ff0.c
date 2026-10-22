/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc649ff0 (ELF vaddr 0xc549ff0)
 * Label: caller-of-seed
 * Body:  [[0c649ff0, 0c64a070]]
 * Ghidra: FUN_0c649ff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c649ff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3a2778;
  func_0x0c6e7950(param_1 + 0x75,param_4);
  func_0x0c6e7950(param_1 + 0x8a,param_5);
  func_0x0c64a0b0(param_1,&UNK_0c64a230,0,0);
  func_0x0c64a610(param_1,&UNK_0c64a790,0,0);
  return;
}


