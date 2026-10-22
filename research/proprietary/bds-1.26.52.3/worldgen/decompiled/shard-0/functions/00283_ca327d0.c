/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb327d0 (ELF vaddr 0xca327d0)
 * Label: callee-of:0xca32c90
 * Body:  [[0cb327d0, 0cb32806] [0cb32810, 0cb32934] [0cb32940, 0cb32991] [0cb329a0, 0cb32c7d]]
 * Ghidra: FUN_0cb327d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb327d0(long param_1,long *param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  plVar1 = *(long **)(param_1 + 0x40);
  lVar10 = func_0x0eee2fc0();
  lVar2 = *plVar1;
  LOCK();
  lVar11 = plVar1[2];
  bVar19 = lVar2 == lVar11;
  if (bVar19) {
    plVar1[2] = lVar10;
    lVar11 = lVar2;
  }
  UNLOCK();
  if (!bVar19) {
    iVar14 = 3000;
    do {
      while( true ) {
        if ((lVar11 == lVar10) && (iVar9 = (int)plVar1[1] + 1, iVar9 != -1)) {
          *(int *)(plVar1 + 1) = iVar9;
          lVar11 = *(long *)(param_1 + 0x40);
          uVar3 = *(ulong *)(lVar11 + 0x20);
          goto joined_r0x0cb329d8;
        }
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        lVar2 = *plVar1;
        LOCK();
        lVar11 = plVar1[2];
        bVar19 = lVar2 == lVar11;
        if (bVar19) {
          plVar1[2] = lVar10;
          lVar11 = lVar2;
        }
        UNLOCK();
        if (bVar19) goto LAB_0cb32849;
      }
      func_0x0eee35d0();
      iVar14 = 0;
      lVar2 = *plVar1;
      LOCK();
      lVar11 = plVar1[2];
      bVar19 = lVar2 == lVar11;
      if (bVar19) {
        plVar1[2] = lVar10;
        lVar11 = lVar2;
      }
      UNLOCK();
    } while (!bVar19);
  }
LAB_0cb32849:
  *(undefined4 *)(plVar1 + 1) = 1;
  lVar11 = *(long *)(param_1 + 0x40);
  uVar3 = *(ulong *)(lVar11 + 0x20);
joined_r0x0cb329d8:
  if (uVar3 != 0) {
    uVar12 = (long)(int)*param_2 + 0x9e3779b9;
    uVar12 = (uVar12 >> 2) + 0x9e3779b9 + uVar12 * 0x40 + (long)*(int *)((long)param_2 + 4) ^ uVar12
    ;
    uVar15 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
    uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar15 >> 0x38 < 2) {
      uVar16 = uVar3 - 1 & uVar12;
    }
    else {
      uVar16 = uVar12;
      if (uVar3 <= uVar12) {
        uVar16 = uVar12 % uVar3;
      }
    }
    puVar4 = *(undefined8 **)(*(long *)(lVar11 + 0x18) + uVar16 * 8);
    if ((puVar4 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar4, plVar18 != (long *)0x0)) {
      if ((byte)(uVar15 >> 0x38) < 2) {
        do {
          if (plVar18[1] == uVar12) {
            if (plVar18[2] == *param_2) goto LAB_0cb329e3;
          }
          else if ((plVar18[1] & uVar3 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == uVar12) {
            if (plVar18[2] == *param_2) goto LAB_0cb329e3;
          }
          else {
            if (uVar3 <= uVar15) {
              if ((uVar15 | uVar3) >> 0x20 == 0) {
                if ((uVar15 & 0xffffffff) % (uVar3 & 0xffffffff) == uVar16) goto LAB_0cb3294a;
                break;
              }
              uVar15 = uVar15 % uVar3;
            }
            if (uVar15 != uVar16) break;
          }
LAB_0cb3294a:
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_0cb32c08;
LAB_0cb329e3:
  if (plVar18[3] == 0) {
LAB_0cb32a2e:
    lVar11 = 0;
LAB_0cb32a47:
    lVar2 = *(long *)(param_1 + 0x40);
    uVar3 = *(ulong *)(lVar2 + 0x20);
    uVar12 = plVar18[1];
    uVar15 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
    uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar15 >> 0x38 < 2) {
      uVar12 = uVar12 & uVar3 - 1;
    }
    else if (uVar3 <= uVar12) {
      if ((uVar12 | uVar3) >> 0x20 == 0) {
        uVar12 = (uVar12 & 0xffffffff) % (uVar3 & 0xffffffff);
      }
      else {
        uVar12 = uVar12 % uVar3;
      }
    }
    lVar5 = *(long *)(lVar2 + 0x18);
    plVar6 = *(long **)(lVar5 + uVar12 * 8);
    do {
      plVar13 = plVar6;
      plVar6 = (long *)*plVar13;
    } while ((long *)*plVar13 != plVar18);
    bVar7 = (byte)(uVar15 >> 0x38);
    if (plVar13 == (long *)(lVar2 + 0x28)) {
LAB_0cb32b1d:
      if (*plVar18 != 0) {
        uVar15 = *(ulong *)(*plVar18 + 8);
        if (bVar7 < 2) {
          uVar15 = uVar15 & uVar3 - 1;
        }
        else if (uVar3 <= uVar15) {
          if ((uVar15 | uVar3) >> 0x20 == 0) {
            uVar15 = (uVar15 & 0xffffffff) % (uVar3 & 0xffffffff);
          }
          else {
            uVar15 = uVar15 % uVar3;
          }
        }
        if (uVar15 == uVar12) goto LAB_0cb32b66;
      }
      *(undefined8 *)(lVar5 + uVar12 * 8) = 0;
    }
    else {
      uVar15 = plVar13[1];
      if (bVar7 < 2) {
        uVar15 = uVar15 & uVar3 - 1;
      }
      else if (uVar3 <= uVar15) {
        if ((uVar15 | uVar3) >> 0x20 == 0) {
          uVar15 = (uVar15 & 0xffffffff) % (uVar3 & 0xffffffff);
        }
        else {
          uVar15 = uVar15 % uVar3;
        }
      }
      if (uVar15 != uVar12) goto LAB_0cb32b1d;
    }
LAB_0cb32b66:
    lVar17 = *plVar18;
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      uVar15 = *(ulong *)(lVar17 + 8);
      if (bVar7 < 2) {
        uVar15 = uVar15 & uVar3 - 1;
      }
      else if (uVar3 <= uVar15) {
        if ((uVar15 | uVar3) >> 0x20 == 0) {
          uVar15 = (uVar15 & 0xffffffff) % (uVar3 & 0xffffffff);
        }
        else {
          uVar15 = uVar15 % uVar3;
        }
      }
      if (uVar15 != uVar12) {
        *(long **)(lVar5 + uVar15 * 8) = plVar13;
        lVar17 = *plVar18;
      }
    }
    *plVar13 = lVar17;
    *plVar18 = 0;
    *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
    plVar6 = (long *)plVar18[4];
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar13 = plVar6 + 1;
      lVar2 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0412a280(plVar18,0x28);
    if (lVar11 == 0) goto LAB_0cb32c08;
  }
  else {
    func_0x0cb30920(auStack_40,plVar18[3],param_2);
    lVar11 = lStack_38;
    if (param_3 == '\0') goto LAB_0cb32a47;
    if (lStack_38 == 0) goto LAB_0cb32a2e;
    if (*(long *)(lStack_38 + 8) == -1) goto LAB_0cb32a47;
  }
  func_0x0412c2d0(lVar11);
LAB_0cb32c08:
  if (plVar1[2] == lVar10) {
    iVar14 = (int)plVar1[1];
    if (iVar14 == 1) {
      *(undefined4 *)(plVar1 + 1) = 0;
      plVar1[2] = *plVar1;
      return;
    }
    if (iVar14 != 0) {
      *(int *)(plVar1 + 1) = iVar14 + -1;
      return;
    }
  }
  cVar8 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar8 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  return;
}


