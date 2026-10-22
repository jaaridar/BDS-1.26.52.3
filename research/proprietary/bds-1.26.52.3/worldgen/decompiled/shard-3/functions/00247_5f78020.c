/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6078020 (ELF vaddr 0x5f78020)
 * Label: callee-of:0x61407e0
 * Body:  [[06078020, 06078127]]
 * Ghidra: FUN_06078020
 */


long * FUN_06078020(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  plVar4 = param_2;
  plVar3 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar6 = (long *)plVar4[2];
      bVar7 = plVar4 != (long *)*plVar6;
      plVar4 = plVar6;
    } while (bVar7);
  }
  else {
    do {
      plVar6 = plVar3;
      plVar3 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar6;
  }
  param_1[2] = param_1[2] + -1;
  func_0x05fb1340(param_1[1],param_2);
  lVar1 = param_2[5];
  param_2[5] = 0;
  if (lVar1 == 0) goto LAB_0607810c;
  plVar4 = *(long **)(lVar1 + 0x78);
  if (plVar4 == (long *)0x0) {
LAB_060780a5:
    plVar4 = *(long **)(lVar1 + 0x60);
    if (plVar4 != (long *)(lVar1 + 0x40)) goto LAB_060780b2;
LAB_060780e6:
    lVar5 = 0x20;
LAB_060780eb:
    (**(code **)(*plVar4 + lVar5))();
    pcVar2 = *(code **)(lVar1 + 0x18);
  }
  else {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar5 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar5 != 0) goto LAB_060780a5;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
    plVar4 = *(long **)(lVar1 + 0x60);
    if (plVar4 == (long *)(lVar1 + 0x40)) goto LAB_060780e6;
LAB_060780b2:
    lVar5 = 0x28;
    if (plVar4 != (long *)0x0) goto LAB_060780eb;
    pcVar2 = *(code **)(lVar1 + 0x18);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(lVar1);
  }
  func_0x0412a280(lVar1,0x80);
LAB_0607810c:
  func_0x0412a280(param_2,0x30);
  return plVar6;
}


