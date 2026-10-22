/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8550b0 (ELF vaddr 0xc7550b0)
 * Label: callee-of:0x517e8e0
 * Body:  [[0c8550b0, 0c8551fe]]
 * Ghidra: FUN_0c8550b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8550b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 long *param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  
  if (param_4 != 0) {
    plVar1 = param_5 + param_4;
    do {
      lVar6 = *param_5;
      if ((DAT_0f557490 == '\0') && (iVar4 = func_0x04108328(&DAT_0f557490), iVar4 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f557488 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f557490);
      }
      for (psVar5 = *(short **)(lVar6 + 0x170); psVar5 != *(short **)(lVar6 + 0x178);
          psVar5 = psVar5 + 8) {
        if (*psVar5 == _DAT_0f557488) {
          lVar6 = *(long *)(psVar5 + 4);
          if (lVar6 != 0) {
            lVar2 = *(long *)(lVar6 + 8);
            lVar7 = *(long *)(lVar6 + 0x10) - lVar2;
            if ((lVar7 == -0x138) || (*(long *)(lVar6 + 0x10) != 0 && lVar2 == 0)) {
              FUN_04890760();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (param_4 == 1) {
              lVar6 = 0;
            }
            else {
              lVar6 = *param_5;
            }
            func_0x0c8544e0(param_1,param_2,param_3,(lVar7 >> 3) * 0x6f96f96f96f96f97,lVar2,param_6,
                            lVar6,param_7);
          }
          break;
        }
      }
      param_5 = param_5 + 1;
    } while (param_5 != plVar1);
  }
  return;
}


