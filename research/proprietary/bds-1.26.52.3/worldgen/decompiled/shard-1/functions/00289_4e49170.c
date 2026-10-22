/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4f49170 (ELF vaddr 0x4e49170)
 * Label: callee-of:0xd2348f0
 * Body:  [[04f49170, 04f492ca]]
 * Ghidra: FUN_04f49170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04f49170(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = *param_2;
    lVar6 = (long)puVar1 + 0xc;
LAB_04f4929f:
    param_1[1] = lVar6;
    return;
  }
  lVar2 = *param_1;
  lVar7 = (long)puVar1 - lVar2;
  uVar9 = (lVar7 >> 2) * -0x5555555555555555 + 1;
  if (uVar9 < 0x1555555555555556) {
    lVar8 = param_1[2] - lVar2;
    lVar5 = lVar8 >> 2;
    uVar4 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar4) {
      uVar9 = uVar4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar9 = 0x1555555555555555;
    }
    if (uVar9 < 0x1555555555555556) {
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar5 == 0) {
        func_0x0eec74c0(uVar9 * 0xc,0);
      }
      *(undefined4 *)(lVar5 + 8 + lVar7) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar5 + lVar7) = *param_2;
      lVar6 = lVar5 + 0xc + lVar7;
      func_0x0eee2f00(lVar5,lVar2,lVar7);
      *param_1 = lVar5;
      param_1[1] = lVar6;
      param_1[2] = uVar9 * 0xc + lVar5;
      if (lVar2 != 0) {
        func_0x0412a280(lVar2,lVar8);
      }
      goto LAB_04f4929f;
    }
  }
  else {
    func_0x04aa2290();
  }
  func_0x04882eb0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


