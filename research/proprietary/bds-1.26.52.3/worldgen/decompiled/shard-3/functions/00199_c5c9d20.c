/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c9d20
 * Label: JigsawBlock::vslot4
 * Body:  [[0c5c9d20, 0c5c9d4b]]
 * Ghidra: wg_JigsawBlock__vslot4
 */


/* WARNING: Possible PIC construction at 0x0c5c9d39: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5c9d3e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot4(long param_1)

{
  code *pcVar1;
  long in_RAX;
  undefined8 uStack_10;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    in_RAX = *(long *)(param_1 + 0x20);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc5c9d3e;
    param_1 = in_RAX;
  }
  *(long *)((long)register0x00000020 + -8) = in_RAX;
  if (param_1 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


