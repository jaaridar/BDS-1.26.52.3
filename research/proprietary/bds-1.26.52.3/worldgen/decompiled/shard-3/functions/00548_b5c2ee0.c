/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6c2ee0 (ELF vaddr 0xb5c2ee0)
 * Label: callee2-of:0xb5c3f10
 * Body:  [[0b6c2ee0, 0b6c30bd] [0b6c30c0, 0b6c3339] [0b6c3340, 0b6c3435] [0b6c3440, 0b6c3552] [0b6c3560, 0b6c397c] [0b6c3980, 0b6c3bd7] [0b6c3be0, 0b6c3c39]]
 * Ghidra: FUN_0b6c2ee0
 */


undefined8 FUN_0b6c2ee0(long param_1,undefined8 param_2,short param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong *puVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong *puStack_138;
  byte bStack_130;
  undefined1 uStack_12f;
  undefined6 uStack_12e;
  byte *pbStack_128;
  ulong *puStack_120;
  undefined1 auStack_118 [8];
  byte bStack_110;
  undefined1 uStack_10f;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulong *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  byte bStack_d0;
  undefined1 uStack_cf;
  undefined6 uStack_ce;
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  byte bStack_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulong *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined1 auVar13 [8];
  
  cVar5 = func_0x04865490(param_2);
  if (cVar5 == '\0') {
    cVar5 = func_0x04864290(param_2);
    if ((cVar5 == '\0') || (cVar5 = func_0x04865100(param_2,&UNK_01623aad), cVar5 == '\0')) {
      cVar5 = func_0x04864290(param_2);
      if ((cVar5 == '\0') || (cVar5 = func_0x04865100(param_2,&UNK_01623ab2), cVar5 == '\0')) {
        func_0x048654e0(auStack_118,param_2);
        if (((ulong)auStack_118 & 1) == 0) {
          uStack_148 = (ulong *)(auStack_118 + 1);
        }
        else {
          uStack_148 = (ulong *)CONCAT44(uStack_104,uStack_108);
        }
        func_0x0b6c9050(1,3,0x11,&UNK_012e628b,&uStack_148);
LAB_0b6c37c9:
        if (((ulong)auStack_118 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_104,uStack_108),(ulong)auStack_118 & 0xfffffffffffffffe);
        }
LAB_0b6c37e3:
        *(long *)param_1 = param_1;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar7 = func_0x0cc41880(0xf6ff9e0,param_1 + 8);
        *(undefined1 *)(param_1 + 0x30) = uVar7;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 3;
        *(undefined1 *)(param_1 + 0x7c) = 1;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined2 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        LOCK();
        uVar10 = *(undefined8 *)(param_1 + 0xa0);
        *(undefined8 *)(param_1 + 0xa0) = 0;
        UNLOCK();
        return uVar10;
      }
      uVar10 = func_0x04864680(param_2,&UNK_01623ab2);
      cVar5 = func_0x04865490(uVar10);
      if ((cVar5 != '\0') && (cVar5 = func_0x04865100(param_2,&UNK_01623ab7), cVar5 != '\0')) {
        uStack_58 = func_0x04864680(param_2,&UNK_01623ab7);
        uStack_148 = (ulong *)0x0;
        uStack_140 = (ulong *)0x0;
        puStack_138 = (ulong *)0x0;
        func_0x04865230(&bStack_130,uStack_58);
        pbVar17 = (byte *)CONCAT62(uStack_12e,CONCAT11(uStack_12f,bStack_130));
        pbStack_60 = pbStack_128;
        lVar4 = param_1;
        if (pbVar17 != pbStack_128) {
          do {
            lStack_68 = lVar4;
            uStack_80 = uVar10;
            func_0x04863060(auStack_78,0);
            func_0x04864e50(auStack_118,uStack_58,pbVar17,auStack_78);
            func_0x04863790(auStack_78,auStack_118);
            func_0x04863610(auStack_118);
            cVar5 = func_0x04863800(auStack_78);
            if (cVar5 == '\x01') {
              uVar8 = func_0x04863e00(auStack_78,0);
LAB_0b6c3205:
              uVar12 = (ulong)uVar8 | 0x200000000;
LAB_0b6c32be:
              uStack_b0 = 0;
              uVar10 = 0;
              uStack_b8 = 0;
              uVar9 = 0;
              uStack_a8 = 0;
              if ((*pbVar17 & 1) == 0) goto LAB_0b6c32f1;
LAB_0b6c31d5:
              uStack_a8 = 0;
              func_0x0412e5e0(&bStack_a0,*(undefined8 *)(pbVar17 + 0x10),
                              *(undefined8 *)(pbVar17 + 8));
            }
            else {
              if (cVar5 != '\x04') {
                if (cVar5 == '\x05') {
                  bVar6 = func_0x04863ff0(auStack_78,0);
                  uVar8 = (uint)bVar6;
                  goto LAB_0b6c3205;
                }
                bStack_d0 = 0;
                uStack_cf = 0;
                FUN_04863cb0(auStack_118,uStack_80,&bStack_d0);
                auVar13 = auStack_118;
                puVar14 = (undefined1 *)CONCAT44(uStack_104,uStack_108);
                bVar6 = *pbVar17;
                pbVar16 = *(byte **)(pbVar17 + 0x10);
                cVar5 = func_0x04863800(auStack_78);
                if ((bVar6 & 1) == 0) {
                  pbVar16 = pbVar17 + 1;
                }
                if (((ulong)auVar13 & 1) == 0) {
                  puVar14 = auStack_118 + 1;
                }
                func_0x0b6c8e70(puVar14,pbVar16,(int)cVar5);
                if (((ulong)auStack_118 & 1) != 0) {
                  func_0x0412a280(CONCAT44(uStack_104,uStack_108),
                                  (ulong)auStack_118 & 0xfffffffffffffffe);
                }
                param_1 = lStack_68;
                if ((bStack_d0 & 1) != 0) {
                  func_0x0412a280(puStack_c0,
                                  CONCAT62(uStack_ce,CONCAT11(uStack_cf,bStack_d0)) &
                                  0xfffffffffffffffe);
                }
                uVar12 = 0;
                goto LAB_0b6c32be;
              }
              auStack_118 = (undefined1  [8])((ulong)auStack_118 & 0xffffffffffff0000);
              FUN_04863cb0(&uStack_48,auStack_78,auStack_118);
              uVar10 = uStack_40;
              uVar9 = CONCAT62(uStack_46,uStack_48);
              uStack_b0 = uStack_38;
              uStack_48 = 0;
              if (((ulong)auStack_118 & 1) != 0) {
                func_0x0412a280(CONCAT44(uStack_104,uStack_108),
                                (ulong)auStack_118 & 0xfffffffffffffffe);
              }
              uStack_b8 = uVar9 & 0xffffffffffffff00;
              uVar12 = 0x100000000;
              uStack_a8 = 0;
              if ((*pbVar17 & 1) != 0) goto LAB_0b6c31d5;
LAB_0b6c32f1:
              uStack_a8 = 0;
              puStack_90 = *(ulong **)(pbVar17 + 0x10);
              uVar1 = *(undefined4 *)pbVar17;
              bStack_a0 = (byte)uVar1;
              uStack_9f = (undefined1)((uint)uVar1 >> 8);
              uStack_9e = (undefined2)((uint)uVar1 >> 0x10);
              uStack_9c = *(undefined4 *)(pbVar17 + 4);
              uStack_98 = *(undefined4 *)(pbVar17 + 8);
              uStack_94 = *(undefined4 *)(pbVar17 + 0xc);
            }
            uStack_88 = 0;
            uStack_50 = uVar9;
            if ((bStack_a0 & 1) == 0) {
              if (bStack_a0 >> 1 != 0) goto LAB_0b6c334d;
LAB_0b6c3440:
              auStack_118 = (undefined1  [8])0x0;
            }
            else {
              if (CONCAT44(uStack_94,uStack_98) == 0) goto LAB_0b6c3440;
LAB_0b6c334d:
              puVar15 = (ulong *)&uStack_9f;
              if ((bStack_a0 & 1) != 0) {
                puVar15 = puStack_90;
              }
              if ((puVar15 == (ulong *)0x0) || ((byte)*puVar15 == 0)) goto LAB_0b6c3440;
              uVar9 = strlen(puVar15);
              auStack_118 = (undefined1  [8])0xcbf29ce484222325;
              if (uVar9 != 0) {
                if (7 < uVar9) {
                  uVar11 = uVar9 & 0xfffffffffffffff8;
                  do {
                    auStack_118 = (undefined1  [8])
                                  (((((((((long)auStack_118 * 0x100000001b3 ^ (ulong)(byte)*puVar15)
                                         * 0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + 1)) *
                                        0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + 2)) *
                                       0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + 3)) *
                                      0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + 4)) *
                                     0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + 5)) *
                                    0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + 6)) *
                                   0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + 7));
                    puVar15 = puVar15 + 1;
                    uVar11 = uVar11 - 8;
                  } while (uVar11 != 0);
                }
                if ((uVar9 & 7) != 0) {
                  uVar11 = 0;
                  do {
                    auStack_118 = (undefined1  [8])
                                  ((long)auStack_118 * 0x100000001b3 ^
                                  (ulong)*(byte *)((long)puVar15 + uVar11));
                    uVar11 = uVar11 + 1;
                  } while (((uint)uVar9 & 7) != uVar11);
                }
              }
            }
            uStack_f8 = 0;
            puStack_100 = puStack_90;
            uVar2 = CONCAT11(uStack_9f,bStack_a0);
            bStack_110 = bStack_a0;
            uStack_10f = uStack_9f;
            uStack_10e = uStack_9e;
            uStack_10c = uStack_9c;
            uStack_108 = uStack_98;
            uStack_104 = uStack_94;
            bStack_a0 = 0;
            uStack_9f = 0;
            uStack_f0 = uStack_b8 | uStack_50 & 0xff;
            uStack_e0 = uStack_b0;
            uStack_d8 = uVar12;
            uStack_a8 = (ulong)auStack_118;
            if (uStack_140 < puStack_138) {
              uStack_140[2] = 0;
              uStack_140[3] = 0;
              *uStack_140 = 0;
              uStack_140[1] = 0;
              uStack_140[4] = 0;
              uStack_140[3] = (ulong)puStack_90;
              uStack_140[1] = CONCAT44(uStack_9c,CONCAT22(uStack_9e,uVar2));
              uStack_140[2] = CONCAT44(uStack_94,uStack_98);
              bStack_110 = 0;
              uStack_10f = 0;
              *uStack_140 = (ulong)auStack_118;
              uStack_140[7] = uStack_b0;
              uStack_f0._4_4_ = (undefined4)(uStack_b8 >> 0x20);
              uStack_e8._0_4_ = (undefined4)uVar10;
              uStack_e8._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
              *(undefined4 *)(uStack_140 + 5) = (undefined4)uStack_f0;
              *(undefined4 *)((long)uStack_140 + 0x2c) = uStack_f0._4_4_;
              *(undefined4 *)(uStack_140 + 6) = (undefined4)uStack_e8;
              *(undefined4 *)((long)uStack_140 + 0x34) = uStack_e8._4_4_;
              uStack_f0 = 0;
              uStack_e8 = 0;
              uStack_e0 = 0;
              uStack_140[8] = uVar12;
              uStack_140 = uStack_140 + 9;
            }
            else {
              uStack_e8 = uVar10;
              uStack_140 = (ulong *)func_0x0b6c91e0(&uStack_148);
              if ((uStack_f0 & 1) != 0) {
                func_0x0412a280(uStack_e0);
              }
              if ((bStack_110 & 1) != 0) {
                func_0x0412a280(puStack_100);
              }
            }
            if ((bStack_a0 & 1) != 0) {
              func_0x0412a280(puStack_90);
            }
            func_0x04863610(auStack_78);
            pbVar17 = pbVar17 + 0x18;
            uVar10 = uStack_80;
            lVar4 = lStack_68;
          } while (pbVar17 != pbStack_60);
          pbVar17 = (byte *)CONCAT62(uStack_12e,CONCAT11(uStack_12f,bStack_130));
        }
        if (pbVar17 != (byte *)0x0) {
          pbVar16 = pbStack_128;
          if (pbVar17 != pbStack_128) {
            do {
              if ((pbVar16[-0x18] & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(pbVar16 + -8),
                                *(ulong *)(pbVar16 + -0x18) & 0xfffffffffffffffe);
              }
              pbVar16 = pbVar16 + -0x18;
            } while (pbVar16 != pbVar17);
            pbVar17 = (byte *)CONCAT62(uStack_12e,CONCAT11(uStack_12f,bStack_130));
          }
          func_0x0412a280(pbVar17,(long)puStack_120 - (long)pbVar17);
        }
        if (uStack_148 == uStack_140) {
          func_0x04160690(&bStack_d0,&UNK_01254d89);
          FUN_04863cb0(&bStack_130,uVar10,&bStack_d0);
          func_0x0ee25150(auStack_118,&bStack_130);
          uVar10 = FUN_0c6e6af0(param_1,auStack_118);
          puVar15 = puStack_120;
          if ((bStack_110 & 1) != 0) {
            uVar10 = func_0x0412a280(puStack_100,
                                     CONCAT44(uStack_10c,
                                              CONCAT22(uStack_10e,CONCAT11(uStack_10f,bStack_110)))
                                     & 0xfffffffffffffffe);
            puVar15 = puStack_120;
          }
          puStack_120 = puStack_c0;
          if ((bStack_130 & 1) != 0) {
            uVar10 = func_0x0412a280(puVar15,CONCAT62(uStack_12e,CONCAT11(uStack_12f,bStack_130)) &
                                             0xfffffffffffffffe);
            puStack_120 = puStack_c0;
          }
          if ((bStack_d0 & 1) != 0) {
            uVar12 = CONCAT62(uStack_ce,CONCAT11(uStack_cf,bStack_d0));
            goto LAB_0b6c3bb3;
          }
        }
        else {
          func_0x04160690(&bStack_130,&UNK_01254d89);
          FUN_04863cb0(auStack_118,uVar10,&bStack_130);
          uVar10 = func_0x0c6e7e00(param_1,auStack_118,&uStack_148);
          if (((ulong)auStack_118 & 1) != 0) {
            uVar10 = func_0x0412a280(CONCAT44(uStack_104,uStack_108),
                                     (ulong)auStack_118 & 0xfffffffffffffffe);
          }
          if ((bStack_130 & 1) != 0) {
            uVar12 = CONCAT62(uStack_12e,CONCAT11(uStack_12f,bStack_130));
LAB_0b6c3bb3:
            uVar10 = func_0x0412a280(puStack_120,uVar12 & 0xfffffffffffffffe);
          }
        }
        puVar15 = uStack_148;
        puStack_120 = uStack_148;
        puVar3 = uStack_140;
        if (uStack_148 == (ulong *)0x0) {
          return uVar10;
        }
        for (; uStack_148 = puStack_120, puVar15 != puVar3; puVar3 = puVar3 + -9) {
          if ((puVar3[-4] & 1) == 0) {
            bVar6 = (byte)puVar3[-8];
          }
          else {
            func_0x0412a280(puVar3[-2],puVar3[-4] & 0xfffffffffffffffe);
            bVar6 = (byte)puVar3[-8];
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar3[-6],puVar3[-8] & 0xfffffffffffffffe);
          }
          puStack_120 = uStack_148;
        }
        uVar12 = (long)puStack_138 - (long)puStack_120;
        uStack_140 = puVar15;
        goto LAB_0b6c3798;
      }
      cVar5 = func_0x04865490(uVar10);
      if (cVar5 == '\0') {
        func_0x048654e0(auStack_118,uVar10);
        if (((ulong)auStack_118 & 1) == 0) {
          uStack_148 = (ulong *)(auStack_118 + 1);
        }
        else {
          uStack_148 = (ulong *)CONCAT44(uStack_104,uStack_108);
        }
        func_0x0a735600(1,3,0x11,&UNK_01384e94,&uStack_148);
        goto LAB_0b6c37c9;
      }
      bStack_130 = 0;
      uStack_12f = 0;
      FUN_04863cb0(&uStack_148,uVar10,&bStack_130);
      auStack_118 = (undefined1  [8])0x0;
      if (((ulong)uStack_148 & 1) == 0) {
        puStack_100 = puStack_138;
        bStack_110 = (byte)uStack_148;
        uStack_10f = (undefined1)((ulong)uStack_148 >> 8);
        uStack_10e = (undefined2)((ulong)uStack_148 >> 0x10);
        uStack_10c = uStack_148._4_4_;
        uStack_108 = (undefined4)uStack_140;
        uStack_104 = uStack_140._4_4_;
      }
      else {
        func_0x0412e5e0(&bStack_110,puStack_138,uStack_140);
      }
      uStack_f8 = 0;
      if ((bStack_110 & 1) == 0) {
        uVar12 = (ulong)(bStack_110 >> 1);
      }
      else {
        uVar12 = CONCAT44(uStack_104,uStack_108);
      }
      if (uVar12 == 0) {
LAB_0b6c3a79:
        uVar12 = 0;
      }
      else {
        puVar15 = puStack_100;
        if ((bStack_110 & 1) == 0) {
          puVar15 = (ulong *)&uStack_10f;
        }
        if ((puVar15 == (ulong *)0x0) || ((byte)*puVar15 == 0)) goto LAB_0b6c3a79;
        uVar12 = 0xcbf29ce484222325;
        uVar9 = strlen(puVar15);
        if (uVar9 != 0) {
          uVar11 = (ulong)((uint)uVar9 & 7);
          if (7 < uVar9) {
            uVar9 = uVar9 & 0xfffffffffffffff8;
            do {
              uVar12 = (((((((uVar12 * 0x100000001b3 ^ (ulong)(byte)*puVar15) * 0x100000001b3 ^
                            (ulong)*(byte *)((long)puVar15 + 1)) * 0x100000001b3 ^
                           (ulong)*(byte *)((long)puVar15 + 2)) * 0x100000001b3 ^
                          (ulong)*(byte *)((long)puVar15 + 3)) * 0x100000001b3 ^
                         (ulong)*(byte *)((long)puVar15 + 4)) * 0x100000001b3 ^
                        (ulong)*(byte *)((long)puVar15 + 5)) * 0x100000001b3 ^
                       (ulong)*(byte *)((long)puVar15 + 6)) * 0x100000001b3 ^
                       (ulong)*(byte *)((long)puVar15 + 7);
              puVar15 = puVar15 + 1;
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
          }
          if (uVar11 != 0) {
            uVar9 = 0;
            do {
              uVar12 = uVar12 * 0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + uVar9);
              uVar9 = uVar9 + 1;
            } while (uVar11 != uVar9);
          }
        }
      }
      auStack_118 = (undefined1  [8])uVar12;
      uVar10 = FUN_0c6e6af0(param_1,auStack_118);
      goto LAB_0b6c373b;
    }
    uVar10 = func_0x04864680(param_2,&UNK_01623aad);
    cVar5 = func_0x04865490(uVar10);
    if (cVar5 == '\0') goto LAB_0b6c37e3;
    uStack_148 = (ulong *)((ulong)uStack_148 & 0xffffffffffff0000);
    FUN_04863cb0(auStack_118,uVar10,&uStack_148);
    if (((ulong)uStack_148 & 1) != 0) {
      func_0x0412a280(puStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
    }
    uVar10 = func_0x0c6e7ab0(param_1,auStack_118,(int)param_3);
    if (((ulong)auStack_118 & 1) == 0) {
      return uVar10;
    }
    puStack_120 = (ulong *)CONCAT44(uStack_104,uStack_108);
    auVar13 = auStack_118;
  }
  else {
    bStack_130 = 0;
    uStack_12f = 0;
    FUN_04863cb0(&uStack_148,param_2,&bStack_130);
    auStack_118 = (undefined1  [8])0x0;
    if (((ulong)uStack_148 & 1) == 0) {
      puStack_100 = puStack_138;
      bStack_110 = (byte)uStack_148;
      uStack_10f = (undefined1)((ulong)uStack_148 >> 8);
      uStack_10e = (undefined2)((ulong)uStack_148 >> 0x10);
      uStack_10c = uStack_148._4_4_;
      uStack_108 = (undefined4)uStack_140;
      uStack_104 = uStack_140._4_4_;
    }
    else {
      func_0x0412e5e0(&bStack_110,puStack_138,uStack_140);
    }
    uStack_f8 = 0;
    if ((bStack_110 & 1) == 0) {
      if (bStack_110 >> 1 != 0) goto LAB_0b6c3635;
LAB_0b6c3726:
      uVar12 = 0;
    }
    else {
      if (CONCAT44(uStack_104,uStack_108) == 0) goto LAB_0b6c3726;
LAB_0b6c3635:
      if ((bStack_110 & 1) == 0) {
        puVar15 = (ulong *)&uStack_10f;
        if (puVar15 != (ulong *)0x0) goto LAB_0b6c3656;
        goto LAB_0b6c3726;
      }
      puVar15 = puStack_100;
      if (puStack_100 == (ulong *)0x0) goto LAB_0b6c3726;
LAB_0b6c3656:
      if ((byte)*puVar15 == 0) goto LAB_0b6c3726;
      uVar12 = 0xcbf29ce484222325;
      uVar9 = strlen(puVar15);
      if (uVar9 != 0) {
        uVar11 = (ulong)((uint)uVar9 & 7);
        if (7 < uVar9) {
          uVar9 = uVar9 & 0xfffffffffffffff8;
          do {
            uVar12 = (((((((uVar12 * 0x100000001b3 ^ (ulong)(byte)*puVar15) * 0x100000001b3 ^
                          (ulong)*(byte *)((long)puVar15 + 1)) * 0x100000001b3 ^
                         (ulong)*(byte *)((long)puVar15 + 2)) * 0x100000001b3 ^
                        (ulong)*(byte *)((long)puVar15 + 3)) * 0x100000001b3 ^
                       (ulong)*(byte *)((long)puVar15 + 4)) * 0x100000001b3 ^
                      (ulong)*(byte *)((long)puVar15 + 5)) * 0x100000001b3 ^
                     (ulong)*(byte *)((long)puVar15 + 6)) * 0x100000001b3 ^
                     (ulong)*(byte *)((long)puVar15 + 7);
            puVar15 = puVar15 + 1;
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
        }
        if (uVar11 != 0) {
          uVar9 = 0;
          do {
            uVar12 = uVar12 * 0x100000001b3 ^ (ulong)*(byte *)((long)puVar15 + uVar9);
            uVar9 = uVar9 + 1;
          } while (uVar11 != uVar9);
        }
      }
    }
    auStack_118 = (undefined1  [8])uVar12;
    uVar10 = FUN_0c6e6af0(param_1,auStack_118);
LAB_0b6c373b:
    if ((bStack_110 & 1) != 0) {
      uVar10 = func_0x0412a280(puStack_100,
                               CONCAT44(uStack_10c,
                                        CONCAT22(uStack_10e,CONCAT11(uStack_10f,bStack_110))) &
                               0xfffffffffffffffe);
    }
    if (((ulong)uStack_148 & 1) != 0) {
      uVar10 = func_0x0412a280(puStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
    }
    if ((bStack_130 & 1) == 0) {
      return uVar10;
    }
    auVar13 = (undefined1  [8])CONCAT62(uStack_12e,CONCAT11(uStack_12f,bStack_130));
  }
  uVar12 = (ulong)auVar13 & 0xfffffffffffffffe;
LAB_0b6c3798:
  uVar10 = func_0x0412a280(puStack_120,uVar12);
  return uVar10;
}


