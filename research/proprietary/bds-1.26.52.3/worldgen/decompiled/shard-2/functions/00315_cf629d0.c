/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0629d0 (ELF vaddr 0xcf629d0)
 * Label: caller-of-seed
 * Body:  [[0d0629d0, 0d062a13]]
 * Ghidra: FUN_0d0629d0
 */


/* WARNING: Possible PIC construction at 0x0d0629f9: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d0629d0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f3dc4c0;
  *param_1 = &UNK_0f3dc4c0;
  if ((*(byte *)(param_1 + 0x75) & 1) == 0) {
    uStack_10 = 0xd062a06;
    puVar2 = (undefined *)wg_JigsawBlock__vslot0(param_1);
  }
  else {
    param_1 = (undefined8 *)param_1[0x77];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd0629fe;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


