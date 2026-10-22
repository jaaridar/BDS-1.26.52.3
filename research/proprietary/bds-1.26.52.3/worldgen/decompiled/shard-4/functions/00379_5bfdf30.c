/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cfdf30 (ELF vaddr 0x5bfdf30)
 * Label: caller-of-seed
 * Body:  [[05cfdf30, 05cfdf73]]
 * Ghidra: FUN_05cfdf30
 */


/* WARNING: Possible PIC construction at 0x05cfdf59: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05cfdf30(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f4360d0;
  *param_1 = &UNK_0f4360d0;
  if ((*(byte *)(param_1 + 0x77) & 1) == 0) {
    uStack_10 = 0x5cfdf66;
    puVar2 = (undefined *)func_0x0c6e1d20(param_1);
  }
  else {
    param_1 = (undefined8 *)param_1[0x79];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x5cfdf5e;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


