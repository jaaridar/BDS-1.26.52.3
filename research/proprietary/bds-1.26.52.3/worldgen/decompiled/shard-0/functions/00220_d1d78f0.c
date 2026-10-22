/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d78f0 (ELF vaddr 0xd1d78f0)
 * Label: br::worldgen::processors::Capped::vslot3
 * Body:  [[0d2d78f0, 0d2d7bd9] [0d2d7be0, 0d2d8014] [0d2d8020, 0d2d81b3] [0d2d8201, 0d2d8262]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot3
 */


/* WARNING: Possible PIC construction at 0x0d2d800e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d2d8075: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d2d802c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d2d81ad: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d2d8031) */
/* WARNING: Removing unreachable block (ram,0x0d2d807a) */
/* WARNING: Removing unreachable block (ram,0x0d2d8013) */
/* WARNING: Removing unreachable block (ram,0x0d2d81b2) */
/* WARNING: Removing unreachable block (ram,0x0d2d8201) */
/* WARNING: Removing unreachable block (ram,0x0d2d8209) */
/* WARNING: Removing unreachable block (ram,0x0d2d821b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__processors__Capped__vslot3
                 (long *param_1,long param_2,long *param_3,ulong param_4,int param_5,long *param_6,
                 undefined8 param_7,undefined4 param_8,long *param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puStack_138;
  undefined8 uStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte bStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  long *plStack_88;
  long *plStack_80;
  ulong uStack_78;
  long **pplStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  uint uStack_40;
  long **pplStack_38;
  
  uStack_108 = (long ***)0x0;
  plStack_b0 = &uStack_108;
  plStack_d0 = param_3;
  uStack_c8 = param_4;
  plStack_b8 = param_6;
  if ((ulong)*(uint *)(param_2 + 0x30) == 0xffffffff) {
LAB_0d2d8192:
    func_0x04931450();
  }
  else {
    pplStack_70 = &plStack_b0;
    lStack_c0 = param_2;
    (**(code **)(&UNK_0f45e498 + (ulong)*(uint *)(param_2 + 0x30) * 8))(&pplStack_70,param_2 + 0x20)
    ;
    iVar7 = (*(code *)(*uStack_108)[3])();
    lVar11 = *param_9;
    lVar15 = param_9[1];
    if (lVar11 == lVar15 || iVar7 < 1) {
      *param_1 = lVar11;
      param_1[1] = lVar15;
      param_1[2] = param_9[2];
      *param_9 = 0;
      param_9[1] = 0;
      param_9[2] = 0;
      return param_1;
    }
    if (plStack_b8[1] - *plStack_b8 != lVar15 - lVar11) {
      *param_1 = lVar11;
      param_1[1] = lVar15;
      param_1[2] = param_9[2];
      *param_9 = 0;
      param_9[1] = 0;
      param_9[2] = 0;
      return param_1;
    }
    uVar10 = (**(code **)(*plStack_d0 + 0x160))();
    pplStack_70 = (long **)&UNK_0f45e800;
    puStack_68 = &UNK_0f2bdd80;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    lVar11 = (uVar10 & 0xffffffffffff ^ 0x5deece66d) * 0x5deece66d + 0xb;
    uVar10 = (long)(uStack_c8 * 0x2fc20f00000000 ^ uStack_c8) >> 0x20 ^ (long)param_5 * 0x6ebfff5;
    uStack_60 = (uVar10 * 0x285b825 + 0xb) * uVar10 >> 0x10 ^ 0x5deece66d ^
                (lVar11 * 0x5deece66d0000 + 0xb0000 >> 0x20) +
                (ulong)((uint)lVar11 & 0xffff0000) * 0x10000 & 0xffffffffffff;
    plStack_b0 = (long *)0x0;
    pplStack_38 = &plStack_b0;
    if ((ulong)*(uint *)(lStack_c0 + 0x30) != 0xffffffff) {
      uStack_108 = &pplStack_38;
      (**(code **)(&UNK_0f45e488 + (ulong)*(uint *)(lStack_c0 + 0x30) * 8))
                (&uStack_108,param_2 + 0x20);
      iVar7 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,&pplStack_70);
      lVar11 = *param_9;
      lVar15 = param_9[1];
      lVar18 = lVar15 - lVar11 >> 4;
      iVar8 = (int)(lVar18 * -0x5555555555555555);
      if (iVar8 <= iVar7) {
        iVar7 = iVar8;
      }
      if (iVar7 < 1) {
        *param_1 = lVar11;
        param_1[1] = lVar15;
        param_1[2] = param_9[2];
        *param_9 = 0;
        param_9[1] = 0;
        param_9[2] = 0;
      }
      else {
        plStack_80 = param_1;
        if (lVar15 == lVar11) {
          puStack_138 = (ulong *)0x0;
          puVar12 = (ulong *)0x0;
          puVar19 = (ulong *)0x0;
        }
        else {
          if ((ulong)(lVar18 * -0x5555555555555555) >> 0x3d != 0) goto LAB_0d2d819c;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                       (&DAT_0f5463b0,lVar18 * 0x5555555555555558);
          if (puVar12 == (ulong *)0x0) {
            FUN_0eec74c0(lVar18 * 0x5555555555555558,0);
          }
          puStack_138 = puVar12 + lVar18 * 0xaaaaaaaaaaaaaab;
          uVar10 = 0;
          puVar19 = puVar12;
          do {
            if (puStack_138 <= puVar12) {
              lVar18 = (long)puVar12 - (long)puVar19;
              uVar1 = (lVar18 >> 3) + 1;
              if (uVar1 < 0x2000000000000000) {
                uVar16 = (long)puStack_138 - (long)puVar19;
                uVar20 = (long)uVar16 >> 2;
                if ((ulong)((long)uVar16 >> 2) <= uVar1) {
                  uVar20 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar16) {
                  uVar20 = 0x1fffffffffffffff;
                }
                if (uVar20 < 0x2000000000000000) {
                  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20 * 8);
                  if (lVar11 == 0) {
                    FUN_0eec74c0(uVar20 * 8,0);
                  }
                  puVar12 = (ulong *)(lVar11 + lVar18);
                  *(ulong *)(lVar11 + lVar18) = uVar10;
                  func_0x0eee2f00(puVar12 + -(lVar18 >> 3),puVar19);
                  puStack_138 = (ulong *)(lVar11 + uVar20 * 8);
                  func_0x0412a280(puVar19,uVar16);
                  lVar11 = *param_9;
                  lVar15 = param_9[1];
                  puVar19 = puVar12 + -(lVar18 >> 3);
                  goto LAB_0d2d7be4;
                }
              }
              else {
                func_0x048af960();
              }
              func_0x04882eb0();
              goto LAB_0d2d8192;
            }
            *puVar12 = uVar10;
LAB_0d2d7be4:
            puVar12 = puVar12 + 1;
            uVar10 = uVar10 + 1;
          } while (uVar10 < (ulong)((lVar15 - lVar11 >> 4) * -0x5555555555555555));
        }
        uVar10 = (long)puVar12 - (long)puVar19 >> 3;
        if (1 < uVar10) {
          do {
            iVar8 = (*(code *)pplStack_70[3])(&pplStack_70,uVar10 & 0xffffffff);
            uVar1 = puVar19[uVar10 - 1];
            puVar19[uVar10 - 1] = puVar19[iVar8];
            uVar10 = uVar10 - 1;
            puVar19[iVar8] = uVar1;
          } while (1 < uVar10);
        }
        if (puVar19 != puVar12) {
          iVar8 = 0;
          puVar5 = puVar19;
          do {
            uStack_78 = *puVar5;
            lVar18 = uStack_78 * 0x30;
            lVar11 = *plStack_b8;
            lVar15 = *param_9;
            plVar9 = *(long **)(lStack_c0 + 8);
            uStack_a8 = *(undefined4 *)(lVar15 + 8 + lVar18);
            plStack_b0 = *(long **)(lVar15 + lVar18);
            puVar2 = (undefined4 *)(lVar15 + 0x10 + lVar18);
            uStack_a0 = *puVar2;
            uStack_9c = puVar2[1];
            uStack_98 = puVar2[2];
            uStack_94 = puVar2[3];
            uVar4 = *(undefined8 *)(lVar15 + 0x20 + lVar18);
            puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (puVar13 == (undefined8 *)0x0) {
              FUN_0eec74c0(0x20,0);
            }
            *puVar13 = &UNK_0f47e0b0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[1] = puVar13 + 2;
            func_0x0d6bd5f0(puVar13,uVar4);
            puStack_90 = puVar13;
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (plVar14 == (long *)0x0) {
              FUN_0eec74c0(0x20,0);
            }
            plVar14[1] = 0;
            plVar14[2] = 0;
            *plVar14 = (long)&UNK_0f0c2950;
            plVar14[3] = (long)puVar13;
            plStack_88 = plVar14;
            (**(code **)(*plVar9 + 0x10))
                      (&uStack_108,plVar9,plStack_d0,uStack_c8,param_5,lVar11 + lVar18,param_7,
                       param_8,&plStack_b0,param_10);
            plVar9 = plStack_88;
            if (plStack_88 != (long *)0x0) {
              LOCK();
              plVar14 = plStack_88 + 1;
              lVar11 = *plVar14;
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (lVar11 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                goto SUB_0412c2d0;
              }
            }
            if (bStack_d8 != '\x01') goto LAB_0d2d8046;
            piVar17 = (int *)(lVar15 + lVar18);
            if ((((*piVar17 == (int)uStack_108) && (piVar17[1] == uStack_108._4_4_)) &&
                (piVar17[2] == iStack_100)) &&
               ((*(long *)(piVar17 + 6) == CONCAT44(uStack_ec,uStack_f0) &&
                (*(long *)(piVar17 + 4) == CONCAT44(uStack_f4,uStack_f8))))) {
              plVar9 = *(long **)(piVar17 + 8);
              if (CONCAT44(uStack_e4,uStack_e8) == 0 || plVar9 == (long *)0x0) {
                if ((plVar9 != (long *)0x0) != (CONCAT44(uStack_e4,uStack_e8) != 0))
                goto LAB_0d2d7f90;
              }
              else {
                cVar6 = (**(code **)(*plVar9 + 0x38))();
                if (cVar6 == '\0') goto LAB_0d2d7f90;
              }
            }
            else {
LAB_0d2d7f90:
              lVar11 = *param_9;
              lVar15 = uStack_78 * 0x30;
              puVar2 = (undefined4 *)(lVar11 + 0x10 + lVar15);
              *puVar2 = uStack_f8;
              puVar2[1] = uStack_f4;
              puVar2[2] = uStack_f0;
              puVar2[3] = uStack_ec;
              *(long *)(lVar11 + lVar15) = (long)uStack_108;
              ((long *)(lVar11 + lVar15))[1] = CONCAT44(uStack_fc,iStack_100);
              if (CONCAT44(uStack_dc,uStack_e0) != 0) {
                LOCK();
                plVar9 = (long *)(CONCAT44(uStack_dc,uStack_e0) + 8);
                *plVar9 = *plVar9 + 1;
                UNLOCK();
              }
              iVar8 = iVar8 + 1;
              lVar11 = lVar11 + lVar15;
              plVar9 = *(long **)(lVar11 + 0x28);
              *(undefined4 *)(lVar11 + 0x20) = uStack_e8;
              *(undefined4 *)(lVar11 + 0x24) = uStack_e4;
              *(undefined4 *)(lVar11 + 0x28) = uStack_e0;
              *(undefined4 *)(lVar11 + 0x2c) = uStack_dc;
              if (plVar9 != (long *)0x0) {
                LOCK();
                plVar14 = plVar9 + 1;
                lVar11 = *plVar14;
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (lVar11 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  goto SUB_0412c2d0;
                }
              }
            }
LAB_0d2d8046:
            if ((bStack_d8 == '\x01') &&
               (plVar9 = (long *)CONCAT44(uStack_dc,uStack_e0), plVar9 != (long *)0x0)) {
              LOCK();
              plVar14 = plVar9 + 1;
              lVar11 = *plVar14;
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (lVar11 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                goto SUB_0412c2d0;
              }
            }
          } while ((puVar5 + 1 != puVar12) && (puVar5 = puVar5 + 1, iVar8 < iVar7));
        }
        param_1 = plStack_80;
        lVar11 = param_9[1];
        *plStack_80 = *param_9;
        plStack_80[1] = lVar11;
        plStack_80[2] = param_9[2];
        *param_9 = 0;
        param_9[1] = 0;
        param_9[2] = 0;
        if (puVar19 != (ulong *)0x0) {
          func_0x0412a280(puVar19,(long)puStack_138 - (long)puVar19);
        }
      }
      if ((ulong)uStack_40 == 0xffffffff) {
        return param_1;
      }
      (**(code **)(&UNK_0f45ee28 + (ulong)uStack_40 * 8))(&uStack_108,&puStack_68);
      return param_1;
    }
  }
  func_0x04931450();
LAB_0d2d819c:
  func_0x048af960();
  plVar9 = (long *)CONCAT44(uStack_dc,uStack_e0);
  bStack_d8 = plVar9 != (long *)0x0 & bStack_d8;
  plVar14 = (long *)(ulong)bStack_d8;
  if (bStack_d8 == 1) {
    LOCK();
    puVar12 = (ulong *)(plVar9 + 1);
    plVar14 = (long *)*puVar12;
    *puVar12 = *puVar12 - 1;
    UNLOCK();
    if (plVar14 == (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
SUB_0412c2d0:
      if (plVar9[2] != 0) {
        LOCK();
        plVar14 = plVar9 + 2;
        plVar3 = (long *)*plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (plVar3 != (long *)0x0) {
          return plVar3;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar9 = (long *)(**(code **)(*plVar9 + 0x20))();
      return plVar9;
    }
  }
  return plVar14;
}


