/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbcd7660 (ELF vaddr 0xbbd7660)
 * Label: caller-of-callee
 * Body:  [[0bcd7660, 0bcd7cc1] [0bcd7cd0, 0bcd7d1d] [0bcd7d20, 0bcd8244] [0bcd8250, 0bcd82b8] [0bcd82c0, 0bcd82e7] [0bcd82f0, 0bcd8431] [0bcd8440, 0bcd87e7] [0bcd87f0, 0bcd8c4a] [0bcd8d6b, 0bcd8d93] [0bcd8ded, 0bcd8e21] [0bcd8f1f, 0bcd8fd7]]
 * Ghidra: FUN_0bcd7660
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bcd7660(long param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined7 *puVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined7 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  uint *puVar24;
  undefined8 in_R9;
  byte *pbVar25;
  byte *pbVar26;
  long lVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  byte bStack_6a8;
  undefined7 uStack_6a7;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  undefined7 *puStack_680;
  long lStack_678;
  undefined4 uStack_66c;
  char *pcStack_668;
  long *plStack_660;
  long lStack_658;
  undefined4 uStack_650;
  char **ppcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_620;
  undefined8 uStack_618;
  ulong uStack_610;
  long lStack_608;
  undefined8 uStack_5f8;
  ulong uStack_5f0;
  char *pcStack_5e8;
  byte bStack_5e0;
  undefined7 uStack_5df;
  undefined8 uStack_5d0;
  long lStack_5b8;
  long lStack_5a8;
  uint uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  ulong uStack_590;
  ulong uStack_580;
  ulong uStack_578;
  byte bStack_560;
  undefined7 uStack_55f;
  ulong uStack_558;
  undefined7 *puStack_550;
  undefined1 auStack_548 [16];
  long alStack_538 [2];
  long lStack_528;
  byte *pbStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  ulong uStack_508;
  byte *pbStack_500;
  ulong uStack_4f8;
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [1024];
  ulong uStack_38;
  
  lStack_620 = *(long *)(param_1 + 8);
  pbStack_520 = *(byte **)(param_2 + 0x10);
  uStack_518 = *(ulong *)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbStack_520 = param_2 + 1;
    uStack_518 = (ulong)(*param_2 >> 1);
  }
  func_0x05f72110(auStack_438,&pbStack_520);
  uVar20 = uStack_38;
  if (uStack_38 < 0xfffffffffffffff8) {
    if (uStack_38 < 0x17) {
      uStack_510 = (undefined7 *)CONCAT71(uStack_510._1_7_,(char)uStack_38 * '\x02');
      pbVar25 = (byte *)((long)&uStack_510 + 1);
      if (uStack_38 != 0) goto LAB_0bcd7780;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_510._1_1_ = 0;
      if (((ulong)uStack_510 & 1) == 0) goto LAB_0bcd77a8;
LAB_0bcd770a:
      bVar8 = (byte)uStack_510;
      if (uStack_508 == 4) goto LAB_0bcd77b9;
LAB_0bcd771c:
      bVar28 = false;
    }
    else {
      uVar18 = 0x1a;
      if ((uStack_38 | 7) != 0x17) {
        uVar18 = (uStack_38 | 7) + 1;
      }
      pbVar25 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (pbVar25 == (byte *)0x0) {
        func_0x0eec74c0(uVar18,0);
      }
      uStack_510 = (undefined7 *)(uVar18 | 1);
      uStack_508 = uVar20;
      pbStack_500 = pbVar25;
LAB_0bcd7780:
      func_0x0eee2f00(pbVar25,auStack_438,uVar20);
      pbVar25[uVar20] = 0;
      if (((ulong)uStack_510 & 1) != 0) goto LAB_0bcd770a;
LAB_0bcd77a8:
      bVar8 = (byte)uStack_510;
      if ((byte)uStack_510 >> 1 != 4) goto LAB_0bcd771c;
LAB_0bcd77b9:
      if ((bVar8 & 1) == 0) {
        bVar28 = uStack_510._1_4_ == 0x6e6f736a;
      }
      else {
        bVar28 = *(int *)pbStack_500 == 0x6e6f736a;
      }
    }
    if ((bVar8 & 1) != 0) {
      func_0x0412a280(pbStack_500,(ulong)uStack_510 & 0xfffffffffffffffe);
    }
    if (!bVar28) {
      return;
    }
    uStack_618 = 0;
    uStack_610 = 0;
    lStack_608 = 0;
    lVar21 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    func_0x0d62a0d0(*(undefined8 *)(lVar21 + -0x28),param_2,&uStack_618,*(undefined4 *)(lVar21 + -8)
                   );
    plVar12 = *(long **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 8) + -0x28) + 8);
    lStack_678 = *plVar12;
    uStack_66c = *(undefined4 *)(lStack_678 + 0x198);
    uVar10 = (**(code **)(*(long *)plVar12[1] + 0x18))();
    func_0x0ee35a00(&bStack_560,uVar10);
    uStack_510 = &uStack_55f;
    uStack_508 = (ulong)(bStack_560 >> 1);
    if ((bStack_560 & 1) != 0) {
      uStack_508 = uStack_558;
      uStack_510 = puStack_550;
    }
    bVar28 = (*param_2 & 1) != 0;
    pbStack_500 = param_2 + 1;
    if (bVar28) {
      pbStack_500 = *(byte **)(param_2 + 0x10);
    }
    uStack_4f8 = (ulong)(*param_2 >> 1);
    if (bVar28) {
      uStack_4f8 = *(ulong *)(param_2 + 8);
    }
    func_0x049151c0(auStack_438,&uStack_510,2,0x2f);
    if (0xfffffffffffffff7 < uStack_38) goto LAB_0bcd8b34;
    puVar5 = (undefined7 *)((long)&uStack_690 + 1);
    if (uStack_38 < 0x17) {
      uStack_690 = CONCAT71(uStack_690._1_7_,(char)uStack_38 * '\x02');
      puVar11 = puVar5;
      if (uStack_38 != 0) goto LAB_0bcd797a;
    }
    else {
      uVar20 = 0x1a;
      if ((uStack_38 | 7) != 0x17) {
        uVar20 = (uStack_38 | 7) + 1;
      }
      puVar11 = (undefined7 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
      if (puVar11 == (undefined7 *)0x0) {
        func_0x0eec74c0(uVar20,0);
      }
      uStack_690 = uVar20 | 1;
      uStack_688 = uStack_38;
      puStack_680 = puVar11;
LAB_0bcd797a:
      func_0x0eee2f00(puVar11,auStack_438,uStack_38);
    }
    *(undefined1 *)((long)puVar11 + uStack_38) = 0;
    bVar8 = *(byte *)(param_1 + 0x18);
    bVar28 = (uStack_690 & 1) == 0;
    uStack_510 = puStack_680;
    if (bVar28) {
      uStack_510 = puVar5;
    }
    lStack_528 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    uStack_508 = uStack_690 >> 1 & 0x7f;
    if (!bVar28) {
      uStack_508 = uStack_688;
    }
    pbStack_500 = (byte *)CONCAT71(pbStack_500._1_7_,1);
    uStack_5f8 = (char **)0x0;
    uVar29 = (undefined4)uStack_510;
    uVar30 = (undefined4)uStack_508;
    pbVar25 = pbStack_500;
    func_0x0eeb79f0(auStack_450,&uStack_5f8);
    if (((ulong)uStack_5f8 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_5f8 & 0xff00ffffffffffff) - 8);
    }
    func_0x04863060(auStack_548,0);
    func_0x0485e1c0(&uStack_510);
    uVar20 = uStack_618 >> 1 & 0x7f;
    lVar21 = (long)&uStack_618 + 1;
    if ((uStack_618 & 1) != 0) {
      uVar20 = uStack_610;
      lVar21 = lStack_608;
    }
    cVar7 = func_0x0485e650(&uStack_510,lVar21,uVar20,auStack_548,0,in_R9,uVar29,uVar30,pbVar25);
    if (cVar7 == '\0') {
      func_0x04860c50(&uStack_5f8,&uStack_510);
      pcStack_668 = pcStack_5e8;
      if (((ulong)uStack_5f8 & 1) == 0) {
        pcStack_668 = (char *)((long)&uStack_5f8 + 1);
      }
      func_0x0b036410(1,3,3,&UNK_0139ed4c,&pcStack_668);
      if (((ulong)uStack_5f8 & 1) != 0) {
        func_0x0412a280(pcStack_5e8,(ulong)uStack_5f8 & 0xfffffffffffffffe);
      }
      goto LAB_0bcd8a42;
    }
    pbVar25 = &UNK_012e71b9;
    if (bVar8 != 0) {
      pbVar25 = &UNK_011c8c66;
    }
    uStack_6c8 = 0;
    lStack_6c0 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    func_0x04130630(&uStack_6d0);
    if (*pbVar25 == 0) {
      uStack_6d8 = 0;
    }
    else {
      uStack_6d8 = 0xcbf29ce484222325;
      lVar21 = 0;
      do {
        pbVar26 = pbVar25;
        uStack_6d8 = (((((((uStack_6d8 * 0x100000001b3 ^ (ulong)*pbVar26) * 0x100000001b3 ^
                          (ulong)pbVar26[1]) * 0x100000001b3 ^ (ulong)pbVar26[2]) * 0x100000001b3 ^
                        (ulong)pbVar26[3]) * 0x100000001b3 ^ (ulong)pbVar26[4]) * 0x100000001b3 ^
                      (ulong)pbVar26[5]) * 0x100000001b3 ^ (ulong)pbVar26[6]) * 0x100000001b3 ^
                     (ulong)pbVar26[7];
        lVar21 = lVar21 + 8;
        pbVar25 = pbVar26 + 8;
      } while (lVar21 != (ulong)bVar8 * 8 + 8);
      lVar21 = -7;
      do {
        uStack_6d8 = uStack_6d8 * 0x100000001b3 ^ (ulong)pbVar26[lVar21 + 0xf];
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0);
    }
    func_0x05d54750(&bStack_6a8,&UNK_0f3206d0);
    pcStack_668 = &UNK_0f320968;
    plStack_660 = (long *)CONCAT71(plStack_660._1_7_,bVar8);
    ppcStack_648 = &pcStack_668;
    func_0x0412d680(0xf6b4d60);
    if (DAT_0f6b4d58 == '\0') goto LAB_0bcd8b39;
  }
  else {
    FUN_04882e30();
LAB_0bcd8b34:
    FUN_04882e30();
LAB_0bcd8b39:
    iVar9 = func_0x04108328(&DAT_0f6b4d58);
    if (iVar9 != 0) {
      _DAT_0f6b4d48 = (undefined *)0x0;
      _DAT_0f6b4d50 = 0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
  }
  uVar20 = uStack_6d8;
  if (_DAT_0f6b4d48 == (undefined *)0x0) {
LAB_0bcd7da3:
    puVar19 = &DAT_0f6b4d48;
  }
  else {
    uVar18 = uStack_6d0 >> 1 & 0x7f;
    lVar21 = (long)&uStack_6d0 + 1;
    if ((uStack_6d0 & 1) != 0) {
      uVar18 = uStack_6c8;
      lVar21 = lStack_6c0;
    }
    puVar19 = &DAT_0f6b4d48;
    puVar22 = _DAT_0f6b4d48;
    do {
      uVar16 = *(ulong *)(puVar22 + 0x20);
      bVar8 = (uVar16 >= uVar20 && uVar16 != uVar20) - (uVar16 < uVar20);
      if (uVar16 == uVar20) {
        if ((puVar22[0x28] & 1) == 0) {
          uVar16 = (ulong)((byte)puVar22[0x28] >> 1);
          puVar23 = puVar22 + 0x29;
        }
        else {
          uVar16 = *(ulong *)(puVar22 + 0x30);
          puVar23 = *(undefined **)(puVar22 + 0x38);
        }
        uVar17 = uVar16;
        if (uVar18 < uVar16) {
          uVar17 = uVar18;
        }
        iVar9 = func_0x0eee2ff0(puVar23,lVar21,uVar17);
        if (iVar9 == 0) {
          iVar9 = (int)(char)((uVar18 < uVar16) - (uVar16 < uVar18));
        }
        bVar8 = (0 < iVar9) - (iVar9 < 0);
      }
      if (-1 < (char)bVar8) {
        puVar19 = puVar22;
      }
      puVar22 = *(undefined **)(puVar22 + (bVar8 >> 4 & 8));
    } while (puVar22 != (undefined *)0x0);
    if (puVar19 == &DAT_0f6b4d48) goto LAB_0bcd7da3;
    if (uVar20 == *(ulong *)(puVar19 + 0x20)) {
      bVar28 = (puVar19[0x28] & 1) != 0;
      puVar22 = puVar19 + 0x29;
      if (bVar28) {
        puVar22 = *(undefined **)(puVar19 + 0x38);
      }
      uVar20 = (ulong)((byte)puVar19[0x28] >> 1);
      if (bVar28) {
        uVar20 = *(ulong *)(puVar19 + 0x30);
      }
      uVar16 = uVar18;
      if (uVar20 < uVar18) {
        uVar16 = uVar20;
      }
      iVar9 = func_0x0eee2ff0(lVar21,puVar22,uVar16);
      bVar28 = uVar18 < uVar20;
      if (iVar9 != 0) {
        bVar28 = iVar9 < 0;
      }
      if (bVar28) goto LAB_0bcd7da3;
    }
    else if (uVar20 < *(ulong *)(puVar19 + 0x20)) goto LAB_0bcd7da3;
  }
  if ((DAT_0f6b4d58 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6b4d58), iVar9 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    func_0x0410844d(&DAT_0f6b4d58);
  }
  if ((puVar19 == &DAT_0f6b4d48) ||
     (puVar22 = *(undefined **)(puVar19 + 0x50), puVar22 == (undefined *)0x0)) {
LAB_0bcd7e1a:
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x1c0,0);
    }
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0f320820;
    uStack_5f8 = (char **)0x0;
    uStack_5f0 = 0;
    plVar12[4] = (long)&UNK_0f2ccd78;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    plVar12[0xc] = 0;
    *(undefined1 *)(plVar12 + 0xd) = 0;
    func_0x04aa75f0(plVar12 + 0xe,alStack_538,&UNK_01254d89);
    *(undefined1 *)(plVar12 + 0x10) = 0;
    plVar12[0x11] = 0;
    plVar12[0x12] = 0;
    plVar12[0x13] = 0;
    plVar12[0x14] = 0;
    plVar12[0x15] = 0;
    plVar12[0x16] = 0;
    plVar12[0x17] = 0xffffffff;
    plVar12[0x26] = 0;
    plVar12[0x27] = 0;
    plVar12[0x18] = 0;
    plVar12[0x19] = 0;
    plVar12[0x1a] = 0;
    plVar12[0x1b] = 0;
    plVar12[0x1c] = 0;
    plVar12[0x1d] = 0;
    plVar12[0x1e] = 0;
    plVar12[0x1f] = 0;
    plVar12[4] = (long)&UNK_0f320870;
    plVar1 = plVar12 + 0x2e;
    plVar12[0x2e] = 0;
    plVar12[0x2f] = 0;
    *(undefined1 *)(plVar12 + 0x36) = 0;
    if (plVar1 != &uStack_5f8) {
      if (uStack_5f8 == (char **)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*uStack_5f8)(&uStack_5f8,plVar1);
        puVar13 = uStack_5f8;
      }
      uStack_5f8 = (char **)0x0;
      *plVar1 = (long)puVar13;
    }
    if (plVar12 != (long *)&DAT_0f552080) {
      puVar24 = (uint *)(plVar12 + 0x12);
      if ((*puVar24 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar12[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar30 = _DAT_0f552118;
          uVar29 = uRam000000000f552114;
          *puVar24 = _DAT_0f552110;
          *(undefined4 *)((long)plVar12 + 0x94) = uVar29;
          *(undefined4 *)(plVar12 + 0x13) = uVar30;
          *(undefined4 *)((long)plVar12 + 0x9c) = uVar6;
        }
        else {
          func_0x04885070(puVar24,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar28 = (_DAT_0f552110 & 1) != 0;
        lVar21 = 0xf552111;
        if (bVar28) {
          lVar21 = _DAT_0f552120;
        }
        uVar20 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar28) {
          uVar20 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar24,lVar21,uVar20);
      }
    }
    plVar12[0x11] = _DAT_0f552108;
    plVar12[0x15] = 0;
    if (uStack_5f8 != (char **)0x0) {
      (*(code *)uStack_5f8[1])(&uStack_5f8);
    }
    lVar21 = lStack_678;
    uStack_638 = plVar12 + 4;
    uStack_630 = plVar12;
    if ((DAT_0f6b4d58 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6b4d58), iVar9 != 0)) {
      _DAT_0f6b4d48 = (undefined *)0x0;
      _DAT_0f6b4d50 = 0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    uStack_5f8 = (char **)&uStack_6d8;
    lVar14 = func_0x0b5d53e0(&DAT_0f6b4d40,uStack_5f8,&UNK_01563a4f,&uStack_5f8,alStack_538);
    uStack_5f8 = (char **)&bStack_6a8;
    lVar14 = func_0x0b5d5780(lVar14 + 0x48,uStack_5f8,&UNK_01563a4f,&uStack_5f8,alStack_538);
    if (uStack_630 != (long *)0x0) {
      LOCK();
      uStack_630[1] = uStack_630[1] + 1;
      UNLOCK();
    }
    plVar12 = *(long **)(lVar14 + 0x40);
    *(undefined4 *)(lVar14 + 0x38) = (undefined4)uStack_638;
    *(undefined4 *)(lVar14 + 0x3c) = uStack_638._4_4_;
    *(undefined4 *)(lVar14 + 0x40) = (undefined4)uStack_630;
    *(undefined4 *)(lVar14 + 0x44) = uStack_630._4_4_;
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0412c2d0(plVar12);
      }
    }
    if (ppcStack_648 != (char **)0x0) {
      (**(code **)(*ppcStack_648 + 0x30))(ppcStack_648,&uStack_638);
      goto LAB_0bcd80f4;
    }
    func_0x04891200();
LAB_0bcd8c3c:
    func_0x04890760();
LAB_0bcd8c41:
    uVar10 = FUN_04882e30();
    if ((uStack_6d8 & 1) != 0) {
      func_0x0412a280(uStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    }
    if (((ulong)pcStack_668 & 1) != 0) {
      func_0x0412a280(lStack_658,(ulong)pcStack_668 & 0xfffffffffffffffe);
    }
    func_0x0bcdacb0(&uStack_5f8);
    func_0x0bcca250(uStack_630);
    func_0x0485e2d0(&uStack_510);
    func_0x04863610(auStack_548);
    func_0x0eeb81b0(auStack_450);
    if ((uStack_690 & 1) != 0) goto LAB_0bcd8f76;
    if ((bStack_560 & 1) != 0) goto LAB_0bcd8f93;
    while ((uStack_618 & 1) == 0) {
      while( true ) {
        func_0x0eee2d70(uVar10);
LAB_0bcd8f76:
        func_0x0412a280(puStack_680,uStack_690 & 0xfffffffffffffffe);
        if ((bStack_560 & 1) == 0) break;
LAB_0bcd8f93:
        func_0x0412a280(puStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
        if ((uStack_618 & 1) != 0) goto LAB_0bcd8fb6;
      }
    }
LAB_0bcd8fb6:
    func_0x0412a280(lStack_608,uStack_618 & 0xfffffffffffffffe);
    func_0x0eee2d70(uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar23 = puVar19 + 0x50;
  do {
    bVar8 = func_0x04fa7a10(puVar22 + 0x20,&bStack_6a8);
    if (bVar8 == 0) {
      puVar23 = puVar22;
    }
    puVar22 = *(undefined **)(puVar22 + (ulong)bVar8 * 8);
  } while (puVar22 != (undefined *)0x0);
  if ((puVar23 == puVar19 + 0x50) ||
     (cVar7 = func_0x04fa7a10(&bStack_6a8,puVar23 + 0x20), cVar7 != '\0')) goto LAB_0bcd7e1a;
  uStack_638 = *(long **)(puVar23 + 0x38);
  uStack_630 = *(long **)(puVar23 + 0x40);
  lVar21 = lStack_678;
  if (*(long *)(puVar23 + 0x40) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar23 + 0x40) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
LAB_0bcd80f4:
  func_0x0412d6b0(0xf6b4d60);
  if (ppcStack_648 == &pcStack_668) {
    lVar14 = 0x20;
LAB_0bcd8144:
    (**(code **)(*ppcStack_648 + lVar14))();
  }
  else {
    lVar14 = 0x28;
    if (ppcStack_648 != (char **)0x0) goto LAB_0bcd8144;
  }
  if ((uStack_698 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_698 & 0xff00ffffffffffff) - 8);
  }
  uStack_698 = 0;
  if ((uStack_6a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a0 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_6d0 & 1) != 0) {
    func_0x0412a280(lStack_6c0,uStack_6d0 & 0xfffffffffffffffe);
  }
  plVar12 = uStack_638;
  lVar21 = lVar21 + 0x180;
  if ((char)uStack_638[9] == '\0') {
    func_0x0bd4f240(&uStack_5f8,auStack_548,lVar21);
    cVar7 = (**(code **)(*plVar12 + 0x38))(plVar12,&uStack_5f8,0);
    if (cVar7 == '\0') {
LAB_0bcd84fa:
      bVar4 = false;
      bVar28 = false;
    }
    else {
      bVar4 = true;
      bVar28 = true;
      lVar14 = plVar12[0x18] - plVar12[0x17];
      if (lVar14 != 0) {
        lVar14 = (lVar14 >> 3) * -0x30c30c30c30c30c3;
        pcVar15 = (char *)(plVar12[0x17] + 0xa0);
        uVar20 = 0;
LAB_0bcd8262:
        if ((*pcVar15 != '\x01') ||
           ((*(ulong *)(lStack_5b8 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0))
        goto LAB_0bcd8250;
        pcStack_668 = (char *)0x0;
        plStack_660 = (long *)0x0;
        lStack_658 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        uStack_6c8 = 0;
        lVar27 = 0x28;
        uVar20 = 0;
        lStack_678 = lVar21;
        do {
          lVar21 = plVar12[0x17];
          if ((*(byte *)(lVar21 + -0x10 + lVar27) & 1) == 0) {
            alStack_538[0] = lVar21 + lVar27 + -0xf;
          }
          else {
            alStack_538[0] = *(long *)(lVar21 + lVar27);
          }
          func_0x0470d9a0(&bStack_6a8,&UNK_0141230a,3,0xc,alStack_538);
          uVar16 = (ulong)(bStack_6a8 >> 1);
          uVar18 = (ulong)&uStack_6a7;
          if ((bStack_6a8 & 1) != 0) {
            uVar16 = uStack_6a0;
            uVar18 = uStack_698;
          }
          func_0x0412f8c0(&uStack_6d8,uVar18,uVar16);
          if ((*(ulong *)(lStack_5b8 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) == 0) {
            uVar16 = (ulong)(bStack_6a8 >> 1);
            uVar18 = (ulong)&uStack_6a7;
            if ((bStack_6a8 & 1) != 0) {
              uVar16 = uStack_6a0;
              uVar18 = uStack_698;
            }
            func_0x0412f8c0(&pcStack_668,uVar18,uVar16);
          }
          if ((bStack_6a8 & 1) != 0) {
            func_0x0412a280(uStack_698,CONCAT71(uStack_6a7,bStack_6a8) & 0xfffffffffffffffe);
          }
          uVar20 = uVar20 + 1;
          lVar27 = lVar27 + 0xa8;
        } while (lVar14 - uVar20 != 0);
        lVar21 = plVar12[0x18];
        lVar14 = plVar12[0x17];
        if (lVar21 - lVar14 != 0) {
          lVar27 = 0xa0;
          uVar20 = 0;
          do {
            if ((*(char *)(plVar12[0x17] + lVar27) == '\x01') &&
               ((*(ulong *)(lStack_5b8 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) == 0)) {
              func_0x0b63c8a0(uStack_5f0 & 0xffffffff,auStack_548,plVar12[0x17] + lVar27 + -0x88,
                              &pcStack_668,&uStack_6d8);
            }
            uVar20 = uVar20 + 1;
            lVar27 = lVar27 + 0xa8;
          } while ((lVar21 - lVar14 >> 3) * -0x30c30c30c30c30c3 - uVar20 != 0);
        }
        if ((uStack_6d8 & 1) != 0) {
          func_0x0412a280(uStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
        }
        lVar21 = lStack_678;
        if (((ulong)pcStack_668 & 1) != 0) {
          func_0x0412a280(lStack_658,(ulong)pcStack_668 & 0xfffffffffffffffe);
        }
        goto LAB_0bcd84fa;
      }
    }
joined_r0x0bcd8507:
    if ((uStack_578 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_578 & 0xff00ffffffffffff) - 8);
      bVar28 = bVar4;
    }
    uStack_578 = 0;
    if ((uStack_580 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_580 & 0xff00ffffffffffff) - 8);
    }
    uStack_580 = 0;
    if ((uStack_5a0 & 1) != 0) {
      func_0x0412a280(uStack_590,CONCAT44(uStack_59c,uStack_5a0) & 0xfffffffffffffffe);
    }
    if (lStack_5b8 != 0) {
      func_0x0412a280(lStack_5b8,lStack_5a8 << 3);
    }
    if ((bStack_5e0 & 1) != 0) {
      func_0x0412a280(uStack_5d0,CONCAT71(uStack_5df,bStack_5e0) & 0xfffffffffffffffe);
    }
    if (bVar28) goto LAB_0bcd85ca;
  }
  else {
LAB_0bcd85ca:
    lVar14 = *(long *)(lStack_620 + 0x38);
    pcVar15 = *(char **)(lStack_620 + 8);
    plVar12 = *(long **)(lStack_620 + 0x10);
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
    }
    if ((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) goto LAB_0bcd8c3c;
    pcStack_668 = pcVar15;
    plStack_660 = plVar12;
    if (plVar12 == (long *)0x0) {
      lStack_658 = lStack_620;
      uStack_650 = uStack_66c;
    }
    else {
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
      lStack_658 = lStack_620;
      uStack_650 = uStack_66c;
      LOCK();
      plVar1 = plVar12 + 1;
      lVar27 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_638;
    uVar20 = uStack_690 >> 1 & 0x7f;
    puVar5 = (undefined7 *)((long)&uStack_690 + 1);
    if ((uStack_690 & 1) != 0) {
      uVar20 = uStack_688;
      puVar5 = puStack_680;
    }
    lStack_678 = lVar14;
    if (0xfffffffffffffff7 < uVar20) goto LAB_0bcd8c41;
    if (uVar20 < 0x17) {
      uStack_6d8 = CONCAT71(uStack_6d8._1_7_,(char)uVar20 * '\x02');
      uVar16 = (long)&uStack_6d8 + 1;
      if (uVar20 != 0) goto LAB_0bcd870b;
    }
    else {
      uVar18 = 0x1a;
      if ((uVar20 | 7) != 0x17) {
        uVar18 = (uVar20 | 7) + 1;
      }
      uVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (uVar16 == 0) {
        func_0x0eec74c0(uVar18,0);
      }
      uStack_6d8 = uVar18 | 1;
      uStack_6d0 = uVar20;
      uStack_6c8 = uVar16;
LAB_0bcd870b:
      func_0x0eee2ee0(uVar16,puVar5,uVar20);
    }
    *(undefined1 *)(uVar16 + uVar20) = 0;
    func_0x0bd4f240(&uStack_5f8,auStack_548,lVar21);
    if ((uStack_5a0 & 1) == 0) {
      if ((uStack_6d8 & 1) == 0) {
        uStack_590 = uStack_6c8;
        uStack_5a0 = (uint)uStack_6d8;
        uStack_59c = uStack_6d8._4_4_;
        uStack_598 = (undefined4)uStack_6d0;
        uStack_594 = uStack_6d0._4_4_;
      }
      else {
        func_0x04885070(&uStack_5a0,uStack_6c8,uStack_6d0);
      }
    }
    else {
      uVar18 = uStack_6d8 >> 1 & 0x7f;
      uVar20 = (long)&uStack_6d8 + 1;
      if ((uStack_6d8 & 1) != 0) {
        uVar18 = uStack_6d0;
        uVar20 = uStack_6c8;
      }
      func_0x04885120(&uStack_5a0,uVar20,uVar18);
    }
    uStack_5f8 = &pcStack_668;
    (**(code **)(*plVar12 + 0x40))(plVar12,&uStack_5f8);
    lVar21 = plVar12[0x18];
    lVar14 = plVar12[0x17];
    if (lVar21 - lVar14 != 0) {
      uVar20 = 0;
      do {
        if ((*(ulong *)(lStack_5b8 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) == 0) {
          lVar2 = *(long *)(plVar12[0x17] + 0x90 + uVar20 * 0xa8);
          for (lVar27 = *(long *)(plVar12[0x17] + 0x88 + uVar20 * 0xa8); lVar27 != lVar2;
              lVar27 = lVar27 + 0x38) {
            (**(code **)(**(long **)(lVar27 + 0x28) + 0x30))(*(long **)(lVar27 + 0x28),&uStack_5f8);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != (lVar21 - lVar14 >> 3) * -0x30c30c30c30c30c3);
    }
    if (plVar12[0x1a] != 0) {
      (**(code **)(plVar12[0x1a] + 0x10))(plVar12 + 0x1a,&uStack_5f8);
    }
    if ((uStack_578 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_578 & 0xff00ffffffffffff) - 8);
    }
    lVar21 = lStack_678;
    uStack_578 = 0;
    if ((uStack_580 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_580 & 0xff00ffffffffffff) - 8);
    }
    uStack_580 = 0;
    if ((uStack_5a0 & 1) != 0) {
      func_0x0412a280(uStack_590,CONCAT44(uStack_59c,uStack_5a0) & 0xfffffffffffffffe);
    }
    if (lStack_5b8 != 0) {
      func_0x0412a280(lStack_5b8,lStack_5a8 << 3);
    }
    if ((bStack_5e0 & 1) != 0) {
      func_0x0412a280(uStack_5d0,CONCAT71(uStack_5df,bStack_5e0) & 0xfffffffffffffffe);
    }
    if ((uStack_6d8 & 1) != 0) {
      func_0x0412a280(uStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    }
    plVar12 = plStack_660;
    *(int *)(lStack_528 + -0x10) =
         *(int *)(lStack_528 + -0x10) + (*(int *)(lStack_620 + 0x38) - (int)lVar21);
    pcStack_668 = (char *)0x0;
    plStack_660 = (long *)0x0;
    if (plVar12 == (long *)0x0) {
      lStack_658 = 0;
    }
    else {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0412c2d0(plVar12);
      }
      plVar12 = plStack_660;
      lStack_658 = 0;
      if (plStack_660 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_660 + 1;
        lVar21 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plStack_660 + 0x10))(plStack_660);
          FUN_0412c2d0(plVar12);
        }
      }
    }
  }
  plVar12 = uStack_630;
  if (uStack_630 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_630 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*uStack_630 + 0x10))(uStack_630);
      FUN_0412c2d0(plVar12);
    }
  }
LAB_0bcd8a42:
  func_0x0485e2d0(&uStack_510);
  func_0x04863610(auStack_548);
  func_0x0eeb81b0(auStack_450);
  if ((uStack_690 & 1) != 0) {
    func_0x0412a280(puStack_680,uStack_690 & 0xfffffffffffffffe);
  }
  if ((bStack_560 & 1) != 0) {
    func_0x0412a280(puStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
  }
  if ((uStack_618 & 1) != 0) {
    func_0x0412a280(lStack_608,uStack_618 & 0xfffffffffffffffe);
  }
  return;
LAB_0bcd8250:
  uVar20 = uVar20 + 1;
  pcVar15 = pcVar15 + 0xa8;
  if (lVar14 - uVar20 == 0) goto joined_r0x0bcd8507;
  goto LAB_0bcd8262;
}


