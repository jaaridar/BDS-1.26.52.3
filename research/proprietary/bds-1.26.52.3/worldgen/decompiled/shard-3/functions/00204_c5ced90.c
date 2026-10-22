/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ced90
 * Label: JigsawBlock::vslot28
 * Body:  [[0c5ced90, 0c5ced96]]
 * Ghidra: wg_JigsawBlock__vslot28
 */


void wg_JigsawBlock__vslot28(void)

{
  byte *pbVar1;
  code *pcVar2;
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x3d);
  *pbVar1 = *pbVar1 | unaff_BL;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


