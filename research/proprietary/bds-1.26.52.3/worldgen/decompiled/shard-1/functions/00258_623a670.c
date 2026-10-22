/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x633a670 (ELF vaddr 0x623a670)
 * Label: callee-of:0x6146460
 * Body:  [[0633a670, 0633a725] [0633a730, 0633a76e] [0633a770, 0633a80a] [0633a810, 0633a8fa]]
 * Ghidra: FUN_0633a670
 */


void FUN_0633a670(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  long *plVar7;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_268;
  long *plStack_260;
  long lStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined1 auStack_238 [512];
  uint uStack_38;
  
  uStack_38 = 0;
  lStack_258 = 0;
  plStack_250 = (long *)0x0;
  plStack_248 = (long *)0x0;
  plStack_240 = (long *)0x0;
  cVar6 = func_0x0edf92e0(&lStack_258,param_1);
  plVar5 = plStack_240;
  lVar3 = lStack_258;
  if (cVar6 != '\0') {
    plVar2 = plStack_248;
    if (lStack_258 == 0) {
      for (; plVar2 != plVar5; plVar2 = plVar2 + 2) {
        if ((plVar2[1] != 0) &&
           (plVar7 = (long *)func_0x0412c300(), plStack_260 = plVar7, plVar7 != (long *)0x0)) {
          lVar3 = *plVar2;
          lStack_268 = lVar3;
          if (lVar3 != 0) {
            lStack_288 = 0;
            lStack_280 = 0;
            lStack_278 = 0;
            func_0x0633a970(&lStack_288,*param_2,param_2[1],
                            (param_2[1] - *param_2 >> 3) * -0x71c71c71c71c71c7);
            (**(code **)(*(long *)(lVar3 + 0x40) + 0x10))(lVar3 + 0x40,&lStack_288);
            lVar4 = lStack_288;
            lVar3 = lStack_280;
            if (lStack_288 != 0) {
              for (; lVar4 != lVar3; lVar3 = lVar3 + -0x48) {
                if ((*(byte *)(lVar3 + -0x38) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar3 + -0x28),
                                  *(ulong *)(lVar3 + -0x38) & 0xfffffffffffffffe);
                }
              }
              lStack_280 = lVar4;
              func_0x0412a280(lStack_288,lStack_278 - lStack_288);
            }
          }
          LOCK();
          plVar1 = plVar7 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            func_0x0412c2d0(plVar7);
          }
        }
      }
    }
    else {
      lStack_288 = 0;
      lStack_280 = 0;
      lStack_278 = 0;
      func_0x0633a970(&lStack_288,*param_2,param_2[1],
                      (param_2[1] - *param_2 >> 3) * -0x71c71c71c71c71c7);
      (**(code **)(*(long *)(lVar3 + 0x40) + 0x10))(lVar3 + 0x40,&lStack_288);
      lVar4 = lStack_288;
      lVar3 = lStack_280;
      if (lStack_288 != 0) {
        for (; lVar4 != lVar3; lVar3 = lVar3 + -0x48) {
          if ((*(byte *)(lVar3 + -0x38) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar3 + -0x28),
                            *(ulong *)(lVar3 + -0x38) & 0xfffffffffffffffe);
          }
        }
        lStack_280 = lVar4;
        func_0x0412a280(lStack_288,lStack_278 - lStack_288);
      }
    }
  }
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f024728 + (ulong)uStack_38 * 8))(&lStack_288,auStack_238);
  }
  plVar5 = plStack_250;
  uStack_38 = 0xffffffff;
  if (plStack_250 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_250 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      func_0x0412c2d0(plVar5);
    }
  }
  return;
}


