/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd231480
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot8
 * Body:  [[0d231480, 0d231679]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot8
 */


ulong wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot8
                (undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  short unaff_BP;
  int iVar7;
  long *unaff_R14;
  long *unaff_R15;
  float fVar8;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  float fStack0000000000000014;
  undefined8 *in_stack_00000018;
  int in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000034;
  undefined *in_stack_00000038;
  undefined *in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058;
  uint in_stack_00000068;
  undefined1 *in_stack_00000070;
  
  if (fStack0000000000000014 < *(float *)(&UNK_01d41980 + (ulong)((in_EAX ^ param_3) & 7) * 4)) {
    fVar8 = (float)(**(code **)(*unaff_R14 + 200))();
    iVar2 = (**(code **)(*unaff_R15 + 0x18))();
    if (fVar8 <= (float)iVar2) {
      uVar3 = func_0x0d22efa0(in_stack_00000028);
      unaff_R15 = (long *)(ulong)uVar3;
      goto LAB_0d231645;
    }
  }
  if (unaff_BP == 1) {
    iVar2 = iStack0000000000000008 >> 4;
    iVar7 = iStack0000000000000010 >> 4;
    plVar4 = (long *)(**(code **)(*unaff_R14 + 0x150))();
    lVar5 = (**(code **)(*plVar4 + 0x440))(plVar4);
    in_stack_00000048 =
         (long)iVar7 * 0x5f24f + (long)iVar2 * 0x5ac0db + (ulong)(uint)(iVar2 * iVar2) * 0x4c1906 +
         (ulong)(uint)(iVar7 * iVar7) * 0x4307a7 + lVar5 & 0xffffffffffff ^ 0x5e434e432;
    in_stack_00000038 = &UNK_0f45e800;
    in_stack_00000040 = &UNK_0f2bdd80;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000068 = 0;
    uStack0000000000000034 = 10;
    in_stack_00000070 = (undefined1 *)&stack0x00000034;
    in_stack_00000018 = &stack0x00000070;
    iVar2 = func_0x0d2e0c70(&stack0x00000018,&stack0x00000040);
    iVar7 = (**(code **)(*unaff_R15 + 0x18))();
    bVar1 = true;
    if (((iVar7 == 0) && (iVar2 == 0)) && (iStack000000000000000c < 0x28)) {
      in_stack_00000018 = (undefined8 *)(_iStack0000000000000008 + -0x100000000);
      in_stack_00000020 = iStack0000000000000010;
      uVar6 = (**(code **)(*unaff_R14 + 0x10))();
      uVar3 = func_0x0c848640(uVar6);
      unaff_R15 = (long *)(ulong)uVar3;
      bVar1 = false;
    }
    if ((ulong)in_stack_00000068 != 0xffffffff) {
      (**(code **)(&UNK_0f45c020 + (ulong)in_stack_00000068 * 8))(&stack0x00000018,&stack0x00000040)
      ;
    }
    if (!bVar1) goto LAB_0d231645;
  }
  unaff_R15 = (long *)0x0;
LAB_0d231645:
  return (ulong)unaff_R15 & 0xffffff01;
}


