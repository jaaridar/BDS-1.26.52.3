/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x64323a0 (ELF vaddr 0x63323a0)
 * Label: caller-of-callee
 * Body:  [[064323a0, 06432fa7] [06432fb0, 06433293] [064333e7, 0643341f]]
 * Ghidra: FUN_064323a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_064323a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  byte bVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  bool bVar20;
  undefined8 uStack_cf8;
  long *plStack_cf0;
  undefined *puStack_ce8;
  long lStack_ce0;
  undefined8 *puStack_cd8;
  long *plStack_cd0;
  byte *pbStack_cc8;
  long *plStack_cc0;
  long *plStack_cb8;
  undefined *puStack_ca8;
  long *plStack_ca0;
  undefined8 *puStack_c98;
  undefined8 uStack_c90;
  undefined **ppuStack_c88;
  undefined8 uStack_c80;
  undefined8 *puStack_c78;
  long *plStack_c70;
  long *plStack_c68;
  undefined8 *puStack_c60;
  undefined8 *puStack_c58;
  undefined6 uStack_c50;
  undefined2 uStack_c4a;
  undefined6 uStack_c48;
  undefined1 auStack_c42 [2];
  undefined *puStack_c40;
  code *pcStack_c38;
  undefined4 uStack_c30;
  undefined1 uStack_c2c;
  long *plStack_c28;
  ulong uStack_c20;
  code *pcStack_c18;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  code *pcStack_830;
  long lStack_448;
  undefined8 uStack_438;
  undefined *puStack_428;
  code *pcStack_420;
  undefined **ppuStack_418;
  long *plStack_410;
  undefined8 *puStack_408;
  code *pcStack_400;
  undefined8 uStack_38;
  
  *param_1 = &UNK_0f534768;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &UNK_0ef44a60;
  *(undefined1 *)(puVar8 + 3) = 1;
  param_1[1] = puVar8 + 3;
  param_1[2] = puVar8;
  *param_1 = &UNK_0f01a918;
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = &UNK_0f031738;
  lVar9 = func_0x05f9fd40(param_2);
  if (lVar9 == 0) goto LAB_064331a4;
  param_1[6] = lVar9;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &UNK_0f02f848;
  param_1[5] = &UNK_0f02f8b8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  puStack_c58 = param_1 + 0xf;
  func_0x0eee2dd0(puStack_c58,0,0x408);
  if (DAT_0f7b8fb8 == '\0') goto LAB_064331e0;
  while( true ) {
    puVar8 = param_1 + 0x90;
    *puVar8 = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    lVar9 = _DAT_0f7b8fa8;
    pcVar10 = _DAT_0f7b8fa0;
    if (_DAT_0f7b8fa8 == 0) {
      param_1[0x90] = _DAT_0f7b8fa0;
      param_1[0x91] = 0;
    }
    else {
      LOCK();
      *(long *)(_DAT_0f7b8fa8 + 8) = *(long *)(_DAT_0f7b8fa8 + 8) + 1;
      UNLOCK();
      plVar17 = (long *)param_1[0x91];
      param_1[0x90] = pcVar10;
      param_1[0x91] = lVar9;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar18 = plVar17 + 1;
        lVar9 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
        pcVar10 = (char *)*puVar8;
      }
    }
    if ((pcVar10 != (char *)0x0) && (param_1[0x92] = &DAT_0f7b8f98, *pcVar10 != '\0')) break;
    FUN_04890760();
LAB_064331a4:
    cVar6 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_01392c94);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x04109e60();
LAB_064331e0:
    iVar7 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar7 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  puVar1 = param_1 + 5;
  plStack_c68 = (long *)param_1[3];
  uStack_cf8 = puVar1;
  puStack_c60 = puVar8;
  plStack_cf0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plStack_cf0 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plStack_cf0[1] = 0;
  plStack_cf0[2] = 0;
  *plStack_cf0 = (long)&UNK_0f036608;
  plStack_cf0[3] = (long)puVar1;
  plVar17 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  puStack_c78 = puVar1;
  plStack_c70 = plStack_cf0;
  if (plVar17 == (long *)0x0) {
    func_0x048b0de0(&uStack_848,&uStack_438);
    _DAT_0f54fd90 = (undefined4)uStack_848;
    uRam000000000f54fd94 = uStack_848._4_4_;
    uVar4 = (undefined4)uStack_840;
    uVar5 = uStack_840._4_4_;
    uStack_848 = 0;
    uStack_840 = (long *)0x0;
    plVar17 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar5;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar18 = plVar17 + 1;
      lVar9 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = uStack_840;
    if (uStack_840 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_840 + 1;
      lVar9 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_840 + 0x10))(uStack_840);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    puStack_c78 = uStack_cf8;
    plStack_c70 = plStack_cf0;
  }
  puStack_c40 = &UNK_064b0e80;
  uStack_c30 = 0xc4f0847f;
  pcStack_c38 = (code *)0x0;
  uStack_c2c = 2;
  uStack_c50 = SUB86(puVar1,0);
  uStack_c4a = (undefined2)((ulong)puVar1 >> 0x30);
  uStack_c20 = 0;
  pcStack_c18 = (code *)&UNK_064b0d20;
  puStack_ca8 = &UNK_0f036658;
  ppuStack_c88 = &puStack_ca8;
  uStack_cf8 = (undefined8 *)0x0;
  plStack_cf0 = (long *)0x0;
  plStack_c28 = plVar17;
  if (plVar17 == (long *)0x0) {
    func_0x048b0de0(&uStack_848,&uStack_438);
    _DAT_0f54fd90 = (undefined4)uStack_848;
    uRam000000000f54fd94 = uStack_848._4_4_;
    uVar4 = (undefined4)uStack_840;
    uVar5 = uStack_840._4_4_;
    uStack_848 = 0;
    uStack_840 = (long *)0x0;
    plVar17 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar5;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar18 = plVar17 + 1;
      lVar9 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = uStack_840;
    if (uStack_840 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_840 + 1;
      lVar9 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_840 + 0x10))(uStack_840);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5751f8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5751f8), iVar7 != 0)) {
    func_0x064b09a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f575178,0xf53dab8);
    func_0x0410844d(&DAT_0f5751f8);
  }
  puVar19 = &uStack_c20;
  plVar18 = (long *)(*plVar17 +
                    (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                           *(uint *)(_DAT_0f575178 + 4)) * 8);
  do {
    lVar9 = *plVar18;
    if (lVar9 == -1) goto LAB_064327d1;
    plVar18 = (long *)(plVar17[3] + lVar9 * 0x18);
  } while (*(uint *)(plVar17[3] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f575178 + 4));
  if (plVar18 == (long *)plVar17[4]) {
LAB_064327d1:
    plVar18 = (long *)&DAT_0f575178;
  }
  else {
    plVar18 = (long *)plVar18[2];
  }
  uStack_848 = 0;
  uStack_840 = (long *)0x0;
  func_0x048b1dc0(&uStack_848);
  if (plVar17 == uStack_840) {
    if (plVar18 == (long *)0x0) {
      lVar9 = func_0x048aead0(plVar17);
      iVar7 = *(int *)(lVar9 + 8);
      if (uStack_848 != 0) goto LAB_06432829;
LAB_0643284d:
      lVar9 = func_0x048aead0(uStack_840);
      if (iVar7 != *(int *)(lVar9 + 8)) goto LAB_06432864;
    }
    else {
      iVar7 = (int)plVar18[1];
      if (uStack_848 == 0) goto LAB_0643284d;
LAB_06432829:
      if (iVar7 != *(int *)(uStack_848 + 8)) goto LAB_06432864;
    }
  }
  else {
LAB_06432864:
    if (pcStack_c18 == (code *)0x0) {
      uStack_848 = 0;
      uStack_840 = (long *)0x0;
      puVar19 = &uStack_848;
      func_0x048b1dc0(puVar19);
LAB_064328cb:
      uVar11 = *puVar19;
      if (uVar11 != 0) goto LAB_064328d9;
      lVar9 = func_0x048aead0();
      bVar16 = *(byte *)(lVar9 + 0x19);
      plVar12 = plStack_c28;
      uVar11 = uStack_c20;
    }
    else {
      uVar11 = uStack_c20;
      if (uStack_c20 == 0) {
        (*pcStack_c18)(0,&uStack_c50,0);
        goto LAB_064328cb;
      }
LAB_064328d9:
      bVar16 = *(byte *)(uVar11 + 0x19);
      plVar12 = plStack_c28;
      uVar11 = uStack_c20;
    }
    plStack_c28 = plVar12;
    uStack_c20 = uVar11;
    if ((bVar16 & 1) == 0) {
      if (pcStack_c18 == (code *)0x0) {
        uStack_848 = 0;
        uStack_840 = (long *)0x0;
        func_0x048b1dc0(&uStack_848);
        uVar11 = uStack_848;
        plVar12 = uStack_840;
joined_r0x06432959:
        if (uVar11 != 0) goto LAB_0643291c;
        lVar9 = func_0x048aead0(plVar12);
        bVar16 = *(byte *)(lVar9 + 0x19);
      }
      else {
        if (uVar11 == 0) {
          (*pcStack_c18)(0,&uStack_c50,0);
          uVar11 = uStack_c20;
          goto joined_r0x06432959;
        }
LAB_0643291c:
        bVar16 = *(byte *)(uVar11 + 0x19);
      }
      if ((bVar16 & 2) == 0) goto LAB_06432ac4;
    }
    if (ppuStack_c88 != (undefined **)0x0) {
      func_0x049e8590(&uStack_848,&uStack_c50);
      if (ppuStack_c88 == (undefined **)0x0) {
        FUN_04891200();
        goto LAB_06433274;
      }
      cVar6 = (**(code **)(*ppuStack_c88 + 0x30))(ppuStack_c88,&uStack_848);
      if (pcStack_830 != (code *)0x0) {
        (*pcStack_830)(&uStack_848);
      }
      if (cVar6 == '\0') goto LAB_06432ac4;
    }
    puStack_428 = &UNK_0488e0b0;
    pcStack_420 = (code *)0x0;
    ppuStack_418 = (undefined **)CONCAT35(ppuStack_418._5_3_,0x48b5725f);
    uStack_438 = (undefined *)0x0;
    plStack_410 = plStack_c28;
    puStack_408 = (undefined8 *)0x0;
    pcStack_400 = (code *)0x0;
    if ((pcStack_c18 == (code *)0x0) ||
       ((*pcStack_c18)(0x100,&uStack_c50,&uStack_438), plVar12 = plStack_410,
       pcStack_400 == (code *)0x0)) {
      puStack_cd8 = (undefined8 *)0x0;
      plStack_cd0 = (long *)0x0;
      func_0x048b1dc0(&puStack_cd8);
      puVar8 = puStack_cd8;
      plVar12 = plStack_cd0;
    }
    else {
      puVar8 = puStack_408;
      if (puStack_408 == (undefined8 *)0x0) {
        (*pcStack_400)(0,&uStack_438,0);
        puVar8 = puStack_408;
      }
    }
    if (pcStack_420 != (code *)0x0) {
      (*pcStack_420)(&uStack_438);
    }
    if (plVar12 == plVar17) {
      if (puVar8 == (undefined8 *)0x0) {
        lVar9 = func_0x048aead0(plVar12);
        iVar7 = *(int *)(lVar9 + 8);
        if (plVar18 != (long *)0x0) goto LAB_06432e0a;
LAB_06432e44:
        lVar9 = func_0x048aead0(plVar17);
        if (iVar7 != *(int *)(lVar9 + 8)) goto LAB_06432ac4;
        plVar18 = (long *)func_0x048aead0(plVar17);
      }
      else {
        iVar7 = *(int *)(puVar8 + 1);
        if (plVar18 == (long *)0x0) goto LAB_06432e44;
LAB_06432e0a:
        if (iVar7 != (int)plVar18[1]) goto LAB_06432ac4;
      }
      uVar2 = *(uint *)(*plVar18 + 4);
      plVar17 = plStack_c68 + 1;
      plVar18 = (long *)plStack_c68[1];
      plVar12 = plVar17;
      if (plVar18 != (long *)0x0) {
        do {
          if (*(uint *)(plVar18 + 4) >= uVar2) {
            plVar12 = plVar18;
          }
          plVar18 = (long *)plVar18[*(uint *)(plVar18 + 4) < uVar2];
        } while (plVar18 != (long *)0x0);
        if ((plVar12 != plVar17) && (*(uint *)(plVar12 + 4) <= uVar2)) goto LAB_06432ac4;
      }
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (lVar9 == 0) {
        func_0x0eec74c0(0x80,0);
      }
      if (ppuStack_c88 == (undefined **)0x0) {
        ppuStack_418 = (undefined **)0x0;
      }
      else if (ppuStack_c88 == &puStack_ca8) {
        ppuStack_418 = (undefined **)&uStack_438;
        (**(code **)(*ppuStack_c88 + 0x18))();
      }
      else {
        ppuStack_418 = ppuStack_c88;
        ppuStack_c88 = (undefined **)0x0;
      }
      puStack_cd8 = puStack_c78;
      plStack_cd0 = plStack_c70;
      puStack_c78 = (undefined8 *)0x0;
      plStack_c70 = (long *)0x0;
      func_0x049e8ab0(lVar9,&uStack_c50,&uStack_438,&puStack_cd8);
      plVar18 = plStack_cd0;
      lStack_ce0 = lVar9;
      if (plStack_cd0 != (long *)0x0) {
        LOCK();
        plVar12 = plStack_cd0 + 1;
        lVar9 = *plVar12;
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plStack_cd0 + 0x10))(plStack_cd0);
          func_0x0412c2d0(plVar18);
        }
      }
      if (ppuStack_418 == (undefined **)&uStack_438) {
        lVar9 = 0x20;
LAB_06432f9a:
        (**(code **)(*ppuStack_418 + lVar9))();
      }
      else {
        lVar9 = 0x28;
        if (ppuStack_418 != (undefined **)0x0) goto LAB_06432f9a;
      }
      plVar18 = (long *)*plVar17;
      while (plVar12 = plVar17, plVar18 != (long *)0x0) {
        while (plVar13 = plVar18, *(uint *)(plVar13 + 4) <= uVar2) {
          if (uVar2 <= *(uint *)(plVar13 + 4)) goto LAB_0643303c;
          plVar18 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            plVar17 = plVar13 + 1;
            plVar12 = plVar13;
            goto LAB_06432fd4;
          }
        }
        plVar17 = plVar13;
        plVar18 = (long *)*plVar13;
      }
LAB_06432fd4:
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar13 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      plVar18 = plStack_c68;
      *(uint *)(plVar13 + 4) = uVar2;
      plVar13[5] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar13[2] = (long)plVar12;
      *plVar17 = (long)plVar13;
      if (*(long *)*plStack_c68 != 0) {
        *plStack_c68 = *(long *)*plStack_c68;
      }
      func_0x048bed00(plStack_c68[1],plVar13);
      plVar18[2] = plVar18[2] + 1;
LAB_0643303c:
      lVar14 = lStack_ce0;
      lStack_ce0 = 0;
      lVar9 = plVar13[5];
      plVar13[5] = lVar14;
      if (lVar9 != 0) {
        plVar17 = *(long **)(lVar9 + 0x78);
        if (plVar17 != (long *)0x0) {
          LOCK();
          plVar18 = plVar17 + 1;
          lVar14 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
          }
        }
        plVar17 = *(long **)(lVar9 + 0x60);
        if (plVar17 == (long *)(lVar9 + 0x40)) {
          lVar14 = 0x20;
LAB_064330a8:
          (**(code **)(*plVar17 + lVar14))();
        }
        else {
          lVar14 = 0x28;
          if (plVar17 != (long *)0x0) goto LAB_064330a8;
        }
        if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
          (**(code **)(lVar9 + 0x18))(lVar9);
        }
        thunk_FUN_0ee326a0(lVar9,0x80);
        lVar9 = lStack_ce0;
        lStack_ce0 = 0;
        if (lVar9 != 0) {
          plVar17 = *(long **)(lVar9 + 0x78);
          if (plVar17 != (long *)0x0) {
            LOCK();
            plVar18 = plVar17 + 1;
            lVar14 = *plVar18;
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              func_0x0412c2d0(plVar17);
            }
          }
          plVar17 = *(long **)(lVar9 + 0x60);
          if (plVar17 == (long *)(lVar9 + 0x40)) {
            lVar14 = 0x20;
LAB_0643312e:
            (**(code **)(*plVar17 + lVar14))();
          }
          else {
            lVar14 = 0x28;
            if (plVar17 != (long *)0x0) goto LAB_0643312e;
          }
          if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
            (**(code **)(lVar9 + 0x18))(lVar9);
          }
          thunk_FUN_0ee326a0(lVar9,0x80);
        }
      }
    }
  }
LAB_06432ac4:
  plVar17 = plStack_c70;
  if (plStack_c70 == (long *)0x0) {
LAB_06432ae3:
    if (ppuStack_c88 != &puStack_ca8) goto LAB_06432af2;
LAB_06432b2b:
    lVar9 = 0x20;
LAB_06432b30:
    (**(code **)(*ppuStack_c88 + lVar9))();
  }
  else {
    LOCK();
    plVar18 = plStack_c70 + 1;
    lVar9 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar9 != 0) goto LAB_06432ae3;
    (**(code **)(*plStack_c70 + 0x10))(plStack_c70);
    func_0x0412c2d0(plVar17);
    if (ppuStack_c88 == &puStack_ca8) goto LAB_06432b2b;
LAB_06432af2:
    lVar9 = 0x28;
    if (ppuStack_c88 != (undefined **)0x0) goto LAB_06432b30;
  }
  if (pcStack_c38 != (code *)0x0) {
    (*pcStack_c38)(&uStack_c50);
  }
  plVar17 = plStack_cf0;
  if (plStack_cf0 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_cf0 + 1;
    lVar9 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_cf0 + 0x10))(plStack_cf0);
      func_0x0412c2d0(plVar17);
    }
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar17 = _DAT_0f5523a0;
  pbStack_cc8 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_06433274:
    uVar15 = FUN_0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x048e5c70(param_1 + 10);
    func_0x05f9ffe0(param_1 + 6);
    func_0x0ee13f50(param_1);
    uVar15 = func_0x0eee2d70(uVar15);
    func_0x0ee13f50(param_1);
    func_0x0eee2d70(uVar15);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar16 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar16 = *pbStack_cc8;
  }
  plVar18 = _DAT_0f5523a8;
  puStack_cd8 = (undefined8 *)0xf5522b8;
  plStack_cd0 = (long *)CONCAT71(plStack_cd0._1_7_,1);
  plStack_cc0 = plVar17;
  plStack_cb8 = _DAT_0f5523a8;
  if (((bVar16 & 1) == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar18 + 0x198))(&uStack_cf8,plVar18);
  func_0x0eee2dd0((long)&uStack_438 + 6,0,0x3fa);
  uStack_438 = (undefined *)CONCAT26(uStack_438._6_2_,0x726f74696465);
  uStack_38 = 6;
  func_0x0eee2dd0(auStack_c42,0,0x3f2);
  uStack_c50 = 0x6e626d756874;
  uStack_c4a = 0x6961;
  uStack_c48 = 0x65686361436c;
  bVar20 = ((ulong)uStack_cf8 & 1) != 0;
  puStack_ca8 = (undefined *)((long)&uStack_cf8 + 1);
  if (bVar20) {
    puStack_ca8 = puStack_ce8;
  }
  uStack_850 = 0xe;
  plStack_ca0 = (long *)((ulong)uStack_cf8 >> 1 & 0x7f);
  if (bVar20) {
    plStack_ca0 = plStack_cf0;
  }
  puStack_c98 = &uStack_438;
  uStack_c90 = 6;
  ppuStack_c88 = (undefined **)&uStack_c50;
  uStack_c80 = 0xe;
  func_0x049151c0(&uStack_848,&puStack_ca8,3,0x2f);
  if (puStack_c58 != &uStack_848) {
    if (lStack_448 != -1) {
      func_0x0eee2f00(puStack_c58,&uStack_848);
    }
    param_1[0x8f] = lStack_448;
    uStack_848 = uStack_848 & 0xffffffffffffff00;
    lStack_448 = 0;
  }
  if (((ulong)uStack_cf8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_ce8,(ulong)uStack_cf8 & 0xfffffffffffffffe);
  }
  pbStack_cc8 = (byte *)0x0;
  plStack_cc0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar18 = plVar17 + 1;
    lVar9 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
    plVar17 = plStack_cc0;
    plStack_cb8 = (long *)0x0;
    if (plStack_cc0 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_cc0 + 1;
      lVar9 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_cc0 + 0x10))(plStack_cc0);
        func_0x0412c2d0(plVar17);
        goto joined_r0x06432dde;
      }
    }
  }
joined_r0x06432dde:
  if ((char)plStack_cd0 == '\x01') {
    FUN_0eee02f0(puStack_cd8);
  }
  return;
}


