/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a7f900 (ELF vaddr 0x497f900)
 * Label: caller-of-seed
 * Body:  [[04a7f900, 04a7f99a]]
 * Ghidra: FUN_04a7f900
 */


/* WARNING: Possible PIC construction at 0x04a7f94e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04a7f97a: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04a7f900(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 auStack_20 [2];
  
  *param_1 = &UNK_0ef54780;
  param_1[1] = &UNK_0ef54920;
  param_1[2] = &UNK_0ef54a30;
  puVar3 = &UNK_0ef54a60;
  param_1[7] = &UNK_0ef54a60;
  puVar1 = (undefined8 *)param_1[0x98];
  param_1[0x98] = 0;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x97];
    param_1[0x97] = 0;
    if (puVar1 == (undefined8 *)0x0) {
      auStack_20[0] = 0x4a7f987;
      puVar3 = (undefined *)func_0x0ca5ddd0(param_1);
    }
    else {
      auStack_20[0] = 0x4a7f972;
      puVar3 = (undefined *)func_0x04aa4aa0(puVar1);
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0x4a7f97f;
      param_1 = puVar1;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x4a7f953;
    param_1 = puVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


