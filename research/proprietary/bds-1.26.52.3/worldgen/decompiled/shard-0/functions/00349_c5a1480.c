/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6a1480 (ELF vaddr 0xc5a1480)
 * Label: caller-of-seed
 * Body:  [[0c6a1480, 0c6a14ed]]
 * Ghidra: FUN_0c6a1480
 */


/* WARNING: Possible PIC construction at 0x0c6a14a9: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c6a1480(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f3b9528;
  *param_1 = &UNK_0f3b9528;
  if ((*(byte *)(param_1 + 0x7b) & 1) == 0) {
    *param_1 = &UNK_0f3b90d8;
    if ((*(byte *)(param_1 + 0x76) & 1) != 0) {
      uStack_10 = 0xc6a14d8;
      func_0x0412a280(param_1[0x78],param_1[0x76] & 0xfffffffffffffffe);
    }
    uStack_10 = 0xc6a14e0;
    puVar2 = (undefined *)func_0x0c6e1d20(param_1);
  }
  else {
    param_1 = (undefined8 *)param_1[0x7d];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc6a14ae;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


