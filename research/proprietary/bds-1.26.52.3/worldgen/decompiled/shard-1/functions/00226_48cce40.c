/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cce40 (ELF vaddr 0x48cce40)
 * Label: callee-of:0x51f1f50
 * Body:  [[049cce40, 049cd020] [049cd024, 049cd044]]
 * Ghidra: FUN_049cce40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_049cce40(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *in_RAX;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar5 = param_2[1] - lVar1;
  if (lVar5 != 0) {
    if (0xe070381c0e0703 < (ulong)((lVar5 >> 2) * 0x7e3f1f8fc7e3f1f9)) {
      func_0x049cd2d0();
      plStack_38 = in_RAX;
      goto LAB_049ccffb;
    }
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
    if (lVar3 == 0) {
      func_0x0eec74c0(lVar5,0);
    }
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar5 + lVar3;
    lVar5 = ((lVar5 - 0x124U) / 0x124) * 0x124;
    func_0x0eee2f00(lVar3,lVar1,lVar5 + 0x124);
    param_1[1] = lVar5 + lVar3 + 0x124;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = param_2[3];
  lVar5 = param_2[4] - lVar1;
  if (lVar5 != 0) {
    plStack_38 = param_1 + 3;
    if (0xe070381c0e0703 < (ulong)((lVar5 >> 2) * 0x7e3f1f8fc7e3f1f9)) {
LAB_049ccffb:
      uVar4 = func_0x049cd2d0();
      lVar1 = *plStack_38;
      if (lVar1 != 0) {
        param_1[4] = lVar1;
        func_0x0412a280(lVar1,param_1[5] - lVar1);
      }
      lVar1 = *param_1;
      if (lVar1 != 0) {
        param_1[1] = lVar1;
        func_0x0412a280(lVar1,param_1[2] - lVar1);
      }
      func_0x0eee2d70(uVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
    if (lVar3 == 0) {
      func_0x0eec74c0(lVar5,0);
    }
    param_1[3] = lVar3;
    param_1[4] = lVar3;
    param_1[5] = lVar5 + lVar3;
    lVar5 = ((lVar5 - 0x124U) / 0x124) * 0x124;
    func_0x0eee2f00(lVar3,lVar1,lVar5 + 0x124);
    param_1[4] = lVar5 + lVar3 + 0x124;
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  return;
}


