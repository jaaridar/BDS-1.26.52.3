/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7ea0c0
 * Label: string:Biomes in Nether are only compatible with following Surface
 * Body:  [[0c7ea0c0, 0c7ea0de] [0c7ea135, 0c7ea157] [0c7ea3ab, 0c7ea3c7]]
 * Ghidra: FUN_0c7ea0c0
 */


/* WARNING: Instruction at (ram,0x0c7ea13c) overlaps instruction at (ram,0x0c7ea138)
    */
/* WARNING: Removing unreachable block (ram,0x0c7ea13c) */
/* WARNING: Removing unreachable block (ram,0x0c7ea0cf) */

void FUN_0c7ea0c0(undefined8 param_1,long param_2)

{
  uint in_EAX;
  long unaff_R14;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  
  *(uint *)(param_2 + 0x38) = in_EAX & 0xffffff10 | 1;
  *(undefined4 *)(unaff_R14 + 0x40) = 2;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  return;
}


