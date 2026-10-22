/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cb4d0
 * Label: JigsawBlock::vslot77
 * Body:  [[0c5cb4d0, 0c5cb512] [0c5cb537, 0c5cb542]]
 * Ghidra: wg_JigsawBlock__vslot77
 */


void wg_JigsawBlock__vslot77(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  ulong in_RAX;
  long unaff_RBX;
  long *plVar1;
  ulong uVar2;
  
  while (plVar1 = param_3, param_3 = (long *)*plVar1, param_3 != (long *)0x0) {
    uVar2 = param_3[1] & in_RAX;
    if (uVar2 != param_4) {
      if (*(long *)(unaff_RBX + uVar2 * 8) == 0) {
        *(long **)(unaff_RBX + uVar2 * 8) = plVar1;
        param_4 = uVar2;
      }
      else {
        *plVar1 = *param_3;
        *param_3 = **(undefined8 **)(unaff_RBX + uVar2 * 8);
        **(long **)(unaff_RBX + uVar2 * 8) = (long)param_3;
        param_3 = plVar1;
      }
    }
  }
  return;
}


