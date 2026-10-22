/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4f7eb0 (ELF vaddr 0xe3f7eb0)
 * Label: string:Jigsaw Template Pool Description
 * Body:  [[0e4f7eb0, 0e4f8157] [0e4f8160, 0e4f81a1] [0e4f81b0, 0e4f8f91] [0e4f8fa0, 0e4f9ff0] [0e4fa000, 0e4fa2c7] [0e4fa2d0, 0e4fa311] [0e4fa320, 0e4faec5] [0e4faed0, 0e4fb417] [0e4fb420, 0e4fb461] [0e4fb470, 0e4fca47] [0e4fca50, 0e4fca91] [0e4fcaa0, 0e4fe499] [0e4fe4a0, 0e4fe4e2] [0e4fe4f0, 0e4fe7d0] [0e4fe7e0, 0e4fe814] [0e4fe820, 0e4fff89]]
 * Ghidra: FUN_0e4f7eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e4f7eb0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  uint *puVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  undefined1 (*pauVar18) [16];
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  code *pcVar23;
  long lVar24;
  undefined8 uVar25;
  ulong *puVar26;
  int *piVar27;
  long *plVar28;
  undefined1 *puVar29;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  byte *pbVar33;
  ulong uVar34;
  undefined *puVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_378 [16];
  uint uStack_368;
  undefined4 uStack_364;
  int iStack_360;
  int iStack_35c;
  code *pcStack_358;
  undefined4 uStack_350;
  uint uStack_34c;
  undefined4 uStack_348;
  undefined1 uStack_344;
  undefined1 uStack_343;
  undefined2 uStack_342;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined1 uStack_330;
  undefined2 uStack_32f;
  undefined1 uStack_32d;
  undefined4 uStack_32c;
  long *plStack_328;
  long lStack_320;
  byte bStack_318;
  undefined7 uStack_317;
  long lStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  long lStack_300;
  long lStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined2 uStack_2d0;
  undefined2 uStack_2ce;
  uint uStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  long lStack_2c0;
  undefined2 uStack_2b8;
  undefined2 uStack_2b6;
  uint uStack_2b4;
  uint uStack_2b0;
  undefined1 uStack_2ac;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  uint uStack_284;
  uint uStack_280;
  uint uStack_27c;
  char cStack_278;
  undefined7 uStack_277;
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  code *pcStack_218;
  undefined8 uStack_210;
  int iStack_208;
  uint uStack_204;
  int iStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined *puStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1a8 [16];
  code *pcStack_198;
  code *pcStack_190;
  int iStack_188;
  uint uStack_184;
  int iStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  undefined1 auStack_168 [16];
  code *pcStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_128;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 auStack_b8 [16];
  code *pcStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  puStack_1e8 = &UNK_01250bf9;
  pcStack_1e0 = (code *)0x12;
  func_0x0470d9a0(auStack_378,&UNK_013d851d,0xd,0xd,&puStack_1e8);
  puStack_128 = auStack_378 + 1;
  puVar29 = (undefined1 *)CONCAT44(uStack_364,uStack_368);
  uVar31 = auStack_378._8_8_;
  if ((auStack_378[0] & 1) == 0) {
    puVar29 = puStack_128;
    uVar31 = (ulong)(auStack_378[0] >> 1);
  }
  if ((DAT_0f75d008 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d008), iVar15 != 0)) {
    func_0x0e6a1700();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cf88,0xf53dab8);
    func_0x0410844d(&DAT_0f75d008);
  }
  uStack_100 = param_1 + 0x18;
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75cf88 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4f7f91;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f75cf88 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4f7f91:
    puVar17 = &DAT_0f75cf88;
    iVar15 = iRam000000000f75cfe8;
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    iVar15 = *(int *)(puVar17 + 0x60);
  }
  if ((iVar15 == -0x2b3da790) && (lVar20 = *(long *)(puVar17 + 0x68), lVar20 != 0)) {
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    puVar29 = (undefined1 *)(lVar20 + 9);
    if (bVar36) {
      puVar29 = *(undefined1 **)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
  }
  func_0x0e6a1d00(&uStack_2a8,param_1,puVar29,uVar31);
  if ((auStack_378[0] & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_364,uStack_368),auStack_378._0_8_ & 0xfffffffffffffffe);
  }
  if (cStack_278 == '\0') {
    func_0x04134310(auStack_168,0xf);
    pauVar18 = (undefined1 (*) [16])func_0x0412f0e0(auStack_168,0,&UNK_01284191,0xb);
    puVar17 = uStack_2a8;
    uStack_78 = *(undefined8 *)*pauVar18;
    uStack_70 = *(undefined8 *)(*pauVar18 + 8);
    uVar31 = *(ulong *)*pauVar18;
    uStack_118 = *(ulong *)pauVar18[1];
    *pauVar18 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar18[1] = 0;
    if ((DAT_0f75d008 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d008), iVar15 != 0)) {
      func_0x0e6a1700();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cf88,0xf53dab8);
      func_0x0410844d(&DAT_0f75d008);
    }
    uVar34 = uVar31 & 0xffffffffffffff00;
    plVar28 = (long *)(*(long *)(puVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75cf88 + 4)) * 8);
    do {
      lVar20 = *plVar28;
      if (lVar20 == -1) goto LAB_0e4f80e0;
      plVar28 = (long *)(*(long *)(puVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f75cf88 + 4));
    if (plVar28 == *(long **)(puVar17 + 0x38)) {
LAB_0e4f80e0:
      puVar35 = &DAT_0f75cf88;
    }
    else {
      puVar35 = (undefined *)plVar28[2];
    }
    for (pbVar19 = *(byte **)(uStack_2a8 + 0x50); pbVar19 != *(byte **)(uStack_2a8 + 0x58);
        pbVar19 = pbVar19 + 0x38) {
      bVar4 = *pbVar19;
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 == 0x1d) goto LAB_0e4f81ba;
      }
      else if (*(long *)(pbVar19 + 8) == 0x1d) {
LAB_0e4f81ba:
        if ((bVar4 & 1) == 0) {
          pbVar30 = pbVar19 + 1;
        }
        else {
          pbVar30 = *(byte **)(pbVar19 + 0x10);
        }
        auVar37[0] = -(*pbVar30 == 0x5b);
        auVar37[1] = -(pbVar30[1] == 99);
        auVar37[2] = -(pbVar30[2] == 0x65);
        auVar37[3] = -(pbVar30[3] == 0x72);
        auVar37[4] = -(pbVar30[4] == 0x65);
        auVar37[5] = -(pbVar30[5] == 0x61);
        auVar37[6] = -(pbVar30[6] == 0x6c);
        auVar37[7] = -(pbVar30[7] == 0x3a);
        auVar37[8] = -(pbVar30[8] == 0x6a);
        auVar37[9] = -(pbVar30[9] == 0x73);
        auVar37[10] = -(pbVar30[10] == 0x6f);
        auVar37[0xb] = -(pbVar30[0xb] == 0x6e);
        auVar37[0xc] = -(pbVar30[0xc] == 0x5f);
        auVar37[0xd] = -(pbVar30[0xd] == 0x73);
        auVar37[0xe] = -(pbVar30[0xe] == 99);
        auVar37[0xf] = -(pbVar30[0xf] == 0x68);
        auVar42[0] = -(pbVar30[0xd] == 0x73);
        auVar42[1] = -(pbVar30[0xe] == 99);
        auVar42[2] = -(pbVar30[0xf] == 0x68);
        auVar42[3] = -(pbVar30[0x10] == 0x65);
        auVar42[4] = -(pbVar30[0x11] == 0x6d);
        auVar42[5] = -(pbVar30[0x12] == 0x61);
        auVar42[6] = -(pbVar30[0x13] == 0x5f);
        auVar42[7] = -(pbVar30[0x14] == 0x70);
        auVar42[8] = -(pbVar30[0x15] == 0x72);
        auVar42[9] = -(pbVar30[0x16] == 0x6f);
        auVar42[10] = -(pbVar30[0x17] == 0x70);
        auVar42[0xb] = -(pbVar30[0x18] == 0x65);
        auVar42[0xc] = -(pbVar30[0x19] == 0x72);
        auVar42[0xd] = -(pbVar30[0x1a] == 0x74);
        auVar42[0xe] = -(pbVar30[0x1b] == 0x79);
        auVar42[0xf] = -(pbVar30[0x1c] == 0x5d);
        auVar42 = auVar42 & auVar37;
        if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar19 == *(byte **)(uStack_2a8 + 0x58)) {
LAB_0e4f81e8:
      uVar13 = uStack_27c;
      if (uStack_280 == 0) {
        if (((puVar35 == (undefined *)0x0) || (*(int *)(puVar35 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar35 + 0x68) == 0)) goto LAB_0e4f8272;
        lVar20 = *(long *)(puVar35 + 0x68) + 0x38;
      }
      else {
        if (puVar35 == (undefined *)0x0) {
          puVar35 = (undefined *)func_0x048aead0(puVar17 + 0x18);
        }
        lVar20 = func_0x048b0c90(puVar17 + 0x18,puVar35,uVar13,1);
        if (lVar20 == 0) {
          auStack_378 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_378);
          lVar20 = auStack_378._0_8_;
          if (auStack_378._0_8_ == 0) goto LAB_0e4f8272;
        }
        if ((*(int *)(lVar20 + 0x50) == -0x45dcb126) && (*(long *)(lVar20 + 0x58) != 0)) {
          lVar20 = *(long *)(lVar20 + 0x58) + 0x40;
        }
        else {
LAB_0e4f8272:
          lVar20 = 0;
        }
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auStack_228._8_8_;
      auStack_228 = auVar5 << 0x40;
      pcStack_218 = (code *)&UNK_048b4ab0;
      iStack_208 = -0x2cc4263b;
      uStack_210 = (code *)&UNK_048b49f0;
      uStack_204 = CONCAT31(uStack_204._1_3_,1);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x38,0);
      }
      *puVar21 = uStack_78;
      puVar21[1] = uStack_70;
      puVar21[2] = uStack_118;
      *(undefined2 *)(puVar21 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar21 + 4) = (undefined1  [16])0x0;
      puVar21[6] = 0;
      iStack_360 = 0x48b4ab0;
      iStack_35c = 0;
      pcStack_358 = (code *)&UNK_048b49f0;
      uStack_350 = 0xd33bd9c5;
      uStack_34c = CONCAT31(uStack_34c._1_3_,1);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auStack_228._8_8_;
      auStack_228 = auVar6 << 0x40;
      auStack_378._8_8_ = puVar21;
      auStack_378._0_8_ = &UNK_048b46e0;
      pcStack_198 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcStack_198 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar12 = _UNK_014d987e;
      auStack_1a8._8_8_ = 0x1d;
      auStack_1a8._0_8_ = 0x21;
      *(ulong *)(pcStack_198 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcStack_198 + 0x15) = uVar12;
      lVar24 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(long *)pcStack_198 = _DAT_014d9869;
      *(long *)(pcStack_198 + 8) = lVar24;
      pcStack_198[0x1d] = (code)0x0;
      lVar20 = func_0x048b5060(lVar20,auStack_1a8);
      *(undefined **)(lVar20 + 0x20) = &UNK_048b46e0;
      pcVar23 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar20 + 0x20) != auStack_378) {
        puVar21 = (undefined8 *)(lVar20 + 0x28);
        if (*(code **)(lVar20 + 0x40) == (code *)0x0) {
LAB_0e4f83f6:
          uVar12 = auStack_378._8_8_;
          auStack_378._8_8_ = 0;
          *puVar21 = uVar12;
        }
        else {
          (**(code **)(lVar20 + 0x40))(puVar21);
          if ((char)uStack_34c != '\0') {
            if ((char)uStack_34c != '\x02') goto LAB_0e4f83f6;
            (*(code *)CONCAT44(iStack_35c,iStack_360))(5,auStack_378 + 8,puVar21);
          }
        }
        *(ulong *)(lVar20 + 0x38) = CONCAT44(iStack_35c,iStack_360);
        *(code **)(lVar20 + 0x40) = pcStack_358;
        *(uint *)(lVar20 + 0x48) = uStack_350;
        *(char *)(lVar20 + 0x4c) = (char)uStack_34c;
        pcVar23 = pcStack_358;
      }
      if ((auStack_1a8[0] & 1) != 0) {
        func_0x0412a280(pcStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
        pcVar23 = pcStack_358;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_378 + 8);
      }
      if (uStack_210 != (code *)0x0) {
        (*uStack_210)(auStack_228);
      }
      uStack_118 = 0;
      uVar34 = 0;
      uVar31 = 0;
    }
    else {
      iVar15 = *(int *)(pbVar19 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar16 = func_0x04108328(&DAT_0f550768), iVar16 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar15 == _DAT_0f550754) goto LAB_0e4f81e8;
    }
    pcStack_1d0 = (code *)CONCAT44(iStack_28c,iStack_290);
    iStack_1c8 = iStack_288;
    uStack_1c4 = uStack_284;
    uStack_1b8 = (undefined4)CONCAT71(uStack_277,cStack_278);
    uStack_1b4 = (undefined4)((uint7)uStack_277 >> 0x18);
    pcStack_1d8 = uStack_298;
    puStack_1e8 = uStack_2a8;
    pcStack_1e0 = pcStack_2a0;
    iStack_1c0 = 4;
    uStack_1bc = 0x1e1bc4d5;
    if ((DAT_0f75d028 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d028), iVar15 != 0)) {
      func_0x0e6a1810();
      func_0x0410844d(&DAT_0f75d028);
    }
    auStack_378._0_4_ = uStack_1bc;
    auStack_378._8_8_ = 0;
    uStack_368 = 0;
    iStack_360 = 2;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048aead0;
    uStack_350 = 0xd89b2d0;
    uStack_34c = 0;
    uStack_348 = 0xe6a2860;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(&pcStack_1e0,auStack_378);
    func_0x048aea50(auStack_378);
    pcStack_218 = pcStack_1d0;
    auStack_228._8_8_ = pcStack_1d8;
    auStack_228._0_8_ = pcStack_1e0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f551bc8), iVar15 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_378._0_4_ = _DAT_0f551bb4;
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar22 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
    *puVar22 = &UNK_0ef46c48;
    puVar22[3] = puVar21;
    puVar22[4] = 0;
    *(undefined1 *)(puVar22 + 5) = 0xff;
    auStack_378._8_8_ = puVar22 + 3;
    uStack_368 = (uint)puVar22;
    uStack_364 = (undefined4)((ulong)puVar22 >> 0x20);
    auStack_1a8 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_228,auStack_378);
    plVar28 = (long *)CONCAT44(uStack_364,uStack_368);
    if (plVar28 != (long *)0x0) {
      LOCK();
      plVar1 = plVar28 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        func_0x0412c2d0(plVar28);
      }
    }
    uVar12 = auStack_1a8._8_8_;
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_1a8._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_1a8._8_8_ + 0x10))(auStack_1a8._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    if ((DAT_0f75d028 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d028), iVar15 != 0)) {
      func_0x0e6a1810();
      func_0x0410844d(&DAT_0f75d028);
    }
    if (uStack_1c4 == 2) {
      piVar27 = *(int **)(*(long *)(pcStack_1d0 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_1c8) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      pcVar23 = *(code **)(piVar27 + 0xc);
      while (pcVar23 != pcStack_1d8) {
        piVar27 = *(int **)(piVar27 + 0xe);
        pcVar23 = *(code **)(piVar27 + 0xc);
      }
LAB_0e4f86ff:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 2;
    }
    else {
      if (uStack_1c4 == 1) {
        piVar27 = *(int **)(*(long *)(pcStack_1d0 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_1c8) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4f86ff;
      }
      if (uStack_1c4 == 0) {
        *(uint *)(pcStack_1d0 + 0x18) = *(uint *)(pcStack_1d0 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f75d028 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d028), iVar15 != 0)) {
      func_0x0e6a1810();
      func_0x0410844d(&DAT_0f75d028);
    }
    auStack_378._0_4_ = 0xbf75c8f8;
    auStack_378._8_8_ = 0;
    uStack_368 = 1;
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048b2190;
    uStack_350 = 0x48b06d0;
    uStack_34c = 0;
    uStack_348 = 0xe6a31a0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(&pcStack_1e0,auStack_378);
    func_0x048aea50(auStack_378);
    uStack_210 = (code *)CONCAT44(uStack_1c4,iStack_1c8);
    pcStack_218 = pcStack_1d0;
    auStack_228._8_8_ = pcStack_1d8;
    auStack_228._0_8_ = pcStack_1e0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f551cb0), iVar15 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_378._0_4_ = _DAT_0f551c9c;
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar22 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
    *puVar22 = &UNK_0ef46c98;
    puVar22[3] = puVar21;
    *(undefined1 *)(puVar22 + 4) = 0xff;
    auStack_378._8_8_ = puVar22 + 3;
    uStack_368 = (uint)puVar22;
    uStack_364 = (undefined4)((ulong)puVar22 >> 0x20);
    auStack_1a8 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_228,auStack_378);
    plVar28 = (long *)CONCAT44(uStack_364,uStack_368);
    if (plVar28 != (long *)0x0) {
      LOCK();
      plVar1 = plVar28 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        func_0x0412c2d0(plVar28);
      }
    }
    uVar12 = auStack_1a8._8_8_;
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_1a8._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_1a8._8_8_ + 0x10))(auStack_1a8._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    if ((uVar31 & 1) != 0) {
      func_0x0412a280(uStack_118,uVar34 | (byte)uVar31 & 0xfe);
    }
    if ((auStack_168[0] & 1) != 0) {
      func_0x0412a280(pcStack_158,auStack_168._0_8_ & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f75d0c0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d0c0), iVar15 != 0)) {
    func_0x0e6a3400();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75d040,0xf53dab8);
    func_0x0410844d(&DAT_0f75d0c0);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75d040 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4f8950;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f75d040 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4f8950:
    puVar17 = &DAT_0f75d040;
    if (iRam000000000f75d0a0 != -0x2b3da790) goto LAB_0e4f89bd;
LAB_0e4f897b:
    lVar20 = *(long *)(puVar17 + 0x68);
    if (lVar20 == 0) goto LAB_0e4f89bd;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e6a39c0(&puStack_1e8,param_1,lVar24,uVar31);
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e4f897b;
LAB_0e4f89bd:
    func_0x0e6a39c0(&puStack_1e8,param_1,&UNK_014c395b,0x20);
  }
  if ((char)uStack_1b8 == '\0') {
    uStack_298._4_4_ = (uint)((ulong)uStack_298 >> 0x20);
    uStack_2a8._4_4_ = (undefined4)((ulong)uStack_2a8 >> 0x20);
    if ((DAT_0f75d0e0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d0e0), iVar15 != 0)) {
      func_0x0e6a3510();
      func_0x0410844d(&DAT_0f75d0e0);
    }
    puVar17 = puStack_1e8;
    iStack_1c0 = 1;
    uStack_1bc = 0x28a5a83e;
    if ((DAT_0f75d0c0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d0c0), iVar15 != 0)) {
      func_0x0e6a3400();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75d040,0xf53dab8);
      func_0x0410844d(&DAT_0f75d0c0);
    }
    plVar28 = (long *)(*(long *)(puVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75d040 + 4)) * 8);
    do {
      lVar20 = *plVar28;
      if (lVar20 == -1) goto LAB_0e4f8a80;
      plVar28 = (long *)(*(long *)(puVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f75d040 + 4));
    if (plVar28 == *(long **)(puVar17 + 0x38)) {
LAB_0e4f8a80:
      auStack_378._0_8_ = &DAT_0f75d040;
    }
    else {
      auStack_378._0_8_ = plVar28[2];
    }
    auStack_378._8_8_ = puVar17 + 0x18;
    func_0x0ed621a0(auStack_378,uStack_1bc);
    auStack_378._0_2_ = 1;
    auStack_378._8_8_ = &pcStack_1e0;
    uStack_368 = uStack_1bc;
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)0x0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0x65646914;
    uStack_334 = 0x6669746e;
    uStack_330 = 0x69;
    uStack_32f = 0x7265;
    uStack_32d = 0;
    lStack_320 = 0;
    bStack_318 = 0;
    uStack_317 = 0;
    lStack_310 = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    uStack_2f0 = 0x3f600000;
    func_0x048afb10(&lStack_320,8);
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    lStack_2c0 = 0;
    lStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2ce = 0;
    uStack_2cc = 0;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    uStack_2b8 = 0xff00;
    uStack_2b4 = uStack_2b4 & 0xffffff00;
    uStack_2b0 = uStack_2b0 & 0xffffff00;
    uStack_2ac = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4c5e20;
    plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_360 = (int)puVar21;
    iStack_35c = (int)((ulong)puVar21 >> 0x20);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)((ulong)uStack_298._4_4_ << 0x20);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe6a4750;
    uStack_27c = 0;
    cStack_278 = -0x30;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e6a4810;
    auStack_270._0_8_ = &UNK_0e6a1640;
    auStack_260._0_12_ = ZEXT812(0xe6a49d0);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    uVar12 = auStack_378._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550a20), iVar15 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,_DAT_0f550a0c);
    pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (pcVar23 == (code *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    pcVar2 = pcStack_358;
    *(undefined1 (*) [16])(pcVar23 + 8) = (undefined1  [16])0x0;
    *(undefined **)pcVar23 = &UNK_0ef439d0;
    pcStack_2a0 = pcVar23 + 0x18;
    lVar20 = CONCAT44(iStack_35c,iStack_360);
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)0x0;
    *(long *)(pcVar23 + 0x18) = lVar20;
    *(code **)(pcVar23 + 0x20) = pcVar2;
    *(long *)(pcVar23 + 0x38) = CONCAT71(uStack_33f,uStack_340);
    *(long *)(pcVar23 + 0x28) = CONCAT44(uStack_34c,uStack_350);
    *(long *)(pcVar23 + 0x30) =
         CONCAT26(uStack_342,CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)));
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    *(long **)(pcVar23 + 0x50) = plStack_328;
    *(long *)(pcVar23 + 0x40) = CONCAT44(uStack_334,uStack_338);
    *(long *)(pcVar23 + 0x48) =
         CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    *(long *)(pcVar23 + 0x58) = lStack_320;
    *(long *)(pcVar23 + 0x60) = CONCAT71(uStack_317,bStack_318);
    *(long *)(pcVar23 + 0x68) = lStack_310;
    lStack_320 = 0;
    bStack_318 = 0;
    uStack_317 = 0;
    lStack_310 = 0;
    *(long *)(pcVar23 + 0x70) = CONCAT44(uStack_304,uStack_308);
    *(long *)(pcVar23 + 0x78) = lStack_300;
    *(long *)(pcVar23 + 0x80) = lStack_2f8;
    uStack_308 = 0;
    uStack_304 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    *(undefined4 *)(pcVar23 + 0x88) = uStack_2f0;
    *(long *)(pcVar23 + 0x90) = lStack_2e8;
    *(long *)(pcVar23 + 0x98) = lStack_2e0;
    *(long *)(pcVar23 + 0xa0) = lStack_2d8;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    *(long *)(pcVar23 + 0xb8) = lStack_2c0;
    *(long *)(pcVar23 + 0xa8) = CONCAT44(uStack_2cc,CONCAT22(uStack_2ce,uStack_2d0));
    *(long *)(pcVar23 + 0xb0) = CONCAT44(uStack_2c4,uStack_2c8);
    uStack_2d0 = 0;
    uStack_2ce = 0;
    uStack_2cc = 0;
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    lStack_2c0 = 0;
    *(ulong *)(pcVar23 + 0xc5) = CONCAT17(uStack_2ac,CONCAT43(uStack_2b0,uStack_2b4._1_3_));
    *(long *)(pcVar23 + 0xc0) = CONCAT44(uStack_2b4,CONCAT22(uStack_2b6,uStack_2b8));
    auStack_228 = (undefined1  [16])0x0;
    uStack_298 = pcVar23;
    func_0x048afd20(uVar12,&uStack_2a8);
    pcVar23 = uStack_298;
    if (uStack_298 != (code *)0x0) {
      LOCK();
      pcVar2 = uStack_298 + 8;
      lVar20 = *(long *)pcVar2;
      *(long *)pcVar2 = *(long *)pcVar2 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)uStack_298 + 0x10))(uStack_298);
        func_0x0412c2d0(pcVar23);
      }
    }
    uVar25 = auStack_228._8_8_;
    if ((long *)auStack_228._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_228._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_228._8_8_ + 0x10))(auStack_228._8_8_);
        func_0x0412c2d0(uVar25);
      }
    }
    lVar20 = *(long *)(uVar12 + 0x10);
    iVar15 = *(int *)(uVar12 + 0x1c);
    if (iVar15 == 2) {
      piVar27 = *(int **)(*(long *)(lVar20 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != *(int *)(uVar12 + 0x18)) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      for (; *(long *)(piVar27 + 0xc) != *(long *)(uVar12 + 8); piVar27 = *(int **)(piVar27 + 0xe))
      {
      }
LAB_0e4f8faa:
      piVar27[4] = piVar27[4] | auStack_378._0_4_ << 0x10;
    }
    else {
      if (iVar15 == 1) {
        piVar27 = *(int **)(*(long *)(lVar20 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != *(int *)(uVar12 + 0x18)) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4f8faa;
      }
      if (iVar15 == 0) {
        *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | auStack_378._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_360);
  }
  if ((DAT_0f755030 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755030), iVar15 != 0)) {
    func_0x0e520b00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f754fb0,0xf53dab8);
    func_0x0410844d(&DAT_0f755030);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f754fb0 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4f9010;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f754fb0 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4f9010:
    puVar17 = &DAT_0f754fb0;
    if (iRam000000000f755010 != -0x2b3da790) goto LAB_0e4f907d;
LAB_0e4f903b:
    lVar20 = *(long *)(puVar17 + 0x68);
    if (lVar20 == 0) goto LAB_0e4f907d;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e5202f0(&puStack_1e8,param_1,lVar24,uVar31);
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e4f903b;
LAB_0e4f907d:
    func_0x0e5202f0(&puStack_1e8,param_1,&UNK_0129f379,0xb);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0e524050(auStack_378,&UNK_013719e7,0x1c);
    bVar36 = (uStack_350 & 1) == 0;
    lVar20 = (long)&uStack_350 + 1;
    lVar24 = CONCAT71(uStack_33f,uStack_340);
    if (bVar36) {
      lVar24 = lVar20;
    }
    uVar31 = (ulong)((byte)uStack_350 >> 1);
    if (!bVar36) {
      uVar31 = CONCAT26(uStack_342,CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)));
    }
    if (uVar31 == 0) {
      uStack_1bc = 0x811c9dc5;
    }
    else {
      uVar34 = (ulong)((uint)uVar31 & 3);
      if (uVar31 < 4) {
        uStack_1bc = 0x811c9dc5;
        uVar32 = 0;
      }
      else {
        uStack_1bc = 0x811c9dc5;
        uVar32 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar24 + 3 + uVar32) ^
                       ((int)*(char *)(lVar24 + 2 + uVar32) ^
                       ((int)*(char *)(lVar24 + 1 + uVar32) ^
                       ((int)*(char *)(lVar24 + uVar32) ^ uStack_1bc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar32 = uVar32 + 4;
        } while ((uVar31 & 0xfffffffffffffffc) != uVar32);
      }
      if (uVar34 != 0) {
        uVar31 = 0;
        do {
          uStack_1bc = ((int)*(char *)(lVar24 + uVar32 + uVar31) ^ uStack_1bc) * 0x1000193;
          uVar31 = uVar31 + 1;
        } while (uVar34 != uVar31);
      }
    }
    iStack_1c0 = 2;
    if ((DAT_0f755050 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755050), iVar15 != 0)) {
      func_0x0e520c10();
      func_0x0410844d(&DAT_0f755050);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_1bc);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)CONCAT44(uStack_298._4_4_,3);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe524900;
    uStack_27c = 0;
    cStack_278 = 0xd0;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e5249c0;
    auStack_270._0_8_ = &UNK_0e520a40;
    auStack_260._0_12_ = ZEXT812(0xe5249d0);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_1e0,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar24 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    pcStack_218 = pcStack_1d0;
    auStack_228._8_8_ = pcStack_1d8;
    auStack_228._0_8_ = pcStack_1e0;
    func_0x0e524390(&uStack_2a8,auStack_228,auStack_378);
    if (iStack_28c == 2) {
      piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_290) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar24 = *(long *)(piVar27 + 0xc);
      while ((code *)lVar24 != pcStack_2a0) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar24 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4f931f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 9;
    }
    else {
      if (iStack_28c == 1) {
        piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_290) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4f931f;
      }
      if (iStack_28c == 0) {
        *(uint *)((long)uStack_298 + 0x18) = *(uint *)((long)uStack_298 + 0x18) | 0x90000;
      }
    }
    lVar24 = func_0x0e524600(&puStack_1e8);
    uStack_2a8 = (undefined *)((ulong)uStack_2a8 & 0xffffffffffffff00);
    func_0x05d9c620(lVar24 + 8,&uStack_1bc,&uStack_1bc,&uStack_2a8);
    auStack_1a8._8_8_ = pcStack_1e0;
    auStack_1a8._0_8_ = puStack_1e8;
    pcStack_198 = pcStack_1d8;
    pcStack_190 = pcStack_1d0;
    iStack_188 = iStack_1c8;
    uStack_184 = uStack_1c4;
    iStack_180 = iStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    func_0x048b0bc0(auStack_378);
    func_0x0e524050(auStack_378,&UNK_0148f996,0x1d);
    bVar36 = (uStack_350 & 1) == 0;
    lVar24 = CONCAT71(uStack_33f,uStack_340);
    if (bVar36) {
      lVar24 = lVar20;
    }
    uVar31 = (ulong)((byte)uStack_350 >> 1);
    if (!bVar36) {
      uVar31 = CONCAT26(uStack_342,CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)));
    }
    if (uVar31 == 0) {
      uStack_17c = 0x811c9dc5;
    }
    else {
      uVar34 = (ulong)((uint)uVar31 & 3);
      if (uVar31 < 4) {
        uStack_17c = 0x811c9dc5;
        uVar32 = 0;
      }
      else {
        uStack_17c = 0x811c9dc5;
        uVar32 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar24 + 3 + uVar32) ^
                       ((int)*(char *)(lVar24 + 2 + uVar32) ^
                       ((int)*(char *)(lVar24 + 1 + uVar32) ^
                       ((int)*(char *)(lVar24 + uVar32) ^ uStack_17c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar32 = uVar32 + 4;
        } while ((uVar31 & 0xfffffffffffffffc) != uVar32);
      }
      if (uVar34 != 0) {
        uVar31 = 0;
        do {
          uStack_17c = ((int)*(char *)(lVar24 + uVar32 + uVar31) ^ uStack_17c) * 0x1000193;
          uVar31 = uVar31 + 1;
        } while (uVar34 != uVar31);
      }
    }
    iStack_180 = 2;
    if ((DAT_0f755050 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755050), iVar15 != 0)) {
      func_0x0e520c10();
      func_0x0410844d(&DAT_0f755050);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_17c);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)CONCAT44(uStack_298._4_4_,3);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe524900;
    uStack_27c = 0;
    cStack_278 = 0xd0;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e524a20;
    auStack_270._0_8_ = &UNK_0e520a40;
    auStack_260._0_12_ = ZEXT812(0xe524a30);
    auStack_250 = ZEXT816(0);
    func_0x048b05a0(auStack_1a8 + 8,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar24 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    pcStack_218 = pcStack_190;
    auStack_228._0_8_ = auStack_1a8._8_8_;
    auStack_228._8_8_ = pcStack_198;
    func_0x0e524390(&uStack_2a8,auStack_228,auStack_378);
    if (iStack_28c == 2) {
      piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_290) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar24 = *(long *)(piVar27 + 0xc);
      while ((code *)lVar24 != pcStack_2a0) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar24 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4f965f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 9;
    }
    else {
      if (iStack_28c == 1) {
        piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_290) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4f965f;
      }
      if (iStack_28c == 0) {
        *(uint *)((long)uStack_298 + 0x18) = *(uint *)((long)uStack_298 + 0x18) | 0x90000;
      }
    }
    lVar24 = func_0x0e524600(auStack_1a8);
    uStack_2a8 = (undefined *)((ulong)uStack_2a8 & 0xffffffffffffff00);
    func_0x05d9c620(lVar24 + 8,&uStack_17c,&uStack_17c,&uStack_2a8);
    auStack_228 = auStack_1a8;
    pcStack_218 = pcStack_198;
    uStack_210 = pcStack_190;
    iStack_208 = iStack_188;
    uStack_204 = uStack_184;
    iStack_200 = iStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    func_0x048b0bc0(auStack_378);
    func_0x0e524050(auStack_378,&UNK_0129f385,0x1e);
    bVar36 = (uStack_350 & 1) != 0;
    if (bVar36) {
      lVar20 = CONCAT71(uStack_33f,uStack_340);
    }
    uVar31 = (ulong)((byte)uStack_350 >> 1);
    if (bVar36) {
      uVar31 = CONCAT26(uStack_342,CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)));
    }
    if (uVar31 == 0) {
      uStack_1fc = 0x811c9dc5;
    }
    else {
      uVar34 = (ulong)((uint)uVar31 & 3);
      if (uVar31 < 4) {
        uStack_1fc = 0x811c9dc5;
        uVar32 = 0;
      }
      else {
        uStack_1fc = 0x811c9dc5;
        uVar32 = 0;
        do {
          uStack_1fc = ((int)*(char *)(lVar20 + 3 + uVar32) ^
                       ((int)*(char *)(lVar20 + 2 + uVar32) ^
                       ((int)*(char *)(lVar20 + 1 + uVar32) ^
                       ((int)*(char *)(lVar20 + uVar32) ^ uStack_1fc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar32 = uVar32 + 4;
        } while ((uVar31 & 0xfffffffffffffffc) != uVar32);
      }
      if (uVar34 != 0) {
        uVar31 = 0;
        do {
          uStack_1fc = ((int)*(char *)(lVar20 + uVar32 + uVar31) ^ uStack_1fc) * 0x1000193;
          uVar31 = uVar31 + 1;
        } while (uVar34 != uVar31);
      }
    }
    iStack_200 = 2;
    if ((DAT_0f755050 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755050), iVar15 != 0)) {
      func_0x0e520c10();
      func_0x0410844d(&DAT_0f755050);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_1fc);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)CONCAT44(uStack_298._4_4_,3);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe524900;
    uStack_27c = 0;
    cStack_278 = -0x30;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e524a80;
    auStack_270._0_8_ = &UNK_0e520a40;
    auStack_260._0_12_ = ZEXT812(0xe524a90);
    auStack_250 = ZEXT816(0);
    func_0x048b05a0(auStack_228 + 8,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    pcStack_150 = (code *)CONCAT44(uStack_204,iStack_208);
    pcStack_158 = uStack_210;
    auStack_168._8_8_ = pcStack_218;
    auStack_168._0_8_ = auStack_228._8_8_;
    func_0x0e524390(&uStack_2a8,auStack_168,auStack_378);
    if (iStack_28c == 2) {
      piVar27 = *(int **)(*(long *)(uStack_298 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_290) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      pcVar23 = *(code **)(piVar27 + 0xc);
      while (pcVar23 != pcStack_2a0) {
        piVar27 = *(int **)(piVar27 + 0xe);
        pcVar23 = *(code **)(piVar27 + 0xc);
      }
LAB_0e4f999f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 9;
    }
    else {
      if (iStack_28c == 1) {
        piVar27 = *(int **)(*(long *)(uStack_298 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_290) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4f999f;
      }
      if (iStack_28c == 0) {
        *(uint *)(uStack_298 + 0x18) = *(uint *)(uStack_298 + 0x18) | 0x90000;
      }
    }
    lVar20 = func_0x0e524600(auStack_228);
    uStack_2a8 = (undefined *)((ulong)uStack_2a8 & 0xffffffffffffff00);
    func_0x05d9c620(lVar20 + 8,&uStack_1fc,&uStack_1fc,&uStack_2a8);
    func_0x048b0bc0(auStack_378);
  }
  if ((DAT_0f7550e8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7550e8), iVar15 != 0)) {
    func_0x0e524ba0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755068,0xf53dab8);
    func_0x0410844d(&DAT_0f7550e8);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755068 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4f9a40;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f755068 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4f9a40:
    puVar17 = &DAT_0f755068;
    if (iRam000000000f7550c8 != -0x2b3da790) goto LAB_0e4f9aad;
LAB_0e4f9a6b:
    lVar20 = *(long *)(puVar17 + 0x68);
    if (lVar20 == 0) goto LAB_0e4f9aad;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e524fc0(&puStack_1e8,param_1,lVar24,uVar31);
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e4f9a6b;
LAB_0e4f9aad:
    func_0x0e524fc0(&puStack_1e8,param_1,&UNK_0147395a,0x10);
  }
  if ((char)uStack_1b8 == '\0') {
    iStack_1c0 = 2;
    uStack_1bc = 0x24c808b0;
    bStack_318 = 0;
    uStack_317 = 0;
    lStack_310 = 0;
    plStack_328 = (long *)0x0;
    lStack_320 = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    pcStack_358 = (code *)0x0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    iStack_360 = 0;
    iStack_35c = 0;
    auStack_378 = (undefined1  [16])0x0;
    uStack_308 = 0x3f600000;
    func_0x048afb10(&uStack_338,8);
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    lStack_2e8 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    uStack_2d0 = 0xff00;
    uStack_2cc = uStack_2cc & 0xffffff00;
    uStack_2c8 = uStack_2c8 & 0xffffff00;
    uStack_2c4 = uStack_2c4 & 0xffffff00;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4bd060;
    uVar12 = auStack_378._0_8_;
    auStack_378._0_8_ = puVar21;
    if ((long *)uVar12 != (long *)0x0) {
      (**(code **)(*(long *)uVar12 + 8))();
    }
    if ((uStack_350 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_33f,uStack_340),
                      CONCAT44(uStack_34c,uStack_350) & 0xfffffffffffffffe);
    }
    uStack_350 = 0x656c6518;
    uStack_34c = 0x746e656d;
    uStack_348 = 0x7079745f;
    uStack_344 = 0x65;
    uStack_343 = 0;
    if ((DAT_0f755108 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755108), iVar15 != 0)) {
      func_0x0e524cb0();
      func_0x0410844d(&DAT_0f755108);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_1bc);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)CONCAT44(uStack_298._4_4_,3);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe524900;
    uStack_27c = 0;
    cStack_278 = -0x30;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e525ad0;
    auStack_270._0_8_ = &UNK_0e520a40;
    auStack_260._0_12_ = ZEXT812(0xe525ae0);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_1e0,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    uStack_210 = (code *)CONCAT44(uStack_1c4,iStack_1c8);
    pcStack_218 = pcStack_1d0;
    auStack_228._8_8_ = pcStack_1d8;
    auStack_228._0_8_ = pcStack_1e0;
    if ((DAT_0f550a20 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550a20), iVar15 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,_DAT_0f550a0c);
    pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (pcVar23 == (code *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(pcVar23 + 8) = (undefined1  [16])0x0;
    *(undefined **)pcVar23 = &UNK_0ef439d0;
    pcStack_2a0 = pcVar23 + 0x18;
    uVar12 = auStack_378._0_8_;
    uVar25 = auStack_378._8_8_;
    auStack_378 = (undefined1  [16])0x0;
    *(undefined8 *)(pcVar23 + 0x18) = uVar12;
    *(undefined8 *)(pcVar23 + 0x20) = uVar25;
    *(code **)(pcVar23 + 0x38) = pcStack_358;
    *(long *)(pcVar23 + 0x28) = CONCAT44(uStack_364,uStack_368);
    *(long *)(pcVar23 + 0x30) = CONCAT44(iStack_35c,iStack_360);
    uStack_368 = 0;
    uStack_364 = 0;
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)0x0;
    *(long *)(pcVar23 + 0x50) = CONCAT71(uStack_33f,uStack_340);
    *(long *)(pcVar23 + 0x40) = CONCAT44(uStack_34c,uStack_350);
    *(long *)(pcVar23 + 0x48) =
         CONCAT26(uStack_342,CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)));
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    *(long *)(pcVar23 + 0x58) = CONCAT44(uStack_334,uStack_338);
    *(long *)(pcVar23 + 0x60) =
         CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    *(long **)(pcVar23 + 0x68) = plStack_328;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    *(long *)(pcVar23 + 0x70) = lStack_320;
    *(long *)(pcVar23 + 0x78) = CONCAT71(uStack_317,bStack_318);
    *(long *)(pcVar23 + 0x80) = lStack_310;
    lStack_320 = 0;
    bStack_318 = 0;
    uStack_317 = 0;
    lStack_310 = 0;
    *(undefined4 *)(pcVar23 + 0x88) = uStack_308;
    *(long *)(pcVar23 + 0x90) = lStack_300;
    *(long *)(pcVar23 + 0x98) = lStack_2f8;
    *(long *)(pcVar23 + 0xa0) = CONCAT44(uStack_2ec,uStack_2f0);
    lStack_300 = 0;
    lStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    *(long *)(pcVar23 + 0xb8) = lStack_2d8;
    *(long *)(pcVar23 + 0xa8) = lStack_2e8;
    *(long *)(pcVar23 + 0xb0) = lStack_2e0;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    *(ulong *)(pcVar23 + 0xc5) =
         CONCAT17((undefined1)uStack_2c4,CONCAT43(uStack_2c8,uStack_2cc._1_3_));
    *(long *)(pcVar23 + 0xc0) = CONCAT44(uStack_2cc,CONCAT22(uStack_2ce,uStack_2d0));
    auStack_1a8 = (undefined1  [16])0x0;
    uStack_298 = pcVar23;
    func_0x048afd20(auStack_228,&uStack_2a8);
    pcVar23 = uStack_298;
    if (uStack_298 != (code *)0x0) {
      LOCK();
      pcVar2 = uStack_298 + 8;
      lVar20 = *(long *)pcVar2;
      *(long *)pcVar2 = *(long *)pcVar2 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)uStack_298 + 0x10))(uStack_298);
        func_0x0412c2d0(pcVar23);
      }
    }
    uVar12 = auStack_1a8._8_8_;
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_1a8._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_1a8._8_8_ + 0x10))(auStack_1a8._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    if (uStack_210._4_4_ == 2) {
      piVar27 = *(int **)(*(long *)(pcStack_218 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != (int)uStack_210) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      for (; *(long *)(piVar27 + 0xc) != auStack_228._8_8_; piVar27 = *(int **)(piVar27 + 0xe)) {
      }
LAB_0e4fa00a:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 9;
    }
    else {
      if (uStack_210._4_4_ == 1) {
        piVar27 = *(int **)(*(long *)(pcStack_218 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != (int)uStack_210) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fa00a;
      }
      if (uStack_210._4_4_ == 0) {
        pcStack_218[0x1a] = (code)((byte)pcStack_218[0x1a] | 9);
      }
    }
    func_0x048b0bc0(auStack_378);
  }
  uStack_2a8 = &UNK_0142faf5;
  pcStack_2a0 = (code *)0x9;
  func_0x0470d9a0(auStack_378,&UNK_01337c1c,0x10,0xd,&uStack_2a8);
  puVar29 = (undefined1 *)CONCAT44(uStack_364,uStack_368);
  uVar31 = auStack_378._8_8_;
  if ((auStack_378[0] & 1) == 0) {
    puVar29 = auStack_378 + 1;
    uVar31 = (ulong)(auStack_378[0] >> 1);
  }
  if ((DAT_0f7551a0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7551a0), iVar15 != 0)) {
    func_0x0e525bf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755120,0xf53dab8);
    func_0x0410844d(&DAT_0f7551a0);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755120 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4fa0d1;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f755120 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4fa0d1:
    puVar17 = &DAT_0f755120;
    iVar15 = iRam000000000f755180;
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    iVar15 = *(int *)(puVar17 + 0x60);
  }
  if ((iVar15 == -0x2b3da790) && (lVar20 = *(long *)(puVar17 + 0x68), lVar20 != 0)) {
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    puVar29 = (undefined1 *)(lVar20 + 9);
    if (bVar36) {
      puVar29 = *(undefined1 **)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
  }
  func_0x0e5261f0(&puStack_1e8,param_1,puVar29,uVar31);
  if ((auStack_378[0] & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_364,uStack_368),auStack_378._0_8_ & 0xfffffffffffffffe);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x04134310(&pcStack_f8,0x16);
    pauVar18 = (undefined1 (*) [16])func_0x0412f0e0(&pcStack_f8,0,&UNK_013a2d09,0xe);
    puVar17 = puStack_1e8;
    pcStack_198 = *(code **)pauVar18[1];
    auStack_1a8 = *pauVar18;
    *pauVar18 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar18[1] = 0;
    auStack_b8 = (undefined1  [16])0x0;
    pcStack_190 = (code *)CONCAT62(pcStack_190._2_6_,0x400);
    iStack_188 = 0;
    uStack_184 = 0;
    iStack_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    pcStack_a8 = (code *)0x0;
    if ((DAT_0f7551a0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7551a0), iVar15 != 0)) {
      func_0x0e525bf0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755120,0xf53dab8);
      func_0x0410844d(&DAT_0f7551a0);
    }
    plVar28 = (long *)(*(long *)(puVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755120 + 4)) * 8);
    do {
      lVar20 = *plVar28;
      if (lVar20 == -1) goto LAB_0e4fa250;
      plVar28 = (long *)(*(long *)(puVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f755120 + 4));
    if (plVar28 == *(long **)(puVar17 + 0x38)) {
LAB_0e4fa250:
      puVar35 = &DAT_0f755120;
    }
    else {
      puVar35 = (undefined *)plVar28[2];
    }
    for (pbVar19 = *(byte **)(puStack_1e8 + 0x50); pbVar19 != *(byte **)(puStack_1e8 + 0x58);
        pbVar19 = pbVar19 + 0x38) {
      bVar4 = *pbVar19;
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 == 0x1d) goto LAB_0e4fa32a;
      }
      else if (*(long *)(pbVar19 + 8) == 0x1d) {
LAB_0e4fa32a:
        if ((bVar4 & 1) == 0) {
          pbVar30 = pbVar19 + 1;
        }
        else {
          pbVar30 = *(byte **)(pbVar19 + 0x10);
        }
        auVar38[0] = -(*pbVar30 == 0x5b);
        auVar38[1] = -(pbVar30[1] == 99);
        auVar38[2] = -(pbVar30[2] == 0x65);
        auVar38[3] = -(pbVar30[3] == 0x72);
        auVar38[4] = -(pbVar30[4] == 0x65);
        auVar38[5] = -(pbVar30[5] == 0x61);
        auVar38[6] = -(pbVar30[6] == 0x6c);
        auVar38[7] = -(pbVar30[7] == 0x3a);
        auVar38[8] = -(pbVar30[8] == 0x6a);
        auVar38[9] = -(pbVar30[9] == 0x73);
        auVar38[10] = -(pbVar30[10] == 0x6f);
        auVar38[0xb] = -(pbVar30[0xb] == 0x6e);
        auVar38[0xc] = -(pbVar30[0xc] == 0x5f);
        auVar38[0xd] = -(pbVar30[0xd] == 0x73);
        auVar38[0xe] = -(pbVar30[0xe] == 99);
        auVar38[0xf] = -(pbVar30[0xf] == 0x68);
        auVar43[0] = -(pbVar30[0xd] == 0x73);
        auVar43[1] = -(pbVar30[0xe] == 99);
        auVar43[2] = -(pbVar30[0xf] == 0x68);
        auVar43[3] = -(pbVar30[0x10] == 0x65);
        auVar43[4] = -(pbVar30[0x11] == 0x6d);
        auVar43[5] = -(pbVar30[0x12] == 0x61);
        auVar43[6] = -(pbVar30[0x13] == 0x5f);
        auVar43[7] = -(pbVar30[0x14] == 0x70);
        auVar43[8] = -(pbVar30[0x15] == 0x72);
        auVar43[9] = -(pbVar30[0x16] == 0x6f);
        auVar43[10] = -(pbVar30[0x17] == 0x70);
        auVar43[0xb] = -(pbVar30[0x18] == 0x65);
        auVar43[0xc] = -(pbVar30[0x19] == 0x72);
        auVar43[0xd] = -(pbVar30[0x1a] == 0x74);
        auVar43[0xe] = -(pbVar30[0x1b] == 0x79);
        auVar43[0xf] = -(pbVar30[0x1c] == 0x5d);
        auVar43 = auVar43 & auVar38;
        if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar19 == *(byte **)(puStack_1e8 + 0x58)) {
LAB_0e4fa358:
      uVar13 = uStack_1bc;
      if (iStack_1c0 == 0) {
        if (((puVar35 == (undefined *)0x0) || (*(int *)(puVar35 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar35 + 0x68) == 0)) goto LAB_0e4fa3de;
        lVar20 = *(long *)(puVar35 + 0x68) + 0x38;
      }
      else {
        if (puVar35 == (undefined *)0x0) {
          puVar35 = (undefined *)func_0x048aead0(puVar17 + 0x18);
        }
        lVar20 = func_0x048b0c90(puVar17 + 0x18,puVar35,uVar13,1);
        if (lVar20 == 0) {
          auStack_378 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_378);
          lVar20 = auStack_378._0_8_;
          if (auStack_378._0_8_ == 0) goto LAB_0e4fa3de;
        }
        if ((*(int *)(lVar20 + 0x50) == -0x45dcb126) && (*(long *)(lVar20 + 0x58) != 0)) {
          lVar20 = *(long *)(lVar20 + 0x58) + 0x40;
        }
        else {
LAB_0e4fa3de:
          lVar20 = 0;
        }
      }
      uStack_2a8 = (undefined *)0x0;
      uStack_298 = (code *)&UNK_048b4ab0;
      iStack_288 = -0x2cc4263b;
      iStack_290 = 0x48b49f0;
      iStack_28c = 0;
      uStack_284 = CONCAT31(uStack_284._1_3_,1);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x38,0);
      }
      puVar21[2] = pcStack_198;
      *puVar21 = auStack_1a8._0_8_;
      puVar21[1] = auStack_1a8._8_8_;
      auStack_1a8 = (undefined1  [16])0x0;
      pcStack_198 = (code *)0x0;
      *(undefined2 *)(puVar21 + 3) = pcStack_190._0_2_;
      puVar21[4] = CONCAT44(uStack_184,iStack_188);
      puVar21[5] = CONCAT44(uStack_17c,iStack_180);
      iStack_180 = 0;
      uStack_17c = 0;
      puVar21[6] = CONCAT44(uStack_174,uStack_178);
      uStack_178 = 0;
      uStack_174 = 0;
      iStack_360 = 0x48b4ab0;
      iStack_35c = 0;
      pcStack_358 = (code *)&UNK_048b49f0;
      uStack_350 = 0xd33bd9c5;
      uStack_34c = CONCAT31(uStack_34c._1_3_,1);
      uStack_2a8 = (undefined *)0x0;
      auStack_378._8_8_ = puVar21;
      auStack_378._0_8_ = &UNK_048b46e0;
      pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar23 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar12 = _UNK_014d987e;
      auStack_168._8_8_ = 0x1d;
      auStack_168._0_8_ = 0x21;
      *(ulong *)(pcVar23 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcVar23 + 0x15) = uVar12;
      lVar24 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(long *)pcVar23 = _DAT_014d9869;
      *(long *)(pcVar23 + 8) = lVar24;
      pcVar23[0x1d] = (code)0x0;
      pcStack_158 = pcVar23;
      lVar20 = func_0x048b5060(lVar20,auStack_168);
      *(undefined **)(lVar20 + 0x20) = &UNK_048b46e0;
      pcVar23 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar20 + 0x20) != auStack_378) {
        puVar21 = (undefined8 *)(lVar20 + 0x28);
        if (*(code **)(lVar20 + 0x40) == (code *)0x0) {
LAB_0e4fa5ab:
          uVar12 = auStack_378._8_8_;
          auStack_378._8_8_ = 0;
          *puVar21 = uVar12;
        }
        else {
          (**(code **)(lVar20 + 0x40))(puVar21);
          if ((char)uStack_34c != '\0') {
            if ((char)uStack_34c != '\x02') goto LAB_0e4fa5ab;
            (*(code *)CONCAT44(iStack_35c,iStack_360))(5,auStack_378 + 8,puVar21);
          }
        }
        *(ulong *)(lVar20 + 0x38) = CONCAT44(iStack_35c,iStack_360);
        *(code **)(lVar20 + 0x40) = pcStack_358;
        *(uint *)(lVar20 + 0x48) = uStack_350;
        *(char *)(lVar20 + 0x4c) = (char)uStack_34c;
        pcVar23 = pcStack_358;
      }
      if ((auStack_168[0] & 1) != 0) {
        func_0x0412a280(pcStack_158,auStack_168._0_8_ & 0xfffffffffffffffe);
        pcVar23 = pcStack_358;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_378 + 8);
      }
      if ((code *)CONCAT44(iStack_28c,iStack_290) != (code *)0x0) {
        (*(code *)CONCAT44(iStack_28c,iStack_290))(&uStack_2a8);
      }
    }
    else {
      iVar15 = *(int *)(pbVar19 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar16 = func_0x04108328(&DAT_0f550768), iVar16 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar15 == _DAT_0f550754) goto LAB_0e4fa358;
    }
    iStack_208 = iStack_1c8;
    uStack_204 = uStack_1c4;
    uStack_1f8 = uStack_1b8;
    uStack_1f4 = uStack_1b4;
    pcStack_218 = pcStack_1d8;
    uStack_210 = pcStack_1d0;
    auStack_228._8_8_ = pcStack_1e0;
    auStack_228._0_8_ = puStack_1e8;
    iStack_200 = 4;
    uStack_1fc = 0x1e1bc4d5;
    if ((DAT_0f7551c0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7551c0), iVar15 != 0)) {
      func_0x0e525d00();
      func_0x0410844d(&DAT_0f7551c0);
    }
    auStack_378._0_4_ = uStack_1fc;
    auStack_378._8_8_ = 0;
    uStack_368 = 0;
    iStack_360 = 3;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048aead0;
    uStack_350 = 0xc0f6d10;
    uStack_34c = 0;
    uStack_348 = 0xe526d50;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(auStack_228 + 8,auStack_378);
    func_0x048aea50(auStack_378);
    uStack_298 = uStack_210;
    uStack_2a8 = (undefined *)auStack_228._8_8_;
    pcStack_2a0 = pcStack_218;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f551bc8), iVar15 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_378._0_4_ = _DAT_0f551bb4;
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar22 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
    *puVar22 = &UNK_0ef46c48;
    puVar22[3] = puVar21;
    puVar22[4] = 0;
    *(undefined1 *)(puVar22 + 5) = 0xff;
    auStack_378._8_8_ = puVar22 + 3;
    uStack_368 = (uint)puVar22;
    uStack_364 = (undefined4)((ulong)puVar22 >> 0x20);
    auStack_168 = (undefined1  [16])0x0;
    func_0x048afd20(&uStack_2a8,auStack_378);
    plVar28 = (long *)CONCAT44(uStack_364,uStack_368);
    if (plVar28 != (long *)0x0) {
      LOCK();
      plVar1 = plVar28 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        func_0x0412c2d0(plVar28);
      }
    }
    uVar12 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_168._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    if ((DAT_0f7551c0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7551c0), iVar15 != 0)) {
      func_0x0e525d00();
      func_0x0410844d(&DAT_0f7551c0);
    }
    if (uStack_204 == 2) {
      piVar27 = *(int **)(*(long *)(uStack_210 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_208) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      pcVar23 = *(code **)(piVar27 + 0xc);
      while (pcVar23 != pcStack_218) {
        piVar27 = *(int **)(piVar27 + 0xe);
        pcVar23 = *(code **)(piVar27 + 0xc);
      }
LAB_0e4fa8af:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 2;
    }
    else {
      if (uStack_204 == 1) {
        piVar27 = *(int **)(*(long *)(uStack_210 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_208) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fa8af;
      }
      if (uStack_204 == 0) {
        *(uint *)(uStack_210 + 0x18) = *(uint *)(uStack_210 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f7551c0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7551c0), iVar15 != 0)) {
      func_0x0e525d00();
      func_0x0410844d(&DAT_0f7551c0);
    }
    auStack_378._0_4_ = 0xbf75c8f8;
    auStack_378._8_8_ = 0;
    uStack_368 = 1;
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048b2190;
    uStack_350 = 0x48b06d0;
    uStack_34c = 0;
    uStack_348 = 0xe527710;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(auStack_228 + 8,auStack_378);
    func_0x048aea50(auStack_378);
    uStack_298 = uStack_210;
    uStack_2a8 = (undefined *)auStack_228._8_8_;
    pcStack_2a0 = pcStack_218;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f551cb0), iVar15 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_378._0_4_ = _DAT_0f551c9c;
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar22 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
    *puVar22 = &UNK_0ef46c98;
    puVar22[3] = puVar21;
    *(undefined1 *)(puVar22 + 4) = 0xff;
    auStack_378._8_8_ = puVar22 + 3;
    uStack_368 = (uint)puVar22;
    uStack_364 = (undefined4)((ulong)puVar22 >> 0x20);
    auStack_168 = (undefined1  [16])0x0;
    func_0x048afd20(&uStack_2a8,auStack_378);
    plVar28 = (long *)CONCAT44(uStack_364,uStack_368);
    if (plVar28 != (long *)0x0) {
      LOCK();
      plVar1 = plVar28 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        func_0x0412c2d0(plVar28);
      }
    }
    uVar12 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_168._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    iVar15 = iStack_200;
    uVar12 = auStack_228._0_8_;
    uStack_118 = CONCAT44(uStack_118._4_4_,uStack_1fc);
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    auStack_240 = (undefined1  [16])0x0;
    auStack_250 = (undefined1  [16])0x0;
    auStack_260 = (undefined1  [16])0x0;
    auStack_270 = (undefined1  [16])0x0;
    uStack_280 = 0;
    uStack_27c = 0;
    cStack_278 = 0;
    uStack_277 = 0;
    uStack_230 = 0;
    pcStack_2a0 = (code *)0xffffffffffffffff;
    uStack_298 = (code *)0x0;
    iStack_290 = 0xff;
    uStack_2a8 = &UNK_0f4e3c70;
    func_0x041679a0(&iStack_288);
    uVar25 = func_0x041681f0(&iStack_288,0xf547a30);
    uStack_280 = (uint)uVar25;
    uStack_27c = (uint)((ulong)uVar25 >> 0x20);
    uVar25 = func_0x041681f0(&iStack_288,0xf547770);
    cStack_278 = (char)uVar25;
    uStack_277 = (undefined7)((ulong)uVar25 >> 8);
    auStack_270 = (undefined1  [16])0x0;
    auStack_260 = (undefined1  [16])0x0;
    auStack_250 = (undefined1  [16])0x0;
    auStack_240 = (undefined1  [16])0x0;
    uStack_230 = 0;
    pcStack_2a0 = (code *)0x100;
    uStack_368 = (uint)uStack_298;
    uStack_364 = (undefined4)((ulong)uStack_298 >> 0x20);
    iStack_360 = CONCAT31(iStack_360._1_3_,(undefined1)iStack_290);
    auStack_378._8_8_ = 0x100;
    auStack_378._0_8_ = &UNK_0f4e3c70;
    func_0x04167a20(&pcStack_358,&iStack_288);
    uStack_350 = uStack_280;
    uStack_34c = uStack_27c;
    uStack_348 = (undefined4)CONCAT71(uStack_277,cStack_278);
    uStack_344 = (undefined1)((uint7)uStack_277 >> 0x18);
    uStack_343 = (undefined1)((uint7)uStack_277 >> 0x20);
    uStack_342 = (undefined2)((uint7)uStack_277 >> 0x28);
    uStack_340 = auStack_270[0];
    uStack_33f = auStack_270._1_7_;
    uStack_338 = auStack_270._8_4_;
    uStack_334 = auStack_270._12_4_;
    uStack_330 = auStack_260[0];
    uStack_32f = auStack_260._1_2_;
    uStack_32d = auStack_260[3];
    uStack_32c = auStack_260._4_4_;
    plStack_328 = (long *)auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      *(long *)(auStack_260._8_8_ + 8) = *(long *)(auStack_260._8_8_ + 8) + 1;
      UNLOCK();
    }
    lStack_320 = auStack_250._0_8_;
    if ((auStack_250[8] & 1) == 0) {
      uStack_308 = auStack_240._8_4_;
      uStack_304 = auStack_240._12_4_;
      uStack_317 = auStack_250._9_7_;
      lStack_310 = auStack_240._0_8_;
      bStack_318 = auStack_250[8];
    }
    else {
      func_0x0412e5e0(&bStack_318,auStack_240._8_8_,auStack_240._0_8_);
    }
    lStack_300 = uStack_230;
    if (iVar15 == 4) {
      if ((DAT_0f7551a0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7551a0), iVar15 != 0)) {
        func_0x0e525bf0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755120,0xf53dab8);
        func_0x0410844d(&DAT_0f7551a0);
      }
      plVar28 = (long *)(*(long *)(uVar12 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755120 + 4)) * 8);
      do {
        lVar20 = *plVar28;
        if (lVar20 == -1) goto LAB_0e4fad38;
        plVar28 = (long *)(*(long *)(uVar12 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f755120 + 4));
      if (plVar28 == *(long **)(uVar12 + 0x38)) {
LAB_0e4fad38:
        puVar17 = &DAT_0f755120;
      }
      else {
        puVar17 = (undefined *)plVar28[2];
      }
      lVar20 = func_0x048b1040(uVar12 + 0x18,puVar17,uStack_118 & 0xffffffff,1);
      if (lVar20 == 0) {
        auStack_168 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_168);
        lVar24 = *(long *)(auStack_168._0_8_ + 0x38);
        lVar20 = auStack_168._0_8_;
        if (lVar24 == 0) goto LAB_0e4fae95;
LAB_0e4faebc:
        do {
          lVar20 = lVar24;
          lVar24 = *(long *)(lVar20 + 0x38);
          if (*(long *)(lVar20 + 0x38) == 0) {
            auStack_168 = (undefined1  [16])0x0;
            func_0x048b10d0(auStack_168);
            lVar24 = auStack_168._0_8_;
          }
        } while (lVar24 != 0);
      }
      else {
        lVar24 = *(long *)(lVar20 + 0x38);
        if (*(long *)(lVar20 + 0x38) != 0) goto LAB_0e4faebc;
LAB_0e4fae95:
        auStack_168 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_168);
        lVar24 = auStack_168._0_8_;
        if (auStack_168._0_8_ != 0) goto LAB_0e4faebc;
      }
      lVar20 = *(long *)(lVar20 + 0x48);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
LAB_0e4faf26:
      *(undefined1 *)(puVar21 + 3) = (undefined1)iStack_360;
      puVar21[1] = auStack_378._8_8_;
      puVar21[2] = CONCAT44(uStack_364,uStack_368);
      *puVar21 = &UNK_0f4e3c70;
      func_0x04167a20(puVar21 + 4,&pcStack_358);
      puVar21[5] = CONCAT44(uStack_34c,uStack_350);
      puVar21[6] = CONCAT26(uStack_342,CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)));
      puVar21[7] = CONCAT71(uStack_33f,uStack_340);
      puVar21[8] = CONCAT44(uStack_334,uStack_338);
      puVar21[9] = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
      puVar21[10] = plStack_328;
      uStack_330 = 0;
      uStack_32f = 0;
      uStack_32d = 0;
      uStack_32c = 0;
      plStack_328 = (long *)0x0;
      puVar21[0xb] = lStack_320;
      puVar21[0xe] = CONCAT44(uStack_304,uStack_308);
      puVar21[0xc] = CONCAT71(uStack_317,bStack_318);
      puVar21[0xd] = lStack_310;
      bStack_318 = 0;
      uStack_317 = 0;
      lStack_310 = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      puVar21[0xf] = lStack_300;
      plVar28 = *(long **)(lVar20 + 8);
      *(undefined8 **)(lVar20 + 8) = puVar21;
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x28))();
      }
    }
    else if (iVar15 == 1) {
      if ((DAT_0f7551a0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7551a0), iVar15 != 0)) {
        func_0x0e525bf0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f755120,0xf53dab8);
        func_0x0410844d(&DAT_0f7551a0);
      }
      plVar28 = (long *)(*(long *)(uVar12 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f755120 + 4)) * 8);
      do {
        lVar20 = *plVar28;
        if (lVar20 == -1) goto LAB_0e4facb8;
        plVar28 = (long *)(*(long *)(uVar12 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f755120 + 4));
      if (plVar28 == *(long **)(uVar12 + 0x38)) {
LAB_0e4facb8:
        puVar17 = &DAT_0f755120;
      }
      else {
        puVar17 = (undefined *)plVar28[2];
      }
      lVar20 = func_0x048b0c90(uVar12 + 0x18,puVar17,uStack_118 & 0xffffffff,1);
      if (lVar20 == 0) {
        auStack_168 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_168);
        lVar20 = auStack_168._0_8_;
      }
      lVar20 = *(long *)(lVar20 + 0x58);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      goto LAB_0e4faf26;
    }
    auStack_378._0_8_ = &UNK_0f4e3c70;
    if ((bStack_318 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                      CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
    }
    plVar28 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_328 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        func_0x0412c2d0(plVar28);
      }
    }
    func_0x04167a40(&pcStack_358);
    uStack_2a8 = &UNK_0f4e3c70;
    if ((auStack_250[8] & 1) != 0) {
      func_0x0412a280(auStack_240._8_8_,auStack_250._8_8_ & 0xfffffffffffffffe);
    }
    uVar12 = auStack_260._8_8_;
    if ((long *)auStack_260._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_260._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    func_0x04167a40(&iStack_288);
    if ((uStack_174 & 0x800000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT44(uStack_174,uStack_178) & 0xff00ffffffffffff) - 8);
    }
    uStack_178 = 0;
    uStack_174 = 0;
    if ((uStack_17c & 0x800000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT44(uStack_17c,iStack_180) & 0xff00ffffffffffff) - 8);
    }
    iStack_180 = 0;
    uStack_17c = 0;
    if ((auStack_1a8[0] & 1) != 0) {
      func_0x0412a280(pcStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
    }
    if (((ulong)pcStack_a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pcStack_a8 = (code *)0x0;
    if ((auStack_b8._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_b8._8_8_ & 0xff00ffffffffffff) - 8)
      ;
    }
    if (((ulong)pcStack_f8 & 1) != 0) {
      func_0x0412a280(pcStack_e8,(ulong)pcStack_f8 & 0xfffffffffffffffe);
    }
  }
  puStack_1e8 = &UNK_01250be5;
  pcStack_1e0 = (code *)0x13;
  func_0x0470d9a0(auStack_378,&UNK_01384326,0xc,0xd,&puStack_1e8);
  puVar29 = (undefined1 *)CONCAT44(uStack_364,uStack_368);
  uVar31 = auStack_378._8_8_;
  if ((auStack_378[0] & 1) == 0) {
    puVar29 = auStack_378 + 1;
    uVar31 = (ulong)(auStack_378[0] >> 1);
  }
  if ((DAT_0f755258 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755258), iVar15 != 0)) {
    func_0x0e527970();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7551d8,0xf53dab8);
    func_0x0410844d(&DAT_0f755258);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7551d8 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4fb251;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f7551d8 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4fb251:
    puVar17 = &DAT_0f7551d8;
    iVar15 = iRam000000000f755238;
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    iVar15 = *(int *)(puVar17 + 0x60);
  }
  if ((iVar15 == -0x2b3da790) && (lVar20 = *(long *)(puVar17 + 0x68), lVar20 != 0)) {
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    puVar29 = (undefined1 *)(lVar20 + 9);
    if (bVar36) {
      puVar29 = *(undefined1 **)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
  }
  func_0x0e527f70(&uStack_2a8,param_1,puVar29,uVar31);
  if ((auStack_378[0] & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_364,uStack_368),auStack_378._0_8_ & 0xfffffffffffffffe);
  }
  if (cStack_278 == '\0') {
    func_0x04134310(&pcStack_f8,0xc);
    pauVar18 = (undefined1 (*) [16])func_0x0412f0e0(&pcStack_f8,0,&UNK_013a12ea,10);
    puVar17 = uStack_2a8;
    uStack_78 = *(undefined8 *)*pauVar18;
    uStack_70 = *(undefined8 *)(*pauVar18 + 8);
    uVar31 = *(ulong *)*pauVar18;
    uStack_118 = *(ulong *)pauVar18[1];
    *pauVar18 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar18[1] = 0;
    if ((DAT_0f755258 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755258), iVar15 != 0)) {
      func_0x0e527970();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7551d8,0xf53dab8);
      func_0x0410844d(&DAT_0f755258);
    }
    uVar34 = uVar31 & 0xffffffffffffff00;
    plVar28 = (long *)(*(long *)(puVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7551d8 + 4)) * 8);
    do {
      lVar20 = *plVar28;
      if (lVar20 == -1) goto LAB_0e4fb3a0;
      plVar28 = (long *)(*(long *)(puVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f7551d8 + 4));
    if (plVar28 == *(long **)(puVar17 + 0x38)) {
LAB_0e4fb3a0:
      puVar35 = &DAT_0f7551d8;
    }
    else {
      puVar35 = (undefined *)plVar28[2];
    }
    for (pbVar19 = *(byte **)(uStack_2a8 + 0x50); pbVar19 != *(byte **)(uStack_2a8 + 0x58);
        pbVar19 = pbVar19 + 0x38) {
      bVar4 = *pbVar19;
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 == 0x1d) goto LAB_0e4fb47a;
      }
      else if (*(long *)(pbVar19 + 8) == 0x1d) {
LAB_0e4fb47a:
        if ((bVar4 & 1) == 0) {
          pbVar30 = pbVar19 + 1;
        }
        else {
          pbVar30 = *(byte **)(pbVar19 + 0x10);
        }
        auVar39[0] = -(*pbVar30 == 0x5b);
        auVar39[1] = -(pbVar30[1] == 99);
        auVar39[2] = -(pbVar30[2] == 0x65);
        auVar39[3] = -(pbVar30[3] == 0x72);
        auVar39[4] = -(pbVar30[4] == 0x65);
        auVar39[5] = -(pbVar30[5] == 0x61);
        auVar39[6] = -(pbVar30[6] == 0x6c);
        auVar39[7] = -(pbVar30[7] == 0x3a);
        auVar39[8] = -(pbVar30[8] == 0x6a);
        auVar39[9] = -(pbVar30[9] == 0x73);
        auVar39[10] = -(pbVar30[10] == 0x6f);
        auVar39[0xb] = -(pbVar30[0xb] == 0x6e);
        auVar39[0xc] = -(pbVar30[0xc] == 0x5f);
        auVar39[0xd] = -(pbVar30[0xd] == 0x73);
        auVar39[0xe] = -(pbVar30[0xe] == 99);
        auVar39[0xf] = -(pbVar30[0xf] == 0x68);
        auVar44[0] = -(pbVar30[0xd] == 0x73);
        auVar44[1] = -(pbVar30[0xe] == 99);
        auVar44[2] = -(pbVar30[0xf] == 0x68);
        auVar44[3] = -(pbVar30[0x10] == 0x65);
        auVar44[4] = -(pbVar30[0x11] == 0x6d);
        auVar44[5] = -(pbVar30[0x12] == 0x61);
        auVar44[6] = -(pbVar30[0x13] == 0x5f);
        auVar44[7] = -(pbVar30[0x14] == 0x70);
        auVar44[8] = -(pbVar30[0x15] == 0x72);
        auVar44[9] = -(pbVar30[0x16] == 0x6f);
        auVar44[10] = -(pbVar30[0x17] == 0x70);
        auVar44[0xb] = -(pbVar30[0x18] == 0x65);
        auVar44[0xc] = -(pbVar30[0x19] == 0x72);
        auVar44[0xd] = -(pbVar30[0x1a] == 0x74);
        auVar44[0xe] = -(pbVar30[0x1b] == 0x79);
        auVar44[0xf] = -(pbVar30[0x1c] == 0x5d);
        auVar44 = auVar44 & auVar39;
        if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar19 == *(byte **)(uStack_2a8 + 0x58)) {
LAB_0e4fb4a8:
      uVar13 = uStack_27c;
      if (uStack_280 == 0) {
        if (((puVar35 == (undefined *)0x0) || (*(int *)(puVar35 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar35 + 0x68) == 0)) goto LAB_0e4fb52e;
        lVar20 = *(long *)(puVar35 + 0x68) + 0x38;
      }
      else {
        if (puVar35 == (undefined *)0x0) {
          puVar35 = (undefined *)func_0x048aead0(puVar17 + 0x18);
        }
        lVar20 = func_0x048b0c90(puVar17 + 0x18,puVar35,uVar13,1);
        if (lVar20 == 0) {
          auStack_378 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_378);
          lVar20 = auStack_378._0_8_;
          if (auStack_378._0_8_ == 0) goto LAB_0e4fb52e;
        }
        if ((*(int *)(lVar20 + 0x50) == -0x45dcb126) && (*(long *)(lVar20 + 0x58) != 0)) {
          lVar20 = *(long *)(lVar20 + 0x58) + 0x40;
        }
        else {
LAB_0e4fb52e:
          lVar20 = 0;
        }
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auStack_1a8._8_8_;
      auStack_1a8 = auVar7 << 0x40;
      pcStack_198 = (code *)&UNK_048b4ab0;
      iStack_188 = -0x2cc4263b;
      pcStack_190 = (code *)&UNK_048b49f0;
      uStack_184 = CONCAT31(uStack_184._1_3_,1);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x38,0);
      }
      *puVar21 = uStack_78;
      puVar21[1] = uStack_70;
      puVar21[2] = uStack_118;
      *(undefined2 *)(puVar21 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar21 + 4) = (undefined1  [16])0x0;
      puVar21[6] = 0;
      iStack_360 = 0x48b4ab0;
      iStack_35c = 0;
      pcStack_358 = (code *)&UNK_048b49f0;
      uStack_350 = 0xd33bd9c5;
      uStack_34c = CONCAT31(uStack_34c._1_3_,1);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auStack_1a8._8_8_;
      auStack_1a8 = auVar8 << 0x40;
      auStack_378._8_8_ = puVar21;
      auStack_378._0_8_ = &UNK_048b46e0;
      pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar23 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar12 = _UNK_014d987e;
      auStack_168._8_8_ = 0x1d;
      auStack_168._0_8_ = 0x21;
      *(ulong *)(pcVar23 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcVar23 + 0x15) = uVar12;
      lVar24 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(long *)pcVar23 = _DAT_014d9869;
      *(long *)(pcVar23 + 8) = lVar24;
      pcVar23[0x1d] = (code)0x0;
      pcStack_158 = pcVar23;
      lVar20 = func_0x048b5060(lVar20,auStack_168);
      *(undefined **)(lVar20 + 0x20) = &UNK_048b46e0;
      pcVar23 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar20 + 0x20) != auStack_378) {
        puVar21 = (undefined8 *)(lVar20 + 0x28);
        if (*(code **)(lVar20 + 0x40) == (code *)0x0) {
LAB_0e4fb6b2:
          uVar12 = auStack_378._8_8_;
          auStack_378._8_8_ = 0;
          *puVar21 = uVar12;
        }
        else {
          (**(code **)(lVar20 + 0x40))(puVar21);
          if ((char)uStack_34c != '\0') {
            if ((char)uStack_34c != '\x02') goto LAB_0e4fb6b2;
            (*(code *)CONCAT44(iStack_35c,iStack_360))(5,auStack_378 + 8,puVar21);
          }
        }
        *(ulong *)(lVar20 + 0x38) = CONCAT44(iStack_35c,iStack_360);
        *(code **)(lVar20 + 0x40) = pcStack_358;
        *(uint *)(lVar20 + 0x48) = uStack_350;
        *(char *)(lVar20 + 0x4c) = (char)uStack_34c;
        pcVar23 = pcStack_358;
      }
      if ((auStack_168[0] & 1) != 0) {
        func_0x0412a280(pcStack_158,auStack_168._0_8_ & 0xfffffffffffffffe);
        pcVar23 = pcStack_358;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_378 + 8);
      }
      if (pcStack_190 != (code *)0x0) {
        (*pcStack_190)(auStack_1a8);
      }
      uStack_118 = 0;
      uVar34 = 0;
      uVar31 = 0;
    }
    else {
      iVar15 = *(int *)(pbVar19 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar16 = func_0x04108328(&DAT_0f550768), iVar16 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar15 == _DAT_0f550754) goto LAB_0e4fb4a8;
    }
    uStack_210 = (code *)CONCAT44(iStack_28c,iStack_290);
    iStack_208 = iStack_288;
    uStack_204 = uStack_284;
    uStack_1f8 = (undefined4)CONCAT71(uStack_277,cStack_278);
    uStack_1f4 = (undefined4)((uint7)uStack_277 >> 0x18);
    pcStack_218 = uStack_298;
    auStack_228._8_8_ = pcStack_2a0;
    auStack_228._0_8_ = uStack_2a8;
    iStack_200 = 4;
    uStack_1fc = 0x1e1bc4d5;
    if ((DAT_0f755278 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755278), iVar15 != 0)) {
      func_0x0e527a80();
      func_0x0410844d(&DAT_0f755278);
    }
    auStack_378._0_4_ = uStack_1fc;
    auStack_378._8_8_ = 0;
    uStack_368 = 0;
    iStack_360 = 3;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048aead0;
    uStack_350 = 0xc0f6d10;
    uStack_34c = 0;
    uStack_348 = 0xe528c50;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(auStack_228 + 8,auStack_378);
    func_0x048aea50(auStack_378);
    pcStack_190 = (code *)CONCAT44(uStack_204,iStack_208);
    pcStack_198 = uStack_210;
    auStack_1a8._8_8_ = pcStack_218;
    auStack_1a8._0_8_ = auStack_228._8_8_;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    auStack_168._8_8_ = 0;
    auStack_168._0_8_ = puVar21;
    pcStack_158 = (code *)CONCAT71(pcStack_158._1_7_,0xff);
    func_0x0e528ad0(auStack_378,auStack_1a8,auStack_168);
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x28))();
    }
    if ((long *)auStack_168._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._0_8_ + 8))();
    }
    if ((DAT_0f755278 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755278), iVar15 != 0)) {
      func_0x0e527a80();
      func_0x0410844d(&DAT_0f755278);
    }
    if (uStack_204 == 2) {
      piVar27 = *(int **)(*(long *)(uStack_210 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_208) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      pcVar23 = *(code **)(piVar27 + 0xc);
      while (pcVar23 != pcStack_218) {
        piVar27 = *(int **)(piVar27 + 0xe);
        pcVar23 = *(code **)(piVar27 + 0xc);
      }
LAB_0e4fb92f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 2;
    }
    else {
      if (uStack_204 == 1) {
        piVar27 = *(int **)(*(long *)(uStack_210 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_208) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fb92f;
      }
      if (uStack_204 == 0) {
        *(uint *)(uStack_210 + 0x18) = *(uint *)(uStack_210 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f755278 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755278), iVar15 != 0)) {
      func_0x0e527a80();
      func_0x0410844d(&DAT_0f755278);
    }
    auStack_378._0_4_ = 0xbf75c8f8;
    auStack_378._8_8_ = 0;
    uStack_368 = 1;
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048b2190;
    uStack_350 = 0x48b06d0;
    uStack_34c = 0;
    uStack_348 = 0xe529820;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(auStack_228 + 8,auStack_378);
    func_0x048aea50(auStack_378);
    pcStack_190 = (code *)CONCAT44(uStack_204,iStack_208);
    pcStack_198 = uStack_210;
    auStack_1a8._8_8_ = pcStack_218;
    auStack_1a8._0_8_ = auStack_228._8_8_;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f551cb0), iVar15 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_378._0_4_ = _DAT_0f551c9c;
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar22 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
    *puVar22 = &UNK_0ef46c98;
    puVar22[3] = puVar21;
    *(undefined1 *)(puVar22 + 4) = 0xff;
    auStack_378._8_8_ = puVar22 + 3;
    uStack_368 = (uint)puVar22;
    uStack_364 = (undefined4)((ulong)puVar22 >> 0x20);
    auStack_168 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_1a8,auStack_378);
    plVar28 = (long *)CONCAT44(uStack_364,uStack_368);
    if (plVar28 != (long *)0x0) {
      LOCK();
      plVar1 = plVar28 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        func_0x0412c2d0(plVar28);
      }
    }
    uVar12 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_168._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    iStack_1c8 = iStack_208;
    uStack_1c4 = uStack_204;
    puStack_1e8 = (undefined *)auStack_228._0_8_;
    pcStack_1e0 = (code *)auStack_228._8_8_;
    pcStack_1d8 = pcStack_218;
    pcStack_1d0 = uStack_210;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    iStack_1c0 = 4;
    uStack_1bc = 0x1e1bc4d5;
    if ((DAT_0f755278 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755278), iVar15 != 0)) {
      func_0x0e527a80();
      func_0x0410844d(&DAT_0f755278);
    }
    auStack_378._0_4_ = uStack_1bc;
    auStack_378._8_8_ = 0;
    uStack_368 = 0;
    iStack_360 = 1;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048aead0;
    uStack_350 = 0x4905970;
    uStack_34c = 0;
    uStack_348 = 0xe5299c0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(&pcStack_1e0,auStack_378);
    func_0x048aea50(auStack_378);
    pcStack_190 = (code *)CONCAT44(uStack_1c4,iStack_1c8);
    pcStack_198 = pcStack_1d0;
    auStack_1a8._8_8_ = pcStack_1d8;
    auStack_1a8._0_8_ = pcStack_1e0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    auStack_168._8_8_ = 0;
    auStack_168._0_8_ = puVar21;
    pcStack_158 = (code *)CONCAT71(pcStack_158._1_7_,0xff);
    func_0x0e528ad0(auStack_378,auStack_1a8,auStack_168);
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x28))();
    }
    if ((long *)auStack_168._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._0_8_ + 8))();
    }
    if ((uVar31 & 1) != 0) {
      func_0x0412a280(uStack_118,uVar34 | (byte)uVar31 & 0xfe);
    }
    if (((ulong)pcStack_f8 & 1) != 0) {
      func_0x0412a280(pcStack_e8,(ulong)pcStack_f8 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f755310 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755310), iVar15 != 0)) {
    func_0x0e529d10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755290,0xf53dab8);
    func_0x0410844d(&DAT_0f755310);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755290 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4fbcf0;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f755290 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4fbcf0:
    puVar17 = &DAT_0f755290;
    if (iRam000000000f7552f0 != -0x2b3da790) goto LAB_0e4fbd5d;
LAB_0e4fbd1b:
    lVar20 = *(long *)(puVar17 + 0x68);
    if (lVar20 == 0) goto LAB_0e4fbd5d;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e52a4e0(&puStack_1e8,param_1,lVar24,uVar31);
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e4fbd1b;
LAB_0e4fbd5d:
    func_0x0e52a4e0(&puStack_1e8,param_1,&UNK_0145a6dc,0x11);
  }
  if ((char)uStack_1b8 == '\0') {
    iStack_1c0 = 2;
    uStack_1bc = 0x24c808b0;
    bStack_318 = 0;
    uStack_317 = 0;
    lStack_310 = 0;
    plStack_328 = (long *)0x0;
    lStack_320 = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    pcStack_358 = (code *)0x0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    iStack_360 = 0;
    iStack_35c = 0;
    auStack_378 = (undefined1  [16])0x0;
    uStack_308 = 0x3f600000;
    func_0x048afb10(&uStack_338,8);
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    lStack_2e8 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    uStack_2d0 = 0xff00;
    uStack_2cc = uStack_2cc & 0xffffff00;
    uStack_2c8 = uStack_2c8 & 0xffffff00;
    uStack_2c4 = uStack_2c4 & 0xffffff00;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4bd060;
    uVar12 = auStack_378._0_8_;
    auStack_378._0_8_ = puVar21;
    if ((long *)uVar12 != (long *)0x0) {
      (**(code **)(*(long *)uVar12 + 8))();
    }
    if ((uStack_350 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_33f,uStack_340),
                      CONCAT44(uStack_34c,uStack_350) & 0xfffffffffffffffe);
    }
    uStack_350 = 0x656c6518;
    uStack_34c = 0x746e656d;
    uStack_348 = 0x7079745f;
    uStack_344 = 0x65;
    uStack_343 = 0;
    if ((DAT_0f755330 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755330), iVar15 != 0)) {
      func_0x0e529e20();
      func_0x0410844d(&DAT_0f755330);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_1bc);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)CONCAT44(uStack_298._4_4_,3);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe524900;
    uStack_27c = 0;
    cStack_278 = 0xd0;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e52b300;
    auStack_270._0_8_ = &UNK_0e520a40;
    auStack_260._0_12_ = ZEXT812(0xe52b310);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_1e0,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    uStack_210 = (code *)CONCAT44(uStack_1c4,iStack_1c8);
    pcStack_218 = pcStack_1d0;
    auStack_228._8_8_ = pcStack_1d8;
    auStack_228._0_8_ = pcStack_1e0;
    func_0x0e52b090(&uStack_2a8,auStack_228,auStack_378);
    if (iStack_28c == 2) {
      piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_290) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar20 = *(long *)(piVar27 + 0xc);
      while ((code *)lVar20 != pcStack_2a0) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar20 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4fc08f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 9;
    }
    else {
      if (iStack_28c == 1) {
        piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_290) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fc08f;
      }
      if (iStack_28c == 0) {
        *(uint *)((long)uStack_298 + 0x18U) = *(uint *)((long)uStack_298 + 0x18U) | 0x90000;
      }
    }
    uStack_48 = CONCAT44(uStack_1c4,iStack_1c8);
    uStack_40 = CONCAT44(uStack_1bc,iStack_1c0);
    puStack_68 = puStack_1e8;
    pcStack_60 = pcStack_1e0;
    pcStack_58 = pcStack_1d8;
    pcStack_50 = pcStack_1d0;
    uStack_38 = (char)uStack_1b8;
    func_0x048b0bc0(auStack_378);
    auStack_b8._8_8_ = pcStack_60;
    auStack_b8._0_8_ = puStack_68;
    pcStack_a8 = pcStack_58;
    pcStack_a0 = pcStack_50;
    uStack_98 = uStack_48;
    uStack_90 = uStack_40;
    uStack_88 = CONCAT71(uStack_37,uStack_38);
    func_0x0e52b360(auStack_378,auStack_b8,&UNK_012bcda8,8,1);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4bd2c8;
    plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_360 = (int)puVar21;
    iStack_35c = (int)((ulong)puVar21 >> 0x20);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe52b910;
    uStack_27c = 0;
    cStack_278 = 0xd0;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e52b9d0;
    auStack_270._0_8_ = &UNK_0e525b30;
    auStack_260._0_12_ = ZEXT812(0xe52bb90);
    auStack_250 = ZEXT816(0);
    func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    func_0x0e52b610(auStack_378);
    uStack_c8 = (undefined1)uStack_88;
    uStack_d8 = uStack_98;
    uStack_d0 = uStack_90;
    pcStack_e8 = pcStack_a8;
    pcStack_e0 = pcStack_a0;
    pcStack_f8 = (code *)auStack_b8._0_8_;
    pcStack_f0 = (code *)auStack_b8._8_8_;
    func_0x048b0bc0(&iStack_360);
    auStack_168._8_8_ = pcStack_f0;
    auStack_168._0_8_ = pcStack_f8;
    pcStack_158 = pcStack_e8;
    pcStack_150 = pcStack_e0;
    uStack_148 = uStack_d8;
    uStack_140 = uStack_d0;
    uStack_138 = CONCAT71(uStack_c7,uStack_c8);
    func_0x0e52aad0(auStack_378,pcStack_f8 + 0x18);
    if (iStack_35c == 2) {
      piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_360) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar20 = *(long *)(piVar27 + 0xc);
      while (lVar20 != auStack_378._8_8_) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar20 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4fc3bf:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 4;
    }
    else {
      if (iStack_35c == 1) {
        piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_360) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fc3bf;
      }
      if (iStack_35c == 0) {
        puVar3 = (uint *)(CONCAT44(uStack_364,uStack_368) + 0x18);
        *puVar3 = *puVar3 | 0x40000;
      }
    }
    func_0x0e52b360(auStack_378,auStack_168,&UNK_0129f349,10,0x10);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4bd340;
    plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_360 = (int)puVar21;
    iStack_35c = (int)((ulong)puVar21 >> 0x20);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe52c230;
    uStack_27c = 0;
    cStack_278 = 0xd0;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e52c2f0;
    auStack_270._0_8_ = &UNK_0e5278b0;
    auStack_260._0_12_ = ZEXT812(0xe52c4c0);
    auStack_250 = ZEXT816(0);
    func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    func_0x0e52b610(auStack_378);
    uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_138);
    iStack_188 = (int)uStack_148;
    uStack_184 = (uint)((ulong)uStack_148 >> 0x20);
    iStack_180 = (int)uStack_140;
    uStack_17c = (uint)((ulong)uStack_140 >> 0x20);
    pcStack_198 = pcStack_158;
    pcStack_190 = pcStack_150;
    auStack_1a8 = auStack_168;
    func_0x048b0bc0(&iStack_360);
    auStack_228 = auStack_1a8;
    pcStack_218 = pcStack_198;
    uStack_210 = pcStack_190;
    iStack_208 = iStack_188;
    uStack_204 = uStack_184;
    iStack_200 = iStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    func_0x0e52aad0(auStack_378,auStack_1a8._0_8_ + 0x18);
    if (iStack_35c == 2) {
      piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_360) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar20 = *(long *)(piVar27 + 0xc);
      while (lVar20 != auStack_378._8_8_) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar20 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4fc64f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 4;
    }
    else {
      if (iStack_35c == 1) {
        piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_360) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fc64f;
      }
      if (iStack_35c == 0) {
        puVar3 = (uint *)(CONCAT44(uStack_364,uStack_368) + 0x18);
        *puVar3 = *puVar3 | 0x40000;
      }
    }
    func_0x0e52b360(auStack_378,auStack_228,&UNK_01442b5c,10,0x10);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4bcf68;
    plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_360 = (int)puVar21;
    iStack_35c = (int)((ulong)puVar21 >> 0x20);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe4b1060;
    uStack_27c = 0;
    cStack_278 = -0x30;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e52c940;
    auStack_270._0_8_ = &SUB_0e4b0a70;
    auStack_260._0_12_ = ZEXT812(0xe52caa0);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    func_0x0e52b610(auStack_378);
    func_0x048b0bc0(&iStack_360);
  }
  puStack_1e8 = &UNK_01389947;
  pcStack_1e0 = (code *)0x7;
  func_0x0470d9a0(auStack_378,&UNK_01384326,0xc,0xd,&puStack_1e8);
  bVar36 = (auStack_378[0] & 1) != 0;
  if (bVar36) {
    puStack_128 = (undefined1 *)CONCAT44(uStack_364,uStack_368);
  }
  uVar31 = (ulong)(auStack_378[0] >> 1);
  if (bVar36) {
    uVar31 = auStack_378._8_8_;
  }
  if ((DAT_0f7553c8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7553c8), iVar15 != 0)) {
    func_0x0e52cd40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755348,0xf53dab8);
    func_0x0410844d(&DAT_0f7553c8);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755348 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4fc860;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f755348 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4fc860:
    puVar17 = &DAT_0f755348;
    if (iRam000000000f7553a8 != -0x2b3da790) goto LAB_0e4fc8c6;
LAB_0e4fc88b:
    lVar20 = *(long *)(puVar17 + 0x68);
    if (lVar20 == 0) goto LAB_0e4fc8c6;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e52d340(&uStack_2a8,param_1,lVar24,uVar31);
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e4fc88b;
LAB_0e4fc8c6:
    func_0x0e52d340(&uStack_2a8,param_1,puStack_128,uVar31);
  }
  if ((auStack_378[0] & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_364,uStack_368),auStack_378._0_8_ & 0xfffffffffffffffe);
  }
  if (cStack_278 == '\0') {
    func_0x04134310(&pcStack_f8,0x18);
    pauVar18 = (undefined1 (*) [16])func_0x0412f0e0(&pcStack_f8,0,&UNK_013a12ea,10);
    puVar17 = uStack_2a8;
    uStack_118 = *(ulong *)*pauVar18;
    uStack_110 = *(ulong *)(*pauVar18 + 8);
    uVar31 = *(ulong *)*pauVar18;
    puStack_128 = *(undefined1 **)pauVar18[1];
    *pauVar18 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar18[1] = 0;
    if ((DAT_0f7553c8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7553c8), iVar15 != 0)) {
      func_0x0e52cd40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755348,0xf53dab8);
      func_0x0410844d(&DAT_0f7553c8);
    }
    uVar34 = uVar31 & 0xffffffffffffff00;
    plVar28 = (long *)(*(long *)(puVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f755348 + 4)) * 8);
    do {
      lVar20 = *plVar28;
      if (lVar20 == -1) goto LAB_0e4fc9d0;
      plVar28 = (long *)(*(long *)(puVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f755348 + 4));
    if (plVar28 == *(long **)(puVar17 + 0x38)) {
LAB_0e4fc9d0:
      puVar35 = &DAT_0f755348;
    }
    else {
      puVar35 = (undefined *)plVar28[2];
    }
    for (pbVar19 = *(byte **)(uStack_2a8 + 0x50); pbVar19 != *(byte **)(uStack_2a8 + 0x58);
        pbVar19 = pbVar19 + 0x38) {
      bVar4 = *pbVar19;
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 == 0x1d) goto LAB_0e4fcaaa;
      }
      else if (*(long *)(pbVar19 + 8) == 0x1d) {
LAB_0e4fcaaa:
        if ((bVar4 & 1) == 0) {
          pbVar30 = pbVar19 + 1;
        }
        else {
          pbVar30 = *(byte **)(pbVar19 + 0x10);
        }
        auVar40[0] = -(*pbVar30 == 0x5b);
        auVar40[1] = -(pbVar30[1] == 99);
        auVar40[2] = -(pbVar30[2] == 0x65);
        auVar40[3] = -(pbVar30[3] == 0x72);
        auVar40[4] = -(pbVar30[4] == 0x65);
        auVar40[5] = -(pbVar30[5] == 0x61);
        auVar40[6] = -(pbVar30[6] == 0x6c);
        auVar40[7] = -(pbVar30[7] == 0x3a);
        auVar40[8] = -(pbVar30[8] == 0x6a);
        auVar40[9] = -(pbVar30[9] == 0x73);
        auVar40[10] = -(pbVar30[10] == 0x6f);
        auVar40[0xb] = -(pbVar30[0xb] == 0x6e);
        auVar40[0xc] = -(pbVar30[0xc] == 0x5f);
        auVar40[0xd] = -(pbVar30[0xd] == 0x73);
        auVar40[0xe] = -(pbVar30[0xe] == 99);
        auVar40[0xf] = -(pbVar30[0xf] == 0x68);
        auVar45[0] = -(pbVar30[0xd] == 0x73);
        auVar45[1] = -(pbVar30[0xe] == 99);
        auVar45[2] = -(pbVar30[0xf] == 0x68);
        auVar45[3] = -(pbVar30[0x10] == 0x65);
        auVar45[4] = -(pbVar30[0x11] == 0x6d);
        auVar45[5] = -(pbVar30[0x12] == 0x61);
        auVar45[6] = -(pbVar30[0x13] == 0x5f);
        auVar45[7] = -(pbVar30[0x14] == 0x70);
        auVar45[8] = -(pbVar30[0x15] == 0x72);
        auVar45[9] = -(pbVar30[0x16] == 0x6f);
        auVar45[10] = -(pbVar30[0x17] == 0x70);
        auVar45[0xb] = -(pbVar30[0x18] == 0x65);
        auVar45[0xc] = -(pbVar30[0x19] == 0x72);
        auVar45[0xd] = -(pbVar30[0x1a] == 0x74);
        auVar45[0xe] = -(pbVar30[0x1b] == 0x79);
        auVar45[0xf] = -(pbVar30[0x1c] == 0x5d);
        auVar45 = auVar45 & auVar40;
        if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar19 == *(byte **)(uStack_2a8 + 0x58)) {
LAB_0e4fcad8:
      uVar13 = uStack_27c;
      if (uStack_280 == 0) {
        if (((puVar35 == (undefined *)0x0) || (*(int *)(puVar35 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar35 + 0x68) == 0)) goto LAB_0e4fcb5e;
        lVar20 = *(long *)(puVar35 + 0x68) + 0x38;
      }
      else {
        if (puVar35 == (undefined *)0x0) {
          puVar35 = (undefined *)func_0x048aead0(puVar17 + 0x18,0,uStack_27c);
        }
        lVar20 = func_0x048b0c90(puVar17 + 0x18,puVar35,uVar13,1);
        if (lVar20 == 0) {
          auStack_378 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_378);
          lVar20 = auStack_378._0_8_;
          if (auStack_378._0_8_ == 0) goto LAB_0e4fcb5e;
        }
        if ((*(int *)(lVar20 + 0x50) == -0x45dcb126) && (*(long *)(lVar20 + 0x58) != 0)) {
          lVar20 = *(long *)(lVar20 + 0x58) + 0x40;
        }
        else {
LAB_0e4fcb5e:
          lVar20 = 0;
        }
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auStack_1a8._8_8_;
      auStack_1a8 = auVar9 << 0x40;
      pcStack_198 = (code *)&UNK_048b4ab0;
      iStack_188 = -0x2cc4263b;
      pcStack_190 = (code *)&UNK_048b49f0;
      uStack_184 = CONCAT31(uStack_184._1_3_,1);
      puVar26 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar26 == (ulong *)0x0) {
        FUN_0eec74c0(0x38,0);
      }
      *puVar26 = uStack_118;
      puVar26[1] = uStack_110;
      puVar26[2] = (ulong)puStack_128;
      *(undefined2 *)(puVar26 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar26 + 4) = (undefined1  [16])0x0;
      puVar26[6] = 0;
      iStack_360 = 0x48b4ab0;
      iStack_35c = 0;
      pcStack_358 = (code *)&UNK_048b49f0;
      uStack_350 = 0xd33bd9c5;
      uStack_34c = CONCAT31(uStack_34c._1_3_,1);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auStack_1a8._8_8_;
      auStack_1a8 = auVar10 << 0x40;
      auStack_378._8_8_ = puVar26;
      auStack_378._0_8_ = &UNK_048b46e0;
      pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar23 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar12 = _UNK_014d987e;
      auStack_168._8_8_ = 0x1d;
      auStack_168._0_8_ = 0x21;
      *(ulong *)(pcVar23 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcVar23 + 0x15) = uVar12;
      lVar24 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(long *)pcVar23 = _DAT_014d9869;
      *(long *)(pcVar23 + 8) = lVar24;
      pcVar23[0x1d] = (code)0x0;
      pcStack_158 = pcVar23;
      lVar20 = func_0x048b5060(lVar20,auStack_168);
      *(undefined **)(lVar20 + 0x20) = &UNK_048b46e0;
      pcVar23 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar20 + 0x20) != auStack_378) {
        puVar21 = (undefined8 *)(lVar20 + 0x28);
        if (*(code **)(lVar20 + 0x40) == (code *)0x0) {
LAB_0e4fcce3:
          uVar12 = auStack_378._8_8_;
          auStack_378._8_8_ = 0;
          *puVar21 = uVar12;
        }
        else {
          (**(code **)(lVar20 + 0x40))(puVar21);
          if ((char)uStack_34c != '\0') {
            if ((char)uStack_34c != '\x02') goto LAB_0e4fcce3;
            (*(code *)CONCAT44(iStack_35c,iStack_360))(5,auStack_378 + 8,puVar21);
          }
        }
        *(ulong *)(lVar20 + 0x38) = CONCAT44(iStack_35c,iStack_360);
        *(code **)(lVar20 + 0x40) = pcStack_358;
        *(uint *)(lVar20 + 0x48) = uStack_350;
        *(char *)(lVar20 + 0x4c) = (char)uStack_34c;
        pcVar23 = pcStack_358;
      }
      if ((auStack_168[0] & 1) != 0) {
        func_0x0412a280(pcStack_158,auStack_168._0_8_ & 0xfffffffffffffffe);
        pcVar23 = pcStack_358;
      }
      if (pcVar23 != (code *)0x0) {
        (*pcVar23)(auStack_378 + 8);
      }
      if (pcStack_190 != (code *)0x0) {
        (*pcStack_190)(auStack_1a8);
      }
      puStack_128 = (undefined1 *)0x0;
      uVar34 = 0;
      uVar31 = 0;
    }
    else {
      iVar15 = *(int *)(pbVar19 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar16 = func_0x04108328(&DAT_0f550768), iVar16 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar15 == _DAT_0f550754) goto LAB_0e4fcad8;
    }
    uStack_210 = (code *)CONCAT44(iStack_28c,iStack_290);
    iStack_208 = iStack_288;
    uStack_204 = uStack_284;
    uStack_1f8 = (undefined4)CONCAT71(uStack_277,cStack_278);
    uStack_1f4 = (undefined4)((uint7)uStack_277 >> 0x18);
    pcStack_218 = uStack_298;
    auStack_228._8_8_ = pcStack_2a0;
    auStack_228._0_8_ = uStack_2a8;
    iStack_200 = 4;
    uStack_1fc = 0x1e1bc4d5;
    if ((DAT_0f7553e8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7553e8), iVar15 != 0)) {
      func_0x0e52ce50();
      func_0x0410844d(&DAT_0f7553e8);
    }
    auStack_378._0_4_ = uStack_1fc;
    auStack_378._8_8_ = 0;
    uStack_368 = 0;
    iStack_360 = 3;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048aead0;
    uStack_350 = 0xc0f6d10;
    uStack_34c = 0;
    uStack_348 = 0xe52e020;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(auStack_228 + 8,auStack_378);
    func_0x048aea50(auStack_378);
    pcStack_190 = (code *)CONCAT44(uStack_204,iStack_208);
    pcStack_198 = uStack_210;
    auStack_1a8._8_8_ = pcStack_218;
    auStack_1a8._0_8_ = auStack_228._8_8_;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    auStack_168._8_8_ = 0;
    auStack_168._0_8_ = puVar21;
    pcStack_158 = (code *)CONCAT71(pcStack_158._1_7_,0xff);
    func_0x0e52dea0(auStack_378,auStack_1a8,auStack_168);
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x28))();
    }
    if ((long *)auStack_168._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._0_8_ + 8))();
    }
    if ((DAT_0f7553e8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7553e8), iVar15 != 0)) {
      func_0x0e52ce50();
      func_0x0410844d(&DAT_0f7553e8);
    }
    if (uStack_204 == 2) {
      piVar27 = *(int **)(*(long *)(uStack_210 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_208) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      pcVar23 = *(code **)(piVar27 + 0xc);
      while (pcVar23 != pcStack_218) {
        piVar27 = *(int **)(piVar27 + 0xe);
        pcVar23 = *(code **)(piVar27 + 0xc);
      }
LAB_0e4fcfaf:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 2;
    }
    else {
      if (uStack_204 == 1) {
        piVar27 = *(int **)(*(long *)(uStack_210 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_208) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fcfaf;
      }
      if (uStack_204 == 0) {
        *(uint *)(uStack_210 + 0x18) = *(uint *)(uStack_210 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f7553e8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7553e8), iVar15 != 0)) {
      func_0x0e52ce50();
      func_0x0410844d(&DAT_0f7553e8);
    }
    auStack_378._0_4_ = 0xbf75c8f8;
    auStack_378._8_8_ = 0;
    uStack_368 = 1;
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048b2190;
    uStack_350 = 0x48b06d0;
    uStack_34c = 0;
    uStack_348 = 0xe52ebf0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(auStack_228 + 8,auStack_378);
    func_0x048aea50(auStack_378);
    pcStack_190 = (code *)CONCAT44(uStack_204,iStack_208);
    pcStack_198 = uStack_210;
    auStack_1a8._8_8_ = pcStack_218;
    auStack_1a8._0_8_ = auStack_228._8_8_;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f551cb0), iVar15 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_378._0_4_ = _DAT_0f551c9c;
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar22 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
    *puVar22 = &UNK_0ef46c98;
    puVar22[3] = puVar21;
    *(undefined1 *)(puVar22 + 4) = 0xff;
    auStack_378._8_8_ = puVar22 + 3;
    uStack_368 = (uint)puVar22;
    uStack_364 = (undefined4)((ulong)puVar22 >> 0x20);
    auStack_168 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_1a8,auStack_378);
    plVar28 = (long *)CONCAT44(uStack_364,uStack_368);
    if (plVar28 != (long *)0x0) {
      LOCK();
      plVar1 = plVar28 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        func_0x0412c2d0(plVar28);
      }
    }
    uVar12 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_168._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    iStack_1c8 = iStack_208;
    uStack_1c4 = uStack_204;
    puStack_1e8 = (undefined *)auStack_228._0_8_;
    pcStack_1e0 = (code *)auStack_228._8_8_;
    pcStack_1d8 = pcStack_218;
    pcStack_1d0 = uStack_210;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    iStack_1c0 = 4;
    uStack_1bc = 0x1e1bc4d5;
    if ((DAT_0f7553e8 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7553e8), iVar15 != 0)) {
      func_0x0e52ce50();
      func_0x0410844d(&DAT_0f7553e8);
    }
    auStack_378._0_4_ = uStack_1bc;
    auStack_378._8_8_ = 0;
    uStack_368 = 0;
    iStack_360 = 1;
    iStack_35c = 0;
    pcStack_358 = (code *)&SUB_048aead0;
    uStack_350 = 0x4905970;
    uStack_34c = 0;
    uStack_348 = 0xe52ed90;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    plStack_328 = (long *)0x0;
    func_0x049057f0(&pcStack_1e0,auStack_378);
    func_0x048aea50(auStack_378);
    pcStack_190 = (code *)CONCAT44(uStack_1c4,iStack_1c8);
    pcStack_198 = pcStack_1d0;
    auStack_1a8._8_8_ = pcStack_1d8;
    auStack_1a8._0_8_ = pcStack_1e0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef44b00;
    auStack_168._8_8_ = 0;
    auStack_168._0_8_ = puVar21;
    pcStack_158 = (code *)CONCAT71(pcStack_158._1_7_,0xff);
    func_0x0e52dea0(auStack_378,auStack_1a8,auStack_168);
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x28))();
    }
    if ((long *)auStack_168._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._0_8_ + 8))();
    }
    if ((uVar31 & 1) != 0) {
      func_0x0412a280(puStack_128,uVar34 | (byte)uVar31 & 0xfe);
    }
    if (((ulong)pcStack_f8 & 1) != 0) {
      func_0x0412a280(pcStack_e8,(ulong)pcStack_f8 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f755480 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755480), iVar15 != 0)) {
    func_0x0e52f0e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f755400,0xf53dab8);
    func_0x0410844d(&DAT_0f755480);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f755400 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4fd370;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f755400 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4fd370:
    puVar17 = &DAT_0f755400;
    if (iRam000000000f755460 != -0x2b3da790) goto LAB_0e4fd3f7;
LAB_0e4fd39b:
    lVar20 = *(long *)(puVar17 + 0x68);
    if (lVar20 == 0) goto LAB_0e4fd3f7;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e52f770(&puStack_1e8,param_1,lVar24,uVar31);
    if ((char)uStack_1b8 != '\0') goto LAB_0e4fd3d8;
LAB_0e4fd41d:
    iStack_1c0 = 2;
    uStack_1bc = 0x24c808b0;
    bStack_318 = 0;
    uStack_317 = 0;
    lStack_310 = 0;
    plStack_328 = (long *)0x0;
    lStack_320 = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32d = 0;
    uStack_32c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    pcStack_358 = (code *)0x0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    iStack_360 = 0;
    iStack_35c = 0;
    auStack_378 = (undefined1  [16])0x0;
    uStack_308 = 0x3f600000;
    func_0x048afb10(&uStack_338,8);
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    lStack_2e8 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    uStack_2d0 = 0xff00;
    uStack_2cc = uStack_2cc & 0xffffff00;
    uStack_2c8 = uStack_2c8 & 0xffffff00;
    uStack_2c4 = uStack_2c4 & 0xffffff00;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4bd060;
    uVar12 = auStack_378._0_8_;
    auStack_378._0_8_ = puVar21;
    if ((long *)uVar12 != (long *)0x0) {
      (**(code **)(*(long *)uVar12 + 8))();
    }
    if ((uStack_350 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_33f,uStack_340),
                      CONCAT44(uStack_34c,uStack_350) & 0xfffffffffffffffe);
    }
    uStack_350 = 0x656c6518;
    uStack_34c = 0x746e656d;
    uStack_348 = 0x7079745f;
    uStack_344 = 0x65;
    uStack_343 = 0;
    if ((DAT_0f7554a0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7554a0), iVar15 != 0)) {
      func_0x0e52f1f0();
      func_0x0410844d(&DAT_0f7554a0);
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_1bc);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)CONCAT44(uStack_298._4_4_,3);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe524900;
    uStack_27c = 0;
    cStack_278 = 0xd0;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e530540;
    auStack_270._0_8_ = &UNK_0e520a40;
    auStack_260._0_12_ = ZEXT812(0xe530550);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(&pcStack_1e0,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    uStack_210 = (code *)CONCAT44(uStack_1c4,iStack_1c8);
    pcStack_218 = pcStack_1d0;
    auStack_228._0_8_ = pcStack_1e0;
    auStack_228._8_8_ = pcStack_1d8;
    func_0x0e5302d0(&uStack_2a8,auStack_228,auStack_378);
    if (iStack_28c == 2) {
      piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_290) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar20 = *(long *)(piVar27 + 0xc);
      while ((code *)lVar20 != pcStack_2a0) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar20 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4fd71f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 9;
    }
    else {
      if (iStack_28c == 1) {
        piVar27 = *(int **)(*(long *)((long)uStack_298 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_290) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fd71f;
      }
      if (iStack_28c == 0) {
        *(uint *)((long)uStack_298 + 0x18U) = *(uint *)((long)uStack_298 + 0x18U) | 0x90000;
      }
    }
    auStack_1a8._8_8_ = pcStack_1e0;
    auStack_1a8._0_8_ = puStack_1e8;
    pcStack_198 = pcStack_1d8;
    pcStack_190 = pcStack_1d0;
    iStack_188 = iStack_1c8;
    uStack_184 = uStack_1c4;
    iStack_180 = iStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_178 = CONCAT31(uStack_178._1_3_,(char)uStack_1b8);
    func_0x048b0bc0(auStack_378);
    auStack_228 = auStack_1a8;
    pcStack_218 = pcStack_198;
    uStack_210 = pcStack_190;
    iStack_208 = iStack_188;
    uStack_204 = uStack_184;
    iStack_200 = iStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    if ((DAT_0f7554a0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f7554a0), iVar15 != 0)) {
      func_0x0e52f1f0();
      func_0x0410844d(&DAT_0f7554a0);
    }
    iStack_200 = 1;
    uStack_1fc = 0xe4ba733d;
    uVar12 = auStack_228._0_8_;
    if ((DAT_0f755480 == '\0') && (iVar15 = func_0x04108328(&DAT_0f755480), iVar15 != 0)) {
      func_0x0e52f0e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f755400,0xf53dab8);
      func_0x0410844d(&DAT_0f755480);
    }
    plVar28 = (long *)(*(long *)(uVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f755400 + 4)) * 8);
    do {
      lVar20 = *plVar28;
      if (lVar20 == -1) goto LAB_0e4fd840;
      plVar28 = (long *)(*(long *)(uVar12 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f755400 + 4)
            );
    if (plVar28 == *(long **)(uVar12 + 0x38)) {
LAB_0e4fd840:
      auStack_378._0_8_ = &DAT_0f755400;
    }
    else {
      auStack_378._0_8_ = plVar28[2];
    }
    auStack_378._8_8_ = uVar12 + 0x18;
    func_0x0ed621a0(auStack_378,uStack_1fc);
    auStack_378._0_2_ = 1;
    auStack_378._8_8_ = auStack_228 + 8;
    uStack_368 = uStack_1fc;
    iStack_360 = 0;
    iStack_35c = 0;
    pcStack_358 = (code *)0x0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_343 = 0;
    uStack_342 = 0;
    uStack_340 = 0;
    uStack_33f = 0;
    uStack_338 = 0x6165660e;
    uStack_334 = 0x65727574;
    uStack_330 = 0;
    lStack_320 = 0;
    bStack_318 = 0;
    uStack_317 = 0;
    lStack_310 = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    uStack_2f0 = 0x3f600000;
    func_0x048afb10(&lStack_320,8);
    uStack_2c8 = 0;
    uStack_2c4 = 0;
    lStack_2c0 = 0;
    lStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2ce = 0;
    uStack_2cc = 0;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    uStack_2b8 = 0xff00;
    uStack_2b4 = uStack_2b4 & 0xffffff00;
    uStack_2b0 = uStack_2b0 & 0xffffff00;
    uStack_2ac = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4bd498;
    plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_360 = (int)puVar21;
    iStack_35c = (int)((ulong)puVar21 >> 0x20);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe5307d0;
    uStack_27c = 0;
    cStack_278 = -0x30;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e530890;
    auStack_270._0_8_ = &UNK_0e52cc80;
    auStack_260._0_12_ = ZEXT812(0xe530a50);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    func_0x0e5302d0(&uStack_2a8,auStack_378._8_8_,&iStack_360);
    if (iStack_28c == 2) {
      piVar27 = *(int **)(*(long *)(uStack_298 + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_290) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar20 = *(long *)(piVar27 + 0xc);
      while ((code *)lVar20 != pcStack_2a0) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar20 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4fdb1f:
      piVar27[4] = piVar27[4] | auStack_378._0_4_ << 0x10;
    }
    else {
      if (iStack_28c == 1) {
        piVar27 = *(int **)(*(long *)(uStack_298 + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_290) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fdb1f;
      }
      if (iStack_28c == 0) {
        *(uint *)(uStack_298 + 0x18) = *(uint *)(uStack_298 + 0x18) | auStack_378._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_360);
    lVar20 = func_0x0e4b0a70(uStack_100);
    if (*(int *)(lVar20 + 0x60) != -0x2b3da790) goto LAB_0e4fdb68;
LAB_0e4fdb40:
    lVar20 = *(long *)(lVar20 + 0x68);
    if (lVar20 == 0) goto LAB_0e4fdb68;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar20 + 9);
    if (bVar36) {
      puVar17 = *(undefined **)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e4fd39b;
LAB_0e4fd3f7:
    func_0x0e52f770(&puStack_1e8,param_1,&UNK_012b8858,0x12);
    if ((char)uStack_1b8 == '\0') goto LAB_0e4fd41d;
LAB_0e4fd3d8:
    lVar20 = func_0x0e4b0a70(uStack_100);
    if (*(int *)(lVar20 + 0x60) == -0x2b3da790) goto LAB_0e4fdb40;
LAB_0e4fdb68:
    puVar17 = &UNK_0126c0e9;
    uVar31 = 10;
  }
  func_0x0e6a0730(auStack_378,param_1,puVar17,uVar31,0);
  uStack_344 = 0;
  uStack_340 = 0;
  if ((char)uStack_348 == '\0') {
    func_0x0e510f80(&uStack_2a8,auStack_378,&UNK_0140dab2,5);
    func_0x0e511410(&puStack_1e8,&uStack_2a8,&UNK_012532dd,0x10);
  }
  if ((DAT_0f75d178 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d178), iVar15 != 0)) {
    func_0x0e6a4f00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75d0f8,0xf53dab8);
    func_0x0410844d(&DAT_0f75d178);
  }
  plVar28 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75d0f8 + 4)) * 8);
  do {
    lVar20 = *plVar28;
    if (lVar20 == -1) goto LAB_0e4fdc30;
    plVar28 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f75d0f8 + 4))
  ;
  if (plVar28 == *(long **)(param_1 + 0x38)) {
LAB_0e4fdc30:
    puVar17 = &DAT_0f75d0f8;
    if (iRam000000000f75d158 != -0x2b3da790) goto LAB_0e4fdc9d;
LAB_0e4fdc5b:
    lVar20 = *(long *)(puVar17 + 0x68);
    if (lVar20 == 0) goto LAB_0e4fdc9d;
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e6a56f0(&puStack_1e8,param_1,lVar24,uVar31);
  }
  else {
    puVar17 = (undefined *)plVar28[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0e4fdc5b;
LAB_0e4fdc9d:
    func_0x0e6a56f0(&puStack_1e8,param_1,&UNK_012532ee,0x13);
  }
  if ((char)uStack_1b8 == '\0') {
    func_0x0e6a62a0(auStack_378,&puStack_1e8,&UNK_01442d72,7,1);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4c5f20;
    plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_360 = (int)puVar21;
    iStack_35c = (int)((ulong)puVar21 >> 0x20);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xe6ab740;
    uStack_27c = 0;
    cStack_278 = 0xd0;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e6ab800;
    auStack_270._0_8_ = &UNK_0e6a9d70;
    auStack_260._0_12_ = ZEXT812(0xe6aba40);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    func_0x0e6a6530(auStack_378);
    uStack_178 = CONCAT31(uStack_178._1_3_,(char)uStack_1b8);
    iStack_188 = iStack_1c8;
    uStack_184 = uStack_1c4;
    iStack_180 = iStack_1c0;
    uStack_17c = uStack_1bc;
    pcStack_198 = pcStack_1d8;
    pcStack_190 = pcStack_1d0;
    auStack_1a8._8_8_ = pcStack_1e0;
    auStack_1a8._0_8_ = puStack_1e8;
    func_0x048b0bc0(&iStack_360);
    auStack_228 = auStack_1a8;
    pcStack_218 = pcStack_198;
    uStack_210 = pcStack_190;
    iStack_208 = iStack_188;
    uStack_204 = uStack_184;
    iStack_200 = iStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    func_0x0e6a5ce0(auStack_378,auStack_1a8._0_8_ + 0x18);
    if (iStack_35c == 2) {
      piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x60);
      iVar15 = *piVar27;
      while (iVar15 != iStack_360) {
        piVar27 = piVar27 + 0x16;
        iVar15 = *piVar27;
      }
      lVar20 = *(long *)(piVar27 + 0xc);
      while (lVar20 != auStack_378._8_8_) {
        piVar27 = *(int **)(piVar27 + 0xe);
        lVar20 = *(long *)(piVar27 + 0xc);
      }
LAB_0e4fdf0f:
      *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 4;
    }
    else {
      if (iStack_35c == 1) {
        piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x48);
        iVar15 = *piVar27;
        while (iVar15 != iStack_360) {
          piVar27 = piVar27 + 0x1a;
          iVar15 = *piVar27;
        }
        goto LAB_0e4fdf0f;
      }
      if (iStack_35c == 0) {
        puVar3 = (uint *)(CONCAT44(uStack_364,uStack_368) + 0x18);
        *puVar3 = *puVar3 | 0x40000;
      }
    }
    func_0x0e6a62a0(auStack_378,auStack_228,&UNK_0123ca5a,6,0x10);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f012438;
    plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
    iStack_360 = (int)puVar21;
    iStack_35c = (int)((ulong)puVar21 >> 0x20);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
    pcStack_2a0 = (code *)0x0;
    uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
    iStack_290 = 1;
    iStack_28c = 0;
    iStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0x5fc5e00;
    uStack_27c = 0;
    cStack_278 = -0x30;
    uStack_277 = 0x48b06;
    auStack_270._8_8_ = &UNK_0e6abeb0;
    auStack_270._0_8_ = &UNK_05dcda00;
    auStack_260._0_12_ = ZEXT812(0xe6ac010);
    auStack_250 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
    uVar12 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar28 = (long *)(auStack_250._8_8_ + 8);
      lVar20 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar12);
      }
    }
    func_0x0e6a6530(auStack_378);
    uVar13 = uStack_1fc;
    iVar15 = iStack_200;
    uVar12 = auStack_228._0_8_;
    func_0x048b0bc0(&iStack_360);
    uStack_120 = 0;
    uStack_11c = 0;
    if (iVar15 == 4) {
      if ((DAT_0f75d178 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d178), iVar15 != 0)) {
        func_0x0e6a4f00();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75d0f8,0xf53dab8);
        func_0x0410844d(&DAT_0f75d178);
      }
      plVar28 = (long *)(*(long *)(uVar12 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f75d0f8 + 4)) * 8);
      do {
        lVar20 = *plVar28;
        if (lVar20 == -1) goto LAB_0e4fe188;
        plVar28 = (long *)(*(long *)(uVar12 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f75d0f8 + 4));
      if (plVar28 == *(long **)(uVar12 + 0x38)) {
LAB_0e4fe188:
        puVar17 = &DAT_0f75d0f8;
      }
      else {
        puVar17 = (undefined *)plVar28[2];
      }
      lVar20 = func_0x048b1040(uVar12 + 0x18,puVar17,uVar13,1);
      if (lVar20 == 0) {
        auStack_378 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_378);
        lVar24 = *(long *)(auStack_378._0_8_ + 0x38);
        lVar20 = auStack_378._0_8_;
      }
      else {
        lVar24 = *(long *)(lVar20 + 0x38);
      }
      if (lVar24 != 0) goto LAB_0e4fe325;
      auStack_378 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_378);
      lVar14 = auStack_378._0_8_;
      while (lVar24 = lVar14, lVar24 != 0) {
LAB_0e4fe325:
        lVar20 = lVar24;
        lVar14 = *(long *)(lVar24 + 0x38);
        if (*(long *)(lVar24 + 0x38) == 0) {
          auStack_378 = (undefined1  [16])0x0;
          func_0x048b10d0(auStack_378);
          lVar14 = auStack_378._0_8_;
        }
      }
      lVar20 = *(long *)(lVar20 + 0x48);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar15 != 1) goto LAB_0e4fe3d5;
      if ((DAT_0f75d178 == '\0') && (iVar15 = func_0x04108328(&DAT_0f75d178), iVar15 != 0)) {
        func_0x0e6a4f00();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75d0f8,0xf53dab8);
        func_0x0410844d(&DAT_0f75d178);
      }
      plVar28 = (long *)(*(long *)(uVar12 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f75d0f8 + 4)) * 8);
      do {
        lVar20 = *plVar28;
        if (lVar20 == -1) goto LAB_0e4fe108;
        plVar28 = (long *)(*(long *)(uVar12 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f75d0f8 + 4));
      if (plVar28 == *(long **)(uVar12 + 0x38)) {
LAB_0e4fe108:
        puVar17 = &DAT_0f75d0f8;
      }
      else {
        puVar17 = (undefined *)plVar28[2];
      }
      lVar20 = func_0x048b0c90(uVar12 + 0x18,puVar17,uVar13,1);
      if (lVar20 == 0) {
        auStack_378 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_378);
        lVar20 = auStack_378._0_8_;
      }
      lVar20 = *(long *)(lVar20 + 0x58);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar21 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
    }
    puVar21[1] = 0xffffffffffffffff;
    puVar21[2] = 0;
    *(undefined1 *)(puVar21 + 3) = 0xff;
    *puVar21 = &UNK_0f0edc68;
    uVar12 = _UNK_014e8108;
    puVar21[4] = _DAT_014e8100;
    puVar21[5] = uVar12;
    puVar21[6] = 0;
    *(undefined2 *)(puVar21 + 7) = 0;
    *(undefined4 *)((long)puVar21 + 0x3a) = uStack_120;
    *(undefined2 *)((long)puVar21 + 0x3e) = uStack_11c;
    plVar28 = *(long **)(lVar20 + 8);
    *(undefined8 **)(lVar20 + 8) = puVar21;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x28))();
    }
  }
LAB_0e4fe3d5:
  FUN_0e50ba60(param_1);
  lVar20 = func_0x0d3141e0(uStack_100);
  if ((*(int *)(lVar20 + 0x60) == -0x2b3da790) && (lVar20 = *(long *)(lVar20 + 0x68), lVar20 != 0))
  {
    bVar36 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar36) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar31 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar36) {
      uVar31 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e6ac1f0(&puStack_1e8,param_1,lVar24,uVar31);
  }
  else {
    func_0x0e6ac1f0(&puStack_1e8,param_1,&UNK_014738d1,0x72);
  }
  if ((char)uStack_1b8 != '\0') {
    return;
  }
  puVar17 = puStack_1e8 + 0x18;
  lVar20 = func_0x0d3141e0(puVar17);
  for (pbVar19 = *(byte **)(puStack_1e8 + 0x50); pbVar19 != *(byte **)(puStack_1e8 + 0x58);
      pbVar19 = pbVar19 + 0x38) {
    bVar4 = *pbVar19;
    if ((bVar4 & 1) == 0) {
      if (bVar4 >> 1 == 0x1a) goto LAB_0e4fe4fa;
    }
    else if (*(long *)(pbVar19 + 8) == 0x1a) {
LAB_0e4fe4fa:
      if ((bVar4 & 1) == 0) {
        pbVar30 = pbVar19 + 1;
      }
      else {
        pbVar30 = *(byte **)(pbVar19 + 0x10);
      }
      auVar41[0] = -(*pbVar30 == DAT_014eaba0);
      auVar41[1] = -(pbVar30[1] == DAT_014eaba0._1_1_);
      auVar41[2] = -(pbVar30[2] == DAT_014eaba0._2_1_);
      auVar41[3] = -(pbVar30[3] == DAT_014eaba0._3_1_);
      auVar41[4] = -(pbVar30[4] == DAT_014eaba0._4_1_);
      auVar41[5] = -(pbVar30[5] == DAT_014eaba0._5_1_);
      auVar41[6] = -(pbVar30[6] == DAT_014eaba0._6_1_);
      auVar41[7] = -(pbVar30[7] == DAT_014eaba0._7_1_);
      auVar41[8] = -(pbVar30[8] == DAT_014eaba0._8_1_);
      auVar41[9] = -(pbVar30[9] == DAT_014eaba0._9_1_);
      auVar41[10] = -(pbVar30[10] == DAT_014eaba0._10_1_);
      auVar41[0xb] = -(pbVar30[0xb] == DAT_014eaba0._11_1_);
      auVar41[0xc] = -(pbVar30[0xc] == DAT_014eaba0._12_1_);
      auVar41[0xd] = -(pbVar30[0xd] == DAT_014eaba0._13_1_);
      auVar41[0xe] = -(pbVar30[0xe] == DAT_014eaba0._14_1_);
      auVar41[0xf] = -(pbVar30[0xf] == DAT_014eaba0._15_1_);
      auVar46[0] = -(pbVar30[10] == DAT_014e4ff0);
      auVar46[1] = -(pbVar30[0xb] == DAT_014e4ff0._1_1_);
      auVar46[2] = -(pbVar30[0xc] == DAT_014e4ff0._2_1_);
      auVar46[3] = -(pbVar30[0xd] == DAT_014e4ff0._3_1_);
      auVar46[4] = -(pbVar30[0xe] == DAT_014e4ff0._4_1_);
      auVar46[5] = -(pbVar30[0xf] == DAT_014e4ff0._5_1_);
      auVar46[6] = -(pbVar30[0x10] == DAT_014e4ff0._6_1_);
      auVar46[7] = -(pbVar30[0x11] == DAT_014e4ff0._7_1_);
      auVar46[8] = -(pbVar30[0x12] == DAT_014e4ff0._8_1_);
      auVar46[9] = -(pbVar30[0x13] == DAT_014e4ff0._9_1_);
      auVar46[10] = -(pbVar30[0x14] == DAT_014e4ff0._10_1_);
      auVar46[0xb] = -(pbVar30[0x15] == DAT_014e4ff0._11_1_);
      auVar46[0xc] = -(pbVar30[0x16] == DAT_014e4ff0._12_1_);
      auVar46[0xd] = -(pbVar30[0x17] == DAT_014e4ff0._13_1_);
      auVar46[0xe] = -(pbVar30[0x18] == DAT_014e4ff0._14_1_);
      auVar46[0xf] = -(pbVar30[0x19] == DAT_014e4ff0._15_1_);
      auVar46 = auVar46 & auVar41;
      if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar19 == *(byte **)(puStack_1e8 + 0x58)) {
LAB_0e4fe529:
    if (iStack_1c0 == 0) {
      if ((*(int *)(lVar20 + 0x60) != -0x2b3da790) || (*(long *)(lVar20 + 0x68) == 0))
      goto LAB_0e4fe599;
      lVar20 = *(long *)(lVar20 + 0x68) + 0x38;
    }
    else {
      auStack_378._0_8_ = func_0x048b0c90(puVar17,lVar20,uStack_1bc,1);
      if (auStack_378._0_8_ == 0) {
        auStack_378 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_378);
        if (auStack_378._0_8_ == 0) goto LAB_0e4fe599;
      }
      if ((*(int *)(auStack_378._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_378._0_8_ + 0x58) != 0)) {
        lVar20 = *(long *)(auStack_378._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e4fe599:
        lVar20 = 0;
      }
    }
    uStack_298 = (code *)&UNK_0488e0b0;
    iStack_288 = 0x48b5725f;
    iStack_290 = 0;
    iStack_28c = 0;
    uStack_284 = uStack_284 & 0xffffff00;
    uStack_2a8 = (undefined *)0x0;
    auStack_378 = (undefined1  [16])0x0;
    iStack_360 = 0x488e0b0;
    iStack_35c = 0;
    pcStack_358 = (code *)0x0;
    uStack_350 = 0x48b5725f;
    uStack_34c = uStack_34c & 0xffffff00;
    pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pcVar23 == (code *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar12 = _UNK_013bbadf;
    auStack_228._8_8_ = 0x1a;
    auStack_228._0_8_ = 0x21;
    *(ulong *)(pcVar23 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)(pcVar23 + 0x12) = uVar12;
    lVar24 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *(long *)pcVar23 = _DAT_013bbacd;
    *(long *)(pcVar23 + 8) = lVar24;
    pcVar23[0x1a] = (code)0x0;
    pcStack_218 = pcVar23;
    lVar20 = func_0x048b5060(lVar20,auStack_228);
    *(undefined8 *)(lVar20 + 0x20) = 0;
    if ((undefined1 *)(lVar20 + 0x20) == auStack_378) {
      pcVar23 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar20 + 0x40) != (code *)0x0) {
        puVar21 = (undefined8 *)(lVar20 + 0x28);
        (**(code **)(lVar20 + 0x40))(puVar21);
        if ((char)uStack_34c != '\0') {
          if ((char)uStack_34c == '\x02') {
            (*(code *)CONCAT44(iStack_35c,iStack_360))(5,auStack_378 + 8,puVar21);
          }
          else {
            uVar12 = auStack_378._8_8_;
            auStack_378._8_8_ = 0;
            *puVar21 = uVar12;
          }
        }
      }
      *(ulong *)(lVar20 + 0x38) = CONCAT44(iStack_35c,iStack_360);
      *(code **)(lVar20 + 0x40) = pcStack_358;
      *(uint *)(lVar20 + 0x48) = uStack_350;
      *(char *)(lVar20 + 0x4c) = (char)uStack_34c;
      pcVar23 = pcStack_358;
    }
    if ((auStack_228[0] & 1) != 0) {
      func_0x0412a280(pcStack_218,auStack_228._0_8_ & 0xfffffffffffffffe);
      pcVar23 = pcStack_358;
    }
    if (pcVar23 != (code *)0x0) {
      (*pcVar23)(auStack_378 + 8);
    }
    if ((code *)CONCAT44(iStack_28c,iStack_290) != (code *)0x0) {
      (*(code *)CONCAT44(iStack_28c,iStack_290))(&uStack_2a8);
    }
  }
  else {
    iVar15 = *(int *)(pbVar19 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f550ad8), iVar16 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar15 == _DAT_0f550ac4) goto LAB_0e4fe529;
  }
  puVar35 = puStack_1e8;
  pcStack_f8 = pcStack_1e0;
  pcStack_f0 = pcStack_1d8;
  pcStack_e0 = (code *)CONCAT44(uStack_1c4,iStack_1c8);
  pcStack_e8 = pcStack_1d0;
  puStack_128 = (undefined1 *)CONCAT44(puStack_128._4_4_,iStack_1c0);
  uStack_100 = CONCAT44(uStack_100._4_4_,uStack_1bc);
  uStack_118 = CONCAT44(uStack_1b4,uStack_1b8);
  auStack_b8._0_6_ = 0x6c6f00000000;
  auStack_b8._0_4_ = 0x6f502065;
  puVar17 = puStack_1e8 + 0x18;
  lVar20 = func_0x0d3141e0(puVar17);
  pbVar30 = *(byte **)(puVar35 + 0x58);
  for (pbVar19 = *(byte **)(puVar35 + 0x50); pbVar19 != pbVar30; pbVar19 = pbVar19 + 0x38) {
    bVar4 = *pbVar19;
    if ((bVar4 & 1) == 0) {
      if (bVar4 >> 1 == 0x24) goto LAB_0e4fe82a;
    }
    else if (*(long *)(pbVar19 + 8) == 0x24) {
LAB_0e4fe82a:
      if ((bVar4 & 1) == 0) {
        pbVar33 = pbVar19 + 1;
      }
      else {
        pbVar33 = *(byte **)(pbVar19 + 0x10);
      }
      iVar15 = func_0x0eee3000(&DAT_014518a9,pbVar33,0x24);
      if (iVar15 == 0) break;
    }
  }
  if (pbVar19 == pbVar30) {
LAB_0e4fe85a:
    if ((int)puStack_128 == 0) {
      if ((*(int *)(lVar20 + 0x60) != -0x2b3da790) || (*(long *)(lVar20 + 0x68) == 0))
      goto LAB_0e4fe8c9;
      lVar20 = *(long *)(lVar20 + 0x68) + 0x38;
    }
    else {
      lVar20 = func_0x048b0c90(puVar17,lVar20,uStack_100 & 0xffffffff,1);
      if (lVar20 == 0) {
        auStack_378 = ZEXT816(0);
        func_0x048b0d20(auStack_378);
        lVar20 = auStack_378._0_8_;
        if (auStack_378._0_8_ == 0) goto LAB_0e4fe8c9;
      }
      if ((*(int *)(lVar20 + 0x50) == -0x45dcb126) && (*(long *)(lVar20 + 0x58) != 0)) {
        lVar20 = *(long *)(lVar20 + 0x58) + 0x40;
      }
      else {
LAB_0e4fe8c9:
        lVar20 = 0;
      }
    }
    uStack_2a8 = (undefined *)0x0;
    uStack_298 = (code *)&UNK_048b4ab0;
    iStack_288 = -0x2cc4263b;
    iStack_290 = 0x48b49f0;
    iStack_28c = 0;
    uStack_284 = CONCAT31(uStack_284._1_3_,1);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar21 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
    *puVar21 = 0x74616c706d65541a;
    *(undefined4 *)(puVar21 + 1) = auStack_b8._0_4_;
    *(undefined2 *)((long)puVar21 + 0xc) = auStack_b8._4_2_;
    *(undefined2 *)((long)puVar21 + 0xe) = 0;
    puVar21[2] = 0;
    auVar11._10_6_ = 0;
    auVar11._0_10_ = auStack_b8._6_10_;
    auStack_b8 = auVar11 << 0x30;
    *(undefined2 *)(puVar21 + 3) = 0x1402;
    puVar21[4] = 0x1001400150001;
    puVar21[5] = &UNK_01254d89;
    puVar21[6] = &UNK_01254d89;
    iStack_360 = 0x48b4ab0;
    iStack_35c = 0;
    pcStack_358 = (code *)&UNK_048b49f0;
    uStack_350 = 0xd33bd9c5;
    uStack_34c = CONCAT31(uStack_34c._1_3_,1);
    uStack_2a8 = (undefined *)0x0;
    auStack_378._8_8_ = puVar21;
    auStack_378._0_8_ = &UNK_048b46e0;
    pcVar23 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pcVar23 == (code *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    lVar24 = _UNK_014518c1;
    auStack_228._8_8_ = 0x24;
    auStack_228._0_8_ = 0x29;
    *(long *)(pcVar23 + 0x10) = _DAT_014518b9;
    *(long *)(pcVar23 + 0x18) = lVar24;
    lVar24 = _UNK_014518b1;
    *(long *)pcVar23 = _DAT_014518a9;
    *(long *)(pcVar23 + 8) = lVar24;
    *(undefined4 *)(pcVar23 + 0x20) = 0x5d797472;
    pcVar23[0x24] = (code)0x0;
    pcStack_218 = pcVar23;
    lVar20 = func_0x048b5060(lVar20,auStack_228);
    *(undefined **)(lVar20 + 0x20) = &UNK_048b46e0;
    pcVar23 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar20 + 0x20) != auStack_378) {
      puVar21 = (undefined8 *)(lVar20 + 0x28);
      if (*(code **)(lVar20 + 0x40) == (code *)0x0) {
LAB_0e4fea9a:
        uVar12 = auStack_378._8_8_;
        auStack_378._8_8_ = 0;
        *puVar21 = uVar12;
      }
      else {
        (**(code **)(lVar20 + 0x40))(puVar21);
        if ((char)uStack_34c != '\0') {
          if ((char)uStack_34c != '\x02') goto LAB_0e4fea9a;
          (*(code *)CONCAT44(iStack_35c,iStack_360))(5,auStack_378 + 8,puVar21);
        }
      }
      *(ulong *)(lVar20 + 0x38) = CONCAT44(iStack_35c,iStack_360);
      *(code **)(lVar20 + 0x40) = pcStack_358;
      *(uint *)(lVar20 + 0x48) = uStack_350;
      *(char *)(lVar20 + 0x4c) = (char)uStack_34c;
      pcVar23 = pcStack_358;
    }
    if ((auStack_228[0] & 1) != 0) {
      func_0x0412a280(pcStack_218,auStack_228._0_8_ & 0xfffffffffffffffe);
      pcVar23 = pcStack_358;
    }
    if (pcVar23 != (code *)0x0) {
      (*pcVar23)(auStack_378 + 8);
    }
    if ((code *)CONCAT44(iStack_28c,iStack_290) != (code *)0x0) {
      (*(code *)CONCAT44(iStack_28c,iStack_290))(&uStack_2a8);
    }
  }
  else {
    iVar15 = *(int *)(pbVar19 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar16 = func_0x04108328(&DAT_0f550768), iVar16 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar15 == _DAT_0f550754) goto LAB_0e4fe85a;
  }
  auStack_168._8_8_ = pcStack_f8;
  auStack_168._0_8_ = puVar35;
  pcStack_158 = pcStack_f0;
  pcStack_150 = pcStack_e8;
  uStack_148 = pcStack_e0;
  uStack_140 = CONCAT44((undefined4)uStack_100,(int)puStack_128);
  uStack_138 = uStack_118;
  func_0x0e6acb00(auStack_378,auStack_168,&UNK_011ea907,0xb,1);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4c61e0;
  plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
  iStack_360 = (int)puVar21;
  iStack_35c = (int)((ulong)puVar21 >> 0x20);
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
  }
  uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
  pcStack_2a0 = (code *)0x0;
  uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
  iStack_290 = 1;
  iStack_28c = 0;
  iStack_288 = 0;
  uStack_284 = 0;
  uStack_280 = 0xe6ad230;
  uStack_27c = 0;
  cStack_278 = 0xd0;
  uStack_277 = 0x48b06;
  auStack_270._8_8_ = &UNK_0e6ad2f0;
  auStack_270._0_8_ = &UNK_0e6a3340;
  auStack_260._0_12_ = ZEXT812(0xe6ad4b0);
  auStack_250 = ZEXT816(0);
  func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
  uVar12 = auStack_250._8_8_;
  if ((long *)auStack_250._8_8_ != (long *)0x0) {
    LOCK();
    plVar28 = (long *)(auStack_250._8_8_ + 8);
    lVar20 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
      func_0x0412c2d0(uVar12);
    }
  }
  func_0x0e6acd00(auStack_378);
  uStack_178 = CONCAT31(uStack_178._1_3_,(undefined1)uStack_138);
  iStack_188 = (int)uStack_148;
  uStack_184 = (uint)((ulong)uStack_148 >> 0x20);
  iStack_180 = (int)uStack_140;
  uStack_17c = (uint)((ulong)uStack_140 >> 0x20);
  pcStack_198 = pcStack_158;
  pcStack_190 = pcStack_150;
  auStack_1a8 = auStack_168;
  func_0x048b0bc0(&iStack_360);
  func_0x0e6acb00(auStack_378,auStack_1a8,&UNK_0145202e,8,1);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4c6258;
  plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
  iStack_360 = (int)puVar21;
  iStack_35c = (int)((ulong)puVar21 >> 0x20);
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
  }
  uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
  pcStack_2a0 = (code *)0x0;
  uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
  iStack_290 = 1;
  iStack_28c = 0;
  iStack_288 = 0;
  uStack_284 = 0;
  uStack_280 = 0xe6b1260;
  uStack_27c = 0;
  cStack_278 = 0xd0;
  uStack_277 = 0x48b06;
  auStack_270._8_8_ = &UNK_0e6b1320;
  auStack_270._0_8_ = &UNK_0e6afbc0;
  auStack_260._0_12_ = ZEXT812(0xe6b1560);
  auStack_250 = ZEXT816(0);
  func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
  uVar12 = auStack_250._8_8_;
  if ((long *)auStack_250._8_8_ != (long *)0x0) {
    LOCK();
    plVar28 = (long *)(auStack_250._8_8_ + 8);
    lVar20 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
      func_0x0412c2d0(uVar12);
    }
  }
  func_0x0e6acd00(auStack_378);
  uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(undefined1)uStack_178);
  iStack_208 = iStack_188;
  uStack_204 = uStack_184;
  iStack_200 = iStack_180;
  uStack_1fc = uStack_17c;
  pcStack_218 = pcStack_198;
  uStack_210 = pcStack_190;
  auStack_228 = auStack_1a8;
  func_0x048b0bc0(&iStack_360);
  func_0x0e6ac730(auStack_378,auStack_228._0_8_ + 0x18);
  if (iStack_35c == 2) {
    piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x60);
    iVar15 = *piVar27;
    while (iVar15 != iStack_360) {
      piVar27 = piVar27 + 0x16;
      iVar15 = *piVar27;
    }
    lVar20 = *(long *)(piVar27 + 0xc);
    while (lVar20 != auStack_378._8_8_) {
      piVar27 = *(int **)(piVar27 + 0xe);
      lVar20 = *(long *)(piVar27 + 0xc);
    }
  }
  else {
    if (iStack_35c != 1) {
      if (iStack_35c == 0) {
        puVar3 = (uint *)(CONCAT44(uStack_364,uStack_368) + 0x18);
        *puVar3 = *puVar3 | 0x40000;
      }
      goto LAB_0e4feef3;
    }
    piVar27 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x48);
    iVar15 = *piVar27;
    while (iVar15 != iStack_360) {
      piVar27 = piVar27 + 0x1a;
      iVar15 = *piVar27;
    }
  }
  *(byte *)((long)piVar27 + 0x12) = *(byte *)((long)piVar27 + 0x12) | 4;
LAB_0e4feef3:
  func_0x0e6acb00(auStack_378,auStack_228,&UNK_0148f98d,8,0x10);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4c35f8;
  plVar28 = (long *)CONCAT44(iStack_35c,iStack_360);
  iStack_360 = (int)puVar21;
  iStack_35c = (int)((ulong)puVar21 >> 0x20);
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
  }
  uStack_2a8 = (undefined *)CONCAT44(uStack_2a8._4_4_,uStack_368);
  pcStack_2a0 = (code *)0x0;
  uStack_298 = (code *)((ulong)uStack_298 & 0xffffffff00000000);
  iStack_290 = 1;
  iStack_28c = 0;
  iStack_288 = 0;
  uStack_284 = 0;
  uStack_280 = 0xe625650;
  uStack_27c = 0;
  cStack_278 = 0xd0;
  uStack_277 = 0x48b06;
  auStack_270._8_8_ = &UNK_0e6b19e0;
  auStack_270._0_8_ = &UNK_0e6214a0;
  auStack_260._0_12_ = ZEXT812(0xe6b1bb0);
  auStack_250 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_378._8_8_,&uStack_2a8);
  uVar12 = auStack_250._8_8_;
  if ((long *)auStack_250._8_8_ != (long *)0x0) {
    LOCK();
    plVar28 = (long *)(auStack_250._8_8_ + 8);
    lVar20 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
      func_0x0412c2d0(uVar12);
    }
  }
  func_0x0e6acd00(auStack_378);
  func_0x048b0bc0(&iStack_360);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14eaba0  [cereal:document
 */
