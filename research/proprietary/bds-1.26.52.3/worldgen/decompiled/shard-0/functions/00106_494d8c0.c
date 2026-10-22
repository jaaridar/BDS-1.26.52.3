/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x494d8c0
 * Label: string:Erosion Spline For ({:.2f}, {:.2f}, {:.2f}, {:.2f})
 * Body:  [[0494d581, 0494d590] [0494d8c0, 0494d9d1] [0494d9e3, 0494d9f1] [0494da21, 0494da4e] [0494da52, 0494da68] [0494daa5, 0494daaf] [0494dac9, 0494daf6] [0494db0f, 0494db4f] [0eee2d60, 0eee2d65]]
 * Ghidra: FUN_0494d8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0494d8c0(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 unaff_RBX;
  long lVar8;
  long unaff_RBP;
  long lVar9;
  long *unaff_R13;
  ulong uVar10;
  undefined8 *puVar11;
  long in_stack_00000008;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  puVar11 = (undefined8 *)(ulong)*(uint *)(unaff_RBP + 8);
  if (puVar11 < (undefined8 *)unaff_R13[2]) {
    *puVar11 = unaff_RBX;
    puVar11 = puVar11 + 1;
LAB_0494d9b1:
    unaff_R13[1] = (long)puVar11;
    (*(code *)PTR_pthread_mutex_unlock_0f546448)(0xf553288);
    return;
  }
  lVar2 = *unaff_R13;
  lVar9 = (long)puVar11 - lVar2;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar7 = unaff_R13[2] - lVar2;
    uVar10 = (long)uVar7 >> 2;
    if ((ulong)((long)uVar7 >> 2) <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 < 0x2000000000000000) {
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10 * 8);
      if (lVar5 == 0) {
        func_0x0eec74c0(uVar10 * 8,0);
      }
      *(long *)(lVar5 + lVar9) = in_stack_00000008;
      puVar11 = (undefined8 *)(lVar5 + lVar9 + 8);
      lVar8 = lVar5 + lVar9 + (lVar9 >> 3) * -8;
      func_0x0eee2f00(lVar8,lVar2,lVar9);
      *unaff_R13 = lVar8;
      unaff_R13[1] = (long)puVar11;
      unaff_R13[2] = lVar5 + uVar10 * 8;
      if (lVar2 != 0) {
        func_0x0412a280(lVar2,uVar7);
      }
      goto LAB_0494d9b1;
    }
  }
  else {
    func_0x049578e0();
  }
  func_0x04882eb0();
  uVar6 = func_0x04882e30();
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000040 & 1) != 0) {
    func_0x0412a280(in_stack_00000050,in_stack_00000040 & 0xfffffffffffffffe);
  }
  func_0x0494db50(in_stack_00000080);
  func_0x0494dba0(in_stack_00000088);
  func_0x04947090(in_stack_00000038);
  plVar3 = *(long **)(in_stack_00000008 + 0x18);
  while (plVar3 == (long *)0x0) {
    func_0x0eee2d70(uVar6);
    func_0x0412a280(*(undefined8 *)(in_stack_00000008 + 0x38),
                    *(ulong *)(in_stack_00000008 + 0x28) & 0xfffffffffffffffe);
    plVar3 = *(long **)(in_stack_00000008 + 0x18);
  }
  (**(code **)(*plVar3 + 8))();
  func_0x0eee2d70(uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


