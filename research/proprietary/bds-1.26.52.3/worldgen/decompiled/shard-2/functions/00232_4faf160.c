/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x50af160 (ELF vaddr 0x4faf160)
 * Label: callee-of:0xd244560
 * Body:  [[050af160, 050af1c5]]
 * Ghidra: FUN_050af160
 */


/* WARNING: Possible PIC construction at 0x050af195: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_050af160(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 auStack_20 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return in_RAX;
  }
  auStack_20[0] = 0x50af177;
  FUN_050af160(param_1,*param_2);
  auStack_20[0] = 0x50af183;
  uVar2 = FUN_050af160(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      auStack_20[0] = 0x50af1b1;
      uVar2 = func_0x0412a280(param_2[7],param_2[5] & 0xfffffffffffffffe);
    }
  }
  else {
    param_2 = (undefined8 *)param_2[0xc];
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x50af19a;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar2;
  if (param_2 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


