/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52be680 (ELF vaddr 0x51be680)
 * Label: callee-of:0x517ab30
 * Body:  [[052be680, 052be760]]
 * Ghidra: FUN_052be680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_052be680(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_30;
  
  lVar3 = func_0x0eee1380(param_1 + 0x68);
  if (lVar3 == 0) {
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa2220);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0xa2220,0);
    }
    *plVar5 = (long)plVar5;
    plVar5[1] = (long)plVar5;
    plVar4 = plVar5 + 2;
    memset(plVar4,0,0xa2210);
    plVar1 = *(long **)(param_1 + 0x20);
    plStack_30 = plVar4;
    if (plVar1 == (long *)0x0) {
      plVar5 = (long *)FUN_04891200();
      return plVar5;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&plStack_30);
    func_0x0eee1580(param_1 + 0x68,plVar5);
    func_0x0412d680(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    plVar5[1] = (long)puVar2;
    *plVar5 = param_1 + 0x30;
    *puVar2 = plVar5;
    *(long **)(param_1 + 0x38) = plVar5;
    func_0x0412d6b0(param_1 + 0x40);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x10);
  }
  return plVar4;
}


