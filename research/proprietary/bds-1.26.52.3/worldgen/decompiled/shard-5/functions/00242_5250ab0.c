/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5350ab0 (ELF vaddr 0x5250ab0)
 * Label: callee-of:0x52511f0
 * Body:  [[05350ab0, 05350ae3] [05350af0, 05350cb9]]
 * Ghidra: FUN_05350ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05350ab0(long *param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbStack_38;
  
  do {
    if (param_2 == param_3) {
      return 1;
    }
    if (((*(int *)(param_2 + 0x18) != 0) || (*(int *)(param_2 + 0x38) != 1)) ||
       (*(int *)(param_2 + 0x20) == 0)) {
      func_0x05350e50(1,3,5,&UNK_012d761d);
      return 0;
    }
    lVar4 = func_0x0c8cce20(param_4,param_2);
    if (lVar4 == 0) {
      if ((*param_2 & 1) == 0) {
        pbStack_38 = param_2 + 1;
      }
      else {
        pbStack_38 = *(byte **)(param_2 + 0x10);
      }
      func_0x05350cc0(1,3,5,&UNK_0135c470,&pbStack_38);
      return 0;
    }
    plVar8 = (long *)param_1[1];
    if (plVar8 < (long *)param_1[2]) {
      *plVar8 = lVar4;
      plVar8 = plVar8 + 1;
    }
    else {
      lVar2 = *param_1;
      lVar7 = (long)plVar8 - lVar2;
      uVar1 = (lVar7 >> 3) + 1;
      if (0x1fffffffffffffff < uVar1) {
LAB_05350cb4:
        func_0x049cca50();
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      uVar10 = param_1[2] - lVar2;
      uVar9 = (long)uVar10 >> 2;
      if ((ulong)((long)uVar10 >> 2) <= uVar1) {
        uVar9 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (0x1fffffffffffffff < uVar9) {
        func_0x04882eb0();
        goto LAB_05350cb4;
      }
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar5 == 0) {
        func_0x0eec74c0(uVar9 * 8,0);
      }
      *(long *)(lVar5 + lVar7) = lVar4;
      plVar8 = (long *)(lVar5 + lVar7 + 8);
      lVar4 = lVar5 + lVar7 + (lVar7 >> 3) * -8;
      func_0x0eee2f00(lVar4,lVar2,lVar7);
      *param_1 = lVar4;
      param_1[1] = (long)plVar8;
      param_1[2] = lVar5 + uVar9 * 8;
      if (lVar2 != 0) {
        FUN_0412a280(lVar2,uVar10);
      }
    }
    param_1[1] = (long)plVar8;
    param_2 = param_2 + 0x40;
  } while( true );
}


