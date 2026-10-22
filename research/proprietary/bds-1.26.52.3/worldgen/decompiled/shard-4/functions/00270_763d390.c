/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x773d390 (ELF vaddr 0x763d390)
 * Label: callee-of:0xc961580
 * Body:  [[0773d390, 0773d535] [0773d539, 0773d559]]
 * Ghidra: FUN_0773d390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0773d390(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_R13;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar6 = param_2[1] - lVar1;
  if (lVar6 != 0) {
    if (0x666666666666666 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
      func_0x07751f60();
      goto LAB_0773d513;
    }
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar6);
    if (lVar3 == 0) {
      func_0x0eec74c0(lVar6,0);
    }
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar6 + lVar3;
    uVar5 = (lVar6 - 0x28U) / 0x28;
    func_0x0eee2f00(lVar3,lVar1,uVar5 * 0x28 + 0x28);
    param_1[1] = uVar5 * 0x28 + 0x28 + lVar3;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = *param_3;
  lVar6 = param_3[1] - lVar1;
  if (lVar6 != 0) {
    unaff_R13 = param_1 + 3;
    if (0x666666666666666 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
LAB_0773d513:
      uVar4 = func_0x07751f60();
      lVar1 = *unaff_R13;
      if (lVar1 != 0) {
        param_1[4] = lVar1;
        func_0x0412a280(lVar1,param_1[5] - lVar1);
      }
      lVar1 = *param_1;
      if (lVar1 != 0) {
        param_1[1] = lVar1;
        func_0x0412a280(lVar1,param_1[2] - lVar1);
      }
      _Unwind_Resume(uVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar6);
    if (lVar3 == 0) {
      func_0x0eec74c0(lVar6,0);
    }
    param_1[3] = lVar3;
    param_1[4] = lVar3;
    param_1[5] = lVar3 + lVar6;
    uVar5 = (lVar6 - 0x28U) / 0x28;
    func_0x0eee2f00(lVar3,lVar1,uVar5 * 0x28 + 0x28);
    param_1[4] = lVar3 + uVar5 * 0x28 + 0x28;
  }
  return;
}


