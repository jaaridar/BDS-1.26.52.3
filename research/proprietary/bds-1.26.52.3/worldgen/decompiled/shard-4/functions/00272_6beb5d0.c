/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6ceb5d0 (ELF vaddr 0x6beb5d0)
 * Label: callee-of:0xc961580
 * Body:  [[06ceb5d0, 06ceb921]]
 * Ghidra: FUN_06ceb5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_06ceb5d0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lStack_40;
  long *plStack_38;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    param_1[1] = lVar8;
    func_0x0412a280(lVar8,param_1[2] - lVar8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (lVar8 != 0) {
    uVar2 = *(ulong *)(lVar8 + 0x18);
    puVar17 = (undefined4 *)*param_1;
    lVar25 = param_1[2];
    if ((ulong)(lVar25 - (long)puVar17 >> 4) < uVar2) {
      if (0xfffffffffffffff < uVar2) {
LAB_06ceb905:
        uVar13 = func_0x06cf5df0();
        func_0x06ceb930(&lStack_40);
        _Unwind_Resume(uVar13);
        pcVar4 = (code *)swi(3);
        plVar11 = (long *)(*pcVar4)();
        return plVar11;
      }
      puVar12 = (undefined4 *)param_1[1];
      lVar23 = (long)puVar12 - (long)puVar17;
      lVar20 = uVar2 * 0x10;
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
      if (lVar9 == 0) {
        func_0x0eec74c0(lVar20,0);
      }
      lVar24 = lVar23 + lVar9;
      puVar10 = (undefined4 *)(lVar24 + (lVar23 >> 4) * -0x10);
      puVar16 = puVar10;
      for (puVar14 = puVar17; puVar14 != puVar12; puVar14 = puVar14 + 4) {
        uVar5 = puVar14[1];
        uVar6 = puVar14[2];
        uVar7 = puVar14[3];
        *puVar16 = *puVar14;
        puVar16[1] = uVar5;
        puVar16[2] = uVar6;
        puVar16[3] = uVar7;
        puVar16 = puVar16 + 4;
      }
      *param_1 = (long)puVar10;
      param_1[1] = lVar24;
      param_1[2] = lVar20 + lVar9;
      if (puVar17 != (undefined4 *)0x0) {
        func_0x0412a280(puVar17,lVar25 - (long)puVar17);
      }
    }
    for (puVar22 = *(undefined8 **)(lVar8 + 0x10); puVar22 != (undefined8 *)0x0;
        puVar22 = (undefined8 *)*puVar22) {
      if ((puVar22[4] != 0) && (plVar11 = (long *)FUN_0412c300(), plVar11 != (long *)0x0)) {
        lVar8 = puVar22[3];
        lStack_40 = lVar8;
        plStack_38 = plVar11;
        if (lVar8 != 0) {
          puVar19 = (undefined8 *)param_1[1];
          if ((undefined8 *)param_1[2] <= puVar19) {
            puVar3 = (undefined8 *)*param_1;
            lVar25 = (long)puVar19 - (long)puVar3;
            uVar2 = (lVar25 >> 4) + 1;
            if (uVar2 < 0x1000000000000000) {
              uVar18 = param_1[2] - (long)puVar3;
              uVar21 = (long)uVar18 >> 3;
              if ((ulong)((long)uVar18 >> 3) <= uVar2) {
                uVar21 = uVar2;
              }
              if (0x7fffffffffffffef < uVar18) {
                uVar21 = 0xfffffffffffffff;
              }
              if (uVar21 < 0x1000000000000000) {
                lVar20 = uVar21 * 0x10;
                lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
                if (lVar9 == 0) {
                  func_0x0eec74c0(lVar20,0);
                }
                *(undefined8 *)(lVar9 + lVar25) = 0;
                *(undefined2 *)(lVar9 + 8 + lVar25) = 0xffff;
                puVar12 = (undefined4 *)(lVar25 + lVar9 + (lVar25 >> 4) * -0x10);
                puVar17 = puVar12;
                for (puVar15 = puVar3; puVar15 != puVar19; puVar15 = puVar15 + 2) {
                  uVar5 = *(undefined4 *)((long)puVar15 + 4);
                  uVar6 = *(undefined4 *)(puVar15 + 1);
                  uVar7 = *(undefined4 *)((long)puVar15 + 0xc);
                  *puVar17 = *(undefined4 *)puVar15;
                  puVar17[1] = uVar5;
                  puVar17[2] = uVar6;
                  puVar17[3] = uVar7;
                  puVar17 = puVar17 + 4;
                }
                puVar19 = (undefined8 *)(lVar25 + lVar9 + 0x10);
                *param_1 = (long)puVar12;
                param_1[1] = (long)puVar19;
                param_1[2] = lVar20 + lVar9;
                if (puVar3 != (undefined8 *)0x0) {
                  func_0x0412a280(puVar3,uVar18);
                }
                goto LAB_06ceb865;
              }
              func_0x04882eb0();
            }
            func_0x06cf5df0();
            goto LAB_06ceb905;
          }
          *puVar19 = 0;
          *(undefined2 *)(puVar19 + 1) = 0xffff;
          puVar19 = puVar19 + 2;
LAB_06ceb865:
          param_1[1] = (long)puVar19;
          puVar19[-2] = puVar22[2];
          *(undefined2 *)(puVar19 + -1) = 0xffff;
          *(undefined1 *)(puVar19 + -1) = *(undefined1 *)(lVar8 + 0xb8);
          *(undefined1 *)((long)puVar19 + -7) = *(undefined1 *)(lVar8 + 0xbb);
        }
        LOCK();
        plVar1 = plVar11 + 1;
        lVar8 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          func_0x0412c2d0(plVar11);
        }
      }
    }
  }
  return param_1;
}


