/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd252b20 (ELF vaddr 0xd152b20)
 * Label: caller-of-callee
 * Body:  [[0d252b20, 0d25705e] [0d25710e, 0d25711d] [0d2571f4, 0d25725e] [0d25730a, 0d2573b2] [0d25786d, 0d257884] [0d2578f6, 0d257d30]]
 * Ghidra: FUN_0d252b20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d252b20(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  undefined1 uVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  undefined4 *puVar27;
  undefined *puVar28;
  byte *pbVar29;
  int *piVar30;
  byte *pbVar31;
  long *plVar32;
  undefined *puVar33;
  undefined8 uVar34;
  ulong *puVar35;
  undefined *puVar36;
  uint *puVar37;
  long **pplVar38;
  char *pcVar39;
  bool bVar40;
  undefined8 uStack_758;
  undefined1 uStack_749;
  undefined8 uStack_738;
  long *plStack_730;
  undefined4 *puStack_728;
  ulong uStack_720;
  ulong uStack_718;
  long lStack_710;
  undefined8 uStack_708;
  ulong uStack_700;
  byte bStack_6f8;
  char cStack_6f0;
  uint *puStack_6e8;
  long *plStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  long *plStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  byte bStack_698;
  undefined8 uStack_688;
  long *plStack_680;
  undefined *puStack_678;
  long *plStack_670;
  undefined8 uStack_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined8 uStack_650;
  byte bStack_648;
  undefined8 uStack_638;
  long *plStack_630;
  ulong uStack_628;
  byte *pbStack_620;
  char *pcStack_618;
  long *plStack_610;
  ulong uStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  long *plStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  byte *pbStack_590;
  uint *puStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  uint *puStack_530;
  ulong *puStack_528;
  long *plStack_520;
  long *plStack_518;
  long *plStack_510;
  long *plStack_508;
  ulong *puStack_500;
  undefined8 uStack_4f8;
  char cStack_4f0;
  undefined1 uStack_4ef;
  undefined2 uStack_4ee;
  uint uStack_4ec;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  uint uStack_4b8;
  char cStack_4b0;
  uint auStack_4a8 [236];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  byte *pbStack_98;
  ulong uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined *puStack_68;
  long *plStack_60;
  undefined **ppuStack_48;
  
  *param_1 = (long)&UNK_0f45bb50;
  plStack_520 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar17 == (ulong *)0x0) goto LAB_0d256c61;
  do {
    puVar17[0x10] = 0;
    puVar17[0x11] = 0;
    puVar17[0xe] = 0;
    puVar17[0xf] = 0;
    puVar17[0xc] = 0;
    puVar17[0xd] = 0;
    puVar17[10] = 0;
    puVar17[0xb] = 0;
    puVar17[8] = 0;
    puVar17[9] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *puVar17 = 0;
    puVar17[1] = 0;
    func_0x041b3980(puVar17);
    *(undefined2 *)(puVar17 + 0xe) = 0x100;
    puVar17[0xf] = 0;
    puVar17[0x10] = 0;
    *(byte *)(puVar17 + 0x11) = 0;
    param_1[4] = (long)puVar17;
    plStack_508 = param_1 + 5;
    puStack_588 = (uint *)(param_1 + 0xe);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = param_2[10];
    puVar37 = (uint *)(param_1 + 0x12);
    param_1[0x14] = param_2[3];
    lVar18 = param_2[2];
    param_1[0x12] = param_2[1];
    param_1[0x13] = lVar18;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    puStack_6e8 = (uint *)(param_1 + 0x15);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1a] = param_2[6];
    uVar15 = *(undefined4 *)((long)param_2 + 0x24);
    uVar3 = *(undefined4 *)(param_2 + 5);
    uVar4 = *(undefined4 *)((long)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((long)param_1 + 0xc4) = uVar15;
    *(undefined4 *)(param_1 + 0x19) = uVar3;
    *(undefined4 *)((long)param_1 + 0xcc) = uVar4;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    puStack_530 = puVar37;
    func_0x0412d440(param_1 + 0x20);
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x36] = 0;
    lVar18 = func_0x0417cc60();
    param_1[0x37] = lVar18;
    param_1[0x38] = param_2[0x11];
    param_1[0x39] = param_2[0x12];
    *(undefined4 *)(param_1 + 0x3b) = 0;
    *(undefined2 *)((long)param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    lVar18 = param_2[0xf];
    param_1[0x3c] = param_2[0xe];
    param_1[0x3d] = lVar18;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_1[0x3e] = param_2[0x10];
    param_2[0x10] = 0;
    param_1[0x44] = 0;
    param_1[0x4a] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    *(undefined2 *)(param_1 + 0x52) = 0;
    *(undefined1 *)((long)param_1 + 0x292) = *(undefined1 *)((long)param_2 + 0xa9);
    *(undefined1 *)((long)param_1 + 0x293) = *(undefined1 *)((long)param_2 + 0xab);
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = (long)&UNK_0f459ea8;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5a] = (long)(param_1 + 0x5b);
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    lVar18 = param_2[0x16];
    param_2[0x16] = 0;
    param_1[0x65] = lVar18;
    pcVar39 = (char *)*param_3;
    param_1[0x66] = (long)pcVar39;
    lVar18 = param_3[1];
    param_1[0x67] = lVar18;
    if (lVar18 != 0) {
      LOCK();
      *(long *)(lVar18 + 8) = *(long *)(lVar18 + 8) + 1;
      UNLOCK();
      pcVar39 = (char *)param_1[0x66];
    }
    param_1[0x68] = param_3[2];
    if ((pcVar39 == (char *)0x0) || (*pcVar39 == '\0')) {
      func_0x04890760();
    }
    else {
      pbStack_590 = (byte *)(param_1 + 0x53);
      plStack_d8 = param_1 + 0x66;
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x108,0);
      }
      if ((*puVar37 & 1) == 0) {
        uStack_4e8 = (int *)param_1[0x14];
        uStack_4f8._0_4_ = *puVar37;
        uStack_4f8._4_4_ = *(uint *)((long)param_1 + 0x94);
        uVar15 = (undefined4)param_1[0x13];
        uStack_4ec = *(uint *)((long)param_1 + 0x9c);
        cStack_4f0 = (char)uVar15;
        uStack_4ef = (undefined1)((uint)uVar15 >> 8);
        uStack_4ee = (undefined2)((uint)uVar15 >> 0x10);
      }
      else {
        func_0x0412e5e0(&uStack_4f8,param_1[0x14],param_1[0x13]);
      }
      if (((uint)uStack_4f8 & 1) == 0) {
        puVar19[2] = uStack_4e8;
        *puVar19 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
        puVar19[1] = CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0)));
        bVar40 = true;
      }
      else {
        func_0x0412e5e0(puVar19,uStack_4e8,
                        CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0))));
        bVar40 = ((uint)uStack_4f8 & 1) == 0;
      }
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar19[3] = puVar19 + 4;
      puVar19[6] = 0;
      puVar19[8] = 0;
      puVar19[9] = 0;
      puVar19[7] = puVar19 + 8;
      puVar19[10] = 0;
      puVar19[0xc] = 0;
      puVar19[0xd] = 0;
      puVar19[0xb] = puVar19 + 0xc;
      puVar19[0xe] = 0;
      puVar19[0x10] = 0;
      puVar19[0x11] = 0;
      puVar19[0xf] = puVar19 + 0x10;
      puVar19[0x12] = 0;
      puVar19[0x14] = 0;
      puVar19[0x15] = 0;
      puVar19[0x13] = puVar19 + 0x14;
      puVar19[0x16] = 0;
      puVar19[0x18] = 0;
      puVar19[0x19] = 0;
      puVar19[0x17] = puVar19 + 0x18;
      puVar19[0x1a] = 0;
      puVar19[0x1b] = 0;
      puVar19[0x1c] = 0;
      puVar19[0x1d] = 0;
      puVar19[0x1e] = 0;
      puVar19[0x1f] = 0;
      puVar19[0x20] = 0;
      if (!bVar40) {
        func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe)
        ;
      }
      param_1[0x69] = (long)puVar19;
      param_1[0x6a] = 0;
      param_1[0x6b] = 300000000000;
      plStack_e0 = param_1 + 0x6c;
      lVar18 = param_1[0x65];
      if (lVar18 == 0) {
        lVar18 = 0;
        plVar26 = (long *)0x0;
        lVar25 = 0;
      }
      else {
        lVar25 = *(long *)(lVar18 + 8);
        plVar26 = *(long **)(lVar18 + 0x10);
        if (plVar26 != (long *)0x0) {
          LOCK();
          plVar26[1] = plVar26[1] + 1;
          UNLOCK();
        }
        if (lVar25 == 0) {
          lVar18 = 0;
        }
      }
      param_1[0x78] = 0;
      param_1[0x79] = 0;
      param_1[0x76] = 0;
      param_1[0x77] = 0;
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x70] = 0;
      param_1[0x71] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
      *plStack_e0 = 0;
      param_1[0x6d] = 0;
      param_1[0x7a] = 0;
      lVar20 = func_0x0417cc60();
      puVar37 = puStack_530;
      param_1[0x7b] = lVar20 + 60000000000;
      param_1[0x7c] = lVar25;
      param_1[0x7d] = (long)plVar26;
      if (plVar26 == (long *)0x0) {
        param_1[0x7e] = lVar18;
        lVar18 = param_1[0x38];
joined_r0x0d253135:
        if (lVar18 < 1) goto LAB_0d253137;
LAB_0d2530f2:
        lVar18 = param_1[0x39];
      }
      else {
        LOCK();
        plVar26[1] = plVar26[1] + 1;
        UNLOCK();
        param_1[0x7e] = lVar18;
        LOCK();
        plVar22 = plVar26 + 1;
        lVar18 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          FUN_0412c2d0(plVar26);
          lVar18 = param_1[0x38];
          goto joined_r0x0d253135;
        }
        if (0 < param_1[0x38]) goto LAB_0d2530f2;
LAB_0d253137:
        param_1[0x38] = 300000000000;
        lVar18 = param_1[0x39];
      }
      if (lVar18 < 1) {
        param_1[0x39] = 5000000000;
      }
      plStack_510 = param_1 + 0x69;
      if (_DAT_0f7280f0 == (char *)0x0) {
        plStack_510 = param_1 + 0x69;
        cVar11 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8);
        if (cVar11 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      if ((*_DAT_0f7280f0 == '\0') &&
         (cVar11 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      func_0x048897d0(&uStack_4f8,_DAT_0f728100,*param_2,&UNK_0140ae84);
      lVar18 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      plVar26 = (long *)param_1[7];
      param_1[7] = lVar18;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 8))();
        plVar26 = (long *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
        uStack_4f8._0_4_ = 0;
        uStack_4f8._4_4_ = 0;
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
      if ((_DAT_0f728170 == (char *)0x0) &&
         (cVar11 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*_DAT_0f728170 == '\0') &&
         (cVar11 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      func_0x06ccf6a0(&uStack_4f8,_DAT_0f728180,*param_2,&UNK_0143fd02);
      lVar18 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      plVar26 = (long *)param_1[8];
      param_1[8] = lVar18;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 8))();
        plVar26 = (long *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
        uStack_4f8._0_4_ = 0;
        uStack_4f8._4_4_ = 0;
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
      pbVar31 = pbStack_590;
      bVar12 = (byte)*puVar37;
      if ((*puStack_6e8 & 1) == 0) {
        if ((bVar12 & 1) == 0) {
          *(undefined8 *)(puStack_6e8 + 4) = *(undefined8 *)(puVar37 + 4);
          uVar5 = puVar37[1];
          uVar6 = puVar37[2];
          uVar7 = puVar37[3];
          *puStack_6e8 = *puVar37;
          puStack_6e8[1] = uVar5;
          puStack_6e8[2] = uVar6;
          puStack_6e8[3] = uVar7;
        }
        else {
          func_0x04885070(puStack_6e8,param_1[0x14],param_1[0x13]);
        }
      }
      else {
        bVar40 = (bVar12 & 1) != 0;
        lVar18 = (long)param_1 + 0x91;
        if (bVar40) {
          lVar18 = param_1[0x14];
        }
        uVar21 = (ulong)(bVar12 >> 1);
        if (bVar40) {
          uVar21 = param_1[0x13];
        }
        func_0x04885120(puStack_6e8,lVar18,uVar21);
      }
      bVar12 = *(byte *)(param_2 + 7);
      if ((bVar12 & 1) == 0) {
        uVar21 = (ulong)(bVar12 >> 1);
        if (bVar12 >> 1 != 0) goto LAB_0d2533ef;
      }
      else {
        uVar21 = param_2[8];
        if (uVar21 != 0) {
LAB_0d2533ef:
          bVar40 = (*(byte *)(param_1 + 0x15) & 1) != 0;
          uStack_738 = (byte *)((long)param_1 + 0xa9);
          if (bVar40) {
            uStack_738 = (byte *)param_1[0x17];
          }
          plStack_730 = (long *)(ulong)(*(byte *)(param_1 + 0x15) >> 1);
          if (bVar40) {
            plStack_730 = (long *)param_1[0x16];
          }
          puStack_728 = (undefined4 *)((long)param_2 + 0x39);
          if ((bVar12 & 1) != 0) {
            puStack_728 = (undefined4 *)param_2[9];
          }
          uStack_720 = uVar21;
          func_0x049151c0(&uStack_4f8,&uStack_738,2,0x2f);
          func_0x0412f5e0(puStack_6e8,&uStack_4f8,plStack_f8);
          pbVar29 = (byte *)(param_2 + 7);
          if (pbVar31 != pbVar29) {
            bVar12 = *pbVar29;
            if ((*pbVar31 & 1) == 0) {
              if ((bVar12 & 1) == 0) {
                *(undefined8 *)(pbVar31 + 0x10) = param_2[9];
                uVar15 = *(undefined4 *)((long)param_2 + 0x3c);
                uVar3 = *(undefined4 *)(param_2 + 8);
                uVar4 = *(undefined4 *)((long)param_2 + 0x44);
                *(undefined4 *)pbVar31 = *(undefined4 *)pbVar29;
                *(undefined4 *)(pbVar31 + 4) = uVar15;
                *(undefined4 *)(pbVar31 + 8) = uVar3;
                *(undefined4 *)(pbVar31 + 0xc) = uVar4;
              }
              else {
                func_0x04885070(pbVar31,param_2[9],param_2[8]);
              }
            }
            else {
              bVar40 = (bVar12 & 1) != 0;
              puVar28 = (undefined *)((long)param_2 + 0x39);
              if (bVar40) {
                puVar28 = (undefined *)param_2[9];
              }
              uVar21 = (ulong)(bVar12 >> 1);
              if (bVar40) {
                uVar21 = param_2[8];
              }
              func_0x04885120(pbVar31,puVar28,uVar21);
            }
          }
        }
      }
      pbStack_620 = (byte *)((long)param_1 + 0xa9);
      pbVar29 = pbStack_620;
      if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
        pbVar29 = (byte *)param_1[0x17];
      }
      func_0x0eede920(0,1,0,3,2,&UNK_01241c49,0xcd,&UNK_013bdfb7,pbVar29);
      puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (puVar17 == (ulong *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      if ((*puStack_6e8 & 1) == 0) {
        lStack_5e8 = *(long *)(puStack_6e8 + 4);
        uStack_5f8 = *(undefined8 **)puStack_6e8;
        plStack_5f0 = *(long **)(puStack_6e8 + 2);
      }
      else {
        func_0x0412e5e0(&uStack_5f8,param_1[0x17],param_1[0x16]);
      }
      pcStack_618 = (char *)*param_3;
      plVar26 = (long *)param_3[1];
      if (plVar26 != (long *)0x0) {
        LOCK();
        plVar26[1] = plVar26[1] + 1;
        UNLOCK();
      }
      uStack_608 = param_3[2];
      plStack_610 = plVar26;
      if ((pcStack_618 != (char *)0x0) && (*pcStack_618 != '\0')) break;
    }
    func_0x04890760();
LAB_0d256c61:
    func_0x0eec74c0(0x90,0);
  } while( true );
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[4] = 0;
  puVar17[5] = (ulong)pcStack_618;
  puVar17[6] = (ulong)plVar26;
  if (plVar26 == (long *)0x0) {
    puVar17[7] = uStack_608;
    if (*pcStack_618 != '\0') goto LAB_0d25363c;
LAB_0d253932:
    func_0x04890760();
    puVar35 = puVar17;
LAB_0d253937:
    func_0x0412e5e0(&uStack_578,uStack_6c8,uStack_6d0);
    bVar40 = ((ulong)uStack_6d8 & 1) == 0;
    plVar22 = uStack_6d0;
    if (bVar40) {
joined_r0x0d25397e:
      plVar22 = (long *)((ulong)uStack_6d8 >> 1 & 0x7f);
    }
    if (plVar22 != (long *)0x0) {
      plVar1 = uStack_5d0;
      if ((uStack_5d8 & 1) == 0) {
        plVar1 = (long *)(uStack_5d8 >> 1 & 0x7f);
      }
      if (plVar1 != (long *)0x0) {
        if (plVar22 == plVar1) {
          uVar21 = uStack_6c8;
          if (bVar40) {
            uVar21 = (long)&uStack_6d8 + 1;
          }
          lVar18 = lStack_5c8;
          if ((uStack_5d8 & 1) == 0) {
            lVar18 = (long)&uStack_5d8 + 1;
          }
          iVar16 = func_0x0eee3000(uVar21,lVar18);
          if (iVar16 == 0) goto LAB_0d25405b;
        }
        uVar21 = puVar17[8];
        if ((puVar17[9] & 1) == 0) {
          uStack_628 = puVar35[2];
          uStack_638 = *puVar35;
          plStack_630 = (long *)puVar35[1];
        }
        else {
          func_0x0412e5e0(&uStack_638,puVar17[0xb],puVar17[10]);
        }
        puVar19 = (undefined8 *)param_2[10];
        plStack_6e0 = (long *)param_2[0x13];
        plStack_518 = (long *)param_2[0x14];
        if (plStack_518 != (long *)0x0) {
          LOCK();
          plStack_518[1] = plStack_518[1] + 1;
          UNLOCK();
        }
        plStack_88 = plStack_6e0;
        plStack_80 = plStack_518;
        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (plVar22 == (long *)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        plStack_600 = plVar22;
        func_0x041b31b0(plVar22);
        plVar22[1] = uVar21;
        *plVar22 = (long)&UNK_0f45bc70;
        plVar22[2] = uVar21;
        if (((ulong)uStack_6d8 & 1) == 0) {
          plVar22[5] = uStack_6c8;
          *(undefined4 *)(plVar22 + 3) = (undefined4)uStack_6d8;
          *(undefined4 *)((long)plVar22 + 0x1c) = uStack_6d8._4_4_;
          *(undefined4 *)(plVar22 + 4) = (undefined4)uStack_6d0;
          *(undefined4 *)((long)plVar22 + 0x24) = uStack_6d0._4_4_;
        }
        else {
          func_0x0412e5e0(plVar22 + 3,uStack_6c8,uStack_6d0);
        }
        uVar34 = *puVar19;
        uVar2 = puVar19[1];
        auStack_4a8[0] = (uint)uVar2 & 0xffff;
        uStack_4f8._0_4_ = (uint)((ulong)uVar34 >> 0x20);
        uStack_4e8 = (int *)(CONCAT44(uStack_4e8._4_4_,(int)((ulong)uVar34 >> 0x10)) &
                            0xffffffff0000ffff);
        uStack_4d8 = (long *)(CONCAT44(uStack_4d8._4_4_,(int)uVar34) & 0xffffffff0000ffff);
        uStack_4c8 = CONCAT44(uStack_4c8._4_4_,(uint)(ushort)((ulong)uVar2 >> 0x30));
        uStack_4b8 = (uint)((ulong)uVar2 >> 0x10);
        func_0x0470d9a0(plVar22 + 6,&UNK_01287ba2,0x28,0x122112,&uStack_4f8);
        *(undefined1 *)(plStack_600 + 9) = 0;
        plStack_f0 = plStack_6e0;
        plStack_e8 = plStack_518;
        if (plStack_518 != (long *)0x0) {
          LOCK();
          plStack_518[1] = plStack_518[1] + 1;
          UNLOCK();
        }
        func_0x0d25fe50(&plStack_580,plStack_600,&plStack_f0,&uStack_638);
        plVar1 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          LOCK();
          plVar23 = plStack_e8 + 1;
          lVar18 = *plVar23;
          *plVar23 = *plVar23 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            FUN_0412c2d0(plVar1);
          }
        }
        plVar1 = plStack_580;
        if (plStack_580 != (long *)0x0) {
          plVar22 = plStack_580;
        }
        plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x168);
        if (plVar23 == (long *)0x0) {
          func_0x0eec74c0(0x168,0);
        }
        func_0x041b31b0(plVar23);
        plVar23[1] = (long)plVar22;
        *plVar23 = (long)&UNK_0f459890;
        plVar23[2] = (long)plVar22;
        plVar23[3] = 0;
        plVar23[4] = 0;
        plVar23[5] = 0;
        plVar23[6] = 0;
        plVar23[7] = 0;
        func_0x0412d440(plVar23 + 8);
        plVar23[0x22] = 0;
        plVar23[0x23] = 0;
        plVar23[0x20] = 0;
        plVar23[0x21] = 0;
        plVar23[0x1e] = 0;
        plVar23[0x1f] = 0;
        plVar23[0x1c] = 0;
        plVar23[0x1d] = 0;
        plVar23[0x1a] = 0;
        plVar23[0x1b] = 0;
        *(undefined1 *)(plVar23 + 0x24) = 0;
        plVar23[0x25] = 0;
        plVar23[0x26] = 0;
        plVar23[0x27] = 0;
        plVar23[0x28] = 0;
        plVar23[0x29] = 0;
        plVar23[0x2a] = 0;
        plVar23[0x2b] = 0;
        plVar23[0x2c] = 0;
        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (plVar22 == (long *)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        func_0x041b31b0(plVar22);
        plVar22[1] = (long)plVar23;
        *plVar22 = (long)&UNK_0f45b900;
        plVar22[2] = (long)plVar23;
        plVar22[0xe] = 0;
        plVar22[3] = 0;
        plVar22[4] = 0;
        plVar22[5] = 0;
        plVar22[6] = 0;
        *(undefined8 *)((long)plVar22 + 0x31) = 0;
        *(undefined8 *)((long)plVar22 + 0x39) = 0;
        uStack_738 = (byte *)((long)&uStack_638 + 1);
        plStack_730 = (long *)(uStack_638 >> 1 & 0x7f);
        if ((uStack_638 & 1) != 0) {
          plStack_730 = plStack_630;
          uStack_738 = (byte *)uStack_628;
        }
        puStack_728 = (undefined4 *)&UNK_012d404b;
        uStack_720 = 7;
        func_0x049151c0(&uStack_4f8,&uStack_738,2,0x2f);
        if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
          plStack_6e0 = plVar22;
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
          plVar22 = plStack_6e0;
        }
        plStack_70 = plStack_f8;
        puStack_78 = &uStack_4f8;
        cVar11 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&puStack_78);
        plVar32 = plStack_f8;
        if (cVar11 == '\0') {
          bVar40 = false;
          plStack_580 = plVar1;
        }
        else {
          uStack_738 = (byte *)0x0;
          plStack_730 = (long *)0x0;
          puStack_728 = (undefined4 *)0x0;
          plStack_6e0 = plVar22;
          if ((long *)0xfffffffffffffff7 < plStack_f8) {
            uStack_758 = FUN_04882e30();
            func_0x041084d6(&DAT_0f7b8fb8);
            (**(code **)(*plStack_6e0 + 8))();
            (**(code **)(*plVar23 + 8))(plVar23);
            plStack_580 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))(plVar1);
            }
            (**(code **)(*plStack_600 + 8))();
            func_0x048e1080(&plStack_88);
            if ((uStack_638 & 1) != 0) {
              func_0x0412a280(uStack_628,uStack_638 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_578 & 1) != 0) {
              func_0x0412a280(uStack_568,(ulong)uStack_578 & 0xfffffffffffffffe);
            }
            if ((uStack_5d8 & 1) != 0) {
              func_0x0412a280(lStack_5c8,uStack_5d8 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_6d8 & 1) == 0) {
              bVar12 = (byte)*puStack_528;
            }
            else {
              func_0x0412a280(uStack_6c8,(ulong)uStack_6d8 & 0xfffffffffffffffe);
              bVar12 = (byte)*puStack_528;
            }
            if ((bVar12 & 1) != 0) {
              func_0x0412a280(puVar17[0xb],puVar17[9] & 0xfffffffffffffffe);
            }
            func_0x048e10b0(puStack_500);
            plVar26 = (long *)puVar17[4];
            puVar17[4] = 0;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 8))();
            }
            plVar26 = (long *)puVar17[3];
            puVar17[3] = 0;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 8))();
            }
            plVar26 = (long *)puVar17[2];
            puVar17[2] = 0;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 8))();
            }
            plVar26 = (long *)puVar17[1];
            puVar17[1] = 0;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 8))();
            }
            plVar26 = (long *)*puVar17;
            *puVar17 = 0;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 8))();
            }
            func_0x048e10b0(&pcStack_618);
            if (((ulong)uStack_5f8 & 1) != 0) {
              func_0x0412a280(lStack_5e8,(ulong)uStack_5f8 & 0xfffffffffffffffe);
            }
            func_0x0412a280(puVar17,0x60);
LAB_0d2579cc:
            func_0x0d257d70(plStack_e0);
            func_0x0d257e30(plStack_510);
            func_0x048e10b0(plStack_d8);
            plVar26 = (long *)param_1[0x65];
            param_1[0x65] = 0;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 8))();
            }
            func_0x0d257e60(param_1 + 0x62);
            func_0x0d1e5fd0(param_1 + 0x56);
            if ((*pbStack_590 & 1) != 0) {
              func_0x0412a280(param_1[0x55],param_1[0x53] & 0xfffffffffffffffe);
            }
            func_0x0d257ec0(param_1 + 0x4f);
            lVar18 = param_1[0x4c];
            if (lVar18 != 0) {
              param_1[0x4d] = lVar18;
              func_0x0412a280(lVar18,param_1[0x4e] - lVar18);
            }
            plVar26 = (long *)param_1[0x4a];
            lVar18 = 0x20;
            if ((plVar26 == param_1 + 0x46) || (lVar18 = 0x28, plVar26 != (long *)0x0)) {
              (**(code **)(*plVar26 + lVar18))();
            }
            plVar26 = (long *)param_1[0x44];
            lVar18 = 0x20;
            if ((plVar26 == param_1 + 0x40) || (lVar18 = 0x28, plVar26 != (long *)0x0)) {
              (**(code **)(*plVar26 + lVar18))();
            }
            func_0x0d257f70(param_1 + 0x3c);
            func_0x04136a00(param_1 + 0x2b);
            func_0x04136a00(param_1 + 0x25);
            if ((*(byte *)(param_1 + 0x18) & 1) != 0) goto LAB_0d257c2a;
            if ((*puStack_6e8 & 1) != 0) goto LAB_0d257c4f;
LAB_0d257b1c:
            bVar12 = (byte)*puStack_530;
            do {
              if ((bVar12 & 1) != 0) {
                func_0x0412a280(param_1[0x14],param_1[0x12] & 0xfffffffffffffffe);
              }
              if ((*puStack_588 & 1) != 0) {
                func_0x0412a280(param_1[0x10],param_1[0xe] & 0xfffffffffffffffe);
              }
              func_0x0488b060(param_1 + 0xb);
              func_0x0488b060(param_1 + 9);
              plVar26 = (long *)param_1[8];
              param_1[8] = 0;
              if (plVar26 == (long *)0x0) {
                plVar26 = (long *)param_1[7];
                param_1[7] = 0;
                if (plVar26 != (long *)0x0) goto LAB_0d257c97;
LAB_0d257ba3:
                plVar26 = (long *)param_1[6];
                param_1[6] = 0;
              }
              else {
                (**(code **)(*plVar26 + 8))();
                plVar26 = (long *)param_1[7];
                param_1[7] = 0;
                if (plVar26 == (long *)0x0) goto LAB_0d257ba3;
LAB_0d257c97:
                (**(code **)(*plVar26 + 8))();
                plVar26 = (long *)param_1[6];
                param_1[6] = 0;
              }
              if (plVar26 != (long *)0x0) {
                (**(code **)(*plVar26 + 8))();
              }
              plVar26 = (long *)*plStack_508;
              *plStack_508 = 0;
              if (plVar26 == (long *)0x0) {
                lVar18 = param_1[4];
                param_1[4] = 0;
                if (lVar18 != 0) goto LAB_0d257cd2;
LAB_0d257bea:
                plVar26 = (long *)param_1[3];
                param_1[3] = 0;
                if (plVar26 != (long *)0x0) goto LAB_0d257cf1;
LAB_0d257bff:
                plVar26 = (long *)param_1[2];
                param_1[2] = 0;
              }
              else {
                (**(code **)(*plVar26 + 8))();
                lVar18 = param_1[4];
                param_1[4] = 0;
                if (lVar18 == 0) goto LAB_0d257bea;
LAB_0d257cd2:
                func_0x0412a280(lVar18,0x90);
                plVar26 = (long *)param_1[3];
                param_1[3] = 0;
                if (plVar26 == (long *)0x0) goto LAB_0d257bff;
LAB_0d257cf1:
                (**(code **)(*plVar26 + 8))();
                plVar26 = (long *)param_1[2];
                param_1[2] = 0;
              }
              if (plVar26 != (long *)0x0) {
                (**(code **)(*plVar26 + 8))();
                func_0x0d257d40(plStack_520);
                uStack_758 = func_0x0eee2d70(uStack_758);
                goto LAB_0d2579cc;
              }
              func_0x0d257d40(plStack_520);
              func_0x0eee2d70(uStack_758);
LAB_0d257c2a:
              func_0x0412a280(param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe);
              if ((*puStack_6e8 & 1) == 0) goto LAB_0d257b1c;
LAB_0d257c4f:
              func_0x0412a280(param_1[0x17],param_1[0x15] & 0xfffffffffffffffe);
              bVar12 = (byte)*puStack_530;
            } while( true );
          }
          if (plStack_f8 < (long *)0x17) {
            uStack_688 = (long **)CONCAT71(uStack_688._1_7_,(char)plStack_f8 * '\x02');
            lVar18 = (long)&uStack_688 + 1;
            if (plStack_f8 != (long *)0x0) goto LAB_0d253e4c;
          }
          else {
            uVar21 = 0x1a;
            if (((ulong)plStack_f8 | 7) != 0x17) {
              uVar21 = ((ulong)plStack_f8 | 7) + 1;
            }
            lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
            if (lVar18 == 0) {
              func_0x0eec74c0(uVar21,0);
            }
            uStack_688 = (long **)(uVar21 | 1);
            plStack_680 = plVar32;
            puStack_678 = (undefined *)lVar18;
LAB_0d253e4c:
            plVar22 = plStack_6e0;
            func_0x0eee2f00(lVar18,&uStack_4f8,plVar32);
          }
          *(undefined1 *)(lVar18 + (long)plVar32) = 0;
          func_0x041b34e0(&lStack_d0,plVar22,&uStack_688,&uStack_738);
          if (((ulong)uStack_688 & 1) != 0) {
            func_0x0412a280(puStack_678,(ulong)uStack_688 & 0xfffffffffffffffe);
          }
          uVar21 = (ulong)uStack_738;
          if (lStack_d0 == 0) {
            plVar22 = (long *)((ulong)uStack_738 >> 1 & 0x7f);
            puVar27 = (undefined4 *)((long)&uStack_738 + 1);
            if (((ulong)uStack_738 & 1) != 0) {
              plVar22 = plStack_730;
              puVar27 = puStack_728;
            }
            if ((long)plVar22 < 8) {
              bVar40 = false;
              plVar22 = plStack_6e0;
            }
            else {
              plVar1 = (long *)((long)puVar27 + (long)plVar22);
              puVar28 = (undefined *)puVar27;
              do {
                plVar22 = (long *)func_0x0eee2ef0(puVar28,0x4d,(undefined *)((long)plVar22 + -7));
                plVar32 = plVar1;
                if ((plVar22 == (long *)0x0) || (plVar32 = plVar22, *plVar22 == 0x54534546494e414d))
                break;
                puVar28 = (undefined *)((long)plVar22 + 1);
                plVar22 = (long *)((long)plVar1 - (long)puVar28);
                plVar32 = plVar1;
              } while (7 < (long)plVar22);
              bVar40 = (long)plVar32 - (long)puVar27 != -1 && plVar32 != plVar1;
              plVar22 = plStack_6e0;
            }
          }
          else {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
            bVar40 = false;
            plVar22 = plStack_6e0;
            uVar21 = (ulong)uStack_738;
          }
          plStack_6e0 = plVar22;
          if ((uVar21 & 1) != 0) {
            func_0x0412a280(puStack_728,(ulong)uStack_738 & 0xfffffffffffffffe);
            plVar22 = plStack_6e0;
          }
        }
        (**(code **)(*plVar22 + 8))(plVar22);
        (**(code **)(*plVar23 + 8))(plVar23);
        if (plStack_580 != (long *)0x0) {
          (**(code **)(*plStack_580 + 8))(plStack_580);
        }
        (**(code **)(*plStack_600 + 8))();
        pbVar31 = (byte *)&uStack_5d8;
        if (bVar40) {
          pbVar31 = (byte *)&uStack_6d8;
        }
        bVar12 = *pbVar31;
        if (((ulong)uStack_578 & 1) == 0) {
          if ((bVar12 & 1) == 0) {
            uStack_568 = *(ulong *)(pbVar31 + 0x10);
            uStack_578 = *(long ***)pbVar31;
            uStack_570 = *(long **)(pbVar31 + 8);
          }
          else {
            pbVar31 = (byte *)&uStack_5d8;
            if (bVar40) {
              pbVar31 = (byte *)&uStack_6d8;
            }
            puVar19 = &uStack_5d0;
            if (bVar40) {
              puVar19 = &uStack_6d0;
            }
            func_0x04885070(&uStack_578,*(undefined8 *)(pbVar31 + 0x10),*puVar19);
          }
        }
        else {
          puVar35 = &uStack_5d0;
          pbVar31 = (byte *)&uStack_5d8;
          if (bVar40) {
            puVar35 = &uStack_6d0;
            pbVar31 = (byte *)&uStack_6d8;
          }
          bVar40 = (bVar12 & 1) != 0;
          pbVar29 = pbVar31 + 1;
          if (bVar40) {
            pbVar29 = *(byte **)(pbVar31 + 0x10);
          }
          uVar21 = (ulong)(bVar12 >> 1);
          if (bVar40) {
            uVar21 = *puVar35;
          }
          func_0x04885120(&uStack_578,pbVar29,uVar21);
        }
        plVar22 = plStack_518;
        if (plStack_518 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_518 + 1;
          lVar18 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plStack_518 + 0x10))(plStack_518);
            FUN_0412c2d0(plVar22);
          }
        }
        if ((uStack_638 & 1) != 0) {
          func_0x0412a280(uStack_628,uStack_638 & 0xfffffffffffffffe);
        }
      }
    }
LAB_0d25405b:
    bVar12 = (byte)uStack_578 & 1;
    if (((ulong)uStack_578 & 1) == 0) {
      if ((byte)uStack_578 >> 1 != 0) goto LAB_0d254086;
    }
    else if (uStack_570 != (long *)0x0) {
LAB_0d254086:
      puVar19 = (undefined8 *)param_2[10];
      puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
      if (puVar24 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x50,0);
      }
      uVar21 = puVar17[8];
      func_0x041b31b0(puVar24);
      puVar24[1] = uVar21;
      *puVar24 = &UNK_0f45bc70;
      puVar24[2] = uVar21;
      if (((ulong)uStack_578 & 1) == 0) {
        puVar24[5] = uStack_568;
        *(undefined4 *)(puVar24 + 3) = (undefined4)uStack_578;
        *(undefined4 *)((long)puVar24 + 0x1c) = uStack_578._4_4_;
        *(undefined4 *)(puVar24 + 4) = (undefined4)uStack_570;
        *(undefined4 *)((long)puVar24 + 0x24) = uStack_570._4_4_;
      }
      else {
        func_0x0412e5e0(puVar24 + 3,uStack_568,uStack_570);
      }
      uVar34 = *puVar19;
      uVar2 = puVar19[1];
      auStack_4a8[0] = (uint)uVar2 & 0xffff;
      uStack_4f8._0_4_ = (uint)((ulong)uVar34 >> 0x20);
      uStack_4e8 = (int *)(CONCAT44(uStack_4e8._4_4_,(int)((ulong)uVar34 >> 0x10)) &
                          0xffffffff0000ffff);
      uStack_4d8 = (long *)(CONCAT44(uStack_4d8._4_4_,(int)uVar34) & 0xffffffff0000ffff);
      uStack_4c8 = CONCAT44(uStack_4c8._4_4_,(uint)(ushort)((ulong)uVar2 >> 0x30));
      uStack_4b8 = (uint)((ulong)uVar2 >> 0x10);
      func_0x0470d9a0(puVar24 + 6,&UNK_01287ba2,0x28,0x122112,&uStack_4f8);
      *(undefined1 *)(puVar24 + 9) = uStack_749;
      plVar22 = (long *)*puVar17;
      *puVar17 = (ulong)puVar24;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
        puVar24 = (undefined8 *)*puVar17;
      }
      puVar17[8] = (ulong)puVar24;
      bVar12 = (byte)uStack_578 & 1;
    }
    if (bVar12 != 0) {
      func_0x0412a280(uStack_568,(ulong)uStack_578 & 0xfffffffffffffffe);
    }
    if ((uStack_5d8 & 1) != 0) {
      func_0x0412a280(lStack_5c8,uStack_5d8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_6d8 & 1) != 0) {
      func_0x0412a280(uStack_6c8,(ulong)uStack_6d8 & 0xfffffffffffffffe);
    }
    uVar21 = puVar17[8];
LAB_0d254220:
    uStack_738 = (byte *)param_2[0x13];
    plStack_730 = (long *)param_2[0x14];
    if (param_2[0x14] != 0) {
      LOCK();
      plVar22 = (long *)(param_2[0x14] + 8);
      *plVar22 = *plVar22 + 1;
      UNLOCK();
    }
    if ((*puStack_528 & 1) == 0) {
      uStack_4e8 = (int *)puStack_528[2];
      uStack_4f8._0_4_ = (uint)*puStack_528;
      uStack_4f8._4_4_ = *(uint *)((long)puStack_528 + 4);
      uVar15 = (undefined4)puStack_528[1];
      uStack_4ec = *(uint *)((long)puStack_528 + 0xc);
      cStack_4f0 = (char)uVar15;
      uStack_4ef = (undefined1)((uint)uVar15 >> 8);
      uStack_4ee = (undefined2)((uint)uVar15 >> 0x10);
    }
    else {
      func_0x0412e5e0(&uStack_4f8,puVar17[0xb],puVar17[10]);
    }
    func_0x0d25fe50(&uStack_688,uVar21,&uStack_738,&uStack_4f8);
    plVar22 = (long *)puVar17[1];
    puVar17[1] = (ulong)uStack_688;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    uStack_688 = (long **)0x0;
    if (((uint)uStack_4f8 & 1) != 0) {
      func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
    }
    plVar22 = plStack_730;
    if (plStack_730 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_730 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_730 + 0x10))(plStack_730);
        FUN_0412c2d0(plVar22);
      }
    }
    if (puVar17[1] != 0) {
      puVar17[8] = puVar17[1];
    }
    if (*(char *)((long)param_2 + 0xaa) == '\x01') {
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x168);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x168,0);
      }
      uVar21 = puVar17[8];
      func_0x041b31b0(puVar19);
      puVar19[1] = uVar21;
      *puVar19 = &UNK_0f459890;
      puVar19[2] = uVar21;
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar19[6] = 0;
      puVar19[7] = 0;
      func_0x0412d440(puVar19 + 8);
      puVar19[0x22] = 0;
      puVar19[0x23] = 0;
      puVar19[0x20] = 0;
      puVar19[0x21] = 0;
      puVar19[0x1e] = 0;
      puVar19[0x1f] = 0;
      puVar19[0x1c] = 0;
      puVar19[0x1d] = 0;
      puVar19[0x1a] = 0;
      puVar19[0x1b] = 0;
      *(undefined1 *)(puVar19 + 0x24) = 0;
      puVar19[0x25] = 0;
      puVar19[0x26] = 0;
      puVar19[0x27] = 0;
      puVar19[0x28] = 0;
      puVar19[0x29] = 0;
      puVar19[0x2a] = 0;
      puVar19[0x2b] = 0;
      puVar19[0x2c] = 0;
      plVar22 = (long *)puVar17[3];
      puVar17[3] = (ulong)puVar19;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
        puVar19 = (undefined8 *)puVar17[3];
      }
      puVar17[8] = (ulong)puVar19;
    }
    if (*(char *)(param_2 + 0x15) == '\x01') {
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      uVar21 = puVar17[8];
      func_0x041b31b0(puVar19);
      puVar19[1] = uVar21;
      *puVar19 = &UNK_0f45b900;
      puVar19[2] = uVar21;
      puVar19[0xe] = 0;
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar19[6] = 0;
      *(undefined8 *)((long)puVar19 + 0x31) = 0;
      *(undefined8 *)((long)puVar19 + 0x39) = 0;
      plVar22 = (long *)puVar17[4];
      puVar17[4] = (ulong)puVar19;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
        puVar19 = (undefined8 *)puVar17[4];
      }
      puVar17[8] = (ulong)puVar19;
    }
    pcStack_618 = (char *)0x0;
    plStack_610 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      LOCK();
      plVar22 = plVar26 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        FUN_0412c2d0(plVar26);
        plVar26 = plStack_610;
        uStack_608 = 0;
        if (plStack_610 != (long *)0x0) {
          uStack_608 = 0;
          LOCK();
          plVar22 = plStack_610 + 1;
          lVar18 = *plVar22;
          *plVar22 = *plVar22 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plStack_610 + 0x10))(plStack_610);
            FUN_0412c2d0(plVar26);
          }
        }
      }
      else {
        uStack_608 = 0;
      }
    }
    if (((ulong)uStack_5f8 & 1) != 0) {
      func_0x0412a280(lStack_5e8,(ulong)uStack_5f8 & 0xfffffffffffffffe);
    }
    lVar18 = *plStack_520;
    *plStack_520 = (long)puVar17;
    if (lVar18 != 0) {
      func_0x0d25ffc0(lVar18);
      func_0x0412a280(lVar18,0x60);
    }
    if (*(char *)(param_2 + 0x15) == '\x01') {
      lVar18 = *(long *)(param_1[1] + 0x20);
      puStack_68 = &UNK_0f45d0e0;
      plStack_60 = param_1;
      ppuStack_48 = &puStack_68;
      func_0x0412d680(lVar18 + 0x18);
      plVar26 = (long *)(lVar18 + 0x50);
      plVar22 = *(long **)(lVar18 + 0x70);
      *(undefined8 *)(lVar18 + 0x70) = 0;
      if (plVar22 == plVar26) {
        lVar25 = 0x20;
LAB_0d2545fd:
        (**(code **)(*plVar22 + lVar25))();
        if (ppuStack_48 != (undefined **)0x0) goto LAB_0d2545e1;
LAB_0d254610:
        *(undefined8 *)(lVar18 + 0x70) = 0;
      }
      else {
        lVar25 = 0x28;
        if (plVar22 != (long *)0x0) goto LAB_0d2545fd;
        if (ppuStack_48 == (undefined **)0x0) goto LAB_0d254610;
LAB_0d2545e1:
        if (ppuStack_48 == &puStack_68) {
          *(long **)(lVar18 + 0x70) = plVar26;
          (**(code **)(*ppuStack_48 + 0x18))(ppuStack_48,plVar26);
        }
        else {
          *(undefined ***)(lVar18 + 0x70) = ppuStack_48;
          ppuStack_48 = (undefined **)0x0;
        }
      }
      if ((*(char *)(lVar18 + 0x40) == '\x01') &&
         (plVar26 = *(long **)(lVar18 + 0x70), plVar26 != (long *)0x0)) {
        uStack_4f8._0_4_ = 0;
        (**(code **)(*plVar26 + 0x30))(plVar26,&uStack_4f8);
      }
      func_0x0412d6b0(lVar18 + 0x18);
      if (ppuStack_48 == &puStack_68) {
        lVar18 = 0x20;
      }
      else {
        lVar18 = 0x28;
        if (ppuStack_48 == (undefined **)0x0) goto LAB_0d2546a0;
      }
      (**(code **)(*ppuStack_48 + lVar18))();
    }
LAB_0d2546a0:
    pbVar31 = pbStack_620;
    if (DAT_0f7b8fb8 == '\0') goto LAB_0d256d6c;
  }
  else {
    LOCK();
    plVar26[1] = plVar26[1] + 1;
    UNLOCK();
    puVar17[7] = uStack_608;
    if (((char *)puVar17[5] == (char *)0x0) || (*(char *)puVar17[5] == '\0')) goto LAB_0d253932;
LAB_0d25363c:
    puStack_500 = puVar17 + 5;
    puVar17[8] = 0;
    plVar22 = (long *)((ulong)uStack_5f8 >> 1 & 0x7f);
    lVar18 = (long)&uStack_5f8 + 1;
    if (((ulong)uStack_5f8 & 1) != 0) {
      plVar22 = plStack_5f0;
      lVar18 = lStack_5e8;
    }
    if (plVar22 < (long *)0xfffffffffffffff8) {
      if (plVar22 < (long *)0x17) {
        *(char *)(puVar17 + 9) = (char)plVar22 * '\x02';
        pbVar31 = (byte *)((long)puVar17 + 0x49);
        if (plVar22 != (long *)0x0) goto LAB_0d2536f8;
      }
      else {
        uVar21 = 0x1a;
        if (((ulong)plVar22 | 7) != 0x17) {
          uVar21 = ((ulong)plVar22 | 7) + 1;
        }
        pbVar31 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
        if (pbVar31 == (byte *)0x0) {
          func_0x0eec74c0(uVar21,0);
        }
        puVar17[0xb] = (ulong)pbVar31;
        puVar17[9] = uVar21 | 1;
        puVar17[10] = (ulong)plVar22;
LAB_0d2536f8:
        func_0x0eee2ee0(pbVar31,lVar18,plVar22);
      }
      puStack_528 = puVar17 + 9;
      pbVar31[(long)plVar22] = 0;
      if ((((char *)*puStack_500 != (char *)0x0) && (*(char *)*puStack_500 == '\0')) &&
         (cVar11 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_01338772),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar21 = puVar17[7] + 0x18;
      if (puVar17[7] == 0) {
        uVar21 = 0;
      }
      puVar17[8] = uVar21;
      if ((((char *)param_2[0xb] != (char *)0x0) && (*(char *)param_2[0xb] == '\x01')) &&
         (param_2[10] != 0)) {
        uStack_749 = (**(code **)(*(long *)param_2[0xd] + 0x20))();
        puVar35 = puStack_528;
        if ((param_2[0xb] == 0) &&
           (cVar11 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013e904a),
           cVar11 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)param_2[0xb] == '\0') &&
           (cVar11 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013e904a),
           cVar11 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        (**(code **)(*(long *)param_2[0xd] + 0x10))(&uStack_6d8,(long *)param_2[0xd],param_2[10]);
        if ((param_2[0xb] == 0) &&
           (cVar11 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013e904a),
           cVar11 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)param_2[0xb] == '\0') &&
           (cVar11 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013e904a),
           cVar11 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        (**(code **)(*(long *)param_2[0xd] + 0x18))(&uStack_5d8,(long *)param_2[0xd],param_2[10]);
        if (((ulong)uStack_6d8 & 1) != 0) goto LAB_0d253937;
        bVar40 = true;
        uStack_578 = uStack_6d8;
        uStack_570 = uStack_6d0;
        uStack_568 = uStack_6c8;
        goto joined_r0x0d25397e;
      }
      goto LAB_0d254220;
    }
    FUN_04882e30();
LAB_0d256d6c:
    iVar16 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar16 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar31 = pbStack_620;
    }
  }
  bVar40 = (*(byte *)(param_1 + 0x15) & 1) == 0;
  pbStack_98 = (byte *)param_1[0x17];
  if (bVar40) {
    pbStack_98 = pbVar31;
  }
  uStack_90 = (ulong)(*(byte *)(param_1 + 0x15) >> 1);
  if (!bVar40) {
    uStack_90 = param_1[0x16];
  }
  cVar11 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&pbStack_98);
  if (cVar11 == '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar31 = pbStack_620;
    }
    bVar40 = (*(byte *)(param_1 + 0x15) & 1) == 0;
    pbStack_a8 = (byte *)param_1[0x17];
    if (bVar40) {
      pbStack_a8 = pbVar31;
    }
    uStack_a0 = (ulong)(*(byte *)(param_1 + 0x15) >> 1);
    if (!bVar40) {
      uStack_a0 = param_1[0x16];
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_4f8,&DAT_0f7b8f98,&pbStack_a8);
    uStack_738 = (byte *)0x2d89be07eda29514;
    plStack_730 = (long *)&UNK_0140f690;
    puStack_728 = (undefined4 *)0x1;
    uStack_720 = CONCAT44(uStack_720._4_4_,0x118);
    if ((byte)uStack_4b8 == 0) {
      uStack_688 = (long **)0x0;
      plStack_680 = (long *)0x0;
      puStack_678 = (undefined *)0x0;
      func_0x0eedeb80(2,0x2d,&uStack_4f8,&uStack_688,&uStack_738);
      if (((ulong)uStack_688 & 1) != 0) {
        func_0x0412a280(puStack_678,(ulong)uStack_688 & 0xfffffffffffffffe);
      }
    }
    if (((byte)uStack_4b8 & 1) == 0) {
      func_0x048e6d60(&uStack_4f8);
    }
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pbVar31 = pbStack_620;
  }
  bVar40 = (*(byte *)(param_1 + 0x15) & 1) == 0;
  uStack_688 = (long **)param_1[0x17];
  if (bVar40) {
    uStack_688 = (long **)pbVar31;
  }
  plStack_680 = (long *)(ulong)(*(byte *)(param_1 + 0x15) >> 1);
  if (!bVar40) {
    plStack_680 = (long *)param_1[0x16];
  }
  puStack_678 = &UNK_01358541;
  plStack_670 = (long *)0x4;
  func_0x049151c0(&uStack_4f8,&uStack_688,2,0x2f);
  plStack_b0 = plStack_f8;
  puStack_b8 = &uStack_4f8;
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_738,&DAT_0f7b8f98,&puStack_b8);
  uStack_688 = (long **)0x2d89be07eda29514;
  pcVar39 = "-";
  plStack_680 = (long *)&UNK_0140f690;
  puStack_678 = (undefined *)0x1;
  plStack_670 = (long *)CONCAT44(plStack_670._4_4_,0x11c);
  if (bStack_6f8 == 0) {
    uStack_6d8 = (long **)0x0;
    uStack_6d0 = (long *)0x0;
    uStack_6c8 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_738,&uStack_6d8,&uStack_688);
    if (((ulong)uStack_6d8 & 1) != 0) {
      func_0x0412a280(uStack_6c8,(ulong)uStack_6d8 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_6f8 & 1) == 0) {
    func_0x048e6d60(&uStack_738);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pbVar31 = pbStack_620;
  }
  bVar40 = (*(byte *)(param_1 + 0x15) & 1) == 0;
  uStack_688 = (long **)param_1[0x17];
  if (bVar40) {
    uStack_688 = (long **)pbVar31;
  }
  plStack_680 = (long *)(ulong)(*(byte *)(param_1 + 0x15) >> 1);
  if (!bVar40) {
    plStack_680 = (long *)param_1[0x16];
  }
  puStack_678 = &UNK_013732ab;
  plStack_670 = (long *)0x3;
  func_0x049151c0(&uStack_4f8,&uStack_688,2,0x2f);
  plStack_c0 = plStack_f8;
  puStack_c8 = &uStack_4f8;
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_738,&DAT_0f7b8f98,&puStack_c8);
  uStack_688 = (long **)0x2d89be07eda29514;
  plStack_680 = (long *)&UNK_0140f690;
  puStack_678 = (undefined *)0x1;
  plStack_670 = (long *)CONCAT44(plStack_670._4_4_,0x11e);
  if (bStack_6f8 == 0) {
    uStack_6d8 = (long **)0x0;
    uStack_6d0 = (long *)0x0;
    uStack_6c8 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_738,&uStack_6d8,&uStack_688);
    if (((ulong)uStack_6d8 & 1) != 0) {
      func_0x0412a280(uStack_6c8,(ulong)uStack_6d8 & 0xfffffffffffffffe);
    }
    if ((bStack_6f8 & 1) != 0) goto LAB_0d254a7d;
LAB_0d254bf8:
    func_0x048e6d60(&uStack_738);
    lVar18 = *plStack_520;
    if (*(long *)(lVar18 + 0x40) != 0) goto LAB_0d254a94;
LAB_0d254c19:
    plVar26 = (long *)func_0x0412dc70();
    uStack_4e8 = (int *)_DAT_0f45d190;
    plStack_4e0 = (long *)_UNK_0f45d198;
    uStack_4f8._0_4_ = (uint)_DAT_0f45d180;
    uStack_4f8._4_4_ = (uint)((ulong)_DAT_0f45d180 >> 0x20);
    cStack_4f0 = (char)_UNK_0f45d188;
    uStack_4ef = (undefined1)((ulong)_UNK_0f45d188 >> 8);
    uStack_4ee = (undefined2)((ulong)_UNK_0f45d188 >> 0x10);
    uStack_4ec = (uint)((ulong)_UNK_0f45d188 >> 0x20);
    uStack_4d8 = (long *)0x6e65206c6c754e22;
    uStack_4d0 = 0x6e656d6e6f726976;
    uStack_4c8 = 0x2e74;
    uStack_4b8 = uStack_4b8 & 0xffffff00;
    uStack_4c0 = uStack_4c0 & 0xff000000;
    cStack_4b0 = '\x01';
    uStack_738 = (byte *)0x0;
    plStack_730 = (long *)0x0;
    puStack_728 = (undefined4 *)0x0;
    func_0x0eee17a0(&uStack_738,&uStack_4f8,auStack_4a8,1);
    if ((cStack_4b0 == '\x01') && (((ulong)uStack_4d8 & 1) != 0)) {
      func_0x0412a280(uStack_4c8,(ulong)uStack_4d8 & 0xfffffffffffffffe);
    }
    uStack_6b8 = puStack_728;
    uStack_6c8 = (ulong)uStack_738;
    uStack_5d8 = CONCAT44(uStack_5d8._4_4_,0x16);
    uStack_5d0._4_4_ = (undefined4)((ulong)plVar26 >> 0x20);
    uStack_738 = (byte *)CONCAT44(uStack_5d8._4_4_,0x16);
    lStack_5c8 = 0;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_4f8._0_4_ = 0x16;
    uStack_4f8._4_4_ = uStack_5d8._4_4_;
    cStack_4f0 = (char)plVar26;
    uStack_4ef = (undefined1)((ulong)plVar26 >> 8);
    uStack_4ee = (undefined2)((ulong)plVar26 >> 0x10);
    uStack_4ec = uStack_5d0._4_4_;
    puStack_728 = (undefined4 *)0x0;
    uStack_720 = 0;
    uStack_718 = 0;
    lStack_710 = 0;
    uStack_708 = 0;
    uStack_700 = 0;
    bStack_698 = 0;
    uStack_6d8 = (long **)CONCAT44(uStack_5d8._4_4_,0x16);
    plStack_6c0 = plStack_730;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    uStack_6a0 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    plStack_730 = plVar26;
    uStack_6d0 = plVar26;
    uStack_5d0 = plVar26;
    func_0x048e6d60(&uStack_4f8);
    func_0x048e6d60(&uStack_738);
    func_0x048e6d60(&uStack_5d8);
LAB_0d2550c1:
    uStack_4f8._0_4_ = 0xeda29514;
    uStack_4f8._4_4_ = 0x2d89be07;
    cStack_4f0 = -0x70;
    uStack_4ef = 0xf6;
    uStack_4ee = 0x140;
    uStack_4ec = 0;
    uStack_4e8 = (int *)0x1;
    plStack_4e0 = (long *)CONCAT44(plStack_4e0._4_4_,0x120);
    uVar21 = uStack_6c8;
    plVar22 = plStack_6c0;
    uVar9 = uStack_6b8;
    uVar10 = uStack_6a0;
    puVar28 = puStack_678;
    plVar26 = plStack_670;
    uVar34 = uStack_668;
    uVar2 = uStack_650;
    if (bStack_698 == 0) {
      uStack_738 = (byte *)0x0;
      plStack_730 = (long *)0x0;
      puStack_728 = (undefined4 *)0x0;
      func_0x0eedeb80(2,0x2d,&uStack_6d8,&uStack_738,&uStack_4f8);
      uVar21 = uStack_6c8;
      plVar22 = plStack_6c0;
      uVar9 = uStack_6b8;
      uVar10 = uStack_6a0;
      puVar28 = puStack_678;
      plVar26 = plStack_670;
      uVar34 = uStack_668;
      uVar2 = uStack_650;
      if (((ulong)uStack_738 & 1) != 0) {
        func_0x0412a280(puStack_728,(ulong)uStack_738 & 0xfffffffffffffffe);
        uVar21 = uStack_6c8;
        plVar22 = plStack_6c0;
        uVar9 = uStack_6b8;
        uVar10 = uStack_6a0;
        puVar28 = puStack_678;
        plVar26 = plStack_670;
        uVar34 = uStack_668;
        uVar2 = uStack_650;
      }
    }
    uStack_650 = uVar10;
    uStack_668 = uVar9;
    plStack_670 = plVar22;
    puStack_678 = (undefined *)uVar21;
    uStack_6c8 = (ulong)puStack_678;
    plStack_6c0 = plStack_670;
    uStack_6b8 = (undefined4 *)uStack_668;
    uStack_6a0 = uStack_650;
    bStack_648 = bStack_698;
    if ((bStack_698 & 1) == 0) {
      uStack_6c8 = 0;
      plStack_6c0 = (long *)0x0;
      uStack_6b8 = (undefined4 *)0x0;
      uStack_6b0._4_4_ = (undefined4)((ulong)uStack_6b0 >> 0x20);
      uStack_6a8._4_4_ = (undefined4)((ulong)uStack_6a8 >> 0x20);
      uStack_660 = (undefined4)uStack_6b0;
      uStack_65c = uStack_6b0._4_4_;
      uStack_658 = (undefined4)uStack_6a8;
      uStack_654 = uStack_6a8._4_4_;
      uStack_6b0 = 0;
      uStack_6a8 = 0;
      uStack_6a0 = 0;
      uStack_688 = uStack_6d8;
      plStack_680 = uStack_6d0;
      func_0x048e6d60(&uStack_6d8);
      puVar28 = puStack_678;
      plVar26 = plStack_670;
      uVar34 = uStack_668;
      uVar2 = uStack_650;
    }
    uStack_650 = uVar2;
    uStack_668 = uVar34;
    plStack_670 = plVar26;
    puStack_678 = puVar28;
    if ((bStack_648 & 1) == 0) {
      func_0x0eede540(&uStack_4f8,&uStack_688);
      *(undefined4 *)(param_1 + 0xd) = 3;
      puVar27 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
      if (puVar27 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x68,0);
      }
      uVar34 = _UNK_012b5b70;
      uStack_738 = (byte *)0x69;
      plStack_730 = (long *)0x60;
      *(undefined8 *)(puVar27 + 0x14) = _DAT_012b5b68;
      *(undefined8 *)(puVar27 + 0x16) = uVar34;
      uVar34 = _UNK_012b5b60;
      *(undefined8 *)(puVar27 + 0x10) = _DAT_012b5b58;
      *(undefined8 *)(puVar27 + 0x12) = uVar34;
      uVar34 = _UNK_012b5b50;
      *(undefined8 *)(puVar27 + 0xc) = _DAT_012b5b48;
      *(undefined8 *)(puVar27 + 0xe) = uVar34;
      uVar34 = _UNK_012b5b40;
      *(undefined8 *)(puVar27 + 8) = _DAT_012b5b38;
      *(undefined8 *)(puVar27 + 10) = uVar34;
      uVar34 = _UNK_012b5b30;
      *(undefined8 *)(puVar27 + 4) = _DAT_012b5b28;
      *(undefined8 *)(puVar27 + 6) = uVar34;
      uVar4 = _UNK_012b5b24;
      uVar3 = _UNK_012b5b20;
      uVar15 = _UNK_012b5b1c;
      *puVar27 = _DAT_012b5b18;
      puVar27[1] = uVar15;
      puVar27[2] = uVar3;
      puVar27[3] = uVar4;
      *(undefined1 *)(puVar27 + 0x18) = 0;
      bVar40 = ((uint)uStack_4f8 & 1) == 0;
      lVar18 = (long)uStack_4e8;
      if (bVar40) {
        lVar18 = (long)&uStack_4f8 + 1;
      }
      uVar21 = (ulong)((byte)uStack_4f8 >> 1);
      if (!bVar40) {
        uVar21 = CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0)));
      }
      puStack_728 = puVar27;
      puVar19 = (undefined8 *)func_0x0412f8c0(&uStack_738,lVar18,uVar21);
      uVar15 = *(undefined4 *)puVar19;
      uVar3 = *(undefined4 *)((long)puVar19 + 4);
      uVar4 = *(undefined4 *)(puVar19 + 1);
      uVar8 = *(undefined4 *)((long)puVar19 + 0xc);
      lVar18 = puVar19[2];
      *puVar19 = 0;
      puVar19[1] = 0;
      puVar19[2] = 0;
      if ((*puStack_588 & 1) == 0) {
        *(undefined4 *)(param_1 + 0xe) = uVar15;
        *(undefined4 *)((long)param_1 + 0x74) = uVar3;
        *(undefined4 *)(param_1 + 0xf) = uVar4;
        *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
        param_1[0x10] = lVar18;
      }
      else {
        func_0x0412a280(param_1[0x10],param_1[0xe] & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0xe) = uVar15;
        *(undefined4 *)((long)param_1 + 0x74) = uVar3;
        *(undefined4 *)(param_1 + 0xf) = uVar4;
        *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
        param_1[0x10] = lVar18;
      }
      if (((ulong)uStack_738 & 1) != 0) {
        func_0x0412a280(puStack_728,(ulong)uStack_738 & 0xfffffffffffffffe);
      }
      lVar18 = (long)&uStack_4f8 + 1;
      if (((uint)uStack_4f8 & 1) != 0) {
        lVar18 = (long)uStack_4e8;
      }
      func_0x0eede920(0,1,0,3,8,&UNK_01241c49,300,&UNK_011e4a0d,lVar18);
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe)
        ;
      }
      if (bStack_648 != 0) {
        return;
      }
      func_0x048e6d60(&uStack_688);
      return;
    }
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plStack_4e0 = _DAT_0f5523a0;
    uStack_4e8 = (int *)_DAT_0f552398;
    if ((_DAT_0f552398 == (char *)0x0) || (*_DAT_0f552398 != '\x01')) {
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\0';
      uStack_4e8 = (int *)0x0;
      plStack_4e0 = (long *)0x0;
      uStack_4d8 = (long *)0x0;
      func_0x0eee02f0(0xf5522b8);
      if (uStack_4e8 != (int *)0x0) goto LAB_0d255473;
    }
    else {
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
      }
      uStack_4f8._0_4_ = 0xf5522b8;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\x01';
      uStack_4d8 = _DAT_0f5523a8;
LAB_0d255473:
      if ((*(char *)uStack_4e8 == '\0') &&
         (cVar11 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    puVar28 = (undefined *)(**(code **)(*uStack_4d8 + 0x458))();
    plVar26 = plStack_4e0;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    if (plVar26 == (long *)0x0) {
      uStack_4d8 = (long *)0x0;
    }
    else {
      LOCK();
      plVar22 = plVar26 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        FUN_0412c2d0(plVar26);
      }
      plVar26 = plStack_4e0;
      uStack_4d8 = (long *)0x0;
      if (plStack_4e0 != (long *)0x0) {
        LOCK();
        plVar22 = plStack_4e0 + 1;
        lVar18 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_4e0 + 0x10))(plStack_4e0);
          FUN_0412c2d0(plVar26);
        }
      }
    }
    if (cStack_4f0 == '\x01') {
      func_0x0eee02f0(CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8));
    }
    lVar18 = func_0x041b0de0(10);
    plVar26 = (long *)param_1[3];
    param_1[3] = lVar18;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    *puVar19 = &UNK_0eef1270;
    puVar19[1] = 0;
    puVar19[2] = 0;
    puVar19[3] = 0;
    puVar19[4] = 0;
    puVar19[5] = 0;
    puVar19[6] = 0;
    puVar19[7] = 0;
    puVar19[8] = 0;
    plVar26 = (long *)*plStack_508;
    *plStack_508 = (long)puVar19;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
    }
    puVar33 = &UNK_01400000;
    if (&UNK_0e600000 < puVar28) {
      puVar33 = &UNK_02800000;
    }
    puVar36 = &UNK_05000000;
    if (puVar28 < (undefined *)0x80000001) {
      puVar36 = puVar33;
    }
    lVar18 = func_0x041b1070(puVar36);
    plVar26 = (long *)param_1[2];
    param_1[2] = lVar18;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
      lVar18 = param_1[2];
    }
    lVar25 = param_1[4];
    *(undefined8 *)(lVar25 + 0x38) = 0x28000;
    *(undefined1 *)(lVar25 + 8) = 1;
    *(undefined8 *)(lVar25 + 0x18) = 0xf545040;
    *(long *)(lVar25 + 0x60) = param_1[3];
    *(long *)(lVar25 + 0x30) = lVar18;
    uVar34 = 0x100000;
    if (&UNK_0e600000 < puVar28) {
      uVar34 = 0x400000;
    }
    *(undefined8 *)(lVar25 + 0x20) = uVar34;
    *(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)(param_1[1] + 0x40);
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plStack_4e0 = _DAT_0f5523a0;
    uStack_4e8 = (int *)_DAT_0f552398;
    if ((_DAT_0f552398 == (char *)0x0) || (*_DAT_0f552398 != '\x01')) {
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\0';
      uStack_4e8 = (int *)0x0;
      plStack_4e0 = (long *)0x0;
      uStack_4d8 = (long *)0x0;
      func_0x0eee02f0(0xf5522b8);
      if (uStack_4e8 != (int *)0x0) goto LAB_0d255786;
    }
    else {
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
      }
      uStack_4f8._0_4_ = 0xf5522b8;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\x01';
      uStack_4d8 = _DAT_0f5523a8;
LAB_0d255786:
      if ((*(char *)uStack_4e8 == '\0') &&
         (cVar11 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar34 = (**(code **)(*uStack_4d8 + 0x1e8))();
    plVar26 = plStack_4e0;
    *(undefined8 *)(param_1[4] + 0x48) = uVar34;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    if (plVar26 == (long *)0x0) {
      uStack_4d8 = (long *)0x0;
    }
    else {
      LOCK();
      plVar22 = plVar26 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        FUN_0412c2d0(plVar26);
      }
      plVar26 = plStack_4e0;
      uStack_4d8 = (long *)0x0;
      if (plStack_4e0 != (long *)0x0) {
        LOCK();
        plVar22 = plStack_4e0 + 1;
        lVar18 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_4e0 + 0x10))(plStack_4e0);
          FUN_0412c2d0(plVar26);
        }
      }
    }
    if (cStack_4f0 == '\x01') {
      func_0x0eee02f0(CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8));
    }
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plStack_4e0 = _DAT_0f5523a0;
    uStack_4e8 = (int *)_DAT_0f552398;
    if ((_DAT_0f552398 == (char *)0x0) || (*_DAT_0f552398 != '\x01')) {
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\0';
      uStack_4e8 = (int *)0x0;
      plStack_4e0 = (long *)0x0;
      uStack_4d8 = (long *)0x0;
      func_0x0eee02f0(0xf5522b8);
      if (uStack_4e8 != (int *)0x0) goto LAB_0d255931;
    }
    else {
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
      }
      uStack_4f8._0_4_ = 0xf5522b8;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\x01';
      uStack_4d8 = _DAT_0f5523a8;
LAB_0d255931:
      if ((*(char *)uStack_4e8 == '\0') &&
         (cVar11 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar15 = (**(code **)(*uStack_4d8 + 0x1f0))();
    plVar26 = plStack_4e0;
    *(undefined4 *)(param_1[4] + 0x28) = uVar15;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    if (plVar26 == (long *)0x0) {
      uStack_4d8 = (long *)0x0;
    }
    else {
      LOCK();
      plVar22 = plVar26 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        FUN_0412c2d0(plVar26);
      }
      plVar26 = plStack_4e0;
      uStack_4d8 = (long *)0x0;
      if (plStack_4e0 != (long *)0x0) {
        LOCK();
        plVar22 = plStack_4e0 + 1;
        lVar18 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_4e0 + 0x10))(plStack_4e0);
          FUN_0412c2d0(plVar26);
        }
      }
    }
    if (cStack_4f0 == '\x01') {
      func_0x0eee02f0(CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8));
    }
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plStack_4e0 = _DAT_0f5523a0;
    uStack_4e8 = (int *)_DAT_0f552398;
    if ((_DAT_0f552398 == (char *)0x0) || (*_DAT_0f552398 != '\x01')) {
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\0';
      uStack_4e8 = (int *)0x0;
      plStack_4e0 = (long *)0x0;
      uStack_4d8 = (long *)0x0;
      func_0x0eee02f0(0xf5522b8);
      if (uStack_4e8 != (int *)0x0) goto LAB_0d255adb;
    }
    else {
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
      }
      uStack_4f8._0_4_ = 0xf5522b8;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\x01';
      uStack_4d8 = _DAT_0f5523a8;
LAB_0d255adb:
      if ((*(char *)uStack_4e8 == '\0') &&
         (cVar11 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar13 = (**(code **)(*uStack_4d8 + 0x1f8))();
    plVar26 = plStack_4e0;
    *(undefined1 *)(param_1[4] + 0x68) = uVar13;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    if (plVar26 == (long *)0x0) {
      uStack_4d8 = (long *)0x0;
    }
    else {
      LOCK();
      plVar22 = plVar26 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        FUN_0412c2d0(plVar26);
      }
      plVar26 = plStack_4e0;
      uStack_4d8 = (long *)0x0;
      if (plStack_4e0 != (long *)0x0) {
        LOCK();
        plVar22 = plStack_4e0 + 1;
        lVar18 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_4e0 + 0x10))(plStack_4e0);
          FUN_0412c2d0(plVar26);
        }
      }
    }
    if (cStack_4f0 == '\x01') {
      func_0x0eee02f0(CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8));
    }
    lVar18 = param_1[4];
    *(long *)(lVar18 + 0x80) = param_1[5];
    *(undefined4 *)(lVar18 + 0x58) = 0xffffffff;
    *(undefined4 *)(lVar18 + 0x50) = 4;
    lVar18 = param_1[0x69];
    func_0x0412d680(lVar18 + 0xe0);
    func_0x0d1fdc60(&uStack_4f8,lVar18);
    uStack_738 = (byte *)0x2de3e3af224fcdfa;
    plStack_730 = (long *)&UNK_0140f690;
    puStack_728 = (undefined4 *)0x1;
    uStack_720 = CONCAT44(uStack_720._4_4_,0x15);
    if ((byte)uStack_4b8 == 0) {
      uStack_6d8 = (long **)0x0;
      uStack_6d0 = (long *)0x0;
      uStack_6c8 = 0;
      func_0x0eedeb80(2,0x2d,&uStack_4f8,&uStack_6d8,&uStack_738);
      if (((ulong)uStack_6d8 & 1) != 0) {
        func_0x0412a280(uStack_6c8,(ulong)uStack_6d8 & 0xfffffffffffffffe);
      }
    }
    uStack_688 = &plStack_680;
    if (((byte)uStack_4b8 & 1) == 0) {
      plStack_680 = (long *)0x0;
      puStack_678 = (undefined *)0x0;
      plStack_670 = (long *)0x0;
    }
    else {
      pplVar38 = (long **)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
      plStack_680 = (long *)CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0))
                                    );
      puStack_678 = (undefined *)uStack_4e8;
      if (uStack_4e8 != (int *)0x0) {
        uStack_4f8 = &cStack_4f0;
        plStack_680[2] = (long)&plStack_680;
        cStack_4f0 = '\0';
        uStack_4ef = 0;
        uStack_4ee = 0;
        uStack_4ec = 0;
        uStack_4e8 = (int *)0x0;
        uStack_688 = pplVar38;
      }
      plStack_670 = plStack_4e0;
    }
    plVar26 = (long *)(lVar18 + 0x18);
    lVar25 = lVar18 + 0x20;
    func_0x0d225920(plVar26,*(undefined8 *)(lVar18 + 0x20));
    *(long ***)(lVar18 + 0x18) = uStack_688;
    *(long **)(lVar18 + 0x20) = plStack_680;
    *(undefined **)(lVar18 + 0x28) = puStack_678;
    if (puStack_678 == (undefined *)0x0) {
      *plVar26 = lVar25;
      lVar20 = lVar25;
    }
    else {
      plStack_680[2] = lVar25;
      plStack_680 = (long *)0x0;
      puStack_678 = (undefined *)0x0;
      lVar20 = *plVar26;
      uStack_688 = &plStack_680;
    }
    *(long **)(lVar18 + 0x30) = plStack_670;
    func_0x0d225970(lVar18 + 0x38,lVar20,lVar25);
    *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)(lVar18 + 0x30);
    func_0x0d225920(&uStack_688,plStack_680);
    if ((byte)uStack_4b8 == '\x01') {
      func_0x0d225920(&uStack_4f8,
                      CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0))));
    }
    else {
      func_0x048e6d60(&uStack_4f8);
    }
    *(undefined8 *)(lVar18 + 0xd8) = 0;
    pcVar39 = &cStack_4f0;
    cStack_4f0 = '\0';
    uStack_4ef = 0;
    uStack_4ee = 0;
    uStack_4ec = 0;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    uStack_4f8 = pcVar39;
    func_0x0d225920((long *)(lVar18 + 0x58),*(undefined8 *)(lVar18 + 0x60));
    *(char **)(lVar18 + 0x58) = uStack_4f8;
    lVar25 = CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0)));
    *(long *)(lVar18 + 0x60) = lVar25;
    *(int **)(lVar18 + 0x68) = uStack_4e8;
    if (uStack_4e8 == (int *)0x0) {
      *(long *)(lVar18 + 0x58) = lVar18 + 0x60;
    }
    else {
      *(long *)(lVar25 + 0x10) = lVar18 + 0x60;
      cStack_4f0 = '\0';
      uStack_4ef = 0;
      uStack_4ee = 0;
      uStack_4ec = 0;
      uStack_4e8 = (int *)0x0;
      lVar25 = 0;
      uStack_4f8 = pcVar39;
    }
    *(long **)(lVar18 + 0x70) = plStack_4e0;
    func_0x0d225920(&uStack_4f8,lVar25);
    cStack_4f0 = '\0';
    uStack_4ef = 0;
    uStack_4ee = 0;
    uStack_4ec = 0;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    uStack_4f8 = pcVar39;
    func_0x0d225920((long *)(lVar18 + 0x78),*(undefined8 *)(lVar18 + 0x80));
    *(char **)(lVar18 + 0x78) = uStack_4f8;
    lVar25 = CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0)));
    *(long *)(lVar18 + 0x80) = lVar25;
    *(int **)(lVar18 + 0x88) = uStack_4e8;
    if (uStack_4e8 == (int *)0x0) {
      *(long *)(lVar18 + 0x78) = lVar18 + 0x80;
    }
    else {
      *(long *)(lVar25 + 0x10) = lVar18 + 0x80;
      cStack_4f0 = '\0';
      uStack_4ef = 0;
      uStack_4ee = 0;
      uStack_4ec = 0;
      uStack_4e8 = (int *)0x0;
      lVar25 = 0;
      uStack_4f8 = pcVar39;
    }
    *(long **)(lVar18 + 0x90) = plStack_4e0;
    func_0x0d225920(&uStack_4f8,lVar25);
    cStack_4f0 = '\0';
    uStack_4ef = 0;
    uStack_4ee = 0;
    uStack_4ec = 0;
    uStack_4e8 = (int *)0x0;
    plStack_4e0 = (long *)0x0;
    uStack_4f8 = pcVar39;
    func_0x0d225920((long *)(lVar18 + 0x98),*(undefined8 *)(lVar18 + 0xa0));
    puVar37 = puStack_6e8;
    *(char **)(lVar18 + 0x98) = uStack_4f8;
    lVar25 = CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0)));
    *(long *)(lVar18 + 0xa0) = lVar25;
    *(int **)(lVar18 + 0xa8) = uStack_4e8;
    if (uStack_4e8 == (int *)0x0) {
      *(long *)(lVar18 + 0x98) = lVar18 + 0xa0;
    }
    else {
      *(long *)(lVar25 + 0x10) = lVar18 + 0xa0;
      cStack_4f0 = '\0';
      uStack_4ef = 0;
      uStack_4ee = 0;
      uStack_4ec = 0;
      uStack_4e8 = (int *)0x0;
      lVar25 = 0;
      uStack_4f8 = pcVar39;
    }
    *(long **)(lVar18 + 0xb0) = plStack_4e0;
    func_0x0d225920(&uStack_4f8,lVar25);
    func_0x0412d6b0(lVar18 + 0xe0);
    if (param_1[0x65] != 0) {
      func_0x0d2202e0(param_1[0x65],*plStack_510,0);
    }
    lVar18 = func_0x0417cc60();
    param_1[0x6a] = lVar18 + param_1[0x6b];
    if (DAT_0f7b8fb8 == '\0') {
      iVar16 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar16 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
        puVar37 = puStack_6e8;
      }
    }
    pbVar29 = (byte *)(**(code **)(*param_1 + 0x50))(param_1);
    bVar40 = (*pbVar29 & 1) != 0;
    pbVar31 = pbVar29 + 1;
    if (bVar40) {
      pbVar31 = *(byte **)(pbVar29 + 0x10);
    }
    uVar21 = (ulong)(*pbVar29 >> 1);
    if (bVar40) {
      uVar21 = *(ulong *)(pbVar29 + 8);
    }
    uStack_4f8._0_4_ = (uint)pbVar31;
    uStack_4f8._4_4_ = (uint)((ulong)pbVar31 >> 0x20);
    cStack_4f0 = (char)uVar21;
    uStack_4ef = (undefined1)(uVar21 >> 8);
    uStack_4ee = (undefined2)(uVar21 >> 0x10);
    uStack_4ec = (uint)(uVar21 >> 0x20);
    uStack_4e8 = (int *)&UNK_013d7958;
    plStack_4e0 = (long *)0xd;
    func_0x048ad670(&uStack_738,&uStack_4f8,2,0x2f);
    plVar26 = (long *)((ulong)uStack_738 >> 1 & 0x7f);
    puVar27 = (undefined4 *)((long)&uStack_738 + 1);
    if (((ulong)uStack_738 & 1) != 0) {
      plVar26 = plStack_730;
      puVar27 = puStack_728;
    }
    uStack_4f8._0_4_ = (uint)puVar27;
    uStack_4f8._4_4_ = (uint)((ulong)puVar27 >> 0x20);
    cStack_4f0 = (char)plVar26;
    uStack_4ef = (undefined1)((ulong)plVar26 >> 8);
    uStack_4ee = (undefined2)((ulong)plVar26 >> 0x10);
    uStack_4ec = (uint)((ulong)plVar26 >> 0x20);
    cVar11 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&uStack_4f8);
    if (((ulong)uStack_738 & 1) != 0) {
      func_0x0412a280(puStack_728,(ulong)uStack_738 & 0xfffffffffffffffe);
    }
    if (cVar11 != '\0') {
      if ((*puVar37 & 1) == 0) {
        uStack_4e8 = *(int **)(puVar37 + 4);
        uStack_4f8._0_4_ = *puVar37;
        uStack_4f8._4_4_ = puVar37[1];
        uVar5 = puVar37[2];
        uStack_4ec = puVar37[3];
        cStack_4f0 = (char)uVar5;
        uStack_4ef = (undefined1)(uVar5 >> 8);
        uStack_4ee = (undefined2)(uVar5 >> 0x10);
      }
      else {
        func_0x0412e5e0(&uStack_4f8,param_1[0x17],param_1[0x16]);
      }
      func_0x0d2529d0(param_1,&uStack_4f8);
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe)
        ;
      }
    }
    uStack_5f8 = (undefined8 *)0x0;
    bVar40 = (*(byte *)(param_1 + 0x15) & 1) == 0;
    pbVar31 = (byte *)param_1[0x17];
    if (bVar40) {
      pbVar31 = pbStack_620;
    }
    uVar21 = (ulong)(*(byte *)(param_1 + 0x15) >> 1);
    if (!bVar40) {
      uVar21 = param_1[0x16];
    }
    if (0xfffffffffffffff7 < uVar21) {
      FUN_04882e30();
      goto LAB_0d256f8a;
    }
    lVar18 = param_1[4];
    if (uVar21 < 0x17) {
      uStack_4f8._0_4_ = CONCAT31(uStack_4f8._1_3_,(char)uVar21 * '\x02');
      piVar30 = (int *)((long)&uStack_4f8 + 1);
      if (uVar21 != 0) goto LAB_0d25623c;
    }
    else {
      lVar25 = 0x1a;
      if ((uVar21 | 7) != 0x17) {
        lVar25 = (uVar21 | 7) + 1;
      }
      piVar30 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar25);
      if (piVar30 == (int *)0x0) {
        func_0x0eec74c0(lVar25,0);
      }
      uStack_4f8._0_4_ = (uint)lVar25 | 1;
      uStack_4f8._4_4_ = (uint)((ulong)lVar25 >> 0x20);
      uStack_4ef = (undefined1)(uVar21 >> 8);
      uStack_4ee = (undefined2)(uVar21 >> 0x10);
      uStack_4ec = (uint)(uVar21 >> 0x20);
      cStack_4f0 = (char)uVar21;
      uStack_4e8 = piVar30;
LAB_0d25623c:
      func_0x0eee2ee0(piVar30,pbVar31,uVar21);
    }
    *(undefined1 *)((long)piVar30 + uVar21) = 0;
    func_0x04183670(&pcStack_618,lVar18,&uStack_4f8,&uStack_5f8);
    pbVar31 = pbStack_620;
    puVar37 = puStack_6e8;
    pcVar39 = "-";
    if (((uint)uStack_4f8 & 1) != 0) {
      func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
    }
    if (pcStack_618 != (char *)0x0) {
      bVar12 = *(byte *)(param_1 + 0x15);
      pbVar29 = (byte *)param_1[0x17];
      func_0x041b3ad0(&uStack_4f8,&pcStack_618);
      if ((bVar12 & 1) == 0) {
        pbVar29 = pbVar31;
      }
      piVar30 = uStack_4e8;
      if (((uint)uStack_4f8 & 1) == 0) {
        piVar30 = (int *)((long)&uStack_4f8 + 1);
      }
      func_0x0eede920(0,1,0,3,4,&UNK_01241c49,0x170,&UNK_014c0b67,pbVar29,piVar30);
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe)
        ;
      }
      if ((*puVar37 & 1) == 0) {
        uStack_4e8 = *(int **)(puVar37 + 4);
        uStack_4f8._0_4_ = *puVar37;
        uStack_4f8._4_4_ = puVar37[1];
        uVar5 = puVar37[2];
        uStack_4ec = puVar37[3];
        cStack_4f0 = (char)uVar5;
        uStack_4ef = (undefined1)(uVar5 >> 8);
        uStack_4ee = (undefined2)(uVar5 >> 0x10);
      }
      else {
        func_0x0412e5e0(&uStack_4f8,param_1[0x17],param_1[0x16]);
      }
      cVar14 = func_0x0d2529d0(param_1,&uStack_4f8);
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe)
        ;
      }
      if (cVar14 == '\0') {
LAB_0d256514:
        if (pcStack_618 == (char *)0x0) goto LAB_0d25657c;
        func_0x0eede920(0,1,0,3,8,&UNK_01241c49,0x17c,&UNK_0143fd1d);
        func_0x041b3ad0(&uStack_4f8,&pcStack_618);
        piVar30 = uStack_4e8;
        if (((uint)uStack_4f8 & 1) == 0) {
          piVar30 = (int *)((long)&uStack_4f8 + 1);
        }
        func_0x0eede920(0,1,0,3,8,&UNK_01241c49,0x17d,&UNK_01220412,piVar30);
        if (((uint)uStack_4f8 & 1) != 0) {
          func_0x0412a280(uStack_4e8,
                          CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
        }
        goto LAB_0d2565fe;
      }
      bVar40 = (*(byte *)(param_1 + 0x15) & 1) != 0;
      if (bVar40) {
        pbVar31 = (byte *)param_1[0x17];
      }
      uVar21 = (ulong)(*(byte *)(param_1 + 0x15) >> 1);
      if (bVar40) {
        uVar21 = param_1[0x16];
      }
      if (uVar21 < 0xfffffffffffffff8) {
        lVar18 = param_1[4];
        if (uVar21 < 0x17) {
          uStack_4f8._0_4_ = CONCAT31(uStack_4f8._1_3_,(char)uVar21 * '\x02');
          piVar30 = (int *)((long)&uStack_4f8 + 1);
          if (uVar21 != 0) goto LAB_0d256487;
        }
        else {
          lVar25 = 0x1a;
          if ((uVar21 | 7) != 0x17) {
            lVar25 = (uVar21 | 7) + 1;
          }
          piVar30 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar25);
          if (piVar30 == (int *)0x0) {
            func_0x0eec74c0(lVar25,0);
          }
          uStack_4f8._0_4_ = (uint)lVar25 | 1;
          uStack_4f8._4_4_ = (uint)((ulong)lVar25 >> 0x20);
          uStack_4ef = (undefined1)(uVar21 >> 8);
          uStack_4ee = (undefined2)(uVar21 >> 0x10);
          uStack_4ec = (uint)(uVar21 >> 0x20);
          cStack_4f0 = (char)uVar21;
          uStack_4e8 = piVar30;
LAB_0d256487:
          func_0x0eee2ee0(piVar30,pbVar31,uVar21);
        }
        *(undefined1 *)((long)piVar30 + uVar21) = 0;
        func_0x04183670(&uStack_738,lVar18,&uStack_4f8,&uStack_5f8);
        pcVar39 = pcStack_618;
        pcStack_618 = (char *)uStack_738;
        uStack_738 = (byte *)pcVar39;
        if (pcVar39 != (char *)0x0) {
          (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
        }
        if (((uint)uStack_4f8 & 1) != 0) {
          func_0x0412a280(uStack_4e8,
                          CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
        }
        goto LAB_0d256514;
      }
      goto LAB_0d256f8f;
    }
LAB_0d25657c:
    plVar26 = (long *)param_1[6];
    param_1[6] = (long)uStack_5f8;
    puVar19 = uStack_5f8;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 8))();
LAB_0d2565fe:
      puVar19 = (undefined8 *)param_1[6];
    }
    pcVar39 = "-";
    if (puVar19 != (undefined8 *)0x0) {
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      cStack_4f0 = '\0';
      uStack_4ef = 0;
      uStack_4ee = 0;
      uStack_4ec = 0;
      uStack_4e8 = (int *)0x0;
      (**(code **)(*param_1 + 0xa8))(param_1,&UNK_012004a9,0x1f,&uStack_4f8,0xd);
      if (((uint)uStack_4f8 & 1) == 0) {
        if ((byte)uStack_4f8 >> 1 == 4) goto LAB_0d256671;
      }
      else if (CONCAT44(uStack_4ec,CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0))) == 4) {
LAB_0d256671:
        if (((uint)uStack_4f8 & 1) == 0) {
          iVar16 = CONCAT13(uStack_4f8._4_1_,uStack_4f8._1_3_);
        }
        else {
          iVar16 = *uStack_4e8;
        }
        if (iVar16 == 0x65757274) {
          *(undefined1 *)((long)param_1 + 0x291) = 1;
        }
      }
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(uStack_4e8,CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe)
        ;
      }
      if (cVar11 == '\x01' && pcStack_618 == (char *)0x0) {
        if (DAT_0f7b8fb8 == '\0') goto LAB_0d256f94;
        goto LAB_0d2566e6;
      }
      goto LAB_0d2567f3;
    }
LAB_0d256ae1:
    if (pcStack_618 != (char *)0x0) goto LAB_0d256aee;
LAB_0d256b6b:
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  else {
    if ((bStack_6f8 & 1) == 0) goto LAB_0d254bf8;
LAB_0d254a7d:
    lVar18 = *plStack_520;
    if (*(long *)(lVar18 + 0x40) == 0) goto LAB_0d254c19;
LAB_0d254a94:
    bVar40 = (*(byte *)(lVar18 + 0x48) & 1) != 0;
    uStack_738 = (byte *)(lVar18 + 0x49);
    if (bVar40) {
      uStack_738 = (byte *)*(char **)(lVar18 + 0x58);
    }
    plStack_730 = (long *)(ulong)(*(byte *)(lVar18 + 0x48) >> 1);
    if (bVar40) {
      plStack_730 = *(long **)(lVar18 + 0x50);
    }
    puStack_728 = (undefined4 *)&UNK_012d404b;
    uStack_720 = 7;
    func_0x049151c0(&uStack_4f8,&uStack_738,2,0x2f);
    if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    plStack_5f0 = plStack_f8;
    uStack_5f8 = &uStack_4f8;
    cVar11 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&uStack_5f8);
    if (cVar11 == '\0') {
LAB_0d2550b9:
      bStack_698 = 1;
      goto LAB_0d2550c1;
    }
    uStack_638 = 0;
    plStack_630 = (long *)0x0;
    uStack_628 = 0;
    if (plStack_f8 < (long *)0xfffffffffffffff8) {
      uVar34 = *(undefined8 *)(lVar18 + 0x40);
      if (plStack_f8 < (long *)0x17) {
        uStack_738 = (byte *)CONCAT71(uStack_738._1_7_,(char)plStack_f8 * '\x02');
        puVar28 = (undefined *)((long)&uStack_738 + 1);
        if (plStack_f8 != (long *)0x0) goto LAB_0d254e51;
      }
      else {
        uVar21 = 0x1a;
        if (((ulong)plStack_f8 | 7) != 0x17) {
          uVar21 = ((ulong)plStack_f8 | 7) + 1;
        }
        puVar28 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
        if (puVar28 == (undefined *)0x0) {
          func_0x0eec74c0(uVar21,0);
        }
        uStack_738 = (byte *)(uVar21 | 1);
        plStack_730 = plStack_f8;
        puStack_728 = (undefined4 *)puVar28;
LAB_0d254e51:
        func_0x0eee2f00(puVar28,&uStack_4f8,plStack_f8);
      }
      puVar28[(long)plStack_f8] = 0;
      func_0x041b34e0(&pcStack_618,uVar34,&uStack_738,&uStack_638);
      if (((ulong)uStack_738 & 1) != 0) {
        func_0x0412a280(puStack_728,(ulong)uStack_738 & 0xfffffffffffffffe);
      }
      pcVar39 = pcStack_618;
      if (pcStack_618 != (char *)0x0) {
        plVar26 = (long *)func_0x0412dc70();
        puStack_728 = (undefined4 *)_DAT_0f45d1b0;
        uStack_720 = _UNK_0f45d1b8;
        uStack_738 = (byte *)_DAT_0f45d1a0;
        plStack_730 = (long *)_UNK_0f45d1a8;
        uStack_718 = 0x20656c62616e5528;
        lStack_710 = 0x2064616572206f74;
        uStack_708 = 0x2e656c6966;
        bStack_6f8 = 0;
        uStack_700 = uStack_700 & 0xff000000;
        cStack_6f0 = '\x01';
        uStack_5d8 = 0;
        uStack_5d0 = (long *)0x0;
        lStack_5c8 = 0;
        func_0x0eee17a0(&uStack_5d8,&uStack_738,&puStack_6e8,1);
        if ((cStack_6f0 == '\x01') && ((uStack_718 & 1) != 0)) {
          func_0x0412a280(uStack_708,uStack_718 & 0xfffffffffffffffe);
        }
        uStack_6b8 = (undefined4 *)lStack_5c8;
        uStack_6c8 = uStack_5d8;
        uStack_578 = (long **)CONCAT44(uStack_578._4_4_,0x16);
        uStack_5d8 = CONCAT44(uStack_578._4_4_,0x16);
        uStack_568 = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        uStack_550 = 0;
        uStack_548 = 0;
        uStack_540 = 0;
        uStack_738 = (byte *)CONCAT44(uStack_578._4_4_,0x16);
        lStack_5c8 = 0;
        uStack_5c0 = 0;
        uStack_5b8 = 0;
        uStack_5b0 = 0;
        uStack_5a8 = 0;
        uStack_5a0 = 0;
        bStack_698 = 0;
        uStack_6d8 = (long **)CONCAT44(uStack_578._4_4_,0x16);
        plStack_6c0 = uStack_5d0;
        puStack_728 = (undefined4 *)0x0;
        uStack_720 = 0;
        uStack_718 = 0;
        uStack_6b0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        lStack_710 = 0;
        uStack_708 = 0;
        uStack_700 = 0;
        plStack_730 = plVar26;
        uStack_6d0 = plVar26;
        uStack_5d0 = plVar26;
        uStack_570 = plVar26;
        func_0x048e6d60(&uStack_738);
        func_0x048e6d60(&uStack_5d8);
        func_0x048e6d60(&uStack_578);
        if (pcStack_618 != (char *)0x0) {
          (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
        }
      }
      if ((uStack_638 & 1) != 0) {
        func_0x0412a280(uStack_628,uStack_638 & 0xfffffffffffffffe);
      }
      if (pcVar39 != (char *)0x0) goto LAB_0d2550c1;
      goto LAB_0d2550b9;
    }
LAB_0d256f8a:
    FUN_04882e30();
LAB_0d256f8f:
    FUN_04882e30();
LAB_0d256f94:
    iVar16 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar16 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pcVar39 = "-";
    }
LAB_0d2566e6:
    pbVar31 = (byte *)(**(code **)(*param_1 + 0x50))(param_1);
    bVar40 = (*pbVar31 & 1) != 0;
    uStack_738 = pbVar31 + 1;
    if (bVar40) {
      uStack_738 = *(byte **)(pbVar31 + 0x10);
    }
    plStack_730 = (long *)(ulong)(*pbVar31 >> 1);
    if (bVar40) {
      plStack_730 = (long *)*(ulong *)(pbVar31 + 8);
    }
    puStack_728 = (undefined4 *)&UNK_013d7958;
    uStack_720 = 0xd;
    func_0x048ad670(&uStack_6d8,&uStack_738,2,0x2f);
    uStack_5d8 = (long)&uStack_6d8 + 1;
    uStack_5d0 = (long *)((ulong)uStack_6d8 >> 1 & 0x7f);
    if (((ulong)uStack_6d8 & 1) != 0) {
      uStack_5d0 = uStack_6d0;
      uStack_5d8 = uStack_6c8;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_4f8,&DAT_0f7b8f98,&uStack_5d8);
    uStack_738 = (byte *)0x2d89be07eda29514;
    puStack_728 = (undefined4 *)0x1;
    uStack_720 = CONCAT44(uStack_720._4_4_,0x394);
    plStack_730 = (long *)pcVar39;
    if ((byte)uStack_4b8 == '\0') {
      uStack_688 = (long **)0x0;
      plStack_680 = (long *)0x0;
      puStack_678 = (undefined *)0x0;
      func_0x0eedeb80(0x100000008,0x2d,&uStack_4f8,&uStack_688,&uStack_738);
      if (((ulong)uStack_688 & 1) != 0) {
        func_0x0412a280(puStack_678,(ulong)uStack_688 & 0xfffffffffffffffe);
      }
    }
    if ((uStack_4b8 & 1) == 0) {
      func_0x048e6d60(&uStack_4f8);
    }
    if (((ulong)uStack_6d8 & 1) != 0) {
      func_0x0412a280(uStack_6c8,(ulong)uStack_6d8 & 0xfffffffffffffffe);
    }
LAB_0d2567f3:
    uStack_738 = (byte *)0x13f150b;
    plStack_730 = (long *)0xf;
    puStack_728 = (undefined4 *)_DAT_0f778528;
    uStack_720 = 0xffffffff00000001;
    uStack_718 = uStack_718 & 0xffffffffffffff00;
    lStack_710 = 0;
    lVar18 = param_1[0x39];
    lStack_710 = func_0x0417cc60();
    lStack_710 = lStack_710 + lVar18;
    plVar26 = (long *)param_1[7];
    uVar13 = (**(code **)(*plVar26 + 0x48))(plVar26);
    uStack_5d8 = 0;
    uStack_5d0 = (long *)0x0;
    uStack_638 = 0;
    plStack_630 = (long *)0x0;
    uStack_4f8._0_4_ = 0xf45c1d8;
    uStack_4f8._4_4_ = 0;
    cStack_4f0 = (char)param_1;
    uStack_4ef = (undefined1)((ulong)param_1 >> 8);
    uStack_4ee = (undefined2)((ulong)param_1 >> 0x10);
    uStack_4ec = (uint)((ulong)param_1 >> 0x20);
    func_0x048a4fd0(&uStack_6d8,plVar26,&uStack_738,&uStack_5d8,uVar13,&uStack_4f8);
    if (CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) != 0) {
      (**(code **)(CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) + 8))(&uStack_4f8);
    }
    plVar22 = uStack_5d0;
    if (uStack_5d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_5d0 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_5d0 + 0x10))(uStack_5d0);
        FUN_0412c2d0(plVar22);
      }
    }
    uStack_578 = uStack_6d8;
    uStack_570 = uStack_6d0;
    if (uStack_6d0 != (long *)0x0) {
      LOCK();
      uStack_6d0[1] = uStack_6d0[1] + 1;
      UNLOCK();
    }
    iVar16 = (int)plVar26[0x10];
    if (iVar16 != 1) {
      if (iVar16 == 3) {
        *(undefined4 *)(uStack_6d8 + 6) = 0;
      }
      else if (iVar16 == 2) {
        (*(code *)(*uStack_6d8)[2])();
        goto LAB_0d256a43;
      }
      uStack_688 = uStack_6d8;
      plStack_680 = uStack_6d0;
      if (uStack_6d0 != (long *)0x0) {
        LOCK();
        uStack_6d0[1] = uStack_6d0[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar26 + 0x28))(plVar26,&uStack_688,0);
      plVar26 = plStack_680;
      if (plStack_680 != (long *)0x0) {
        LOCK();
        plVar22 = plStack_680 + 1;
        lVar18 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_680 + 0x10))(plStack_680);
          FUN_0412c2d0(plVar26);
        }
      }
    }
LAB_0d256a43:
    plVar26 = uStack_570;
    if (uStack_570 != (long *)0x0) {
      LOCK();
      plVar22 = uStack_570 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_570 + 0x10))(uStack_570);
        FUN_0412c2d0(plVar26);
      }
    }
    plVar22 = plStack_630;
    plVar26 = uStack_6d0;
    pplVar38 = uStack_6d8 + 0xe;
    if (uStack_6d8 == (long **)0x0) {
      pplVar38 = (long **)0x0;
    }
    if (plStack_630 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_630 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_630 + 0x10))(plStack_630);
        FUN_0412c2d0(plVar22);
      }
    }
    param_1[0xb] = (long)pplVar38;
    plVar22 = (long *)param_1[0xc];
    param_1[0xc] = (long)plVar26;
    if (plVar22 == (long *)0x0) goto LAB_0d256ae1;
    LOCK();
    plVar26 = plVar22 + 1;
    lVar18 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar18 != 0) goto LAB_0d256ae1;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0412c2d0(plVar22);
    if (pcStack_618 == (char *)0x0) goto LAB_0d256b6b;
LAB_0d256aee:
    bVar12 = pcStack_618[4] - 1;
    if (bVar12 < 4) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(&UNK_014e4090 + (ulong)bVar12 * 4);
      cVar11 = pcStack_618[4];
    }
    else {
      *(uint *)(param_1 + 0xd) = (uint)(pcStack_618[4] != '\x05') * 3 + 3;
      cVar11 = pcStack_618[4];
    }
    if (cVar11 == '\x01') {
      uStack_4f8._0_4_ = 0x746f4e10;
      uStack_4f8._4_4_ = 0x6e756f46;
      cStack_4f0 = 'd';
      uStack_4ef = 0;
      goto LAB_0d256b87;
    }
  }
  func_0x041b3ad0(&uStack_4f8,&pcStack_618);
LAB_0d256b87:
  if ((*puStack_588 & 1) != 0) {
    func_0x0412a280(param_1[0x10],param_1[0xe] & 0xfffffffffffffffe);
  }
  *(int **)(puStack_588 + 4) = uStack_4e8;
  *puStack_588 = (uint)uStack_4f8;
  puStack_588[1] = uStack_4f8._4_4_;
  puStack_588[2] = CONCAT22(uStack_4ee,CONCAT11(uStack_4ef,cStack_4f0));
  puStack_588[3] = uStack_4ec;
  if (pcStack_618 != (char *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12b5b18  DBStorage chain is invalid. Possibly encryption-related, or bad DBStorageConfig passed. Reason: 
 * 0x12b5b28  is invalid. Possibly encryption-related, or bad DBStorageConfig passed. Reason: 
 * 0x12b5b38  ibly encryption-related, or bad DBStorageConfig passed. Reason: 
 * 0x12b5b48  related, or bad DBStorageConfig passed. Reason: 
 * 0x12b5b58  DBStorageConfig passed. Reason: 
 * 0x12b5b68  passed. Reason: 
 */
