/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7288ca0 (ELF vaddr 0x7188ca0)
 * Label: callee-of:0xc95fb20
 * Body:  [[07288ca0, 07288f19]]
 * Ghidra: FUN_07288ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_07288ca0(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 *puStack_70;
  long lStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  long *plStack_38;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 < (undefined4 *)param_1[2]) {
    uVar1 = *param_3;
    puVar6 = param_2;
    if (param_2 == puVar8) {
      *puVar8 = uVar1;
      param_1[1] = (long)(puVar8 + 1);
    }
    else {
      puVar3 = puVar8;
      if (puVar8 + -1 < puVar8) {
        puVar3 = puVar8 + 1;
        *puVar8 = puVar8[-1];
      }
      param_1[1] = (long)puVar3;
      if (puVar8 != param_2 + 1) {
        func_0x0eee2ee0(param_2 + 1,param_2);
      }
      *param_2 = uVar1;
    }
  }
  else {
    puVar3 = (undefined4 *)*param_1;
    uVar9 = ((long)puVar8 - (long)puVar3 >> 2) + 1;
    if (uVar9 >> 0x3e != 0) {
      func_0x07288f60();
LAB_07288eff:
      uVar7 = func_0x04882eb0();
      func_0x07288f20(&lStack_58);
      func_0x0eee2d70(uVar7);
      pcVar2 = (code *)swi(3);
      puVar8 = (undefined4 *)(*pcVar2)();
      return puVar8;
    }
    uVar4 = param_1[2] - (long)puVar3;
    uVar10 = (long)uVar4 >> 1;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar10 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      lVar11 = 0;
      lVar5 = 0;
    }
    else {
      if (0x3fffffffffffffff < uVar10) goto LAB_07288eff;
      lVar11 = uVar10 << 2;
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
      if (lVar5 == 0) {
        func_0x0eec74c0(lVar11,0);
        lVar5 = 0;
      }
    }
    lVar13 = (long)param_2 - (long)puVar3;
    puStack_50 = (undefined4 *)(lVar5 + lVar13);
    puStack_70 = (undefined4 *)(lVar5 + lVar11);
    puVar6 = puStack_50;
    lStack_58 = lVar5;
    puStack_48 = puStack_50;
    puStack_40 = puStack_70;
    if (lVar13 == lVar11) {
      if (param_2 == puVar3) {
        puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
        if (puVar6 == (undefined4 *)0x0) {
          func_0x0eec74c0(4,0);
        }
        puStack_70 = puVar6 + 1;
        if (lVar5 != 0) {
          FUN_0412a280(lVar5,lVar13);
          puVar8 = (undefined4 *)param_1[1];
        }
      }
      else {
        puVar6 = (undefined4 *)
                 ((long)puStack_50 -
                 ((((lVar13 >> 2) - ((lVar13 >> 2) + 1 >> 0x3f)) + 1) * 2 & 0xfffffffffffffffcU));
      }
    }
    *puVar6 = *param_3;
    func_0x0eee2f00(puVar6 + 1,param_2,(long)puVar8 - (long)param_2);
    lVar5 = param_1[1];
    param_1[1] = (long)param_2;
    lVar11 = (long)param_2 - *param_1;
    lVar12 = (long)puVar6 - lVar11;
    func_0x0eee2f00(lVar12,*param_1,lVar11);
    lVar11 = *param_1;
    lVar13 = param_1[2];
    *param_1 = lVar12;
    param_1[1] = (long)puVar6 + (lVar5 - (long)param_2) + 4;
    param_1[2] = (long)puStack_70;
    if (lVar11 != 0) {
      FUN_0412a280(lVar11,lVar13 - lVar11);
    }
  }
  return puVar6;
}


