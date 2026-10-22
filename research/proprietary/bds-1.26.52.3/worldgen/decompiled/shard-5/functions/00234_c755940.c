/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc855940 (ELF vaddr 0xc755940)
 * Label: callee-of:0x517a720
 * Body:  [[0c855940, 0c855b0b]]
 * Ghidra: FUN_0c855940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c855940(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined4 uVar7;
  long lVar8;
  bool bVar9;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  lVar6 = param_4;
  lVar8 = param_6;
  if (DAT_0f557490 == '\0') goto LAB_0c855a9a;
  do {
    psVar2 = (short *)param_1[0x2e];
    while( true ) {
      if (psVar2 == (short *)param_1[0x2f]) {
        return;
      }
      if (*psVar2 == _DAT_0f557488) break;
      psVar2 = psVar2 + 8;
    }
    lVar5 = *(long *)(psVar2 + 4);
    if (lVar5 == 0) {
      return;
    }
    param_1 = *(long **)(*(long *)(param_2 + 0x30) + 0xa0);
    uStack_38 = param_5;
    lVar3 = (**(code **)(*param_1 + 0x568))(param_1);
    if (*(char *)(lVar3 + 0x55c) == '\x01') {
      uVar7 = *(undefined4 *)(lVar3 + 0x558);
    }
    else {
      param_2 = 0xf71d720;
      lVar4 = func_0x0d2279e0(lVar3 + 0x518);
      if (lVar4 == 0) {
        param_2 = 0xf71d720;
        lVar4 = func_0x0d2279e0(lVar3 + 0x4f0);
        if (lVar4 == 0) {
          uVar7 = 1;
          goto LAB_0c855a22;
        }
      }
      uVar7 = 1;
      if (*(int *)(lVar4 + 0x50) == 4) {
        uVar7 = *(undefined4 *)(lVar4 + 0x38);
      }
    }
LAB_0c855a22:
    uStack_3c = (**(code **)(*param_1 + 0x438))();
    param_6 = *(long *)(lVar5 + 8);
    param_4 = *(long *)(lVar5 + 0x10);
    lVar5 = param_4 - param_6;
    if ((lVar5 != -0x138) &&
       (bVar9 = param_4 == 0, param_4 = CONCAT71((int7)((ulong)param_4 >> 8),bVar9 || param_6 != 0),
       bVar9 || param_6 != 0)) {
      func_0x0c855200(uVar7,&uStack_3c,param_3,lVar6,(lVar5 >> 3) * 0x6f96f96f96f96f97,param_6,
                      uStack_38,lVar8);
      return;
    }
    func_0x04890760();
    param_3 = extraout_RDX;
LAB_0c855a9a:
    iVar1 = FUN_04108328(&DAT_0f557490);
    lVar6 = param_4;
    lVar8 = param_6;
    if (iVar1 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f557488 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f557490);
    }
  } while( true );
}


