/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2eeb90 (ELF vaddr 0xd1eeb90)
 * Label: callee-of:0x517a850
 * Body:  [[0d2eeb90, 0d2eec73] [0d2eec80, 0d2eecae] [0d2eecb0, 0d2eee10] [0d2eee13, 0d2eeec0]]
 * Ghidra: FUN_0d2eeb90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2eeb90(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined2 *puVar12;
  int iStack_78;
  long *plStack_70;
  ulong uStack_50;
  
  *param_1 = &UNK_0f460460;
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  plVar1 = param_1 + 4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar8 = param_4 * param_4;
  plStack_70 = plVar1;
  if (lVar8 != 0) {
    if (lVar8 < 0) {
LAB_0d2eee0a:
      lVar3 = func_0x0b604460();
      lVar8 = *plVar1;
      if (lVar8 != 0) {
        param_1[5] = lVar8;
        param_2 = (long *)(param_1[6] - lVar8);
        func_0x0412a280();
      }
      _Unwind_Resume();
      uVar7 = (int)param_2 - *(int *)(lVar3 + 0x10);
      iVar2 = (int)*(long *)(lVar3 + 8);
      if ((int)uVar7 < iVar2) {
        uVar10 = (int)((ulong)param_2 >> 0x20) - *(int *)(lVar3 + 0x14);
        if (((int)uVar10 < iVar2) && ((CONCAT44(uVar10,uVar7) & 0x8000000080000000) == 0)) {
          uVar6 = (ulong)(uVar7 & 0x7fffffff) * *(long *)(lVar3 + 8) + (ulong)uVar10;
          if (uVar6 < (ulong)(*(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 1)) {
            return (long *)(ulong)(*(ushort *)(*(long *)(lVar3 + 0x20) + uVar6 * 2) | 0x10000);
          }
        }
      }
      uVar7 = (**(code **)(**(long **)(lVar3 + 0x18) + 0x10))();
      return (long *)(ulong)(uVar7 & 0xffffff);
    }
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8 * 2);
    if (lVar3 == 0) {
      FUN_0eec74c0(lVar8 * 2,0);
    }
    plStack_70 = (long *)(lVar3 + lVar8 * 2);
    param_1[4] = lVar3;
    param_1[5] = lVar3;
    param_1[6] = plStack_70;
  }
  iStack_78 = (int)param_4;
  if (0 < iStack_78) {
    plStack_70 = (long *)((ulong)param_2 >> 0x20);
    iVar2 = (int)((ulong)param_2 >> 0x20);
    uVar7 = iStack_78 + iVar2;
    if (iVar2 < (int)uVar7) {
      plStack_70._0_4_ = (int)param_2;
      iStack_78 = iStack_78 + (int)plStack_70;
      uStack_50 = 0x7fffffffffffffff;
      plStack_70 = param_2;
      do {
        uVar10 = *(uint *)((long)param_1 + 0x14);
        if ((int)uVar10 < (int)uVar7) {
          do {
            param_2 = (long *)(((ulong)uVar10 << 0x20) + ((ulong)plStack_70 & 0xffffffff));
            plVar4 = (long *)(**(code **)(*param_3 + 0x10))();
            if (((ulong)plVar4 & 0x10000) == 0) {
              return plVar4;
            }
            puVar12 = (undefined2 *)param_1[5];
            if ((undefined2 *)param_1[6] <= puVar12) {
              lVar8 = *plVar1;
              lVar3 = (long)puVar12 - lVar8;
              lVar11 = lVar3 >> 1;
              if (lVar11 < -1) {
                func_0x0b604460();
              }
              else {
                uVar9 = (long)param_1[6] - lVar8;
                uVar6 = lVar11 + 1U;
                if (lVar11 + 1U < uVar9) {
                  uVar6 = uVar9;
                }
                if (0x7ffffffffffffffd < uVar9) {
                  uVar6 = uStack_50;
                }
                if (-1 < (long)uVar6) {
                  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6 * 2);
                  if (lVar5 == 0) {
                    FUN_0eec74c0(uVar6 * 2,0);
                  }
                  *(short *)(lVar5 + lVar3) = (short)plVar4;
                  puVar12 = (undefined2 *)(lVar5 + lVar3 + 2);
                  lVar11 = lVar5 + lVar3 + lVar11 * -2;
                  func_0x0eee2f00(lVar11,lVar8,lVar3);
                  param_1[4] = lVar11;
                  param_1[5] = puVar12;
                  param_1[6] = lVar5 + uVar6 * 2;
                  if (lVar8 != 0) {
                    func_0x0412a280(lVar8,uVar9);
                  }
                  goto LAB_0d2eecbc;
                }
              }
              func_0x04882eb0();
              goto LAB_0d2eee0a;
            }
            *puVar12 = (short)plVar4;
            puVar12 = puVar12 + 1;
LAB_0d2eecbc:
            param_1[5] = puVar12;
            uVar10 = uVar10 + 1;
          } while (uVar7 != uVar10);
        }
        uVar10 = (int)plStack_70 + 1;
        plStack_70 = (long *)(ulong)uVar10;
      } while ((int)uVar10 < iStack_78);
    }
  }
  return plStack_70;
}


