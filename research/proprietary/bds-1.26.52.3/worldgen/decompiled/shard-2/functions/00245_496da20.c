/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a6da20 (ELF vaddr 0x496da20)
 * Label: callee-of:0x52518f0
 * Body:  [[04a6da20, 04a6db6e]]
 * Ghidra: FUN_04a6da20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_04a6da20(undefined8 *param_1)

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
  
  if (DAT_0f556728 == '\0') goto LAB_04a6db36;
  while( true ) {
    sVar2 = _DAT_0f556720;
    sStack_22 = _DAT_0f556720;
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar4 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    puVar5 = &UNK_0ef54578;
    *plVar4 = (long)&UNK_0ef54578;
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
        uVar6 = func_0x04a6dc10(param_1,&sStack_22,&plStack_20);
        param_1[1] = uVar6;
        if (plStack_20 == (long *)0x0) {
          return plVar4;
        }
        puVar5 = (undefined *)*plStack_20;
        plVar8 = plVar4;
        plVar4 = plStack_20;
        goto LAB_04a6db0b;
      }
      if (*psVar7 == sVar2) break;
      psVar7 = psVar7 + 8;
    }
    plVar8 = *(long **)(psVar7 + 4);
    if (plVar8 != (long *)0x0) break;
    FUN_04890760();
    param_1 = (undefined8 *)0x0;
LAB_04a6db36:
    iVar3 = func_0x04108328(&DAT_0f556728);
    if (iVar3 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f556720 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f556728);
    }
  }
LAB_04a6db0b:
  plStack_20 = (long *)0x0;
  (**(code **)(puVar5 + 8))(plVar4);
  return plVar8;
}


