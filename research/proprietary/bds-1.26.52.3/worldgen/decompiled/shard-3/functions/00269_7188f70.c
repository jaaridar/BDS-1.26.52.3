/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7288f70 (ELF vaddr 0x7188f70)
 * Label: callee-of:0xc95fb20
 * Body:  [[07288f70, 072891e9]]
 * Ghidra: FUN_07288f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_07288f70(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puStack_70;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  ulong *puStack_38;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar6 = *param_3;
    puVar5 = param_2;
    if (param_2 == puVar7) {
      *puVar7 = uVar6;
      param_1[1] = (ulong)(puVar7 + 1);
    }
    else {
      puVar2 = puVar7;
      if (puVar7 + -1 < puVar7) {
        puVar2 = puVar7 + 1;
        *puVar7 = puVar7[-1];
      }
      param_1[1] = (ulong)puVar2;
      if (puVar7 != param_2 + 1) {
        memmove(param_2 + 1,param_2);
      }
      *param_2 = uVar6;
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    uVar8 = ((long)puVar7 - (long)puVar2 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
      func_0x07289230();
LAB_072891cf:
      uVar6 = func_0x04882eb0();
      func_0x072891f0(&lStack_58);
      func_0x0eee2d70(uVar6);
      pcVar1 = (code *)swi(3);
      puVar7 = (undefined8 *)(*pcVar1)();
      return puVar7;
    }
    uVar3 = (long)param_1[2] - (long)puVar2;
    uVar9 = (long)uVar3 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar9 = 0x1fffffffffffffff;
    }
    puStack_38 = param_1;
    if (uVar9 == 0) {
      lVar10 = 0;
      lVar4 = 0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) goto LAB_072891cf;
      lVar10 = uVar9 << 3;
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
      if (lVar4 == 0) {
        func_0x0eec74c0(lVar10,0);
        lVar4 = 0;
      }
    }
    lVar11 = (long)param_2 - (long)puVar2;
    puStack_50 = (undefined8 *)(lVar4 + lVar11);
    puStack_70 = (undefined8 *)(lVar4 + lVar10);
    puVar5 = puStack_50;
    lStack_58 = lVar4;
    puStack_48 = puStack_50;
    puStack_40 = puStack_70;
    if (lVar11 == lVar10) {
      if (param_2 == puVar2) {
        puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
        if (puVar5 == (undefined8 *)0x0) {
          func_0x0eec74c0(8,0);
        }
        puStack_70 = puVar5 + 1;
        if (lVar4 != 0) {
          func_0x0412a280(lVar4,lVar11);
          puVar7 = (undefined8 *)param_1[1];
        }
      }
      else {
        puVar5 = (undefined8 *)
                 ((long)puStack_50 +
                 (((lVar11 >> 3) - ((lVar11 >> 3) + 1 >> 0x3f)) + 1U & 0x3ffffffffffffffe) * -4);
      }
    }
    *puVar5 = *param_3;
    func_0x0eee2f00(puVar5 + 1,param_2,(long)puVar7 - (long)param_2);
    param_1[1] = (ulong)param_2;
    lVar4 = (long)param_2 - *param_1;
    uVar3 = (long)puVar5 - lVar4;
    func_0x0eee2f00(uVar3,*param_1,lVar4);
    uVar8 = *param_1;
    uVar9 = param_1[2];
    *param_1 = uVar3;
    param_1[1] = (long)puVar5 + ((long)puVar7 - (long)param_2) + 8;
    param_1[2] = (ulong)puStack_70;
    if (uVar8 != 0) {
      func_0x0412a280(uVar8,uVar9 - uVar8);
    }
  }
  return puVar5;
}


