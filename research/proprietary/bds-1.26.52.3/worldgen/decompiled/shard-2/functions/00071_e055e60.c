/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe055e60
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot0
 * Body:  [[0e055c2c, 0e055c3d] [0e055e60, 0e056099] [0e0560a0, 0e0561da] [0e0561f6, 0e05620e]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  ulong in_RAX;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong unaff_RBX;
  ulong uVar8;
  long lVar9;
  ulong unaff_R12;
  long unaff_R13;
  long unaff_R14;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  undefined8 unaff_retaddr;
  long lVar14;
  code *in_stack_00000010;
  code *in_stack_00000018;
  undefined4 uStack0000000000000020;
  char cStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  long in_stack_00000060;
  
  bVar13 = (in_RAX & 1) != 0;
  if (bVar13) {
    param_2 = *(undefined8 *)(unaff_R13 + 0x10);
  }
  if (bVar13) {
    unaff_RBX = *(ulong *)(unaff_R13 + 8);
  }
  iVar4 = func_0x0eee2ff0(param_1,param_2);
  if (iVar4 == 0) {
    if (unaff_RBX <= unaff_R12) {
      return 1;
    }
  }
  else if (-1 < iVar4) {
    return 1;
  }
  puVar10 = (undefined8 *)
            (unaff_R14 + ((ulong)(unaff_R13 - in_stack_00000058) >> 3) * -0x5555555555555540);
  func_0x06fd6250();
  puVar1 = *(undefined8 **)(in_stack_00000060 + 0x20);
  if (puVar1 < *(undefined8 **)(in_stack_00000060 + 0x28)) {
    if (puVar10 == puVar1) {
      func_0x0e056780(puVar1,in_stack_00000048);
      *(undefined8 **)(in_stack_00000060 + 0x20) = puVar1 + 8;
    }
    else {
      func_0x0e056780(&stack0x00000000,in_stack_00000048);
      func_0x06fd6bf0(in_stack_00000060 + 0x18,puVar10,*(undefined8 *)(in_stack_00000060 + 0x20),
                      puVar10 + 8);
      if (puVar10 != (undefined8 *)&stack0x00000000) {
        if ((code *)puVar10[3] != (code *)0x0) {
          (*(code *)puVar10[3])(puVar10);
        }
        if (cStack0000000000000024 != '\0') {
          if (cStack0000000000000024 == '\x02') {
            (*in_stack_00000010)(5,&stack0x00000000,puVar10);
          }
          else {
            *puVar10 = unaff_retaddr;
          }
        }
        puVar10[2] = in_stack_00000010;
        puVar10[3] = in_stack_00000018;
        *(undefined4 *)(puVar10 + 4) = uStack0000000000000020;
        *(char *)((long)puVar10 + 0x24) = cStack0000000000000024;
      }
      *(undefined4 *)(puVar10 + 5) = uStack0000000000000028;
      *(undefined4 *)((long)puVar10 + 0x2c) = uStack000000000000002c;
      *(undefined4 *)(puVar10 + 6) = uStack0000000000000030;
      *(undefined4 *)((long)puVar10 + 0x34) = uStack0000000000000034;
      puVar10[7] = in_stack_00000038;
      if (in_stack_00000018 != (code *)0x0) {
        (*in_stack_00000018)(&stack0x00000000);
      }
    }
  }
  else {
    puVar2 = *(undefined8 **)(in_stack_00000060 + 0x18);
    uVar11 = ((long)puVar1 - (long)puVar2 >> 6) + 1;
    if (uVar11 >> 0x3a != 0) {
      func_0x05d94eb0();
LAB_0e0561a6:
      uVar7 = func_0x04882eb0();
      uVar7 = func_0x04882e20(uVar7);
      *(ulong *)(in_stack_00000060 + 0x20) = uVar11;
      uVar7 = func_0x0eee2d70(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      if (in_stack_00000018 != (code *)0x0) {
        (*in_stack_00000018)(&stack0x00000000);
      }
      uVar7 = func_0x0eee2d70(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      func_0x04882e20(uVar7);
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    uVar5 = (long)*(undefined8 **)(in_stack_00000060 + 0x28) - (long)puVar2;
    uVar8 = (long)uVar5 >> 5;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (0x7fffffffffffffbf < uVar5) {
      uVar8 = 0x3ffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar9 = 0;
      lVar6 = 0;
    }
    else {
      if (0x3ffffffffffffff < uVar8) goto LAB_0e0561a6;
      lVar9 = uVar8 << 6;
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
      if (lVar6 == 0) {
        lVar6 = 0;
        func_0x0eec74c0(lVar9,0);
      }
    }
    lVar12 = (long)puVar10 - (long)puVar2;
    in_stack_00000010 = (code *)(lVar6 + lVar12);
    in_stack_00000018 = (code *)(lVar6 + lVar9);
    lVar14 = lVar6;
    if (lVar12 == lVar9) {
      if (puVar10 == puVar2) {
        in_stack_00000010 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (in_stack_00000010 == (code *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        in_stack_00000018 = (code *)((long)in_stack_00000010 + 0x40);
        lVar14 = (long)in_stack_00000010;
        if (lVar6 != 0) {
          func_0x0412a280(lVar6,lVar12);
        }
      }
      else {
        in_stack_00000010 =
             (code *)((long)in_stack_00000010 +
                     (((lVar12 >> 6) - ((lVar12 >> 6) + 1 >> 0x3f)) + 1U & 0x7fffffffffffffe) *
                     -0x20);
      }
    }
    func_0x0e056780(in_stack_00000010,in_stack_00000048);
    func_0x06fd70e0(in_stack_00000060 + 0x18,&stack0x00000000,puVar10);
    lVar6 = (long)in_stack_00000010 + 0x40;
    while (in_stack_00000010 != (code *)lVar6) {
      lVar9 = lVar6 + -0x40;
      puVar1 = (undefined8 *)(lVar6 + -0x28);
      lVar6 = lVar9;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
    }
    if (lVar14 != 0) {
      func_0x0412a280(lVar14,(long)in_stack_00000018 - lVar14);
    }
  }
  return 1;
}


