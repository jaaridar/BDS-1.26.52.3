/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6268200 (ELF vaddr 0x6168200)
 * Label: caller-of-callee
 * Body:  [[06268200, 062682d6] [062682e0, 06268327] [06268330, 06268714] [06268720, 06268735] [06268740, 06268a88] [06268a90, 06268afd] [06268b00, 06268b4e] [06268b50, 06269078] [06269080, 06269255] [06269260, 062693b6] [062693ba, 062693f1] [062693f5, 06269414] [06269436, 06269443] [0626952b, 062695d7]]
 * Ghidra: FUN_06268200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06268200(undefined8 *param_1,long param_2,ulong *param_3,uint param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined *puVar18;
  long *plVar19;
  byte bVar20;
  long *plVar21;
  ulong uVar22;
  ulong *puVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uStack_1f4;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *plStack_168;
  long lStack_160;
  undefined8 *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  ulong *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c8;
  byte *pbStack_50;
  ulong uStack_48;
  byte *pbStack_40;
  ulong uStack_38;
  
  plVar16 = (long *)(ulong)param_4;
  plVar21 = (long *)(param_2 + 0x30);
  plVar25 = (long *)(long)(int)param_4;
  plVar19 = *(long **)(param_2 + 0x38);
  bVar20 = (byte)param_4;
  puStack_150 = param_1;
  if (plVar19 != (long *)0x0) {
    uVar9 = (long)plVar19 - ((ulong)plVar19 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      plVar15 = (long *)((long)plVar19 + 7U & (ulong)plVar25);
    }
    else {
      plVar15 = plVar25;
      if (plVar19 <= plVar25) {
        plVar15 = (long *)(ulong)(byte)(((ushort)param_4 & 0xff) % (ushort)(byte)plVar19);
      }
    }
    plVar17 = *(long **)(*plVar21 + (long)plVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if ((long *)plVar17[1] == plVar25) {
            if (*(byte *)(plVar17 + 2) == bVar20) goto LAB_06268d97;
          }
          else if ((long *)((ulong)plVar17[1] & (long)plVar19 - 1U) != plVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          plVar14 = (long *)plVar17[1];
          if (plVar14 == plVar25) {
            if (*(byte *)(plVar17 + 2) == bVar20) goto LAB_06268d97;
          }
          else {
            if (plVar19 <= plVar14) {
              if (((ulong)plVar14 | (ulong)plVar19) >> 0x20 == 0) {
                if ((long *)(((ulong)plVar14 & 0xffffffff) % ((ulong)plVar19 & 0xffffffff)) ==
                    plVar15) goto LAB_062682ea;
                break;
              }
              plVar14 = (long *)((ulong)plVar14 % (ulong)plVar19);
            }
            if (plVar14 != plVar15) break;
          }
LAB_062682ea:
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  plStack_1c0 = plVar21;
  if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbVar1 = (byte *)((long)param_3 + 1);
  bVar26 = ((byte)*param_3 & 1) == 0;
  pbStack_40 = (byte *)param_3[2];
  if (bVar26) {
    pbStack_40 = pbVar1;
  }
  uStack_38 = (ulong)(byte)((byte)*param_3 >> 1);
  if (!bVar26) {
    uStack_38 = param_3[1];
  }
  cVar6 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&pbStack_40);
  if (cVar6 == '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    bVar26 = ((byte)*param_3 & 1) == 0;
    pbStack_50 = (byte *)param_3[2];
    if (bVar26) {
      pbStack_50 = pbVar1;
    }
    uStack_48 = (ulong)(byte)((byte)*param_3 >> 1);
    if (!bVar26) {
      uStack_48 = param_3[1];
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&puStack_108,&DAT_0f7b8f98,&pbStack_50);
    uStack_1e8 = (byte *)0xcf0bf0d9a4804f7d;
    puStack_1e0 = &UNK_0140f690;
    puStack_1d8 = (undefined *)0x1;
    uStack_1d0 = 0x99;
    if (bStack_c8 == 0) {
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      func_0x0eedeb80(2,0x2d,&puStack_108,&uStack_1b8,&uStack_1e8);
      if ((uStack_1b8 & 1) != 0) {
        func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
      }
    }
    puVar18 = uStack_f8;
    if ((bStack_c8 & 1) == 0) {
      uStack_198 = puStack_108;
      uStack_190 = (ulong)plStack_100;
      uStack_188 = (undefined4)uStack_f8;
      uStack_184 = uStack_f8._4_4_;
      puStack_180 = puStack_f0;
      uStack_178 = lStack_e8;
      uStack_f8 = (undefined *)0x0;
      puStack_f0 = (undefined *)0x0;
      lStack_e8 = 0;
      lStack_170 = lStack_e0;
      plStack_168 = (long *)lStack_d8;
      lStack_160 = lStack_d0;
      bVar26 = ((byte)*param_3 & 1) != 0;
      uStack_1e8 = pbVar1;
      if (bVar26) {
        uStack_1e8 = (byte *)param_3[2];
      }
      puStack_1e0 = (undefined *)(ulong)(byte)((byte)*param_3 >> 1);
      if (bVar26) {
        puStack_1e0 = (undefined *)param_3[1];
      }
      func_0x0470d9a0(&uStack_1b8,&UNK_01341e73,0x2a,0xd,&uStack_1e8);
      pbVar1 = uStack_1e8;
      uStack_1e8._7_1_ = SUB81(pbVar1,7);
      uStack_1e8._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
      func_0x0d858ce0(&puStack_108,&uStack_1e8,&uStack_1b8);
      *(undefined1 *)puStack_150 = 1;
      func_0x05e91e00(puStack_150 + 1,&puStack_108);
      func_0x048fb670(&puStack_108);
      if ((uStack_1b8 & 1) != 0) {
        func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
      }
      if (lStack_e0 != 0) {
        lVar24 = lStack_e0;
        if (lStack_e0 != lStack_d8) {
          do {
            lVar24 = lStack_d8 + -0x40;
            func_0x048b3e80(lVar24);
            lStack_d8 = lVar24;
          } while (lVar24 != lStack_e0);
          puVar18 = (undefined *)CONCAT44(uStack_184,uStack_188);
          lVar24 = lStack_170;
          lStack_d0 = lStack_160;
        }
        plStack_168 = (long *)lStack_e0;
        func_0x0412a280(lVar24,lStack_d0 - lVar24);
      }
      puVar5 = puStack_180;
      if (puVar18 == (undefined *)0x0) {
        return;
      }
      for (; puVar18 != puVar5; puVar5 = puVar5 + -0x50) {
        if ((puVar5[-8] == '\x01') && ((puVar5[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar5 + -0x20),
                          *(ulong *)(puVar5 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uVar9 = uStack_178 - (long)puVar18;
      puStack_180 = puVar18;
      goto LAB_06268a7f;
    }
  }
  (**(code **)(**(long **)(param_2 + 0x78) + 0x28))(&puStack_108);
  uStack_198 = puStack_108;
  puStack_108 = (ulong *)0x0;
  if ((*param_3 & 1) == 0) {
    puStack_180 = (undefined *)param_3[2];
    uStack_190 = *param_3;
    uStack_188 = (undefined4)param_3[1];
    uStack_184 = *(undefined4 *)((long)param_3 + 0xc);
  }
  else {
    func_0x0412e5e0(&uStack_190,param_3[2],param_3[1]);
  }
  plVar21 = plStack_1c0;
  uVar7 = func_0x09b49f30((int)(char)bVar20);
  puVar10 = puStack_108;
  uStack_178._0_3_ = CONCAT21(5,uVar7);
  lStack_170 = 0;
  plStack_168 = (long *)0x0;
  lStack_160 = 0;
  puStack_108 = (ulong *)0x0;
  if (puVar10 != (ulong *)0x0) {
    (**(code **)(*puVar10 + 8))();
  }
  func_0x06269760(&plStack_1f0,&uStack_198);
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  puStack_108 = *(ulong **)(param_2 + 0x60);
  plVar19 = *(long **)(param_2 + 0x68);
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
  }
  uStack_f8 = *(undefined **)(param_2 + 0x70);
  uStack_128 = 0;
  plStack_120 = (long *)0x0;
  uStack_118 = 0;
  plStack_100 = plVar19;
  if ((puStack_108 == (ulong *)0x0) || ((byte)*puStack_108 == 0)) {
    func_0x04890760();
LAB_062692d1:
    func_0x0eec74c0(0x20,0);
  }
  else {
    func_0x09b4b8c0(&uStack_1e8,plStack_1f0,uVar12,&puStack_108);
    puStack_108 = (ulong *)0x0;
    plStack_100 = (long *)0x0;
    if (plVar19 == (long *)0x0) {
      uStack_f8 = (undefined *)0x0;
    }
    else {
      LOCK();
      plVar16 = plVar19 + 1;
      lVar24 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        FUN_0412c2d0(plVar19);
      }
      plVar19 = plStack_100;
      uStack_f8 = (undefined *)0x0;
      if (plStack_100 != (long *)0x0) {
        LOCK();
        plVar16 = plStack_100 + 1;
        lVar24 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          FUN_0412c2d0(plVar19);
        }
      }
    }
    plVar19 = plStack_120;
    uStack_128 = 0;
    plStack_120 = (long *)0x0;
    if (plVar19 == (long *)0x0) {
      uStack_118 = 0;
      plVar19 = (long *)0x0;
    }
    else {
      LOCK();
      plVar16 = plVar19 + 1;
      lVar24 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        FUN_0412c2d0(plVar19);
      }
      plVar19 = plStack_120;
      uStack_118 = 0;
      if (plStack_120 != (long *)0x0) {
        LOCK();
        plVar16 = plStack_120 + 1;
        lVar24 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plStack_120 + 0x10))(plStack_120);
          FUN_0412c2d0(plVar19);
        }
      }
    }
    cVar6 = func_0x0d669b20(&uStack_1e8);
    if (cVar6 != '\0') {
      for (puVar2 = *(undefined8 **)((long)uStack_1e8 + 0x10); puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        for (plVar16 = (long *)puVar2[0xe]; plVar16 != (long *)puVar2[0xf]; plVar16 = plVar16 + 2) {
          if ((*(int *)(*plVar16 + 0x20) != 0x19) && (*(int *)(*plVar16 + 0x20) != 8)) {
            func_0x062698f0(&puStack_108);
            puVar10 = (ulong *)FUN_0412f0e0(&puStack_108,0,&UNK_013c656d,0x18);
            uStack_138 = puVar10[2];
            uStack_148 = *puVar10;
            uStack_140 = puVar10[1];
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            if (((ulong)puStack_108 & 1) != 0) {
              func_0x0412a280(uStack_f8,(ulong)puStack_108 & 0xfffffffffffffffe);
            }
            uVar9 = uStack_1b8;
            uStack_1b8._7_1_ = SUB81(uVar9,7);
            uStack_1b8._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
            func_0x0d858ce0(&puStack_108,&uStack_1b8,&uStack_148);
            *(undefined1 *)puStack_150 = 1;
            func_0x05e91e00(puStack_150 + 1,&puStack_108);
            func_0x048fb670(&puStack_108);
            if ((uStack_148 & 1) != 0) {
              func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
            }
            goto LAB_06269060;
          }
        }
      }
    }
    plVar16 = *(long **)(param_2 + 0x38);
    if (plVar16 != (long *)0x0) {
      uVar9 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar9 >> 0x38 < 2) {
        plVar19 = (long *)((long)plVar16 + 7U & (ulong)plVar25);
      }
      else {
        plVar19 = plVar25;
        if ((plVar16 <= plVar25) && (plVar16 <= plVar25)) {
          plVar19 = (long *)((ulong)param_4 % ((ulong)plVar16 & 0xffffffff));
        }
      }
      puVar2 = *(undefined8 **)(*plVar21 + (long)plVar19 * 8);
      if ((puVar2 != (undefined8 *)0x0) && (param_3 = (ulong *)*puVar2, param_3 != (ulong *)0x0)) {
        if ((byte)(uVar9 >> 0x38) < 2) {
          do {
            if ((long *)param_3[1] == plVar25) {
              if ((byte)param_3[2] == bVar20) goto LAB_06269012;
            }
            else if ((long *)(param_3[1] & (long)plVar16 - 1U) != plVar19) break;
            param_3 = (ulong *)*param_3;
          } while (param_3 != (ulong *)0x0);
        }
        else {
          do {
            plVar15 = (long *)param_3[1];
            if (plVar15 == plVar25) {
              if ((byte)param_3[2] == bVar20) goto LAB_06269012;
            }
            else {
              if (plVar16 <= plVar15) {
                if (((ulong)plVar15 | (ulong)plVar16) >> 0x20 == 0) {
                  if ((long *)(((ulong)plVar15 & 0xffffffff) % ((ulong)plVar16 & 0xffffffff)) ==
                      plVar19) goto LAB_06268b0f;
                  break;
                }
                plVar15 = (long *)((ulong)plVar15 % (ulong)plVar16);
              }
              if (plVar15 != plVar19) break;
            }
LAB_06268b0f:
            param_3 = (ulong *)*param_3;
          } while (param_3 != (ulong *)0x0);
        }
      }
    }
    param_3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    uStack_1f4 = param_4;
    if (param_3 == (ulong *)0x0) goto LAB_062692d1;
  }
  plStack_100 = plVar21;
  uStack_f8 = (undefined *)0x1;
  *param_3 = 0;
  param_3[1] = (ulong)plVar25;
  *(byte *)(param_3 + 2) = (byte)uStack_1f4;
  param_3[3] = 0;
  fVar27 = (float)(*(long *)(param_2 + 0x48) + 1);
  puStack_108 = param_3;
  if ((long)plVar16 < 0) {
    fVar29 = (float)plVar16;
    fVar28 = *(float *)(param_2 + 0x50);
    if (plVar16 != (long *)0x0) goto LAB_06268c35;
LAB_06268c46:
    uVar9 = 1;
    if ((long *)0x2 < plVar16) {
      uVar9 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar19 = (long *)(uVar9 | (long)plVar16 * 2);
    fVar27 = (float)func_0x0eee3ab0(fVar27 / fVar28);
    plVar21 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27);
    if (plVar21 < plVar19) {
      plVar21 = plVar19;
    }
    plVar19 = (long *)0x2;
    if ((plVar21 == (long *)0x1) || (plVar19 = plVar21, ((ulong)plVar21 & (long)plVar21 - 1U) == 0))
    {
      bVar26 = plVar19 < plVar16;
      if (plVar19 <= plVar16) goto LAB_06268e70;
LAB_06268cbe:
      if ((ulong)plVar19 >> 0x3d != 0) {
        uVar12 = func_0x04882eb0();
        func_0x041084d6(&DAT_0f7b8fb8);
        uVar12 = func_0x0eee2d70(uVar12);
        func_0x048fb670(&puStack_108);
        if (((ulong)uStack_1e8 & 1) == 0) {
          do {
            while( true ) {
              func_0x0eee2d70(uVar12);
              func_0x0412a280(puStack_180,uStack_190 & 0xfffffffffffffffe);
              puVar23 = puStack_108;
              puVar10 = uStack_198;
              uStack_198 = (ulong *)0x0;
              if (puVar10 == (ulong *)0x0) break;
              (**(code **)(*puVar10 + 8))();
              puVar23 = puStack_108;
              puStack_108 = (ulong *)0x0;
              if (puVar23 != (ulong *)0x0) goto LAB_06269591;
            }
            puStack_108 = (ulong *)0x0;
          } while (puVar23 == (ulong *)0x0);
LAB_06269591:
          puStack_108 = (ulong *)0x0;
          (**(code **)(*puVar23 + 8))();
          uVar12 = func_0x0eee2d70(uVar12);
        }
        else {
          func_0x0412a280(puStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
          uVar12 = func_0x0eee2d70(uVar12);
          func_0x048fb670(&puStack_108);
          if ((uStack_148 & 1) != 0) {
            func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
          }
        }
        func_0x0626a090(&uStack_1e8);
        plVar21 = plStack_1f0;
        plStack_1f0 = (long *)0x0;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 8))();
        }
        func_0x0626a150(&uStack_198);
        func_0x0eee2d70(uVar12);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar24 = (long)plVar19 * 8;
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar24);
      if (lVar11 == 0) {
        func_0x0eec74c0(lVar24,0);
      }
      lVar3 = *plStack_1c0;
      *plStack_1c0 = lVar11;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,*(long *)(param_2 + 0x38) << 3);
        lVar11 = *(long *)(param_2 + 0x30);
      }
      *(long **)(param_2 + 0x38) = plVar19;
      func_0x0eee2dd0(lVar11,0,lVar24);
      plVar21 = *(long **)(param_2 + 0x40);
      if (plVar21 != (long *)0x0) {
        plVar16 = (long *)plVar21[1];
        uVar9 = (long)plVar19 - 1;
        if (((ulong)plVar19 & uVar9) == 0) {
          *(long *)(lVar11 + ((ulong)plVar16 & uVar9) * 8) = param_2 + 0x40;
          uVar13 = (ulong)plVar16 & uVar9;
          while (plVar19 = plVar21, plVar21 = (long *)*plVar19, plVar21 != (long *)0x0) {
            uVar22 = plVar21[1] & uVar9;
            if (uVar22 != uVar13) {
              if (*(long *)(lVar11 + uVar22 * 8) == 0) {
                *(long **)(lVar11 + uVar22 * 8) = plVar19;
                uVar13 = uVar22;
              }
              else {
                *plVar19 = *plVar21;
                *plVar21 = **(undefined8 **)(lVar11 + uVar22 * 8);
                **(long **)(lVar11 + uVar22 * 8) = (long)plVar21;
                plVar21 = plVar19;
              }
            }
          }
        }
        else {
          if (plVar19 <= plVar16) {
            if (((ulong)plVar16 | (ulong)plVar19) >> 0x20 == 0) {
              plVar16 = (long *)(((ulong)plVar16 & 0xffffffff) % ((ulong)plVar19 & 0xffffffff));
            }
            else {
              plVar16 = (long *)((ulong)plVar16 % (ulong)plVar19);
            }
          }
          *(long *)(lVar11 + (long)plVar16 * 8) = param_2 + 0x40;
          plVar15 = (long *)*plVar21;
          while (plVar15 != (long *)0x0) {
            plVar17 = (long *)plVar15[1];
            if (plVar19 <= plVar17) {
              if (((ulong)plVar17 | (ulong)plVar19) >> 0x20 == 0) {
                plVar17 = (long *)(((ulong)plVar17 & 0xffffffff) % ((ulong)plVar19 & 0xffffffff));
              }
              else {
                plVar17 = (long *)((ulong)plVar17 % (ulong)plVar19);
              }
            }
            if (plVar17 != plVar16) {
              if (*(long *)(lVar11 + (long)plVar17 * 8) == 0) {
                *(long **)(lVar11 + (long)plVar17 * 8) = plVar21;
                plVar16 = plVar17;
              }
              else {
                *plVar21 = *plVar15;
                *plVar15 = **(long **)(lVar11 + (long)plVar17 * 8);
                **(undefined8 **)(lVar11 + (long)plVar17 * 8) = plVar15;
                plVar15 = plVar21;
              }
            }
            plVar21 = plVar15;
            plVar15 = (long *)*plVar21;
          }
        }
      }
    }
    else {
      plVar19 = (long *)func_0x0412c3f0();
      plVar16 = *(long **)(param_2 + 0x38);
      bVar26 = plVar19 < plVar16;
      if (plVar16 < plVar19) goto LAB_06268cbe;
LAB_06268e70:
      if (bVar26) {
        fVar27 = (float)func_0x0eee3ab0((float)*(ulong *)(param_2 + 0x48) /
                                        *(float *)(param_2 + 0x50));
        plVar21 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27);
        if ((plVar16 < (long *)0x3) ||
           (uVar9 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555),
           uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
           1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          plVar21 = (long *)func_0x0412c3f0(plVar21);
        }
        else if ((long *)0x1 < plVar21) {
          lVar24 = 0x3f;
          if ((long)plVar21 - 1U != 0) {
            for (; (long)plVar21 - 1U >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          plVar21 = (long *)(1L << (-((byte)lVar24 ^ 0x3f) & 0x3f));
        }
        if (plVar21 < plVar19) {
          plVar21 = plVar19;
        }
        if (plVar21 < plVar16) {
          plVar19 = plVar21;
          if (plVar21 != (long *)0x0) goto LAB_06268cbe;
          lVar24 = *plStack_1c0;
          *plStack_1c0 = 0;
          if (lVar24 != 0) {
            func_0x0412a280(lVar24,*(long *)(param_2 + 0x38) << 3);
          }
          *(undefined8 *)(param_2 + 0x38) = 0;
        }
      }
    }
    plVar16 = *(long **)(param_2 + 0x38);
    plVar21 = plStack_1c0;
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      plVar19 = (long *)((ulong)plVar25 & (long)plVar16 + 7U);
    }
    else {
      plVar19 = plVar25;
      if ((plVar16 <= plVar25) && (plVar16 <= plVar25)) {
        plVar19 = (long *)((ulong)uStack_1f4 % ((ulong)plVar16 & 0xffffffff));
      }
    }
  }
  else {
    fVar29 = (float)(long)plVar16;
    fVar28 = *(float *)(param_2 + 0x50);
    if (plVar16 == (long *)0x0) goto LAB_06268c46;
LAB_06268c35:
    if (fVar29 * fVar28 < fVar27) goto LAB_06268c46;
  }
  lVar24 = *plVar21;
  puVar10 = *(ulong **)(lVar24 + (long)plVar19 * 8);
  if (puVar10 == (ulong *)0x0) {
    *param_3 = *(ulong *)(param_2 + 0x40);
    *(ulong **)(param_2 + 0x40) = param_3;
    *(long *)(lVar24 + (long)plVar19 * 8) = param_2 + 0x40;
    if (*param_3 != 0) {
      plVar21 = *(long **)(*param_3 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        *(ulong **)(lVar24 + ((ulong)plVar21 & (long)plVar16 - 1U) * 8) = param_3;
      }
      else {
        if (plVar16 <= plVar21) {
          if (((ulong)plVar21 | (ulong)plVar16) >> 0x20 == 0) {
            *(ulong **)
             (lVar24 + (((ulong)plVar21 & 0xffffffff) % ((ulong)plVar16 & 0xffffffff)) * 8) =
                 param_3;
            goto LAB_0626900e;
          }
          plVar21 = (long *)((ulong)plVar21 % (ulong)plVar16);
        }
        *(ulong **)(lVar24 + (long)plVar21 * 8) = param_3;
      }
    }
  }
  else {
    *param_3 = *puVar10;
    *puVar10 = (ulong)param_3;
  }
LAB_0626900e:
  *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 1;
LAB_06269012:
  plVar19 = plStack_1f0;
  plStack_1f0 = (long *)0x0;
  plVar21 = (long *)param_3[3];
  param_3[3] = (ulong)plVar19;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  puStack_150[6] = 0;
  puStack_150[7] = 0;
  puStack_150[4] = 0;
  puStack_150[5] = 0;
  puStack_150[2] = 0;
  puStack_150[3] = 0;
  *puStack_150 = 0;
  puStack_150[1] = 0;
  puStack_150[8] = 0;
  func_0x05d84ba0(puStack_150 + 1);
LAB_06269060:
  puVar5 = puStack_1e0;
  puVar18 = puStack_1d8;
  if (puStack_1e0 != (undefined *)0x0) {
    for (; puVar5 != puVar18; puVar18 = puVar18 + -0x10) {
      plVar21 = *(long **)(puVar18 + -8);
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar19 = plVar21 + 1;
        lVar24 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          FUN_0412c2d0(plVar21);
        }
      }
    }
    puStack_1d8 = puVar5;
    func_0x0412a280(puStack_1e0,CONCAT44(uStack_1cc,uStack_1d0) - (long)puStack_1e0);
  }
  uVar9 = (ulong)uStack_1e8;
  uStack_1e8 = (byte *)0x0;
  if (uVar9 != 0) {
    func_0x0d67d500(uVar9);
    func_0x0412a280(uVar9,0x40);
  }
  plVar21 = plStack_1f0;
  plStack_1f0 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  plVar21 = plStack_168;
  lStack_170 = 0;
  plStack_168 = (long *)0x0;
  if (plVar21 == (long *)0x0) {
    lStack_160 = 0;
  }
  else {
    LOCK();
    plVar19 = plVar21 + 1;
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      FUN_0412c2d0(plVar21);
    }
    plVar21 = plStack_168;
    lStack_160 = 0;
    if (plStack_168 != (long *)0x0) {
      LOCK();
      plVar19 = plStack_168 + 1;
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        FUN_0412c2d0(plVar21);
      }
    }
  }
  if ((uStack_190 & 1) != 0) {
    func_0x0412a280(puStack_180,uStack_190 & 0xfffffffffffffffe);
  }
  puVar10 = uStack_198;
  uStack_198 = (ulong *)0x0;
  if (puVar10 != (ulong *)0x0) {
    (**(code **)(*puVar10 + 8))();
  }
  return;
LAB_06268d97:
  bVar26 = ((byte)*param_3 & 1) != 0;
  uStack_198 = (ulong *)((long)param_3 + 1);
  if (bVar26) {
    uStack_198 = (ulong *)param_3[2];
  }
  uStack_190 = (ulong)(byte)((byte)*param_3 >> 1);
  if (bVar26) {
    uStack_190 = param_3[1];
  }
  func_0x0470d9a0(&uStack_1e8,&UNK_012a5ce4,0x21,0xd,&uStack_198);
  pbVar1 = (byte *)uStack_198;
  uStack_198._7_1_ = SUB81(pbVar1,7);
  uStack_198._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
  func_0x0d858ce0(&puStack_108,&uStack_198,&uStack_1e8);
  *(undefined1 *)puStack_150 = 1;
  func_0x05e91e00(puStack_150 + 1,&puStack_108);
  func_0x048fb670(&puStack_108);
  if (((ulong)uStack_1e8 & 1) == 0) {
    return;
  }
  uVar9 = (ulong)uStack_1e8 & 0xfffffffffffffffe;
  puVar18 = puStack_1d8;
LAB_06268a7f:
  func_0x0412a280(puVar18,uVar9);
  return;
}



/* ---- referenced strings ----
 * 0x13f776f  Error
 */
