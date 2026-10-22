/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc65c660 (ELF vaddr 0xc55c660)
 * Label: caller-of-seed
 * Body:  [[0c65c660, 0c65c6a3]]
 * Ghidra: FUN_0c65c660
 */


/* WARNING: Possible PIC construction at 0x0c65c689: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c65c660(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0f3a5638;
  *param_1 = &UNK_0f3a5638;
  if ((*(byte *)(param_1 + 0x76) & 1) == 0) {
    uStack_10 = 0xc65c696;
    puVar2 = (undefined *)wg_JigsawBlock__vslot0(param_1);
  }
  else {
    param_1 = (undefined8 *)param_1[0x78];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc65c68e;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


