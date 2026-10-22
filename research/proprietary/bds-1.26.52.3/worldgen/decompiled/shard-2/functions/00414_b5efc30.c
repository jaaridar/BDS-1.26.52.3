/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6efc30 (ELF vaddr 0xb5efc30)
 * Label: caller-of-callee
 * Body:  [[0b6efc30, 0b6f01ac] [0b6f01b0, 0b6f01f4] [0b6f0200, 0b6f020e] [0b6f0210, 0b6f0255] [0b6f0260, 0b6f0275] [0b6f0280, 0b6f02d5] [0b6f02e0, 0b6f09b2] [0b6f09c0, 0b6f0cc0] [0b6f0cd0, 0b6f121b] [0b6f121e, 0b6f1231] [0b6f1385, 0b6f13d8] [0b6f13f7, 0b6f1426]]
 * Ghidra: FUN_0b6efc30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b6efc30(uint *param_1,uint *param_2,uint *param_3,ulong *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  uint *puVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined1 *puVar26;
  uint uVar27;
  long lVar28;
  byte *pbVar29;
  long *in_FS_OFFSET;
  bool bVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_768;
  undefined8 uStack_760;
  byte *pbStack_758;
  uint *puStack_748;
  uint *puStack_740;
  undefined1 auStack_738 [4];
  uint uStack_734;
  undefined1 uStack_730;
  undefined2 uStack_72f;
  undefined1 uStack_72d;
  uint uStack_72c;
  ulong *puStack_728;
  undefined8 uStack_718;
  ulong *puStack_710;
  byte *pbStack_708;
  byte *pbStack_700;
  uint uStack_6f8;
  undefined4 uStack_6f4;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  undefined4 uStack_6d8;
  uint uStack_6c8;
  ulong *puStack_6b0;
  undefined8 uStack_6a8;
  ulong uStack_6a0;
  long lStack_698;
  undefined8 uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  undefined8 uStack_668;
  byte *pbStack_660;
  byte *pbStack_658;
  undefined4 uStack_650;
  uint uStack_644;
  uint uStack_640;
  uint uStack_63c;
  uint *puStack_638;
  byte *pbStack_630;
  undefined1 auStack_628 [16];
  ulong uStack_618;
  ulong *puStack_610;
  ulong *puStack_608;
  ulong *puStack_600;
  ulong *puStack_5f8;
  byte *pbStack_5f0;
  ulong uStack_5e8;
  byte *pbStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  undefined8 uStack_5c8;
  ulong *puStack_5c0;
  byte *pbStack_5b8;
  undefined8 uStack_5b0;
  byte bStack_5a8;
  undefined1 auStack_5a7 [7];
  ulong uStack_5a0;
  undefined1 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  long lStack_550;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  byte *pbStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 uStack_500;
  undefined8 uStack_4fc;
  float fStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  undefined4 uStack_4cc;
  int iStack_4c8;
  undefined1 uStack_4c4;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined1 uStack_4b0;
  undefined1 uStack_498;
  undefined1 uStack_490;
  undefined1 uStack_478;
  undefined1 uStack_470;
  undefined1 uStack_458;
  byte bStack_450;
  undefined7 uStack_44f;
  undefined8 uStack_440;
  undefined1 auStack_438 [8];
  ulong *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  uint uStack_418;
  undefined4 uStack_414;
  long lStack_410;
  long lStack_408;
  int iStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  uint uStack_3e8;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  char cStack_298;
  ulong *puStack_38;
  
  puStack_748 = param_2;
  puStack_740 = param_3;
  if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    param_3 = puStack_740;
    param_2 = puStack_748;
  }
  pbStack_630 = (byte *)((long)param_2 + 0xa9);
  bVar30 = ((byte)param_2[0x2a] & 1) == 0;
  pbStack_5e0 = *(byte **)(param_2 + 0x2e);
  if (bVar30) {
    pbStack_5e0 = pbStack_630;
  }
  uStack_5d8 = (ulong)(byte)((byte)param_2[0x2a] >> 1);
  if (!bVar30) {
    uStack_5d8 = *(ulong *)(param_2 + 0x2c);
  }
  cVar6 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_5e0);
  if (cVar6 != '\0') goto LAB_0b6efe8a;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0b6f1166;
LAB_0b6efcd8:
  bVar30 = ((byte)puStack_748[0x2a] & 1) == 0;
  pbStack_5f0 = *(byte **)(puStack_748 + 0x2e);
  if (bVar30) {
    pbStack_5f0 = pbStack_630;
  }
  uStack_5e8 = (ulong)(byte)((byte)puStack_748[0x2a] >> 1);
  if (!bVar30) {
    uStack_5e8 = *(ulong *)(puStack_748 + 0x2c);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x80))(auStack_438,&DAT_0f7b8f98,&pbStack_5f0);
  uStack_5d0 = 0xb73a56ee5b2b7c89;
  uStack_5c8 = &UNK_0140f690;
  puStack_5c0 = (ulong *)0x1;
  pbStack_5b8 = (byte *)CONCAT44(pbStack_5b8._4_4_,0x3d8);
  if ((byte)uStack_3f8 == 0) {
    func_0x0eedea30(&uStack_718);
    func_0x0eedeb80(2,0x2d,auStack_438,&uStack_718,&uStack_5d0);
    if (((ulong)uStack_718 & 1) != 0) {
      func_0x0412a280(pbStack_708,(ulong)uStack_718 & 0xfffffffffffffffe);
    }
  }
  lVar14 = lStack_410;
  if (((byte)uStack_3f8 & 1) == 0) {
    lVar28 = lStack_408;
    if (lStack_410 != 0) {
      while (lVar14 != lVar28) {
        func_0x048b3e80(lVar28 + -0x40);
        lVar28 = lVar28 + -0x40;
      }
      lStack_408 = lVar14;
      func_0x0412a280(lStack_410,CONCAT44(uStack_3fc,iStack_400) - lStack_410);
    }
    puVar15 = uStack_428;
    puVar13 = uStack_420;
    if (uStack_428 != (ulong *)0x0) {
      for (; puVar15 != puVar13; puVar13 = puVar13 + -10) {
        if (((byte)puVar13[-1] == 1) && ((puVar13[-6] & 1) != 0)) {
          func_0x0412a280(puVar13[-4],puVar13[-6] & 0xfffffffffffffffe);
        }
      }
      uStack_420 = puVar15;
      func_0x0412a280(uStack_428,CONCAT44(uStack_414,uStack_418) - (long)uStack_428);
    }
  }
LAB_0b6efe8a:
  bVar2 = (byte)param_4[3];
  if ((byte)param_5[6] == 1) {
    if ((*param_5 & 1) != 0) {
      func_0x0412e5e0(auStack_738,*(undefined8 *)(param_5 + 4),*(undefined8 *)(param_5 + 2));
      bVar1 = (byte)param_4[3];
      goto joined_r0x0b6efee4;
    }
    puStack_728 = *(ulong **)(param_5 + 4);
    auStack_738 = (undefined1  [4])*param_5;
    uStack_734 = param_5[1];
    uVar7 = param_5[2];
    uStack_72c = param_5[3];
    uStack_730 = (undefined1)uVar7;
    uStack_72f = (undefined2)(uVar7 >> 8);
    uStack_72d = (undefined1)(uVar7 >> 0x18);
    if ((bVar2 & 1) != 0) goto LAB_0b6efee6;
LAB_0b6eff2d:
    lVar14 = *in_FS_OFFSET;
    if (*(char *)(lVar14 + -0x58) == '\0') {
      func_0x0ee49c60(lVar14 + -0xa40);
      *(undefined1 *)(lVar14 + -0x58) = 1;
    }
    lVar14 = lVar14 + -0xa40;
    uVar11 = func_0x0ee4a030(lVar14,0);
    uVar7 = func_0x0ee4a030(lVar14,0);
    uVar8 = func_0x0ee4a030(lVar14,0);
    uVar9 = func_0x0ee4a030(lVar14,0);
    param_4 = (ulong *)(ulong)(uVar7 & 0xffff0fff);
    param_5 = (uint *)(CONCAT44(uVar8,uVar9) & 0x3fffffffffffffff);
    auVar31._8_8_ = (ulong)param_5 | 0x8000000000000000;
    auVar31._0_8_ = (CONCAT44(uVar11,uVar7) & 0xffffffffffff0fff) + 0x4000;
  }
  else {
    auStack_738 = (undefined1  [4])0x72747312;
    uStack_734 = 0x75746375;
    uStack_730 = 0x72;
    uStack_72f = 0x65;
    bVar1 = bVar2;
joined_r0x0b6efee4:
    if ((bVar1 & 1) == 0) goto LAB_0b6eff2d;
LAB_0b6efee6:
    bVar30 = ((byte)*param_4 & 1) != 0;
    pbVar17 = (byte *)((long)param_4 + 1);
    if (bVar30) {
      pbVar17 = (byte *)param_4[2];
    }
    uVar25 = (ulong)(byte)((byte)*param_4 >> 1);
    if (bVar30) {
      uVar25 = param_4[1];
    }
    auVar31 = func_0x0eedb4e0(pbVar17,uVar25);
  }
  auStack_628 = auVar31;
  if ((ulong)param_3[0x74] == 0xffffffff) {
    func_0x04931450();
LAB_0b6f1102:
    func_0x04931450();
LAB_0b6f1107:
    func_0x04931450();
LAB_0b6f110c:
    iVar10 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar10 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      param_3 = puStack_748;
      param_5 = puStack_740;
    }
LAB_0b6f0b28:
    puStack_5f8 = puStack_38;
    puStack_600 = param_4;
    cVar6 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&puStack_600);
    if (cVar6 == '\0') {
      if (DAT_0f7b8fb8 == '\0') goto LAB_0b6f11c0;
      goto LAB_0b6f0b73;
    }
  }
  else {
    auStack_438 = (undefined1  [8])&uStack_718;
    puVar13 = (ulong *)(**(code **)(&UNK_0f009478 + (ulong)param_3[0x74] * 8))(auStack_438,param_3);
    if ((*puVar13 & 1) == 0) {
      uStack_678 = puVar13[2];
      uStack_688 = *puVar13;
      uStack_680 = puVar13[1];
    }
    else {
      func_0x0412e5e0(&uStack_688,puVar13[2],puVar13[1]);
    }
    if ((ulong)param_3[0x74] == 0xffffffff) goto LAB_0b6f1102;
    auStack_438 = (undefined1  [8])&uStack_718;
    lVar14 = (**(code **)(&UNK_0f009478 + (ulong)param_3[0x74] * 8))(auStack_438,param_3);
    if ((*(byte *)(lVar14 + 0x18) & 1) == 0) {
      lStack_698 = *(long *)(lVar14 + 0x28);
      uStack_6a8 = *(ulong *)(lVar14 + 0x18);
      uStack_6a0 = *(ulong *)(lVar14 + 0x20);
    }
    else {
      func_0x0412e5e0(&uStack_6a8,*(undefined8 *)(lVar14 + 0x28),*(undefined8 *)(lVar14 + 0x20));
    }
    puVar16 = puStack_748;
    puStack_638 = param_1;
    if (bVar2 == 0) {
      if ((ulong)param_3[0x74] == 0xffffffff) goto LAB_0b6f11bb;
      auStack_438 = (undefined1  [8])&uStack_718;
      lVar14 = (**(code **)(&UNK_0f009478 + (ulong)param_3[0x74] * 8))(auStack_438,param_3);
      if ((*(byte *)(lVar14 + 0x18) & 1) == 0) {
        pbStack_758 = *(byte **)(lVar14 + 0x28);
        uStack_768 = *(byte **)(lVar14 + 0x18);
        uStack_760 = *(ulong **)(lVar14 + 0x20);
      }
      else {
        func_0x0412e5e0(&uStack_768,*(undefined8 *)(lVar14 + 0x28),*(undefined8 *)(lVar14 + 0x20));
      }
LAB_0b6f0362:
      uVar27 = auStack_628._0_4_ & 0xffff;
      uVar25 = (ulong)auStack_628._0_8_ >> 0x20;
      uVar7 = auStack_628._2_4_ & 0xffff;
      uVar23 = auStack_628._8_4_ & 0xffff;
      param_5 = (uint *)((ulong)auStack_628._8_8_ >> 0x30);
      puVar13 = (ulong *)((ulong)auStack_628._8_8_ >> 0x10);
      auStack_438._0_4_ = auStack_628._4_4_;
      uStack_428 = (ulong *)(CONCAT44(uStack_428._4_4_,auStack_628._2_4_) & 0xffffffff0000ffff);
      uVar4 = auStack_628._14_2_;
      lStack_408 = CONCAT44(lStack_408._4_4_,(uint)uVar4);
      uStack_3f8 = auStack_628._10_4_;
      uStack_418 = uVar27;
      uStack_3e8 = uVar23;
      func_0x0470d9a0(&uStack_718,&UNK_01287ba2,0x28,0x122112,auStack_438);
      uStack_5d0 = 0;
      uStack_63c = uVar23;
      puStack_6b0 = puVar13;
      if (((ulong)uStack_718 & 1) == 0) {
        pbStack_5b8 = pbStack_708;
        uStack_5c8 = uStack_718;
        puStack_5c0 = puStack_710;
      }
      else {
        func_0x0412e5e0(&uStack_5c8,pbStack_708,puStack_710);
      }
      param_1 = puStack_740;
      param_3 = puStack_748;
      uStack_5b0 = 0;
      uStack_640 = uVar7;
      uStack_618 = uVar25;
      if (((ulong)uStack_5c8 & 1) == 0) {
        if ((byte)uStack_5c8 >> 1 != 0) goto LAB_0b6f048d;
LAB_0b6f0586:
        uStack_5d0 = 0;
      }
      else {
        if (puStack_5c0 == (ulong *)0x0) goto LAB_0b6f0586;
LAB_0b6f048d:
        if (((ulong)uStack_5c8 & 1) == 0) {
          pbVar17 = (byte *)((long)&uStack_5c8 + 1);
          if (pbVar17 == (byte *)0x0) goto LAB_0b6f05aa;
LAB_0b6f04a6:
          if (*pbVar17 == 0) goto LAB_0b6f0586;
          uVar22 = 0xcbf29ce484222325;
          uVar25 = func_0x0eee2e90(pbVar17);
          uStack_5d0 = uVar22;
          if (uVar25 != 0) {
            uVar21 = (ulong)((uint)uVar25 & 7);
            if (7 < uVar25) {
              uVar25 = uVar25 & 0xfffffffffffffff8;
              do {
                uVar22 = (((((((uVar22 * 0x100000001b3 ^ (ulong)*pbVar17) * 0x100000001b3 ^
                              (ulong)pbVar17[1]) * 0x100000001b3 ^ (ulong)pbVar17[2]) *
                             0x100000001b3 ^ (ulong)pbVar17[3]) * 0x100000001b3 ^ (ulong)pbVar17[4])
                           * 0x100000001b3 ^ (ulong)pbVar17[5]) * 0x100000001b3 ^ (ulong)pbVar17[6])
                         * 0x100000001b3 ^ (ulong)pbVar17[7];
                pbVar17 = pbVar17 + 8;
                uVar25 = uVar25 - 8;
              } while (uVar25 != 0);
            }
            uStack_5d0 = uVar22;
            if (uVar21 != 0) {
              uVar25 = 0;
              do {
                uVar22 = uVar22 * 0x100000001b3 ^ (ulong)pbVar17[uVar25];
                uVar25 = uVar25 + 1;
                uStack_5d0 = uVar22;
              } while (uVar21 != uVar25);
            }
          }
        }
        else {
          pbVar17 = pbStack_5b8;
          if (pbStack_5b8 != (byte *)0x0) goto LAB_0b6f04a6;
LAB_0b6f05aa:
          uStack_5d0 = 0;
        }
      }
      if (((ulong)uStack_718 & 1) != 0) {
        func_0x0412a280(pbStack_708,(ulong)uStack_718 & 0xfffffffffffffffe);
      }
      auStack_438 = (undefined1  [8])((long)&uStack_688 + 1);
      puStack_430 = (ulong *)(uStack_688 >> 1 & 0x7f);
      if ((uStack_688 & 1) != 0) {
        puStack_430 = (ulong *)uStack_680;
        auStack_438 = (undefined1  [8])uStack_678;
      }
      uStack_428 = (ulong *)((long)&uStack_6a8 + 1);
      uStack_420 = (ulong *)(uStack_6a8 >> 1 & 0x7f);
      if ((uStack_6a8 & 1) != 0) {
        uStack_420 = (ulong *)uStack_6a0;
        uStack_428 = (ulong *)lStack_698;
      }
      uStack_644 = uVar27;
      func_0x0470d9a0(&bStack_5a8,&UNK_011ed16e,5,0xdd,auStack_438);
      uStack_590 = 0;
      uStack_588 = 0;
      uStack_580 = 0;
      uStack_578 = uStack_688;
      uStack_570 = uStack_680;
      uStack_568 = uStack_678;
      uStack_688 = 0;
      uStack_680 = 0;
      uStack_678 = 0;
      uStack_560 = uStack_6a8;
      uStack_558 = uStack_6a0;
      lStack_550 = lStack_698;
      uStack_6a8 = 0;
      uStack_6a0 = 0;
      lStack_698 = 0;
      pbStack_538 = pbStack_758;
      uStack_548 = (undefined4)uStack_768;
      uStack_544 = uStack_768._4_4_;
      uStack_540 = (undefined4)uStack_760;
      uStack_53c = uStack_760._4_4_;
      uStack_768 = (byte *)0x0;
      uStack_760 = (ulong *)0x0;
      pbStack_758 = (byte *)0x0;
      uStack_510 = 0;
      uStack_508 = 0;
      uStack_520 = 0;
      uStack_518 = 0;
      uStack_530 = 0;
      uStack_528 = 0;
      uStack_500 = 0;
      uStack_4ec = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4fc = 0;
      fStack_4f4 = 0.0;
      uStack_4f0 = 0;
      uStack_4e0 = 0xbf800000;
      uStack_4dc = 0;
      fStack_4d8 = 0.0;
      fStack_4d4 = 0.0;
      fStack_4d0 = 0.0;
      uStack_4cc = 0;
      iStack_4c8 = 4;
      uStack_4c4 = 1;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uVar19 = *(undefined8 *)(*(long *)(param_3 + 0x32) + 0x98);
      param_4 = (ulong *)(**(code **)(**(long **)(param_3 + 0x30) + 0x558))();
      auStack_438 = (undefined1  [8])&uStack_5d0;
      puStack_430 = (ulong *)auStack_438;
      uStack_428 = (ulong *)auStack_438;
      uStack_420 = (ulong *)auStack_438;
      if ((ulong)param_1[0x74] == 0xffffffff) goto LAB_0b6f1107;
      uStack_718 = auStack_438;
      (**(code **)(&UNK_0f009498 + (ulong)param_1[0x74] * 8))(&uStack_718,param_1);
      func_0x05d6a920(auStack_438,param_1,uVar19,param_4);
      if (cStack_298 == '\x01') {
        fStack_4f4 = (float)iStack_400;
        uStack_4fc = CONCAT44((float)(int)((ulong)lStack_408 >> 0x20),(float)(int)lStack_408);
        uStack_4e4 = (undefined4)uStack_2a8;
        uStack_4e0 = (undefined4)((ulong)uStack_2a8 >> 0x20);
        uStack_4dc = uStack_2a0;
        uStack_4cc = (undefined4)uStack_5d0;
        func_0x05d645d0(auStack_438);
      }
      uStack_4b8 = func_0x0eee3790(0);
      uVar11 = func_0x0eee3790(0);
      iVar10 = iStack_4c8;
      uStack_4c0 = CONCAT44(uVar11,(undefined4)uStack_4c0);
      if (param_1[0x74] == 3) {
        fStack_4d0 = (float)(int)param_1[0x1d];
        fStack_4d8 = (float)(int)*(undefined8 *)(param_1 + 0x1b);
        fStack_4d4 = (float)(int)((ulong)*(undefined8 *)(param_1 + 0x1b) >> 0x20);
        lVar28 = *(long *)(param_3 + 0x22);
        lVar14 = *(long *)(param_3 + 0x24);
        if (lVar28 == lVar14) goto LAB_0b6f09d3;
LAB_0b6f0945:
        puVar26 = puStack_598;
        uVar25 = uStack_5a0;
        if ((bStack_5a8 & 1) == 0) {
          puVar26 = auStack_5a7;
          uVar25 = (ulong)(bStack_5a8 >> 1);
        }
        do {
          if (*(int *)(lVar28 + 0x108) == iVar10) {
            bVar2 = *(byte *)(lVar28 + 0x28);
            if ((bVar2 & 1) == 0) {
              uVar22 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar22 = *(ulong *)(lVar28 + 0x30);
            }
            if (uVar22 == uVar25) {
              if ((bVar2 & 1) == 0) {
                lVar24 = lVar28 + 0x29;
              }
              else {
                lVar24 = *(long *)(lVar28 + 0x38);
              }
              iVar12 = func_0x0eee3000(lVar24,puVar26,uVar25);
              if (iVar12 == 0) goto LAB_0b6f09d3;
            }
          }
          lVar28 = lVar28 + 0x180;
        } while (lVar28 != lVar14);
      }
      else {
        fStack_4d0 = 0.0;
        fStack_4d8 = 0.0;
        fStack_4d4 = 0.0;
        lVar28 = *(long *)(param_3 + 0x22);
        lVar14 = *(long *)(param_3 + 0x24);
        if (lVar28 != lVar14) goto LAB_0b6f0945;
LAB_0b6f09d3:
        if (lVar28 != lVar14) {
          uVar25 = uStack_5a0;
          if ((bStack_5a8 & 1) == 0) {
            uVar25 = (ulong)(bStack_5a8 >> 1);
          }
          puVar13 = (ulong *)(uVar25 + 0x1e);
          if ((ulong *)0xfffffffffffffff7 < puVar13) {
            uVar19 = FUN_04882e30();
            func_0x041084d6(&DAT_0f7b8fb8);
            func_0x05ed96b0(&uStack_5d0);
            while (((uint)auStack_738 & 1) == 0) {
              while( true ) {
                func_0x0eee2d70(uVar19);
                func_0x0412a280(lStack_698,uStack_6a8 & 0xfffffffffffffffe);
                if ((uStack_688 & 1) == 0) break;
                func_0x0412a280(uStack_678,uStack_688 & 0xfffffffffffffffe);
                if (((uint)auStack_738 & 1) != 0) goto LAB_0b6f140b;
              }
            }
LAB_0b6f140b:
            func_0x0412a280(puStack_728,CONCAT44(uStack_734,auStack_738) & 0xfffffffffffffffe);
            func_0x0eee2d70(uVar19);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (puVar13 < (ulong *)0x17) {
            puStack_430 = (ulong *)0x0;
            uStack_428 = (ulong *)0x0;
            auStack_438._1_7_ = 0;
            auStack_438[0] = (char)puVar13 * '\x02';
          }
          else {
            uVar22 = 0x1a;
            if (((ulong)puVar13 | 7) != 0x17) {
              uVar22 = ((ulong)puVar13 | 7) + 1;
            }
            puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
            if (puVar15 == (ulong *)0x0) {
              func_0x0eec74c0(uVar22,0);
            }
            auStack_438 = (undefined1  [8])(uVar22 | 1);
            puStack_430 = puVar13;
            uStack_428 = puVar15;
          }
          pbVar17 = (byte *)((long)uStack_428 + 0x1e);
          bVar30 = ((ulong)auStack_438 & 1) != 0;
          puVar13 = (ulong *)(auStack_438 + 1);
          if (bVar30) {
            puVar13 = uStack_428;
          }
          *(ulong *)((long)puVar13 + 0xe) = CONCAT62(_UNK_011ac88f,_DAT_011ac88d);
          *(undefined8 *)((long)puVar13 + 0x16) = _UNK_011ac895;
          *(undefined4 *)puVar13 = _DAT_011ac87f;
          *(undefined4 *)((long)puVar13 + 4) = _UNK_011ac883;
          *(undefined4 *)(puVar13 + 1) = _UNK_011ac887;
          *(uint *)((long)puVar13 + 0xc) = CONCAT22(_DAT_011ac88d,_UNK_011ac88b);
          pbVar29 = (byte *)((long)&uStack_420 + 7);
          if (bVar30) {
            pbVar29 = pbVar17;
          }
          if (uVar25 != 0) {
            if ((bStack_5a8 & 1) == 0) {
              puStack_598 = auStack_5a7;
            }
            func_0x0eee2ee0(pbVar29,puStack_598,uVar25);
          }
          pbVar29[uVar25] = 0;
          puVar16 = (uint *)func_0x0412f8c0(auStack_438,&UNK_012e631a,0xf);
          uVar19 = *(undefined8 *)(puVar16 + 4);
          uVar7 = *puVar16;
          uVar23 = puVar16[1];
          uVar27 = puVar16[2];
          uVar5 = puVar16[3];
          puVar16[0] = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar16[4] = 0;
          puVar16[5] = 0;
          *(byte *)puStack_638 = 0;
          *(byte *)(puStack_638 + 4) = 0;
          puStack_638[6] = uVar7;
          puStack_638[7] = uVar23;
          puStack_638[8] = uVar27;
          puStack_638[9] = uVar5;
          *(undefined8 *)(puStack_638 + 10) = uVar19;
          *(byte *)(puStack_638 + 0xc) = 1;
          if (((ulong)auStack_438 & 1) == 0) goto LAB_0b6f0f99;
          func_0x0412a280(uStack_428,(ulong)auStack_438 & 0xfffffffffffffffe);
          func_0x05ed96b0(&uStack_5d0);
          goto joined_r0x0b6f0e79;
        }
      }
      uStack_718 = (byte *)CONCAT44(uStack_718._4_4_,(int)uStack_618);
      pbStack_708 = (byte *)CONCAT44(pbStack_708._4_4_,uStack_640);
      uStack_6f8 = uStack_644;
      lStack_6e8 = CONCAT44(lStack_6e8._4_4_,(uint)uVar4);
      uStack_6d8 = SUB84(puStack_6b0,0);
      uStack_6c8 = uStack_63c;
      func_0x0470d9a0(&uStack_668,&UNK_01287ba2,0x28,0x122112,&uStack_718);
      param_3 = puStack_748;
      bVar30 = ((byte)puStack_748[0x2a] & 1) != 0;
      uStack_718 = pbStack_630;
      if (bVar30) {
        uStack_718 = *(byte **)(puStack_748 + 0x2e);
      }
      puStack_710 = (ulong *)(ulong)(byte)((byte)puStack_748[0x2a] >> 1);
      if (bVar30) {
        puStack_710 = *(ulong **)(puStack_748 + 0x2c);
      }
      pbStack_708 = (byte *)((long)&uStack_668 + 1);
      pbStack_700 = (byte *)(uStack_668 >> 1 & 0x7f);
      if ((uStack_668 & 1) != 0) {
        pbStack_700 = pbStack_660;
        pbStack_708 = pbStack_658;
      }
      param_4 = (ulong *)auStack_438;
      func_0x049151c0(param_4,&uStack_718,2,0x2f);
      param_1 = puStack_638;
      if ((uStack_668 & 1) != 0) {
        func_0x0412a280(pbStack_658,uStack_668 & 0xfffffffffffffffe);
      }
      param_5 = puStack_740;
      if (DAT_0f7b8fb8 == '\0') goto LAB_0b6f110c;
      goto LAB_0b6f0b28;
    }
    bVar30 = ((uint)auStack_738 & 1) != 0;
    puStack_6b0 = (ulong *)(auStack_738 + 1);
    if (bVar30) {
      puStack_6b0 = puStack_728;
    }
    param_4 = (ulong *)(ulong)(auStack_738[0] >> 1);
    if (bVar30) {
      param_4 = (ulong *)CONCAT44(uStack_72c,CONCAT13(uStack_72d,CONCAT21(uStack_72f,uStack_730)));
    }
    if (param_4 < (ulong *)0xfffffffffffffff8) {
      if (param_4 < (ulong *)0x17) {
        pbVar17 = (byte *)((long)&uStack_768 + 1);
        uStack_768 = (byte *)CONCAT71(uStack_768._1_7_,(char)param_4 * '\x02');
        if (param_4 == (ulong *)0x0) goto LAB_0b6f01a0;
      }
      else {
        uVar25 = 0x1a;
        if (((ulong)param_4 | 7) != 0x17) {
          uVar25 = ((ulong)param_4 | 7) + 1;
        }
        pbVar17 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
        if (pbVar17 == (byte *)0x0) {
          func_0x0eec74c0(uVar25,0);
        }
        uStack_768 = (byte *)(uVar25 | 1);
        uStack_760 = param_4;
        pbStack_758 = pbVar17;
      }
      func_0x0eee2f00(pbVar17,puStack_6b0,param_4);
LAB_0b6f01a0:
      pbVar17[(long)param_4] = 0;
      puVar13 = (ulong *)0x1;
      do {
        pbVar17 = pbStack_758;
        puVar15 = uStack_760;
        lVar14 = *(long *)(puVar16 + 0x22);
        lVar28 = *(long *)(puVar16 + 0x24);
        if (lVar14 != lVar28) {
          if (((ulong)uStack_768 & 1) == 0) {
            uVar25 = (ulong)uStack_768 >> 1 & 0x7f;
            do {
              bVar2 = *(byte *)(lVar14 + 0x88);
              if ((bVar2 & 1) == 0) {
                uVar22 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar22 = *(ulong *)(lVar14 + 0x90);
              }
              if (uVar22 == uVar25) {
                if ((bVar2 & 1) == 0) {
                  lVar24 = lVar14 + 0x89;
                }
                else {
                  lVar24 = *(long *)(lVar14 + 0x98);
                }
                iVar10 = func_0x0eee3000(lVar24,(long)&uStack_768 + 1,uVar25);
                if (iVar10 == 0) goto LAB_0b6f02e0;
              }
              lVar14 = lVar14 + 0x180;
              if (lVar14 == lVar28) goto LAB_0b6f0362;
            } while( true );
          }
          do {
            bVar2 = *(byte *)(lVar14 + 0x88);
            if ((bVar2 & 1) == 0) {
              puVar20 = (ulong *)(ulong)(bVar2 >> 1);
            }
            else {
              puVar20 = *(ulong **)(lVar14 + 0x90);
            }
            if (puVar20 == puVar15) {
              if ((bVar2 & 1) == 0) {
                lVar24 = lVar14 + 0x89;
              }
              else {
                lVar24 = *(long *)(lVar14 + 0x98);
              }
              iVar10 = func_0x0eee3000(lVar24,pbVar17,puVar15);
              if (iVar10 == 0) break;
            }
            lVar14 = lVar14 + 0x180;
            if (lVar14 == lVar28) goto LAB_0b6f0362;
          } while( true );
        }
LAB_0b6f02e0:
        if (lVar14 == lVar28) goto LAB_0b6f0362;
        auStack_438 = (undefined1  [8])puStack_6b0;
        puStack_430 = param_4;
        uStack_428 = puVar13;
        func_0x0470d9a0(&uStack_718,&UNK_0139bd18,5,0x4d,auStack_438);
        puVar16 = puStack_748;
        if (((ulong)uStack_768 & 1) != 0) {
          func_0x0412a280(pbStack_758,(ulong)uStack_768 & 0xfffffffffffffffe);
        }
        pbStack_758 = pbStack_708;
        uStack_768 = uStack_718;
        uStack_760 = puStack_710;
        puVar13 = (ulong *)((long)puVar13 + 1);
      } while( true );
    }
    FUN_04882e30();
LAB_0b6f11bb:
    func_0x04931450();
LAB_0b6f11c0:
    iVar10 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar10 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      param_3 = puStack_748;
      param_5 = puStack_740;
    }
LAB_0b6f0b73:
    puStack_608 = puStack_38;
    puStack_610 = param_4;
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_718,&DAT_0f7b8f98,&puStack_610);
    uStack_668 = 0xb73a56ee5b2b7c89;
    pbStack_660 = &UNK_0140f690;
    pbStack_658 = (byte *)0x1;
    uStack_650 = 0x406;
    if ((byte)uStack_6d8 == 0) {
      func_0x0eedea30(&bStack_450);
      func_0x0eedeb80(2,0x2d,&uStack_718,&bStack_450,&uStack_668);
      if ((bStack_450 & 1) != 0) {
        func_0x0412a280(uStack_440,CONCAT71(uStack_44f,bStack_450) & 0xfffffffffffffffe);
      }
    }
    lVar14 = lStack_6f0;
    if (((byte)uStack_6d8 & 1) == 0) {
      lVar28 = lStack_6e8;
      if (lStack_6f0 != 0) {
        while (lVar14 != lVar28) {
          func_0x048b3e80(lVar28 + -0x40);
          lVar28 = lVar28 + -0x40;
        }
        lStack_6e8 = lVar14;
        func_0x0412a280(lStack_6f0,lStack_6e0 - lStack_6f0);
      }
      pbVar29 = pbStack_708;
      pbVar17 = pbStack_700;
      if (pbStack_708 != (byte *)0x0) {
        for (; pbVar29 != pbVar17; pbVar17 = pbVar17 + -0x50) {
          if ((pbVar17[-8] == 1) && ((pbVar17[-0x30] & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(pbVar17 + -0x20),
                            *(ulong *)(pbVar17 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pbStack_700 = pbVar29;
        func_0x0412a280(pbStack_708,CONCAT44(uStack_6f4,uStack_6f8) - (long)pbStack_708);
      }
    }
  }
  if ((ulong *)0xfffffffffffffff7 < puStack_38) {
    FUN_04882e30();
LAB_0b6f1166:
    iVar10 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar10 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      param_3 = puStack_740;
    }
    goto LAB_0b6efcd8;
  }
  if (puStack_38 < (ulong *)0x17) {
    uStack_718 = (byte *)CONCAT71(uStack_718._1_7_,(char)puStack_38 * '\x02');
    pbVar17 = (byte *)((long)&uStack_718 + 1);
    if (puStack_38 == (ulong *)0x0) goto LAB_0b6f0f28;
  }
  else {
    uVar25 = 0x1a;
    if (((ulong)puStack_38 | 7) != 0x17) {
      uVar25 = ((ulong)puStack_38 | 7) + 1;
    }
    pbVar17 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
    if (pbVar17 == (byte *)0x0) {
      func_0x0eec74c0(uVar25,0);
    }
    uStack_718 = (byte *)(uVar25 | 1);
    puStack_710 = puStack_38;
    pbStack_708 = pbVar17;
  }
  func_0x0eee2f00(pbVar17,auStack_438,puStack_38);
LAB_0b6f0f28:
  pbVar17[(long)puStack_38] = 0;
  cVar6 = func_0x0b6f1d10(param_3,&uStack_718,&uStack_5d0);
  if (((ulong)uStack_718 & 1) != 0) {
    func_0x0412a280(pbStack_708,(ulong)uStack_718 & 0xfffffffffffffffe);
  }
  if (cVar6 == '\0') {
    *(byte *)param_1 = 0;
    *(byte *)(param_1 + 4) = 0;
    puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puVar18 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    *(undefined4 **)(param_1 + 10) = puVar18;
    param_1[6] = 0x1b;
    param_1[7] = 0;
    param_1[8] = 0x17;
    uVar9 = _UNK_011c79fd;
    uVar8 = _UNK_011c79f9;
    uVar11 = _UNK_011c79f5;
    param_1[9] = 0;
    *puVar18 = _DAT_011c79f1;
    puVar18[1] = uVar11;
    puVar18[2] = uVar8;
    puVar18[3] = uVar9;
    *(undefined8 *)((long)puVar18 + 0xf) = 0x617461646174656d;
    *(undefined1 *)((long)puVar18 + 0x17) = 0;
    *(byte *)(param_1 + 0xc) = 1;
    func_0x05ed96b0(&uStack_5d0);
  }
  else {
    func_0x0b6f5db0(param_3,auStack_628,param_5,&uStack_5d0);
    *param_1 = auStack_628._0_4_;
    param_1[1] = auStack_628._4_4_;
    param_1[2] = auStack_628._8_4_;
    param_1[3] = auStack_628._12_4_;
    *(byte *)(param_1 + 4) = 1;
    *(byte *)(param_1 + 6) = 0;
    *(byte *)(param_1 + 0xc) = 0;
LAB_0b6f0f99:
    func_0x05ed96b0(&uStack_5d0);
  }
joined_r0x0b6f0e79:
  if (((uint)auStack_738 & 1) != 0) {
    func_0x0412a280(puStack_728,CONCAT44(uStack_734,auStack_738) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11ac87f  Structure with full namespace 
 * 0x11ac88d   full namespace 
 * 0x11c79f1  Couldn't write metadata
 */
