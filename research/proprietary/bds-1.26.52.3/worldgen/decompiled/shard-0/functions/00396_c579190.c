/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc679190 (ELF vaddr 0xc579190)
 * Label: caller-of-seed
 * Body:  [[0c679190, 0c679323] [0c679330, 0c6793ce] [0c6793d0, 0c679536]]
 * Ghidra: FUN_0c679190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c679190(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  bool bVar17;
  undefined8 uStack_80;
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 auStack_40 [12];
  undefined1 uStack_34;
  
  plVar2 = (long *)param_2[0x3a];
  plVar7 = (long *)func_0x0412c300(param_2[0x39]);
  plVar3 = (long *)param_2[0x38];
  LOCK();
  plVar16 = plVar7 + 1;
  lVar15 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar15 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
  }
  uVar8 = (**(code **)(*plVar3 + 0x68))(plVar3);
  iVar5 = func_0x0bbfe2d0(param_2 + 1);
  if (iVar5 != -1) {
    iVar6 = (**(code **)(*(long *)param_2[0x3a] + 0x468))();
    uVar11 = 0x1d1;
    if ((iVar5 == 1) || ((iVar5 == 5 && (iVar6 == 1)))) goto LAB_0c679417;
  }
  lVar9 = (**(code **)(*param_2 + 0x270))(param_2);
  lVar15 = _DAT_0f555fd8;
  uVar11 = 0x1d1;
  if ((*(long **)(lVar9 + 8) != (long *)0x0) && (lVar14 = **(long **)(lVar9 + 8), lVar14 != 0)) {
    plVar16 = *(long **)(lVar14 + 0x1b0);
    plVar3 = *(long **)(lVar14 + 0x1b8);
    if (plVar16 != plVar3) {
      bVar17 = (DAT_0f555fe0 & 1) != 0;
      uVar13 = (ulong)(DAT_0f555fe0 >> 1);
      if (bVar17) {
        uVar13 = _DAT_0f555fe8;
      }
      plVar7 = plVar16;
      uVar11 = 0xf555fe1;
      if (bVar17) {
        uVar11 = _DAT_0f555ff0;
      }
      do {
        if (*plVar7 == lVar15) {
          if (((undefined *)plVar7[4] == &DAT_0f555fd8) && (plVar7 == _DAT_0f555ff8))
          goto LAB_0c679412;
          bVar1 = *(byte *)(plVar7 + 1);
          if ((bVar1 & 1) == 0) {
            uVar10 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar10 = plVar7[2];
          }
          if (uVar10 == uVar13) {
            if ((bVar1 & 1) == 0) {
              lVar14 = (long)plVar7 + 9;
            }
            else {
              lVar14 = plVar7[3];
            }
            iVar5 = func_0x0eee3000(lVar14,uVar11,uVar13);
            if (iVar5 == 0) {
              plVar7[4] = (long)&DAT_0f555fd8;
              _DAT_0f555ff8 = plVar7;
              goto LAB_0c679412;
            }
          }
        }
        plVar7[4] = 0;
        lVar14 = _DAT_0f555f18;
        plVar7 = plVar7 + 5;
      } while (plVar7 != plVar3);
      bVar17 = (DAT_0f555f20 & 1) != 0;
      uVar13 = (ulong)(DAT_0f555f20 >> 1);
      if (bVar17) {
        uVar13 = _DAT_0f555f28;
      }
      uVar12 = 0xf555f21;
      if (bVar17) {
        uVar12 = _DAT_0f555f30;
      }
      do {
        if (*plVar16 == lVar14) {
          if (((undefined *)plVar16[4] == &DAT_0f555f18) && (plVar16 == _DAT_0f555f38)) {
LAB_0c6793fb:
            cVar4 = func_0x0c020060(0x10,lVar9,0x1d1);
            uVar11 = 0x1d1;
            if (cVar4 == '\0') {
LAB_0c679412:
              uVar11 = 0x1d0;
            }
            break;
          }
          bVar1 = *(byte *)(plVar16 + 1);
          if ((bVar1 & 1) == 0) {
            uVar10 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar10 = plVar16[2];
          }
          if (uVar10 == uVar13) {
            if ((bVar1 & 1) == 0) {
              lVar15 = (long)plVar16 + 9;
            }
            else {
              lVar15 = plVar16[3];
            }
            iVar5 = func_0x0eee3000(lVar15,uVar12,uVar13);
            if (iVar5 == 0) {
              plVar16[4] = (long)&DAT_0f555f18;
              _DAT_0f555f38 = plVar16;
              goto LAB_0c6793fb;
            }
          }
        }
        uVar11 = 0x1d1;
        plVar16[4] = 0;
        plVar16 = plVar16 + 5;
      } while (plVar16 != plVar3);
    }
  }
LAB_0c679417:
  fStack_78 = (float)*(int *)(param_3 + 1);
  uStack_80 = CONCAT44((float)(int)((ulong)*param_3 >> 0x20),(float)(int)*param_3);
  uStack_70 = 0xf6b1128;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  auStack_40[0] = 0;
  uStack_34 = 0;
  (**(code **)(*plVar2 + 0x6a8))
            (plVar2,uVar8,uVar11,&uStack_80,*(undefined8 *)(param_1 + 0x200),&uStack_70,0,auStack_40
            );
  plVar16 = plStack_60;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar2 = plVar16 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
    plVar16 = plStack_60;
    uStack_58 = 0;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_60 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar16);
      }
    }
  }
  func_0x0c6ca820(param_1,param_2,param_3,param_4);
  return;
}


