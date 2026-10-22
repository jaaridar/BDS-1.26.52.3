/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd31f5a0 (ELF vaddr 0xd21f5a0)
 * Label: callee-of:0xd209400
 * Body:  [[0d31f5a0, 0d31f625]]
 * Ghidra: FUN_0d31f5a0
 */


/* WARNING: Possible PIC construction at 0x0d31f5c3: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d31f5ee: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0d31f5a0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f4604d0;
  *param_1 = &UNK_0f4604d0;
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    uStack_10 = 0xd31f5d5;
    puVar2 = (undefined *)func_0x0c9b9150(param_1 + 8,param_1[10]);
    lVar3 = param_1[8];
    param_1[8] = 0;
    if (lVar3 == 0) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        uStack_10 = 0xd31f60a;
        puVar2 = (undefined *)func_0x0412a280(param_1[7],param_1[5] & 0xfffffffffffffffe);
      }
      lVar3 = param_1[2];
      if (lVar3 == 0) {
        return puVar2;
      }
      param_1[3] = lVar3;
    }
    else {
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0xd31f5f3;
    }
  }
  else {
    lVar3 = param_1[0x11];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd31f5c8;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


