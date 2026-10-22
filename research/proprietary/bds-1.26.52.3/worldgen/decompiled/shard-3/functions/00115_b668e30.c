/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb668e30
 * Label: string:CustomBiomeSource
 * Body:  [[0b668e30, 0b668f3b] [0b668fa8, 0b668fb7] [0b669043, 0b6690b1] [0b6690c3, 0b6690d3] [0b6690e8, 0b66910d]]
 * Ghidra: FUN_0b668e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b668e30(char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  int *in_RAX;
  int *piVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *unaff_RBX;
  ulong uVar9;
  long lVar10;
  long unaff_R13;
  long lVar11;
  undefined8 *puVar12;
  long *unaff_R15;
  long lStack0000000000000018;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  *param_1 = *param_1 + param_4;
  piVar4 = (int *)CONCAT71((int7)((ulong)in_RAX >> 8),*unaff_RBX);
  *piVar4 = *piVar4 + (int)piVar4;
  lVar2 = *unaff_R15;
  lStack0000000000000018 = unaff_R15[1];
  lVar10 = unaff_R15[1];
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                             (&DAT_0f5463b0,0x18,(char)param_3 + (char)((ulong)param_3 >> 8));
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *plVar5 = (long)&UNK_0f2cbfd0;
  plVar5[1] = lVar2;
  *(int *)(plVar5 + 2) = (int)lVar10;
  puVar12 = *(undefined8 **)(unaff_R13 + 0x18);
  if (puVar12 < *(undefined8 **)(unaff_R13 + 0x20)) {
    *puVar12 = plVar5;
    puVar12 = puVar12 + 1;
LAB_0b66909f:
    *(undefined8 **)(unaff_R13 + 0x18) = puVar12;
    return;
  }
  lVar2 = *(long *)(unaff_R13 + 0x10);
  lVar10 = (long)puVar12 - lVar2;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = (long)*(undefined8 **)(unaff_R13 + 0x20) - lVar2;
    uVar9 = (long)uVar8 >> 2;
    if ((ulong)((long)uVar8 >> 2) <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 < 0x2000000000000000) {
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 8);
      if (lVar6 == 0) {
        func_0x0eec74c0(uVar9 * 8,0);
      }
      *(long **)(lVar6 + lVar10) = plVar5;
      puVar12 = (undefined8 *)(lVar10 + lVar6 + 8);
      lVar11 = lVar10 + lVar6 + (lVar10 >> 3) * -8;
      func_0x0eee2f00(lVar11,lVar2,lVar10);
      *(long *)(unaff_R13 + 0x10) = lVar11;
      *(undefined8 **)(unaff_R13 + 0x18) = puVar12;
      *(ulong *)(unaff_R13 + 0x20) = uVar9 * 8 + lVar6;
      if (lVar2 != 0) {
        func_0x0412a280(lVar2,uVar8);
      }
      goto LAB_0b66909f;
    }
  }
  else {
    func_0x0b670ef0();
    func_0x04882eb0();
  }
  uVar7 = func_0x04882eb0();
  (**(code **)(*plVar5 + 8))(plVar5);
  func_0x0eee2d70(uVar7);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


