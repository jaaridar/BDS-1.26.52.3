/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfc8f20 (ELF vaddr 0xcec8f20)
 * Label: caller-of-seed
 * Body:  [[0cfc8f20, 0cfc8f36]]
 * Ghidra: FUN_0cfc8f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0cfc8f20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = wg_JigsawBlock__vslot0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


