/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x57d8ed0 (ELF vaddr 0x56d8ed0)
 * Label: callee-of:0xce76060
 * Body:  [[057d8ed0, 057d903f]]
 * Ghidra: FUN_057d8ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_057d8ed0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    puVar7[2] = param_2[2];
    uVar4 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar4;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar7 = puVar7 + 3;
LAB_057d9012:
    param_1[1] = (long)puVar7;
    return;
  }
  lVar6 = (long)puVar7 - *param_1;
  uVar8 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (uVar8 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar5 * 0x5555555555555556;
    if (uVar8 < uVar3) {
      uVar8 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 < 0xaaaaaaaaaaaaaab) {
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8 * 0x18);
      if (lVar5 == 0) {
        func_0x0eec74c0(uVar8 * 0x18,0);
      }
      *(undefined8 *)(lVar5 + 0x10 + lVar6) = param_2[2];
      uVar4 = param_2[1];
      *(undefined8 *)(lVar5 + lVar6) = *param_2;
      ((undefined8 *)(lVar5 + lVar6))[1] = uVar4;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar7 = (undefined8 *)(lVar6 + lVar5 + 0x18);
      lVar1 = *param_1;
      lVar6 = (lVar5 + lVar6) - (param_1[1] - lVar1);
      func_0x0eee2f00(lVar6,lVar1);
      *param_1 = lVar6;
      param_1[1] = (long)puVar7;
      lVar6 = param_1[2];
      param_1[2] = lVar5 + uVar8 * 0x18;
      if (lVar1 != 0) {
        func_0x0412a280(lVar1,lVar6 - lVar1);
      }
      goto LAB_057d9012;
    }
  }
  else {
    func_0x0488efe0();
  }
  func_0x04882eb0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


