/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a7fa40 (ELF vaddr 0x497fa40)
 * Label: caller-of-seed
 * Body:  [[04a7fa40, 04a7fadd]]
 * Ghidra: FUN_04a7fa40
 */


/* WARNING: Possible PIC construction at 0x04a7fa8f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04a7fabf: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04a7fa40(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_20;
  
  param_1[-2] = &UNK_0ef54780;
  param_1[-1] = &UNK_0ef54920;
  *param_1 = &UNK_0ef54a30;
  puVar3 = &UNK_0ef54a60;
  param_1[5] = &UNK_0ef54a60;
  puVar4 = (undefined8 *)param_1[0x96];
  param_1[0x96] = 0;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = param_1 + -2;
    puVar1 = (undefined8 *)param_1[0x95];
    param_1[0x95] = 0;
    if (puVar1 == (undefined8 *)0x0) {
      uStack_20 = 0x4a7facc;
      puVar3 = (undefined *)func_0x0ca5ddd0(puVar4);
    }
    else {
      uStack_20 = 0x4a7fab7;
      puVar3 = (undefined *)func_0x04aa4aa0(puVar1);
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x4a7fac4;
      puVar4 = puVar1;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x4a7fa94;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,puVar4);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


