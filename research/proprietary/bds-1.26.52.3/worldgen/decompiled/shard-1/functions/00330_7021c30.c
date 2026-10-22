/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7121c30 (ELF vaddr 0x7021c30)
 * Label: caller-of-callee
 * Body:  [[07121c30, 071225e1] [071225f0, 0712266d] [07122670, 07122fac] [0712300c, 0712301d] [071230b4, 071230c5] [0712318c, 071231ec]]
 * Ghidra: FUN_07121c30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07121c30(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  byte *pbVar17;
  undefined1 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  long *plVar21;
  long *plVar22;
  bool bVar23;
  bool bVar24;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  byte bStack_298;
  byte bStack_297;
  undefined2 uStack_296;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  undefined1 uStack_269;
  undefined1 auStack_268 [16];
  byte *pbStack_258;
  byte bStack_250;
  byte bStack_24f;
  undefined2 uStack_24e;
  undefined4 uStack_24c;
  undefined2 uStack_248;
  undefined2 uStack_246;
  undefined4 uStack_244;
  undefined2 uStack_240;
  undefined6 uStack_23e;
  undefined *puStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f0;
  long *plStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_178;
  undefined7 uStack_177;
  undefined8 uStack_168;
  undefined1 auStack_158 [80];
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  byte bStack_e8;
  undefined4 uStack_e7;
  undefined1 uStack_e3;
  undefined2 uStack_e2;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined1 uStack_cf;
  undefined6 uStack_ce;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined1 *puStack_38;
  
  bStack_298 = 0;
  bStack_297 = 0;
  plStack_1e8 = param_1;
  cVar6 = func_0x04865100(*(undefined8 *)(param_2 + 0x10),&UNK_01447599);
  if (cVar6 == '\0') {
    func_0x07123aa0(1,3,*(undefined4 *)(param_2 + 8),&UNK_012c1436);
    goto LAB_07122e98;
  }
  uVar8 = func_0x048648e0(*(undefined8 *)(param_2 + 0x10),&UNK_01447599);
  func_0x04863480(auStack_268,uVar8);
  cVar6 = func_0x04865490(auStack_268);
  if (cVar6 == '\0') {
    cVar6 = func_0x04865100(auStack_268,&UNK_01410416);
    if (cVar6 == '\0') {
      func_0x07123910(1,3,*(undefined4 *)(param_2 + 8),&UNK_014305f9);
      goto LAB_07122e75;
    }
    cVar6 = func_0x04865100(auStack_268,&UNK_011bc44b);
    if (cVar6 == '\0') {
LAB_07121dbb:
      uVar8 = func_0x04864680(auStack_268,&UNK_01410416);
      pbStack_258 = (byte *)((ulong)pbStack_258 & 0xffffffffffff0000);
      func_0x04863cb0(&uStack_1d8,uVar8,&pbStack_258);
      if ((bStack_298 & 1) != 0) {
        func_0x0412a280(pbStack_288,
                        CONCAT44(uStack_294,CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298))) &
                        0xfffffffffffffffe);
      }
      pbStack_288 = uStack_1c8;
      bStack_298 = (byte)uStack_1d8;
      bStack_297 = (byte)((ulong)uStack_1d8 >> 8);
      uStack_296 = (undefined2)((ulong)uStack_1d8 >> 0x10);
      uStack_294 = uStack_1d8._4_4_;
      uStack_290 = (undefined4)uStack_1d0;
      uStack_28c = uStack_1d0._4_4_;
      uStack_1d8 = (byte *)((ulong)uStack_1d8 & 0xffffffffffff0000);
      if (((ulong)pbStack_258 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_244,CONCAT22(uStack_246,uStack_248)),
                        (ulong)pbStack_258 & 0xfffffffffffffffe);
      }
      uStack_1d8 = (byte *)0x0;
      if ((bStack_298 & 1) == 0) {
        pbStack_1c0 = pbStack_288;
        uStack_1d0 = CONCAT44(uStack_294,CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298)));
        uStack_1c8 = (byte *)CONCAT44(uStack_28c,uStack_290);
      }
      else {
        func_0x0412e5e0(&uStack_1d0,pbStack_288,CONCAT44(uStack_28c,uStack_290));
      }
      puStack_1b8 = (undefined8 *)0x0;
      if ((uStack_1d0 & 1) == 0) {
        if ((byte)uStack_1d0 >> 1 != 0) goto LAB_071220ab;
LAB_071222a6:
        pbVar19 = (byte *)0x0;
      }
      else {
        if (uStack_1c8 == (byte *)0x0) goto LAB_071222a6;
LAB_071220ab:
        if ((uStack_1d0 & 1) == 0) {
          pbVar20 = (byte *)((long)&uStack_1d0 + 1);
          if (pbVar20 != (byte *)0x0) goto LAB_071221c7;
          goto LAB_071222a6;
        }
        pbVar20 = pbStack_1c0;
        if (pbStack_1c0 == (byte *)0x0) goto LAB_071222a6;
LAB_071221c7:
        if (*pbVar20 == 0) goto LAB_071222a6;
        pbVar19 = (byte *)0xcbf29ce484222325;
        uVar9 = func_0x0eee2e90(pbVar20);
        if (uVar9 != 0) {
          uVar13 = (ulong)((uint)uVar9 & 7);
          if (7 < uVar9) {
            uVar9 = uVar9 & 0xfffffffffffffff8;
            do {
              pbVar19 = (byte *)(((((((((long)pbVar19 * 0x100000001b3 ^ (ulong)*pbVar20) *
                                       0x100000001b3 ^ (ulong)pbVar20[1]) * 0x100000001b3 ^
                                     (ulong)pbVar20[2]) * 0x100000001b3 ^ (ulong)pbVar20[3]) *
                                    0x100000001b3 ^ (ulong)pbVar20[4]) * 0x100000001b3 ^
                                  (ulong)pbVar20[5]) * 0x100000001b3 ^ (ulong)pbVar20[6]) *
                                 0x100000001b3 ^ (ulong)pbVar20[7]);
              pbVar20 = pbVar20 + 8;
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
          }
          if (uVar13 != 0) {
            uVar9 = 0;
            do {
              pbVar19 = (byte *)((long)pbVar19 * 0x100000001b3 ^ (ulong)pbVar20[uVar9]);
              uVar9 = uVar9 + 1;
            } while (uVar13 != uVar9);
          }
        }
      }
      uStack_1d8 = pbVar19;
      lVar10 = func_0x0cc422f0(&DAT_0f6ff9e0,&uStack_1d8,0,0,0);
      if ((uStack_1d0 & 1) != 0) {
        func_0x0412a280(pbStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
      }
      if (lVar10 == 0) {
        uStack_1d8 = &bStack_297;
        if ((bStack_298 & 1) != 0) {
          uStack_1d8 = pbStack_288;
        }
        func_0x07123780(1,3,*(undefined4 *)(param_2 + 8),&UNK_0125b8d6,&uStack_1d8);
        goto LAB_07122e75;
      }
      goto LAB_071222fa;
    }
    uVar8 = func_0x04864680(auStack_268,&UNK_011bc44b);
    cVar6 = func_0x04864220(uVar8);
    if (cVar6 != '\0') goto LAB_07121dbb;
    uStack_1d8 = (byte *)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = (byte *)0x0;
    pbStack_1c0 = &UNK_0f47e0b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    bStack_d0 = 0;
    uStack_cf = 0;
    puStack_1b8 = &uStack_1b0;
    func_0x04aa85f0(plStack_1e8[0x32],*(undefined4 *)(param_2 + 8),auStack_268,&uStack_1d8,
                    param_2 + 0x70);
    if ((bStack_d0 & 1) != 0) {
      func_0x0412a280(uStack_c0,
                      CONCAT62(uStack_ce,CONCAT11(uStack_cf,bStack_d0)) & 0xfffffffffffffffe);
    }
    bStack_e8 = 8;
    uStack_e7 = 0x656d616e;
    uStack_e3 = 0;
    if (((ulong)uStack_1d8 & 1) == 0) {
      pbStack_f8 = uStack_1c8;
      uStack_108 = uStack_1d8;
      uStack_100 = uStack_1d0;
    }
    else {
      func_0x0412e5e0(&uStack_108,uStack_1c8,uStack_1d0);
    }
    pbStack_258 = &bStack_e8;
    lVar10 = func_0x0d6c9580(&puStack_1b8,pbStack_258,&UNK_01563a4f,&pbStack_258,&pbStack_b8);
    if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
      (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))(&pbStack_258,lVar10 + 0x38)
      ;
    }
    pbVar20 = pbStack_f8;
    uVar2 = (undefined4)uStack_108;
    uVar3 = uStack_108._4_4_;
    uVar4 = (undefined4)uStack_100;
    uVar5 = uStack_100._4_4_;
    uStack_108 = (byte *)0x0;
    uStack_100 = 0;
    pbStack_f8 = (byte *)0x0;
    *(undefined **)(lVar10 + 0x38) = &UNK_0f47e5e8;
    *(undefined4 *)(lVar10 + 0x40) = uVar2;
    *(undefined4 *)(lVar10 + 0x44) = uVar3;
    *(undefined4 *)(lVar10 + 0x48) = uVar4;
    *(undefined4 *)(lVar10 + 0x4c) = uVar5;
    *(byte **)(lVar10 + 0x50) = pbVar20;
    *(undefined4 *)(lVar10 + 0x60) = 8;
    if ((bStack_e8 & 1) != 0) {
      func_0x0412a280(uStack_d8,
                      CONCAT26(uStack_e2,CONCAT15(uStack_e3,CONCAT41(uStack_e7,bStack_e8))) &
                      0xfffffffffffffffe);
    }
    if ((bStack_298 & 1) == 0) {
      if (((ulong)uStack_1d8 & 1) == 0) {
        pbStack_288 = uStack_1c8;
        bStack_297 = (byte)((ulong)uStack_1d8 >> 8);
        uStack_296 = (undefined2)((ulong)uStack_1d8 >> 0x10);
        uStack_294 = uStack_1d8._4_4_;
        uStack_290 = (undefined4)uStack_1d0;
        uStack_28c = uStack_1d0._4_4_;
        bStack_298 = (byte)uStack_1d8;
      }
      else {
        func_0x04885070(&bStack_298,uStack_1c8,uStack_1d0);
      }
    }
    else {
      uVar9 = (ulong)((byte)uStack_1d8 >> 1);
      pbVar20 = (byte *)((long)&uStack_1d8 + 1);
      if (((ulong)uStack_1d8 & 1) != 0) {
        uVar9 = uStack_1d0;
        pbVar20 = uStack_1c8;
      }
      func_0x04885120(&bStack_298,pbVar20,uVar9);
    }
    pbStack_258 = &UNK_011bc44b;
    bStack_250 = 6;
    bStack_24f = 0;
    uStack_24e = 0;
    uStack_24c = 0;
    puVar11 = (undefined8 *)func_0x0d6c9880(&puStack_1b8,&pbStack_258);
    if ((puVar11 == &uStack_1b0) || (*(int *)(puVar11 + 0xc) != 10)) {
LAB_07122e68:
      func_0x04aa8840(&uStack_1d8);
      goto LAB_07122e75;
    }
    uVar8 = func_0x04864680(auStack_268,&UNK_011bc44b);
    func_0x04865230(&pbStack_b8,uVar8);
    func_0x0ee25150(&pbStack_258,&bStack_298);
    lVar10 = func_0x0cc422f0(&DAT_0f6ff9e0,&pbStack_258,0,0,0);
    if ((bStack_250 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_23e,uStack_240),
                      CONCAT44(uStack_24c,CONCAT22(uStack_24e,CONCAT11(bStack_24f,bStack_250))) &
                      0xfffffffffffffffe);
    }
    if (lVar10 == 0) {
      pbStack_258 = &bStack_297;
      if ((bStack_298 & 1) != 0) {
        pbStack_258 = pbStack_288;
      }
      func_0x07123780(1,3,*(undefined4 *)(param_2 + 8),&UNK_0125b8d6,&pbStack_258);
      func_0x04886070(&pbStack_b8);
      goto LAB_07122e68;
    }
    lStack_1f0 = param_2;
    plVar22 = *(long **)(lVar10 + 0x1e8);
    plVar1 = *(long **)(lVar10 + 0x1f0);
    if (plVar22 == plVar1) {
      pbVar20 = (byte *)0x0;
      pbStack_2a0 = (byte *)0x0;
      pbStack_2a8 = (byte *)0x0;
    }
    else {
      puStack_40 = puVar11 + 8;
      puStack_48 = puVar11 + 9;
      pbVar20 = (byte *)0x0;
      pbStack_2a0 = (byte *)0x0;
      pbStack_2a8 = (byte *)0x0;
      do {
        while (lVar10 = *plVar22, lVar10 == 0) {
          plVar22 = plVar22 + 1;
          if (plVar22 == plVar1) goto LAB_07122f15;
        }
        pbStack_1e0 = (byte *)CONCAT62(uStack_ae,uStack_b0);
        pbVar19 = pbStack_b8;
        pbVar17 = pbStack_2a8;
        if (pbStack_b8 != pbStack_1e0) {
          do {
            pbStack_278 = pbVar20;
            pbStack_258 = (byte *)0x0;
            pbStack_280 = pbVar19;
            if ((*pbVar19 & 1) == 0) {
              uStack_240 = (undefined2)*(undefined8 *)(pbVar19 + 0x10);
              uStack_23e = (undefined6)((ulong)*(undefined8 *)(pbVar19 + 0x10) >> 0x10);
              uVar2 = *(undefined4 *)pbVar19;
              bStack_250 = (byte)uVar2;
              bStack_24f = (byte)((uint)uVar2 >> 8);
              uStack_24e = (undefined2)((uint)uVar2 >> 0x10);
              uStack_24c = *(undefined4 *)(pbVar19 + 4);
              uStack_248 = (undefined2)*(undefined4 *)(pbVar19 + 8);
              uStack_246 = (undefined2)((uint)*(undefined4 *)(pbVar19 + 8) >> 0x10);
              uStack_244 = *(undefined4 *)(pbVar19 + 0xc);
            }
            else {
              func_0x0412e5e0(&bStack_250,*(undefined8 *)(pbVar19 + 0x10),
                              *(undefined8 *)(pbVar19 + 8));
            }
            puStack_238 = (undefined *)0x0;
            if ((bStack_250 & 1) == 0) {
              uVar9 = (ulong)(bStack_250 >> 1);
            }
            else {
              uVar9 = CONCAT44(uStack_244,CONCAT22(uStack_246,uStack_248));
            }
            if (uVar9 == 0) {
LAB_07122aa6:
              pbStack_258 = (byte *)0x0;
            }
            else {
              pbVar20 = &bStack_24f;
              if ((bStack_250 & 1) != 0) {
                pbVar20 = (byte *)CONCAT62(uStack_23e,uStack_240);
              }
              if ((pbVar20 == (byte *)0x0) || (*pbVar20 == 0)) goto LAB_07122aa6;
              uVar9 = func_0x0eee2e90(pbVar20);
              pbStack_258 = (byte *)0xcbf29ce484222325;
              if (uVar9 != 0) {
                if (7 < uVar9) {
                  uVar13 = uVar9 & 0xfffffffffffffff8;
                  do {
                    pbStack_258 = (byte *)(((((((((long)pbStack_258 * 0x100000001b3 ^
                                                 (ulong)*pbVar20) * 0x100000001b3 ^
                                                (ulong)pbVar20[1]) * 0x100000001b3 ^
                                               (ulong)pbVar20[2]) * 0x100000001b3 ^
                                              (ulong)pbVar20[3]) * 0x100000001b3 ^ (ulong)pbVar20[4]
                                             ) * 0x100000001b3 ^ (ulong)pbVar20[5]) * 0x100000001b3
                                           ^ (ulong)pbVar20[6]) * 0x100000001b3 ^ (ulong)pbVar20[7])
                    ;
                    pbVar20 = pbVar20 + 8;
                    uVar13 = uVar13 - 8;
                  } while (uVar13 != 0);
                }
                if ((uVar9 & 7) != 0) {
                  uVar13 = 0;
                  do {
                    pbStack_258 = (byte *)((long)pbStack_258 * 0x100000001b3 ^
                                          (ulong)pbVar20[uVar13]);
                    uVar13 = uVar13 + 1;
                  } while (((uint)uVar9 & 7) != uVar13);
                }
              }
            }
            lVar12 = func_0x0cbb0450(0xf6fb168,&pbStack_258);
            if (lVar12 == 0) {
              plVar21 = (long *)0x0;
            }
            else {
              plVar21 = *(long **)(lVar12 + 0x38);
            }
            if ((bStack_250 & 1) != 0) {
              func_0x0412a280(CONCAT62(uStack_23e,uStack_240),
                              CONCAT44(uStack_24c,
                                       CONCAT22(uStack_24e,CONCAT11(bStack_24f,bStack_250))) &
                              0xfffffffffffffffe);
            }
            pbVar20 = pbStack_278;
            if (plVar21 == (long *)0x0) {
LAB_07122ed9:
              pbVar19 = &bStack_297;
              if ((bStack_298 & 1) != 0) {
                pbVar19 = pbStack_288;
              }
              if ((*pbStack_280 & 1) == 0) {
                pbVar17 = pbStack_280 + 1;
              }
              else {
                pbVar17 = *(byte **)(pbStack_280 + 0x10);
              }
              func_0x07123f90(*(undefined4 *)(lStack_1f0 + 8),pbVar19,pbVar17);
              goto LAB_07122f15;
            }
            lVar12 = *(long *)(lVar10 + 0x68);
            uVar9 = plVar21[1];
            lVar14 = *(long *)(lVar12 + 0x1b0);
            if (lVar14 == 0) {
LAB_07122b39:
              plVar15 = *(long **)(lVar12 + 0x350);
              while( true ) {
                if (plVar15 == *(long **)(lVar12 + 0x358)) goto LAB_07122ed9;
                if (*(ulong *)(*(long *)(*plVar15 + 8) + 8) == uVar9) break;
                plVar15 = plVar15 + 2;
              }
            }
            else {
              lVar16 = lVar12 + 0x1b0;
              do {
                bVar23 = *(ulong *)(lVar14 + 0x20) < uVar9;
                if (!bVar23) {
                  lVar16 = lVar14;
                }
                lVar14 = *(long *)(lVar14 + (ulong)bVar23 * 8);
              } while (lVar14 != 0);
              if ((lVar16 == lVar12 + 0x1b0) || (uVar9 < *(ulong *)(lVar16 + 0x20)))
              goto LAB_07122b39;
            }
            bVar23 = (*(byte *)(plVar21 + 4) & 1) != 0;
            pbStack_258 = (byte *)((long)plVar21 + 0x21);
            if (bVar23) {
              pbStack_258 = (byte *)plVar21[6];
            }
            uVar9 = (ulong)(*(byte *)(plVar21 + 4) >> 1);
            if (bVar23) {
              uVar9 = plVar21[5];
            }
            bStack_250 = (byte)uVar9;
            bStack_24f = (byte)(uVar9 >> 8);
            uStack_24e = (undefined2)(uVar9 >> 0x10);
            uStack_24c = (undefined4)(uVar9 >> 0x20);
            puVar11 = (undefined8 *)func_0x0d6c97a0(puStack_40,&pbStack_258);
            if (puVar11 == puStack_48) {
LAB_07122f58:
              pbVar20 = pbStack_278;
              if ((*pbStack_280 & 1) == 0) {
                pbVar19 = pbStack_280 + 1;
              }
              else {
                pbVar19 = *(byte **)(pbStack_280 + 0x10);
              }
              pbVar17 = &bStack_297;
              if ((bStack_298 & 1) != 0) {
                pbVar17 = pbStack_288;
              }
              func_0x07123e00(*(undefined4 *)(lStack_1f0 + 8),pbVar19,pbVar17);
              goto LAB_07122f15;
            }
            if ((ulong)*(uint *)(puVar11 + 0xc) == 0xffffffff) {
              FUN_04931450();
              goto LAB_07122f9e;
            }
            puStack_38 = &uStack_269;
            lVar12 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(puVar11 + 0xc) * 8))
                               (&puStack_38,puVar11 + 7);
            if ((lVar12 == 0) ||
               (uVar9 = (**(code **)(*plVar21 + 0x18))(plVar21,lVar12), (uVar9 & 0x100000000) == 0))
            goto LAB_07122f58;
            uVar13 = plVar21[1];
            lVar12 = *(long *)(lVar10 + 0x68);
            lVar14 = *(long *)(lVar12 + 0x1b0);
            if (lVar14 == 0) {
LAB_07122c58:
              for (plVar21 = *(long **)(lVar12 + 0x350); plVar21 != *(long **)(lVar12 + 0x358);
                  plVar21 = plVar21 + 2) {
                puVar11 = (undefined8 *)*plVar21;
                if (*(ulong *)(puVar11[1] + 8) == uVar13) {
                  uVar13 = (**(code **)*puVar11)(puVar11,lVar12,*(ushort *)(lVar10 + 0x128));
                  goto LAB_07122c8c;
                }
              }
              uVar13 = 0;
LAB_07122c8c:
              uVar7 = (uint)uVar13;
              pbVar20 = pbStack_278;
              if ((uVar13 & 0x100000000) == 0) {
                uVar7 = 0;
              }
            }
            else {
              lVar16 = lVar12 + 0x1b0;
              do {
                bVar23 = *(ulong *)(lVar14 + 0x20) < uVar13;
                if (!bVar23) {
                  lVar16 = lVar14;
                }
                lVar14 = *(long *)(lVar14 + (ulong)bVar23 * 8);
              } while (lVar14 != 0);
              if ((lVar16 == lVar12 + 0x1b0) || (uVar13 < *(ulong *)(lVar16 + 0x20)))
              goto LAB_07122c58;
              cVar6 = (char)*(undefined4 *)(lVar16 + 0x2c);
              uVar7 = (uint)(*(ushort *)(lVar10 + 0x128) >>
                            (((char)*(undefined4 *)(lVar16 + 0x30) - cVar6) + 1U & 0x1f)) &
                      0xffffU >> (0x10U - cVar6 & 0x1f);
              pbVar20 = pbStack_278;
            }
            pbStack_278 = pbVar20;
            if (uVar7 != (uint)uVar9) goto LAB_07122e06;
            pbVar19 = pbStack_280 + 0x18;
          } while (pbStack_280 + 0x18 != pbStack_1e0);
        }
        if (pbVar20 < pbStack_2a0) {
          *(long *)pbVar20 = lVar10;
          pbVar20 = pbVar20 + 8;
        }
        else {
          pbStack_278 = pbVar20 + -(long)pbStack_2a8;
          pbStack_1e0 = (byte *)((long)pbStack_278 >> 3);
          pbVar20 = pbStack_1e0 + 1;
          if ((ulong)pbVar20 >> 0x3d != 0) {
LAB_07122fa3:
            uVar8 = func_0x052e7cc0();
            func_0x04886070(&pbStack_b8);
            func_0x04aa8840(&uStack_1d8);
            func_0x04863610(auStack_268);
            if (pbStack_2a8 != (byte *)0x0) goto LAB_071231ad;
            do {
              while ((bStack_298 & 1) != 0) {
                func_0x0412a280(pbStack_288,
                                CONCAT44(uStack_294,
                                         CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298))) &
                                0xfffffffffffffffe);
                uVar8 = _Unwind_Resume(uVar8);
              }
              _Unwind_Resume(uVar8);
LAB_071231ad:
              func_0x0412a280(pbStack_2a8,(long)pbStack_2a0 - (long)pbStack_2a8);
            } while( true );
          }
          uStack_50 = (long)pbStack_2a0 - (long)pbStack_2a8;
          pbVar19 = (byte *)((long)uStack_50 >> 2);
          if ((byte *)((long)uStack_50 >> 2) <= pbVar20) {
            pbVar19 = pbVar20;
          }
          if (0x7ffffffffffffff7 < uStack_50) {
            pbVar19 = (byte *)0x1fffffffffffffff;
          }
          if ((byte *)0x1fffffffffffffff < pbVar19) {
LAB_07122f9e:
            func_0x04882eb0();
            goto LAB_07122fa3;
          }
          pbStack_280 = (byte *)((long)pbVar19 * 8);
          lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (lVar12 == 0) {
            func_0x0eec74c0(pbStack_280,0);
          }
          pbStack_2a0 = (byte *)(lVar12 + (long)pbVar19 * 8);
          *(long *)(pbStack_278 + lVar12) = lVar10;
          pbStack_280 = pbStack_278 + lVar12 + 8;
          pbVar17 = pbStack_278 + (long)pbStack_1e0 * -8 + lVar12;
          memcpy(pbVar17,pbStack_2a8);
          pbVar20 = pbStack_280;
          if (pbStack_2a8 != (byte *)0x0) {
            func_0x0412a280(pbStack_2a8,uStack_50);
            pbVar20 = pbStack_280;
          }
        }
LAB_07122e06:
        pbStack_2a8 = pbVar17;
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar1);
    }
LAB_07122f15:
    func_0x04886070(&pbStack_b8);
    func_0x04aa8840(&uStack_1d8);
    if (pbStack_2a8 != pbVar20) {
      uVar18 = 0;
      lVar10 = 0;
      param_2 = lStack_1f0;
      pbStack_280 = pbVar20;
      goto LAB_07122318;
    }
LAB_07122e7b:
    func_0x04863610(auStack_268);
  }
  else {
    pbStack_258 = (byte *)((ulong)pbStack_258 & 0xffffffffffff0000);
    func_0x04863cb0(&uStack_1d8,auStack_268,&pbStack_258);
    if ((bStack_298 & 1) != 0) {
      func_0x0412a280(pbStack_288,
                      CONCAT44(uStack_294,CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298))) &
                      0xfffffffffffffffe);
    }
    pbStack_288 = uStack_1c8;
    bStack_298 = (byte)uStack_1d8;
    bStack_297 = (byte)((ulong)uStack_1d8 >> 8);
    uStack_296 = (undefined2)((ulong)uStack_1d8 >> 0x10);
    uStack_294 = uStack_1d8._4_4_;
    uStack_290 = (undefined4)uStack_1d0;
    uStack_28c = uStack_1d0._4_4_;
    uStack_1d8 = (byte *)((ulong)uStack_1d8 & 0xffffffffffff0000);
    if (((ulong)pbStack_258 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_244,CONCAT22(uStack_246,uStack_248)),
                      (ulong)pbStack_258 & 0xfffffffffffffffe);
    }
    uStack_1d8 = (byte *)0x0;
    if ((bStack_298 & 1) == 0) {
      pbStack_1c0 = pbStack_288;
      uStack_1d0 = CONCAT44(uStack_294,CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298)));
      uStack_1c8 = (byte *)CONCAT44(uStack_28c,uStack_290);
    }
    else {
      func_0x0412e5e0(&uStack_1d0,pbStack_288,CONCAT44(uStack_28c,uStack_290));
    }
    puStack_1b8 = (undefined8 *)0x0;
    if ((uStack_1d0 & 1) == 0) {
      if ((byte)uStack_1d0 >> 1 != 0) goto LAB_07121eda;
LAB_07121fd6:
      pbVar19 = (byte *)0x0;
    }
    else {
      if (uStack_1c8 == (byte *)0x0) goto LAB_07121fd6;
LAB_07121eda:
      if ((uStack_1d0 & 1) == 0) {
        pbVar20 = (byte *)((long)&uStack_1d0 + 1);
        if (pbVar20 != (byte *)0x0) goto LAB_07121f01;
        goto LAB_07121fd6;
      }
      pbVar20 = pbStack_1c0;
      if (pbStack_1c0 == (byte *)0x0) goto LAB_07121fd6;
LAB_07121f01:
      if (*pbVar20 == 0) goto LAB_07121fd6;
      pbVar19 = (byte *)0xcbf29ce484222325;
      uVar9 = func_0x0eee2e90(pbVar20);
      if (uVar9 != 0) {
        uVar13 = (ulong)((uint)uVar9 & 7);
        if (7 < uVar9) {
          uVar9 = uVar9 & 0xfffffffffffffff8;
          do {
            pbVar19 = (byte *)(((((((((long)pbVar19 * 0x100000001b3 ^ (ulong)*pbVar20) *
                                     0x100000001b3 ^ (ulong)pbVar20[1]) * 0x100000001b3 ^
                                   (ulong)pbVar20[2]) * 0x100000001b3 ^ (ulong)pbVar20[3]) *
                                  0x100000001b3 ^ (ulong)pbVar20[4]) * 0x100000001b3 ^
                                (ulong)pbVar20[5]) * 0x100000001b3 ^ (ulong)pbVar20[6]) *
                               0x100000001b3 ^ (ulong)pbVar20[7]);
            pbVar20 = pbVar20 + 8;
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
        }
        if (uVar13 != 0) {
          uVar9 = 0;
          do {
            pbVar19 = (byte *)((long)pbVar19 * 0x100000001b3 ^ (ulong)pbVar20[uVar9]);
            uVar9 = uVar9 + 1;
          } while (uVar13 != uVar9);
        }
      }
    }
    uStack_1d8 = pbVar19;
    lVar10 = func_0x0cc422f0(&DAT_0f6ff9e0,&uStack_1d8,0,0,0);
    if ((uStack_1d0 & 1) != 0) {
      func_0x0412a280(pbStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
    }
    if (lVar10 == 0) {
      uStack_1d8 = &bStack_297;
      if ((bStack_298 & 1) != 0) {
        uStack_1d8 = pbStack_288;
      }
      func_0x07123780(1,3,*(undefined4 *)(param_2 + 8),&UNK_0125b8d6,&uStack_1d8);
LAB_07122e75:
      pbStack_2a0 = (byte *)0x0;
      pbStack_2a8 = (byte *)0x0;
      goto LAB_07122e7b;
    }
LAB_071222fa:
    lVar10 = *(long *)(lVar10 + 0x200);
    uVar18 = 1;
    pbStack_280 = (byte *)0x0;
    pbStack_2a0 = (byte *)0x0;
    pbStack_2a8 = (byte *)0x0;
LAB_07122318:
    func_0x04863610(auStack_268);
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    pbStack_258 = (byte *)0x0;
    bStack_250 = 0;
    bStack_24f = 0;
    uStack_24e = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_246 = 0;
    uStack_244 = 0;
    uStack_240 = 0;
    puStack_238 = &UNK_0f299f40;
    cVar6 = func_0x04865100(*(undefined8 *)(param_2 + 0x10),&DAT_01329750);
    if (cVar6 == '\0') {
      bVar23 = false;
    }
    else {
      uVar8 = func_0x048648e0(*(undefined8 *)(param_2 + 0x10),&DAT_01329750);
      func_0x0bf0da90(uVar8,&pbStack_258,0);
      if (((ulong)pbStack_258 & 1) == 0) {
        uVar9 = (ulong)pbStack_258 >> 1 & 0x7f;
      }
      else {
        uVar9 = CONCAT44(uStack_24c,CONCAT22(uStack_24e,CONCAT11(bStack_24f,bStack_250)));
      }
      bVar23 = uVar9 != 0;
    }
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    pbStack_b8 = (byte *)0x0;
    uStack_b0 = 0;
    uStack_ae = 0;
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a0 = 0;
    puStack_98 = &UNK_0f299f40;
    cVar6 = func_0x04865100(*(undefined8 *)(param_2 + 0x10),&DAT_0128e9e5);
    if (cVar6 == '\0') {
      if (bVar23 == false) goto LAB_07122527;
      bVar24 = false;
LAB_07122467:
      if (lVar10 == 0) {
        if (pbStack_2a8 != pbStack_280) {
          plStack_1e8 = plStack_1e8 + 0x2a;
          pbVar20 = pbStack_2a8;
          do {
            func_0x0728f790(&uStack_1d8,*(undefined8 *)pbVar20,bVar23,bVar24,uVar18,&pbStack_258,
                            &pbStack_b8);
            if (*plStack_1e8 != 0) {
              (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8,param_2,&uStack_1d8);
            }
            func_0x049d2400(auStack_158);
            if ((bStack_178 & 1) == 0) {
              func_0x049d2400(&puStack_1b8);
            }
            else {
              func_0x0412a280(uStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
              func_0x049d2400(&puStack_1b8);
            }
            if (((ulong)uStack_1d8 & 1) != 0) {
              func_0x0412a280(uStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
            }
            pbVar20 = pbVar20 + 8;
          } while (pbVar20 != pbStack_280);
        }
      }
      else {
        func_0x0728f790(&uStack_1d8,lVar10,bVar23,bVar24,uVar18,&pbStack_258,&pbStack_b8);
        if (plStack_1e8[0x2a] != 0) {
          (**(code **)(plStack_1e8[0x2a] + 0x10))(plStack_1e8 + 0x2a,param_2,&uStack_1d8);
        }
        func_0x049d2400(auStack_158);
        if ((bStack_178 & 1) != 0) {
          func_0x0412a280(uStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
        }
        func_0x049d2400(&puStack_1b8);
        if (((ulong)uStack_1d8 & 1) != 0) {
          func_0x0412a280(uStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
        }
      }
    }
    else {
      uVar8 = func_0x048648e0(*(undefined8 *)(param_2 + 0x10),&DAT_0128e9e5);
      func_0x0bf0da90(uVar8,&pbStack_b8,0);
      if (((ulong)pbStack_b8 & 1) == 0) {
        uVar9 = (ulong)pbStack_b8 >> 1 & 0x7f;
      }
      else {
        uVar9 = CONCAT62(uStack_ae,uStack_b0);
      }
      bVar24 = uVar9 != 0;
      if (bVar23 != false || bVar24) goto LAB_07122467;
LAB_07122527:
      pbVar20 = &bStack_297;
      if ((bStack_298 & 1) != 0) {
        pbVar20 = pbStack_288;
      }
      func_0x07123c30(*(undefined4 *)(param_2 + 8),pbVar20);
    }
    func_0x049d2400(&puStack_98);
    if (((ulong)pbStack_b8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_a6,uStack_a8),(ulong)pbStack_b8 & 0xfffffffffffffffe);
    }
    func_0x049d2400(&puStack_238);
    if (((ulong)pbStack_258 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_244,CONCAT22(uStack_246,uStack_248)),
                      (ulong)pbStack_258 & 0xfffffffffffffffe);
    }
  }
  if (pbStack_2a8 != (byte *)0x0) {
    func_0x0412a280(pbStack_2a8,(long)pbStack_2a0 - (long)pbStack_2a8);
  }
LAB_07122e98:
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(pbStack_288,
                    CONCAT44(uStack_294,CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298))) &
                    0xfffffffffffffffe);
  }
  return;
}


