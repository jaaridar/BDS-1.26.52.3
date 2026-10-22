/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7b620 (ELF vaddr 0xc97b620)
 * Label: _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess::vslot2
 * Body:  [[0ca7b620, 0ca7b777] [0ca7b780, 0ca7b7e1] [0ca7b7f0, 0ca7ba89]]
 * Ghidra: wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot2
          (undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  byte bStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar16 = *(long **)(param_2 + 8);
  lVar18 = *(long *)(param_2 + 0x10);
  plVar10 = plVar16 + 5;
  bStack_70 = 1;
  plStack_78 = plVar10;
  FUN_0412d550(plVar10);
  uVar3 = plVar16[1];
  if (uVar3 != 0) {
    uVar8 = (long)(int)lVar18 + 0x9e3779b9;
    uVar8 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + (lVar18 >> 0x20) ^ uVar8;
    uVar9 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      uVar14 = uVar3 - 1 & uVar8;
    }
    else {
      uVar14 = uVar8;
      if (uVar3 <= uVar8) {
        uVar14 = uVar8 % uVar3;
      }
    }
    plVar16 = *(long **)(*plVar16 + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if (uVar8 == plVar16[1]) {
            if (plVar16[2] == lVar18) goto LAB_0ca7b85c;
          }
          else if ((plVar16[1] & uVar3 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar16[1];
          if (uVar8 == uVar9) {
            if (plVar16[2] == lVar18) goto LAB_0ca7b85c;
          }
          else {
            if (uVar3 <= uVar9) {
              if ((uVar9 | uVar3) >> 0x20 == 0) {
                if ((uVar9 & 0xffffffff) % (uVar3 & 0xffffffff) == uVar14) goto LAB_0ca7b73a;
                break;
              }
              uVar9 = uVar9 % uVar3;
            }
            if (uVar9 != uVar14) break;
          }
LAB_0ca7b73a:
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
LAB_0ca7b7b3:
  FUN_0412d610(plVar10);
LAB_0ca7b7bb:
  plVar10 = plStack_a8;
  if (plStack_a8 == plStack_a0) {
    *param_1 = 0;
    param_1[1] = 0;
    if (plStack_a8 == (long *)0x0) {
      return param_1;
    }
  }
  else {
    lVar18 = plStack_a8[1];
    uVar6 = *(undefined4 *)((long)plStack_a8 + 4);
    lVar15 = plStack_a8[1];
    uVar7 = *(undefined4 *)((long)plStack_a8 + 0xc);
    *(int *)param_1 = (int)*plStack_a8;
    *(undefined4 *)((long)param_1 + 4) = uVar6;
    *(int *)(param_1 + 1) = (int)lVar15;
    *(undefined4 *)((long)param_1 + 0xc) = uVar7;
    plVar16 = plStack_a0;
    if (lVar18 != 0) {
      LOCK();
      plVar1 = (long *)(lVar18 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    do {
      plVar1 = (long *)plVar16[-1];
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar18 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
        }
      }
      plVar16 = plVar16 + -2;
    } while (plVar16 != plVar10);
  }
  func_0x0412a280(plStack_a8,(long)plStack_98 - (long)plStack_a8);
  return param_1;
LAB_0ca7b85c:
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  lVar18 = plVar16[3];
  lVar15 = plVar16[4];
  lStack_88 = lVar15;
  lVar4 = param_3;
  puVar13 = param_1;
  if (lVar18 != lVar15) {
    do {
      puStack_68 = puVar13;
      lStack_80 = lVar4;
      if ((*(long *)(lVar18 + 0x10) != 0) &&
         (plVar10 = (long *)FUN_0412c300(), plStack_38 = plVar10, plVar10 != (long *)0x0)) {
        lVar4 = *(long *)(lVar18 + 8);
        lStack_40 = lVar4;
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) == param_3)) {
          LOCK();
          plVar10[1] = plVar10[1] + 1;
          UNLOCK();
          lStack_50 = lVar4;
          plStack_48 = plVar10;
          if (plStack_a0 < plStack_98) {
            *plStack_a0 = lVar4;
            plStack_a0[1] = (long)plVar10;
            plVar16 = plStack_a0;
          }
          else {
            lVar15 = (long)plStack_a0 - (long)plStack_a8;
            plVar16 = (long *)(lVar15 >> 4);
            uVar3 = (long)plVar16 + 1;
            if (0xfffffffffffffff < uVar3) {
LAB_0ca7ba49:
              uVar12 = func_0x0ca7baa0();
              func_0x0ca729a0(&lStack_50);
              FUN_0ca72ad0(&lStack_40);
              func_0x0ca7b560(&plStack_a8);
              func_0x06cfcdf0(&plStack_78);
              uVar12 = _Unwind_Resume(uVar12);
              func_0x04882e20(uVar12);
              pcVar5 = (code *)swi(3);
              puVar13 = (undefined8 *)(*pcVar5)();
              return puVar13;
            }
            plStack_58 = plStack_a8;
            uStack_60 = (long)plStack_98 - (long)plStack_a8;
            uVar8 = (long)uStack_60 >> 3;
            if ((ulong)((long)uStack_60 >> 3) <= uVar3) {
              uVar8 = uVar3;
            }
            if (0x7fffffffffffffef < uStack_60) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_90 = plVar16;
            if (0xfffffffffffffff < uVar8) {
              func_0x04882eb0();
              goto LAB_0ca7ba49;
            }
            lVar17 = uVar8 * 0x10;
            lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
            if (lVar11 == 0) {
              func_0x0eec74c0(lVar17,0);
            }
            plVar1 = plStack_58;
            *(long *)(lVar11 + lVar15) = lVar4;
            *(long **)(lVar11 + 8 + lVar15) = plVar10;
            plVar16 = (long *)(lVar11 + lVar15);
            plStack_90 = (long *)(lVar11 + lVar15 + (long)plStack_90 * -0x10);
            func_0x0eee2f00(plStack_90,plStack_58,lVar15);
            plStack_a8 = plStack_90;
            param_3 = lStack_80;
            lVar15 = lStack_88;
            plStack_98 = (long *)(lVar17 + lVar11);
            if (plVar1 != (long *)0x0) {
              func_0x0412a280(plVar1,uStack_60);
              param_3 = lStack_80;
              lVar15 = lStack_88;
            }
          }
          plStack_a0 = plVar16 + 2;
        }
        LOCK();
        plVar16 = plVar10 + 1;
        lVar4 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          func_0x0412c2d0(plVar10);
        }
      }
      lVar18 = lVar18 + 0x18;
      lVar4 = lStack_80;
      puVar13 = puStack_68;
    } while (lVar18 != lVar15);
    param_1 = puStack_68;
    plVar10 = plStack_78;
    if ((bStack_70 & 1) == 0) goto LAB_0ca7b7bb;
  }
  goto LAB_0ca7b7b3;
}


