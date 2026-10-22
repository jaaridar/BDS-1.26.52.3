/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe76fff0
 * Label: SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::vslot0
 * Body:  [[0e76fbe1, 0e76fbf2] [0e76fff0, 0e770071] [0e770087, 0e770137] [0e770140, 0e770162] [0e770178, 0e7701cd] [0e770228, 0e7702a4]]
 * Ghidra: wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot0(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  char *in_RAX;
  long lVar4;
  undefined8 uVar5;
  long unaff_RBP;
  long lVar6;
  long unaff_R12;
  ulong uVar7;
  long lVar8;
  ulong unaff_R13;
  long lVar9;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  lVar2 = *(long *)(unaff_R13 + 0x18);
  uVar7 = (unaff_R12 - lVar2 >> 6) + 1;
  if (uVar7 >> 0x3a == 0) {
    unaff_R13 = (long)in_RAX - lVar2 >> 5;
    if (unaff_R13 <= uVar7) {
      unaff_R13 = uVar7;
    }
    if (0x7fffffffffffffbf < (ulong)((long)in_RAX - lVar2)) {
      unaff_R13 = 0x3ffffffffffffff;
    }
    if (unaff_R13 == 0) {
      lVar9 = 0;
      lVar4 = 0;
    }
    else {
      if (0x3ffffffffffffff < unaff_R13) goto LAB_0e770256;
      lVar9 = unaff_R13 << 6;
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
      if (lVar4 == 0) {
        lVar4 = 0;
        func_0x0eec74c0(lVar9,0);
      }
    }
    lVar6 = unaff_RBP - lVar2;
    lVar8 = lVar4 + lVar6;
    in_stack_00000020 = lVar4 + lVar9;
    in_stack_00000008 = lVar4;
    in_stack_00000010 = lVar8;
    in_stack_00000018 = lVar8;
    if (lVar6 == lVar9) {
      if (unaff_RBP == lVar2) {
        lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (lVar8 == 0) {
          func_0x0eec74c0(0x40,0);
        }
        in_stack_00000020 = lVar8 + 0x40;
        in_stack_00000008 = lVar8;
        in_stack_00000010 = lVar8;
        in_stack_00000018 = lVar8;
        if (lVar4 != 0) {
          func_0x0412a280(lVar4,lVar6);
        }
      }
      else {
        lVar8 = lVar8 + (((lVar6 >> 6) - ((lVar6 >> 6) + 1 >> 0x3f)) + 1U & 0x7fffffffffffffe) *
                        -0x20;
        in_stack_00000010 = lVar8;
        in_stack_00000018 = lVar8;
      }
    }
    func_0x0e770820(lVar8);
    in_stack_00000018 = in_stack_00000018 + 0x40;
    func_0x06fd70e0();
    lVar4 = in_stack_00000010;
    lVar2 = in_stack_00000018;
    while (lVar4 != lVar2) {
      in_stack_00000018 = lVar2 + -0x40;
      puVar1 = (undefined8 *)(lVar2 + -0x28);
      lVar2 = in_stack_00000018;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
        lVar2 = in_stack_00000018;
      }
    }
    if (in_stack_00000008 != 0) {
      in_stack_00000018 = lVar2;
      func_0x0412a280(in_stack_00000008,in_stack_00000020 - in_stack_00000008);
    }
    return 1;
  }
  func_0x05d94eb0();
LAB_0e770256:
  uVar5 = func_0x04882eb0();
  uVar5 = func_0x04882e20(uVar5);
  *(ulong *)(unaff_R13 + 0x20) = uVar7;
  uVar5 = func_0x0eee2d70(uVar5);
  uVar5 = func_0x04882e20(uVar5);
  uVar5 = func_0x04882e20(uVar5);
  func_0x06530660(&stack0x00000008);
  uVar5 = func_0x0eee2d70(uVar5);
  uVar5 = func_0x04882e20(uVar5);
  func_0x04882e20(uVar5);
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}


