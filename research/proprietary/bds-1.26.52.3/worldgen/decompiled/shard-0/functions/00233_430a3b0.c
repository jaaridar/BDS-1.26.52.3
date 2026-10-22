/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x440a3b0 (ELF vaddr 0x430a3b0)
 * Label: callee-of:0xe055e60
 * Body:  [[0440a3b0, 0440a415]]
 * Ghidra: FUN_0440a3b0
 */


/* WARNING: Possible PIC construction at 0x0440a3e5: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0440a3b0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 auStack_20 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return in_RAX;
  }
  auStack_20[0] = 0x440a3c7;
  FUN_0440a3b0(param_1,*param_2);
  auStack_20[0] = 0x440a3d3;
  uVar2 = FUN_0440a3b0(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 7) & 1) == 0) {
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      auStack_20[0] = 0x440a401;
      uVar2 = func_0x0412a280(param_2[6],param_2[4] & 0xfffffffffffffffe);
    }
  }
  else {
    param_2 = (undefined8 *)param_2[9];
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x440a3ea;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar2;
  if (param_2 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


