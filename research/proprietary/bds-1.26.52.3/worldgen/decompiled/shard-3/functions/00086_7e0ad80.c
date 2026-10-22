/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7e0ad80
 * Label: callee-of:0x7e0b3b0
 * Body:  [[07e0ad80, 07e0ae31] [07e0ae40, 07e0ae87]]
 * Ghidra: FUN_07e0ad80
 */


void FUN_07e0ad80(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 in_RAX;
  int *piVar16;
  undefined8 unaff_RBX;
  undefined4 *puVar17;
  long unaff_R12;
  undefined4 *unaff_R14;
  int in_stack_00000008;
  long *in_stack_00000148;
  
  plVar15 = in_stack_00000148;
  puVar17 = (undefined4 *)
            CONCAT62((int6)((ulong)unaff_RBX >> 0x10),
                     CONCAT11((byte)((ulong)unaff_RBX >> 8) ^ (byte)((ulong)in_RAX >> 8),
                              (char)unaff_RBX));
  if (in_stack_00000148 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000148 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000148 + 0x10))(in_stack_00000148);
      func_0x0412c2d0(plVar15);
    }
  }
  lVar2 = *(long *)(unaff_R12 + 0x10);
  iVar3 = *(int *)(unaff_R12 + 0x1c);
  if (iVar3 == 2) {
    piVar16 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar3 = *piVar16;
    while (iVar3 != *(int *)(unaff_R12 + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar3 = *piVar16;
    }
    for (; *(long *)(piVar16 + 0xc) != *(long *)(unaff_R12 + 8); piVar16 = *(int **)(piVar16 + 0xe))
    {
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | in_stack_00000008 << 0x10;
      }
      goto LAB_07e0ae4d;
    }
    piVar16 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar3 = *piVar16;
    while (iVar3 != *(int *)(unaff_R12 + 0x18)) {
      piVar16 = piVar16 + 0x1a;
      iVar3 = *piVar16;
    }
  }
  piVar16[4] = piVar16[4] | in_stack_00000008 << 0x10;
LAB_07e0ae4d:
  *(undefined1 *)(puVar17 + 0xc) = *(undefined1 *)(unaff_R14 + 0xc);
  uVar4 = *unaff_R14;
  uVar5 = unaff_R14[1];
  uVar6 = unaff_R14[2];
  uVar7 = unaff_R14[3];
  uVar8 = unaff_R14[4];
  uVar9 = unaff_R14[5];
  uVar10 = unaff_R14[6];
  uVar11 = unaff_R14[7];
  uVar12 = unaff_R14[9];
  uVar13 = unaff_R14[10];
  uVar14 = unaff_R14[0xb];
  puVar17[8] = unaff_R14[8];
  puVar17[9] = uVar12;
  puVar17[10] = uVar13;
  puVar17[0xb] = uVar14;
  puVar17[4] = uVar8;
  puVar17[5] = uVar9;
  puVar17[6] = uVar10;
  puVar17[7] = uVar11;
  *puVar17 = uVar4;
  puVar17[1] = uVar5;
  puVar17[2] = uVar6;
  puVar17[3] = uVar7;
  func_0x048b0bc0(&stack0x00000020);
  return;
}


