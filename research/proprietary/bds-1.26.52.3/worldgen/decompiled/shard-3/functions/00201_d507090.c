/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd607090 (ELF vaddr 0xd507090)
 * Label: caller-of-callee
 * Body:  [[0d607090, 0d607568] [0d607570, 0d6076b4] [0d6076c0, 0d607718] [0d607720, 0d607edb] [0d607ee0, 0d607f3b] [0d607f40, 0d60858b] [0d608590, 0d608604] [0d608610, 0d608679] [0d608680, 0d6092b7] [0d6092c0, 0d609319] [0d609320, 0d609668] [0d609670, 0d6096c2] [0d6096d0, 0d609924] [0d609930, 0d609982] [0d609990, 0d609b9c] [0d609ba0, 0d609c08] [0d609c10, 0d60a1ad] [0d60a1b0, 0d60a7ce] [0d60a7d0, 0d60a828] [0d60a830, 0d60a9a8] [0d60a9b0, 0d60aaa9] [0d60aab0, 0d60b139]]
 * Ghidra: FUN_0d607090
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d607090(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5,
                 byte param_6,undefined8 param_7,undefined8 param_8,byte param_9,long *param_10)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong ******ppppppuVar20;
  long *plVar21;
  uint *puVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  ulong ******ppppppuVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined *puVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  long *in_FS_OFFSET;
  bool bVar34;
  undefined1 auStack_2c8 [4];
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong ******ppppppuStack_2a0;
  uint uStack_298;
  undefined4 uStack_294;
  ulong ******ppppppuStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint uStack_278;
  ulong *******pppppppuStack_268;
  undefined1 uStack_260;
  uint7 uStack_25f;
  undefined1 uStack_258;
  uint7 uStack_257;
  undefined1 uStack_250;
  long lStack_240;
  long lStack_238;
  long *plStack_230;
  undefined1 auStack_228 [4];
  undefined4 uStack_224;
  undefined8 uStack_220;
  ulong *******pppppppuStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  ulong *******pppppppuStack_1f8;
  ulong *******pppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  undefined2 uStack_1cf;
  undefined1 uStack_1cd;
  uint uStack_1cc;
  byte bStack_1c8;
  undefined2 uStack_1c7;
  undefined5 uStack_1c5;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 uStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  ulong *******pppppppuStack_188;
  undefined1 uStack_179;
  ulong *******pppppppuStack_178;
  undefined1 uStack_170;
  uint7 uStack_16f;
  undefined1 uStack_168;
  uint7 uStack_167;
  undefined1 uStack_160;
  undefined1 auStack_158 [4];
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  ulong ******ppppppuStack_148;
  undefined8 uStack_140;
  ulong *******pppppppuStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  ulong *******pppppppuStack_110;
  ulong ******ppppppuStack_108;
  ulong ******ppppppuStack_100;
  undefined4 *puStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 uStack_e0;
  undefined2 uStack_df;
  undefined1 uStack_dd;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _auStack_2c8 = (ulong *******)0x7265646165680c;
  puVar3 = (undefined4 *)param_3[1];
  lStack_240 = param_5;
  lStack_238 = param_4;
  plStack_230 = param_3;
  plStack_70 = param_3;
  if (puVar3 < (undefined4 *)param_3[2]) {
    *(ulong *******)(puVar3 + 4) = uStack_2b8;
    *puVar3 = 0x6165680c;
    puVar3[1] = 0x726564;
    puVar3[2] = (undefined4)uStack_2c0;
    puVar3[3] = uStack_2c0._4_4_;
    param_3[1] = (long)(puVar3 + 6);
  }
  else {
    lVar18 = func_0x04909a40(param_3,auStack_2c8);
    param_3[1] = lVar18;
    if (((ulong)_auStack_2c8 & 1) != 0) {
      func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
    }
  }
  _auStack_2c8 = (ulong *******)0x7265646165680c;
  cVar7 = func_0x04864290(param_2);
  if (cVar7 == '\0') {
    bVar8 = 1;
    puStack_200 = &DAT_0f54fc40;
  }
  else {
    puVar17 = (undefined *)func_0x04864990(param_2,auStack_2c8);
    bVar8 = func_0x04864260(puVar17);
    bVar8 = bVar8 ^ 1;
    puStack_200 = puVar17;
  }
  if (((ulong)_auStack_2c8 & 1) != 0) {
    func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
  }
  if (bVar8 == 0) {
    func_0x0d5ef090(&pppppppuStack_268,plStack_230);
    _auStack_228 = (ulong *******)0x0;
    uStack_220 = (ulong *******)0x0;
    pppppppuStack_218 = (ulong *******)0x0;
    uStack_170 = 0;
    pppppppuStack_178 = (ulong *******)auStack_228;
    pppppppuStack_1f8 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppuStack_1f8 == (ulong *******)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    pppppppuStack_218 = pppppppuStack_1f8 + 3;
    uStack_1d8._0_1_ = (byte)auStack_228;
    uStack_1d8._1_1_ = (undefined1)((ulong)auStack_228 >> 8);
    uStack_1d8._2_2_ = (undefined2)((ulong)auStack_228 >> 0x10);
    uStack_1d8._4_4_ = (undefined4)((ulong)auStack_228 >> 0x20);
    bStack_1d0 = (byte)&pppppppuStack_1f8;
    uStack_1cf = (undefined2)((ulong)&pppppppuStack_1f8 >> 8);
    uStack_1cd = (undefined1)((ulong)&pppppppuStack_1f8 >> 0x18);
    uStack_1cc = (uint)((ulong)&pppppppuStack_1f8 >> 0x20);
    bStack_1c8 = (byte)&pppppppuStack_1a8;
    uStack_1c7 = (undefined2)((ulong)&pppppppuStack_1a8 >> 8);
    uStack_1c5 = (undefined5)((ulong)&pppppppuStack_1a8 >> 0x18);
    uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
    bVar8 = (byte)pppppppuStack_268 & 1;
    _auStack_228 = pppppppuStack_1f8;
    pppppppuStack_1a8 = pppppppuStack_1f8;
    if (((ulong)pppppppuStack_268 & 1) == 0) {
      pppppppuStack_1f8[2] = (ulong ******)CONCAT71(uStack_257,uStack_258);
      *pppppppuStack_1f8 = (ulong ******)pppppppuStack_268;
      pppppppuStack_1f8[1] = (ulong ******)CONCAT71(uStack_25f,uStack_260);
    }
    else {
      uStack_220 = pppppppuStack_1f8;
      func_0x0412e5e0(pppppppuStack_1f8,CONCAT71(uStack_257,uStack_258),
                      CONCAT71(uStack_25f,uStack_260));
    }
    uStack_220 = pppppppuStack_1a8 + 3;
    _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
    uStack_2c0 = (ulong ******)0x0;
    uStack_2b8 = (ulong ******)0x0;
    uStack_2b0 = (ulong ******)0x0;
    func_0x0488f040(&uStack_2c0,_auStack_228,uStack_220,
                    ((long)uStack_220 - (long)_auStack_228 >> 3) * -0x5555555555555555);
    uStack_2a8 = (ulong ******)0x200000007;
    _auStack_2c8 = (ulong *******)&UNK_0f47b778;
    func_0x0d5eed10(lStack_240,auStack_2c8);
    puVar30 = (undefined *)uStack_2c0;
    _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
    puVar17 = (undefined *)uStack_2b8;
    if (uStack_2c0 != (ulong ******)0x0) {
      for (; puVar30 != puVar17; puVar17 = puVar17 + -0x18) {
        if ((puVar17[-0x18] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar17 + -8),
                          *(ulong *)(puVar17 + -0x18) & 0xfffffffffffffffe);
        }
      }
      uStack_2b8 = (ulong ******)puVar30;
      func_0x0412a280(uStack_2c0,(long)uStack_2b0 - (long)uStack_2c0);
    }
    pppppppuVar24 = _auStack_228;
    pppppppuVar23 = uStack_220;
    if (_auStack_228 != (ulong *******)0x0) {
      for (; pppppppuVar24 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
LAB_0d60774b:
      uStack_220 = pppppppuVar24;
      func_0x0412a280(_auStack_228,(long)pppppppuStack_218 - (long)_auStack_228);
    }
  }
  else {
    cVar7 = func_0x04864290(puStack_200);
    puVar17 = puStack_200;
    if (cVar7 != '\0') {
      func_0x0d60bb20(auStack_48,puStack_200,param_8,4);
      func_0x0d60bb20(auStack_60,puVar17,param_7,4);
      cVar7 = func_0x04865490(auStack_48);
      if ((cVar7 != '\0') && (cVar7 = func_0x04865490(auStack_60), cVar7 != '\0')) {
        uStack_1d8._0_1_ = 0;
        uStack_1d8._1_1_ = 0;
        FUN_04863cb0(auStack_2c8,auStack_48,&uStack_1d8);
        pppppppuStack_268 = (ulong *******)((ulong)pppppppuStack_268 & 0xffffffffffff0000);
        FUN_04863cb0(auStack_228,auStack_60,&pppppppuStack_268);
        pbVar1 = (byte *)(lStack_240 + 0x78);
        if (pbVar1 != auStack_2c8) {
          if ((*pbVar1 & 1) == 0) {
            if (((ulong)_auStack_2c8 & 1) == 0) {
              *(ulong *******)(lStack_240 + 0x88) = uStack_2b8;
              *(undefined1 (*) [4])pbVar1 = auStack_2c8;
              *(undefined4 *)(lStack_240 + 0x7c) = uStack_2c4;
              *(undefined4 *)(lStack_240 + 0x80) = (undefined4)uStack_2c0;
              *(uint *)(lStack_240 + 0x84) = uStack_2c0._4_4_;
            }
            else {
              FUN_04885070(pbVar1,uStack_2b8,uStack_2c0);
            }
          }
          else {
            uVar31 = (ulong)_auStack_2c8 >> 1 & 0x7f;
            ppppppuVar20 = (ulong ******)(auStack_2c8 + 1);
            if (((ulong)_auStack_2c8 & 1) != 0) {
              uVar31 = (ulong)uStack_2c0;
              ppppppuVar20 = uStack_2b8;
            }
            func_0x04885120(pbVar1,ppppppuVar20,uVar31);
          }
        }
        pbVar1 = (byte *)(lStack_240 + 0x90);
        if (pbVar1 != auStack_228) {
          if ((*pbVar1 & 1) == 0) {
            if (((ulong)_auStack_228 & 1) == 0) {
              *(ulong ********)(lStack_240 + 0xa0) = pppppppuStack_218;
              *(undefined1 (*) [4])pbVar1 = auStack_228;
              *(undefined4 *)(lStack_240 + 0x94) = uStack_224;
              *(undefined4 *)(lStack_240 + 0x98) = (undefined4)uStack_220;
              *(undefined4 *)(lStack_240 + 0x9c) = uStack_220._4_4_;
            }
            else {
              FUN_04885070(pbVar1,pppppppuStack_218,uStack_220);
            }
          }
          else {
            pppppppuVar24 = (ulong *******)((ulong)_auStack_228 >> 1 & 0x7f);
            pppppppuVar23 = (ulong *******)(auStack_228 + 1);
            if (((ulong)_auStack_228 & 1) != 0) {
              pppppppuVar24 = uStack_220;
              pppppppuVar23 = pppppppuStack_218;
            }
            func_0x04885120(pbVar1,pppppppuVar23,pppppppuVar24);
          }
        }
        if (((ulong)_auStack_228 & 1) != 0) {
          func_0x0412a280(pppppppuStack_218,(ulong)_auStack_228 & 0xfffffffffffffffe);
        }
        if (((ulong)pppppppuStack_268 & 1) != 0) {
          func_0x0412a280(CONCAT71(uStack_257,uStack_258),
                          (ulong)pppppppuStack_268 & 0xfffffffffffffffe);
        }
        if (((ulong)_auStack_2c8 & 1) != 0) {
          func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
        }
        if (((byte)uStack_1d8 & 1) != 0) {
          func_0x0412a280(CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8)),
                          CONCAT44(uStack_1d8._4_4_,
                                   CONCAT22(uStack_1d8._2_2_,
                                            CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8))) &
                          0xfffffffffffffffe);
        }
      }
      _auStack_2c8 = (ulong *******)0x64695f6b6361700e;
      uStack_2c0 = (ulong ******)((ulong)uStack_2c0 & 0xffffffffffffff00);
      uStack_140 = (undefined *)CONCAT44(uStack_140._4_4_,(uint)param_6);
      uStack_80 = param_1;
      auStack_c0 = func_0x0d606550(puStack_200,param_8,auStack_2c8,plStack_230,lStack_240);
      auVar5._8_8_ = _DAT_0f7ba060;
      auVar5._0_8_ = _DAT_0f7ba058;
      auVar6 = auStack_c0;
      if (auStack_c0 == auVar5) {
        *(undefined1 *)(lStack_238 + 0x1b2) = 0;
        lVar18 = *in_FS_OFFSET;
        if (*(char *)(lVar18 + -0x58) == '\0') {
          func_0x0ee49c60(lVar18 + -0xa40);
          *(undefined1 *)(lVar18 + -0x58) = 1;
        }
        lVar18 = lVar18 + -0xa40;
        uVar12 = func_0x0ee4a030(lVar18,0);
        uVar13 = func_0x0ee4a030(lVar18,0);
        uVar14 = func_0x0ee4a030(lVar18,0);
        uVar15 = func_0x0ee4a030(lVar18,0);
        auVar6._8_8_ = CONCAT44(uVar14,uVar15) & 0x3fffffffffffffff | 0x8000000000000000;
        auVar6._0_8_ = (CONCAT44(uVar12,uVar13) & 0xffffffffffff0fff) + 0x4000;
      }
      auStack_c0 = auVar6;
      uVar9 = func_0x0d603630(auStack_c0);
      *(undefined1 *)(lStack_238 + 0x1ac) = uVar9;
      _auStack_2c8 = (ulong *******)CONCAT26(uStack_2c4._2_2_,0x656d616e08);
      func_0x0d6050c0(auStack_158,puStack_200,auStack_2c8,plStack_230,lStack_240,param_9 < 2);
      if (((ulong)_auStack_2c8 & 1) != 0) {
        func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
      }
      if (((uint)auStack_158 & 1) == 0) {
        if (auStack_158[0] >> 1 == 0) goto LAB_0d607a56;
      }
      else if (CONCAT44(uStack_14c,uStack_150) == 0) {
LAB_0d607a56:
        if (param_6 == 1 && param_9 < 2) {
          uStack_278 = auVar6._8_4_ & 0xffff;
          _auStack_2c8 = (ulong *******)CONCAT44(uStack_2c4,auVar6._4_4_);
          uStack_2b8 = (ulong ******)(CONCAT44(uStack_2b8._4_4_,auVar6._2_4_) & 0xffffffff0000ffff);
          uStack_2a8 = (ulong ******)(CONCAT44(uStack_2a8._4_4_,auVar6._0_4_) & 0xffffffff0000ffff);
          uStack_298 = (uint)auVar6._14_2_;
          uStack_288 = auVar6._10_4_;
          func_0x0470d9a0(&uStack_1d8,&UNK_01287ba2,0x28,0x122112,auStack_2c8);
          if (((uint)auStack_158 & 1) != 0) {
            func_0x0412a280(ppppppuStack_148,CONCAT44(uStack_154,auStack_158) & 0xfffffffffffffffe);
          }
          ppppppuStack_148 = (ulong ******)CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8));
          auStack_158 = (undefined1  [4])
                        CONCAT22(uStack_1d8._2_2_,CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8));
          uStack_150 = CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,bStack_1d0));
          uStack_154 = uStack_1d8._4_4_;
          uStack_14c = uStack_1cc;
          func_0x0d5ef090(auStack_2c8,plStack_230);
          if (((uint)auStack_158 & 1) == 0) {
            ppppppuStack_2a0 = ppppppuStack_148;
            uStack_2b0 = (ulong ******)CONCAT44(uStack_154,auStack_158);
            uStack_2a8 = (ulong ******)CONCAT44(uStack_14c,uStack_150);
          }
          else {
            func_0x0412e5e0(&uStack_2b0,ppppppuStack_148,CONCAT44(uStack_14c,uStack_150));
          }
          pppppppuStack_268 = (ulong *******)0x0;
          uStack_260 = 0;
          uStack_25f = 0;
          uStack_258 = 0;
          uStack_257 = 0;
          uStack_170 = 0;
          pppppppuStack_178 = (ulong *******)&pppppppuStack_268;
          pppppppuStack_1f8 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30)
          ;
          if (pppppppuStack_1f8 == (ulong *******)0x0) {
            FUN_0eec74c0(0x30,0);
          }
          uStack_260 = SUB81(pppppppuStack_1f8,0);
          uStack_25f = (uint7)((ulong)pppppppuStack_1f8 >> 8);
          uStack_258 = SUB81(pppppppuStack_1f8 + 6,0);
          uStack_257 = (uint7)((ulong)(pppppppuStack_1f8 + 6) >> 8);
          uStack_220 = (ulong *******)&pppppppuStack_1f8;
          pppppppuStack_218 = (ulong *******)&pppppppuStack_1a8;
          uStack_210 = uStack_210 & 0xffffffffffffff00;
          pppppppuStack_268 = pppppppuStack_1f8;
          _auStack_228 = (ulong *******)&pppppppuStack_268;
          if (((ulong)_auStack_2c8 & 1) == 0) {
            pppppppuStack_1f8[2] = uStack_2b8;
            *(undefined1 (*) [4])pppppppuStack_1f8 = auStack_2c8;
            *(undefined4 *)((long)pppppppuStack_1f8 + 4) = uStack_2c4;
            *(undefined4 *)(pppppppuStack_1f8 + 1) = (undefined4)uStack_2c0;
            *(uint *)((long)pppppppuStack_1f8 + 0xc) = uStack_2c0._4_4_;
            pppppppuStack_1a8 = pppppppuStack_1f8 + 3;
            if (((ulong)uStack_2b0 & 1) == 0) goto LAB_0d607dcb;
LAB_0d607e09:
            func_0x0412e5e0(pppppppuStack_1a8,ppppppuStack_2a0,uStack_2a8);
          }
          else {
            pppppppuStack_1a8 = pppppppuStack_1f8;
            func_0x0412e5e0(pppppppuStack_1f8,uStack_2b8,uStack_2c0);
            pppppppuStack_1a8 = pppppppuStack_1a8 + 3;
            if (((ulong)uStack_2b0 & 1) != 0) goto LAB_0d607e09;
LAB_0d607dcb:
            pppppppuStack_1a8[2] = ppppppuStack_2a0;
            *pppppppuStack_1a8 = uStack_2b0;
            pppppppuStack_1a8[1] = uStack_2a8;
          }
          pppppppuVar23 = pppppppuStack_1a8 + 3;
          uStack_260 = SUB81(pppppppuVar23,0);
          uStack_25f = (uint7)((ulong)pppppppuVar23 >> 8);
          uStack_1d8._0_1_ = 0xa0;
          uStack_1d8._1_1_ = 0xcc;
          uStack_1d8._2_2_ = 0xf47;
          uStack_1d8._4_4_ = 0;
          bStack_1d0 = 0;
          uStack_1cf = 0;
          uStack_1cd = 0;
          uStack_1cc = 0;
          bStack_1c8 = 0;
          uStack_1c7 = 0;
          uStack_1c5 = 0;
          uStack_1c0 = 0;
          func_0x0488f040(&bStack_1d0,pppppppuStack_268,pppppppuVar23,
                          ((long)pppppppuVar23 - (long)pppppppuStack_268 >> 3) * -0x5555555555555555
                         );
          uStack_1b8 = 0x20000000b;
          uStack_1d8._0_1_ = 0x78;
          uStack_1d8._1_1_ = 0xb7;
          uStack_1d8._2_2_ = 0xf47;
          uStack_1d8._4_4_ = 0;
          func_0x0d604f40(lStack_240,&uStack_1d8);
          uVar11 = uStack_1cf;
          bVar8 = bStack_1d0;
          uStack_1d8._0_1_ = 0xa0;
          uStack_1d8._1_1_ = 0xcc;
          uStack_1d8._2_2_ = 0xf47;
          uStack_1d8._4_4_ = 0;
          lVar18 = CONCAT44(uStack_1cc,CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,bStack_1d0)));
          if (lVar18 != 0) {
            lVar33 = CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8));
            lVar28 = lVar18;
            if (lVar18 != lVar33) {
              do {
                if ((*(byte *)(lVar33 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar33 + -8),
                                  *(ulong *)(lVar33 + -0x18) & 0xfffffffffffffffe);
                }
                lVar33 = lVar33 + -0x18;
              } while (lVar33 != lVar18);
              lVar28 = CONCAT44(uStack_1cc,CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,bStack_1d0)));
            }
            bStack_1c8 = bVar8;
            uStack_1c7 = uVar11;
            uStack_1c5 = (undefined5)((ulong)lVar18 >> 0x18);
            func_0x0412a280(lVar28,uStack_1c0 - lVar28);
          }
          pppppppuVar23 = pppppppuStack_268;
          if (pppppppuStack_268 != (ulong *******)0x0) {
            for (pppppppuVar24 = (ulong *******)CONCAT71(uStack_25f,uStack_260);
                pppppppuVar23 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -3) {
              if (((ulong)pppppppuVar24[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar24[-1],(ulong)pppppppuVar24[-3] & 0xfffffffffffffffe);
              }
            }
            uStack_260 = SUB81(pppppppuVar23,0);
            uStack_25f = (uint7)((ulong)pppppppuVar23 >> 8);
            func_0x0412a280(pppppppuStack_268,
                            CONCAT71(uStack_257,uStack_258) - (long)pppppppuStack_268);
          }
          if (((ulong)uStack_2b0 & 1) != 0) {
            func_0x0412a280(ppppppuStack_2a0,(ulong)uStack_2b0 & 0xfffffffffffffffe);
          }
          puVar17 = (undefined *)_auStack_2c8;
          ppppppuVar20 = uStack_2b8;
          if (((ulong)_auStack_2c8 & 1) == 0) goto LAB_0d607fb1;
        }
        else {
          puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar19 == (undefined8 *)0x0) {
            FUN_0eec74c0(0x20,0);
          }
          uVar4 = _UNK_014dc445;
          bStack_1c8 = (byte)puVar19;
          uStack_1c7 = (undefined2)((ulong)puVar19 >> 8);
          uStack_1c5 = (undefined5)((ulong)puVar19 >> 0x18);
          uStack_1d8._0_1_ = 0x21;
          uStack_1d8._1_1_ = 0;
          uStack_1d8._2_2_ = 0;
          uStack_1d8._4_4_ = 0;
          bStack_1d0 = 0x19;
          uStack_1cf = 0;
          uStack_1cd = 0;
          uStack_1cc = 0;
          *(ulong *)((long)puVar19 + 9) = CONCAT17(UNK_014dc444,_DAT_014dc43d);
          *(undefined8 *)((long)puVar19 + 0x11) = uVar4;
          uVar4 = CONCAT71(_DAT_014dc43d,UNK_014dc43c);
          *puVar19 = _DAT_014dc434;
          puVar19[1] = uVar4;
          *(undefined1 *)((long)puVar19 + 0x19) = 0;
          uStack_98 = 0;
          plStack_90 = (long *)0x0;
          (**(code **)(*param_10 + 0x90))(auStack_2c8,param_10,&uStack_1d8,&uStack_98);
          if (((uint)auStack_158 & 1) != 0) {
            func_0x0412a280(ppppppuStack_148,CONCAT44(uStack_154,auStack_158) & 0xfffffffffffffffe);
          }
          plVar21 = plStack_90;
          ppppppuStack_148 = uStack_2b8;
          auStack_158 = auStack_2c8;
          uStack_154 = uStack_2c4;
          uStack_150 = (undefined4)uStack_2c0;
          uStack_14c = uStack_2c0._4_4_;
          _auStack_2c8 = (ulong *******)((ulong)_auStack_2c8 & 0xffffffffffff0000);
          if (plStack_90 != (long *)0x0) {
            LOCK();
            plVar2 = plStack_90 + 1;
            lVar18 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar18 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              func_0x0412c2d0(plVar21);
            }
          }
          if (((byte)uStack_1d8 & 1) == 0) goto LAB_0d607fb1;
          puVar17 = (undefined *)
                    CONCAT44(uStack_1d8._4_4_,
                             CONCAT22(uStack_1d8._2_2_,CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8)))
          ;
          ppppppuVar20 = (ulong ******)CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8));
        }
        func_0x0412a280(ppppppuVar20,(ulong)puVar17 & 0xfffffffffffffffe);
      }
LAB_0d607fb1:
      puVar22 = (uint *)(lStack_238 + 0xf8);
      if (puVar22 != (uint *)auStack_158) {
        if ((*(byte *)puVar22 & 1) == 0) {
          if (((uint)auStack_158 & 1) == 0) {
            *(ulong *******)(lStack_238 + 0x108) = ppppppuStack_148;
            *puVar22 = (uint)auStack_158;
            *(undefined4 *)(lStack_238 + 0xfc) = uStack_154;
            *(undefined4 *)(lStack_238 + 0x100) = uStack_150;
            *(uint *)(lStack_238 + 0x104) = uStack_14c;
          }
          else {
            FUN_04885070(puVar22,ppppppuStack_148,CONCAT44(uStack_14c,uStack_150));
          }
        }
        else {
          bVar34 = ((uint)auStack_158 & 1) != 0;
          ppppppuVar20 = (ulong ******)(auStack_158 + 1);
          if (bVar34) {
            ppppppuVar20 = ppppppuStack_148;
          }
          uVar31 = (ulong)(auStack_158[0] >> 1);
          if (bVar34) {
            uVar31 = CONCAT44(uStack_14c,uStack_150);
          }
          func_0x04885120(puVar22,ppppppuVar20,uVar31);
        }
      }
      puVar17 = puStack_200;
      uStack_1d8._0_1_ = 0x16;
      uStack_1d8._1_1_ = 100;
      uStack_1d8._2_2_ = 0x7365;
      uStack_1d8._4_4_ = 0x70697263;
      bStack_1d0 = 0x74;
      uStack_1cf = 0x6f69;
      uStack_1cd = 0x6e;
      uStack_1cc = uStack_1cc & 0xffffff00;
      func_0x0d6050c0(auStack_2c8,puStack_200,&uStack_1d8,plStack_230,lStack_240,1);
      pbVar1 = (byte *)(lStack_238 + 0x110);
      if (pbVar1 != auStack_2c8) {
        if ((*pbVar1 & 1) == 0) {
          if (((ulong)_auStack_2c8 & 1) == 0) {
            *(ulong *******)(lStack_238 + 0x120) = uStack_2b8;
            *(undefined1 (*) [4])pbVar1 = auStack_2c8;
            *(undefined4 *)(lStack_238 + 0x114) = uStack_2c4;
            *(undefined4 *)(lStack_238 + 0x118) = (undefined4)uStack_2c0;
            *(uint *)(lStack_238 + 0x11c) = uStack_2c0._4_4_;
          }
          else {
            FUN_04885070(pbVar1,uStack_2b8,uStack_2c0);
          }
        }
        else {
          ppppppuVar25 = (ulong ******)((ulong)_auStack_2c8 >> 1 & 0x7f);
          ppppppuVar20 = (ulong ******)(auStack_2c8 + 1);
          if (((ulong)_auStack_2c8 & 1) != 0) {
            ppppppuVar25 = uStack_2c0;
            ppppppuVar20 = uStack_2b8;
          }
          func_0x04885120(pbVar1,ppppppuVar20,ppppppuVar25);
        }
      }
      if (((ulong)_auStack_2c8 & 1) != 0) {
        func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
      }
      if (((byte)uStack_1d8 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8)),
                        CONCAT44(uStack_1d8._4_4_,
                                 CONCAT22(uStack_1d8._2_2_,
                                          CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8))) &
                        0xfffffffffffffffe);
      }
      uStack_1d8._0_1_ = 0x1e;
      uStack_1d8._1_1_ = 0x70;
      uStack_1d8._2_2_ = 0x616c;
      uStack_1d8._4_4_ = 0x726f6674;
      bStack_1d0 = 0x6d;
      uStack_1cf = 0x6c5f;
      uStack_1cd = 0x6f;
      uStack_1cc = 0x64656b63;
      bStack_1c8 = 0;
      func_0x0d6129a0(auStack_2c8,puVar17,&uStack_1d8,5,plStack_230,lStack_240,1);
      cVar7 = func_0x04865410(auStack_2c8);
      if (cVar7 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = func_0x04863ff0(auStack_2c8,0);
      }
      func_0x04863610(auStack_2c8);
      *(undefined1 *)(lStack_238 + 0x1ad) = uVar9;
      if (((byte)uStack_1d8 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8)),
                        CONCAT44(uStack_1d8._4_4_,
                                 CONCAT22(uStack_1d8._2_2_,
                                          CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8))) &
                        0xfffffffffffffffe);
      }
      uStack_1d8._0_1_ = 0x22;
      uStack_1d8._1_1_ = (undefined1)_DAT_012507e1;
      uStack_1d8._2_2_ = (undefined2)((uint)_DAT_012507e1 >> 8);
      uStack_1d8._5_3_ = (undefined3)_UNK_012507e5;
      uStack_1d8._4_4_ = CONCAT31(uStack_1d8._5_3_,(char)((uint)_DAT_012507e1 >> 0x18));
      bStack_1d0 = (byte)((uint)_UNK_012507e5 >> 0x18);
      uStack_1cf = (undefined2)_UNK_012507e9;
      uStack_1cd = (undefined1)((uint)_UNK_012507e9 >> 0x10);
      uStack_1cc._1_3_ = (undefined3)_UNK_012507ed;
      uStack_1cc = CONCAT31(uStack_1cc._1_3_,(char)((uint)_UNK_012507e9 >> 0x18));
      bStack_1c8 = (byte)((uint)_UNK_012507ed >> 0x18);
      uStack_1c7 = 100;
      func_0x0d6129a0(auStack_2c8,puVar17,&uStack_1d8,5,plStack_230,lStack_240,1);
      cVar7 = func_0x04865410(auStack_2c8);
      if (cVar7 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = func_0x04863ff0(auStack_2c8,0);
      }
      func_0x04863610(auStack_2c8);
      *(undefined1 *)(lStack_238 + 0x1ae) = uVar9;
      if (((byte)uStack_1d8 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8)),
                        CONCAT44(uStack_1d8._4_4_,
                                 CONCAT22(uStack_1d8._2_2_,
                                          CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8))) &
                        0xfffffffffffffffe);
      }
      uStack_1d8._0_1_ = 0x14;
      uStack_1d8._1_1_ = 0x70;
      uStack_1d8._2_2_ = 0x6361;
      uStack_1d8._4_4_ = 0x63735f6b;
      bStack_1d0 = 0x6f;
      uStack_1cf = 0x6570;
      uStack_1cd = 0;
      func_0x0d6050c0(auStack_2c8,puStack_200,&uStack_1d8,plStack_230,lStack_240,1);
      lVar18 = func_0x0d648e50(auStack_2c8);
      if (lVar18 == 0) {
        *(undefined1 *)(lStack_238 + 0x158) = 7;
      }
      else {
        *(undefined1 *)(lStack_238 + 0x158) = *(undefined1 *)(lVar18 + 0x28);
      }
      if (((ulong)_auStack_2c8 & 1) != 0) {
        func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
      }
      if (((byte)uStack_1d8 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8)),
                        CONCAT44(uStack_1d8._4_4_,
                                 CONCAT22(uStack_1d8._2_2_,
                                          CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8))) &
                        0xfffffffffffffffe);
      }
      lStack_d8 = 0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      func_0x0488f040(&lStack_d8,*plStack_230,plStack_230[1],
                      (plStack_230[1] - *plStack_230 >> 3) * -0x5555555555555555);
      cVar7 = *(char *)(lStack_238 + 0x159);
      func_0x0d6129a0(auStack_2c8,puStack_200,&UNK_01dd3200,5,&lStack_d8,lStack_240,
                      cVar7 != '\b' || param_9 < 2);
      if ((int)uStack_2b8 == 0) {
        cVar10 = func_0x04863ff0(auStack_2c8,0);
        cVar10 = '\x02' - cVar10;
        func_0x04863610(auStack_2c8);
        if (cVar7 != '\b') goto LAB_0d608462;
LAB_0d6085b3:
        *(char *)(lStack_238 + 0x1a0) = cVar10;
      }
      else {
        cVar10 = '\0';
        func_0x04863610(auStack_2c8);
        if (cVar7 == '\b') goto LAB_0d6085b3;
LAB_0d608462:
        if ((param_9 < 2) || (cVar10 == '\0')) goto LAB_0d6085b3;
        uStack_1d8._0_1_ = 0;
        uStack_1d8._1_1_ = 0;
        uStack_1d8._2_2_ = 0;
        uStack_1d8._4_4_ = 0;
        bStack_1d0 = 0;
        uStack_1cf = 0;
        uStack_1cd = 0;
        uStack_1cc = 0;
        bStack_1c8 = 0;
        uStack_1c7 = 0;
        uStack_1c5 = 0;
        uStack_220 = (ulong *******)((ulong)uStack_220 & 0xffffffffffffff00);
        _auStack_228 = (ulong *******)&uStack_1d8;
        puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (puVar19 == (undefined8 *)0x0) {
          FUN_0eec74c0(0x18,0);
        }
        uStack_1d8._0_1_ = (byte)puVar19;
        uStack_1d8._1_1_ = (undefined1)((ulong)puVar19 >> 8);
        uStack_1d8._2_2_ = (undefined2)((ulong)puVar19 >> 0x10);
        uStack_1d8._4_4_ = (undefined4)((ulong)puVar19 >> 0x20);
        puVar26 = puVar19 + 3;
        bStack_1c8 = (byte)puVar26;
        uStack_1c7 = (undefined2)((ulong)puVar26 >> 8);
        uStack_1c5 = (undefined5)((ulong)puVar26 >> 0x18);
        *puVar19 = 0x65745f6b636f6c2a;
        puVar19[1] = 0x6f5f6574616c706d;
        puVar19[2] = 0x736e6f697470;
        uStack_1cd = (undefined1)((ulong)puVar26 >> 0x18);
        uStack_1cc = (uint)((ulong)puVar26 >> 0x20);
        _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
        uStack_2c0 = (ulong ******)0x0;
        uStack_2b8 = (ulong ******)0x0;
        uStack_2b0 = (ulong ******)0x0;
        bStack_1d0 = bStack_1c8;
        uStack_1cf = uStack_1c7;
        func_0x0488f040(&uStack_2c0,puVar19,puVar26,1);
        uStack_2a8 = (ulong ******)0x20000001c;
        _auStack_2c8 = (ulong *******)&UNK_0f47b778;
        func_0x0d604f40(lStack_240,auStack_2c8);
        ppppppuVar25 = uStack_2c0;
        _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
        ppppppuVar20 = uStack_2b8;
        if (uStack_2c0 != (ulong ******)0x0) {
          for (; ppppppuVar25 != ppppppuVar20; ppppppuVar20 = ppppppuVar20 + -3) {
            if (((ulong)ppppppuVar20[-3] & 1) != 0) {
              func_0x0412a280(ppppppuVar20[-1],(ulong)ppppppuVar20[-3] & 0xfffffffffffffffe);
            }
          }
          uStack_2b8 = ppppppuVar25;
          func_0x0412a280(uStack_2c0,(long)uStack_2b0 - (long)uStack_2c0);
        }
        uVar13 = uStack_1d8._4_4_;
        uVar11 = uStack_1d8._2_2_;
        bVar8 = (byte)uStack_1d8;
        uVar12 = CONCAT22(uStack_1d8._2_2_,CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8));
        lVar18 = CONCAT44(uStack_1d8._4_4_,uVar12);
        if (lVar18 != 0) {
          lVar33 = CONCAT44(uStack_1cc,CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,bStack_1d0)));
          if (lVar18 != lVar33) {
            do {
              if ((*(byte *)(lVar33 + -0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar33 + -8),
                                *(ulong *)(lVar33 + -0x18) & 0xfffffffffffffffe);
              }
              lVar33 = lVar33 + -0x18;
            } while (lVar33 != lVar18);
            lVar18 = CONCAT44(uStack_1d8._4_4_,
                              CONCAT22(uStack_1d8._2_2_,CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8))
                             );
          }
          bStack_1d0 = bVar8;
          uStack_1cf = (undefined2)((uint)uVar12 >> 8);
          uStack_1cd = (undefined1)((ushort)uVar11 >> 8);
          uStack_1cc = uVar13;
          func_0x0412a280(lVar18,CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8)) - lVar18);
        }
      }
      lVar33 = lStack_d8;
      lVar18 = lStack_d0;
      if (lStack_d8 != 0) {
        for (; lVar33 != lVar18; lVar18 = lVar18 + -0x18) {
          if ((*(byte *)(lVar18 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar18 + -8),
                            *(ulong *)(lVar18 + -0x18) & 0xfffffffffffffffe);
          }
        }
        lStack_d0 = lVar33;
        func_0x0412a280(lStack_d8,lStack_c8 - lStack_d8);
      }
      puVar17 = puStack_200;
      func_0x0d605200(auStack_b0,puStack_200,param_7,plStack_230,lStack_240,
                      (ulong)uStack_140 & 0xffffffff);
      ppppppuVar20 = (ulong ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (ppppppuVar20 == (ulong ******)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar4 = _UNK_01211ee4;
      _auStack_2c8 = (ulong *******)0x21;
      uStack_2c0 = (ulong ******)0x19;
      *(ulong *)((long)ppppppuVar20 + 9) =
           CONCAT17(UNK_01211ee3,CONCAT43(_UNK_01211edf,_DAT_01211edc));
      *(undefined8 *)((long)ppppppuVar20 + 0x11) = uVar4;
      uVar14 = _UNK_01211edf;
      uVar13 = _UNK_01211edb;
      uVar12 = _UNK_01211ed7;
      *(undefined4 *)ppppppuVar20 = _DAT_01211ed3;
      *(undefined4 *)((long)ppppppuVar20 + 4) = uVar12;
      *(undefined4 *)(ppppppuVar20 + 1) = uVar13;
      *(undefined4 *)((long)ppppppuVar20 + 0xc) = uVar14;
      *(undefined1 *)((long)ppppppuVar20 + 0x19) = 0;
      uStack_2b8 = ppppppuVar20;
      cVar7 = func_0x04864290(puVar17);
      if (cVar7 == '\0') {
        puVar17 = &DAT_0f54fc40;
        cVar7 = '\0';
      }
      else {
        puVar17 = (undefined *)func_0x04864990(puStack_200,auStack_2c8);
        cVar7 = func_0x04864260(puVar17);
      }
      if (((ulong)_auStack_2c8 & 1) != 0) {
        func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
      }
      if (cVar7 == '\0') {
        _auStack_2c8 = (ulong *******)0x0;
        uStack_2c0 = (ulong ******)0x0;
        uStack_2b8 = (ulong ******)0x0;
        func_0x0ee36b90(puVar17,auStack_2c8,1);
        if (uStack_2c4._2_1_ == '\0') {
          uVar27 = (ulong)uStack_2b8 & 0x80000000000000;
          uVar31 = (ulong)uStack_2b8;
        }
        else {
          *(ulong ********)(lStack_238 + 0x2d8) = _auStack_2c8;
          if ((*(ulong *)(lStack_238 + 0x2e0) & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(*(ulong *)(lStack_238 + 0x2e0) & 0xff00ffffffffffff) - 8);
          }
          *(undefined8 *)(lStack_238 + 0x2e0) = 0;
          ppppppuVar20 = uStack_2c0;
          if (((ulong)uStack_2c0 & 0x80000000000000) != 0) {
            uVar31 = (ulong)uStack_2c0 & 0xff00ffffffffffff;
            lVar33 = *(long *)(uVar31 - 8);
            lVar18 = lVar33 + 9;
            plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
            if (lVar18 != 0 && plVar21 == (long *)0x0) {
              FUN_0eec74c0(lVar18,8);
            }
            *plVar21 = lVar33;
            func_0x0eee2f00(plVar21 + 1,uVar31,lVar33);
            *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
            ppppppuVar20 = (ulong ******)
                           ((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          *(ulong *******)(lStack_238 + 0x2e0) = ppppppuVar20;
          if ((*(ulong *)(lStack_238 + 0x2e8) & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(*(ulong *)(lStack_238 + 0x2e8) & 0xff00ffffffffffff) - 8);
          }
          uVar31 = (ulong)uStack_2b8;
          *(undefined8 *)(lStack_238 + 0x2e8) = 0;
          uVar27 = (ulong)uStack_2b8 & 0x80000000000000;
          uVar29 = (ulong)uStack_2b8;
          if (uVar27 != 0) {
            uVar29 = (ulong)uStack_2b8 & 0xff00ffffffffffff;
            lVar33 = *(long *)(uVar29 - 8);
            lVar18 = lVar33 + 9;
            plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
            if (lVar18 != 0 && plVar21 == (long *)0x0) {
              FUN_0eec74c0(lVar18,8);
            }
            *plVar21 = lVar33;
            func_0x0eee2f00(plVar21 + 1,uVar29,lVar33);
            *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
            uVar29 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          *(ulong *)(lStack_238 + 0x2e8) = uVar29;
        }
        if (uVar27 != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar31 & 0xff00ffffffffffff) - 8);
        }
        uStack_2b8 = (ulong ******)0x0;
        if (((ulong)uStack_2c0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_2c0 & 0xff00ffffffffffff) - 8);
        }
      }
      func_0x0ee33d90(&uStack_1d8,auStack_c0,auStack_b0,0);
      *(uint *)(lStack_238 + 0x128) =
           CONCAT22(uStack_1d8._2_2_,CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8));
      *(undefined4 *)(lStack_238 + 300) = uStack_1d8._4_4_;
      *(uint *)(lStack_238 + 0x130) = CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,bStack_1d0));
      *(uint *)(lStack_238 + 0x134) = uStack_1cc;
      uStack_78 = CONCAT53(uStack_1c5,CONCAT21(uStack_1c7,bStack_1c8));
      *(undefined8 *)(lStack_238 + 0x138) = uStack_78;
      if ((*(ulong *)(lStack_238 + 0x140) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lStack_238 + 0x140) & 0xff00ffffffffffff) - 8);
      }
      uVar31 = uStack_1c0;
      *(undefined8 *)(lStack_238 + 0x140) = 0;
      uStack_140 = (undefined *)(uStack_1c0 & 0xff00ffffffffffff);
      uVar27 = uStack_1c0;
      if ((uStack_1c0 & 0x80000000000000) != 0) {
        lVar33 = *(long *)((long)uStack_140 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uStack_140,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        uVar27 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      *(ulong *)(lStack_238 + 0x140) = uVar27;
      if ((*(ulong *)(lStack_238 + 0x148) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lStack_238 + 0x148) & 0xff00ffffffffffff) - 8);
      }
      uVar27 = uStack_1b8;
      *(undefined8 *)(lStack_238 + 0x148) = 0;
      uVar32 = uStack_1b8 & 0xff00ffffffffffff;
      uVar29 = uStack_1b8;
      if ((uStack_1b8 & 0x80000000000000) != 0) {
        lVar33 = *(long *)(uVar32 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uVar32,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        uVar29 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      *(ulong *)(lStack_238 + 0x148) = uVar29;
      uStack_179 = uStack_1b0;
      *(undefined1 *)(lStack_238 + 0x150) = uStack_1b0;
      *(uint *)(lStack_240 + 0xa8) =
           CONCAT22(uStack_1d8._2_2_,CONCAT11(uStack_1d8._1_1_,(byte)uStack_1d8));
      *(undefined4 *)(lStack_240 + 0xac) = uStack_1d8._4_4_;
      *(uint *)(lStack_240 + 0xb0) = CONCAT13(uStack_1cd,CONCAT21(uStack_1cf,bStack_1d0));
      *(uint *)(lStack_240 + 0xb4) = uStack_1cc;
      *(undefined8 *)(lStack_240 + 0xb8) = uStack_78;
      if ((*(ulong *)(lStack_240 + 0xc0) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lStack_240 + 0xc0) & 0xff00ffffffffffff) - 8);
      }
      *(undefined8 *)(lStack_240 + 0xc0) = 0;
      if ((uVar31 & 0x80000000000000) != 0) {
        lVar33 = *(long *)((long)uStack_140 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uStack_140,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        uVar31 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      *(ulong *)(lStack_240 + 0xc0) = uVar31;
      if ((*(ulong *)(lStack_240 + 200) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lStack_240 + 200) & 0xff00ffffffffffff) - 8);
      }
      *(undefined8 *)(lStack_240 + 200) = 0;
      if ((uVar27 & 0x80000000000000) != 0) {
        lVar33 = *(long *)(uVar32 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uVar32,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        uVar27 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      *(ulong *)(lStack_240 + 200) = uVar27;
      *(undefined1 *)(lStack_240 + 0xd0) = uStack_179;
      bVar8 = *(byte *)(lStack_238 + 0x159);
      uStack_f0._0_4_ = CONCAT31((int3)_DAT_014cb0d6,0x24);
      uStack_f0._5_3_ = (undefined3)_UNK_014cb0da;
      uStack_f0._4_4_ = CONCAT31(uStack_f0._5_3_,(char)((uint)_DAT_014cb0d6 >> 0x18));
      uStack_e8._1_3_ = (undefined3)_UNK_014cb0de;
      uStack_e8 = CONCAT31(uStack_e8._1_3_,(char)((uint)_UNK_014cb0da >> 0x18));
      uStack_e4._1_3_ = (undefined3)_UNK_014cb0e2;
      uStack_e4 = CONCAT31(uStack_e4._1_3_,(char)((uint)_UNK_014cb0de >> 0x18));
      uStack_e0 = (undefined1)((uint)_UNK_014cb0e2 >> 0x18);
      uStack_df = 0x6e6f;
      uStack_dd = 0;
      plStack_68 = plStack_230;
      puVar22 = (uint *)plStack_230[1];
      if (puVar22 < (uint *)plStack_230[2]) {
        *(ulong *)(puVar22 + 4) = CONCAT44(uStack_dc,(uint)CONCAT21(0x6e6f,uStack_e0));
        *puVar22 = (uint)uStack_f0;
        puVar22[1] = uStack_f0._4_4_;
        puVar22[2] = uStack_e8;
        puVar22[3] = uStack_e4;
        puVar22 = puVar22 + 6;
        plStack_230[1] = (long)puVar22;
      }
      else {
        puVar22 = (uint *)func_0x04909a40(plStack_230,&uStack_f0);
      }
      plStack_230[1] = (long)puVar22;
      cVar7 = func_0x04864290(puStack_200);
      if (cVar7 == '\0') {
        puVar17 = &DAT_0f54fc40;
LAB_0d608fe7:
        if ((bVar8 & 0xfd) == 4 || param_9 < 2) {
          pppppppuStack_178 = (ulong *******)0x0;
          uStack_170 = 0;
          uStack_16f = 0;
          uStack_168 = 0;
          uStack_167 = 0;
          iVar16 = func_0x0ee380c0(puVar17,&pppppppuStack_178);
          if (iVar16 == 0) {
            _auStack_2c8 = (ulong *******)0x10034001a0001;
            uStack_2c0 = (ulong ******)&UNK_01254d89;
            uStack_2b8 = (ulong ******)0x0;
            uStack_2b0 = (ulong ******)&UNK_01254d89;
            uStack_2a8 = (ulong ******)0x0;
            func_0x05d54750(&pppppppuStack_1a8,auStack_2c8);
            cVar7 = func_0x04fa7a10(&pppppppuStack_1a8,&pppppppuStack_178);
            if ((param_9 < 2) || (cVar7 != '\x01')) {
              cVar7 = func_0x0551ca70(&pppppppuStack_178,&UNK_0f47bb38);
              if ((param_9 < 2) || (cVar7 != '\x01')) {
                if (param_9 < 2) {
                  cVar7 = func_0x0551ca70(&pppppppuStack_178,&UNK_0f47bb38);
                  if (cVar7 != '\0') goto LAB_0d609a16;
                  func_0x0d5ef090(auStack_2c8,plStack_230);
                  func_0x0ee382a0(&uStack_2b0,&UNK_0f47bb38);
                  pppppppuStack_268 = (ulong *******)0x0;
                  uStack_260 = 0;
                  uStack_25f = 0;
                  uStack_258 = 0;
                  uStack_257 = 0;
                  func_0x048f5d50(&pppppppuStack_268,auStack_2c8,&uStack_298,2);
                  _auStack_228 = (ulong *******)&UNK_0f47cca0;
                  uStack_220 = (ulong *******)0x0;
                  pppppppuStack_218 = (ulong *******)0x0;
                  uStack_210 = 0;
                  func_0x0488f040(&uStack_220,pppppppuStack_268,CONCAT71(uStack_25f,uStack_260),
                                  (CONCAT71(uStack_25f,uStack_260) - (long)pppppppuStack_268 >> 3) *
                                  -0x5555555555555555);
                  uStack_208 = 0x20000001f;
                  _auStack_228 = (ulong *******)&UNK_0f47b778;
                  func_0x0d604f40(lStack_240,auStack_228);
                  func_0x0d5d6c40(auStack_228);
                  func_0x04886070(&pppppppuStack_268);
                  if (((ulong)uStack_2b0 & 1) != 0) {
                    func_0x0412a280(ppppppuStack_2a0,(ulong)uStack_2b0 & 0xfffffffffffffffe);
                  }
                  if (((ulong)_auStack_2c8 & 1) != 0) {
                    func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
                  }
                  uStack_128 = (ulong *******)0x10000000c0001;
                  puStack_120 = &UNK_01254d89;
                  _auStack_2c8 = (ulong *******)0x0;
                  puStack_118 = &UNK_01254d89;
                  _auStack_228 = (ulong *******)0x0;
                  func_0x0ee386e0(auStack_228);
                  func_0x0ee386e0(auStack_2c8);
                }
                else {
LAB_0d609a16:
                  puStack_120 = (undefined *)CONCAT71(uStack_16f,uStack_170);
                  uStack_128 = pppppppuStack_178;
                  puStack_118 = (undefined *)CONCAT71(uStack_167,uStack_168);
                  uStack_170 = 0;
                  uStack_16f = 0;
                  uStack_168 = 0;
                  uStack_167 = 0;
                }
                if (((ulong)pppppppuStack_198 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)pppppppuStack_198 & 0xff00ffffffffffff) - 8);
                }
                pppppppuStack_198 = (ulong *******)0x0;
                if (((ulong)pppppppuStack_1a0 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)pppppppuStack_1a0 & 0xff00ffffffffffff) - 8);
                }
                if ((uStack_167 & 0x800000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,
                             (CONCAT71(uStack_167,uStack_168) & 0xff00ffffffffffff) - 8);
                }
                uStack_168 = 0;
                uStack_167 = 0;
                if ((uStack_16f & 0x800000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,
                             (CONCAT71(uStack_16f,uStack_170) & 0xff00ffffffffffff) - 8);
                }
                goto LAB_0d609fbe;
              }
              func_0x0d5ef090(auStack_2c8,plStack_230);
              func_0x0ee34300(&uStack_2b0,&pppppppuStack_178);
              func_0x0ee382a0(&uStack_298,&UNK_0f47bb38);
              pppppppuStack_1f8 = (ulong *******)0x0;
              pppppppuStack_1f0 = (ulong *******)0x0;
              pppppppuStack_1e8 = (ulong *******)0x0;
              uStack_130 = 0;
              pppppppuStack_138 = (ulong *******)&pppppppuStack_1f8;
              pppppppuStack_188 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
              if (pppppppuStack_188 == (ulong *******)0x0) {
                FUN_0eec74c0(0x48,0);
              }
              pppppppuStack_1e8 = pppppppuStack_188 + 9;
              uStack_260 = SUB81(&pppppppuStack_110,0);
              uStack_25f = (uint7)((ulong)&pppppppuStack_110 >> 8);
              uStack_258 = SUB81(&pppppppuStack_188,0);
              uStack_257 = (uint7)((ulong)&pppppppuStack_188 >> 8);
              uStack_250 = 0;
              pppppppuStack_268 = (ulong *******)&pppppppuStack_1f8;
              pppppppuStack_1f8 = pppppppuStack_188;
              pppppppuStack_1f0 = pppppppuStack_188;
              pppppppuStack_110 = pppppppuStack_188;
              if (((ulong)_auStack_2c8 & 1) == 0) {
                pppppppuStack_188[2] = uStack_2b8;
                *(undefined1 (*) [4])pppppppuStack_188 = auStack_2c8;
                *(undefined4 *)((long)pppppppuStack_188 + 4) = uStack_2c4;
                *(undefined4 *)(pppppppuStack_188 + 1) = (undefined4)uStack_2c0;
                *(uint *)((long)pppppppuStack_188 + 0xc) = uStack_2c0._4_4_;
                pppppppuVar23 = pppppppuStack_188;
              }
              else {
                func_0x0412e5e0(pppppppuStack_188,uStack_2b8,uStack_2c0);
                pppppppuVar23 = pppppppuStack_188;
              }
              pppppppuStack_188 = pppppppuVar23 + 3;
              if (((ulong)uStack_2b0 & 1) == 0) {
                pppppppuVar23[5] = ppppppuStack_2a0;
                *(undefined4 *)pppppppuStack_188 = (undefined4)uStack_2b0;
                *(undefined4 *)((long)pppppppuVar23 + 0x1c) = uStack_2b0._4_4_;
                *(undefined4 *)(pppppppuVar23 + 4) = (undefined4)uStack_2a8;
                *(undefined4 *)((long)pppppppuVar23 + 0x24) = uStack_2a8._4_4_;
              }
              else {
                func_0x0412e5e0(pppppppuStack_188,ppppppuStack_2a0,uStack_2a8);
              }
              pppppppuVar23 = pppppppuStack_188 + 3;
              if ((uStack_298 & 1) == 0) {
                pppppppuStack_188[5] = (ulong ******)CONCAT44(uStack_284,uStack_288);
                *pppppppuVar23 = (ulong ******)CONCAT44(uStack_294,uStack_298);
                pppppppuStack_188[4] = ppppppuStack_290;
                pppppppuStack_188 = pppppppuVar23;
              }
              else {
                pppppppuStack_188 = pppppppuVar23;
                func_0x0412e5e0(pppppppuVar23,CONCAT44(uStack_284,uStack_288),ppppppuStack_290);
              }
              pppppppuStack_1f0 = pppppppuStack_188 + 3;
              _auStack_228 = (ulong *******)&UNK_0f47cca0;
              uStack_220 = (ulong *******)0x0;
              pppppppuStack_218 = (ulong *******)0x0;
              uStack_210 = 0;
              func_0x0488f040(&uStack_220,pppppppuStack_1f8,pppppppuStack_1f0,
                              ((long)pppppppuStack_1f0 - (long)pppppppuStack_1f8 >> 3) *
                              -0x5555555555555555);
              uStack_208 = 0x20000001e;
              _auStack_228 = (ulong *******)&UNK_0f47b778;
              func_0x0d5eed10(lStack_240,auStack_228);
              pppppppuVar24 = uStack_220;
              _auStack_228 = (ulong *******)&UNK_0f47cca0;
              pppppppuVar23 = pppppppuStack_218;
              if (uStack_220 != (ulong *******)0x0) {
                for (; pppppppuVar24 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
                  if (((ulong)pppppppuVar23[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
                pppppppuStack_218 = pppppppuVar24;
                func_0x0412a280(uStack_220,uStack_210 - (long)uStack_220);
              }
              pppppppuVar24 = pppppppuStack_1f8;
              pppppppuVar23 = pppppppuStack_1f0;
              if (pppppppuStack_1f8 != (ulong *******)0x0) {
                for (; pppppppuVar24 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
                  if (((ulong)pppppppuVar23[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
                goto LAB_0d609e1b;
              }
            }
            else {
              func_0x0d5ef090(auStack_2c8,plStack_230);
              func_0x0ee34300(&uStack_2b0,&pppppppuStack_178);
              func_0x0ee34300(&uStack_298,&pppppppuStack_1a8);
              pppppppuStack_1f8 = (ulong *******)0x0;
              pppppppuStack_1f0 = (ulong *******)0x0;
              pppppppuStack_1e8 = (ulong *******)0x0;
              uStack_130 = 0;
              pppppppuStack_138 = (ulong *******)&pppppppuStack_1f8;
              pppppppuStack_188 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
              if (pppppppuStack_188 == (ulong *******)0x0) {
                FUN_0eec74c0(0x48,0);
              }
              pppppppuStack_1e8 = pppppppuStack_188 + 9;
              uStack_260 = SUB81(&pppppppuStack_110,0);
              uStack_25f = (uint7)((ulong)&pppppppuStack_110 >> 8);
              uStack_258 = SUB81(&pppppppuStack_188,0);
              uStack_257 = (uint7)((ulong)&pppppppuStack_188 >> 8);
              uStack_250 = 0;
              pppppppuStack_268 = (ulong *******)&pppppppuStack_1f8;
              pppppppuStack_1f8 = pppppppuStack_188;
              pppppppuStack_1f0 = pppppppuStack_188;
              pppppppuStack_110 = pppppppuStack_188;
              if (((ulong)_auStack_2c8 & 1) == 0) {
                pppppppuStack_188[2] = uStack_2b8;
                *(undefined1 (*) [4])pppppppuStack_188 = auStack_2c8;
                *(undefined4 *)((long)pppppppuStack_188 + 4) = uStack_2c4;
                *(undefined4 *)(pppppppuStack_188 + 1) = (undefined4)uStack_2c0;
                *(uint *)((long)pppppppuStack_188 + 0xc) = uStack_2c0._4_4_;
                pppppppuVar23 = pppppppuStack_188;
              }
              else {
                func_0x0412e5e0(pppppppuStack_188,uStack_2b8,uStack_2c0);
                pppppppuVar23 = pppppppuStack_188;
              }
              pppppppuStack_188 = pppppppuVar23 + 3;
              if (((ulong)uStack_2b0 & 1) == 0) {
                pppppppuVar23[5] = ppppppuStack_2a0;
                *(undefined4 *)pppppppuStack_188 = (undefined4)uStack_2b0;
                *(undefined4 *)((long)pppppppuVar23 + 0x1c) = uStack_2b0._4_4_;
                *(undefined4 *)(pppppppuVar23 + 4) = (undefined4)uStack_2a8;
                *(undefined4 *)((long)pppppppuVar23 + 0x24) = uStack_2a8._4_4_;
              }
              else {
                func_0x0412e5e0(pppppppuStack_188,ppppppuStack_2a0,uStack_2a8);
              }
              pppppppuVar23 = pppppppuStack_188 + 3;
              if ((uStack_298 & 1) == 0) {
                pppppppuStack_188[5] = (ulong ******)CONCAT44(uStack_284,uStack_288);
                *pppppppuVar23 = (ulong ******)CONCAT44(uStack_294,uStack_298);
                pppppppuStack_188[4] = ppppppuStack_290;
                pppppppuStack_188 = pppppppuVar23;
              }
              else {
                pppppppuStack_188 = pppppppuVar23;
                func_0x0412e5e0(pppppppuVar23,CONCAT44(uStack_284,uStack_288),ppppppuStack_290);
              }
              pppppppuStack_1f0 = pppppppuStack_188 + 3;
              _auStack_228 = (ulong *******)&UNK_0f47cca0;
              uStack_220 = (ulong *******)0x0;
              pppppppuStack_218 = (ulong *******)0x0;
              uStack_210 = 0;
              func_0x0488f040(&uStack_220,pppppppuStack_1f8,pppppppuStack_1f0,
                              ((long)pppppppuStack_1f0 - (long)pppppppuStack_1f8 >> 3) *
                              -0x5555555555555555);
              uStack_208 = 0x20000001d;
              _auStack_228 = (ulong *******)&UNK_0f47b778;
              func_0x0d5eed10(lStack_240,auStack_228);
              pppppppuVar24 = uStack_220;
              _auStack_228 = (ulong *******)&UNK_0f47cca0;
              pppppppuVar23 = pppppppuStack_218;
              if (uStack_220 != (ulong *******)0x0) {
                for (; pppppppuVar24 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
                  if (((ulong)pppppppuVar23[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
                pppppppuStack_218 = pppppppuVar24;
                func_0x0412a280(uStack_220,uStack_210 - (long)uStack_220);
              }
              pppppppuVar24 = pppppppuStack_1f8;
              pppppppuVar23 = pppppppuStack_1f0;
              if (pppppppuStack_1f8 != (ulong *******)0x0) {
                for (; pppppppuVar24 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
                  if (((ulong)pppppppuVar23[-3] & 1) != 0) {
                    func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe)
                    ;
                  }
                }
LAB_0d609e1b:
                pppppppuStack_1f0 = pppppppuVar24;
                func_0x0412a280(pppppppuStack_1f8,(long)pppppppuStack_1e8 - (long)pppppppuStack_1f8)
                ;
              }
            }
            if ((uStack_298 & 1) != 0) {
              func_0x0412a280(CONCAT44(uStack_284,uStack_288),
                              CONCAT44(uStack_294,uStack_298) & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_2b0 & 1) != 0) {
              func_0x0412a280(ppppppuStack_2a0,(ulong)uStack_2b0 & 0xfffffffffffffffe);
            }
            if (((ulong)_auStack_2c8 & 1) != 0) {
              func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
            }
            if (((ulong)pppppppuStack_198 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)pppppppuStack_198 & 0xff00ffffffffffff) - 8);
            }
            pppppppuStack_198 = (ulong *******)0x0;
            if (((ulong)pppppppuStack_1a0 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)pppppppuStack_1a0 & 0xff00ffffffffffff) - 8);
            }
          }
          else {
            func_0x0d5ef090(&pppppppuStack_1a8,plStack_230);
            pppppppuStack_268 = (ulong *******)0x0;
            uStack_260 = 0;
            uStack_25f = 0;
            uStack_258 = 0;
            uStack_257 = 0;
            pppppppuStack_1f0 = (ulong *******)((ulong)pppppppuStack_1f0 & 0xffffffffffffff00);
            pppppppuStack_1f8 = (ulong *******)&pppppppuStack_268;
            pppppppuStack_188 =
                 (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (pppppppuStack_188 == (ulong *******)0x0) {
              FUN_0eec74c0(0x18,0);
            }
            uStack_260 = SUB81(pppppppuStack_188,0);
            uStack_25f = (uint7)((ulong)pppppppuStack_188 >> 8);
            uStack_258 = SUB81(pppppppuStack_188 + 3,0);
            uStack_257 = (uint7)((ulong)(pppppppuStack_188 + 3) >> 8);
            uStack_220 = (ulong *******)&pppppppuStack_188;
            pppppppuStack_218 = (ulong *******)&pppppppuStack_138;
            uStack_210 = uStack_210 & 0xffffffffffffff00;
            uVar31 = (ulong)pppppppuStack_1a8 & 1;
            pppppppuStack_268 = pppppppuStack_188;
            _auStack_228 = (ulong *******)&pppppppuStack_268;
            pppppppuStack_138 = pppppppuStack_188;
            if (((ulong)pppppppuStack_1a8 & 1) == 0) {
              pppppppuStack_188[2] = (ulong ******)pppppppuStack_198;
              *pppppppuStack_188 = (ulong ******)pppppppuStack_1a8;
              pppppppuStack_188[1] = (ulong ******)pppppppuStack_1a0;
            }
            else {
              func_0x0412e5e0(pppppppuStack_188,pppppppuStack_198,pppppppuStack_1a0);
            }
            pppppppuVar23 = pppppppuStack_138 + 3;
            uStack_260 = SUB81(pppppppuVar23,0);
            uStack_25f = (uint7)((ulong)pppppppuVar23 >> 8);
            _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
            uStack_2c0 = (ulong ******)0x0;
            uStack_2b8 = (ulong ******)0x0;
            uStack_2b0 = (ulong ******)0x0;
            func_0x0488f040(&uStack_2c0,pppppppuStack_268,pppppppuVar23,
                            ((long)pppppppuVar23 - (long)pppppppuStack_268 >> 3) *
                            -0x5555555555555555);
            uStack_2a8 = (ulong ******)0x20000000f;
            _auStack_2c8 = (ulong *******)&UNK_0f47b778;
            func_0x0d5eed10(lStack_240,auStack_2c8);
            ppppppuVar25 = uStack_2c0;
            _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
            ppppppuVar20 = uStack_2b8;
            if (uStack_2c0 != (ulong ******)0x0) {
              for (; ppppppuVar25 != ppppppuVar20; ppppppuVar20 = ppppppuVar20 + -3) {
                if (((ulong)ppppppuVar20[-3] & 1) != 0) {
                  func_0x0412a280(ppppppuVar20[-1],(ulong)ppppppuVar20[-3] & 0xfffffffffffffffe);
                }
              }
              uStack_2b8 = ppppppuVar25;
              func_0x0412a280(uStack_2c0,(long)uStack_2b0 - (long)uStack_2c0);
            }
            pppppppuVar23 = pppppppuStack_268;
            if (pppppppuStack_268 != (ulong *******)0x0) {
              for (pppppppuVar24 = (ulong *******)CONCAT71(uStack_25f,uStack_260);
                  pppppppuVar23 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -3) {
                if (((ulong)pppppppuVar24[-3] & 1) != 0) {
                  func_0x0412a280(pppppppuVar24[-1],(ulong)pppppppuVar24[-3] & 0xfffffffffffffffe);
                }
              }
              uStack_260 = SUB81(pppppppuVar23,0);
              uStack_25f = (uint7)((ulong)pppppppuVar23 >> 8);
              func_0x0412a280(pppppppuStack_268,
                              CONCAT71(uStack_257,uStack_258) - (long)pppppppuStack_268);
            }
            if (uVar31 != 0) {
              func_0x0412a280(pppppppuStack_198,(ulong)pppppppuStack_1a8 & 0xfffffffffffffffe);
            }
          }
          if ((uStack_167 & 0x800000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(CONCAT71(uStack_167,uStack_168) & 0xff00ffffffffffff) - 8);
          }
          uStack_168 = 0;
          uStack_167 = 0;
          if ((uStack_16f & 0x800000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(CONCAT71(uStack_16f,uStack_170) & 0xff00ffffffffffff) - 8);
          }
        }
        else {
          func_0x0d5ef090(&pppppppuStack_178,plStack_230);
          pppppppuStack_268 = (ulong *******)0x0;
          uStack_260 = 0;
          uStack_25f = 0;
          uStack_258 = 0;
          uStack_257 = 0;
          pppppppuStack_1a0 = (ulong *******)((ulong)pppppppuStack_1a0 & 0xffffffffffffff00);
          pppppppuStack_1a8 = (ulong *******)&pppppppuStack_268;
          pppppppuStack_138 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
          ;
          if (pppppppuStack_138 == (ulong *******)0x0) {
            FUN_0eec74c0(0x18,0);
          }
          uStack_260 = SUB81(pppppppuStack_138,0);
          uStack_25f = (uint7)((ulong)pppppppuStack_138 >> 8);
          uStack_258 = SUB81(pppppppuStack_138 + 3,0);
          uStack_257 = (uint7)((ulong)(pppppppuStack_138 + 3) >> 8);
          uStack_220 = (ulong *******)&pppppppuStack_138;
          pppppppuStack_218 = (ulong *******)&pppppppuStack_1f8;
          uStack_210 = uStack_210 & 0xffffffffffffff00;
          bVar8 = (byte)pppppppuStack_178 & 1;
          pppppppuStack_268 = pppppppuStack_138;
          _auStack_228 = (ulong *******)&pppppppuStack_268;
          pppppppuStack_1f8 = pppppppuStack_138;
          if (((ulong)pppppppuStack_178 & 1) == 0) {
            pppppppuStack_138[2] = (ulong ******)CONCAT71(uStack_167,uStack_168);
            *pppppppuStack_138 = (ulong ******)pppppppuStack_178;
            pppppppuStack_138[1] = (ulong ******)CONCAT71(uStack_16f,uStack_170);
          }
          else {
            func_0x0412e5e0(pppppppuStack_138,CONCAT71(uStack_167,uStack_168),
                            CONCAT71(uStack_16f,uStack_170));
          }
          pppppppuVar23 = pppppppuStack_1f8 + 3;
          uStack_260 = SUB81(pppppppuVar23,0);
          uStack_25f = (uint7)((ulong)pppppppuVar23 >> 8);
          _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
          uStack_2c0 = (ulong ******)0x0;
          uStack_2b8 = (ulong ******)0x0;
          uStack_2b0 = (ulong ******)0x0;
          func_0x0488f040(&uStack_2c0,pppppppuStack_268,pppppppuVar23,
                          ((long)pppppppuVar23 - (long)pppppppuStack_268 >> 3) * -0x5555555555555555
                         );
          uStack_2a8 = (ulong ******)0x20000001c;
          _auStack_2c8 = (ulong *******)&UNK_0f47b778;
          func_0x0d604f40(lStack_240,auStack_2c8);
          ppppppuVar25 = uStack_2c0;
          _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
          ppppppuVar20 = uStack_2b8;
          if (uStack_2c0 != (ulong ******)0x0) {
            for (; ppppppuVar25 != ppppppuVar20; ppppppuVar20 = ppppppuVar20 + -3) {
              if (((ulong)ppppppuVar20[-3] & 1) != 0) {
                func_0x0412a280(ppppppuVar20[-1],(ulong)ppppppuVar20[-3] & 0xfffffffffffffffe);
              }
            }
            uStack_2b8 = ppppppuVar25;
            func_0x0412a280(uStack_2c0,(long)uStack_2b0 - (long)uStack_2c0);
          }
          pppppppuVar23 = pppppppuStack_268;
          if (pppppppuStack_268 != (ulong *******)0x0) {
            for (pppppppuVar24 = (ulong *******)CONCAT71(uStack_25f,uStack_260);
                pppppppuVar23 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -3) {
              if (((ulong)pppppppuVar24[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar24[-1],(ulong)pppppppuVar24[-3] & 0xfffffffffffffffe);
              }
            }
LAB_0d6099b8:
            uStack_260 = SUB81(pppppppuVar23,0);
            uStack_25f = (uint7)((ulong)pppppppuVar23 >> 8);
            func_0x0412a280(pppppppuStack_268,
                            CONCAT71(uStack_257,uStack_258) - (long)pppppppuStack_268);
          }
LAB_0d6099cd:
          if (bVar8 != 0) {
            func_0x0412a280(CONCAT71(uStack_167,uStack_168),
                            (ulong)pppppppuStack_178 & 0xfffffffffffffffe);
          }
        }
LAB_0d609fa7:
        uStack_128 = (ulong *******)0x0;
        puStack_120 = (undefined *)0x0;
        puStack_118 = (undefined *)0x0;
      }
      else {
        puVar17 = (undefined *)func_0x04864990(puStack_200,&uStack_f0);
        cVar7 = func_0x04864260(puVar17);
        if (cVar7 == '\0') goto LAB_0d608fe7;
        bVar8 = bVar8 & 0xfd;
        if (bVar8 == 4 && 1 < param_9) {
          func_0x0d5ef090(&pppppppuStack_178,plStack_230);
          pppppppuStack_268 = (ulong *******)0x0;
          uStack_260 = 0;
          uStack_25f = 0;
          uStack_258 = 0;
          uStack_257 = 0;
          pppppppuStack_1a0 = (ulong *******)((ulong)pppppppuStack_1a0 & 0xffffffffffffff00);
          pppppppuStack_1a8 = (ulong *******)&pppppppuStack_268;
          pppppppuStack_138 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
          ;
          if (pppppppuStack_138 == (ulong *******)0x0) {
            FUN_0eec74c0(0x18,0);
          }
          uStack_260 = SUB81(pppppppuStack_138,0);
          uStack_25f = (uint7)((ulong)pppppppuStack_138 >> 8);
          uStack_258 = SUB81(pppppppuStack_138 + 3,0);
          uStack_257 = (uint7)((ulong)(pppppppuStack_138 + 3) >> 8);
          uStack_220 = (ulong *******)&pppppppuStack_138;
          pppppppuStack_218 = (ulong *******)&pppppppuStack_1f8;
          uStack_210 = uStack_210 & 0xffffffffffffff00;
          bVar8 = (byte)pppppppuStack_178 & 1;
          pppppppuStack_268 = pppppppuStack_138;
          _auStack_228 = (ulong *******)&pppppppuStack_268;
          pppppppuStack_1f8 = pppppppuStack_138;
          if (((ulong)pppppppuStack_178 & 1) == 0) {
            pppppppuStack_138[2] = (ulong ******)CONCAT71(uStack_167,uStack_168);
            *pppppppuStack_138 = (ulong ******)pppppppuStack_178;
            pppppppuStack_138[1] = (ulong ******)CONCAT71(uStack_16f,uStack_170);
          }
          else {
            func_0x0412e5e0(pppppppuStack_138,CONCAT71(uStack_167,uStack_168),
                            CONCAT71(uStack_16f,uStack_170));
          }
          pppppppuVar23 = pppppppuStack_1f8 + 3;
          uStack_260 = SUB81(pppppppuVar23,0);
          uStack_25f = (uint7)((ulong)pppppppuVar23 >> 8);
          _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
          uStack_2c0 = (ulong ******)0x0;
          uStack_2b8 = (ulong ******)0x0;
          uStack_2b0 = (ulong ******)0x0;
          func_0x0488f040(&uStack_2c0,pppppppuStack_268,pppppppuVar23,
                          ((long)pppppppuVar23 - (long)pppppppuStack_268 >> 3) * -0x5555555555555555
                         );
          uStack_2a8 = (ulong ******)0x200000007;
          _auStack_2c8 = (ulong *******)&UNK_0f47b778;
          func_0x0d5eed10(lStack_240,auStack_2c8);
          ppppppuVar25 = uStack_2c0;
          _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
          ppppppuVar20 = uStack_2b8;
          if (uStack_2c0 != (ulong ******)0x0) {
            for (; ppppppuVar25 != ppppppuVar20; ppppppuVar20 = ppppppuVar20 + -3) {
              if (((ulong)ppppppuVar20[-3] & 1) != 0) {
                func_0x0412a280(ppppppuVar20[-1],(ulong)ppppppuVar20[-3] & 0xfffffffffffffffe);
              }
            }
            uStack_2b8 = ppppppuVar25;
            func_0x0412a280(uStack_2c0,(long)uStack_2b0 - (long)uStack_2c0);
          }
          pppppppuVar23 = pppppppuStack_268;
          if (pppppppuStack_268 != (ulong *******)0x0) {
            for (pppppppuVar24 = (ulong *******)CONCAT71(uStack_25f,uStack_260);
                pppppppuVar23 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -3) {
              if (((ulong)pppppppuVar24[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar24[-1],(ulong)pppppppuVar24[-3] & 0xfffffffffffffffe);
              }
            }
            goto LAB_0d6099b8;
          }
          goto LAB_0d6099cd;
        }
        if (1 < param_9 || bVar8 != 4) goto LAB_0d609fa7;
        uStack_128 = (ulong *******)0x1000500020001;
        puStack_120 = &UNK_01254d89;
        puStack_118 = &UNK_01254d89;
      }
LAB_0d609fbe:
      lVar18 = plStack_230[1];
      if ((*(byte *)(lVar18 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar18 + -8),*(ulong *)(lVar18 + -0x18) & 0xfffffffffffffffe
                       );
      }
      plStack_230[1] = lVar18 + -0x18;
      if (((uint)uStack_f0 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_dc,CONCAT13(uStack_dd,CONCAT21(uStack_df,uStack_e0))),
                        CONCAT44(uStack_f0._4_4_,(uint)uStack_f0) & 0xfffffffffffffffe);
      }
      pppppppuVar23 = uStack_128;
      _auStack_2c8 = uStack_128;
      puVar17 = puStack_120;
      if (((ulong)puStack_120 & 0x80000000000000) != 0) {
        uVar31 = (ulong)puStack_120 & 0xff00ffffffffffff;
        lVar33 = *(long *)(uVar31 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uVar31,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        puVar17 = (undefined *)((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uStack_2b8 = (ulong ******)0x0;
      puVar30 = puStack_118;
      uStack_2c0 = (ulong ******)puVar17;
      uStack_140 = puVar17;
      if (((ulong)puStack_118 & 0x80000000000000) != 0) {
        uVar31 = (ulong)puStack_118 & 0xff00ffffffffffff;
        lVar33 = *(long *)(uVar31 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uVar31,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        puVar30 = (undefined *)((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uVar12 = 0x34;
      uStack_2b8 = (ulong ******)puVar30;
      if (uStack_128._6_1_ == '\x01') {
        cVar7 = func_0x04fa7a10(&uStack_128,0xf7208c0);
        uVar12 = _DAT_0f7208d8;
        if (cVar7 == '\0') {
          lVar33 = 0xf7208e0;
          lVar18 = 0x2c;
          do {
            cVar7 = func_0x04fa7a10(&uStack_128,lVar33);
            if (cVar7 != '\0') {
              cVar7 = func_0x04fa7a10(&uStack_128,lVar33 + -0x20);
              if (cVar7 == '\0') {
                uVar12 = *(undefined4 *)(lVar33 + -8);
                break;
              }
            }
            lVar33 = lVar33 + 0x20;
            lVar18 = lVar18 + -1;
            uVar12 = 0x34;
          } while (lVar18 != 0);
        }
      }
      uStack_2b0 = (ulong ******)CONCAT44(uStack_2b0._4_4_,uVar12);
      uVar11 = func_0x0d8a1d70(&uStack_128);
      uStack_2b0._0_6_ = CONCAT24(uVar11,(undefined4)uStack_2b0);
      *(ulong ********)(lStack_238 + 0x180) = pppppppuVar23;
      if ((*(ulong *)(lStack_238 + 0x188) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lStack_238 + 0x188) & 0xff00ffffffffffff) - 8);
      }
      *(undefined8 *)(lStack_238 + 0x188) = 0;
      uVar31 = (ulong)uStack_140 & 0xff00ffffffffffff;
      puVar17 = uStack_140;
      if (((ulong)uStack_140 & 0x80000000000000) != 0) {
        lVar33 = *(long *)(uVar31 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uVar31,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        puVar17 = (undefined *)((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      *(undefined **)(lStack_238 + 0x188) = puVar17;
      if ((*(ulong *)(lStack_238 + 400) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lStack_238 + 400) & 0xff00ffffffffffff) - 8);
      }
      *(undefined8 *)(lStack_238 + 400) = 0;
      if (((ulong)puVar30 & 0x80000000000000) == 0) {
        *(undefined **)(lStack_238 + 400) = puVar30;
        *(undefined4 *)(lStack_238 + 0x198) = (undefined4)uStack_2b0;
        *(undefined2 *)(lStack_238 + 0x19c) = uStack_2b0._4_2_;
      }
      else {
        uVar27 = (ulong)puVar30 & 0xff00ffffffffffff;
        lVar33 = *(long *)(uVar27 - 8);
        lVar18 = lVar33 + 9;
        plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
        if (lVar18 != 0 && plVar21 == (long *)0x0) {
          FUN_0eec74c0(lVar18,8);
        }
        *plVar21 = lVar33;
        func_0x0eee2f00(plVar21 + 1,uVar27,lVar33);
        *(undefined1 *)((long)plVar21 + lVar33 + 8) = 0;
        *(ulong *)(lStack_238 + 400) = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        *(undefined2 *)(lStack_238 + 0x19c) = uStack_2b0._4_2_;
        *(undefined4 *)(lStack_238 + 0x198) = (undefined4)uStack_2b0;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar27 - 8);
      }
      uVar4 = uStack_80;
      puVar17 = puStack_200;
      uStack_2b8 = (ulong ******)0x0;
      if (((ulong)uStack_140 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar31 - 8);
      }
      ppppppuStack_108 = (ulong ******)0x0;
      ppppppuStack_100 = (ulong ******)0x0;
      puStack_f8 = (undefined4 *)0x0;
      func_0x0488f040(&ppppppuStack_108,*plStack_230,plStack_230[1],
                      (plStack_230[1] - *plStack_230 >> 3) * -0x5555555555555555);
      uVar14 = _UNK_01dd31dc;
      uVar13 = _UNK_01dd31d8;
      uVar12 = _UNK_01dd31d4;
      pppppppuStack_110 = &ppppppuStack_108;
      if (ppppppuStack_100 < puStack_f8) {
        *(undefined4 *)ppppppuStack_100 = _DAT_01dd31d0;
        *(undefined4 *)((long)ppppppuStack_100 + 4) = uVar12;
        *(undefined4 *)((long)ppppppuStack_100 + 8) = uVar13;
        *(undefined4 *)((long)ppppppuStack_100 + 0xc) = uVar14;
        *(undefined8 *)((long)ppppppuStack_100 + 0x10) = 0x6e6f;
        ppppppuStack_100 = (ulong ******)((long)ppppppuStack_100 + 0x18);
      }
      else {
        ppppppuStack_100 = (ulong ******)func_0x04909a40(&ppppppuStack_108,&DAT_01dd31d0);
      }
      cVar7 = func_0x04864290(puVar17);
      if (cVar7 == '\0') {
        puVar17 = &DAT_0f54fc40;
      }
      else {
        puVar17 = (undefined *)func_0x04864990(puStack_200,&DAT_01dd31d0);
        func_0x04864260(puVar17);
      }
      uStack_258 = 0;
      uStack_257 = 0;
      uStack_250 = 0;
      pppppppuStack_268 = (ulong *******)0x0;
      uStack_260 = 0;
      uStack_25f = 0;
      iVar16 = func_0x0ee380c0(puVar17,&pppppppuStack_268);
      if (iVar16 == 0) {
        func_0x0d88e390(&pppppppuStack_178,&pppppppuStack_268);
      }
      else {
        cVar7 = func_0x04865490(puVar17);
        if (cVar7 == '\0') {
          cVar7 = func_0x04864260(puVar17);
          if (cVar7 == '\0') goto LAB_0d60a61e;
        }
        else {
          _auStack_228 = (ulong *******)((ulong)_auStack_228 & 0xffffffffffff0000);
          FUN_04863cb0(auStack_2c8,puVar17,auStack_228);
          iVar16 = func_0x0d88e850(auStack_2c8,&pppppppuStack_268);
          if (((ulong)_auStack_2c8 & 1) != 0) {
            func_0x0412a280(uStack_2b8,(ulong)_auStack_2c8 & 0xfffffffffffffffe);
          }
          if (((ulong)_auStack_228 & 1) != 0) {
            func_0x0412a280(pppppppuStack_218,(ulong)_auStack_228 & 0xfffffffffffffffe);
          }
          if (iVar16 == 0) {
            func_0x0d88e390(&pppppppuStack_178,&pppppppuStack_268);
            goto LAB_0d60a8ac;
          }
LAB_0d60a61e:
          func_0x0d5ef090(&pppppppuStack_1f8,&ppppppuStack_108);
          pppppppuStack_1a8 = (ulong *******)0x0;
          pppppppuStack_1a0 = (ulong *******)0x0;
          pppppppuStack_198 = (ulong *******)0x0;
          uStack_e8 = uStack_e8 & 0xffffff00;
          uStack_f0 = (ulong *******)&pppppppuStack_1a8;
          pppppppuVar23 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppuVar23 == (ulong *******)0x0) {
            FUN_0eec74c0(0x18,0);
          }
          pppppppuStack_198 = pppppppuVar23 + 3;
          uStack_220 = (ulong *******)&pppppppuStack_188;
          pppppppuStack_218 = (ulong *******)&pppppppuStack_138;
          uStack_210 = uStack_210 & 0xffffffffffffff00;
          uVar31 = (ulong)pppppppuStack_1f8 & 1;
          _auStack_228 = (ulong *******)&pppppppuStack_1a8;
          pppppppuStack_1a8 = pppppppuVar23;
          pppppppuStack_188 = pppppppuVar23;
          pppppppuStack_138 = pppppppuVar23;
          if (((ulong)pppppppuStack_1f8 & 1) == 0) {
            pppppppuVar23[2] = (ulong ******)pppppppuStack_1e8;
            *pppppppuVar23 = (ulong ******)pppppppuStack_1f8;
            pppppppuVar23[1] = (ulong ******)pppppppuStack_1f0;
          }
          else {
            pppppppuStack_1a0 = pppppppuVar23;
            func_0x0412e5e0(pppppppuVar23,pppppppuStack_1e8,pppppppuStack_1f0);
          }
          pppppppuStack_1a0 = pppppppuStack_138 + 3;
          _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
          uStack_2c0 = (ulong ******)0x0;
          uStack_2b8 = (ulong ******)0x0;
          uStack_2b0 = (ulong ******)0x0;
          func_0x0488f040(&uStack_2c0,pppppppuStack_1a8,pppppppuStack_1a0,
                          ((long)pppppppuStack_1a0 - (long)pppppppuStack_1a8 >> 3) *
                          -0x5555555555555555);
          uStack_2a8 = (ulong ******)0x20000000f;
          _auStack_2c8 = (ulong *******)&UNK_0f47b778;
          func_0x0d5eed10(lStack_240,auStack_2c8);
          puVar30 = (undefined *)uStack_2c0;
          _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
          puVar17 = (undefined *)uStack_2b8;
          if (uStack_2c0 != (ulong ******)0x0) {
            for (; puVar30 != puVar17; puVar17 = puVar17 + -0x18) {
              if ((puVar17[-0x18] & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(puVar17 + -8),
                                *(ulong *)(puVar17 + -0x18) & 0xfffffffffffffffe);
              }
            }
            uStack_2b8 = (ulong ******)puVar30;
            func_0x0412a280(uStack_2c0,(long)uStack_2b0 - (long)uStack_2c0);
          }
          pppppppuVar24 = pppppppuStack_1a8;
          pppppppuVar23 = pppppppuStack_1a0;
          if (pppppppuStack_1a8 != (ulong *******)0x0) {
            for (; pppppppuVar24 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
              if (((ulong)pppppppuVar23[-3] & 1) != 0) {
                func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
              }
            }
            pppppppuStack_1a0 = pppppppuVar24;
            func_0x0412a280(pppppppuStack_1a8,(long)pppppppuStack_198 - (long)pppppppuStack_1a8);
          }
          if (uVar31 != 0) {
            func_0x0412a280(pppppppuStack_1e8,(ulong)pppppppuStack_1f8 & 0xfffffffffffffffe);
          }
        }
        uStack_168 = 0;
        uStack_167 = 0;
        uStack_160 = 0;
        pppppppuStack_178 = (ulong *******)0x0;
        uStack_170 = 0;
        uStack_16f = 0;
      }
LAB_0d60a8ac:
      if ((uStack_257 & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_257,uStack_258) & 0xff00ffffffffffff) - 8);
      }
      uStack_258 = 0;
      uStack_257 = 0;
      if ((uStack_25f & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_25f,uStack_260) & 0xff00ffffffffffff) - 8);
      }
      _auStack_2c8 = (ulong *******)0x0;
      uStack_2c0 = (ulong ******)0x0;
      uStack_2b8 = (ulong ******)0x0;
      func_0x0488f040(auStack_2c8,ppppppuStack_108,ppppppuStack_100,
                      ((long)ppppppuStack_100 - (long)ppppppuStack_108 >> 3) * -0x5555555555555555);
      func_0x0d6037e0(lStack_238,lStack_240,&pppppppuStack_178,param_9,auStack_2c8);
      puVar30 = (undefined *)_auStack_2c8;
      puVar17 = (undefined *)uStack_2c0;
      if (_auStack_2c8 != (ulong *******)0x0) {
        for (; puVar30 != puVar17; puVar17 = puVar17 + -0x18) {
          if ((puVar17[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(puVar17 + -8),
                            *(ulong *)(puVar17 + -0x18) & 0xfffffffffffffffe);
          }
        }
        uStack_2c0 = (ulong ******)puVar30;
        func_0x0412a280(_auStack_2c8,(long)uStack_2b8 - (long)_auStack_2c8);
      }
      if ((uStack_167 & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_167,uStack_168) & 0xff00ffffffffffff) - 8);
      }
      uStack_168 = 0;
      uStack_167 = 0;
      if ((uStack_16f & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_16f,uStack_170) & 0xff00ffffffffffff) - 8);
      }
      ppppppuVar20 = (ulong ******)((long)ppppppuStack_100 + -0x18);
      if ((*(byte *)((long)ppppppuStack_100 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)((long)ppppppuStack_100 + -8),
                        *(ulong *)((long)ppppppuStack_100 + -0x18) & 0xfffffffffffffffe);
      }
      ppppppuVar25 = ppppppuStack_108;
      ppppppuStack_100 = ppppppuVar20;
      if (ppppppuStack_108 != (ulong ******)0x0) {
        for (; ppppppuVar25 != ppppppuVar20; ppppppuVar20 = ppppppuVar20 + -3) {
          if (((ulong)ppppppuVar20[-3] & 1) != 0) {
            func_0x0412a280(ppppppuVar20[-1],(ulong)ppppppuVar20[-3] & 0xfffffffffffffffe);
          }
        }
        ppppppuStack_100 = ppppppuVar25;
        func_0x0412a280(ppppppuStack_108,(long)puStack_f8 - (long)ppppppuStack_108);
      }
      func_0x04863480(uVar4,puStack_200);
      if (((ulong)puStack_118 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_118 & 0xff00ffffffffffff) - 8);
      }
      puStack_118 = (undefined *)0x0;
      if (((ulong)puStack_120 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_120 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_1b8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8);
      }
      uStack_1b8 = 0;
      if ((uStack_1c0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_a0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a0 & 0xff00ffffffffffff) - 8);
      }
      uStack_a0 = 0;
      if ((uStack_a8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a8 & 0xff00ffffffffffff) - 8);
      }
      if (((uint)auStack_158 & 1) != 0) {
        func_0x0412a280(ppppppuStack_148,CONCAT44(uStack_154,auStack_158) & 0xfffffffffffffffe);
      }
      func_0x04863610(auStack_60);
      func_0x04863610(auStack_48);
      goto LAB_0d60acb9;
    }
    func_0x0d5ef090(&pppppppuStack_268,plStack_230);
    _auStack_228 = (ulong *******)0x0;
    uStack_220 = (ulong *******)0x0;
    pppppppuStack_218 = (ulong *******)0x0;
    uStack_170 = 0;
    pppppppuStack_178 = (ulong *******)auStack_228;
    pppppppuStack_1f8 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppuStack_1f8 == (ulong *******)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    pppppppuStack_218 = pppppppuStack_1f8 + 3;
    uStack_1d8._0_1_ = (byte)auStack_228;
    uStack_1d8._1_1_ = (undefined1)((ulong)auStack_228 >> 8);
    uStack_1d8._2_2_ = (undefined2)((ulong)auStack_228 >> 0x10);
    uStack_1d8._4_4_ = (undefined4)((ulong)auStack_228 >> 0x20);
    bStack_1d0 = (byte)&pppppppuStack_1f8;
    uStack_1cf = (undefined2)((ulong)&pppppppuStack_1f8 >> 8);
    uStack_1cd = (undefined1)((ulong)&pppppppuStack_1f8 >> 0x18);
    uStack_1cc = (uint)((ulong)&pppppppuStack_1f8 >> 0x20);
    bStack_1c8 = (byte)&pppppppuStack_1a8;
    uStack_1c7 = (undefined2)((ulong)&pppppppuStack_1a8 >> 8);
    uStack_1c5 = (undefined5)((ulong)&pppppppuStack_1a8 >> 0x18);
    uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
    bVar8 = (byte)pppppppuStack_268 & 1;
    _auStack_228 = pppppppuStack_1f8;
    pppppppuStack_1a8 = pppppppuStack_1f8;
    if (((ulong)pppppppuStack_268 & 1) == 0) {
      pppppppuStack_1f8[2] = (ulong ******)CONCAT71(uStack_257,uStack_258);
      *pppppppuStack_1f8 = (ulong ******)pppppppuStack_268;
      pppppppuStack_1f8[1] = (ulong ******)CONCAT71(uStack_25f,uStack_260);
    }
    else {
      uStack_220 = pppppppuStack_1f8;
      func_0x0412e5e0(pppppppuStack_1f8,CONCAT71(uStack_257,uStack_258),
                      CONCAT71(uStack_25f,uStack_260));
    }
    uStack_220 = pppppppuStack_1a8 + 3;
    _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
    uStack_2c0 = (ulong ******)0x0;
    uStack_2b8 = (ulong ******)0x0;
    uStack_2b0 = (ulong ******)0x0;
    func_0x0488f040(&uStack_2c0,_auStack_228,uStack_220,
                    ((long)uStack_220 - (long)_auStack_228 >> 3) * -0x5555555555555555);
    uStack_2a8 = (ulong ******)0x200000009;
    _auStack_2c8 = (ulong *******)&UNK_0f47b778;
    func_0x0d5eed10(lStack_240,auStack_2c8);
    puVar30 = (undefined *)uStack_2c0;
    _auStack_2c8 = (ulong *******)&UNK_0f47cca0;
    puVar17 = (undefined *)uStack_2b8;
    if (uStack_2c0 != (ulong ******)0x0) {
      for (; puVar30 != puVar17; puVar17 = puVar17 + -0x18) {
        if ((puVar17[-0x18] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar17 + -8),
                          *(ulong *)(puVar17 + -0x18) & 0xfffffffffffffffe);
        }
      }
      uStack_2b8 = (ulong ******)puVar30;
      func_0x0412a280(uStack_2c0,(long)uStack_2b0 - (long)uStack_2c0);
    }
    pppppppuVar24 = _auStack_228;
    pppppppuVar23 = uStack_220;
    if (_auStack_228 != (ulong *******)0x0) {
      for (; pppppppuVar24 != pppppppuVar23; pppppppuVar23 = pppppppuVar23 + -3) {
        if (((ulong)pppppppuVar23[-3] & 1) != 0) {
          func_0x0412a280(pppppppuVar23[-1],(ulong)pppppppuVar23[-3] & 0xfffffffffffffffe);
        }
      }
      goto LAB_0d60774b;
    }
  }
  if (bVar8 != 0) {
    func_0x0412a280(CONCAT71(uStack_257,uStack_258),(ulong)pppppppuStack_268 & 0xfffffffffffffffe);
  }
  func_0x04863060(param_1,0);
LAB_0d60acb9:
  lVar18 = plStack_230[1];
  if ((*(byte *)(lVar18 + -0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar18 + -8),*(ulong *)(lVar18 + -0x18) & 0xfffffffffffffffe);
  }
  plStack_230[1] = lVar18 + -0x18;
  return;
}



/* ---- referenced strings ----
 * 0x1211ed3  pack_optimization_version
 * 0x1211edc  mization_version
 * 0x12507e1  allow_random_seed
 * 0x14cb0d6  min_engine_version
 * 0x14dc434  manifestvalidation.noname
 * 0x14dc43d  alidation.noname
 * 0x1dd31d0  "base_game_version
 */
