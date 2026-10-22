/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc68ce30 (ELF vaddr 0xc58ce30)
 * Label: caller-of-seed
 * Body:  [[0c68ce30, 0c68cec4]]
 * Ghidra: FUN_0c68ce30
 */


/* WARNING: Possible PIC construction at 0x0c68ce58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0c68ceaa: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c68ce30(long param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uStack_10;
  
  if ((*(char *)(param_1 + 0x418) == '\x01') && ((*(byte *)(param_1 + 0x400) & 1) != 0)) {
    param_1 = *(long *)(param_1 + 0x410);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc68ce5d;
  }
  else {
    if ((*(char *)(param_1 + 0x3f8) == '\x01') && ((*(byte *)(param_1 + 0x3e0) & 1) != 0)) {
      uStack_10 = 0xc68ce86;
      in_RAX = func_0x0412a280(*(undefined8 *)(param_1 + 0x3f0),
                               *(ulong *)(param_1 + 0x3e0) & 0xfffffffffffffffe);
    }
    if ((*(char *)(param_1 + 0x3d8) == '\x01') && ((*(byte *)(param_1 + 0x3c0) & 1) != 0)) {
      param_1 = *(long *)(param_1 + 0x3d0);
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0xc68ceaf;
    }
    else {
      uStack_10 = 0xc68ceb7;
      in_RAX = func_0x0c6e1d20(param_1);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (param_1 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


