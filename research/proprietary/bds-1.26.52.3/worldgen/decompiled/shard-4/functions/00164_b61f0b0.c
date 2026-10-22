/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb71f0b0 (ELF vaddr 0xb61f0b0)
 * Label: caller-of-callee
 * Body:  [[0b71f0b0, 0b71f431] [0b71f440, 0b71f471] [0b71f480, 0b71fcec] [0b71fcf0, 0b7200b5] [0b7200c0, 0b72093a] [0b720940, 0b720dd1] [0b72109f, 0b7210be] [0b7210fe, 0b721108] [0b72110c, 0b721171]]
 * Ghidra: FUN_0b71f0b0
 */


/* WARNING: Removing unreachable block (ram,0x0b7203e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0b71f0b0(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [8];
  char cVar14;
  int iVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  uint uVar25;
  byte bVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong *unaff_R14;
  long lVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_6f8 [16];
  ulong *puStack_6e8;
  undefined1 auStack_6d8 [16];
  ulong *puStack_6c8;
  undefined1 auStack_6b8 [16];
  ulong *puStack_6a8;
  undefined1 auStack_698 [16];
  ulong *puStack_688;
  undefined1 uStack_671;
  undefined1 auStack_670 [16];
  ulong *puStack_660;
  ulong *puStack_658;
  ulong *puStack_650;
  undefined1 auStack_648 [16];
  undefined1 auStack_638 [8];
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  ulong uStack_620;
  byte bStack_618;
  undefined7 uStack_617;
  undefined8 uStack_608;
  char cStack_5f0;
  undefined1 auStack_5e8 [12];
  undefined4 uStack_5dc;
  ulong *puStack_5d8;
  ulong *puStack_5d0;
  long lStack_5c8;
  ulong *puStack_5b8;
  ulong uStack_5b0;
  undefined1 auStack_5a8 [8];
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  ulong *puStack_590;
  undefined8 uStack_588;
  ulong *puStack_580;
  ulong *puStack_578;
  long lStack_570;
  ulong *puStack_568;
  byte bStack_560;
  uint auStack_558 [16];
  uint uStack_518;
  uint uStack_3d8;
  uint uStack_3c8;
  int iStack_3c0;
  ulong *puStack_3b8;
  ulong uStack_3b0;
  undefined1 auStack_3a8 [16];
  ulong *puStack_398;
  byte bStack_390;
  undefined7 uStack_38f;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [16];
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 uStack_2d8;
  undefined1 auStack_2d4 [12];
  undefined4 uStack_2c8;
  undefined1 auStack_2c4 [12];
  undefined4 uStack_2b8;
  undefined1 auStack_2b4 [16];
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined1 uStack_29c;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_250;
  undefined1 uStack_248;
  undefined1 uStack_230;
  byte *pbStack_228;
  ulong uStack_220;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  ulong *puStack_1f8;
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  ulong *puStack_1d8;
  char cStack_1d0;
  undefined1 auStack_1c8 [384];
  uint uStack_48;
  int iStack_40;
  byte bStack_38;
  uint uVar26;
  
  puVar20 = (ulong *)*param_2;
  _auStack_5e8 = (undefined1  [16])0x0;
  puStack_5d8 = (ulong *)0x0;
  puStack_5d0 = (ulong *)0x0;
  lStack_5c8 = 0;
  if ((int)param_3[8] == 1) {
    bVar31 = ((byte)param_3[3] & 1) != 0;
    pbVar16 = (byte *)((long)param_3 + 0x19);
    if (bVar31) {
      pbVar16 = (byte *)param_3[5];
    }
    uVar18 = (ulong)(byte)((byte)param_3[3] >> 1);
    if (bVar31) {
      uVar18 = param_3[4];
    }
    auVar32 = func_0x0eedb4e0(pbVar16,uVar18);
    auVar33._8_8_ = _DAT_0f7ba060;
    auVar33._0_8_ = _DAT_0f7ba058;
    if (auVar32 == auVar33) {
      unaff_R14 = (ulong *)func_0x0412dc70();
      uStack_598 = _DAT_0f2d0df8;
      puStack_590 = _UNK_0f2d0e00;
      auStack_5a8 = (undefined1  [8])_DAT_0f2d0de8;
      uStack_5a0 = (ulong *)_UNK_0f2d0df0;
      uStack_588 = (ulong *)((ulong)uStack_588 & 0xffffffffffffff00);
      bStack_560 = 0;
      auStack_218 = ZEXT816(0);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = auStack_208._8_8_;
      auStack_208 = auVar32 << 0x40;
      func_0x0eee17a0(auStack_218,auStack_5a8,auStack_558,1);
      if ((bStack_560 == 1) && (((ulong)uStack_588 & 1) != 0)) {
        func_0x0412a280(puStack_578,(ulong)uStack_588 & 0xfffffffffffffffe);
      }
      _auStack_5e8 = auStack_218;
      auStack_648 = ZEXT416(0x26);
      puStack_658 = (ulong *)0x0;
      puStack_650 = (ulong *)0x0;
      lVar30 = 0;
      cVar14 = '\0';
      param_3 = (ulong *)auStack_208._0_8_;
      goto LAB_0b7208f6;
    }
    puStack_660 = puVar20;
    auStack_670 = auVar32;
    if (DAT_0f7b8fb8 == '\0') {
      iVar15 = FUN_04108328(&DAT_0f7b8fb8);
      if (iVar15 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
    }
    bVar31 = ((byte)*param_3 & 1) != 0;
    pbStack_228 = (byte *)((long)param_3 + 1);
    if (bVar31) {
      pbStack_228 = (byte *)param_3[2];
    }
    uStack_220 = (ulong)(byte)((byte)*param_3 >> 1);
    if (bVar31) {
      uStack_220 = param_3[1];
    }
    (**(code **)(_DAT_0f7b8f98 + 200))(auStack_5a8,&DAT_0f7b8f98,&puStack_5d8,&pbStack_228);
    auStack_218._8_8_ = &UNK_0140f690;
    auStack_218._0_8_ = 0xb73a56ee5b2b7c89;
    auStack_208._8_4_ = 0x2f0;
    auStack_208._0_8_ = 1;
    if ((byte)puStack_568 == 0) {
      unaff_R14 = (ulong *)auStack_3a8;
      func_0x0eedea30(unaff_R14);
      func_0x0eedeb80(2,0x2d,auStack_5a8,unaff_R14,auStack_218);
      if ((auStack_3a8[0] & 1) != 0) {
        func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
      }
    }
    puVar20 = puStack_580;
    if (((byte)puStack_568 & 1) == 0) {
      puVar19 = puStack_578;
      if (puStack_580 != (ulong *)0x0) {
        while (unaff_R14 = puVar19, puVar20 != unaff_R14) {
          FUN_048b3e80(unaff_R14 + -8);
          puVar19 = unaff_R14 + -8;
        }
        puStack_578 = puVar20;
        func_0x0412a280(puStack_580,lStack_570 - (long)puStack_580);
      }
      puVar20 = uStack_598;
      puVar19 = puStack_590;
      if (uStack_598 != (ulong *)0x0) {
        while (unaff_R14 = puVar19, puVar20 != unaff_R14) {
          if (((byte)unaff_R14[-1] == 1) && ((unaff_R14[-6] & 1) != 0)) {
            func_0x0412a280(unaff_R14[-4],unaff_R14[-6] & 0xfffffffffffffffe);
          }
          puVar19 = unaff_R14 + -10;
        }
        puStack_590 = puVar20;
        func_0x0412a280(uStack_598,(long)uStack_588 - (long)uStack_598);
      }
    }
    auStack_6b8 = (undefined1  [16])0x0;
    puStack_6a8 = (ulong *)0x0;
    auStack_6d8 = (undefined1  [16])0x0;
    puStack_6c8 = (ulong *)0x0;
    auStack_648._0_8_ = puStack_5d0;
    puVar20 = puStack_5d8;
    if (puStack_5d8 == puStack_5d0) {
      auStack_6b8._8_8_ = 0;
      auStack_6b8[0] = 0;
    }
    else {
      do {
        if ((*puVar20 & 1) == 0) {
          uStack_598 = (ulong *)puVar20[2];
          auStack_5a8 = (undefined1  [8])*puVar20;
          uStack_5a0 = (ulong *)puVar20[1];
        }
        else {
          func_0x0412e5e0(auStack_5a8,puVar20[2],puVar20[1]);
        }
        puVar28 = uStack_5a0;
        auVar13 = auStack_5a8;
        unaff_R14 = (ulong *)((ulong)auStack_5a8 >> 1 & 0x7f);
        puStack_658 = uStack_598;
        puVar19 = (ulong *)(auStack_5a8 + 1);
        if (((ulong)auStack_5a8 & 1) != 0) {
          unaff_R14 = uStack_5a0;
          puVar19 = uStack_598;
        }
        if (7 < (long)unaff_R14) {
          puVar17 = puVar19;
          puVar23 = unaff_R14;
          while( true ) {
            pbVar16 = (byte *)func_0x0eee2ef0(puVar17,0x6d,(byte *)((long)puVar23 + -7));
            if (pbVar16 == (byte *)0x0) break;
            if (*(long *)pbVar16 == 0x617461646174656d) {
              if ((long)pbVar16 - (long)puVar19 != -1 &&
                  pbVar16 != (byte *)((long)unaff_R14 + (long)puVar19)) {
                if ((auStack_6d8[0] & 1) == 0) {
                  if (((ulong)auVar13 & 1) == 0) {
                    puStack_6c8 = uStack_598;
                    auStack_6d8._8_8_ = uStack_5a0;
                    auStack_6d8._0_8_ = auStack_5a8;
                  }
                  else {
                    func_0x04885070(auStack_6d8,puStack_658,puVar28);
                  }
                }
                else {
                  FUN_04885120(auStack_6d8,puVar19,unaff_R14);
                }
              }
              break;
            }
            puVar17 = (ulong *)(pbVar16 + 1);
            puVar23 = (ulong *)((byte *)((long)unaff_R14 + (long)puVar19) + -(long)puVar17);
            if ((long)puVar23 < 8) break;
          }
        }
        puVar17 = uStack_5a0;
        auVar13 = auStack_5a8;
        param_3 = (ulong *)((ulong)auStack_5a8 & 0xff);
        puVar28 = (ulong *)((ulong)auStack_5a8 >> 1 & 0x7f);
        puStack_658 = uStack_598;
        puVar19 = (ulong *)(auStack_5a8 + 1);
        if (((ulong)auStack_5a8 & 1) != 0) {
          puVar28 = uStack_5a0;
          puVar19 = uStack_598;
        }
        if (0xb < (long)puVar28) {
          unaff_R14 = (ulong *)((long)puVar19 + (long)puVar28);
          puVar23 = puVar19;
          puVar24 = puVar28;
          while( true ) {
            puVar23 = (ulong *)func_0x0eee2ef0(puVar23,0x2e,(byte *)((long)puVar24 + -0xb));
            if (puVar23 == (ulong *)0x0) break;
            if ((int)puVar23[1] == 0x65727574 && *puVar23 == 0x6375727473636d2e) {
              if ((long)puVar23 - (long)puVar19 != -1 && puVar23 != unaff_R14) {
                if ((auStack_6b8[0] & 1) == 0) {
                  if (((ulong)auVar13 & 1) == 0) {
                    puStack_6a8 = uStack_598;
                    auStack_6b8._8_8_ = uStack_5a0;
                    auStack_6b8._0_8_ = auStack_5a8;
                  }
                  else {
                    func_0x04885070(auStack_6b8,puStack_658,puVar17);
                  }
                }
                else {
                  FUN_04885120(auStack_6b8,puVar19,puVar28);
                }
              }
              break;
            }
            puVar23 = (ulong *)((long)puVar23 + 1);
            puVar24 = (ulong *)((long)unaff_R14 - (long)puVar23);
            if ((long)puVar24 < 0xc) break;
          }
        }
        if (((ulong)auStack_5a8 & 1) != 0) {
          func_0x0412a280(uStack_598,(ulong)auStack_5a8 & 0xfffffffffffffffe);
        }
        puVar20 = puVar20 + 3;
      } while (puVar20 != (ulong *)auStack_648._0_8_);
    }
    puVar20 = puStack_660;
    uVar18 = (ulong)(auStack_6b8[0] >> 1);
    if ((auStack_6b8[0] & 1) != 0) {
      uVar18 = auStack_6b8._8_8_;
    }
    if (uVar18 == 0) {
      uVar18 = puStack_660[3];
      auStack_218 = (undefined1  [16])0x0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auStack_208._8_8_;
      auStack_208 = auVar2 << 0x40;
      auStack_5a8 = (undefined1  [8])auStack_218;
      uStack_5a0 = (ulong *)((ulong)uStack_5a0 & 0xffffffffffffff00);
      puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar22 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      auStack_208._0_8_ = puVar22 + 5;
      puVar22[4] = 0;
      puVar22[1] = 0x7574637572745314;
      puVar22[2] = 0x736572;
      puVar22[3] = 0;
      *puVar22 = 0x158cbbf7ce6f4e7;
      auStack_218._8_8_ = puVar22 + 5;
      auStack_218._0_8_ = puVar22;
      auStack_558[0] = auStack_670._8_4_ & 0xffff;
      auStack_5a8._0_4_ = auStack_670._4_4_;
      uStack_598 = (ulong *)(CONCAT44(uStack_598._4_4_,auStack_670._2_4_) & 0xffffffff0000ffff);
      uStack_588 = (ulong *)(CONCAT44(uStack_588._4_4_,auStack_670._0_4_) & 0xffffffff0000ffff);
      puStack_578 = (ulong *)CONCAT44(puStack_578._4_4_,(uint)auStack_670._14_2_);
      puStack_568 = (ulong *)CONCAT44(puStack_568._4_4_,auStack_670._10_4_);
      func_0x0470d9a0(auStack_3a8,&UNK_01287ba2,0x28,0x122112,auStack_5a8);
      puVar22 = (undefined8 *)func_0x0412f0e0(auStack_3a8,0,&UNK_0127fd35,0x37);
      puStack_590 = (ulong *)puVar22[2];
      uStack_5a0 = (ulong *)*puVar22;
      uStack_598 = (ulong *)puVar22[1];
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      uStack_518 = 0;
      func_0x060aeeb0(uVar18,1,1,auStack_218,auStack_5a8,1);
      if ((ulong)uStack_518 != 0xffffffff) {
        (**(code **)(&UNK_0f2d0a38 + (ulong)uStack_518 * 8))(auStack_638,&uStack_5a0);
      }
      uStack_518 = 0xffffffff;
      if ((auStack_3a8._0_8_ & 1) != 0) {
        func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
      }
      uVar21 = auStack_218._0_8_;
      if (auStack_218._0_8_ != 0) {
        for (lVar30 = auStack_218._8_8_; uVar21 != lVar30; lVar30 = lVar30 + -0x28) {
          if ((*(byte *)(lVar30 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar30 + -0x10),
                            *(ulong *)(lVar30 + -0x20) & 0xfffffffffffffffe);
          }
        }
        auStack_218._8_8_ = uVar21;
        func_0x0412a280(auStack_218._0_8_,auStack_208._0_8_ - auStack_218._0_8_);
      }
      unaff_R14 = (ulong *)func_0x0412dc70();
      auStack_208._8_8_ = _UNK_0f2d0e20;
      auStack_208._0_8_ = _DAT_0f2d0e18;
      auStack_218._8_8_ = _UNK_0f2d0e10;
      auStack_218._0_8_ = _DAT_0f2d0e08;
      puStack_1f8 = (ulong *)((ulong)puStack_1f8 & 0xffffffffffffff00);
      cStack_1d0 = '\0';
      auStack_3a8 = ZEXT816(0);
      puStack_398 = (ulong *)0x0;
      func_0x0eee17a0(auStack_3a8,auStack_218,auStack_1c8,1);
      if ((cStack_1d0 == '\x01') && (((ulong)puStack_1f8 & 1) != 0)) {
        func_0x0412a280(auStack_1f0._8_8_,(ulong)puStack_1f8 & 0xfffffffffffffffe);
      }
      uVar26 = 0x26;
      uVar25 = 0x26;
      cVar14 = '\0';
      _auStack_5e8 = auStack_3a8;
      param_3 = puStack_398;
joined_r0x0b71fe5c:
      if ((auStack_6d8[0] & 1) != 0) {
        func_0x0412a280(puStack_6c8,auStack_6d8._0_8_ & 0xfffffffffffffffe);
        uVar25 = uVar26;
      }
      if ((auStack_6b8[0] & 1) != 0) {
        func_0x0412a280(puStack_6a8,auStack_6b8._0_8_ & 0xfffffffffffffffe);
      }
      auStack_648 = ZEXT416(uVar25);
      puStack_658 = (ulong *)0x0;
      puStack_650 = (ulong *)0x0;
      lVar30 = 0;
      goto LAB_0b7208f6;
    }
    if ((auStack_6d8[0] & 1) != 0) {
      if (auStack_6d8._8_8_ != 0) goto LAB_0b71f700;
LAB_0b71fd1e:
      param_3 = (ulong *)(auStack_6b8 + 1);
      puStack_5b8 = param_3;
      if ((auStack_6b8[0] & 1) != 0) {
        puStack_5b8 = puStack_6a8;
      }
      uStack_5b0 = uVar18;
      func_0x05ff17b0(auStack_638,&puStack_5b8);
      puVar22 = puStack_628;
      if ((auStack_638[0] & 1) == 0) {
        puVar22 = (undefined8 *)(auStack_638 + 1);
      }
      uVar18 = func_0x0eee2e90(puVar22);
      if (uVar18 < 0xfffffffffffffff8) {
        if (uVar18 < 0x17) {
          auStack_698[0] = (char)uVar18 * '\x02';
          unaff_R14 = (ulong *)(auStack_698 + 1);
          if (uVar18 != 0) goto LAB_0b72016d;
        }
        else {
          uVar29 = 0x1a;
          if ((uVar18 | 7) != 0x17) {
            uVar29 = (uVar18 | 7) + 1;
          }
          unaff_R14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29);
          if (unaff_R14 == (ulong *)0x0) {
            func_0x0eec74c0(uVar29,0);
          }
          auStack_698._8_8_ = uVar18;
          auStack_698._0_8_ = uVar29 | 1;
          puStack_688 = unaff_R14;
LAB_0b72016d:
          memmove(unaff_R14,puVar22,uVar18);
        }
        *(byte *)((long)unaff_R14 + uVar18) = 0;
        if ((auStack_6b8[0] & 1) != 0) {
          param_3 = puStack_6a8;
        }
        uVar18 = func_0x0eee2e90(param_3);
        if (uVar18 < 0xfffffffffffffff8) {
          if (uVar18 < 0x17) {
            auStack_6f8[0] = (char)uVar18 * '\x02';
            puVar19 = (ulong *)(auStack_6f8 + 1);
            if (uVar18 != 0) goto LAB_0b720207;
          }
          else {
            uVar29 = 0x1a;
            if ((uVar18 | 7) != 0x17) {
              uVar29 = (uVar18 | 7) + 1;
            }
            puVar19 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29);
            if (puVar19 == (ulong *)0x0) {
              func_0x0eec74c0(uVar29,0);
            }
            auStack_6f8._8_8_ = uVar18;
            auStack_6f8._0_8_ = uVar29 | 1;
            puStack_6e8 = puVar19;
LAB_0b720207:
            memmove(puVar19,param_3,uVar18);
          }
          *(byte *)((long)puVar19 + uVar18) = 0;
          puVar19 = puStack_688;
          uVar21 = auStack_698._0_8_;
          uVar12 = auStack_698._8_8_;
          auStack_378._0_8_ = auStack_6f8._0_8_;
          puStack_578 = (ulong *)auStack_378._0_8_;
          lStack_570 = auStack_6f8._8_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = auStack_368._8_8_;
          auStack_368 = auVar5 << 0x40;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auStack_208._8_8_;
          auStack_208 = auVar3 << 0x40;
          auStack_218._8_8_ = 0x65727574;
          auStack_218._0_8_ = 0x6375727473796d16;
          uStack_48 = 0xffffffff;
          auStack_378 = (undefined1  [16])0x0;
          uStack_380 = 0;
          uStack_388 = 0;
          uStack_38f = 0;
          bStack_390 = 0;
          puStack_398 = (ulong *)0x0;
          auStack_3a8 = (undefined1  [16])0x0;
          uStack_3d8 = 0;
          puStack_568 = puStack_6e8;
          puStack_580 = puStack_688;
          uStack_588 = (ulong *)auStack_698._8_8_;
          puStack_590 = (ulong *)auStack_698._0_8_;
          uStack_598 = (ulong *)0x0;
          uStack_5a0 = (ulong *)0x65727574;
          auStack_5a8 = (undefined1  [8])0x6375727473796d16;
          puStack_688 = (ulong *)0x0;
          auStack_698 = (undefined1  [16])0x0;
          puStack_6e8 = (ulong *)0x0;
          auStack_6f8 = (undefined1  [16])0x0;
          if ((uVar21 & 1) == 0) {
            auStack_1f0._0_8_ = puVar19;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar21;
            auStack_208 = auVar11 << 0x40;
            puStack_1f8 = (ulong *)uVar12;
          }
          else {
            func_0x0412e5e0(auStack_208 + 8,puVar19,uVar12);
          }
          if (((ulong)puStack_578 & 1) == 0) {
            puStack_1d8 = puStack_568;
            auStack_1f0._8_8_ = puStack_578;
            lStack_1e0 = lStack_570;
          }
          else {
            func_0x0412e5e0(auStack_1f0 + 8,puStack_568,lStack_570);
          }
          uStack_48 = 0;
          iStack_40 = func_0x05d8c4a0(&puStack_3b8,auStack_218);
          if ((ulong)uStack_3d8 != 0xffffffff) {
            (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_3d8 * 8))(&puStack_3b8,auStack_5a8);
          }
          uStack_3d8 = 0xffffffff;
          if ((auStack_638[0] & 1) != 0) {
            func_0x0412a280(puStack_628,(ulong)auStack_638 & 0xfffffffffffffffe);
          }
          auStack_5a8 = (undefined1  [8])((ulong)auStack_5a8 & 0xffffffffffffff00);
          puStack_590 = (ulong *)((ulong)puStack_590 & 0xffffffffffffff00);
          auVar4[0xf] = 0;
          auVar4._0_15_ = stack0xfffffffffffff9c9;
          _auStack_638 = auVar4 << 8;
          uStack_620 = uStack_620 & 0xffffffffffffff00;
          func_0x0b6efc30(auStack_3a8,puVar20,auStack_218,auStack_5a8,auStack_638);
          if ((auStack_378[0] == '\x01') && ((bStack_390 & 1) != 0)) {
            func_0x0412a280(uStack_380,CONCAT71(uStack_38f,bStack_390) & 0xfffffffffffffffe);
          }
          if (((char)puStack_590 == '\x01') && (((ulong)auStack_5a8 & 1) != 0)) {
            func_0x0412a280(uStack_598,(ulong)auStack_5a8 & 0xfffffffffffffffe);
          }
          uVar25 = uStack_48;
          uStack_598 = (ulong *)((ulong)uStack_598 & 0xffffffffffffff00);
          uStack_3c8 = 0xffffffff;
          _auStack_5a8 = auStack_670;
          if ((ulong)uStack_48 != 0xffffffff) {
            auStack_638 = (undefined1  [8])&uStack_598;
            (**(code **)(&UNK_0f2d0da8 + (ulong)uStack_48 * 8))(auStack_638,auStack_218);
            uStack_3c8 = uVar25;
          }
          iStack_3c0 = iStack_40;
          func_0x0b73c8c0(puStack_660 + 7,auStack_5a8,uStack_5a0,auStack_5a8);
          if ((ulong)uStack_3c8 != 0xffffffff) {
            (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_3c8 * 8))(auStack_638,&uStack_598);
          }
          if ((ulong)uStack_48 != 0xffffffff) {
            (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_48 * 8))(auStack_5a8,auStack_218);
          }
          _auStack_5e8 = (undefined1  [16])0x0;
          cVar14 = '\x01';
          uVar26 = 0;
          uVar25 = 0;
          unaff_R14 = (ulong *)0x0;
          param_3 = (ulong *)0x0;
          goto joined_r0x0b71fe5c;
        }
      }
      else {
        func_0x04882e30();
      }
      func_0x04882e30();
LAB_0b720d6c:
      iVar15 = FUN_04108328(&DAT_0f7b8fb8);
      if (iVar15 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
LAB_0b71f889:
      bVar31 = (auStack_6d8[0] & 1) != 0;
      puStack_3b8 = puVar20;
      if (bVar31) {
        puStack_3b8 = puStack_6c8;
      }
      uStack_3b0 = (ulong)(auStack_6d8[0] >> 1);
      if (bVar31) {
        uStack_3b0 = auStack_6d8._8_8_;
      }
      (**(code **)(_DAT_0f7b8f98 + 0x60))(auStack_5a8,&DAT_0f7b8f98,&puStack_3b8);
      puVar24 = uStack_588;
      puVar23 = puStack_590;
      puVar17 = uStack_598;
      puVar28 = uStack_5a0;
      auVar13 = auStack_5a8;
      puVar19 = _UNK_0f2d0e40;
      puVar20 = _UNK_0f2d0e30;
      uVar18 = _DAT_0f2d0e28;
      puStack_1d8 = (ulong *)CONCAT71(puStack_1d8._1_7_,(byte)puStack_568);
      if ((byte)puStack_568 == '\0') {
        auStack_218._8_8_ = uStack_5a0;
        auStack_218._0_8_ = auStack_5a8;
        auStack_208._0_8_ = uStack_598;
        auStack_208._0_8_ = uStack_598;
        auStack_208._8_8_ = puStack_590;
        puStack_1f8 = uStack_588;
        auStack_1f0._0_8_ = puStack_580;
        auStack_1f0._8_8_ = puStack_578;
        lStack_1e0 = lStack_570;
        uStack_598 = _DAT_0f2d0e38;
        puStack_590 = _UNK_0f2d0e40;
        auStack_5a8 = (undefined1  [8])_DAT_0f2d0e28;
        uStack_5a0 = _UNK_0f2d0e30;
        uStack_588 = (ulong *)((ulong)uStack_588 & 0xffffffffffffff00);
        bStack_560 = 0;
        if (puVar23 < puVar24) {
          puVar23[2] = (ulong)_DAT_0f2d0e38;
          puVar23[3] = (ulong)puVar19;
          *puVar23 = uVar18;
          puVar23[1] = (ulong)puVar20;
          *(byte *)(puVar23 + 4) = 0;
          *(byte *)(puVar23 + 9) = 0;
          puVar20 = puVar23 + 10;
        }
        else {
          auStack_208._8_8_ = func_0x0489d2c0(auStack_208,auStack_5a8);
          puVar20 = (ulong *)auStack_208._8_8_;
          if (((bStack_560 & 1) != 0) && (((ulong)uStack_588 & 1) != 0)) {
            func_0x0412a280(puStack_578,(ulong)uStack_588 & 0xfffffffffffffffe);
            puVar20 = (ulong *)auStack_208._8_8_;
          }
        }
        lVar30 = lStack_1e0;
        param_3 = puStack_1f8;
        auStack_5e8._0_8_ = auStack_208._0_8_;
        auStack_208 = (undefined1  [16])0x0;
        puStack_1f8 = (ulong *)0x0;
        puStack_658 = (ulong *)auStack_1f0._0_8_;
        puStack_650 = (ulong *)auStack_1f0._8_8_;
        auStack_1f0 = (undefined1  [16])0x0;
        lStack_1e0 = 0;
        auStack_648._8_8_ = 0;
        auStack_648._0_8_ = auStack_218._0_8_;
        unaff_R14 = (ulong *)auStack_218._8_8_;
        stack0xfffffffffffffa20 = puVar20;
        if ((char)puStack_1d8 == '\0') {
          func_0x048b3dd0(auStack_218);
        }
      }
      else {
        auStack_208._0_8_ = uStack_598;
        auStack_218._8_8_ = uStack_5a0;
        auStack_218._0_8_ = auStack_5a8;
        puVar20 = (ulong *)(ulong)((uint)((ulong)auStack_5a8 >> 1) & 0x7f);
        if (((ulong)auStack_5a8 & 1) != 0) {
          puVar20 = uStack_5a0;
        }
        if (puVar20 != (ulong *)0x0) {
          if ((auStack_6f8[0] & 1) != 0) {
            func_0x0412a280(puStack_6e8,auStack_6f8._0_8_ & 0xfffffffffffffffe);
          }
          auStack_6f8._8_8_ = puVar28;
          auStack_6f8._0_8_ = auVar13;
          puStack_6e8 = puVar17;
          goto LAB_0b71f95c;
        }
        uVar21 = func_0x0412dc70();
        func_0x0b721180(auStack_5a8,0x16,uVar21);
        lVar30 = lStack_570;
        param_3 = uStack_588;
        unaff_R14 = uStack_5a0;
        stack0xfffffffffffffa20 = puStack_590;
        auStack_5e8._0_8_ = uStack_598;
        uStack_598 = (ulong *)0x0;
        puStack_590 = (ulong *)0x0;
        uStack_588 = (ulong *)0x0;
        puStack_658 = puStack_580;
        puStack_650 = puStack_578;
        puStack_580 = (ulong *)0x0;
        puStack_578 = (ulong *)0x0;
        lStack_570 = 0;
        auStack_648._8_8_ = 0;
        auStack_648._0_8_ = auStack_5a8;
        func_0x048e6d60(auStack_5a8);
        if (((ulong)auVar13 & 1) != 0) {
          func_0x0412a280(puVar17,(ulong)auVar13 & 0xfffffffffffffffe);
        }
      }
      func_0x05ed96b0(auStack_3a8);
      if ((auStack_6f8[0] & 1) == 0) {
        if ((auStack_6d8[0] & 1) == 0) goto LAB_0b720b64;
LAB_0b720bb6:
        func_0x0412a280(puStack_6c8,auStack_6d8._0_8_ & 0xfffffffffffffffe);
      }
      else {
        func_0x0412a280(puStack_6e8,auStack_6f8._0_8_ & 0xfffffffffffffffe);
        if ((auStack_6d8[0] & 1) != 0) goto LAB_0b720bb6;
LAB_0b720b64:
      }
      if ((auStack_6b8[0] & 1) != 0) {
        func_0x0412a280(puStack_6a8,auStack_6b8._0_8_ & 0xfffffffffffffffe);
      }
      cVar14 = '\0';
      goto LAB_0b7208f6;
    }
    if (auStack_6d8[0] >> 1 == 0) goto LAB_0b71fd1e;
LAB_0b71f700:
    auStack_6f8 = (undefined1  [16])0x0;
    puStack_6e8 = (ulong *)0x0;
    auStack_2e8 = (undefined1  [16])0x0;
    auStack_2f8 = (undefined1  [16])0x0;
    auStack_308 = (undefined1  [16])0x0;
    auStack_318 = (undefined1  [16])0x0;
    auStack_328 = (undefined1  [16])0x0;
    auStack_338 = (undefined1  [16])0x0;
    auStack_348 = (undefined1  [16])0x0;
    auStack_358 = (undefined1  [16])0x0;
    auStack_368 = (undefined1  [16])0x0;
    auStack_378 = (undefined1  [16])0x0;
    uStack_388 = 0;
    uStack_380 = 0;
    puStack_398 = (ulong *)0x0;
    bStack_390 = 0;
    uStack_38f = 0;
    auStack_3a8 = (undefined1  [16])0x0;
    uStack_2d8 = 0;
    auStack_2d4 = SUB1612((undefined1  [16])0x0,0);
    uStack_2c8 = 0;
    auStack_2c4 = SUB1612((undefined1  [16])0x0,4);
    uStack_2b8 = 0xbf800000;
    auStack_2b4 = (undefined1  [16])0x0;
    uStack_2a4 = 0;
    uStack_2a0 = 4;
    uStack_29c = 1;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    if (DAT_0f7b8fb8 == '\0') {
      iVar15 = FUN_04108328(&DAT_0f7b8fb8);
      if (iVar15 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
    }
    bVar31 = (auStack_6d8[0] & 1) == 0;
    puVar20 = (ulong *)(auStack_6d8 + 1);
    puStack_5b8 = puStack_6c8;
    if (bVar31) {
      puStack_5b8 = puVar20;
    }
    uStack_5b0 = (ulong)(auStack_6d8[0] >> 1);
    if (!bVar31) {
      uStack_5b0 = auStack_6d8._8_8_;
    }
    cVar14 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_5b8);
    if (cVar14 != '\0') {
      if (DAT_0f7b8fb8 == '\0') goto LAB_0b720d6c;
      goto LAB_0b71f889;
    }
LAB_0b71f95c:
    puVar20 = puStack_660;
    func_0x0b6f6770(auStack_218,puStack_660,auStack_6f8,auStack_3a8);
    bVar27 = iStack_40 == 2 & bStack_38;
    if (bVar27 == 0) {
      uVar18 = puVar20[3];
      _auStack_638 = (undefined1  [16])0x0;
      puStack_628 = (undefined8 *)0x0;
      auStack_5a8 = (undefined1  [8])auStack_638;
      uStack_5a0 = (ulong *)((ulong)uStack_5a0 & 0xffffffffffffff00);
      puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar22 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      puStack_628 = puVar22 + 5;
      puVar22[4] = 0;
      puVar22[1] = 0x7574637572745314;
      puVar22[2] = 0x736572;
      puVar22[3] = 0;
      *puVar22 = 0x158cbbf7ce6f4e7;
      puStack_630 = puStack_628;
      auStack_638 = (undefined1  [8])puVar22;
      auStack_558[0] = auStack_670._8_4_ & 0xffff;
      auStack_5a8._0_4_ = auStack_670._4_4_;
      uStack_598 = (ulong *)(CONCAT44(uStack_598._4_4_,auStack_670._2_4_) & 0xffffffff0000ffff);
      uStack_588 = (ulong *)(CONCAT44(uStack_588._4_4_,auStack_670._0_4_) & 0xffffffff0000ffff);
      puStack_578 = (ulong *)CONCAT44(puStack_578._4_4_,(uint)auStack_670._14_2_);
      puStack_568 = (ulong *)CONCAT44(puStack_568._4_4_,auStack_670._10_4_);
      func_0x0470d9a0(auStack_698,&UNK_01287ba2,0x28,0x122112,auStack_5a8);
      puVar22 = (undefined8 *)func_0x0412f0e0(auStack_698,0,&UNK_01406d58,0x2d);
      puStack_590 = (ulong *)puVar22[2];
      uStack_5a0 = (ulong *)*puVar22;
      uStack_598 = (ulong *)puVar22[1];
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      uStack_518 = 0;
      func_0x060aeeb0(uVar18,1,1,auStack_638,auStack_5a8,1);
      if ((ulong)uStack_518 != 0xffffffff) {
        (**(code **)(&UNK_0f2d0a38 + (ulong)uStack_518 * 8))(&uStack_671,&uStack_5a0);
      }
      uStack_518 = 0xffffffff;
      if ((auStack_698[0] & 1) != 0) {
        func_0x0412a280(puStack_688,auStack_698._0_8_ & 0xfffffffffffffffe);
      }
      auVar13 = auStack_638;
      if (auStack_638 != (undefined1  [8])0x0) {
        for (puVar22 = puStack_630; auVar13 != (undefined1  [8])puVar22;
            puVar22 = (undefined8 *)((long)puVar22 + -0x28)) {
          if ((*(byte *)((long)puVar22 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)((long)puVar22 + -0x10),
                            *(ulong *)((long)puVar22 + -0x20) & 0xfffffffffffffffe);
          }
        }
        puStack_630 = (undefined8 *)auVar13;
        func_0x0412a280(auStack_638,(long)puStack_628 - (long)auStack_638);
      }
      unaff_R14 = (ulong *)func_0x0412dc70();
      puStack_628 = (undefined8 *)_DAT_0f2d0e78;
      uStack_620 = _UNK_0f2d0e80;
      puStack_630 = (undefined8 *)_UNK_0f2d0e70;
      auStack_638 = (undefined1  [8])_DAT_0f2d0e68;
      bStack_618 = 0;
      cStack_5f0 = '\0';
      auStack_698 = ZEXT816(0);
      puStack_688 = (ulong *)0x0;
      func_0x0eee17a0(auStack_698,auStack_638,auStack_5e8,1);
      if ((cStack_5f0 == '\x01') && ((bStack_618 & 1) != 0)) {
        func_0x0412a280(uStack_608,CONCAT71(uStack_617,bStack_618) & 0xfffffffffffffffe);
      }
      param_3 = puStack_688;
      auStack_648 = auStack_698;
    }
    else {
      func_0x0b6f5f10(auStack_5a8,puVar20,auStack_3a8,auStack_218);
      puVar20 = (ulong *)(ulong)(auStack_3a8[8] >> 1);
      puVar10 = auStack_3a8 + 9;
      if ((auStack_3a8[8] & 1) != 0) {
        puVar20 = puStack_398;
        puVar10 = (undefined1 *)CONCAT71(uStack_38f,bStack_390);
      }
      auVar33 = func_0x0eedb4e0(puVar10,puVar20);
      uVar25 = uStack_48;
      if (bStack_38 == 0) {
        uVar21 = func_0x048a88b0();
        func_0x041084d6(&DAT_0f7b8fb8);
        func_0x05ed96b0(auStack_3a8);
        if ((auStack_6f8[0] & 1) != 0) {
          func_0x0412a280(puStack_6e8,auStack_6f8._0_8_ & 0xfffffffffffffffe);
        }
        if ((auStack_6d8[0] & 1) != 0) goto LAB_0b72112f;
        while ((auStack_6b8[0] & 1) == 0) {
          func_0x048e6e10(&puStack_5d8);
          func_0x0eee2d70(uVar21);
LAB_0b72112f:
          func_0x0412a280(puStack_6c8,auStack_6d8._0_8_ & 0xfffffffffffffffe);
        }
        func_0x0412a280(puStack_6a8,auStack_6b8._0_8_ & 0xfffffffffffffffe);
        func_0x048e6e10(&puStack_5d8);
        func_0x0eee2d70(uVar21);
        pcVar1 = (code *)swi(3);
        puVar22 = (undefined8 *)(*pcVar1)();
        return puVar22;
      }
      uStack_598 = (ulong *)((ulong)uStack_598 & 0xffffffffffffff00);
      uStack_3c8 = 0xffffffff;
      _auStack_5a8 = auVar33;
      if ((ulong)uStack_48 != 0xffffffff) {
        auStack_638 = (undefined1  [8])&uStack_598;
        (**(code **)(&UNK_0f2d0da8 + (ulong)uStack_48 * 8))(auStack_638,auStack_218);
        uStack_3c8 = uVar25;
      }
      iStack_3c0 = iStack_40;
      func_0x0b73c8c0(puStack_660 + 7,auStack_5a8,uStack_5a0,auStack_5a8);
      if ((ulong)uStack_3c8 != 0xffffffff) {
        (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_3c8 * 8))(auStack_638,&uStack_598);
      }
    }
    if ((bStack_38 == 1) && ((ulong)uStack_48 != 0xffffffff)) {
      (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_48 * 8))(auStack_638,auStack_218);
    }
    func_0x05ed96b0(auStack_3a8);
    if ((auStack_6f8[0] & 1) == 0) {
      if ((auStack_6d8[0] & 1) == 0) goto LAB_0b7208c3;
LAB_0b720a02:
      func_0x0412a280(puStack_6c8,auStack_6d8._0_8_ & 0xfffffffffffffffe);
      if ((auStack_6b8[0] & 1) != 0) goto LAB_0b720a20;
LAB_0b7208ce:
      uVar6 = auStack_648._0_4_;
      uVar7 = auStack_648._4_4_;
      uVar8 = auStack_648._8_4_;
      uVar9 = auStack_648._12_4_;
    }
    else {
      func_0x0412a280(puStack_6e8,auStack_6f8._0_8_ & 0xfffffffffffffffe);
      if ((auStack_6d8[0] & 1) != 0) goto LAB_0b720a02;
LAB_0b7208c3:
      if ((auStack_6b8[0] & 1) == 0) goto LAB_0b7208ce;
LAB_0b720a20:
      func_0x0412a280(puStack_6a8,auStack_6b8._0_8_ & 0xfffffffffffffffe);
      uVar6 = auStack_648._0_4_;
      uVar7 = auStack_648._4_4_;
      uVar8 = auStack_648._8_4_;
      uVar9 = auStack_648._12_4_;
    }
    if (bVar27 == 0) {
      auStack_648 = ZEXT416(0x26);
      puStack_658 = (ulong *)0x0;
      puStack_650 = (ulong *)0x0;
      lVar30 = 0;
      cVar14 = '\0';
      auStack_5e8._4_4_ = uVar7;
      auStack_5e8._0_4_ = uVar6;
      auStack_5e8._8_4_ = uVar8;
      uStack_5dc = uVar9;
      goto LAB_0b7208f6;
    }
  }
  auStack_648 = (undefined1  [16])0x0;
  cVar14 = '\x01';
  unaff_R14 = (ulong *)0x0;
  param_3 = (ulong *)0x0;
  lVar30 = 0;
  puStack_658 = (ulong *)0x0;
  puStack_650 = (ulong *)0x0;
LAB_0b7208f6:
  puVar19 = puStack_5d8;
  puVar20 = puStack_5d0;
  if (puStack_5d8 != (ulong *)0x0) {
    for (; puVar19 != puVar20; puVar20 = puVar20 + -3) {
      if ((puVar20[-3] & 1) != 0) {
        func_0x0412a280(puVar20[-1],puVar20[-3] & 0xfffffffffffffffe);
      }
    }
    puStack_5d0 = puVar19;
    func_0x0412a280(puStack_5d8,lStack_5c8 - (long)puStack_5d8);
  }
  *(char *)(param_1 + 8) = cVar14;
  if (cVar14 == '\0') {
    *param_1 = auStack_648._0_8_;
    param_1[1] = unaff_R14;
    param_1[2] = auStack_5e8._0_8_;
    param_1[3] = stack0xfffffffffffffa20;
    param_1[4] = param_3;
    param_1[5] = puStack_658;
    param_1[6] = puStack_650;
    param_1[7] = lVar30;
  }
  return param_1;
}


