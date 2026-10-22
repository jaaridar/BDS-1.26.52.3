/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd04e260 (ELF vaddr 0xcf4e260)
 * Label: caller-of-seed
 * Body:  [[0d04e260, 0d04e2a0]]
 * Ghidra: FUN_0d04e260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d04e260(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = &UNK_0f4468f0;
  plVar1 = (long *)param_1[0x75];
  param_1[0x75] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar2 = wg_JigsawBlock__vslot0(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar2;
}


