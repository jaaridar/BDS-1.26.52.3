/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcafcba0 (ELF vaddr 0xc9fcba0)
 * Label: callee-of:0x517cd10
 * Body:  [[0cafcba0, 0cafcbc0] [0cafcbd0, 0cafcc2c] [0cafcc30, 0cafcc7c] [0cafcc80, 0cafccac] [0cafccb0, 0cafccb4] [0cafccc0, 0cafccf1]]
 * Ghidra: FUN_0cafcba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0cafcba0(long param_1)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong unaff_RBP;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  if (*(char *)(*(long *)(param_1 + 0x30) + 0xe0) == '\x01') {
    plVar8 = (long *)(param_1 + 0xff0);
    do {
      plVar8 = (long *)*plVar8;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),plVar8 != (long *)0x0);
      if (plVar8 == (long *)0x0) break;
      lVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
      uVar1 = *(ushort *)(plVar8 + 2);
      plVar5 = *(long **)(lVar2 + 0x380);
      plVar4 = *(long **)(lVar2 + 0x388);
      uVar6 = (long)*(long **)(lVar2 + 0x388) - (long)plVar5 >> 3;
      do {
        while( true ) {
          uVar7 = uVar6;
          plVar3 = plVar4;
          uVar6 = uVar7 >> 1;
          plVar4 = plVar5 + uVar6;
          if (uVar1 <= *(ushort *)(plVar5[uVar6] + 0x168)) break;
          plVar5 = plVar4 + 1;
          plVar4 = plVar3;
          uVar6 = ~uVar6 + uVar7;
        }
      } while (*(ushort *)(plVar5[uVar6] + 0x168) != uVar1);
      if (uVar7 != 1) {
        do {
          uVar7 = uVar6 >> 1;
          if (*(ushort *)(plVar5[uVar7] + 0x168) < uVar1) {
            plVar5 = plVar5 + uVar7 + 1;
            uVar7 = ~uVar7 + uVar6;
          }
          uVar6 = uVar7;
        } while (uVar7 != 0);
      }
      plVar4 = plVar4 + 1;
      lVar2 = (long)plVar3 - (long)plVar4;
      if (lVar2 != 0) {
        uVar6 = lVar2 >> 3;
        do {
          uVar7 = uVar6 >> 1;
          if (*(ushort *)(plVar4[uVar7] + 0x168) <= uVar1) {
            plVar4 = plVar4 + uVar7 + 1;
            uVar7 = ~uVar7 + uVar6;
          }
          uVar6 = uVar7;
        } while (uVar7 != 0);
      }
    } while ((int)(*(float *)(*plVar5 + 0x20) * _DAT_01198494) ==
             (uint)*(byte *)((long)plVar8 + 0x12));
  }
  else {
    unaff_RBP = 0;
  }
  return unaff_RBP & 0xffffffff;
}


