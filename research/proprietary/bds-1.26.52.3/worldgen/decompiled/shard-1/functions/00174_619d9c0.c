/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x619d9c0
 * Label: EditorJigsawStructureLoader::vslot1
 * Body:  [[0619d9c0, 0619d9d1] [0619da6e, 0619dab5]]
 * Ghidra: wg_EditorJigsawStructureLoader__vslot1
 */


void wg_EditorJigsawStructureLoader__vslot1(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *in_RAX;
  undefined4 *unaff_RBX;
  undefined4 *unaff_R14;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *(uint *)(*(long *)(in_RAX + 0x10) + 0x18) = *(uint *)(*(long *)(in_RAX + 0x10) + 0x18) | 0x40000;
  func_0x0619d220(&stack0x00000070);
  *(undefined1 *)(unaff_RBX + 0xc) = *(undefined1 *)(unaff_R14 + 0xc);
  uVar1 = *unaff_R14;
  uVar2 = unaff_R14[1];
  uVar3 = unaff_R14[2];
  uVar4 = unaff_R14[3];
  uVar5 = unaff_R14[4];
  uVar6 = unaff_R14[5];
  uVar7 = unaff_R14[6];
  uVar8 = unaff_R14[7];
  uVar9 = unaff_R14[9];
  uVar10 = unaff_R14[10];
  uVar11 = unaff_R14[0xb];
  unaff_RBX[8] = unaff_R14[8];
  unaff_RBX[9] = uVar9;
  unaff_RBX[10] = uVar10;
  unaff_RBX[0xb] = uVar11;
  unaff_RBX[4] = uVar5;
  unaff_RBX[5] = uVar6;
  unaff_RBX[6] = uVar7;
  unaff_RBX[7] = uVar8;
  *unaff_RBX = uVar1;
  unaff_RBX[1] = uVar2;
  unaff_RBX[2] = uVar3;
  unaff_RBX[3] = uVar4;
  func_0x048b0bc0(&stack0x00000088);
  return;
}


