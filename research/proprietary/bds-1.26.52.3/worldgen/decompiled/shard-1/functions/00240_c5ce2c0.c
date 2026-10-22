/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce2c0
 * Label: JigsawBlock::vslot118
 * Body:  [[0c5ce2c0, 0c5ce2da]]
 * Ghidra: wg_JigsawBlock__vslot118
 */


void wg_JigsawBlock__vslot118
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int in_EAX;
  ulong uVar1;
  undefined8 *unaff_RBX;
  byte in_CF;
  
  uVar1 = (ulong)(in_EAX + 0x2dc062b + (uint)in_CF);
  *(undefined8 *)(uVar1 + 0x18) = param_3;
  *unaff_RBX = param_4;
  unaff_RBX[1] = uVar1;
  return;
}


