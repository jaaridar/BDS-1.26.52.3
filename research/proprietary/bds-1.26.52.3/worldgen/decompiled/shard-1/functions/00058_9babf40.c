/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9babf40
 * Label: string:JigsawStructure
 * Body:  [[09babf40, 09babf66]]
 * Ghidra: FUN_09babf40
 */


void FUN_09babf40(void)

{
  uint *puVar1;
  byte *pbVar2;
  long *plVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  long in_RCX;
  long unaff_RBX;
  long unaff_RBP;
  long in_R8;
  
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + -0x77);
  *puVar1 = *puVar1 | (uint)in_RCX;
  *(byte *)(in_R8 + -0x75) = *(byte *)(in_R8 + -0x75) | (byte)in_RCX;
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + 0x39);
  *pbVar2 = *pbVar2 | (byte)in_RCX;
  *(int *)(unaff_RBP + -0x1d) = *(int *)(unaff_RBP + -0x1d) << 8;
  if ((uint)in_RCX != in_EAX) {
    plVar3 = *(long **)(unaff_RBX + -0x40);
    *plVar3 = in_RCX;
    *(long **)(in_RCX + 8) = plVar3;
    *(ulong *)(unaff_RBX + -0x48) = CONCAT44(in_register_00000004,in_EAX);
    *(ulong *)(unaff_RBX + -0x40) = CONCAT44(in_register_00000004,in_EAX);
  }
  return;
}


