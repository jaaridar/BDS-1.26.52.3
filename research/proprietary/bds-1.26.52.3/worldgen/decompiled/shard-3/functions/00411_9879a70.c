/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9979a70 (ELF vaddr 0x9879a70)
 * Label: caller-of-callee
 * Body:  [[09979a70, 09979e00] [09979e10, 09979e57] [09979e60, 09979ef0] [09979f00, 0997bcc7] [0997bcd0, 0997bd17] [0997bd20, 0997bfbd] [0997bfc0, 0997c007] [0997c010, 0997c5e8] [0997c5f0, 0997ce52] [0997ce60, 0997cfaa] [0997cfb0, 0997d238] [0997d240, 0997d2ab] [0997d2b0, 0997d385] [0997d390, 0997d3d7] [0997d3e0, 0997d4a7] [0997d4d6, 0997d4e7] [0997d798, 0997d7ba] [0997d8e9, 0997d8f6] [0997da96, 0997daf9]]
 * Ghidra: FUN_09979a70
 */


/* WARNING: Removing unreachable block (ram,0x0997b05b) */
/* WARNING: Removing unreachable block (ram,0x0997b06d) */
/* WARNING: Removing unreachable block (ram,0x0997b081) */
/* WARNING: Removing unreachable block (ram,0x0997cd35) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09979a70(undefined8 param_1,ulong param_2,ulong *param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint5 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined *puVar13;
  char cVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  ulong uVar24;
  long extraout_RDX;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  ulong *puVar29;
  ulong uVar30;
  long lVar31;
  bool bVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  char cStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  uint uStack_4f0;
  undefined1 uStack_4ec;
  undefined1 uStack_4eb;
  undefined2 uStack_4ea;
  uint uStack_4e8;
  undefined2 uStack_4e4;
  undefined1 uStack_4e2;
  undefined1 uStack_4e1;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  uint uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  uint uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 *puStack_4b8;
  uint5 uStack_4b0;
  undefined4 uStack_4ab;
  uint uStack_4a7;
  undefined4 uStack_4a3;
  uint uStack_49f;
  undefined3 uStack_49b;
  ulong uStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  undefined1 *puStack_400;
  byte bStack_3f8;
  undefined1 uStack_3f7;
  undefined2 uStack_3f6;
  undefined4 uStack_3f4;
  byte bStack_3f0;
  undefined1 uStack_3ef;
  undefined2 uStack_3ee;
  undefined1 uStack_3ec;
  undefined1 uStack_3eb;
  undefined2 uStack_3ea;
  undefined1 *puStack_3e8;
  ulong uStack_3e0;
  byte *pbStack_3d8;
  undefined1 *puStack_3d0;
  undefined1 auStack_3c8 [16];
  undefined1 uStack_3b8;
  ulong uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  long lStack_398;
  undefined8 *puStack_390;
  undefined1 (*pauStack_388) [16];
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined1 uStack_359;
  undefined4 uStack_358;
  undefined1 uStack_354;
  undefined1 uStack_353;
  undefined2 uStack_352;
  undefined1 uStack_350;
  undefined2 uStack_34f;
  undefined1 uStack_34d;
  undefined4 uStack_34c;
  undefined1 *puStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined1 *puStack_330;
  ulong auStack_328 [2];
  undefined *puStack_318;
  code *pcStack_310;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_2e8 [12];
  undefined4 uStack_2dc;
  undefined1 *puStack_2d8;
  long *plStack_2c8;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined1 *puStack_298;
  undefined8 uStack_288;
  ulong *puStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  long lStack_270;
  long lStack_268;
  char cStack_260;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  undefined1 uStack_248;
  uint uStack_247;
  uint uStack_243;
  uint uStack_23f;
  undefined1 *puStack_238;
  ulong uStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  undefined4 uStack_218;
  char cStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 aauStack_1f8 [2] [16];
  undefined1 (*pauStack_1d8) [16];
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  byte bStack_190;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined1 uStack_178;
  uint uStack_177;
  uint uStack_173;
  uint uStack_16f;
  ulong uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined4 uStack_148;
  char cStack_140;
  long lStack_138;
  long *plStack_128;
  long *plStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 uStack_c8;
  uint uStack_c7;
  uint uStack_c3;
  uint uStack_bf;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  uStack_278 = 0;
  cStack_260 = '\0';
  uStack_258 = uStack_258 & 0xffff0000;
  uStack_254 = uStack_254 & 0xffffff00;
  uStack_250 = uStack_250 & 0xffffff00;
  uStack_24c = uStack_24c & 0xffffff00;
  uStack_248 = 0;
  uStack_247 = (uint)(uint3)uStack_247;
  uStack_243._0_2_ = (ushort)(byte)uStack_243;
  uStack_243 = uStack_243 & 0xffffff;
  uStack_23f = (uint)(uint3)uStack_23f;
  puStack_238 = (undefined1 *)((ulong)puStack_238 & 0xffffffffffffff00);
  cStack_210 = '\0';
  uStack_50 = param_1;
  uStack_48 = param_5;
  if ((*(long *)(param_2 + 0x60) == 0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011f76ab),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_2 + 0x60) == '\0') &&
     (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011f76ab),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (*(char *)(param_4 + 0xf0) == '\0') {
LAB_0997d48b:
    func_0x048a88b0();
LAB_0997d490:
    uVar18 = func_0x04882ef0(&UNK_012a1eae);
    param_3[0x1e] = param_2;
    func_0x0651dbb0(&uStack_358);
    if ((bStack_3f8 & 1) != 0) {
      func_0x0412a280(puStack_3e8,
                      CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8))) &
                      0xfffffffffffffffe);
    }
    if (cStack_4fc == '\0') {
      func_0x0412a280(puStack_400,(byte)uStack_2b0 & 0xfe | uStack_2b8);
      func_0x0997db00(&uStack_278);
      uVar18 = func_0x0eee2d70(uVar18);
      func_0x04863610(&bStack_3f8);
    }
    func_0x0997db00(&uStack_278);
    func_0x0eee2d70(uVar18);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar17 = *(long *)(param_2 + 0x70);
  lVar16 = func_0x09ac9c90(lVar17 + 0x38,param_4 + 0x80);
  lVar17 = lVar17 + 0x60;
  if (lVar16 != 0) {
    lVar17 = lVar16 + 0x28;
  }
  uStack_4f8._1_3_ = (undefined3)_DAT_0141cb08;
  uStack_4f8 = CONCAT31(uStack_4f8._1_3_,0x2a);
  uStack_4f4._1_3_ = (undefined3)_UNK_0141cb0c;
  uStack_4f4 = CONCAT31(uStack_4f4._1_3_,(char)((uint)_DAT_0141cb08 >> 0x18));
  uStack_4f0._1_3_ = (undefined3)_UNK_0141cb10;
  uStack_4f0 = CONCAT31(uStack_4f0._1_3_,(char)((uint)_UNK_0141cb0c >> 0x18));
  uStack_4ec = (undefined1)((uint)_UNK_0141cb10 >> 0x18);
  uStack_4eb = (undefined1)_UNK_0141cb14;
  uStack_4ea = 0x7672;
  uStack_4e8 = 0x6e2d7265;
  uStack_4e4 = 0x7465;
  uStack_4e2 = 0;
  uStack_208 = param_2;
  param_2 = func_0x099e0c60(lVar17 + 0x50,&uStack_4f8);
  if ((uStack_4f8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8))),
                    CONCAT44(uStack_4f4,uStack_4f8) & 0xfffffffffffffffe);
  }
  if (param_2 != 0) {
    uStack_4f8._1_3_ = (undefined3)_DAT_0141cb08;
    uStack_4f8 = CONCAT31(uStack_4f8._1_3_,0x2a);
    uStack_4f4._1_3_ = (undefined3)_UNK_0141cb0c;
    uStack_4f4 = CONCAT31(uStack_4f4._1_3_,(char)((uint)_DAT_0141cb08 >> 0x18));
    uStack_4f0._1_3_ = (undefined3)_UNK_0141cb10;
    uStack_4f0 = CONCAT31(uStack_4f0._1_3_,(char)((uint)_UNK_0141cb0c >> 0x18));
    uStack_4ec = (undefined1)((uint)_UNK_0141cb10 >> 0x18);
    uStack_4eb = (undefined1)_UNK_0141cb14;
    uStack_4ea = 0x7672;
    uStack_4e8 = 0x6e2d7265;
    uStack_4e4 = 0x7465;
    uStack_4e2 = 0;
    lVar17 = func_0x099e0c60(lVar17 + 0x50,&uStack_4f8);
    if (lVar17 == 0) goto LAB_0997d490;
    if ((uStack_4f8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8))),
                      CONCAT44(uStack_4f4,uStack_4f8) & 0xfffffffffffffffe);
    }
    func_0x04863060(&bStack_3f8,7);
    plVar25 = (long *)(lVar17 + 0x38);
    while (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0) {
      uVar18 = func_0x04864970(&bStack_3f8,plVar25 + 2);
      func_0x04863740(uVar18,plVar25 + 5);
    }
    func_0x04863480(auStack_40,&bStack_3f8);
    func_0x0a1f4060(&uStack_4f8,auStack_40);
    func_0x04863610(auStack_40);
    if ((char)puStack_488 == '\0') {
      if ((uStack_4f8 & 1) == 0) {
        lVar17 = (long)&uStack_4f8 + 1;
      }
      else {
        lVar17 = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
      }
      func_0x0eede920(0,1,0,0x1d,4,&UNK_012c7980,0x84,&UNK_0127bfa4,&DAT_0141cb08,lVar17);
    }
    else {
      func_0x05ec0910(&uStack_278,&uStack_4f8);
      uVar6 = uStack_4b0;
      puVar22 = puStack_4b8;
      uStack_248 = (undefined1)uStack_4c8;
      uStack_247 = CONCAT13((undefined1)uStack_4c4,uStack_4c8._1_3_);
      uStack_243 = CONCAT13((char)uStack_4c0,uStack_4c4._1_3_);
      uStack_23f = CONCAT13((undefined1)uStack_4bc,uStack_4c0._1_3_);
      uStack_258 = (uint)uStack_4d8;
      uStack_254 = uStack_4d8._4_4_;
      uStack_250 = uStack_4d0;
      uStack_24c = uStack_4cc;
      if (cStack_210 == (char)puStack_490) {
        if (cStack_210 != '\0') {
          func_0x06042870(&puStack_238,&puStack_4b8);
        }
      }
      else {
        puVar28 = puStack_238;
        puVar21 = puStack_228;
        if (cStack_210 == '\0') {
          puStack_238 = puStack_4b8;
          uStack_230 = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
          puStack_4b8 = (undefined1 *)0x0;
          uStack_4b0 = 0;
          puStack_228 = (undefined8 *)
                        CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
          lStack_220 = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
          uStack_218 = (undefined4)uStack_498;
          if (lStack_220 != 0) {
            uVar27 = puStack_228[1];
            if ((uStack_230 & uStack_230 - 1) == 0) {
              uVar27 = uVar27 & uStack_230 - 1;
            }
            else if (uStack_230 <= uVar27) {
              if ((uVar27 | uStack_230) >> 0x20 == 0) {
                uVar27 = (uVar27 & 0xffffffff) % ((ulong)uVar6 & 0xffffffff);
              }
              else {
                uVar27 = uVar27 % uStack_230;
              }
            }
            *(undefined8 ***)(puVar22 + uVar27 * 8) = &puStack_228;
            uStack_4ab._3_1_ = 0;
            uStack_4a7 = 0;
            uStack_4a3 = 0;
            uStack_49f = 0;
            uStack_49b = 0;
          }
          uStack_4ab = (uint)uStack_4ab._3_1_ << 0x18;
          cStack_210 = '\x01';
        }
        else {
          while (puVar21 != (undefined8 *)0x0) {
            puVar19 = (undefined8 *)*puVar21;
            puStack_238 = puVar28;
            if ((*(byte *)(puVar21 + 5) & 1) != 0) {
              func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
            }
            if ((*(byte *)(puVar21 + 2) & 1) != 0) {
              func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
            }
            func_0x0412a280(puVar21,0x40);
            puVar28 = puStack_238;
            puVar21 = puVar19;
          }
          puStack_238 = (undefined1 *)0x0;
          if (puVar28 != (undefined1 *)0x0) {
            func_0x0412a280(puVar28,uStack_230 << 3);
          }
          cStack_210 = '\0';
        }
      }
    }
    if ((char)puStack_488 == '\x01') {
      if ((char)puStack_490 == '\x01') {
        puVar22 = puStack_4b8;
        puVar21 = (undefined8 *)
                  CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
        while (puVar21 != (undefined8 *)0x0) {
          puVar19 = (undefined8 *)*puVar21;
          puStack_4b8 = puVar22;
          if ((*(byte *)(puVar21 + 5) & 1) != 0) {
            func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar21 + 2) & 1) != 0) {
            func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar21,0x40);
          puVar22 = puStack_4b8;
          puVar21 = puVar19;
        }
        puStack_4b8 = (undefined1 *)0x0;
        if (puVar22 != (undefined1 *)0x0) {
          func_0x0412a280(puVar22,CONCAT35((undefined3)uStack_4ab,uStack_4b0) << 3);
        }
      }
      uVar15 = uStack_4f4;
      uVar26 = uStack_4f8;
      if (((char)plStack_4e0 == '\x01') && (lVar17 = CONCAT44(uStack_4f4,uStack_4f8), lVar17 != 0))
      {
        lVar16 = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
        if (lVar17 != lVar16) {
          do {
            if ((*(byte *)(lVar16 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar16 + -8),
                              *(ulong *)(lVar16 + -0x18) & 0xfffffffffffffffe);
            }
            lVar16 = lVar16 + -0x18;
          } while (lVar16 != lVar17);
          lVar17 = CONCAT44(uStack_4f4,uStack_4f8);
        }
        uStack_4f0 = uVar26;
        uStack_4ec = (undefined1)uVar15;
        uStack_4eb = (undefined1)((uint)uVar15 >> 8);
        uStack_4ea = (undefined2)((uint)uVar15 >> 0x10);
        uVar27 = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8))) - lVar17;
LAB_09979fd4:
        func_0x0412a280(lVar17,uVar27);
      }
    }
    else if ((uStack_4f8 & 1) != 0) {
      lVar17 = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
      uVar27 = CONCAT44(uStack_4f4,uStack_4f8) & 0xfffffffffffffffe;
      goto LAB_09979fd4;
    }
    func_0x04863610(&bStack_3f8);
  }
  func_0x0a1e7260(&uStack_4f8);
  uVar27 = uStack_208;
  puVar21 = (undefined8 *)param_3[0x18];
  if (puVar21 < (undefined8 *)param_3[0x19]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    *(undefined1 *)(puVar21 + 8) = puStack_4b8._0_1_;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[0xb] = 0;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xe] = 0;
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    puVar21[0xe] = puStack_488;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puStack_488 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xf;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f490(param_3 + 0x17,&uStack_4f8);
  }
  param_3[0x18] = (ulong)puVar21;
  func_0x0652e0f0(&uStack_4f8);
  func_0x0a1fb0c0(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x18];
  if (puVar21 < (undefined8 *)param_3[0x19]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    *(undefined1 *)(puVar21 + 8) = puStack_4b8._0_1_;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[0xb] = 0;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xe] = 0;
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    puVar21[0xe] = puStack_488;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puStack_488 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xf;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f490(param_3 + 0x17,&uStack_4f8);
  }
  param_3[0x18] = (ulong)puVar21;
  func_0x0652e0f0(&uStack_4f8);
  func_0x0a1e9940(&uStack_4f8);
  func_0x0d84fd50(param_3,&uStack_4f8);
  func_0x0651ffe0(&uStack_4f8);
  func_0x0a1f5860(&uStack_4f8);
  func_0x0d84fd50(param_3,&uStack_4f8);
  func_0x0651ffe0(&uStack_4f8);
  func_0x0a1fb800(&uStack_4f8);
  func_0x0d84fd50(param_3,&uStack_4f8);
  func_0x0651ffe0(&uStack_4f8);
  func_0x0a1eb4f0(&uStack_4f8);
  func_0x0d84fd50(param_3,&uStack_4f8);
  func_0x0651ffe0(&uStack_4f8);
  func_0x0a2041e0(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a204c80(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a205880(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a2062d0(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a206c30(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a207e10(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a208640(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a2076e0(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a208e70(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a209920(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  func_0x0a20a5a0(&uStack_4f8);
  puVar21 = (undefined8 *)param_3[0x15];
  if (puVar21 < (undefined8 *)param_3[0x16]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puStack_4b8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_4ab = 0;
    uStack_4a7 = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[0xd] = 0;
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    puVar21[0xd] = puStack_490;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puStack_490 = (undefined8 *)0x0;
    puVar21 = puVar21 + 0xe;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85f1a0(param_3 + 0x14,&uStack_4f8);
  }
  param_3[0x15] = (ulong)puVar21;
  func_0x0652e2f0(&uStack_4f8);
  if (*(char *)(param_4 + 0xf0) == '\0') {
    uVar24 = 0;
    uStack_2b8 = 0;
    uVar18 = 0;
    puStack_3e8 = (undefined1 *)0x0;
LAB_0997aef0:
    uStack_358 = 0x74746808;
    uStack_353 = 0;
    uStack_354 = 0x70;
    uStack_118 = uVar24 & 0xff | uStack_2b8;
    cStack_4fc = '\x01';
    puStack_400 = puStack_3e8;
    uStack_2b0 = uVar24;
    uStack_288 = uVar18;
    uStack_110 = uVar18;
    puStack_108 = puStack_3e8;
  }
  else {
    uVar18 = *(undefined8 *)(param_4 + 0x48);
    uVar2 = *(undefined8 *)(param_4 + 0x50);
    uStack_4e8 = (uint)((ulong)uVar18 >> 0x10) & 0xffff;
    uVar26 = (uint)uVar2 & 0xffff;
    uStack_4f8 = (uint)((ulong)uVar18 >> 0x20);
    uStack_4d8 = (long *)(CONCAT44(uStack_4d8._4_4_,(int)uVar18) & 0xffffffff0000ffff);
    uStack_4c8 = (uint)(ushort)((ulong)uVar2 >> 0x30);
    puStack_4b8 = (undefined1 *)CONCAT44(puStack_4b8._4_4_,(int)((ulong)uVar2 >> 0x10));
    uStack_4ab._3_1_ = (byte)uVar26;
    uStack_4a7._0_3_ = (undefined3)(uVar26 >> 8);
    func_0x0470d9a0(&uStack_358,&UNK_01287ba2,0x28,0x122112,&uStack_4f8);
    func_0x0d81c8c0(auStack_2e8,param_4 + 0x58);
    bVar32 = (uStack_358 & 1) != 0;
    puVar22 = (undefined1 *)((long)&uStack_358 + 1);
    if (bVar32) {
      puVar22 = puStack_348;
    }
    uVar24 = (ulong)((byte)uStack_358 >> 1);
    if (bVar32) {
      uVar24 = CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)));
    }
    plStack_4e0 = (long *)((ulong)auStack_2e8._0_8_ >> 1 & 0x7f);
    puVar28 = auStack_2e8 + 1;
    if ((auStack_2e8._0_8_ & 1) != 0) {
      plStack_4e0 = stack0xfffffffffffffd20;
      puVar28 = puStack_2d8;
    }
    uStack_4f8 = (uint)puVar22;
    uStack_4f4 = (undefined4)((ulong)puVar22 >> 0x20);
    uStack_4f0 = (uint)uVar24;
    uStack_4ec = (undefined1)(uVar24 >> 0x20);
    uStack_4eb = (undefined1)(uVar24 >> 0x28);
    uStack_4ea = (undefined2)(uVar24 >> 0x30);
    uStack_4e8 = (uint)puVar28;
    uStack_4e4 = (undefined2)((ulong)puVar28 >> 0x20);
    uStack_4e2 = (undefined1)((ulong)puVar28 >> 0x30);
    uStack_4e1 = (undefined1)((ulong)puVar28 >> 0x38);
    func_0x0470d9a0(&bStack_3f8,&UNK_0139bd18,5,0xdd,&uStack_4f8);
    bVar10 = bStack_3f8;
    uVar24 = CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8)));
    uVar18 = CONCAT26(uStack_3ea,
                      CONCAT15(uStack_3eb,
                               CONCAT14(uStack_3ec,
                                        CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)))));
    bStack_3f8 = 0;
    uStack_3f7 = 0;
    if ((auStack_2e8._0_8_ & 1) != 0) {
      func_0x0412a280(puStack_2d8,auStack_2e8._0_8_ & 0xfffffffffffffffe);
    }
    if ((uStack_358 & 1) != 0) {
      func_0x0412a280(puStack_348,
                      CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                      0xfffffffffffffffe);
    }
    uStack_2b8 = uVar24 & 0xffffffffffffff00;
    uStack_358 = 0x74746808;
    uStack_354 = 0x70;
    uStack_353 = 0;
    if ((bVar10 & 1) == 0) goto LAB_0997aef0;
    puStack_400 = puStack_3e8;
    uStack_2b0 = uVar24;
    func_0x0412e5e0(&uStack_118,puStack_3e8,uVar18);
    cStack_4fc = '\0';
    uStack_288 = uVar18;
  }
  plVar25 = (long *)(uVar27 + 0x48);
  uStack_f8 = uStack_f8 & 0xffffffffffffff00;
  cStack_e0 = 0;
  bVar32 = cStack_260 == '\x01';
  plStack_100 = plVar25;
  if (bVar32) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x0488f040(&uStack_f8);
  }
  uStack_c8 = uStack_248;
  uStack_c7 = uStack_247;
  uStack_c3 = uStack_243;
  uStack_bf = uStack_23f;
  uStack_d8 = uStack_258;
  uStack_d4 = uStack_254;
  uStack_d0 = uStack_250;
  uStack_cc = uStack_24c;
  uStack_b8 = uStack_b8 & 0xffffffffffffff00;
  uStack_90 = 0;
  bVar33 = cStack_210 == '\x01';
  cStack_e0 = bVar32;
  if (bVar33) {
    func_0x048997c0(&uStack_b8,&puStack_238);
  }
  puVar21 = puStack_b0;
  uVar24 = uStack_b8;
  lStack_80 = 0;
  lVar17 = *(long *)(uVar27 + 0x90);
  if (lVar17 != 0) {
    lStack_468 = *(long *)(lVar17 + 8);
    lStack_80 = *(long *)(lVar17 + 0x10);
    if (lStack_80 == 0) {
      lStack_80 = 0;
    }
    else {
      LOCK();
      *(long *)(lStack_80 + 8) = *(long *)(lStack_80 + 8) + 1;
      UNLOCK();
    }
    if (lStack_468 != 0) {
      lStack_78 = *(long *)(uVar27 + 0x98);
      goto LAB_0997b0bb;
    }
  }
  lStack_78 = 0;
  lStack_468 = 0;
LAB_0997b0bb:
  uStack_4f8 = (uint)uStack_118;
  uStack_4f4 = (undefined4)(uStack_118 >> 0x20);
  uStack_4f0 = (uint)uStack_110;
  uStack_4ec = (undefined1)((ulong)uStack_110 >> 0x20);
  uStack_4eb = (undefined1)((ulong)uStack_110 >> 0x28);
  uStack_4ea = (undefined2)((ulong)uStack_110 >> 0x30);
  uStack_4e8 = (uint)puStack_108;
  uStack_4e4 = (undefined2)((ulong)puStack_108 >> 0x20);
  uStack_4e2 = (undefined1)((ulong)puStack_108 >> 0x30);
  uStack_4e1 = (undefined1)((ulong)puStack_108 >> 0x38);
  plStack_4e0 = plStack_100;
  uStack_118 = 0;
  uStack_110 = 0;
  puStack_108 = (undefined1 *)0x0;
  uStack_4d8 = (long *)((ulong)uStack_4d8 & 0xffffffffffffff00);
  uVar26 = uStack_4c0 >> 8;
  uStack_4c0 = uStack_4c0 & 0xffffff00;
  if (cStack_e0 == '\x01') {
    uStack_4d8 = (long *)uStack_f8;
    uStack_4d0 = (uint)uStack_f0;
    uStack_4cc = (uint)((ulong)uStack_f0 >> 0x20);
    uStack_4c8 = (uint)uStack_e8;
    uStack_4c4 = (undefined4)((ulong)uStack_e8 >> 0x20);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_4c0 = CONCAT31((int3)uVar26,1);
  }
  puStack_4b8 = (undefined1 *)CONCAT44(uStack_d4,uStack_d8);
  uStack_4a7 = uStack_c7;
  uStack_4a3 = uStack_c3;
  uStack_49f = uStack_bf;
  uStack_4b0 = (uint5)CONCAT44(uStack_cc,uStack_d0);
  uStack_4ab._0_3_ = (undefined3)(uStack_cc >> 8);
  uStack_4ab = CONCAT13(uStack_c8,(undefined3)uStack_4ab);
  uStack_498 = uStack_498 & 0xffffffffffffff00;
  uVar27 = (ulong)uStack_470 >> 8;
  uStack_470 = (undefined8 *)((ulong)uStack_470 & 0xffffffffffffff00);
  if (bVar33) {
    uStack_b8 = 0;
    puStack_b0 = (undefined8 *)0x0;
    uStack_498 = uVar24;
    puStack_490 = puVar21;
    puStack_488 = puStack_a8;
    lStack_480 = lStack_a0;
    uStack_478 = (undefined8 *)CONCAT44(uStack_478._4_4_,uStack_98);
    if (lStack_a0 != 0) {
      puVar19 = (undefined8 *)puStack_a8[1];
      if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
        puVar19 = (undefined8 *)((ulong)puVar19 & (long)puVar21 - 1U);
      }
      else if (puVar21 <= puVar19) {
        if (((ulong)puVar19 | (ulong)puVar21) >> 0x20 == 0) {
          puVar19 = (undefined8 *)(((ulong)puVar19 & 0xffffffff) % ((ulong)puVar21 & 0xffffffff));
        }
        else {
          puVar19 = (undefined8 *)((ulong)puVar19 % (ulong)puVar21);
        }
      }
      *(undefined8 ***)(uVar24 + (long)puVar19 * 8) = &puStack_488;
      puStack_a8 = (undefined8 *)0x0;
      lStack_a0 = 0;
    }
    uStack_470 = (undefined8 *)CONCAT71((int7)uVar27,1);
  }
  lStack_460 = lStack_80;
  uStack_88 = 0;
  lStack_80 = 0;
  lStack_458 = lStack_78;
  lStack_78 = 0;
  bStack_3f8 = 0;
  uStack_3f7 = 0;
  uStack_3f6 = 0;
  uStack_3f4 = 0;
  bStack_3f0 = 0;
  uStack_3ef = 0;
  uStack_3ee = 0;
  uStack_3ec = 0;
  uStack_3eb = 0;
  uStack_3ea = 0;
  puStack_3e8 = (undefined1 *)0x0;
  uStack_90 = bVar33;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (plVar20 == (long *)0x0) {
    FUN_0eec74c0(0x108,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f1c8fa0;
  uVar15 = func_0x0d858500(&bStack_3f8);
  puVar21 = puStack_490;
  uVar27 = uStack_498;
  *(undefined1 *)(plVar20 + 4) = 0;
  *(undefined4 *)((long)plVar20 + 0x24) = uVar15;
  *(undefined4 *)(plVar20 + 5) = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[8] = 0;
  plVar20[3] = (long)&UNK_0f1c8ff0;
  plVar20[0xb] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
  plVar20[9] = CONCAT44(uStack_4f4,uStack_4f8);
  plVar20[10] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
  uStack_4f8 = 0;
  uStack_4f4 = 0;
  uStack_4f0 = 0;
  uStack_4ec = 0;
  uStack_4eb = 0;
  uStack_4ea = 0;
  uStack_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4e2 = 0;
  uStack_4e1 = 0;
  plVar20[0xc] = (long)plStack_4e0;
  *(undefined1 *)(plVar20 + 0xd) = 0;
  *(undefined1 *)(plVar20 + 0x10) = 0;
  if ((char)uStack_4c0 == '\x01') {
    plVar20[0xd] = (long)uStack_4d8;
    plVar20[0xe] = CONCAT44(uStack_4cc,uStack_4d0);
    plVar20[0xf] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    *(undefined1 *)(plVar20 + 0x10) = 1;
  }
  *(uint *)((long)plVar20 + 0x95) = uStack_4ab;
  *(uint *)((long)plVar20 + 0x99) = uStack_4a7;
  *(uint *)((long)plVar20 + 0x9d) = uStack_4a3;
  *(uint *)((long)plVar20 + 0xa1) = uStack_49f;
  plVar20[0x11] = (long)puStack_4b8;
  plVar20[0x12] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
  *(undefined1 *)(plVar20 + 0x15) = 0;
  *(undefined1 *)(plVar20 + 0x1a) = 0;
  if ((char)uStack_470 == '\x01') {
    uStack_498 = 0;
    plVar20[0x15] = uVar27;
    plVar20[0x16] = (long)puStack_490;
    puStack_490 = (undefined8 *)0x0;
    plVar20[0x17] = (long)puStack_488;
    plVar20[0x18] = lStack_480;
    *(undefined4 *)(plVar20 + 0x19) = (undefined4)uStack_478;
    if (lStack_480 != 0) {
      puVar19 = (undefined8 *)puStack_488[1];
      if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
        puVar19 = (undefined8 *)((ulong)puVar19 & (long)puVar21 - 1U);
      }
      else if (puVar21 <= puVar19) {
        if (((ulong)puVar19 | (ulong)puVar21) >> 0x20 == 0) {
          puVar19 = (undefined8 *)(((ulong)puVar19 & 0xffffffff) % ((ulong)puVar21 & 0xffffffff));
        }
        else {
          puVar19 = (undefined8 *)((ulong)puVar19 % (ulong)puVar21);
        }
      }
      *(long **)(uVar27 + (long)puVar19 * 8) = plVar20 + 0x17;
      puStack_488 = (undefined8 *)0x0;
      lStack_480 = 0;
    }
    *(undefined1 *)(plVar20 + 0x1a) = 1;
  }
  plVar20[0x1b] = lStack_468;
  plVar20[0x1c] = lStack_460;
  lStack_468 = 0;
  lStack_460 = 0;
  plVar20[0x1d] = lStack_458;
  lStack_458 = 0;
  plVar20[0x1e] = 0;
  plVar20[0x1f] = 0;
  plVar20[0x20] = 0;
  bStack_3f8 = 0;
  uStack_3f7 = 0;
  uStack_3f6 = 0;
  uStack_3f4 = 0;
  bStack_3f0 = 0;
  uStack_3ef = 0;
  uStack_3ee = 0;
  uStack_3ec = 0;
  uStack_3eb = 0;
  uStack_3ea = 0;
  puStack_3e8 = (undefined1 *)0x0;
  puStack_280 = param_3;
  uVar15 = func_0x0d858620(plVar20 + 3);
  *(undefined4 *)(plVar20 + 5) = uVar15;
  auStack_2e8._0_8_ = plVar20 + 3;
  unique0x1000e75b = plVar20;
  func_0x0997db90(&uStack_4f8);
  aauStack_1f8[0] = func_0x099e4fa0();
  uVar27 = uStack_208;
  puVar29 = puStack_280;
  puVar21 = (undefined8 *)puStack_280[0x1e];
  if (puVar21 < (undefined8 *)puStack_280[0x1f]) {
    if ((uStack_358 & 1) == 0) {
      puStack_3e8 = puStack_348;
      bStack_3f8 = (byte)uStack_358;
      uStack_3f7 = (undefined1)(uStack_358 >> 8);
      uStack_3f6 = (undefined2)(uStack_358 >> 0x10);
      uStack_3f4 = (undefined4)
                   (CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) >>
                   0x20);
      bStack_3f0 = uStack_350;
      uStack_3ef = (undefined1)uStack_34f;
      uStack_3ee = (undefined2)(CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)) >> 0x10);
      uStack_3ec = (undefined1)uStack_34c;
      uStack_3eb = (undefined1)((uint)uStack_34c >> 8);
      uStack_3ea = (undefined2)((uint)uStack_34c >> 0x10);
    }
    else {
      func_0x0412e5e0(&bStack_3f8,puStack_348,
                      CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350))));
    }
    plVar20 = stack0xfffffffffffffd20;
    if (stack0xfffffffffffffd20 != (long *)0x0) {
      LOCK();
      stack0xfffffffffffffd20[1] = stack0xfffffffffffffd20[1] + 1;
      UNLOCK();
    }
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    puVar21[5] = puStack_3e8;
    *(uint *)(puVar21 + 3) = CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8));
    *(undefined4 *)((long)puVar21 + 0x1c) = uStack_3f4;
    *(uint *)(puVar21 + 4) = CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0));
    *(uint *)((long)puVar21 + 0x24) = CONCAT22(uStack_3ea,CONCAT11(uStack_3eb,uStack_3ec));
    bStack_3f8 = 0;
    uStack_3f7 = 0;
    uStack_3f6 = 0;
    uStack_3f4 = 0;
    bStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ee = 0;
    uStack_3ec = 0;
    uStack_3eb = 0;
    uStack_3ea = 0;
    puStack_3e8 = (undefined1 *)0x0;
    *(undefined4 *)(puVar21 + 6) = auStack_2e8._0_4_;
    *(undefined4 *)((long)puVar21 + 0x34) = auStack_2e8._4_4_;
    *(undefined4 *)(puVar21 + 7) = auStack_2e8._8_4_;
    *(undefined4 *)((long)puVar21 + 0x3c) = uStack_2dc;
    if (stack0xfffffffffffffd20 == (long *)0x0) {
      *(undefined1 (*) [16])(puVar21 + 8) = aauStack_1f8[0];
    }
    else {
      LOCK();
      stack0xfffffffffffffd20[1] = stack0xfffffffffffffd20[1] + 1;
      UNLOCK();
      *(undefined1 (*) [16])(puVar21 + 8) = aauStack_1f8[0];
      LOCK();
      plVar1 = stack0xfffffffffffffd20 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*stack0xfffffffffffffd20 + 0x10))(stack0xfffffffffffffd20);
        func_0x0412c2d0(plVar20);
      }
      if ((bStack_3f8 & 1) != 0) {
        func_0x0412a280(puStack_3e8,
                        CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8))) &
                        0xfffffffffffffffe);
      }
    }
    puVar21 = puVar21 + 10;
    puVar29[0x1e] = (ulong)puVar21;
    puVar29[0x1e] = (ulong)puVar21;
    plVar20 = stack0xfffffffffffffd20;
  }
  else {
    puVar21 = (undefined8 *)func_0x098c2690(puStack_280 + 0x1d,&uStack_358,auStack_2e8,aauStack_1f8)
    ;
    puVar29[0x1e] = (ulong)puVar21;
    plVar20 = stack0xfffffffffffffd20;
    uVar27 = uStack_208;
  }
  unique0x1000e79b = plVar20;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar1 = plVar20 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  func_0x064e40a0(puVar21 + -10);
  func_0x0997db90(&uStack_118);
  puVar22 = puStack_400;
  if ((uStack_358 & 1) != 0) {
    func_0x0412a280(puStack_348,
                    CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                    0xfffffffffffffffe);
  }
  func_0x0a1fdd90(puVar29);
  func_0x0a1ff860(&uStack_4f8);
  func_0x0d84fd50(puVar29,&uStack_4f8);
  func_0x0651ffe0(&uStack_4f8);
  if (*(long *)(uVar27 + 0x80) != 0) {
    uStack_358 = 0x62657712;
    uStack_354 = 0x73;
    uStack_353 = 0x6f;
    uStack_352 = 0x6b63;
    uStack_350 = 0x65;
    uStack_34f = 0x74;
    if (cStack_4fc == '\0') {
      func_0x0412e5e0(&uStack_1c8,puVar22,uStack_288);
    }
    else {
      uStack_1c8 = uStack_2b0 & 0xff | uStack_2b8;
      uStack_1c0 = uStack_288;
      puStack_1b8 = puVar22;
    }
    uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
    bStack_190 = 0;
    bVar32 = cStack_260 == '\x01';
    plStack_1b0 = plVar25;
    if (bVar32) {
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
      func_0x0488f040(&uStack_1a8,CONCAT71(uStack_277,uStack_278),lStack_270,
                      (lStack_270 - CONCAT71(uStack_277,uStack_278) >> 3) * -0x5555555555555555);
    }
    cVar14 = cStack_210;
    uStack_178 = uStack_248;
    uStack_177 = uStack_247;
    uStack_173 = uStack_243;
    uStack_16f = uStack_23f;
    uStack_188 = uStack_258;
    uStack_184 = uStack_254;
    uStack_180 = uStack_250;
    uStack_17c = uStack_24c;
    uStack_168 = uStack_168 & 0xffffffffffffff00;
    cStack_140 = 0;
    bVar33 = cStack_210 == '\x01';
    bStack_190 = bVar32;
    if (bVar33) {
      func_0x048997c0(&uStack_168,&puStack_238);
    }
    puVar21 = puStack_160;
    uVar24 = uStack_168;
    lStack_468 = uVar27 + 0x80;
    uStack_4f8 = (uint)uStack_1c8;
    uStack_4f4 = (undefined4)(uStack_1c8 >> 0x20);
    uStack_4f0 = (uint)uStack_1c0;
    uStack_4ec = (undefined1)((ulong)uStack_1c0 >> 0x20);
    uStack_4eb = (undefined1)((ulong)uStack_1c0 >> 0x28);
    uStack_4ea = (undefined2)((ulong)uStack_1c0 >> 0x30);
    uStack_4e8 = (uint)puStack_1b8;
    uStack_4e4 = (undefined2)((ulong)puStack_1b8 >> 0x20);
    uStack_4e2 = (undefined1)((ulong)puStack_1b8 >> 0x30);
    uStack_4e1 = (undefined1)((ulong)puStack_1b8 >> 0x38);
    plStack_4e0 = plStack_1b0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    puStack_1b8 = (undefined1 *)0x0;
    uStack_4d8 = (long *)((ulong)uStack_4d8 & 0xffffffffffffff00);
    uVar26 = uStack_4c0 >> 8;
    uStack_4c0 = uStack_4c0 & 0xffffff00;
    if ((bStack_190 & 1) != 0) {
      uStack_4d8 = (long *)uStack_1a8;
      uStack_4d0 = (uint)uStack_1a0;
      uStack_4cc = (uint)(uStack_1a0 >> 0x20);
      uStack_4c8 = (uint)lStack_198;
      uStack_4c4 = (undefined4)((ulong)lStack_198 >> 0x20);
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
      uStack_4c0 = CONCAT31((int3)uVar26,1);
    }
    puStack_4b8 = (undefined1 *)CONCAT44(uStack_184,uStack_188);
    uStack_4a7 = uStack_177;
    uStack_4a3 = uStack_173;
    uStack_49f = uStack_16f;
    uStack_4b0 = (uint5)CONCAT44(uStack_17c,uStack_180);
    uStack_4ab._0_3_ = (undefined3)(uStack_17c >> 8);
    uStack_4ab = CONCAT13(uStack_178,(undefined3)uStack_4ab);
    uStack_498 = uStack_498 & 0xffffffffffffff00;
    uVar27 = (ulong)uStack_470 >> 8;
    uStack_470 = (undefined8 *)((ulong)uStack_470 & 0xffffffffffffff00);
    if (cVar14 != '\0') {
      uStack_168 = 0;
      puStack_160 = (undefined8 *)0x0;
      uStack_498 = uVar24;
      puStack_490 = puVar21;
      puStack_488 = puStack_158;
      lStack_480 = lStack_150;
      uStack_478 = (undefined8 *)CONCAT44(uStack_478._4_4_,uStack_148);
      if (lStack_150 != 0) {
        puVar19 = (undefined8 *)puStack_158[1];
        if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
          puVar19 = (undefined8 *)((ulong)puVar19 & (long)puVar21 - 1U);
        }
        else if (puVar21 <= puVar19) {
          if (((ulong)puVar19 | (ulong)puVar21) >> 0x20 == 0) {
            puVar19 = (undefined8 *)(((ulong)puVar19 & 0xffffffff) % ((ulong)puVar21 & 0xffffffff));
          }
          else {
            puVar19 = (undefined8 *)((ulong)puVar19 % (ulong)puVar21);
          }
        }
        *(undefined8 ***)(uVar24 + (long)puVar19 * 8) = &puStack_488;
        puStack_158 = (undefined8 *)0x0;
        lStack_150 = 0;
      }
      uStack_470 = (undefined8 *)CONCAT71((int7)uVar27,1);
    }
    bStack_3f8 = 0;
    uStack_3f7 = 0;
    uStack_3f6 = 0;
    uStack_3f4 = 0;
    bStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ee = 0;
    uStack_3ec = 0;
    uStack_3eb = 0;
    uStack_3ea = 0;
    puStack_3e8 = (undefined1 *)0x0;
    cStack_140 = bVar33;
    lStack_138 = lStack_468;
    plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
    if (plVar25 == (long *)0x0) {
      FUN_0eec74c0(0xf8,0);
    }
    plVar25[1] = 0;
    plVar25[2] = 0;
    *plVar25 = (long)&UNK_0f1c91c0;
    uVar15 = func_0x0d858500(&bStack_3f8);
    puVar21 = puStack_490;
    uVar27 = uStack_498;
    *(undefined1 *)(plVar25 + 4) = 0;
    *(undefined4 *)((long)plVar25 + 0x24) = uVar15;
    *(undefined4 *)(plVar25 + 5) = 0;
    plVar25[6] = 0;
    plVar25[7] = 0;
    plVar25[8] = 0;
    plVar25[3] = (long)&UNK_0f1c9210;
    plVar25[0xb] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    plVar25[9] = CONCAT44(uStack_4f4,uStack_4f8);
    plVar25[10] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    plVar25[0xc] = (long)plStack_4e0;
    *(undefined1 *)(plVar25 + 0xd) = 0;
    *(undefined1 *)(plVar25 + 0x10) = 0;
    if ((char)uStack_4c0 == '\x01') {
      plVar25[0xd] = (long)uStack_4d8;
      plVar25[0xe] = CONCAT44(uStack_4cc,uStack_4d0);
      plVar25[0xf] = CONCAT44(uStack_4c4,uStack_4c8);
      uStack_4d8 = (long *)0x0;
      uStack_4d0 = 0;
      uStack_4cc = 0;
      uStack_4c8 = 0;
      uStack_4c4 = 0;
      *(undefined1 *)(plVar25 + 0x10) = 1;
    }
    plVar20 = plVar25 + 3;
    *(uint *)((long)plVar25 + 0x95) = uStack_4ab;
    *(uint *)((long)plVar25 + 0x99) = uStack_4a7;
    *(uint *)((long)plVar25 + 0x9d) = uStack_4a3;
    *(uint *)((long)plVar25 + 0xa1) = uStack_49f;
    plVar25[0x11] = (long)puStack_4b8;
    plVar25[0x12] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    *(undefined1 *)(plVar25 + 0x15) = 0;
    *(undefined1 *)(plVar25 + 0x1a) = 0;
    if ((char)uStack_470 == '\x01') {
      uStack_498 = 0;
      plVar25[0x15] = uVar27;
      plVar25[0x16] = (long)puStack_490;
      puStack_490 = (undefined8 *)0x0;
      plVar25[0x17] = (long)puStack_488;
      plVar25[0x18] = lStack_480;
      *(undefined4 *)(plVar25 + 0x19) = (undefined4)uStack_478;
      if (lStack_480 != 0) {
        puVar19 = (undefined8 *)puStack_488[1];
        if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
          puVar19 = (undefined8 *)((ulong)puVar19 & (long)puVar21 - 1U);
        }
        else if (puVar21 <= puVar19) {
          if (((ulong)puVar19 | (ulong)puVar21) >> 0x20 == 0) {
            puVar19 = (undefined8 *)(((ulong)puVar19 & 0xffffffff) % ((ulong)puVar21 & 0xffffffff));
          }
          else {
            puVar19 = (undefined8 *)((ulong)puVar19 % (ulong)puVar21);
          }
        }
        *(long **)(uVar27 + (long)puVar19 * 8) = plVar25 + 0x17;
        puStack_488 = (undefined8 *)0x0;
        lStack_480 = 0;
      }
      *(undefined1 *)(plVar25 + 0x1a) = 1;
    }
    plVar25[0x1b] = lStack_468;
    plVar25[0x1c] = 0;
    plVar25[0x1d] = 0;
    plVar25[0x1e] = 0;
    bStack_3f8 = 0;
    uStack_3f7 = 0;
    uStack_3f6 = 0;
    uStack_3f4 = 0;
    bStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ee = 0;
    uStack_3ec = 0;
    uStack_3eb = 0;
    uStack_3ea = 0;
    puStack_3e8 = (undefined1 *)0x0;
    uVar15 = func_0x0d858620(plVar20);
    uVar27 = uStack_208;
    puVar29 = puStack_280;
    *(undefined4 *)(plVar25 + 5) = uVar15;
    auStack_2e8._0_8_ = plVar20;
    unique0x1000e793 = plVar25;
    uVar24 = uStack_498;
    puVar21 = puStack_488;
    if (((ulong)uStack_470 & 1) != 0) {
      while (puVar21 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*puVar21;
        uStack_498 = uVar24;
        if ((*(byte *)(puVar21 + 5) & 1) != 0) {
          func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar21 + 2) & 1) != 0) {
          func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar21,0x40);
        uVar24 = uStack_498;
        puVar21 = puVar19;
      }
      uStack_498 = 0;
      if (uVar24 != 0) {
        func_0x0412a280(uVar24,(long)puStack_490 << 3);
      }
    }
    uVar24 = (ulong)uStack_4d8;
    if (((char)uStack_4c0 == '\x01') && (uStack_4d8 != (long *)0x0)) {
      for (uVar30 = CONCAT44(uStack_4cc,uStack_4d0); uVar24 != uVar30; uVar30 = uVar30 - 0x18) {
        if ((*(byte *)(uVar30 - 0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(uVar30 - 8),*(ulong *)(uVar30 - 0x18) & 0xfffffffffffffffe
                         );
        }
      }
      uStack_4d0 = (uint)uVar24;
      uStack_4cc = (uint)(uVar24 >> 0x20);
      func_0x0412a280(uStack_4d8,CONCAT44(uStack_4c4,uStack_4c8) - (long)uStack_4d8);
    }
    if ((uStack_4f8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8))),
                      CONCAT44(uStack_4f4,uStack_4f8) & 0xfffffffffffffffe);
    }
    auVar34 = func_0x099e8d30();
    puVar21 = (undefined8 *)puVar29[0x1e];
    aauStack_1f8[0] = auVar34;
    if (puVar21 < (undefined8 *)puVar29[0x1f]) {
      if ((uStack_358 & 1) == 0) {
        puStack_3e8 = puStack_348;
        bStack_3f8 = (byte)uStack_358;
        uStack_3f7 = (undefined1)(uStack_358 >> 8);
        uStack_3f6 = (undefined2)(uStack_358 >> 0x10);
        uStack_3f4 = (undefined4)
                     (CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) >>
                     0x20);
        bStack_3f0 = uStack_350;
        uStack_3ef = (undefined1)uStack_34f;
        uStack_3ee = (undefined2)(CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)) >> 0x10);
        uStack_3ec = (undefined1)uStack_34c;
        uStack_3eb = (undefined1)((uint)uStack_34c >> 8);
        uStack_3ea = (undefined2)((uint)uStack_34c >> 0x10);
      }
      else {
        func_0x0412e5e0(&bStack_3f8,puStack_348,
                        CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350))));
      }
      plVar25 = stack0xfffffffffffffd20;
      if (stack0xfffffffffffffd20 != (long *)0x0) {
        LOCK();
        stack0xfffffffffffffd20[1] = stack0xfffffffffffffd20[1] + 1;
        UNLOCK();
      }
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[5] = puStack_3e8;
      *(uint *)(puVar21 + 3) = CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8));
      *(undefined4 *)((long)puVar21 + 0x1c) = uStack_3f4;
      *(uint *)(puVar21 + 4) = CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0));
      *(uint *)((long)puVar21 + 0x24) = CONCAT22(uStack_3ea,CONCAT11(uStack_3eb,uStack_3ec));
      bStack_3f8 = 0;
      uStack_3f7 = 0;
      uStack_3f6 = 0;
      uStack_3f4 = 0;
      bStack_3f0 = 0;
      uStack_3ef = 0;
      uStack_3ee = 0;
      uStack_3ec = 0;
      uStack_3eb = 0;
      uStack_3ea = 0;
      puStack_3e8 = (undefined1 *)0x0;
      *(undefined4 *)(puVar21 + 6) = auStack_2e8._0_4_;
      *(undefined4 *)((long)puVar21 + 0x34) = auStack_2e8._4_4_;
      *(undefined4 *)(puVar21 + 7) = auStack_2e8._8_4_;
      *(undefined4 *)((long)puVar21 + 0x3c) = uStack_2dc;
      if (stack0xfffffffffffffd20 == (long *)0x0) {
        *(undefined1 (*) [16])(puVar21 + 8) = aauStack_1f8[0];
      }
      else {
        LOCK();
        stack0xfffffffffffffd20[1] = stack0xfffffffffffffd20[1] + 1;
        UNLOCK();
        *(undefined1 (*) [16])(puVar21 + 8) = aauStack_1f8[0];
        LOCK();
        plVar20 = stack0xfffffffffffffd20 + 1;
        lVar17 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*stack0xfffffffffffffd20 + 0x10))(stack0xfffffffffffffd20);
          func_0x0412c2d0(plVar25);
        }
      }
      if ((bStack_3f8 & 1) != 0) {
        func_0x0412a280(puStack_3e8,
                        CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8))) &
                        0xfffffffffffffffe);
      }
      puVar21 = puVar21 + 10;
      puVar29[0x1e] = (ulong)puVar21;
      puVar29[0x1e] = (ulong)puVar21;
      plVar25 = stack0xfffffffffffffd20;
    }
    else {
      puVar21 = (undefined8 *)func_0x098c2690(puVar29 + 0x1d,&uStack_358,auStack_2e8,aauStack_1f8);
      puVar29[0x1e] = (ulong)puVar21;
      plVar25 = stack0xfffffffffffffd20;
    }
    unique0x1000e783 = plVar25;
    if (plVar25 != (long *)0x0) {
      LOCK();
      plVar20 = plVar25 + 1;
      lVar17 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        func_0x0412c2d0(plVar25);
      }
    }
    func_0x064e40a0(puVar21 + -10);
    puVar22 = puStack_400;
    uVar24 = uStack_168;
    puVar21 = puStack_158;
    if (cStack_140 == '\x01') {
      while (puVar21 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*puVar21;
        uStack_168 = uVar24;
        if ((*(byte *)(puVar21 + 5) & 1) != 0) {
          func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar21 + 2) & 1) != 0) {
          func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar21,0x40);
        uVar24 = uStack_168;
        puVar21 = puVar19;
      }
      uStack_168 = 0;
      if (uVar24 != 0) {
        func_0x0412a280(uVar24,(long)puStack_160 << 3);
      }
    }
    uVar24 = uStack_1a8;
    if ((bStack_190 == 1) && (uVar30 = uStack_1a0, uStack_1a8 != 0)) {
      for (; uVar24 != uVar30; uVar30 = uVar30 - 0x18) {
        if ((*(byte *)(uVar30 - 0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(uVar30 - 8),*(ulong *)(uVar30 - 0x18) & 0xfffffffffffffffe
                         );
        }
      }
      uStack_1a0 = uVar24;
      func_0x0412a280(uStack_1a8,lStack_198 - uStack_1a8);
    }
    if ((uStack_1c8 & 1) != 0) {
      func_0x0412a280(puStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
    }
    if ((uStack_358 & 1) != 0) {
      func_0x0412a280(puStack_348,
                      CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                      0xfffffffffffffffe);
    }
  }
  func_0x0a20b120(puVar29);
  func_0x0a11ce10(&uStack_4f8);
  puVar21 = (undefined8 *)puVar29[0x12];
  if (puVar21 < (undefined8 *)puVar29[0x13]) {
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = CONCAT44(uStack_4f4,uStack_4f8);
    puVar21[1] = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
    puVar21[2] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21[5] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar21[3] = plStack_4e0;
    puVar21[4] = uStack_4d8;
    plStack_4e0 = (long *)0x0;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    puVar21[6] = CONCAT44(uStack_4c4,uStack_4c8);
    puVar21[7] = CONCAT44(uStack_4bc,uStack_4c0);
    puVar21[8] = puStack_4b8;
    puVar21[9] = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
    puVar21[10] = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    puVar21[10] = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
    puVar21[0xb] = CONCAT35(uStack_49b,CONCAT41(uStack_49f,uStack_4a3._3_1_));
    puVar21[0xc] = uStack_498;
    uStack_4ab = uStack_4ab & 0xffffff;
    uStack_4a7 = 0;
    uStack_4a3 = 0;
    uStack_49f = 0;
    uStack_49b = 0;
    uStack_498 = 0;
    puVar21[0xd] = 0;
    puVar21[0xe] = 0;
    puVar21[0xf] = 0;
    puVar21[0xd] = puStack_490;
    puVar21[0xe] = puStack_488;
    puVar21[0xf] = lStack_480;
    puStack_490 = (undefined8 *)0x0;
    puStack_488 = (undefined8 *)0x0;
    lStack_480 = 0;
    puVar21[0x10] = 0;
    puVar21[0x11] = 0;
    puVar21[0x12] = 0;
    *(undefined4 *)(puVar21 + 0x10) = (undefined4)uStack_478;
    *(undefined4 *)((long)puVar21 + 0x84) = uStack_478._4_4_;
    *(undefined4 *)(puVar21 + 0x11) = (undefined4)uStack_470;
    *(undefined4 *)((long)puVar21 + 0x8c) = uStack_470._4_4_;
    puVar21[0x12] = lStack_468;
    uStack_478 = (undefined8 *)0x0;
    uStack_470 = (undefined8 *)0x0;
    lStack_468 = 0;
    puVar21 = puVar21 + 0x13;
  }
  else {
    puVar21 = (undefined8 *)func_0x0d85ec80(puVar29 + 0x11,&uStack_4f8);
  }
  puVar29[0x12] = (ulong)puVar21;
  func_0x0652e400(&uStack_4f8);
  lVar17 = *(long *)(uVar27 + 0x78);
  if (lVar17 != 0) {
    bStack_3f8 = 0x18;
    uStack_3f7 = 0x62;
    uStack_3f6 = 0x6665;
    uStack_3f4 = 0x4565726f;
    bStack_3f0 = 0x76;
    uStack_3ef = 0x65;
    uStack_3ee = 0x746e;
    uStack_3ec = 0x73;
    uStack_3eb = 0;
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x68,0);
    }
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = &UNK_0f1c93e0;
    uVar15 = func_0x0d858500(&uStack_4f8);
    puVar19 = puVar21 + 3;
    *(undefined1 *)(puVar21 + 4) = 0;
    *(undefined4 *)((long)puVar21 + 0x24) = uVar15;
    *(undefined4 *)(puVar21 + 5) = 0;
    puVar21[6] = 0;
    puVar21[7] = 0;
    puVar21[8] = 0;
    puVar21[3] = &UNK_0f1c9430;
    puVar21[9] = lVar17;
    puVar21[10] = 0;
    puVar21[0xb] = 0;
    puVar21[0xc] = 0;
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4eb = 0;
    uStack_4ea = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e2 = 0;
    uStack_4e1 = 0;
    uVar15 = func_0x0d858620(puVar19);
    *(undefined4 *)(puVar21 + 5) = uVar15;
    uStack_358 = (uint)puVar19;
    uStack_354 = (undefined1)((ulong)puVar19 >> 0x20);
    uStack_353 = (undefined1)((ulong)puVar19 >> 0x28);
    uStack_352 = (undefined2)((ulong)puVar19 >> 0x30);
    uStack_350 = SUB81(puVar21,0);
    uStack_34f = (undefined2)((ulong)puVar21 >> 8);
    uStack_34d = (undefined1)((ulong)puVar21 >> 0x18);
    uStack_34c = (undefined4)((ulong)puVar21 >> 0x20);
    _auStack_2e8 = func_0x099ecd80();
    puVar21 = (undefined8 *)puVar29[0x1e];
    if (puVar21 < (undefined8 *)puVar29[0x1f]) {
      if ((bStack_3f8 & 1) == 0) {
        uStack_4e8 = (uint)puStack_3e8;
        uStack_4e4 = (undefined2)((ulong)puStack_3e8 >> 0x20);
        uStack_4e2 = (undefined1)((ulong)puStack_3e8 >> 0x30);
        uStack_4e1 = (undefined1)((ulong)puStack_3e8 >> 0x38);
        uStack_4f8 = CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8));
        uStack_4f0 = CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0));
        uStack_4f4 = uStack_3f4;
        uStack_4ec = uStack_3ec;
        uStack_4eb = uStack_3eb;
        uStack_4ea = uStack_3ea;
      }
      else {
        func_0x0412e5e0(&uStack_4f8,puStack_3e8,
                        CONCAT26(uStack_3ea,
                                 CONCAT15(uStack_3eb,
                                          CONCAT14(uStack_3ec,
                                                   CONCAT22(uStack_3ee,
                                                            CONCAT11(uStack_3ef,bStack_3f0))))));
      }
      plVar25 = (long *)CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)));
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar25[1] = plVar25[1] + 1;
        UNLOCK();
      }
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[5] = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
      *(uint *)(puVar21 + 3) = uStack_4f8;
      *(undefined4 *)((long)puVar21 + 0x1c) = uStack_4f4;
      *(uint *)(puVar21 + 4) = uStack_4f0;
      *(uint *)((long)puVar21 + 0x24) = CONCAT22(uStack_4ea,CONCAT11(uStack_4eb,uStack_4ec));
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      uStack_4eb = 0;
      uStack_4ea = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4e2 = 0;
      uStack_4e1 = 0;
      *(uint *)(puVar21 + 6) = uStack_358;
      *(uint *)((long)puVar21 + 0x34) = CONCAT22(uStack_352,CONCAT11(uStack_353,uStack_354));
      *(uint *)(puVar21 + 7) = CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350));
      *(undefined4 *)((long)puVar21 + 0x3c) = uStack_34c;
      if (plVar25 == (long *)0x0) {
        *(undefined1 (*) [16])(puVar21 + 8) = _auStack_2e8;
      }
      else {
        LOCK();
        plVar25[1] = plVar25[1] + 1;
        UNLOCK();
        *(undefined1 (*) [16])(puVar21 + 8) = _auStack_2e8;
        LOCK();
        plVar20 = plVar25 + 1;
        lVar17 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
        }
      }
      if ((uStack_4f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8))),
                        CONCAT44(uStack_4f4,uStack_4f8) & 0xfffffffffffffffe);
      }
      puVar21 = puVar21 + 10;
      puVar29[0x1e] = (ulong)puVar21;
      puVar29[0x1e] = (ulong)puVar21;
      plVar25 = (long *)CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)));
    }
    else {
      puVar21 = (undefined8 *)func_0x098c2690(puVar29 + 0x1d,&bStack_3f8,&uStack_358,auStack_2e8);
      puVar29[0x1e] = (ulong)puVar21;
      plVar25 = (long *)CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)));
    }
    if (plVar25 != (long *)0x0) {
      LOCK();
      plVar20 = plVar25 + 1;
      lVar17 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        func_0x0412c2d0(plVar25);
      }
    }
    func_0x064e40a0(puVar21 + -10);
    puVar22 = puStack_400;
    if ((bStack_3f8 & 1) != 0) {
      func_0x0412a280(puStack_3e8,
                      CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8))) &
                      0xfffffffffffffffe);
    }
  }
  bStack_3f8 = 0x10;
  uStack_3f7 = 0x50;
  uStack_3f6 = 0x6361;
  uStack_3f4 = 0x4974656b;
  bStack_3f0 = 100;
  uStack_3ef = 0;
  uStack_4f8 = 0;
  uStack_4f4 = 0;
  uStack_4f0 = 0;
  uStack_4ec = 0;
  uStack_4eb = 0;
  uStack_4ea = 0;
  uStack_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4e2 = 0;
  uStack_4e1 = 0;
  plStack_4e0 = (long *)0x0;
  uStack_4d8 = (long *)0x0;
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  puStack_4b8 = (undefined1 *)0x0;
  func_0x048b1dc0(&uStack_4b0);
  uStack_4a3 = uStack_4a3 & 0xffffff;
  uStack_498 = 0;
  puStack_490 = (undefined8 *)0x0;
  puStack_488 = (undefined8 *)0x0;
  lStack_480 = 0;
  uStack_478 = (undefined8 *)0x0;
  uStack_470 = (undefined8 *)0x0;
  if ((uStack_4c8 & 1) == 0) {
    if ((bStack_3f8 & 1) == 0) {
      puStack_4b8 = puStack_3e8;
      uStack_4c8 = CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8));
      uStack_4c0 = CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0));
      uStack_4bc = CONCAT22(uStack_3ea,CONCAT11(uStack_3eb,uStack_3ec));
      uStack_4c4 = uStack_3f4;
    }
    else {
      FUN_04885070(&uStack_4c8,puStack_3e8,
                   CONCAT26(uStack_3ea,
                            CONCAT15(uStack_3eb,
                                     CONCAT14(uStack_3ec,
                                              CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0))))
                           ));
    }
  }
  else {
    bVar32 = (bStack_3f8 & 1) != 0;
    puVar28 = &uStack_3f7;
    if (bVar32) {
      puVar28 = puStack_3e8;
    }
    uVar27 = (ulong)(bStack_3f8 >> 1);
    if (bVar32) {
      uVar27 = CONCAT26(uStack_3ea,
                        CONCAT15(uStack_3eb,
                                 CONCAT14(uStack_3ec,
                                          CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)))));
    }
    func_0x04885120(&uStack_4c8,puVar28,uVar27);
  }
  auVar34 = func_0x099ecef0();
  uStack_4b0 = auVar34._0_5_;
  uStack_4ab = auVar34._5_4_;
  uStack_4a7 = auVar34._9_4_;
  uStack_4a3._0_3_ = auVar34._13_3_;
  uStack_4a3 = CONCAT13(1,(undefined3)uStack_4a3);
  if ((bStack_3f8 & 1) != 0) {
    func_0x0412a280(puStack_3e8,
                    CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8))) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&uStack_4f8);
  param_3 = &uStack_3e0;
  uVar26 = 0;
  do {
    func_0x08afb260(&plStack_128,uVar26);
    if (plStack_128 != (long *)0x0) {
      (**(code **)(*plStack_128 + 0x18))();
      if (extraout_RDX != 0) {
        auVar34 = (**(code **)(*plStack_128 + 0x18))();
        param_2 = auVar34._8_8_;
        if (0xfffffffffffffff7 < param_2) {
          func_0x04882e30();
          goto LAB_0997d48b;
        }
        if (param_2 < 0x17) {
          uStack_378 = CONCAT71(uStack_378._1_7_,auVar34[8] * '\x02');
          puVar22 = (undefined1 *)((long)&uStack_378 + 1);
          if (param_2 != 0) goto LAB_0997c6bf;
        }
        else {
          uVar27 = (param_2 | 7) + 1;
          if ((param_2 | 7) == 0x17) {
            uVar27 = 0x1a;
          }
          puVar22 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27);
          if (puVar22 == (undefined1 *)0x0) {
            FUN_0eec74c0(uVar27,0);
          }
          uStack_378 = uVar27 | 1;
          uStack_370 = param_2;
          puStack_368 = puVar22;
LAB_0997c6bf:
          func_0x0eee2ee0(puVar22,auVar34._0_8_,param_2);
        }
        uVar27 = uStack_378;
        puVar22[param_2] = 0;
        plStack_2c8 = (long *)0x0;
        if ((uStack_378 & 1) == 0) {
          puStack_348 = puStack_368;
          uStack_358 = (uint)uStack_378;
          uStack_354 = (undefined1)(uStack_378 >> 0x20);
          uStack_353 = (undefined1)(uStack_378 >> 0x28);
          uStack_352 = (undefined2)(uStack_378 >> 0x30);
          uStack_350 = (undefined1)uStack_370;
          uStack_34f = (undefined2)(uStack_370 >> 8);
          uStack_34d = (undefined1)(uStack_370 >> 0x18);
          uStack_34c = (undefined4)(uStack_370 >> 0x20);
        }
        else {
          func_0x0412e5e0(&uStack_358,puStack_368,uStack_370);
        }
        puVar22 = puStack_348;
        uStack_208 = CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)));
        uStack_200 = CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)));
        uStack_358 = 0;
        uStack_354 = 0;
        uStack_353 = 0;
        uStack_352 = 0;
        uStack_350 = 0;
        uStack_34f = 0;
        uStack_34d = 0;
        uStack_34c = 0;
        puStack_348 = (undefined1 *)0x0;
        pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (pbVar23 == (byte *)0x0) {
          FUN_0eec74c0(0x20,0);
        }
        *(undefined **)pbVar23 = &UNK_0f1c9600;
        *(undefined4 *)(pbVar23 + 8) = (undefined4)uStack_208;
        *(undefined4 *)(pbVar23 + 0xc) = uStack_208._4_4_;
        *(undefined4 *)(pbVar23 + 0x10) = (undefined4)uStack_200;
        *(undefined4 *)(pbVar23 + 0x14) = uStack_200._4_4_;
        *(undefined1 **)(pbVar23 + 0x18) = puVar22;
        pbStack_3d8 = pbVar23;
        func_0x065ae140(&bStack_3f8,auStack_2e8);
        if (pbStack_3d8 == &bStack_3f8) {
          lVar17 = 0x20;
LAB_0997c881:
          (**(code **)(*(long *)pbStack_3d8 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (pbStack_3d8 != (byte *)0x0) goto LAB_0997c881;
        }
        if ((uStack_358 & 1) != 0) {
          func_0x0412a280(puStack_348,
                          CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                          & 0xfffffffffffffffe);
        }
        if ((uVar27 & 1) == 0) {
          puStack_298 = puStack_368;
          uStack_2a8 = uStack_378;
          uStack_2a0 = uStack_370;
        }
        else {
          func_0x0412e5e0(&uStack_2a8,puStack_368,uStack_370);
        }
        auVar34 = func_0x0d8543b0();
        if (plStack_2c8 == (long *)0x0) {
          pauStack_1d8 = (undefined1 (*) [16])0x0;
        }
        else if (plStack_2c8 == (long *)auStack_2e8) {
          pauStack_1d8 = aauStack_1f8;
          (**(code **)(*plStack_2c8 + 0x18))();
        }
        else {
          pauStack_1d8 = (undefined1 (*) [16])(**(code **)(*plStack_2c8 + 0x10))();
        }
        pauStack_388 = pauStack_1d8;
        bStack_3f8 = 0;
        uStack_3f7 = 0;
        uStack_3f6 = 0;
        uStack_3f4 = 0;
        bStack_3f0 = 0;
        uStack_3ef = 0;
        uStack_3ee = 0;
        uStack_3ec = 0;
        uStack_3eb = 0;
        uStack_3ea = 0;
        puStack_3e8 = (undefined1 *)0x0;
        puStack_3d0 = puStack_298;
        uStack_3e0 = uStack_2a8;
        pbStack_3d8 = (byte *)uStack_2a0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        puStack_298 = (undefined1 *)0x0;
        uStack_3b8 = 1;
        auStack_3c8 = auVar34;
        if (pauStack_1d8 == (undefined1 (*) [16])0x0) {
          pauStack_388 = (undefined1 (*) [16])0x0;
        }
        else if (pauStack_1d8 == aauStack_1f8) {
          pauStack_388 = (undefined1 (*) [16])&puStack_3a8;
          (**(code **)(*(long *)*pauStack_1d8 + 0x18))(pauStack_1d8);
          if (pauStack_1d8 == aauStack_1f8) {
            lVar17 = 0x20;
          }
          else {
            lVar17 = 0x28;
            if (pauStack_1d8 == (undefined1 (*) [16])0x0) goto LAB_0997c9a0;
          }
          (**(code **)(*(long *)*pauStack_1d8 + lVar17))();
        }
        else {
          pauStack_1d8 = (undefined1 (*) [16])0x0;
        }
LAB_0997c9a0:
        if ((uStack_2a8 & 1) != 0) {
          func_0x0412a280(puStack_298,uStack_2a8 & 0xfffffffffffffffe);
        }
        puVar21 = puStack_490;
        if (puStack_490 < puStack_488) {
          *puStack_490 = 0;
          puStack_490[1] = 0;
          puStack_490[2] = 0;
          *puStack_490 = CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8)));
          puStack_490[1] =
               CONCAT26(uStack_3ea,
                        CONCAT15(uStack_3eb,
                                 CONCAT14(uStack_3ec,
                                          CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)))));
          puStack_490[2] = puStack_3e8;
          bStack_3f8 = 0;
          uStack_3f7 = 0;
          uStack_3f6 = 0;
          uStack_3f4 = 0;
          bStack_3f0 = 0;
          uStack_3ef = 0;
          uStack_3ee = 0;
          uStack_3ec = 0;
          uStack_3eb = 0;
          uStack_3ea = 0;
          puStack_3e8 = (undefined1 *)0x0;
          puStack_490[5] = puStack_3d0;
          puStack_490[3] = uStack_3e0;
          puStack_490[4] = pbStack_3d8;
          uStack_3e0 = 0;
          pbStack_3d8 = (byte *)0x0;
          puStack_3d0 = (undefined1 *)0x0;
          *(undefined1 *)(puStack_490 + 8) = uStack_3b8;
          *(undefined4 *)(puStack_490 + 6) = auStack_3c8._0_4_;
          *(undefined4 *)((long)puStack_490 + 0x34) = auStack_3c8._4_4_;
          *(undefined4 *)(puStack_490 + 7) = auStack_3c8._8_4_;
          *(undefined4 *)((long)puStack_490 + 0x3c) = auStack_3c8._12_4_;
          if (pauStack_388 == (undefined1 (*) [16])0x0) {
            puStack_490[0xe] = 0;
            puStack_490 = puStack_490 + 0x10;
            goto joined_r0x0997ca88;
          }
          if (pauStack_388 == (undefined1 (*) [16])&puStack_3a8) {
            puStack_490[0xe] = puStack_490 + 10;
            (**(code **)(*(long *)*pauStack_388 + 0x18))();
          }
          else {
            puStack_490[0xe] = pauStack_388;
            pauStack_388 = (undefined1 (*) [16])0x0;
          }
          puStack_490 = puVar21 + 0x10;
          if ((uVar27 & 1) == 0) goto LAB_0997ca8a;
LAB_0997caff:
          func_0x0412e5e0(&uStack_358,puStack_368,uStack_370);
          func_0x0412e5e0(&uStack_340,puStack_368,uStack_370);
        }
        else {
          puStack_490 = (undefined8 *)func_0x065ac6d0(&uStack_498,&bStack_3f8);
joined_r0x0997ca88:
          if ((uVar27 & 1) != 0) goto LAB_0997caff;
LAB_0997ca8a:
          puStack_348 = puStack_368;
          uStack_358 = (uint)uStack_378;
          uStack_354 = (undefined1)(uStack_378 >> 0x20);
          uStack_353 = (undefined1)(uStack_378 >> 0x28);
          uStack_352 = (undefined2)(uStack_378 >> 0x30);
          uStack_350 = (undefined1)uStack_370;
          uStack_34f = (undefined2)(uStack_370 >> 8);
          uStack_34d = (undefined1)(uStack_370 >> 0x18);
          uStack_34c = uStack_370._4_4_;
          puStack_330 = puStack_368;
          uStack_340 = uStack_378;
          uStack_338 = uStack_370;
        }
        lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (lVar17 == 0) {
          func_0x048b0de0(&uStack_68,&uStack_359);
          _DAT_0f54fd90 = (undefined4)uStack_68;
          uRam000000000f54fd94 = uStack_68._4_4_;
          uVar15 = (undefined4)uStack_60;
          uVar4 = uStack_60._4_4_;
          uStack_68 = 0;
          uStack_60 = (long *)0x0;
          plVar25 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar15;
          uRam000000000f54fd9c = uVar4;
          if (plVar25 != (long *)0x0) {
            LOCK();
            plVar20 = plVar25 + 1;
            lVar17 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar17 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              func_0x0412c2d0(plVar25);
              plVar25 = uStack_60;
              if (uStack_60 != (long *)0x0) {
                LOCK();
                plVar20 = uStack_60 + 1;
                lVar17 = *plVar20;
                *plVar20 = *plVar20 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*uStack_60 + 0x10))(uStack_60);
                  func_0x0412c2d0(plVar25);
                }
              }
            }
          }
          lVar17 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puVar21 = uStack_478;
        puStack_318 = &UNK_07bba680;
        uStack_308 = 0x3ee0c3ea;
        pcStack_310 = (code *)0x0;
        uStack_304 = 2;
        auStack_328[0] = (ulong)uVar26;
        uStack_2f8 = 0;
        puStack_2f0 = &UNK_07bba660;
        uStack_300 = lVar17;
        if (uStack_478 < uStack_470) {
          uStack_478[2] = puStack_348;
          *uStack_478 = CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)));
          uStack_478[1] = CONCAT44(uStack_34c,CONCAT13(uStack_34d,CONCAT21(uStack_34f,uStack_350)));
          uStack_358 = 0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          uStack_350 = 0;
          uStack_34f = 0;
          uStack_34d = 0;
          uStack_34c = 0;
          puStack_348 = (undefined1 *)0x0;
          uStack_478[5] = puStack_330;
          uStack_478[3] = uStack_340;
          uStack_478[4] = uStack_338;
          uStack_340 = 0;
          uStack_338 = 0;
          puStack_330 = (undefined1 *)0x0;
          uStack_478[6] = 0;
          *(undefined4 *)(uStack_478 + 8) = 0x7bba680;
          *(undefined4 *)((long)uStack_478 + 0x44) = 0;
          *(undefined4 *)(uStack_478 + 9) = 0;
          *(undefined4 *)((long)uStack_478 + 0x4c) = 0;
          *(undefined4 *)(uStack_478 + 10) = 0x3ee0c3ea;
          *(undefined1 *)((long)uStack_478 + 0x54) = 2;
          (*(code *)&UNK_07bba680)(5,auStack_328);
          puVar13 = puStack_2f0;
          uVar15 = (undefined4)uStack_2f8;
          uVar4 = uStack_2f8._4_4_;
          uStack_2f8 = 0;
          *(undefined4 *)(puVar21 + 0xb) = (undefined4)uStack_300;
          *(undefined4 *)((long)puVar21 + 0x5c) = uStack_300._4_4_;
          *(undefined4 *)(puVar21 + 0xc) = uVar15;
          *(undefined4 *)((long)puVar21 + 100) = uVar4;
          puStack_2f0 = (undefined *)0x0;
          puVar21[0xd] = puVar13;
          uStack_478 = puVar21 + 0xe;
        }
        else {
          uStack_478 = (undefined8 *)func_0x065acae0(&lStack_480,&uStack_358);
        }
        if (pcStack_310 != (code *)0x0) {
          (*pcStack_310)(auStack_328);
        }
        if ((uStack_340 & 1) != 0) {
          func_0x0412a280(puStack_330,uStack_340 & 0xfffffffffffffffe);
        }
        if ((uStack_358 & 1) != 0) {
          func_0x0412a280(puStack_348,
                          CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                          & 0xfffffffffffffffe);
        }
        puVar21 = puStack_490;
        if (pauStack_388 == (undefined1 (*) [16])&puStack_3a8) {
          lVar17 = 0x20;
LAB_0997cec9:
          (**(code **)(*(long *)*pauStack_388 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (pauStack_388 != (undefined1 (*) [16])0x0) goto LAB_0997cec9;
        }
        if ((uStack_3e0 & 1) != 0) {
          func_0x0412a280(puStack_3d0,uStack_3e0 & 0xfffffffffffffffe);
        }
        uVar15 = uStack_3f4;
        uVar12 = uStack_3f6;
        uVar11 = uStack_3f7;
        bVar10 = bStack_3f8;
        lVar17 = CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8)));
        if (lVar17 != 0) {
          lVar16 = CONCAT26(uStack_3ea,
                            CONCAT15(uStack_3eb,
                                     CONCAT14(uStack_3ec,
                                              CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0))))
                           );
          if (lVar17 != lVar16) {
            do {
              if ((*(byte *)(lVar16 + -0x20) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar16 + -0x10),
                                *(ulong *)(lVar16 + -0x20) & 0xfffffffffffffffe);
              }
              lVar16 = lVar16 + -0x30;
            } while (lVar16 != lVar17);
            lVar17 = CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8)));
          }
          bStack_3f0 = bVar10;
          uStack_3ef = uVar11;
          uStack_3ee = uVar12;
          uStack_3ec = (undefined1)uVar15;
          uStack_3eb = (undefined1)((uint)uVar15 >> 8);
          uStack_3ea = (undefined2)((uint)uVar15 >> 0x10);
          func_0x0412a280(lVar17,(long)puStack_3e8 - lVar17);
        }
        if (plStack_2c8 == (long *)auStack_2e8) {
          lVar17 = 0x20;
LAB_0997cee7:
          (**(code **)(*plStack_2c8 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (plStack_2c8 != (long *)0x0) goto LAB_0997cee7;
        }
        func_0x064e40a0(puVar21 + -0x10);
        puVar22 = puStack_400;
        if ((uStack_378 & 1) != 0) {
          func_0x0412a280(puStack_368,uStack_378 & 0xfffffffffffffffe);
        }
      }
    }
    plVar25 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      LOCK();
      plVar20 = plStack_120 + 1;
      lVar17 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        func_0x0412c2d0(plVar25);
      }
    }
    plVar25 = plStack_4e0;
    uVar26 = uVar26 + 1;
    if (uVar26 == 0x161) {
      plVar20 = uStack_4d8;
      if (plStack_4e0 != (long *)0x0) {
        for (; plVar25 != plVar20; plVar20 = plVar20 + -6) {
          if ((*(byte *)(plVar20 + -4) & 1) != 0) {
            func_0x0412a280(plVar20[-2],plVar20[-4] & 0xfffffffffffffffe);
          }
        }
        uStack_4d8 = plVar25;
        func_0x0412a280(plStack_4e0,CONCAT44(uStack_4cc,uStack_4d0) - (long)plStack_4e0);
        puVar22 = puStack_400;
      }
      puVar29 = puStack_280;
      puVar9 = uStack_470;
      puVar8 = uStack_478;
      lVar17 = lStack_480;
      puVar7 = puStack_488;
      puVar19 = puStack_490;
      uVar27 = uStack_498;
      puVar28 = puStack_4b8;
      uStack_3ea = uStack_4ea;
      uStack_3eb = uStack_4eb;
      uStack_3ec = uStack_4ec;
      uVar5 = uStack_4f0;
      uStack_3f4 = uStack_4f4;
      uVar26 = uStack_4f8;
      puStack_3e8 = (undefined1 *)
                    CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8)));
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      uStack_4eb = 0;
      uStack_4ea = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4e2 = 0;
      uStack_4e1 = 0;
      bStack_3f8 = (byte)uVar26;
      uStack_3f7 = (undefined1)(uVar26 >> 8);
      uStack_3f6 = (undefined2)(uVar26 >> 0x10);
      bStack_3f0 = (byte)uVar5;
      uStack_3ef = (undefined1)(uVar5 >> 8);
      uStack_3ee = (undefined2)(uVar5 >> 0x10);
      plStack_4e0 = (long *)0x0;
      uStack_4d8 = (long *)0x0;
      uStack_4d0 = 0;
      uStack_4cc = 0;
      puStack_3d0 = puStack_4b8;
      uStack_3e0 = CONCAT44(uStack_4c4,uStack_4c8);
      pbStack_3d8 = (byte *)CONCAT44(uStack_4bc,uStack_4c0);
      uStack_4c8 = 0;
      uStack_4c4 = 0;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      puStack_4b8 = (undefined1 *)0x0;
      uStack_3b8 = uStack_4a3._3_1_;
      auStack_3c8._0_8_ = CONCAT35((undefined3)uStack_4ab,uStack_4b0);
      auStack_3c8._8_8_ = CONCAT35((undefined3)uStack_4a3,CONCAT41(uStack_4a7,uStack_4ab._3_1_));
      uStack_3b0 = uStack_498;
      puStack_3a8 = puStack_490;
      puStack_3a0 = puStack_488;
      uStack_498 = 0;
      puStack_490 = (undefined8 *)0x0;
      puStack_488 = (undefined8 *)0x0;
      lStack_398 = lStack_480;
      puStack_390 = uStack_478;
      pauStack_388 = (undefined1 (*) [16])uStack_470;
      lStack_480 = 0;
      uStack_478 = (undefined8 *)0x0;
      uStack_470 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)puStack_280[0x18];
      if (puVar21 < (undefined8 *)puStack_280[0x19]) {
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = CONCAT44(uStack_3f4,uVar26);
        puVar21[1] = CONCAT26(uStack_3ea,CONCAT15(uStack_3eb,CONCAT14(uStack_3ec,uVar5)));
        puVar21[2] = puStack_3e8;
        bStack_3f8 = 0;
        uStack_3f7 = 0;
        uStack_3f6 = 0;
        uStack_3f4 = 0;
        bStack_3f0 = 0;
        uStack_3ef = 0;
        uStack_3ee = 0;
        uStack_3ec = 0;
        uStack_3eb = 0;
        uStack_3ea = 0;
        puStack_3e8 = (undefined1 *)0x0;
        puVar21[5] = puVar28;
        puVar21[3] = uStack_3e0;
        puVar21[4] = pbStack_3d8;
        uStack_3e0 = 0;
        pbStack_3d8 = (byte *)0x0;
        puStack_3d0 = (undefined1 *)0x0;
        *(undefined1 *)(puVar21 + 8) = uStack_4a3._3_1_;
        puVar21[6] = auStack_3c8._0_8_;
        puVar21[7] = auStack_3c8._8_8_;
        puVar21[9] = 0;
        puVar21[10] = 0;
        puVar21[0xb] = 0;
        puVar21[9] = uVar27;
        puVar21[10] = puVar19;
        puVar21[0xb] = puVar7;
        uStack_3b0 = 0;
        puStack_3a8 = (undefined8 *)0x0;
        puStack_3a0 = (undefined8 *)0x0;
        puVar21[0xc] = 0;
        puVar21[0xd] = 0;
        puVar21[0xe] = 0;
        puVar21[0xc] = lVar17;
        puVar21[0xd] = puVar8;
        puVar21[0xe] = puVar9;
        lStack_398 = 0;
        puStack_390 = (undefined8 *)0x0;
        pauStack_388 = (undefined1 (*) [16])0x0;
        puVar21 = puVar21 + 0xf;
      }
      else {
        puVar21 = (undefined8 *)func_0x0d85f490(puStack_280 + 0x17,&bStack_3f8);
      }
      puVar29[0x18] = (ulong)puVar21;
      func_0x0652e0f0(&bStack_3f8);
      bStack_3f8 = 0;
      uStack_3f7 = 0;
      uStack_3f6 = 0;
      uStack_3f4 = 0;
      bStack_3f0 = 0;
      uStack_3ef = 0;
      uStack_3ee = 0;
      uStack_3ec = 0;
      uStack_3eb = 0;
      uStack_3ea = 0;
      puStack_3e8 = (undefined1 *)0x0;
      func_0x0d841110(uStack_50,puVar29,0,uStack_48,&bStack_3f8);
      uVar15 = uStack_3f4;
      uVar12 = uStack_3f6;
      uVar11 = uStack_3f7;
      bVar10 = bStack_3f8;
      lVar17 = CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8)));
      if (lVar17 != 0) {
        lVar16 = CONCAT26(uStack_3ea,
                          CONCAT15(uStack_3eb,
                                   CONCAT14(uStack_3ec,
                                            CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)))));
        if (lVar17 != lVar16) {
          do {
            if ((*(byte *)(lVar16 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar16 + -8),
                              *(ulong *)(lVar16 + -0x18) & 0xfffffffffffffffe);
            }
            lVar16 = lVar16 + -0x18;
          } while (lVar16 != lVar17);
          lVar17 = CONCAT44(uStack_3f4,CONCAT22(uStack_3f6,CONCAT11(uStack_3f7,bStack_3f8)));
        }
        bStack_3f0 = bVar10;
        uStack_3ef = uVar11;
        uStack_3ee = uVar12;
        uStack_3ec = (undefined1)uVar15;
        uStack_3eb = (undefined1)((uint)uVar15 >> 8);
        uStack_3ea = (undefined2)((uint)uVar15 >> 0x10);
        func_0x0412a280(lVar17,(long)puStack_3e8 - lVar17);
        puVar22 = puStack_400;
      }
      func_0x0652e0f0(&plStack_4e0);
      uVar4 = uStack_4f4;
      uVar15 = uStack_4f8;
      lVar17 = CONCAT44(uStack_4f4,uStack_4f8);
      if (lVar17 != 0) {
        lVar16 = CONCAT26(uStack_4ea,CONCAT15(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0)));
        if (lVar17 != lVar16) {
          do {
            if ((*(byte *)(lVar16 + -0x20) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar16 + -0x10),
                              *(ulong *)(lVar16 + -0x20) & 0xfffffffffffffffe);
            }
            lVar16 = lVar16 + -0x30;
          } while (lVar16 != lVar17);
          lVar17 = CONCAT44(uStack_4f4,uStack_4f8);
        }
        uStack_4f0 = uVar15;
        uStack_4ec = (undefined1)uVar4;
        uStack_4eb = (undefined1)((uint)uVar4 >> 8);
        uStack_4ea = (undefined2)((uint)uVar4 >> 0x10);
        func_0x0412a280(lVar17,CONCAT17(uStack_4e1,
                                        CONCAT16(uStack_4e2,CONCAT24(uStack_4e4,uStack_4e8))) -
                               lVar17);
      }
      if (cStack_4fc == '\0') {
        func_0x0412a280(puVar22,uStack_2b8 | (byte)uStack_2b0 & 0xfe);
      }
      puVar22 = puStack_238;
      puVar21 = puStack_228;
      if (cStack_210 == '\x01') {
        while (puVar21 != (undefined8 *)0x0) {
          puVar19 = (undefined8 *)*puVar21;
          puStack_238 = puVar22;
          if ((*(byte *)(puVar21 + 5) & 1) != 0) {
            func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar21 + 2) & 1) != 0) {
            func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar21,0x40);
          puVar22 = puStack_238;
          puVar21 = puVar19;
        }
        puStack_238 = (undefined1 *)0x0;
        if (puVar22 != (undefined1 *)0x0) {
          func_0x0412a280(puVar22,uStack_230 << 3);
        }
      }
      if ((cStack_260 == '\x01') && (lVar17 = CONCAT71(uStack_277,uStack_278), lVar17 != 0)) {
        lVar16 = lVar17;
        lVar31 = lStack_270;
        if (lVar17 != lStack_270) {
          do {
            if ((*(byte *)(lVar31 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar31 + -8),
                              *(ulong *)(lVar31 + -0x18) & 0xfffffffffffffffe);
            }
            lVar31 = lVar31 + -0x18;
          } while (lVar31 != lVar17);
          lVar16 = CONCAT71(uStack_277,uStack_278);
        }
        lStack_270 = lVar17;
        func_0x0412a280(lVar16,lStack_268 - lVar16);
      }
      return;
    }
  } while( true );
}



/* ---- referenced strings ----
 * 0x141cb08  @minecraft/server-net
 */
