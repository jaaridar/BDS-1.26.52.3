/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc971a90 (ELF vaddr 0xc871a90)
 * Label: caller-of-callee
 * Body:  [[0c971a90, 0c9728ab]]
 * Ghidra: FUN_0c971a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c971a90(undefined *param_1,uint *param_2,byte *param_3,undefined **param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  bool bVar18;
  long *plStack_e28;
  long *plStack_e20;
  long *plStack_e18;
  long *plStack_e10;
  long *plStack_e08;
  long *plStack_e00;
  undefined **ppuStack_df8;
  long *plStack_df0;
  long *plStack_de8;
  long *plStack_de0;
  long *plStack_dd8;
  long *plStack_dd0;
  undefined8 uStack_dc0;
  byte bStack_db8;
  undefined1 uStack_db7;
  undefined6 uStack_db6;
  undefined8 uStack_da8;
  byte bStack_da0;
  undefined1 uStack_d9f;
  undefined6 uStack_d9e;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  long *plStack_d80;
  undefined8 uStack_d78;
  long *plStack_d70;
  long *plStack_d68;
  long *plStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined8 uStack_d40;
  long *plStack_d38;
  long *plStack_d30;
  long *plStack_d28;
  long *plStack_d20;
  undefined8 uStack_ce8;
  long *plStack_ce0;
  byte *pbStack_cd8;
  ulong uStack_cd0;
  undefined *puStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined1 uStack_ca8;
  undefined8 uStack_ca0;
  undefined *puStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  long lStack_c80;
  ulong uStack_c78;
  long lStack_c70;
  undefined **ppuStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  long lStack_c50;
  ulong uStack_878;
  undefined *puStack_868;
  uint uStack_860;
  uint uStack_85c;
  uint uStack_858;
  uint uStack_854;
  long lStack_850;
  undefined **appuStack_848 [128];
  ulong uStack_448;
  undefined *apuStack_438 [4];
  undefined **ppuStack_418;
  ulong uStack_38;
  
  plStack_df0 = *(long **)(param_1 + 0x160);
  puStack_cc8 = &UNK_01218924;
  uStack_cc0 = 0x18;
  uStack_cb8 = _DAT_0f778528;
  uStack_cb0 = 0xffffffff00000001;
  uStack_ca8 = 0;
  uStack_ca0 = 0;
  plStack_dd8 = (long *)CONCAT44(plStack_dd8._4_4_,1);
  plStack_dd0 = (long *)((ulong)plStack_dd0 & 0xffffffffffff0000);
  bStack_db8 = 0;
  uStack_db7 = 0;
  bStack_da0 = 0;
  uStack_d9f = 0;
  puVar3 = param_1 + 0xa0;
  ppuStack_df8 = param_4;
  func_0x0412d680(puVar3);
  iVar10 = *(int *)(param_1 + 200);
  func_0x0412d6b0(puVar3);
  if (iVar10 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x24) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x28) = 0;
    UNLOCK();
    func_0x0412d680(param_1 + 0x48);
    pbVar14 = param_1 + 0x70;
    if (pbVar14 != &UNK_01e79d90) {
      if ((*pbVar14 & 1) == 0) {
        pbVar14[0] = 0;
        pbVar14[1] = 0;
        pbVar14[2] = 0;
        pbVar14[3] = 0;
        pbVar14[4] = 0;
        pbVar14[5] = 0;
        pbVar14[6] = 0;
        pbVar14[7] = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      else {
        func_0x04885120(pbVar14,&UNK_01e79d91,0);
      }
    }
    func_0x0412d6b0(param_1 + 0x48);
    func_0x0c97bf40(param_1 + 0x18,&UNK_01e79d90);
    func_0x0412d680(puVar3);
    *(undefined4 *)(param_1 + 200) = 0;
    func_0x0412d6b0(puVar3);
    func_0x0412d680(puVar3);
    *(undefined4 *)(param_1 + 200) = 2;
    func_0x0412d6b0(puVar3);
    if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    bVar18 = ((byte)*param_2 & 1) != 0;
    pbStack_cd8 = (byte *)((long)param_2 + 1);
    if (bVar18) {
      pbStack_cd8 = *(byte **)(param_2 + 4);
    }
    uStack_cd0 = (ulong)(byte)((byte)*param_2 >> 1);
    if (bVar18) {
      uStack_cd0 = *(ulong *)(param_2 + 2);
    }
    cVar8 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_cd8);
    if (cVar8 == '\0') {
      plStack_dd8 = (long *)CONCAT44(plStack_dd8._4_4_,2);
      func_0x0c972b30(param_1,&plStack_dd8);
      func_0x0412d680(puVar3);
      *(undefined4 *)(param_1 + 200) = 0;
      func_0x0412d6b0(puVar3);
      func_0x09e00340(&puStack_c98,&plStack_dd8);
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
      if (plVar11 == (long *)0x0) {
        FUN_0eec74c0(0x88,0);
      }
      goto LAB_0c971da1;
    }
    bVar18 = (*param_3 & 1) != 0;
    pbVar14 = param_3 + 1;
    if (bVar18) {
      pbVar14 = *(byte **)(param_3 + 0x10);
    }
    uVar15 = (ulong)(*param_3 >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(param_3 + 8);
    }
    func_0x0eee2dd0(apuStack_438,0,0x408);
    if (uVar15 < 0x400) {
      if (uVar15 != 0) {
        func_0x0eee2f00(apuStack_438,pbVar14,uVar15);
      }
      uStack_38 = uVar15;
      *(undefined1 *)((long)apuStack_438 + uVar15) = 0;
    }
    plVar11 = *(long **)(param_1 + 0x160);
    puStack_868 = param_1;
    if ((*param_2 & 1) == 0) {
      lStack_850 = *(long *)(param_2 + 4);
      uStack_860 = *param_2;
      uStack_85c = param_2[1];
      uStack_858 = param_2[2];
      uStack_854 = param_2[3];
    }
    else {
      func_0x0412e5e0(&uStack_860,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
    }
    func_0x0eee2dd0(appuStack_848,0,0x400);
    uStack_448 = uStack_38;
    if (uStack_38 != 0xffffffffffffffff) {
      func_0x0eee2f00(appuStack_848,apuStack_438);
    }
    plStack_d68 = (long *)&UNK_0131bfd4;
    plStack_d60 = (long *)0x70;
    uStack_d58 = _DAT_0f778528;
    uStack_d50 = 0xffffffff00000001;
    uStack_d48 = 0;
    uStack_d40 = 0;
    uVar9 = (**(code **)(*plVar11 + 0x48))(plVar11);
    uStack_d88 = 0;
    plStack_d80 = (long *)0x0;
    puStack_c98 = puStack_868;
    if ((uStack_860 & 1) == 0) {
      lStack_c80 = lStack_850;
      uStack_c90 = CONCAT44(uStack_85c,uStack_860);
      uStack_c88 = (undefined *)CONCAT44(uStack_854,uStack_858);
    }
    else {
      func_0x0412e5e0(&uStack_c90,lStack_850,CONCAT44(uStack_854,uStack_858));
    }
    func_0x0eee2dd0(&uStack_c78,0,0x400);
    uStack_878 = uStack_448;
    if (uStack_448 != 0xffffffffffffffff) {
      func_0x0eee2f00(&uStack_c78,appuStack_848);
    }
    appuStack_848[0] = (undefined **)((ulong)appuStack_848[0] & 0xffffffffffffff00);
    uStack_448 = 0;
    uStack_d78 = 0;
    plStack_d70 = (long *)0x0;
    uStack_d88 = 0;
    plStack_d80 = (long *)0x0;
    plStack_d20 = (long *)0x0;
    plStack_d28 = (long *)&UNK_0f3e8528;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x428);
    if (plVar13 == (long *)0x0) {
      FUN_0eec74c0(0x428,0);
    }
    *plVar13 = (long)puStack_c98;
    if ((uStack_c90 & 1) == 0) {
      plVar13[3] = lStack_c80;
      *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_c90;
      *(undefined4 *)((long)plVar13 + 0xc) = uStack_c90._4_4_;
      *(undefined4 *)(plVar13 + 2) = (undefined4)uStack_c88;
      *(undefined4 *)((long)plVar13 + 0x14) = uStack_c88._4_4_;
    }
    else {
      func_0x0412e5e0(plVar13 + 1,lStack_c80,uStack_c88);
    }
    func_0x0eee2dd0(plVar13 + 4,0,0x408);
    uVar15 = uStack_878;
    if (uStack_878 != 0xffffffffffffffff) {
      func_0x0eee2f00(plVar13 + 4,&uStack_c78);
    }
    plVar13[0x84] = uVar15;
    uStack_c78 = uStack_c78 & 0xffffffffffffff00;
    uStack_878 = 0;
    plStack_d20 = plVar13;
    func_0x0b968430(&plStack_e28,plVar11,&plStack_d68,&uStack_d78,uVar9,&plStack_d28);
    ppuVar17 = ppuStack_df8;
    if (plStack_d28 != (long *)0x0) {
      (*(code *)plStack_d28[1])(&plStack_d28);
    }
    plVar13 = plStack_d70;
    if (plStack_d70 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_d70 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_d70 + 0x10))(plStack_d70);
        func_0x0412c2d0(plVar13);
      }
    }
    plStack_d38 = plStack_e28;
    plStack_d30 = plStack_e20;
    if (plStack_e20 != (long *)0x0) {
      LOCK();
      plStack_e20[1] = plStack_e20[1] + 1;
      UNLOCK();
    }
    iVar10 = (int)plVar11[0x10];
    if (iVar10 != 1) {
      if (iVar10 == 3) {
        *(undefined4 *)(plStack_e28 + 6) = 0;
      }
      else if (iVar10 == 2) {
        (**(code **)(*plStack_e28 + 0x10))();
        goto LAB_0c9726b7;
      }
      plStack_e18 = plStack_e28;
      plStack_e10 = plStack_e20;
      if (plStack_e20 != (long *)0x0) {
        LOCK();
        plStack_e20[1] = plStack_e20[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar11 + 0x28))(plVar11,&plStack_e18,0);
      plVar11 = plStack_e10;
      if (plStack_e10 != (long *)0x0) {
        LOCK();
        plVar13 = plStack_e10 + 1;
        lVar12 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_e10 + 0x10))(plStack_e10);
          func_0x0412c2d0(plVar11);
        }
      }
    }
LAB_0c9726b7:
    plVar11 = plStack_d30;
    if (plStack_d30 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_d30 + 1;
      lVar12 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_d30 + 0x10))(plStack_d30);
        func_0x0412c2d0(plVar11);
      }
    }
    plStack_de0 = plStack_e20;
    plStack_de8 = plStack_e28 + 0xe;
    if (plStack_e28 == (long *)0x0) {
      plStack_de8 = (long *)0x0;
    }
    plStack_e28 = (long *)0x0;
    plStack_e20 = (long *)0x0;
    uStack_ce8 = 0;
    plStack_ce0 = (long *)0x0;
    func_0x0b9685d0(&plStack_e18,&plStack_de8);
    plVar1 = plStack_de0;
    plVar11 = plStack_e10;
    plVar13 = plStack_e18;
    plStack_e18 = (long *)0x0;
    plStack_e10 = (long *)0x0;
    if (plStack_de0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_de0 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_de0 + 0x10))(plStack_de0);
        func_0x0412c2d0(plVar1);
      }
    }
    plVar1 = plStack_ce0;
    if (plStack_ce0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_ce0 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_ce0 + 0x10))(plStack_ce0);
        func_0x0412c2d0(plVar1);
      }
    }
    plVar1 = plStack_e20;
    if (plStack_e20 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_e20 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_e20 + 0x10))(plStack_e20);
        func_0x0412c2d0(plVar1);
      }
    }
    if ((uStack_c90 & 1) != 0) {
      func_0x0412a280(lStack_c80,uStack_c90 & 0xfffffffffffffffe);
    }
    plVar1 = plStack_d80;
    if (plStack_d80 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_d80 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_d80 + 0x10))(plStack_d80);
        func_0x0412c2d0(plVar1);
      }
    }
    plStack_e08 = plVar13;
    plStack_e00 = plVar11;
    if ((uStack_860 & 1) != 0) {
      uVar15 = CONCAT44(uStack_85c,uStack_860);
      lVar12 = lStack_850;
      goto LAB_0c971f34;
    }
  }
  else {
    plStack_dd8 = (long *)CONCAT44(plStack_dd8._4_4_,1);
    func_0x09e00340(&puStack_c98,&plStack_dd8);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
    if (plVar11 == (long *)0x0) {
      FUN_0eec74c0(0x88,0);
    }
LAB_0c971da1:
    lVar12 = lStack_c80;
    ppuVar17 = ppuStack_df8;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0f3e91a8;
    plVar13 = plVar11 + 3;
    uVar4 = (undefined4)uStack_c90;
    uVar5 = uStack_c90._4_4_;
    uVar6 = (undefined4)uStack_c88;
    uVar7 = uStack_c88._4_4_;
    uStack_c90 = 0;
    uStack_c88 = (undefined *)0x0;
    lStack_c80 = 0;
    plVar11[0xc] = (long)ppuStack_c68;
    plVar11[10] = uStack_c78;
    plVar11[0xb] = lStack_c70;
    uStack_c78 = 0;
    lStack_c70 = 0;
    ppuStack_c68 = (undefined **)0x0;
    plVar11[0xf] = lStack_c50;
    *(undefined4 *)(plVar11 + 0xd) = (undefined4)uStack_c60;
    *(undefined4 *)((long)plVar11 + 0x6c) = uStack_c60._4_4_;
    *(undefined4 *)(plVar11 + 0xe) = (undefined4)uStack_c58;
    *(undefined4 *)((long)plVar11 + 0x74) = uStack_c58._4_4_;
    uStack_c60 = 0;
    uStack_c58 = 0;
    lStack_c50 = 0;
    plVar11[3] = (long)&UNK_0f3e91f8;
    *(undefined4 *)(plVar11 + 6) = puStack_c98._0_4_;
    *(undefined4 *)(plVar11 + 7) = uVar4;
    *(undefined4 *)((long)plVar11 + 0x3c) = uVar5;
    *(undefined4 *)(plVar11 + 8) = uVar6;
    *(undefined4 *)((long)plVar11 + 0x44) = uVar7;
    plVar11[9] = lVar12;
    *(undefined1 *)(plVar11 + 0x10) = 1;
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar11[2] = plVar11[2] + 1;
    UNLOCK();
    plVar11[4] = (long)(plVar11 + 4);
    plVar11[5] = (long)plVar11;
    LOCK();
    plVar1 = plVar11 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    plStack_e08 = plVar13;
    plStack_e00 = plVar11;
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
      if ((uStack_c60 & 1) != 0) {
        func_0x0412a280(lStack_c50,uStack_c60 & 0xfffffffffffffffe);
      }
    }
    uVar15 = uStack_c90;
    lVar12 = lStack_c80;
    if ((uStack_c78 & 1) != 0) {
      func_0x0412a280(ppuStack_c68,uStack_c78 & 0xfffffffffffffffe);
      uVar15 = uStack_c90;
      lVar12 = lStack_c80;
    }
    uStack_c90 = uVar15;
    lStack_c80 = lVar12;
    if ((uVar15 & 1) != 0) {
LAB_0c971f34:
      func_0x0412a280(lVar12,uVar15 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_da0 & 1) == 0) {
    if ((bStack_db8 & 1) != 0) goto LAB_0c971fbf;
LAB_0c971f4e:
    if (((ulong)plStack_dd0 & 1) != 0) goto LAB_0c971fe0;
LAB_0c971f59:
    ppuVar16 = (undefined **)ppuVar17[4];
    if (ppuVar16 == (undefined **)0x0) goto LAB_0c972001;
LAB_0c971f67:
    if (ppuVar16 == ppuVar17) {
      ppuStack_418 = apuStack_438;
      (**(code **)(*ppuVar16 + 0x18))(ppuVar16,apuStack_438);
      if (ppuStack_418 != (undefined **)0x0) goto LAB_0c972058;
      goto LAB_0c972019;
    }
    ppuVar17[4] = (undefined *)0x0;
    ppuStack_418 = ppuVar16;
LAB_0c972058:
    appuStack_848[0] = ppuStack_418;
    plStack_e00 = (long *)0x0;
    plStack_e08 = (long *)0x0;
    if (ppuStack_418 == apuStack_438) {
      appuStack_848[0] = &puStack_868;
      plStack_e28 = plVar13;
      plStack_e20 = plVar11;
      (**(code **)(*ppuStack_418 + 0x18))();
    }
    else {
      ppuStack_418 = (undefined **)0x0;
    }
  }
  else {
    func_0x0412a280(uStack_d90,
                    CONCAT62(uStack_d9e,CONCAT11(uStack_d9f,bStack_da0)) & 0xfffffffffffffffe);
    if ((bStack_db8 & 1) == 0) goto LAB_0c971f4e;
LAB_0c971fbf:
    func_0x0412a280(uStack_da8,
                    CONCAT62(uStack_db6,CONCAT11(uStack_db7,bStack_db8)) & 0xfffffffffffffffe);
    if (((ulong)plStack_dd0 & 1) == 0) goto LAB_0c971f59;
LAB_0c971fe0:
    func_0x0412a280(uStack_dc0,(ulong)plStack_dd0 & 0xfffffffffffffffe);
    ppuVar16 = (undefined **)ppuVar17[4];
    if (ppuVar16 != (undefined **)0x0) goto LAB_0c971f67;
LAB_0c972001:
    ppuStack_418 = (undefined **)0x0;
LAB_0c972019:
    plStack_e00 = (long *)0x0;
    plStack_e08 = (long *)0x0;
    appuStack_848[0] = (undefined **)0x0;
  }
  ppuStack_c68 = appuStack_848[0];
  plVar1 = plStack_df0;
  plStack_e28 = (long *)0x0;
  plStack_e20 = (long *)0x0;
  uStack_c90 = 0;
  puStack_c98 = &UNK_0f3e8510;
  plStack_d68 = plVar13;
  plStack_d60 = plVar11;
  if (appuStack_848[0] == (undefined **)0x0) {
    ppuStack_c68 = (undefined **)0x0;
  }
  else if (appuStack_848[0] == &puStack_868) {
    ppuStack_c68 = (undefined **)&uStack_c88;
    (**(code **)(*appuStack_848[0] + 0x18))();
  }
  else {
    appuStack_848[0] = (undefined **)0x0;
  }
  func_0x0b96b4b0(&plStack_d28,plVar1,&puStack_cc8,&plStack_d68,0,&puStack_c98);
  if (puStack_c98 != (undefined *)0x0) {
    (**(code **)(puStack_c98 + 8))(&puStack_c98);
  }
  plVar11 = plStack_d60;
  if (plStack_d60 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_d60 + 1;
    lVar12 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_d60 + 0x10))(plStack_d60);
      func_0x0412c2d0(plVar11);
    }
  }
  plStack_e18 = plStack_d28;
  plStack_e10 = plStack_d20;
  if (plStack_d20 != (long *)0x0) {
    LOCK();
    plStack_d20[1] = plStack_d20[1] + 1;
    UNLOCK();
  }
  iVar10 = (int)plVar1[0x10];
  if (iVar10 != 1) {
    if (iVar10 == 3) {
      *(undefined4 *)(plStack_d28 + 6) = 0;
    }
    else if (iVar10 == 2) {
      (**(code **)(*plStack_d28 + 0x10))();
      goto LAB_0c972221;
    }
    plStack_dd8 = plStack_d28;
    plStack_dd0 = plStack_d20;
    if (plStack_d20 != (long *)0x0) {
      LOCK();
      plStack_d20[1] = plStack_d20[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,&plStack_dd8,0);
    plVar11 = plStack_dd0;
    if (plStack_dd0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_dd0 + 1;
      lVar12 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_dd0 + 0x10))(plStack_dd0);
        func_0x0412c2d0(plVar11);
      }
    }
  }
LAB_0c972221:
  plVar11 = plStack_e10;
  if (plStack_e10 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_e10 + 1;
    lVar12 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_e10 + 0x10))(plStack_e10);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_d20;
  if (appuStack_848[0] == &puStack_868) {
    lVar12 = 0x20;
LAB_0c972286:
    (**(code **)(*appuStack_848[0] + lVar12))();
    plVar13 = plStack_e20;
  }
  else {
    lVar12 = 0x28;
    plVar13 = plStack_e20;
    if (appuStack_848[0] != (undefined **)0x0) goto LAB_0c972286;
  }
  plStack_e20 = plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  if (plVar11 == (long *)0x0) {
LAB_0c9722d0:
    if (ppuStack_418 != apuStack_438) goto LAB_0c9722e5;
LAB_0c972321:
    lVar12 = 0x20;
  }
  else {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar12 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar12 != 0) goto LAB_0c9722d0;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    if (ppuStack_418 == apuStack_438) goto LAB_0c972321;
LAB_0c9722e5:
    lVar12 = 0x28;
    plVar11 = plStack_e00;
    if (ppuStack_418 == (undefined **)0x0) goto joined_r0x0c972334;
  }
  (**(code **)(*ppuStack_418 + lVar12))();
  plVar11 = plStack_e00;
joined_r0x0c972334:
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar12 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      plStack_e00 = plVar11;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  return;
}


