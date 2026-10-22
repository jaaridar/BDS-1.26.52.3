/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x62416e0 (ELF vaddr 0x61416e0)
 * Label: Editor::Services::EditorJigsawService::vslot16
 * Body:  [[062416e0, 06241a57] [06241a60, 06241aa5] [06241ab0, 062424b6] [062424c0, 06242506] [06242510, 0624252d] [06242530, 06242658] [06242660, 062426a6] [062426b0, 06242755] [06242760, 0624285d] [06242860, 062428dd] [062428e0, 06242a04] [06242a1f, 06242a2d] [06242a56, 06242a84] [06242be7, 06242c03] [06242c21, 06242c43]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot16
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Editor__Services__EditorJigsawService__vslot16
               (long param_1,byte *param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  bool bVar28;
  undefined1 uStack_839;
  byte *pbStack_838;
  long *plStack_830;
  long lStack_828;
  long lStack_820;
  ulong *puStack_818;
  long *plStack_810;
  long *plStack_808;
  long lStack_800;
  long *plStack_7f8;
  long *plStack_7f0;
  long lStack_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined1 auStack_7d0 [8];
  ulong uStack_7c8;
  ulong uStack_7c0;
  undefined4 **ppuStack_7b0;
  long *plStack_7a8;
  long *plStack_7a0;
  undefined **ppuStack_798;
  undefined4 *puStack_788;
  undefined4 *puStack_780;
  undefined4 *puStack_778;
  long lStack_770;
  undefined8 uStack_768;
  long lStack_760;
  undefined1 uStack_758;
  long *plStack_748;
  long lStack_740;
  long lStack_738;
  long *plStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  undefined4 uStack_70c;
  long *plStack_708;
  long *plStack_700;
  long lStack_6f8;
  undefined8 *puStack_6e8;
  undefined *puStack_6e0;
  long *plStack_6d8;
  long *plStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  undefined2 uStack_688;
  undefined8 *puStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long *plStack_648;
  long *plStack_640;
  long *plStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 auStack_620 [8];
  ulong uStack_618;
  ulong uStack_610;
  undefined4 **ppuStack_600;
  uint uStack_428;
  long lStack_418;
  long *plStack_410;
  long lStack_408;
  long lStack_400;
  
  plStack_830 = (long *)(param_1 + 0x220);
  pbStack_838 = param_2;
  puVar12 = (undefined8 *)func_0x06339bd0();
  puVar22 = (undefined8 *)(param_1 + 0x228);
  lStack_828 = param_1;
  uStack_70c = param_4;
  puStack_6e8 = puVar22;
  puStack_680 = param_3;
  if (puVar12 == puVar22) {
    lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    if (lVar13 == 0) {
      func_0x0eec74c0(0x1b0,0);
    }
    func_0x0d328830(lVar13);
    lStack_728 = 0;
    lStack_720 = 0;
    plStack_730 = &lStack_728;
    lStack_718 = lVar13;
    func_0x0633a090(&plStack_730,*param_3,param_3 + 1);
    lStack_718 = 0;
    plStack_410 = &lStack_408;
    lStack_408 = lStack_728;
    lStack_400 = lStack_720;
    if (lStack_720 == 0) {
      puVar12 = (undefined8 *)*puVar22;
    }
    else {
      *(long **)(lStack_728 + 0x10) = plStack_410;
      lStack_728 = 0;
      puVar12 = (undefined8 *)*puVar22;
      plStack_410 = plStack_730;
      plStack_730 = &lStack_728;
    }
    lStack_720 = 0;
    puVar26 = puVar22;
    lStack_418 = lVar13;
    if (puVar12 != (undefined8 *)0x0) {
      lStack_720 = 0;
      bVar28 = (*pbStack_838 & 1) != 0;
      pbVar27 = pbStack_838 + 1;
      if (bVar28) {
        pbVar27 = *(byte **)(pbStack_838 + 0x10);
      }
      uVar24 = (ulong)(*pbStack_838 >> 1);
      if (bVar28) {
        uVar24 = *(ulong *)(pbStack_838 + 8);
      }
      do {
        while( true ) {
          puVar26 = puVar12;
          bVar28 = (*(byte *)(puVar26 + 4) & 1) != 0;
          lVar13 = (long)puVar26 + 0x21;
          if (bVar28) {
            lVar13 = puVar26[6];
          }
          uVar21 = (ulong)(*(byte *)(puVar26 + 4) >> 1);
          if (bVar28) {
            uVar21 = puVar26[5];
          }
          uVar25 = uVar24;
          if (uVar21 < uVar24) {
            uVar25 = uVar21;
          }
          iVar11 = func_0x0eee2ff0(pbVar27,lVar13,uVar25);
          if (iVar11 != 0) break;
          if (uVar24 < uVar21) goto LAB_06241a60;
LAB_06241ab5:
          iVar11 = func_0x0eee2ff0(lVar13,pbVar27,uVar25);
          if (iVar11 == 0) {
            if (uVar24 <= uVar21) goto LAB_06241bea;
          }
          else if (-1 < iVar11) goto LAB_06241bea;
          puVar12 = (undefined8 *)puVar26[1];
          if ((undefined8 *)puVar26[1] == (undefined8 *)0x0) {
            puVar22 = puVar26 + 1;
            goto LAB_06241ae4;
          }
        }
        if (-1 < iVar11) goto LAB_06241ab5;
LAB_06241a60:
        puVar12 = (undefined8 *)*puVar26;
        puVar22 = puVar26;
      } while ((undefined8 *)*puVar26 != (undefined8 *)0x0);
    }
LAB_06241ae4:
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x58,0);
    }
    lVar13 = lStack_828;
    plVar1 = plStack_830;
    plStack_640 = plStack_830;
    plStack_638 = (long *)0x0;
    plStack_648 = plVar15;
    if ((*pbStack_838 & 1) == 0) {
      plVar15[6] = *(long *)(pbStack_838 + 0x10);
      lVar23 = *(long *)(pbStack_838 + 8);
      plVar15[4] = *(long *)pbStack_838;
      plVar15[5] = lVar23;
    }
    else {
      FUN_0412e5e0(plVar15 + 4,*(undefined8 *)(pbStack_838 + 0x10),*(undefined8 *)(pbStack_838 + 8))
      ;
    }
    lVar23 = lStack_418;
    lStack_418 = 0;
    plVar15[7] = lVar23;
    plVar15[8] = (long)plStack_410;
    plVar15[9] = lStack_408;
    plVar15[10] = lStack_400;
    if (lStack_400 == 0) {
      plVar15[8] = (long)(plVar15 + 9);
    }
    else {
      *(long **)(lStack_408 + 0x10) = plVar15 + 9;
      plStack_410 = &lStack_408;
      lStack_408 = 0;
      lStack_400 = 0;
    }
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[2] = (long)puVar26;
    *puVar22 = plVar15;
    lVar23 = *(long *)*plVar1;
    if (lVar23 != 0) {
      *plVar1 = lVar23;
    }
    func_0x048bed00(*(undefined8 *)(lVar13 + 0x228),plVar15);
    plVar15 = (long *)(lVar13 + 0x230);
    *plVar15 = *plVar15 + 1;
LAB_06241bea:
    func_0x0629d8f0(&plStack_410,lStack_408);
    lVar13 = lStack_418;
    lStack_418 = 0;
    if (lVar13 != 0) {
      func_0x0d328aa0(lVar13);
      func_0x0412a280(lVar13,0x1b0);
    }
    func_0x0629d8f0(&plStack_730,lStack_728);
    lStack_718 = 0;
    plVar15 = (long *)func_0x05f95d30(*(undefined8 *)(lStack_828 + 0x18));
  }
  else {
    lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    if (lVar13 == 0) {
      func_0x0eec74c0(0x1b0,0);
    }
    func_0x0d328830(lVar13);
    lStack_740 = 0;
    lStack_738 = 0;
    lStack_820 = lVar13;
    plStack_748 = &lStack_740;
    func_0x0633a090(&plStack_748,*param_3,param_3 + 1);
    lStack_820 = 0;
    plStack_410 = plStack_748;
    lStack_408 = lStack_740;
    lStack_400 = lStack_738;
    plVar15 = &lStack_408;
    if (lStack_738 != 0) {
      *(long **)(lStack_740 + 0x10) = &lStack_408;
      lStack_740 = 0;
      lStack_738 = 0;
      plStack_748 = &lStack_740;
      plVar15 = plStack_410;
    }
    plStack_410 = plVar15;
    lStack_418 = lVar13;
    lVar14 = func_0x06339cc0(plStack_830,pbStack_838);
    lVar23 = lStack_418;
    lStack_418 = 0;
    lVar13 = *(long *)(lVar14 + 0x38);
    *(long *)(lVar14 + 0x38) = lVar23;
    if (lVar13 != 0) {
      func_0x0d328aa0(lVar13);
      func_0x0412a280(lVar13,0x1b0);
    }
    func_0x0629d8f0((long *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48));
    *(long **)(lVar14 + 0x40) = plStack_410;
    *(long *)(lVar14 + 0x48) = lStack_408;
    *(long *)(lVar14 + 0x50) = lStack_400;
    if (lStack_400 == 0) {
      *(long *)(lVar14 + 0x40) = lVar14 + 0x48;
    }
    else {
      *(long *)(lStack_408 + 0x10) = lVar14 + 0x48;
      lStack_408 = 0;
      lStack_400 = 0;
      plStack_410 = &lStack_408;
    }
    func_0x0629d8f0(&plStack_410,lStack_408);
    lVar13 = lStack_418;
    lStack_418 = 0;
    if (lVar13 != 0) {
      func_0x0d328aa0(lVar13);
      func_0x0412a280(lVar13,0x1b0);
    }
    func_0x0629d8f0(&plStack_748,lStack_740);
    lVar13 = lStack_820;
    lStack_820 = 0;
    if (lVar13 != 0) {
      func_0x0d328aa0(lVar13);
      func_0x0412a280(lVar13,0x1b0);
    }
    plVar15 = (long *)func_0x05f95d30(*(undefined8 *)(param_1 + 0x18));
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  uVar16 = (**(code **)(*plVar15 + 0xc60))(plVar15);
  puStack_6e0 = &UNK_0f534768;
  plStack_6d0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plStack_6d0 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plStack_6d0[1] = 0;
  plStack_6d0[2] = 0;
  *plStack_6d0 = (long)&UNK_0ef44a60;
  plStack_6d8 = plStack_6d0 + 3;
  *(undefined1 *)(plStack_6d0 + 3) = 1;
  puStack_6e0 = &UNK_0f02ea88;
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  lStack_6a0 = 0;
  lStack_698 = 0;
  lStack_690 = 0;
  uStack_688 = 0;
  func_0x0ee1c910(&puStack_6e0);
  plVar1 = plStack_6d0;
  plStack_7a0 = (long *)0x0;
  ppuStack_798 = (undefined **)0x0;
  if (plStack_6d0 != (long *)0x0) {
    LOCK();
    plStack_6d0[1] = plStack_6d0[1] + 1;
    UNLOCK();
    plStack_7a0 = plStack_6d0;
  }
  if (plStack_6d8 != (long *)0x0) {
    ppuStack_798 = &puStack_6e0;
  }
  plStack_7a8 = plStack_6d8;
  func_0x06242cd0(&lStack_418,uVar16,&plStack_7a8);
  plStack_7a8 = (long *)0x0;
  plStack_7a0 = (long *)0x0;
  if (plVar1 == (long *)0x0) {
    ppuStack_798 = (undefined **)0x0;
  }
  else {
    LOCK();
    plVar20 = plVar1 + 1;
    lVar13 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
    plVar1 = plStack_7a0;
    ppuStack_798 = (undefined **)0x0;
    if (plStack_7a0 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_7a0 + 1;
      lVar13 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_7a0 + 0x10))(plStack_7a0);
        func_0x0412c2d0(plVar1);
      }
    }
  }
  func_0x0d2f3a50(&lStack_418,puStack_680);
  lVar23 = lStack_828;
  pbVar27 = pbStack_838;
  lVar17 = func_0x06339cc0(plStack_830,pbStack_838,pbStack_838);
  lVar14 = lStack_400;
  lStack_400 = 0;
  lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x1a8);
  *(long *)(*(long *)(lVar17 + 0x38) + 0x1a8) = lVar14;
  if (lVar13 != 0) {
    func_0x049e9990(lVar13);
    func_0x0412a280(lVar13,0x60);
  }
  plStack_700 = (long *)0x0;
  plVar1 = *(long **)(lVar23 + 0x88);
  plVar20 = *(long **)(lVar23 + 0x90);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plStack_700 = plVar20;
  }
  plStack_708 = plVar1;
  if ((plVar1 == (long *)0x0) ||
     (lVar23 = lVar23 + 0x80, lStack_6f8 = lVar23, (char)*plVar1 == '\0')) {
LAB_062429ee:
    uVar16 = func_0x04890760();
    func_0x06339e70(&plStack_648);
    func_0x06242c50(&lStack_418);
    func_0x0629d8f0(&plStack_730,lStack_728);
    func_0x06242ca0(&lStack_718);
    uVar16 = func_0x0eee2d70(uVar16);
    func_0x0412a280(lVar13,0x1b0);
    uVar16 = func_0x0eee2d70(uVar16);
    func_0x0d3086c0(&lStack_418);
    func_0x06246370(&puStack_6e0);
    func_0x0eee2d70(uVar16);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar13 = plVar15[0x69];
  lVar14 = func_0x06339cc0(plStack_830,pbVar27,pbVar27);
  lVar14 = *(long *)(lVar14 + 0x38);
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
  }
  plStack_648 = plVar1;
  plStack_640 = plVar20;
  plStack_638 = (long *)lVar23;
  if ((char)*plVar1 == '\0') goto LAB_062429ee;
  uStack_630 = (long *)(lVar14 + 0x110);
  uStack_628 = lVar13;
  func_0x0d88e390(auStack_620,0xf72b850);
  uStack_768 = 0;
  lStack_760 = 0;
  puStack_778 = (undefined4 *)0x0;
  lStack_770 = 0;
  puStack_788 = (undefined4 *)0x0;
  puStack_780 = (undefined4 *)0x0;
  uStack_758 = 0;
  plStack_7f8 = (long *)((ulong)plStack_7f8 & 0xffffffffffffff00);
  func_0x0d5d3c90(&puStack_788,7,&plStack_7f8);
  plStack_7f8 = (long *)((ulong)plStack_7f8 & 0xffffffffffffff00);
  func_0x0d5d3c90(&lStack_770,(_DAT_0f720fb8 - _DAT_0f720fb0 >> 3) * -0x5555555555555555,
                  &plStack_7f8);
  lVar17 = lStack_828;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
  }
  plStack_810 = plVar1;
  plStack_808 = plVar20;
  lStack_800 = lVar23;
  ppuStack_600 = &puStack_788;
  if ((char)*plVar1 == '\0') goto LAB_062429ee;
  func_0x0d33d570(lVar14,&plStack_810,lVar13);
  plVar15 = plStack_808;
  plStack_810 = (long *)0x0;
  plStack_808 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    lStack_800 = 0;
  }
  else {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
    plVar15 = plStack_808;
    lStack_800 = 0;
    if (plStack_808 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_808 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_808 + 0x10))(plStack_808);
        func_0x0412c2d0(plVar15);
      }
    }
  }
  plStack_7f8 = plStack_648;
  plStack_7f0 = plStack_640;
  if (plStack_640 != (long *)0x0) {
    LOCK();
    plStack_640[1] = plStack_640[1] + 1;
    UNLOCK();
  }
  lStack_7e8 = (long)plStack_638;
  uStack_7e0 = (undefined4)uStack_630;
  uStack_7dc = uStack_630._4_4_;
  uStack_7d8 = (undefined4)uStack_628;
  uStack_7d4 = uStack_628._4_4_;
  func_0x0d88e390(auStack_7d0,auStack_620);
  ppuStack_7b0 = ppuStack_600;
  uStack_658 = 0;
  uStack_650 = 0;
  puStack_668 = &UNK_013df34a;
  uStack_660 = 5;
  puStack_678 = &UNK_013df34a;
  uStack_670 = 5;
  uStack_839 = 0;
  func_0x0d33dd60(&puStack_818,&plStack_7f8,&puStack_668,&puStack_678,&uStack_839,&uStack_658);
  func_0x0d3301c0(lVar14,&puStack_818);
  puVar7 = puStack_818;
  puStack_818 = (ulong *)0x0;
  if (puVar7 != (ulong *)0x0) {
    if ((puVar7[6] & 1) != 0) {
      func_0x0412a280(puVar7[8],puVar7[6] & 0xfffffffffffffffe);
    }
    uVar24 = puVar7[3];
    if (uVar24 != 0) {
      puVar7[4] = uVar24;
      func_0x0412a280(uVar24,puVar7[5] - uVar24);
    }
    if ((*puVar7 & 1) != 0) {
      func_0x0412a280(puVar7[2],*puVar7 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar7,0x48);
  }
  if ((uStack_7c0 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_7c0 & 0xff00ffffffffffff) - 8);
  }
  uStack_7c0 = 0;
  if ((uStack_7c8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_7c8 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = plStack_7f0;
  uStack_7c8 = 0;
  plStack_7f8 = (long *)0x0;
  plStack_7f0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
    plVar15 = plStack_7f0;
    lStack_7e8 = 0;
    if (plStack_7f0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_7f0 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_7f0 + 0x10))(plStack_7f0);
        func_0x0412c2d0(plVar15);
        goto joined_r0x062422db;
      }
    }
  }
  lStack_7e8 = 0;
joined_r0x062422db:
  if ((uStack_610 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_610 & 0xff00ffffffffffff) - 8);
  }
  uStack_610 = 0;
  if ((uStack_618 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_618 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = plStack_640;
  puVar22 = puStack_6e8;
  uStack_618 = 0;
  plStack_648 = (long *)0x0;
  plStack_640 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    plStack_638 = (long *)0x0;
  }
  else {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
    plVar15 = plStack_640;
    plStack_638 = (long *)0x0;
    if (plStack_640 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_640 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_640 + 0x10))(plStack_640);
        func_0x0412c2d0(plVar15);
      }
    }
  }
  if (lStack_770 != 0) {
    func_0x0412a280(lStack_770,lStack_760 << 3);
  }
  if (puStack_788 != (undefined4 *)0x0) {
    func_0x0412a280(puStack_788,(long)puStack_778 << 3);
  }
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)0x0;
  if (plVar20 == (long *)0x0) {
    lStack_6f8 = 0;
  }
  else {
    LOCK();
    plVar15 = plVar20 + 1;
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    plVar15 = plStack_700;
    lStack_6f8 = 0;
    if (plStack_700 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_700 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_700 + 0x10))(plStack_700);
        func_0x0412c2d0(plVar15);
      }
    }
  }
  puStack_788 = (undefined4 *)0x0;
  puStack_780 = (undefined4 *)0x0;
  puStack_778 = (undefined4 *)0x0;
  if ((undefined8 *)*plStack_830 != puVar22) {
    puVar19 = (undefined4 *)0x0;
    puVar12 = (undefined8 *)*plStack_830;
    do {
      if (puVar19 < puStack_778) {
        if ((*(byte *)(puVar12 + 4) & 1) != 0) {
          FUN_0412e5e0(puVar19,puVar12[6],puVar12[5]);
          puVar19 = puVar19 + 6;
          puVar26 = (undefined8 *)puVar12[1];
          goto joined_r0x0624252a;
        }
        *(undefined8 *)(puVar19 + 4) = puVar12[6];
        uVar4 = *(undefined4 *)((long)puVar12 + 0x24);
        uVar5 = *(undefined4 *)(puVar12 + 5);
        uVar6 = *(undefined4 *)((long)puVar12 + 0x2c);
        *puVar19 = *(undefined4 *)(puVar12 + 4);
        puVar19[1] = uVar4;
        puVar19[2] = uVar5;
        puVar19[3] = uVar6;
        puVar19 = puVar19 + 6;
        puVar26 = (undefined8 *)puVar12[1];
        puStack_780 = puVar19;
        if ((undefined8 *)puVar12[1] != (undefined8 *)0x0) goto LAB_06242560;
LAB_06242570:
        do {
          puVar18 = (undefined8 *)puVar12[2];
          bVar28 = puVar12 != (undefined8 *)*puVar18;
          puVar12 = puVar18;
        } while (bVar28);
      }
      else {
        puVar19 = (undefined4 *)func_0x04909a40(&puStack_788);
        puVar26 = (undefined8 *)puVar12[1];
joined_r0x0624252a:
        puStack_780 = puVar19;
        if (puVar26 == (undefined8 *)0x0) goto LAB_06242570;
LAB_06242560:
        do {
          puVar18 = puVar26;
          puVar26 = (undefined8 *)*puVar18;
        } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
      }
      puVar12 = puVar18;
    } while (puVar18 != puVar22);
  }
  if ((char)uStack_70c != '\0') {
    func_0x06242da0(lVar17,pbStack_838);
  }
  uStack_428 = 0;
  plStack_648 = (long *)0x0;
  plStack_640 = (long *)0x0;
  plStack_638 = (long *)0x0;
  uStack_630 = (long *)0x0;
  cVar10 = func_0x0edf92e0(&plStack_648,lVar17 + 0x30);
  plVar1 = uStack_630;
  plVar15 = plStack_648;
  if (cVar10 != '\0') {
    if (plStack_648 == (long *)0x0) {
      if (plStack_638 != uStack_630) {
        plVar15 = plStack_638;
        do {
          if ((plVar15[1] != 0) &&
             (plVar20 = (long *)func_0x0412c300(), plStack_808 = plVar20, plVar20 != (long *)0x0)) {
            plVar2 = (long *)*plVar15;
            plStack_810 = plVar2;
            if (plVar2 != (long *)0x0) {
              plStack_7f8 = (long *)0x0;
              plStack_7f0 = (long *)0x0;
              lStack_7e8 = 0;
              func_0x0488f040(&plStack_7f8,puStack_788,puStack_780,
                              ((long)puStack_780 - (long)puStack_788 >> 3) * -0x5555555555555555);
              (**(code **)(plVar2[8] + 0x10))(plVar2 + 8,&plStack_7f8);
              plVar8 = plStack_7f8;
              plVar2 = plStack_7f0;
              if (plStack_7f8 != (long *)0x0) {
                for (; plVar8 != plVar2; plVar2 = plVar2 + -3) {
                  if ((*(byte *)(plVar2 + -3) & 1) != 0) {
                    func_0x0412a280(plVar2[-1],plVar2[-3] & 0xfffffffffffffffe);
                  }
                }
                plStack_7f0 = plVar8;
                func_0x0412a280(plStack_7f8,lStack_7e8 - (long)plStack_7f8);
              }
            }
            LOCK();
            plVar2 = plVar20 + 1;
            lVar13 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              func_0x0412c2d0(plVar20);
            }
          }
          plVar15 = plVar15 + 2;
        } while (plVar15 != plVar1);
      }
    }
    else {
      plStack_7f8 = (long *)0x0;
      plStack_7f0 = (long *)0x0;
      lStack_7e8 = 0;
      func_0x0488f040(&plStack_7f8,puStack_788,puStack_780,
                      ((long)puStack_780 - (long)puStack_788 >> 3) * -0x5555555555555555);
      (**(code **)(plVar15[8] + 0x10))(plVar15 + 8,&plStack_7f8);
      plVar1 = plStack_7f8;
      plVar15 = plStack_7f0;
      if (plStack_7f8 != (long *)0x0) {
        for (; plVar1 != plVar15; plVar15 = plVar15 + -3) {
          if ((*(byte *)(plVar15 + -3) & 1) != 0) {
            func_0x0412a280(plVar15[-1],plVar15[-3] & 0xfffffffffffffffe);
          }
        }
        plStack_7f0 = plVar1;
        func_0x0412a280(plStack_7f8,lStack_7e8 - (long)plStack_7f8);
      }
    }
  }
  if ((ulong)uStack_428 != 0xffffffff) {
    (**(code **)(&UNK_0f024728 + (ulong)uStack_428 * 8))(&plStack_7f8,&uStack_628);
  }
  plVar15 = plStack_640;
  uStack_428 = 0xffffffff;
  if (plStack_640 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_640 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_640 + 0x10))(plStack_640);
      func_0x0412c2d0(plVar15);
    }
  }
  puVar9 = puStack_788;
  puVar19 = puStack_780;
  if (puStack_788 != (undefined4 *)0x0) {
    for (; puVar9 != puVar19; puVar19 = puVar19 + -6) {
      if ((*(byte *)(puVar19 + -6) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar19 + -2),*(ulong *)(puVar19 + -6) & 0xfffffffffffffffe)
        ;
      }
    }
    puStack_780 = puVar9;
    func_0x0412a280(puStack_788,(long)puStack_778 - (long)puStack_788);
  }
  func_0x0d3086c0(&lStack_418);
  lVar23 = lStack_6a0;
  puStack_6e0 = &UNK_0f02ea88;
  lVar13 = lStack_698;
  if (lStack_6a0 != 0) {
    for (; lVar23 != lVar13; lVar13 = lVar13 + -0x10) {
      plVar15 = *(long **)(lVar13 + -8);
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar14 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
    }
    lStack_698 = lVar23;
    func_0x0412a280(lStack_6a0,lStack_690 - lStack_6a0);
  }
  plVar15 = plStack_6d0;
  puStack_6e0 = &UNK_0f534768;
  if (plStack_6d0 == (long *)0x0) {
    *(undefined1 *)plStack_6d8 = 0;
  }
  else {
    *(undefined1 *)plStack_6d8 = 0;
    LOCK();
    plVar1 = plStack_6d0 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_6d0 + 0x10))(plStack_6d0);
      func_0x0412c2d0(plVar15);
    }
  }
  return;
}


