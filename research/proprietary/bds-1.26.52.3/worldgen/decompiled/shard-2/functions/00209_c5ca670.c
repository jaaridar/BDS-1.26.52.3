/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ca670
 * Label: JigsawBlock::vslot11
 * Body:  [[0c5ca670, 0c5ca69a]]
 * Ghidra: wg_JigsawBlock__vslot11
 */


/* WARNING: Possible PIC construction at 0x0c5ca687: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot11(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  long unaff_RBX;
  undefined8 *puVar3;
  long unaff_RBP;
  bool in_PF;
  undefined8 uStack_8;
  
  if (in_PF) {
    *(int *)(unaff_RBP + 0x17) = *(int *)(unaff_RBP + 0x17) + param_2;
    if ((*(byte *)(unaff_RBX + 0x10) & 1) == 0) {
      puVar3 = (undefined8 *)&stack0x00000008;
    }
    else {
      unaff_RBX = *(long *)(unaff_RBX + 0x20);
      puVar3 = &uStack_8;
      uStack_8 = 0xc5ca68c;
    }
    *(undefined8 *)((long)puVar3 + -8) = in_RAX;
    if (unaff_RBX != 0) {
      pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
      *(undefined8 *)((long)puVar3 + -0x10) = 0xee326ba;
      (*pcVar1)(&DAT_0f5463b0,unaff_RBX);
    }
    return *(undefined8 *)((long)puVar3 + -8);
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


