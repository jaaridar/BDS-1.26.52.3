/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc849fb0 (ELF vaddr 0xc749fb0)
 * Label: caller-of-seed
 * Body:  [[0c849fb0, 0c849fc6]]
 * Ghidra: FUN_0c849fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c849fb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = wg_JigsawBlock__vslot0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


