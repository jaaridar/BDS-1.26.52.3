/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6c4240 (ELF vaddr 0xd5c4240)
 * Label: callee-of:0xd1cf130
 * Body:  [[0d6c4240, 0d6c4393]]
 * Ghidra: FUN_0d6c4240
 */


undefined8 * FUN_0d6c4240(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  *param_1 = &UNK_0f47e0b0;
  puVar1 = param_1 + 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = puVar1;
  if ((*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) == 0x20) &&
     (plVar4 = *(long **)(*(long *)(param_2 + 0x18) + -0x20), plVar4 != (long *)0x0)) {
    puVar2 = param_1 + 1;
    cVar7 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if (cVar7 == '\n') {
      plVar5 = (long *)param_1[1];
      plStack_48 = &lStack_40;
      lStack_40 = param_1[2];
      lStack_38 = param_1[3];
      lVar8 = lStack_40;
      if (lStack_38 != 0) {
        *(long **)(lStack_40 + 0x10) = plStack_48;
        *puVar2 = puVar1;
        *puVar1 = 0;
        param_1[3] = 0;
        lVar8 = 0;
        plStack_48 = plVar5;
      }
      plVar5 = plVar4 + 1;
      func_0x0d6c9500(puVar2,lVar8);
      param_1[1] = plVar4[1];
      plVar3 = plVar4 + 2;
      lVar8 = plVar4[2];
      param_1[2] = lVar8;
      lVar6 = plVar4[3];
      param_1[3] = lVar6;
      if (lVar6 == 0) {
        *puVar2 = puVar1;
      }
      else {
        *(undefined8 **)(lVar8 + 0x10) = puVar1;
        *plVar5 = (long)plVar3;
        *plVar3 = 0;
        plVar4[3] = 0;
        lVar8 = 0;
      }
      func_0x0d6c9500(plVar5,lVar8);
      plVar4[1] = (long)plStack_48;
      plVar4[2] = lStack_40;
      plVar4[3] = lStack_38;
      if (lStack_38 == 0) {
        *plVar5 = (long)plVar3;
      }
      else {
        *(long **)(lStack_40 + 0x10) = plVar3;
        plStack_48 = &lStack_40;
        lStack_40 = 0;
        lStack_38 = 0;
      }
      func_0x0d6c9500(&plStack_48,lStack_40);
    }
  }
  return param_1;
}


