/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286980 (ELF vaddr 0x5186980)
 * Label: callee-of:0x51884e0
 * Body:  [[05286980, 05286a62]]
 * Ghidra: FUN_05286980
 */


undefined8
FUN_05286980(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
            undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uStack_50;
  uint uStack_4c;
  long *plStack_48;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_10;
  
  uStack_28._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
  uStack_28._0_4_ = (undefined4)param_1;
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uStack_38 = param_1;
  uStack_30 = param_2;
  uStack_10 = param_3;
  if (param_4 == 0) {
    iStack_40 = (int)((uint)param_3 * 4) >> 4;
    iStack_3c = (int)(uVar4 << 2) >> 4;
    func_0x0525af30(&uStack_50,param_5,&iStack_40);
    plVar3 = plStack_48;
    if (CONCAT44(uStack_4c,uStack_50) != 0) {
      uStack_28 = func_0x0525a640(CONCAT44(uStack_4c,uStack_50),&uStack_10,&uStack_38);
      plVar3 = plStack_48;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
        return uStack_28;
      }
    }
  }
  else {
    uStack_50 = (uint)param_3 & 3;
    uStack_4c = uVar4 & 3;
    uStack_28 = func_0x0525a640(param_4,&uStack_50,&uStack_38);
  }
  return uStack_28;
}


