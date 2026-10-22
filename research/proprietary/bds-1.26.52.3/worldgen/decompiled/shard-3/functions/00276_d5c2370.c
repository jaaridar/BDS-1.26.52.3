/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c2370 (ELF vaddr 0xd5c2370)
 * Label: callee-of:0xc9687f0
 * Body:  [[0d6c2370, 0d6c24ca]]
 * Ghidra: FUN_0d6c2370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d6c2370(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar5 = (**(code **)(*(long *)*param_2 + 0x30))();
  *(undefined1 *)(param_1 + 0x20) = uVar5;
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 < *(undefined8 **)(param_1 + 0x18)) {
    uVar2 = *param_2;
    *param_2 = 0;
    *puVar10 = uVar2;
    puVar10 = puVar10 + 1;
LAB_0d6c2498:
    *(undefined8 **)(param_1 + 0x10) = puVar10;
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar11 = (long)puVar10 - lVar3;
  uVar1 = (lVar11 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar7 = (long)*(undefined8 **)(param_1 + 0x18) - lVar3;
    uVar9 = (long)uVar7 >> 2;
    if ((ulong)((long)uVar7 >> 2) <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 < 0x2000000000000000) {
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 8);
      if (lVar6 == 0) {
        func_0x0eec74c0(uVar9 * 8,0);
      }
      uVar2 = *param_2;
      *param_2 = 0;
      *(undefined8 *)(lVar6 + lVar11) = uVar2;
      puVar10 = (undefined8 *)(lVar6 + lVar11 + 8);
      lVar8 = lVar6 + lVar11 + (lVar11 >> 3) * -8;
      func_0x0eee2f00(lVar8,lVar3,lVar11);
      *(long *)(param_1 + 8) = lVar8;
      *(undefined8 **)(param_1 + 0x10) = puVar10;
      *(ulong *)(param_1 + 0x18) = lVar6 + uVar9 * 8;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,uVar7);
      }
      goto LAB_0d6c2498;
    }
  }
  else {
    func_0x0d6c9300();
  }
  func_0x04882eb0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


