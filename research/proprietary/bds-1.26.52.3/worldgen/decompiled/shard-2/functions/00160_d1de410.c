/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1de410
 * Label: br::worldgen::Structure::vslot1
 * Body:  [[0d1de410, 0d1de43b]]
 * Ghidra: wg_br__worldgen__Structure__vslot1
 */


void wg_br__worldgen__Structure__vslot1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 *unaff_RBX;
  undefined4 uVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  *unaff_RBX = (int)param_1;
  unaff_RBX[1] = (int)((ulong)param_1 >> 0x20);
  unaff_RBX[2] = in_XMM0_Dc;
  unaff_RBX[3] = in_XMM0_Dd;
  uVar1 = func_0x048648e0();
  uVar2 = func_0x04863f80(0,uVar1);
  unaff_RBX[1] = uVar2;
  return;
}


