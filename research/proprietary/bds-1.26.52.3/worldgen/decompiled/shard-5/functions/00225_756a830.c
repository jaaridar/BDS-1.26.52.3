/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x766a830 (ELF vaddr 0x756a830)
 * Label: callee-of:0xc5c9fb0
 * Body:  [[0766a830, 0766a991]]
 * Ghidra: FUN_0766a830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0766a830(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    puVar13[2] = param_2[2];
    uVar8 = param_2[1];
    *puVar13 = *param_2;
    puVar13[1] = uVar8;
    puVar13 = puVar13 + 3;
LAB_0766a963:
    param_1[1] = (long)puVar13;
    return;
  }
  lVar2 = *param_1;
  lVar10 = (long)puVar13 - lVar2;
  uVar12 = (lVar10 >> 3) * -0x5555555555555555 + 1;
  if (uVar12 < 0xaaaaaaaaaaaaaab) {
    lVar11 = param_1[2] - lVar2;
    lVar9 = lVar11 >> 3;
    uVar4 = lVar9 * 0x5555555555555556;
    if (uVar12 < uVar4) {
      uVar12 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar12 < 0xaaaaaaaaaaaaaab) {
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar9 == 0) {
        func_0x0eec74c0(uVar12 * 0x18,0);
      }
      *(undefined8 *)(lVar9 + 0x10 + lVar10) = param_2[2];
      uVar5 = *(undefined4 *)((long)param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 1);
      uVar7 = *(undefined4 *)((long)param_2 + 0xc);
      puVar1 = (undefined4 *)(lVar9 + lVar10);
      *puVar1 = *(undefined4 *)param_2;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      puVar13 = (undefined8 *)(lVar9 + 0x18 + lVar10);
      func_0x0eee2f00(lVar9,lVar2,lVar10);
      *param_1 = lVar9;
      param_1[1] = (long)puVar13;
      param_1[2] = uVar12 * 0x18 + lVar9;
      if (lVar2 != 0) {
        FUN_0412a280(lVar2,lVar11);
      }
      goto LAB_0766a963;
    }
  }
  else {
    func_0x049f4b30();
  }
  func_0x04882eb0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


