/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6a5eb0 (ELF vaddr 0xc5a5eb0)
 * Label: caller-of-seed
 * Body:  [[0c6a5eb0, 0c6a5f1f]]
 * Ghidra: FUN_0c6a5eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0c6a5eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((param_6 != (long *)0x0) && (iVar2 = (**(code **)(*param_6 + 0x28))(param_6), iVar2 == 0x53))
  {
    param_1[2] = _DAT_0f72b520;
    uVar1 = uRam000000000f72b518;
    *param_1 = _DAT_0f72b510;
    param_1[1] = uVar1;
    return param_1;
  }
  func_0x0c6c9d20(param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}


