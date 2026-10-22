/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1df5f0
 * Label: SharedTypes::v1_21_80::BiomeReplacementConstraint::vslot0
 * Body:  [[0e1df55d, 0e1df56e] [0e1df5f0, 0e1df686]]
 * Ghidra: wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot0
 */


ulong wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot0
                (undefined8 param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  char *in_RAX;
  char *pcVar4;
  long lVar5;
  int iVar6;
  ulong unaff_RBX;
  ulong uVar7;
  long unaff_R14;
  long in_stack_00000018;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)(unaff_RBX + 0x6a) = *(char *)(unaff_RBX + 0x6a) - (char)unaff_RBX;
  sVar3 = (short)(char)((char)in_RAX + (char)((uint)param_4 >> 8)) * (short)(char)unaff_RBX;
  iVar6 = param_4 + *(int *)(CONCAT62((int6)((ulong)in_RAX >> 0x10),sVar3) + -0x75) +
          (uint)((char)sVar3 != sVar3);
  pcVar4 = (char *)(unaff_RBX & 0xffffffff);
  *pcVar4 = *pcVar4;
  pcVar4[-0x75] = pcVar4[-0x75] + (char)iVar6;
  *pcVar4 = *pcVar4 + (char)pcVar4;
  lVar5 = CONCAT71((int7)((ulong)pcVar4 >> 8),(char)pcVar4 + (char)((uint)iVar6 >> 8));
  uVar7 = (ulong)*(uint *)(param_3 + 0x6a);
  piVar1 = (int *)(lVar5 + 0x66000000);
  *piVar1 = *piVar1 + 0x41;
  *(int *)(param_2 + 0x90) = (int)lVar5;
  uVar2 = *(uint *)(uVar7 + 0x150);
  if ((ulong)*(uint *)(unaff_R14 + 0x150) == 0xffffffff) {
    if (uVar2 == 0xffffffff) {
      return uVar7;
    }
  }
  else if (uVar2 == 0xffffffff) {
    (**(code **)(&UNK_0f4adda8 + (ulong)*(uint *)(unaff_R14 + 0x150) * 8))(&stack0x00000018);
    *(undefined4 *)(unaff_R14 + 0x150) = 0xffffffff;
    return uVar7;
  }
  in_stack_00000018 = unaff_R14 + 0x98;
  (**(code **)(&UNK_0f4adf28 + (ulong)uVar2 * 8))(&stack0x00000018,unaff_R14 + 0x98,uVar7 + 0x98);
  return uVar7;
}


