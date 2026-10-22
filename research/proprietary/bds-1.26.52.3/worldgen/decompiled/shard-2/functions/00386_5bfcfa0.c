/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cfcfa0 (ELF vaddr 0x5bfcfa0)
 * Label: caller-of-seed
 * Body:  [[05cfcfa0, 05cfcfc7]]
 * Ghidra: FUN_05cfcfa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05cfcfa0(long *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    uVar2 = wg_JigsawBlock__vslot0(lVar1);
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return uVar2;
  }
  return in_RAX;
}


