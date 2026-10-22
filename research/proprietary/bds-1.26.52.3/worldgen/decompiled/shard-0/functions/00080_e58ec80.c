/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe58ec80
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e58ec80, 0e58ef09]]
 * Ghidra: FUN_0e58ec80
 */


/* WARNING: Removing unreachable block (ram,0x0e58ed97) */
/* WARNING: Removing unreachable block (ram,0x0e58eda5) */
/* WARNING: Removing unreachable block (ram,0x0e58edb7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0e58ec80(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *unaff_RBX;
  long *unaff_R14;
  undefined8 *in_stack_00000010;
  code *in_stack_00000020;
  code *in_stack_00000028;
  undefined4 in_stack_00000030;
  char cStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  
  if ((unaff_R14 == (long *)0x0 | param_3) == 1) {
    uVar2 = unaff_RBX[5];
    lVar9 = unaff_RBX[6];
    if (lVar9 == 0) {
      (*(code *)unaff_RBX[7])(0);
      lVar9 = unaff_RBX[6];
    }
    unaff_R14 = (long *)func_0x0488e200(uVar2,lVar9,0x9f718264);
  }
  if (*unaff_R14 == 0) {
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    in_stack_00000010 = puVar6;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &UNK_0f4bf610;
    puVar7[3] = puVar6;
    *unaff_R14 = (long)puVar6;
    plVar3 = (long *)unaff_R14[1];
    unaff_R14[1] = (long)puVar7;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  _uStack0000000000000038 = unaff_RBX[5];
  in_stack_00000020 = (code *)&UNK_0488e0b0;
  in_stack_00000030 = 0x48b5725f;
  in_stack_00000028 = (code *)0x0;
  cStack0000000000000034 = '\0';
  in_stack_00000010 = (undefined8 *)0x0;
  _uStack0000000000000040 = 0;
  in_stack_00000048 = 0;
  if ((code *)unaff_RBX[7] != (code *)0x0) {
    (*(code *)unaff_RBX[7])(0x100);
  }
  if ((undefined8 **)unaff_RBX != &stack0x00000010) {
    if ((code *)unaff_RBX[3] != (code *)0x0) {
      (*(code *)unaff_RBX[3])();
    }
    uVar2 = in_stack_00000010;
    if (cStack0000000000000034 != '\0') {
      if (cStack0000000000000034 == '\x02') {
        (*in_stack_00000020)(5,&stack0x00000010);
      }
      else {
        in_stack_00000010 = (undefined8 *)0x0;
        *unaff_RBX = uVar2;
      }
    }
    unaff_RBX[2] = in_stack_00000020;
    unaff_RBX[3] = in_stack_00000028;
    *(undefined4 *)(unaff_RBX + 4) = in_stack_00000030;
    *(char *)((long)unaff_RBX + 0x24) = cStack0000000000000034;
  }
  lVar9 = in_stack_00000048;
  uVar4 = uStack0000000000000040;
  uVar5 = uStack0000000000000044;
  _uStack0000000000000040 = 0;
  *(undefined4 *)(unaff_RBX + 5) = uStack0000000000000038;
  *(undefined4 *)((long)unaff_RBX + 0x2c) = uStack000000000000003c;
  *(undefined4 *)(unaff_RBX + 6) = uVar4;
  *(undefined4 *)((long)unaff_RBX + 0x34) = uVar5;
  in_stack_00000048 = 0;
  unaff_RBX[7] = lVar9;
  if (in_stack_00000028 != (code *)0x0) {
    (*in_stack_00000028)(&stack0x00000010);
    lVar9 = unaff_RBX[7];
  }
  if (lVar9 == 0) {
    puVar8 = &UNK_0f4bf5e0;
  }
  else {
    puVar8 = (undefined *)func_0x0ed75450(&UNK_0f4bf5e0);
  }
  return puVar8;
}


