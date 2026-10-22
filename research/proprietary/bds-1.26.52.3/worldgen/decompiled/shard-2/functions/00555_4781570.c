/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4881570 (ELF vaddr 0x4781570)
 * Label: caller-of-callee
 * Body:  [[04881570, 0488160e] [04881610, 04881699] [048816a0, 04881746] [04881750, 048817f0] [04881800, 04881875] [04881880, 048818d7] [048818e0, 048823f8] [04882786, 048827ac]]
 * Ghidra: FUN_04881570
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_04881570(uint param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined7 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong extraout_RDX;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined4 *puStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  long lStack_328;
  byte bStack_318;
  undefined7 uStack_317;
  char cStack_310;
  undefined4 uStack_30f;
  undefined2 uStack_30b;
  undefined1 uStack_309;
  undefined7 *puStack_308;
  long *plStack_300;
  ulong uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2c8;
  uint uStack_280;
  long lStack_278;
  ulong uStack_270;
  byte bStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined2 uStack_25f;
  undefined1 uStack_25d;
  undefined4 uStack_25c;
  long lStack_258;
  byte bStack_250;
  undefined7 uStack_24f;
  char cStack_248;
  undefined4 uStack_247;
  undefined2 uStack_243;
  undefined1 uStack_241;
  undefined7 *puStack_240;
  undefined1 auStack_1e6 [65];
  undefined1 auStack_1a5 [205];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  _DAT_0f7ba1c8 = 0x424544524f434b21;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0x3f800000;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_86 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_278 = param_2;
  if (0 < (int)param_1) {
    uStack_270 = (ulong)param_1;
    uVar23 = 0;
    do {
      lVar13 = *(long *)(lStack_278 + uVar23 * 8);
      lVar9 = func_0x0eee2f30(lVar13,0x3d);
      if (lVar9 != 0) {
        uVar10 = func_0x0eee2e90(lVar13);
        if (uVar10 < 0xfffffffffffffff8) {
          uStack_2f8 = uVar23;
          if (uVar10 < 0x17) {
            uStack_350 = CONCAT71(uStack_350._1_7_,(char)uVar10 * '\x02');
            puVar15 = (undefined4 *)((long)&uStack_350 + 1);
            if (uVar10 != 0) goto LAB_048816f0;
                    /* WARNING: Ignoring partial resolution of indirect */
            uStack_350._1_1_ = 0;
          }
          else {
            uVar23 = (uVar10 | 7) + 1;
            if ((uVar10 | 7) == 0x17) {
              uVar23 = 0x1a;
            }
            puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
            if (puVar15 == (undefined4 *)0x0) {
              func_0x0eec74c0(uVar23,0);
            }
            uStack_350 = uVar23 | 1;
            uStack_348 = uVar10;
            puStack_340 = puVar15;
LAB_048816f0:
            uVar23 = uStack_2f8;
            func_0x0eee2ee0(puVar15,lVar13,uVar10);
            *(undefined1 *)((long)puVar15 + uVar10) = 0;
          }
          uVar10 = uStack_348;
          puVar15 = puStack_340;
          if ((uStack_350 & 1) == 0) {
            uVar10 = (ulong)((byte)uStack_350 >> 1);
            puVar15 = (undefined4 *)((long)&uStack_350 + 1);
          }
          uVar21 = (ulong)(int)(lVar9 - lVar13);
          if (uVar10 < uVar21) {
            uVar21 = uVar10;
          }
          if (uVar21 < 0xfffffffffffffff8) {
            if (uVar21 < 0x17) {
              uStack_2e8._1_7_ = (undefined7)((ulong)uStack_2e8 >> 8);
              uStack_2e8 = (byte *)CONCAT71(uStack_2e8._1_7_,(char)uVar21 * '\x02');
              lVar11 = (long)&uStack_2e8 + 1;
              if (uVar21 != 0) goto LAB_048817a3;
            }
            else {
              uVar23 = (uVar21 | 7) + 1;
              if ((uVar21 | 7) == 0x17) {
                uVar23 = 0x1a;
              }
              lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
              if (lVar11 == 0) {
                func_0x0eec74c0(uVar23,0);
              }
              uStack_2e8 = (byte *)(uVar23 | 1);
              uVar23 = uStack_2f8;
              uStack_2e0 = uVar21;
              lStack_2d8 = lVar11;
LAB_048817a3:
              func_0x0eee2ee0(lVar11,puVar15,uVar21);
            }
            *(undefined1 *)(lVar11 + uVar21) = 0;
            uVar20 = *(undefined8 *)(lStack_278 + uVar23 * 8);
            uVar10 = func_0x0eee2e90(uVar20);
            if (0xfffffffffffffff7 < uVar10) goto LAB_0488238a;
            if (uVar10 < 0x17) {
              uStack_338 = (long *)CONCAT71(uStack_338._1_7_,(char)uVar10 * '\x02');
              lVar11 = (long)&uStack_338 + 1;
              if (uVar10 != 0) goto LAB_04881850;
            }
            else {
              uVar23 = (uVar10 | 7) + 1;
              if ((uVar10 | 7) == 0x17) {
                uVar23 = 0x1a;
              }
              lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
              if (lVar11 == 0) {
                func_0x0eec74c0(uVar23,0);
              }
              uStack_338 = (long *)(uVar23 | 1);
              uVar23 = uStack_2f8;
              uStack_330 = uVar10;
              lStack_328 = lVar11;
LAB_04881850:
              func_0x0eee2ee0(lVar11,uVar20,uVar10);
            }
            *(undefined1 *)(lVar11 + uVar10) = 0;
            uVar10 = uStack_330;
            if (((ulong)uStack_338 & 1) == 0) {
              uVar10 = (ulong)uStack_338 >> 1 & 0x7f;
            }
            uVar24 = (lVar9 - lVar13 << 0x20) + 0x100000000 >> 0x20;
            uVar21 = uVar10 - uVar24;
            if (uVar10 < uVar24) goto LAB_0488238f;
            lVar13 = (long)&uStack_338 + 1;
            if (((ulong)uStack_338 & 1) != 0) {
              lVar13 = lStack_328;
            }
            if (uVar21 < 0xfffffffffffffff8) {
              if (uVar21 < 0x17) {
                bStack_318 = (char)uVar21 * '\x02';
                puVar12 = &uStack_317;
                if (uVar10 != uVar24) goto LAB_04881930;
              }
              else {
                lVar9 = (uVar21 | 7) + 1;
                if ((uVar21 | 7) == 0x17) {
                  lVar9 = 0x1a;
                }
                puVar12 = (undefined7 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
                if (puVar12 == (undefined7 *)0x0) {
                  func_0x0eec74c0(lVar9,0);
                }
                bStack_318 = (byte)lVar9 | 1;
                uStack_317 = (undefined7)((ulong)lVar9 >> 8);
                uStack_30f = (undefined4)(uVar21 >> 8);
                uStack_30b = (undefined2)(uVar21 >> 0x28);
                uStack_309 = (undefined1)(uVar21 >> 0x38);
                uVar23 = uStack_2f8;
                cStack_310 = (char)uVar21;
                puStack_308 = puVar12;
LAB_04881930:
                func_0x0eee2ee0(puVar12,lVar13 + uVar24,uVar21);
              }
              *(undefined1 *)((long)puVar12 + uVar21) = 0;
              lStack_258 = lStack_2d8;
              bStack_268 = (byte)uStack_2e8;
              uStack_267 = (undefined7)((ulong)uStack_2e8 >> 8);
              uStack_260 = (undefined1)uStack_2e0;
              uStack_25f = (undefined2)(uStack_2e0 >> 8);
              uStack_25d = (undefined1)(uStack_2e0 >> 0x18);
              uStack_25c = (undefined4)(uStack_2e0 >> 0x20);
              uStack_2e8 = (byte *)0x0;
              uStack_2e0 = 0;
              lStack_2d8 = 0;
              puStack_240 = puStack_308;
              bStack_250 = bStack_318;
              uStack_24f = uStack_317;
              cStack_248 = cStack_310;
              uStack_247 = uStack_30f;
              uStack_243 = uStack_30b;
              uStack_241 = uStack_309;
              func_0x04882ff0(&uStack_d8,&bStack_268);
              if ((bStack_250 & 1) != 0) {
                func_0x0412a280(puStack_240,CONCAT71(uStack_24f,bStack_250) & 0xfffffffffffffffe);
              }
              if ((bStack_268 & 1) != 0) {
                func_0x0412a280(lStack_258,CONCAT71(uStack_267,bStack_268) & 0xfffffffffffffffe);
              }
              if (((ulong)uStack_338 & 1) != 0) {
                func_0x0412a280(lStack_328,(ulong)uStack_338 & 0xfffffffffffffffe);
              }
              if ((uStack_350 & 1) != 0) {
                func_0x0412a280(puStack_340,uStack_350 & 0xfffffffffffffffe);
              }
              goto LAB_04881610;
            }
          }
          else {
            FUN_04882e30();
LAB_0488238a:
            FUN_04882e30();
LAB_0488238f:
            func_0x04882ee0();
          }
          FUN_04882e30();
        }
        FUN_04882e30();
        goto LAB_0488239e;
      }
LAB_04881610:
      uVar23 = uVar23 + 1;
    } while (uStack_270 != uVar23);
  }
  bStack_268 = 0x14;
  uVar23 = 0x7265767265732d2d;
  uStack_267 = 0x65767265732d2d;
  uStack_260 = 0x72;
  uStack_25f = 0x6449;
  uStack_25d = 0;
  lVar13 = func_0x04883c90(&uStack_d8,&bStack_268);
  if ((bStack_268 & 1) != 0) {
    func_0x0412a280(lStack_258,CONCAT71(uStack_267,bStack_268) & 0xfffffffffffffffe);
  }
  if (lVar13 == 0) {
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    bStack_268 = (byte)puVar14;
    uStack_267 = (undefined7)((ulong)puVar14 >> 8);
    uStack_260 = SUB81(&uStack_d8,0);
    uStack_25f = (undefined2)((ulong)&uStack_d8 >> 8);
    uStack_25d = (undefined1)((ulong)&uStack_d8 >> 0x18);
    uStack_25c = (undefined4)((ulong)&uStack_d8 >> 0x20);
    lStack_258 = 1;
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined1 *)(puVar14 + 2) = 0x14;
    *(undefined8 *)((long)puVar14 + 0x11) = 0x7265767265732d2d;
    *(undefined2 *)((long)puVar14 + 0x19) = 0x6449;
    *(undefined1 *)((long)puVar14 + 0x1b) = 0;
    *(undefined2 *)(puVar14 + 5) = 0;
    puVar14[1] = 0x39d0b26880fb4305;
    func_0x04883f10(&uStack_d8,puVar14);
    if ((extraout_RDX & 1) == 0) {
      if ((*(byte *)(puVar14 + 5) & 1) != 0) {
        func_0x0412a280(puVar14[7],puVar14[5] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar14 + 2) & 1) != 0) {
        func_0x0412a280(puVar14[4],puVar14[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar14,0x40);
    }
  }
  func_0x0eeae7a0(&uStack_d8);
  puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar15 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  uVar20 = _UNK_014471b0;
  uStack_350 = 0x69;
  uStack_348 = 0x65;
  *(undefined8 *)(puVar15 + 0x14) = _DAT_014471a8;
  *(undefined8 *)(puVar15 + 0x16) = uVar20;
  uVar20 = _UNK_014471a0;
  *(undefined8 *)(puVar15 + 0x10) = _DAT_01447198;
  *(undefined8 *)(puVar15 + 0x12) = uVar20;
  uVar20 = _UNK_01447190;
  *(undefined8 *)(puVar15 + 0xc) = _DAT_01447188;
  *(undefined8 *)(puVar15 + 0xe) = uVar20;
  uVar20 = _UNK_01447180;
  *(undefined8 *)(puVar15 + 8) = _DAT_01447178;
  *(undefined8 *)(puVar15 + 10) = uVar20;
  uVar20 = _UNK_01447170;
  *(undefined8 *)(puVar15 + 4) = _DAT_01447168;
  *(undefined8 *)(puVar15 + 6) = uVar20;
  uVar4 = _UNK_01447164;
  uVar3 = _UNK_01447160;
  uVar2 = _UNK_0144715c;
  *puVar15 = _DAT_01447158;
  puVar15[1] = uVar2;
  puVar15[2] = uVar3;
  puVar15[3] = uVar4;
  *(undefined8 *)((long)puVar15 + 0x5d) = 0x6162336537616530;
  *(undefined1 *)((long)puVar15 + 0x65) = 0;
  plStack_2f0 = (long *)0x0;
  puStack_340 = puVar15;
  func_0x0d77da40(&bStack_318,&plStack_2f0);
  plVar16 = plStack_2f0;
  plStack_2f0 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
  }
  uStack_338 = (long *)0x0;
  uStack_330 = 0;
  if (DAT_0f726cd8 == '\0') {
LAB_0488239e:
    iVar7 = func_0x04108328(&DAT_0f726cd8);
    if (iVar7 != 0) {
      _DAT_0f726cc8 = (code *)&UNK_0d782e90;
      _DAT_0f726cd0 = &UNK_0d782f30;
      func_0x0410844d(&DAT_0f726cd8);
    }
  }
  plVar16 = (long *)(*_DAT_0f726cc8)(0);
  uStack_338 = plVar16;
  if (plVar16 != (long *)0x0) {
    func_0x04884840(&bStack_268,plVar16);
    uStack_330 = CONCAT71(uStack_267,bStack_268);
  }
  (**(code **)(*plVar16 + 0x10))(plVar16);
  (**(code **)(*plVar16 + 0x18))(plVar16);
  (**(code **)(*plVar16 + 0x20))(&bStack_268,plVar16);
  uVar20 = CONCAT71(uStack_267,bStack_268);
  plVar16 = (long *)CONCAT44(uStack_25c,CONCAT13(uStack_25d,CONCAT21(uStack_25f,uStack_260)));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar17 = plVar16 + 1;
    lVar13 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN_0412c2d0(plVar16);
    }
  }
  bStack_268 = 0x14;
  uStack_267 = (undefined7)uVar23;
  uStack_260 = (undefined1)(uVar23 >> 0x38);
  uStack_25f = 0x6449;
  uStack_25d = 0;
  uStack_2e8 = &bStack_268;
  lVar13 = func_0x04884a60(&uStack_d8,&bStack_268,&UNK_01563a4f,&uStack_2e8,&plStack_300);
  func_0x04945dd0(lVar13 + 0x28,&uStack_350,uVar20);
  if ((bStack_268 & 1) != 0) {
    func_0x0412a280(lStack_258,CONCAT71(uStack_267,bStack_268) & 0xfffffffffffffffe);
  }
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe8);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0xe8,0);
  }
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *plVar17 = (long)&UNK_0f087e68;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f088f08;
  plVar17[1] = (long)puVar14;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &UNK_0f0893a0;
  puVar18[3] = puVar14;
  plVar17[2] = (long)puVar18;
  plVar17[3] = 0;
  plVar17[4] = 0;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plStack_300 = plVar17;
  func_0x0d774430(plVar16,&plStack_300,1);
  plVar17 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  *plVar16 = (long)&UNK_0ef41120;
  plVar16[3] = (long)&UNK_0ef41910;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  plVar16[0xd] = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = 0;
  plVar16[0x10] = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  plVar16[0x13] = 0;
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  plVar16[0x17] = 0;
  plVar16[0x18] = 0;
  plVar16[0x19] = 0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = 0;
  plVar16[0x1c] = 0;
  lVar13 = func_0x0d777110(plVar16);
  plVar17 = (long *)(plVar16[4] + 0x218);
  if (lVar13 != 0) {
    plVar17 = (long *)(lVar13 + 8);
  }
  iVar7 = func_0x0eee31d0(&bStack_268);
  if (iVar7 != 0) goto LAB_0488212d;
  uVar23 = func_0x0eee2e90(&bStack_268);
  if (0xfffffffffffffff7 < uVar23) {
    uVar20 = FUN_04882e30();
    func_0x048835c0(&bStack_268);
    func_0x04882900(&uStack_d8);
    _DAT_0f7ba1c8 = 0xbdbabbadb0bcb4de;
    func_0x0eee2d70(uVar20);
    pcVar1 = (code *)swi(3);
    uVar23 = (*pcVar1)();
    return uVar23;
  }
  if (uVar23 < 0x17) {
    uStack_2e8 = (byte *)CONCAT71(uStack_2e8._1_7_,(char)uVar23 * '\x02');
    lVar13 = (long)&uStack_2e8 + 1;
    if (uVar23 != 0) goto LAB_04881fc1;
  }
  else {
    uVar10 = 0x1a;
    if ((uVar23 | 7) != 0x17) {
      uVar10 = (uVar23 | 7) + 1;
    }
    lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
    if (lVar13 == 0) {
      func_0x0eec74c0(uVar10,0);
    }
    uStack_2e8 = (byte *)(uVar10 | 1);
    uStack_2e0 = uVar23;
    lStack_2d8 = lVar13;
LAB_04881fc1:
    func_0x0eee2f00(lVar13,&bStack_268,uVar23);
  }
  *(undefined1 *)(lVar13 + uVar23) = 0;
  func_0x0412f8c0(&uStack_2e8,&UNK_011d0654,1);
  uVar19 = func_0x0eee2e90(auStack_1e6);
  func_0x0412f8c0(&uStack_2e8,auStack_1e6,uVar19);
  func_0x0412f8c0(&uStack_2e8,&UNK_011d0654,1);
  uVar19 = func_0x0eee2e90(auStack_1a5);
  func_0x0412f8c0(&uStack_2e8,auStack_1a5,uVar19);
  lVar13 = *plVar17;
  pbVar22 = (byte *)(lVar13 + 8);
  if (pbVar22 != (byte *)&uStack_2e8) {
    if ((*pbVar22 & 1) == 0) {
      if (((ulong)uStack_2e8 & 1) == 0) {
        *(long *)(lVar13 + 0x18) = lStack_2d8;
        *(undefined4 *)pbVar22 = (undefined4)uStack_2e8;
        *(undefined4 *)(lVar13 + 0xc) = uStack_2e8._4_4_;
        *(undefined4 *)(lVar13 + 0x10) = (undefined4)uStack_2e0;
        *(undefined4 *)(lVar13 + 0x14) = uStack_2e0._4_4_;
      }
      else {
        func_0x04885070(pbVar22,lStack_2d8,uStack_2e0);
      }
    }
    else {
      uVar23 = (ulong)uStack_2e8 >> 1 & 0x7f;
      lVar13 = (long)&uStack_2e8 + 1;
      if (((ulong)uStack_2e8 & 1) != 0) {
        uVar23 = uStack_2e0;
        lVar13 = lStack_2d8;
      }
      func_0x04885120(pbVar22,lVar13,uVar23);
    }
  }
  lVar13 = *plVar17;
  pbVar22 = (byte *)(lVar13 + 0x20);
  if (pbVar22 != (byte *)&uStack_2e8) {
    if ((*pbVar22 & 1) == 0) {
      if (((ulong)uStack_2e8 & 1) == 0) {
        *(long *)(lVar13 + 0x30) = lStack_2d8;
        *(undefined4 *)pbVar22 = (undefined4)uStack_2e8;
        *(undefined4 *)(lVar13 + 0x24) = uStack_2e8._4_4_;
        *(undefined4 *)(lVar13 + 0x28) = (undefined4)uStack_2e0;
        *(undefined4 *)(lVar13 + 0x2c) = uStack_2e0._4_4_;
      }
      else {
        func_0x04885070(pbVar22,lStack_2d8,uStack_2e0);
      }
    }
    else {
      uVar23 = (ulong)uStack_2e8 >> 1 & 0x7f;
      lVar13 = (long)&uStack_2e8 + 1;
      if (((ulong)uStack_2e8 & 1) != 0) {
        uVar23 = uStack_2e0;
        lVar13 = lStack_2d8;
      }
      func_0x04885120(pbVar22,lVar13,uVar23);
    }
  }
  if (((ulong)uStack_2e8 & 1) != 0) {
    func_0x0412a280(lStack_2d8,(ulong)uStack_2e8 & 0xfffffffffffffffe);
  }
LAB_0488212d:
  uVar5 = func_0x04136c20();
  *(undefined1 *)(*plVar17 + 0x17b) = uVar5;
  func_0x0eee31e0(&uStack_2e8);
  *(ulong *)(*plVar17 + 0x148) = (ulong)uStack_280 * lStack_2c8;
  (**(code **)(*plVar16 + 200))(plVar16);
  func_0x048c2270(&bStack_268);
  uVar8 = func_0x048c3bb0(&bStack_268,uVar20,&uStack_d8);
  func_0x048c3350(&bStack_268);
  (**(code **)(*plVar16 + 0xd0))(plVar16);
  (**(code **)(*plVar16 + 0x3c8))(plVar16);
  (**(code **)(*plVar16 + 8))(plVar16);
  plVar16 = (long *)func_0x04885260(0xf548798,&UNK_0145e729,0xe);
  func_0x041442d0(&bStack_268,*(long *)(*plVar16 + -0x18) + (long)plVar16);
  plVar17 = (long *)func_0x041681f0(&bStack_268,0xf547a30);
  cVar6 = (**(code **)(*plVar17 + 0x38))(plVar17,10);
  FUN_04167a40(&bStack_268);
  func_0x0413c490(plVar16,(int)cVar6);
  func_0x04138be0(plVar16);
  if (uStack_330 != 0) {
    func_0x048846c0();
    uStack_330 = 0;
  }
  if (uStack_338 != (long *)0x0) {
    (**(code **)(*uStack_338 + 8))();
  }
  if (CONCAT17(uStack_309,CONCAT25(uStack_30b,CONCAT41(uStack_30f,cStack_310))) != 0) {
    func_0x048844d0();
    cStack_310 = '\0';
    uStack_30f = 0;
    uStack_30b = 0;
    uStack_309 = 0;
  }
  plVar16 = (long *)CONCAT71(uStack_317,bStack_318);
  bStack_318 = 0;
  uStack_317 = 0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
    if (CONCAT17(uStack_309,CONCAT25(uStack_30b,CONCAT41(uStack_30f,cStack_310))) != 0) {
      func_0x048844d0();
      cStack_310 = '\0';
      uStack_30f = 0;
      uStack_30b = 0;
      uStack_309 = 0;
    }
    plVar16 = (long *)CONCAT71(uStack_317,bStack_318);
    bStack_318 = 0;
    uStack_317 = 0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
  }
  if ((uStack_350 & 1) != 0) {
    func_0x0412a280(puStack_340,uStack_350 & 0xfffffffffffffffe);
  }
  func_0x04882900(&uStack_d8);
  _DAT_0f7ba1c8 = 0xbdbabbadb0bcb4de;
  return (ulong)uVar8;
}



/* ---- referenced strings ----
 * 0x1447158  https://o339720.ingest.us.sentry.io/api/1876558/minidump/?sentry_key=a39139287937423893a380b90ea
 * 0x1447168  ingest.us.sentry.io/api/1876558/minidump/?sentry_key=a39139287937423893a380b90ea7e3ba
 * 0x1447178  .io/api/1876558/minidump/?sentry_key=a39139287937423893a380b90ea7e3ba
 * 0x1447188  minidump/?sentry_key=a39139287937423893a380b90ea7e3ba
 * 0x1447198  _key=a39139287937423893a380b90ea7e3ba
 * 0x14471a8  7423893a380b90ea7e3ba
 */
