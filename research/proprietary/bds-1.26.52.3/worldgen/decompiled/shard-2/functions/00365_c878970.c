/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc978970 (ELF vaddr 0xc878970)
 * Label: caller-of-callee
 * Body:  [[0c978970, 0c979655] [0c979706, 0c979735]]
 * Ghidra: FUN_0c978970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c978970(long param_1,long param_2,byte *param_3,undefined4 *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  uint *puVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  bool bVar19;
  byte bStack_1140;
  undefined1 auStack_113f [15];
  undefined8 *puStack_1130;
  long *plStack_1128;
  long *plStack_1120;
  long *plStack_1118;
  uint uStack_1108;
  uint uStack_1104;
  uint uStack_1100;
  uint uStack_10fc;
  undefined8 uStack_10f8;
  undefined8 *puStack_10e8;
  ulong uStack_10e0;
  undefined1 *puStack_10d8;
  ulong uStack_10d0;
  long lStack_10c0;
  undefined4 *puStack_10b8;
  undefined8 *puStack_10b0;
  undefined8 uStack_10a8;
  undefined8 *puStack_10a0;
  ulong uStack_1098;
  undefined8 *puStack_1090;
  ulong uStack_1088;
  undefined8 *puStack_1080;
  undefined8 uStack_1078;
  undefined8 *puStack_1070;
  ulong uStack_1068;
  undefined ***pppuStack_1060;
  ulong uStack_1058;
  undefined8 uStack_1050;
  char cStack_1048;
  byte *pbStack_1040;
  long *plStack_1038;
  long *plStack_1030;
  byte bStack_1010;
  ulong uStack_c50;
  undefined **ppuStack_c48;
  undefined *puStack_c40;
  undefined8 uStack_c38;
  undefined8 *puStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 *puStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined2 uStack_c00;
  undefined4 uStack_bfc;
  undefined8 uStack_bf8;
  long *plStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined4 uStack_bc8;
  ulong uStack_848;
  undefined8 uStack_840;
  long *plStack_838;
  undefined8 uStack_830;
  undefined8 uStack_440;
  undefined1 auStack_438 [1024];
  ulong uStack_38;
  
  plVar9 = *(long **)(**(long **)(param_2 + 0xe8) + 8);
  if (*(int *)(*plVar9 + 0xb0) == 3) {
    return;
  }
  puStack_10b8 = param_4;
  uVar8 = (**(code **)(*(long *)plVar9[1] + 0x18))();
  func_0x0ee35a00(&bStack_1140,uVar8);
  iVar7 = (**(code **)(**(long **)(*(long *)(**(long **)(param_2 + 0xe8) + 8) + 8) + 0x60))();
  lVar12 = _DAT_0f646088;
  if (iVar7 != 1) {
    ppuStack_c48 = &puStack_c40;
    puStack_c40 = (undefined *)0x0;
    uStack_c38 = 0;
    uStack_c28 = 0;
    uStack_c20 = 0;
    puStack_c18 = &uStack_c10;
    uStack_c10 = 0;
    uStack_c08 = 0;
    uStack_bfc = 0xffffffff;
    uStack_bf8 = 0;
    plStack_bf0 = (long *)0x0;
    uStack_be8 = 0;
    uStack_be0 = 0;
    uStack_bd8 = 0;
    uStack_bd0 = 0;
    uStack_bc8 = 1;
    uStack_c00 = 1;
    lStack_10c0 = param_1;
    puStack_c30 = &uStack_c28;
    if (_DAT_0f646080 != _DAT_0f646088) {
      lVar16 = _DAT_0f646080;
      do {
        func_0x0629ec20(&puStack_c30,&uStack_c28,lVar16,lVar16);
        lVar16 = lVar16 + 0x18;
      } while (lVar16 != lVar12);
    }
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plVar9 = _DAT_0f5523a0;
    pbVar14 = _DAT_0f552398;
    if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_0c979636:
      uVar8 = func_0x0eee02f0(0xf5522b8);
      func_0x041084d6(&DAT_0f7b8fb8);
      func_0x0ee3cd80(&ppuStack_c48);
      if ((bStack_1140 & 1) != 0) {
        func_0x0412a280(puStack_1130,CONCAT71(auStack_113f._0_7_,bStack_1140) & 0xfffffffffffffffe);
      }
      func_0x0eee2d70(uVar8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar11 = 1;
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
      bVar11 = *pbVar14;
    }
    plVar3 = _DAT_0f5523a8;
    uStack_1050 = 0xf5522b8;
    cStack_1048 = '\x01';
    pbStack_1040 = pbVar14;
    plStack_1038 = plVar9;
    plStack_1030 = _DAT_0f5523a8;
    if (((bVar11 & 1) == 0) &&
       (cVar5 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(*plVar3 + 0x228))(&uStack_840,plVar3,2);
    plVar3 = plStack_838;
    plVar9 = plStack_bf0;
    if (plStack_838 != (long *)0x0) {
      LOCK();
      plStack_838[1] = plStack_838[1] + 1;
      UNLOCK();
    }
    uStack_bf8 = 0;
    plStack_bf0 = (long *)0x0;
    if (plVar9 == (long *)0x0) {
      uStack_bf8 = uStack_840;
      plStack_bf0 = plStack_838;
    }
    else {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
      plVar9 = plStack_bf0;
      uStack_be8 = 0;
      uStack_bf8 = uStack_840;
      plStack_bf0 = plVar3;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar3 = plVar9 + 1;
        lVar12 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          FUN_0412c2d0(plVar9);
        }
      }
    }
    plVar9 = plStack_838;
    uStack_be8 = uStack_830;
    uStack_840 = 0;
    plStack_838 = (long *)0x0;
    if (plVar9 == (long *)0x0) {
      uStack_830 = 0;
    }
    else {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar12 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
      plVar9 = plStack_838;
      uStack_830 = 0;
      if (plStack_838 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_838 + 1;
        lVar12 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_838 + 0x10))(plStack_838);
          FUN_0412c2d0(plVar9);
        }
      }
    }
    plVar9 = plStack_1038;
    pbStack_1040 = (byte *)0x0;
    plStack_1038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar12 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
      plVar9 = plStack_1038;
      plStack_1030 = (long *)0x0;
      if (plStack_1038 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_1038 + 1;
        lVar12 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_1038 + 0x10))(plStack_1038);
          FUN_0412c2d0(plVar9);
        }
      }
    }
    if (cStack_1048 == '\x01') {
      func_0x0eee02f0(uStack_1050);
    }
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plVar9 = _DAT_0f5523a0;
    pbVar14 = _DAT_0f552398;
    if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c979636;
    bVar11 = 1;
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
      bVar11 = *pbVar14;
    }
    plVar3 = _DAT_0f5523a8;
    uStack_1050 = 0xf5522b8;
    cStack_1048 = '\x01';
    pbStack_1040 = pbVar14;
    plStack_1038 = plVar9;
    plStack_1030 = _DAT_0f5523a8;
    if (((bVar11 & 1) == 0) &&
       (cVar5 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
    pbStack_1040 = (byte *)0x0;
    plStack_1038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar12 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
      plVar9 = plStack_1038;
      plStack_1030 = (long *)0x0;
      if (plStack_1038 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_1038 + 1;
        lVar12 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_1038 + 0x10))(plStack_1038);
          FUN_0412c2d0(plVar9);
        }
      }
    }
    if (cStack_1048 == '\x01') {
      func_0x0eee02f0(uStack_1050);
    }
    puStack_1090 = (undefined8 *)auStack_113f;
    uStack_1088 = (ulong)(bStack_1140 >> 1);
    if ((bStack_1140 & 1) != 0) {
      uStack_1088 = auStack_113f._7_8_;
      puStack_1090 = puStack_1130;
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    bVar19 = (*param_3 & 1) != 0;
    pbVar14 = param_3 + 1;
    if (bVar19) {
      pbVar14 = *(byte **)(param_3 + 0x10);
    }
    uVar13 = (ulong)(*param_3 >> 1);
    if (bVar19) {
      uVar13 = *(ulong *)(param_3 + 8);
    }
    plStack_1128 = (long *)0x0;
    plStack_1120 = (long *)0x0;
    plStack_1118 = (long *)0x0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    plStack_1120 = plVar9 + 2;
    *plVar9 = (long)pbVar14;
    plVar9[1] = uVar13;
    plStack_1128 = plVar9;
    plStack_1118 = plStack_1120;
    puVar10 = (uint *)(**(code **)(**(long **)(*(long *)(**(long **)(param_2 + 0xe8) + 8) + 8) +
                                  0x20))();
    lVar12 = lStack_10c0;
    if ((*puVar10 & 1) == 0) {
      uStack_10f8 = *(undefined8 *)(puVar10 + 4);
      uStack_1108 = *puVar10;
      uStack_1104 = puVar10[1];
      uStack_1100 = puVar10[2];
      uStack_10fc = puVar10[3];
    }
    else {
      func_0x0412e5e0(&uStack_1108,*(undefined8 *)(puVar10 + 4),*(undefined8 *)(puVar10 + 2));
    }
    func_0x08babf90(&uStack_840,&plStack_1128,&uStack_1108,&UNK_01421018);
    uStack_10a8 = uStack_440;
    puStack_10b0 = &uStack_840;
    (**(code **)(_DAT_0f7b8f98 + 0x150))(&uStack_1050,&DAT_0f7b8f98,&puStack_10b0);
    uStack_1098 = uStack_c50;
    puStack_10a0 = &uStack_1050;
    iVar7 = func_0x0ee3d1a0(&puStack_1090,&puStack_10a0,lVar12 + 0x18,uVar6,&ppuStack_c48);
    if ((uStack_1108 & 1) != 0) {
      func_0x0412a280(uStack_10f8,CONCAT44(uStack_1104,uStack_1108) & 0xfffffffffffffffe);
    }
    if (plStack_1128 != (long *)0x0) {
      plStack_1120 = plStack_1128;
      func_0x0412a280(plStack_1128,(long)plStack_1118 - (long)plStack_1128);
    }
    if (iVar7 != 0) {
      *puStack_10b8 = 2;
    }
    func_0x0ee3cd80(&ppuStack_c48);
    goto joined_r0x0c97951c;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  bVar19 = (*param_3 & 1) != 0;
  pbVar14 = param_3 + 1;
  if (bVar19) {
    pbVar14 = *(byte **)(param_3 + 0x10);
  }
  uVar13 = (ulong)(*param_3 >> 1);
  if (bVar19) {
    uVar13 = *(ulong *)(param_3 + 8);
  }
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *plVar9 = (long)pbVar14;
  plVar9[1] = uVar13;
  uVar13 = (ulong)(bStack_1140 >> 1);
  puVar17 = (undefined8 *)auStack_113f;
  if ((bStack_1140 & 1) != 0) {
    uVar13 = auStack_113f._7_8_;
    puVar17 = puStack_1130;
  }
  uVar15 = uVar13 + 1;
  while (uVar15 != 1) {
    cVar5 = *(char *)((long)puVar17 + (uVar15 - 2));
    uVar15 = uVar15 - 1;
    if ((cVar5 == '\\') || (cVar5 == '/')) goto joined_r0x0c979174;
  }
  uVar15 = 0;
joined_r0x0c979174:
  uVar18 = uVar13;
  if (uVar13 == 0) {
LAB_0c9791d1:
    uVar18 = uVar13 - uVar15;
    if (uVar13 < uVar15) goto LAB_0c979594;
    func_0x0eee2dd0(auStack_438,0,0x408);
    if (uVar18 < 0x400) {
      if (uVar13 != uVar15) {
LAB_0c9791ff:
        func_0x0eee2f00(auStack_438,(undefined1 *)((long)puVar17 + uVar15),uVar18);
      }
LAB_0c979215:
      auStack_438[uVar18] = 0;
      uStack_38 = uVar18;
    }
LAB_0c979226:
    func_0x08bac160(&uStack_1050,plVar9,1,0x2f);
    uStack_10e0 = uStack_c50;
    puStack_10d8 = auStack_438;
    uStack_10d0 = uStack_38;
    puStack_10e8 = &uStack_1050;
    func_0x049151c0(&ppuStack_c48,&puStack_10e8,2,0x2f);
    func_0x0eee2dd0(&uStack_1050,0,0x408);
    uVar13 = 0;
    if (uStack_848 < 0x400) {
      if (uStack_848 != 0) {
        func_0x0eee2f00(&uStack_1050,&ppuStack_c48,uStack_848);
      }
      uStack_c50 = uStack_848;
      *(undefined1 *)((long)&uStack_1050 + uStack_848) = 0;
      uVar13 = uStack_c50;
      if ((uStack_c50 & 0xfffffffffffffffc) != 0x3fc) goto LAB_0c979319;
      uStack_1050 = uStack_1050 & 0xffffffffffffff00;
      uStack_c50 = 0;
      lVar12 = 1;
LAB_0c979358:
      uStack_1058 = uStack_c50;
      func_0x0eee2f00(&ppuStack_c48,&uStack_1050,lVar12);
    }
    else {
LAB_0c979319:
      *(undefined4 *)((long)&uStack_1050 + uVar13) = 0x70697a2e;
      lVar12 = uStack_c50 + 4;
      uStack_c50 = uStack_c50 + 4;
      *(undefined1 *)((long)&uStack_1050 + lVar12) = 0;
      uStack_1058 = 0xffffffffffffffff;
      lVar12 = uStack_c50 + 1;
      if (lVar12 != 0) goto LAB_0c979358;
    }
    puVar17 = &uStack_840;
    pppuStack_1060 = &ppuStack_c48;
    uStack_848 = uStack_1058;
    (**(code **)(_DAT_0f7b8f98 + 0x150))(puVar17,&DAT_0f7b8f98,&pppuStack_1060);
    func_0x0412a280(plVar9,0x10);
    if (DAT_0f7b8fb8 == '\0') goto LAB_0c9795a0;
  }
  else {
    do {
      if (uVar18 == 0) goto LAB_0c9791d1;
      uVar1 = uVar18 - 1;
      lVar12 = uVar18 - 1;
      uVar18 = uVar1;
    } while (*(char *)((long)puVar17 + lVar12) != '.');
    if (uVar1 == 0xffffffffffffffff) goto LAB_0c9791d1;
    if (uVar15 <= uVar13) {
      uVar18 = uVar1 - uVar15;
      if (uVar13 - uVar15 < uVar1 - uVar15) {
        uVar18 = uVar13 - uVar15;
      }
      func_0x0eee2dd0(auStack_438,0,0x408);
      if (uVar18 < 0x400) {
        if (uVar18 != 0) goto LAB_0c9791ff;
        goto LAB_0c979215;
      }
      goto LAB_0c979226;
    }
LAB_0c979594:
    func_0x04882ef0(&UNK_01306d2f);
LAB_0c9795a0:
    iVar7 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar7 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  uStack_1068 = (ulong)(bStack_1140 >> 1);
  puStack_1070 = (undefined8 *)auStack_113f;
  if ((bStack_1140 & 1) != 0) {
    uStack_1068 = auStack_113f._7_8_;
    puStack_1070 = puStack_1130;
  }
  uStack_1078 = uStack_440;
  puStack_1080 = puVar17;
  (**(code **)(_DAT_0f7b8f98 + 0x48))(&uStack_1050,&DAT_0f7b8f98,&puStack_1070,&puStack_1080);
  ppuStack_c48 = (undefined **)0x4e11f0a723cb56a9;
  puStack_c40 = &UNK_0140f690;
  uStack_c38 = 1;
  puStack_c30 = (undefined8 *)CONCAT44(puStack_c30._4_4_,0x728);
  if (bStack_1010 == 0) {
    puStack_10e8 = (undefined8 *)0x0;
    uStack_10e0 = 0;
    puStack_10d8 = (undefined1 *)0x0;
    func_0x0eedeb80(2,0x2d,&uStack_1050,&puStack_10e8,&ppuStack_c48);
    if (((ulong)puStack_10e8 & 1) != 0) {
      func_0x0412a280(puStack_10d8,(ulong)puStack_10e8 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_1010 & 1) == 0) {
    func_0x048e6d60(&uStack_1050);
  }
joined_r0x0c97951c:
  if ((bStack_1140 & 1) != 0) {
    func_0x0412a280(puStack_1130,CONCAT71(auStack_113f._0_7_,bStack_1140) & 0xfffffffffffffffe);
  }
  return;
}


