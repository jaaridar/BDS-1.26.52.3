/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe770300
 * Label: SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::vslot1
 * Body:  [[0e770300, 0e770560]]
 * Ghidra: wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot1
 */


/* WARNING: Instruction at (ram,0x0e77032b) overlaps instruction at (ram,0x0e770328)
    */

void wg_SharedTypes__v1_20_60__OverworldGenerationRulesBiomeJsonComponent__vslot1(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long in_RAX;
  long *plVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long in_RCX;
  undefined8 *puVar8;
  char cVar9;
  undefined8 *unaff_RBX;
  long lVar10;
  code *in_R8;
  long unaff_R12;
  uint *unaff_R15;
  undefined8 *puVar11;
  bool in_ZF;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  code *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  if (!in_ZF) {
    pcVar1 = (char *)(in_RCX + -0x75);
    *pcVar1 = *pcVar1 - (byte)in_RCX;
    if (*pcVar1 == '\0') {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(byte *)(in_RAX + -0x7b) = *(byte *)(in_RAX + -0x7b) ^ (byte)in_RCX;
    (*in_R8)(0);
  }
  plVar5 = (long *)func_0x0488e200();
  if (plVar5 == (long *)0x0) {
LAB_0e770426:
    uVar2 = *(undefined8 *)(unaff_R12 + 0x28);
    unaff_RBX[2] = &UNK_0488e0b0;
    *(undefined4 *)(unaff_RBX + 4) = 0x48b5725f;
    unaff_RBX[3] = 0;
    *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
    *unaff_RBX = 0;
    unaff_RBX[5] = uVar2;
    unaff_RBX[6] = 0;
    unaff_RBX[7] = 0;
  }
  else {
    if (unaff_R15[8] == 0x685ff748) {
      bVar12 = false;
    }
    else {
      func_0x07d9b440(&stack0x00000010);
      lVar10 = in_stack_00000048;
      if ((in_stack_00000048 != 0) && ((byte)(in_stack_00000030._4_1_ - 1U) < 2)) {
        func_0x048b0900();
      }
      if (in_stack_00000028 != (code *)0x0) {
        (*in_stack_00000028)(&stack0x00000010);
      }
      if (lVar10 == 0) goto LAB_0e770426;
      bVar12 = unaff_R15[8] != 0x685ff748;
    }
    uVar2 = *(undefined8 *)(unaff_R12 + 0x28);
    puVar6 = *(uint **)unaff_R15;
    if ((char)unaff_R15[9] == '\x02') {
      puVar6 = unaff_R15;
    }
    if ((bool)(puVar6 == (uint *)0x0 | bVar12)) {
      uVar3 = *(undefined8 *)(unaff_R15 + 10);
      lVar10 = *(long *)(unaff_R15 + 0xc);
      if (lVar10 == 0) {
        (**(code **)(unaff_R15 + 0xe))(0);
        lVar10 = *(long *)(unaff_R15 + 0xc);
      }
      puVar6 = (uint *)func_0x0488e200(uVar3,lVar10,0x685ff748);
    }
    if (puVar6[4] == 0) {
      _in_stack_00000010 = ZEXT816(0x1254d89);
    }
    else {
      _in_stack_00000010 = func_0x0ed6c040(*(long *)(puVar6 + 2) + (ulong)*puVar6 * 0x20 + 8);
    }
    auVar13 = func_0x05f28760(*plVar5,plVar5[1],&stack0x00000010,&stack0x0000000f,&stack0x0000000e);
    if (auVar13._0_8_ == auVar13._8_8_) {
      puVar11 = (undefined8 *)plVar5[4];
    }
    else {
      puVar11 = (undefined8 *)
                (((ulong)(auVar13._0_8_ - *plVar5) >> 3) * -0x5555555555555540 + plVar5[3]);
    }
    cVar9 = *(char *)((long)puVar11 + 0x24);
    puVar8 = (undefined8 *)*puVar11;
    puVar7 = puVar8;
    if (cVar9 == '\x02') {
      puVar7 = puVar11;
    }
    if (puVar7 == (undefined8 *)0x0 || *(int *)(puVar11 + 4) != 0x7459d38) {
      uVar3 = puVar11[5];
      lVar10 = puVar11[6];
      if (lVar10 == 0) {
        (*(code *)puVar11[7])(0,puVar11,0);
        lVar10 = puVar11[6];
        cVar9 = *(char *)((long)puVar11 + 0x24);
        puVar8 = (undefined8 *)*puVar11;
      }
      if (cVar9 == '\x02') {
        puVar8 = puVar11;
      }
      puVar7 = (undefined8 *)func_0x0488e200(uVar3,lVar10,&UNK_07459d38,puVar8);
    }
    unaff_RBX[2] = &UNK_0e76ec90;
    *(undefined4 *)(unaff_RBX + 4) = 0x7459d38;
    unaff_RBX[3] = 0;
    *(undefined1 *)((long)unaff_RBX + 0x24) = 4;
    *unaff_RBX = puVar7;
    unaff_RBX[5] = uVar2;
    unaff_RBX[6] = 0;
    unaff_RBX[7] = &UNK_0e76ebb0;
  }
  return;
}


