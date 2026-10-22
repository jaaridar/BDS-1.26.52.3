/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5fe99b0 (ELF vaddr 0x5ee99b0)
 * Label: caller-of-callee
 * Body:  [[05fe99b0, 05fe9f98] [05fe9fa0, 05fea284] [05fea290, 05feacc6] [05feacd0, 05fead20] [05fead30, 05feadd6] [05feade0, 05feaf99] [05feafa0, 05feb58e]]
 * Ghidra: FUN_05fe99b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05fe99b0(long param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  byte *pbVar16;
  char cVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong *puVar24;
  long lVar25;
  undefined1 *puVar26;
  bool bVar27;
  char cStack_11a9;
  undefined4 uStack_11a8;
  undefined4 uStack_11a4;
  undefined4 uStack_11a0;
  undefined4 uStack_119c;
  undefined *puStack_1198;
  undefined1 auStack_1190 [4];
  undefined4 uStack_118c;
  ulong uStack_1188;
  undefined **ppuStack_1180;
  undefined4 uStack_1178;
  undefined4 uStack_1174;
  undefined4 uStack_1170;
  undefined4 uStack_116c;
  undefined *puStack_1168;
  undefined8 uStack_1158;
  long *plStack_1150;
  undefined *puStack_1148;
  undefined *puStack_1140;
  long lStack_1138;
  long lStack_1130;
  long lStack_1128;
  long lStack_1120;
  char cStack_1118;
  long *plStack_1110;
  undefined8 uStack_1108;
  undefined *puStack_1100;
  undefined *puStack_10f8;
  undefined *puStack_10f0;
  long lStack_10e8;
  long lStack_10e0;
  undefined8 *puStack_10d8;
  long lStack_10d0;
  undefined4 uStack_10c8;
  undefined **ppuStack_10b8;
  ulong uStack_10b0;
  undefined1 auStack_10a8 [16];
  undefined **ppuStack_1098;
  undefined1 *puStack_1090;
  char *pcStack_1088;
  undefined **ppuStack_1080;
  ulong uStack_1078;
  undefined *puStack_1070;
  ulong uStack_1068;
  undefined *puStack_1060;
  ulong uStack_1058;
  byte *pbStack_1050;
  byte *pbStack_1048;
  undefined *puStack_1040;
  long lStack_1038;
  long lStack_1030;
  long lStack_1028;
  byte bStack_1020;
  undefined *apuStack_fc8 [4];
  int iStack_fa8;
  undefined8 uStack_f98;
  undefined1 *puStack_c60;
  undefined *puStack_c58;
  long *plStack_c50;
  ulong *puStack_c48;
  ulong *puStack_c40;
  long lStack_c38;
  long lStack_c30;
  long lStack_c28;
  long lStack_c20;
  byte bStack_c18;
  uint uStack_a38;
  undefined8 uStack_858;
  ulong uStack_848;
  long *plStack_840;
  long *plStack_838;
  long *plStack_830;
  undefined1 auStack_828 [512];
  uint uStack_628;
  undefined *puStack_438;
  long *plStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  
  plVar20 = *(long **)(param_1 + 8);
  if (*(int *)(plVar20[4] + 0x28) != 0) {
    return;
  }
  if (*(int *)(*(long *)(plVar20[4] + 0x88) + 0x398) != 1) {
    *(undefined1 *)plVar20[6] = 0;
    return;
  }
  lVar25 = *plVar20;
  *(undefined1 *)plVar20[6] = 1;
  if ((plVar20[1] == 0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)plVar20[1] == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*(long *)plVar20[3] + 0x10))();
  if ((plVar20[1] == 0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)plVar20[1] == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  LOCK();
  *(undefined4 *)(plVar20[3] + 0x10) = 4;
  UNLOCK();
  if ((plVar20[1] == 0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)plVar20[1] == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar3 = plVar20[3];
  plStack_838 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plStack_838 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar5 = _UNK_013fa7f4;
  uStack_848 = 0x39;
  plStack_840 = (long *)0x34;
  *(undefined8 *)((long)plStack_838 + 0x20) = _DAT_013fa7ec;
  *(undefined8 *)((long)plStack_838 + 0x28) = uVar5;
  uVar5 = _UNK_013fa7e4;
  *(undefined8 *)((long)plStack_838 + 0x10) = _DAT_013fa7dc;
  *(undefined8 *)((long)plStack_838 + 0x18) = uVar5;
  uVar14 = _UNK_013fa7d8;
  uVar13 = _UNK_013fa7d4;
  uVar12 = _UNK_013fa7d0;
  *(undefined4 *)plStack_838 = _DAT_013fa7cc;
  *(undefined4 *)((long)plStack_838 + 4) = uVar12;
  *(undefined4 *)((long)plStack_838 + 8) = uVar13;
  *(undefined4 *)((long)plStack_838 + 0xc) = uVar14;
  *(undefined4 *)((long)plStack_838 + 0x30) = 0x646c726f;
  *(undefined1 *)((long)plStack_838 + 0x34) = 0;
  func_0x0c97bf40(lVar3,&uStack_848);
  if ((uStack_848 & 1) != 0) {
    func_0x0412a280(plStack_838,uStack_848 & 0xfffffffffffffffe);
  }
  puStack_10f0 = (undefined *)lVar25;
  func_0x05f9bca0(*(undefined8 *)(plVar20[4] + 0x88));
  puVar4 = (undefined4 *)plVar20[4];
  uVar5 = *(undefined8 *)(puVar4 + 0x22);
  uStack_628 = 0;
  uStack_848 = 0;
  plStack_840 = (long *)0x0;
  plStack_838 = (long *)0x0;
  plStack_830 = (long *)0x0;
  plStack_1110 = plVar20;
  cVar17 = func_0x0edf96c0(plVar20[8] + 0xb0,&uStack_848);
  plVar20 = plStack_830;
  if (cVar17 != '\0') {
    if (uStack_848 == 0) {
      if (plStack_838 != plStack_830) {
        plVar21 = plStack_838;
        do {
          if ((plVar21[1] != 0) &&
             (plVar19 = (long *)func_0x0412c300(), plStack_430 = plVar19, plVar19 != (long *)0x0)) {
            puStack_438 = (undefined *)*plVar21;
            if (puStack_438 != (undefined *)0x0) {
              puStack_1060 = (undefined *)CONCAT44(puStack_1060._4_4_,*puVar4);
              (**(code **)(*(long *)(puStack_438 + 0x40) + 0x10))
                        (puStack_438 + 0x40,&puStack_1060,uVar5);
            }
            LOCK();
            plVar1 = plVar19 + 1;
            lVar25 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar25 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              func_0x0412c2d0(plVar19);
            }
          }
          plVar21 = plVar21 + 2;
        } while (plVar21 != plVar20);
      }
    }
    else {
      puStack_438 = (undefined *)CONCAT44(puStack_438._4_4_,*puVar4);
      (**(code **)(*(long *)(uStack_848 + 0x40) + 0x10))(uStack_848 + 0x40,&puStack_438,uVar5);
    }
  }
  puVar23 = puStack_10f0;
  plVar20 = plStack_1110;
  if ((ulong)uStack_628 != 0xffffffff) {
    (**(code **)(&UNK_0f0172d0 + (ulong)uStack_628 * 8))(&puStack_438,auStack_828);
  }
  plVar21 = plStack_840;
  uStack_628 = 0xffffffff;
  if (plStack_840 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_840 + 1;
    lVar25 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plStack_840 + 0x10))(plStack_840);
      func_0x0412c2d0(plVar21);
    }
  }
  if ((plVar20[1] == 0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)plVar20[1] == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  LOCK();
  *(int *)(plVar20[3] + 8) = *(int *)(plVar20[3] + 8) + 1;
  UNLOCK();
  puStack_10d8 = (undefined8 *)0x0;
  lStack_10d0 = 0;
  lStack_10e8 = 0;
  lStack_10e0 = 0;
  uStack_10c8 = 0x3f800000;
  lVar25 = plVar20[4];
  bVar2 = *(byte *)(lVar25 + 0x98);
  uVar22 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar22 = *(ulong *)(lVar25 + 0xa0);
  }
  if (uVar22 == 0) {
    (**(code **)(**(long **)((long)puVar23 + 0x20) + 0x100))
              (&uStack_11a8,*(long **)((long)puVar23 + 0x20),lVar25 + 8);
  }
  else if ((bVar2 & 1) == 0) {
    puStack_1198 = *(undefined **)(lVar25 + 0xa8);
    uStack_11a8 = *(uint *)(lVar25 + 0x98);
    uStack_11a4 = *(undefined4 *)(lVar25 + 0x9c);
    uStack_11a0 = *(undefined4 *)(lVar25 + 0xa0);
    uStack_119c = *(undefined4 *)(lVar25 + 0xa4);
  }
  else {
    func_0x0412e5e0(&uStack_11a8,*(undefined8 *)(lVar25 + 0xa8),*(ulong *)(lVar25 + 0xa0));
  }
  bVar27 = (uStack_11a8 & 1) == 0;
  puStack_438 = puStack_1198;
  if (bVar27) {
    puStack_438 = (undefined *)((long)&uStack_11a8 + 1);
  }
  plStack_430 = (long *)(ulong)((byte)uStack_11a8 >> 1);
  if (!bVar27) {
    plStack_430 = (long *)CONCAT44(uStack_119c,uStack_11a0);
  }
  puStack_428 = &UNK_01dd50c1;
  uStack_420 = 0xe;
  func_0x049151c0(&uStack_848,&puStack_438,2,0x2f);
  func_0x05feb8f0(puVar23,&lStack_10e8,&uStack_848,4);
  bVar27 = (uStack_11a8 & 1) == 0;
  puStack_1060 = puStack_1198;
  if (bVar27) {
    puStack_1060 = (undefined *)((long)&uStack_11a8 + 1);
  }
  uStack_1058 = (ulong)((byte)uStack_11a8 >> 1);
  if (!bVar27) {
    uStack_1058 = CONCAT44(uStack_119c,uStack_11a0);
  }
  pbStack_1050 = &UNK_01dd50d9;
  pbStack_1048 = (byte *)0xe;
  func_0x049151c0(&puStack_438,&puStack_1060,2,0x2f);
  func_0x05feb8f0(puVar23,&lStack_10e8,&puStack_438,6);
  if ((DAT_0f5618e0 == '\0') && (iVar18 = func_0x04108328(&DAT_0f5618e0), iVar18 != 0)) {
    func_0x04160690(0xf5618c8,&UNK_012d82f4);
    func_0x0eee2f40(&UNK_0412ed50,0xf5618c8,0xf53dab8);
    func_0x0410844d(&DAT_0f5618e0);
  }
  if ((DAT_0f561900 == '\0') && (iVar18 = func_0x04108328(&DAT_0f561900), iVar18 != 0)) {
    func_0x04160690(0xf5618e8,&UNK_014af2c8);
    func_0x0eee2f40(&UNK_0412ed50,0xf5618e8,0xf53dab8);
    func_0x0410844d(&DAT_0f561900);
  }
  lVar25 = 0;
  puStack_10f0 = &UNK_0eeed250;
  do {
    lVar3 = *(long *)(&UNK_0f016120 + lVar25);
    uStack_1058 = CONCAT44(uStack_119c,uStack_11a0);
    puStack_1060 = puStack_1198;
    if ((uStack_11a8 & 1) == 0) {
      puStack_1060 = (undefined *)((long)&uStack_11a8 + 1);
      uStack_1058 = (ulong)((byte)uStack_11a8 >> 1);
    }
    pbStack_1050 = &UNK_0171b740;
    pbStack_1048 = (byte *)0x6;
    puStack_1040 = &UNK_01209143;
    lStack_1038 = 5;
    lStack_1028 = func_0x0eee2e90(lVar3);
    lStack_1030 = lVar3;
    func_0x048ad670(auStack_1190,&puStack_1060,4,0x2f);
    if ((DAT_0f7b8fb8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7b8fb8), iVar18 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    uStack_10b0 = (ulong)(auStack_1190[0] >> 1);
    ppuStack_10b8 = (undefined **)(auStack_1190 + 1);
    if (((uint)auStack_1190 & 1) != 0) {
      uStack_10b0 = uStack_1188;
      ppuStack_10b8 = ppuStack_1180;
    }
    cVar17 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&ppuStack_10b8);
    if (cVar17 != '\0') {
      pbVar6 = *(byte **)(&UNK_0f016128 + lVar25);
      uStack_1058 = CONCAT44(uStack_119c,uStack_11a0);
      puStack_1060 = puStack_1198;
      if ((uStack_11a8 & 1) == 0) {
        puStack_1060 = (undefined *)((long)&uStack_11a8 + 1);
        uStack_1058 = (ulong)((byte)uStack_11a8 >> 1);
      }
      bVar27 = (*pbVar6 & 1) != 0;
      pbStack_1050 = pbVar6 + 1;
      if (bVar27) {
        pbStack_1050 = *(byte **)(pbVar6 + 0x10);
      }
      pbStack_1048 = (byte *)(ulong)(*pbVar6 >> 1);
      if (bVar27) {
        pbStack_1048 = *(byte **)(pbVar6 + 8);
      }
      func_0x048ad670(&uStack_1178,&puStack_1060,2,0x2f);
      if ((DAT_0f7b8fb8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7b8fb8), iVar18 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      bVar27 = (uStack_1178 & 1) == 0;
      puStack_1070 = puStack_1168;
      if (bVar27) {
        puStack_1070 = (undefined *)((long)&uStack_1178 + 1);
      }
      uStack_1068 = (ulong)((byte)uStack_1178 >> 1);
      if (!bVar27) {
        uStack_1068 = CONCAT44(uStack_116c,uStack_1170);
      }
      (**(code **)(_DAT_0f7b8f98 + 0x80))(&puStack_1060,&DAT_0f7b8f98,&puStack_1070);
      puStack_c58 = (undefined *)0x98dba2dc850bd434;
      plStack_c50 = (long *)&UNK_0140f690;
      puStack_c48 = (ulong *)0x1;
      puStack_c40 = (ulong *)CONCAT44(puStack_c40._4_4_,0x2e);
      if (bStack_1020 == 0) {
        func_0x0eedea30(&uStack_1158);
        FUN_0eedeb80(2,0x2d,&puStack_1060,&uStack_1158,&puStack_c58);
        if (((ulong)uStack_1158 & 1) != 0) {
          func_0x0412a280(puStack_1148,(ulong)uStack_1158 & 0xfffffffffffffffe);
        }
      }
      lVar3 = lStack_1038;
      if ((bStack_1020 & 1) == 0) {
        lVar10 = lStack_1030;
        if (lStack_1038 != 0) {
          while (lVar3 != lVar10) {
            func_0x048b3e80(lVar10 + -0x40);
            lVar10 = lVar10 + -0x40;
          }
          lStack_1030 = lVar3;
          func_0x0412a280(lStack_1038,lStack_1028 - lStack_1038);
        }
        pbVar16 = pbStack_1050;
        pbVar6 = pbStack_1048;
        if (pbStack_1050 != (byte *)0x0) {
          for (; pbVar16 != pbVar6; pbVar6 = pbVar6 + -0x50) {
            if ((pbVar6[-8] == 1) && ((pbVar6[-0x30] & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(pbVar6 + -0x20),
                              *(ulong *)(pbVar6 + -0x30) & 0xfffffffffffffffe);
            }
          }
          pbStack_1048 = pbVar16;
          func_0x0412a280(pbStack_1050,(long)puStack_1040 - (long)pbStack_1050);
        }
      }
      pbVar6 = *(byte **)(&UNK_0f016130 + lVar25);
      uStack_1058 = CONCAT44(uStack_119c,uStack_11a0);
      puStack_1060 = puStack_1198;
      if ((uStack_11a8 & 1) == 0) {
        puStack_1060 = (undefined *)((long)&uStack_11a8 + 1);
        uStack_1058 = (ulong)((byte)uStack_11a8 >> 1);
      }
      bVar27 = (*pbVar6 & 1) != 0;
      pbStack_1050 = pbVar6 + 1;
      if (bVar27) {
        pbStack_1050 = *(byte **)(pbVar6 + 0x10);
      }
      pbStack_1048 = (byte *)(ulong)(*pbVar6 >> 1);
      if (bVar27) {
        pbStack_1048 = *(byte **)(pbVar6 + 8);
      }
      func_0x048ad670(&uStack_1108,&puStack_1060,2,0x2f);
      func_0x04863060(auStack_10a8,6);
      plStack_c50 = (long *)((ulong)uStack_1108 >> 1 & 0x7f);
      puStack_c58 = (undefined *)((long)&uStack_1108 + 1);
      if (((ulong)uStack_1108 & 1) != 0) {
        plStack_c50 = (long *)puStack_1100;
        puStack_c58 = puStack_10f8;
      }
      uStack_f98 = 0;
      apuStack_fc8[0] = puStack_10f0;
      func_0x0ee5df20(&puStack_1060,&UNK_0ef44650,&puStack_c58,8);
      puStack_1060 = &UNK_0ef445e8;
      apuStack_fc8[0] = &UNK_0ef44638;
      pbStack_1050 = &UNK_0ef44610;
      func_0x0485e1c0(&puStack_c58);
      if (((iStack_fa8 != 0) ||
          (cVar17 = func_0x0485e6a0(&puStack_c58,&puStack_1060,auStack_10a8,0), cVar17 == '\0')) ||
         (cVar17 = func_0x04864270(auStack_10a8), cVar17 == '\0')) {
        func_0x04863060(&uStack_1158,6);
        func_0x04863790(auStack_10a8,&uStack_1158);
        func_0x04863610(&uStack_1158);
      }
      func_0x0485e2d0(&puStack_c58);
      puStack_1060 = &UNK_0ef446c8;
      apuStack_fc8[0] = &UNK_0ef44718;
      pbStack_1050 = &UNK_0ef446f0;
      func_0x0ee5c730(&pbStack_1048);
      func_0x0413c8a0(&puStack_1060,&UNK_0ef44658);
      func_0x04138180(apuStack_fc8);
      cStack_11a9 = '\0';
      if ((DAT_0f7b8fb8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7b8fb8), iVar18 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      puStack_1090 = auStack_10a8;
      ppuStack_1080 = ppuStack_1180;
      uStack_1078 = uStack_1188;
      if (((uint)auStack_1190 & 1) == 0) {
        ppuStack_1080 = (undefined **)(auStack_1190 + 1);
        uStack_1078 = (ulong)(auStack_1190[0] >> 1);
      }
      ppuStack_1098 = (undefined **)&uStack_1178;
      pcStack_1088 = &cStack_11a9;
      (**(code **)(_DAT_0f7b8f98 + 0xb0))
                (&puStack_1060,&DAT_0f7b8f98,&ppuStack_1080,0x102,&UNK_05ff0be0,&ppuStack_1098);
      puStack_c58 = (undefined *)0x98dba2dc850bd434;
      plStack_c50 = (long *)&UNK_0140f690;
      puStack_c48 = (ulong *)0x1;
      puStack_c40 = (ulong *)CONCAT44(puStack_c40._4_4_,0x8f);
      if (bStack_1020 == 0) {
        func_0x0eedea30(&uStack_1158);
        FUN_0eedeb80(2,0x2d,&puStack_1060,&uStack_1158,&puStack_c58);
        if (((ulong)uStack_1158 & 1) != 0) {
          func_0x0412a280(puStack_1148,(ulong)uStack_1158 & 0xfffffffffffffffe);
        }
      }
      lVar3 = lStack_1038;
      if ((bStack_1020 & 1) == 0) {
        lVar10 = lStack_1030;
        if (lStack_1038 != 0) {
          while (lVar3 != lVar10) {
            func_0x048b3e80(lVar10 + -0x40);
            lVar10 = lVar10 + -0x40;
          }
          lStack_1030 = lVar3;
          func_0x0412a280(lStack_1038,lStack_1028 - lStack_1038);
        }
        pbVar16 = pbStack_1050;
        pbVar6 = pbStack_1048;
        if (pbStack_1050 != (byte *)0x0) {
          for (; pbVar16 != pbVar6; pbVar6 = pbVar6 + -0x50) {
            if ((pbVar6[-8] == 1) && ((pbVar6[-0x30] & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(pbVar6 + -0x20),
                              *(ulong *)(pbVar6 + -0x30) & 0xfffffffffffffffe);
            }
          }
          pbStack_1048 = pbVar16;
          func_0x0412a280(pbStack_1050,(long)puStack_1040 - (long)pbStack_1050);
        }
      }
      if (cStack_11a9 == '\x01') {
        plStack_c50 = (long *)((ulong)uStack_1108 >> 1 & 0x7f);
        puStack_c58 = (undefined *)((long)&uStack_1108 + 1);
        if (((ulong)uStack_1108 & 1) != 0) {
          plStack_c50 = (long *)puStack_1100;
          puStack_c58 = puStack_10f8;
        }
        uStack_f98 = 0;
        apuStack_fc8[0] = puStack_10f0;
        func_0x0ee5df20(&puStack_1060,&UNK_0ef46fd8,&puStack_c58,0x10);
        puStack_1060 = &UNK_0ef46f70;
        apuStack_fc8[0] = &UNK_0ef46fc0;
        pbStack_1050 = &UNK_0ef46f98;
        if (iStack_fa8 == 0) {
          func_0x04868330(&puStack_c58);
          func_0x04868370(&uStack_1158,&puStack_c58,auStack_10a8);
          plVar20 = (long *)((ulong)uStack_1158 >> 1 & 0x7f);
          puVar23 = (undefined *)((long)&uStack_1158 + 1);
          if (((ulong)uStack_1158 & 1) != 0) {
            plVar20 = plStack_1150;
            puVar23 = puStack_1148;
          }
          func_0x04885260(&pbStack_1050,puVar23,plVar20);
          if (((ulong)uStack_1158 & 1) != 0) {
            func_0x0412a280(puStack_1148,(ulong)uStack_1158 & 0xfffffffffffffffe);
          }
          func_0x05f9f9a0(&puStack_c58);
        }
        puStack_1060 = &UNK_0ef47050;
        apuStack_fc8[0] = &UNK_0ef470a0;
        pbStack_1050 = &UNK_0ef47078;
        func_0x0ee5c730(&pbStack_1048);
        func_0x0413c8a0(&puStack_1060,&UNK_0ef46fe0);
        func_0x04138180(apuStack_fc8);
      }
      func_0x04863610(auStack_10a8);
      if (((ulong)uStack_1108 & 1) != 0) {
        func_0x0412a280(puStack_10f8,(ulong)uStack_1108 & 0xfffffffffffffffe);
      }
      if ((uStack_1178 & 1) != 0) {
        func_0x0412a280(puStack_1168,CONCAT44(uStack_1174,uStack_1178) & 0xfffffffffffffffe);
      }
    }
    if (((uint)auStack_1190 & 1) != 0) {
      func_0x0412a280(ppuStack_1180,CONCAT44(uStack_118c,auStack_1190) & 0xfffffffffffffffe);
    }
    lVar25 = lVar25 + 0x18;
  } while (lVar25 != 0x30);
  lVar25 = plStack_1110[8];
  puVar7 = (uint *)plStack_1110[4];
  func_0x0eee2dd0(&puStack_1060,0,0x408);
  bVar27 = (uStack_11a8 & 1) == 0;
  puVar23 = puStack_1198;
  if (bVar27) {
    puVar23 = (undefined *)((long)&uStack_11a8 + 1);
  }
  puVar26 = (undefined1 *)(ulong)((byte)uStack_11a8 >> 1);
  if (!bVar27) {
    puVar26 = (undefined1 *)CONCAT44(uStack_119c,uStack_11a0);
  }
  if (puVar26 < (undefined1 *)0x400) {
    if (puVar26 != (undefined1 *)0x0) {
      func_0x0eee2ee0(&puStack_1060,puVar23,puVar26);
    }
    puStack_c60 = puVar26;
    *(undefined1 *)((long)&puStack_1060 + (long)puVar26) = 0;
  }
  uStack_a38 = 0;
  puStack_c58 = (undefined *)0x0;
  plStack_c50 = (long *)0x0;
  puStack_c48 = (ulong *)0x0;
  puStack_c40 = (ulong *)0x0;
  cVar17 = func_0x0edf96c0(lVar25 + 0x108,&puStack_c58);
  puVar11 = puStack_c40;
  if (cVar17 != '\0') {
    if (puStack_c58 == (undefined *)0x0) {
      if (puStack_c48 != puStack_c40) {
        puVar24 = puStack_c48;
        do {
          if ((puVar24[1] != 0) &&
             (plVar20 = (long *)func_0x0412c300(), plStack_1150 = plVar20, plVar20 != (long *)0x0))
          {
            uStack_1158 = (undefined *)*puVar24;
            if (uStack_1158 != (undefined *)0x0) {
              auStack_1190 = (undefined1  [4])*puVar7;
              (**(code **)(*(long *)((long)uStack_1158 + 0x40) + 0x10))
                        ((long)uStack_1158 + 0x40,auStack_1190,&puStack_1060);
            }
            LOCK();
            plVar21 = plVar20 + 1;
            lVar25 = *plVar21;
            *plVar21 = *plVar21 + -1;
            UNLOCK();
            if (lVar25 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              func_0x0412c2d0(plVar20);
            }
          }
          puVar24 = puVar24 + 2;
        } while (puVar24 != puVar11);
      }
    }
    else {
      uStack_1158 = (undefined *)CONCAT44(uStack_1158._4_4_,*puVar7);
      (**(code **)(*(long *)(puStack_c58 + 0x40) + 0x10))
                (puStack_c58 + 0x40,&uStack_1158,&puStack_1060);
    }
  }
  if ((ulong)uStack_a38 != 0xffffffff) {
    (**(code **)(&UNK_0f0172d0 + (ulong)uStack_a38 * 8))(&uStack_1158,&lStack_c38);
  }
  plVar20 = plStack_c50;
  uStack_a38 = 0xffffffff;
  if (plStack_c50 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_c50 + 1;
    lVar25 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plStack_c50 + 0x10))(plStack_c50);
      func_0x0412c2d0(plVar20);
    }
  }
  bVar27 = (uStack_11a8 & 1) == 0;
  puStack_c58 = puStack_1198;
  if (bVar27) {
    puStack_c58 = (undefined *)((long)&uStack_11a8 + 1);
  }
  plStack_c50 = (long *)(ulong)((byte)uStack_11a8 >> 1);
  if (!bVar27) {
    plStack_c50 = (long *)CONCAT44(uStack_119c,uStack_11a0);
  }
  puStack_c48 = (ulong *)&UNK_0171b740;
  puStack_c40 = (ulong *)0x6;
  func_0x049151c0(&puStack_1060,&puStack_c58,2,0x2f);
  plVar20 = plStack_1110;
  if ((DAT_0f7b8fb8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7b8fb8), iVar18 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    plVar20 = plStack_1110;
  }
  puStack_1100 = puStack_c60;
  uStack_1108 = &puStack_1060;
  cVar17 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&uStack_1108);
  if (cVar17 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7b8fb8), iVar18 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      plVar20 = plStack_1110;
    }
    puStack_1090 = puStack_c60;
    ppuStack_1098 = &puStack_1060;
    (**(code **)(_DAT_0f7b8f98 + 0x98))(&puStack_c58,&DAT_0f7b8f98,&ppuStack_1098);
    uStack_1158 = (undefined *)0xe48783ca8524476c;
    plStack_1150 = (long *)&UNK_0140f690;
    puStack_1148 = (undefined *)0x1;
    puStack_1140 = (undefined *)CONCAT44(puStack_1140._4_4_,0x103);
    if (bStack_c18 == 0) {
      func_0x0eedea30(auStack_1190);
      FUN_0eedeb80(2,0x2d,&puStack_c58,auStack_1190,&uStack_1158);
      if (((uint)auStack_1190 & 1) != 0) {
        func_0x0412a280(ppuStack_1180,CONCAT44(uStack_118c,auStack_1190) & 0xfffffffffffffffe);
      }
    }
    lVar25 = lStack_c30;
    if ((bStack_c18 & 1) == 0) {
      if (lStack_c30 != 0) {
        while (lVar25 != lStack_c28) {
          func_0x048b3e80(lStack_c28 + -0x40);
          lStack_c28 = lStack_c28 + -0x40;
        }
        lStack_c28 = lVar25;
        func_0x0412a280(lStack_c30,lStack_c20 - lStack_c30);
      }
      puVar24 = puStack_c48;
      puVar11 = puStack_c40;
      if (puStack_c48 != (ulong *)0x0) {
        for (; puVar24 != puVar11; puVar11 = (ulong *)((long)puVar11 + -0x50)) {
          if ((*(char *)((long)puVar11 + -8) == '\x01') &&
             ((*(byte *)((long)puVar11 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)((long)puVar11 + -0x20),
                            *(ulong *)((long)puVar11 + -0x30) & 0xfffffffffffffffe);
          }
        }
        puStack_c40 = puVar24;
        func_0x0412a280(puStack_c48,lStack_c38 - (long)puStack_c48);
      }
    }
  }
  bVar27 = (uStack_11a8 & 1) == 0;
  uStack_1158 = puStack_1198;
  if (bVar27) {
    uStack_1158 = (undefined *)((long)&uStack_11a8 + 1);
  }
  plStack_1150 = (long *)(ulong)((byte)uStack_11a8 >> 1);
  if (!bVar27) {
    plStack_1150 = (long *)CONCAT44(uStack_119c,uStack_11a0);
  }
  puStack_1148 = &UNK_01479fdc;
  puStack_1140 = (undefined *)0xd;
  func_0x049151c0(&puStack_c58,&uStack_1158,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar18 = func_0x04108328(&DAT_0f7b8fb8), iVar18 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    plVar20 = plStack_1110;
  }
  uStack_10b0 = uStack_858;
  ppuStack_10b8 = &puStack_c58;
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_1158,&DAT_0f7b8f98,&ppuStack_10b8);
  lVar25 = lStack_1130;
  if (cStack_1118 == '\0') {
    if (lStack_1130 != 0) {
      while (lVar25 != lStack_1128) {
        func_0x048b3e80(lStack_1128 + -0x40);
        lStack_1128 = lStack_1128 + -0x40;
      }
      lStack_1128 = lVar25;
      func_0x0412a280(lStack_1130,lStack_1120 - lStack_1130);
    }
    puVar15 = puStack_1148;
    puVar23 = puStack_1140;
    if (puStack_1148 != (undefined *)0x0) {
      for (; puVar15 != puVar23; puVar23 = puVar23 + -0x50) {
        if ((puVar23[-8] == '\x01') && ((puVar23[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar23 + -0x20),
                          *(ulong *)(puVar23 + -0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_1140 = puVar15;
      func_0x0412a280(puStack_1148,lStack_1138 - (long)puStack_1148);
    }
  }
  if (lStack_10d0 == 0) goto LAB_05feb2d0;
  if ((uStack_11a8 & 1) == 0) {
    puStack_1168 = puStack_1198;
    uStack_1178 = uStack_11a8;
    uStack_1174 = uStack_11a4;
    uStack_1170 = uStack_11a0;
    uStack_116c = uStack_119c;
  }
  else {
    func_0x0412e5e0(&uStack_1178,puStack_1198,CONCAT44(uStack_119c,uStack_11a0));
  }
  bVar27 = (uStack_1178 & 1) == 0;
  uStack_1158 = puStack_1168;
  if (bVar27) {
    uStack_1158 = (undefined *)((long)&uStack_1178 + 1);
  }
  plStack_1150 = (long *)(ulong)((byte)uStack_1178 >> 1);
  if (!bVar27) {
    plStack_1150 = (long *)CONCAT44(uStack_116c,uStack_1170);
  }
  puStack_1148 = &UNK_01211e85;
  puStack_1140 = (undefined *)0x20;
  func_0x048ad670(auStack_1190,&uStack_1158,2,0x2f);
  func_0x05f9e710(auStack_1190,&lStack_10e8);
  if (((uint)auStack_1190 & 1) == 0) {
    if ((uStack_1178 & 1) == 0) goto LAB_05feb09b;
LAB_05feb0d2:
    func_0x0412a280(puStack_1168,CONCAT44(uStack_1174,uStack_1178) & 0xfffffffffffffffe);
    if ((uStack_11a8 & 1) != 0) goto LAB_05feb0ec;
LAB_05feb0a2:
    puStack_1168 = puStack_1198;
    uStack_1178 = uStack_11a8;
    uStack_1174 = uStack_11a4;
    uStack_1170 = uStack_11a0;
    uStack_116c = uStack_119c;
  }
  else {
    func_0x0412a280(ppuStack_1180,CONCAT44(uStack_118c,auStack_1190) & 0xfffffffffffffffe);
    if ((uStack_1178 & 1) != 0) goto LAB_05feb0d2;
LAB_05feb09b:
    if ((uStack_11a8 & 1) == 0) goto LAB_05feb0a2;
LAB_05feb0ec:
    func_0x0412e5e0(&uStack_1178,puStack_1198,CONCAT44(uStack_119c,uStack_11a0));
  }
  bVar27 = (uStack_1178 & 1) != 0;
  uStack_1158 = (undefined *)((long)&uStack_1178 + 1);
  if (bVar27) {
    uStack_1158 = puStack_1168;
  }
  plStack_1150 = (long *)(ulong)((byte)uStack_1178 >> 1);
  if (bVar27) {
    plStack_1150 = (long *)CONCAT44(uStack_116c,uStack_1170);
  }
  puStack_1148 = &UNK_01367826;
  puStack_1140 = (undefined *)0x20;
  func_0x048ad670(auStack_1190,&uStack_1158,2,0x2f);
  func_0x05f9e710(auStack_1190,&lStack_10e8);
  if (((uint)auStack_1190 & 1) != 0) {
    func_0x0412a280(ppuStack_1180,CONCAT44(uStack_118c,auStack_1190) & 0xfffffffffffffffe);
  }
  if ((uStack_1178 & 1) != 0) {
    func_0x0412a280(puStack_1168,CONCAT44(uStack_1174,uStack_1178) & 0xfffffffffffffffe);
  }
  bVar27 = (uStack_11a8 & 1) == 0;
  uStack_1158 = puStack_1198;
  if (bVar27) {
    uStack_1158 = (undefined *)((long)&uStack_11a8 + 1);
  }
  plStack_1150 = (long *)(ulong)((byte)uStack_11a8 >> 1);
  if (!bVar27) {
    plStack_1150 = (long *)CONCAT44(uStack_119c,uStack_11a0);
  }
  puStack_1148 = (undefined *)0xf561899;
  puStack_1140 = (undefined *)(ulong)(DAT_0f561898 >> 1);
  if ((DAT_0f561898 & 1) != 0) {
    puStack_1140 = (undefined *)_DAT_0f5618a0;
    puStack_1148 = (undefined *)_DAT_0f5618a8;
  }
  func_0x048ad670(auStack_1190,&uStack_1158,2,0x2f);
  func_0x05f9f0d0(auStack_1190,&lStack_10e8);
  if (((uint)auStack_1190 & 1) != 0) {
    func_0x0412a280(ppuStack_1180,CONCAT44(uStack_118c,auStack_1190) & 0xfffffffffffffffe);
  }
  bVar27 = (uStack_11a8 & 1) != 0;
  uStack_1158 = (undefined *)((long)&uStack_11a8 + 1);
  if (bVar27) {
    uStack_1158 = puStack_1198;
  }
  plStack_1150 = (long *)(ulong)((byte)uStack_11a8 >> 1);
  if (bVar27) {
    plStack_1150 = (long *)CONCAT44(uStack_119c,uStack_11a0);
  }
  puStack_1148 = (undefined *)0xf5618b1;
  puStack_1140 = (undefined *)(ulong)(DAT_0f5618b0 >> 1);
  if ((DAT_0f5618b0 & 1) != 0) {
    puStack_1140 = _DAT_0f5618b8;
    puStack_1148 = _DAT_0f5618c0;
  }
  func_0x048ad670(auStack_1190,&uStack_1158,2,0x2f);
  func_0x05f9f0d0(auStack_1190,&lStack_10e8);
  if (((uint)auStack_1190 & 1) != 0) {
    func_0x0412a280(ppuStack_1180,CONCAT44(uStack_118c,auStack_1190) & 0xfffffffffffffffe);
  }
LAB_05feb2d0:
  if ((plVar20[1] == 0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)plVar20[1] == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01448d52),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  LOCK();
  *(int *)(plVar20[3] + 8) = *(int *)(plVar20[3] + 8) + 1;
  UNLOCK();
  lVar25 = lStack_10e8;
  puVar9 = puStack_10d8;
  if ((uStack_11a8 & 1) != 0) {
    func_0x0412a280(puStack_1198,CONCAT44(uStack_11a4,uStack_11a8) & 0xfffffffffffffffe);
    lVar25 = lStack_10e8;
    puVar9 = puStack_10d8;
  }
  while (puVar9 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar9;
    lStack_10e8 = lVar25;
    func_0x0412a280(puVar9,0x20);
    lVar25 = lStack_10e8;
    puVar9 = puVar8;
  }
  lStack_10e8 = 0;
  if (lVar25 != 0) {
    func_0x0412a280(lVar25,lStack_10e0 << 3);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13fa7cc  progressScreen.editor.message.convert.projectToWorld
 * 0x13fa7dc  ditor.message.convert.projectToWorld
 * 0x13fa7ec  nvert.projectToWorld
 */
