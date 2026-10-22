/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52980d0 (ELF vaddr 0x51980d0)
 * Label: caller-of-callee
 * Body:  [[052980d0, 052988d3] [052988e0, 052989a1] [052989b0, 05298bd2] [05298be0, 05298c53] [05298c60, 05298cb9] [05298cc0, 05298e0a] [05298f54, 0529900b] [05299021, 0529906e]]
 * Ghidra: FUN_052980d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052980d0(undefined8 *param_1,long *param_2,long *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  bool bVar18;
  float fVar19;
  undefined4 uVar21;
  undefined8 uVar20;
  undefined4 uVar22;
  undefined4 uVar23;
  long *plStack_b30;
  undefined8 uStack_b28;
  undefined *puStack_b20;
  undefined *puStack_b18;
  undefined8 uStack_b10;
  undefined8 *puStack_b08;
  undefined8 uStack_b00;
  long *plStack_af8;
  long *plStack_af0;
  undefined *puStack_ae0;
  undefined *puStack_ad8;
  undefined8 uStack_ad0;
  undefined4 uStack_ac8;
  byte bStack_aa0;
  undefined8 *puStack_a98;
  long lStack_a90;
  undefined1 auStack_a88 [16];
  undefined8 *puStack_a70;
  undefined8 uStack_a68;
  byte bStack_a60;
  undefined4 uStack_a5f;
  undefined3 uStack_a5b;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  long lStack_a48;
  byte *pbStack_a40;
  byte *pbStack_a38;
  long *plStack_a30;
  undefined8 uStack_a28;
  uint uStack_a1c;
  byte *pbStack_a18;
  ulong uStack_a10;
  undefined8 uStack_a08;
  undefined *puStack_a00;
  byte bStack_9d8;
  undefined8 uStack_618;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar7 = *param_2;
  *param_2 = 0;
  *param_1 = &UNK_0f534768;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &UNK_0ef44a60;
  *(undefined1 *)(puVar6 + 3) = 1;
  param_1[1] = puVar6 + 3;
  param_1[2] = puVar6;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar7 + 0x18);
  lVar12 = *(long *)(lVar7 + 0x28);
  uVar21 = *(undefined4 *)(lVar7 + 0x24);
  uVar22 = *(undefined4 *)(lVar7 + 0x28);
  uVar23 = *(undefined4 *)(lVar7 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar7 + 0x20);
  *(undefined4 *)((long)param_1 + 0x24) = uVar21;
  *(undefined4 *)(param_1 + 5) = uVar22;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar23;
  param_1[6] = lVar7;
  param_1[8] = *(undefined8 *)(lVar12 + 0x390);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = lVar7;
  *param_1 = &UNK_0ef9db60;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xf) = 5;
  plStack_a30 = param_1 + 0x10;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  pbStack_a18 = &UNK_0f5356d0;
  uStack_38 = 0x100000000000000;
  uStack_a10 = 0x15cf000015cf0;
  uStack_44 = 0;
  uStack_40 = 0;
  uVar14 = 0x15cf0;
  lVar7 = 5;
  while( true ) {
    uVar15 = ((ulong)((uVar14 >> 0x1e ^ uVar14) * 0x6c078965) + lVar7) - 4;
    uVar14 = (uint)uVar15;
    (&uStack_a1c)[lVar7] = uVar14;
    if (lVar7 == 0x191) break;
    uVar14 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar14) * 0x6c078965 + (int)lVar7) - 3;
    *(uint *)((long)&pbStack_a18 + lVar7 * 4) = uVar14;
    lVar7 = lVar7 + 2;
  }
  uStack_4c = 0x18e00000270;
  func_0x0d3430a0(param_1 + 0xf,&pbStack_a18,0);
  pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3);
  pbStack_a38 = (byte *)(param_1 + 0x14);
  if ((*pbVar8 & 1) == 0) {
    param_1[0x16] = *(undefined8 *)(pbVar8 + 0x10);
    uVar21 = *(undefined4 *)(pbVar8 + 4);
    uVar22 = *(undefined4 *)(pbVar8 + 8);
    uVar23 = *(undefined4 *)(pbVar8 + 0xc);
    *(undefined4 *)pbStack_a38 = *(undefined4 *)pbVar8;
    *(undefined4 *)((long)param_1 + 0xa4) = uVar21;
    *(undefined4 *)(param_1 + 0x15) = uVar22;
    *(undefined4 *)((long)param_1 + 0xac) = uVar23;
  }
  else {
    func_0x0412e5e0(pbStack_a38,*(undefined8 *)(pbVar8 + 0x10),*(undefined8 *)(pbVar8 + 8));
  }
  pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3);
  pbStack_a40 = (byte *)(param_1 + 0x17);
  bVar18 = (*pbVar8 & 1) != 0;
  pbStack_a18 = pbVar8 + 1;
  if (bVar18) {
    pbStack_a18 = *(byte **)(pbVar8 + 0x10);
  }
  uStack_a10 = (ulong)(*pbVar8 >> 1);
  if (bVar18) {
    uStack_a10 = *(ulong *)(pbVar8 + 8);
  }
  uStack_a08 = &UNK_011ed0c5;
  puStack_a00 = (undefined *)0x13;
  func_0x048ad670(pbStack_a40,&pbStack_a18,2,0x2f);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  param_1[0x1d] = param_5;
  puStack_a70 = param_1 + 0x1e;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  puVar6 = param_1 + 0x23;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  plStack_af8 = (long *)0x0;
  plStack_af0 = (long *)0x0;
  bVar18 = (*(byte *)(param_1 + 0x14) & 1) != 0;
  uStack_b28 = (byte **)((long)param_1 + 0xa1);
  if (bVar18) {
    uStack_b28 = (byte **)param_1[0x16];
  }
  puStack_b20 = (undefined *)(ulong)(*(byte *)(param_1 + 0x14) >> 1);
  if (bVar18) {
    puStack_b20 = (undefined *)param_1[0x15];
  }
  puStack_b18 = &UNK_011b8eaf;
  uStack_b10 = 0xc;
  func_0x049151c0(&pbStack_a18,&uStack_b28,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
    puStack_b08 = puVar6;
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    puVar6 = puStack_b08;
  }
  puStack_b20 = (undefined *)uStack_618;
  uStack_b28 = &pbStack_a18;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&puStack_ae0,&DAT_0f7b8f98,&uStack_b28,&plStack_af8,0x121,0);
  uStack_b28 = (byte **)0xc49fcf4adb9e667a;
  puStack_b20 = &UNK_0140f690;
  puStack_b18 = (undefined *)0x1;
  uStack_b10 = CONCAT44(uStack_b10._4_4_,0x10b);
  if (bStack_aa0 == 0) {
    func_0x0eedea30(&bStack_a60);
    func_0x0eedeb80(2,0x2d,&puStack_ae0,&bStack_a60,&uStack_b28);
    if ((bStack_a60 & 1) != 0) {
      func_0x0412a280(uStack_a50,
                      CONCAT35(uStack_a5b,CONCAT41(uStack_a5f,bStack_a60)) & 0xfffffffffffffffe);
    }
  }
  if ((bStack_aa0 & 1) == 0) {
    func_0x048e6d60(&puStack_ae0);
    uVar20 = CONCAT44(uStack_a28._4_4_,(float)uStack_a28);
    goto LAB_05298585;
  }
  bStack_a60 = 0;
  uStack_a5f = 0;
  uStack_a58 = 0;
  puStack_b08 = puVar6;
  func_0x0ee76a70(&pbStack_a18,plStack_af8,&bStack_a60,0x10);
  if (bStack_9d8 == 0) {
    func_0x048e6d60(&pbStack_a18);
  }
  plVar11 = plStack_af8;
  uStack_a68 = 0;
  lVar7 = plStack_af8[3];
  if (lVar7 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar7 + 8;
    func_0x0412d770(lVar12);
  }
  (**(code **)(*plVar11 + 0x80))(&pbStack_a18,plVar11,&uStack_a68);
  if (lVar7 != 0) {
    func_0x0412d790(lVar12);
  }
  puStack_ae0 = (undefined *)0xc49fcf4adb9e667a;
  puStack_ad8 = &UNK_0140f690;
  uStack_ad0 = 1;
  uStack_ac8 = 0x119;
  if (bStack_9d8 == 0) {
    func_0x0eedea30(&uStack_b28);
    func_0x0eedeb80(2,0x2d,&pbStack_a18,&uStack_b28,&puStack_ae0);
    if (((ulong)uStack_b28 & 1) != 0) {
      func_0x0412a280(puStack_b18,(ulong)uStack_b28 & 0xfffffffffffffffe);
    }
    if ((bStack_9d8 & 1) != 0) goto LAB_05298652;
LAB_052986b6:
    func_0x048e6d60(&pbStack_a18);
    uVar20 = CONCAT44(uStack_a28._4_4_,(float)uStack_a28);
  }
  else {
    if ((bStack_9d8 & 1) == 0) goto LAB_052986b6;
LAB_05298652:
    uVar20 = CONCAT44(uStack_a28._4_4_,(float)uStack_a28);
  }
  puVar3 = (undefined *)(long)(int)uStack_a58._4_4_;
  if (0 < (long)puVar3) {
    uVar20 = CONCAT44(uStack_a28._4_4_,(float)uStack_a28);
    if ((int)uStack_a68 < (int)uStack_a58._4_4_) goto LAB_05298585;
    if (uStack_a58._4_4_ < 0x17) {
      uVar15 = (ulong)uStack_b28 >> 8;
      uStack_b28 = (byte **)CONCAT71((int7)uVar15,(char)uStack_a58._4_4_ * '\x02');
      puVar9 = (undefined *)((long)&uStack_b28 + 1);
    }
    else {
      uVar15 = 0x1a;
      if (((ulong)puVar3 | 7) != 0x17) {
        uVar15 = ((ulong)puVar3 | 7) + 1;
      }
      puVar9 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      if (puVar9 == (undefined *)0x0) {
        FUN_0eec74c0(uVar15,0);
      }
      uStack_b28 = (byte **)(uVar15 | 1);
      puStack_b20 = puVar3;
      puStack_b18 = puVar9;
    }
    func_0x0eee2dd0(puVar9,0,puVar3);
    puVar9[(long)puVar3] = 0;
    puVar9 = (undefined *)((long)&uStack_b28 + 1);
    if (((ulong)uStack_b28 & 1) != 0) {
      puVar9 = puStack_b18;
    }
    func_0x0ee76a70(&pbStack_a18,plStack_af8,puVar9,puVar3);
    if (bStack_9d8 == 0) {
      func_0x048e6d60(&pbStack_a18);
    }
    puStack_a00 = (undefined *)((ulong)uStack_b28 >> 1 & 0x7f);
    uStack_a08 = (undefined *)((long)&uStack_b28 + 1);
    if (((ulong)uStack_b28 & 1) != 0) {
      puStack_a00 = puStack_b20;
      uStack_a08 = puStack_b18;
    }
    pbStack_a18 = &UNK_0ef9fd98;
    uStack_a10 = 0;
    func_0x0d6c71b0(&plStack_b30,&pbStack_a18);
    plVar11 = plStack_b30;
    puStack_ae0 = &UNK_0147945b;
    puStack_ad8 = (undefined *)0x8;
    plVar10 = (long *)func_0x0d6c97a0(plStack_b30 + 1,&puStack_ae0);
    if (plVar10 != plVar11 + 2) {
      if ((ulong)*(uint *)(plVar10 + 0xc) == 0xffffffff) goto LAB_05298df2;
      puStack_a98 = &uStack_b00;
      plVar11 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar10 + 0xc) * 8))
                                  (&puStack_a98,plVar10 + 7);
      if (plVar11 != (long *)0x0) {
        cVar4 = (**(code **)(*plVar11 + 0x30))(plVar11);
        if (cVar4 == '\t') {
          puStack_ae0 = &UNK_0147945b;
          puStack_ad8 = (undefined *)0x8;
          lVar12 = func_0x0d6c9880(plStack_b30 + 1,&puStack_ae0);
          lVar7 = 0;
          if (*(int *)(lVar12 + 0x60) == 9) {
            lVar7 = lVar12 + 0x38;
          }
          lVar12 = *(long *)(lVar7 + 8);
          if (0 < (int)((ulong)(*(long *)(lVar7 + 0x10) - lVar12) >> 3)) {
            lVar17 = 0;
            lStack_a48 = lVar7;
            do {
              plVar11 = *(long **)(lVar12 + lVar17 * 8);
              if (plVar11 != (long *)0x0) {
                cVar4 = (**(code **)(*plVar11 + 0x30))(plVar11);
                if (cVar4 == '\n') {
                  puStack_ae0 = &UNK_01495721;
                  puStack_ad8 = (undefined *)0x3;
                  plVar10 = (long *)func_0x0d6c9880(plVar11 + 1,&puStack_ae0);
                  if ((plVar10 == plVar11 + 2) || ((int)plVar10[0xc] != 9)) {
                    uVar21 = 0;
                    uVar14 = 0;
                    uVar22 = 0;
                    uVar23 = 0;
                  }
                  else {
                    uVar14 = 0;
                    if ((0 < (int)((ulong)(plVar10[9] - plVar10[8]) >> 3)) &&
                       (plVar13 = *(long **)plVar10[8], plVar13 != (long *)0x0)) {
                      cVar4 = (**(code **)(*plVar13 + 0x30))(plVar13);
                      uVar14 = 0;
                      if (cVar4 == '\x05') {
                        uVar14 = *(uint *)(plVar13 + 1);
                      }
                    }
                    uVar21 = 0;
                    lVar7 = plVar10[8];
                    iVar16 = (int)((ulong)(plVar10[9] - lVar7) >> 3);
                    uVar22 = 0;
                    uVar23 = 0;
                    if (1 < iVar16) {
                      auStack_a88 = ZEXT416(uVar14);
                      if (*(long **)(lVar7 + 8) != (long *)0x0) {
                        (**(code **)(**(long **)(lVar7 + 8) + 0x30))();
                        lVar7 = plVar10[8];
                        iVar16 = (int)((ulong)(plVar10[9] - lVar7) >> 3);
                        uVar14 = auStack_a88._0_4_;
                        uVar21 = auStack_a88._4_4_;
                        uVar22 = auStack_a88._8_4_;
                        uVar23 = auStack_a88._12_4_;
                      }
                      if ((2 < iVar16) &&
                         (plVar10 = *(long **)(lVar7 + 0x10), plVar10 != (long *)0x0)) {
                        cVar4 = (**(code **)(*plVar10 + 0x30))(plVar10);
                        uVar14 = auStack_a88._0_4_;
                        uVar22 = auStack_a88._8_4_;
                        uVar23 = auStack_a88._12_4_;
                        if (cVar4 == '\x05') {
                          uVar21 = (undefined4)plVar10[1];
                        }
                        else {
                          uVar21 = auStack_a88._4_4_;
                        }
                      }
                    }
                  }
                  auStack_a88._4_4_ = uVar21;
                  auStack_a88._0_4_ = uVar14;
                  auStack_a88._8_4_ = uVar22;
                  auStack_a88._12_4_ = uVar23;
                  uVar20 = func_0x0eee4390();
                  uStack_a28 = uVar20;
                  fVar19 = (float)func_0x0eee4390(auStack_a88._4_4_);
                  uStack_b00 = CONCAT44((int)fVar19 >> 4,(int)(float)uStack_a28 >> 4);
                  lStack_a90 = func_0x052bf470(puStack_a70,&uStack_b00);
                  lVar7 = lStack_a48;
                  lStack_a90 = lStack_a90 + 0x18;
                  puStack_a98 = (undefined8 *)&UNK_0ef9fe28;
                  puStack_ae0 = (undefined *)((ulong)puStack_ae0 & 0xffffffffffff0000);
                  func_0x0d6ba180(&puStack_ae0,plVar11,&puStack_a98,0);
                  if (((ulong)puStack_ae0 & 1) != 0) {
                    func_0x0412a280(uStack_ad0,(ulong)puStack_ae0 & 0xfffffffffffffffe);
                  }
                }
              }
              lVar17 = lVar17 + 1;
              lVar12 = *(long *)(lVar7 + 8);
            } while (lVar17 < (int)((ulong)(*(long *)(lVar7 + 0x10) - lVar12) >> 3));
          }
        }
      }
    }
    plVar11 = plStack_b30;
    puStack_ae0 = &UNK_0127249f;
    puStack_ad8 = (undefined *)0xc;
    plVar10 = (long *)func_0x0d6c97a0(plStack_b30 + 1,&puStack_ae0);
    if (plVar10 != plVar11 + 2) {
      if ((ulong)*(uint *)(plVar10 + 0xc) == 0xffffffff) {
LAB_05298df2:
        uVar20 = func_0x04931450();
        func_0x041084d6(&DAT_0f7b8fb8);
        puVar6 = param_1 + 0x1a;
        func_0x048f9be0(&plStack_af8);
        func_0x05299070(puStack_b08);
        func_0x05299070(puStack_a70);
        plVar11 = (long *)param_1[0x1b];
        param_1[0x1b] = 0;
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)*puVar6;
          *puVar6 = 0;
        }
        else {
          (**(code **)(*plVar11 + 8))();
          plVar11 = (long *)*puVar6;
          *puVar6 = 0;
        }
        if (plVar11 == (long *)0x0) {
          bVar1 = *pbStack_a40;
        }
        else {
          (**(code **)(*plVar11 + 8))();
          bVar1 = *pbStack_a40;
        }
        if ((bVar1 & 1) == 0) {
          bVar1 = *pbStack_a38;
        }
        else {
          func_0x0412a280(param_1[0x19],param_1[0x17] & 0xfffffffffffffffe);
          bVar1 = *pbStack_a38;
        }
        if ((bVar1 & 1) != 0) {
          func_0x0412a280(param_1[0x16],param_1[0x14] & 0xfffffffffffffffe);
        }
        lVar7 = *plStack_a30;
        if (lVar7 != 0) {
          param_1[0x11] = lVar7;
          func_0x0412a280(lVar7,param_1[0x12] - lVar7);
        }
        func_0x0cb3ae10(param_1);
        func_0x0eee2d70(uVar20);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puStack_a98 = &uStack_b00;
      plVar11 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar10 + 0xc) * 8))
                                  (&puStack_a98,plVar10 + 7);
      if (plVar11 != (long *)0x0) {
        cVar4 = (**(code **)(*plVar11 + 0x30))(plVar11);
        if (cVar4 == '\t') {
          puStack_ae0 = &UNK_0127249f;
          puStack_ad8 = (undefined *)0xc;
          lVar12 = func_0x0d6c9880(plStack_b30 + 1,&puStack_ae0);
          lVar7 = 0;
          if (*(int *)(lVar12 + 0x60) == 9) {
            lVar7 = lVar12 + 0x38;
          }
          lVar12 = *(long *)(lVar7 + 8);
          if (0 < (int)((ulong)(*(long *)(lVar7 + 0x10) - lVar12) >> 3)) {
            lVar17 = 0;
            auStack_a88._0_8_ = lVar7;
            do {
              plVar11 = *(long **)(lVar12 + lVar17 * 8);
              if (plVar11 != (long *)0x0) {
                cVar4 = (**(code **)(*plVar11 + 0x30))(plVar11);
                if (cVar4 == '\n') {
                  puStack_ae0 = &UNK_0133d2bf;
                  puStack_ad8 = (undefined *)0x1;
                  plVar10 = plVar11 + 1;
                  plVar13 = (long *)func_0x0d6c97a0(plVar10,&puStack_ae0);
                  if ((plVar13 == plVar11 + 2) || ((int)plVar13[0xc] != 3)) {
                    iVar16 = 0;
                  }
                  else {
                    iVar16 = (int)plVar13[8] >> 4;
                  }
                  puStack_ae0 = &UNK_01444400;
                  puStack_ad8 = (undefined *)0x1;
                  func_0x0d6c97a0(plVar10,&puStack_ae0);
                  puStack_ae0 = &UNK_01491a16;
                  puStack_ad8 = (undefined *)0x1;
                  plVar10 = (long *)func_0x0d6c97a0(plVar10,&puStack_ae0);
                  if ((plVar10 == plVar11 + 2) || ((int)plVar10[0xc] != 3)) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = (int)plVar10[8] >> 4;
                  }
                  uStack_b00 = CONCAT44(iVar5,iVar16);
                  lStack_a90 = func_0x052bf470(puStack_b08,&uStack_b00);
                  lStack_a90 = lStack_a90 + 0x18;
                  puStack_a98 = (undefined8 *)&UNK_0ef9fe28;
                  puStack_ae0 = (undefined *)((ulong)puStack_ae0 & 0xffffffffffff0000);
                  func_0x0d6ba180(&puStack_ae0,plVar11,&puStack_a98,0);
                  lVar7 = auStack_a88._0_8_;
                  if (((ulong)puStack_ae0 & 1) != 0) {
                    func_0x0412a280(uStack_ad0,(ulong)puStack_ae0 & 0xfffffffffffffffe);
                  }
                }
              }
              lVar17 = lVar17 + 1;
              lVar12 = *(long *)(lVar7 + 8);
            } while (lVar17 < (int)((ulong)(*(long *)(lVar7 + 0x10) - lVar12) >> 3));
          }
        }
      }
    }
    plVar11 = plStack_b30;
    plStack_b30 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    uVar20 = uStack_a28;
    if (((ulong)uStack_b28 & 1) != 0) {
      func_0x0412a280(puStack_b18,(ulong)uStack_b28 & 0xfffffffffffffffe);
      uVar20 = uStack_a28;
    }
  }
LAB_05298585:
  uStack_a28 = uVar20;
  if (plStack_af8 != (long *)0x0) {
    func_0x0ee56810(&pbStack_a18,&plStack_af8);
    if (bStack_9d8 == 0) {
      func_0x048e6d60(&pbStack_a18);
    }
  }
  plVar11 = plStack_af0;
  plStack_af0 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = plStack_af8;
  plStack_af8 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  return;
}


