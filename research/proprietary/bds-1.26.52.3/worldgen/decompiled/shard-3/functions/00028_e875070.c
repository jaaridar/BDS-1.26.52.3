/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe875070
 * Label: callee-of:0xe706340
 * Body:  [[0e874ddc, 0e874ded] [0e875070, 0e875249] [0e875250, 0e87538a] [0e8753a6, 0e8753be]]
 * Ghidra: FUN_0e875070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0e875070(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_RBX;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_R14;
  ulong uVar9;
  long lVar10;
  undefined8 unaff_retaddr;
  long lVar11;
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
  
  func_0x06fd6250();
  puVar1 = *(undefined8 **)(unaff_RBX + 0x20);
  if (puVar1 < *(undefined8 **)(unaff_RBX + 0x28)) {
    if (unaff_R14 == puVar1) {
      func_0x0e875930(puVar1,in_stack_00000048);
      *(undefined8 **)(unaff_RBX + 0x20) = puVar1 + 8;
    }
    else {
      func_0x0e875930(&stack0x00000000,in_stack_00000048);
      func_0x06fd6bf0();
      if (unaff_R14 != (undefined8 *)&stack0x00000000) {
        if ((code *)unaff_R14[3] != (code *)0x0) {
          (*(code *)unaff_R14[3])();
        }
        if (cStack0000000000000024 != '\0') {
          if (cStack0000000000000024 == '\x02') {
            (*in_stack_00000010)(5,&stack0x00000000);
          }
          else {
            *unaff_R14 = unaff_retaddr;
          }
        }
        unaff_R14[2] = in_stack_00000010;
        unaff_R14[3] = in_stack_00000018;
        *(undefined4 *)(unaff_R14 + 4) = uStack0000000000000020;
        *(char *)((long)unaff_R14 + 0x24) = cStack0000000000000024;
      }
      *(undefined4 *)(unaff_R14 + 5) = uStack0000000000000028;
      *(undefined4 *)((long)unaff_R14 + 0x2c) = uStack000000000000002c;
      *(undefined4 *)(unaff_R14 + 6) = uStack0000000000000030;
      *(undefined4 *)((long)unaff_R14 + 0x34) = uStack0000000000000034;
      unaff_R14[7] = in_stack_00000038;
      if (in_stack_00000018 != (code *)0x0) {
        (*in_stack_00000018)(&stack0x00000000);
      }
    }
  }
  else {
    puVar2 = *(undefined8 **)(unaff_RBX + 0x18);
    uVar9 = ((long)puVar1 - (long)puVar2 >> 6) + 1;
    if (uVar9 >> 0x3a != 0) {
      func_0x05d94eb0();
LAB_0e875356:
      uVar6 = func_0x04882eb0();
      uVar6 = func_0x04882e20(uVar6);
      *(ulong *)(unaff_RBX + 0x20) = uVar9;
      uVar6 = func_0x0eee2d70(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      if (in_stack_00000018 != (code *)0x0) {
        (*in_stack_00000018)(&stack0x00000000);
      }
      uVar6 = func_0x0eee2d70(uVar6);
      uVar6 = func_0x04882e20(uVar6);
      func_0x04882e20(uVar6);
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    uVar4 = (long)*(undefined8 **)(unaff_RBX + 0x28) - (long)puVar2;
    uVar7 = (long)uVar4 >> 5;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar7 = 0x3ffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
      lVar5 = 0;
    }
    else {
      if (0x3ffffffffffffff < uVar7) goto LAB_0e875356;
      lVar8 = uVar7 << 6;
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
      if (lVar5 == 0) {
        lVar5 = 0;
        func_0x0eec74c0(lVar8,0);
      }
    }
    lVar10 = (long)unaff_R14 - (long)puVar2;
    in_stack_00000010 = (code *)(lVar5 + lVar10);
    in_stack_00000018 = (code *)(lVar5 + lVar8);
    lVar11 = lVar5;
    if (lVar10 == lVar8) {
      if (unaff_R14 == puVar2) {
        in_stack_00000010 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (in_stack_00000010 == (code *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        in_stack_00000018 = (code *)((long)in_stack_00000010 + 0x40);
        lVar11 = (long)in_stack_00000010;
        if (lVar5 != 0) {
          func_0x0412a280(lVar5,lVar10);
        }
      }
      else {
        in_stack_00000010 =
             (code *)((long)in_stack_00000010 +
                     (((lVar10 >> 6) - ((lVar10 >> 6) + 1 >> 0x3f)) + 1U & 0x7fffffffffffffe) *
                     -0x20);
      }
    }
    func_0x0e875930(in_stack_00000010,in_stack_00000048);
    func_0x06fd70e0();
    lVar5 = (long)in_stack_00000010 + 0x40;
    while (in_stack_00000010 != (code *)lVar5) {
      lVar8 = lVar5 + -0x40;
      puVar1 = (undefined8 *)(lVar5 + -0x28);
      lVar5 = lVar8;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
    }
    if (lVar11 != 0) {
      func_0x0412a280(lVar11,(long)in_stack_00000018 - lVar11);
    }
  }
  return 1;
}


