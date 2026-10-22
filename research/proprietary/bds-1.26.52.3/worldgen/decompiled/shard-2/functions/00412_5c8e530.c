/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d8e530 (ELF vaddr 0x5c8e530)
 * Label: caller-of-callee
 * Body:  [[05d8e530, 05d8ec70] [05d8ec80, 05d8ed55]]
 * Ghidra: FUN_05d8e530
 */


/* WARNING: Removing unreachable block (ram,0x05d8e9e4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_05d8e530(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  byte *pbVar21;
  bool bVar22;
  undefined8 uStack_968;
  byte *pbStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  long lStack_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined8 uStack_938;
  long lStack_930;
  byte bStack_928;
  byte *pbStack_920;
  undefined8 uStack_918;
  byte *pbStack_910;
  ulong uStack_908;
  byte *pbStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  long lStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  long lStack_8c0;
  char cStack_8b8;
  ulong uStack_8b0;
  byte *pbStack_8a8;
  byte *pbStack_8a0;
  undefined8 *puStack_898;
  byte *pbStack_890;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_840;
  undefined *puStack_838;
  undefined8 uStack_830;
  undefined4 uStack_828;
  byte *pbStack_440;
  byte bStack_438;
  undefined7 uStack_437;
  undefined8 uStack_428;
  byte *pbStack_38;
  
  bVar22 = (*(byte *)(param_2 + 0x30) & 1) != 0;
  pbVar16 = (byte *)(param_2 + 0x31);
  if (bVar22) {
    pbVar16 = *(byte **)(param_2 + 0x40);
  }
  pbVar19 = *(byte **)(*param_1 + 0x18);
  pbVar12 = (byte *)(ulong)(*(byte *)(param_2 + 0x30) >> 1);
  if (bVar22) {
    pbVar12 = *(byte **)(param_2 + 0x38);
  }
  func_0x0eee2dd0(&uStack_840,0,0x408);
  if (pbVar12 < (byte *)0x400) {
    if (pbVar12 != (byte *)0x0) {
      func_0x0eee2ee0(&uStack_840,pbVar16,pbVar12);
    }
    pbStack_440 = pbVar12;
    *(byte *)((long)&uStack_840 + (long)pbVar12) = 0;
  }
  bVar22 = (*(byte *)(param_2 + 0x18) & 1) != 0;
  pbVar17 = (byte *)(param_2 + 0x19);
  if (bVar22) {
    pbVar17 = *(byte **)(param_2 + 0x28);
  }
  uVar14 = (ulong)(*(byte *)(param_2 + 0x18) >> 1);
  if (bVar22) {
    uVar14 = *(ulong *)(param_2 + 0x20);
  }
  pbStack_920 = pbVar19;
  pbStack_900 = pbVar16;
  uStack_8b0 = param_2;
  if (uVar14 == 0) {
    pbVar17 = (byte *)0x0;
  }
  else {
    pbVar19 = pbVar16 + (long)pbVar12;
    pbVar21 = pbVar19;
    if ((long)uVar14 <= (long)pbVar12) goto LAB_05d8e9f7;
LAB_05d8e5f2:
    pbVar17 = (byte *)0xffffffffffffffff;
    if (pbVar21 != pbVar19) {
      pbVar17 = pbVar21 + -(long)pbStack_900;
    }
    if (pbVar12 < pbVar17) {
      pbVar17 = pbVar12;
    }
    if ((byte *)0xfffffffffffffff7 < pbVar17) {
      FUN_04882e30();
      pbVar16 = pbVar21;
LAB_05d8e9f7:
      bVar1 = *pbVar17;
      pbVar13 = pbVar12;
      do {
        pbVar21 = pbVar19;
        if ((((long)pbVar13 - uVar14 == -1) ||
            (pbVar16 = (byte *)func_0x0eee2ef0(pbVar16,(int)(char)bVar1), pbVar16 == (byte *)0x0))
           || (iVar10 = func_0x0eee3000(pbVar16,pbVar17,uVar14), pbVar21 = pbVar16, iVar10 == 0))
        break;
        pbVar16 = pbVar16 + 1;
        pbVar13 = pbVar19 + -(long)pbVar16;
        pbVar21 = pbVar19;
      } while ((long)uVar14 <= (long)pbVar13);
      goto LAB_05d8e5f2;
    }
  }
  uVar14 = (long)&uStack_918 + 1;
  if (pbVar17 < (byte *)0x17) {
    uStack_918 = CONCAT71(uStack_918._1_7_,(char)pbVar17 * '\x02');
    uVar11 = uVar14;
    if (pbVar17 != (byte *)0x0) goto LAB_05d8e68d;
  }
  else {
    uVar15 = 0x1a;
    if (((ulong)pbVar17 | 7) != 0x17) {
      uVar15 = ((ulong)pbVar17 | 7) + 1;
    }
    uVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
    if (uVar11 == 0) {
      func_0x0eec74c0(uVar15,0);
    }
    uStack_918 = uVar15 | 1;
    pbStack_910 = pbVar17;
    uStack_908 = uVar11;
LAB_05d8e68d:
    func_0x0eee2ee0(uVar11,pbStack_900,pbVar17);
  }
  pbVar17[uVar11] = 0;
  bVar1 = *pbStack_920;
  if ((bVar1 & 1) == 0) {
    pbVar16 = (byte *)(ulong)(bVar1 >> 1);
  }
  else {
    pbVar16 = *(byte **)(pbStack_920 + 8);
  }
  pbVar19 = pbVar16 + 0xc;
  if (pbVar19 < (byte *)0xfffffffffffffff8) {
    if (pbVar19 < (byte *)0x17) {
      pbStack_960 = (byte *)0x0;
      uStack_958 = (byte *)0x0;
      uStack_968 = (ulong)(byte)((char)pbVar19 * '\x02');
      pbVar12 = (byte *)((long)&uStack_968 + 1);
      pbVar19 = pbStack_920;
      if (pbVar16 != (byte *)0x0) {
        if ((bVar1 & 1) == 0) goto LAB_05d8e75b;
LAB_05d8e6fb:
        pbVar17 = *(byte **)(pbStack_920 + 0x10);
        goto LAB_05d8e75f;
      }
    }
    else {
      uVar15 = 0x1a;
      if (((ulong)pbVar19 | 7) != 0x17) {
        uVar15 = ((ulong)pbVar19 | 7) + 1;
      }
      pbVar12 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      if (pbVar12 == (byte *)0x0) {
        func_0x0eec74c0(uVar15,0);
      }
      uStack_968 = uVar15 | 1;
      pbStack_960 = pbVar19;
      uStack_958 = pbVar12;
      if ((bVar1 & 1) != 0) goto LAB_05d8e6fb;
LAB_05d8e75b:
      pbVar17 = pbStack_920 + 1;
LAB_05d8e75f:
      pbVar19 = pbStack_920;
      func_0x0eee2ee0(pbVar12,pbVar17,pbVar16);
    }
    pbVar17 = pbVar12 + (long)pbVar16;
    pbVar17[0] = 0x2e;
    pbVar17[1] = 0x6d;
    pbVar17[2] = 99;
    pbVar17[3] = 0x73;
    pbVar17[4] = 0x74;
    pbVar17[5] = 0x72;
    pbVar17[6] = 0x75;
    pbVar17[7] = 99;
    pbVar17 = pbVar12 + 8 + (long)pbVar16;
    pbVar17[0] = 0x74;
    pbVar17[1] = 0x75;
    pbVar17[2] = 0x72;
    pbVar17[3] = 0x65;
    (pbVar12 + 0xc)[(long)pbVar16] = 0;
    uStack_8f0 = (byte *)(uStack_918 >> 1 & 0x7f);
    uStack_8f8 = uVar14;
    if ((uStack_918 & 1) != 0) {
      uStack_8f0 = pbStack_910;
      uStack_8f8 = uStack_908;
    }
    uStack_8e0 = (byte *)(uStack_968 >> 1 & 0x7f);
    uStack_8e8 = (byte *)((long)&uStack_968 + 1);
    if ((uStack_968 & 1) != 0) {
      uStack_8e0 = pbStack_960;
      uStack_8e8 = uStack_958;
    }
    pbVar16 = &bStack_438;
    func_0x049151c0(pbVar16,&uStack_8f8,2,0x2f);
    uVar11 = uStack_8b0;
    if ((uStack_968 & 1) != 0) {
      func_0x0412a280(uStack_958,uStack_968 & 0xfffffffffffffffe);
    }
    pbVar12 = pbStack_440;
    if ((pbStack_440 == pbStack_38) &&
       (iVar10 = func_0x0eee3000(&uStack_840,&bStack_438,pbStack_440), iVar10 == 0)) {
      bStack_928 = 1;
      uStack_968 = uStack_968 & 0xffffffffffffff00;
      goto LAB_05d8eb5a;
    }
    if (DAT_0f7b8fb8 == '\0') goto LAB_05d8ecfe;
  }
  else {
    FUN_04882e30();
LAB_05d8ecfe:
    iVar10 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar10 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      uVar11 = uStack_8b0;
      pbVar19 = pbStack_920;
    }
  }
  puStack_898 = &uStack_840;
  pbStack_8a0 = pbStack_38;
  pbStack_8a8 = pbVar16;
  pbStack_890 = pbVar12;
  (**(code **)(_DAT_0f7b8f98 + 0x38))(&uStack_968,&DAT_0f7b8f98,&puStack_898,&pbStack_8a8);
  cStack_8b8 = bStack_928;
  if (bStack_928 == '\0') {
    uStack_8f8 = uStack_968;
    uStack_8f0 = pbStack_960;
    uStack_8e8._0_4_ = SUB84(uStack_958,0);
    uStack_8e8._4_4_ = uStack_958._4_4_;
    uStack_8e0._0_4_ = SUB84(uStack_950,0);
    uStack_8e0._4_4_ = uStack_950._4_4_;
    lStack_8d8 = lStack_948;
    uStack_8d0._0_4_ = uStack_940;
    uStack_8d0._4_4_ = uStack_93c;
    uStack_8c8._0_4_ = (undefined4)uStack_938;
    uStack_8c8._4_4_ = uStack_938._4_4_;
    lStack_8c0 = lStack_930;
    func_0x05d8fa30(&uStack_8f8);
    lStack_930 = lStack_8c0;
    uVar9 = uStack_8c8._4_4_;
    uVar8 = (undefined4)uStack_8c8;
    uStack_93c = uStack_8d0._4_4_;
    uStack_940 = (undefined4)uStack_8d0;
    lStack_948 = lStack_8d8;
    uVar7 = uStack_8e0._4_4_;
    uVar4 = (undefined4)uStack_8e0;
    uVar3 = uStack_8e8._4_4_;
    uVar2 = (undefined4)uStack_8e8;
    uStack_888 = (undefined4)uStack_8f8;
    uStack_884 = uStack_8f8._4_4_;
    uStack_880 = (undefined4)uStack_8f0;
    uStack_87c = uStack_8f0._4_4_;
    uStack_8e8 = (byte *)0x0;
    uStack_8e0 = (byte *)0x0;
    lStack_8d8 = 0;
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    lStack_8c0 = 0;
    uStack_878 = 0;
    uStack_870 = 0;
    uStack_868 = 0;
    uStack_860 = 0;
    uStack_858 = 0;
    uStack_850 = 0;
    bStack_928 = 0;
    uStack_968 = uStack_8f8;
    pbStack_960 = uStack_8f0;
    uStack_958 = (byte *)CONCAT44(uVar3,uVar2);
    uStack_950 = (byte *)CONCAT44(uVar7,uVar4);
    uStack_938 = CONCAT44(uVar9,uVar8);
    func_0x048e6d60(&uStack_888);
    lVar5 = uStack_8d0;
  }
  else {
    pbVar16 = (byte *)(uVar11 + 0x18);
    if (pbVar16 != pbVar19) {
      bVar1 = *pbVar19;
      if ((*pbVar16 & 1) == 0) {
        if ((bVar1 & 1) == 0) {
          *(undefined8 *)(uVar11 + 0x28) = *(undefined8 *)(pbVar19 + 0x10);
          uVar2 = *(undefined4 *)(pbVar19 + 4);
          uVar3 = *(undefined4 *)(pbVar19 + 8);
          uVar4 = *(undefined4 *)(pbVar19 + 0xc);
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar19;
          *(undefined4 *)(uVar11 + 0x1c) = uVar2;
          *(undefined4 *)(uVar11 + 0x20) = uVar3;
          *(undefined4 *)(uVar11 + 0x24) = uVar4;
        }
        else {
          func_0x04885070(pbVar16,*(undefined8 *)(pbVar19 + 0x10),*(undefined8 *)(pbVar19 + 8));
        }
      }
      else {
        bVar22 = (bVar1 & 1) != 0;
        pbVar12 = pbVar19 + 1;
        if (bVar22) {
          pbVar12 = *(byte **)(pbVar19 + 0x10);
        }
        uVar14 = (ulong)(bVar1 >> 1);
        if (bVar22) {
          uVar14 = *(ulong *)(pbVar19 + 8);
        }
        func_0x04885120(pbVar16,pbVar12,uVar14);
      }
    }
    bStack_928 = 1;
    uStack_968 = CONCAT71(uStack_968._1_7_,1);
    lVar5 = uStack_8d0;
  }
  uStack_8d0 = lVar5;
  if (cStack_8b8 == '\0') {
    lVar18 = uStack_8c8;
    if (lVar5 != 0) {
      while (lVar5 != lVar18) {
        func_0x048b3e80(lVar18 + -0x40);
        lVar18 = lVar18 + -0x40;
      }
      uStack_8c8 = lVar5;
      func_0x0412a280(uStack_8d0,lStack_8c0 - uStack_8d0);
    }
    pbVar19 = uStack_8e8;
    pbVar16 = uStack_8e0;
    if (uStack_8e8 != (byte *)0x0) {
      for (; pbVar19 != pbVar16; pbVar16 = pbVar16 + -0x50) {
        if ((pbVar16[-8] == 1) && ((pbVar16[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(pbVar16 + -0x20),
                          *(ulong *)(pbVar16 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_8e0 = pbVar19;
      func_0x0412a280(uStack_8e8,lStack_8d8 - (long)uStack_8e8);
    }
  }
LAB_05d8eb5a:
  if ((uStack_918 & 1) != 0) {
    func_0x0412a280(uStack_908,uStack_918 & 0xfffffffffffffffe);
  }
  uStack_840 = 0x62b39289b064de50;
  puStack_838 = &UNK_0140f690;
  uStack_830 = 1;
  uStack_828 = 300;
  if (bStack_928 == 0) {
    func_0x0eedea30(&bStack_438);
    func_0x0eedeb80(2,0x2d,&uStack_968,&bStack_438,&uStack_840);
    if ((bStack_438 & 1) != 0) {
      func_0x0412a280(uStack_428,CONCAT71(uStack_437,bStack_438) & 0xfffffffffffffffe);
    }
  }
  bVar6 = bStack_928;
  bVar1 = (byte)uStack_968;
  if ((bStack_928 & 1) == 0) {
    lVar5 = CONCAT44(uStack_93c,uStack_940);
    if (lVar5 != 0) {
      lVar18 = lVar5;
      lVar20 = uStack_938;
      if (lVar5 != uStack_938) {
        do {
          lVar20 = lVar20 + -0x40;
          func_0x048b3e80(lVar20);
        } while (lVar20 != lVar5);
        lVar18 = CONCAT44(uStack_93c,uStack_940);
      }
      uStack_938 = lVar5;
      func_0x0412a280(lVar18,lStack_930 - lVar18);
    }
    pbVar19 = uStack_958;
    pbVar16 = uStack_950;
    if (uStack_958 != (byte *)0x0) {
      for (; pbVar19 != pbVar16; pbVar16 = pbVar16 + -0x50) {
        if ((pbVar16[-8] == 1) && ((pbVar16[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(pbVar16 + -0x20),
                          *(ulong *)(pbVar16 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_950 = pbVar19;
      func_0x0412a280(uStack_958,lStack_948 - (long)uStack_958);
    }
  }
  return bVar6 & bVar1 & 1;
}


