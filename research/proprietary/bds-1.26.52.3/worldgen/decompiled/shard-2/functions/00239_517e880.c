/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527e880 (ELF vaddr 0x517e880)
 * Label: callee-of:0x517cd10
 * Body:  [[0527e880, 0527e8da]]
 * Ghidra: FUN_0527e880
 */


/* WARNING: Possible PIC construction at 0x0527e8a5: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0527e880(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0efa00a8;
  *param_1 = &UNK_0efa00a8;
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
    if ((*(byte *)(param_1 + 10) & 1) != 0) {
      uStack_10 = 0x527e8c1;
      puVar2 = (undefined *)func_0x0412a280(param_1[0xc],param_1[10] & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      return puVar2;
    }
    lVar3 = param_1[7];
  }
  else {
    param_1[0xf] = lVar3;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x527e8aa;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


