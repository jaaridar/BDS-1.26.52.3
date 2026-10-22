/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcafca30 (ELF vaddr 0xc9fca30)
 * Label: callee-of:0x517cd10
 * Body:  [[0cafca30, 0cafca59] [0cafca60, 0cafcafc] [0cafcb00, 0cafcb2c] [0cafcb30, 0cafcb34] [0cafcb40, 0cafcb99]]
 * Ghidra: FUN_0cafca30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0cafca30(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  func_0x0c920e60(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1c0),param_1,param_2,param_1 + 0x50)
  ;
  for (puVar8 = *(undefined8 **)(param_1 + 0xff0); puVar8 != (undefined8 *)0x0;
      puVar8 = (undefined8 *)*puVar8) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    uVar1 = *(ushort *)(puVar8 + 2);
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
    *(char *)((long)puVar8 + 0x12) = (char)(int)(*(float *)(*plVar5 + 0x20) * _DAT_01198494);
  }
  uVar6 = 0;
  if (*(char *)(param_1 + 0xb8) == '\v') {
    uVar6 = (ulong)*(uint *)(param_1 + 0x1160);
    if ((int)*(uint *)(param_1 + 0x1160) < 0) {
      *(undefined4 *)(param_1 + 0x1160) = 0;
      uVar6 = 0;
    }
    *(int *)(param_1 + 0x1164) = (int)uVar6;
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}


