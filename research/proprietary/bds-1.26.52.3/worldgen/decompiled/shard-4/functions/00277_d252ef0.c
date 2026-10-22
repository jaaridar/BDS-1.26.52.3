/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd352ef0 (ELF vaddr 0xd252ef0)
 * Label: callee-of:0xc970bd0
 * Body:  [[0d352ef0, 0d353072]]
 * Ghidra: FUN_0d352ef0
 */


undefined8 * FUN_0d352ef0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  long *plVar8;
  long lStack_40;
  long *plStack_38;
  
  func_0x0d2d2fd0(&lStack_40,param_2 + 0x48,*param_3,*(undefined4 *)(param_3 + 1));
  if (lStack_40 != 0) {
    lVar1 = *(long *)(lStack_40 + 0x30);
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    if (param_1 != (undefined8 *)(lVar1 + 0x70)) {
      if ((*(byte *)(lVar1 + 0x78) & 1) == 0) {
        param_1[3] = *(undefined8 *)(lVar1 + 0x88);
        uVar3 = *(undefined4 *)(lVar1 + 0x7c);
        uVar4 = *(undefined4 *)(lVar1 + 0x80);
        uVar5 = *(undefined4 *)(lVar1 + 0x84);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 0x78);
        *(undefined4 *)((long)param_1 + 0xc) = uVar3;
        *(undefined4 *)(param_1 + 2) = uVar4;
        *(undefined4 *)((long)param_1 + 0x14) = uVar5;
      }
      else {
        func_0x04885070(param_1 + 1,*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x80));
      }
    }
    *param_1 = *(undefined8 *)(lVar1 + 0x70);
  }
  if (plStack_38 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_38 + 1;
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x0412c2d0(plStack_38);
    }
  }
  if (lStack_40 == 0) {
    plVar2 = *(long **)(param_2 + 0x38);
    for (plVar8 = *(long **)(param_2 + 0x30); plVar8 != plVar2; plVar8 = plVar8 + 1) {
      cVar7 = func_0x0d3516c0(*plVar8,*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4),
                              *(undefined4 *)(param_3 + 1));
      if (cVar7 != '\0') {
        lVar1 = *plVar8;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[4] = 0;
        if (param_1 != (undefined8 *)(lVar1 + 8)) {
          if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
            param_1[3] = *(undefined8 *)(lVar1 + 0x20);
            uVar6 = *(undefined8 *)(lVar1 + 0x18);
            param_1[1] = *(undefined8 *)(lVar1 + 0x10);
            param_1[2] = uVar6;
          }
          else {
            func_0x04885070(param_1 + 1,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x18))
            ;
          }
        }
        *param_1 = *(undefined8 *)(lVar1 + 8);
        return param_1;
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  return param_1;
}


