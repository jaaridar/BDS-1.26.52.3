/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5345130 (ELF vaddr 0x5245130)
 * Label: callee-of:0x52518f0
 * Body:  [[05345130, 0534527e]]
 * Ghidra: FUN_05345130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05345130(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  short *psVar7;
  long *plVar8;
  short sStack_22;
  long *plStack_20;
  
  if (DAT_0f557408 == '\0') goto LAB_05345246;
  while( true ) {
    sVar2 = _DAT_0f557400;
    sStack_22 = _DAT_0f557400;
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar5 = &UNK_0efa5448;
    *plVar4 = (long)&UNK_0efa5448;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    psVar7 = (short *)*param_1;
    psVar1 = (short *)param_1[1];
    while( true ) {
      plStack_20 = plVar4;
      if (psVar7 == psVar1) {
        if (psVar1 < (short *)param_1[2]) {
          *psVar1 = sVar2;
          *(long **)(psVar1 + 4) = plVar4;
          param_1[1] = psVar1 + 8;
          return plVar4;
        }
        uVar6 = func_0x05345320(param_1,&sStack_22,&plStack_20);
        param_1[1] = uVar6;
        if (plStack_20 == (long *)0x0) {
          return plVar4;
        }
        puVar5 = (undefined *)*plStack_20;
        plVar8 = plVar4;
        plVar4 = plStack_20;
        goto LAB_0534521b;
      }
      if (*psVar7 == sVar2) break;
      psVar7 = psVar7 + 8;
    }
    plVar8 = *(long **)(psVar7 + 4);
    if (plVar8 != (long *)0x0) break;
    func_0x04890760();
    param_1 = (undefined8 *)0x0;
LAB_05345246:
    iVar3 = FUN_04108328(&DAT_0f557408);
    if (iVar3 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f557400 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f557408);
    }
  }
LAB_0534521b:
  plStack_20 = (long *)0x0;
  (**(code **)(puVar5 + 8))(plVar4);
  return plVar8;
}


