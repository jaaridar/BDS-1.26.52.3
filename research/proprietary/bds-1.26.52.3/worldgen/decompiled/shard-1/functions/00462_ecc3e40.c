/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xedc3e40 (ELF vaddr 0xecc3e40)
 * Label: caller-of-callee
 * Body:  [[0edc3e40, 0edc4437] [0edc4440, 0edc45a4] [0edc45b0, 0edc4f9b]]
 * Ghidra: FUN_0edc3e40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0edc3e40(byte *param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 ******ppppppuVar13;
  long *plVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  undefined8 uVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined *puVar23;
  byte *pbVar24;
  code *pcVar25;
  undefined7 *puVar26;
  undefined1 *puVar27;
  undefined8 ******ppppppuVar28;
  byte *pbVar29;
  undefined1 **ppuVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined2 uStack_86a;
  undefined8 uStack_868;
  ulong uStack_860;
  code *pcStack_858;
  code *pcStack_850;
  undefined8 uStack_848;
  ulong uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  undefined4 uStack_804;
  long lStack_800;
  undefined1 *puStack_7f8;
  undefined4 *puStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  byte *pbStack_7d8;
  ulong uStack_7d0;
  long lStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  code *pcStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  long lStack_790;
  byte bStack_780;
  undefined7 uStack_77f;
  undefined7 *puStack_770;
  undefined1 uStack_768;
  undefined7 uStack_767;
  undefined8 uStack_760;
  undefined4 *puStack_758;
  uint uStack_740;
  char cStack_738;
  byte *pbStack_730;
  long lStack_728;
  undefined8 uStack_720;
  byte *pbStack_718;
  byte *pbStack_710;
  long lStack_708;
  undefined8 *******pppppppuStack_700;
  undefined2 *puStack_6f8;
  undefined1 uStack_6f0;
  undefined1 uStack_6ec;
  undefined8 *******pppppppuStack_6e8;
  undefined8 ******ppppppuStack_6e0;
  undefined8 ****ppppuStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  int iStack_6c8;
  char cStack_6c4;
  ulong uStack_6c0;
  long *plStack_6b8;
  code *pcStack_6b0;
  undefined1 *puStack_5d0;
  ulong uStack_5c8;
  undefined1 auStack_5c0 [384];
  undefined2 uStack_440;
  undefined1 uStack_43e;
  undefined8 uStack_43c;
  byte bStack_3c8;
  undefined1 uStack_3c7;
  undefined1 auStack_3c0 [40];
  uint uStack_398;
  char cStack_390;
  undefined1 auStack_388 [40];
  uint uStack_360;
  char cStack_358;
  undefined1 auStack_350 [800];
  
  lVar20 = *(long *)(param_1 + 8);
  if (*(char *)(lVar20 + 0x270) == '\0') {
    *(undefined8 *)(lVar20 + 0x260) = 0;
    *(undefined8 *)(lVar20 + 0x268) = 0;
    *(long *)(lVar20 + 600) = lVar20 + 0x260;
    *(undefined1 *)(lVar20 + 0x270) = 1;
  }
  puVar2 = *(undefined8 **)(param_3 + 0x58);
  if ((**(byte **)(param_1 + 0x10) & *(byte *)((long)puVar2 + 0xa9)) == 0) {
    return;
  }
  bVar10 = *(byte *)(param_3 + 0x12);
  uStack_804 = param_2;
  lStack_728 = param_3;
  uStack_720 = param_4;
  uVar12 = func_0x0ed7db90(puVar2 + 0xf,**(undefined8 **)(param_1 + 0x18),
                           (*(undefined8 **)(param_1 + 0x18))[1]);
  bVar32 = uVar12 >> 0x20 != 0;
  bVar31 = (int)uVar12 == 0;
  puVar22 = *(undefined4 **)(param_1 + 0x10);
  uStack_3c7 = bVar31 && bVar32;
  if ((bVar31 && bVar32) && (*(char *)((long)puVar22 + 0xd) != '\0')) {
    return;
  }
  (**(code **)(*(long *)*puVar2 + 0x40))
            (auStack_350,(long *)*puVar2,*(undefined8 *)(param_1 + 0x20),
             CONCAT44(*(undefined4 *)((long)puVar2 + 0xac),*puVar22),
             *(ulong *)(puVar22 + 2) & 0xff00ffffffffff00 | (ulong)*(byte *)(puVar2 + 0x16));
  func_0x0ed766e0(auStack_350,puVar2[1],**(undefined8 **)(param_1 + 0x10),
                  (*(undefined8 **)(param_1 + 0x10))[1]);
  lVar20 = *(long *)(param_1 + 8);
  pbStack_730 = param_1;
  func_0x04911270(&pppppppuStack_6e8,auStack_350);
  auStack_3c0[0] = 0;
  cStack_390 = '\0';
  auStack_388[0] = 0;
  cStack_358 = '\0';
  bStack_3c8 = bVar10 & 1;
  auVar33 = func_0x0edc52a0(lVar20 + 600,puVar2 + 5,puVar2 + 5,&pppppppuStack_6e8);
  pbVar29 = pbStack_730;
  lVar20 = auVar33._0_8_;
  if (cStack_358 == '\x01') {
    if ((ulong)uStack_360 != 0xffffffff) {
      (**(code **)(&UNK_0f4e4110 + (ulong)uStack_360 * 8))(&uStack_868,auStack_388);
    }
    uStack_360 = 0xffffffff;
  }
  if (cStack_390 == '\x01') {
    if ((ulong)uStack_398 != 0xffffffff) {
      (**(code **)(&UNK_0f4e4110 + (ulong)uStack_398 * 8))(&uStack_868,auStack_3c0);
    }
    uStack_398 = 0xffffffff;
  }
  func_0x04905df0(&pppppppuStack_6e8);
  if ((auVar33._8_8_ & 1) == 0) goto LAB_0edc4f47;
  lVar19 = *(long *)(pbVar29 + 0x30);
  uStack_768 = 0;
  cStack_738 = '\0';
  if ((*(long *)(lVar19 + 0x38) != 0) && ((*(byte *)(lStack_728 + 0x12) & 0x10) != 0)) {
    func_0x0edc5560(&lStack_7c8,lStack_728,uStack_720,lVar19);
    if (lStack_790 == 0) {
      if (*(code **)(lVar19 + 0x38) == (code *)0x0) {
        pppppppuStack_6e8 = (undefined8 *******)0x0;
        ppppppuStack_6e0 = (undefined8 ******)0x0;
        func_0x048b1dc0(&pppppppuStack_6e8);
        pppppppuVar16 = &pppppppuStack_6e8;
        ppppppuVar28 = ppppppuStack_6e0;
LAB_0edc40f1:
        ppppppuVar13 = *pppppppuVar16;
        if (ppppppuVar13 == (undefined8 ******)0x0) {
          ppppppuVar13 = (undefined8 ******)FUN_048aead0(ppppppuVar28);
        }
      }
      else {
        ppppppuVar13 = *(undefined8 *******)(lVar19 + 0x30);
        if (ppppppuVar13 == (undefined8 ******)0x0) {
          ppppppuVar28 = *(undefined8 *******)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x38))(0,lVar19,0);
          pppppppuVar16 = (undefined8 *******)(lVar19 + 0x30);
          goto LAB_0edc40f1;
        }
      }
      bVar32 = (*(byte *)(puVar2 + 5) & 1) != 0;
      pppppppuStack_6e8 = (undefined8 *******)((long)puVar2 + 0x29);
      if (bVar32) {
        pppppppuStack_6e8 = (undefined8 *******)puVar2[7];
      }
      pppppuVar3 = *ppppppuVar13;
      ppppppuStack_6e0 = (undefined8 ******)(ulong)(*(byte *)(puVar2 + 5) >> 1);
      if (bVar32) {
        ppppppuStack_6e0 = (undefined8 ******)puVar2[6];
      }
      ppppuStack_6d8 = pppppuVar3[1];
      uStack_6d0 = *(undefined4 *)(pppppuVar3 + 2);
      uStack_6cc = *(undefined4 *)((long)pppppuVar3 + 0x14);
      func_0x0470d9a0(&uStack_868,&UNK_011e9161,0x33,0xdd,&pppppppuStack_6e8);
      pcVar25 = pcStack_858;
      if (((ulong)uStack_868 & 1) == 0) {
        pcVar25 = (code *)((long)&uStack_868 + 1);
      }
      cVar9 = func_0x0eeddcf0(pcVar25,&UNK_012097ee,0x20,&UNK_0145b87a,&UNK_013f60b0);
      if (((ulong)uStack_868 & 1) != 0) {
        func_0x0412a280(pcStack_858,(ulong)uStack_868 & 0xfffffffffffffffe);
      }
      if (cVar9 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uStack_860 = uStack_860 & 0xffffffffffff0000;
    uStack_868 = (long *)&UNK_0f4e32c0;
    uStack_830 = (ulong)uStack_830._4_4_ << 0x20;
    uStack_828 = 0;
    lStack_820 = 0;
    lStack_818 = 0;
    lStack_810 = 0;
    pppppppuStack_6e8 = (undefined8 *******)CONCAT44(pppppppuStack_6e8._4_4_,0xffffffff);
    ppppppuStack_6e0 = (undefined8 ******)&uStack_6d0;
    ppppuStack_6d8 = (undefined8 ****)0x800000000;
    puStack_5d0 = auStack_5c0;
    uStack_5c8 = 0x800000000;
    uStack_440 = 0xeffc;
    uStack_43c = 0xffffffff00000000;
    uStack_43e = *(undefined1 *)((long)puVar2 + 0xa9);
    uStack_86a = 0;
    puStack_6f8 = &uStack_86a;
    uStack_6f0 = 0;
    uStack_6ec = 0;
    pppppppuStack_700 = &pppppppuStack_6e8;
    (**(code **)(*(long *)*puVar2 + 0x38))
              ((long *)*puVar2,&uStack_868,&lStack_7c8,&pppppppuStack_700);
    if (uStack_43c._4_4_ != -1) {
      if (*(code **)(lVar19 + 0x38) == (code *)0x0) {
        ppuVar30 = &puStack_7f8;
        puStack_7f8 = (undefined1 *)0x0;
        puStack_7f0 = (undefined4 *)0x0;
        func_0x048b1dc0(ppuVar30);
        puVar22 = puStack_7f0;
LAB_0edc42f8:
        plVar14 = (long *)*ppuVar30;
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)FUN_048aead0(puVar22);
        }
      }
      else {
        plVar14 = *(long **)(lVar19 + 0x30);
        if (plVar14 == (long *)0x0) {
          puVar22 = *(undefined4 **)(lVar19 + 0x28);
          (**(code **)(lVar19 + 0x38))(0,lVar19,0);
          ppuVar30 = (undefined1 **)(lVar19 + 0x30);
          goto LAB_0edc42f8;
        }
      }
      uVar17 = *(undefined8 *)(*plVar14 + 8);
      uVar4 = *(undefined8 *)(*plVar14 + 0x10);
      func_0x0ed6c330(&pbStack_718,&pppppppuStack_6e8);
      bVar32 = (*(byte *)(puVar2 + 5) & 1) != 0;
      puStack_7f8 = (undefined1 *)((long)puVar2 + 0x29);
      if (bVar32) {
        puStack_7f8 = (undefined1 *)puVar2[7];
      }
      puStack_7f0 = (undefined4 *)(ulong)(*(byte *)(puVar2 + 5) >> 1);
      if (bVar32) {
        puStack_7f0 = (undefined4 *)puVar2[6];
      }
      bVar32 = (*pbStack_718 & 1) != 0;
      pbStack_7d8 = pbStack_718 + 1;
      if (bVar32) {
        pbStack_7d8 = *(byte **)(pbStack_718 + 0x10);
      }
      uStack_7d0 = (ulong)(*pbStack_718 >> 1);
      if (bVar32) {
        uStack_7d0 = *(ulong *)(pbStack_718 + 8);
      }
      uStack_7e8 = uVar17;
      uStack_7e0 = uVar4;
      func_0x0470d9a0(&bStack_780,&UNK_012d3b86,0x39,0xddd,&puStack_7f8);
      puVar26 = puStack_770;
      if ((bStack_780 & 1) == 0) {
        puVar26 = &uStack_77f;
      }
      cVar9 = func_0x0eeddcf0(puVar26,&UNK_012ba1d5,0x35,&UNK_0145b87a,&UNK_013f60b0);
      if ((bStack_780 & 1) != 0) {
        func_0x0412a280(puStack_770,CONCAT71(uStack_77f,bStack_780) & 0xfffffffffffffffe);
      }
      pbVar18 = pbStack_718;
      pbVar29 = pbStack_710;
      if (pbStack_718 != (byte *)0x0) {
        for (; pbVar18 != pbVar29; pbVar29 = pbVar29 + -0x18) {
          if ((pbVar29[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pbVar29 + -8),
                            *(ulong *)(pbVar29 + -0x18) & 0xfffffffffffffffe);
          }
        }
        pbStack_710 = pbVar18;
        func_0x0412a280(pbStack_718,lStack_708 - (long)pbStack_718);
      }
      if (cVar9 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar8 = (uint)uStack_830;
    if (cStack_738 == '\x01') {
      if ((ulong)uStack_740 == 0xffffffff) {
        if ((uint)uStack_830 != 0xffffffff) goto LAB_0edc4547;
      }
      else if ((uint)uStack_830 == 0xffffffff) {
        (**(code **)(&UNK_0f4e4110 + (ulong)uStack_740 * 8))(&puStack_7f8,&uStack_768);
        uStack_740 = 0xffffffff;
      }
      else {
LAB_0edc4547:
        puStack_7f8 = &uStack_768;
        (**(code **)(&UNK_0f4e4148 + (uStack_830 & 0xffffffff) * 8))(&puStack_7f8);
      }
    }
    else {
      uStack_768 = 0;
      uStack_740 = 0xffffffff;
      if ((uStack_830 & 0xffffffff) != 0xffffffff) {
        puStack_7f8 = &uStack_768;
        (**(code **)(&UNK_0f4e4290 + (uStack_830 & 0xffffffff) * 8))(&puStack_7f8,&pcStack_858);
        uStack_740 = uVar8;
      }
      cStack_738 = '\x01';
    }
    lStack_800 = lVar20;
    if ((uStack_5c8 & 0xffffffff) != 0) {
      lVar20 = (uStack_5c8 & 0xffffffff) * 0x30;
      puVar27 = puStack_5d0 + 8;
      do {
        if ((ulong)*(uint *)(puVar27 + 8) != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + (ulong)*(uint *)(puVar27 + 8) * 8))(&puStack_7f8,puVar27);
        }
        *(undefined4 *)(puVar27 + 8) = 0xffffffff;
        puVar27 = puVar27 + 0x30;
        lVar20 = lVar20 + -0x30;
      } while (lVar20 != 0);
    }
    if (puStack_5d0 != (undefined1 *)0x0 && auStack_5c0 != puStack_5d0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puStack_5d0);
    }
    if (((ulong)ppppuStack_6d8 & 0xffffffff) != 0) {
      lVar20 = ((ulong)ppppuStack_6d8 & 0xffffffff) << 5;
      ppppppuVar28 = ppppppuStack_6e0 + 1;
      do {
        if ((ulong)*(uint *)(ppppppuVar28 + 1) != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + (ulong)*(uint *)(ppppppuVar28 + 1) * 8))
                    (&puStack_7f8,ppppppuVar28);
        }
        *(undefined4 *)(ppppppuVar28 + 1) = 0xffffffff;
        ppppppuVar28 = ppppppuVar28 + 4;
        lVar20 = lVar20 + -0x20;
      } while (lVar20 != 0);
    }
    pbVar29 = pbStack_730;
    lVar20 = lStack_800;
    if (ppppppuStack_6e0 != (undefined8 ******)0x0 &&
        (undefined8 ******)&uStack_6d0 != ppppppuStack_6e0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,ppppppuStack_6e0);
    }
    if (lStack_820 != 0) {
      lStack_818 = lStack_820;
      func_0x0412a280(lStack_820,lStack_810 - lStack_820);
    }
    if ((uStack_830 & 0xffffffff) != 0xffffffff) {
      (**(code **)(&UNK_0f4e4110 + (uStack_830 & 0xffffffff) * 8))(&pppppppuStack_6e8,&pcStack_858);
    }
    if (pcStack_7b0 != (code *)0x0) {
      (*pcStack_7b0)(&lStack_7c8);
    }
  }
  func_0x09a38520(lVar20 + 0x360,&uStack_768);
  if ((cStack_738 == '\x01') && ((ulong)uStack_740 != 0xffffffff)) {
    (**(code **)(&UNK_0f4e4110 + (ulong)uStack_740 * 8))(&pppppppuStack_6e8,&uStack_768);
  }
  bVar10 = *(byte *)(*(long *)(pbVar29 + 0x10) + 0xc);
  if (((bVar10 & 4) != 0) && (*(byte *)(puVar2 + 0x15) != 0)) {
    *(ushort *)(lVar20 + 0x330) = *(byte *)(puVar2 + 0x15) | 0x100;
    bVar10 = *(byte *)(*(long *)(pbVar29 + 0x10) + 0xc);
  }
  if (((bVar10 & 0x20) != 0) && ((*(byte *)((long)puVar2 + 0xa9) & 1) == 0)) {
    bVar10 = *(byte *)((long)puVar2 + 0xa9) - 1;
    if (bVar10 < 4) {
      lVar15 = (ulong)bVar10 * 8;
      lVar19 = *(long *)(&UNK_014eec20 + lVar15);
      puVar23 = *(undefined **)(&UNK_0f4e67a0 + lVar15);
    }
    else {
      puVar23 = &DAT_01255173;
      lVar19 = 7;
    }
    if (*(char *)(lVar20 + 0x350) == '\x01') {
      FUN_0412f5e0(lVar20 + 0x338,puVar23,lVar19);
    }
    else {
      *(char *)(lVar20 + 0x338) = (char)lVar19 * '\x02';
      memcpy(lVar20 + 0x339,puVar23,lVar19);
      *(undefined1 *)(lVar20 + 0x339 + lVar19) = 0;
      *(undefined1 *)(lVar20 + 0x350) = 1;
    }
  }
  uVar21 = uStack_804;
  bVar10 = *pbVar29;
  *pbVar29 = bVar10 + 1;
  if ((*(byte *)(*(long *)(pbVar29 + 0x10) + 0xc) & 8) != 0) {
    *(ushort *)(lVar20 + 0x332) = bVar10 | 0x100;
  }
  if ((*(byte *)(lStack_728 + 0x12) & 8) != 0) {
    uStack_838 = 0;
    uStack_830 = 0;
    uStack_848 = 0;
    uStack_840 = 0;
    pcStack_858 = (code *)0x0;
    pcStack_850 = (code *)0x0;
    uStack_868 = (long *)0x0;
    uStack_860 = 0;
    func_0x05d84ba0(&uStack_868);
    func_0x05d9a920(&pppppppuStack_6e8,&lStack_728,&uStack_868);
    if (pcStack_850 != (code *)0x0) {
      (*pcStack_850)(&uStack_868);
    }
    uVar12 = uStack_6c0;
    if (pcStack_6b0 == (code *)0x0) {
      uStack_868 = (long *)0x0;
      uStack_860 = 0;
      func_0x048b1dc0(&uStack_868);
      plVar14 = uStack_868;
      uVar12 = uStack_860;
LAB_0edc48e4:
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)FUN_048aead0(uVar12);
      }
    }
    else {
      plVar14 = plStack_6b8;
      if (plStack_6b8 == (long *)0x0) {
        (*pcStack_6b0)(0,&pppppppuStack_6e8,0);
        plVar14 = plStack_6b8;
        goto LAB_0edc48e4;
      }
    }
    lVar19 = *plVar14;
    if ((DAT_0f5525c0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5525c0), iVar11 != 0)) {
      func_0x04906be0(0xf5525a8);
      func_0x0410844d(&DAT_0f5525c0);
    }
    uVar12 = uStack_6c0;
    if (*(int *)(lVar19 + 4) == _DAT_0f5525ac) {
      pppppppuVar16 = pppppppuStack_6e8;
      if (cStack_6c4 == '\x02') {
        pppppppuVar16 = &pppppppuStack_6e8;
      }
      if (pppppppuVar16 == (undefined8 *******)0x0 || iStack_6c8 != -0x376b6ac3) {
        if (plStack_6b8 == (long *)0x0) {
          (*pcStack_6b0)(0,&pppppppuStack_6e8,0);
        }
        pppppppuVar16 = pppppppuStack_6e8;
        if (cStack_6c4 == '\x02') {
          pppppppuVar16 = &pppppppuStack_6e8;
        }
        pppppppuVar16 =
             (undefined8 *******)FUN_0488e200(uStack_6c0,plStack_6b8,0xc894953d,pppppppuVar16);
      }
      uStack_868 = (long *)CONCAT71(uStack_868._1_7_,*(undefined1 *)pppppppuVar16);
      uStack_840 = CONCAT44(uStack_840._4_4_,1);
      func_0x09a47fd0(lVar20 + 0x398,&uStack_868);
      if ((uStack_840 & 0xffffffff) != 0xffffffff) {
        (**(code **)(&UNK_0f4e4110 + (uStack_840 & 0xffffffff) * 8))(&lStack_7c8,&uStack_868);
      }
    }
    else {
      if (pcStack_6b0 == (code *)0x0) {
        uStack_868 = (long *)0x0;
        uStack_860 = 0;
        func_0x048b1dc0(&uStack_868);
        plStack_6b8 = uStack_868;
        uVar12 = uStack_860;
LAB_0edc4a43:
        if (plStack_6b8 == (long *)0x0) {
          plStack_6b8 = (long *)FUN_048aead0(uVar12);
        }
      }
      else if (plStack_6b8 == (long *)0x0) {
        (*pcStack_6b0)(0,&pppppppuStack_6e8,0);
        goto LAB_0edc4a43;
      }
      if ((*(byte *)(plStack_6b8 + 3) & 4) == 0) {
        auVar33 = func_0x09b1bd70(&pppppppuStack_6e8);
        lVar19 = auVar33._0_8_;
        if (lVar19 == 0) {
          lVar19 = FUN_048aead0(auVar33._8_8_);
        }
        if ((*(byte *)(lVar19 + 0x18) & 0x40) != 0) {
          lStack_800 = lVar20;
          uVar17 = func_0x09b1bd70(&pppppppuStack_6e8);
          func_0x0ed6b390(&uStack_768,uVar17);
          puVar22 = (undefined4 *)CONCAT71(uStack_767,uStack_768);
          if (puVar22 != puStack_758) {
            do {
              puStack_7f8 = (undefined1 *)CONCAT44(puStack_7f8._4_4_,*puVar22);
              uStack_7e8 = uStack_760;
              uStack_798 = 0;
              lStack_790 = 0;
              uStack_7a8 = 0;
              uStack_7a0 = 0;
              uStack_7b8 = 0;
              pcStack_7b0 = (code *)0x0;
              lStack_7c8 = 0;
              uStack_7c0 = 0;
              puStack_7f0 = puVar22;
              func_0x05d84ba0(&lStack_7c8);
              func_0x05d9a920(&uStack_868,&puStack_7f0,&lStack_7c8);
              if ((uStack_840 == uStack_6c0) && ((pcStack_6b0 != (code *)0x0) == (uStack_830 != 0)))
              {
                if ((cStack_6c4 == '\0') || ((int)uStack_848 != iStack_6c8)) {
                  bVar32 = cStack_6c4 == '\0' && uStack_848._4_1_ == '\0';
                }
                else {
                  pppppppuVar16 = &pppppppuStack_6e8;
                  if (cStack_6c4 != '\x02') {
                    pppppppuVar16 = pppppppuStack_6e8;
                  }
                  lVar20 = (*pcStack_858)(3,&uStack_868,pppppppuVar16);
                  bVar32 = lVar20 != 0;
                }
              }
              else {
                bVar32 = false;
              }
              if (pcStack_850 != (code *)0x0) {
                (*pcStack_850)(&uStack_868);
              }
              if (pcStack_7b0 != (code *)0x0) {
                (*pcStack_7b0)(&lStack_7c8);
              }
              if (bVar32) {
                if ((puStack_7f0[0x14] == -0x45dcb126) && (*(long *)(puStack_7f0 + 0x16) != 0)) {
                  func_0x09a2edb0(&uStack_868,*(long *)(puStack_7f0 + 0x16) + 0x28);
                  func_0x09a47fd0(lStack_800 + 0x398,&uStack_868);
                  if ((uStack_840 & 0xffffffff) != 0xffffffff) {
                    (**(code **)(&UNK_0f4e4110 + (uStack_840 & 0xffffffff) * 8))
                              (&lStack_7c8,&uStack_868);
                  }
                }
                break;
              }
              puVar22 = puVar22 + 0x1a;
            } while (puVar22 != puStack_758);
          }
          lVar20 = lStack_800;
          uVar21 = uStack_804;
          if (*(char *)(lStack_800 + 0x3c8) == '\0') {
            func_0x0490d170(&uStack_868,&pppppppuStack_6e8);
            iVar11 = func_0x065358f0(&uStack_868);
            lStack_7c8 = (long)iVar11;
            uStack_7a0 = CONCAT44(uStack_7a0._4_4_,2);
            func_0x09a47fd0(lVar20 + 0x398,&lStack_7c8);
            func_0x09a00fa0(&lStack_7c8);
            if (pcStack_850 != (code *)0x0) {
              (*pcStack_850)(&uStack_868);
            }
          }
        }
      }
      else {
        func_0x0490d170(&uStack_868,&pppppppuStack_6e8);
        iVar11 = func_0x065358f0(&uStack_868);
        lStack_7c8 = (long)iVar11;
        uStack_7a0 = CONCAT44(uStack_7a0._4_4_,2);
        func_0x09a47fd0(lVar20 + 0x398,&lStack_7c8);
        func_0x09a00fa0(&lStack_7c8);
        if (pcStack_850 != (code *)0x0) {
          (*pcStack_850)(&uStack_868);
        }
      }
    }
    if ((code *)CONCAT44(uStack_6cc,uStack_6d0) != (code *)0x0) {
      (*(code *)CONCAT44(uStack_6cc,uStack_6d0))(&pppppppuStack_6e8);
    }
  }
  pbVar18 = (byte *)func_0x0ed6b140(**(undefined8 **)(pbVar29 + 0x18),
                                    (*(undefined8 **)(pbVar29 + 0x18))[1],uVar21);
  if (pbVar18 != (byte *)0x0) {
    pbVar1 = (byte *)(lVar20 + 0x68);
    if (*(char *)(lVar20 + 0x80) == '\x01') {
      if (pbVar1 != pbVar18) {
        bVar10 = *pbVar18;
        if ((*pbVar1 & 1) == 0) {
          if ((bVar10 & 1) == 0) {
            *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(pbVar18 + 0x10);
            uVar5 = *(undefined4 *)(pbVar18 + 4);
            uVar6 = *(undefined4 *)(pbVar18 + 8);
            uVar7 = *(undefined4 *)(pbVar18 + 0xc);
            *(undefined4 *)pbVar1 = *(undefined4 *)pbVar18;
            *(undefined4 *)(lVar20 + 0x6c) = uVar5;
            *(undefined4 *)(lVar20 + 0x70) = uVar6;
            *(undefined4 *)(lVar20 + 0x74) = uVar7;
          }
          else {
            func_0x04885070(pbVar1,*(undefined8 *)(pbVar18 + 0x10),*(undefined8 *)(pbVar18 + 8));
          }
        }
        else {
          bVar32 = (bVar10 & 1) != 0;
          pbVar24 = pbVar18 + 1;
          if (bVar32) {
            pbVar24 = *(byte **)(pbVar18 + 0x10);
          }
          uVar12 = (ulong)(bVar10 >> 1);
          if (bVar32) {
            uVar12 = *(ulong *)(pbVar18 + 8);
          }
          func_0x04885120(pbVar1,pbVar24,uVar12);
        }
      }
    }
    else if ((*pbVar18 & 1) == 0) {
      *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(pbVar18 + 0x10);
      uVar5 = *(undefined4 *)(pbVar18 + 4);
      uVar6 = *(undefined4 *)(pbVar18 + 8);
      uVar7 = *(undefined4 *)(pbVar18 + 0xc);
      *(undefined4 *)pbVar1 = *(undefined4 *)pbVar18;
      *(undefined4 *)(lVar20 + 0x6c) = uVar5;
      *(undefined4 *)(lVar20 + 0x70) = uVar6;
      *(undefined4 *)(lVar20 + 0x74) = uVar7;
      *(undefined1 *)(lVar20 + 0x80) = 1;
    }
    else {
      func_0x0412e5e0(pbVar1,*(undefined8 *)(pbVar18 + 0x10),*(undefined8 *)(pbVar18 + 8));
      *(undefined1 *)(lVar20 + 0x80) = 1;
    }
  }
  lVar19 = **(long **)(pbVar29 + 0x18);
  lVar15 = (*(long **)(pbVar29 + 0x18))[1];
  if (lVar19 == 0) {
    lVar19 = FUN_048aead0(lVar15);
  }
  pppppppuVar16 = (undefined8 *******)func_0x048b0c90(lVar15,lVar19,uVar21,1);
  if (pppppppuVar16 == (undefined8 *******)0x0) {
    pppppppuStack_6e8 = (undefined8 *******)0x0;
    ppppppuStack_6e0 = (undefined8 ******)0x0;
    func_0x048b0d20(&pppppppuStack_6e8);
    pppppppuVar16 = pppppppuStack_6e8;
    if (pppppppuStack_6e8 == (undefined8 *******)0x0) goto LAB_0edc4f47;
  }
  if ((*(int *)(pppppppuVar16 + 10) != -0x45dcb126) ||
     (pppppppuVar16[0xb] == (undefined8 ******)0x0)) goto LAB_0edc4f47;
  func_0x0ed77d90(&pppppppuStack_6e8,*(undefined8 *)(pbVar29 + 0x20),pppppppuVar16[0xb] + 8);
  if (ppppuStack_6d8 != (undefined8 ****)0x0) {
    if (*(char *)(lVar20 + 0x318) == '\0') {
      *(undefined8 ********)(lVar20 + 0x300) = pppppppuStack_6e8;
      *(undefined8 *******)(lVar20 + 0x308) = ppppppuStack_6e0;
      *(undefined8 *****)(lVar20 + 0x310) = ppppuStack_6d8;
LAB_0edc4f1e:
      pppppppuStack_6e8 = &ppppppuStack_6e0;
      ppppppuStack_6e0[2] = (undefined8 *****)(lVar20 + 0x308);
      ppppppuStack_6e0 = (undefined8 ******)0x0;
      ppppuStack_6d8 = (undefined8 ****)0x0;
    }
    else {
      func_0x049060a0((long *)(lVar20 + 0x300),*(undefined8 *)(lVar20 + 0x308));
      *(undefined8 ********)(lVar20 + 0x300) = pppppppuStack_6e8;
      *(undefined8 *******)(lVar20 + 0x308) = ppppppuStack_6e0;
      *(undefined8 *****)(lVar20 + 0x310) = ppppuStack_6d8;
      if (ppppuStack_6d8 != (undefined8 ****)0x0) goto LAB_0edc4f1e;
      *(long *)(lVar20 + 0x300) = lVar20 + 0x308;
    }
    *(undefined1 *)(lVar20 + 0x318) = 1;
  }
  func_0x049060a0(&pppppppuStack_6e8,ppppppuStack_6e0);
LAB_0edc4f47:
  func_0x04905df0(auStack_350);
  return;
}


