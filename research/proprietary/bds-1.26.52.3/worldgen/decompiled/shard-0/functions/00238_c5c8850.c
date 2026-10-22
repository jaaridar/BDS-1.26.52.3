/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c8850
 * Label: JigsawBlock::vslot93
 * Body:  [[0c5c880a, 0c5c8817] [0c5c8850, 0c5c8874]]
 * Ghidra: wg_JigsawBlock__vslot93
 */


/* WARNING: Possible PIC construction at 0x0c5c8862: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5c8867) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot93(void)

{
  code *pcVar1;
  undefined8 in_RAX;
  long unaff_RBX;
  undefined8 *puVar2;
  undefined8 uStack_8;
  
  if ((*(byte *)(unaff_RBX + 0x10) & 1) == 0) {
    puVar2 = (undefined8 *)&stack0x00000008;
  }
  else {
    unaff_RBX = *(long *)(unaff_RBX + 0x20);
    puVar2 = &uStack_8;
    uStack_8 = 0xc5c8867;
  }
  *(undefined8 *)((long)puVar2 + -8) = in_RAX;
  if (unaff_RBX != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar2 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,unaff_RBX);
  }
  return *(undefined8 *)((long)puVar2 + -8);
}


