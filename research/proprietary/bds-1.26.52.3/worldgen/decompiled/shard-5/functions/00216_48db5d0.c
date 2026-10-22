/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49db5d0 (ELF vaddr 0x48db5d0)
 * Label: callee-of:0x485d4d0
 * Body:  [[049db5d0, 049db60f]]
 * Ghidra: FUN_049db5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_049db5d0(undefined8 *param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_049db5d0(*param_1);
    uVar1 = FUN_049db5d0(param_1[1]);
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      uVar1 = FUN_0412a280(param_1[6],param_1[4] & 0xfffffffffffffffe);
    }
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
    }
    return uVar1;
  }
  return in_RAX;
}


