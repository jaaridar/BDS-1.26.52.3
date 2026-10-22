/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4f1ef0 (ELF vaddr 0xe3f1ef0)
 * Label: string:A Jigsaw Structure Set is a collection of Jigsaw Structures
 * Body:  [[0e4f1ef0, 0e4f2197] [0e4f21a0, 0e4f21e1] [0e4f21f0, 0e4f2fc1] [0e4f2fd0, 0e4f3930] [0e4f3940, 0e4f53c7] [0e4f53d0, 0e4f5411] [0e4f5420, 0e4f6309] [0e4f6310, 0e4f6410] [0e4f6420, 0e4f6595] [0e4f65a0, 0e4f65e2] [0e4f65f0, 0e4f68d0] [0e4f68e0, 0e4f6914] [0e4f6920, 0e4f7b8f]]
 * Ghidra: FUN_0e4f1ef0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e4f1ef0(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined *puVar17;
  undefined4 uVar18;
  undefined1 auVar19 [8];
  char cVar20;
  int iVar21;
  int iVar22;
  undefined *puVar23;
  undefined1 (*pauVar24) [16];
  byte *pbVar25;
  undefined1 auVar26 [8];
  undefined8 *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  int *piVar30;
  code *pcVar31;
  int *piVar32;
  undefined **ppuVar33;
  undefined1 *puVar34;
  byte *pbVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  byte *pbVar40;
  ulong uVar41;
  undefined1 uVar42;
  long lVar43;
  uint *puVar44;
  bool bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_418 [8];
  undefined **ppuStack_410;
  uint uStack_408;
  undefined4 uStack_404;
  int iStack_400;
  int iStack_3fc;
  code *pcStack_3f8;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined1 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined1 uStack_3d0;
  undefined2 uStack_3cf;
  undefined1 uStack_3cd;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined2 uStack_370;
  undefined2 uStack_36e;
  uint uStack_36c;
  uint uStack_368;
  uint uStack_364;
  undefined8 uStack_360;
  undefined2 uStack_358;
  undefined2 uStack_356;
  uint uStack_354;
  uint uStack_350;
  undefined1 uStack_34c;
  ulong uStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  code *pcStack_328;
  code *pcStack_320;
  int iStack_318;
  uint uStack_314;
  int iStack_310;
  uint uStack_30c;
  undefined4 uStack_308;
  uint uStack_304;
  uint uStack_300;
  undefined1 auStack_2f8 [8];
  undefined8 *puStack_2f0;
  undefined1 auStack_2e8 [12];
  int iStack_2dc;
  int iStack_2d8;
  uint uStack_2d4;
  undefined1 auStack_2d0 [4];
  undefined4 uStack_2cc;
  char cStack_2c8;
  undefined7 uStack_2c7;
  undefined8 *puStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  undefined5 uStack_250;
  undefined3 uStack_24b;
  undefined5 uStack_248;
  undefined1 auStack_238 [16];
  code *pcStack_228;
  undefined8 uStack_220;
  int iStack_218;
  uint uStack_214;
  int iStack_210;
  uint uStack_20c;
  undefined4 uStack_208;
  uint uStack_204;
  uint uStack_200;
  undefined1 auStack_1f8 [16];
  code *pcStack_1e8;
  code *pcStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined4 uStack_1b8;
  undefined2 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined1 auStack_1a8 [16];
  code *pcStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_11f;
  undefined3 uStack_11b;
  undefined8 uStack_118;
  undefined *puStack_110;
  code *pcStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  
  puStack_338 = &UNK_01302d5c;
  puStack_330 = (undefined *)0x12;
  func_0x0470d9a0(auStack_418,&UNK_013d851d,0xd,0xd,&puStack_338);
  puVar34 = (undefined1 *)CONCAT44(uStack_404,uStack_408);
  ppuVar33 = ppuStack_410;
  if ((auStack_418[0] & 1) == 0) {
    puVar34 = auStack_418 + 1;
    ppuVar33 = (undefined **)(ulong)(auStack_418[0] >> 1);
  }
  if ((DAT_0f75c930 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c930), iVar21 != 0)) {
    func_0x0e687d30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75c8b0,0xf53dab8);
    func_0x0410844d(&DAT_0f75c930);
  }
  lStack_170 = param_1 + 0x18;
  plVar29 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75c8b0 + 4)) * 8);
  do {
    lVar43 = *plVar29;
    if (lVar43 == -1) goto LAB_0e4f1fd1;
    plVar29 = (long *)(*(long *)(param_1 + 0x30) + lVar43 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75c8b0 + 4))
  ;
  if (plVar29 == *(long **)(param_1 + 0x38)) {
LAB_0e4f1fd1:
    puVar23 = &DAT_0f75c8b0;
    iVar21 = iRam000000000f75c910;
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    iVar21 = *(int *)(puVar23 + 0x60);
  }
  if ((iVar21 == -0x2b3da790) && (lVar43 = *(long *)(puVar23 + 0x68), lVar43 != 0)) {
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    puVar34 = (undefined1 *)(lVar43 + 9);
    if (bVar45) {
      puVar34 = *(undefined1 **)(lVar43 + 0x18);
    }
    ppuVar33 = (undefined **)(ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      ppuVar33 = *(undefined ***)(lVar43 + 0x10);
    }
  }
  func_0x0e688330(auStack_2f8,param_1,puVar34,ppuVar33);
  if ((auStack_418[0] & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_404,uStack_408),(ulong)auStack_418 & 0xfffffffffffffffe);
  }
  if (cStack_2c8 == '\0') {
    func_0x04134310(auStack_1a8,0xe);
    pauVar24 = (undefined1 (*) [16])func_0x0412f0e0(auStack_1a8,0,&UNK_01284191,0xb);
    uStack_168 = *(undefined8 *)*pauVar24;
    uStack_160 = *(undefined8 *)(*pauVar24 + 8);
    uVar38 = *(ulong *)*pauVar24;
    uStack_340 = *(ulong *)pauVar24[1];
    *pauVar24 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar24[1] = 0;
    auVar26 = auStack_2f8;
    if ((DAT_0f75c930 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c930), iVar21 != 0)) {
      func_0x0e687d30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75c8b0,0xf53dab8);
      func_0x0410844d(&DAT_0f75c930);
    }
    uVar41 = uVar38 & 0xffffffffffffff00;
    plVar29 = (long *)(*(long *)((long)auVar26 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar26 + 0x20) -
                                           *(long *)((long)auVar26 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75c8b0 + 4)) * 8);
    do {
      lVar43 = *plVar29;
      if (lVar43 == -1) goto LAB_0e4f2120;
      plVar29 = (long *)(*(long *)((long)auVar26 + 0x30) + lVar43 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar26 + 0x30) + 8 + lVar43 * 0x18) !=
             *(uint *)(_DAT_0f75c8b0 + 4));
    if (plVar29 == *(long **)((long)auVar26 + 0x38)) {
LAB_0e4f2120:
      puVar23 = &DAT_0f75c8b0;
    }
    else {
      puVar23 = (undefined *)plVar29[2];
    }
    for (pbVar25 = *(byte **)((long)auStack_2f8 + 0x50);
        pbVar25 != *(byte **)((long)auStack_2f8 + 0x58); pbVar25 = pbVar25 + 0x38) {
      bVar2 = *pbVar25;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0e4f21fa;
      }
      else if (*(long *)(pbVar25 + 8) == 0x1d) {
LAB_0e4f21fa:
        if ((bVar2 & 1) == 0) {
          pbVar35 = pbVar25 + 1;
        }
        else {
          pbVar35 = *(byte **)(pbVar25 + 0x10);
        }
        auVar46[0] = -(*pbVar35 == 0x5b);
        auVar46[1] = -(pbVar35[1] == 99);
        auVar46[2] = -(pbVar35[2] == 0x65);
        auVar46[3] = -(pbVar35[3] == 0x72);
        auVar46[4] = -(pbVar35[4] == 0x65);
        auVar46[5] = -(pbVar35[5] == 0x61);
        auVar46[6] = -(pbVar35[6] == 0x6c);
        auVar46[7] = -(pbVar35[7] == 0x3a);
        auVar46[8] = -(pbVar35[8] == 0x6a);
        auVar46[9] = -(pbVar35[9] == 0x73);
        auVar46[10] = -(pbVar35[10] == 0x6f);
        auVar46[0xb] = -(pbVar35[0xb] == 0x6e);
        auVar46[0xc] = -(pbVar35[0xc] == 0x5f);
        auVar46[0xd] = -(pbVar35[0xd] == 0x73);
        auVar46[0xe] = -(pbVar35[0xe] == 99);
        auVar46[0xf] = -(pbVar35[0xf] == 0x68);
        auVar49[0] = -(pbVar35[0xd] == 0x73);
        auVar49[1] = -(pbVar35[0xe] == 99);
        auVar49[2] = -(pbVar35[0xf] == 0x68);
        auVar49[3] = -(pbVar35[0x10] == 0x65);
        auVar49[4] = -(pbVar35[0x11] == 0x6d);
        auVar49[5] = -(pbVar35[0x12] == 0x61);
        auVar49[6] = -(pbVar35[0x13] == 0x5f);
        auVar49[7] = -(pbVar35[0x14] == 0x70);
        auVar49[8] = -(pbVar35[0x15] == 0x72);
        auVar49[9] = -(pbVar35[0x16] == 0x6f);
        auVar49[10] = -(pbVar35[0x17] == 0x70);
        auVar49[0xb] = -(pbVar35[0x18] == 0x65);
        auVar49[0xc] = -(pbVar35[0x19] == 0x72);
        auVar49[0xd] = -(pbVar35[0x1a] == 0x74);
        auVar49[0xe] = -(pbVar35[0x1b] == 0x79);
        auVar49[0xf] = -(pbVar35[0x1c] == 0x5d);
        auVar49 = auVar49 & auVar46;
        if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar25 == *(byte **)((long)auStack_2f8 + 0x58)) {
LAB_0e4f2228:
      uVar18 = uStack_2cc;
      if (auStack_2d0 == (undefined1  [4])0x0) {
        if (((puVar23 == (undefined *)0x0) || (*(int *)(puVar23 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar23 + 0x68) == 0)) goto LAB_0e4f22b2;
        lVar43 = *(long *)(puVar23 + 0x68) + 0x38;
      }
      else {
        if (puVar23 == (undefined *)0x0) {
          puVar23 = (undefined *)func_0x048aead0((long)auVar26 + 0x18);
        }
        auVar26 = (undefined1  [8])func_0x048b0c90((long)auVar26 + 0x18,puVar23,uVar18,1);
        if (auVar26 == (undefined1  [8])0x0) {
          _auStack_418 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_418);
          auVar26 = auStack_418;
          if (auStack_418 == (undefined1  [8])0x0) goto LAB_0e4f22b2;
        }
        if ((*(int *)((long)auVar26 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auVar26 + 0x58) != 0)) {
          lVar43 = *(long *)((long)auVar26 + 0x58) + 0x40;
        }
        else {
LAB_0e4f22b2:
          lVar43 = 0;
        }
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auStack_238._8_8_;
      auStack_238 = auVar6 << 0x40;
      pcStack_228 = (code *)&UNK_048b4ab0;
      iStack_218 = -0x2cc4263b;
      uStack_220 = (code *)&UNK_048b49f0;
      uStack_214 = CONCAT31(uStack_214._1_3_,1);
      puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar27 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      *puVar27 = uStack_168;
      puVar27[1] = uStack_160;
      puVar27[2] = uStack_340;
      *(undefined2 *)(puVar27 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar27 + 4) = (undefined1  [16])0x0;
      puVar27[6] = 0;
      iStack_400 = 0x48b4ab0;
      iStack_3fc = 0;
      pcStack_3f8 = (code *)&UNK_048b49f0;
      uStack_3f0 = 0xd33bd9c5;
      uStack_3ec = CONCAT31(uStack_3ec._1_3_,1);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auStack_238._8_8_;
      auStack_238 = auVar7 << 0x40;
      ppuStack_410 = (undefined **)puVar27;
      auStack_418 = (undefined1  [8])&UNK_048b46e0;
      pcStack_1e8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcStack_1e8 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_014d987e;
      auStack_1f8._8_8_ = 0x1d;
      auStack_1f8._0_8_ = 0x21;
      *(ulong *)(pcStack_1e8 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcStack_1e8 + 0x15) = uVar4;
      uVar4 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(undefined8 *)pcStack_1e8 = _DAT_014d9869;
      *(undefined8 *)(pcStack_1e8 + 8) = uVar4;
      pcStack_1e8[0x1d] = (code)0x0;
      lVar43 = func_0x048b5060(lVar43,auStack_1f8);
      *(undefined **)(lVar43 + 0x20) = &UNK_048b46e0;
      pcVar31 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar43 + 0x20) != auStack_418) {
        puVar27 = (undefined8 *)(lVar43 + 0x28);
        if (*(code **)(lVar43 + 0x40) == (code *)0x0) {
LAB_0e4f2436:
          ppuVar33 = ppuStack_410;
          ppuStack_410 = (undefined **)0x0;
          *puVar27 = ppuVar33;
        }
        else {
          (**(code **)(lVar43 + 0x40))(puVar27);
          if ((char)uStack_3ec != '\0') {
            if ((char)uStack_3ec != '\x02') goto LAB_0e4f2436;
            (*(code *)CONCAT44(iStack_3fc,iStack_400))(5,&ppuStack_410,puVar27);
          }
        }
        *(ulong *)(lVar43 + 0x38) = CONCAT44(iStack_3fc,iStack_400);
        *(code **)(lVar43 + 0x40) = pcStack_3f8;
        *(uint *)(lVar43 + 0x48) = uStack_3f0;
        *(char *)(lVar43 + 0x4c) = (char)uStack_3ec;
        pcVar31 = pcStack_3f8;
      }
      if ((auStack_1f8[0] & 1) != 0) {
        func_0x0412a280(pcStack_1e8,auStack_1f8._0_8_ & 0xfffffffffffffffe);
        pcVar31 = pcStack_3f8;
      }
      if (pcVar31 != (code *)0x0) {
        (*pcVar31)(&ppuStack_410);
      }
      if (uStack_220 != (code *)0x0) {
        (*uStack_220)(auStack_238);
      }
      uStack_340 = 0;
      uVar41 = 0;
      uVar38 = 0;
    }
    else {
      iVar21 = *(int *)(pbVar25 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar22 = func_0x04108328(&DAT_0f550768), iVar22 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar21 == _DAT_0f550754) goto LAB_0e4f2228;
    }
    iStack_318 = iStack_2d8;
    uStack_314 = uStack_2d4;
    uStack_308 = (undefined4)CONCAT71(uStack_2c7,cStack_2c8);
    uStack_304 = (uint)((uint7)uStack_2c7 >> 0x18);
    pcStack_328 = (code *)auStack_2e8._0_8_;
    pcStack_320 = stack0xfffffffffffffd20;
    puStack_338 = (undefined *)auStack_2f8;
    puStack_330 = (undefined *)puStack_2f0;
    iStack_310 = 4;
    uStack_30c = 0x1e1bc4d5;
    if ((DAT_0f75c950 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c950), iVar21 != 0)) {
      func_0x0e687e40();
      func_0x0410844d(&DAT_0f75c950);
    }
    auStack_418._0_4_ = uStack_30c;
    ppuStack_410 = (undefined **)0x0;
    uStack_408 = 0;
    iStack_400 = 2;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)&SUB_048aead0;
    uStack_3f0 = 0xd89b2d0;
    uStack_3ec = 0;
    puStack_3e8 = &UNK_0e688e90;
    puStack_3e0 = (undefined8 *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    func_0x049057f0(&puStack_330,auStack_418);
    func_0x048aea50(auStack_418);
    pcStack_228 = pcStack_320;
    auStack_238._8_8_ = pcStack_328;
    auStack_238._0_8_ = puStack_330;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f551bc8), iVar21 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_418._0_4_ = _DAT_0f551bb4;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(puVar28 + 1) = (undefined1  [16])0x0;
    *puVar28 = &UNK_0ef46c48;
    puVar28[3] = puVar27;
    puVar28[4] = 0;
    *(undefined1 *)(puVar28 + 5) = 0xff;
    ppuStack_410 = (undefined **)(puVar28 + 3);
    uStack_408 = (uint)puVar28;
    uStack_404 = (undefined4)((ulong)puVar28 >> 0x20);
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_238,auStack_418);
    plVar29 = (long *)CONCAT44(uStack_404,uStack_408);
    if (plVar29 != (long *)0x0) {
      LOCK();
      plVar1 = plVar29 + 1;
      lVar43 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        func_0x0412c2d0(plVar29);
      }
    }
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_1f8._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    if ((DAT_0f75c950 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c950), iVar21 != 0)) {
      func_0x0e687e40();
      func_0x0410844d(&DAT_0f75c950);
    }
    if (uStack_314 == 2) {
      piVar32 = *(int **)(*(long *)(pcStack_320 + 0x78) + 0x60);
      iVar21 = *piVar32;
      while (iVar21 != iStack_318) {
        piVar32 = piVar32 + 0x16;
        iVar21 = *piVar32;
      }
      pcVar31 = *(code **)(piVar32 + 0xc);
      while (pcVar31 != pcStack_328) {
        piVar32 = *(int **)(piVar32 + 0xe);
        pcVar31 = *(code **)(piVar32 + 0xc);
      }
LAB_0e4f278a:
      *(byte *)((long)piVar32 + 0x12) = *(byte *)((long)piVar32 + 0x12) | 2;
    }
    else {
      if (uStack_314 == 1) {
        piVar32 = *(int **)(*(long *)(pcStack_320 + 0x78) + 0x48);
        iVar21 = *piVar32;
        while (iVar21 != iStack_318) {
          piVar32 = piVar32 + 0x1a;
          iVar21 = *piVar32;
        }
        goto LAB_0e4f278a;
      }
      if (uStack_314 == 0) {
        *(uint *)(pcStack_320 + 0x18) = *(uint *)(pcStack_320 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f75c950 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c950), iVar21 != 0)) {
      func_0x0e687e40();
      func_0x0410844d(&DAT_0f75c950);
    }
    auStack_418._0_4_ = 0xbf75c8f8;
    ppuStack_410 = (undefined **)0x0;
    uStack_408 = 1;
    iStack_400 = 0;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)&SUB_048b2190;
    uStack_3f0 = 0x48b06d0;
    uStack_3ec = 0;
    puStack_3e8 = &UNK_0e6897d0;
    puStack_3e0 = (undefined8 *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    func_0x049057f0(&puStack_330,auStack_418);
    func_0x048aea50(auStack_418);
    uStack_220 = (code *)CONCAT44(uStack_314,iStack_318);
    pcStack_228 = pcStack_320;
    auStack_238._8_8_ = pcStack_328;
    auStack_238._0_8_ = puStack_330;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar21 = func_0x04108328(&DAT_0f551cb0), iVar21 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_418._0_4_ = _DAT_0f551c9c;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar28 + 1) = (undefined1  [16])0x0;
    *puVar28 = &UNK_0ef46c98;
    puVar28[3] = puVar27;
    *(undefined1 *)(puVar28 + 4) = 0xff;
    ppuStack_410 = (undefined **)(puVar28 + 3);
    uStack_408 = (uint)puVar28;
    uStack_404 = (undefined4)((ulong)puVar28 >> 0x20);
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_238,auStack_418);
    plVar29 = (long *)CONCAT44(uStack_404,uStack_408);
    if (plVar29 != (long *)0x0) {
      LOCK();
      plVar1 = plVar29 + 1;
      lVar43 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        func_0x0412c2d0(plVar29);
      }
    }
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_1f8._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    if ((uVar38 & 1) != 0) {
      func_0x0412a280(uStack_340,uVar41 | (byte)uVar38 & 0xfe);
    }
    if ((auStack_1a8[0] & 1) != 0) {
      func_0x0412a280(pcStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f75c9e8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c9e8), iVar21 != 0)) {
    func_0x0e689a30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75c968,0xf53dab8);
    func_0x0410844d(&DAT_0f75c9e8);
  }
  plVar29 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75c968 + 4)) * 8);
  do {
    lVar43 = *plVar29;
    if (lVar43 == -1) goto LAB_0e4f29e0;
    plVar29 = (long *)(*(long *)(param_1 + 0x30) + lVar43 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75c968 + 4))
  ;
  if (plVar29 == *(long **)(param_1 + 0x38)) {
LAB_0e4f29e0:
    puVar23 = &DAT_0f75c968;
    if (iRam000000000f75c9c8 != -0x2b3da790) goto LAB_0e4f2a4e;
LAB_0e4f2a0b:
    lVar43 = *(long *)(puVar23 + 0x68);
    if (lVar43 == 0) goto LAB_0e4f2a4e;
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    lVar36 = lVar43 + 9;
    if (bVar45) {
      lVar36 = *(long *)(lVar43 + 0x18);
    }
    uVar38 = (ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      uVar38 = *(ulong *)(lVar43 + 0x10);
    }
    func_0x0e689ff0(&puStack_338,param_1,lVar36,uVar38);
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    if (*(int *)(puVar23 + 0x60) == -0x2b3da790) goto LAB_0e4f2a0b;
LAB_0e4f2a4e:
    func_0x0e689ff0(&puStack_338,param_1,&UNK_013f4016,0x20);
  }
  if ((char)uStack_308 == '\0') {
    uStack_2a8._4_4_ = (uint)(uStack_2a8 >> 0x20);
    if ((DAT_0f75ca08 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75ca08), iVar21 != 0)) {
      func_0x0e689b40();
      func_0x0410844d(&DAT_0f75ca08);
    }
    puVar23 = puStack_338;
    iStack_310 = 1;
    uStack_30c = 0x28a5a83e;
    if ((DAT_0f75c9e8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c9e8), iVar21 != 0)) {
      func_0x0e689a30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75c968,0xf53dab8);
      func_0x0410844d(&DAT_0f75c9e8);
    }
    plVar29 = (long *)(*(long *)(puVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar23 + 0x20) - *(long *)(puVar23 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75c968 + 4)) * 8);
    do {
      lVar43 = *plVar29;
      if (lVar43 == -1) goto LAB_0e4f2b10;
      plVar29 = (long *)(*(long *)(puVar23 + 0x30) + lVar43 * 0x18);
    } while (*(uint *)(*(long *)(puVar23 + 0x30) + 8 + lVar43 * 0x18) !=
             *(uint *)(_DAT_0f75c968 + 4));
    if (plVar29 == *(long **)(puVar23 + 0x38)) {
LAB_0e4f2b10:
      auStack_418 = (undefined1  [8])&DAT_0f75c968;
    }
    else {
      auStack_418 = (undefined1  [8])plVar29[2];
    }
    ppuStack_410 = (undefined **)(puVar23 + 0x18);
    func_0x0ed621a0(auStack_418,uStack_30c);
    auStack_418._0_2_ = 1;
    ppuStack_410 = &puStack_330;
    uStack_408 = uStack_30c;
    iStack_400 = 0;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)0x0;
    uStack_3f0 = 0;
    uStack_3ec = 0;
    puStack_3e8 = (undefined1 *)0x0;
    puStack_3e0 = (undefined8 *)0x0;
    uStack_3d8 = 0x65646914;
    uStack_3d4 = 0x6669746e;
    uStack_3d0 = 0x69;
    uStack_3cf = 0x7265;
    uStack_3cd = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0x3f600000;
    func_0x048afb10(&uStack_3c0,8);
    uStack_368 = 0;
    uStack_364 = 0;
    uStack_360 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_36e = 0;
    uStack_36c = 0;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_358 = 0xff00;
    uStack_354 = uStack_354 & 0xffffff00;
    uStack_350 = uStack_350 & 0xffffff00;
    uStack_34c = 0;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0f4c55f0;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0xe68ad80;
    uStack_2cc = 0;
    cStack_2c8 = -0x30;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0e687c70;
    auStack_2b8._8_8_ = &UNK_0e68b000;
    auStack_2b8._0_8_ = &UNK_0e68ae40;
    uStack_2a8 = (ulong)uStack_2a8._4_4_ << 0x20;
    auStack_2a0 = (undefined1  [16])0x0;
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    ppuVar33 = ppuStack_410;
    if ((DAT_0f550a20 == '\0') && (iVar21 = func_0x04108328(&DAT_0f550a20), iVar21 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_2f8._0_4_ = _DAT_0f550a0c;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar31 = pcStack_3f8;
    *(undefined1 (*) [16])(puVar27 + 1) = (undefined1  [16])0x0;
    *puVar27 = &UNK_0ef439d0;
    uVar4 = CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = 0;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)0x0;
    puVar27[3] = uVar4;
    puVar27[4] = pcVar31;
    puVar27[7] = puStack_3e0;
    puVar27[5] = CONCAT44(uStack_3ec,uStack_3f0);
    puVar27[6] = puStack_3e8;
    uStack_3f0 = 0;
    uStack_3ec = 0;
    puStack_3e8 = (undefined1 *)0x0;
    puStack_3e0 = (undefined8 *)0x0;
    puVar27[10] = CONCAT44(uStack_3c4,uStack_3c8);
    puVar27[8] = CONCAT44(uStack_3d4,uStack_3d8);
    puVar27[9] = CONCAT44(uStack_3cc,CONCAT13(uStack_3cd,CONCAT21(uStack_3cf,uStack_3d0)));
    uStack_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    puVar27[0xb] = uStack_3c0;
    puVar27[0xc] = plStack_3b8;
    puVar27[0xd] = uStack_3b0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    uStack_3b0 = 0;
    puVar27[0xe] = CONCAT44(uStack_3a4,uStack_3a8);
    puVar27[0xf] = uStack_3a0;
    puVar27[0x10] = uStack_398;
    uStack_3a8 = 0;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    *(undefined4 *)(puVar27 + 0x11) = uStack_390;
    puVar27[0x12] = uStack_388;
    puVar27[0x13] = uStack_380;
    puVar27[0x14] = uStack_378;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    puVar27[0x17] = uStack_360;
    puVar27[0x15] = CONCAT44(uStack_36c,CONCAT22(uStack_36e,uStack_370));
    puVar27[0x16] = CONCAT44(uStack_364,uStack_368);
    uStack_370 = 0;
    uStack_36e = 0;
    uStack_36c = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    uStack_360 = 0;
    *(ulong *)((long)puVar27 + 0xc5) = CONCAT17(uStack_34c,CONCAT43(uStack_350,uStack_354._1_3_));
    puVar27[0x18] = CONCAT44(uStack_354,CONCAT22(uStack_356,uStack_358));
    puStack_2f0 = puVar27 + 3;
    auStack_2e8._0_8_ = puVar27;
    auStack_238 = (undefined1  [16])0x0;
    func_0x048afd20(ppuVar33,auStack_2f8);
    uVar4 = auStack_2e8._0_8_;
    if ((long *)auStack_2e8._0_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2e8._0_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2e8._0_8_ + 0x10))(auStack_2e8._0_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    uVar4 = auStack_238._8_8_;
    if ((long *)auStack_238._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_238._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_238._8_8_ + 0x10))(auStack_238._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puVar23 = ppuVar33[2];
    iVar21 = *(int *)((long)ppuVar33 + 0x1c);
    if (iVar21 == 2) {
      piVar32 = *(int **)(*(long *)(puVar23 + 0x78) + 0x60);
      iVar21 = *piVar32;
      while (iVar21 != *(int *)(ppuVar33 + 3)) {
        piVar32 = piVar32 + 0x16;
        iVar21 = *piVar32;
      }
      for (; *(undefined **)(piVar32 + 0xc) != ppuVar33[1]; piVar32 = *(int **)(piVar32 + 0xe)) {
      }
LAB_0e4f2fda:
      piVar32[4] = piVar32[4] | auStack_418._0_4_ << 0x10;
    }
    else {
      if (iVar21 == 1) {
        piVar32 = *(int **)(*(long *)(puVar23 + 0x78) + 0x48);
        iVar21 = *piVar32;
        while (iVar21 != *(int *)(ppuVar33 + 3)) {
          piVar32 = piVar32 + 0x1a;
          iVar21 = *piVar32;
        }
        goto LAB_0e4f2fda;
      }
      if (iVar21 == 0) {
        *(uint *)(puVar23 + 0x18) = *(uint *)(puVar23 + 0x18) | auStack_418._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_400);
  }
  if ((DAT_0f75caa0 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75caa0), iVar21 != 0)) {
    func_0x0e68b530();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ca20,0xf53dab8);
    func_0x0410844d(&DAT_0f75caa0);
  }
  plVar29 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75ca20 + 4)) * 8);
  do {
    lVar43 = *plVar29;
    if (lVar43 == -1) goto LAB_0e4f3040;
    plVar29 = (long *)(*(long *)(param_1 + 0x30) + lVar43 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75ca20 + 4))
  ;
  if (plVar29 == *(long **)(param_1 + 0x38)) {
LAB_0e4f3040:
    puVar23 = &DAT_0f75ca20;
    if (iRam000000000f75ca80 != -0x2b3da790) goto LAB_0e4f3098;
LAB_0e4f306b:
    lVar43 = *(long *)(puVar23 + 0x68);
    if (lVar43 == 0) goto LAB_0e4f3098;
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    puVar23 = (undefined *)(lVar43 + 9);
    if (bVar45) {
      puVar23 = *(undefined **)(lVar43 + 0x18);
    }
    uVar38 = (ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      uVar38 = *(ulong *)(lVar43 + 0x10);
    }
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    if (*(int *)(puVar23 + 0x60) == -0x2b3da790) goto LAB_0e4f306b;
LAB_0e4f3098:
    puVar23 = &UNK_012b87e1;
    uVar38 = 0xd;
  }
  func_0x0e68b970(&puStack_338,param_1,puVar23,uVar38);
  uStack_304 = uStack_304 & 0xffffff00;
  uStack_300 = uStack_300 & 0xffffff00;
  if ((char)uStack_308 == '\0') {
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar4 = _UNK_0138b3b5;
    *puVar27 = _DAT_0138b3ad;
    puVar27[1] = uVar4;
    *(undefined8 *)((long)puVar27 + 0xf) = 0x6461657270735f6d;
    *(undefined1 *)((long)puVar27 + 0x17) = 0;
    plVar29 = (long *)func_0x0eee3290();
    *(undefined1 *)puVar27 = *(undefined1 *)(*plVar29 + 0x1b4);
    *(undefined1 *)((long)puVar27 + 1) = *(undefined1 *)(*plVar29 + 0x1a4);
    *(undefined1 *)((long)puVar27 + 2) = *(undefined1 *)(*plVar29 + 0x1b8);
    *(undefined1 *)((long)puVar27 + 3) = *(undefined1 *)(*plVar29 + 0x194);
    *(undefined1 *)((long)puVar27 + 4) = *(undefined1 *)(*plVar29 + 0x18c);
    *(undefined1 *)((long)puVar27 + 5) = *(undefined1 *)(*plVar29 + 0x1c8);
    *(undefined1 *)((long)puVar27 + 6) = *(undefined1 *)(*plVar29 + 0x184);
    *(undefined1 *)((long)puVar27 + 7) = *(undefined1 *)(*plVar29 + 0x198);
    *(undefined1 *)(puVar27 + 1) = *(undefined1 *)(*plVar29 + 0x1d0);
    *(undefined1 *)((long)puVar27 + 9) = *(undefined1 *)(*plVar29 + 0xe8);
    *(undefined1 *)((long)puVar27 + 10) = *(undefined1 *)(*plVar29 + 0x1c8);
    *(undefined1 *)((long)puVar27 + 0xb) = *(undefined1 *)(*plVar29 + 0x184);
    *(undefined1 *)((long)puVar27 + 0xc) = *(undefined1 *)(*plVar29 + 0x1b8);
    *(undefined1 *)((long)puVar27 + 0xd) = *(undefined1 *)(*plVar29 + 400);
    *(undefined1 *)((long)puVar27 + 0xe) = *(undefined1 *)(*plVar29 + 0x1bc);
    *(undefined1 *)((long)puVar27 + 0xf) = *(undefined1 *)(*plVar29 + 0x1b4);
    *(undefined1 *)(puVar27 + 2) = *(undefined1 *)(*plVar29 + (ulong)*(byte *)(puVar27 + 2) * 4);
    *(undefined1 *)((long)puVar27 + 0x11) =
         *(undefined1 *)(*plVar29 + (ulong)*(byte *)((long)puVar27 + 0x11) * 4);
    *(undefined1 *)((long)puVar27 + 0x12) =
         *(undefined1 *)(*plVar29 + (ulong)*(byte *)((long)puVar27 + 0x12) * 4);
    *(undefined1 *)((long)puVar27 + 0x13) =
         *(undefined1 *)(*plVar29 + (ulong)*(byte *)((long)puVar27 + 0x13) * 4);
    *(undefined1 *)((long)puVar27 + 0x14) =
         *(undefined1 *)(*plVar29 + (ulong)*(byte *)((long)puVar27 + 0x14) * 4);
    *(undefined1 *)((long)puVar27 + 0x15) =
         *(undefined1 *)(*plVar29 + (ulong)*(byte *)((long)puVar27 + 0x15) * 4);
    *(undefined1 *)((long)puVar27 + 0x16) =
         *(undefined1 *)(*plVar29 + (ulong)*(byte *)((long)puVar27 + 0x16) * 4);
    plStack_3b8 = (long *)0x0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    puStack_3e8 = (undefined1 *)0x0;
    puStack_3e0 = (undefined8 *)0x0;
    pcStack_3f8 = (code *)0x0;
    uStack_3f0 = 0;
    uStack_3ec = 0;
    uStack_408 = 0;
    uStack_404 = 0;
    iStack_400 = 0;
    iStack_3fc = 0;
    _auStack_418 = (undefined1  [16])0x0;
    uStack_3a8 = 0x3f600000;
    func_0x048afb10(&uStack_3d8,8);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_388 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_370 = 0xff00;
    uStack_36c = uStack_36c & 0xffffff00;
    uStack_368 = uStack_368 & 0xffffff00;
    uStack_364 = uStack_364 & 0xffffff00;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar28 = &UNK_0f4c56f0;
    auVar26 = auStack_418;
    auStack_418 = (undefined1  [8])puVar28;
    if (auVar26 != (undefined1  [8])0x0) {
      (**(code **)(*(long *)auVar26 + 8))();
    }
    if ((uStack_3f0 & 1) != 0) {
      func_0x0412a280(puStack_3e0,CONCAT44(uStack_3ec,uStack_3f0) & 0xfffffffffffffffe);
    }
    uStack_3f0 = 0x1b;
    uStack_3ec = 0;
    puStack_3e8 = (undefined1 *)0x17;
    puStack_3e0 = puVar27;
    func_0x0412f5e0(&uStack_408,&DAT_0138b3ad,0x17);
    _auStack_2f8 = _auStack_418;
    _auStack_418 = (undefined1  [16])0x0;
    iStack_2d8 = (int)pcStack_3f8;
    uStack_2d4 = (uint)((ulong)pcStack_3f8 >> 0x20);
    auStack_2e8._4_4_ = uStack_404;
    auStack_2e8._0_4_ = uStack_408;
    iStack_2dc = iStack_3fc;
    auStack_2e8._8_4_ = iStack_400;
    uStack_408 = 0;
    uStack_404 = 0;
    iStack_400 = 0;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)0x0;
    puStack_2c0 = puStack_3e0;
    auStack_2d0 = (undefined1  [4])uStack_3f0;
    uStack_2cc = uStack_3ec;
    cStack_2c8 = (char)puStack_3e8;
    uStack_2c7 = (undefined7)((ulong)puStack_3e8 >> 8);
    uStack_3f0 = 0;
    uStack_3ec = 0;
    puStack_3e8 = (undefined1 *)0x0;
    puStack_3e0 = (undefined8 *)0x0;
    auStack_2b8._4_4_ = uStack_3d4;
    auStack_2b8._0_4_ = uStack_3d8;
    auStack_2b8._9_2_ = uStack_3cf;
    auStack_2b8[8] = uStack_3d0;
    auStack_2b8[0xb] = uStack_3cd;
    auStack_2b8._12_4_ = uStack_3cc;
    uStack_2a8 = CONCAT44(uStack_3c4,uStack_3c8);
    uStack_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    auStack_2a0._8_8_ = plStack_3b8;
    auStack_2a0._0_8_ = uStack_3c0;
    uStack_290 = uStack_3b0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    uStack_3b0 = 0;
    uStack_288 = uStack_3a8;
    auStack_280._8_8_ = uStack_398;
    auStack_280._0_8_ = uStack_3a0;
    uStack_270 = CONCAT44(uStack_38c,uStack_390);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    auVar5._8_2_ = uStack_370;
    auVar5._0_8_ = uStack_378;
    auVar5._10_2_ = uStack_36e;
    auVar5._12_4_ = uStack_36c;
    uStack_258 = uStack_378;
    uStack_250 = auVar5._8_5_;
    auStack_268._8_8_ = uStack_380;
    auStack_268._0_8_ = uStack_388;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_24b = uStack_36c._1_3_;
    uStack_248 = (undefined5)
                 (CONCAT17((undefined1)uStack_364,CONCAT43(uStack_368,uStack_36c._1_3_)) >> 0x18);
    func_0x048b0bc0();
    bVar45 = ((uint)auStack_2d0 & 1) != 0;
    puVar27 = (undefined8 *)(auStack_2d0 + 1);
    if (bVar45) {
      puVar27 = puStack_2c0;
    }
    uVar38 = (ulong)(auStack_2d0[0] >> 1);
    if (bVar45) {
      uVar38 = CONCAT71(uStack_2c7,cStack_2c8);
    }
    if (uVar38 == 0) {
      uStack_30c = 0x811c9dc5;
    }
    else {
      uVar41 = (ulong)((uint)uVar38 & 3);
      if (uVar38 < 4) {
        uStack_30c = 0x811c9dc5;
        uVar39 = 0;
      }
      else {
        uStack_30c = 0x811c9dc5;
        uVar39 = 0;
        do {
          uStack_30c = ((int)*(char *)((long)puVar27 + uVar39 + 3) ^
                       ((int)*(char *)((long)puVar27 + uVar39 + 2) ^
                       ((int)*(char *)((long)puVar27 + uVar39 + 1) ^
                       ((int)*(char *)((long)puVar27 + uVar39) ^ uStack_30c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar39 = uVar39 + 4;
        } while ((uVar38 & 0xfffffffffffffffc) != uVar39);
      }
      if (uVar41 != 0) {
        uVar38 = 0;
        do {
          uStack_30c = ((int)*(char *)((long)puVar27 + uVar38 + uVar39) ^ uStack_30c) * 0x1000193;
          uVar38 = uVar38 + 1;
        } while (uVar41 != uVar38);
      }
    }
    iStack_310 = 2;
    if ((DAT_0f75cac0 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cac0), iVar21 != 0)) {
      func_0x0e68b640();
      func_0x0410844d(&DAT_0f75cac0);
    }
    auStack_418._0_4_ = uStack_30c;
    ppuStack_410 = (undefined **)0x0;
    uStack_408 = 3;
    iStack_400 = 1;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)0x0;
    uStack_3f0 = 0xe68f1f0;
    uStack_3ec = 0;
    puStack_3e8 = &SUB_048b06d0;
    puStack_3e0 = (undefined8 *)&UNK_0e68b470;
    uStack_3d8 = 0xe68f2b0;
    uStack_3d4 = 0;
    uStack_3d0 = 0xc0;
    uStack_3cf = 0x68f2;
    uStack_3cd = 0xe;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(&puStack_330,auStack_418);
    plVar29 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar43 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar29);
      }
    }
    uStack_220 = (code *)CONCAT44(uStack_314,iStack_318);
    pcStack_228 = pcStack_320;
    auStack_238._8_8_ = pcStack_328;
    auStack_238._0_8_ = puStack_330;
    if ((DAT_0f550a20 == '\0') && (iVar21 = func_0x04108328(&DAT_0f550a20), iVar21 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_418._0_4_ = _DAT_0f550a0c;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(puVar27 + 1) = (undefined1  [16])0x0;
    *puVar27 = &UNK_0ef439d0;
    auVar26 = auStack_2f8;
    puVar28 = puStack_2f0;
    _auStack_2f8 = (undefined1  [16])0x0;
    puVar27[3] = auVar26;
    puVar27[4] = puVar28;
    puVar27[7] = CONCAT44(uStack_2d4,iStack_2d8);
    puVar27[5] = auStack_2e8._0_8_;
    puVar27[6] = stack0xfffffffffffffd20;
    _auStack_2e8 = (undefined1  [16])0x0;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    puVar27[10] = puStack_2c0;
    puVar27[8] = CONCAT44(uStack_2cc,auStack_2d0);
    puVar27[9] = CONCAT71(uStack_2c7,cStack_2c8);
    auStack_2d0 = (undefined1  [4])0x0;
    uStack_2cc = 0;
    cStack_2c8 = '\0';
    uStack_2c7 = 0;
    puStack_2c0 = (undefined8 *)0x0;
    puVar27[0xb] = auStack_2b8._0_8_;
    puVar27[0xc] = auStack_2b8._8_8_;
    puVar27[0xd] = uStack_2a8;
    auStack_2b8 = (undefined1  [16])0x0;
    uStack_2a8 = 0;
    puVar27[0xe] = auStack_2a0._0_8_;
    puVar27[0xf] = auStack_2a0._8_8_;
    puVar27[0x10] = uStack_290;
    auStack_2a0 = (undefined1  [16])0x0;
    uStack_290 = 0;
    *(undefined4 *)(puVar27 + 0x11) = uStack_288;
    puVar27[0x12] = auStack_280._0_8_;
    puVar27[0x13] = auStack_280._8_8_;
    puVar27[0x14] = uStack_270;
    auStack_280 = (undefined1  [16])0x0;
    uStack_270 = 0;
    puVar27[0x17] = uStack_258;
    puVar27[0x15] = auStack_268._0_8_;
    puVar27[0x16] = auStack_268._8_8_;
    auStack_268 = (undefined1  [16])0x0;
    uStack_258 = 0;
    *(ulong *)((long)puVar27 + 0xc5) = CONCAT53(uStack_248,uStack_24b);
    puVar27[0x18] = CONCAT35(uStack_24b,uStack_250);
    ppuStack_410 = (undefined **)(puVar27 + 3);
    uStack_408 = (uint)puVar27;
    uStack_404 = (undefined4)((ulong)puVar27 >> 0x20);
    auStack_1f8 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_238,auStack_418);
    plVar29 = (long *)CONCAT44(uStack_404,uStack_408);
    if (plVar29 != (long *)0x0) {
      LOCK();
      plVar1 = plVar29 + 1;
      lVar43 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        func_0x0412c2d0(plVar29);
      }
    }
    uVar4 = auStack_1f8._8_8_;
    if ((long *)auStack_1f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_1f8._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_1f8._8_8_ + 0x10))(auStack_1f8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puVar23 = puStack_338;
    if (uStack_220._4_4_ == 2) {
      piVar32 = *(int **)(*(long *)(pcStack_228 + 0x78) + 0x60);
      iVar21 = *piVar32;
      while (iVar21 != (int)uStack_220) {
        piVar32 = piVar32 + 0x16;
        iVar21 = *piVar32;
      }
      for (; *(long *)(piVar32 + 0xc) != auStack_238._8_8_; piVar32 = *(int **)(piVar32 + 0xe)) {
      }
LAB_0e4f394a:
      *(byte *)((long)piVar32 + 0x12) = *(byte *)((long)piVar32 + 0x12) | 9;
    }
    else {
      if (uStack_220._4_4_ == 1) {
        piVar32 = *(int **)(*(long *)(pcStack_228 + 0x78) + 0x48);
        iVar21 = *piVar32;
        while (iVar21 != (int)uStack_220) {
          piVar32 = piVar32 + 0x1a;
          iVar21 = *piVar32;
        }
        goto LAB_0e4f394a;
      }
      if (uStack_220._4_4_ == 0) {
        pcStack_228[0x1a] = (code)((byte)pcStack_228[0x1a] | 9);
      }
    }
    if ((char)uStack_300 == '\0') {
      uStack_304 = 0xbb8863ad;
      uStack_300 = CONCAT31(uStack_300._1_3_,1);
      auStack_418._0_4_ = 0xbb8863ad;
      if ((DAT_0f75caa0 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75caa0), iVar21 != 0)) {
        func_0x0e68b530();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ca20,0xf53dab8);
        func_0x0410844d(&DAT_0f75caa0);
      }
      plVar29 = (long *)(*(long *)(puVar23 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar23 + 0x20) - *(long *)(puVar23 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f75ca20 + 4)) * 8);
      do {
        lVar43 = *plVar29;
        if (lVar43 == -1) goto LAB_0e4f39e0;
        plVar29 = (long *)(*(long *)(puVar23 + 0x30) + lVar43 * 0x18);
      } while (*(uint *)(*(long *)(puVar23 + 0x30) + 8 + lVar43 * 0x18) !=
               *(uint *)(_DAT_0f75ca20 + 4));
      if (plVar29 == *(long **)(puVar23 + 0x38)) {
LAB_0e4f39e0:
        puVar23 = &DAT_0f75ca20;
      }
      else {
        puVar23 = (undefined *)plVar29[2];
      }
      lVar43 = *(long *)(puVar23 + 0x68);
      piVar30 = *(int **)(lVar43 + 0x28);
      for (piVar32 = *(int **)(lVar43 + 0x20); (piVar32 != piVar30 && (*piVar32 != -0x44779c53));
          piVar32 = piVar32 + 0xe) {
      }
      if (piVar32 == piVar30) {
        if (piVar30 < *(int **)(lVar43 + 0x30)) {
          *piVar30 = -0x44779c53;
          *(undefined1 (*) [16])(piVar30 + 2) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(piVar30 + 6) = (undefined1  [16])0x0;
          piVar30[10] = 0x3f800000;
          *(undefined1 *)(piVar30 + 0xc) = 0;
          *(undefined1 *)(piVar30 + 0xd) = 0;
          piVar30 = piVar30 + 0xe;
        }
        else {
          piVar30 = (int *)func_0x05d9c2b0(lVar43 + 0x20,auStack_418);
        }
        *(int **)(lVar43 + 0x28) = piVar30;
      }
      else if ((*(long *)(piVar32 + 8) != 0) &&
              (cVar20 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,
                                        &UNK_01356cf2), cVar20 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar37 = uStack_304;
    puVar23 = puStack_338;
    if ((DAT_0f75caa0 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75caa0), iVar21 != 0)) {
      func_0x0e68b530();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ca20,0xf53dab8);
      func_0x0410844d(&DAT_0f75caa0);
    }
    plVar29 = (long *)(*(long *)(puVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar23 + 0x20) - *(long *)(puVar23 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75ca20 + 4)) * 8);
    do {
      lVar43 = *plVar29;
      if (lVar43 == -1) goto LAB_0e4f3b20;
      plVar29 = (long *)(*(long *)(puVar23 + 0x30) + lVar43 * 0x18);
    } while (*(uint *)(*(long *)(puVar23 + 0x30) + 8 + lVar43 * 0x18) !=
             *(uint *)(_DAT_0f75ca20 + 4));
    if (plVar29 == *(long **)(puVar23 + 0x38)) {
LAB_0e4f3b20:
      puVar23 = &DAT_0f75ca20;
    }
    else {
      puVar23 = (undefined *)plVar29[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar23 + 0x68) + 0x28);
    for (puVar44 = *(uint **)(*(long *)(puVar23 + 0x68) + 0x20);
        (puVar44 != puVar3 && (*puVar44 != uVar37)); puVar44 = puVar44 + 0xe) {
    }
    if ((puVar44 == puVar3) &&
       (cVar20 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012ecc6e),
       cVar20 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar8[0xf] = 0;
    auVar8._0_15_ = stack0xfffffffffffffbe9;
    _auStack_418 = auVar8 << 8;
    func_0x05d9c620(puVar44 + 2,&uStack_30c,&uStack_30c,auStack_418);
    func_0x048b0bc0(auStack_2f8);
  }
  if ((DAT_0f75cb58 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cb58), iVar21 != 0)) {
    func_0x0e68f3d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cad8,0xf53dab8);
    func_0x0410844d(&DAT_0f75cb58);
  }
  plVar29 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75cad8 + 4)) * 8);
  do {
    lVar43 = *plVar29;
    if (lVar43 == -1) goto LAB_0e4f3c20;
    plVar29 = (long *)(*(long *)(param_1 + 0x30) + lVar43 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75cad8 + 4))
  ;
  if (plVar29 == *(long **)(param_1 + 0x38)) {
LAB_0e4f3c20:
    puVar23 = &DAT_0f75cad8;
    if (iRam000000000f75cb38 != -0x2b3da790) goto LAB_0e4f3c78;
LAB_0e4f3c4b:
    lVar43 = *(long *)(puVar23 + 0x68);
    if (lVar43 == 0) goto LAB_0e4f3c78;
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    puVar23 = (undefined *)(lVar43 + 9);
    if (bVar45) {
      puVar23 = *(undefined **)(lVar43 + 0x18);
    }
    uVar38 = (ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      uVar38 = *(ulong *)(lVar43 + 0x10);
    }
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    if (*(int *)(puVar23 + 0x60) == -0x2b3da790) goto LAB_0e4f3c4b;
LAB_0e4f3c78:
    puVar23 = &UNK_01304a3b;
    uVar38 = 10;
  }
  func_0x0e68f810(&puStack_338,param_1,puVar23,uVar38);
  uStack_304 = uStack_304 & 0xffffff00;
  uStack_300 = uStack_300 & 0xffffff00;
  if ((char)uStack_308 == '\0') {
    func_0x0e693090(auStack_418,&UNK_01422081,6);
    puVar34 = (undefined1 *)(ulong)((byte)uStack_3f0 >> 1);
    puVar27 = (undefined8 *)((long)&uStack_3f0 + 1);
    if ((uStack_3f0 & 1) != 0) {
      puVar34 = puStack_3e8;
      puVar27 = puStack_3e0;
    }
    if (puVar34 == (undefined1 *)0x0) {
      uStack_30c = 0x811c9dc5;
    }
    else {
      uVar38 = (ulong)((uint)puVar34 & 3);
      if (puVar34 < (undefined1 *)0x4) {
        uStack_30c = 0x811c9dc5;
        uVar41 = 0;
      }
      else {
        uStack_30c = 0x811c9dc5;
        uVar41 = 0;
        do {
          uStack_30c = ((int)*(char *)((long)puVar27 + uVar41 + 3) ^
                       ((int)*(char *)((long)puVar27 + uVar41 + 2) ^
                       ((int)*(char *)((long)puVar27 + uVar41 + 1) ^
                       ((int)*(char *)((long)puVar27 + uVar41) ^ uStack_30c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar41 = uVar41 + 4;
        } while (((ulong)puVar34 & 0xfffffffffffffffc) != uVar41);
      }
      if (uVar38 != 0) {
        uVar39 = 0;
        do {
          uStack_30c = ((int)*(char *)((long)puVar27 + uVar39 + uVar41) ^ uStack_30c) * 0x1000193;
          uVar39 = uVar39 + 1;
        } while (uVar38 != uVar39);
      }
    }
    iStack_310 = 2;
    if ((DAT_0f75cb78 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cb78), iVar21 != 0)) {
      func_0x0e68f4e0();
      func_0x0410844d(&DAT_0f75cb78);
    }
    auStack_2f8._0_4_ = uStack_30c;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_4_ = 3;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0xe6936a0;
    uStack_2cc = 0;
    cStack_2c8 = 0xd0;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0e68f310;
    auStack_2b8._8_8_ = &UNK_0e693770;
    auStack_2b8._0_8_ = &UNK_0e693760;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = (undefined1  [16])0x0;
    func_0x048b05a0(&puStack_330,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_228 = pcStack_320;
    auStack_238._8_8_ = pcStack_328;
    auStack_238._0_8_ = puStack_330;
    func_0x0e693430(auStack_2f8,auStack_238,auStack_418);
    if (iStack_2dc == 2) {
      piVar32 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
      iVar21 = *piVar32;
      while (iVar21 != auStack_2e8._8_4_) {
        piVar32 = piVar32 + 0x16;
        iVar21 = *piVar32;
      }
      lVar43 = *(long *)(piVar32 + 0xc);
      while ((undefined8 *)lVar43 != puStack_2f0) {
        piVar32 = *(int **)(piVar32 + 0xe);
        lVar43 = *(long *)(piVar32 + 0xc);
      }
LAB_0e4f3f8a:
      *(byte *)((long)piVar32 + 0x12) = *(byte *)((long)piVar32 + 0x12) | 9;
    }
    else {
      if (iStack_2dc == 1) {
        piVar32 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
        iVar21 = *piVar32;
        while (iVar21 != auStack_2e8._8_4_) {
          piVar32 = piVar32 + 0x1a;
          iVar21 = *piVar32;
        }
        goto LAB_0e4f3f8a;
      }
      if (iStack_2dc == 0) {
        *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_300 == '\0') {
      func_0x0e6937c0(auStack_2f8,&puStack_338);
    }
    uVar37 = uStack_304;
    puVar23 = puStack_338;
    if ((DAT_0f75cb58 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cb58), iVar21 != 0)) {
      func_0x0e68f3d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cad8,0xf53dab8);
      func_0x0410844d(&DAT_0f75cb58);
    }
    plVar29 = (long *)(*(long *)(puVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar23 + 0x20) - *(long *)(puVar23 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75cad8 + 4)) * 8);
    do {
      lVar43 = *plVar29;
      if (lVar43 == -1) goto LAB_0e4f4020;
      plVar29 = (long *)(*(long *)(puVar23 + 0x30) + lVar43 * 0x18);
    } while (*(uint *)(*(long *)(puVar23 + 0x30) + 8 + lVar43 * 0x18) !=
             *(uint *)(_DAT_0f75cad8 + 4));
    if (plVar29 == *(long **)(puVar23 + 0x38)) {
LAB_0e4f4020:
      puVar23 = &DAT_0f75cad8;
    }
    else {
      puVar23 = (undefined *)plVar29[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar23 + 0x68) + 0x28);
    for (puVar44 = *(uint **)(*(long *)(puVar23 + 0x68) + 0x20);
        (puVar44 != puVar3 && (*puVar44 != uVar37)); puVar44 = puVar44 + 0xe) {
    }
    if ((puVar44 == puVar3) &&
       (cVar20 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01320c22),
       cVar20 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar9[0xf] = 0;
    auVar9._0_15_ = stack0xfffffffffffffd09;
    _auStack_2f8 = auVar9 << 8;
    func_0x05d9c620(puVar44 + 2,&uStack_30c,&uStack_30c,auStack_2f8);
    auStack_238._8_8_ = puStack_330;
    auStack_238._0_8_ = puStack_338;
    pcStack_228 = pcStack_328;
    uStack_220 = pcStack_320;
    iStack_218 = iStack_318;
    uStack_214 = uStack_314;
    iStack_210 = iStack_310;
    uStack_20c = uStack_30c;
    uStack_208 = uStack_308;
    uStack_204 = uStack_304;
    uStack_200 = uStack_300;
    func_0x048b0bc0(auStack_418);
    func_0x0e693090(auStack_418,&UNK_0126c0de,10);
    puVar34 = (undefined1 *)(ulong)((byte)uStack_3f0 >> 1);
    puVar27 = (undefined8 *)((long)&uStack_3f0 + 1);
    if ((uStack_3f0 & 1) != 0) {
      puVar34 = puStack_3e8;
      puVar27 = puStack_3e0;
    }
    if (puVar34 == (undefined1 *)0x0) {
      uStack_20c = 0x811c9dc5;
    }
    else {
      uVar38 = (ulong)((uint)puVar34 & 3);
      if (puVar34 < (undefined1 *)0x4) {
        uStack_20c = 0x811c9dc5;
        uVar41 = 0;
      }
      else {
        uStack_20c = 0x811c9dc5;
        uVar41 = 0;
        do {
          uStack_20c = ((int)*(char *)((long)puVar27 + uVar41 + 3) ^
                       ((int)*(char *)((long)puVar27 + uVar41 + 2) ^
                       ((int)*(char *)((long)puVar27 + uVar41 + 1) ^
                       ((int)*(char *)((long)puVar27 + uVar41) ^ uStack_20c) * 0x1000193) *
                       0x1000193) * 0x1000193) * 0x1000193;
          uVar41 = uVar41 + 4;
        } while (((ulong)puVar34 & 0xfffffffffffffffc) != uVar41);
      }
      if (uVar38 != 0) {
        uVar39 = 0;
        do {
          uStack_20c = ((int)*(char *)((long)puVar27 + uVar39 + uVar41) ^ uStack_20c) * 0x1000193;
          uVar39 = uVar39 + 1;
        } while (uVar38 != uVar39);
      }
    }
    iStack_210 = 2;
    if ((DAT_0f75cb78 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cb78), iVar21 != 0)) {
      func_0x0e68f4e0();
      func_0x0410844d(&DAT_0f75cb78);
    }
    auStack_2f8._0_4_ = uStack_20c;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_4_ = 3;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0xe6936a0;
    uStack_2cc = 0;
    cStack_2c8 = -0x30;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0e68f310;
    auStack_2b8._8_8_ = &UNK_0e693990;
    auStack_2b8._0_8_ = &UNK_0e693980;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = ZEXT816(0);
    func_0x048b05a0(auStack_238 + 8,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    pcStack_1e0 = (code *)CONCAT44(uStack_214,iStack_218);
    pcStack_1e8 = uStack_220;
    auStack_1f8._8_8_ = pcStack_228;
    auStack_1f8._0_8_ = auStack_238._8_8_;
    func_0x0e693430(auStack_2f8,auStack_1f8,auStack_418);
    if (iStack_2dc == 2) {
      piVar32 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
      iVar21 = *piVar32;
      while (iVar21 != auStack_2e8._8_4_) {
        piVar32 = piVar32 + 0x16;
        iVar21 = *piVar32;
      }
      lVar43 = *(long *)(piVar32 + 0xc);
      while ((undefined8 *)lVar43 != puStack_2f0) {
        piVar32 = *(int **)(piVar32 + 0xe);
        lVar43 = *(long *)(piVar32 + 0xc);
      }
LAB_0e4f43ba:
      *(byte *)((long)piVar32 + 0x12) = *(byte *)((long)piVar32 + 0x12) | 9;
    }
    else {
      if (iStack_2dc == 1) {
        piVar32 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
        iVar21 = *piVar32;
        while (iVar21 != auStack_2e8._8_4_) {
          piVar32 = piVar32 + 0x1a;
          iVar21 = *piVar32;
        }
        goto LAB_0e4f43ba;
      }
      if (iStack_2dc == 0) {
        *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_200 == '\0') {
      func_0x0e6937c0(auStack_2f8,auStack_238);
    }
    uVar37 = uStack_204;
    uVar4 = auStack_238._0_8_;
    if ((DAT_0f75cb58 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cb58), iVar21 != 0)) {
      func_0x0e68f3d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cad8,0xf53dab8);
      func_0x0410844d(&DAT_0f75cb58);
    }
    plVar29 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f75cad8 + 4)) * 8);
    do {
      lVar43 = *plVar29;
      if (lVar43 == -1) goto LAB_0e4f4450;
      plVar29 = (long *)(*(long *)(uVar4 + 0x30) + lVar43 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75cad8 + 4))
    ;
    if (plVar29 == *(long **)(uVar4 + 0x38)) {
LAB_0e4f4450:
      puVar23 = &DAT_0f75cad8;
    }
    else {
      puVar23 = (undefined *)plVar29[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar23 + 0x68) + 0x28);
    for (puVar44 = *(uint **)(*(long *)(puVar23 + 0x68) + 0x20);
        (puVar44 != puVar3 && (*puVar44 != uVar37)); puVar44 = puVar44 + 0xe) {
    }
    if ((puVar44 == puVar3) &&
       (cVar20 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01320c22),
       cVar20 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auVar10[0xf] = 0;
    auVar10._0_15_ = stack0xfffffffffffffd09;
    _auStack_2f8 = auVar10 << 8;
    func_0x05d9c620(puVar44 + 2,&uStack_20c,&uStack_20c,auStack_2f8);
    func_0x048b0bc0(auStack_418);
  }
  if ((DAT_0f75cc10 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cc10), iVar21 != 0)) {
    func_0x0e693aa0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cb90,0xf53dab8);
    func_0x0410844d(&DAT_0f75cc10);
  }
  plVar29 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75cb90 + 4)) * 8);
  do {
    lVar43 = *plVar29;
    if (lVar43 == -1) goto LAB_0e4f4550;
    plVar29 = (long *)(*(long *)(param_1 + 0x30) + lVar43 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75cb90 + 4))
  ;
  if (plVar29 == *(long **)(param_1 + 0x38)) {
LAB_0e4f4550:
    puVar23 = &DAT_0f75cb90;
    if (iRam000000000f75cbf0 != -0x2b3da790) goto LAB_0e4f45be;
LAB_0e4f457b:
    lVar43 = *(long *)(puVar23 + 0x68);
    if (lVar43 == 0) goto LAB_0e4f45be;
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    lVar36 = lVar43 + 9;
    if (bVar45) {
      lVar36 = *(long *)(lVar43 + 0x18);
    }
    uVar38 = (ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      uVar38 = *(ulong *)(lVar43 + 0x10);
    }
    func_0x0e693eb0(&puStack_338,param_1,lVar36,uVar38);
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    if (*(int *)(puVar23 + 0x60) == -0x2b3da790) goto LAB_0e4f457b;
LAB_0e4f45be:
    func_0x0e693eb0(&puStack_338,param_1,&UNK_0138b3c5,0x15);
  }
  if ((char)uStack_308 == '\0') {
    func_0x0e694a00(auStack_418,&puStack_338,&UNK_0142a5c6,4,1);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0f4c56f0;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0xe68f1f0;
    uStack_2cc = 0;
    cStack_2c8 = 0xd0;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0e68b470;
    auStack_2b8._8_8_ = &UNK_0e695120;
    auStack_2b8._0_8_ = &UNK_0e694fc0;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = (undefined1  [16])0x0;
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e694cc0(auStack_418);
    uStack_68 = (char)uStack_308;
    uStack_78 = CONCAT44(uStack_314,iStack_318);
    uStack_70 = CONCAT44(uStack_30c,iStack_310);
    pcStack_88 = pcStack_328;
    pcStack_80 = pcStack_320;
    puStack_98 = puStack_338;
    puStack_90 = puStack_330;
    func_0x048b0bc0(&iStack_400);
    puStack_d8 = puStack_98;
    puStack_d0 = puStack_90;
    pcStack_c8 = pcStack_88;
    pcStack_c0 = pcStack_80;
    uStack_b8 = uStack_78;
    uStack_b0 = uStack_70;
    uStack_a8 = CONCAT71(uStack_67,uStack_68);
    func_0x0e694a00(auStack_418,&puStack_d8,&UNK_01220f4f,4,1);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0ef46ce8;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0x490ce30;
    uStack_2cc = 0;
    cStack_2c8 = 0xd0;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0490cb20;
    auStack_2b8._8_8_ = &UNK_0e6956e0;
    auStack_2b8._0_8_ = &UNK_0e695580;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = ZEXT816(0);
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e694cc0(auStack_418);
    uStack_e8 = (undefined1)uStack_a8;
    uStack_f8 = uStack_b8;
    uStack_f0 = uStack_b0;
    pcStack_108 = pcStack_c8;
    pcStack_100 = pcStack_c0;
    uStack_118 = puStack_d8;
    puStack_110 = puStack_d0;
    func_0x048b0bc0(&iStack_400);
    puStack_158 = uStack_118;
    pcStack_150 = (code *)puStack_110;
    pcStack_148 = pcStack_108;
    pcStack_140 = pcStack_100;
    uStack_138 = uStack_f8;
    uStack_130 = uStack_f0;
    uStack_128 = CONCAT71(uStack_e7,uStack_e8);
    func_0x0e694a00(auStack_418,&puStack_158,&UNK_014dedac,10,1);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0f0c2800;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0x72a5d20;
    uStack_2cc = 0;
    cStack_2c8 = 0xd0;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0651ed40;
    auStack_2b8._8_8_ = &UNK_0e695a20;
    auStack_2b8._0_8_ = &UNK_0e6958c0;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = ZEXT816(0);
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e694cc0(auStack_418);
    uStack_178 = CONCAT71(uStack_178._1_7_,(undefined1)uStack_128);
    uStack_188 = uStack_138;
    uStack_180 = (undefined4)uStack_130;
    uStack_17c = (undefined4)((ulong)uStack_130 >> 0x20);
    pcStack_198 = pcStack_148;
    pcStack_190 = pcStack_140;
    auStack_1a8._8_8_ = pcStack_150;
    auStack_1a8._0_8_ = puStack_158;
    func_0x048b0bc0(&iStack_400);
    auStack_1d8._8_4_ = uStack_180;
    auStack_1d8._0_8_ = uStack_188;
    auStack_1d8._12_4_ = uStack_17c;
    auStack_1f8 = auStack_1a8;
    pcStack_1e8 = pcStack_198;
    pcStack_1e0 = pcStack_190;
    uStack_1c8 = uStack_178;
    func_0x0e694a00(auStack_418,auStack_1f8,&UNK_014738c9,7,1);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0f0c2800;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0x72a5d20;
    uStack_2cc = 0;
    cStack_2c8 = 0xd0;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0651ed40;
    auStack_2b8._8_8_ = &UNK_0e695d60;
    auStack_2b8._0_8_ = &UNK_0e695c00;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = ZEXT816(0);
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e694cc0(auStack_418);
    uVar4 = auStack_1f8._0_8_;
    uStack_58 = auStack_1f8._8_8_;
    pcStack_50 = pcStack_1e8;
    pcStack_48 = pcStack_1e0;
    uStack_40 = auStack_1d8._0_8_;
    uVar18 = auStack_1d8._8_4_;
    uVar37 = auStack_1d8._12_4_;
    uVar42 = (undefined1)uStack_1c8;
    func_0x048b0bc0(&iStack_400);
    uStack_1b0 = 0;
    uStack_1ac = 0;
    if (uVar18 == 4) {
      if ((DAT_0f75cc10 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cc10), iVar21 != 0)) {
        func_0x0e693aa0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cb90,0xf53dab8);
        func_0x0410844d(&DAT_0f75cc10);
      }
      plVar29 = (long *)(*(long *)(uVar4 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >>
                                     3) - 1U & *(uint *)(_DAT_0f75cb90 + 4)) * 8);
      do {
        lVar43 = *plVar29;
        if (lVar43 == -1) goto LAB_0e4f4df1;
        plVar29 = (long *)(*(long *)(uVar4 + 0x30) + lVar43 * 0x18);
      } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar43 * 0x18) !=
               *(uint *)(_DAT_0f75cb90 + 4));
      if (plVar29 == *(long **)(uVar4 + 0x38)) {
LAB_0e4f4df1:
        puVar23 = &DAT_0f75cb90;
      }
      else {
        puVar23 = (undefined *)plVar29[2];
      }
      uStack_340 = CONCAT71(uStack_340._1_7_,uVar42);
      uStack_168 = CONCAT44(uStack_168._4_4_,uVar37);
      auVar26 = (undefined1  [8])func_0x048b1040(uVar4 + 0x18,puVar23,uVar37,1);
      if (auVar26 == (undefined1  [8])0x0) {
        _auStack_418 = ZEXT816(0);
        func_0x048b10d0(auStack_418);
        lVar43 = *(long *)((long)auStack_418 + 0x38);
        auVar26 = auStack_418;
      }
      else {
        lVar43 = *(long *)((long)auVar26 + 0x38);
      }
      if (lVar43 != 0) goto LAB_0e4f6315;
      _auStack_418 = ZEXT816(0);
      func_0x048b10d0(auStack_418);
      auVar19 = auStack_418;
      while (lVar43 = (long)auVar19, lVar43 != 0) {
LAB_0e4f6315:
        auVar26 = (undefined1  [8])lVar43;
        auVar19 = (undefined1  [8])*(long *)(lVar43 + 0x38);
        if (*(long *)(lVar43 + 0x38) == 0) {
          _auStack_418 = ZEXT816(0);
          func_0x048b10d0(auStack_418);
          auVar19 = auStack_418;
        }
      }
      lVar43 = *(long *)((long)auVar26 + 0x48);
      puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar27 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar27[1] = 0xffffffffffffffff;
      puVar27[2] = 0;
      *(undefined1 *)(puVar27 + 3) = 0xff;
      *puVar27 = &UNK_0f0edc68;
      uVar16 = _UNK_014e4bb8;
      puVar27[4] = _DAT_014e4bb0;
      puVar27[5] = uVar16;
      puVar27[6] = 0;
      *(undefined2 *)(puVar27 + 7) = 0;
      *(undefined4 *)((long)puVar27 + 0x3a) = uStack_1b0;
      *(undefined2 *)((long)puVar27 + 0x3e) = uStack_1ac;
      plVar29 = *(long **)(lVar43 + 8);
      *(undefined8 **)(lVar43 + 8) = puVar27;
      uVar42 = (undefined1)uStack_340;
      uVar37 = (uint)uStack_168;
joined_r0x0e4f63c9:
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x28))();
      }
    }
    else if (uVar18 == 1) {
      if ((DAT_0f75cc10 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cc10), iVar21 != 0)) {
        func_0x0e693aa0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cb90,0xf53dab8);
        func_0x0410844d(&DAT_0f75cc10);
      }
      plVar29 = (long *)(*(long *)(uVar4 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >>
                                     3) - 1U & *(uint *)(_DAT_0f75cb90 + 4)) * 8);
      do {
        lVar43 = *plVar29;
        if (lVar43 == -1) goto LAB_0e4f4d71;
        plVar29 = (long *)(*(long *)(uVar4 + 0x30) + lVar43 * 0x18);
      } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar43 * 0x18) !=
               *(uint *)(_DAT_0f75cb90 + 4));
      if (plVar29 == *(long **)(uVar4 + 0x38)) {
LAB_0e4f4d71:
        puVar23 = &DAT_0f75cb90;
      }
      else {
        puVar23 = (undefined *)plVar29[2];
      }
      uStack_340 = CONCAT71(uStack_340._1_7_,uVar42);
      auVar26 = (undefined1  [8])func_0x048b0c90(uVar4 + 0x18,puVar23,uVar37,1);
      if (auVar26 == (undefined1  [8])0x0) {
        _auStack_418 = ZEXT816(0);
        func_0x048b0d20(auStack_418);
        auVar26 = auStack_418;
      }
      lVar43 = *(long *)((long)auVar26 + 0x58);
      puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar27 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar27[1] = 0xffffffffffffffff;
      puVar27[2] = 0;
      *(undefined1 *)(puVar27 + 3) = 0xff;
      *puVar27 = &UNK_0f0edc68;
      uVar16 = _UNK_014e4bb8;
      puVar27[4] = _DAT_014e4bb0;
      puVar27[5] = uVar16;
      puVar27[6] = 0;
      *(undefined2 *)(puVar27 + 7) = 0;
      *(undefined4 *)((long)puVar27 + 0x3a) = uStack_1b0;
      *(undefined2 *)((long)puVar27 + 0x3e) = uStack_1ac;
      plVar29 = *(long **)(lVar43 + 8);
      *(undefined8 **)(lVar43 + 8) = puVar27;
      uVar42 = (undefined1)uStack_340;
      goto joined_r0x0e4f63c9;
    }
    uStack_220 = pcStack_48;
    iStack_218 = (int)uStack_40;
    uStack_214 = (uint)((ulong)uStack_40 >> 0x20);
    pcStack_228 = pcStack_50;
    auStack_238._8_8_ = uStack_58;
    auStack_238._0_8_ = uVar4;
    iStack_210 = uVar18;
    uStack_204 = CONCAT31(uStack_11b,uStack_11f._3_1_);
    uStack_208._1_3_ = (undefined3)uStack_11f;
    uStack_208 = CONCAT31(uStack_208._1_3_,uVar42);
    uStack_20c = uVar37;
    func_0x0e6944a0(auStack_418,uVar4 + 0x18);
    if (iStack_3fc == 2) {
      piVar32 = *(int **)(*(long *)(CONCAT44(uStack_404,uStack_408) + 0x78) + 0x60);
      iVar21 = *piVar32;
      while (iVar21 != iStack_400) {
        piVar32 = piVar32 + 0x16;
        iVar21 = *piVar32;
      }
      ppuVar33 = *(undefined ***)(piVar32 + 0xc);
      while (ppuVar33 != ppuStack_410) {
        piVar32 = *(int **)(piVar32 + 0xe);
        ppuVar33 = *(undefined ***)(piVar32 + 0xc);
      }
LAB_0e4f4ffa:
      *(byte *)((long)piVar32 + 0x12) = *(byte *)((long)piVar32 + 0x12) | 4;
    }
    else {
      if (iStack_3fc == 1) {
        piVar32 = *(int **)(*(long *)(CONCAT44(uStack_404,uStack_408) + 0x78) + 0x48);
        iVar21 = *piVar32;
        while (iVar21 != iStack_400) {
          piVar32 = piVar32 + 0x1a;
          iVar21 = *piVar32;
        }
        goto LAB_0e4f4ffa;
      }
      if (iStack_3fc == 0) {
        puVar44 = (uint *)(CONCAT44(uStack_404,uStack_408) + 0x18);
        *puVar44 = *puVar44 | 0x40000;
      }
    }
    func_0x0e694a00(auStack_418,auStack_238,&UNK_0148f973,0xb,0x10);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0f4c57d0;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0xe6936a0;
    uStack_2cc = 0;
    cStack_2c8 = -0x30;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0e68f310;
    auStack_2b8._8_8_ = &UNK_0e6960a0;
    auStack_2b8._0_8_ = &UNK_0e695f40;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = (undefined1  [16])0x0;
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e694cc0(auStack_418);
    func_0x048b0bc0(&iStack_400);
  }
  puStack_338 = &UNK_01330767;
  puStack_330 = (undefined *)0xf;
  func_0x0470d9a0(auStack_418,&UNK_01384326,0xc,0xd,&puStack_338);
  bVar45 = (auStack_418[0] & 1) != 0;
  puVar34 = auStack_418 + 1;
  if (bVar45) {
    puVar34 = (undefined1 *)CONCAT44(uStack_404,uStack_408);
  }
  ppuVar33 = (undefined **)(ulong)(auStack_418[0] >> 1);
  if (bVar45) {
    ppuVar33 = ppuStack_410;
  }
  if ((DAT_0f75ccc8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75ccc8), iVar21 != 0)) {
    func_0x0e6965d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cc48,0xf53dab8);
    func_0x0410844d(&DAT_0f75ccc8);
  }
  plVar29 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75cc48 + 4)) * 8);
  do {
    lVar43 = *plVar29;
    if (lVar43 == -1) goto LAB_0e4f5200;
    plVar29 = (long *)(*(long *)(param_1 + 0x30) + lVar43 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75cc48 + 4))
  ;
  if (plVar29 == *(long **)(param_1 + 0x38)) {
LAB_0e4f5200:
    puVar23 = &DAT_0f75cc48;
    iVar21 = iRam000000000f75cca8;
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    iVar21 = *(int *)(puVar23 + 0x60);
  }
  if ((iVar21 == -0x2b3da790) && (lVar43 = *(long *)(puVar23 + 0x68), lVar43 != 0)) {
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    puVar34 = (undefined1 *)(lVar43 + 9);
    if (bVar45) {
      puVar34 = *(undefined1 **)(lVar43 + 0x18);
    }
    ppuVar33 = (undefined **)(ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      ppuVar33 = *(undefined ***)(lVar43 + 0x10);
    }
  }
  func_0x0e696bd0(auStack_2f8,param_1,puVar34,ppuVar33);
  if ((auStack_418[0] & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_404,uStack_408),(ulong)auStack_418 & 0xfffffffffffffffe);
  }
  if (cStack_2c8 == '\0') {
    func_0x04134310(&puStack_158,0xd);
    pauVar24 = (undefined1 (*) [16])func_0x0412f0e0(&puStack_158,0,&UNK_013a12ea,10);
    uStack_168 = *(undefined8 *)*pauVar24;
    uStack_160 = *(undefined8 *)(*pauVar24 + 8);
    uVar38 = *(ulong *)*pauVar24;
    uStack_340 = *(ulong *)pauVar24[1];
    *pauVar24 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar24[1] = 0;
    auVar26 = auStack_2f8;
    if ((DAT_0f75ccc8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75ccc8), iVar21 != 0)) {
      func_0x0e6965d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cc48,0xf53dab8);
      func_0x0410844d(&DAT_0f75ccc8);
    }
    uVar41 = uVar38 & 0xffffffffffffff00;
    plVar29 = (long *)(*(long *)((long)auVar26 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar26 + 0x20) -
                                           *(long *)((long)auVar26 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75cc48 + 4)) * 8);
    do {
      lVar43 = *plVar29;
      if (lVar43 == -1) goto LAB_0e4f5350;
      plVar29 = (long *)(*(long *)((long)auVar26 + 0x30) + lVar43 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar26 + 0x30) + 8 + lVar43 * 0x18) !=
             *(uint *)(_DAT_0f75cc48 + 4));
    if (plVar29 == *(long **)((long)auVar26 + 0x38)) {
LAB_0e4f5350:
      puVar23 = &DAT_0f75cc48;
    }
    else {
      puVar23 = (undefined *)plVar29[2];
    }
    for (pbVar25 = *(byte **)((long)auStack_2f8 + 0x50);
        pbVar25 != *(byte **)((long)auStack_2f8 + 0x58); pbVar25 = pbVar25 + 0x38) {
      bVar2 = *pbVar25;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0e4f542a;
      }
      else if (*(long *)(pbVar25 + 8) == 0x1d) {
LAB_0e4f542a:
        if ((bVar2 & 1) == 0) {
          pbVar35 = pbVar25 + 1;
        }
        else {
          pbVar35 = *(byte **)(pbVar25 + 0x10);
        }
        auVar47[0] = -(*pbVar35 == 0x5b);
        auVar47[1] = -(pbVar35[1] == 99);
        auVar47[2] = -(pbVar35[2] == 0x65);
        auVar47[3] = -(pbVar35[3] == 0x72);
        auVar47[4] = -(pbVar35[4] == 0x65);
        auVar47[5] = -(pbVar35[5] == 0x61);
        auVar47[6] = -(pbVar35[6] == 0x6c);
        auVar47[7] = -(pbVar35[7] == 0x3a);
        auVar47[8] = -(pbVar35[8] == 0x6a);
        auVar47[9] = -(pbVar35[9] == 0x73);
        auVar47[10] = -(pbVar35[10] == 0x6f);
        auVar47[0xb] = -(pbVar35[0xb] == 0x6e);
        auVar47[0xc] = -(pbVar35[0xc] == 0x5f);
        auVar47[0xd] = -(pbVar35[0xd] == 0x73);
        auVar47[0xe] = -(pbVar35[0xe] == 99);
        auVar47[0xf] = -(pbVar35[0xf] == 0x68);
        auVar50[0] = -(pbVar35[0xd] == 0x73);
        auVar50[1] = -(pbVar35[0xe] == 99);
        auVar50[2] = -(pbVar35[0xf] == 0x68);
        auVar50[3] = -(pbVar35[0x10] == 0x65);
        auVar50[4] = -(pbVar35[0x11] == 0x6d);
        auVar50[5] = -(pbVar35[0x12] == 0x61);
        auVar50[6] = -(pbVar35[0x13] == 0x5f);
        auVar50[7] = -(pbVar35[0x14] == 0x70);
        auVar50[8] = -(pbVar35[0x15] == 0x72);
        auVar50[9] = -(pbVar35[0x16] == 0x6f);
        auVar50[10] = -(pbVar35[0x17] == 0x70);
        auVar50[0xb] = -(pbVar35[0x18] == 0x65);
        auVar50[0xc] = -(pbVar35[0x19] == 0x72);
        auVar50[0xd] = -(pbVar35[0x1a] == 0x74);
        auVar50[0xe] = -(pbVar35[0x1b] == 0x79);
        auVar50[0xf] = -(pbVar35[0x1c] == 0x5d);
        auVar50 = auVar50 & auVar47;
        if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar25 == *(byte **)((long)auStack_2f8 + 0x58)) {
LAB_0e4f5458:
      uVar18 = uStack_2cc;
      if (auStack_2d0 == (undefined1  [4])0x0) {
        if (((puVar23 == (undefined *)0x0) || (*(int *)(puVar23 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar23 + 0x68) == 0)) goto LAB_0e4f54dc;
        lVar43 = *(long *)(puVar23 + 0x68) + 0x38;
      }
      else {
        if (puVar23 == (undefined *)0x0) {
          puVar23 = (undefined *)func_0x048aead0((long)auVar26 + 0x18);
        }
        auVar26 = (undefined1  [8])func_0x048b0c90((long)auVar26 + 0x18,puVar23,uVar18,1);
        if (auVar26 == (undefined1  [8])0x0) {
          _auStack_418 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_418);
          auVar26 = auStack_418;
          if (auStack_418 == (undefined1  [8])0x0) goto LAB_0e4f54dc;
        }
        if ((*(int *)((long)auVar26 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auVar26 + 0x58) != 0)) {
          lVar43 = *(long *)((long)auVar26 + 0x58) + 0x40;
        }
        else {
LAB_0e4f54dc:
          lVar43 = 0;
        }
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auStack_1f8._8_8_;
      auStack_1f8 = auVar11 << 0x40;
      pcStack_1e8 = (code *)&UNK_048b4ab0;
      pcStack_1e0 = (code *)&UNK_048b49f0;
      auStack_1d8._0_5_ = 0x1d33bd9c5;
      puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar27 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      *puVar27 = uStack_168;
      puVar27[1] = uStack_160;
      puVar27[2] = uStack_340;
      *(undefined2 *)(puVar27 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar27 + 4) = (undefined1  [16])0x0;
      puVar27[6] = 0;
      iStack_400 = 0x48b4ab0;
      iStack_3fc = 0;
      pcStack_3f8 = (code *)&UNK_048b49f0;
      uStack_3f0 = 0xd33bd9c5;
      uStack_3ec = CONCAT31(uStack_3ec._1_3_,1);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auStack_1f8._8_8_;
      auStack_1f8 = auVar12 << 0x40;
      ppuStack_410 = (undefined **)puVar27;
      auStack_418 = (undefined1  [8])&UNK_048b46e0;
      pcVar31 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar31 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_014d987e;
      auStack_1a8._8_8_ = 0x1d;
      auStack_1a8._0_8_ = 0x21;
      *(ulong *)(pcVar31 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcVar31 + 0x15) = uVar4;
      uVar4 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(undefined8 *)pcVar31 = _DAT_014d9869;
      *(undefined8 *)(pcVar31 + 8) = uVar4;
      pcVar31[0x1d] = (code)0x0;
      pcStack_198 = pcVar31;
      lVar43 = func_0x048b5060(lVar43,auStack_1a8);
      *(undefined **)(lVar43 + 0x20) = &UNK_048b46e0;
      pcVar31 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar43 + 0x20) != auStack_418) {
        puVar27 = (undefined8 *)(lVar43 + 0x28);
        if (*(code **)(lVar43 + 0x40) == (code *)0x0) {
LAB_0e4f5661:
          ppuVar33 = ppuStack_410;
          ppuStack_410 = (undefined **)0x0;
          *puVar27 = ppuVar33;
        }
        else {
          (**(code **)(lVar43 + 0x40))(puVar27);
          if ((char)uStack_3ec != '\0') {
            if ((char)uStack_3ec != '\x02') goto LAB_0e4f5661;
            (*(code *)CONCAT44(iStack_3fc,iStack_400))(5,&ppuStack_410,puVar27);
          }
        }
        *(ulong *)(lVar43 + 0x38) = CONCAT44(iStack_3fc,iStack_400);
        *(code **)(lVar43 + 0x40) = pcStack_3f8;
        *(uint *)(lVar43 + 0x48) = uStack_3f0;
        *(char *)(lVar43 + 0x4c) = (char)uStack_3ec;
        pcVar31 = pcStack_3f8;
      }
      if ((auStack_1a8[0] & 1) != 0) {
        func_0x0412a280(pcStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
        pcVar31 = pcStack_3f8;
      }
      if (pcVar31 != (code *)0x0) {
        (*pcVar31)(&ppuStack_410);
      }
      if (pcStack_1e0 != (code *)0x0) {
        (*pcStack_1e0)(auStack_1f8);
      }
      uStack_340 = 0;
      uVar41 = 0;
      uVar38 = 0;
    }
    else {
      iVar21 = *(int *)(pbVar25 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar22 = func_0x04108328(&DAT_0f550768), iVar22 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar21 == _DAT_0f550754) goto LAB_0e4f5458;
    }
    iStack_218 = iStack_2d8;
    uStack_214 = uStack_2d4;
    uStack_208 = (undefined4)CONCAT71(uStack_2c7,cStack_2c8);
    uStack_204 = (uint)((uint7)uStack_2c7 >> 0x18);
    pcStack_228 = (code *)auStack_2e8._0_8_;
    uStack_220 = stack0xfffffffffffffd20;
    auStack_238 = _auStack_2f8;
    iStack_210 = 4;
    uStack_20c = 0x1e1bc4d5;
    if ((DAT_0f75cce8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cce8), iVar21 != 0)) {
      func_0x0e6966e0();
      func_0x0410844d(&DAT_0f75cce8);
    }
    auStack_418._0_4_ = uStack_20c;
    ppuStack_410 = (undefined **)0x0;
    uStack_408 = 0;
    iStack_400 = 3;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)&SUB_048aead0;
    uStack_3f0 = 0xc0f6d10;
    uStack_3ec = 0;
    puStack_3e8 = &UNK_0e6978b0;
    puStack_3e0 = (undefined8 *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    func_0x049057f0(auStack_238 + 8,auStack_418);
    func_0x048aea50(auStack_418);
    pcStack_1e0 = (code *)CONCAT44(uStack_214,iStack_218);
    pcStack_1e8 = uStack_220;
    auStack_1f8._8_8_ = pcStack_228;
    auStack_1f8._0_8_ = auStack_238._8_8_;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0ef44b00;
    auStack_1a8._8_8_ = 0;
    auStack_1a8._0_8_ = puVar27;
    pcStack_198 = (code *)CONCAT71(pcStack_198._1_7_,0xff);
    func_0x0e697730(auStack_418,auStack_1f8,auStack_1a8);
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_1a8._8_8_ + 0x28))();
    }
    if ((long *)auStack_1a8._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_1a8._0_8_ + 8))();
    }
    if ((DAT_0f75cce8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cce8), iVar21 != 0)) {
      func_0x0e6966e0();
      func_0x0410844d(&DAT_0f75cce8);
    }
    if (uStack_214 == 2) {
      piVar32 = *(int **)(*(long *)(uStack_220 + 0x78) + 0x60);
      iVar21 = *piVar32;
      while (iVar21 != iStack_218) {
        piVar32 = piVar32 + 0x16;
        iVar21 = *piVar32;
      }
      pcVar31 = *(code **)(piVar32 + 0xc);
      while (pcVar31 != pcStack_228) {
        piVar32 = *(int **)(piVar32 + 0xe);
        pcVar31 = *(code **)(piVar32 + 0xc);
      }
LAB_0e4f592a:
      *(byte *)((long)piVar32 + 0x12) = *(byte *)((long)piVar32 + 0x12) | 2;
    }
    else {
      if (uStack_214 == 1) {
        piVar32 = *(int **)(*(long *)(uStack_220 + 0x78) + 0x48);
        iVar21 = *piVar32;
        while (iVar21 != iStack_218) {
          piVar32 = piVar32 + 0x1a;
          iVar21 = *piVar32;
        }
        goto LAB_0e4f592a;
      }
      if (uStack_214 == 0) {
        *(uint *)(uStack_220 + 0x18) = *(uint *)(uStack_220 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f75cce8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cce8), iVar21 != 0)) {
      func_0x0e6966e0();
      func_0x0410844d(&DAT_0f75cce8);
    }
    auStack_418._0_4_ = 0xbf75c8f8;
    ppuStack_410 = (undefined **)0x0;
    uStack_408 = 1;
    iStack_400 = 0;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)&SUB_048b2190;
    uStack_3f0 = 0x48b06d0;
    uStack_3ec = 0;
    puStack_3e8 = &UNK_0e698480;
    puStack_3e0 = (undefined8 *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    func_0x049057f0(auStack_238 + 8,auStack_418);
    func_0x048aea50(auStack_418);
    pcStack_1e0 = (code *)CONCAT44(uStack_214,iStack_218);
    pcStack_1e8 = uStack_220;
    auStack_1f8._8_8_ = pcStack_228;
    auStack_1f8._0_8_ = auStack_238._8_8_;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar21 = func_0x04108328(&DAT_0f551cb0), iVar21 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_418._0_4_ = _DAT_0f551c9c;
    puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar28 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar28 + 1) = (undefined1  [16])0x0;
    *puVar28 = &UNK_0ef46c98;
    puVar28[3] = puVar27;
    *(undefined1 *)(puVar28 + 4) = 0xff;
    ppuStack_410 = (undefined **)(puVar28 + 3);
    uStack_408 = (uint)puVar28;
    uStack_404 = (undefined4)((ulong)puVar28 >> 0x20);
    auStack_1a8 = (undefined1  [16])0x0;
    func_0x048afd20(auStack_1f8,auStack_418);
    plVar29 = (long *)CONCAT44(uStack_404,uStack_408);
    if (plVar29 != (long *)0x0) {
      LOCK();
      plVar1 = plVar29 + 1;
      lVar43 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        func_0x0412c2d0(plVar29);
      }
    }
    uVar4 = auStack_1a8._8_8_;
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_1a8._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_1a8._8_8_ + 0x10))(auStack_1a8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iStack_318 = iStack_218;
    uStack_314 = uStack_214;
    puStack_338 = (undefined *)auStack_238._0_8_;
    puStack_330 = (undefined *)auStack_238._8_8_;
    pcStack_328 = pcStack_228;
    pcStack_320 = uStack_220;
    uStack_308 = uStack_208;
    uStack_304 = uStack_204;
    iStack_310 = 4;
    uStack_30c = 0x1e1bc4d5;
    if ((DAT_0f75cce8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cce8), iVar21 != 0)) {
      func_0x0e6966e0();
      func_0x0410844d(&DAT_0f75cce8);
    }
    auStack_418._0_4_ = uStack_30c;
    ppuStack_410 = (undefined **)0x0;
    uStack_408 = 0;
    iStack_400 = 1;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)&SUB_048aead0;
    uStack_3f0 = 0x4905970;
    uStack_3ec = 0;
    puStack_3e8 = &UNK_0e698620;
    puStack_3e0 = (undefined8 *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3cf = 0;
    uStack_3cd = 0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    func_0x049057f0(&puStack_330,auStack_418);
    func_0x048aea50(auStack_418);
    pcStack_1e0 = (code *)CONCAT44(uStack_314,iStack_318);
    pcStack_1e8 = pcStack_320;
    auStack_1f8._8_8_ = pcStack_328;
    auStack_1f8._0_8_ = puStack_330;
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0ef44b00;
    auStack_1a8._8_8_ = 0;
    auStack_1a8._0_8_ = puVar27;
    pcStack_198 = (code *)CONCAT71(pcStack_198._1_7_,0xff);
    func_0x0e697730(auStack_418,auStack_1f8,auStack_1a8);
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_1a8._8_8_ + 0x28))();
    }
    if ((long *)auStack_1a8._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_1a8._0_8_ + 8))();
    }
    if ((uVar38 & 1) != 0) {
      func_0x0412a280(uStack_340,uVar41 | (byte)uVar38 & 0xfe);
    }
    if (((ulong)puStack_158 & 1) != 0) {
      func_0x0412a280(pcStack_148,(ulong)puStack_158 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f75cd80 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cd80), iVar21 != 0)) {
    func_0x0e698970();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cd00,0xf53dab8);
    func_0x0410844d(&DAT_0f75cd80);
  }
  plVar29 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75cd00 + 4)) * 8);
  do {
    lVar43 = *plVar29;
    if (lVar43 == -1) goto LAB_0e4f5cf0;
    plVar29 = (long *)(*(long *)(param_1 + 0x30) + lVar43 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar43 * 0x18) != *(uint *)(_DAT_0f75cd00 + 4))
  ;
  if (plVar29 == *(long **)(param_1 + 0x38)) {
LAB_0e4f5cf0:
    puVar23 = &DAT_0f75cd00;
    if (iRam000000000f75cd60 != -0x2b3da790) goto LAB_0e4f5d5e;
LAB_0e4f5d1b:
    lVar43 = *(long *)(puVar23 + 0x68);
    if (lVar43 == 0) goto LAB_0e4f5d5e;
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    lVar36 = lVar43 + 9;
    if (bVar45) {
      lVar36 = *(long *)(lVar43 + 0x18);
    }
    uVar38 = (ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      uVar38 = *(ulong *)(lVar43 + 0x10);
    }
    func_0x0e698f20(&puStack_338,param_1,lVar36,uVar38);
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    if (*(int *)(puVar23 + 0x60) == -0x2b3da790) goto LAB_0e4f5d1b;
LAB_0e4f5d5e:
    func_0x0e698f20(&puStack_338,param_1,&UNK_0142faf5,9);
  }
  if ((char)uStack_308 == '\0') {
    func_0x0e699a80(auStack_418,&puStack_338,&UNK_01342884,9);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0f4c5978;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0xe69a260;
    uStack_2cc = 0;
    cStack_2c8 = 0xd0;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_0e696510;
    auStack_2b8._8_8_ = &UNK_0e69a4e0;
    auStack_2b8._0_8_ = &UNK_0e69a320;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = (undefined1  [16])0x0;
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e699d30(auStack_418);
    uStack_1c8 = CONCAT71(uStack_1c8._1_7_,(char)uStack_308);
    auStack_1d8._4_4_ = uStack_314;
    auStack_1d8._0_4_ = iStack_318;
    auStack_1d8._12_4_ = uStack_30c;
    auStack_1d8._8_4_ = iStack_310;
    pcStack_1e8 = pcStack_328;
    pcStack_1e0 = pcStack_320;
    auStack_1f8._8_8_ = puStack_330;
    auStack_1f8._0_8_ = puStack_338;
    func_0x048b0bc0(&iStack_400);
    auStack_238 = auStack_1f8;
    pcStack_228 = pcStack_1e8;
    uStack_220 = pcStack_1e0;
    iStack_218 = auStack_1d8._0_4_;
    uStack_214 = auStack_1d8._4_4_;
    iStack_210 = auStack_1d8._8_4_;
    uStack_20c = auStack_1d8._12_4_;
    uStack_208 = (undefined4)uStack_1c8;
    uStack_204 = (uint)((ulong)uStack_1c8 >> 0x20);
    func_0x0e699a80(auStack_418,auStack_238,&UNK_0123ca5a,6);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar27 = &UNK_0f012438;
    plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
    iStack_400 = (int)puVar27;
    iStack_3fc = (int)((ulong)puVar27 >> 0x20);
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 8))();
    }
    auStack_2f8._0_4_ = uStack_408;
    puStack_2f0 = (undefined8 *)0x0;
    auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
    stack0xfffffffffffffd20 = (code *)0x1;
    iStack_2d8 = 0;
    uStack_2d4 = 0;
    auStack_2d0 = (undefined1  [4])0x5fc5e00;
    uStack_2cc = 0;
    cStack_2c8 = -0x30;
    uStack_2c7 = 0x48b06;
    puStack_2c0 = (undefined8 *)&UNK_05dcda00;
    auStack_2b8._8_8_ = &UNK_0e69aab0;
    auStack_2b8._0_8_ = &UNK_0e69a950;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    auStack_2a0 = (undefined1  [16])0x0;
    func_0x048b05a0(ppuStack_410,auStack_2f8);
    uVar4 = auStack_2a0._8_8_;
    if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar29 = (long *)(auStack_2a0._8_8_ + 8);
      lVar43 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar43 == 0) {
        (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0e699d30(auStack_418);
    uVar37 = uStack_20c;
    iVar21 = iStack_210;
    uVar4 = auStack_238._0_8_;
    func_0x048b0bc0(&iStack_400);
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    if (iVar21 == 4) {
      if ((DAT_0f75cd80 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cd80), iVar21 != 0)) {
        func_0x0e698970();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cd00,0xf53dab8);
        func_0x0410844d(&DAT_0f75cd80);
      }
      plVar29 = (long *)(*(long *)(uVar4 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >>
                                     3) - 1U & *(uint *)(_DAT_0f75cd00 + 4)) * 8);
      do {
        lVar43 = *plVar29;
        if (lVar43 == -1) goto LAB_0e4f61c8;
        plVar29 = (long *)(*(long *)(uVar4 + 0x30) + lVar43 * 0x18);
      } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar43 * 0x18) !=
               *(uint *)(_DAT_0f75cd00 + 4));
      if (plVar29 == *(long **)(uVar4 + 0x38)) {
LAB_0e4f61c8:
        puVar23 = &DAT_0f75cd00;
      }
      else {
        puVar23 = (undefined *)plVar29[2];
      }
      auVar26 = (undefined1  [8])func_0x048b1040(uVar4 + 0x18,puVar23,uVar37,1);
      if (auVar26 == (undefined1  [8])0x0) {
        _auStack_418 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_418);
        lVar43 = *(long *)((long)auStack_418 + 0x38);
        auVar26 = auStack_418;
      }
      else {
        lVar43 = *(long *)((long)auVar26 + 0x38);
      }
      if (lVar43 != 0) goto LAB_0e4f6425;
      _auStack_418 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_418);
      auVar19 = auStack_418;
      while (lVar43 = (long)auVar19, lVar43 != 0) {
LAB_0e4f6425:
        auVar26 = (undefined1  [8])lVar43;
        auVar19 = (undefined1  [8])*(long *)(lVar43 + 0x38);
        if (*(long *)(lVar43 + 0x38) == 0) {
          _auStack_418 = (undefined1  [16])0x0;
          func_0x048b10d0(auStack_418);
          auVar19 = auStack_418;
        }
      }
      lVar43 = *(long *)((long)auVar26 + 0x48);
      puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar27 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar21 != 1) goto LAB_0e4f64d5;
      if ((DAT_0f75cd80 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75cd80), iVar21 != 0)) {
        func_0x0e698970();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cd00,0xf53dab8);
        func_0x0410844d(&DAT_0f75cd80);
      }
      plVar29 = (long *)(*(long *)(uVar4 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >>
                                     3) - 1U & *(uint *)(_DAT_0f75cd00 + 4)) * 8);
      do {
        lVar43 = *plVar29;
        if (lVar43 == -1) goto LAB_0e4f6148;
        plVar29 = (long *)(*(long *)(uVar4 + 0x30) + lVar43 * 0x18);
      } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar43 * 0x18) !=
               *(uint *)(_DAT_0f75cd00 + 4));
      if (plVar29 == *(long **)(uVar4 + 0x38)) {
LAB_0e4f6148:
        puVar23 = &DAT_0f75cd00;
      }
      else {
        puVar23 = (undefined *)plVar29[2];
      }
      auVar26 = (undefined1  [8])func_0x048b0c90(uVar4 + 0x18,puVar23,uVar37,1);
      if (auVar26 == (undefined1  [8])0x0) {
        _auStack_418 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_418);
        auVar26 = auStack_418;
      }
      lVar43 = *(long *)((long)auVar26 + 0x58);
      puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar27 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar27[1] = 0xffffffffffffffff;
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 0xff;
    *puVar27 = &UNK_0f0edc68;
    uVar4 = _UNK_014e8108;
    puVar27[4] = _DAT_014e8100;
    puVar27[5] = uVar4;
    puVar27[6] = 0;
    *(undefined2 *)(puVar27 + 7) = 0;
    *(undefined4 *)((long)puVar27 + 0x3a) = uStack_1b8;
    *(undefined2 *)((long)puVar27 + 0x3e) = uStack_1b4;
    plVar29 = *(long **)(lVar43 + 8);
    *(undefined8 **)(lVar43 + 8) = puVar27;
    if (plVar29 != (long *)0x0) {
      (**(code **)(*plVar29 + 0x28))();
    }
  }
LAB_0e4f64d5:
  lVar43 = func_0x0d31a0e0(lStack_170);
  if ((*(int *)(lVar43 + 0x60) == -0x2b3da790) && (lVar43 = *(long *)(lVar43 + 0x68), lVar43 != 0))
  {
    bVar45 = (*(byte *)(lVar43 + 8) & 1) != 0;
    lVar36 = lVar43 + 9;
    if (bVar45) {
      lVar36 = *(long *)(lVar43 + 0x18);
    }
    uVar38 = (ulong)(*(byte *)(lVar43 + 8) >> 1);
    if (bVar45) {
      uVar38 = *(ulong *)(lVar43 + 0x10);
    }
    func_0x0e69ac90(&puStack_338,param_1,lVar36,uVar38);
  }
  else {
    func_0x0e69ac90(&puStack_338,param_1,&UNK_012b87ef,0x68);
  }
  if ((char)uStack_308 != '\0') {
    return;
  }
  puVar23 = puStack_338 + 0x18;
  lVar43 = func_0x0d31a0e0(puVar23);
  for (pbVar25 = *(byte **)(puStack_338 + 0x50); pbVar25 != *(byte **)(puStack_338 + 0x58);
      pbVar25 = pbVar25 + 0x38) {
    bVar2 = *pbVar25;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e4f65fa;
    }
    else if (*(long *)(pbVar25 + 8) == 0x1a) {
LAB_0e4f65fa:
      if ((bVar2 & 1) == 0) {
        pbVar35 = pbVar25 + 1;
      }
      else {
        pbVar35 = *(byte **)(pbVar25 + 0x10);
      }
      auVar48[0] = -(*pbVar35 == DAT_014eaba0);
      auVar48[1] = -(pbVar35[1] == DAT_014eaba0._1_1_);
      auVar48[2] = -(pbVar35[2] == DAT_014eaba0._2_1_);
      auVar48[3] = -(pbVar35[3] == DAT_014eaba0._3_1_);
      auVar48[4] = -(pbVar35[4] == DAT_014eaba0._4_1_);
      auVar48[5] = -(pbVar35[5] == DAT_014eaba0._5_1_);
      auVar48[6] = -(pbVar35[6] == DAT_014eaba0._6_1_);
      auVar48[7] = -(pbVar35[7] == DAT_014eaba0._7_1_);
      auVar48[8] = -(pbVar35[8] == DAT_014eaba0._8_1_);
      auVar48[9] = -(pbVar35[9] == DAT_014eaba0._9_1_);
      auVar48[10] = -(pbVar35[10] == DAT_014eaba0._10_1_);
      auVar48[0xb] = -(pbVar35[0xb] == DAT_014eaba0._11_1_);
      auVar48[0xc] = -(pbVar35[0xc] == DAT_014eaba0._12_1_);
      auVar48[0xd] = -(pbVar35[0xd] == DAT_014eaba0._13_1_);
      auVar48[0xe] = -(pbVar35[0xe] == DAT_014eaba0._14_1_);
      auVar48[0xf] = -(pbVar35[0xf] == DAT_014eaba0._15_1_);
      auVar51[0] = -(pbVar35[10] == DAT_014e4ff0);
      auVar51[1] = -(pbVar35[0xb] == DAT_014e4ff0._1_1_);
      auVar51[2] = -(pbVar35[0xc] == DAT_014e4ff0._2_1_);
      auVar51[3] = -(pbVar35[0xd] == DAT_014e4ff0._3_1_);
      auVar51[4] = -(pbVar35[0xe] == DAT_014e4ff0._4_1_);
      auVar51[5] = -(pbVar35[0xf] == DAT_014e4ff0._5_1_);
      auVar51[6] = -(pbVar35[0x10] == DAT_014e4ff0._6_1_);
      auVar51[7] = -(pbVar35[0x11] == DAT_014e4ff0._7_1_);
      auVar51[8] = -(pbVar35[0x12] == DAT_014e4ff0._8_1_);
      auVar51[9] = -(pbVar35[0x13] == DAT_014e4ff0._9_1_);
      auVar51[10] = -(pbVar35[0x14] == DAT_014e4ff0._10_1_);
      auVar51[0xb] = -(pbVar35[0x15] == DAT_014e4ff0._11_1_);
      auVar51[0xc] = -(pbVar35[0x16] == DAT_014e4ff0._12_1_);
      auVar51[0xd] = -(pbVar35[0x17] == DAT_014e4ff0._13_1_);
      auVar51[0xe] = -(pbVar35[0x18] == DAT_014e4ff0._14_1_);
      auVar51[0xf] = -(pbVar35[0x19] == DAT_014e4ff0._15_1_);
      auVar51 = auVar51 & auVar48;
      if ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar25 == *(byte **)(puStack_338 + 0x58)) {
LAB_0e4f6629:
    if (iStack_310 == 0) {
      if ((*(int *)(lVar43 + 0x60) != -0x2b3da790) || (*(long *)(lVar43 + 0x68) == 0))
      goto LAB_0e4f6699;
      lVar43 = *(long *)(lVar43 + 0x68) + 0x38;
    }
    else {
      auStack_418 = (undefined1  [8])func_0x048b0c90(puVar23,lVar43,uStack_30c,1);
      if (auStack_418 == (undefined1  [8])0x0) {
        _auStack_418 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_418);
        if (auStack_418 == (undefined1  [8])0x0) goto LAB_0e4f6699;
      }
      if ((*(int *)((long)auStack_418 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_418 + 0x58) != 0)) {
        lVar43 = *(long *)((long)auStack_418 + 0x58) + 0x40;
      }
      else {
LAB_0e4f6699:
        lVar43 = 0;
      }
    }
    iStack_2d8 = 0x48b5725f;
    _auStack_2e8 = ZEXT816(0x488e0b0);
    uStack_2d4 = uStack_2d4 & 0xffffff00;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = puStack_2f0;
    _auStack_2f8 = auVar13 << 0x40;
    _auStack_418 = (undefined1  [16])0x0;
    iStack_400 = 0x488e0b0;
    iStack_3fc = 0;
    pcStack_3f8 = (code *)0x0;
    uStack_3f0 = 0x48b5725f;
    uStack_3ec = uStack_3ec & 0xffffff00;
    pcVar31 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pcVar31 == (code *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    auStack_238._8_8_ = 0x1a;
    auStack_238._0_8_ = 0x21;
    *(ulong *)(pcVar31 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)(pcVar31 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *(undefined8 *)pcVar31 = _DAT_013bbacd;
    *(undefined8 *)(pcVar31 + 8) = uVar4;
    pcVar31[0x1a] = (code)0x0;
    pcStack_228 = pcVar31;
    lVar43 = func_0x048b5060(lVar43,auStack_238);
    *(undefined8 *)(lVar43 + 0x20) = 0;
    if ((undefined1 *)(lVar43 + 0x20) == auStack_418) {
      pcVar31 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar43 + 0x40) != (code *)0x0) {
        puVar27 = (undefined8 *)(lVar43 + 0x28);
        (**(code **)(lVar43 + 0x40))(puVar27);
        if ((char)uStack_3ec != '\0') {
          if ((char)uStack_3ec == '\x02') {
            (*(code *)CONCAT44(iStack_3fc,iStack_400))(5,&ppuStack_410,puVar27);
          }
          else {
            ppuVar33 = ppuStack_410;
            ppuStack_410 = (undefined **)0x0;
            *puVar27 = ppuVar33;
          }
        }
      }
      *(ulong *)(lVar43 + 0x38) = CONCAT44(iStack_3fc,iStack_400);
      *(code **)(lVar43 + 0x40) = pcStack_3f8;
      *(uint *)(lVar43 + 0x48) = uStack_3f0;
      *(char *)(lVar43 + 0x4c) = (char)uStack_3ec;
      pcVar31 = pcStack_3f8;
    }
    if ((auStack_238[0] & 1) != 0) {
      func_0x0412a280(pcStack_228,auStack_238._0_8_ & 0xfffffffffffffffe);
      pcVar31 = pcStack_3f8;
    }
    if (pcVar31 != (code *)0x0) {
      (*pcVar31)(&ppuStack_410);
    }
    if (stack0xfffffffffffffd20 != (code *)0x0) {
      (*stack0xfffffffffffffd20)(auStack_2f8);
    }
  }
  else {
    iVar21 = *(int *)(pbVar25 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar22 = func_0x04108328(&DAT_0f550ad8), iVar22 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar21 == _DAT_0f550ac4) goto LAB_0e4f6629;
  }
  puVar17 = puStack_338;
  puStack_158 = puStack_330;
  pcStack_150 = pcStack_328;
  pcStack_140 = (code *)CONCAT44(uStack_314,iStack_318);
  pcStack_148 = pcStack_320;
  lStack_170 = CONCAT44(lStack_170._4_4_,iStack_310);
  uStack_340 = CONCAT44(uStack_340._4_4_,uStack_30c);
  uStack_168 = CONCAT44(uStack_304,uStack_308);
  uStack_118 = (undefined *)CONCAT26(uStack_118._6_2_,0x746500000000);
  uStack_118 = (undefined *)CONCAT44(uStack_118._4_4_,0x53206572);
  puVar23 = puStack_338 + 0x18;
  lVar43 = func_0x0d31a0e0(puVar23);
  pbVar35 = *(byte **)(puVar17 + 0x58);
  for (pbVar25 = *(byte **)(puVar17 + 0x50); pbVar25 != pbVar35; pbVar25 = pbVar25 + 0x38) {
    bVar2 = *pbVar25;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e4f692a;
    }
    else if (*(long *)(pbVar25 + 8) == 0x24) {
LAB_0e4f692a:
      if ((bVar2 & 1) == 0) {
        pbVar40 = pbVar25 + 1;
      }
      else {
        pbVar40 = *(byte **)(pbVar25 + 0x10);
      }
      iVar21 = bcmp(&DAT_014518a9,pbVar40,0x24);
      if (iVar21 == 0) break;
    }
  }
  if (pbVar25 != pbVar35) {
    iVar21 = *(int *)(pbVar25 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar22 = func_0x04108328(&DAT_0f550768), iVar22 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar21 != _DAT_0f550754) goto LAB_0e4f6c16;
  }
  if ((int)lStack_170 == 0) {
    if ((*(int *)(lVar43 + 0x60) != -0x2b3da790) || (*(long *)(lVar43 + 0x68) == 0))
    goto LAB_0e4f69c9;
    lVar43 = *(long *)(lVar43 + 0x68) + 0x38;
  }
  else {
    auVar26 = (undefined1  [8])func_0x048b0c90(puVar23,lVar43,uStack_340 & 0xffffffff,1);
    if (auVar26 == (undefined1  [8])0x0) {
      _auStack_418 = ZEXT816(0);
      func_0x048b0d20(auStack_418);
      auVar26 = auStack_418;
      if (auStack_418 == (undefined1  [8])0x0) goto LAB_0e4f69c9;
    }
    if ((*(int *)((long)auVar26 + 0x50) == -0x45dcb126) && (*(long *)((long)auVar26 + 0x58) != 0)) {
      lVar43 = *(long *)((long)auVar26 + 0x58) + 0x40;
    }
    else {
LAB_0e4f69c9:
      lVar43 = 0;
    }
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = puStack_2f0;
  _auStack_2f8 = auVar14 << 0x40;
  iStack_2d8 = -0x2cc4263b;
  stack0xfffffffffffffd20 = (code *)&UNK_048b49f0;
  auStack_2e8._0_8_ = &UNK_048b4ab0;
  uStack_2d4 = CONCAT31(uStack_2d4._1_3_,1);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar27 = 0x757463757274531a;
  *(undefined4 *)(puVar27 + 1) = (undefined4)uStack_118;
  *(undefined2 *)((long)puVar27 + 0xc) = uStack_118._4_2_;
  *(undefined2 *)((long)puVar27 + 0xe) = 0;
  puVar27[2] = 0;
  uStack_118 = (undefined *)((ulong)uStack_118 & 0xffff000000000000);
  *(undefined2 *)(puVar27 + 3) = 0x1400;
  puVar27[4] = 0x1001400150001;
  puVar27[5] = &UNK_01254d89;
  puVar27[6] = &UNK_01254d89;
  iStack_400 = 0x48b4ab0;
  iStack_3fc = 0;
  pcStack_3f8 = (code *)&UNK_048b49f0;
  uStack_3f0 = 0xd33bd9c5;
  uStack_3ec = CONCAT31(uStack_3ec._1_3_,1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = puStack_2f0;
  _auStack_2f8 = auVar15 << 0x40;
  ppuStack_410 = (undefined **)puVar27;
  auStack_418 = (undefined1  [8])&UNK_048b46e0;
  pcVar31 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (pcVar31 == (code *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar4 = _UNK_014518c1;
  auStack_238._8_8_ = 0x24;
  auStack_238._0_8_ = 0x29;
  *(undefined8 *)(pcVar31 + 0x10) = _DAT_014518b9;
  *(undefined8 *)(pcVar31 + 0x18) = uVar4;
  uVar4 = _UNK_014518b1;
  *(undefined8 *)pcVar31 = _DAT_014518a9;
  *(undefined8 *)(pcVar31 + 8) = uVar4;
  *(undefined4 *)(pcVar31 + 0x20) = 0x5d797472;
  pcVar31[0x24] = (code)0x0;
  pcStack_228 = pcVar31;
  lVar43 = func_0x048b5060(lVar43,auStack_238);
  *(undefined **)(lVar43 + 0x20) = &UNK_048b46e0;
  pcVar31 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar43 + 0x20) != auStack_418) {
    puVar27 = (undefined8 *)(lVar43 + 0x28);
    if (*(code **)(lVar43 + 0x40) == (code *)0x0) {
LAB_0e4f6b9a:
      ppuVar33 = ppuStack_410;
      ppuStack_410 = (undefined **)0x0;
      *puVar27 = ppuVar33;
    }
    else {
      (**(code **)(lVar43 + 0x40))(puVar27);
      if ((char)uStack_3ec != '\0') {
        if ((char)uStack_3ec != '\x02') goto LAB_0e4f6b9a;
        (*(code *)CONCAT44(iStack_3fc,iStack_400))(5,&ppuStack_410,puVar27);
      }
    }
    *(ulong *)(lVar43 + 0x38) = CONCAT44(iStack_3fc,iStack_400);
    *(code **)(lVar43 + 0x40) = pcStack_3f8;
    *(uint *)(lVar43 + 0x48) = uStack_3f0;
    *(char *)(lVar43 + 0x4c) = (char)uStack_3ec;
    pcVar31 = pcStack_3f8;
  }
  if ((auStack_238[0] & 1) != 0) {
    func_0x0412a280(pcStack_228,auStack_238._0_8_ & 0xfffffffffffffffe);
    pcVar31 = pcStack_3f8;
  }
  if (pcVar31 != (code *)0x0) {
    (*pcVar31)(&ppuStack_410);
  }
  if (stack0xfffffffffffffd20 != (code *)0x0) {
    (*stack0xfffffffffffffd20)(auStack_2f8);
  }
LAB_0e4f6c16:
  auStack_1a8._8_8_ = puStack_158;
  auStack_1a8._0_8_ = puVar17;
  pcStack_198 = pcStack_150;
  pcStack_190 = pcStack_148;
  uStack_188 = pcStack_140;
  uStack_180 = (int)lStack_170;
  uStack_17c = (undefined4)uStack_340;
  uStack_178 = uStack_168;
  func_0x0e69b540(auStack_418,auStack_1a8,&UNK_011ea907,0xb);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4c5a60;
  plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
  iStack_400 = (int)puVar27;
  iStack_3fc = (int)((ulong)puVar27 >> 0x20);
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 8))();
  }
  auStack_2f8._0_4_ = uStack_408;
  puStack_2f0 = (undefined8 *)0x0;
  auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
  stack0xfffffffffffffd20 = (code *)0x1;
  iStack_2d8 = 0;
  uStack_2d4 = 0;
  auStack_2d0 = (undefined1  [4])0xe69bc60;
  uStack_2cc = 0;
  cStack_2c8 = 0xd0;
  uStack_2c7 = 0x48b06;
  puStack_2c0 = (undefined8 *)&UNK_0e689970;
  auStack_2b8._8_8_ = &UNK_0e69bee0;
  auStack_2b8._0_8_ = &UNK_0e69bd20;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  auStack_2a0 = ZEXT816(0);
  func_0x048b05a0(ppuStack_410,auStack_2f8);
  uVar4 = auStack_2a0._8_8_;
  if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
    LOCK();
    plVar29 = (long *)(auStack_2a0._8_8_ + 8);
    lVar43 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar43 == 0) {
      (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e69b730(auStack_418);
  uStack_1c8 = CONCAT71(uStack_1c8._1_7_,(undefined1)uStack_178);
  auStack_1d8._12_4_ = uStack_17c;
  auStack_1d8._8_4_ = uStack_180;
  auStack_1d8._0_8_ = uStack_188;
  pcStack_1e8 = pcStack_198;
  pcStack_1e0 = pcStack_190;
  auStack_1f8 = auStack_1a8;
  func_0x048b0bc0(&iStack_400);
  func_0x0e69b540(auStack_418,auStack_1f8,&UNK_0147349c,9);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4c5ad8;
  plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
  iStack_400 = (int)puVar27;
  iStack_3fc = (int)((ulong)puVar27 >> 0x20);
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 8))();
  }
  auStack_2f8._0_4_ = uStack_408;
  puStack_2f0 = (undefined8 *)0x0;
  auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
  stack0xfffffffffffffd20 = (code *)0x1;
  iStack_2d8 = 0;
  uStack_2d4 = 0;
  auStack_2d0 = (undefined1  [4])0xe69c540;
  uStack_2cc = 0;
  cStack_2c8 = 0xd0;
  uStack_2c7 = 0x48b06;
  puStack_2c0 = (undefined8 *)&UNK_0e6939e0;
  auStack_2b8._8_8_ = &UNK_0e69c770;
  auStack_2b8._0_8_ = &UNK_0e69c600;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  auStack_2a0 = ZEXT816(0);
  func_0x048b05a0(ppuStack_410,auStack_2f8);
  uVar4 = auStack_2a0._8_8_;
  if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
    LOCK();
    plVar29 = (long *)(auStack_2a0._8_8_ + 8);
    lVar43 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar43 == 0) {
      (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e69b730(auStack_418);
  uStack_208 = CONCAT31(uStack_208._1_3_,(undefined1)uStack_1c8);
  iStack_218 = auStack_1d8._0_4_;
  uStack_214 = auStack_1d8._4_4_;
  iStack_210 = auStack_1d8._8_4_;
  uStack_20c = auStack_1d8._12_4_;
  pcStack_228 = pcStack_1e8;
  uStack_220 = pcStack_1e0;
  auStack_238 = auStack_1f8;
  func_0x048b0bc0(&iStack_400);
  func_0x0e69b540(auStack_418,auStack_238,&UNK_0147a988,10);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4c5b50;
  plVar29 = (long *)CONCAT44(iStack_3fc,iStack_400);
  iStack_400 = (int)puVar27;
  iStack_3fc = (int)((ulong)puVar27 >> 0x20);
  if (plVar29 != (long *)0x0) {
    (**(code **)(*plVar29 + 8))();
  }
  auStack_2f8._0_4_ = uStack_408;
  puStack_2f0 = (undefined8 *)0x0;
  auStack_2e8._0_8_ = auStack_2e8._4_8_ << 0x20;
  stack0xfffffffffffffd20 = (code *)0x1;
  iStack_2d8 = 0;
  uStack_2d4 = 0;
  auStack_2d0 = (undefined1  [4])0xe6a0000;
  uStack_2cc = 0;
  cStack_2c8 = 0xd0;
  uStack_2c7 = 0x48b06;
  puStack_2c0 = (undefined8 *)&UNK_0e69eb90;
  auStack_2b8._8_8_ = &UNK_0e6a02b0;
  auStack_2b8._0_8_ = &UNK_0e6a00c0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  auStack_2a0 = (undefined1  [16])0x0;
  func_0x048b05a0(ppuStack_410,auStack_2f8);
  uVar4 = auStack_2a0._8_8_;
  if ((long *)auStack_2a0._8_8_ != (long *)0x0) {
    LOCK();
    plVar29 = (long *)(auStack_2a0._8_8_ + 8);
    lVar43 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar43 == 0) {
      (**(code **)(*(long *)auStack_2a0._8_8_ + 0x10))(auStack_2a0._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0e69b730(auStack_418);
  func_0x048b0bc0(&iStack_400);
  return;
}



/* ---- referenced strings ----
 * 0x138b3ad  minecraft:random_spread
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14eaba0  [cereal:document
 */
