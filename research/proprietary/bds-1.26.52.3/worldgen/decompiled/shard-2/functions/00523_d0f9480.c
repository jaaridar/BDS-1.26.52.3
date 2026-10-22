/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f9480 (ELF vaddr 0xd0f9480)
 * Label: caller-of-callee
 * Body:  [[0d1f9480, 0d1f9a26] [0d1f9a30, 0d1f9c79] [0d1f9c80, 0d1f9ec9] [0d1f9ed0, 0d1fa119] [0d1fa120, 0d1fa369] [0d1fa370, 0d1fa5a9] [0d1fa5b0, 0d1fa7e9] [0d1fa7f0, 0d1fab8b] [0d1fabac, 0d1fabcd] [0d1facba, 0d1face9]]
 * Ghidra: FUN_0d1f9480
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1f9480(byte *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined6 uVar11;
  undefined7 uVar12;
  undefined7 *puVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  byte *pbVar20;
  bool bVar21;
  undefined8 uStack_e08;
  undefined1 uStack_e00;
  undefined2 uStack_dff;
  undefined1 uStack_dfd;
  undefined1 uStack_dfc;
  undefined1 uStack_dfb;
  undefined1 uStack_dfa;
  undefined1 uStack_df9;
  undefined1 uStack_df8;
  undefined1 uStack_df7;
  undefined6 uStack_df6;
  undefined4 uStack_de8;
  undefined1 uStack_de4;
  undefined1 uStack_de3;
  undefined2 uStack_de2;
  undefined1 uStack_de0;
  undefined2 uStack_ddf;
  undefined1 uStack_ddd;
  undefined1 uStack_ddc;
  undefined1 uStack_ddb;
  undefined1 uStack_dda;
  undefined1 uStack_dd9;
  undefined1 uStack_dd8;
  undefined1 uStack_dd7;
  undefined6 uStack_dd6;
  byte *pbStack_dd0;
  byte bStack_dc8;
  undefined7 uStack_dc7;
  undefined1 uStack_dc0;
  undefined2 uStack_dbf;
  undefined5 uStack_dbd;
  long lStack_db8;
  undefined8 uStack_db0;
  undefined8 *puStack_da8;
  undefined8 uStack_da0;
  undefined7 *puStack_d98;
  undefined7 *puStack_d90;
  long lStack_d88;
  long lStack_d80;
  long lStack_d78;
  long lStack_d70;
  char cStack_d68;
  byte *pbStack_d60;
  undefined4 uStack_d54;
  byte bStack_d50;
  undefined7 uStack_d4f;
  ulong uStack_d48;
  byte *pbStack_d40;
  byte **ppbStack_d38;
  undefined8 uStack_d30;
  undefined1 *puStack_d28;
  ulong uStack_d20;
  byte **ppbStack_d18;
  undefined8 uStack_d10;
  undefined1 *puStack_d08;
  ulong uStack_d00;
  byte **ppbStack_cf8;
  undefined8 uStack_cf0;
  undefined1 *puStack_ce8;
  ulong uStack_ce0;
  byte **ppbStack_cd8;
  undefined8 uStack_cd0;
  undefined1 *puStack_cc8;
  ulong uStack_cc0;
  byte **ppbStack_cb8;
  undefined8 uStack_cb0;
  undefined1 *puStack_ca8;
  ulong uStack_ca0;
  byte **ppbStack_c98;
  undefined8 uStack_c90;
  undefined1 *puStack_c88;
  ulong uStack_c80;
  undefined8 *puStack_c78;
  undefined8 uStack_c70;
  byte **ppbStack_c68;
  undefined8 uStack_c60;
  undefined1 *puStack_c58;
  ulong uStack_c50;
  byte *pbStack_c48;
  ulong uStack_c40;
  undefined1 *puStack_c38;
  ulong uStack_c30;
  undefined8 uStack_848;
  undefined1 auStack_840 [16];
  long lStack_830;
  long lStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  char cStack_800;
  ulong uStack_440;
  undefined8 uStack_438;
  char cStack_430;
  byte *pbStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 uStack_38;
  
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar8 = _DAT_0f5523a0;
  pbVar20 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_0d1fab7e:
    uVar16 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    if ((bStack_d50 & 1) != 0) goto LAB_0d1facba;
    do {
      do {
        uVar16 = func_0x0eee2d70(uVar16);
      } while ((bStack_d50 & 1) == 0);
LAB_0d1facba:
      func_0x0412a280(pbStack_d40,CONCAT71(uStack_d4f,bStack_d50) & 0xfffffffffffffffe);
    } while( true );
  }
  bVar18 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar18 = *pbVar20;
  }
  plVar1 = _DAT_0f5523a8;
  uStack_438 = 0xf5522b8;
  cStack_430 = '\x01';
  pbStack_428 = pbVar20;
  plStack_420 = plVar8;
  plStack_418 = _DAT_0f5523a8;
  if (((bVar18 & 1) == 0) &&
     (cVar14 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar1 + 0x1c0))(&bStack_d50,plVar1);
  pbStack_428 = (byte *)0x0;
  plStack_420 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0412c2d0(plVar8);
      plVar8 = plStack_420;
      plStack_418 = (long *)0x0;
      if (plStack_420 != (long *)0x0) {
        plStack_418 = (long *)0x0;
        LOCK();
        plVar1 = plStack_420 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_420 + 0x10))(plStack_420);
          FUN_0412c2d0(plVar8);
        }
      }
    }
    else {
      plStack_418 = (long *)0x0;
    }
  }
  pbStack_dd0 = param_1;
  uStack_d54 = param_2;
  if (cStack_430 == '\x01') {
    func_0x0eee02f0(uStack_438);
  }
  bVar18 = bStack_d50 & 1;
  uVar4 = uStack_d48;
  if (bVar18 == 0) {
    uVar4 = (ulong)(bStack_d50 >> 1);
  }
  if (uVar4 == 0) goto LAB_0d1fa872;
  pbStack_d60 = pbStack_dd0 + 1;
  pbVar20 = *(byte **)(pbStack_dd0 + 0x10);
  uVar3 = *(ulong *)(pbStack_dd0 + 8);
  if ((*pbStack_dd0 & 1) == 0) {
    pbVar20 = pbStack_d60;
    uVar3 = (ulong)(*pbStack_dd0 >> 1);
  }
  uVar19 = 0;
  do {
    if (uVar3 + uVar19 == 0) goto LAB_0d1f9697;
    lVar2 = uVar19 + (uVar3 - 1);
    uVar19 = uVar19 - 1;
  } while ((pbVar20[lVar2] != 0x5c) && (pbVar20[lVar2] != 0x2f));
  if (uVar3 + uVar19 == 0xffffffffffffffff) {
LAB_0d1f9697:
    uVar17 = 0;
    func_0x0eee2dd0(auStack_840,0,0x408);
    if (uVar3 < 0x400) {
      uVar17 = uVar3;
      if (uVar3 != 0) {
        func_0x0eee2f00(auStack_840,pbVar20,uVar3);
      }
LAB_0d1f9735:
      auStack_840[uVar17] = 0;
      uStack_440 = uVar17;
    }
  }
  else {
    if (uVar3 <= uVar3 + uVar19) {
      func_0x04882ef0(&UNK_01306d2f);
      goto LAB_0d1fab7e;
    }
    uVar17 = 0;
    func_0x0eee2dd0(auStack_840,0,0x408);
    if (0xfffffffffffffbff < uVar19) {
      uVar17 = ~uVar19;
      if (uVar19 != 0xffffffffffffffff) {
        func_0x0eee2f00(auStack_840,pbVar20 + uVar19 + uVar3 + 1,uVar17);
      }
      goto LAB_0d1f9735;
    }
  }
  pbStack_c48 = pbStack_d40;
  if (bVar18 == 0) {
    pbStack_c48 = (byte *)&uStack_d4f;
  }
  puStack_c38 = auStack_840;
  uStack_c40 = uVar4;
  uStack_c30 = uVar17;
  func_0x049151c0(&uStack_438,&pbStack_c48,2,0x2f);
  pbVar20 = pbStack_dd0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pbVar20 = pbStack_dd0;
  }
  bStack_dc8 = 0x12;
  puStack_d98 = &uStack_dc7;
  uStack_dc7 = 0x642e6c6576656c;
  uStack_dc0 = 0x61;
  uStack_dbf = 0x74;
  uStack_da0 = uStack_38;
  puStack_d90 = (undefined7 *)0x9;
  puStack_da8 = &uStack_438;
  func_0x049151c0(auStack_840,&puStack_da8,2,0x2f);
  uStack_c50 = uStack_440;
  puStack_c58 = auStack_840;
  cVar14 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_c58);
  if (cVar14 == '\0') {
    bVar18 = 0;
joined_r0x0d1f9929:
    if ((bStack_dc8 & 1) == 0) goto LAB_0d1f9912;
LAB_0d1f992b:
    func_0x0412a280(lStack_db8,CONCAT71(uStack_dc7,bStack_dc8) & 0xfffffffffffffffe);
    bVar18 = (byte)uStack_d54 & bVar18;
  }
  else {
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    puStack_d98 = (undefined7 *)((long)&uStack_e08 + 1);
    uStack_e08._0_4_ = 0x76656c1a;
    uStack_e08._4_1_ = 0x65;
    uStack_e08._5_1_ = 0x6c;
    uStack_e08._6_2_ = 0x616e;
    uStack_e00 = 0x6d;
    uStack_dff = 0x2e65;
    uStack_dfd = 0x74;
    uStack_dfc = 0x78;
    uStack_dfb = 0x74;
    uStack_dfa = 0;
    uStack_da0 = uStack_38;
    puStack_d90 = (undefined7 *)0xd;
    puStack_da8 = &uStack_438;
    func_0x049151c0(&pbStack_c48,&puStack_da8,2,0x2f);
    uStack_c60 = uStack_848;
    ppbStack_c68 = &pbStack_c48;
    bVar18 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&ppbStack_c68);
    if (((uint)uStack_e08 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_df6,CONCAT11(uStack_df7,uStack_df8)),
                      CONCAT26(uStack_e08._6_2_,
                               CONCAT15(uStack_e08._5_1_,CONCAT14(uStack_e08._4_1_,(uint)uStack_e08)
                                       )) & 0xfffffffffffffffe);
      goto joined_r0x0d1f9929;
    }
    if ((bStack_dc8 & 1) != 0) goto LAB_0d1f992b;
LAB_0d1f9912:
    bVar18 = (byte)uStack_d54 & bVar18;
  }
  if (bVar18 == 0) {
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    uStack_c70 = uStack_38;
    puStack_c78 = &uStack_438;
    (**(code **)(_DAT_0f7b8f98 + 0x80))(auStack_840,&DAT_0f7b8f98,&puStack_c78);
    lVar2 = lStack_818;
    if (cStack_800 == '\0') {
      if (lStack_818 != 0) {
        while (lVar2 != lStack_810) {
          func_0x048b3e80(lStack_810 + -0x40);
          lStack_810 = lStack_810 + -0x40;
        }
        lStack_810 = lVar2;
        func_0x0412a280(lStack_818,lStack_808 - lStack_818);
      }
      lVar7 = lStack_830;
      lVar2 = lStack_828;
      if (lStack_830 != 0) {
        for (; lVar7 != lVar2; lVar2 = lVar2 + -0x50) {
          if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                            *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_828 = lVar7;
        func_0x0412a280(lStack_830,lStack_820 - lStack_830);
      }
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    uStack_e08._0_4_ = 0x76656c12;
    uStack_e08._4_1_ = 0x65;
    uStack_e08._5_1_ = 0x6c;
    uStack_e08._6_2_ = 0x642e;
    uStack_e00 = 0x61;
    uStack_dff = 0x74;
    bVar21 = (*pbVar20 & 1) == 0;
    pbStack_c48 = *(byte **)(pbVar20 + 0x10);
    if (bVar21) {
      pbStack_c48 = pbStack_d60;
    }
    puStack_c38 = (undefined1 *)((long)&uStack_e08 + 1);
    uStack_c40 = (ulong)(*pbVar20 >> 1);
    if (!bVar21) {
      uStack_c40 = *(ulong *)(pbVar20 + 8);
    }
    uStack_c30 = 9;
    func_0x049151c0(auStack_840,&pbStack_c48,2,0x2f);
    uStack_c80 = uStack_440;
    lVar2 = (long)&uStack_de8 + 1;
    uStack_de8 = 0x76656c12;
    uStack_de4 = 0x65;
    uStack_de3 = 0x6c;
    uStack_de2 = 0x642e;
    uStack_de0 = 0x61;
    uStack_ddf = 0x74;
    bStack_dc8 = (byte)&uStack_438;
    bVar18 = bStack_dc8;
    uStack_dc7 = (undefined7)((ulong)&uStack_438 >> 8);
    uVar12 = uStack_dc7;
    uStack_dc0 = (undefined1)uStack_38;
    uStack_dbf = (undefined2)((ulong)uStack_38 >> 8);
    uStack_dbd = (undefined5)((ulong)uStack_38 >> 0x18);
    uStack_db0 = 9;
    lStack_db8 = lVar2;
    puStack_c88 = auStack_840;
    func_0x049151c0(&pbStack_c48,&bStack_dc8,2,0x2f);
    uStack_c90 = uStack_848;
    ppbStack_c98 = &pbStack_c48;
    (**(code **)(_DAT_0f7b8f98 + 0x48))(&puStack_da8,&DAT_0f7b8f98,&puStack_c88,&ppbStack_c98);
    lVar7 = lStack_d80;
    if (cStack_d68 == '\0') {
      if (lStack_d80 != 0) {
        while (lVar7 != lStack_d78) {
          func_0x048b3e80(lStack_d78 + -0x40);
          lStack_d78 = lStack_d78 + -0x40;
        }
        lStack_d78 = lVar7;
        func_0x0412a280(lStack_d80,lStack_d70 - lStack_d80);
      }
      puVar13 = puStack_d98;
      puVar5 = puStack_d90;
      if (puStack_d98 != (undefined7 *)0x0) {
        for (; puVar13 != puVar5; puVar5 = puVar5 + -10) {
          if ((*(char *)(puVar5 + -1) == '\x01') && ((*(byte *)(puVar5 + -6) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar5 + -4),
                            *(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_d90 = puVar13;
        func_0x0412a280(puStack_d98,lStack_d88 - (long)puStack_d98);
      }
    }
    if ((uStack_de8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_dd6,CONCAT11(uStack_dd7,uStack_dd8)),
                      CONCAT26(uStack_de2,CONCAT15(uStack_de3,CONCAT14(uStack_de4,uStack_de8))) &
                      0xfffffffffffffffe);
    }
    if (((uint)uStack_e08 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_df6,CONCAT11(uStack_df7,uStack_df8)),
                      CONCAT26(uStack_e08._6_2_,
                               CONCAT15(uStack_e08._5_1_,CONCAT14(uStack_e08._4_1_,(uint)uStack_e08)
                                       )) & 0xfffffffffffffffe);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    uStack_e08._0_4_ = 0x76656c1a;
    uStack_e08._4_1_ = 0x65;
    uStack_e08._5_1_ = 0x6c;
    uStack_e08._6_2_ = 0x642e;
    uStack_e00 = 0x61;
    uStack_dff = 0x5f74;
    uStack_dfd = 0x6f;
    uStack_dfc = 0x6c;
    uStack_dfb = 100;
    uStack_dfa = 0;
    bVar21 = (*pbVar20 & 1) == 0;
    pbStack_c48 = *(byte **)(pbVar20 + 0x10);
    if (bVar21) {
      pbStack_c48 = pbStack_d60;
    }
    uStack_c40 = (ulong)(*pbVar20 >> 1);
    if (!bVar21) {
      uStack_c40 = *(ulong *)(pbVar20 + 8);
    }
    puStack_c38 = (undefined1 *)((long)&uStack_e08 + 1);
    uStack_c30 = 0xd;
    func_0x049151c0(auStack_840,&pbStack_c48,2,0x2f);
    uStack_ca0 = uStack_440;
    uStack_de8 = 0x76656c1a;
    uStack_de4 = 0x65;
    uStack_de3 = 0x6c;
    uStack_de2 = 0x642e;
    uStack_de0 = 0x61;
    uStack_ddf = 0x5f74;
    uStack_ddd = 0x6f;
    uStack_ddc = 0x6c;
    uStack_ddb = 100;
    uStack_dda = 0;
    uStack_dc0 = (undefined1)uStack_38;
    uStack_dbf = (undefined2)((ulong)uStack_38 >> 8);
    uStack_dbd = (undefined5)((ulong)uStack_38 >> 0x18);
    uStack_db0 = 0xd;
    bStack_dc8 = bVar18;
    uStack_dc7 = uVar12;
    lStack_db8 = lVar2;
    puStack_ca8 = auStack_840;
    func_0x049151c0(&pbStack_c48,&bStack_dc8,2,0x2f);
    uStack_cb0 = uStack_848;
    ppbStack_cb8 = &pbStack_c48;
    (**(code **)(_DAT_0f7b8f98 + 0x48))(&puStack_da8,&DAT_0f7b8f98,&puStack_ca8,&ppbStack_cb8);
    lVar7 = lStack_d80;
    if (cStack_d68 == '\0') {
      lVar6 = lStack_d78;
      if (lStack_d80 != 0) {
        while (lVar7 != lVar6) {
          func_0x048b3e80(lVar6 + -0x40);
          lVar6 = lVar6 + -0x40;
        }
        lStack_d78 = lVar7;
        func_0x0412a280(lStack_d80,lStack_d70 - lStack_d80);
      }
      puVar13 = puStack_d98;
      puVar5 = puStack_d90;
      if (puStack_d98 != (undefined7 *)0x0) {
        for (; puVar13 != puVar5; puVar5 = puVar5 + -10) {
          if ((*(char *)(puVar5 + -1) == '\x01') && ((*(byte *)(puVar5 + -6) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar5 + -4),
                            *(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_d90 = puVar13;
        func_0x0412a280(puStack_d98,lStack_d88 - (long)puStack_d98);
      }
    }
    if ((uStack_de8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_dd6,CONCAT11(uStack_dd7,uStack_dd8)),
                      CONCAT26(uStack_de2,CONCAT15(uStack_de3,CONCAT14(uStack_de4,uStack_de8))) &
                      0xfffffffffffffffe);
    }
    if (((uint)uStack_e08 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_df6,CONCAT11(uStack_df7,uStack_df8)),
                      CONCAT26(uStack_e08._6_2_,
                               CONCAT15(uStack_e08._5_1_,CONCAT14(uStack_e08._4_1_,(uint)uStack_e08)
                                       )) & 0xfffffffffffffffe);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    uStack_e08._0_4_ = 0x76656c1a;
    uStack_e08._4_1_ = 0x65;
    uStack_e08._5_1_ = 0x6c;
    uStack_e08._6_2_ = 0x616e;
    uStack_e00 = 0x6d;
    uStack_dff = 0x2e65;
    uStack_dfd = 0x74;
    uStack_dfc = 0x78;
    uStack_dfb = 0x74;
    uStack_dfa = 0;
    bVar21 = (*pbVar20 & 1) == 0;
    pbStack_c48 = *(byte **)(pbVar20 + 0x10);
    if (bVar21) {
      pbStack_c48 = pbStack_d60;
    }
    uStack_c40 = (ulong)(*pbVar20 >> 1);
    if (!bVar21) {
      uStack_c40 = *(ulong *)(pbVar20 + 8);
    }
    puStack_c38 = (undefined1 *)((long)&uStack_e08 + 1);
    uStack_c30 = 0xd;
    func_0x049151c0(auStack_840,&pbStack_c48,2,0x2f);
    uStack_cc0 = uStack_440;
    uStack_de8 = 0x76656c1a;
    uStack_de4 = 0x65;
    uStack_de3 = 0x6c;
    uStack_de2 = 0x616e;
    uStack_de0 = 0x6d;
    uStack_ddf = 0x2e65;
    uStack_ddd = 0x74;
    uStack_ddc = 0x78;
    uStack_ddb = 0x74;
    uStack_dda = 0;
    uStack_dc0 = (undefined1)uStack_38;
    uStack_dbf = (undefined2)((ulong)uStack_38 >> 8);
    uStack_dbd = (undefined5)((ulong)uStack_38 >> 0x18);
    uStack_db0 = 0xd;
    bStack_dc8 = bVar18;
    uStack_dc7 = uVar12;
    lStack_db8 = lVar2;
    puStack_cc8 = auStack_840;
    func_0x049151c0(&pbStack_c48,&bStack_dc8,2,0x2f);
    uStack_cd0 = uStack_848;
    ppbStack_cd8 = &pbStack_c48;
    (**(code **)(_DAT_0f7b8f98 + 0x48))(&puStack_da8,&DAT_0f7b8f98,&puStack_cc8,&ppbStack_cd8);
    lVar7 = lStack_d80;
    if (cStack_d68 == '\0') {
      lVar6 = lStack_d78;
      if (lStack_d80 != 0) {
        while (lVar7 != lVar6) {
          func_0x048b3e80(lVar6 + -0x40);
          lVar6 = lVar6 + -0x40;
        }
        lStack_d78 = lVar7;
        func_0x0412a280(lStack_d80,lStack_d70 - lStack_d80);
      }
      puVar13 = puStack_d98;
      puVar5 = puStack_d90;
      if (puStack_d98 != (undefined7 *)0x0) {
        for (; puVar13 != puVar5; puVar5 = puVar5 + -10) {
          if ((*(char *)(puVar5 + -1) == '\x01') && ((*(byte *)(puVar5 + -6) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar5 + -4),
                            *(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_d90 = puVar13;
        func_0x0412a280(puStack_d98,lStack_d88 - (long)puStack_d98);
      }
    }
    if ((uStack_de8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_dd6,CONCAT11(uStack_dd7,uStack_dd8)),
                      CONCAT26(uStack_de2,CONCAT15(uStack_de3,CONCAT14(uStack_de4,uStack_de8))) &
                      0xfffffffffffffffe);
    }
    if (((uint)uStack_e08 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_df6,CONCAT11(uStack_df7,uStack_df8)),
                      CONCAT26(uStack_e08._6_2_,
                               CONCAT15(uStack_e08._5_1_,CONCAT14(uStack_e08._4_1_,(uint)uStack_e08)
                                       )) & 0xfffffffffffffffe);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    uStack_e08._0_4_ = 0x726f771e;
    uStack_e08._4_1_ = 0x6c;
    uStack_e08._5_1_ = 100;
    uStack_e08._6_2_ = 0x695f;
    uStack_e00 = 99;
    uStack_dff = 0x6e6f;
    uStack_dfd = 0x2e;
    uStack_dfc = 0x6a;
    uStack_dfb = 0x70;
    uStack_dfa = 0x65;
    uStack_df9 = 0x67;
    uStack_df8 = 0;
    bVar21 = (*pbVar20 & 1) == 0;
    pbStack_c48 = *(byte **)(pbVar20 + 0x10);
    if (bVar21) {
      pbStack_c48 = pbStack_d60;
    }
    uStack_c40 = (ulong)(*pbVar20 >> 1);
    if (!bVar21) {
      uStack_c40 = *(ulong *)(pbVar20 + 8);
    }
    puStack_c38 = (undefined1 *)((long)&uStack_e08 + 1);
    uStack_c30 = 0xf;
    func_0x049151c0(auStack_840,&pbStack_c48,2,0x2f);
    uStack_ce0 = uStack_440;
    uStack_de8 = 0x726f771e;
    uStack_de4 = 0x6c;
    uStack_de3 = 100;
    uStack_de2 = 0x695f;
    uStack_de0 = 99;
    uStack_ddf = 0x6e6f;
    uStack_ddd = 0x2e;
    uStack_ddc = 0x6a;
    uStack_ddb = 0x70;
    uStack_dda = 0x65;
    uStack_dd9 = 0x67;
    uStack_dd8 = 0;
    uStack_dc0 = (undefined1)uStack_38;
    uStack_dbf = (undefined2)((ulong)uStack_38 >> 8);
    uStack_dbd = (undefined5)((ulong)uStack_38 >> 0x18);
    uStack_db0 = 0xf;
    bStack_dc8 = bVar18;
    uStack_dc7 = uVar12;
    lStack_db8 = lVar2;
    puStack_ce8 = auStack_840;
    func_0x049151c0(&pbStack_c48,&bStack_dc8,2,0x2f);
    uStack_cf0 = uStack_848;
    ppbStack_cf8 = &pbStack_c48;
    (**(code **)(_DAT_0f7b8f98 + 0x48))(&puStack_da8,&DAT_0f7b8f98,&puStack_ce8,&ppbStack_cf8);
    lVar7 = lStack_d80;
    if (cStack_d68 == '\0') {
      lVar6 = lStack_d78;
      if (lStack_d80 != 0) {
        while (lVar7 != lVar6) {
          func_0x048b3e80(lVar6 + -0x40);
          lVar6 = lVar6 + -0x40;
        }
        lStack_d78 = lVar7;
        func_0x0412a280(lStack_d80,lStack_d70 - lStack_d80);
      }
      puVar13 = puStack_d98;
      puVar5 = puStack_d90;
      if (puStack_d98 != (undefined7 *)0x0) {
        for (; puVar13 != puVar5; puVar5 = puVar5 + -10) {
          if ((*(char *)(puVar5 + -1) == '\x01') && ((*(byte *)(puVar5 + -6) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar5 + -4),
                            *(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_d90 = puVar13;
        func_0x0412a280(puStack_d98,lStack_d88 - (long)puStack_d98);
      }
    }
    if ((uStack_de8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_dd6,CONCAT11(uStack_dd7,uStack_dd8)),
                      CONCAT26(uStack_de2,CONCAT15(uStack_de3,CONCAT14(uStack_de4,uStack_de8))) &
                      0xfffffffffffffffe);
    }
    if (((uint)uStack_e08 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_df6,CONCAT11(uStack_df7,uStack_df8)),
                      CONCAT26(uStack_e08._6_2_,
                               CONCAT15(uStack_e08._5_1_,CONCAT14(uStack_e08._4_1_,(uint)uStack_e08)
                                       )) & 0xfffffffffffffffe);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    uStack_e08._0_4_ = CONCAT31((int3)_DAT_014dbe58,0x20);
    uStack_e08._4_1_ = (undefined1)((uint)_DAT_014dbe58 >> 0x18);
    uStack_e08._5_1_ = (undefined1)_UNK_014dbe5c;
    uStack_e08._6_2_ = (undefined2)((uint)_UNK_014dbe5c >> 8);
    uStack_e00 = (undefined1)((uint)_UNK_014dbe5c >> 0x18);
    uStack_dff = (undefined2)_UNK_014dbe60;
    uStack_dfd = (undefined1)((uint)_UNK_014dbe60 >> 0x10);
    uStack_dfc = (undefined1)((uint)_UNK_014dbe60 >> 0x18);
    uStack_dfb = (undefined1)_UNK_014dbe64;
    uStack_dfa = (undefined1)((uint)_UNK_014dbe64 >> 8);
    uStack_df9 = (undefined1)((uint)_UNK_014dbe64 >> 0x10);
    uStack_df8 = (undefined1)((uint)_UNK_014dbe64 >> 0x18);
    uStack_df7 = 0;
    bVar21 = (*pbVar20 & 1) == 0;
    pbStack_c48 = *(byte **)(pbVar20 + 0x10);
    if (bVar21) {
      pbStack_c48 = pbStack_d60;
    }
    uStack_c40 = (ulong)(*pbVar20 >> 1);
    if (!bVar21) {
      uStack_c40 = *(ulong *)(pbVar20 + 8);
    }
    puStack_c38 = (undefined1 *)((long)&uStack_e08 + 1);
    uStack_c30 = 0x10;
    func_0x049151c0(auStack_840,&pbStack_c48,2,0x2f);
    uStack_d00 = uStack_440;
    uStack_de8 = CONCAT31((int3)_DAT_014dbe58,0x20);
    uStack_de4 = (undefined1)((uint)_DAT_014dbe58 >> 0x18);
    uStack_de3 = (undefined1)_UNK_014dbe5c;
    uStack_de2 = (undefined2)((uint)_UNK_014dbe5c >> 8);
    uStack_de0 = (undefined1)((uint)_UNK_014dbe5c >> 0x18);
    uStack_ddf = (undefined2)_UNK_014dbe60;
    uStack_ddd = (undefined1)((uint)_UNK_014dbe60 >> 0x10);
    uStack_ddc = (undefined1)((uint)_UNK_014dbe60 >> 0x18);
    uStack_ddb = (undefined1)_UNK_014dbe64;
    uStack_dda = (undefined1)((uint)_UNK_014dbe64 >> 8);
    uStack_dd9 = (undefined1)((uint)_UNK_014dbe64 >> 0x10);
    uStack_dd8 = (undefined1)((uint)_UNK_014dbe64 >> 0x18);
    uStack_dd7 = 0;
    uStack_dc0 = (undefined1)uStack_38;
    uStack_dbf = (undefined2)((ulong)uStack_38 >> 8);
    uStack_dbd = (undefined5)((ulong)uStack_38 >> 0x18);
    uStack_db0 = 0x10;
    bStack_dc8 = bVar18;
    uStack_dc7 = uVar12;
    lStack_db8 = lVar2;
    puStack_d08 = auStack_840;
    func_0x049151c0(&pbStack_c48,&bStack_dc8,2,0x2f);
    uStack_d10 = uStack_848;
    ppbStack_d18 = &pbStack_c48;
    (**(code **)(_DAT_0f7b8f98 + 0x48))(&puStack_da8,&DAT_0f7b8f98,&puStack_d08,&ppbStack_d18);
    lVar7 = lStack_d80;
    if (cStack_d68 == '\0') {
      lVar6 = lStack_d78;
      if (lStack_d80 != 0) {
        while (lVar7 != lVar6) {
          func_0x048b3e80(lVar6 + -0x40);
          lVar6 = lVar6 + -0x40;
        }
        lStack_d78 = lVar7;
        func_0x0412a280(lStack_d80,lStack_d70 - lStack_d80);
      }
      puVar13 = puStack_d98;
      puVar5 = puStack_d90;
      if (puStack_d98 != (undefined7 *)0x0) {
        for (; puVar13 != puVar5; puVar5 = puVar5 + -10) {
          if ((*(char *)(puVar5 + -1) == '\x01') && ((*(byte *)(puVar5 + -6) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar5 + -4),
                            *(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_d90 = puVar13;
        func_0x0412a280(puStack_d98,lStack_d88 - (long)puStack_d98);
      }
    }
    if ((uStack_de8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_dd6,CONCAT11(uStack_dd7,uStack_dd8)),
                      CONCAT26(uStack_de2,CONCAT15(uStack_de3,CONCAT14(uStack_de4,uStack_de8))) &
                      0xfffffffffffffffe);
    }
    if (((uint)uStack_e08 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_df6,CONCAT11(uStack_df7,uStack_df8)),
                      CONCAT26(uStack_e08._6_2_,
                               CONCAT15(uStack_e08._5_1_,CONCAT14(uStack_e08._4_1_,(uint)uStack_e08)
                                       )) & 0xfffffffffffffffe);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7b8fb8), iVar15 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      pbVar20 = pbStack_dd0;
    }
    uStack_df8 = (undefined1)_DAT_01d3f288;
    uVar9 = uStack_df8;
    uStack_df7 = (undefined1)((ulong)_DAT_01d3f288 >> 8);
    uVar10 = uStack_df7;
    uStack_df6 = (undefined6)((ulong)_DAT_01d3f288 >> 0x10);
    uVar11 = uStack_df6;
    uStack_e08._0_4_ = _DAT_01d3f278;
    uStack_e08._4_1_ = (undefined1)_UNK_01d3f27c;
    uStack_e08._5_1_ = (undefined1)((uint)_UNK_01d3f27c >> 8);
    uStack_e08._6_2_ = (undefined2)((uint)_UNK_01d3f27c >> 0x10);
    uStack_e00 = (undefined1)_UNK_01d3f280;
    uStack_dff = (undefined2)((uint)_UNK_01d3f280 >> 8);
    uStack_dfd = (undefined1)((uint)_UNK_01d3f280 >> 0x18);
    uStack_dfc = (undefined1)_UNK_01d3f284;
    uStack_dfb = (undefined1)((uint)_UNK_01d3f284 >> 8);
    uStack_dfa = (undefined1)((uint)_UNK_01d3f284 >> 0x10);
    uStack_df9 = (undefined1)((uint)_UNK_01d3f284 >> 0x18);
    bVar21 = (*pbVar20 & 1) != 0;
    pbStack_c48 = pbStack_d60;
    if (bVar21) {
      pbStack_c48 = *(byte **)(pbVar20 + 0x10);
    }
    uStack_c40 = (ulong)(*pbVar20 >> 1);
    if (bVar21) {
      uStack_c40 = *(ulong *)(pbVar20 + 8);
    }
    puStack_c38 = (undefined1 *)((long)&uStack_e08 + 1);
    uStack_c30 = 0x11;
    func_0x049151c0(auStack_840,&pbStack_c48,2,0x2f);
    uStack_d20 = uStack_440;
    uStack_de8 = _DAT_01d3f278;
    uStack_de4 = (undefined1)_UNK_01d3f27c;
    uStack_de3 = (undefined1)((uint)_UNK_01d3f27c >> 8);
    uStack_de2 = (undefined2)((uint)_UNK_01d3f27c >> 0x10);
    uStack_de0 = (undefined1)_UNK_01d3f280;
    uStack_ddf = (undefined2)((uint)_UNK_01d3f280 >> 8);
    uStack_ddd = (undefined1)((uint)_UNK_01d3f280 >> 0x18);
    uStack_ddc = (undefined1)_UNK_01d3f284;
    uStack_ddb = (undefined1)((uint)_UNK_01d3f284 >> 8);
    uStack_dda = (undefined1)((uint)_UNK_01d3f284 >> 0x10);
    uStack_dd9 = (undefined1)((uint)_UNK_01d3f284 >> 0x18);
    uStack_dc0 = (undefined1)uStack_38;
    uStack_dbf = (undefined2)((ulong)uStack_38 >> 8);
    uStack_dbd = (undefined5)((ulong)uStack_38 >> 0x18);
    uStack_db0 = 0x11;
    uStack_dd8 = uVar9;
    uStack_dd7 = uVar10;
    uStack_dd6 = uVar11;
    bStack_dc8 = bVar18;
    uStack_dc7 = uVar12;
    lStack_db8 = lVar2;
    puStack_d28 = auStack_840;
    func_0x049151c0(&pbStack_c48,&bStack_dc8,2,0x2f);
    uStack_d30 = uStack_848;
    ppbStack_d38 = &pbStack_c48;
    (**(code **)(_DAT_0f7b8f98 + 0x48))(&puStack_da8,&DAT_0f7b8f98,&puStack_d28,&ppbStack_d38);
    lVar2 = lStack_d80;
    if (cStack_d68 == '\0') {
      lVar7 = lStack_d78;
      if (lStack_d80 != 0) {
        while (lVar2 != lVar7) {
          func_0x048b3e80(lVar7 + -0x40);
          lVar7 = lVar7 + -0x40;
        }
        lStack_d78 = lVar2;
        func_0x0412a280(lStack_d80,lStack_d70 - lStack_d80);
      }
      puVar13 = puStack_d98;
      puVar5 = puStack_d90;
      if (puStack_d98 != (undefined7 *)0x0) {
        for (; puVar13 != puVar5; puVar5 = puVar5 + -10) {
          if ((*(char *)(puVar5 + -1) == '\x01') && ((*(byte *)(puVar5 + -6) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar5 + -4),
                            *(ulong *)(puVar5 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_d90 = puVar13;
        func_0x0412a280(puStack_d98,lStack_d88 - (long)puStack_d98);
      }
    }
    if ((uStack_de8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_dd6,CONCAT11(uStack_dd7,uStack_dd8)),
                      CONCAT26(uStack_de2,CONCAT15(uStack_de3,CONCAT14(uStack_de4,uStack_de8))) &
                      0xfffffffffffffffe);
    }
    if (((uint)uStack_e08 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_df6,CONCAT11(uStack_df7,uStack_df8)),
                      CONCAT26(uStack_e08._6_2_,
                               CONCAT15(uStack_e08._5_1_,CONCAT14(uStack_e08._4_1_,(uint)uStack_e08)
                                       )) & 0xfffffffffffffffe);
    }
  }
  bVar18 = bStack_d50 & 1;
LAB_0d1fa872:
  if (bVar18 != 0) {
    func_0x0412a280(pbStack_d40,CONCAT71(uStack_d4f,bStack_d50) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14dbe58  custom_icon.jpeg
 * 0x1d3f278  "world_import_lock
 */
