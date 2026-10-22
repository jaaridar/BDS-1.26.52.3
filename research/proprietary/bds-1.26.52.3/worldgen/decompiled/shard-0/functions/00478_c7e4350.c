/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8e4350 (ELF vaddr 0xc7e4350)
 * Label: callee-of:0xc7e3540
 * Body:  [[0c8e4350, 0c8e4582] [0c8e4590, 0c8e471a]]
 * Ghidra: FUN_0c8e4350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8e4350(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  
  plVar13 = (long *)param_1[1];
  if (plVar13 < (long *)param_1[2]) {
    lVar16 = *param_2;
    *plVar13 = lVar16;
    lVar11 = param_2[1];
    plVar13[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
      UNLOCK();
      lVar16 = *plVar13;
    }
    if (lVar16 != 0) {
      plVar13[2] = 0;
      uVar7 = *(undefined4 *)((long)param_2 + 0x24);
      lVar16 = param_2[5];
      uVar8 = *(undefined4 *)((long)param_2 + 0x2c);
      pcVar3 = (code *)param_2[4];
      *(int *)(plVar13 + 4) = (int)param_2[4];
      *(undefined4 *)((long)plVar13 + 0x24) = uVar7;
      *(int *)(plVar13 + 5) = (int)lVar16;
      *(undefined4 *)((long)plVar13 + 0x2c) = uVar8;
      *(int *)(plVar13 + 6) = (int)param_2[6];
      cVar2 = *(char *)((long)param_2 + 0x34);
      *(char *)((long)plVar13 + 0x34) = cVar2;
      if (cVar2 != '\0') {
        if (cVar2 == '\x02') {
          (*pcVar3)(5);
        }
        else {
          lVar16 = param_2[2];
          param_2[2] = 0;
          plVar13[2] = lVar16;
        }
      }
      lVar16 = param_2[8];
      param_2[8] = 0;
      plVar13[7] = param_2[7];
      plVar13[8] = lVar16;
      lVar16 = param_2[9];
      param_2[9] = 0;
      plVar13[9] = lVar16;
      plVar13 = plVar13 + 10;
      goto LAB_0c8e46d8;
    }
LAB_0c8e46eb:
    FUN_04890760();
  }
  else {
    lVar16 = (long)plVar13 - *param_1;
    uVar14 = (lVar16 >> 4) * -0x3333333333333333 + 1;
    if (uVar14 < 0x333333333333334) {
      lVar11 = param_1[2] - *param_1 >> 4;
      uVar6 = lVar11 * -0x6666666666666666;
      if (uVar14 < uVar6) {
        uVar14 = uVar6;
      }
      if (0x199999999999998 < (ulong)(lVar11 * -0x3333333333333333)) {
        uVar14 = 0x333333333333333;
      }
      if (uVar14 == 0) {
LAB_0c8e447c:
        lVar11 = 0;
      }
      else {
        if (0x333333333333333 < uVar14) goto LAB_0c8e46f5;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x50);
        if (lVar11 == 0) {
          func_0x0eec74c0(uVar14 * 0x50,0);
          goto LAB_0c8e447c;
        }
      }
      plVar13 = (long *)(lVar11 + lVar16);
      lVar9 = *param_2;
      *(long *)(lVar11 + lVar16) = lVar9;
      lVar4 = param_2[1];
      *(long *)(lVar11 + 8 + lVar16) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
        UNLOCK();
        lVar9 = *plVar13;
      }
      if (lVar9 != 0) {
        plVar13[2] = 0;
        uVar7 = *(undefined4 *)((long)param_2 + 0x24);
        lVar16 = param_2[5];
        uVar8 = *(undefined4 *)((long)param_2 + 0x2c);
        pcVar3 = (code *)param_2[4];
        *(int *)(plVar13 + 4) = (int)param_2[4];
        *(undefined4 *)((long)plVar13 + 0x24) = uVar7;
        *(int *)(plVar13 + 5) = (int)lVar16;
        *(undefined4 *)((long)plVar13 + 0x2c) = uVar8;
        *(int *)(plVar13 + 6) = (int)param_2[6];
        cVar2 = *(char *)((long)param_2 + 0x34);
        *(char *)((long)plVar13 + 0x34) = cVar2;
        if (cVar2 != '\0') {
          if (cVar2 == '\x02') {
            (*pcVar3)(5);
          }
          else {
            lVar16 = param_2[2];
            param_2[2] = 0;
            plVar13[2] = lVar16;
          }
        }
        uVar7 = *(undefined4 *)((long)param_2 + 0x3c);
        lVar16 = param_2[8];
        uVar8 = *(undefined4 *)((long)param_2 + 0x44);
        param_2[8] = 0;
        *(int *)(plVar13 + 7) = (int)param_2[7];
        *(undefined4 *)((long)plVar13 + 0x3c) = uVar7;
        *(int *)(plVar13 + 8) = (int)lVar16;
        *(undefined4 *)((long)plVar13 + 0x44) = uVar8;
        lVar16 = param_2[9];
        param_2[9] = 0;
        plVar13[9] = lVar16;
        plVar18 = (long *)*param_1;
        plVar5 = (long *)param_1[1];
        plVar1 = (long *)((long)plVar13 + ((long)plVar18 - (long)plVar5));
        if ((long)plVar18 - (long)plVar5 != 0) {
          plVar12 = plVar1;
          plVar15 = plVar18 + 2;
          do {
            lVar16 = plVar15[-2];
            *plVar12 = lVar16;
            lVar9 = plVar15[-1];
            plVar12[1] = lVar9;
            if (lVar9 != 0) {
              LOCK();
              *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
              UNLOCK();
              lVar16 = *plVar12;
            }
            if (lVar16 == 0) goto LAB_0c8e46eb;
            plVar12[2] = 0;
            uVar7 = *(undefined4 *)((long)plVar15 + 0x14);
            lVar16 = plVar15[3];
            uVar8 = *(undefined4 *)((long)plVar15 + 0x1c);
            pcVar3 = (code *)plVar15[2];
            *(int *)(plVar12 + 4) = (int)plVar15[2];
            *(undefined4 *)((long)plVar12 + 0x24) = uVar7;
            *(int *)(plVar12 + 5) = (int)lVar16;
            *(undefined4 *)((long)plVar12 + 0x2c) = uVar8;
            *(int *)(plVar12 + 6) = (int)plVar15[4];
            cVar2 = *(char *)((long)plVar15 + 0x24);
            *(char *)((long)plVar12 + 0x34) = cVar2;
            if (cVar2 != '\0') {
              if (cVar2 == '\x02') {
                (*pcVar3)(5,plVar15);
              }
              else {
                lVar16 = *plVar15;
                *plVar15 = 0;
                plVar12[2] = lVar16;
              }
            }
            uVar7 = *(undefined4 *)((long)plVar15 + 0x2c);
            lVar16 = plVar15[6];
            uVar8 = *(undefined4 *)((long)plVar15 + 0x34);
            plVar15[6] = 0;
            *(int *)(plVar12 + 7) = (int)plVar15[5];
            *(undefined4 *)((long)plVar12 + 0x3c) = uVar7;
            *(int *)(plVar12 + 8) = (int)lVar16;
            *(undefined4 *)((long)plVar12 + 0x44) = uVar8;
            lVar16 = plVar15[7];
            plVar15[7] = 0;
            plVar12[9] = lVar16;
            plVar12 = plVar12 + 10;
            plVar17 = plVar15 + 8;
            plVar15 = plVar15 + 10;
          } while (plVar17 != plVar5);
          do {
            if ((code *)plVar18[5] != (code *)0x0) {
              (*(code *)plVar18[5])(plVar18 + 2);
            }
            plVar12 = (long *)plVar18[1];
            if (plVar12 != (long *)0x0) {
              LOCK();
              plVar15 = plVar12 + 1;
              lVar16 = *plVar15;
              *plVar15 = *plVar15 + -1;
              UNLOCK();
              if (lVar16 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                func_0x0412c2d0(plVar12);
              }
            }
            plVar18 = plVar18 + 10;
          } while (plVar18 != plVar5);
          plVar18 = (long *)*param_1;
        }
        plVar13 = plVar13 + 10;
        *param_1 = (long)plVar1;
        param_1[1] = (long)plVar13;
        lVar16 = param_1[2];
        param_1[2] = lVar11 + uVar14 * 0x50;
        if (plVar18 != (long *)0x0) {
          thunk_FUN_0ee326a0(plVar18,lVar16 - (long)plVar18);
        }
LAB_0c8e46d8:
        param_1[1] = (long)plVar13;
        return;
      }
      goto LAB_0c8e46eb;
    }
  }
  func_0x0c8e8450();
LAB_0c8e46f5:
  uVar10 = func_0x04882eb0();
  uVar10 = FUN_04882e20(uVar10);
  uVar10 = FUN_04882e20(uVar10);
  uVar10 = FUN_04882e20(uVar10);
  FUN_04882e20(uVar10);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


