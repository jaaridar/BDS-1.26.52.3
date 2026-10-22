/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c2370 (ELF vaddr 0xc5c2370)
 * Label: caller-of-seed
 * Body:  [[0c6c2370, 0c6c23b3]]
 * Ghidra: FUN_0c6c2370
 */


/* WARNING: Possible PIC construction at 0x0c6c2399: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c6c2370(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f3a8ee0;
  *param_1 = &UNK_0f3a8ee0;
  if ((*(byte *)(param_1 + 0x77) & 1) == 0) {
    uStack_10 = 0xc6c23a6;
    puVar2 = (undefined *)wg_JigsawBlock__vslot0(param_1);
  }
  else {
    param_1 = (undefined8 *)param_1[0x79];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc6c239e;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


