/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcafcfe0 (ELF vaddr 0xc9fcfe0)
 * Label: callee-of:0x517ab30
 * Body:  [[0cafcfe0, 0cafd035] [0cafd040, 0cafd0d8] [0cafd0e0, 0cafd2f1]]
 * Ghidra: FUN_0cafcfe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cafcfe0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (((ulong)*(ushort *)(param_1 + 0x2a8) != 0) &&
     ((ulong)*(ushort *)(param_1 + 0x2a8) <=
      (ulong)(*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3))) {
    uVar11 = 0;
    do {
      plVar5 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x200) + uVar11 * 8) + 0x58))();
      auVar19 = (**(code **)(*plVar5 + 0xb0))(plVar5);
      plVar5 = auVar19._8_8_;
      if (auVar19._0_8_ != 0) {
        plVar1 = plVar5 + auVar19._0_8_;
        plVar6 = (long *)*param_2;
        uVar4 = *(uint *)(param_2 + 1);
        do {
          uVar18 = (ulong)uVar4;
          plVar17 = plVar6 + uVar18;
          plVar12 = plVar6;
          if (uVar4 != 0) {
            lVar2 = *plVar5;
            lVar14 = uVar18 * 8;
            do {
              if (*plVar12 == lVar2) goto LAB_0cafd0e0;
              plVar12 = plVar12 + 1;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
joined_r0x0cafd0d2:
            if (lVar2 != 0) {
              if (uVar4 == *(uint *)((long)param_2 + 0xc)) {
                if (uVar4 == 0xffffffff) goto LAB_0cafd2a4;
                uVar15 = (ulong)((float)uVar18 * _DAT_0119858c);
                uVar16 = uVar15 & 0xffffffff;
                if ((uint)uVar15 < uVar4 + 1) {
                  uVar16 = (ulong)(uVar4 + 1);
                }
                uVar10 = (uint)(long)((float)uVar18 / _DAT_0119858c);
                if (CARRY4(uVar10,uVar4)) {
                  uVar16 = 0xffffffff;
                }
                plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                           (&DAT_0f5463b0,uVar16 << 3,plVar5,uVar10 + uVar4);
                if (plVar6 == (long *)0x0) {
                  FUN_0eec74c0(uVar16 << 3,0);
                }
                plVar6[uVar18] = lVar2;
                plVar12 = (long *)*param_2;
                uVar10 = *(uint *)(param_2 + 1);
                plVar7 = plVar12;
                plVar13 = plVar6;
                if (plVar17 == plVar12 + uVar10) {
                  plVar7 = plVar6;
                  plVar13 = plVar12;
                  if (uVar10 != 0) {
                    do {
                      lVar14 = *plVar13;
                      *plVar7 = lVar14;
                      if (lVar14 == 0) goto LAB_0cafd29f;
                      plVar13 = plVar13 + 1;
                      plVar7 = plVar7 + 1;
                    } while (plVar13 != plVar17);
                  }
                }
                else {
                  for (; plVar7 != plVar17; plVar7 = plVar7 + 1) {
                    lVar14 = *plVar7;
                    *plVar13 = lVar14;
                    if (lVar14 == 0) goto LAB_0cafd29f;
                    plVar13 = plVar13 + 1;
                  }
                  plVar7 = plVar6 + uVar18;
                  do {
                    plVar7 = plVar7 + 1;
                    lVar14 = *plVar17;
                    *plVar7 = lVar14;
                    if (lVar14 == 0) goto LAB_0cafd29f;
                    plVar17 = plVar17 + 1;
                  } while (plVar17 != plVar12 + uVar10);
                }
                if (plVar12 != (long *)0x0 && param_2 + 2 != plVar12) {
                  (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
                }
                *param_2 = plVar6;
                *(int *)((long)param_2 + 0xc) = (int)uVar16;
              }
              else {
                *plVar17 = lVar2;
              }
              uVar4 = uVar4 + 1;
              *(uint *)(param_2 + 1) = uVar4;
              goto LAB_0cafd107;
            }
LAB_0cafd29f:
            func_0x04890760();
LAB_0cafd2a4:
            uVar8 = func_0x041086b0(0x10);
            func_0x04882e90(uVar8,&UNK_011ed0d9);
            uVar9 = func_0x041088a0(uVar8,&UNK_0eeec938,&LAB_0412bce0);
            uVar9 = func_0x04882e20(uVar9);
            func_0x04108780(uVar8);
            func_0x0eee2d70(uVar9);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
LAB_0cafd0e0:
          if (plVar12 == plVar17) {
            lVar2 = *plVar5;
            goto joined_r0x0cafd0d2;
          }
LAB_0cafd107:
          if (plVar5 == plVar1) goto LAB_0cafd29f;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ushort *)(param_1 + 0x2a8));
  }
  return;
}


