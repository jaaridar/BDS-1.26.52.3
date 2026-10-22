/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x487fe70
 * Label: caller-of-seed
 * Body:  [[0487fe70, 0487fe78]]
 * Ghidra: FUN_0487fe70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0487fe70(void)

{
  undefined8 in_RAX;
  long unaff_RBX;
  
  if (unaff_RBX != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return in_RAX;
}


