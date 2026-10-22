/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9a20
 * Label: br::worldgen::processors::PosRules::AxisAlignedLinear::vslot3
 * Body:  [[0d1d9a20, 0d1d9a8d]]
 * Ghidra: wg_br__worldgen__processors__PosRules__AxisAlignedLinear__vslot3
 */


void wg_br__worldgen__processors__PosRules__AxisAlignedLinear__vslot3
               (byte *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  byte bVar3;
  int in_EAX;
  long unaff_RBX;
  byte *unaff_R15;
  char in_CF;
  byte bVar2;
  
  *param_1 = *param_1 + param_4 + in_CF;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  bVar3 = *param_1;
  bVar1 = *unaff_R15;
  bVar2 = *unaff_R15;
  *unaff_R15 = (bVar2 - param_4) - ((char)bVar3 < '\0');
  *(int *)(unaff_RBX + 0x28) =
       *(int *)(unaff_RBX + 0x28) + in_EAX +
       (uint)(bVar1 < param_4 || (byte)(bVar2 - param_4) < ((char)bVar3 < '\0'));
  *(undefined8 *)(unaff_RBX + 0x38) = 0;
  func_0x0412d440(unaff_RBX + 0x40);
  *(undefined8 *)(unaff_RBX + 0x110) = 0;
  *(undefined8 *)(unaff_RBX + 0x118) = 0;
  *(undefined8 *)(unaff_RBX + 0x100) = 0;
  *(undefined8 *)(unaff_RBX + 0x108) = 0;
  *(undefined8 *)(unaff_RBX + 0xf0) = 0;
  *(undefined8 *)(unaff_RBX + 0xf8) = 0;
  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
  *(undefined8 *)(unaff_RBX + 0xe8) = 0;
  *(undefined8 *)(unaff_RBX + 0xd0) = 0;
  *(undefined8 *)(unaff_RBX + 0xd8) = 0;
  *(undefined1 *)(unaff_RBX + 0x120) = 0;
  *(undefined8 *)(unaff_RBX + 0x128) = 0;
  *(undefined8 *)(unaff_RBX + 0x130) = 0;
  *(undefined8 *)(unaff_RBX + 0x138) = 0;
  *(undefined8 *)(unaff_RBX + 0x140) = 0;
  *(undefined8 *)(unaff_RBX + 0x148) = 0;
  *(undefined8 *)(unaff_RBX + 0x150) = 0;
  *(undefined8 *)(unaff_RBX + 0x158) = 0;
  *(undefined8 *)(unaff_RBX + 0x160) = 0;
  return;
}


