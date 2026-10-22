/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x626f8b0 (ELF vaddr 0x616f8b0)
 * Label: caller-of-callee
 * Body:  [[0626f8b0, 0626fad1] [0626fae0, 0626fba9] [0626fbb0, 0626fc55] [0626fc60, 0626fc8e] [0626fc90, 0626fe58] [0626fe60, 0626ff18] [0626ff20, 0627007e] [06270080, 0627009a] [062700a0, 062700c9] [062700d0, 06270105] [06270110, 0627071b] [06270720, 062707c8] [062707d0, 06270c06] [06270c10, 06270d35] [06270d40, 06270d5a] [06270d60, 06270e34] [06270f98, 06270fa7] [062710c4, 06271134]]
 * Ghidra: FUN_0626f8b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0626f8b0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  undefined1 uVar15;
  int iVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  long unaff_RBX;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong *unaff_R13;
  ulong *puVar28;
  bool bVar29;
  ulong *puStack_658;
  ulong *puStack_650;
  ulong *puStack_648;
  ulong *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  byte *pbStack_628;
  undefined8 uStack_618;
  long *plStack_610;
  long lStack_608;
  undefined8 uStack_5f8;
  long *plStack_5f0;
  byte *pbStack_5e8;
  byte *pbStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  byte *pbStack_5c8;
  undefined4 uStack_5c0;
  undefined8 uStack_5b8;
  long *plStack_5b0;
  byte *pbStack_5a8;
  byte *pbStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  byte bStack_578;
  undefined8 *puStack_568;
  long lStack_560;
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  byte *pbStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  long lStack_4d0;
  byte *pbStack_4c8;
  byte *pbStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  byte *pbStack_488;
  char acStack_480 [8];
  undefined1 auStack_478 [24];
  code *pcStack_460;
  byte *pbStack_438;
  long lStack_430;
  byte *pbStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  byte bStack_3f8;
  ulong uStack_38;
  
  lStack_560 = param_2;
  if (*param_5 == param_5[1]) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    func_0x05d84ba0(param_1 + 1);
    return param_1;
  }
  puStack_658 = (ulong *)0x0;
  puStack_650 = (ulong *)0x0;
  puStack_648 = (ulong *)0x0;
  lVar23 = param_5[1] - *param_5;
  puStack_568 = param_1;
  if (0x555555555555555 < (ulong)((lVar23 >> 4) * -0x5555555555555555)) {
LAB_06270e1a:
    uVar19 = func_0x062a4af0();
    func_0x041084d6(&DAT_0f7b8fb8);
    puStack_648 = (ulong *)unaff_RBX;
    puStack_658 = unaff_R13;
    if (((ulong)uStack_618 & 1) != 0) {
      func_0x0412a280(lStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_5f8 & 1) != 0) {
      func_0x0412a280(pbStack_5e8,(ulong)uStack_5f8 & 0xfffffffffffffffe);
    }
    if (pcStack_460 != (code *)0x0) {
      (*pcStack_460)(auStack_478);
    }
    func_0x06271200(&puStack_658);
    uVar19 = func_0x0eee2d70(uVar19);
    func_0x04882e20(uVar19);
    pcVar7 = (code *)swi(3);
    puVar20 = (undefined8 *)(*pcVar7)();
    return puVar20;
  }
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
  if (puVar17 == (ulong *)0x0) {
    FUN_0eec74c0(lVar23,0);
  }
  puVar18 = (ulong *)(lVar23 + (long)puVar17);
  pbStack_438 = (byte *)((ulong)pbStack_438 & 0xffffffffffff0000);
  puStack_658 = puVar17;
  puStack_650 = puVar17;
  puStack_648 = puVar18;
  func_0x0626e9b0(acStack_480,lStack_560,param_3,param_4,&pbStack_438);
  puVar20 = puStack_568;
  if (((ulong)pbStack_438 & 1) != 0) {
    func_0x0412a280(pbStack_428,(ulong)pbStack_438 & 0xfffffffffffffffe);
  }
  if (acStack_480[0] == '\x01') {
    lVar23 = func_0x05f929d0(acStack_480);
    uStack_5b8._0_5_ = CONCAT41(_DAT_013f776f,10);
    uStack_5b8._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_5b8);
    uStack_5b8._0_7_ = (uint7)(uint6)uStack_5b8;
    func_0x0d858ce0(&pbStack_438,&uStack_5b8,lVar23 + 0x18);
    *(undefined1 *)puVar20 = 1;
    func_0x05e91e00(puVar20 + 1,&pbStack_438);
    func_0x048fb670(&pbStack_438);
    goto joined_r0x06270dc9;
  }
  pbStack_520 = (byte *)func_0x0626f7a0(acStack_480);
  pbVar27 = (byte *)*param_5;
  pbStack_4c0 = (byte *)param_5[1];
  if (pbVar27 != pbStack_4c0) {
    pbStack_4c8 = pbStack_520 + 1;
    unaff_R13 = puVar17;
    puVar28 = puVar17;
    do {
      bVar29 = (*pbStack_520 & 1) == 0;
      pbStack_438 = *(byte **)(pbStack_520 + 0x10);
      if (bVar29) {
        pbStack_438 = pbStack_4c8;
      }
      lStack_430 = (long)(ulong)(*pbStack_520 >> 1);
      if (!bVar29) {
        lStack_430 = (long)*(long **)(pbStack_520 + 8);
      }
      pbStack_428 = *(byte **)(pbVar27 + 0x10);
      uStack_420 = *(byte **)(pbVar27 + 8);
      if ((*pbVar27 & 1) == 0) {
        pbStack_428 = pbVar27 + 1;
        uStack_420 = (byte *)(ulong)(*pbVar27 >> 1);
      }
      pbStack_5e0 = pbVar27;
      func_0x048ad670(&uStack_5f8,&pbStack_438,2,0x2f);
      plVar21 = (long *)((ulong)uStack_5f8 >> 1 & 0x7f);
      pbVar24 = (byte *)((long)&uStack_5f8 + 1);
      if (((ulong)uStack_5f8 & 1) != 0) {
        plVar21 = plStack_5f0;
        pbVar24 = pbStack_5e8;
      }
      if (plVar21 == (long *)0x0) {
LAB_0626fc90:
        uStack_618 = (byte *)0x0;
        plStack_610 = (long *)0x0;
        lStack_608 = 0;
      }
      else {
        pbVar3 = pbVar24 + (long)plVar21;
        uVar22 = 0;
        pbVar25 = pbVar24;
        pbVar26 = pbVar24;
        do {
          if (((*pbVar24 == 0x5c) || (*pbVar24 == 0x2f)) &&
             (uVar22 < 0x40 && 0 < (long)pbVar26 - (long)pbVar25)) {
            (&pbStack_438)[uVar22 * 2] = pbVar25;
            (&lStack_430)[uVar22 * 2] = (long)pbVar26 - (long)pbVar25;
            uVar22 = uVar22 + 1;
            pbVar25 = pbVar24 + (plVar21 != (long *)0x0);
          }
          pbVar24 = pbVar24 + 1;
          pbVar26 = pbVar26 + 1;
          plVar21 = (long *)((long)plVar21 + -1);
        } while (plVar21 != (long *)0x0);
        if (uVar22 < 0x40 && 0 < (long)pbVar3 - (long)pbVar25) {
          (&pbStack_438)[uVar22 * 2] = pbVar25;
          (&lStack_430)[uVar22 * 2] = (long)pbVar3 - (long)pbVar25;
          uVar22 = uVar22 + 1;
        }
        else {
          uStack_38 = uVar22;
          if (uVar22 == 0) goto LAB_0626fc90;
        }
        uStack_38 = uVar22;
        func_0x048ad670(&uStack_618,&pbStack_438,uVar22 - 1,0x2f);
      }
      if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      plStack_4a0 = (long *)((ulong)uStack_618 >> 1 & 0x7f);
      lStack_4a8 = (long)&uStack_618 + 1;
      if (((ulong)uStack_618 & 1) != 0) {
        plStack_4a0 = plStack_610;
        lStack_4a8 = lStack_608;
      }
      cVar14 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&lStack_4a8);
      if (cVar14 == '\0') {
        if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        plStack_4b0 = (long *)((ulong)uStack_618 >> 1 & 0x7f);
        lStack_4b8 = (long)&uStack_618 + 1;
        if (((ulong)uStack_618 & 1) != 0) {
          plStack_4b0 = plStack_610;
          lStack_4b8 = lStack_608;
        }
        (**(code **)(_DAT_0f7b8f98 + 0x80))(&pbStack_438,&DAT_0f7b8f98,&lStack_4b8);
        uStack_5d8 = (byte *)0xcf0bf0d9a4804f7d;
        plStack_5d0 = (long *)&UNK_0140f690;
        pbStack_5c8 = (byte *)0x1;
        uStack_5c0 = 0x1ef;
        if (bStack_3f8 == 0) {
          uStack_638 = (byte *)0x0;
          uStack_630 = (long *)0x0;
          pbStack_628 = (byte *)0x0;
          func_0x0eedeb80(2,0x2d,&pbStack_438,&uStack_638,&uStack_5d8);
          if (((ulong)uStack_638 & 1) != 0) {
            func_0x0412a280(pbStack_628,(ulong)uStack_638 & 0xfffffffffffffffe);
          }
        }
        uVar8 = uStack_400;
        uVar22 = uStack_408;
        uVar13 = uStack_410;
        pbVar24 = pbStack_428;
        bStack_578 = bStack_3f8;
        if ((bStack_3f8 & 1) == 0) {
          uStack_5b8 = pbStack_438;
          plStack_5b0 = (long *)lStack_430;
          pbStack_5a8 = pbStack_428;
          pbStack_5a0 = uStack_420;
          uStack_598 = uStack_418;
          uStack_590 = uStack_410;
          uStack_588 = uStack_408;
          uStack_580 = uStack_400;
          bVar29 = (*pbStack_5e0 & 1) != 0;
          uStack_5d8 = pbVar27 + 1;
          if (bVar29) {
            uStack_5d8 = *(byte **)(pbStack_5e0 + 0x10);
          }
          plStack_5d0 = (long *)(ulong)(*pbStack_5e0 >> 1);
          if (bVar29) {
            plStack_5d0 = *(long **)(pbStack_5e0 + 8);
          }
          puStack_658 = unaff_R13;
          puStack_648 = puVar18;
          func_0x0470d9a0(&uStack_638,&UNK_01414400,0x2b,0xd,&uStack_5d8);
          pbVar27 = uStack_5d8;
          uStack_5d8._7_1_ = SUB81(pbVar27,7);
          uStack_5d8._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
          func_0x0d858ce0(&pbStack_438,&uStack_5d8,&uStack_638);
          puVar20 = puStack_568;
          *(undefined1 *)puStack_568 = 1;
          func_0x05e91e00(puStack_568 + 1,&pbStack_438);
          func_0x048fb670(&pbStack_438);
          if (((ulong)uStack_638 & 1) != 0) {
            func_0x0412a280(pbStack_628,(ulong)uStack_638 & 0xfffffffffffffffe);
          }
          uVar12 = uVar13;
          if (uVar13 != 0) {
            while (uVar13 != uVar22) {
              uVar22 = uVar22 - 0x40;
              func_0x048b3e80(uVar22);
              pbVar24 = pbStack_5a8;
              uVar12 = uStack_590;
              uVar8 = uStack_580;
            }
            uStack_588 = uVar13;
            func_0x0412a280(uVar12,uVar8 - uVar12);
          }
          pbVar27 = pbStack_5a0;
          if (pbVar24 != (byte *)0x0) {
            for (; pbVar24 != pbVar27; pbVar27 = pbVar27 + -0x50) {
              if ((pbVar27[-8] == 1) && ((pbVar27[-0x30] & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(pbVar27 + -0x20),
                                *(ulong *)(pbVar27 + -0x30) & 0xfffffffffffffffe);
              }
            }
            pbStack_5a0 = pbVar24;
            func_0x0412a280(pbVar24,uStack_598 - (long)pbVar24);
          }
          if (((ulong)uStack_618 & 1) != 0) {
            func_0x0412a280(lStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
          }
          if (((ulong)uStack_5f8 & 1) != 0) {
            func_0x0412a280(pbStack_5e8,(ulong)uStack_5f8 & 0xfffffffffffffffe);
          }
          goto joined_r0x06270dc9;
        }
      }
      pbVar27 = pbStack_5e0;
      pbStack_428 = pbStack_5e8;
      pbStack_438 = uStack_5f8;
      lStack_430 = (long)plStack_5f0;
      uStack_5f8 = (byte *)0x0;
      plStack_5f0 = (long *)0x0;
      pbStack_5e8 = (byte *)0x0;
      if ((pbStack_5e0[0x18] & 1) == 0) {
        uStack_410 = *(ulong *)(pbStack_5e0 + 0x28);
        uStack_420 = *(byte **)(pbStack_5e0 + 0x18);
        uStack_418 = *(ulong *)(pbStack_5e0 + 0x20);
      }
      else {
        func_0x0412e5e0(&uStack_420,*(undefined8 *)(pbStack_5e0 + 0x28),
                        *(undefined8 *)(pbStack_5e0 + 0x20));
      }
      if (puVar18 <= puVar28) {
        unaff_RBX = (long)puVar28 - (long)unaff_R13;
        uVar22 = (unaff_RBX >> 4) * -0x5555555555555555 + 1;
        puStack_640 = puVar18;
        if (uVar22 < 0x555555555555556) {
          lStack_4d0 = (long)puVar18 - (long)unaff_R13;
          uVar8 = (lStack_4d0 >> 4) * 0x5555555555555556;
          if (uVar22 < uVar8) {
            uVar22 = uVar8;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)((lStack_4d0 >> 4) * -0x5555555555555555)) {
            uVar22 = 0x555555555555555;
          }
          if (uVar22 < 0x555555555555556) {
            puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22 * 0x30);
            if (puVar17 == (ulong *)0x0) {
              FUN_0eec74c0(uVar22 * 0x30,0);
            }
            *(byte **)((long)puVar17 + unaff_RBX + 0x10) = pbStack_428;
            *(ulong *)((long)puVar17 + unaff_RBX) = (ulong)pbStack_438;
            ((ulong *)((long)puVar17 + unaff_RBX))[1] = lStack_430;
            pbStack_438 = (byte *)0x0;
            lStack_430 = 0;
            pbStack_428 = (byte *)0x0;
            *(ulong *)((long)puVar17 + unaff_RBX + 0x28) = uStack_410;
            pbVar27 = (byte *)((long)puVar17 + unaff_RBX + 0x18);
            *(undefined4 *)pbVar27 = (undefined4)uStack_420;
            *(undefined4 *)(pbVar27 + 4) = uStack_420._4_4_;
            *(undefined4 *)(pbVar27 + 8) = (undefined4)uStack_418;
            *(undefined4 *)(pbVar27 + 0xc) = uStack_418._4_4_;
            uStack_420 = (byte *)0x0;
            uStack_418 = 0;
            uStack_410 = 0;
            if (unaff_R13 != puVar28) {
              lVar23 = 0;
              do {
                *(undefined8 *)((long)puVar17 + lVar23 + 0x10) =
                     *(undefined8 *)((long)unaff_R13 + lVar23 + 0x10);
                uVar19 = *(undefined8 *)((byte *)((long)unaff_R13 + lVar23) + 8);
                *(undefined8 *)((long)puVar17 + lVar23) = *(undefined8 *)((long)unaff_R13 + lVar23);
                *(undefined8 *)((byte *)((long)puVar17 + lVar23) + 8) = uVar19;
                pbVar27 = (byte *)((long)unaff_R13 + lVar23);
                pbVar27[0] = 0;
                pbVar27[1] = 0;
                pbVar27[2] = 0;
                pbVar27[3] = 0;
                pbVar27[4] = 0;
                pbVar27[5] = 0;
                pbVar27[6] = 0;
                pbVar27[7] = 0;
                pbVar27[8] = 0;
                pbVar27[9] = 0;
                pbVar27[10] = 0;
                pbVar27[0xb] = 0;
                pbVar27[0xc] = 0;
                pbVar27[0xd] = 0;
                pbVar27[0xe] = 0;
                pbVar27[0xf] = 0;
                pbVar27 = (byte *)((long)unaff_R13 + lVar23 + 0x10);
                pbVar27[0] = 0;
                pbVar27[1] = 0;
                pbVar27[2] = 0;
                pbVar27[3] = 0;
                pbVar27[4] = 0;
                pbVar27[5] = 0;
                pbVar27[6] = 0;
                pbVar27[7] = 0;
                *(undefined8 *)((long)puVar17 + lVar23 + 0x28) =
                     *(undefined8 *)((long)unaff_R13 + lVar23 + 0x28);
                pbVar27 = (byte *)((long)unaff_R13 + lVar23 + 0x18);
                uVar9 = *(undefined4 *)(pbVar27 + 4);
                uVar10 = *(undefined4 *)(pbVar27 + 8);
                uVar11 = *(undefined4 *)(pbVar27 + 0xc);
                pbVar24 = (byte *)((long)puVar17 + lVar23 + 0x18);
                *(undefined4 *)pbVar24 = *(undefined4 *)pbVar27;
                *(undefined4 *)(pbVar24 + 4) = uVar9;
                *(undefined4 *)(pbVar24 + 8) = uVar10;
                *(undefined4 *)(pbVar24 + 0xc) = uVar11;
                pbVar27 = (byte *)((long)unaff_R13 + lVar23 + 0x18);
                pbVar27[0] = 0;
                pbVar27[1] = 0;
                pbVar27[2] = 0;
                pbVar27[3] = 0;
                pbVar27[4] = 0;
                pbVar27[5] = 0;
                pbVar27[6] = 0;
                pbVar27[7] = 0;
                pbVar27[8] = 0;
                pbVar27[9] = 0;
                pbVar27[10] = 0;
                pbVar27[0xb] = 0;
                pbVar27[0xc] = 0;
                pbVar27[0xd] = 0;
                pbVar27[0xe] = 0;
                pbVar27[0xf] = 0;
                pbVar27 = (byte *)((long)unaff_R13 + lVar23 + 0x28);
                pbVar27[0] = 0;
                pbVar27[1] = 0;
                pbVar27[2] = 0;
                pbVar27[3] = 0;
                pbVar27[4] = 0;
                pbVar27[5] = 0;
                pbVar27[6] = 0;
                pbVar27[7] = 0;
                lVar4 = lVar23 + 0x30;
                lVar23 = lVar23 + 0x30;
                puVar18 = unaff_R13;
              } while ((ulong *)((long)unaff_R13 + lVar4) != puVar28);
              do {
                if ((puVar18[3] & 1) == 0) {
                  bVar5 = (byte)*puVar18;
                }
                else {
                  func_0x0412a280(puVar18[5],puVar18[3] & 0xfffffffffffffffe);
                  bVar5 = (byte)*puVar18;
                }
                if ((bVar5 & 1) != 0) {
                  func_0x0412a280(puVar18[2],*puVar18 & 0xfffffffffffffffe);
                }
                puVar18 = puVar18 + 6;
              } while (puVar18 != puVar28);
            }
            puStack_640 = puVar17 + uVar22 * 6;
            puVar28 = (ulong *)((long)puVar17 + unaff_RBX + 0x30);
            puStack_650 = puVar28;
            func_0x0412a280(unaff_R13,lStack_4d0);
            puStack_650 = puVar28;
            if (((ulong)uStack_420 & 1) != 0) {
              func_0x0412a280(uStack_410,(ulong)uStack_420 & 0xfffffffffffffffe);
            }
            pbVar27 = pbStack_5e0;
            puVar18 = puStack_640;
            if (((ulong)pbStack_438 & 1) != 0) {
              func_0x0412a280(pbStack_428,(ulong)pbStack_438 & 0xfffffffffffffffe);
            }
            goto LAB_0626fefe;
          }
        }
        else {
          puStack_658 = unaff_R13;
          puStack_648 = puVar18;
          func_0x062a4af0();
        }
        puStack_648 = puStack_640;
        puStack_658 = unaff_R13;
        func_0x04882eb0();
        goto LAB_06270e1a;
      }
      puVar28[2] = (ulong)pbStack_428;
      *puVar28 = (ulong)pbStack_438;
      puVar28[1] = lStack_430;
      pbStack_438 = (byte *)0x0;
      lStack_430 = 0;
      pbStack_428 = (byte *)0x0;
      puVar28[5] = uStack_410;
      *(undefined4 *)(puVar28 + 3) = (undefined4)uStack_420;
      *(undefined4 *)((long)puVar28 + 0x1c) = uStack_420._4_4_;
      *(undefined4 *)(puVar28 + 4) = (undefined4)uStack_418;
      *(undefined4 *)((long)puVar28 + 0x24) = uStack_418._4_4_;
      uStack_420 = (byte *)0x0;
      uStack_418 = 0;
      uStack_410 = 0;
      puVar28 = puVar28 + 6;
      puVar17 = unaff_R13;
      puStack_650 = puVar28;
LAB_0626fefe:
      if (((ulong)uStack_618 & 1) != 0) {
        func_0x0412a280(lStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_5f8 & 1) != 0) {
        func_0x0412a280(pbStack_5e8,(ulong)uStack_5f8 & 0xfffffffffffffffe);
      }
      pbVar27 = pbVar27 + 0x30;
      unaff_R13 = puVar17;
    } while (pbVar27 != pbStack_4c0);
  }
  puStack_658 = puVar17;
  puStack_648 = puVar18;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plVar21 == (long *)0x0) {
    FUN_0eec74c0(0x58,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0f02c610;
  plVar21[3] = 0;
  plVar21[4] = 0;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[8] = 0;
  plVar21[9] = 0;
  plVar21[10] = 0;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  pbStack_5e0 = (byte *)(plVar21 + 3);
  plVar6 = *(long **)(lStack_560 + 0x80);
  uStack_418 = puVar17[2];
  pbStack_428 = (byte *)*puVar17;
  uStack_420 = (byte *)puVar17[1];
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  uStack_400 = puVar17[5];
  uStack_410 = puVar17[3];
  uStack_408 = puVar17[4];
  puVar17[3] = 0;
  puVar17[4] = 0;
  puVar17[5] = 0;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  puStack_640 = (ulong *)(plVar21 + 1);
  uStack_558 = 0;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_5b8 = &UNK_01209861;
  plStack_5b0 = (long *)0xb5;
  pbStack_5a8 = _DAT_0f778528;
  pbStack_5a0 = (byte *)0xffffffff00000001;
  uStack_598 = uStack_598 & 0xffffffffffffff00;
  uStack_590 = 0;
  pbStack_438 = pbStack_5e0;
  lStack_430 = (long)plVar21;
  uVar15 = (**(code **)(*plVar6 + 0x48))(plVar6);
  uStack_5d8 = (byte *)0x0;
  plStack_5d0 = (long *)0x0;
  func_0x062a4b00(&uStack_638,plVar6,&uStack_5b8,uVar15,&uStack_5d8,&pbStack_438);
  plVar6 = plStack_5d0;
  if (plStack_5d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5d0 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_5d0 + 0x10))(plStack_5d0);
      func_0x0412c2d0(plVar6);
    }
  }
  if ((uStack_410 & 1) != 0) {
    func_0x0412a280(uStack_400,uStack_410 & 0xfffffffffffffffe);
  }
  plVar6 = (long *)lStack_430;
  if (((ulong)pbStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,(ulong)pbStack_428 & 0xfffffffffffffffe);
    plVar6 = (long *)lStack_430;
  }
  lStack_430 = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
  }
  if ((uStack_540 & 1) != 0) {
    func_0x0412a280(uStack_530,uStack_540 & 0xfffffffffffffffe);
  }
  if ((uStack_558 & 1) != 0) {
    func_0x0412a280(uStack_548,uStack_558 & 0xfffffffffffffffe);
  }
  if (1 < (ulong)(((long)puStack_650 - (long)puStack_658 >> 4) * -0x5555555555555555)) {
    uVar22 = 1;
    lVar23 = 0x48;
    do {
      plStack_610 = uStack_630;
      uStack_618 = uStack_638;
      uStack_418 = *(ulong *)((long)puStack_658 + lVar23 + -8);
      pbVar27 = (byte *)((long)puStack_658 + lVar23 + -0x18);
      pbStack_428 = *(byte **)pbVar27;
      uStack_420 = *(byte **)(pbVar27 + 8);
      pbVar27 = (byte *)((long)puStack_658 + lVar23 + -0x18);
      pbVar27[0] = 0;
      pbVar27[1] = 0;
      pbVar27[2] = 0;
      pbVar27[3] = 0;
      pbVar27[4] = 0;
      pbVar27[5] = 0;
      pbVar27[6] = 0;
      pbVar27[7] = 0;
      pbVar27[8] = 0;
      pbVar27[9] = 0;
      pbVar27[10] = 0;
      pbVar27[0xb] = 0;
      pbVar27[0xc] = 0;
      pbVar27[0xd] = 0;
      pbVar27[0xe] = 0;
      pbVar27[0xf] = 0;
      pbVar27 = (byte *)((long)puStack_658 + lVar23 + -8);
      pbVar27[0] = 0;
      pbVar27[1] = 0;
      pbVar27[2] = 0;
      pbVar27[3] = 0;
      pbVar27[4] = 0;
      pbVar27[5] = 0;
      pbVar27[6] = 0;
      pbVar27[7] = 0;
      uStack_400 = *(ulong *)((long)puStack_658 + lVar23 + 0x10);
      uStack_410 = *(ulong *)((long)puStack_658 + lVar23);
      uStack_408 = ((ulong *)((long)puStack_658 + lVar23))[1];
      pbVar27 = (byte *)((long)puStack_658 + lVar23);
      pbVar27[0] = 0;
      pbVar27[1] = 0;
      pbVar27[2] = 0;
      pbVar27[3] = 0;
      pbVar27[4] = 0;
      pbVar27[5] = 0;
      pbVar27[6] = 0;
      pbVar27[7] = 0;
      pbVar27[8] = 0;
      pbVar27[9] = 0;
      pbVar27[10] = 0;
      pbVar27[0xb] = 0;
      pbVar27[0xc] = 0;
      pbVar27[0xd] = 0;
      pbVar27[0xe] = 0;
      pbVar27[0xf] = 0;
      pbVar27 = (byte *)((long)puStack_658 + lVar23 + 0x10);
      pbVar27[0] = 0;
      pbVar27[1] = 0;
      pbVar27[2] = 0;
      pbVar27[3] = 0;
      pbVar27[4] = 0;
      pbVar27[5] = 0;
      pbVar27[6] = 0;
      pbVar27[7] = 0;
      pbStack_438 = pbStack_5e0;
      LOCK();
      plVar21[1] = plVar21[1] + 1;
      UNLOCK();
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_5b8 = &UNK_01209861;
      plStack_5b0 = (long *)0xb5;
      pbStack_5a8 = _DAT_0f778528;
      pbStack_5a0 = (byte *)0xffffffff00000001;
      uStack_598 = uStack_598 & 0xffffffffffffff00;
      uStack_590 = 0;
      uStack_638 = (byte *)0x0;
      uStack_630 = (long *)0x0;
      pbStack_5c8 = pbStack_628;
      uStack_5d8 = (byte *)0x0;
      plStack_5d0 = (long *)0x0;
      lStack_430 = (long)plVar21;
      func_0x062a4b00(&uStack_5f8,pbStack_628,&uStack_5b8,1,&uStack_618,&pbStack_438);
      plVar1 = plStack_610;
      plVar6 = plStack_5d0;
      if (plStack_610 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_610 + 1;
        lVar4 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plStack_610 + 0x10))(plStack_610);
          func_0x0412c2d0(plVar1);
          plVar6 = plStack_5d0;
        }
      }
      plStack_5d0 = plVar6;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
        }
      }
      plVar1 = plStack_5f0;
      uStack_638 = uStack_5f8;
      plVar6 = uStack_630;
      uStack_5f8 = (byte *)0x0;
      plStack_5f0 = (long *)0x0;
      uStack_630 = plVar1;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
        }
      }
      plVar6 = plStack_5f0;
      pbStack_628 = pbStack_5e8;
      if (plStack_5f0 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_5f0 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plStack_5f0 + 0x10))(plStack_5f0);
          func_0x0412c2d0(plVar6);
        }
      }
      if ((uStack_410 & 1) != 0) {
        func_0x0412a280(uStack_400,uStack_410 & 0xfffffffffffffffe);
      }
      plVar6 = (long *)lStack_430;
      if (((ulong)pbStack_428 & 1) != 0) {
        func_0x0412a280(uStack_418,(ulong)pbStack_428 & 0xfffffffffffffffe);
        plVar6 = (long *)lStack_430;
      }
      lStack_430 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
        }
      }
      if ((uStack_500 & 1) != 0) {
        func_0x0412a280(uStack_4f0,uStack_500 & 0xfffffffffffffffe);
      }
      if ((uStack_518 & 1) != 0) {
        func_0x0412a280(uStack_508,uStack_518 & 0xfffffffffffffffe);
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 0x30;
    } while (uVar22 < (ulong)(((long)puStack_650 - (long)puStack_658 >> 4) * -0x5555555555555555));
  }
  uStack_4e8 = (undefined4)uStack_638;
  uStack_4e4 = uStack_638._4_4_;
  uStack_4e0 = (undefined4)uStack_630;
  uStack_4dc = uStack_630._4_4_;
  uStack_638 = (byte *)0x0;
  uStack_630 = (long *)0x0;
  pbStack_488 = pbStack_628;
  uStack_498 = 0;
  plStack_490 = (long *)0x0;
  func_0x0ee2bfd0(*(undefined8 *)(lStack_560 + 0x80),&uStack_4e8,0);
  puVar20 = puStack_568;
  puVar17 = puStack_640;
  plVar6 = (long *)CONCAT44(uStack_4dc,uStack_4e0);
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_490;
  if (plStack_490 == (long *)0x0) {
LAB_06270966:
    bVar5 = *(byte *)(plVar21 + 8);
    if ((bVar5 & 1) != 0) goto LAB_06270973;
LAB_06270c58:
    if (bVar5 >> 1 != 0) goto LAB_06270980;
LAB_06270c63:
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[4] = 0;
    puVar20[5] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[8] = 0;
    func_0x05d84ba0(puVar20 + 1);
  }
  else {
    LOCK();
    plVar1 = plStack_490 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 != 0) goto LAB_06270966;
    (**(code **)(*plStack_490 + 0x10))(plStack_490);
    func_0x0412c2d0(plVar6);
    bVar5 = *(byte *)(plVar21 + 8);
    if ((bVar5 & 1) == 0) goto LAB_06270c58;
LAB_06270973:
    if (plVar21[9] == 0) goto LAB_06270c63;
LAB_06270980:
    pbVar27 = uStack_5b8;
    uStack_5b8._0_5_ = CONCAT41(_DAT_013f776f,10);
    uStack_5b8._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_5b8);
    uStack_5b8._7_1_ = SUB81(pbVar27,7);
    uStack_5b8._0_7_ = (uint7)(uint6)uStack_5b8;
    func_0x0d858ce0(&pbStack_438,&uStack_5b8,plVar21 + 8);
    *(undefined1 *)puVar20 = 1;
    func_0x05e91e00(puVar20 + 1,&pbStack_438);
    func_0x048fb670(&pbStack_438);
  }
  plVar6 = uStack_630;
  if (uStack_630 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_630 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*uStack_630 + 0x10))(uStack_630);
      func_0x0412c2d0(plVar6);
    }
  }
  LOCK();
  uVar22 = *puVar17;
  *puVar17 = *puVar17 - 1;
  UNLOCK();
  if (uVar22 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    LOCK();
    uVar22 = *puVar17;
    *puVar17 = *puVar17 - 1;
    UNLOCK();
  }
  else {
    LOCK();
    uVar22 = *puVar17;
    *puVar17 = *puVar17 - 1;
    UNLOCK();
  }
  if (uVar22 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
joined_r0x06270dc9:
  if (pcStack_460 != (code *)0x0) {
    (*pcStack_460)(auStack_478);
  }
  puVar18 = puStack_658;
  puVar17 = puStack_650;
  if (puStack_658 != (ulong *)0x0) {
    for (; puVar18 != puVar17; puVar17 = puVar17 + -6) {
      if ((puVar17[-3] & 1) == 0) {
        bVar5 = (byte)puVar17[-6];
      }
      else {
        func_0x0412a280(puVar17[-1],puVar17[-3] & 0xfffffffffffffffe);
        bVar5 = (byte)puVar17[-6];
      }
      if ((bVar5 & 1) != 0) {
        func_0x0412a280(puVar17[-4],puVar17[-6] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(puVar18,(long)puStack_648 - (long)puVar18);
  }
  return puVar20;
}



/* ---- referenced strings ----
 * 0x13f776f  Error
 */
