/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c88a0
 * Label: JigsawBlock::vslot95
 * Body:  [[0c5c88a0, 0c5c88cb]]
 * Ghidra: wg_JigsawBlock__vslot95
 */


/* WARNING: Possible PIC construction at 0x0c5c88b9: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5c88be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot95(long param_1)

{
  code *pcVar1;
  long in_RAX;
  undefined8 uStack_10;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    in_RAX = *(long *)(param_1 + 0x20);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xc5c88be;
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


