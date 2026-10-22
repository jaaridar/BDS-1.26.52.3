/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd04dff0 (ELF vaddr 0xcf4dff0)
 * Label: caller-of-seed
 * Body:  [[0d04dff0, 0d04e006]]
 * Ghidra: FUN_0d04dff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d04dff0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = wg_JigsawBlock__vslot0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


