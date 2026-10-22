/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb35860 (ELF vaddr 0xca35860)
 * Label: callee-of:0x517c470
 * Body:  [[0cb35860, 0cb35dc1] [0cb35dd0, 0cb35e34] [0cb35e40, 0cb35eb0] [0cb35ec0, 0cb35feb] [0cb35ff0, 0cb36037] [0cb36040, 0cb3616b] [0cb36187, 0cb36193] [0cb362aa, 0cb36395]]
 * Ghidra: FUN_0cb35860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0cb35860(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int *extraout_RDX;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puStack_248;
  undefined1 uStack_240;
  long *plStack_228;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined4 *puStack_1f8;
  undefined8 *puStack_1f0;
  long alStack_1e8 [4];
  long *plStack_1c8;
  undefined1 auStack_1b8 [32];
  undefined8 uStack_198;
  undefined1 auStack_188 [32];
  undefined8 uStack_168;
  undefined1 auStack_158 [144];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined4 uStack_66;
  long alStack_58 [5];
  
  lVar10 = *(long *)(*(long *)(param_2 + 0x210) + 0x28);
  *param_1 = &UNK_0f534768;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef44a60;
  *(undefined1 *)(puVar9 + 3) = 1;
  param_1[1] = puVar9 + 3;
  param_1[2] = puVar9;
  *param_1 = &UNK_0f3f0e90;
  *(undefined4 *)(param_1 + 3) = 0x10;
  if (lVar10 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar10 + 0xa0);
  }
  param_1[4] = uVar12;
  param_1[5] = lVar10;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = *(undefined8 *)(lVar10 + 0x390);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &UNK_0f3f24c8;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  puStack_200 = param_1 + 0x10;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  puStack_1f0 = param_1 + 0x22;
  puStack_210 = param_1;
  func_0x0412d440();
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((long)param_1 + 0x202) = 0x7fff8000;
  param_1[0x42] = *(undefined8 *)(param_2 + 0x210);
  plStack_1c8 = (long *)0x0;
  uStack_198 = 0;
  uStack_168 = 0;
  func_0x0412d440(auStack_158);
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  puStack_98 = (undefined4 *)0x0;
  puStack_90 = (undefined4 *)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_68 = 0;
  uStack_66 = 0x7fff8000;
  plVar19 = *(long **)(param_2 + 0xa0);
  if (plVar19 == (long *)0x0) {
    plStack_228 = (long *)0x0;
  }
  else if (plVar19 == (long *)(param_2 + 0x80)) {
    plStack_228 = (long *)&puStack_248;
    (**(code **)(*plVar19 + 0x18))();
  }
  else {
    plStack_228 = (long *)(**(code **)(*plVar19 + 0x10))();
  }
  plVar1 = plStack_1c8;
  plVar19 = plStack_228;
  if ((undefined8 **)plStack_228 == &puStack_248) {
    if (plStack_1c8 == alStack_1e8) {
      (**(code **)(*plStack_228 + 0x18))(plStack_228,alStack_58);
      (**(code **)(*plStack_228 + 0x20))();
      plStack_228 = (long *)0x0;
      (**(code **)(*plStack_1c8 + 0x18))(plStack_1c8,&puStack_248);
      (**(code **)(*plStack_1c8 + 0x20))();
      plStack_1c8 = (long *)0x0;
      plStack_228 = (long *)&puStack_248;
      (**(code **)(alStack_58[0] + 0x18))(alStack_58,alStack_1e8);
      (**(code **)(alStack_58[0] + 0x20))(alStack_58);
      plStack_1c8 = alStack_1e8;
      if ((undefined8 **)plStack_228 != &puStack_248) goto LAB_0cb35bfa;
      goto LAB_0cb35b4c;
    }
    (**(code **)(*plStack_228 + 0x18))(plStack_228,alStack_1e8);
    (**(code **)(*plStack_228 + 0x20))();
    plVar19 = plStack_1c8;
    plStack_228 = plStack_1c8;
    plStack_1c8 = alStack_1e8;
    if ((undefined8 **)plVar19 == &puStack_248) goto LAB_0cb35b4c;
LAB_0cb35bfa:
    lVar10 = 0x28;
    if (plStack_228 != (long *)0x0) goto LAB_0cb35c04;
    plVar19 = *(long **)(param_2 + 0xd0);
    if (plVar19 != (long *)0x0) goto LAB_0cb35c29;
LAB_0cb35c19:
    plStack_228 = (long *)0x0;
  }
  else {
    if (plStack_1c8 == alStack_1e8) {
      (**(code **)(*plStack_1c8 + 0x18))(plStack_1c8,&puStack_248);
      (**(code **)(*plStack_1c8 + 0x20))();
      plStack_1c8 = plStack_228;
      plStack_228 = (long *)&puStack_248;
    }
    else {
      plStack_228 = plStack_1c8;
      plStack_1c8 = plVar19;
      if ((undefined8 **)plVar1 != &puStack_248) goto LAB_0cb35bfa;
    }
LAB_0cb35b4c:
    lVar10 = 0x20;
LAB_0cb35c04:
    (**(code **)(*plStack_228 + lVar10))(plStack_228);
    plVar19 = *(long **)(param_2 + 0xd0);
    if (plVar19 == (long *)0x0) goto LAB_0cb35c19;
LAB_0cb35c29:
    if (plVar19 == (long *)(param_2 + 0xb0)) {
      plStack_228 = (long *)&puStack_248;
      (**(code **)(*plVar19 + 0x18))(plVar19,&puStack_248);
    }
    else {
      plStack_228 = (long *)(**(code **)(*plVar19 + 0x10))();
    }
  }
  func_0x0cb56120(&puStack_248,auStack_1b8);
  if ((undefined8 **)plStack_228 == &puStack_248) {
    lVar10 = 0x20;
LAB_0cb35c94:
    (**(code **)(*plStack_228 + lVar10))();
    plVar19 = *(long **)(param_2 + 0x100);
    if (plVar19 != (long *)0x0) goto LAB_0cb35c7b;
LAB_0cb35ca6:
    plStack_228 = (long *)0x0;
  }
  else {
    lVar10 = 0x28;
    if (plStack_228 != (long *)0x0) goto LAB_0cb35c94;
    plVar19 = *(long **)(param_2 + 0x100);
    if (plVar19 == (long *)0x0) goto LAB_0cb35ca6;
LAB_0cb35c7b:
    if (plVar19 == (long *)(param_2 + 0xe0)) {
      plStack_228 = (long *)&puStack_248;
      (**(code **)(*plVar19 + 0x18))(plVar19,&puStack_248);
    }
    else {
      plStack_228 = (long *)(**(code **)(*plVar19 + 0x10))();
    }
  }
  func_0x09f87e30(&puStack_248,auStack_188);
  if ((undefined8 **)plStack_228 == &puStack_248) {
    lVar10 = 0x20;
LAB_0cb35ce8:
    (**(code **)(*plStack_228 + lVar10))();
  }
  else {
    lVar10 = 0x28;
    if (plStack_228 != (long *)0x0) goto LAB_0cb35ce8;
  }
  uStack_68 = *(undefined1 *)(param_2 + 0x200);
  uStack_66 = *(undefined4 *)(param_2 + 0x202);
  puVar9 = (undefined8 *)(param_2 + 0x110);
  uStack_240 = 1;
  puStack_248 = puVar9;
  func_0x0412d550(puVar9);
  FUN_0412d450(auStack_158);
  puVar11 = puStack_98;
  uStack_c8 = *(undefined8 *)(param_2 + 0x1a0);
  uStack_c0 = *(undefined8 *)(param_2 + 0x1a8);
  uStack_b8 = *(undefined8 *)(param_2 + 0x1b0);
  uStack_b0 = *(undefined8 *)(param_2 + 0x1b8);
  uStack_a8 = *(undefined8 *)(param_2 + 0x1c0);
  uStack_a0 = *(undefined8 *)(param_2 + 0x1c8);
  puVar15 = puStack_90;
  if (alStack_1e8 != (long *)(param_2 + 0x80)) {
    puVar17 = *(undefined4 **)(param_2 + 0x1d0);
    puVar16 = *(undefined4 **)(param_2 + 0x1d8);
    uVar14 = (long)puVar16 - (long)puVar17;
    uVar18 = (long)puStack_88 - (long)puStack_98;
    puStack_208 = puVar9;
    if (uVar18 < uVar14) {
      uVar14 = (long)uVar14 >> 4;
      if (puStack_98 != (undefined4 *)0x0) {
        if (puStack_98 != puStack_90) {
          do {
            plVar19 = *(long **)(puVar15 + -2);
            if (plVar19 != (long *)0x0) {
              LOCK();
              plVar1 = plVar19 + 1;
              lVar10 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar10 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                func_0x0412c2d0(plVar19);
              }
            }
            puVar15 = puVar15 + -4;
          } while (puVar15 != puVar11);
          uVar18 = (long)puStack_88 - (long)puStack_98;
        }
        puStack_90 = puVar11;
        func_0x0412a280(puStack_98);
        puStack_98 = (undefined4 *)0x0;
        puStack_90 = (undefined4 *)0x0;
        puStack_88 = (undefined4 *)0x0;
      }
      if (uVar14 >> 0x3c == 0) {
        uVar20 = (long)puStack_88 >> 3;
        if ((ulong)((long)puStack_88 >> 3) <= uVar14) {
          uVar20 = uVar14;
        }
        if ((undefined4 *)0x7fffffffffffffef < puStack_88) {
          uVar20 = 0xfffffffffffffff;
        }
        if (uVar20 < 0x1000000000000000) {
          puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20 * 0x10);
          if (puVar11 == (undefined4 *)0x0) {
            func_0x0eec74c0(uVar20 * 0x10,0);
          }
          puStack_88 = puVar11 + uVar20 * 4;
          puVar15 = puVar11;
          for (; puVar9 = puStack_208, puStack_98 = puVar11, puVar17 != puVar16;
              puVar17 = puVar17 + 4) {
            lVar10 = *(long *)(puVar17 + 2);
            uVar5 = puVar17[1];
            uVar6 = puVar17[2];
            uVar7 = puVar17[3];
            *puVar15 = *puVar17;
            puVar15[1] = uVar5;
            puVar15[2] = uVar6;
            puVar15[3] = uVar7;
            if (lVar10 != 0) {
              LOCK();
              plVar19 = (long *)(lVar10 + 8);
              *plVar19 = *plVar19 + 1;
              UNLOCK();
            }
            puVar15 = puVar15 + 4;
          }
          goto LAB_0cb360a1;
        }
      }
      uVar12 = func_0x05d94ab0();
      puVar9 = (undefined8 *)func_0x04882e20(uVar12);
      func_0x0412d520(auStack_158);
      func_0x06cfcdf0(&puStack_248);
      FUN_052a3830(alStack_1e8);
      FUN_052a3830(puStack_200);
      func_0x0cb3ae10(puStack_210);
      _Unwind_Resume();
      iVar2 = *extraout_RDX;
      iVar3 = extraout_RDX[1];
      func_0x0412d550(uVar18 + 0x110);
      lVar10 = *(long *)(uVar18 + 0x1d0);
      if (((((lVar10 == *(long *)(uVar18 + 0x1d8)) || (*(int *)(uVar18 + 0x1c4) < 1)) ||
           (iVar2 < *(int *)(uVar18 + 0x1a0))) ||
          ((*(int *)(uVar18 + 0x1ac) < iVar2 || (0 < *(int *)(uVar18 + 0x1a4))))) ||
         ((*(int *)(uVar18 + 0x1b0) < 0 ||
          ((iVar3 < *(int *)(uVar18 + 0x1a8) || (*(int *)(uVar18 + 0x1b4) < iVar3)))))) {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      else {
        lVar13 = (long)((iVar2 - (*(int *)(uVar18 + 0x1a0) +
                                 *(int *)(uVar18 + 0x1a4) * *(int *)(uVar18 + 0x1c4))) +
                       (iVar3 - *(int *)(uVar18 + 0x1a8)) * *(int *)(uVar18 + 0x1b8)) * 0x10;
        lVar4 = *(long *)(lVar10 + 8 + lVar13);
        puVar15 = (undefined4 *)(lVar10 + lVar13);
        uVar5 = puVar15[1];
        uVar6 = puVar15[2];
        uVar7 = puVar15[3];
        *(undefined4 *)puVar9 = *puVar15;
        *(undefined4 *)((long)puVar9 + 4) = uVar5;
        *(undefined4 *)(puVar9 + 1) = uVar6;
        *(undefined4 *)((long)puVar9 + 0xc) = uVar7;
        if (lVar4 != 0) {
          LOCK();
          plVar19 = (long *)(lVar4 + 8);
          *plVar19 = *plVar19 + 1;
          UNLOCK();
        }
      }
      func_0x0412d610(uVar18 + 0x110);
      return puVar9;
    }
    uVar18 = (long)puStack_90 - (long)puStack_98;
    puStack_1f8 = puVar16;
    if (uVar18 < uVar14) {
      puVar16 = (undefined4 *)(uVar18 + (long)puVar17);
      if (puStack_90 != puStack_98) {
        uVar14 = 0;
        do {
          lVar10 = *(long *)((long)puVar17 + uVar14 + 8);
          puVar15 = (undefined4 *)((long)puVar17 + uVar14);
          uVar5 = *puVar15;
          uVar6 = puVar15[1];
          uVar7 = puVar15[2];
          uVar8 = puVar15[3];
          if (lVar10 != 0) {
            LOCK();
            plVar19 = (long *)(lVar10 + 8);
            *plVar19 = *plVar19 + 1;
            UNLOCK();
          }
          plVar19 = *(long **)((long)puVar11 + uVar14 + 8);
          puVar15 = (undefined4 *)((long)puVar11 + uVar14);
          *puVar15 = uVar5;
          puVar15[1] = uVar6;
          puVar15[2] = uVar7;
          puVar15[3] = uVar8;
          if (plVar19 != (long *)0x0) {
            LOCK();
            plVar1 = plVar19 + 1;
            lVar10 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              func_0x0412c2d0(plVar19);
            }
          }
          uVar14 = uVar14 + 0x10;
          puVar15 = puStack_90;
        } while (uVar18 != uVar14);
      }
      for (; puVar9 = puStack_208, puVar16 != puStack_1f8; puVar16 = puVar16 + 4) {
        lVar10 = *(long *)(puVar16 + 2);
        uVar5 = puVar16[1];
        uVar6 = puVar16[2];
        uVar7 = puVar16[3];
        *puStack_90 = *puVar16;
        puStack_90[1] = uVar5;
        puStack_90[2] = uVar6;
        puStack_90[3] = uVar7;
        if (lVar10 != 0) {
          LOCK();
          plVar19 = (long *)(lVar10 + 8);
          *plVar19 = *plVar19 + 1;
          UNLOCK();
        }
        puStack_90 = puStack_90 + 4;
        puVar15 = puVar15 + 4;
      }
    }
    else {
      puVar15 = puStack_98;
      if (puVar17 == puVar16) {
        puVar17 = puStack_90;
        if (puStack_98 == puStack_90) goto LAB_0cb360a1;
      }
      else {
        do {
          uVar5 = *puVar17;
          uVar6 = puVar17[1];
          uVar7 = puVar17[2];
          uVar8 = puVar17[3];
          if (*(long *)(puVar17 + 2) != 0) {
            LOCK();
            plVar19 = (long *)(*(long *)(puVar17 + 2) + 8);
            *plVar19 = *plVar19 + 1;
            UNLOCK();
          }
          plVar19 = *(long **)(puVar11 + 2);
          *puVar11 = uVar5;
          puVar11[1] = uVar6;
          puVar11[2] = uVar7;
          puVar11[3] = uVar8;
          if (plVar19 != (long *)0x0) {
            LOCK();
            plVar1 = plVar19 + 1;
            lVar10 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              func_0x0412c2d0(plVar19);
            }
          }
          puVar17 = puVar17 + 4;
          puVar11 = puVar11 + 4;
          puVar15 = puVar15 + 4;
        } while (puVar17 != puVar16);
        puVar17 = puStack_90;
        puVar9 = puStack_208;
        if (puVar11 == puStack_90) goto LAB_0cb360a1;
      }
      do {
        plVar19 = *(long **)(puVar17 + -2);
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar1 = plVar19 + 1;
          lVar10 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
          }
        }
        puVar17 = puVar17 + -4;
        puVar9 = puStack_208;
      } while (puVar17 != puVar11);
    }
  }
LAB_0cb360a1:
  puStack_90 = puVar15;
  func_0x0412d520(auStack_158);
  func_0x0412d610(puVar9);
  puVar9 = puStack_200;
  puStack_248 = puStack_200;
  func_0x052a3910(puStack_1f0,&puStack_248);
  func_0x0cb592c0(puVar9,alStack_1e8);
  puVar9 = (undefined8 *)FUN_052a3830(alStack_1e8);
  return puVar9;
}


