/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca5fb20 (ELF vaddr 0xc95fb20)
 * Label: Dimension::vslot16
 * Body:  [[0ca5fb20, 0ca60bb0]]
 * Ghidra: wg_Dimension__vslot16
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot16(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [12];
  long *plStack_348;
  long *plStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined4 *puStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *aplStack_2f8 [2];
  long *plStack_2e8;
  long *aplStack_190 [44];
  
  if (((int)param_1[0x2e] != 2) &&
     (cVar3 = (**(code **)(*(long *)param_1[0x14] + 0x550))(), cVar3 != '\0')) {
    uVar6 = (**(code **)(*(long *)param_1[0x14] + 0x860))();
    plVar8 = param_1 + 0x28;
    cVar3 = func_0x0d1d92e0(uVar6,param_1 + 2,plVar8);
    if (cVar3 == '\0') {
      lVar7 = (**(code **)(*(long *)param_1[0x14] + 0x860))();
      uStack_308 = plVar8;
      lVar7 = func_0x0d1ea5b0(lVar7 + 0x10,plVar8,&UNK_01563a4f,&uStack_308,aplStack_190);
      *(long **)(lVar7 + 0x28) = param_1 + 2;
    }
  }
  (**(code **)(*param_1 + 0x178))(&uStack_308,param_1);
  plVar10 = uStack_308;
  uStack_308 = (long *)0x0;
  plVar8 = (long *)param_1[0x75];
  param_1[0x75] = (long)plVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    plVar8 = uStack_308;
    uStack_308 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  lVar7 = (**(code **)(*(long *)param_1[0x14] + 0x568))();
  cVar3 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x98))(&uStack_308,param_1,param_2);
    plVar8 = uStack_308;
    param_1[0x36] = (long)uStack_308;
    uStack_308 = (long *)0x0;
    plVar10 = (long *)(**(code **)(*(long *)param_1[0x14] + 0x558))();
    plStack_340 = plVar8;
    (**(code **)(*plVar10 + 0x40))(aplStack_190,plVar10,&plStack_340,*(undefined4 *)(lVar7 + 0x290))
    ;
    plStack_348 = aplStack_190[0];
    plVar8 = plStack_340;
    aplStack_190[0] = (long *)0x0;
    plStack_340 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    (**(code **)(*param_1 + 0x188))(aplStack_190,param_1,&plStack_348);
    plVar10 = aplStack_190[0];
    plVar8 = plStack_348;
    aplStack_190[0] = (long *)0x0;
    plStack_348 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x98,0);
    }
    *plVar8 = (long)&UNK_0f534768;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    plVar11 = uStack_308;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &UNK_0ef44a60;
    *(undefined1 *)(puVar9 + 3) = 1;
    plVar8[1] = (long)(puVar9 + 3);
    plVar8[2] = (long)puVar9;
    *(int *)(plVar8 + 3) = (int)plVar10[3];
    lVar12 = plVar10[5];
    uVar4 = *(undefined4 *)((long)plVar10 + 0x24);
    lVar2 = plVar10[5];
    uVar19 = *(undefined4 *)((long)plVar10 + 0x2c);
    *(int *)(plVar8 + 4) = (int)plVar10[4];
    *(undefined4 *)((long)plVar8 + 0x24) = uVar4;
    *(int *)(plVar8 + 5) = (int)lVar2;
    *(undefined4 *)((long)plVar8 + 0x2c) = uVar19;
    plVar8[6] = (long)plVar10;
    plVar8[8] = *(long *)(lVar12 + 0x390);
    *(undefined1 *)(plVar8 + 9) = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    plVar8[7] = (long)plVar10;
    *plVar8 = (long)&UNK_0f3efae0;
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    *(undefined4 *)(plVar8 + 0x12) = 0x3f800000;
    uStack_308 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  else {
    param_1[0x36] = 0;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x98,0);
    }
    *plVar8 = (long)&UNK_0f534768;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &UNK_0ef44a60;
    *(undefined1 *)(puVar9 + 3) = 1;
    plVar8[1] = (long)(puVar9 + 3);
    plVar8[2] = (long)puVar9;
    *(undefined4 *)(plVar8 + 3) = 0x10;
    plVar8[4] = param_1[0x14];
    plVar8[5] = (long)param_1;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[8] = param_1[0x72];
    *(undefined1 *)(plVar8 + 9) = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    *plVar8 = (long)&UNK_0f3ee238;
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    *(undefined4 *)(plVar8 + 0x12) = 0x3f800000;
  }
  if (*(char *)(lVar7 + 0x55c) == '\x01') {
    if (*(int *)(lVar7 + 0x558) != 0) goto LAB_0ca5ff3c;
LAB_0ca601a5:
    plStack_300 = (long *)CONCAT44(plStack_300._4_4_,*(undefined4 *)(lVar7 + 0x2fc));
    uStack_308 = *(long **)(lVar7 + 0x2f4);
    cVar3 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
    if ((cVar3 == '\0') && ((long *)param_1[0x36] != (long *)0x0)) {
      auVar20 = (**(code **)(*(long *)param_1[0x36] + 0x198))();
      uStack_308 = auVar20._0_8_;
      plStack_300 = (long *)CONCAT44(plStack_300._4_4_,auVar20._8_4_);
    }
    cVar3 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
    if (cVar3 == '\0') {
      lVar12 = func_0x0d2279e0(lVar7 + 0x518,0xf71d600);
      if ((lVar12 == 0) && (lVar12 = func_0x0d2279e0(lVar7 + 0x4f0,0xf71d600), lVar12 == 0)) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = (int *)0x0;
        if (*(int *)(lVar12 + 0x50) == 6) {
          piVar15 = (int *)(lVar12 + 0x38);
        }
      }
      piVar13 = (int *)&UNK_01de6224;
      if (piVar15 != (int *)0x0) {
        piVar13 = piVar15;
      }
      if ((((int)uStack_308 != *piVar13) || (uStack_308._4_4_ != piVar13[1])) ||
         ((int)plStack_300 != piVar13[2])) {
        uVar6 = (**(code **)(*(long *)param_1[0x14] + 0x568))();
        func_0x0d20ac00(uVar6,&uStack_308);
      }
    }
    lVar12 = func_0x0d2279e0(lVar7 + 0x518,0xf71d748);
    if ((lVar12 == 0) && (lVar12 = func_0x0d2279e0(lVar7 + 0x4f0,0xf71d748), lVar12 == 0)) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = 0x10;
      if (*(int *)(lVar12 + 0x50) == 0) {
        uVar4 = *(undefined4 *)(lVar12 + 0x38);
      }
    }
    lVar12 = func_0x0d2279e0(lVar7 + 0x518,0xf71d770);
    if ((lVar12 == 0) && (lVar12 = func_0x0d2279e0(lVar7 + 0x4f0,0xf71d770), lVar12 == 0)) {
      uVar19 = 0x10;
    }
    else {
      uVar19 = 0x10;
      if (*(int *)(lVar12 + 0x50) == 0) {
        uVar19 = *(undefined4 *)(lVar12 + 0x38);
      }
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (lVar7 == 0) {
      func_0x0eec74c0(0xa0,0);
    }
    aplStack_190[0] = plVar8;
    FUN_0ca9fb30(lVar7,aplStack_190,&uStack_308,uVar4,uVar19);
    plVar8 = aplStack_190[0];
    aplStack_190[0] = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar10 = (long *)param_1[0x35];
    param_1[0x35] = lVar7;
  }
  else {
    lVar12 = func_0x0d2279e0(lVar7 + 0x518,0xf71d720);
    if ((((lVar12 != 0) || (lVar12 = func_0x0d2279e0(lVar7 + 0x4f0,0xf71d720), lVar12 != 0)) &&
        (*(int *)(lVar12 + 0x50) == 4)) && (*(int *)(lVar12 + 0x38) == 0)) goto LAB_0ca601a5;
LAB_0ca5ff3c:
    plVar10 = (long *)param_1[0x35];
    param_1[0x35] = (long)plVar8;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  if (((long *)param_1[0x36] != (long *)0x0) && (param_1[0x35] != 0)) {
    (**(code **)(*(long *)param_1[0x36] + 0x1b0))();
  }
  lVar7 = param_1[0x14];
  lVar12 = param_1[0x35];
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x188);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x188,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f30d6a8;
  plVar10 = plVar8 + 3;
  func_0x0c9d0c10(plVar10,lVar7,param_1,lVar12,1,0,0,0);
  if (plVar8[5] == 0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar8[2] = plVar8[2] + 1;
    UNLOCK();
    plVar8[4] = (long)plVar10;
    plVar8[5] = (long)plVar8;
LAB_0ca6001f:
    plVar11 = plVar8 + 1;
    LOCK();
    lVar7 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
  }
  else if (*(long *)(plVar8[5] + 8) == -1) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar8[2] = plVar8[2] + 1;
    UNLOCK();
    plVar8[4] = (long)plVar10;
    plVar8[5] = (long)plVar8;
    func_0x0412c2d0();
    goto LAB_0ca6001f;
  }
  param_1[0x1a] = (long)plVar10;
  plVar10 = (long *)param_1[0x1b];
  param_1[0x1b] = (long)plVar8;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar7 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  *(undefined1 *)(param_1[0x1a] + 0xc0) = 1;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x78,0);
  }
  *puVar9 = &UNK_0f3e43a0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  *(undefined4 *)(puVar9 + 5) = 0x3f800000;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = param_1;
  *(undefined1 *)(puVar9 + 0xd) = 0;
  puVar9[0xe] = 500000;
  plVar8 = (long *)param_1[0x27];
  param_1[0x27] = (long)puVar9;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  lVar7 = func_0x0417cc60();
  param_1[0x73] = lVar7;
  cVar3 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
  if (cVar3 == '\0') {
    plVar8 = (long *)param_1[0x7b];
    aplStack_2f8[0] = (long *)(**(code **)(**(long **)(plVar8[3] + 0xa0) + 0x558))();
    uStack_308 = (long *)&UNK_0f33bac8;
    plStack_300 = plVar8;
    plStack_2e8 = &uStack_308;
    (**(code **)(*aplStack_2f8[0] + 0x30))(aplStack_2f8[0],&UNK_01cb36b1,8,0xc,&uStack_308);
    if (plStack_2e8 == &uStack_308) {
      lVar7 = 0x20;
LAB_0ca602e6:
      (**(code **)(*plStack_2e8 + lVar7))();
    }
    else {
      lVar7 = 0x28;
      if (plStack_2e8 != (long *)0x0) goto LAB_0ca602e6;
    }
    (**(code **)(*(long *)param_1[0x14] + 0x920))(&lStack_338);
    lVar7 = lStack_338;
    if (lStack_338 != 0) {
      if ((DAT_0f559278 == '\0') && (iVar5 = func_0x04108328(&DAT_0f559278), iVar5 != 0)) {
        func_0x05ab5f90(0xf559260);
        func_0x0410844d(&DAT_0f559278);
      }
      plVar8 = (long *)(*(long *)(lVar7 + 0x28) +
                       (ulong)((int)((ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28)) >> 3
                                    ) - 1U & _DAT_0f559264) * 8);
      do {
        if (*plVar8 == -1) {
          plVar8 = *(long **)(lVar7 + 0x48);
          break;
        }
        lVar12 = *plVar8 * 0x30;
        plVar8 = (long *)(*(long *)(lVar7 + 0x40) + lVar12);
      } while (*(uint *)(*(long *)(lVar7 + 0x40) + 8 + lVar12) != _DAT_0f559264);
      cVar3 = *(char *)((long)plVar8 + 0x2c);
      lVar12 = plVar8[5];
      lVar7 = plVar8[2];
      uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      if ((int)lVar12 != -0x2b8d9b6f) {
        lVar7 = 0;
      }
      if (cVar3 == '\x04') {
        lVar7 = 0;
      }
      plVar8 = (long *)param_1[0x7b];
      aplStack_190[0] = (long *)CONCAT44(aplStack_190[0]._4_4_,uVar4);
      puVar14 = *(undefined4 **)(lVar7 + 8);
      uStack_308 = plVar8;
      if (puVar14 < *(undefined4 **)(lVar7 + 0x10)) {
        *puVar14 = uVar4;
        *(undefined8 *)(puVar14 + 2) = 0;
        *(undefined8 *)(puVar14 + 4) = 0;
        *(undefined8 *)(puVar14 + 6) = 0;
        if (plVar8 != (long *)0x0) {
          lVar12 = plVar8[1];
          lVar2 = plVar8[2];
          if (lVar2 == 0) {
            *(long *)(puVar14 + 2) = lVar12;
            *(undefined8 *)(puVar14 + 4) = 0;
          }
          else {
            LOCK();
            *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
            UNLOCK();
            plVar10 = *(long **)(puVar14 + 4);
            *(long *)(puVar14 + 2) = lVar12;
            *(long *)(puVar14 + 4) = lVar2;
            if (plVar10 != (long *)0x0) {
              plVar11 = (long *)(puVar14 + 2);
              LOCK();
              plVar1 = plVar10 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                puStack_310 = puVar14;
                (**(code **)(*plVar10 + 0x10))(plVar10);
                func_0x0412c2d0(plVar10);
                puVar14 = puStack_310;
              }
              lVar12 = *plVar11;
            }
          }
          if (lVar12 != 0) {
            *(long **)(puVar14 + 6) = plVar8;
          }
        }
        puVar14 = puVar14 + 8;
      }
      else {
        puVar14 = (undefined4 *)func_0x0723deb0(lVar7,aplStack_190,&uStack_308);
      }
      *(undefined4 **)(lVar7 + 8) = puVar14;
      lVar7 = (**(code **)(*(long *)param_1[0x14] + 0x568))();
      if ((**(byte **)(lVar7 + 0x138) & 0x20) != 0) {
        if ((DAT_0f649980 == '\0') && (iVar5 = func_0x04108328(&DAT_0f649980), iVar5 != 0)) {
          func_0x09ce8df0(0xf649968);
          func_0x0410844d(&DAT_0f649980);
        }
        plVar8 = (long *)(*(long *)(lStack_338 + 0x28) +
                         (ulong)((int)((ulong)(*(long *)(lStack_338 + 0x30) -
                                              *(long *)(lStack_338 + 0x28)) >> 3) - 1U &
                                _DAT_0f64996c) * 8);
        do {
          if (*plVar8 == -1) {
            plVar8 = *(long **)(lStack_338 + 0x48);
            break;
          }
          lVar7 = *plVar8 * 0x30;
          plVar8 = (long *)(*(long *)(lStack_338 + 0x40) + lVar7);
        } while (*(uint *)(*(long *)(lStack_338 + 0x40) + 8 + lVar7) != _DAT_0f64996c);
        lVar7 = 0;
        if ((int)plVar8[5] == -0x1a3b76f7) {
          lVar7 = plVar8[2];
        }
        if (*(char *)((long)plVar8 + 0x2c) == '\x04') {
          lVar7 = 0;
        }
        if ((*(long *)(lVar7 + 8) == 0) &&
           (cVar3 = func_0x0eeddcf0(&UNK_012cdf5f,&UNK_01409aca,0x135,&UNK_0136e3ef,&UNK_011ff4a9),
           cVar3 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        cVar3 = (**(code **)(*(long *)param_1[0x14] + 0x550))();
        if (cVar3 != '\0') {
          lVar12 = *(long *)(lVar7 + 8);
          plVar8 = (long *)(**(code **)(*(long *)param_1[0x14] + 0x558))();
          func_0x0d27fd40(&uStack_308);
          uStack_308 = (long *)lVar12;
          plStack_300 = plVar8;
          func_0x0d27e510(aplStack_190,lVar12,param_1,plVar8);
          func_0x0d27cf80(aplStack_2f8,aplStack_190);
          FUN_0ca741a0(aplStack_190);
          lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x170);
          if (lVar12 == 0) {
            func_0x0eec74c0(0x170,0);
          }
          func_0x0d27cbc0(lVar12,&uStack_308);
          lVar2 = param_1[0x7c];
          param_1[0x7c] = lVar12;
          if (lVar2 != 0) {
            FUN_0ca741a0(lVar2 + 0x10);
            func_0x0412a280(lVar2,0x170);
          }
          FUN_0ca741a0(aplStack_2f8);
          iVar5 = (**(code **)(*param_1 + 0x18))(param_1);
          plStack_300 = (long *)param_1[0x7c];
          uStack_308 = (long *)CONCAT44(uStack_308._4_4_,iVar5);
          piVar15 = *(int **)(lVar7 + 0x10);
          lVar12 = (long)*(int **)(lVar7 + 0x18) - (long)piVar15;
          piVar13 = piVar15;
          if (lVar12 != 0) {
            uVar16 = lVar12 >> 2;
            do {
              uVar17 = uVar16 >> 1;
              uVar18 = ~uVar17 + uVar16;
              uVar16 = uVar17;
              if (piVar13[uVar17] < iVar5) {
                piVar13 = piVar13 + uVar17 + 1;
                uVar16 = uVar18;
              }
            } while (uVar16 != 0);
          }
          lVar12 = *(long *)(lVar7 + 0x28);
          if ((piVar13 == *(int **)(lVar7 + 0x18)) || (iVar5 < *piVar13)) {
            func_0x07288ca0(lVar7 + 0x10,piVar13,&uStack_308);
            FUN_07288f70(lVar7 + 0x28,((long)piVar13 - (long)piVar15) * 2 + lVar12,&plStack_300);
          }
        }
      }
    }
    if (plStack_330 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_330 + 1;
      lVar7 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_330 + 0x10))(plStack_330);
        func_0x0412c2d0(plStack_330);
        plVar8 = (long *)param_1[0x87];
        goto joined_r0x0ca607c0;
      }
    }
  }
  plVar8 = (long *)param_1[0x87];
joined_r0x0ca607c0:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,param_1);
  }
  cVar3 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
  plVar8 = (long *)param_1[0x14];
  if (cVar3 == '\0') {
    uStack_308 = (long *)&UNK_0f1e6138;
    lVar7 = param_1[0x80];
    plStack_300 = plVar8;
    if (lVar7 != 0) {
      uVar6 = (**(code **)(*plVar8 + 0x558))();
      uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar12 = (**(code **)(*(long *)param_1[0x14] + 0x2f0))();
      (**(code **)(*(long *)param_1[0x14] + 0x9e8))(&uStack_328);
      FUN_0cb29310(lVar7,uVar6,&uStack_308,param_1 + 4,uVar4,lVar12 + 0x110,&uStack_328);
      plVar8 = plStack_320;
      uStack_328 = 0;
      plStack_320 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        uStack_318 = 0;
      }
      else {
        LOCK();
        plVar10 = plVar8 + 1;
        lVar7 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
        plVar8 = plStack_320;
        uStack_318 = 0;
        if (plStack_320 != (long *)0x0) {
          LOCK();
          plVar10 = plStack_320 + 1;
          lVar7 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plStack_320 + 0x10))(plStack_320);
            func_0x0412c2d0(plVar8);
          }
        }
      }
    }
    lVar7 = param_1[0x81];
    plVar8 = (long *)param_1[0x14];
    if (lVar7 != 0) {
      uVar6 = (**(code **)(*plVar8 + 0x558))();
      puVar9 = (undefined8 *)(**(code **)(*(long *)param_1[0x14] + 0x280))();
      func_0x09dbf260(lVar7,param_1,uVar6,&uStack_308,*puVar9);
      plVar8 = (long *)param_1[0x14];
    }
  }
  cVar3 = (**(code **)(*plVar8 + 0x9f0))();
  if (cVar3 == '\0') {
    (**(code **)(*(long *)param_1[0x14] + 0x310))(&uStack_308);
    if ((uStack_308 == (long *)0x0) &&
       (cVar3 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_0132523b),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if (((char)*uStack_308 == '\0') &&
       (cVar3 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_0132523b),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar8 = aplStack_2f8[0];
    uVar6 = (**(code **)(*(long *)param_1[0x14] + 0x558))();
    func_0x0d35a620(plVar8,uVar6,param_1[0x14],param_1);
    plVar8 = plStack_300;
    uStack_308 = (long *)0x0;
    plStack_300 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar7 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
      }
      plVar8 = plStack_300;
      aplStack_2f8[0] = (long *)0x0;
      if (plStack_300 != (long *)0x0) {
        LOCK();
        plVar10 = plStack_300 + 1;
        lVar7 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plStack_300 + 0x10))(plStack_300);
          func_0x0412c2d0(plVar8);
        }
      }
    }
  }
  return;
}


