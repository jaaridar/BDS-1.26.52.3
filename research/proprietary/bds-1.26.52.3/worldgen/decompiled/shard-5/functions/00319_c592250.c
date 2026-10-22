/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc692250 (ELF vaddr 0xc592250)
 * Label: caller-of-seed
 * Body:  [[0c692250, 0c6922c2]]
 * Ghidra: FUN_0c692250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c692250(undefined8 *param_1)

{
  undefined1 in_R8B;
  
  FUN_05cfd210(param_1);
  *param_1 = &UNK_0f3b72f0;
  *(undefined1 *)(param_1 + 0x77) = in_R8B;
  func_0x0c6922e0(param_1,&UNK_0c692460,0,0);
  func_0x0c692a10(param_1,&UNK_0c692b90,0,0);
  return;
}


