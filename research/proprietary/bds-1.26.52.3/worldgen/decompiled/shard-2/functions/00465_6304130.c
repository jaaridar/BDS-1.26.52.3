/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6404130 (ELF vaddr 0x6304130)
 * Label: caller-of-callee
 * Body:  [[06404130, 06404787] [06404790, 06404b40] [06404b53, 06404b64] [06404bd6, 06404d67]]
 * Ghidra: FUN_06404130
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_06404130(byte *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong *puVar17;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  bool bVar24;
  undefined1 auStack_290 [48];
  char cStack_260;
  undefined1 uStack_25c;
  undefined1 uStack_258;
  undefined1 auStack_250 [64];
  undefined1 auStack_210 [64];
  undefined1 auStack_1d0 [64];
  long lStack_190;
  long lStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  uint uStack_138;
  uint uStack_128;
  byte bStack_110;
  undefined7 uStack_10f;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  byte bStack_b8;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  ulong uStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  
  if ((*param_2 == _DAT_0f7ba058) && (param_2[1] == _DAT_0f7ba060)) {
    pbStack_180 = (byte *)0x6404182;
    puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar13 == (undefined4 *)0x0) {
      pbStack_180 = (byte *)0x6404aa9;
      func_0x0eec74c0(0x30,0);
    }
    uVar14 = _UNK_012bf319;
    uStack_178 = (byte *)0x31;
    uStack_170 = (byte *)0x2b;
    *(ulong *)((long)puVar13 + 0x1b) = CONCAT35(_UNK_012bf316,_DAT_012bf311);
    *(undefined8 *)((long)puVar13 + 0x23) = uVar14;
    uVar14 = CONCAT53(_DAT_012bf311,_UNK_012bf30e);
    *(undefined8 *)(puVar13 + 4) = _DAT_012bf306;
    *(undefined8 *)(puVar13 + 6) = uVar14;
    uVar3 = _UNK_012bf302;
    uVar2 = _UNK_012bf2fe;
    uVar1 = _UNK_012bf2fa;
    *puVar13 = _DAT_012bf2f6;
    puVar13[1] = uVar1;
    puVar13[2] = uVar2;
    puVar13[3] = uVar3;
    *(undefined1 *)((long)puVar13 + 0x2b) = 0;
    uVar20 = *(ulong *)(param_3 + 8);
    uStack_168 = (byte *)puVar13;
    if (uVar20 < *(ulong *)(param_3 + 0x10)) {
      pbStack_180 = (byte *)0x64041ea;
      func_0x0412e5e0(uVar20,puVar13,0x2b);
      *(ulong *)(param_3 + 8) = uVar20 + 0x18;
      uVar20 = 0x30;
      goto LAB_06404624;
    }
    pbStack_180 = (byte *)0x640448c;
    uVar14 = func_0x04909a40(param_3,&uStack_178);
    *(undefined8 *)(param_3 + 8) = uVar14;
    puVar13 = (undefined4 *)uStack_168;
    uVar20 = (ulong)uStack_178;
  }
  else {
    if (DAT_0f7b8fb8 == '\0') {
      pbStack_180 = (byte *)0x6404ad8;
      iVar12 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar12 != 0) {
        pbStack_180 = (byte *)0x6404aec;
        func_0x0ee5ea20(&DAT_0f7b8f98);
        pbStack_180 = (byte *)0x6404b06;
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        pbStack_180 = (byte *)0x6404b12;
        func_0x0410844d(&DAT_0f7b8fb8);
      }
    }
    pbVar16 = param_1 + 1;
    bVar24 = (*param_1 & 1) == 0;
    pbStack_50 = *(byte **)(param_1 + 0x10);
    if (bVar24) {
      pbStack_50 = pbVar16;
    }
    uStack_48 = (ulong)(*param_1 >> 1);
    if (!bVar24) {
      uStack_48 = *(ulong *)(param_1 + 8);
    }
    pbStack_180 = (byte *)0x6404255;
    cVar10 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_50);
    if (cVar10 != '\0') {
      lVar18 = *param_2;
      lVar22 = param_2[1];
      uStack_128 = (uint)lVar22 & 0xffff;
      uStack_178 = (byte *)CONCAT44(uStack_178._4_4_,(int)((ulong)lVar18 >> 0x20));
      uStack_168 = (byte *)(CONCAT44(uStack_168._4_4_,(int)((ulong)lVar18 >> 0x10)) &
                           0xffffffff0000ffff);
      uStack_158 = CONCAT44(uStack_158._4_4_,(int)lVar18) & 0xffffffff0000ffff;
      uStack_148 = CONCAT44(uStack_148._4_4_,(uint)(ushort)((ulong)lVar22 >> 0x30));
      uStack_138 = (uint)((ulong)lVar22 >> 0x10);
      pbStack_180 = (byte *)0x64042ba;
      func_0x0470d9a0(&uStack_f8,&UNK_01287ba2,0x28,0x122112,&uStack_178);
      bVar24 = (*param_1 & 1) != 0;
      uStack_178 = pbVar16;
      if (bVar24) {
        uStack_178 = *(byte **)(param_1 + 0x10);
      }
      uStack_170 = (byte *)(ulong)(*param_1 >> 1);
      if (bVar24) {
        uStack_170 = *(byte **)(param_1 + 8);
      }
      pbVar16 = (byte *)((long)&uStack_f8 + 1);
      uStack_168 = uStack_e8;
      uStack_160 = pbStack_f0;
      if (((ulong)uStack_f8 & 1) == 0) {
        uStack_168 = pbVar16;
        uStack_160 = (byte *)((ulong)uStack_f8 >> 1 & 0x7f);
      }
      pbStack_180 = (byte *)0x6404323;
      func_0x048ad670(&bStack_110,&uStack_178,2,0x2f);
      if (((ulong)uStack_f8 & 1) != 0) {
        pbStack_180 = (byte *)0x6404346;
        func_0x0412a280(uStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
      }
      pbStack_58 = (byte *)(ulong)(bStack_110 >> 1);
      param_1 = (byte *)&uStack_10f;
      pbStack_60 = param_1;
      if ((bStack_110 & 1) != 0) {
        pbStack_58 = pbStack_108;
        pbStack_60 = pbStack_100;
      }
      pbStack_180 = (byte *)0x6404391;
      uVar11 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_60);
      if ((char)uVar11 == '\0') {
        pbVar23 = (byte *)(ulong)(bStack_110 >> 1);
        if ((bStack_110 & 1) != 0) {
          pbVar23 = pbStack_108;
          param_1 = pbStack_100;
        }
        if ((byte *)0xfffffffffffffff7 < pbVar23) goto LAB_06404b1c;
        if (pbVar23 < (byte *)0x17) {
          uStack_f8 = (byte *)CONCAT71(uStack_f8._1_7_,(char)pbVar23 * '\x02');
          if (pbVar23 != (byte *)0x0) goto LAB_06404813;
        }
        else {
          uVar20 = 0x1a;
          if (((ulong)pbVar23 | 7) != 0x17) {
            uVar20 = ((ulong)pbVar23 | 7) + 1;
          }
          pbStack_180 = (byte *)0x64047eb;
          pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
          if (pbVar16 == (byte *)0x0) {
            pbStack_180 = (byte *)0x6404ac7;
            func_0x0eec74c0(uVar20,0);
          }
          uStack_f8 = (byte *)(uVar20 | 1);
          pbStack_f0 = pbVar23;
          uStack_e8 = pbVar16;
LAB_06404813:
          pbStack_180 = (byte *)0x6404821;
          func_0x0eee2ee0(pbVar16,param_1,pbVar23);
        }
        pbVar16[(long)pbVar23] = 0;
        pbStack_180 = (byte *)0x6404841;
        puVar17 = (ulong *)FUN_0412f0e0(&uStack_f8,0,&UNK_0135e166,0x28);
        uStack_168 = (byte *)puVar17[2];
        uStack_178 = (byte *)*puVar17;
        uStack_170 = (byte *)puVar17[1];
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        if (((ulong)uStack_f8 & 1) != 0) {
          pbStack_180 = (byte *)0x6404882;
          func_0x0412a280(uStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
        }
        uVar20 = (ulong)uStack_178;
        puVar13 = *(undefined4 **)(param_3 + 8);
        if (puVar13 < *(undefined4 **)(param_3 + 0x10)) {
          if (((ulong)uStack_178 & 1) == 0) {
            *(byte **)(puVar13 + 4) = uStack_168;
            *puVar13 = (undefined4)uStack_178;
            puVar13[1] = uStack_178._4_4_;
            puVar13[2] = (undefined4)uStack_170;
            puVar13[3] = uStack_170._4_4_;
          }
          else {
            pbStack_180 = (byte *)0x64048e4;
            func_0x0412e5e0(puVar13,uStack_168,uStack_170);
          }
          *(undefined4 **)(param_3 + 8) = puVar13 + 6;
          *(undefined4 **)(param_3 + 8) = puVar13 + 6;
          uVar21 = (ulong)uStack_168;
        }
        else {
          pbStack_180 = (byte *)0x64048b5;
          uVar14 = func_0x04909a40(param_3,&uStack_178);
          *(undefined8 *)(param_3 + 8) = uVar14;
          uVar21 = (ulong)uStack_168;
          uVar20 = (ulong)uStack_178;
        }
        uStack_168 = (byte *)uVar21;
        if ((uVar20 & 1) == 0) goto LAB_06404a7a;
        uVar20 = (ulong)uStack_178 & 0xfffffffffffffffe;
      }
      else {
        pbStack_38 = (byte *)(ulong)(bStack_110 >> 1);
        pbStack_40 = param_1;
        if ((bStack_110 & 1) != 0) {
          pbStack_38 = pbStack_108;
          pbStack_40 = pbStack_100;
        }
        pbStack_180 = (byte *)0x64043e6;
        (**(code **)(_DAT_0f7b8f98 + 0x98))(&uStack_f8,&DAT_0f7b8f98,&pbStack_40);
        uStack_138 = CONCAT31(uStack_138._1_3_,bStack_b8);
        if (bStack_b8 == 0) {
          uStack_178 = uStack_f8;
          uStack_170 = pbStack_f0;
          uStack_168._0_4_ = SUB84(uStack_e8,0);
          uStack_168._4_4_ = uStack_e8._4_4_;
          uStack_160._0_4_ = (undefined4)uStack_e0;
          uStack_160._4_4_ = uStack_e0._4_4_;
          uStack_158 = lStack_d8;
          uStack_150._0_4_ = (undefined4)uStack_d0;
          uStack_150._4_4_ = uStack_d0._4_4_;
          uStack_148._0_4_ = (undefined4)uStack_c8;
          uStack_148._4_4_ = uStack_c8._4_4_;
          lStack_140 = lStack_c0;
          pbStack_180 = (byte *)0x6404687;
          func_0x064477c0(&uStack_178);
          lStack_70 = lStack_140;
          uVar8 = uStack_148._4_4_;
          uVar7 = (undefined4)uStack_148;
          uVar6 = uStack_150._4_4_;
          uVar5 = (undefined4)uStack_150;
          lStack_88 = uStack_158;
          uVar4 = uStack_160._4_4_;
          uVar3 = (undefined4)uStack_160;
          uVar2 = uStack_168._4_4_;
          uVar1 = (undefined4)uStack_168;
          uStack_f8 = uStack_178;
          pbStack_f0 = uStack_170;
          uStack_168 = (byte *)0x0;
          uStack_160 = (byte *)0x0;
          uStack_158 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          lStack_140 = 0;
          uStack_e8 = (byte *)0x0;
          uStack_e0 = 0;
          lStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          lStack_c0 = 0;
          uStack_68 = uStack_68 & 0xffffffffffffff00;
          pbStack_a8 = uStack_178;
          pbStack_a0 = uStack_170;
          uStack_98 = CONCAT44(uVar2,uVar1);
          uStack_90 = CONCAT44(uVar4,uVar3);
          uStack_80 = CONCAT44(uVar6,uVar5);
          uStack_78 = CONCAT44(uVar8,uVar7);
          pbStack_180 = (byte *)0x640471b;
          func_0x048e6d60(&uStack_f8);
          if ((uStack_138 & 1) == 0) goto LAB_06404728;
        }
        else {
          pbStack_a8 = (byte *)0x0;
          pbStack_a0 = (byte *)0x0;
          uStack_98 = 0;
          uStack_90 = 0;
          lStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          lStack_70 = 0;
          uStack_68 = 1;
          if ((bStack_b8 & 1) == 0) {
LAB_06404728:
            lVar22 = uStack_150;
            lVar18 = uStack_148;
            if (uStack_150 != 0) {
              while (lVar22 != lVar18) {
                pbStack_180 = (byte *)0x640474c;
                func_0x048b3e80(lVar18 + -0x40);
                lVar18 = lVar18 + -0x40;
              }
              uStack_148 = lVar22;
              pbStack_180 = (byte *)0x6404768;
              func_0x0412a280(uStack_150,lStack_140 - uStack_150);
            }
            pbVar23 = uStack_168;
            pbVar16 = uStack_160;
            if (uStack_168 != (byte *)0x0) {
              for (; pbVar23 != pbVar16; pbVar16 = pbVar16 + -0x50) {
                if ((pbVar16[-8] == 1) && ((pbVar16[-0x30] & 1) != 0)) {
                  pbStack_180 = (byte *)0x64047bc;
                  func_0x0412a280(*(undefined8 *)(pbVar16 + -0x20),
                                  *(ulong *)(pbVar16 + -0x30) & 0xfffffffffffffffe);
                }
              }
              uStack_160 = pbVar23;
              pbStack_180 = (byte *)0x6404922;
              func_0x0412a280(uStack_168,uStack_158 - (long)uStack_168);
            }
          }
        }
        uStack_178 = (byte *)0x250e76836b7ab032;
        uStack_170 = &UNK_0140f690;
        uStack_168 = (byte *)0x1;
        uStack_160 = (byte *)CONCAT44(uStack_160._4_4_,0xfe);
        if ((byte)uStack_68 == 0) {
          pbStack_180 = (byte *)0x6404969;
          func_0x0eedea30(&uStack_f8);
          pbStack_180 = (byte *)0x6404986;
          func_0x0eedeb80(2,0x2d,&pbStack_a8,&uStack_f8,&uStack_178);
          if (((ulong)uStack_f8 & 1) != 0) {
            pbStack_180 = (byte *)0x64049a9;
            func_0x0412a280(uStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
          }
        }
        lVar18 = uStack_80;
        if (((byte)uStack_68 & 1) != 0) goto LAB_06404a7a;
        lVar22 = uStack_78;
        if (uStack_80 != 0) {
          while (lVar18 != lVar22) {
            pbStack_180 = (byte *)0x64049ec;
            func_0x048b3e80(lVar22 + -0x40);
            lVar22 = lVar22 + -0x40;
          }
          uStack_78 = lVar18;
          pbStack_180 = (byte *)0x6404a11;
          func_0x0412a280(uStack_80,lStack_70 - uStack_80);
        }
        uVar9 = uStack_98;
        uVar21 = uStack_98;
        uVar20 = uStack_90;
        if (uStack_98 == 0) goto LAB_06404a7a;
        for (; uStack_98 = uVar21, uVar9 != uVar20; uVar20 = uVar20 - 0x50) {
          if ((*(char *)(uVar20 - 8) == '\x01') && ((*(byte *)(uVar20 - 0x30) & 1) != 0)) {
            pbStack_180 = (byte *)0x6404a58;
            func_0x0412a280(*(undefined8 *)(uVar20 - 0x20),
                            *(ulong *)(uVar20 - 0x30) & 0xfffffffffffffffe);
          }
          uVar21 = uStack_98;
        }
        uStack_90 = uVar9;
        uVar20 = lStack_88 - uVar21;
      }
      pbStack_180 = (byte *)0x6404a7a;
      func_0x0412a280(uVar21,uVar20);
LAB_06404a7a:
      if ((bStack_110 & 1) != 0) {
        pbStack_180 = (byte *)0x6404a98;
        func_0x0412a280(pbStack_100,CONCAT71(uStack_10f,bStack_110) & 0xfffffffffffffffe);
        return (ulong)uVar11;
      }
      return (ulong)uVar11;
    }
    bVar24 = (*param_1 & 1) != 0;
    if (bVar24) {
      pbVar16 = *(byte **)(param_1 + 0x10);
    }
    pbVar23 = (byte *)(ulong)(*param_1 >> 1);
    if (bVar24) {
      pbVar23 = *(byte **)(param_1 + 8);
    }
    if ((byte *)0xfffffffffffffff7 < pbVar23) {
      pbStack_180 = (byte *)0x6404b1c;
      FUN_04882e30();
LAB_06404b1c:
      pbStack_180 = (byte *)0x6404b21;
      uVar14 = FUN_04882e30();
      pbStack_180 = (byte *)0x6404b30;
      func_0x041084d6(&DAT_0f7b8fb8);
      pbStack_180 = (byte *)0x6404b38;
      lVar18 = func_0x0eee2d70(uVar14);
      *(byte **)(param_3 + 8) = param_1;
      pbStack_180 = (byte *)0x6404b63;
      func_0x0412a280(pbVar23,(ulong)uStack_178 & 0xfffffffffffffffe);
      if ((bStack_110 & 1) != 0) {
        pbStack_180 = (byte *)0x6404bf0;
        func_0x0412a280(pbStack_100,CONCAT71(uStack_10f,bStack_110) & 0xfffffffffffffffe);
        pbStack_180 = (byte *)0x6404bf8;
        lVar18 = func_0x0eee2d70(lVar18);
        pbVar16 = uStack_168;
        if (((ulong)uStack_178 & 1) != 0) {
          pbStack_180 = (byte *)0x6404c16;
          func_0x0412a280(uStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
          pbStack_180 = (byte *)0x6404c1e;
          uVar14 = func_0x0eee2d70(lVar18);
          *(byte **)(param_3 + 8) = pbVar23;
          pbStack_180 = (byte *)0x6404c32;
          func_0x0412a280(pbVar16,0x30);
          pbStack_180 = (byte *)0x6404c3a;
          lVar18 = func_0x0eee2d70(uVar14);
          param_1 = pbVar16;
          if (((ulong)uStack_f8 & 1) != 0) goto LAB_06404c4f;
        }
      }
      pbStack_180 = (byte *)0x6404c4f;
      func_0x0eee2d70(lVar18);
LAB_06404c4f:
      pbStack_180 = (byte *)0x6404c68;
      func_0x0412a280(uStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
      pbStack_180 = (byte *)0x6404c70;
      lVar22 = lVar18;
      func_0x0eee2d70(lVar18);
      lStack_190 = param_3;
      lStack_188 = lVar18;
      pbStack_180 = param_1;
      lVar18 = func_0x064486b0(lVar22 + 0x18);
      if ((*(int *)(lVar18 + 0x60) == -0x2b3da790) &&
         (lVar18 = *(long *)(lVar18 + 0x68), lVar18 != 0)) {
        bVar24 = (*(byte *)(lVar18 + 8) & 1) != 0;
        puVar19 = (undefined *)(lVar18 + 9);
        if (bVar24) {
          puVar19 = *(undefined **)(lVar18 + 0x18);
        }
        uVar20 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
        if (bVar24) {
          uVar20 = *(ulong *)(lVar18 + 0x10);
        }
      }
      else {
        puVar19 = &UNK_01449d5c;
        uVar20 = 0x1d;
      }
      func_0x06448b10(auStack_290,lVar22,puVar19,uVar20,0);
      uStack_25c = 0;
      uStack_258 = 0;
      if (cStack_260 == '\0') {
        func_0x06447900(auStack_210,auStack_290,&UNK_0137826d,7);
        func_0x06447d90(auStack_1d0,auStack_210,&UNK_012d53cd,6);
        func_0x06448220(auStack_250,auStack_1d0,&UNK_014ab9ed,7);
      }
      func_0x063f4170(lVar22);
      func_0x063f4d50(lVar22);
      func_0x06404d70(lVar22);
      uVar20 = func_0x06404ef0(lVar22);
      return uVar20;
    }
    if (pbVar23 < (byte *)0x17) {
      uStack_f8 = (byte *)CONCAT71(uStack_f8._1_7_,(char)pbVar23 * '\x02');
      pbVar15 = (byte *)((long)&uStack_f8 + 1);
      if (pbVar23 != (byte *)0x0) goto LAB_064044f4;
    }
    else {
      uVar20 = 0x1a;
      if (((ulong)pbVar23 | 7) != 0x17) {
        uVar20 = ((ulong)pbVar23 | 7) + 1;
      }
      pbStack_180 = (byte *)0x64044cc;
      pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
      if (pbVar15 == (byte *)0x0) {
        pbStack_180 = (byte *)0x6404ab8;
        func_0x0eec74c0(uVar20,0);
      }
      uStack_f8 = (byte *)(uVar20 | 1);
      pbStack_f0 = pbVar23;
      uStack_e8 = pbVar15;
LAB_064044f4:
      pbStack_180 = (byte *)0x6404502;
      func_0x0eee2ee0(pbVar15,pbVar16,pbVar23);
    }
    pbVar15[(long)pbVar23] = 0;
    pbStack_180 = (byte *)0x6404522;
    puVar17 = (ulong *)FUN_0412f0e0(&uStack_f8,0,&UNK_0123edca,0x1f);
    uStack_168 = (byte *)puVar17[2];
    uStack_178 = (byte *)*puVar17;
    uStack_170 = (byte *)puVar17[1];
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    if (((ulong)uStack_f8 & 1) != 0) {
      pbStack_180 = (byte *)0x6404563;
      func_0x0412a280(uStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
    }
    uVar20 = (ulong)uStack_178;
    puVar13 = *(undefined4 **)(param_3 + 8);
    if (puVar13 < *(undefined4 **)(param_3 + 0x10)) {
      if (((ulong)uStack_178 & 1) == 0) {
        *(byte **)(puVar13 + 4) = uStack_168;
        *puVar13 = (undefined4)uStack_178;
        puVar13[1] = uStack_178._4_4_;
        puVar13[2] = (undefined4)uStack_170;
        puVar13[3] = uStack_170._4_4_;
      }
      else {
        pbStack_180 = (byte *)0x6404606;
        func_0x0412e5e0(puVar13,uStack_168,uStack_170);
      }
      *(undefined4 **)(param_3 + 8) = puVar13 + 6;
      *(undefined4 **)(param_3 + 8) = puVar13 + 6;
      puVar13 = (undefined4 *)uStack_168;
    }
    else {
      pbStack_180 = (byte *)0x64045db;
      uVar14 = func_0x04909a40(param_3,&uStack_178);
      *(undefined8 *)(param_3 + 8) = uVar14;
      puVar13 = (undefined4 *)uStack_168;
      uVar20 = (ulong)uStack_178;
    }
  }
  if ((uVar20 & 1) == 0) {
    return 0;
  }
  uVar20 = (ulong)uStack_178 & 0xfffffffffffffffe;
  uStack_168 = (byte *)puVar13;
LAB_06404624:
  pbStack_180 = (byte *)0x6404629;
  func_0x0412a280(puVar13,uVar20);
  return 0;
}



/* ---- referenced strings ----
 * 0x12bf2f6  Cannot delete prefab template with empty ID
 * 0x12bf306  efab template with empty ID
 * 0x12bf311  te with empty ID
 */
