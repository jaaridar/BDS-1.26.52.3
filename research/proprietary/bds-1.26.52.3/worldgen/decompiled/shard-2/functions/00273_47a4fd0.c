/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48a4fd0 (ELF vaddr 0x47a4fd0)
 * Label: callee-of:0xc961580
 * Body:  [[048a4fd0, 048a5111]]
 * Ghidra: FUN_048a4fd0
 */


undefined8 *
FUN_048a4fd0(undefined8 *param_1,long *param_2,long param_3,long *param_4,undefined1 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  long *plStack_30;
  
  uStack_62 = param_5;
  plStack_60 = param_2;
  func_0x048a5830(param_1,&uStack_61,&plStack_60,param_3,&uStack_62);
  uStack_48 = *(undefined4 *)param_1;
  uStack_44 = *(undefined4 *)((long)param_1 + 4);
  uStack_40 = *(undefined4 *)(param_1 + 1);
  uStack_3c = *(undefined4 *)((long)param_1 + 0xc);
  if (param_1[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_1[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  (**(code **)(*plStack_60 + 0x20))(plStack_60,&uStack_48);
  plVar1 = (long *)CONCAT44(uStack_3c,uStack_40);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      lVar3 = *param_4;
      goto joined_r0x048a50fd;
    }
  }
  lVar3 = *param_4;
joined_r0x048a50fd:
  if (lVar3 != 0) {
    func_0x048a51a0(*param_1,0,0,0);
    uVar4 = *param_1;
    uStack_58 = (undefined4)*param_4;
    uStack_54 = *(undefined4 *)((long)param_4 + 4);
    uStack_50 = (undefined4)param_4[1];
    uStack_4c = *(undefined4 *)((long)param_4 + 0xc);
    *param_4 = 0;
    param_4[1] = 0;
    uStack_38 = 0;
    plStack_30 = (long *)0x0;
    func_0x048a56c0(uVar4,&uStack_58,*(undefined1 *)(param_3 + 0x20));
    plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        func_0x0412c2d0(plVar1);
      }
    }
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        func_0x0412c2d0(plVar1);
      }
    }
  }
  return param_1;
}


