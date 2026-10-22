/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd077a30 (ELF vaddr 0xcf77a30)
 * Label: caller-of-seed
 * Body:  [[0d077a30, 0d077a7c]]
 * Ghidra: FUN_0d077a30
 */


/* WARNING: Possible PIC construction at 0x0d077a62: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d077a30(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f446080;
  *param_1 = &UNK_0f446080;
  if ((*(char *)(param_1 + 0x78) == '\x01') && ((*(byte *)(param_1 + 0x75) & 1) != 0)) {
    param_1 = (undefined8 *)param_1[0x77];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd077a67;
  }
  else {
    uStack_10 = 0xd077a6f;
    puVar2 = (undefined *)func_0x0c6e1d20(param_1);
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


