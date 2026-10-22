/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca70680 (ELF vaddr 0xc970680)
 * Label: caller-of-seed
 * Body:  [[0ca70680, 0ca70733]]
 * Ghidra: FUN_0ca70680
 */


/* WARNING: Possible PIC construction at 0x0ca706b9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0ca706f6: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ca70680(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 auStack_20 [2];
  
  *param_1 = &UNK_0f3ece48;
  puVar5 = &UNK_0f3ed020;
  param_1[0xe] = &UNK_0f3ed020;
  puVar1 = (undefined8 *)param_1[0x25];
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x24];
    param_1[0x24] = 0;
    if (puVar1 == (undefined8 *)0x0) {
      plVar3 = (long *)param_1[0x23];
      param_1[0x23] = 0;
      if (plVar3 != (long *)0x0) {
        auStack_20[0] = 0xca70718;
        (**(code **)(*plVar3 + 8))();
      }
      auStack_20[0] = 0xca70720;
      puVar5 = (undefined *)func_0x0ca70460(param_1);
    }
    else {
      lVar2 = puVar1[1];
      if (lVar2 != 0) {
        puVar1[2] = lVar2;
        auStack_20[0] = 0xca706ee;
        puVar5 = (undefined *)func_0x0412a280(lVar2,puVar1[3] - lVar2);
      }
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      auStack_20[0] = 0xca706fb;
      param_1 = puVar1;
    }
  }
  else {
    param_1[0x26] = puVar1;
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0xca706be;
    param_1 = puVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar5;
  if (param_1 != (undefined8 *)0x0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


