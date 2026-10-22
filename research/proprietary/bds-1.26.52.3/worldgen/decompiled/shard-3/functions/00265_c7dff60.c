/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8dff60 (ELF vaddr 0xc7dff60)
 * Label: callee-of:0xc7b8060
 * Body:  [[0c8dff60, 0c8dffb6]]
 * Ghidra: FUN_0c8dff60
 */


/* WARNING: Possible PIC construction at 0x0c8dffa3: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c8dff60(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 uStack_10;
  
  if (param_1 == (undefined8 *)0x0) {
    return in_RAX;
  }
  uStack_10 = 0xc8dff71;
  FUN_0c8dff60(*param_1);
  uStack_10 = 0xc8dff7a;
  uVar3 = FUN_0c8dff60(param_1[1]);
  plVar1 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (long *)0x0) {
    uStack_10 = 0xc8dff91;
    uVar3 = (**(code **)(*plVar1 + 8))();
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    param_1 = (undefined8 *)param_1[6];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc8dffa8;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


