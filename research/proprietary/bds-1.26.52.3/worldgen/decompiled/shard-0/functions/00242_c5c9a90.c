/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c9a90
 * Label: JigsawBlock::vslot109
 * Body:  [[0c5c9a90, 0c5c9acb]]
 * Ghidra: wg_JigsawBlock__vslot109
 */


/* WARNING: Possible PIC construction at 0x0c5c9ab9: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5c9abe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot109(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&UNK_0f38cd68;
  *param_1 = &UNK_0f38cd68;
  if ((*(char *)(param_1 + 5) == '\x01') && ((*(byte *)(param_1 + 2) & 1) != 0)) {
    puVar2 = (undefined8 *)param_1[4];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc5c9abe;
    param_1 = puVar2;
  }
  *(undefined8 **)((long)register0x00000020 + -8) = puVar2;
  if (param_1 != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


