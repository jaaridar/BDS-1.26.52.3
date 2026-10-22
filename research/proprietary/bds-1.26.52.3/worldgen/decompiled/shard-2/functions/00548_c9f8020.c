/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcaf8020 (ELF vaddr 0xc9f8020)
 * Label: callee-of:0x517ab30
 * Body:  [[0caf8020, 0caf80d6] [0caf80e0, 0caf816a] [0caf8170, 0caf81d9] [0caf81e0, 0caf825e] [0caf8260, 0caf82dd] [0caf82e0, 0caf833d] [0caf8340, 0caf8387] [0caf8390, 0caf83bd] [0caf83c0, 0caf83f1] [0caf8400, 0caf842c]]
 * Ghidra: FUN_0caf8020
 */


void FUN_0caf8020(long param_1,ushort *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort *extraout_RDX;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(char *)(param_1 + 0x110b) == '\x01') {
    uVar11 = (ulong)*(ushort *)(param_1 + 0x3c8);
    if (uVar11 != 0) {
      uVar7 = (ulong)(short)((uint)(int)(short)param_2[1] >> 4);
      if (uVar7 < uVar11) {
        plVar1 = *(long **)(*(long *)(param_1 + 800) + uVar7 * 8);
                    /* WARNING: Could not recover jumptable at 0x0caf808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x20))
                  (plVar1,((uint)(byte)*param_2 << 8 | (int)(short)param_2[1] & 0xfU) +
                          (uint)*(byte *)((long)param_2 + 1) * 0x10 & 0xffff);
        return;
      }
      iVar4 = (uint)*param_2 * 0x100 + (*param_2 >> 4 | 0xf);
      plVar1 = *(long **)(*(long *)(param_1 + 800) + -8 + uVar11 * 8);
                    /* WARNING: Could not recover jumptable at 0x0caf823b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1,(short)iVar4,*(long *)(param_1 + 800),iVar4);
      return;
    }
    lVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    puVar6 = *(ushort **)(param_1 + 0x30);
    uVar2 = (**(code **)(*(long *)puVar6 + 0xd0))();
    puVar8 = *(ushort **)(lVar3 + 0x380);
    puVar5 = *(ushort **)(lVar3 + 0x388);
    puVar9 = param_2;
    uVar11 = 0;
    if ((long)puVar5 - (long)puVar8 != 0) {
      puVar9 = puVar5;
      uVar7 = (long)puVar5 - (long)puVar8 >> 3;
      do {
        while( true ) {
          uVar10 = uVar7 >> 1;
          puVar6 = puVar8 + uVar10 * 4;
          if (*(ushort *)(*(long *)(puVar8 + uVar10 * 4) + 0x168) < uVar2) break;
          if (*(ushort *)(*(long *)(puVar8 + uVar10 * 4) + 0x168) <= uVar2) {
            uVar11 = 1;
            if (uVar7 != 1) {
              do {
                uVar7 = uVar10 >> 1;
                if (*(ushort *)(*(long *)(puVar8 + uVar7 * 4) + 0x168) < uVar2) {
                  puVar8 = puVar8 + uVar7 * 4 + 4;
                  uVar7 = ~uVar7 + uVar10;
                }
                uVar11 = 0;
                uVar10 = uVar7;
              } while (uVar7 != 0);
            }
            puVar6 = puVar6 + 4;
            lVar3 = (long)puVar9 - (long)puVar6;
            if (lVar3 == 0) goto LAB_0caf8369;
            puVar9 = puVar6;
            uVar7 = lVar3 >> 3;
            do {
              uVar10 = uVar7 >> 1;
              uVar11 = *(ulong *)(puVar9 + uVar10 * 4);
              if (*(ushort *)(uVar11 + 0x168) <= uVar2) {
                puVar9 = puVar9 + uVar10 * 4 + 4;
                uVar10 = ~uVar10 + uVar7;
              }
              puVar6 = (ushort *)0x0;
              uVar7 = uVar10;
              if (uVar10 == 0) goto LAB_0caf8369;
            } while( true );
          }
          puVar9 = puVar6;
          uVar7 = uVar10;
          if (uVar10 == 0) {
            param_5 = 0;
            uVar11 = 0;
            goto LAB_0caf831b;
          }
        }
        puVar8 = puVar6 + 4;
        uVar7 = ~uVar10 + uVar7;
        param_5 = 0;
        puVar6 = puVar8;
        uVar11 = 0;
      } while (uVar7 != 0);
    }
  }
  else {
    puVar9 = param_2;
    lVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    puVar6 = *(ushort **)(lVar3 + 0x380);
    puVar8 = *(ushort **)(lVar3 + 0x388);
    if ((long)puVar8 - (long)puVar6 != 0) {
      uVar2 = *(ushort *)
               (param_1 + 0x120 +
               (ulong)(byte)(*(byte *)((long)param_2 + 1) * '\x10' + (byte)*param_2) * 2);
      puVar9 = puVar8;
      uVar11 = (long)puVar8 - (long)puVar6 >> 3;
LAB_0caf80f9:
      do {
        uVar7 = uVar11 >> 1;
        puVar5 = puVar6 + uVar7 * 4;
        if (*(ushort *)(*(long *)(puVar6 + uVar7 * 4) + 0x168) < uVar2) goto LAB_0caf80e0;
        if (*(ushort *)(*(long *)(puVar6 + uVar7 * 4) + 0x168) <= uVar2) {
          if (uVar11 != 1) {
            do {
              uVar11 = uVar7 >> 1;
              if (*(ushort *)(*(long *)(puVar6 + uVar11 * 4) + 0x168) < uVar2) {
                puVar6 = puVar6 + uVar11 * 4 + 4;
                uVar11 = ~uVar11 + uVar7;
              }
              uVar7 = uVar11;
            } while (uVar11 != 0);
          }
          lVar3 = (long)puVar9 - (long)(puVar5 + 4);
          if (lVar3 != 0) {
            puVar9 = puVar5 + 4;
            uVar11 = lVar3 >> 3;
            do {
              uVar7 = uVar11 >> 1;
              if (*(ushort *)(*(long *)(puVar9 + uVar7 * 4) + 0x168) <= uVar2) {
                puVar9 = puVar9 + uVar7 * 4 + 4;
                uVar7 = ~uVar7 + uVar11;
              }
              uVar11 = uVar7;
            } while (uVar7 != 0);
          }
          param_5 = 0;
          if (((puVar6 != puVar9) && (puVar6 != puVar8)) && (*(long *)puVar6 != 0)) {
            return;
          }
          goto LAB_0caf829f;
        }
        puVar9 = puVar5;
        uVar11 = uVar7;
      } while (uVar7 != 0);
      param_5 = 0;
    }
LAB_0caf829f:
    lVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x2b0))();
    puVar6 = *(ushort **)(param_1 + 0x30);
    uVar2 = (**(code **)(*(long *)puVar6 + 0xd0))();
    puVar8 = *(ushort **)(lVar3 + 0x380);
    puVar5 = *(ushort **)(lVar3 + 0x388);
    uVar11 = 0;
    if ((long)puVar5 - (long)puVar8 != 0) {
      puVar9 = puVar5;
      uVar11 = (long)puVar5 - (long)puVar8 >> 3;
      do {
        while( true ) {
          param_5 = uVar11 >> 1;
          puVar6 = puVar8 + param_5 * 4;
          if (*(ushort *)(*(long *)(puVar8 + param_5 * 4) + 0x168) < uVar2) break;
          if (*(ushort *)(*(long *)(puVar8 + param_5 * 4) + 0x168) <= uVar2) goto LAB_0caf8320;
          puVar9 = puVar6;
          uVar11 = param_5;
          if (param_5 == 0) goto LAB_0caf831b;
        }
        puVar8 = puVar6 + 4;
        uVar11 = ~param_5 + uVar11;
        param_5 = 0;
        puVar6 = puVar8;
      } while (uVar11 != 0);
    }
  }
LAB_0caf831b:
  do {
    uVar2 = func_0x04890760();
    puVar8 = extraout_RDX;
LAB_0caf8320:
    if (uVar11 != 1) {
      do {
        uVar7 = param_5 >> 1;
        if (*(ushort *)(*(long *)(puVar8 + uVar7 * 4) + 0x168) < uVar2) {
          puVar8 = puVar8 + uVar7 * 4 + 4;
          uVar7 = ~uVar7 + param_5;
        }
        uVar11 = 0;
        param_5 = uVar7;
      } while (uVar7 != 0);
    }
    puVar6 = puVar6 + 4;
    lVar3 = (long)puVar9 - (long)puVar6;
    if (lVar3 != 0) {
      puVar9 = puVar6;
      uVar7 = lVar3 >> 3;
      do {
        uVar10 = uVar7 >> 1;
        uVar11 = *(ulong *)(puVar9 + uVar10 * 4);
        if (*(ushort *)(uVar11 + 0x168) <= uVar2) {
          puVar9 = puVar9 + uVar10 * 4 + 4;
          uVar10 = ~uVar10 + uVar7;
        }
        puVar6 = (ushort *)0x0;
        uVar7 = uVar10;
      } while (uVar10 != 0);
    }
LAB_0caf8369:
    param_5 = 0;
  } while (((puVar8 == puVar9) || (puVar8 == puVar5)) || (*(long *)puVar8 == 0));
  return;
LAB_0caf80e0:
  puVar6 = puVar5 + 4;
  uVar11 = ~uVar7 + uVar11;
  param_5 = 0;
  if (uVar11 == 0) goto LAB_0caf829f;
  goto LAB_0caf80f9;
}


