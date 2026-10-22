/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d8ef70 (ELF vaddr 0x5c8ef70)
 * Label: caller-of-callee
 * Body:  [[05d8ef70, 05d8f880] [05d8f890, 05d8f95f]]
 * Ghidra: FUN_05d8ef70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_05d8ef70(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  undefined8 **ppuVar22;
  long lVar23;
  bool bVar24;
  undefined8 uStack_d88;
  ulong uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  long lStack_d68;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined8 uStack_d58;
  long lStack_d50;
  byte bStack_d48;
  undefined8 uStack_d38;
  ulong uStack_d30;
  ulong uStack_d28;
  ulong uStack_d18;
  byte *pbStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  long lStack_cd0;
  undefined4 uStack_cc8;
  uint uStack_cb8;
  undefined8 **ppuStack_ca8;
  long lStack_ca0;
  byte **ppbStack_c98;
  long lStack_c90;
  undefined4 uStack_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 *puStack_c48;
  ulong uStack_c40;
  undefined8 uStack_c38;
  ulong uStack_c30;
  undefined8 uStack_c28;
  ulong uStack_c20;
  uint uStack_c18;
  undefined4 uStack_c08;
  uint uStack_bf8;
  long lStack_848;
  byte *pbStack_840;
  ulong uStack_838;
  undefined *puStack_830;
  undefined8 uStack_828;
  undefined *puStack_820;
  undefined8 uStack_818;
  long lStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  ulong uStack_38;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)puVar2[1];
  pbStack_d10 = (byte *)puVar2[2];
  pbVar14 = (byte *)(**(code **)(*(long *)*puVar2 + 0x50))();
  bVar24 = (*pbVar14 & 1) != 0;
  pbStack_840 = pbVar14 + 1;
  if (bVar24) {
    pbStack_840 = *(byte **)(pbVar14 + 0x10);
  }
  uStack_838 = (ulong)(*pbVar14 >> 1);
  if (bVar24) {
    uStack_838 = *(ulong *)(pbVar14 + 8);
  }
  puStack_830 = &UNK_0139155b;
  uStack_828 = 6;
  puStack_820 = &UNK_013c5c09;
  uStack_818 = 0xb;
  func_0x049151c0(&uStack_438,&pbStack_840,3,0x2f);
  uVar4 = *puVar3;
  uVar5 = puVar3[1];
  uStack_bf8 = (uint)uVar5 & 0xffff;
  puStack_c48 = (undefined8 *)CONCAT44(puStack_c48._4_4_,(int)((ulong)uVar4 >> 0x20));
  uStack_c38 = CONCAT44(uStack_c38._4_4_,(int)((ulong)uVar4 >> 0x10)) & 0xffffffff0000ffff;
  uStack_c28 = CONCAT44(uStack_c28._4_4_,(int)uVar4) & 0xffffffff0000ffff;
  uStack_c18 = (uint)(ushort)((ulong)uVar5 >> 0x30);
  uStack_c08 = (undefined4)((ulong)uVar5 >> 0x10);
  func_0x0470d9a0(&uStack_d08,&UNK_01287ba2,0x28,0x122112,&puStack_c48);
  bVar1 = *(byte *)(param_2 + 0x18);
  ppuVar22 = (undefined8 **)(ulong)bVar1;
  if ((bVar1 & 1) == 0) {
    uVar16 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar16 = *(ulong *)(param_2 + 0x20);
  }
  uVar17 = uVar16 + 0xc;
  if (uVar17 < 0xfffffffffffffff8) {
    uStack_d18 = param_2;
    if (uVar17 < 0x17) {
      uStack_d80 = 0;
      uStack_d78 = 0;
      uStack_d88 = (undefined8 *)(ulong)(byte)((char)uVar17 * '\x02');
      uVar15 = (long)&uStack_d88 + 1;
      if (uVar16 != 0) {
        if ((bVar1 & 1) == 0) goto LAB_05d8f149;
LAB_05d8f0e8:
        lVar19 = *(long *)(uStack_d18 + 0x28);
        goto LAB_05d8f152;
      }
    }
    else {
      uVar18 = 0x1a;
      if ((uVar17 | 7) != 0x17) {
        uVar18 = (uVar17 | 7) + 1;
      }
      uVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (uVar15 == 0) {
        func_0x0eec74c0(uVar18,0);
      }
      uStack_d88 = (undefined8 *)(uVar18 | 1);
      uStack_d80 = uVar17;
      uStack_d78 = uVar15;
      if ((bVar1 & 1) != 0) goto LAB_05d8f0e8;
LAB_05d8f149:
      lVar19 = uStack_d18 + 0x19;
LAB_05d8f152:
      func_0x0eee2ee0(uVar15,lVar19,uVar16);
    }
    ppuVar22 = (undefined8 **)0x6375727473636d2e;
    *(undefined8 *)(uVar15 + uVar16) = 0x6375727473636d2e;
    *(undefined4 *)(uVar15 + 8 + uVar16) = 0x65727574;
    *(undefined1 *)(uVar15 + 0xc + uVar16) = 0;
    uStack_c38 = (long)&uStack_d08 + 1;
    uStack_c30 = (ulong)uStack_d08 >> 1 & 0x7f;
    if (((ulong)uStack_d08 & 1) != 0) {
      uStack_c30 = uStack_d00;
      uStack_c38 = uStack_cf8;
    }
    bVar24 = ((ulong)uStack_d88 & 1) != 0;
    puStack_c48 = &uStack_438;
    uStack_c28 = (long)&uStack_d88 + 1;
    if (bVar24) {
      uStack_c28 = uStack_d78;
    }
    uStack_c40 = uStack_38;
    uStack_c20 = (ulong)uStack_d88 >> 1 & 0x7f;
    if (bVar24) {
      uStack_c20 = uStack_d80;
    }
    func_0x049151c0(&pbStack_840,&puStack_c48,3,0x2f);
    if (((ulong)uStack_d88 & 1) != 0) {
      func_0x0412a280(uStack_d78,(ulong)uStack_d88 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_d08 & 1) != 0) {
      func_0x0412a280(uStack_cf8,(ulong)uStack_d08 & 0xfffffffffffffffe);
    }
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    uStack_cb8 = (uint)uVar5 & 0xffff;
    uStack_d08 = (undefined8 *)CONCAT44(uStack_d08._4_4_,(int)((ulong)uVar4 >> 0x20));
    uStack_cf8 = CONCAT44(uStack_cf8._4_4_,(int)((ulong)uVar4 >> 0x10)) & 0xffffffff0000ffff;
    uStack_ce8 = CONCAT44(uStack_ce8._4_4_,(int)uVar4) & 0xffffffff0000ffff;
    uStack_cd8 = CONCAT44(uStack_cd8._4_4_,(uint)(ushort)((ulong)uVar5 >> 0x30));
    uStack_cc8 = (undefined4)((ulong)uVar5 >> 0x10);
    func_0x0470d9a0(&uStack_d88,&UNK_01287ba2,0x28,0x122112,&uStack_d08);
    bVar1 = *pbStack_d10;
    if ((bVar1 & 1) == 0) {
      uVar16 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar16 = *(ulong *)(pbStack_d10 + 8);
    }
    uVar17 = uVar16 + 0xc;
    if (0xfffffffffffffff7 < uVar17) goto LAB_05d8f90b;
    if (uVar17 < 0x17) {
      uStack_d30 = 0;
      uStack_d28 = 0;
      uStack_d38 = (ulong)(byte)((char)uVar17 * '\x02');
      uVar15 = (long)&uStack_d38 + 1;
      if (uVar16 != 0) {
        if ((bVar1 & 1) == 0) goto LAB_05d8f37d;
LAB_05d8f31c:
        pbVar14 = *(byte **)(pbStack_d10 + 0x10);
        goto LAB_05d8f386;
      }
    }
    else {
      uVar18 = 0x1a;
      if ((uVar17 | 7) != 0x17) {
        uVar18 = (uVar17 | 7) + 1;
      }
      uVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (uVar15 == 0) {
        func_0x0eec74c0(uVar18,0);
      }
      uStack_d38 = uVar18 | 1;
      uStack_d30 = uVar17;
      uStack_d28 = uVar15;
      if ((bVar1 & 1) != 0) goto LAB_05d8f31c;
LAB_05d8f37d:
      pbVar14 = pbStack_d10 + 1;
LAB_05d8f386:
      func_0x0eee2ee0(uVar15,pbVar14,uVar16);
    }
    *(undefined8 *)(uVar15 + uVar16) = 0x6375727473636d2e;
    *(undefined4 *)(uVar15 + 8 + uVar16) = 0x65727574;
    *(undefined1 *)(uVar15 + 0xc + uVar16) = 0;
    uStack_cf8 = (long)&uStack_d88 + 1;
    uStack_cf0 = (ulong)uStack_d88 >> 1 & 0x7f;
    if (((ulong)uStack_d88 & 1) != 0) {
      uStack_cf0 = uStack_d80;
      uStack_cf8 = uStack_d78;
    }
    uStack_d08 = &uStack_438;
    bVar24 = (uStack_d38 & 1) != 0;
    uStack_ce8 = (long)&uStack_d38 + 1;
    if (bVar24) {
      uStack_ce8 = uStack_d28;
    }
    uStack_d00 = uStack_38;
    uStack_ce0 = uStack_d38 >> 1 & 0x7f;
    if (bVar24) {
      uStack_ce0 = uStack_d30;
    }
    ppuVar22 = &puStack_c48;
    func_0x049151c0(ppuVar22,&uStack_d08,3,0x2f);
    uVar17 = uStack_d18;
    if ((uStack_d38 & 1) == 0) {
      if (((ulong)uStack_d88 & 1) == 0) goto LAB_05d8f44c;
LAB_05d8f479:
      func_0x0412a280(uStack_d78,(ulong)uStack_d88 & 0xfffffffffffffffe);
      if (lStack_440 == lStack_848) goto LAB_05d8f49d;
    }
    else {
      func_0x0412a280(uStack_d28,uStack_d38 & 0xfffffffffffffffe);
      if (((ulong)uStack_d88 & 1) != 0) goto LAB_05d8f479;
LAB_05d8f44c:
      if (lStack_440 == lStack_848) {
LAB_05d8f49d:
        iVar13 = func_0x0eee3000(&pbStack_840,&puStack_c48);
        if (iVar13 == 0) {
          bStack_d48 = 1;
          uStack_d88 = (undefined8 *)((ulong)uStack_d88 & 0xffffffffffffff00);
          goto LAB_05d8f809;
        }
      }
    }
    if (DAT_0f7b8fb8 == '\0') goto LAB_05d8f910;
  }
  else {
    func_0x04882e30();
LAB_05d8f90b:
    func_0x04882e30();
LAB_05d8f910:
    iVar13 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar13 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      uVar17 = uStack_d18;
    }
  }
  ppbStack_c98 = &pbStack_840;
  lStack_c90 = lStack_440;
  lStack_ca0 = lStack_848;
  ppuStack_ca8 = ppuVar22;
  (**(code **)(_DAT_0f7b8f98 + 0x38))(&uStack_d88,&DAT_0f7b8f98,&ppbStack_c98,&ppuStack_ca8);
  uStack_cc8 = CONCAT31(uStack_cc8._1_3_,bStack_d48);
  if (bStack_d48 == '\0') {
    uStack_d08 = uStack_d88;
    uStack_d00 = uStack_d80;
    uStack_cf8._0_4_ = (undefined4)uStack_d78;
    uStack_cf8._4_4_ = uStack_d78._4_4_;
    uStack_cf0._0_4_ = (undefined4)uStack_d70;
    uStack_cf0._4_4_ = uStack_d70._4_4_;
    uStack_ce8 = lStack_d68;
    uStack_ce0._0_4_ = uStack_d60;
    uStack_ce0._4_4_ = uStack_d5c;
    uStack_cd8._0_4_ = (undefined4)uStack_d58;
    uStack_cd8._4_4_ = uStack_d58._4_4_;
    lStack_cd0 = lStack_d50;
    func_0x05d8faf0(&uStack_d08);
    lStack_d50 = lStack_cd0;
    uVar12 = uStack_cd8._4_4_;
    uVar11 = (undefined4)uStack_cd8;
    uStack_d5c = uStack_ce0._4_4_;
    uStack_d60 = (undefined4)uStack_ce0;
    lStack_d68 = uStack_ce8;
    uVar10 = uStack_cf0._4_4_;
    uVar8 = (undefined4)uStack_cf0;
    uVar7 = uStack_cf8._4_4_;
    uVar6 = (undefined4)uStack_cf8;
    uStack_c88 = (undefined4)uStack_d08;
    uStack_c84 = uStack_d08._4_4_;
    uStack_c80 = (undefined4)uStack_d00;
    uStack_c7c = uStack_d00._4_4_;
    uStack_cf8 = 0;
    uStack_cf0 = 0;
    uStack_ce8 = 0;
    uStack_ce0 = 0;
    uStack_cd8 = 0;
    lStack_cd0 = 0;
    uStack_c78 = 0;
    uStack_c70 = 0;
    uStack_c68 = 0;
    uStack_c60 = 0;
    uStack_c58 = 0;
    uStack_c50 = 0;
    bStack_d48 = 0;
    uStack_d88 = uStack_d08;
    uStack_d80 = uStack_d00;
    uStack_d78 = CONCAT44(uVar7,uVar6);
    uStack_d70 = CONCAT44(uVar10,uVar8);
    uStack_d58 = CONCAT44(uVar12,uVar11);
    func_0x048e6d60(&uStack_c88);
    uVar16 = uStack_ce0;
  }
  else {
    pbVar14 = (byte *)(uVar17 + 0x18);
    if (pbVar14 != pbStack_d10) {
      bVar1 = *pbStack_d10;
      if ((*pbVar14 & 1) == 0) {
        if ((bVar1 & 1) == 0) {
          *(undefined8 *)(uVar17 + 0x28) = *(undefined8 *)(pbStack_d10 + 0x10);
          uVar6 = *(undefined4 *)(pbStack_d10 + 4);
          uVar7 = *(undefined4 *)(pbStack_d10 + 8);
          uVar8 = *(undefined4 *)(pbStack_d10 + 0xc);
          *(undefined4 *)pbVar14 = *(undefined4 *)pbStack_d10;
          *(undefined4 *)(uVar17 + 0x1c) = uVar6;
          *(undefined4 *)(uVar17 + 0x20) = uVar7;
          *(undefined4 *)(uVar17 + 0x24) = uVar8;
        }
        else {
          func_0x04885070(pbVar14,*(undefined8 *)(pbStack_d10 + 0x10),
                          *(undefined8 *)(pbStack_d10 + 8));
        }
      }
      else {
        bVar24 = (bVar1 & 1) != 0;
        pbVar20 = pbStack_d10 + 1;
        if (bVar24) {
          pbVar20 = *(byte **)(pbStack_d10 + 0x10);
        }
        uVar16 = (ulong)(bVar1 >> 1);
        if (bVar24) {
          uVar16 = *(ulong *)(pbStack_d10 + 8);
        }
        func_0x04885120(pbVar14,pbVar20,uVar16);
      }
    }
    bStack_d48 = 1;
    uStack_d88 = (undefined8 *)CONCAT71(uStack_d88._1_7_,1);
    uVar16 = uStack_ce0;
  }
  uStack_ce0 = uVar16;
  if ((char)uStack_cc8 == '\0') {
    uVar17 = uStack_cd8;
    if (uVar16 != 0) {
      while (uVar16 != uVar17) {
        func_0x048b3e80(uVar17 - 0x40);
        uVar17 = uVar17 - 0x40;
      }
      uStack_cd8 = uVar16;
      func_0x0412a280(uStack_ce0,lStack_cd0 - uStack_ce0);
    }
    uVar17 = uStack_cf8;
    uVar16 = uStack_cf0;
    if (uStack_cf8 != 0) {
      for (; uVar17 != uVar16; uVar16 = uVar16 - 0x50) {
        if ((*(char *)(uVar16 - 8) == '\x01') && ((*(byte *)(uVar16 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar16 - 0x20),
                          *(ulong *)(uVar16 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_cf0 = uVar17;
      func_0x0412a280(uStack_cf8,uStack_ce8 - uStack_cf8);
    }
  }
  uStack_438 = 0x62b39289b064de50;
  puStack_430 = &UNK_0140f690;
  uStack_428 = 1;
  uStack_420 = 0x117;
  if ((bStack_d48 & 1) == 0) {
    func_0x0eedea30(&pbStack_840);
    FUN_0eedeb80(2,0x2d,&uStack_d88,&pbStack_840,&uStack_438);
    if (((ulong)pbStack_840 & 1) != 0) {
      func_0x0412a280(puStack_830,(ulong)pbStack_840 & 0xfffffffffffffffe);
    }
  }
LAB_05d8f809:
  bVar9 = bStack_d48;
  bVar1 = (byte)uStack_d88;
  if (bStack_d48 == 0) {
    lVar19 = CONCAT44(uStack_d5c,uStack_d60);
    if (lVar19 != 0) {
      lVar21 = lVar19;
      lVar23 = uStack_d58;
      if (lVar19 != uStack_d58) {
        do {
          lVar23 = lVar23 + -0x40;
          func_0x048b3e80(lVar23);
        } while (lVar23 != lVar19);
        lVar21 = CONCAT44(uStack_d5c,uStack_d60);
      }
      uStack_d58 = lVar19;
      func_0x0412a280(lVar21,lStack_d50 - lVar21);
    }
    uVar17 = uStack_d78;
    uVar16 = uStack_d70;
    if (uStack_d78 != 0) {
      for (; uVar17 != uVar16; uVar16 = uVar16 - 0x50) {
        if ((*(char *)(uVar16 - 8) == '\x01') && ((*(byte *)(uVar16 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar16 - 0x20),
                          *(ulong *)(uVar16 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_d70 = uVar17;
      func_0x0412a280(uStack_d78,lStack_d68 - uStack_d78);
    }
  }
  return bVar9 & bVar1;
}


