/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdce4110
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0dce3d5c, 0dce3f8c] [0dce3fdf, 0dce4031] [0dce4040, 0dce4087] [0dce4099, 0dce40a9] [0dce4110, 0dce411f]]
 * Ghidra: FUN_0dce4110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dce4110(void)

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
  long lVar15;
  long *plVar16;
  int *piVar17;
  undefined4 *unaff_RBX;
  long unaff_R12;
  undefined4 *unaff_R14;
  undefined8 *unaff_R15;
  int in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined4 in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  long in_stack_000000c0;
  undefined5 uStack00000000000000c8;
  undefined3 uStack00000000000000cd;
  undefined5 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_00000140;
  long *in_stack_00000148;
  
  func_0x0410844d(&DAT_0f550a20);
  in_stack_000000d8 = _DAT_0f550a0c;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar15 = in_stack_00000028;
  lVar2 = in_stack_00000020;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0ef439d0;
  in_stack_000000e0 = plVar16 + 3;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  plVar16[3] = lVar2;
  plVar16[4] = lVar15;
  plVar16[7] = in_stack_00000040;
  plVar16[5] = in_stack_00000030;
  plVar16[6] = in_stack_00000038;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  plVar16[10] = in_stack_00000058;
  plVar16[8] = in_stack_00000048;
  plVar16[9] = in_stack_00000050;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  plVar16[0xb] = in_stack_00000060;
  plVar16[0xc] = in_stack_00000068;
  plVar16[0xd] = in_stack_00000070;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  unaff_R15[2] = 0;
  plVar16[0xe] = in_stack_00000078;
  plVar16[0xf] = in_stack_00000080;
  plVar16[0x10] = in_stack_00000088;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  *(undefined4 *)(plVar16 + 0x11) = in_stack_00000090;
  plVar16[0x12] = in_stack_00000098;
  plVar16[0x13] = in_stack_000000a0;
  plVar16[0x14] = in_stack_000000a8;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  plVar16[0x17] = in_stack_000000c0;
  *(undefined4 *)(plVar16 + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)plVar16 + 0xac) = uStack00000000000000b4;
  *(undefined4 *)(plVar16 + 0x16) = uStack00000000000000b8;
  *(undefined4 *)((long)plVar16 + 0xb4) = uStack00000000000000bc;
  _uStack00000000000000b0 = 0;
  _uStack00000000000000b8 = 0;
  in_stack_000000c0 = 0;
  *(ulong *)((long)plVar16 + 0xc5) = CONCAT53(in_stack_000000d0,uStack00000000000000cd);
  plVar16[0x18] = CONCAT35(uStack00000000000000cd,uStack00000000000000c8);
  in_stack_00000140 = 0;
  in_stack_00000148 = (long *)0x0;
  in_stack_000000e8 = plVar16;
  func_0x048afd20();
  plVar16 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000e8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = in_stack_00000148;
  if (in_stack_00000148 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000148 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000148 + 0x10))(in_stack_00000148);
      func_0x0412c2d0(plVar16);
    }
  }
  lVar2 = *(long *)(unaff_R12 + 0x10);
  iVar3 = *(int *)(unaff_R12 + 0x1c);
  if (iVar3 == 2) {
    piVar17 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar3 = *piVar17;
    while (iVar3 != *(int *)(unaff_R12 + 0x18)) {
      piVar17 = piVar17 + 0x16;
      iVar3 = *piVar17;
    }
    for (; *(long *)(piVar17 + 0xc) != *(long *)(unaff_R12 + 8); piVar17 = *(int **)(piVar17 + 0xe))
    {
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | in_stack_00000008 << 0x10;
      }
      goto LAB_0dce404d;
    }
    piVar17 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar3 = *piVar17;
    while (iVar3 != *(int *)(unaff_R12 + 0x18)) {
      piVar17 = piVar17 + 0x1a;
      iVar3 = *piVar17;
    }
  }
  piVar17[4] = piVar17[4] | in_stack_00000008 << 0x10;
LAB_0dce404d:
  *(undefined1 *)(unaff_RBX + 0xc) = *(undefined1 *)(unaff_R14 + 0xc);
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
  unaff_RBX[8] = unaff_R14[8];
  unaff_RBX[9] = uVar12;
  unaff_RBX[10] = uVar13;
  unaff_RBX[0xb] = uVar14;
  unaff_RBX[4] = uVar8;
  unaff_RBX[5] = uVar9;
  unaff_RBX[6] = uVar10;
  unaff_RBX[7] = uVar11;
  *unaff_RBX = uVar4;
  unaff_RBX[1] = uVar5;
  unaff_RBX[2] = uVar6;
  unaff_RBX[3] = uVar7;
  func_0x048b0bc0(&stack0x00000020);
  return;
}


