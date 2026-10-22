/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4f1ef0 (ELF vaddr 0xe3f1ef0)
 * Label: caller-of-callee
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
    FUN_0410844d(&DAT_0f75c930);
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
    FUN_04134310(auStack_1a8,0xe);
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
      FUN_0410844d(&DAT_0f75c930);
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
        FUN_0410844d(&DAT_0f550768);
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
      FUN_0410844d(&DAT_0f75c950);
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
      FUN_0410844d(&DAT_0f551bc8);
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
      FUN_0410844d(&DAT_0f75c950);
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
      FUN_0410844d(&DAT_0f75c950);
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
      FUN_0410844d(&DAT_0f551cb0);
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
    FUN_0410844d(&DAT_0f75c9e8);
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
    FUN_0e689ff0(&puStack_338,param_1,lVar36,uVar38);
  }
  else {
    puVar23 = (undefined *)plVar29[2];
    if (*(int *)(puVar23 + 0x60) == -0x2b3da790) goto LAB_0e4f2a0b;
LAB_0e4f2a4e:
    FUN_0e689ff0(&puStack_338,param_1,&UNK_013f4016,0x20);
  }
  if ((char)uStack_308 == '\0') {
    uStack_2a8._4_4_ = (uint)(uStack_2a8 >> 0x20);
    if ((DAT_0f75ca08 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75ca08), iVar21 != 0)) {
      func_0x0e689b40();
      FUN_0410844d(&DAT_0f75ca08);
    }
    puVar23 = puStack_338;
    iStack_310 = 1;
    uStack_30c = 0x28a5a83e;
    if ((DAT_0f75c9e8 == '\0') && (iVar21 = func_0x04108328(&DAT_0f75c9e8), iVar21 != 0)) {
      func_0x0e689a30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75c968,0xf53dab8);
      FUN_0410844d(&DAT_0f75c9e8);
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
    FUN_048afb10(&uStack_3c0,8);
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
      FUN_0410844d(&DAT_0f550a20);
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
    FUN_0410844d(&DAT_0f75caa0);
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
    FUN_048afb10(&uStack_3d8,8);
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
      FUN_0410844d(&DAT_0f75cac0);
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
      FUN_0410844d(&DAT_0f550a20);
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
        FUN_0410844d(&DAT_0f75caa0);
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
      FUN_0410844d(&DAT_0f75caa0);
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
    FUN_0410844d(&DAT_0f75cb58);
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
      FUN_0410844d(&DAT_0f75cb78);
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
      FUN_0410844d(&DAT_0f75cb58);
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
      FUN_0410844d(&DAT_0f75cb78);
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
      FUN_0410844d(&DAT_0f75cb58);
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
    FUN_0410844d(&DAT_0f75cc10);
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
    puStack_2c0 = (undefined8 *)&SUB_0490cb20;
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
        FUN_0410844d(&DAT_0f75cc10);
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
      auVar26 = (undefined1  [8])FUN_048b1040(uVar4 + 0x18,puVar23,uVar37,1);
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
        FUN_0410844d(&DAT_0f75cc10);
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
    FUN_0410844d(&DAT_0f75ccc8);
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
    FUN_04134310(&puStack_158,0xd);
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
      FUN_0410844d(&DAT_0f75ccc8);
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
        FUN_0410844d(&DAT_0f550768);
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
      FUN_0410844d(&DAT_0f75cce8);
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
      FUN_0410844d(&DAT_0f75cce8);
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
      FUN_0410844d(&DAT_0f75cce8);
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
      FUN_0410844d(&DAT_0f551cb0);
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
      FUN_0410844d(&DAT_0f75cce8);
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
    FUN_0410844d(&DAT_0f75cd80);
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
        FUN_0410844d(&DAT_0f75cd80);
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
      auVar26 = (undefined1  [8])FUN_048b1040(uVar4 + 0x18,puVar23,uVar37,1);
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
        FUN_0410844d(&DAT_0f75cd80);
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
      FUN_0410844d(&DAT_0f550ad8);
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
      iVar21 = func_0x0eee3000(&DAT_014518a9,pbVar40,0x24);
      if (iVar21 == 0) break;
    }
  }
  if (pbVar25 != pbVar35) {
    iVar21 = *(int *)(pbVar25 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar22 = func_0x04108328(&DAT_0f550768), iVar22 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
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

/* ---- assembly ---- */
/* 0e4f1ef0 */  PUSH RBP
/* 0e4f1ef1 */  PUSH R15
/* 0e4f1ef3 */  PUSH R14
/* 0e4f1ef5 */  PUSH R13
/* 0e4f1ef7 */  PUSH R12
/* 0e4f1ef9 */  PUSH RBX
/* 0e4f1efa */  SUB RSP,0x3e8
/* 0e4f1f01 */  MOV RBX,RDI
/* 0e4f1f04 */  LEA RAX,[0x1302d5c]
/* 0e4f1f0b */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e4f1f13 */  MOV qword ptr [RSP + 0xe8],0x12
/* 0e4f1f1f */  LEA RSI,[0x13d851d]
/* 0e4f1f26 */  MOV RDI,RSP
/* 0e4f1f29 */  LEA R8,[RSP + 0xe0]
/* 0e4f1f31 */  MOV EDX,0xd
/* 0e4f1f36 */  MOV ECX,0xd
/* 0e4f1f3b */  CALL 0x0470d9a0
/* 0e4f1f40 */  MOVZX EAX,byte ptr [RSP]
/* 0e4f1f44 */  MOV ECX,EAX
/* 0e4f1f46 */  SHR ECX,0x1
/* 0e4f1f48 */  TEST AL,0x1
/* 0e4f1f4a */  LEA RAX,[RSP + 0x1]
/* 0e4f1f4f */  MOV RDX,qword ptr [RSP + 0x10]
/* 0e4f1f54 */  CMOVNZ RCX,qword ptr [RSP + 0x8]
/* 0e4f1f5a */  CMOVZ RDX,RAX
/* 0e4f1f5e */  MOVZX EAX,byte ptr [0x0f75c930]
/* 0e4f1f65 */  TEST AL,AL
/* 0e4f1f67 */  JZ 0x0e4f7309
/* 0e4f1f6d */  LEA RAX,[RBX + 0x18]
/* 0e4f1f71 */  MOV qword ptr [RSP + 0x2a8],RAX
/* 0e4f1f79 */  MOV R8D,0xffffffff
/* 0e4f1f7f */  MOV RAX,qword ptr [0x0f75c8b0]
/* 0e4f1f86 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f1f89 */  MOV RSI,qword ptr [RBX + 0x18]
/* 0e4f1f8d */  MOV RDI,qword ptr [RBX + 0x20]
/* 0e4f1f91 */  SUB RDI,RSI
/* 0e4f1f94 */  SHR RDI,0x3
/* 0e4f1f98 */  ADD EDI,R8D
/* 0e4f1f9b */  AND EDI,EAX
/* 0e4f1f9d */  LEA RSI,[RSI + RDI*0x8]
/* 0e4f1fa1 */  MOV RDI,qword ptr [RBX + 0x30]
/* 0e4f1fa5 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f1fb0 */  MOV RSI,qword ptr [RSI]
/* 0e4f1fb3 */  CMP RSI,-0x1
/* 0e4f1fb7 */  JZ 0x0e4f1fe3
/* 0e4f1fb9 */  LEA R8,[RSI + RSI*0x2]
/* 0e4f1fbd */  LEA RSI,[RDI + R8*0x8]
/* 0e4f1fc1 */  CMP dword ptr [RDI + R8*0x8 + 0x8],EAX
/* 0e4f1fc6 */  JNZ 0x0e4f1fb0
/* 0e4f1fc8 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f1fcc */  CMP RSI,RAX
/* 0e4f1fcf */  JNZ 0x0e4f1fef
/* 0e4f1fd1 */  LEA RAX,[0xf75c8b0]
/* 0e4f1fd8 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f1fdf */  JZ 0x0e4f1ffc
/* 0e4f1fe1 */  JMP 0x0e4f201f
/* 0e4f1fe3 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f1fe7 */  MOV RSI,RAX
/* 0e4f1fea */  CMP RSI,RAX
/* 0e4f1fed */  JZ 0x0e4f1fd1
/* 0e4f1fef */  MOV RAX,qword ptr [RSI + 0x10]
/* 0e4f1ff3 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f1ffa */  JNZ 0x0e4f201f
/* 0e4f1ffc */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f2000 */  TEST RAX,RAX
/* 0e4f2003 */  JZ 0x0e4f201f
/* 0e4f2005 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f2009 */  LEA RDX,[RAX + 0x9]
/* 0e4f200d */  MOV ECX,ESI
/* 0e4f200f */  SHR ECX,0x1
/* 0e4f2011 */  TEST SIL,0x1
/* 0e4f2015 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f201a */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f201f */  LEA RDI,[RSP + 0x120]
/* 0e4f2027 */  MOV RSI,RBX
/* 0e4f202a */  CALL 0x0e688330
/* 0e4f202f */  TEST byte ptr [RSP],0x1
/* 0e4f2033 */  JZ 0x0e4f2047
/* 0e4f2035 */  MOV RSI,qword ptr [RSP]
/* 0e4f2039 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0e4f203e */  AND RSI,-0x2
/* 0e4f2042 */  CALL 0x0412a280
/* 0e4f2047 */  CMP byte ptr [RSP + 0x150],0x0
/* 0e4f204f */  JNZ 0x0e4f297a
/* 0e4f2055 */  LEA R14,[RSP + 0x270]
/* 0e4f205d */  MOV RDI,R14
/* 0e4f2060 */  MOV ESI,0xe
/* 0e4f2065 */  CALL 0x04134310
/* 0e4f206a */  LEA RDX,[0x1284191]
/* 0e4f2071 */  MOV ECX,0xb
/* 0e4f2076 */  MOV RDI,R14
/* 0e4f2079 */  XOR ESI,ESI
/* 0e4f207b */  CALL 0x0412f0e0
/* 0e4f2080 */  MOVDQU XMM0,xmmword ptr [RAX]
/* 0e4f2084 */  MOVDQA xmmword ptr [RSP + 0x2b0],XMM0
/* 0e4f208d */  MOV R12,qword ptr [RAX]
/* 0e4f2090 */  MOV RCX,qword ptr [RAX + 0x10]
/* 0e4f2094 */  MOV qword ptr [RSP + 0xd8],RCX
/* 0e4f209c */  PXOR XMM0,XMM0
/* 0e4f20a0 */  MOVDQU xmmword ptr [RAX],XMM0
/* 0e4f20a4 */  MOV qword ptr [RAX + 0x10],0x0
/* 0e4f20ac */  MOV R15,qword ptr [RSP + 0x120]
/* 0e4f20b4 */  MOVZX EAX,byte ptr [0x0f75c930]
/* 0e4f20bb */  TEST AL,AL
/* 0e4f20bd */  JZ 0x0e4f7509
/* 0e4f20c3 */  MOV R13,R12
/* 0e4f20c6 */  AND R13,-0x100
/* 0e4f20cd */  LEA R14,[R15 + 0x18]
/* 0e4f20d1 */  MOV RAX,qword ptr [0x0f75c8b0]
/* 0e4f20d8 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f20db */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e4f20df */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e4f20e3 */  SUB RDX,RCX
/* 0e4f20e6 */  SHR RDX,0x3
/* 0e4f20ea */  MOV ESI,0xffffffff
/* 0e4f20ef */  ADD EDX,ESI
/* 0e4f20f1 */  AND EDX,EAX
/* 0e4f20f3 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f20f7 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e4f20fb */  NOP dword ptr [RAX + RAX*0x1]
/* 0e4f2100 */  MOV RCX,qword ptr [RCX]
/* 0e4f2103 */  CMP RCX,-0x1
/* 0e4f2107 */  JZ 0x0e4f2129
/* 0e4f2109 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f210d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f2111 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f2115 */  JNZ 0x0e4f2100
/* 0e4f2117 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f211b */  CMP RCX,RAX
/* 0e4f211e */  JNZ 0x0e4f2135
/* 0e4f2120 */  LEA R15,[0xf75c8b0]
/* 0e4f2127 */  JMP 0x0e4f2139
/* 0e4f2129 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f212d */  MOV RCX,RAX
/* 0e4f2130 */  CMP RCX,RAX
/* 0e4f2133 */  JZ 0x0e4f2120
/* 0e4f2135 */  MOV R15,qword ptr [RCX + 0x10]
/* 0e4f2139 */  MOV RCX,qword ptr [RSP + 0x120]
/* 0e4f2141 */  MOV RAX,qword ptr [RCX + 0x50]
/* 0e4f2145 */  MOV RCX,qword ptr [RCX + 0x58]
/* 0e4f2149 */  CMP RAX,RCX
/* 0e4f214c */  JZ 0x0e4f2205
/* 0e4f2152 */  MOV RDX,0x6863735f6e6f736a
/* 0e4f215c */  MOV RSI,0x3a6c61657265635b
/* 0e4f2166 */  MOV RDI,0x5d79747265706f72
/* 0e4f2170 */  MOV R8,0x705f616d65686373
/* 0e4f217a */  MOVQ XMM0,RSI
/* 0e4f217f */  MOVQ XMM1,RDX
/* 0e4f2184 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4f2188 */  MOVQ XMM1,R8
/* 0e4f218d */  MOVQ XMM2,RDI
/* 0e4f2192 */  PUNPCKLQDQ XMM1,XMM2
/* 0e4f2196 */  JMP 0x0e4f21ce
/* 0e4f21a0 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4f21a4 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4f21a8 */  PCMPEQB XMM2,XMM0
/* 0e4f21ac */  MOVDQU XMM3,xmmword ptr [RDX + 0xd]
/* 0e4f21b1 */  PCMPEQB XMM3,XMM1
/* 0e4f21b5 */  PAND XMM3,XMM2
/* 0e4f21b9 */  PMOVMSKB EDX,XMM3
/* 0e4f21bd */  CMP EDX,0xffff
/* 0e4f21c3 */  JZ 0x0e4f2205
/* 0e4f21c5 */  ADD RAX,0x38
/* 0e4f21c9 */  CMP RAX,RCX
/* 0e4f21cc */  JZ 0x0e4f2205
/* 0e4f21ce */  MOVZX EDX,byte ptr [RAX]
/* 0e4f21d1 */  TEST DL,0x1
/* 0e4f21d4 */  JZ 0x0e4f21f0
/* 0e4f21d6 */  MOV RSI,qword ptr [RAX + 0x8]
/* 0e4f21da */  CMP RSI,0x1d
/* 0e4f21de */  JNZ 0x0e4f21c5
/* 0e4f21e0 */  JMP 0x0e4f21fa
/* 0e4f21f0 */  MOV ESI,EDX
/* 0e4f21f2 */  SHR ESI,0x1
/* 0e4f21f4 */  CMP RSI,0x1d
/* 0e4f21f8 */  JNZ 0x0e4f21c5
/* 0e4f21fa */  TEST DL,0x1
/* 0e4f21fd */  JNZ 0x0e4f21a0
/* 0e4f21ff */  LEA RDX,[RAX + 0x1]
/* 0e4f2203 */  JMP 0x0e4f21a4
/* 0e4f2205 */  CMP RAX,RCX
/* 0e4f2208 */  JZ 0x0e4f2228
/* 0e4f220a */  MOV EBP,dword ptr [RAX + 0x1c]
/* 0e4f220d */  MOVZX EAX,byte ptr [0x0f550768]
/* 0e4f2214 */  TEST AL,AL
/* 0e4f2216 */  JZ 0x0e4f7964
/* 0e4f221c */  CMP EBP,dword ptr [0x0f550754]
/* 0e4f2222 */  JNZ 0x0e4f24c6
/* 0e4f2228 */  CMP dword ptr [RSP + 0x148],0x0
/* 0e4f2230 */  JZ 0x0e4f2294
/* 0e4f2232 */  MOV R13D,dword ptr [RSP + 0x14c]
/* 0e4f223a */  TEST R15,R15
/* 0e4f223d */  JNZ 0x0e4f224a
/* 0e4f223f */  MOV RDI,R14
/* 0e4f2242 */  CALL 0x048aead0
/* 0e4f2247 */  MOV R15,RAX
/* 0e4f224a */  MOV RDI,R14
/* 0e4f224d */  MOV RSI,R15
/* 0e4f2250 */  MOV EDX,R13D
/* 0e4f2253 */  MOV ECX,0x1
/* 0e4f2258 */  CALL 0x048b0c90
/* 0e4f225d */  TEST RAX,RAX
/* 0e4f2260 */  JNZ 0x0e4f227c
/* 0e4f2262 */  PXOR XMM0,XMM0
/* 0e4f2266 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f226b */  MOV RDI,RSP
/* 0e4f226e */  CALL 0x048b0d20
/* 0e4f2273 */  MOV RAX,qword ptr [RSP]
/* 0e4f2277 */  TEST RAX,RAX
/* 0e4f227a */  JZ 0x0e4f22b2
/* 0e4f227c */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4f2283 */  JNZ 0x0e4f22b2
/* 0e4f2285 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4f2289 */  TEST R14,R14
/* 0e4f228c */  JZ 0x0e4f22b2
/* 0e4f228e */  ADD R14,0x40
/* 0e4f2292 */  JMP 0x0e4f22b5
/* 0e4f2294 */  TEST R15,R15
/* 0e4f2297 */  JZ 0x0e4f22b2
/* 0e4f2299 */  CMP dword ptr [R15 + 0x60],0xd4c25870
/* 0e4f22a1 */  JNZ 0x0e4f22b2
/* 0e4f22a3 */  MOV R14,qword ptr [R15 + 0x68]
/* 0e4f22a7 */  TEST R14,R14
/* 0e4f22aa */  JZ 0x0e4f22b2
/* 0e4f22ac */  ADD R14,0x38
/* 0e4f22b0 */  JMP 0x0e4f22b5
/* 0e4f22b2 */  XOR R14D,R14D
/* 0e4f22b5 */  MOV qword ptr [RSP + 0x1e0],0x0
/* 0e4f22c1 */  LEA RBP,[0x48b4ab0]
/* 0e4f22c8 */  MOV qword ptr [RSP + 0x1f0],RBP
/* 0e4f22d0 */  MOV dword ptr [RSP + 0x200],0xd33bd9c5
/* 0e4f22db */  LEA R12,[0x48b49f0]
/* 0e4f22e2 */  MOV qword ptr [RSP + 0x1f8],R12
/* 0e4f22ea */  MOV byte ptr [RSP + 0x204],0x1
/* 0e4f22f2 */  LEA RDI,[0xf5463b0]
/* 0e4f22f9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f2300 */  MOV ESI,0x38
/* 0e4f2305 */  CALL qword ptr [RAX + 0x10]
/* 0e4f2308 */  MOV R15,RAX
/* 0e4f230b */  TEST RAX,RAX
/* 0e4f230e */  JZ 0x0e4f725f
/* 0e4f2314 */  MOVDQA XMM0,xmmword ptr [RSP + 0x2b0]
/* 0e4f231d */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4f2322 */  MOV RAX,qword ptr [RSP + 0xd8]
/* 0e4f232a */  MOV qword ptr [R15 + 0x10],RAX
/* 0e4f232e */  MOV word ptr [R15 + 0x18],0x400
/* 0e4f2335 */  PXOR XMM0,XMM0
/* 0e4f2339 */  MOVDQU xmmword ptr [R15 + 0x20],XMM0
/* 0e4f233f */  MOV qword ptr [R15 + 0x30],0x0
/* 0e4f2347 */  LEA R13,[0x48b46e0]
/* 0e4f234e */  MOV qword ptr [RSP],R13
/* 0e4f2352 */  MOV qword ptr [RSP + 0x18],RBP
/* 0e4f2357 */  MOV qword ptr [RSP + 0x20],R12
/* 0e4f235c */  MOV dword ptr [RSP + 0x28],0xd33bd9c5
/* 0e4f2364 */  MOV byte ptr [RSP + 0x2c],0x1
/* 0e4f2369 */  MOV qword ptr [RSP + 0x1e0],0x0
/* 0e4f2375 */  MOV qword ptr [RSP + 0x8],R15
/* 0e4f237a */  LEA RDI,[0xf5463b0]
/* 0e4f2381 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f2388 */  MOV ESI,0x20
/* 0e4f238d */  CALL qword ptr [RAX + 0x10]
/* 0e4f2390 */  MOV R15,RAX
/* 0e4f2393 */  TEST RAX,RAX
/* 0e4f2396 */  JZ 0x0e4f7270
/* 0e4f239c */  MOV qword ptr [RSP + 0x230],R15
/* 0e4f23a4 */  MOV qword ptr [RSP + 0x220],0x21
/* 0e4f23b0 */  MOV qword ptr [RSP + 0x228],0x1d
/* 0e4f23bc */  MOVUPS XMM0,xmmword ptr [0x014d9876]
/* 0e4f23c3 */  MOVUPS xmmword ptr [R15 + 0xd],XMM0
/* 0e4f23c8 */  MOVDQU XMM0,xmmword ptr [0x014d9869]
/* 0e4f23d0 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4f23d5 */  MOV byte ptr [R15 + 0x1d],0x0
/* 0e4f23da */  LEA RSI,[RSP + 0x220]
/* 0e4f23e2 */  MOV RDI,R14
/* 0e4f23e5 */  CALL 0x048b5060
/* 0e4f23ea */  MOV R15,RAX
/* 0e4f23ed */  LEA R14,[RSP + 0x8]
/* 0e4f23f2 */  ADD RAX,0x20
/* 0e4f23f6 */  MOV qword ptr [R15 + 0x20],R13
/* 0e4f23fa */  MOV RCX,RSP
/* 0e4f23fd */  CMP RAX,RCX
/* 0e4f2400 */  JZ 0x0e4f246a
/* 0e4f2402 */  MOV R12,R15
/* 0e4f2405 */  ADD R12,0x28
/* 0e4f2409 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4f240d */  TEST RAX,RAX
/* 0e4f2410 */  JZ 0x0e4f2436
/* 0e4f2412 */  MOV RDI,R12
/* 0e4f2415 */  CALL RAX
/* 0e4f2417 */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4f241c */  TEST EAX,EAX
/* 0e4f241e */  JZ 0x0e4f2448
/* 0e4f2420 */  CMP EAX,0x2
/* 0e4f2423 */  JNZ 0x0e4f2436
/* 0e4f2425 */  MOV EDI,0x5
/* 0e4f242a */  MOV RSI,R14
/* 0e4f242d */  MOV RDX,R12
/* 0e4f2430 */  CALL qword ptr [RSP + 0x18]
/* 0e4f2434 */  JMP 0x0e4f2448
/* 0e4f2436 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0e4f243b */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f2444 */  MOV qword ptr [R12],RAX
/* 0e4f2448 */  MOV R12,qword ptr [RSP + 0x20]
/* 0e4f244d */  MOVDQU XMM0,xmmword ptr [RSP + 0x18]
/* 0e4f2453 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4f2459 */  MOV EAX,dword ptr [RSP + 0x28]
/* 0e4f245d */  MOV dword ptr [R15 + 0x48],EAX
/* 0e4f2461 */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4f2466 */  MOV byte ptr [R15 + 0x4c],AL
/* 0e4f246a */  TEST byte ptr [RSP + 0x220],0x1
/* 0e4f2472 */  JZ 0x0e4f2492
/* 0e4f2474 */  MOV RSI,qword ptr [RSP + 0x220]
/* 0e4f247c */  MOV RDI,qword ptr [RSP + 0x230]
/* 0e4f2484 */  AND RSI,-0x2
/* 0e4f2488 */  CALL 0x0412a280
/* 0e4f248d */  MOV R12,qword ptr [RSP + 0x20]
/* 0e4f2492 */  TEST R12,R12
/* 0e4f2495 */  JZ 0x0e4f249d
/* 0e4f2497 */  MOV RDI,R14
/* 0e4f249a */  CALL R12
/* 0e4f249d */  MOV RAX,qword ptr [RSP + 0x1f8]
/* 0e4f24a5 */  TEST RAX,RAX
/* 0e4f24a8 */  JZ 0x0e4f24b4
/* 0e4f24aa */  LEA RDI,[RSP + 0x1e0]
/* 0e4f24b2 */  CALL RAX
/* 0e4f24b4 */  MOV qword ptr [RSP + 0xd8],0x0
/* 0e4f24c0 */  XOR R13D,R13D
/* 0e4f24c3 */  XOR R12D,R12D
/* 0e4f24c6 */  MOVUPS XMM0,xmmword ptr [RSP + 0x120]
/* 0e4f24ce */  MOVUPS XMM1,xmmword ptr [RSP + 0x130]
/* 0e4f24d6 */  MOVDQU XMM2,xmmword ptr [RSP + 0x140]
/* 0e4f24df */  MOVDQA xmmword ptr [RSP + 0x100],XMM2
/* 0e4f24e8 */  MOV RAX,qword ptr [RSP + 0x150]
/* 0e4f24f0 */  MOV qword ptr [RSP + 0x110],RAX
/* 0e4f24f8 */  MOVAPS xmmword ptr [RSP + 0xf0],XMM1
/* 0e4f2500 */  MOVAPS xmmword ptr [RSP + 0xe0],XMM0
/* 0e4f2508 */  MOV RAX,0x1e1bc4d500000004
/* 0e4f2512 */  MOV qword ptr [RSP + 0x108],RAX
/* 0e4f251a */  MOVZX EAX,byte ptr [0x0f75c950]
/* 0e4f2521 */  TEST AL,AL
/* 0e4f2523 */  JZ 0x0e4f754d
/* 0e4f2529 */  LEA RBP,[RSP + 0xe8]
/* 0e4f2531 */  MOV EAX,dword ptr [RSP + 0x10c]
/* 0e4f2538 */  MOV dword ptr [RSP],EAX
/* 0e4f253b */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f2544 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4f254c */  MOV qword ptr [RSP + 0x18],0x2
/* 0e4f2555 */  LEA RAX,[0x48aead0]
/* 0e4f255c */  MOV qword ptr [RSP + 0x20],RAX
/* 0e4f2561 */  LEA RAX,[0xd89b2d0]
/* 0e4f2568 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4f256d */  LEA RAX,[0xe688e90]
/* 0e4f2574 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e4f2579 */  MOV qword ptr [RSP + 0x38],0x0
/* 0e4f2582 */  MOV dword ptr [RSP + 0x40],0x0
/* 0e4f258a */  XORPS XMM0,XMM0
/* 0e4f258d */  MOVUPS xmmword ptr [RSP + 0x48],XMM0
/* 0e4f2592 */  MOV RSI,RSP
/* 0e4f2595 */  MOV RDI,RBP
/* 0e4f2598 */  CALL 0x049057f0
/* 0e4f259d */  MOV RDI,RSP
/* 0e4f25a0 */  CALL 0x048aea50
/* 0e4f25a5 */  MOVDQU XMM0,xmmword ptr [RBP]
/* 0e4f25aa */  MOVDQU XMM1,xmmword ptr [RBP + 0x10]
/* 0e4f25af */  MOVDQA xmmword ptr [RSP + 0x1f0],XMM1
/* 0e4f25b8 */  MOVDQA xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f25c1 */  LEA RDI,[0xf5463b0]
/* 0e4f25c8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f25cf */  MOV ESI,0x8
/* 0e4f25d4 */  CALL qword ptr [RAX + 0x10]
/* 0e4f25d7 */  MOV R14,RAX
/* 0e4f25da */  TEST RAX,RAX
/* 0e4f25dd */  JZ 0x0e4f70d8
/* 0e4f25e3 */  LEA RAX,[0xef44b00]
/* 0e4f25ea */  MOV qword ptr [R14],RAX
/* 0e4f25ed */  MOVZX EAX,byte ptr [0x0f551bc8]
/* 0e4f25f4 */  TEST AL,AL
/* 0e4f25f6 */  JZ 0x0e4f75e5
/* 0e4f25fc */  MOV EAX,dword ptr [0x0f551bb4]
/* 0e4f2602 */  MOV dword ptr [RSP],EAX
/* 0e4f2605 */  LEA RDI,[0xf5463b0]
/* 0e4f260c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f2613 */  MOV ESI,0x30
/* 0e4f2618 */  CALL qword ptr [RAX + 0x10]
/* 0e4f261b */  MOV R15,RAX
/* 0e4f261e */  TEST RAX,RAX
/* 0e4f2621 */  JZ 0x0e4f70e9
/* 0e4f2627 */  PXOR XMM0,XMM0
/* 0e4f262b */  MOVDQU xmmword ptr [R15 + 0x8],XMM0
/* 0e4f2631 */  LEA RAX,[0xef46c48]
/* 0e4f2638 */  MOV qword ptr [R15],RAX
/* 0e4f263b */  MOV RAX,R15
/* 0e4f263e */  ADD RAX,0x18
/* 0e4f2642 */  MOV qword ptr [R15 + 0x18],R14
/* 0e4f2646 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4f264e */  MOV byte ptr [R15 + 0x28],0xff
/* 0e4f2653 */  MOV qword ptr [RSP + 0x8],RAX
/* 0e4f2658 */  MOV qword ptr [RSP + 0x10],R15
/* 0e4f265d */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4f2666 */  LEA RDI,[RSP + 0x1e0]
/* 0e4f266e */  MOV RSI,RSP
/* 0e4f2671 */  CALL 0x048afd20
/* 0e4f2676 */  MOV R14,qword ptr [RSP + 0x10]
/* 0e4f267b */  TEST R14,R14
/* 0e4f267e */  JZ 0x0e4f26a3
/* 0e4f2680 */  MOV RAX,-0x1
/* 0e4f2687 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f268d */  TEST RAX,RAX
/* 0e4f2690 */  JNZ 0x0e4f26a3
/* 0e4f2692 */  MOV RAX,qword ptr [R14]
/* 0e4f2695 */  MOV RDI,R14
/* 0e4f2698 */  CALL qword ptr [RAX + 0x10]
/* 0e4f269b */  MOV RDI,R14
/* 0e4f269e */  CALL 0x0412c2d0
/* 0e4f26a3 */  MOV R14,qword ptr [RSP + 0x228]
/* 0e4f26ab */  TEST R14,R14
/* 0e4f26ae */  JZ 0x0e4f26d3
/* 0e4f26b0 */  MOV RAX,-0x1
/* 0e4f26b7 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f26bd */  TEST RAX,RAX
/* 0e4f26c0 */  JNZ 0x0e4f26d3
/* 0e4f26c2 */  MOV RAX,qword ptr [R14]
/* 0e4f26c5 */  MOV RDI,R14
/* 0e4f26c8 */  CALL qword ptr [RAX + 0x10]
/* 0e4f26cb */  MOV RDI,R14
/* 0e4f26ce */  CALL 0x0412c2d0
/* 0e4f26d3 */  MOVZX EAX,byte ptr [0x0f75c950]
/* 0e4f26da */  TEST AL,AL
/* 0e4f26dc */  JZ 0x0e4f7616
/* 0e4f26e2 */  MOV EAX,dword ptr [RSP + 0x104]
/* 0e4f26e9 */  CMP EAX,0x2
/* 0e4f26ec */  JZ 0x0e4f2741
/* 0e4f26ee */  CMP EAX,0x1
/* 0e4f26f1 */  JZ 0x0e4f270f
/* 0e4f26f3 */  TEST EAX,EAX
/* 0e4f26f5 */  JNZ 0x0e4f278e
/* 0e4f26fb */  MOV RAX,qword ptr [RSP + 0xf8]
/* 0e4f2703 */  OR dword ptr [RAX + 0x18],0x20000
/* 0e4f270a */  JMP 0x0e4f278e
/* 0e4f270f */  MOV RAX,qword ptr [RSP + 0xf8]
/* 0e4f2717 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f271b */  MOV ECX,dword ptr [RSP + 0x100]
/* 0e4f2722 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4f2726 */  CMP dword ptr [RAX],ECX
/* 0e4f2728 */  JZ 0x0e4f278a
/* 0e4f272a */  ADD RAX,0x68
/* 0e4f272e */  NOP
/* 0e4f2730 */  MOV RDX,RAX
/* 0e4f2733 */  ADD RAX,0x68
/* 0e4f2737 */  CMP dword ptr [RDX],ECX
/* 0e4f2739 */  JNZ 0x0e4f2730
/* 0e4f273b */  ADD RAX,-0x68
/* 0e4f273f */  JMP 0x0e4f278a
/* 0e4f2741 */  MOV RAX,qword ptr [RSP + 0xf8]
/* 0e4f2749 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f274d */  MOV ECX,dword ptr [RSP + 0x100]
/* 0e4f2754 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4f2758 */  CMP dword ptr [RAX],ECX
/* 0e4f275a */  JZ 0x0e4f276f
/* 0e4f275c */  ADD RAX,0x58
/* 0e4f2760 */  MOV RDX,RAX
/* 0e4f2763 */  ADD RAX,0x58
/* 0e4f2767 */  CMP dword ptr [RDX],ECX
/* 0e4f2769 */  JNZ 0x0e4f2760
/* 0e4f276b */  ADD RAX,-0x58
/* 0e4f276f */  MOV RCX,qword ptr [RSP + 0xf0]
/* 0e4f2777 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f277b */  JZ 0x0e4f278a
/* 0e4f277d */  NOP dword ptr [RAX]
/* 0e4f2780 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4f2784 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f2788 */  JNZ 0x0e4f2780
/* 0e4f278a */  OR byte ptr [RAX + 0x12],0x2
/* 0e4f278e */  MOVZX EAX,byte ptr [0x0f75c950]
/* 0e4f2795 */  TEST AL,AL
/* 0e4f2797 */  JZ 0x0e4f7640
/* 0e4f279d */  MOV dword ptr [RSP],0xbf75c8f8
/* 0e4f27a4 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f27ad */  MOV dword ptr [RSP + 0x10],0x1
/* 0e4f27b5 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4f27be */  LEA RAX,[0x48b2190]
/* 0e4f27c5 */  MOV qword ptr [RSP + 0x20],RAX
/* 0e4f27ca */  LEA RAX,[0x48b06d0]
/* 0e4f27d1 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4f27d6 */  LEA RAX,[0xe6897d0]
/* 0e4f27dd */  MOV qword ptr [RSP + 0x30],RAX
/* 0e4f27e2 */  MOV qword ptr [RSP + 0x38],0x0
/* 0e4f27eb */  MOV dword ptr [RSP + 0x40],0x0
/* 0e4f27f3 */  PXOR XMM0,XMM0
/* 0e4f27f7 */  MOVDQU xmmword ptr [RSP + 0x48],XMM0
/* 0e4f27fd */  MOV RSI,RSP
/* 0e4f2800 */  MOV RDI,RBP
/* 0e4f2803 */  CALL 0x049057f0
/* 0e4f2808 */  MOV RDI,RSP
/* 0e4f280b */  CALL 0x048aea50
/* 0e4f2810 */  MOVDQU XMM0,xmmword ptr [RBP]
/* 0e4f2815 */  MOVDQU XMM1,xmmword ptr [RBP + 0x10]
/* 0e4f281a */  MOVDQA xmmword ptr [RSP + 0x1f0],XMM1
/* 0e4f2823 */  MOVDQA xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f282c */  LEA RDI,[0xf5463b0]
/* 0e4f2833 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f283a */  MOV ESI,0x8
/* 0e4f283f */  CALL qword ptr [RAX + 0x10]
/* 0e4f2842 */  MOV R14,RAX
/* 0e4f2845 */  TEST RAX,RAX
/* 0e4f2848 */  JZ 0x0e4f711c
/* 0e4f284e */  LEA RAX,[0xef44b00]
/* 0e4f2855 */  MOV qword ptr [R14],RAX
/* 0e4f2858 */  MOVZX EAX,byte ptr [0x0f551cb0]
/* 0e4f285f */  TEST AL,AL
/* 0e4f2861 */  JZ 0x0e4f769b
/* 0e4f2867 */  MOV EAX,dword ptr [0x0f551c9c]
/* 0e4f286d */  MOV dword ptr [RSP],EAX
/* 0e4f2870 */  LEA RDI,[0xf5463b0]
/* 0e4f2877 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f287e */  MOV ESI,0x28
/* 0e4f2883 */  CALL qword ptr [RAX + 0x10]
/* 0e4f2886 */  MOV R15,RAX
/* 0e4f2889 */  TEST RAX,RAX
/* 0e4f288c */  JZ 0x0e4f713e
/* 0e4f2892 */  PXOR XMM0,XMM0
/* 0e4f2896 */  MOVDQU xmmword ptr [R15 + 0x8],XMM0
/* 0e4f289c */  LEA RAX,[0xef46c98]
/* 0e4f28a3 */  MOV qword ptr [R15],RAX
/* 0e4f28a6 */  MOV RAX,R15
/* 0e4f28a9 */  ADD RAX,0x18
/* 0e4f28ad */  MOV qword ptr [R15 + 0x18],R14
/* 0e4f28b1 */  MOV byte ptr [R15 + 0x20],0xff
/* 0e4f28b6 */  MOV qword ptr [RSP + 0x8],RAX
/* 0e4f28bb */  MOV qword ptr [RSP + 0x10],R15
/* 0e4f28c0 */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4f28c9 */  LEA RDI,[RSP + 0x1e0]
/* 0e4f28d1 */  MOV RSI,RSP
/* 0e4f28d4 */  CALL 0x048afd20
/* 0e4f28d9 */  MOV R14,qword ptr [RSP + 0x10]
/* 0e4f28de */  TEST R14,R14
/* 0e4f28e1 */  JZ 0x0e4f2906
/* 0e4f28e3 */  MOV RAX,-0x1
/* 0e4f28ea */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f28f0 */  TEST RAX,RAX
/* 0e4f28f3 */  JNZ 0x0e4f2906
/* 0e4f28f5 */  MOV RAX,qword ptr [R14]
/* 0e4f28f8 */  MOV RDI,R14
/* 0e4f28fb */  CALL qword ptr [RAX + 0x10]
/* 0e4f28fe */  MOV RDI,R14
/* 0e4f2901 */  CALL 0x0412c2d0
/* 0e4f2906 */  MOV R14,qword ptr [RSP + 0x228]
/* 0e4f290e */  TEST R14,R14
/* 0e4f2911 */  JZ 0x0e4f2936
/* 0e4f2913 */  MOV RAX,-0x1
/* 0e4f291a */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f2920 */  TEST RAX,RAX
/* 0e4f2923 */  JNZ 0x0e4f2936
/* 0e4f2925 */  MOV RAX,qword ptr [R14]
/* 0e4f2928 */  MOV RDI,R14
/* 0e4f292b */  CALL qword ptr [RAX + 0x10]
/* 0e4f292e */  MOV RDI,R14
/* 0e4f2931 */  CALL 0x0412c2d0
/* 0e4f2936 */  TEST R12B,0x1
/* 0e4f293a */  JZ 0x0e4f2957
/* 0e4f293c */  AND R12B,0xfe
/* 0e4f2940 */  MOVZX EAX,R12B
/* 0e4f2944 */  OR R13,RAX
/* 0e4f2947 */  MOV RDI,qword ptr [RSP + 0xd8]
/* 0e4f294f */  MOV RSI,R13
/* 0e4f2952 */  CALL 0x0412a280
/* 0e4f2957 */  TEST byte ptr [RSP + 0x270],0x1
/* 0e4f295f */  JZ 0x0e4f297a
/* 0e4f2961 */  MOV RSI,qword ptr [RSP + 0x270]
/* 0e4f2969 */  MOV RDI,qword ptr [RSP + 0x280]
/* 0e4f2971 */  AND RSI,-0x2
/* 0e4f2975 */  CALL 0x0412a280
/* 0e4f297a */  MOVZX EAX,byte ptr [0x0f75c9e8]
/* 0e4f2981 */  TEST AL,AL
/* 0e4f2983 */  JZ 0x0e4f735f
/* 0e4f2989 */  MOV RAX,qword ptr [0x0f75c968]
/* 0e4f2990 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f2993 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4f2997 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e4f299b */  SUB RDX,RCX
/* 0e4f299e */  SHR RDX,0x3
/* 0e4f29a2 */  MOV ESI,0xffffffff
/* 0e4f29a7 */  ADD EDX,ESI
/* 0e4f29a9 */  AND EDX,EAX
/* 0e4f29ab */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f29af */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e4f29b3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f29c0 */  MOV RCX,qword ptr [RCX]
/* 0e4f29c3 */  CMP RCX,-0x1
/* 0e4f29c7 */  JZ 0x0e4f29f2
/* 0e4f29c9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f29cd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f29d1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f29d5 */  JNZ 0x0e4f29c0
/* 0e4f29d7 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f29db */  CMP RCX,RAX
/* 0e4f29de */  JNZ 0x0e4f29fe
/* 0e4f29e0 */  LEA RAX,[0xf75c968]
/* 0e4f29e7 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f29ee */  JZ 0x0e4f2a0b
/* 0e4f29f0 */  JMP 0x0e4f2a4e
/* 0e4f29f2 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f29f6 */  MOV RCX,RAX
/* 0e4f29f9 */  CMP RCX,RAX
/* 0e4f29fc */  JZ 0x0e4f29e0
/* 0e4f29fe */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f2a02 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f2a09 */  JNZ 0x0e4f2a4e
/* 0e4f2a0b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f2a0f */  TEST RAX,RAX
/* 0e4f2a12 */  JZ 0x0e4f2a4e
/* 0e4f2a14 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f2a18 */  LEA RDX,[RAX + 0x9]
/* 0e4f2a1c */  MOV ECX,ESI
/* 0e4f2a1e */  SHR ECX,0x1
/* 0e4f2a20 */  TEST SIL,0x1
/* 0e4f2a24 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f2a29 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f2a2e */  LEA RDI,[RSP + 0xe0]
/* 0e4f2a36 */  MOV RSI,RBX
/* 0e4f2a39 */  CALL 0x0e689ff0
/* 0e4f2a3e */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f2a46 */  JNZ 0x0e4f2fe2
/* 0e4f2a4c */  JMP 0x0e4f2a78
/* 0e4f2a4e */  LEA RDX,[0x13f4016]
/* 0e4f2a55 */  LEA RDI,[RSP + 0xe0]
/* 0e4f2a5d */  MOV ECX,0x20
/* 0e4f2a62 */  MOV RSI,RBX
/* 0e4f2a65 */  CALL 0x0e689ff0
/* 0e4f2a6a */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f2a72 */  JNZ 0x0e4f2fe2
/* 0e4f2a78 */  MOVZX EAX,byte ptr [0x0f75ca08]
/* 0e4f2a7f */  TEST AL,AL
/* 0e4f2a81 */  JZ 0x0e4f7577
/* 0e4f2a87 */  MOV RAX,0x28a5a83e00000001
/* 0e4f2a91 */  MOV qword ptr [RSP + 0x108],RAX
/* 0e4f2a99 */  MOV R15,qword ptr [RSP + 0xe0]
/* 0e4f2aa1 */  MOVZX EAX,byte ptr [0x0f75c9e8]
/* 0e4f2aa8 */  TEST AL,AL
/* 0e4f2aaa */  JZ 0x0e4f75a1
/* 0e4f2ab0 */  LEA R14,[RSP + 0xe8]
/* 0e4f2ab8 */  LEA RAX,[R15 + 0x18]
/* 0e4f2abc */  MOV RCX,qword ptr [0x0f75c968]
/* 0e4f2ac3 */  MOV ECX,dword ptr [RCX + 0x4]
/* 0e4f2ac6 */  MOV RDX,qword ptr [R15 + 0x18]
/* 0e4f2aca */  MOV RSI,qword ptr [R15 + 0x20]
/* 0e4f2ace */  SUB RSI,RDX
/* 0e4f2ad1 */  SHR RSI,0x3
/* 0e4f2ad5 */  MOV EDI,0xffffffff
/* 0e4f2ada */  ADD ESI,EDI
/* 0e4f2adc */  AND ESI,ECX
/* 0e4f2ade */  LEA RDX,[RDX + RSI*0x8]
/* 0e4f2ae2 */  MOV RSI,qword ptr [R15 + 0x30]
/* 0e4f2ae6 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4f2af0 */  MOV RDX,qword ptr [RDX]
/* 0e4f2af3 */  CMP RDX,-0x1
/* 0e4f2af7 */  JZ 0x0e4f2b19
/* 0e4f2af9 */  LEA RDI,[RDX + RDX*0x2]
/* 0e4f2afd */  LEA RDX,[RSI + RDI*0x8]
/* 0e4f2b01 */  CMP dword ptr [RSI + RDI*0x8 + 0x8],ECX
/* 0e4f2b05 */  JNZ 0x0e4f2af0
/* 0e4f2b07 */  MOV RCX,qword ptr [R15 + 0x38]
/* 0e4f2b0b */  CMP RDX,RCX
/* 0e4f2b0e */  JNZ 0x0e4f2b25
/* 0e4f2b10 */  LEA RCX,[0xf75c968]
/* 0e4f2b17 */  JMP 0x0e4f2b29
/* 0e4f2b19 */  MOV RCX,qword ptr [R15 + 0x38]
/* 0e4f2b1d */  MOV RDX,RCX
/* 0e4f2b20 */  CMP RDX,RCX
/* 0e4f2b23 */  JZ 0x0e4f2b10
/* 0e4f2b25 */  MOV RCX,qword ptr [RDX + 0x10]
/* 0e4f2b29 */  MOV qword ptr [RSP],RCX
/* 0e4f2b2d */  MOV qword ptr [RSP + 0x8],RAX
/* 0e4f2b32 */  MOV ESI,dword ptr [RSP + 0x10c]
/* 0e4f2b39 */  MOV RDI,RSP
/* 0e4f2b3c */  CALL 0x0ed621a0
/* 0e4f2b41 */  MOV word ptr [RSP],0x1
/* 0e4f2b47 */  MOV qword ptr [RSP + 0x8],R14
/* 0e4f2b4c */  MOV EAX,dword ptr [RSP + 0x10c]
/* 0e4f2b53 */  MOV dword ptr [RSP + 0x10],EAX
/* 0e4f2b57 */  PXOR XMM0,XMM0
/* 0e4f2b5b */  MOVDQU xmmword ptr [RSP + 0x18],XMM0
/* 0e4f2b61 */  MOVDQU xmmword ptr [RSP + 0x28],XMM0
/* 0e4f2b67 */  MOV qword ptr [RSP + 0x38],0x0
/* 0e4f2b70 */  MOV byte ptr [RSP + 0x40],0x14
/* 0e4f2b75 */  MOV RAX,0x696669746e656469
/* 0e4f2b7f */  MOV qword ptr [RSP + 0x41],RAX
/* 0e4f2b84 */  MOV word ptr [RSP + 0x49],0x7265
/* 0e4f2b8b */  MOV byte ptr [RSP + 0x4b],0x0
/* 0e4f2b90 */  LEA R12,[RSP + 0x58]
/* 0e4f2b95 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4f2b9b */  MOVDQU xmmword ptr [RSP + 0x68],XMM0
/* 0e4f2ba1 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e4f2ba7 */  MOV dword ptr [RSP + 0x88],0x3f600000
/* 0e4f2bb2 */  MOV ESI,0x8
/* 0e4f2bb7 */  MOV RDI,R12
/* 0e4f2bba */  CALL 0x048afb10
/* 0e4f2bbf */  PXOR XMM0,XMM0
/* 0e4f2bc3 */  MOVDQU xmmword ptr [RSP + 0xb0],XMM0
/* 0e4f2bcc */  MOVDQU xmmword ptr [RSP + 0xa0],XMM0
/* 0e4f2bd5 */  MOVDQU xmmword ptr [RSP + 0x90],XMM0
/* 0e4f2bde */  MOV word ptr [RSP + 0xc0],0xff00
/* 0e4f2be8 */  MOV byte ptr [RSP + 0xc4],0x0
/* 0e4f2bf0 */  MOV byte ptr [RSP + 0xc8],0x0
/* 0e4f2bf8 */  MOV byte ptr [RSP + 0xcc],0x0
/* 0e4f2c00 */  LEA RDI,[0xf5463b0]
/* 0e4f2c07 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f2c0e */  MOV ESI,0x8
/* 0e4f2c13 */  CALL qword ptr [RAX + 0x10]
/* 0e4f2c16 */  MOV R14,RAX
/* 0e4f2c19 */  TEST RAX,RAX
/* 0e4f2c1c */  JZ 0x0e4f70fa
/* 0e4f2c22 */  LEA RAX,[0xf4c55f0]
/* 0e4f2c29 */  MOV qword ptr [R14],RAX
/* 0e4f2c2c */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f2c31 */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f2c36 */  TEST RDI,RDI
/* 0e4f2c39 */  JZ 0x0e4f2c41
/* 0e4f2c3b */  MOV RAX,qword ptr [RDI]
/* 0e4f2c3e */  CALL qword ptr [RAX + 0x8]
/* 0e4f2c41 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f2c46 */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f2c4a */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f2c51 */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f2c5d */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f2c68 */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f2c74 */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f2c80 */  LEA RAX,[0xe68ad80]
/* 0e4f2c87 */  MOV qword ptr [RSP + 0x148],RAX
/* 0e4f2c8f */  LEA RAX,[0x48b06d0]
/* 0e4f2c96 */  MOV qword ptr [RSP + 0x150],RAX
/* 0e4f2c9e */  LEA RAX,[0xe687c70]
/* 0e4f2ca5 */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f2cad */  LEA RAX,[0xe68ae40]
/* 0e4f2cb4 */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f2cbc */  LEA RAX,[0xe68b000]
/* 0e4f2cc3 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f2ccb */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f2cd6 */  PXOR XMM0,XMM0
/* 0e4f2cda */  MOVDQU xmmword ptr [RSP + 0x178],XMM0
/* 0e4f2ce3 */  LEA RSI,[RSP + 0x120]
/* 0e4f2ceb */  CALL 0x048b05a0
/* 0e4f2cf0 */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f2cf8 */  TEST R14,R14
/* 0e4f2cfb */  JZ 0x0e4f2d20
/* 0e4f2cfd */  MOV RAX,-0x1
/* 0e4f2d04 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f2d0a */  TEST RAX,RAX
/* 0e4f2d0d */  JNZ 0x0e4f2d20
/* 0e4f2d0f */  MOV RAX,qword ptr [R14]
/* 0e4f2d12 */  MOV RDI,R14
/* 0e4f2d15 */  CALL qword ptr [RAX + 0x10]
/* 0e4f2d18 */  MOV RDI,R14
/* 0e4f2d1b */  CALL 0x0412c2d0
/* 0e4f2d20 */  MOV R14,qword ptr [RSP + 0x8]
/* 0e4f2d25 */  MOVZX EAX,byte ptr [0x0f550a20]
/* 0e4f2d2c */  TEST AL,AL
/* 0e4f2d2e */  JZ 0x0e4f766a
/* 0e4f2d34 */  MOV EAX,dword ptr [0x0f550a0c]
/* 0e4f2d3a */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f2d41 */  LEA RDI,[0xf5463b0]
/* 0e4f2d48 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f2d4f */  MOV ESI,0xd0
/* 0e4f2d54 */  CALL qword ptr [RAX + 0x10]
/* 0e4f2d57 */  MOV R15,RAX
/* 0e4f2d5a */  TEST RAX,RAX
/* 0e4f2d5d */  JZ 0x0e4f712d
/* 0e4f2d63 */  LEA RCX,[RSP + 0x40]
/* 0e4f2d68 */  PXOR XMM0,XMM0
/* 0e4f2d6c */  MOVDQU xmmword ptr [R15 + 0x8],XMM0
/* 0e4f2d72 */  LEA RAX,[0xef439d0]
/* 0e4f2d79 */  MOV qword ptr [R15],RAX
/* 0e4f2d7c */  MOV RAX,R15
/* 0e4f2d7f */  ADD RAX,0x18
/* 0e4f2d83 */  MOVUPS XMM1,xmmword ptr [RSP + 0x18]
/* 0e4f2d88 */  MOVDQU xmmword ptr [RSP + 0x18],XMM0
/* 0e4f2d8e */  MOVUPS xmmword ptr [R15 + 0x18],XMM1
/* 0e4f2d93 */  MOV RDX,qword ptr [RSP + 0x38]
/* 0e4f2d98 */  MOV qword ptr [R15 + 0x38],RDX
/* 0e4f2d9c */  MOVUPS XMM1,xmmword ptr [RSP + 0x28]
/* 0e4f2da1 */  MOVUPS xmmword ptr [R15 + 0x28],XMM1
/* 0e4f2da6 */  MOVDQU xmmword ptr [RSP + 0x28],XMM0
/* 0e4f2dac */  MOV qword ptr [RSP + 0x38],0x0
/* 0e4f2db5 */  MOV RDX,qword ptr [RCX + 0x10]
/* 0e4f2db9 */  MOV qword ptr [R15 + 0x50],RDX
/* 0e4f2dbd */  MOVUPS XMM1,xmmword ptr [RCX]
/* 0e4f2dc0 */  MOVUPS xmmword ptr [R15 + 0x40],XMM1
/* 0e4f2dc5 */  MOVDQU xmmword ptr [RCX],XMM0
/* 0e4f2dc9 */  MOV qword ptr [RCX + 0x10],0x0
/* 0e4f2dd1 */  MOVUPS XMM1,xmmword ptr [RSP + 0x58]
/* 0e4f2dd6 */  MOVUPS xmmword ptr [R15 + 0x58],XMM1
/* 0e4f2ddb */  MOV RDX,qword ptr [RSP + 0x68]
/* 0e4f2de0 */  MOV qword ptr [R15 + 0x68],RDX
/* 0e4f2de4 */  MOVDQU xmmword ptr [R12],XMM0
/* 0e4f2dea */  MOV qword ptr [R12 + 0x10],0x0
/* 0e4f2df3 */  MOVUPS XMM1,xmmword ptr [RSP + 0x70]
/* 0e4f2df8 */  MOVUPS xmmword ptr [R15 + 0x70],XMM1
/* 0e4f2dfd */  MOV RDX,qword ptr [RSP + 0x80]
/* 0e4f2e05 */  MOV qword ptr [R15 + 0x80],RDX
/* 0e4f2e0c */  MOVDQU xmmword ptr [RSP + 0x70],XMM0
/* 0e4f2e12 */  MOV qword ptr [RSP + 0x80],0x0
/* 0e4f2e1e */  MOVSS XMM1,dword ptr [RSP + 0x88]
/* 0e4f2e27 */  MOVSS dword ptr [R15 + 0x88],XMM1
/* 0e4f2e30 */  MOVUPS XMM1,xmmword ptr [RSP + 0x90]
/* 0e4f2e38 */  MOVUPS xmmword ptr [R15 + 0x90],XMM1
/* 0e4f2e40 */  MOV RDX,qword ptr [RSP + 0xa0]
/* 0e4f2e48 */  MOV qword ptr [R15 + 0xa0],RDX
/* 0e4f2e4f */  MOVDQU xmmword ptr [RCX + 0x50],XMM0
/* 0e4f2e54 */  MOV qword ptr [RCX + 0x60],0x0
/* 0e4f2e5c */  MOV RCX,qword ptr [RSP + 0xb8]
/* 0e4f2e64 */  MOV qword ptr [R15 + 0xb8],RCX
/* 0e4f2e6b */  MOVDQU XMM1,xmmword ptr [RSP + 0xa8]
/* 0e4f2e74 */  MOVDQU xmmword ptr [R15 + 0xa8],XMM1
/* 0e4f2e7d */  MOVDQU xmmword ptr [RSP + 0xa8],XMM0
/* 0e4f2e86 */  MOV qword ptr [RSP + 0xb8],0x0
/* 0e4f2e92 */  MOV RCX,qword ptr [RSP + 0xc0]
/* 0e4f2e9a */  MOV RDX,qword ptr [RSP + 0xc5]
/* 0e4f2ea2 */  MOV qword ptr [R15 + 0xc5],RDX
/* 0e4f2ea9 */  MOV qword ptr [R15 + 0xc0],RCX
/* 0e4f2eb0 */  MOV qword ptr [RSP + 0x128],RAX
/* 0e4f2eb8 */  MOV qword ptr [RSP + 0x130],R15
/* 0e4f2ec0 */  MOVDQA xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f2ec9 */  LEA RSI,[RSP + 0x120]
/* 0e4f2ed1 */  MOV RDI,R14
/* 0e4f2ed4 */  CALL 0x048afd20
/* 0e4f2ed9 */  MOV R15,qword ptr [RSP + 0x130]
/* 0e4f2ee1 */  TEST R15,R15
/* 0e4f2ee4 */  JZ 0x0e4f2f09
/* 0e4f2ee6 */  MOV RAX,-0x1
/* 0e4f2eed */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4f2ef3 */  TEST RAX,RAX
/* 0e4f2ef6 */  JNZ 0x0e4f2f09
/* 0e4f2ef8 */  MOV RAX,qword ptr [R15]
/* 0e4f2efb */  MOV RDI,R15
/* 0e4f2efe */  CALL qword ptr [RAX + 0x10]
/* 0e4f2f01 */  MOV RDI,R15
/* 0e4f2f04 */  CALL 0x0412c2d0
/* 0e4f2f09 */  MOV R15,qword ptr [RSP + 0x1e8]
/* 0e4f2f11 */  TEST R15,R15
/* 0e4f2f14 */  JZ 0x0e4f2f39
/* 0e4f2f16 */  MOV RAX,-0x1
/* 0e4f2f1d */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4f2f23 */  TEST RAX,RAX
/* 0e4f2f26 */  JNZ 0x0e4f2f39
/* 0e4f2f28 */  MOV RAX,qword ptr [R15]
/* 0e4f2f2b */  MOV RDI,R15
/* 0e4f2f2e */  CALL qword ptr [RAX + 0x10]
/* 0e4f2f31 */  MOV RDI,R15
/* 0e4f2f34 */  CALL 0x0412c2d0
/* 0e4f2f39 */  LEA RDI,[RSP + 0x18]
/* 0e4f2f3e */  MOV RDX,qword ptr [R14 + 0x10]
/* 0e4f2f42 */  MOV ECX,dword ptr [R14 + 0x18]
/* 0e4f2f46 */  MOV ESI,dword ptr [R14 + 0x1c]
/* 0e4f2f4a */  MOV EAX,dword ptr [RSP]
/* 0e4f2f4d */  SHL EAX,0x10
/* 0e4f2f50 */  CMP ESI,0x2
/* 0e4f2f53 */  JZ 0x0e4f2f91
/* 0e4f2f55 */  CMP ESI,0x1
/* 0e4f2f58 */  JZ 0x0e4f2f63
/* 0e4f2f5a */  TEST ESI,ESI
/* 0e4f2f5c */  JNZ 0x0e4f2fdd
/* 0e4f2f5e */  OR dword ptr [RDX + 0x18],EAX
/* 0e4f2f61 */  JMP 0x0e4f2fdd
/* 0e4f2f63 */  MOV RDX,qword ptr [RDX + 0x78]
/* 0e4f2f67 */  MOV RDX,qword ptr [RDX + 0x48]
/* 0e4f2f6b */  CMP dword ptr [RDX],ECX
/* 0e4f2f6d */  JZ 0x0e4f2fda
/* 0e4f2f6f */  ADD RDX,0x68
/* 0e4f2f73 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f2f80 */  MOV RSI,RDX
/* 0e4f2f83 */  ADD RDX,0x68
/* 0e4f2f87 */  CMP dword ptr [RSI],ECX
/* 0e4f2f89 */  JNZ 0x0e4f2f80
/* 0e4f2f8b */  ADD RDX,-0x68
/* 0e4f2f8f */  JMP 0x0e4f2fda
/* 0e4f2f91 */  MOV RSI,qword ptr [R14 + 0x8]
/* 0e4f2f95 */  MOV RDX,qword ptr [RDX + 0x78]
/* 0e4f2f99 */  MOV RDX,qword ptr [RDX + 0x60]
/* 0e4f2f9d */  CMP dword ptr [RDX],ECX
/* 0e4f2f9f */  JZ 0x0e4f2fd4
/* 0e4f2fa1 */  ADD RDX,0x58
/* 0e4f2fa5 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f2fb0 */  MOV R8,RDX
/* 0e4f2fb3 */  ADD RDX,0x58
/* 0e4f2fb7 */  CMP dword ptr [R8],ECX
/* 0e4f2fba */  JNZ 0x0e4f2fb0
/* 0e4f2fbc */  ADD RDX,-0x58
/* 0e4f2fc0 */  JMP 0x0e4f2fd4
/* 0e4f2fd0 */  MOV RDX,qword ptr [RDX + 0x38]
/* 0e4f2fd4 */  CMP qword ptr [RDX + 0x30],RSI
/* 0e4f2fd8 */  JNZ 0x0e4f2fd0
/* 0e4f2fda */  OR dword ptr [RDX + 0x10],EAX
/* 0e4f2fdd */  CALL 0x048b0bc0
/* 0e4f2fe2 */  MOVZX EAX,byte ptr [0x0f75caa0]
/* 0e4f2fe9 */  TEST AL,AL
/* 0e4f2feb */  JZ 0x0e4f73a3
/* 0e4f2ff1 */  MOV RAX,qword ptr [0x0f75ca20]
/* 0e4f2ff8 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f2ffb */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4f2fff */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e4f3003 */  SUB RDX,RCX
/* 0e4f3006 */  SHR RDX,0x3
/* 0e4f300a */  MOV ESI,0xffffffff
/* 0e4f300f */  ADD EDX,ESI
/* 0e4f3011 */  AND EDX,EAX
/* 0e4f3013 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f3017 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e4f301b */  NOP dword ptr [RAX + RAX*0x1]
/* 0e4f3020 */  MOV RCX,qword ptr [RCX]
/* 0e4f3023 */  CMP RCX,-0x1
/* 0e4f3027 */  JZ 0x0e4f3052
/* 0e4f3029 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f302d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f3031 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f3035 */  JNZ 0x0e4f3020
/* 0e4f3037 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f303b */  CMP RCX,RAX
/* 0e4f303e */  JNZ 0x0e4f305e
/* 0e4f3040 */  LEA RAX,[0xf75ca20]
/* 0e4f3047 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f304e */  JZ 0x0e4f306b
/* 0e4f3050 */  JMP 0x0e4f3098
/* 0e4f3052 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f3056 */  MOV RCX,RAX
/* 0e4f3059 */  CMP RCX,RAX
/* 0e4f305c */  JZ 0x0e4f3040
/* 0e4f305e */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f3062 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f3069 */  JNZ 0x0e4f3098
/* 0e4f306b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f306f */  TEST RAX,RAX
/* 0e4f3072 */  JZ 0x0e4f3098
/* 0e4f3074 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f3078 */  LEA RDX,[RAX + 0x9]
/* 0e4f307c */  MOV ECX,ESI
/* 0e4f307e */  SHR ECX,0x1
/* 0e4f3080 */  TEST SIL,0x1
/* 0e4f3084 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f3089 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f308e */  LEA RDI,[RSP + 0xe0]
/* 0e4f3096 */  JMP 0x0e4f30ac
/* 0e4f3098 */  LEA RDX,[0x12b87e1]
/* 0e4f309f */  LEA RDI,[RSP + 0xe0]
/* 0e4f30a7 */  MOV ECX,0xd
/* 0e4f30ac */  MOV RSI,RBX
/* 0e4f30af */  CALL 0x0e68b970
/* 0e4f30b4 */  MOV byte ptr [RSP + 0x114],0x0
/* 0e4f30bc */  MOV byte ptr [RSP + 0x118],0x0
/* 0e4f30c4 */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f30cc */  JNZ 0x0e4f3bc0
/* 0e4f30d2 */  LEA RDI,[0xf5463b0]
/* 0e4f30d9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f30e0 */  MOV ESI,0x1a
/* 0e4f30e5 */  CALL qword ptr [RAX + 0x10]
/* 0e4f30e8 */  MOV R12,RAX
/* 0e4f30eb */  TEST RAX,RAX
/* 0e4f30ee */  JZ 0x0e4f710b
/* 0e4f30f4 */  MOVDQU XMM0,xmmword ptr [0x0138b3ad]
/* 0e4f30fc */  MOVDQU xmmword ptr [R12],XMM0
/* 0e4f3102 */  MOV RAX,0x6461657270735f6d
/* 0e4f310c */  MOV qword ptr [R12 + 0xf],RAX
/* 0e4f3111 */  MOV byte ptr [R12 + 0x17],0x0
/* 0e4f3117 */  CALL 0x0eee3290
/* 0e4f311c */  MOV RCX,qword ptr [RAX]
/* 0e4f311f */  MOVZX ECX,byte ptr [RCX + 0x1b4]
/* 0e4f3126 */  MOV byte ptr [R12],CL
/* 0e4f312a */  MOV RCX,qword ptr [RAX]
/* 0e4f312d */  MOVZX ECX,byte ptr [RCX + 0x1a4]
/* 0e4f3134 */  MOV byte ptr [R12 + 0x1],CL
/* 0e4f3139 */  MOV RCX,qword ptr [RAX]
/* 0e4f313c */  MOVZX ECX,byte ptr [RCX + 0x1b8]
/* 0e4f3143 */  MOV byte ptr [R12 + 0x2],CL
/* 0e4f3148 */  MOV RCX,qword ptr [RAX]
/* 0e4f314b */  MOVZX ECX,byte ptr [RCX + 0x194]
/* 0e4f3152 */  MOV byte ptr [R12 + 0x3],CL
/* 0e4f3157 */  MOV RCX,qword ptr [RAX]
/* 0e4f315a */  MOVZX ECX,byte ptr [RCX + 0x18c]
/* 0e4f3161 */  MOV byte ptr [R12 + 0x4],CL
/* 0e4f3166 */  MOV RCX,qword ptr [RAX]
/* 0e4f3169 */  MOVZX ECX,byte ptr [RCX + 0x1c8]
/* 0e4f3170 */  MOV byte ptr [R12 + 0x5],CL
/* 0e4f3175 */  MOV RCX,qword ptr [RAX]
/* 0e4f3178 */  MOVZX ECX,byte ptr [RCX + 0x184]
/* 0e4f317f */  MOV byte ptr [R12 + 0x6],CL
/* 0e4f3184 */  MOV RCX,qword ptr [RAX]
/* 0e4f3187 */  MOVZX ECX,byte ptr [RCX + 0x198]
/* 0e4f318e */  MOV byte ptr [R12 + 0x7],CL
/* 0e4f3193 */  MOV RCX,qword ptr [RAX]
/* 0e4f3196 */  MOVZX ECX,byte ptr [RCX + 0x1d0]
/* 0e4f319d */  MOV byte ptr [R12 + 0x8],CL
/* 0e4f31a2 */  MOV RCX,qword ptr [RAX]
/* 0e4f31a5 */  MOVZX ECX,byte ptr [RCX + 0xe8]
/* 0e4f31ac */  MOV byte ptr [R12 + 0x9],CL
/* 0e4f31b1 */  MOV RCX,qword ptr [RAX]
/* 0e4f31b4 */  MOVZX ECX,byte ptr [RCX + 0x1c8]
/* 0e4f31bb */  MOV byte ptr [R12 + 0xa],CL
/* 0e4f31c0 */  MOV RCX,qword ptr [RAX]
/* 0e4f31c3 */  MOVZX ECX,byte ptr [RCX + 0x184]
/* 0e4f31ca */  MOV byte ptr [R12 + 0xb],CL
/* 0e4f31cf */  MOV RCX,qword ptr [RAX]
/* 0e4f31d2 */  MOVZX ECX,byte ptr [RCX + 0x1b8]
/* 0e4f31d9 */  MOV byte ptr [R12 + 0xc],CL
/* 0e4f31de */  MOV RCX,qword ptr [RAX]
/* 0e4f31e1 */  MOVZX ECX,byte ptr [RCX + 0x190]
/* 0e4f31e8 */  MOV byte ptr [R12 + 0xd],CL
/* 0e4f31ed */  MOV RCX,qword ptr [RAX]
/* 0e4f31f0 */  MOVZX ECX,byte ptr [RCX + 0x1bc]
/* 0e4f31f7 */  MOV byte ptr [R12 + 0xe],CL
/* 0e4f31fc */  MOV RCX,qword ptr [RAX]
/* 0e4f31ff */  MOVZX ECX,byte ptr [RCX + 0x1b4]
/* 0e4f3206 */  MOV byte ptr [R12 + 0xf],CL
/* 0e4f320b */  MOVZX ECX,byte ptr [R12 + 0x10]
/* 0e4f3211 */  MOV RDX,qword ptr [RAX]
/* 0e4f3214 */  MOVZX ECX,byte ptr [RDX + RCX*0x4]
/* 0e4f3218 */  MOV byte ptr [R12 + 0x10],CL
/* 0e4f321d */  MOVZX ECX,byte ptr [R12 + 0x11]
/* 0e4f3223 */  MOV RDX,qword ptr [RAX]
/* 0e4f3226 */  MOVZX ECX,byte ptr [RDX + RCX*0x4]
/* 0e4f322a */  MOV byte ptr [R12 + 0x11],CL
/* 0e4f322f */  MOVZX ECX,byte ptr [R12 + 0x12]
/* 0e4f3235 */  MOV RDX,qword ptr [RAX]
/* 0e4f3238 */  MOVZX ECX,byte ptr [RDX + RCX*0x4]
/* 0e4f323c */  MOV byte ptr [R12 + 0x12],CL
/* 0e4f3241 */  MOVZX ECX,byte ptr [R12 + 0x13]
/* 0e4f3247 */  MOV RDX,qword ptr [RAX]
/* 0e4f324a */  MOVZX ECX,byte ptr [RDX + RCX*0x4]
/* 0e4f324e */  MOV byte ptr [R12 + 0x13],CL
/* 0e4f3253 */  MOVZX ECX,byte ptr [R12 + 0x14]
/* 0e4f3259 */  MOV RDX,qword ptr [RAX]
/* 0e4f325c */  MOVZX ECX,byte ptr [RDX + RCX*0x4]
/* 0e4f3260 */  MOV byte ptr [R12 + 0x14],CL
/* 0e4f3265 */  MOVZX ECX,byte ptr [R12 + 0x15]
/* 0e4f326b */  MOV RDX,qword ptr [RAX]
/* 0e4f326e */  MOVZX ECX,byte ptr [RDX + RCX*0x4]
/* 0e4f3272 */  MOV byte ptr [R12 + 0x15],CL
/* 0e4f3277 */  MOVZX ECX,byte ptr [R12 + 0x16]
/* 0e4f327d */  MOV RAX,qword ptr [RAX]
/* 0e4f3280 */  MOVZX EAX,byte ptr [RAX + RCX*0x4]
/* 0e4f3284 */  MOV byte ptr [R12 + 0x16],AL
/* 0e4f3289 */  LEA R14,[RSP + 0x40]
/* 0e4f328e */  PXOR XMM0,XMM0
/* 0e4f3292 */  MOVDQA xmmword ptr [RSP + 0x60],XMM0
/* 0e4f3298 */  MOVDQA xmmword ptr [RSP + 0x50],XMM0
/* 0e4f329e */  MOVDQA xmmword ptr [RSP + 0x40],XMM0
/* 0e4f32a4 */  MOVDQA xmmword ptr [RSP + 0x30],XMM0
/* 0e4f32aa */  MOVDQA xmmword ptr [RSP + 0x20],XMM0
/* 0e4f32b0 */  MOVDQA xmmword ptr [RSP + 0x10],XMM0
/* 0e4f32b6 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f32bb */  MOV dword ptr [RSP + 0x70],0x3f600000
/* 0e4f32c3 */  MOV ESI,0x8
/* 0e4f32c8 */  MOV RDI,R14
/* 0e4f32cb */  CALL 0x048afb10
/* 0e4f32d0 */  PXOR XMM0,XMM0
/* 0e4f32d4 */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e4f32dd */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e4f32e6 */  MOVDQU xmmword ptr [RSP + 0x78],XMM0
/* 0e4f32ec */  MOV word ptr [RSP + 0xa8],0xff00
/* 0e4f32f6 */  MOV byte ptr [RSP + 0xac],0x0
/* 0e4f32fe */  MOV byte ptr [RSP + 0xb0],0x0
/* 0e4f3306 */  MOV byte ptr [RSP + 0xb4],0x0
/* 0e4f330e */  LEA RDI,[0xf5463b0]
/* 0e4f3315 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f331c */  MOV ESI,0x8
/* 0e4f3321 */  CALL qword ptr [RAX + 0x10]
/* 0e4f3324 */  MOV R15,RAX
/* 0e4f3327 */  TEST RAX,RAX
/* 0e4f332a */  JZ 0x0e4f714f
/* 0e4f3330 */  LEA RAX,[0xf4c56f0]
/* 0e4f3337 */  MOV qword ptr [R15],RAX
/* 0e4f333a */  MOV RDI,qword ptr [RSP]
/* 0e4f333e */  MOV qword ptr [RSP],R15
/* 0e4f3342 */  TEST RDI,RDI
/* 0e4f3345 */  JZ 0x0e4f334d
/* 0e4f3347 */  MOV RAX,qword ptr [RDI]
/* 0e4f334a */  CALL qword ptr [RAX + 0x8]
/* 0e4f334d */  LEA R15,[RSP + 0x10]
/* 0e4f3352 */  TEST byte ptr [RSP + 0x28],0x1
/* 0e4f3357 */  JZ 0x0e4f336c
/* 0e4f3359 */  MOV RSI,qword ptr [RSP + 0x28]
/* 0e4f335e */  MOV RDI,qword ptr [RSP + 0x38]
/* 0e4f3363 */  AND RSI,-0x2
/* 0e4f3367 */  CALL 0x0412a280
/* 0e4f336c */  MOV qword ptr [RSP + 0x28],0x1b
/* 0e4f3375 */  MOV qword ptr [RSP + 0x30],0x17
/* 0e4f337e */  MOV qword ptr [RSP + 0x38],R12
/* 0e4f3383 */  LEA RSI,[0x138b3ad]
/* 0e4f338a */  MOV EDX,0x17
/* 0e4f338f */  MOV RDI,R15
/* 0e4f3392 */  CALL 0x0412f5e0
/* 0e4f3397 */  LEA RAX,[RSP + 0x28]
/* 0e4f339c */  MOVAPS XMM1,xmmword ptr [RSP]
/* 0e4f33a0 */  PXOR XMM0,XMM0
/* 0e4f33a4 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f33a9 */  MOVAPS xmmword ptr [RSP + 0x120],XMM1
/* 0e4f33b1 */  MOV RCX,qword ptr [R15 + 0x10]
/* 0e4f33b5 */  MOV qword ptr [RSP + 0x140],RCX
/* 0e4f33bd */  MOVAPS XMM1,xmmword ptr [R15]
/* 0e4f33c1 */  MOVAPS xmmword ptr [RSP + 0x130],XMM1
/* 0e4f33c9 */  MOVDQA xmmword ptr [R15],XMM0
/* 0e4f33ce */  MOV qword ptr [R15 + 0x10],0x0
/* 0e4f33d6 */  MOV RCX,qword ptr [RAX + 0x10]
/* 0e4f33da */  MOV qword ptr [RSP + 0x158],RCX
/* 0e4f33e2 */  MOVUPS XMM1,xmmword ptr [RAX]
/* 0e4f33e5 */  MOVUPS xmmword ptr [RSP + 0x148],XMM1
/* 0e4f33ed */  MOVDQU xmmword ptr [RAX],XMM0
/* 0e4f33f1 */  MOV qword ptr [RAX + 0x10],0x0
/* 0e4f33f9 */  MOVAPS XMM1,xmmword ptr [RSP + 0x40]
/* 0e4f33fe */  MOVAPS xmmword ptr [RSP + 0x160],XMM1
/* 0e4f3406 */  MOV RCX,qword ptr [RSP + 0x50]
/* 0e4f340b */  MOV qword ptr [RSP + 0x170],RCX
/* 0e4f3413 */  MOVDQA xmmword ptr [R14],XMM0
/* 0e4f3418 */  MOV qword ptr [R14 + 0x10],0x0
/* 0e4f3420 */  MOVUPS XMM1,xmmword ptr [RSP + 0x58]
/* 0e4f3425 */  MOVUPS xmmword ptr [RSP + 0x178],XMM1
/* 0e4f342d */  MOV RCX,qword ptr [RSP + 0x68]
/* 0e4f3432 */  MOV qword ptr [RSP + 0x188],RCX
/* 0e4f343a */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4f3440 */  MOV qword ptr [RSP + 0x68],0x0
/* 0e4f3449 */  MOVSS XMM1,dword ptr [RSP + 0x70]
/* 0e4f344f */  MOVSS dword ptr [RSP + 0x190],XMM1
/* 0e4f3458 */  MOVUPS XMM1,xmmword ptr [RSP + 0x78]
/* 0e4f345d */  MOVUPS xmmword ptr [RSP + 0x198],XMM1
/* 0e4f3465 */  MOV RCX,qword ptr [RSP + 0x88]
/* 0e4f346d */  MOV qword ptr [RSP + 0x1a8],RCX
/* 0e4f3475 */  MOVDQU xmmword ptr [RAX + 0x50],XMM0
/* 0e4f347a */  MOV qword ptr [RAX + 0x60],0x0
/* 0e4f3482 */  MOVAPS XMM1,xmmword ptr [RSP + 0x90]
/* 0e4f348a */  MOVDQA XMM2,xmmword ptr [RSP + 0xa0]
/* 0e4f3493 */  MOVDQA xmmword ptr [RSP + 0x1c0],XMM2
/* 0e4f349c */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM1
/* 0e4f34a4 */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e4f34ad */  MOV qword ptr [RSP + 0xa0],0x0
/* 0e4f34b9 */  MOV RAX,qword ptr [RSP + 0xad]
/* 0e4f34c1 */  MOV qword ptr [RSP + 0x1cd],RAX
/* 0e4f34c9 */  MOV RDI,RSP
/* 0e4f34cc */  CALL 0x048b0bc0
/* 0e4f34d1 */  MOVZX EAX,byte ptr [RSP + 0x148]
/* 0e4f34d9 */  MOV ESI,EAX
/* 0e4f34db */  SHR ESI,0x1
/* 0e4f34dd */  TEST AL,0x1
/* 0e4f34df */  LEA RAX,[RSP + 0x149]
/* 0e4f34e7 */  CMOVNZ RAX,qword ptr [RSP + 0x158]
/* 0e4f34f0 */  CMOVNZ RSI,qword ptr [RSP + 0x150]
/* 0e4f34f9 */  TEST RSI,RSI
/* 0e4f34fc */  JZ 0x0e4f3512
/* 0e4f34fe */  MOV ECX,ESI
/* 0e4f3500 */  AND ECX,0x3
/* 0e4f3503 */  CMP RSI,0x4
/* 0e4f3507 */  JNC 0x0e4f351c
/* 0e4f3509 */  MOV EDX,0x811c9dc5
/* 0e4f350e */  XOR EDI,EDI
/* 0e4f3510 */  JMP 0x0e4f3578
/* 0e4f3512 */  MOV EDX,0x811c9dc5
/* 0e4f3517 */  JMP 0x0e4f35a4
/* 0e4f351c */  AND RSI,-0x4
/* 0e4f3520 */  MOV EDX,0x811c9dc5
/* 0e4f3525 */  XOR EDI,EDI
/* 0e4f3527 */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f3530 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e4f3535 */  XOR R8D,EDX
/* 0e4f3538 */  IMUL EDX,R8D,0x1000193
/* 0e4f353f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e4f3545 */  XOR R8D,EDX
/* 0e4f3548 */  IMUL EDX,R8D,0x1000193
/* 0e4f354f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e4f3555 */  XOR R8D,EDX
/* 0e4f3558 */  IMUL EDX,R8D,0x1000193
/* 0e4f355f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e4f3565 */  XOR R8D,EDX
/* 0e4f3568 */  IMUL EDX,R8D,0x1000193
/* 0e4f356f */  ADD RDI,0x4
/* 0e4f3573 */  CMP RSI,RDI
/* 0e4f3576 */  JNZ 0x0e4f3530
/* 0e4f3578 */  TEST RCX,RCX
/* 0e4f357b */  JZ 0x0e4f35a4
/* 0e4f357d */  ADD RAX,RDI
/* 0e4f3580 */  XOR ESI,ESI
/* 0e4f3582 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4f3590 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e4f3594 */  XOR EDI,EDX
/* 0e4f3596 */  IMUL EDX,EDI,0x1000193
/* 0e4f359c */  INC RSI
/* 0e4f359f */  CMP RCX,RSI
/* 0e4f35a2 */  JNZ 0x0e4f3590
/* 0e4f35a4 */  MOV dword ptr [RSP + 0x108],0x2
/* 0e4f35af */  MOV dword ptr [RSP + 0x10c],EDX
/* 0e4f35b6 */  MOVZX EAX,byte ptr [0x0f75cac0]
/* 0e4f35bd */  TEST AL,AL
/* 0e4f35bf */  JZ 0x0e4f76cc
/* 0e4f35c5 */  LEA R14,[RSP + 0xe8]
/* 0e4f35cd */  MOV EAX,dword ptr [RSP + 0x10c]
/* 0e4f35d4 */  MOV dword ptr [RSP],EAX
/* 0e4f35d7 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f35e0 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e4f35e8 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4f35f1 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4f35fa */  LEA RAX,[0xe68f1f0]
/* 0e4f3601 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4f3606 */  LEA RAX,[0x48b06d0]
/* 0e4f360d */  MOV qword ptr [RSP + 0x30],RAX
/* 0e4f3612 */  LEA RAX,[0xe68b470]
/* 0e4f3619 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4f361e */  LEA RAX,[0xe68f2b0]
/* 0e4f3625 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4f362a */  LEA RAX,[0xe68f2c0]
/* 0e4f3631 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4f3636 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4f363e */  PXOR XMM0,XMM0
/* 0e4f3642 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4f3648 */  MOV RSI,RSP
/* 0e4f364b */  MOV RDI,R14
/* 0e4f364e */  CALL 0x048b05a0
/* 0e4f3653 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e4f3658 */  TEST R15,R15
/* 0e4f365b */  JZ 0x0e4f3680
/* 0e4f365d */  MOV RAX,-0x1
/* 0e4f3664 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4f366a */  TEST RAX,RAX
/* 0e4f366d */  JNZ 0x0e4f3680
/* 0e4f366f */  MOV RAX,qword ptr [R15]
/* 0e4f3672 */  MOV RDI,R15
/* 0e4f3675 */  CALL qword ptr [RAX + 0x10]
/* 0e4f3678 */  MOV RDI,R15
/* 0e4f367b */  CALL 0x0412c2d0
/* 0e4f3680 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e4f3685 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e4f368b */  MOVDQA xmmword ptr [RSP + 0x1f0],XMM1
/* 0e4f3694 */  MOVDQA xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f369d */  MOVZX EAX,byte ptr [0x0f550a20]
/* 0e4f36a4 */  TEST AL,AL
/* 0e4f36a6 */  JZ 0x0e4f7720
/* 0e4f36ac */  MOV EAX,dword ptr [0x0f550a0c]
/* 0e4f36b2 */  MOV dword ptr [RSP],EAX
/* 0e4f36b5 */  LEA RDI,[0xf5463b0]
/* 0e4f36bc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f36c3 */  MOV ESI,0xd0
/* 0e4f36c8 */  CALL qword ptr [RAX + 0x10]
/* 0e4f36cb */  MOV R14,RAX
/* 0e4f36ce */  TEST RAX,RAX
/* 0e4f36d1 */  JZ 0x0e4f7160
/* 0e4f36d7 */  LEA RAX,[RSP + 0x130]
/* 0e4f36df */  PXOR XMM0,XMM0
/* 0e4f36e3 */  MOVDQU xmmword ptr [R14 + 0x8],XMM0
/* 0e4f36e9 */  LEA RCX,[0xef439d0]
/* 0e4f36f0 */  MOV qword ptr [R14],RCX
/* 0e4f36f3 */  MOV RCX,R14
/* 0e4f36f6 */  ADD RCX,0x18
/* 0e4f36fa */  MOVAPS XMM1,xmmword ptr [RSP + 0x120]
/* 0e4f3702 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e4f370b */  MOVUPS xmmword ptr [R14 + 0x18],XMM1
/* 0e4f3710 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4f3714 */  MOV qword ptr [R14 + 0x38],RDX
/* 0e4f3718 */  MOVUPS XMM1,xmmword ptr [RAX]
/* 0e4f371b */  MOVUPS xmmword ptr [R14 + 0x28],XMM1
/* 0e4f3720 */  MOVDQA xmmword ptr [RAX],XMM0
/* 0e4f3724 */  MOV qword ptr [RAX + 0x10],0x0
/* 0e4f372c */  MOV RDX,qword ptr [RAX + 0x28]
/* 0e4f3730 */  MOV qword ptr [R14 + 0x50],RDX
/* 0e4f3734 */  MOVUPS XMM1,xmmword ptr [RAX + 0x18]
/* 0e4f3738 */  MOVUPS xmmword ptr [R14 + 0x40],XMM1
/* 0e4f373d */  MOVDQU xmmword ptr [RAX + 0x18],XMM0
/* 0e4f3742 */  MOV qword ptr [RAX + 0x28],0x0
/* 0e4f374a */  MOVAPS XMM1,xmmword ptr [RSP + 0x160]
/* 0e4f3752 */  MOVUPS xmmword ptr [R14 + 0x58],XMM1
/* 0e4f3757 */  MOV RDX,qword ptr [RSP + 0x170]
/* 0e4f375f */  MOV qword ptr [R14 + 0x68],RDX
/* 0e4f3763 */  MOVDQA xmmword ptr [RAX + 0x30],XMM0
/* 0e4f3768 */  MOV qword ptr [RAX + 0x40],0x0
/* 0e4f3770 */  MOVUPS XMM1,xmmword ptr [RSP + 0x178]
/* 0e4f3778 */  MOVUPS xmmword ptr [R14 + 0x70],XMM1
/* 0e4f377d */  MOV RDX,qword ptr [RSP + 0x188]
/* 0e4f3785 */  MOV qword ptr [R14 + 0x80],RDX
/* 0e4f378c */  MOVDQU xmmword ptr [RAX + 0x48],XMM0
/* 0e4f3791 */  MOV qword ptr [RAX + 0x58],0x0
/* 0e4f3799 */  MOVSS XMM1,dword ptr [RSP + 0x190]
/* 0e4f37a2 */  MOVSS dword ptr [R14 + 0x88],XMM1
/* 0e4f37ab */  MOVUPS XMM1,xmmword ptr [RSP + 0x198]
/* 0e4f37b3 */  MOVUPS xmmword ptr [R14 + 0x90],XMM1
/* 0e4f37bb */  MOV RDX,qword ptr [RSP + 0x1a8]
/* 0e4f37c3 */  MOV qword ptr [R14 + 0xa0],RDX
/* 0e4f37ca */  MOVDQU xmmword ptr [RAX + 0x68],XMM0
/* 0e4f37cf */  MOV qword ptr [RAX + 0x78],0x0
/* 0e4f37d7 */  MOV RDX,qword ptr [RAX + 0x90]
/* 0e4f37de */  MOV qword ptr [R14 + 0xb8],RDX
/* 0e4f37e5 */  MOVDQU XMM1,xmmword ptr [RAX + 0x80]
/* 0e4f37ed */  MOVDQU xmmword ptr [R14 + 0xa8],XMM1
/* 0e4f37f6 */  MOVDQA xmmword ptr [RAX + 0x80],XMM0
/* 0e4f37fe */  MOV qword ptr [RAX + 0x90],0x0
/* 0e4f3809 */  MOV RDX,qword ptr [RAX + 0x98]
/* 0e4f3810 */  MOV RAX,qword ptr [RAX + 0x9d]
/* 0e4f3817 */  MOV qword ptr [R14 + 0xc5],RAX
/* 0e4f381e */  MOV qword ptr [R14 + 0xc0],RDX
/* 0e4f3825 */  MOV qword ptr [RSP + 0x8],RCX
/* 0e4f382a */  MOV qword ptr [RSP + 0x10],R14
/* 0e4f382f */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4f3838 */  LEA RDI,[RSP + 0x1e0]
/* 0e4f3840 */  MOV RSI,RSP
/* 0e4f3843 */  CALL 0x048afd20
/* 0e4f3848 */  MOV R14,qword ptr [RSP + 0x10]
/* 0e4f384d */  TEST R14,R14
/* 0e4f3850 */  JZ 0x0e4f3875
/* 0e4f3852 */  MOV RAX,-0x1
/* 0e4f3859 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f385f */  TEST RAX,RAX
/* 0e4f3862 */  JNZ 0x0e4f3875
/* 0e4f3864 */  MOV RAX,qword ptr [R14]
/* 0e4f3867 */  MOV RDI,R14
/* 0e4f386a */  CALL qword ptr [RAX + 0x10]
/* 0e4f386d */  MOV RDI,R14
/* 0e4f3870 */  CALL 0x0412c2d0
/* 0e4f3875 */  MOV R14,qword ptr [RSP + 0x228]
/* 0e4f387d */  TEST R14,R14
/* 0e4f3880 */  JZ 0x0e4f38a5
/* 0e4f3882 */  MOV RAX,-0x1
/* 0e4f3889 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f388f */  TEST RAX,RAX
/* 0e4f3892 */  JNZ 0x0e4f38a5
/* 0e4f3894 */  MOV RAX,qword ptr [R14]
/* 0e4f3897 */  MOV RDI,R14
/* 0e4f389a */  CALL qword ptr [RAX + 0x10]
/* 0e4f389d */  MOV RDI,R14
/* 0e4f38a0 */  CALL 0x0412c2d0
/* 0e4f38a5 */  MOV RCX,qword ptr [RSP + 0x1f0]
/* 0e4f38ad */  MOV EAX,dword ptr [RSP + 0x1f8]
/* 0e4f38b4 */  MOV EDX,dword ptr [RSP + 0x1fc]
/* 0e4f38bb */  CMP EDX,0x2
/* 0e4f38be */  JZ 0x0e4f3901
/* 0e4f38c0 */  CMP EDX,0x1
/* 0e4f38c3 */  JZ 0x0e4f38e0
/* 0e4f38c5 */  TEST EDX,EDX
/* 0e4f38c7 */  JNZ 0x0e4f38cd
/* 0e4f38c9 */  OR byte ptr [RCX + 0x1a],0x9
/* 0e4f38cd */  CMP byte ptr [RSP + 0x118],0x0
/* 0e4f38d5 */  JZ 0x0e4f395c
/* 0e4f38db */  JMP 0x0e4f3aa5
/* 0e4f38e0 */  MOV RCX,qword ptr [RCX + 0x78]
/* 0e4f38e4 */  MOV RCX,qword ptr [RCX + 0x48]
/* 0e4f38e8 */  CMP dword ptr [RCX],EAX
/* 0e4f38ea */  JZ 0x0e4f394a
/* 0e4f38ec */  ADD RCX,0x68
/* 0e4f38f0 */  MOV RDX,RCX
/* 0e4f38f3 */  ADD RCX,0x68
/* 0e4f38f7 */  CMP dword ptr [RDX],EAX
/* 0e4f38f9 */  JNZ 0x0e4f38f0
/* 0e4f38fb */  ADD RCX,-0x68
/* 0e4f38ff */  JMP 0x0e4f394a
/* 0e4f3901 */  MOV RDX,qword ptr [RSP + 0x1e8]
/* 0e4f3909 */  MOV RCX,qword ptr [RCX + 0x78]
/* 0e4f390d */  MOV RCX,qword ptr [RCX + 0x60]
/* 0e4f3911 */  CMP dword ptr [RCX],EAX
/* 0e4f3913 */  JZ 0x0e4f3944
/* 0e4f3915 */  ADD RCX,0x58
/* 0e4f3919 */  NOP dword ptr [RAX]
/* 0e4f3920 */  MOV RSI,RCX
/* 0e4f3923 */  ADD RCX,0x58
/* 0e4f3927 */  CMP dword ptr [RSI],EAX
/* 0e4f3929 */  JNZ 0x0e4f3920
/* 0e4f392b */  ADD RCX,-0x58
/* 0e4f392f */  JMP 0x0e4f3944
/* 0e4f3940 */  MOV RCX,qword ptr [RCX + 0x38]
/* 0e4f3944 */  CMP qword ptr [RCX + 0x30],RDX
/* 0e4f3948 */  JNZ 0x0e4f3940
/* 0e4f394a */  OR byte ptr [RCX + 0x12],0x9
/* 0e4f394e */  CMP byte ptr [RSP + 0x118],0x0
/* 0e4f3956 */  JNZ 0x0e4f3aa5
/* 0e4f395c */  MOV dword ptr [RSP + 0x114],0xbb8863ad
/* 0e4f3967 */  MOV byte ptr [RSP + 0x118],0x1
/* 0e4f396f */  MOV dword ptr [RSP],0xbb8863ad
/* 0e4f3976 */  MOV R14,qword ptr [RSP + 0xe0]
/* 0e4f397e */  MOVZX EAX,byte ptr [0x0f75caa0]
/* 0e4f3985 */  TEST AL,AL
/* 0e4f3987 */  JZ 0x0e4f7a3c
/* 0e4f398d */  MOV RAX,qword ptr [0x0f75ca20]
/* 0e4f3994 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f3997 */  MOV RCX,qword ptr [R14 + 0x18]
/* 0e4f399b */  MOV RDX,qword ptr [R14 + 0x20]
/* 0e4f399f */  SUB RDX,RCX
/* 0e4f39a2 */  SHR RDX,0x3
/* 0e4f39a6 */  MOV ESI,0xffffffff
/* 0e4f39ab */  ADD EDX,ESI
/* 0e4f39ad */  AND EDX,EAX
/* 0e4f39af */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f39b3 */  MOV RDX,qword ptr [R14 + 0x30]
/* 0e4f39b7 */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f39c0 */  MOV RCX,qword ptr [RCX]
/* 0e4f39c3 */  CMP RCX,-0x1
/* 0e4f39c7 */  JZ 0x0e4f39e9
/* 0e4f39c9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f39cd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f39d1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f39d5 */  JNZ 0x0e4f39c0
/* 0e4f39d7 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f39db */  CMP RCX,RAX
/* 0e4f39de */  JNZ 0x0e4f39f5
/* 0e4f39e0 */  LEA RAX,[0xf75ca20]
/* 0e4f39e7 */  JMP 0x0e4f39f9
/* 0e4f39e9 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f39ed */  MOV RCX,RAX
/* 0e4f39f0 */  CMP RCX,RAX
/* 0e4f39f3 */  JZ 0x0e4f39e0
/* 0e4f39f5 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f39f9 */  MOV R14,qword ptr [RAX + 0x68]
/* 0e4f39fd */  MOV RCX,qword ptr [R14 + 0x20]
/* 0e4f3a01 */  MOV RAX,qword ptr [R14 + 0x28]
/* 0e4f3a05 */  CMP RCX,RAX
/* 0e4f3a08 */  JZ 0x0e4f3a21
/* 0e4f3a0a */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f3a10 */  CMP dword ptr [RCX],0xbb8863ad
/* 0e4f3a16 */  JZ 0x0e4f3a21
/* 0e4f3a18 */  ADD RCX,0x38
/* 0e4f3a1c */  CMP RCX,RAX
/* 0e4f3a1f */  JNZ 0x0e4f3a10
/* 0e4f3a21 */  CMP RCX,RAX
/* 0e4f3a24 */  JZ 0x0e4f3a66
/* 0e4f3a26 */  CMP qword ptr [RCX + 0x20],0x0
/* 0e4f3a2b */  JZ 0x0e4f3aa5
/* 0e4f3a2d */  LEA RDI,[0x14ca1eb]
/* 0e4f3a34 */  LEA RSI,[0x144861d]
/* 0e4f3a3b */  LEA RCX,[0x119d818]
/* 0e4f3a42 */  LEA R8,[0x1356cf2]
/* 0e4f3a49 */  MOV EDX,0x371
/* 0e4f3a4e */  XOR EAX,EAX
/* 0e4f3a50 */  CALL 0x0eeddcf0
/* 0e4f3a55 */  TEST AL,AL
/* 0e4f3a57 */  JZ 0x0e4f3aa5
/* 0e4f3a59 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e4f3a64 */  JMP 0x0e4f3aa5
/* 0e4f3a66 */  CMP RAX,qword ptr [R14 + 0x30]
/* 0e4f3a6a */  JNC 0x0e4f3a95
/* 0e4f3a6c */  MOV dword ptr [RAX],0xbb8863ad
/* 0e4f3a72 */  PXOR XMM0,XMM0
/* 0e4f3a76 */  MOVDQU xmmword ptr [RAX + 0x8],XMM0
/* 0e4f3a7b */  MOVDQU xmmword ptr [RAX + 0x18],XMM0
/* 0e4f3a80 */  MOV dword ptr [RAX + 0x28],0x3f800000
/* 0e4f3a87 */  MOV byte ptr [RAX + 0x30],0x0
/* 0e4f3a8b */  MOV byte ptr [RAX + 0x34],0x0
/* 0e4f3a8f */  ADD RAX,0x38
/* 0e4f3a93 */  JMP 0x0e4f3aa1
/* 0e4f3a95 */  LEA RDI,[R14 + 0x20]
/* 0e4f3a99 */  MOV RSI,RSP
/* 0e4f3a9c */  CALL 0x05d9c2b0
/* 0e4f3aa1 */  MOV qword ptr [R14 + 0x28],RAX
/* 0e4f3aa5 */  MOV EBP,dword ptr [RSP + 0x114]
/* 0e4f3aac */  MOV R15,qword ptr [RSP + 0xe0]
/* 0e4f3ab4 */  MOVZX EAX,byte ptr [0x0f75caa0]
/* 0e4f3abb */  TEST AL,AL
/* 0e4f3abd */  JZ 0x0e4f7795
/* 0e4f3ac3 */  LEA R14,[RSP + 0x10c]
/* 0e4f3acb */  MOV RAX,qword ptr [0x0f75ca20]
/* 0e4f3ad2 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f3ad5 */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e4f3ad9 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e4f3add */  SUB RDX,RCX
/* 0e4f3ae0 */  SHR RDX,0x3
/* 0e4f3ae4 */  MOV ESI,0xffffffff
/* 0e4f3ae9 */  ADD EDX,ESI
/* 0e4f3aeb */  AND EDX,EAX
/* 0e4f3aed */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f3af1 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e4f3af5 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f3b00 */  MOV RCX,qword ptr [RCX]
/* 0e4f3b03 */  CMP RCX,-0x1
/* 0e4f3b07 */  JZ 0x0e4f3b29
/* 0e4f3b09 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f3b0d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f3b11 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f3b15 */  JNZ 0x0e4f3b00
/* 0e4f3b17 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f3b1b */  CMP RCX,RAX
/* 0e4f3b1e */  JNZ 0x0e4f3b35
/* 0e4f3b20 */  LEA RAX,[0xf75ca20]
/* 0e4f3b27 */  JMP 0x0e4f3b39
/* 0e4f3b29 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f3b2d */  MOV RCX,RAX
/* 0e4f3b30 */  CMP RCX,RAX
/* 0e4f3b33 */  JZ 0x0e4f3b20
/* 0e4f3b35 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f3b39 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f3b3d */  MOV R15,qword ptr [RAX + 0x20]
/* 0e4f3b41 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e4f3b45 */  CMP R15,RAX
/* 0e4f3b48 */  JZ 0x0e4f3b5e
/* 0e4f3b4a */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f3b50 */  CMP dword ptr [R15],EBP
/* 0e4f3b53 */  JZ 0x0e4f3b5e
/* 0e4f3b55 */  ADD R15,0x38
/* 0e4f3b59 */  CMP R15,RAX
/* 0e4f3b5c */  JNZ 0x0e4f3b50
/* 0e4f3b5e */  CMP R15,RAX
/* 0e4f3b61 */  JNZ 0x0e4f3b9a
/* 0e4f3b63 */  LEA RDI,[0x13e0236]
/* 0e4f3b6a */  LEA RSI,[0x1208bb9]
/* 0e4f3b71 */  LEA RCX,[0x119d818]
/* 0e4f3b78 */  LEA R8,[0x12ecc6e]
/* 0e4f3b7f */  MOV EDX,0x326
/* 0e4f3b84 */  XOR EAX,EAX
/* 0e4f3b86 */  CALL 0x0eeddcf0
/* 0e4f3b8b */  TEST AL,AL
/* 0e4f3b8d */  JZ 0x0e4f3b9a
/* 0e4f3b8f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e4f3b9a */  ADD R15,0x8
/* 0e4f3b9e */  MOV byte ptr [RSP],0x0
/* 0e4f3ba2 */  MOV RCX,RSP
/* 0e4f3ba5 */  MOV RDI,R15
/* 0e4f3ba8 */  MOV RSI,R14
/* 0e4f3bab */  MOV RDX,R14
/* 0e4f3bae */  CALL 0x05d9c620
/* 0e4f3bb3 */  LEA RDI,[RSP + 0x120]
/* 0e4f3bbb */  CALL 0x048b0bc0
/* 0e4f3bc0 */  MOVZX EAX,byte ptr [0x0f75cb58]
/* 0e4f3bc7 */  TEST AL,AL
/* 0e4f3bc9 */  JZ 0x0e4f73e7
/* 0e4f3bcf */  MOV RAX,qword ptr [0x0f75cad8]
/* 0e4f3bd6 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f3bd9 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4f3bdd */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e4f3be1 */  SUB RDX,RCX
/* 0e4f3be4 */  SHR RDX,0x3
/* 0e4f3be8 */  MOV ESI,0xffffffff
/* 0e4f3bed */  ADD EDX,ESI
/* 0e4f3bef */  AND EDX,EAX
/* 0e4f3bf1 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f3bf5 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e4f3bf9 */  NOP dword ptr [RAX]
/* 0e4f3c00 */  MOV RCX,qword ptr [RCX]
/* 0e4f3c03 */  CMP RCX,-0x1
/* 0e4f3c07 */  JZ 0x0e4f3c32
/* 0e4f3c09 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f3c0d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f3c11 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f3c15 */  JNZ 0x0e4f3c00
/* 0e4f3c17 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f3c1b */  CMP RCX,RAX
/* 0e4f3c1e */  JNZ 0x0e4f3c3e
/* 0e4f3c20 */  LEA RAX,[0xf75cad8]
/* 0e4f3c27 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f3c2e */  JZ 0x0e4f3c4b
/* 0e4f3c30 */  JMP 0x0e4f3c78
/* 0e4f3c32 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f3c36 */  MOV RCX,RAX
/* 0e4f3c39 */  CMP RCX,RAX
/* 0e4f3c3c */  JZ 0x0e4f3c20
/* 0e4f3c3e */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f3c42 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f3c49 */  JNZ 0x0e4f3c78
/* 0e4f3c4b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f3c4f */  TEST RAX,RAX
/* 0e4f3c52 */  JZ 0x0e4f3c78
/* 0e4f3c54 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f3c58 */  LEA RDX,[RAX + 0x9]
/* 0e4f3c5c */  MOV ECX,ESI
/* 0e4f3c5e */  SHR ECX,0x1
/* 0e4f3c60 */  TEST SIL,0x1
/* 0e4f3c64 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f3c69 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f3c6e */  LEA RDI,[RSP + 0xe0]
/* 0e4f3c76 */  JMP 0x0e4f3c8c
/* 0e4f3c78 */  LEA RDX,[0x1304a3b]
/* 0e4f3c7f */  LEA RDI,[RSP + 0xe0]
/* 0e4f3c87 */  MOV ECX,0xa
/* 0e4f3c8c */  MOV RSI,RBX
/* 0e4f3c8f */  CALL 0x0e68f810
/* 0e4f3c94 */  MOV byte ptr [RSP + 0x114],0x0
/* 0e4f3c9c */  MOV byte ptr [RSP + 0x118],0x0
/* 0e4f3ca4 */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f3cac */  JNZ 0x0e4f44f4
/* 0e4f3cb2 */  LEA RSI,[0x1422081]
/* 0e4f3cb9 */  MOV RDI,RSP
/* 0e4f3cbc */  MOV EDX,0x6
/* 0e4f3cc1 */  CALL 0x0e693090
/* 0e4f3cc6 */  MOVZX EAX,byte ptr [RSP + 0x28]
/* 0e4f3ccb */  MOV ESI,EAX
/* 0e4f3ccd */  SHR ESI,0x1
/* 0e4f3ccf */  TEST AL,0x1
/* 0e4f3cd1 */  LEA R12,[RSP + 0x29]
/* 0e4f3cd6 */  MOV RAX,qword ptr [RSP + 0x38]
/* 0e4f3cdb */  CMOVZ RAX,R12
/* 0e4f3cdf */  CMOVNZ RSI,qword ptr [RSP + 0x30]
/* 0e4f3ce5 */  TEST RSI,RSI
/* 0e4f3ce8 */  JZ 0x0e4f3cfe
/* 0e4f3cea */  MOV ECX,ESI
/* 0e4f3cec */  AND ECX,0x3
/* 0e4f3cef */  CMP RSI,0x4
/* 0e4f3cf3 */  JNC 0x0e4f3d08
/* 0e4f3cf5 */  MOV EDX,0x811c9dc5
/* 0e4f3cfa */  XOR EDI,EDI
/* 0e4f3cfc */  JMP 0x0e4f3d68
/* 0e4f3cfe */  MOV EDX,0x811c9dc5
/* 0e4f3d03 */  JMP 0x0e4f3d94
/* 0e4f3d08 */  AND RSI,-0x4
/* 0e4f3d0c */  MOV EDX,0x811c9dc5
/* 0e4f3d11 */  XOR EDI,EDI
/* 0e4f3d13 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f3d20 */  MOVSX R8D,byte ptr [RAX + RDI*0x1]
/* 0e4f3d25 */  XOR R8D,EDX
/* 0e4f3d28 */  IMUL EDX,R8D,0x1000193
/* 0e4f3d2f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x1]
/* 0e4f3d35 */  XOR R8D,EDX
/* 0e4f3d38 */  IMUL EDX,R8D,0x1000193
/* 0e4f3d3f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x2]
/* 0e4f3d45 */  XOR R8D,EDX
/* 0e4f3d48 */  IMUL EDX,R8D,0x1000193
/* 0e4f3d4f */  MOVSX R8D,byte ptr [RAX + RDI*0x1 + 0x3]
/* 0e4f3d55 */  XOR R8D,EDX
/* 0e4f3d58 */  IMUL EDX,R8D,0x1000193
/* 0e4f3d5f */  ADD RDI,0x4
/* 0e4f3d63 */  CMP RSI,RDI
/* 0e4f3d66 */  JNZ 0x0e4f3d20
/* 0e4f3d68 */  TEST RCX,RCX
/* 0e4f3d6b */  JZ 0x0e4f3d94
/* 0e4f3d6d */  ADD RAX,RDI
/* 0e4f3d70 */  XOR ESI,ESI
/* 0e4f3d72 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4f3d80 */  MOVSX EDI,byte ptr [RAX + RSI*0x1]
/* 0e4f3d84 */  XOR EDI,EDX
/* 0e4f3d86 */  IMUL EDX,EDI,0x1000193
/* 0e4f3d8c */  INC RSI
/* 0e4f3d8f */  CMP RCX,RSI
/* 0e4f3d92 */  JNZ 0x0e4f3d80
/* 0e4f3d94 */  MOV dword ptr [RSP + 0x108],0x2
/* 0e4f3d9f */  MOV dword ptr [RSP + 0x10c],EDX
/* 0e4f3da6 */  MOVZX EAX,byte ptr [0x0f75cb78]
/* 0e4f3dad */  TEST AL,AL
/* 0e4f3daf */  JZ 0x0e4f76f6
/* 0e4f3db5 */  LEA R14,[RSP + 0xe8]
/* 0e4f3dbd */  MOV EAX,dword ptr [RSP + 0x10c]
/* 0e4f3dc4 */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f3dcb */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f3dd7 */  MOV dword ptr [RSP + 0x130],0x3
/* 0e4f3de2 */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f3dee */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f3dfa */  LEA R13,[0xe6936a0]
/* 0e4f3e01 */  MOV qword ptr [RSP + 0x148],R13
/* 0e4f3e09 */  LEA RAX,[0x48b06d0]
/* 0e4f3e10 */  MOV qword ptr [RSP + 0x150],RAX
/* 0e4f3e18 */  LEA RAX,[0xe68f310]
/* 0e4f3e1f */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f3e27 */  LEA RAX,[0xe693760]
/* 0e4f3e2e */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f3e36 */  LEA RAX,[0xe693770]
/* 0e4f3e3d */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f3e45 */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f3e50 */  PXOR XMM0,XMM0
/* 0e4f3e54 */  MOVDQU xmmword ptr [RSP + 0x178],XMM0
/* 0e4f3e5d */  LEA RSI,[RSP + 0x120]
/* 0e4f3e65 */  MOV RDI,R14
/* 0e4f3e68 */  CALL 0x048b05a0
/* 0e4f3e6d */  MOV R15,qword ptr [RSP + 0x180]
/* 0e4f3e75 */  TEST R15,R15
/* 0e4f3e78 */  JZ 0x0e4f3e9d
/* 0e4f3e7a */  MOV RAX,-0x1
/* 0e4f3e81 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4f3e87 */  TEST RAX,RAX
/* 0e4f3e8a */  JNZ 0x0e4f3e9d
/* 0e4f3e8c */  MOV RAX,qword ptr [R15]
/* 0e4f3e8f */  MOV RDI,R15
/* 0e4f3e92 */  CALL qword ptr [RAX + 0x10]
/* 0e4f3e95 */  MOV RDI,R15
/* 0e4f3e98 */  CALL 0x0412c2d0
/* 0e4f3e9d */  MOVUPS XMM0,xmmword ptr [R14]
/* 0e4f3ea1 */  MOVUPS XMM1,xmmword ptr [R14 + 0x10]
/* 0e4f3ea6 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM1
/* 0e4f3eae */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f3eb6 */  LEA RDI,[RSP + 0x120]
/* 0e4f3ebe */  LEA RSI,[RSP + 0x1e0]
/* 0e4f3ec6 */  MOV RDX,RSP
/* 0e4f3ec9 */  CALL 0x0e693430
/* 0e4f3ece */  MOV EAX,dword ptr [RSP + 0x13c]
/* 0e4f3ed5 */  CMP EAX,0x2
/* 0e4f3ed8 */  JZ 0x0e4f3f41
/* 0e4f3eda */  CMP EAX,0x1
/* 0e4f3edd */  JZ 0x0e4f3f05
/* 0e4f3edf */  TEST EAX,EAX
/* 0e4f3ee1 */  JNZ 0x0e4f3ef2
/* 0e4f3ee3 */  MOV RAX,qword ptr [RSP + 0x130]
/* 0e4f3eeb */  OR dword ptr [RAX + 0x18],0x90000
/* 0e4f3ef2 */  CMP byte ptr [RSP + 0x118],0x0
/* 0e4f3efa */  JZ 0x0e4f3f98
/* 0e4f3f00 */  JMP 0x0e4f3fad
/* 0e4f3f05 */  MOV RAX,qword ptr [RSP + 0x130]
/* 0e4f3f0d */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f3f11 */  MOV ECX,dword ptr [RSP + 0x138]
/* 0e4f3f18 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4f3f1c */  CMP dword ptr [RAX],ECX
/* 0e4f3f1e */  JZ 0x0e4f3f8a
/* 0e4f3f20 */  ADD RAX,0x68
/* 0e4f3f24 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4f3f30 */  MOV RDX,RAX
/* 0e4f3f33 */  ADD RAX,0x68
/* 0e4f3f37 */  CMP dword ptr [RDX],ECX
/* 0e4f3f39 */  JNZ 0x0e4f3f30
/* 0e4f3f3b */  ADD RAX,-0x68
/* 0e4f3f3f */  JMP 0x0e4f3f8a
/* 0e4f3f41 */  MOV RAX,qword ptr [RSP + 0x130]
/* 0e4f3f49 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f3f4d */  MOV ECX,dword ptr [RSP + 0x138]
/* 0e4f3f54 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4f3f58 */  CMP dword ptr [RAX],ECX
/* 0e4f3f5a */  JZ 0x0e4f3f6f
/* 0e4f3f5c */  ADD RAX,0x58
/* 0e4f3f60 */  MOV RDX,RAX
/* 0e4f3f63 */  ADD RAX,0x58
/* 0e4f3f67 */  CMP dword ptr [RDX],ECX
/* 0e4f3f69 */  JNZ 0x0e4f3f60
/* 0e4f3f6b */  ADD RAX,-0x58
/* 0e4f3f6f */  MOV RCX,qword ptr [RSP + 0x128]
/* 0e4f3f77 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f3f7b */  JZ 0x0e4f3f8a
/* 0e4f3f7d */  NOP dword ptr [RAX]
/* 0e4f3f80 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4f3f84 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f3f88 */  JNZ 0x0e4f3f80
/* 0e4f3f8a */  OR byte ptr [RAX + 0x12],0x9
/* 0e4f3f8e */  CMP byte ptr [RSP + 0x118],0x0
/* 0e4f3f96 */  JNZ 0x0e4f3fad
/* 0e4f3f98 */  LEA RDI,[RSP + 0x120]
/* 0e4f3fa0 */  LEA RSI,[RSP + 0xe0]
/* 0e4f3fa8 */  CALL 0x0e6937c0
/* 0e4f3fad */  MOV EBP,dword ptr [RSP + 0x114]
/* 0e4f3fb4 */  MOV R15,qword ptr [RSP + 0xe0]
/* 0e4f3fbc */  MOVZX EAX,byte ptr [0x0f75cb58]
/* 0e4f3fc3 */  TEST AL,AL
/* 0e4f3fc5 */  JZ 0x0e4f7751
/* 0e4f3fcb */  LEA R14,[RSP + 0x10c]
/* 0e4f3fd3 */  MOV RAX,qword ptr [0x0f75cad8]
/* 0e4f3fda */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f3fdd */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e4f3fe1 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e4f3fe5 */  SUB RDX,RCX
/* 0e4f3fe8 */  SHR RDX,0x3
/* 0e4f3fec */  MOV ESI,0xffffffff
/* 0e4f3ff1 */  ADD EDX,ESI
/* 0e4f3ff3 */  AND EDX,EAX
/* 0e4f3ff5 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f3ff9 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e4f3ffd */  NOP dword ptr [RAX]
/* 0e4f4000 */  MOV RCX,qword ptr [RCX]
/* 0e4f4003 */  CMP RCX,-0x1
/* 0e4f4007 */  JZ 0x0e4f4029
/* 0e4f4009 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f400d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f4011 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f4015 */  JNZ 0x0e4f4000
/* 0e4f4017 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f401b */  CMP RCX,RAX
/* 0e4f401e */  JNZ 0x0e4f4035
/* 0e4f4020 */  LEA RAX,[0xf75cad8]
/* 0e4f4027 */  JMP 0x0e4f4039
/* 0e4f4029 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f402d */  MOV RCX,RAX
/* 0e4f4030 */  CMP RCX,RAX
/* 0e4f4033 */  JZ 0x0e4f4020
/* 0e4f4035 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f4039 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f403d */  MOV R15,qword ptr [RAX + 0x20]
/* 0e4f4041 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e4f4045 */  CMP R15,RAX
/* 0e4f4048 */  JZ 0x0e4f405e
/* 0e4f404a */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f4050 */  CMP dword ptr [R15],EBP
/* 0e4f4053 */  JZ 0x0e4f405e
/* 0e4f4055 */  ADD R15,0x38
/* 0e4f4059 */  CMP R15,RAX
/* 0e4f405c */  JNZ 0x0e4f4050
/* 0e4f405e */  CMP R15,RAX
/* 0e4f4061 */  MOV RBP,R13
/* 0e4f4064 */  LEA R13,[0x48b06d0]
/* 0e4f406b */  JNZ 0x0e4f40a4
/* 0e4f406d */  LEA RDI,[0x13e0236]
/* 0e4f4074 */  LEA RSI,[0x1208bb9]
/* 0e4f407b */  LEA RCX,[0x119d818]
/* 0e4f4082 */  LEA R8,[0x1320c22]
/* 0e4f4089 */  MOV EDX,0x326
/* 0e4f408e */  XOR EAX,EAX
/* 0e4f4090 */  CALL 0x0eeddcf0
/* 0e4f4095 */  TEST AL,AL
/* 0e4f4097 */  JZ 0x0e4f40a4
/* 0e4f4099 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e4f40a4 */  ADD R15,0x8
/* 0e4f40a8 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e4f40b0 */  LEA RCX,[RSP + 0x120]
/* 0e4f40b8 */  MOV RDI,R15
/* 0e4f40bb */  MOV RSI,R14
/* 0e4f40be */  MOV RDX,R14
/* 0e4f40c1 */  CALL 0x05d9c620
/* 0e4f40c6 */  MOVUPS XMM0,xmmword ptr [RSP + 0xe0]
/* 0e4f40ce */  MOVUPS XMM1,xmmword ptr [RSP + 0xf0]
/* 0e4f40d6 */  MOVDQU XMM2,xmmword ptr [RSP + 0x100]
/* 0e4f40df */  MOVDQU XMM3,xmmword ptr [RSP + 0x10c]
/* 0e4f40e8 */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f40f0 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM1
/* 0e4f40f8 */  MOVDQA xmmword ptr [RSP + 0x200],XMM2
/* 0e4f4101 */  MOVDQU xmmword ptr [RSP + 0x20c],XMM3
/* 0e4f410a */  MOV RDI,RSP
/* 0e4f410d */  CALL 0x048b0bc0
/* 0e4f4112 */  LEA RSI,[0x126c0de]
/* 0e4f4119 */  MOV RDI,RSP
/* 0e4f411c */  MOV EDX,0xa
/* 0e4f4121 */  CALL 0x0e693090
/* 0e4f4126 */  MOVZX EAX,byte ptr [RSP + 0x28]
/* 0e4f412b */  MOV EDX,EAX
/* 0e4f412d */  SHR EDX,0x1
/* 0e4f412f */  TEST AL,0x1
/* 0e4f4131 */  CMOVNZ R12,qword ptr [RSP + 0x38]
/* 0e4f4137 */  CMOVNZ RDX,qword ptr [RSP + 0x30]
/* 0e4f413d */  TEST RDX,RDX
/* 0e4f4140 */  JZ 0x0e4f4156
/* 0e4f4142 */  MOV EAX,EDX
/* 0e4f4144 */  AND EAX,0x3
/* 0e4f4147 */  CMP RDX,0x4
/* 0e4f414b */  JNC 0x0e4f415d
/* 0e4f414d */  MOV ECX,0x811c9dc5
/* 0e4f4152 */  XOR ESI,ESI
/* 0e4f4154 */  JMP 0x0e4f41b0
/* 0e4f4156 */  MOV ECX,0x811c9dc5
/* 0e4f415b */  JMP 0x0e4f41d5
/* 0e4f415d */  AND RDX,-0x4
/* 0e4f4161 */  MOV ECX,0x811c9dc5
/* 0e4f4166 */  XOR ESI,ESI
/* 0e4f4168 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e4f4170 */  MOVSX EDI,byte ptr [R12 + RSI*0x1]
/* 0e4f4175 */  XOR EDI,ECX
/* 0e4f4177 */  IMUL ECX,EDI,0x1000193
/* 0e4f417d */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x1]
/* 0e4f4183 */  XOR EDI,ECX
/* 0e4f4185 */  IMUL ECX,EDI,0x1000193
/* 0e4f418b */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x2]
/* 0e4f4191 */  XOR EDI,ECX
/* 0e4f4193 */  IMUL ECX,EDI,0x1000193
/* 0e4f4199 */  MOVSX EDI,byte ptr [R12 + RSI*0x1 + 0x3]
/* 0e4f419f */  XOR EDI,ECX
/* 0e4f41a1 */  IMUL ECX,EDI,0x1000193
/* 0e4f41a7 */  ADD RSI,0x4
/* 0e4f41ab */  CMP RDX,RSI
/* 0e4f41ae */  JNZ 0x0e4f4170
/* 0e4f41b0 */  TEST RAX,RAX
/* 0e4f41b3 */  JZ 0x0e4f41d5
/* 0e4f41b5 */  ADD R12,RSI
/* 0e4f41b8 */  XOR EDX,EDX
/* 0e4f41ba */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f41c0 */  MOVSX ESI,byte ptr [R12 + RDX*0x1]
/* 0e4f41c5 */  XOR ESI,ECX
/* 0e4f41c7 */  IMUL ECX,ESI,0x1000193
/* 0e4f41cd */  INC RDX
/* 0e4f41d0 */  CMP RAX,RDX
/* 0e4f41d3 */  JNZ 0x0e4f41c0
/* 0e4f41d5 */  MOV dword ptr [RSP + 0x208],0x2
/* 0e4f41e0 */  MOV dword ptr [RSP + 0x20c],ECX
/* 0e4f41e7 */  MOVZX EAX,byte ptr [0x0f75cb78]
/* 0e4f41ee */  TEST AL,AL
/* 0e4f41f0 */  JZ 0x0e4f77d9
/* 0e4f41f6 */  LEA R14,[RSP + 0x1e8]
/* 0e4f41fe */  MOV EAX,dword ptr [RSP + 0x20c]
/* 0e4f4205 */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f420c */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f4218 */  MOV dword ptr [RSP + 0x130],0x3
/* 0e4f4223 */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f422f */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f423b */  MOV qword ptr [RSP + 0x148],RBP
/* 0e4f4243 */  MOV qword ptr [RSP + 0x150],R13
/* 0e4f424b */  LEA RAX,[0xe68f310]
/* 0e4f4252 */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f425a */  LEA RAX,[0xe693980]
/* 0e4f4261 */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f4269 */  LEA RAX,[0xe693990]
/* 0e4f4270 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f4278 */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f4283 */  XORPS XMM0,XMM0
/* 0e4f4286 */  MOVUPS xmmword ptr [RSP + 0x178],XMM0
/* 0e4f428e */  LEA RSI,[RSP + 0x120]
/* 0e4f4296 */  MOV RDI,R14
/* 0e4f4299 */  CALL 0x048b05a0
/* 0e4f429e */  MOV R15,qword ptr [RSP + 0x180]
/* 0e4f42a6 */  TEST R15,R15
/* 0e4f42a9 */  JZ 0x0e4f42ce
/* 0e4f42ab */  MOV RAX,-0x1
/* 0e4f42b2 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4f42b8 */  TEST RAX,RAX
/* 0e4f42bb */  JNZ 0x0e4f42ce
/* 0e4f42bd */  MOV RAX,qword ptr [R15]
/* 0e4f42c0 */  MOV RDI,R15
/* 0e4f42c3 */  CALL qword ptr [RAX + 0x10]
/* 0e4f42c6 */  MOV RDI,R15
/* 0e4f42c9 */  CALL 0x0412c2d0
/* 0e4f42ce */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e4f42d3 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e4f42d9 */  MOVDQA xmmword ptr [RSP + 0x230],XMM1
/* 0e4f42e2 */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4f42eb */  LEA RDI,[RSP + 0x120]
/* 0e4f42f3 */  LEA RSI,[RSP + 0x220]
/* 0e4f42fb */  MOV RDX,RSP
/* 0e4f42fe */  CALL 0x0e693430
/* 0e4f4303 */  MOV EAX,dword ptr [RSP + 0x13c]
/* 0e4f430a */  CMP EAX,0x2
/* 0e4f430d */  JZ 0x0e4f4371
/* 0e4f430f */  CMP EAX,0x1
/* 0e4f4312 */  JZ 0x0e4f433a
/* 0e4f4314 */  TEST EAX,EAX
/* 0e4f4316 */  JNZ 0x0e4f4327
/* 0e4f4318 */  MOV RAX,qword ptr [RSP + 0x130]
/* 0e4f4320 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e4f4327 */  CMP byte ptr [RSP + 0x218],0x0
/* 0e4f432f */  JZ 0x0e4f43c8
/* 0e4f4335 */  JMP 0x0e4f43dd
/* 0e4f433a */  MOV RAX,qword ptr [RSP + 0x130]
/* 0e4f4342 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f4346 */  MOV ECX,dword ptr [RSP + 0x138]
/* 0e4f434d */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4f4351 */  CMP dword ptr [RAX],ECX
/* 0e4f4353 */  JZ 0x0e4f43ba
/* 0e4f4355 */  ADD RAX,0x68
/* 0e4f4359 */  NOP dword ptr [RAX]
/* 0e4f4360 */  MOV RDX,RAX
/* 0e4f4363 */  ADD RAX,0x68
/* 0e4f4367 */  CMP dword ptr [RDX],ECX
/* 0e4f4369 */  JNZ 0x0e4f4360
/* 0e4f436b */  ADD RAX,-0x68
/* 0e4f436f */  JMP 0x0e4f43ba
/* 0e4f4371 */  MOV RAX,qword ptr [RSP + 0x130]
/* 0e4f4379 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f437d */  MOV ECX,dword ptr [RSP + 0x138]
/* 0e4f4384 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4f4388 */  CMP dword ptr [RAX],ECX
/* 0e4f438a */  JZ 0x0e4f439f
/* 0e4f438c */  ADD RAX,0x58
/* 0e4f4390 */  MOV RDX,RAX
/* 0e4f4393 */  ADD RAX,0x58
/* 0e4f4397 */  CMP dword ptr [RDX],ECX
/* 0e4f4399 */  JNZ 0x0e4f4390
/* 0e4f439b */  ADD RAX,-0x58
/* 0e4f439f */  MOV RCX,qword ptr [RSP + 0x128]
/* 0e4f43a7 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f43ab */  JZ 0x0e4f43ba
/* 0e4f43ad */  NOP dword ptr [RAX]
/* 0e4f43b0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4f43b4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f43b8 */  JNZ 0x0e4f43b0
/* 0e4f43ba */  OR byte ptr [RAX + 0x12],0x9
/* 0e4f43be */  CMP byte ptr [RSP + 0x218],0x0
/* 0e4f43c6 */  JNZ 0x0e4f43dd
/* 0e4f43c8 */  LEA RDI,[RSP + 0x120]
/* 0e4f43d0 */  LEA RSI,[RSP + 0x1e0]
/* 0e4f43d8 */  CALL 0x0e6937c0
/* 0e4f43dd */  MOV EBP,dword ptr [RSP + 0x214]
/* 0e4f43e4 */  MOV R15,qword ptr [RSP + 0x1e0]
/* 0e4f43ec */  MOVZX EAX,byte ptr [0x0f75cb58]
/* 0e4f43f3 */  TEST AL,AL
/* 0e4f43f5 */  JZ 0x0e4f7803
/* 0e4f43fb */  LEA R14,[RSP + 0x20c]
/* 0e4f4403 */  MOV RAX,qword ptr [0x0f75cad8]
/* 0e4f440a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f440d */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e4f4411 */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e4f4415 */  SUB RDX,RCX
/* 0e4f4418 */  SHR RDX,0x3
/* 0e4f441c */  MOV ESI,0xffffffff
/* 0e4f4421 */  ADD EDX,ESI
/* 0e4f4423 */  AND EDX,EAX
/* 0e4f4425 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f4429 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e4f442d */  NOP dword ptr [RAX]
/* 0e4f4430 */  MOV RCX,qword ptr [RCX]
/* 0e4f4433 */  CMP RCX,-0x1
/* 0e4f4437 */  JZ 0x0e4f4459
/* 0e4f4439 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f443d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f4441 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f4445 */  JNZ 0x0e4f4430
/* 0e4f4447 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f444b */  CMP RCX,RAX
/* 0e4f444e */  JNZ 0x0e4f4465
/* 0e4f4450 */  LEA RAX,[0xf75cad8]
/* 0e4f4457 */  JMP 0x0e4f4469
/* 0e4f4459 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f445d */  MOV RCX,RAX
/* 0e4f4460 */  CMP RCX,RAX
/* 0e4f4463 */  JZ 0x0e4f4450
/* 0e4f4465 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f4469 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f446d */  MOV R15,qword ptr [RAX + 0x20]
/* 0e4f4471 */  MOV RAX,qword ptr [RAX + 0x28]
/* 0e4f4475 */  CMP R15,RAX
/* 0e4f4478 */  JZ 0x0e4f448e
/* 0e4f447a */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f4480 */  CMP dword ptr [R15],EBP
/* 0e4f4483 */  JZ 0x0e4f448e
/* 0e4f4485 */  ADD R15,0x38
/* 0e4f4489 */  CMP R15,RAX
/* 0e4f448c */  JNZ 0x0e4f4480
/* 0e4f448e */  CMP R15,RAX
/* 0e4f4491 */  JNZ 0x0e4f44ca
/* 0e4f4493 */  LEA RDI,[0x13e0236]
/* 0e4f449a */  LEA RSI,[0x1208bb9]
/* 0e4f44a1 */  LEA RCX,[0x119d818]
/* 0e4f44a8 */  LEA R8,[0x1320c22]
/* 0e4f44af */  MOV EDX,0x326
/* 0e4f44b4 */  XOR EAX,EAX
/* 0e4f44b6 */  CALL 0x0eeddcf0
/* 0e4f44bb */  TEST AL,AL
/* 0e4f44bd */  JZ 0x0e4f44ca
/* 0e4f44bf */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0e4f44ca */  ADD R15,0x8
/* 0e4f44ce */  MOV byte ptr [RSP + 0x120],0x0
/* 0e4f44d6 */  LEA RCX,[RSP + 0x120]
/* 0e4f44de */  MOV RDI,R15
/* 0e4f44e1 */  MOV RSI,R14
/* 0e4f44e4 */  MOV RDX,R14
/* 0e4f44e7 */  CALL 0x05d9c620
/* 0e4f44ec */  MOV RDI,RSP
/* 0e4f44ef */  CALL 0x048b0bc0
/* 0e4f44f4 */  MOVZX EAX,byte ptr [0x0f75cc10]
/* 0e4f44fb */  TEST AL,AL
/* 0e4f44fd */  JZ 0x0e4f742b
/* 0e4f4503 */  MOV RAX,qword ptr [0x0f75cb90]
/* 0e4f450a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f450d */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4f4511 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e4f4515 */  SUB RDX,RCX
/* 0e4f4518 */  SHR RDX,0x3
/* 0e4f451c */  MOV ESI,0xffffffff
/* 0e4f4521 */  ADD EDX,ESI
/* 0e4f4523 */  AND EDX,EAX
/* 0e4f4525 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f4529 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e4f452d */  NOP dword ptr [RAX]
/* 0e4f4530 */  MOV RCX,qword ptr [RCX]
/* 0e4f4533 */  CMP RCX,-0x1
/* 0e4f4537 */  JZ 0x0e4f4562
/* 0e4f4539 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f453d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f4541 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f4545 */  JNZ 0x0e4f4530
/* 0e4f4547 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f454b */  CMP RCX,RAX
/* 0e4f454e */  JNZ 0x0e4f456e
/* 0e4f4550 */  LEA RAX,[0xf75cb90]
/* 0e4f4557 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f455e */  JZ 0x0e4f457b
/* 0e4f4560 */  JMP 0x0e4f45be
/* 0e4f4562 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f4566 */  MOV RCX,RAX
/* 0e4f4569 */  CMP RCX,RAX
/* 0e4f456c */  JZ 0x0e4f4550
/* 0e4f456e */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f4572 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f4579 */  JNZ 0x0e4f45be
/* 0e4f457b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f457f */  TEST RAX,RAX
/* 0e4f4582 */  JZ 0x0e4f45be
/* 0e4f4584 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f4588 */  LEA RDX,[RAX + 0x9]
/* 0e4f458c */  MOV ECX,ESI
/* 0e4f458e */  SHR ECX,0x1
/* 0e4f4590 */  TEST SIL,0x1
/* 0e4f4594 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f4599 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f459e */  LEA RDI,[RSP + 0xe0]
/* 0e4f45a6 */  MOV RSI,RBX
/* 0e4f45a9 */  CALL 0x0e693eb0
/* 0e4f45ae */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f45b6 */  JNZ 0x0e4f514b
/* 0e4f45bc */  JMP 0x0e4f45e8
/* 0e4f45be */  LEA RDX,[0x138b3c5]
/* 0e4f45c5 */  LEA RDI,[RSP + 0xe0]
/* 0e4f45cd */  MOV ECX,0x15
/* 0e4f45d2 */  MOV RSI,RBX
/* 0e4f45d5 */  CALL 0x0e693eb0
/* 0e4f45da */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f45e2 */  JNZ 0x0e4f514b
/* 0e4f45e8 */  LEA RDX,[0x142a5c6]
/* 0e4f45ef */  MOV RDI,RSP
/* 0e4f45f2 */  LEA RSI,[RSP + 0xe0]
/* 0e4f45fa */  MOV ECX,0x4
/* 0e4f45ff */  MOV R8D,0x1
/* 0e4f4605 */  CALL 0x0e694a00
/* 0e4f460a */  LEA RDI,[0xf5463b0]
/* 0e4f4611 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f4618 */  MOV ESI,0x8
/* 0e4f461d */  CALL qword ptr [RAX + 0x10]
/* 0e4f4620 */  MOV R14,RAX
/* 0e4f4623 */  TEST RAX,RAX
/* 0e4f4626 */  JZ 0x0e4f7171
/* 0e4f462c */  LEA RAX,[0xf4c56f0]
/* 0e4f4633 */  MOV qword ptr [R14],RAX
/* 0e4f4636 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f463b */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f4640 */  TEST RDI,RDI
/* 0e4f4643 */  JZ 0x0e4f464b
/* 0e4f4645 */  MOV RAX,qword ptr [RDI]
/* 0e4f4648 */  CALL qword ptr [RAX + 0x8]
/* 0e4f464b */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f4650 */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f4654 */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f465b */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f4667 */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f4672 */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f467e */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f468a */  LEA RAX,[0xe68f1f0]
/* 0e4f4691 */  MOV qword ptr [RSP + 0x148],RAX
/* 0e4f4699 */  LEA RBP,[0x48b06d0]
/* 0e4f46a0 */  MOV qword ptr [RSP + 0x150],RBP
/* 0e4f46a8 */  LEA RAX,[0xe68b470]
/* 0e4f46af */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f46b7 */  LEA RAX,[0xe694fc0]
/* 0e4f46be */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f46c6 */  LEA RAX,[0xe695120]
/* 0e4f46cd */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f46d5 */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f46e0 */  PXOR XMM0,XMM0
/* 0e4f46e4 */  MOVDQU xmmword ptr [RSP + 0x178],XMM0
/* 0e4f46ed */  LEA RSI,[RSP + 0x120]
/* 0e4f46f5 */  CALL 0x048b05a0
/* 0e4f46fa */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f4702 */  TEST R14,R14
/* 0e4f4705 */  JZ 0x0e4f472a
/* 0e4f4707 */  MOV RAX,-0x1
/* 0e4f470e */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f4714 */  TEST RAX,RAX
/* 0e4f4717 */  JNZ 0x0e4f472a
/* 0e4f4719 */  MOV RAX,qword ptr [R14]
/* 0e4f471c */  MOV RDI,R14
/* 0e4f471f */  CALL qword ptr [RAX + 0x10]
/* 0e4f4722 */  MOV RDI,R14
/* 0e4f4725 */  CALL 0x0412c2d0
/* 0e4f472a */  MOV RDI,RSP
/* 0e4f472d */  CALL 0x0e694cc0
/* 0e4f4732 */  LEA RDI,[RSP + 0x18]
/* 0e4f4737 */  MOVZX EAX,byte ptr [RSP + 0x110]
/* 0e4f473f */  MOV byte ptr [RSP + 0x3b0],AL
/* 0e4f4746 */  MOVUPS XMM0,xmmword ptr [RSP + 0xe0]
/* 0e4f474e */  MOVUPS XMM1,xmmword ptr [RSP + 0xf0]
/* 0e4f4756 */  MOVUPS XMM2,xmmword ptr [RSP + 0x100]
/* 0e4f475e */  MOVAPS xmmword ptr [RSP + 0x3a0],XMM2
/* 0e4f4766 */  MOVAPS xmmword ptr [RSP + 0x390],XMM1
/* 0e4f476e */  MOVAPS xmmword ptr [RSP + 0x380],XMM0
/* 0e4f4776 */  CALL 0x048b0bc0
/* 0e4f477b */  MOVAPS XMM0,xmmword ptr [RSP + 0x380]
/* 0e4f4783 */  MOVAPS XMM1,xmmword ptr [RSP + 0x390]
/* 0e4f478b */  MOVAPS XMM2,xmmword ptr [RSP + 0x3a0]
/* 0e4f4793 */  MOVAPS xmmword ptr [RSP + 0x340],XMM0
/* 0e4f479b */  MOVAPS xmmword ptr [RSP + 0x350],XMM1
/* 0e4f47a3 */  MOVAPS xmmword ptr [RSP + 0x360],XMM2
/* 0e4f47ab */  MOV RAX,qword ptr [RSP + 0x3b0]
/* 0e4f47b3 */  MOV qword ptr [RSP + 0x370],RAX
/* 0e4f47bb */  LEA RDX,[0x1220f4f]
/* 0e4f47c2 */  MOV RDI,RSP
/* 0e4f47c5 */  LEA RSI,[RSP + 0x340]
/* 0e4f47cd */  MOV ECX,0x4
/* 0e4f47d2 */  MOV R8D,0x1
/* 0e4f47d8 */  CALL 0x0e694a00
/* 0e4f47dd */  LEA RDI,[0xf5463b0]
/* 0e4f47e4 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f47eb */  MOV ESI,0x8
/* 0e4f47f0 */  CALL qword ptr [RAX + 0x10]
/* 0e4f47f3 */  MOV R14,RAX
/* 0e4f47f6 */  TEST RAX,RAX
/* 0e4f47f9 */  JZ 0x0e4f7182
/* 0e4f47ff */  LEA RAX,[0xef46ce8]
/* 0e4f4806 */  MOV qword ptr [R14],RAX
/* 0e4f4809 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f480e */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f4813 */  TEST RDI,RDI
/* 0e4f4816 */  JZ 0x0e4f481e
/* 0e4f4818 */  MOV RAX,qword ptr [RDI]
/* 0e4f481b */  CALL qword ptr [RAX + 0x8]
/* 0e4f481e */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f4823 */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f4827 */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f482e */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f483a */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f4845 */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f4851 */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f485d */  LEA RAX,[0x490ce30]
/* 0e4f4864 */  MOV qword ptr [RSP + 0x148],RAX
/* 0e4f486c */  MOV qword ptr [RSP + 0x150],RBP
/* 0e4f4874 */  LEA RAX,[0x490cb20]
/* 0e4f487b */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f4883 */  LEA RAX,[0xe695580]
/* 0e4f488a */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f4892 */  LEA RAX,[0xe6956e0]
/* 0e4f4899 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f48a1 */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f48ac */  XORPS XMM0,XMM0
/* 0e4f48af */  MOVUPS xmmword ptr [RSP + 0x178],XMM0
/* 0e4f48b7 */  LEA RSI,[RSP + 0x120]
/* 0e4f48bf */  CALL 0x048b05a0
/* 0e4f48c4 */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f48cc */  TEST R14,R14
/* 0e4f48cf */  JZ 0x0e4f48f4
/* 0e4f48d1 */  MOV RAX,-0x1
/* 0e4f48d8 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f48de */  TEST RAX,RAX
/* 0e4f48e1 */  JNZ 0x0e4f48f4
/* 0e4f48e3 */  MOV RAX,qword ptr [R14]
/* 0e4f48e6 */  MOV RDI,R14
/* 0e4f48e9 */  CALL qword ptr [RAX + 0x10]
/* 0e4f48ec */  MOV RDI,R14
/* 0e4f48ef */  CALL 0x0412c2d0
/* 0e4f48f4 */  MOV RDI,RSP
/* 0e4f48f7 */  CALL 0x0e694cc0
/* 0e4f48fc */  LEA RDI,[RSP + 0x18]
/* 0e4f4901 */  MOVZX EAX,byte ptr [RSP + 0x370]
/* 0e4f4909 */  MOV byte ptr [RSP + 0x330],AL
/* 0e4f4910 */  MOVAPS XMM0,xmmword ptr [RSP + 0x340]
/* 0e4f4918 */  MOVAPS XMM1,xmmword ptr [RSP + 0x350]
/* 0e4f4920 */  MOVAPS XMM2,xmmword ptr [RSP + 0x360]
/* 0e4f4928 */  MOVAPS xmmword ptr [RSP + 0x320],XMM2
/* 0e4f4930 */  MOVAPS xmmword ptr [RSP + 0x310],XMM1
/* 0e4f4938 */  MOVAPS xmmword ptr [RSP + 0x300],XMM0
/* 0e4f4940 */  CALL 0x048b0bc0
/* 0e4f4945 */  MOVAPS XMM0,xmmword ptr [RSP + 0x300]
/* 0e4f494d */  MOVAPS XMM1,xmmword ptr [RSP + 0x310]
/* 0e4f4955 */  MOVAPS XMM2,xmmword ptr [RSP + 0x320]
/* 0e4f495d */  MOVAPS xmmword ptr [RSP + 0x2c0],XMM0
/* 0e4f4965 */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM1
/* 0e4f496d */  MOVAPS xmmword ptr [RSP + 0x2e0],XMM2
/* 0e4f4975 */  MOV RAX,qword ptr [RSP + 0x330]
/* 0e4f497d */  MOV qword ptr [RSP + 0x2f0],RAX
/* 0e4f4985 */  LEA RDX,[0x14dedac]
/* 0e4f498c */  MOV RDI,RSP
/* 0e4f498f */  LEA RSI,[RSP + 0x2c0]
/* 0e4f4997 */  MOV ECX,0xa
/* 0e4f499c */  MOV R8D,0x1
/* 0e4f49a2 */  CALL 0x0e694a00
/* 0e4f49a7 */  LEA RDI,[0xf5463b0]
/* 0e4f49ae */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f49b5 */  MOV ESI,0x8
/* 0e4f49ba */  CALL qword ptr [RAX + 0x10]
/* 0e4f49bd */  MOV R14,RAX
/* 0e4f49c0 */  TEST RAX,RAX
/* 0e4f49c3 */  JZ 0x0e4f7193
/* 0e4f49c9 */  LEA R15,[0xf0c2800]
/* 0e4f49d0 */  MOV qword ptr [R14],R15
/* 0e4f49d3 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f49d8 */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f49dd */  TEST RDI,RDI
/* 0e4f49e0 */  JZ 0x0e4f49e8
/* 0e4f49e2 */  MOV RAX,qword ptr [RDI]
/* 0e4f49e5 */  CALL qword ptr [RAX + 0x8]
/* 0e4f49e8 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f49ed */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f49f1 */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f49f8 */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f4a04 */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f4a0f */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f4a1b */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f4a27 */  LEA R12,[0x72a5d20]
/* 0e4f4a2e */  MOV qword ptr [RSP + 0x148],R12
/* 0e4f4a36 */  MOV qword ptr [RSP + 0x150],RBP
/* 0e4f4a3e */  LEA R13,[0x651ed40]
/* 0e4f4a45 */  MOV qword ptr [RSP + 0x158],R13
/* 0e4f4a4d */  LEA RAX,[0xe6958c0]
/* 0e4f4a54 */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f4a5c */  LEA RAX,[0xe695a20]
/* 0e4f4a63 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f4a6b */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f4a76 */  XORPS XMM0,XMM0
/* 0e4f4a79 */  MOVUPS xmmword ptr [RSP + 0x178],XMM0
/* 0e4f4a81 */  LEA RSI,[RSP + 0x120]
/* 0e4f4a89 */  CALL 0x048b05a0
/* 0e4f4a8e */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f4a96 */  TEST R14,R14
/* 0e4f4a99 */  JZ 0x0e4f4abe
/* 0e4f4a9b */  MOV RAX,-0x1
/* 0e4f4aa2 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f4aa8 */  TEST RAX,RAX
/* 0e4f4aab */  JNZ 0x0e4f4abe
/* 0e4f4aad */  MOV RAX,qword ptr [R14]
/* 0e4f4ab0 */  MOV RDI,R14
/* 0e4f4ab3 */  CALL qword ptr [RAX + 0x10]
/* 0e4f4ab6 */  MOV RDI,R14
/* 0e4f4ab9 */  CALL 0x0412c2d0
/* 0e4f4abe */  MOV RDI,RSP
/* 0e4f4ac1 */  CALL 0x0e694cc0
/* 0e4f4ac6 */  LEA RDI,[RSP + 0x18]
/* 0e4f4acb */  MOVZX EAX,byte ptr [RSP + 0x2f0]
/* 0e4f4ad3 */  MOV byte ptr [RSP + 0x2a0],AL
/* 0e4f4ada */  MOVAPS XMM0,xmmword ptr [RSP + 0x2c0]
/* 0e4f4ae2 */  MOVAPS XMM1,xmmword ptr [RSP + 0x2d0]
/* 0e4f4aea */  MOVAPS XMM2,xmmword ptr [RSP + 0x2e0]
/* 0e4f4af2 */  MOVAPS xmmword ptr [RSP + 0x290],XMM2
/* 0e4f4afa */  MOVAPS xmmword ptr [RSP + 0x280],XMM1
/* 0e4f4b02 */  MOVAPS xmmword ptr [RSP + 0x270],XMM0
/* 0e4f4b0a */  CALL 0x048b0bc0
/* 0e4f4b0f */  MOVAPS XMM0,xmmword ptr [RSP + 0x270]
/* 0e4f4b17 */  MOVAPS XMM1,xmmword ptr [RSP + 0x280]
/* 0e4f4b1f */  MOVDQA XMM2,xmmword ptr [RSP + 0x290]
/* 0e4f4b28 */  MOVAPS xmmword ptr [RSP + 0x220],XMM0
/* 0e4f4b30 */  MOVAPS xmmword ptr [RSP + 0x230],XMM1
/* 0e4f4b38 */  MOVDQA xmmword ptr [RSP + 0x240],XMM2
/* 0e4f4b41 */  MOV RAX,qword ptr [RSP + 0x2a0]
/* 0e4f4b49 */  MOV qword ptr [RSP + 0x250],RAX
/* 0e4f4b51 */  LEA RDX,[0x14738c9]
/* 0e4f4b58 */  MOV RDI,RSP
/* 0e4f4b5b */  LEA RSI,[RSP + 0x220]
/* 0e4f4b63 */  MOV ECX,0x7
/* 0e4f4b68 */  MOV R8D,0x1
/* 0e4f4b6e */  CALL 0x0e694a00
/* 0e4f4b73 */  LEA RDI,[0xf5463b0]
/* 0e4f4b7a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f4b81 */  MOV ESI,0x8
/* 0e4f4b86 */  CALL qword ptr [RAX + 0x10]
/* 0e4f4b89 */  MOV R14,RAX
/* 0e4f4b8c */  TEST RAX,RAX
/* 0e4f4b8f */  JZ 0x0e4f71a4
/* 0e4f4b95 */  MOV qword ptr [R14],R15
/* 0e4f4b98 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f4b9d */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f4ba2 */  TEST RDI,RDI
/* 0e4f4ba5 */  JZ 0x0e4f4bad
/* 0e4f4ba7 */  MOV RAX,qword ptr [RDI]
/* 0e4f4baa */  CALL qword ptr [RAX + 0x8]
/* 0e4f4bad */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f4bb2 */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f4bb6 */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f4bbd */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f4bc9 */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f4bd4 */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f4be0 */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f4bec */  MOV qword ptr [RSP + 0x148],R12
/* 0e4f4bf4 */  MOV qword ptr [RSP + 0x150],RBP
/* 0e4f4bfc */  MOV qword ptr [RSP + 0x158],R13
/* 0e4f4c04 */  LEA RAX,[0xe695c00]
/* 0e4f4c0b */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f4c13 */  LEA RAX,[0xe695d60]
/* 0e4f4c1a */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f4c22 */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f4c2d */  XORPS XMM0,XMM0
/* 0e4f4c30 */  MOVUPS xmmword ptr [RSP + 0x178],XMM0
/* 0e4f4c38 */  LEA RSI,[RSP + 0x120]
/* 0e4f4c40 */  CALL 0x048b05a0
/* 0e4f4c45 */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f4c4d */  TEST R14,R14
/* 0e4f4c50 */  JZ 0x0e4f4c75
/* 0e4f4c52 */  MOV RAX,-0x1
/* 0e4f4c59 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f4c5f */  TEST RAX,RAX
/* 0e4f4c62 */  JNZ 0x0e4f4c75
/* 0e4f4c64 */  MOV RAX,qword ptr [R14]
/* 0e4f4c67 */  MOV RDI,R14
/* 0e4f4c6a */  CALL qword ptr [RAX + 0x10]
/* 0e4f4c6d */  MOV RDI,R14
/* 0e4f4c70 */  CALL 0x0412c2d0
/* 0e4f4c75 */  MOV RDI,RSP
/* 0e4f4c78 */  CALL 0x0e694cc0
/* 0e4f4c7d */  LEA RDI,[RSP + 0x18]
/* 0e4f4c82 */  MOV R12,qword ptr [RSP + 0x220]
/* 0e4f4c8a */  MOVUPS XMM0,xmmword ptr [RSP + 0x228]
/* 0e4f4c92 */  MOVAPS xmmword ptr [RSP + 0x3c0],XMM0
/* 0e4f4c9a */  MOVUPS XMM0,xmmword ptr [RSP + 0x238]
/* 0e4f4ca2 */  MOVAPS xmmword ptr [RSP + 0x3d0],XMM0
/* 0e4f4caa */  MOV R13D,dword ptr [RSP + 0x248]
/* 0e4f4cb2 */  MOV EBP,dword ptr [RSP + 0x24c]
/* 0e4f4cb9 */  MOVZX R14D,byte ptr [RSP + 0x250]
/* 0e4f4cc2 */  CALL 0x048b0bc0
/* 0e4f4cc7 */  MOV dword ptr [RSP + 0x268],0x0
/* 0e4f4cd2 */  MOV word ptr [RSP + 0x26c],0x0
/* 0e4f4cdc */  CMP R13D,0x4
/* 0e4f4ce0 */  JZ 0x0e4f4d7d
/* 0e4f4ce6 */  CMP R13D,0x1
/* 0e4f4cea */  JNZ 0x0e4f4ed2
/* 0e4f4cf0 */  MOVZX EAX,byte ptr [0x0f75cc10]
/* 0e4f4cf7 */  TEST AL,AL
/* 0e4f4cf9 */  JZ 0x0e4f7a80
/* 0e4f4cff */  LEA RDI,[R12 + 0x18]
/* 0e4f4d04 */  MOV RAX,qword ptr [0x0f75cb90]
/* 0e4f4d0b */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f4d0e */  MOV RCX,qword ptr [R12 + 0x18]
/* 0e4f4d13 */  MOV RDX,qword ptr [R12 + 0x20]
/* 0e4f4d18 */  SUB RDX,RCX
/* 0e4f4d1b */  SHR RDX,0x3
/* 0e4f4d1f */  MOV ESI,0xffffffff
/* 0e4f4d24 */  ADD EDX,ESI
/* 0e4f4d26 */  AND EDX,EAX
/* 0e4f4d28 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f4d2c */  MOV RDX,qword ptr [R12 + 0x30]
/* 0e4f4d31 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f4d40 */  MOV RCX,qword ptr [RCX]
/* 0e4f4d43 */  CMP RCX,-0x1
/* 0e4f4d47 */  JZ 0x0e4f4dfd
/* 0e4f4d4d */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f4d51 */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f4d55 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f4d59 */  JNZ 0x0e4f4d40
/* 0e4f4d5b */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e4f4d60 */  CMP RCX,RAX
/* 0e4f4d63 */  MOV byte ptr [RSP + 0xd8],R14B
/* 0e4f4d6b */  JNZ 0x0e4f4e16
/* 0e4f4d71 */  LEA RSI,[0xf75cb90]
/* 0e4f4d78 */  JMP 0x0e4f4e1a
/* 0e4f4d7d */  MOVZX EAX,byte ptr [0x0f75cc10]
/* 0e4f4d84 */  TEST AL,AL
/* 0e4f4d86 */  JZ 0x0e4f7ac4
/* 0e4f4d8c */  LEA RDI,[R12 + 0x18]
/* 0e4f4d91 */  MOV RAX,qword ptr [0x0f75cb90]
/* 0e4f4d98 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f4d9b */  MOV RCX,qword ptr [R12 + 0x18]
/* 0e4f4da0 */  MOV RDX,qword ptr [R12 + 0x20]
/* 0e4f4da5 */  SUB RDX,RCX
/* 0e4f4da8 */  SHR RDX,0x3
/* 0e4f4dac */  MOV ESI,0xffffffff
/* 0e4f4db1 */  ADD EDX,ESI
/* 0e4f4db3 */  AND EDX,EAX
/* 0e4f4db5 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f4db9 */  MOV RDX,qword ptr [R12 + 0x30]
/* 0e4f4dbe */  NOP
/* 0e4f4dc0 */  MOV RCX,qword ptr [RCX]
/* 0e4f4dc3 */  CMP RCX,-0x1
/* 0e4f4dc7 */  JZ 0x0e4f61d4
/* 0e4f4dcd */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f4dd1 */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f4dd5 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f4dd9 */  JNZ 0x0e4f4dc0
/* 0e4f4ddb */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e4f4de0 */  CMP RCX,RAX
/* 0e4f4de3 */  MOV byte ptr [RSP + 0xd8],R14B
/* 0e4f4deb */  JNZ 0x0e4f61ed
/* 0e4f4df1 */  LEA RSI,[0xf75cb90]
/* 0e4f4df8 */  JMP 0x0e4f61f1
/* 0e4f4dfd */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e4f4e02 */  MOV RCX,RAX
/* 0e4f4e05 */  CMP RCX,RAX
/* 0e4f4e08 */  MOV byte ptr [RSP + 0xd8],R14B
/* 0e4f4e10 */  JZ 0x0e4f4d71
/* 0e4f4e16 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4f4e1a */  MOV EDX,EBP
/* 0e4f4e1c */  MOV ECX,0x1
/* 0e4f4e21 */  CALL 0x048b0c90
/* 0e4f4e26 */  TEST RAX,RAX
/* 0e4f4e29 */  JNZ 0x0e4f4e3e
/* 0e4f4e2b */  XORPS XMM0,XMM0
/* 0e4f4e2e */  MOVAPS xmmword ptr [RSP],XMM0
/* 0e4f4e32 */  MOV RDI,RSP
/* 0e4f4e35 */  CALL 0x048b0d20
/* 0e4f4e3a */  MOV RAX,qword ptr [RSP]
/* 0e4f4e3e */  MOV R15,qword ptr [RAX + 0x58]
/* 0e4f4e42 */  LEA RDI,[0xf5463b0]
/* 0e4f4e49 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f4e50 */  MOV ESI,0x40
/* 0e4f4e55 */  CALL qword ptr [RAX + 0x10]
/* 0e4f4e58 */  MOV R14,RAX
/* 0e4f4e5b */  TEST RAX,RAX
/* 0e4f4e5e */  JZ 0x0e4f72d6
/* 0e4f4e64 */  MOV qword ptr [R14 + 0x8],-0x1
/* 0e4f4e6c */  MOV qword ptr [R14 + 0x10],0x0
/* 0e4f4e74 */  MOV byte ptr [R14 + 0x18],0xff
/* 0e4f4e79 */  LEA RAX,[0xf0edc68]
/* 0e4f4e80 */  MOV qword ptr [R14],RAX
/* 0e4f4e83 */  MOVAPS XMM0,xmmword ptr [0x014e4bb0]
/* 0e4f4e8a */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 0e4f4e8f */  MOV qword ptr [R14 + 0x30],0x0
/* 0e4f4e97 */  MOV word ptr [R14 + 0x38],0x0
/* 0e4f4e9e */  MOV EAX,dword ptr [RSP + 0x268]
/* 0e4f4ea5 */  MOV dword ptr [R14 + 0x3a],EAX
/* 0e4f4ea9 */  MOVZX EAX,word ptr [RSP + 0x26c]
/* 0e4f4eb1 */  MOV word ptr [R14 + 0x3e],AX
/* 0e4f4eb6 */  MOV RDI,qword ptr [R15 + 0x8]
/* 0e4f4eba */  MOV qword ptr [R15 + 0x8],R14
/* 0e4f4ebe */  TEST RDI,RDI
/* 0e4f4ec1 */  MOVZX R14D,byte ptr [RSP + 0xd8]
/* 0e4f4eca */  JZ 0x0e4f4ed2
/* 0e4f4ecc */  MOV RAX,qword ptr [RDI]
/* 0e4f4ecf */  CALL qword ptr [RAX + 0x28]
/* 0e4f4ed2 */  MOVDQA XMM0,xmmword ptr [RSP + 0x3c0]
/* 0e4f4edb */  MOVDQA XMM1,xmmword ptr [RSP + 0x3d0]
/* 0e4f4ee4 */  MOVDQU xmmword ptr [RSP + 0x1f8],XMM1
/* 0e4f4eed */  MOVDQU xmmword ptr [RSP + 0x1e8],XMM0
/* 0e4f4ef6 */  MOV qword ptr [RSP + 0x1e0],R12
/* 0e4f4efe */  MOV dword ptr [RSP + 0x208],R13D
/* 0e4f4f06 */  MOV dword ptr [RSP + 0x20c],EBP
/* 0e4f4f0d */  MOV byte ptr [RSP + 0x210],R14B
/* 0e4f4f15 */  MOV EAX,dword ptr [RSP + 0x2f9]
/* 0e4f4f1c */  MOV ECX,dword ptr [RSP + 0x2fc]
/* 0e4f4f23 */  MOV dword ptr [RSP + 0x211],EAX
/* 0e4f4f2a */  MOV dword ptr [RSP + 0x214],ECX
/* 0e4f4f31 */  ADD R12,0x18
/* 0e4f4f35 */  MOV RDI,RSP
/* 0e4f4f38 */  MOV RSI,R12
/* 0e4f4f3b */  CALL 0x0e6944a0
/* 0e4f4f40 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e4f4f44 */  CMP EAX,0x2
/* 0e4f4f47 */  JZ 0x0e4f4fa1
/* 0e4f4f49 */  CMP EAX,0x1
/* 0e4f4f4c */  LEA R15,[0x48b06d0]
/* 0e4f4f53 */  JZ 0x0e4f4f6e
/* 0e4f4f55 */  TEST EAX,EAX
/* 0e4f4f57 */  JNZ 0x0e4f4ffe
/* 0e4f4f5d */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4f4f62 */  OR dword ptr [RAX + 0x18],0x40000
/* 0e4f4f69 */  JMP 0x0e4f4ffe
/* 0e4f4f6e */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4f4f73 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f4f77 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e4f4f7b */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4f4f7f */  CMP dword ptr [RAX],ECX
/* 0e4f4f81 */  JZ 0x0e4f4ffa
/* 0e4f4f83 */  ADD RAX,0x68
/* 0e4f4f87 */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f4f90 */  MOV RDX,RAX
/* 0e4f4f93 */  ADD RAX,0x68
/* 0e4f4f97 */  CMP dword ptr [RDX],ECX
/* 0e4f4f99 */  JNZ 0x0e4f4f90
/* 0e4f4f9b */  ADD RAX,-0x68
/* 0e4f4f9f */  JMP 0x0e4f4ffa
/* 0e4f4fa1 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4f4fa6 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f4faa */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e4f4fae */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4f4fb2 */  CMP dword ptr [RAX],ECX
/* 0e4f4fb4 */  LEA R15,[0x48b06d0]
/* 0e4f4fbb */  JZ 0x0e4f4fdf
/* 0e4f4fbd */  ADD RAX,0x58
/* 0e4f4fc1 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f4fd0 */  MOV RDX,RAX
/* 0e4f4fd3 */  ADD RAX,0x58
/* 0e4f4fd7 */  CMP dword ptr [RDX],ECX
/* 0e4f4fd9 */  JNZ 0x0e4f4fd0
/* 0e4f4fdb */  ADD RAX,-0x58
/* 0e4f4fdf */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e4f4fe4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f4fe8 */  JZ 0x0e4f4ffa
/* 0e4f4fea */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f4ff0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4f4ff4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f4ff8 */  JNZ 0x0e4f4ff0
/* 0e4f4ffa */  OR byte ptr [RAX + 0x12],0x4
/* 0e4f4ffe */  LEA RDX,[0x148f973]
/* 0e4f5005 */  MOV RDI,RSP
/* 0e4f5008 */  LEA RSI,[RSP + 0x1e0]
/* 0e4f5010 */  MOV ECX,0xb
/* 0e4f5015 */  MOV R8D,0x10
/* 0e4f501b */  CALL 0x0e694a00
/* 0e4f5020 */  LEA RDI,[0xf5463b0]
/* 0e4f5027 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f502e */  MOV ESI,0x8
/* 0e4f5033 */  CALL qword ptr [RAX + 0x10]
/* 0e4f5036 */  MOV R14,RAX
/* 0e4f5039 */  TEST RAX,RAX
/* 0e4f503c */  JZ 0x0e4f71b5
/* 0e4f5042 */  LEA RAX,[0xf4c57d0]
/* 0e4f5049 */  MOV qword ptr [R14],RAX
/* 0e4f504c */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f5051 */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f5056 */  TEST RDI,RDI
/* 0e4f5059 */  JZ 0x0e4f5061
/* 0e4f505b */  MOV RAX,qword ptr [RDI]
/* 0e4f505e */  CALL qword ptr [RAX + 0x8]
/* 0e4f5061 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f5066 */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f506a */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f5071 */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f507d */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f5088 */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f5094 */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f50a0 */  LEA RAX,[0xe6936a0]
/* 0e4f50a7 */  MOV qword ptr [RSP + 0x148],RAX
/* 0e4f50af */  MOV qword ptr [RSP + 0x150],R15
/* 0e4f50b7 */  LEA RAX,[0xe68f310]
/* 0e4f50be */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f50c6 */  LEA RAX,[0xe695f40]
/* 0e4f50cd */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f50d5 */  LEA RAX,[0xe6960a0]
/* 0e4f50dc */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f50e4 */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f50ef */  PXOR XMM0,XMM0
/* 0e4f50f3 */  MOVDQU xmmword ptr [RSP + 0x178],XMM0
/* 0e4f50fc */  LEA RSI,[RSP + 0x120]
/* 0e4f5104 */  CALL 0x048b05a0
/* 0e4f5109 */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f5111 */  TEST R14,R14
/* 0e4f5114 */  JZ 0x0e4f5139
/* 0e4f5116 */  MOV RAX,-0x1
/* 0e4f511d */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f5123 */  TEST RAX,RAX
/* 0e4f5126 */  JNZ 0x0e4f5139
/* 0e4f5128 */  MOV RAX,qword ptr [R14]
/* 0e4f512b */  MOV RDI,R14
/* 0e4f512e */  CALL qword ptr [RAX + 0x10]
/* 0e4f5131 */  MOV RDI,R14
/* 0e4f5134 */  CALL 0x0412c2d0
/* 0e4f5139 */  MOV RDI,RSP
/* 0e4f513c */  CALL 0x0e694cc0
/* 0e4f5141 */  LEA RDI,[RSP + 0x18]
/* 0e4f5146 */  CALL 0x048b0bc0
/* 0e4f514b */  LEA RAX,[0x1330767]
/* 0e4f5152 */  MOV qword ptr [RSP + 0xe0],RAX
/* 0e4f515a */  MOV qword ptr [RSP + 0xe8],0xf
/* 0e4f5166 */  LEA RSI,[0x1384326]
/* 0e4f516d */  MOV RDI,RSP
/* 0e4f5170 */  LEA R8,[RSP + 0xe0]
/* 0e4f5178 */  MOV EDX,0xc
/* 0e4f517d */  MOV ECX,0xd
/* 0e4f5182 */  CALL 0x0470d9a0
/* 0e4f5187 */  MOVZX EAX,byte ptr [RSP]
/* 0e4f518b */  MOV ECX,EAX
/* 0e4f518d */  SHR ECX,0x1
/* 0e4f518f */  TEST AL,0x1
/* 0e4f5191 */  LEA RDX,[RSP + 0x1]
/* 0e4f5196 */  CMOVNZ RDX,qword ptr [RSP + 0x10]
/* 0e4f519c */  CMOVNZ RCX,qword ptr [RSP + 0x8]
/* 0e4f51a2 */  MOVZX EAX,byte ptr [0x0f75ccc8]
/* 0e4f51a9 */  TEST AL,AL
/* 0e4f51ab */  JZ 0x0e4f746f
/* 0e4f51b1 */  MOV RAX,qword ptr [0x0f75cc48]
/* 0e4f51b8 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f51bb */  MOV R8,qword ptr [RBX + 0x18]
/* 0e4f51bf */  MOV RSI,qword ptr [RBX + 0x20]
/* 0e4f51c3 */  SUB RSI,R8
/* 0e4f51c6 */  SHR RSI,0x3
/* 0e4f51ca */  MOV EDI,0xffffffff
/* 0e4f51cf */  ADD ESI,EDI
/* 0e4f51d1 */  AND ESI,EAX
/* 0e4f51d3 */  LEA R8,[R8 + RSI*0x8]
/* 0e4f51d7 */  MOV RSI,qword ptr [RBX + 0x30]
/* 0e4f51db */  NOP dword ptr [RAX + RAX*0x1]
/* 0e4f51e0 */  MOV RDI,qword ptr [R8]
/* 0e4f51e3 */  CMP RDI,-0x1
/* 0e4f51e7 */  JZ 0x0e4f5212
/* 0e4f51e9 */  LEA RDI,[RDI + RDI*0x2]
/* 0e4f51ed */  LEA R8,[RSI + RDI*0x8]
/* 0e4f51f1 */  CMP dword ptr [RSI + RDI*0x8 + 0x8],EAX
/* 0e4f51f5 */  JNZ 0x0e4f51e0
/* 0e4f51f7 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f51fb */  CMP R8,RAX
/* 0e4f51fe */  JNZ 0x0e4f521e
/* 0e4f5200 */  LEA RAX,[0xf75cc48]
/* 0e4f5207 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f520e */  JZ 0x0e4f522b
/* 0e4f5210 */  JMP 0x0e4f524e
/* 0e4f5212 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f5216 */  MOV R8,RAX
/* 0e4f5219 */  CMP R8,RAX
/* 0e4f521c */  JZ 0x0e4f5200
/* 0e4f521e */  MOV RAX,qword ptr [R8 + 0x10]
/* 0e4f5222 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f5229 */  JNZ 0x0e4f524e
/* 0e4f522b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f522f */  TEST RAX,RAX
/* 0e4f5232 */  JZ 0x0e4f524e
/* 0e4f5234 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f5238 */  LEA RDX,[RAX + 0x9]
/* 0e4f523c */  MOV ECX,ESI
/* 0e4f523e */  SHR ECX,0x1
/* 0e4f5240 */  TEST SIL,0x1
/* 0e4f5244 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f5249 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f524e */  LEA RDI,[RSP + 0x120]
/* 0e4f5256 */  MOV RSI,RBX
/* 0e4f5259 */  CALL 0x0e696bd0
/* 0e4f525e */  TEST byte ptr [RSP],0x1
/* 0e4f5262 */  JZ 0x0e4f5276
/* 0e4f5264 */  MOV RSI,qword ptr [RSP]
/* 0e4f5268 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0e4f526d */  AND RSI,-0x2
/* 0e4f5271 */  CALL 0x0412a280
/* 0e4f5276 */  CMP byte ptr [RSP + 0x150],0x0
/* 0e4f527e */  JNZ 0x0e4f5c8b
/* 0e4f5284 */  LEA R14,[RSP + 0x2c0]
/* 0e4f528c */  MOV RDI,R14
/* 0e4f528f */  MOV ESI,0xd
/* 0e4f5294 */  CALL 0x04134310
/* 0e4f5299 */  LEA RDX,[0x13a12ea]
/* 0e4f52a0 */  MOV ECX,0xa
/* 0e4f52a5 */  MOV RDI,R14
/* 0e4f52a8 */  XOR ESI,ESI
/* 0e4f52aa */  CALL 0x0412f0e0
/* 0e4f52af */  MOVDQU XMM0,xmmword ptr [RAX]
/* 0e4f52b3 */  MOVDQA xmmword ptr [RSP + 0x2b0],XMM0
/* 0e4f52bc */  MOV R12,qword ptr [RAX]
/* 0e4f52bf */  MOV RCX,qword ptr [RAX + 0x10]
/* 0e4f52c3 */  MOV qword ptr [RSP + 0xd8],RCX
/* 0e4f52cb */  PXOR XMM0,XMM0
/* 0e4f52cf */  MOVDQU xmmword ptr [RAX],XMM0
/* 0e4f52d3 */  MOV qword ptr [RAX + 0x10],0x0
/* 0e4f52db */  MOV R15,qword ptr [RSP + 0x120]
/* 0e4f52e3 */  MOVZX EAX,byte ptr [0x0f75ccc8]
/* 0e4f52ea */  TEST AL,AL
/* 0e4f52ec */  JZ 0x0e4f7847
/* 0e4f52f2 */  MOV R13,R12
/* 0e4f52f5 */  AND R13,-0x100
/* 0e4f52fc */  LEA R14,[R15 + 0x18]
/* 0e4f5300 */  MOV RAX,qword ptr [0x0f75cc48]
/* 0e4f5307 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f530a */  MOV RCX,qword ptr [R15 + 0x18]
/* 0e4f530e */  MOV RDX,qword ptr [R15 + 0x20]
/* 0e4f5312 */  SUB RDX,RCX
/* 0e4f5315 */  SHR RDX,0x3
/* 0e4f5319 */  MOV ESI,0xffffffff
/* 0e4f531e */  ADD EDX,ESI
/* 0e4f5320 */  AND EDX,EAX
/* 0e4f5322 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f5326 */  MOV RDX,qword ptr [R15 + 0x30]
/* 0e4f532a */  NOP word ptr [RAX + RAX*0x1]
/* 0e4f5330 */  MOV RCX,qword ptr [RCX]
/* 0e4f5333 */  CMP RCX,-0x1
/* 0e4f5337 */  JZ 0x0e4f5359
/* 0e4f5339 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f533d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f5341 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f5345 */  JNZ 0x0e4f5330
/* 0e4f5347 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f534b */  CMP RCX,RAX
/* 0e4f534e */  JNZ 0x0e4f5365
/* 0e4f5350 */  LEA RSI,[0xf75cc48]
/* 0e4f5357 */  JMP 0x0e4f5369
/* 0e4f5359 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e4f535d */  MOV RCX,RAX
/* 0e4f5360 */  CMP RCX,RAX
/* 0e4f5363 */  JZ 0x0e4f5350
/* 0e4f5365 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4f5369 */  MOV RCX,qword ptr [RSP + 0x120]
/* 0e4f5371 */  MOV RAX,qword ptr [RCX + 0x50]
/* 0e4f5375 */  MOV RCX,qword ptr [RCX + 0x58]
/* 0e4f5379 */  CMP RAX,RCX
/* 0e4f537c */  JZ 0x0e4f5435
/* 0e4f5382 */  MOV RDX,0x6863735f6e6f736a
/* 0e4f538c */  MOV RDI,0x3a6c61657265635b
/* 0e4f5396 */  MOV R8,0x5d79747265706f72
/* 0e4f53a0 */  MOV R9,0x705f616d65686373
/* 0e4f53aa */  MOVQ XMM0,RDI
/* 0e4f53af */  MOVQ XMM1,RDX
/* 0e4f53b4 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4f53b8 */  MOVQ XMM1,R9
/* 0e4f53bd */  MOVQ XMM2,R8
/* 0e4f53c2 */  PUNPCKLQDQ XMM1,XMM2
/* 0e4f53c6 */  JMP 0x0e4f53fe
/* 0e4f53d0 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4f53d4 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4f53d8 */  PCMPEQB XMM2,XMM0
/* 0e4f53dc */  MOVDQU XMM3,xmmword ptr [RDX + 0xd]
/* 0e4f53e1 */  PCMPEQB XMM3,XMM1
/* 0e4f53e5 */  PAND XMM3,XMM2
/* 0e4f53e9 */  PMOVMSKB EDX,XMM3
/* 0e4f53ed */  CMP EDX,0xffff
/* 0e4f53f3 */  JZ 0x0e4f5435
/* 0e4f53f5 */  ADD RAX,0x38
/* 0e4f53f9 */  CMP RAX,RCX
/* 0e4f53fc */  JZ 0x0e4f5435
/* 0e4f53fe */  MOVZX EDX,byte ptr [RAX]
/* 0e4f5401 */  TEST DL,0x1
/* 0e4f5404 */  JZ 0x0e4f5420
/* 0e4f5406 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4f540a */  CMP RDI,0x1d
/* 0e4f540e */  JNZ 0x0e4f53f5
/* 0e4f5410 */  JMP 0x0e4f542a
/* 0e4f5420 */  MOV EDI,EDX
/* 0e4f5422 */  SHR EDI,0x1
/* 0e4f5424 */  CMP RDI,0x1d
/* 0e4f5428 */  JNZ 0x0e4f53f5
/* 0e4f542a */  TEST DL,0x1
/* 0e4f542d */  JNZ 0x0e4f53d0
/* 0e4f542f */  LEA RDX,[RAX + 0x1]
/* 0e4f5433 */  JMP 0x0e4f53d4
/* 0e4f5435 */  CMP RAX,RCX
/* 0e4f5438 */  JZ 0x0e4f5458
/* 0e4f543a */  MOV EBP,dword ptr [RAX + 0x1c]
/* 0e4f543d */  MOVZX EAX,byte ptr [0x0f550768]
/* 0e4f5444 */  TEST AL,AL
/* 0e4f5446 */  JZ 0x0e4f7995
/* 0e4f544c */  CMP EBP,dword ptr [0x0f550754]
/* 0e4f5452 */  JNZ 0x0e4f56f1
/* 0e4f5458 */  CMP dword ptr [RSP + 0x148],0x0
/* 0e4f5460 */  JZ 0x0e4f54bf
/* 0e4f5462 */  MOV EBP,dword ptr [RSP + 0x14c]
/* 0e4f5469 */  TEST RSI,RSI
/* 0e4f546c */  JNZ 0x0e4f5479
/* 0e4f546e */  MOV RDI,R14
/* 0e4f5471 */  CALL 0x048aead0
/* 0e4f5476 */  MOV RSI,RAX
/* 0e4f5479 */  MOV RDI,R14
/* 0e4f547c */  MOV EDX,EBP
/* 0e4f547e */  MOV ECX,0x1
/* 0e4f5483 */  CALL 0x048b0c90
/* 0e4f5488 */  TEST RAX,RAX
/* 0e4f548b */  JNZ 0x0e4f54a7
/* 0e4f548d */  PXOR XMM0,XMM0
/* 0e4f5491 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f5496 */  MOV RDI,RSP
/* 0e4f5499 */  CALL 0x048b0d20
/* 0e4f549e */  MOV RAX,qword ptr [RSP]
/* 0e4f54a2 */  TEST RAX,RAX
/* 0e4f54a5 */  JZ 0x0e4f54dc
/* 0e4f54a7 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4f54ae */  JNZ 0x0e4f54dc
/* 0e4f54b0 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4f54b4 */  TEST R14,R14
/* 0e4f54b7 */  JZ 0x0e4f54dc
/* 0e4f54b9 */  ADD R14,0x40
/* 0e4f54bd */  JMP 0x0e4f54df
/* 0e4f54bf */  TEST RSI,RSI
/* 0e4f54c2 */  JZ 0x0e4f54dc
/* 0e4f54c4 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4f54cb */  JNZ 0x0e4f54dc
/* 0e4f54cd */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4f54d1 */  TEST R14,R14
/* 0e4f54d4 */  JZ 0x0e4f54dc
/* 0e4f54d6 */  ADD R14,0x38
/* 0e4f54da */  JMP 0x0e4f54df
/* 0e4f54dc */  XOR R14D,R14D
/* 0e4f54df */  MOV qword ptr [RSP + 0x220],0x0
/* 0e4f54eb */  LEA R15,[0x48b4ab0]
/* 0e4f54f2 */  MOV qword ptr [RSP + 0x230],R15
/* 0e4f54fa */  MOV dword ptr [RSP + 0x240],0xd33bd9c5
/* 0e4f5505 */  LEA R12,[0x48b49f0]
/* 0e4f550c */  MOV qword ptr [RSP + 0x238],R12
/* 0e4f5514 */  MOV byte ptr [RSP + 0x244],0x1
/* 0e4f551c */  LEA RDI,[0xf5463b0]
/* 0e4f5523 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f552a */  MOV ESI,0x38
/* 0e4f552f */  CALL qword ptr [RAX + 0x10]
/* 0e4f5532 */  MOV R13,RAX
/* 0e4f5535 */  TEST RAX,RAX
/* 0e4f5538 */  JZ 0x0e4f7281
/* 0e4f553e */  MOVDQA XMM0,xmmword ptr [RSP + 0x2b0]
/* 0e4f5547 */  MOVDQU xmmword ptr [R13],XMM0
/* 0e4f554d */  MOV RAX,qword ptr [RSP + 0xd8]
/* 0e4f5555 */  MOV qword ptr [R13 + 0x10],RAX
/* 0e4f5559 */  MOV word ptr [R13 + 0x18],0x400
/* 0e4f5560 */  PXOR XMM0,XMM0
/* 0e4f5564 */  MOVDQU xmmword ptr [R13 + 0x20],XMM0
/* 0e4f556a */  MOV qword ptr [R13 + 0x30],0x0
/* 0e4f5572 */  LEA RBP,[0x48b46e0]
/* 0e4f5579 */  MOV qword ptr [RSP],RBP
/* 0e4f557d */  MOV qword ptr [RSP + 0x18],R15
/* 0e4f5582 */  MOV qword ptr [RSP + 0x20],R12
/* 0e4f5587 */  MOV dword ptr [RSP + 0x28],0xd33bd9c5
/* 0e4f558f */  MOV byte ptr [RSP + 0x2c],0x1
/* 0e4f5594 */  MOV qword ptr [RSP + 0x220],0x0
/* 0e4f55a0 */  MOV qword ptr [RSP + 0x8],R13
/* 0e4f55a5 */  LEA RDI,[0xf5463b0]
/* 0e4f55ac */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f55b3 */  MOV ESI,0x20
/* 0e4f55b8 */  CALL qword ptr [RAX + 0x10]
/* 0e4f55bb */  MOV R15,RAX
/* 0e4f55be */  TEST RAX,RAX
/* 0e4f55c1 */  JZ 0x0e4f7292
/* 0e4f55c7 */  MOV qword ptr [RSP + 0x280],R15
/* 0e4f55cf */  MOV qword ptr [RSP + 0x270],0x21
/* 0e4f55db */  MOV qword ptr [RSP + 0x278],0x1d
/* 0e4f55e7 */  MOVUPS XMM0,xmmword ptr [0x014d9876]
/* 0e4f55ee */  MOVUPS xmmword ptr [R15 + 0xd],XMM0
/* 0e4f55f3 */  MOVDQU XMM0,xmmword ptr [0x014d9869]
/* 0e4f55fb */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4f5600 */  MOV byte ptr [R15 + 0x1d],0x0
/* 0e4f5605 */  LEA RSI,[RSP + 0x270]
/* 0e4f560d */  MOV RDI,R14
/* 0e4f5610 */  CALL 0x048b5060
/* 0e4f5615 */  MOV R15,RAX
/* 0e4f5618 */  LEA R14,[RSP + 0x8]
/* 0e4f561d */  ADD RAX,0x20
/* 0e4f5621 */  MOV qword ptr [R15 + 0x20],RBP
/* 0e4f5625 */  MOV RCX,RSP
/* 0e4f5628 */  CMP RAX,RCX
/* 0e4f562b */  JZ 0x0e4f5695
/* 0e4f562d */  MOV R13,R15
/* 0e4f5630 */  ADD R13,0x28
/* 0e4f5634 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4f5638 */  TEST RAX,RAX
/* 0e4f563b */  JZ 0x0e4f5661
/* 0e4f563d */  MOV RDI,R13
/* 0e4f5640 */  CALL RAX
/* 0e4f5642 */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4f5647 */  TEST EAX,EAX
/* 0e4f5649 */  JZ 0x0e4f5673
/* 0e4f564b */  CMP EAX,0x2
/* 0e4f564e */  JNZ 0x0e4f5661
/* 0e4f5650 */  MOV EDI,0x5
/* 0e4f5655 */  MOV RSI,R14
/* 0e4f5658 */  MOV RDX,R13
/* 0e4f565b */  CALL qword ptr [RSP + 0x18]
/* 0e4f565f */  JMP 0x0e4f5673
/* 0e4f5661 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0e4f5666 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f566f */  MOV qword ptr [R13],RAX
/* 0e4f5673 */  MOV R12,qword ptr [RSP + 0x20]
/* 0e4f5678 */  MOVDQU XMM0,xmmword ptr [RSP + 0x18]
/* 0e4f567e */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4f5684 */  MOV EAX,dword ptr [RSP + 0x28]
/* 0e4f5688 */  MOV dword ptr [R15 + 0x48],EAX
/* 0e4f568c */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4f5691 */  MOV byte ptr [R15 + 0x4c],AL
/* 0e4f5695 */  TEST byte ptr [RSP + 0x270],0x1
/* 0e4f569d */  JZ 0x0e4f56bd
/* 0e4f569f */  MOV RSI,qword ptr [RSP + 0x270]
/* 0e4f56a7 */  MOV RDI,qword ptr [RSP + 0x280]
/* 0e4f56af */  AND RSI,-0x2
/* 0e4f56b3 */  CALL 0x0412a280
/* 0e4f56b8 */  MOV R12,qword ptr [RSP + 0x20]
/* 0e4f56bd */  TEST R12,R12
/* 0e4f56c0 */  JZ 0x0e4f56c8
/* 0e4f56c2 */  MOV RDI,R14
/* 0e4f56c5 */  CALL R12
/* 0e4f56c8 */  MOV RAX,qword ptr [RSP + 0x238]
/* 0e4f56d0 */  TEST RAX,RAX
/* 0e4f56d3 */  JZ 0x0e4f56df
/* 0e4f56d5 */  LEA RDI,[RSP + 0x220]
/* 0e4f56dd */  CALL RAX
/* 0e4f56df */  MOV qword ptr [RSP + 0xd8],0x0
/* 0e4f56eb */  XOR R13D,R13D
/* 0e4f56ee */  XOR R12D,R12D
/* 0e4f56f1 */  MOVUPS XMM0,xmmword ptr [RSP + 0x120]
/* 0e4f56f9 */  MOVUPS XMM1,xmmword ptr [RSP + 0x130]
/* 0e4f5701 */  MOVDQU XMM2,xmmword ptr [RSP + 0x140]
/* 0e4f570a */  MOVDQA xmmword ptr [RSP + 0x200],XMM2
/* 0e4f5713 */  MOV RAX,qword ptr [RSP + 0x150]
/* 0e4f571b */  MOV qword ptr [RSP + 0x210],RAX
/* 0e4f5723 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM1
/* 0e4f572b */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f5733 */  MOV RAX,0x1e1bc4d500000004
/* 0e4f573d */  MOV qword ptr [RSP + 0x208],RAX
/* 0e4f5745 */  MOVZX EAX,byte ptr [0x0f75cce8]
/* 0e4f574c */  TEST AL,AL
/* 0e4f574e */  JZ 0x0e4f788b
/* 0e4f5754 */  LEA RBP,[RSP + 0x1e8]
/* 0e4f575c */  MOV EAX,dword ptr [RSP + 0x20c]
/* 0e4f5763 */  MOV dword ptr [RSP],EAX
/* 0e4f5766 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f576f */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4f5777 */  MOV qword ptr [RSP + 0x18],0x3
/* 0e4f5780 */  LEA RAX,[0x48aead0]
/* 0e4f5787 */  MOV qword ptr [RSP + 0x20],RAX
/* 0e4f578c */  LEA RAX,[0xc0f6d10]
/* 0e4f5793 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4f5798 */  LEA RAX,[0xe6978b0]
/* 0e4f579f */  MOV qword ptr [RSP + 0x30],RAX
/* 0e4f57a4 */  MOV qword ptr [RSP + 0x38],0x0
/* 0e4f57ad */  MOV dword ptr [RSP + 0x40],0x0
/* 0e4f57b5 */  XORPS XMM0,XMM0
/* 0e4f57b8 */  MOVUPS xmmword ptr [RSP + 0x48],XMM0
/* 0e4f57bd */  MOV RSI,RSP
/* 0e4f57c0 */  MOV RDI,RBP
/* 0e4f57c3 */  CALL 0x049057f0
/* 0e4f57c8 */  MOV RDI,RSP
/* 0e4f57cb */  CALL 0x048aea50
/* 0e4f57d0 */  MOVUPS XMM0,xmmword ptr [RBP]
/* 0e4f57d4 */  MOVUPS XMM1,xmmword ptr [RBP + 0x10]
/* 0e4f57d8 */  MOVAPS xmmword ptr [RSP + 0x230],XMM1
/* 0e4f57e0 */  MOVAPS xmmword ptr [RSP + 0x220],XMM0
/* 0e4f57e8 */  LEA RDI,[0xf5463b0]
/* 0e4f57ef */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f57f6 */  MOV ESI,0x8
/* 0e4f57fb */  CALL qword ptr [RAX + 0x10]
/* 0e4f57fe */  MOV R14,RAX
/* 0e4f5801 */  TEST RAX,RAX
/* 0e4f5804 */  JZ 0x0e4f71c6
/* 0e4f580a */  LEA R15,[0xef44b00]
/* 0e4f5811 */  MOV qword ptr [R14],R15
/* 0e4f5814 */  MOV qword ptr [RSP + 0x270],R14
/* 0e4f581c */  MOV qword ptr [RSP + 0x278],0x0
/* 0e4f5828 */  MOV byte ptr [RSP + 0x280],0xff
/* 0e4f5830 */  MOV RDI,RSP
/* 0e4f5833 */  LEA RSI,[RSP + 0x220]
/* 0e4f583b */  LEA RDX,[RSP + 0x270]
/* 0e4f5843 */  CALL 0x0e697730
/* 0e4f5848 */  MOV RDI,qword ptr [RSP + 0x278]
/* 0e4f5850 */  TEST RDI,RDI
/* 0e4f5853 */  JZ 0x0e4f585b
/* 0e4f5855 */  MOV RAX,qword ptr [RDI]
/* 0e4f5858 */  CALL qword ptr [RAX + 0x28]
/* 0e4f585b */  MOV RDI,qword ptr [RSP + 0x270]
/* 0e4f5863 */  TEST RDI,RDI
/* 0e4f5866 */  JZ 0x0e4f586e
/* 0e4f5868 */  MOV RAX,qword ptr [RDI]
/* 0e4f586b */  CALL qword ptr [RAX + 0x8]
/* 0e4f586e */  MOVZX EAX,byte ptr [0x0f75cce8]
/* 0e4f5875 */  TEST AL,AL
/* 0e4f5877 */  JZ 0x0e4f78b5
/* 0e4f587d */  MOV EAX,dword ptr [RSP + 0x204]
/* 0e4f5884 */  CMP EAX,0x2
/* 0e4f5887 */  JZ 0x0e4f58e1
/* 0e4f5889 */  CMP EAX,0x1
/* 0e4f588c */  JZ 0x0e4f58aa
/* 0e4f588e */  TEST EAX,EAX
/* 0e4f5890 */  JNZ 0x0e4f592e
/* 0e4f5896 */  MOV RAX,qword ptr [RSP + 0x1f8]
/* 0e4f589e */  OR dword ptr [RAX + 0x18],0x20000
/* 0e4f58a5 */  JMP 0x0e4f592e
/* 0e4f58aa */  MOV RAX,qword ptr [RSP + 0x1f8]
/* 0e4f58b2 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f58b6 */  MOV ECX,dword ptr [RSP + 0x200]
/* 0e4f58bd */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4f58c1 */  CMP dword ptr [RAX],ECX
/* 0e4f58c3 */  JZ 0x0e4f592a
/* 0e4f58c5 */  ADD RAX,0x68
/* 0e4f58c9 */  NOP dword ptr [RAX]
/* 0e4f58d0 */  MOV RDX,RAX
/* 0e4f58d3 */  ADD RAX,0x68
/* 0e4f58d7 */  CMP dword ptr [RDX],ECX
/* 0e4f58d9 */  JNZ 0x0e4f58d0
/* 0e4f58db */  ADD RAX,-0x68
/* 0e4f58df */  JMP 0x0e4f592a
/* 0e4f58e1 */  MOV RAX,qword ptr [RSP + 0x1f8]
/* 0e4f58e9 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4f58ed */  MOV ECX,dword ptr [RSP + 0x200]
/* 0e4f58f4 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4f58f8 */  CMP dword ptr [RAX],ECX
/* 0e4f58fa */  JZ 0x0e4f590f
/* 0e4f58fc */  ADD RAX,0x58
/* 0e4f5900 */  MOV RDX,RAX
/* 0e4f5903 */  ADD RAX,0x58
/* 0e4f5907 */  CMP dword ptr [RDX],ECX
/* 0e4f5909 */  JNZ 0x0e4f5900
/* 0e4f590b */  ADD RAX,-0x58
/* 0e4f590f */  MOV RCX,qword ptr [RSP + 0x1f0]
/* 0e4f5917 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f591b */  JZ 0x0e4f592a
/* 0e4f591d */  NOP dword ptr [RAX]
/* 0e4f5920 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4f5924 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4f5928 */  JNZ 0x0e4f5920
/* 0e4f592a */  OR byte ptr [RAX + 0x12],0x2
/* 0e4f592e */  MOVZX EAX,byte ptr [0x0f75cce8]
/* 0e4f5935 */  TEST AL,AL
/* 0e4f5937 */  JZ 0x0e4f78df
/* 0e4f593d */  MOV dword ptr [RSP],0xbf75c8f8
/* 0e4f5944 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f594d */  MOV dword ptr [RSP + 0x10],0x1
/* 0e4f5955 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4f595e */  LEA RAX,[0x48b2190]
/* 0e4f5965 */  MOV qword ptr [RSP + 0x20],RAX
/* 0e4f596a */  LEA RAX,[0x48b06d0]
/* 0e4f5971 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4f5976 */  LEA RAX,[0xe698480]
/* 0e4f597d */  MOV qword ptr [RSP + 0x30],RAX
/* 0e4f5982 */  MOV qword ptr [RSP + 0x38],0x0
/* 0e4f598b */  MOV dword ptr [RSP + 0x40],0x0
/* 0e4f5993 */  XORPS XMM0,XMM0
/* 0e4f5996 */  MOVUPS xmmword ptr [RSP + 0x48],XMM0
/* 0e4f599b */  MOV RSI,RSP
/* 0e4f599e */  MOV RDI,RBP
/* 0e4f59a1 */  CALL 0x049057f0
/* 0e4f59a6 */  MOV RDI,RSP
/* 0e4f59a9 */  CALL 0x048aea50
/* 0e4f59ae */  MOVDQU XMM0,xmmword ptr [RBP]
/* 0e4f59b3 */  MOVDQU XMM1,xmmword ptr [RBP + 0x10]
/* 0e4f59b8 */  MOVDQA xmmword ptr [RSP + 0x230],XMM1
/* 0e4f59c1 */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4f59ca */  LEA RDI,[0xf5463b0]
/* 0e4f59d1 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f59d8 */  MOV ESI,0x8
/* 0e4f59dd */  CALL qword ptr [RAX + 0x10]
/* 0e4f59e0 */  MOV R14,RAX
/* 0e4f59e3 */  TEST RAX,RAX
/* 0e4f59e6 */  JZ 0x0e4f71e8
/* 0e4f59ec */  MOV qword ptr [R14],R15
/* 0e4f59ef */  MOVZX EAX,byte ptr [0x0f551cb0]
/* 0e4f59f6 */  TEST AL,AL
/* 0e4f59f8 */  JZ 0x0e4f7909
/* 0e4f59fe */  MOV EAX,dword ptr [0x0f551c9c]
/* 0e4f5a04 */  MOV dword ptr [RSP],EAX
/* 0e4f5a07 */  LEA RDI,[0xf5463b0]
/* 0e4f5a0e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f5a15 */  MOV ESI,0x28
/* 0e4f5a1a */  CALL qword ptr [RAX + 0x10]
/* 0e4f5a1d */  MOV RBP,RAX
/* 0e4f5a20 */  TEST RAX,RAX
/* 0e4f5a23 */  JZ 0x0e4f71f9
/* 0e4f5a29 */  PXOR XMM0,XMM0
/* 0e4f5a2d */  MOVDQU xmmword ptr [RBP + 0x8],XMM0
/* 0e4f5a32 */  LEA RAX,[0xef46c98]
/* 0e4f5a39 */  MOV qword ptr [RBP],RAX
/* 0e4f5a3d */  MOV RAX,RBP
/* 0e4f5a40 */  ADD RAX,0x18
/* 0e4f5a44 */  MOV qword ptr [RBP + 0x18],R14
/* 0e4f5a48 */  MOV byte ptr [RBP + 0x20],0xff
/* 0e4f5a4c */  MOV qword ptr [RSP + 0x8],RAX
/* 0e4f5a51 */  MOV qword ptr [RSP + 0x10],RBP
/* 0e4f5a56 */  MOVDQA xmmword ptr [RSP + 0x270],XMM0
/* 0e4f5a5f */  LEA RDI,[RSP + 0x220]
/* 0e4f5a67 */  MOV RSI,RSP
/* 0e4f5a6a */  CALL 0x048afd20
/* 0e4f5a6f */  MOV R14,qword ptr [RSP + 0x10]
/* 0e4f5a74 */  TEST R14,R14
/* 0e4f5a77 */  JZ 0x0e4f5a9c
/* 0e4f5a79 */  MOV RAX,-0x1
/* 0e4f5a80 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f5a86 */  TEST RAX,RAX
/* 0e4f5a89 */  JNZ 0x0e4f5a9c
/* 0e4f5a8b */  MOV RAX,qword ptr [R14]
/* 0e4f5a8e */  MOV RDI,R14
/* 0e4f5a91 */  CALL qword ptr [RAX + 0x10]
/* 0e4f5a94 */  MOV RDI,R14
/* 0e4f5a97 */  CALL 0x0412c2d0
/* 0e4f5a9c */  MOV R14,qword ptr [RSP + 0x278]
/* 0e4f5aa4 */  TEST R14,R14
/* 0e4f5aa7 */  JZ 0x0e4f5acc
/* 0e4f5aa9 */  MOV RAX,-0x1
/* 0e4f5ab0 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f5ab6 */  TEST RAX,RAX
/* 0e4f5ab9 */  JNZ 0x0e4f5acc
/* 0e4f5abb */  MOV RAX,qword ptr [R14]
/* 0e4f5abe */  MOV RDI,R14
/* 0e4f5ac1 */  CALL qword ptr [RAX + 0x10]
/* 0e4f5ac4 */  MOV RDI,R14
/* 0e4f5ac7 */  CALL 0x0412c2d0
/* 0e4f5acc */  MOVAPS XMM0,xmmword ptr [RSP + 0x1e0]
/* 0e4f5ad4 */  MOVAPS XMM1,xmmword ptr [RSP + 0x1f0]
/* 0e4f5adc */  MOVDQA XMM2,xmmword ptr [RSP + 0x200]
/* 0e4f5ae5 */  MOVDQA xmmword ptr [RSP + 0x100],XMM2
/* 0e4f5aee */  MOVAPS xmmword ptr [RSP + 0xe0],XMM0
/* 0e4f5af6 */  MOVAPS xmmword ptr [RSP + 0xf0],XMM1
/* 0e4f5afe */  MOV RAX,qword ptr [RSP + 0x210]
/* 0e4f5b06 */  MOV qword ptr [RSP + 0x110],RAX
/* 0e4f5b0e */  MOV RAX,0x1e1bc4d500000004
/* 0e4f5b18 */  MOV qword ptr [RSP + 0x108],RAX
/* 0e4f5b20 */  MOVZX EAX,byte ptr [0x0f75cce8]
/* 0e4f5b27 */  TEST AL,AL
/* 0e4f5b29 */  JZ 0x0e4f793a
/* 0e4f5b2f */  LEA R14,[RSP + 0xe8]
/* 0e4f5b37 */  MOV EAX,dword ptr [RSP + 0x10c]
/* 0e4f5b3e */  MOV dword ptr [RSP],EAX
/* 0e4f5b41 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f5b4a */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4f5b52 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4f5b5b */  LEA RAX,[0x48aead0]
/* 0e4f5b62 */  MOV qword ptr [RSP + 0x20],RAX
/* 0e4f5b67 */  LEA RAX,[0x4905970]
/* 0e4f5b6e */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4f5b73 */  LEA RAX,[0xe698620]
/* 0e4f5b7a */  MOV qword ptr [RSP + 0x30],RAX
/* 0e4f5b7f */  MOV qword ptr [RSP + 0x38],0x0
/* 0e4f5b88 */  MOV dword ptr [RSP + 0x40],0x0
/* 0e4f5b90 */  XORPS XMM0,XMM0
/* 0e4f5b93 */  MOVUPS xmmword ptr [RSP + 0x48],XMM0
/* 0e4f5b98 */  MOV RSI,RSP
/* 0e4f5b9b */  MOV RDI,R14
/* 0e4f5b9e */  CALL 0x049057f0
/* 0e4f5ba3 */  MOV RDI,RSP
/* 0e4f5ba6 */  CALL 0x048aea50
/* 0e4f5bab */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e4f5bb0 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e4f5bb6 */  MOVDQA xmmword ptr [RSP + 0x230],XMM1
/* 0e4f5bbf */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4f5bc8 */  LEA RDI,[0xf5463b0]
/* 0e4f5bcf */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f5bd6 */  MOV ESI,0x8
/* 0e4f5bdb */  CALL qword ptr [RAX + 0x10]
/* 0e4f5bde */  MOV R14,RAX
/* 0e4f5be1 */  TEST RAX,RAX
/* 0e4f5be4 */  JZ 0x0e4f721b
/* 0e4f5bea */  MOV qword ptr [R14],R15
/* 0e4f5bed */  MOV qword ptr [RSP + 0x270],R14
/* 0e4f5bf5 */  MOV qword ptr [RSP + 0x278],0x0
/* 0e4f5c01 */  MOV byte ptr [RSP + 0x280],0xff
/* 0e4f5c09 */  MOV RDI,RSP
/* 0e4f5c0c */  LEA RSI,[RSP + 0x220]
/* 0e4f5c14 */  LEA RDX,[RSP + 0x270]
/* 0e4f5c1c */  CALL 0x0e697730
/* 0e4f5c21 */  MOV RDI,qword ptr [RSP + 0x278]
/* 0e4f5c29 */  TEST RDI,RDI
/* 0e4f5c2c */  JZ 0x0e4f5c34
/* 0e4f5c2e */  MOV RAX,qword ptr [RDI]
/* 0e4f5c31 */  CALL qword ptr [RAX + 0x28]
/* 0e4f5c34 */  MOV RDI,qword ptr [RSP + 0x270]
/* 0e4f5c3c */  TEST RDI,RDI
/* 0e4f5c3f */  JZ 0x0e4f5c47
/* 0e4f5c41 */  MOV RAX,qword ptr [RDI]
/* 0e4f5c44 */  CALL qword ptr [RAX + 0x8]
/* 0e4f5c47 */  TEST R12B,0x1
/* 0e4f5c4b */  JZ 0x0e4f5c68
/* 0e4f5c4d */  AND R12B,0xfe
/* 0e4f5c51 */  MOVZX EAX,R12B
/* 0e4f5c55 */  OR R13,RAX
/* 0e4f5c58 */  MOV RDI,qword ptr [RSP + 0xd8]
/* 0e4f5c60 */  MOV RSI,R13
/* 0e4f5c63 */  CALL 0x0412a280
/* 0e4f5c68 */  TEST byte ptr [RSP + 0x2c0],0x1
/* 0e4f5c70 */  JZ 0x0e4f5c8b
/* 0e4f5c72 */  MOV RSI,qword ptr [RSP + 0x2c0]
/* 0e4f5c7a */  MOV RDI,qword ptr [RSP + 0x2d0]
/* 0e4f5c82 */  AND RSI,-0x2
/* 0e4f5c86 */  CALL 0x0412a280
/* 0e4f5c8b */  MOVZX EAX,byte ptr [0x0f75cd80]
/* 0e4f5c92 */  TEST AL,AL
/* 0e4f5c94 */  JZ 0x0e4f74c5
/* 0e4f5c9a */  MOV RAX,qword ptr [0x0f75cd00]
/* 0e4f5ca1 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f5ca4 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4f5ca8 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e4f5cac */  SUB RDX,RCX
/* 0e4f5caf */  SHR RDX,0x3
/* 0e4f5cb3 */  MOV ESI,0xffffffff
/* 0e4f5cb8 */  ADD EDX,ESI
/* 0e4f5cba */  AND EDX,EAX
/* 0e4f5cbc */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f5cc0 */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e4f5cc4 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4f5cd0 */  MOV RCX,qword ptr [RCX]
/* 0e4f5cd3 */  CMP RCX,-0x1
/* 0e4f5cd7 */  JZ 0x0e4f5d02
/* 0e4f5cd9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f5cdd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f5ce1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f5ce5 */  JNZ 0x0e4f5cd0
/* 0e4f5ce7 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f5ceb */  CMP RCX,RAX
/* 0e4f5cee */  JNZ 0x0e4f5d0e
/* 0e4f5cf0 */  LEA RAX,[0xf75cd00]
/* 0e4f5cf7 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f5cfe */  JZ 0x0e4f5d1b
/* 0e4f5d00 */  JMP 0x0e4f5d5e
/* 0e4f5d02 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e4f5d06 */  MOV RCX,RAX
/* 0e4f5d09 */  CMP RCX,RAX
/* 0e4f5d0c */  JZ 0x0e4f5cf0
/* 0e4f5d0e */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4f5d12 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f5d19 */  JNZ 0x0e4f5d5e
/* 0e4f5d1b */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f5d1f */  TEST RAX,RAX
/* 0e4f5d22 */  JZ 0x0e4f5d5e
/* 0e4f5d24 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f5d28 */  LEA RDX,[RAX + 0x9]
/* 0e4f5d2c */  MOV ECX,ESI
/* 0e4f5d2e */  SHR ECX,0x1
/* 0e4f5d30 */  TEST SIL,0x1
/* 0e4f5d34 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f5d39 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f5d3e */  LEA RDI,[RSP + 0xe0]
/* 0e4f5d46 */  MOV RSI,RBX
/* 0e4f5d49 */  CALL 0x0e698f20
/* 0e4f5d4e */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f5d56 */  JNZ 0x0e4f64d5
/* 0e4f5d5c */  JMP 0x0e4f5d88
/* 0e4f5d5e */  LEA RDX,[0x142faf5]
/* 0e4f5d65 */  LEA RDI,[RSP + 0xe0]
/* 0e4f5d6d */  MOV ECX,0x9
/* 0e4f5d72 */  MOV RSI,RBX
/* 0e4f5d75 */  CALL 0x0e698f20
/* 0e4f5d7a */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f5d82 */  JNZ 0x0e4f64d5
/* 0e4f5d88 */  LEA RDX,[0x1342884]
/* 0e4f5d8f */  MOV RDI,RSP
/* 0e4f5d92 */  LEA RSI,[RSP + 0xe0]
/* 0e4f5d9a */  MOV ECX,0x9
/* 0e4f5d9f */  CALL 0x0e699a80
/* 0e4f5da4 */  LEA RDI,[0xf5463b0]
/* 0e4f5dab */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f5db2 */  MOV ESI,0x8
/* 0e4f5db7 */  CALL qword ptr [RAX + 0x10]
/* 0e4f5dba */  MOV R14,RAX
/* 0e4f5dbd */  TEST RAX,RAX
/* 0e4f5dc0 */  JZ 0x0e4f71d7
/* 0e4f5dc6 */  LEA RAX,[0xf4c5978]
/* 0e4f5dcd */  MOV qword ptr [R14],RAX
/* 0e4f5dd0 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f5dd5 */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f5dda */  TEST RDI,RDI
/* 0e4f5ddd */  JZ 0x0e4f5de5
/* 0e4f5ddf */  MOV RAX,qword ptr [RDI]
/* 0e4f5de2 */  CALL qword ptr [RAX + 0x8]
/* 0e4f5de5 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f5dea */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f5dee */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f5df5 */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f5e01 */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f5e0c */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f5e18 */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f5e24 */  LEA RAX,[0xe69a260]
/* 0e4f5e2b */  MOV qword ptr [RSP + 0x148],RAX
/* 0e4f5e33 */  LEA R15,[0x48b06d0]
/* 0e4f5e3a */  MOV qword ptr [RSP + 0x150],R15
/* 0e4f5e42 */  LEA RAX,[0xe696510]
/* 0e4f5e49 */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f5e51 */  LEA RAX,[0xe69a320]
/* 0e4f5e58 */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f5e60 */  LEA RAX,[0xe69a4e0]
/* 0e4f5e67 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f5e6f */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f5e7a */  PXOR XMM0,XMM0
/* 0e4f5e7e */  MOVDQU xmmword ptr [RSP + 0x178],XMM0
/* 0e4f5e87 */  LEA RSI,[RSP + 0x120]
/* 0e4f5e8f */  CALL 0x048b05a0
/* 0e4f5e94 */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f5e9c */  TEST R14,R14
/* 0e4f5e9f */  JZ 0x0e4f5ec4
/* 0e4f5ea1 */  MOV RAX,-0x1
/* 0e4f5ea8 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f5eae */  TEST RAX,RAX
/* 0e4f5eb1 */  JNZ 0x0e4f5ec4
/* 0e4f5eb3 */  MOV RAX,qword ptr [R14]
/* 0e4f5eb6 */  MOV RDI,R14
/* 0e4f5eb9 */  CALL qword ptr [RAX + 0x10]
/* 0e4f5ebc */  MOV RDI,R14
/* 0e4f5ebf */  CALL 0x0412c2d0
/* 0e4f5ec4 */  MOV RDI,RSP
/* 0e4f5ec7 */  CALL 0x0e699d30
/* 0e4f5ecc */  LEA RDI,[RSP + 0x18]
/* 0e4f5ed1 */  MOVZX EAX,byte ptr [RSP + 0x110]
/* 0e4f5ed9 */  MOV byte ptr [RSP + 0x250],AL
/* 0e4f5ee0 */  MOVUPS XMM0,xmmword ptr [RSP + 0xe0]
/* 0e4f5ee8 */  MOVUPS XMM1,xmmword ptr [RSP + 0xf0]
/* 0e4f5ef0 */  MOVUPS XMM2,xmmword ptr [RSP + 0x100]
/* 0e4f5ef8 */  MOVAPS xmmword ptr [RSP + 0x240],XMM2
/* 0e4f5f00 */  MOVAPS xmmword ptr [RSP + 0x230],XMM1
/* 0e4f5f08 */  MOVAPS xmmword ptr [RSP + 0x220],XMM0
/* 0e4f5f10 */  CALL 0x048b0bc0
/* 0e4f5f15 */  MOVDQA XMM0,xmmword ptr [RSP + 0x220]
/* 0e4f5f1e */  MOVDQA XMM1,xmmword ptr [RSP + 0x230]
/* 0e4f5f27 */  MOVDQA XMM2,xmmword ptr [RSP + 0x240]
/* 0e4f5f30 */  MOVDQA xmmword ptr [RSP + 0x1e0],XMM0
/* 0e4f5f39 */  MOVDQA xmmword ptr [RSP + 0x1f0],XMM1
/* 0e4f5f42 */  MOVDQA xmmword ptr [RSP + 0x200],XMM2
/* 0e4f5f4b */  MOV RAX,qword ptr [RSP + 0x250]
/* 0e4f5f53 */  MOV qword ptr [RSP + 0x210],RAX
/* 0e4f5f5b */  LEA RDX,[0x123ca5a]
/* 0e4f5f62 */  MOV RDI,RSP
/* 0e4f5f65 */  LEA RSI,[RSP + 0x1e0]
/* 0e4f5f6d */  MOV ECX,0x6
/* 0e4f5f72 */  CALL 0x0e699a80
/* 0e4f5f77 */  LEA RDI,[0xf5463b0]
/* 0e4f5f7e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f5f85 */  MOV ESI,0x8
/* 0e4f5f8a */  CALL qword ptr [RAX + 0x10]
/* 0e4f5f8d */  MOV R14,RAX
/* 0e4f5f90 */  TEST RAX,RAX
/* 0e4f5f93 */  JZ 0x0e4f720a
/* 0e4f5f99 */  LEA RAX,[0xf012438]
/* 0e4f5fa0 */  MOV qword ptr [R14],RAX
/* 0e4f5fa3 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0e4f5fa8 */  MOV qword ptr [RSP + 0x18],R14
/* 0e4f5fad */  TEST RDI,RDI
/* 0e4f5fb0 */  JZ 0x0e4f5fb8
/* 0e4f5fb2 */  MOV RAX,qword ptr [RDI]
/* 0e4f5fb5 */  CALL qword ptr [RAX + 0x8]
/* 0e4f5fb8 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0e4f5fbd */  MOV EAX,dword ptr [RSP + 0x10]
/* 0e4f5fc1 */  MOV dword ptr [RSP + 0x120],EAX
/* 0e4f5fc8 */  MOV qword ptr [RSP + 0x128],0x0
/* 0e4f5fd4 */  MOV dword ptr [RSP + 0x130],0x0
/* 0e4f5fdf */  MOV qword ptr [RSP + 0x138],0x1
/* 0e4f5feb */  MOV qword ptr [RSP + 0x140],0x0
/* 0e4f5ff7 */  LEA RAX,[0x5fc5e00]
/* 0e4f5ffe */  MOV qword ptr [RSP + 0x148],RAX
/* 0e4f6006 */  MOV qword ptr [RSP + 0x150],R15
/* 0e4f600e */  LEA RAX,[0x5dcda00]
/* 0e4f6015 */  MOV qword ptr [RSP + 0x158],RAX
/* 0e4f601d */  LEA RAX,[0xe69a950]
/* 0e4f6024 */  MOV qword ptr [RSP + 0x160],RAX
/* 0e4f602c */  LEA RAX,[0xe69aab0]
/* 0e4f6033 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4f603b */  MOV dword ptr [RSP + 0x170],0x0
/* 0e4f6046 */  PXOR XMM0,XMM0
/* 0e4f604a */  MOVDQU xmmword ptr [RSP + 0x178],XMM0
/* 0e4f6053 */  LEA RSI,[RSP + 0x120]
/* 0e4f605b */  CALL 0x048b05a0
/* 0e4f6060 */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4f6068 */  TEST R14,R14
/* 0e4f606b */  JZ 0x0e4f6090
/* 0e4f606d */  MOV RAX,-0x1
/* 0e4f6074 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4f607a */  TEST RAX,RAX
/* 0e4f607d */  JNZ 0x0e4f6090
/* 0e4f607f */  MOV RAX,qword ptr [R14]
/* 0e4f6082 */  MOV RDI,R14
/* 0e4f6085 */  CALL qword ptr [RAX + 0x10]
/* 0e4f6088 */  MOV RDI,R14
/* 0e4f608b */  CALL 0x0412c2d0
/* 0e4f6090 */  MOV RDI,RSP
/* 0e4f6093 */  CALL 0x0e699d30
/* 0e4f6098 */  LEA RDI,[RSP + 0x18]
/* 0e4f609d */  MOV R14,qword ptr [RSP + 0x1e0]
/* 0e4f60a5 */  MOV R15D,dword ptr [RSP + 0x208]
/* 0e4f60ad */  MOV EBP,dword ptr [RSP + 0x20c]
/* 0e4f60b4 */  CALL 0x048b0bc0
/* 0e4f60b9 */  MOV dword ptr [RSP + 0x260],0x0
/* 0e4f60c4 */  MOV word ptr [RSP + 0x264],0x0
/* 0e4f60ce */  CMP R15D,0x4
/* 0e4f60d2 */  JZ 0x0e4f6154
/* 0e4f60d8 */  CMP R15D,0x1
/* 0e4f60dc */  JNZ 0x0e4f64d5
/* 0e4f60e2 */  MOVZX EAX,byte ptr [0x0f75cd80]
/* 0e4f60e9 */  TEST AL,AL
/* 0e4f60eb */  JZ 0x0e4f7b08
/* 0e4f60f1 */  LEA RDI,[R14 + 0x18]
/* 0e4f60f5 */  MOV RAX,qword ptr [0x0f75cd00]
/* 0e4f60fc */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f60ff */  MOV RCX,qword ptr [R14 + 0x18]
/* 0e4f6103 */  MOV RDX,qword ptr [R14 + 0x20]
/* 0e4f6107 */  SUB RDX,RCX
/* 0e4f610a */  SHR RDX,0x3
/* 0e4f610e */  MOV ESI,0xffffffff
/* 0e4f6113 */  ADD EDX,ESI
/* 0e4f6115 */  AND EDX,EAX
/* 0e4f6117 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f611b */  MOV RDX,qword ptr [R14 + 0x30]
/* 0e4f611f */  NOP
/* 0e4f6120 */  MOV RCX,qword ptr [RCX]
/* 0e4f6123 */  CMP RCX,-0x1
/* 0e4f6127 */  JZ 0x0e4f6222
/* 0e4f612d */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f6131 */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f6135 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f6139 */  JNZ 0x0e4f6120
/* 0e4f613b */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f613f */  CMP RCX,RAX
/* 0e4f6142 */  JNZ 0x0e4f6232
/* 0e4f6148 */  LEA RSI,[0xf75cd00]
/* 0e4f614f */  JMP 0x0e4f6236
/* 0e4f6154 */  MOVZX EAX,byte ptr [0x0f75cd80]
/* 0e4f615b */  TEST AL,AL
/* 0e4f615d */  JZ 0x0e4f7b4c
/* 0e4f6163 */  LEA RDI,[R14 + 0x18]
/* 0e4f6167 */  MOV RAX,qword ptr [0x0f75cd00]
/* 0e4f616e */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4f6171 */  MOV RCX,qword ptr [R14 + 0x18]
/* 0e4f6175 */  MOV RDX,qword ptr [R14 + 0x20]
/* 0e4f6179 */  SUB RDX,RCX
/* 0e4f617c */  SHR RDX,0x3
/* 0e4f6180 */  MOV ESI,0xffffffff
/* 0e4f6185 */  ADD EDX,ESI
/* 0e4f6187 */  AND EDX,EAX
/* 0e4f6189 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4f618d */  MOV RDX,qword ptr [R14 + 0x30]
/* 0e4f6191 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4f61a0 */  MOV RCX,qword ptr [RCX]
/* 0e4f61a3 */  CMP RCX,-0x1
/* 0e4f61a7 */  JZ 0x0e4f6293
/* 0e4f61ad */  LEA RSI,[RCX + RCX*0x2]
/* 0e4f61b1 */  LEA RCX,[RDX + RSI*0x8]
/* 0e4f61b5 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4f61b9 */  JNZ 0x0e4f61a0
/* 0e4f61bb */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f61bf */  CMP RCX,RAX
/* 0e4f61c2 */  JNZ 0x0e4f62a3
/* 0e4f61c8 */  LEA RSI,[0xf75cd00]
/* 0e4f61cf */  JMP 0x0e4f62a7
/* 0e4f61d4 */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e4f61d9 */  MOV RCX,RAX
/* 0e4f61dc */  CMP RCX,RAX
/* 0e4f61df */  MOV byte ptr [RSP + 0xd8],R14B
/* 0e4f61e7 */  JZ 0x0e4f4df1
/* 0e4f61ed */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4f61f1 */  MOV dword ptr [RSP + 0x2b0],EBP
/* 0e4f61f8 */  MOV EDX,EBP
/* 0e4f61fa */  MOV ECX,0x1
/* 0e4f61ff */  CALL 0x048b1040
/* 0e4f6204 */  MOV R14,RAX
/* 0e4f6207 */  TEST RAX,RAX
/* 0e4f620a */  JZ 0x0e4f62d1
/* 0e4f6210 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f6214 */  TEST RAX,RAX
/* 0e4f6217 */  JNZ 0x0e4f6305
/* 0e4f621d */  JMP 0x0e4f62ed
/* 0e4f6222 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f6226 */  MOV RCX,RAX
/* 0e4f6229 */  CMP RCX,RAX
/* 0e4f622c */  JZ 0x0e4f6148
/* 0e4f6232 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4f6236 */  MOV EDX,EBP
/* 0e4f6238 */  MOV ECX,0x1
/* 0e4f623d */  CALL 0x048b0c90
/* 0e4f6242 */  TEST RAX,RAX
/* 0e4f6245 */  JNZ 0x0e4f625c
/* 0e4f6247 */  PXOR XMM0,XMM0
/* 0e4f624b */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f6250 */  MOV RDI,RSP
/* 0e4f6253 */  CALL 0x048b0d20
/* 0e4f6258 */  MOV RAX,qword ptr [RSP]
/* 0e4f625c */  MOV R15,qword ptr [RAX + 0x58]
/* 0e4f6260 */  LEA RDI,[0xf5463b0]
/* 0e4f6267 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f626e */  MOV ESI,0x40
/* 0e4f6273 */  CALL qword ptr [RAX + 0x10]
/* 0e4f6276 */  MOV R14,RAX
/* 0e4f6279 */  TEST RAX,RAX
/* 0e4f627c */  JNZ 0x0e4f646e
/* 0e4f6282 */  MOV EDI,0x40
/* 0e4f6287 */  XOR ESI,ESI
/* 0e4f6289 */  CALL 0x0eec74c0
/* 0e4f628e */  JMP 0x0e4f646e
/* 0e4f6293 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f6297 */  MOV RCX,RAX
/* 0e4f629a */  CMP RCX,RAX
/* 0e4f629d */  JZ 0x0e4f61c8
/* 0e4f62a3 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4f62a7 */  MOV EDX,EBP
/* 0e4f62a9 */  MOV ECX,0x1
/* 0e4f62ae */  CALL 0x048b1040
/* 0e4f62b3 */  MOV R14,RAX
/* 0e4f62b6 */  TEST RAX,RAX
/* 0e4f62b9 */  JZ 0x0e4f63d4
/* 0e4f62bf */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f62c3 */  TEST RAX,RAX
/* 0e4f62c6 */  JNZ 0x0e4f640c
/* 0e4f62cc */  JMP 0x0e4f63f2
/* 0e4f62d1 */  XORPS XMM0,XMM0
/* 0e4f62d4 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0e4f62d8 */  MOV RDI,RSP
/* 0e4f62db */  CALL 0x048b10d0
/* 0e4f62e0 */  MOV R14,qword ptr [RSP]
/* 0e4f62e4 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f62e8 */  TEST RAX,RAX
/* 0e4f62eb */  JNZ 0x0e4f6305
/* 0e4f62ed */  XORPS XMM0,XMM0
/* 0e4f62f0 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0e4f62f4 */  MOV RDI,RSP
/* 0e4f62f7 */  CALL 0x048b10d0
/* 0e4f62fc */  MOV RAX,qword ptr [RSP]
/* 0e4f6300 */  TEST RAX,RAX
/* 0e4f6303 */  JZ 0x0e4f6336
/* 0e4f6305 */  MOV R15,RSP
/* 0e4f6308 */  JMP 0x0e4f6315
/* 0e4f6310 */  TEST RAX,RAX
/* 0e4f6313 */  JZ 0x0e4f6336
/* 0e4f6315 */  MOV R14,RAX
/* 0e4f6318 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4f631c */  TEST RAX,RAX
/* 0e4f631f */  JNZ 0x0e4f6310
/* 0e4f6321 */  XORPS XMM0,XMM0
/* 0e4f6324 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0e4f6328 */  MOV RDI,R15
/* 0e4f632b */  CALL 0x048b10d0
/* 0e4f6330 */  MOV RAX,qword ptr [RSP]
/* 0e4f6334 */  JMP 0x0e4f6310
/* 0e4f6336 */  MOV R15,qword ptr [R14 + 0x48]
/* 0e4f633a */  LEA RDI,[0xf5463b0]
/* 0e4f6341 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f6348 */  MOV ESI,0x40
/* 0e4f634d */  CALL qword ptr [RAX + 0x10]
/* 0e4f6350 */  MOV R14,RAX
/* 0e4f6353 */  TEST RAX,RAX
/* 0e4f6356 */  JZ 0x0e4f72e7
/* 0e4f635c */  MOV qword ptr [R14 + 0x8],-0x1
/* 0e4f6364 */  MOV qword ptr [R14 + 0x10],0x0
/* 0e4f636c */  MOV byte ptr [R14 + 0x18],0xff
/* 0e4f6371 */  LEA RAX,[0xf0edc68]
/* 0e4f6378 */  MOV qword ptr [R14],RAX
/* 0e4f637b */  MOVAPS XMM0,xmmword ptr [0x014e4bb0]
/* 0e4f6382 */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 0e4f6387 */  MOV qword ptr [R14 + 0x30],0x0
/* 0e4f638f */  MOV word ptr [R14 + 0x38],0x0
/* 0e4f6396 */  MOV EAX,dword ptr [RSP + 0x268]
/* 0e4f639d */  MOV dword ptr [R14 + 0x3a],EAX
/* 0e4f63a1 */  MOVZX EAX,word ptr [RSP + 0x26c]
/* 0e4f63a9 */  MOV word ptr [R14 + 0x3e],AX
/* 0e4f63ae */  MOV RDI,qword ptr [R15 + 0x8]
/* 0e4f63b2 */  MOV qword ptr [R15 + 0x8],R14
/* 0e4f63b6 */  TEST RDI,RDI
/* 0e4f63b9 */  MOVZX R14D,byte ptr [RSP + 0xd8]
/* 0e4f63c2 */  MOV EBP,dword ptr [RSP + 0x2b0]
/* 0e4f63c9 */  JNZ 0x0e4f4ecc
/* 0e4f63cf */  JMP 0x0e4f4ed2
/* 0e4f63d4 */  PXOR XMM0,XMM0
/* 0e4f63d8 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f63dd */  MOV RDI,RSP
/* 0e4f63e0 */  CALL 0x048b10d0
/* 0e4f63e5 */  MOV R14,qword ptr [RSP]
/* 0e4f63e9 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4f63ed */  TEST RAX,RAX
/* 0e4f63f0 */  JNZ 0x0e4f640c
/* 0e4f63f2 */  PXOR XMM0,XMM0
/* 0e4f63f6 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f63fb */  MOV RDI,RSP
/* 0e4f63fe */  CALL 0x048b10d0
/* 0e4f6403 */  MOV RAX,qword ptr [RSP]
/* 0e4f6407 */  TEST RAX,RAX
/* 0e4f640a */  JZ 0x0e4f6448
/* 0e4f640c */  MOV R15,RSP
/* 0e4f640f */  JMP 0x0e4f6425
/* 0e4f6420 */  TEST RAX,RAX
/* 0e4f6423 */  JZ 0x0e4f6448
/* 0e4f6425 */  MOV R14,RAX
/* 0e4f6428 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4f642c */  TEST RAX,RAX
/* 0e4f642f */  JNZ 0x0e4f6420
/* 0e4f6431 */  PXOR XMM0,XMM0
/* 0e4f6435 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f643a */  MOV RDI,R15
/* 0e4f643d */  CALL 0x048b10d0
/* 0e4f6442 */  MOV RAX,qword ptr [RSP]
/* 0e4f6446 */  JMP 0x0e4f6420
/* 0e4f6448 */  MOV R15,qword ptr [R14 + 0x48]
/* 0e4f644c */  LEA RDI,[0xf5463b0]
/* 0e4f6453 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f645a */  MOV ESI,0x40
/* 0e4f645f */  CALL qword ptr [RAX + 0x10]
/* 0e4f6462 */  MOV R14,RAX
/* 0e4f6465 */  TEST RAX,RAX
/* 0e4f6468 */  JZ 0x0e4f72f8
/* 0e4f646e */  MOV qword ptr [R14 + 0x8],-0x1
/* 0e4f6476 */  MOV qword ptr [R14 + 0x10],0x0
/* 0e4f647e */  MOV byte ptr [R14 + 0x18],0xff
/* 0e4f6483 */  LEA RAX,[0xf0edc68]
/* 0e4f648a */  MOV qword ptr [R14],RAX
/* 0e4f648d */  MOVDQA XMM0,xmmword ptr [0x014e8100]
/* 0e4f6495 */  MOVDQU xmmword ptr [R14 + 0x20],XMM0
/* 0e4f649b */  MOV qword ptr [R14 + 0x30],0x0
/* 0e4f64a3 */  MOV word ptr [R14 + 0x38],0x0
/* 0e4f64aa */  MOV EAX,dword ptr [RSP + 0x260]
/* 0e4f64b1 */  MOV dword ptr [R14 + 0x3a],EAX
/* 0e4f64b5 */  MOVZX EAX,word ptr [RSP + 0x264]
/* 0e4f64bd */  MOV word ptr [R14 + 0x3e],AX
/* 0e4f64c2 */  MOV RDI,qword ptr [R15 + 0x8]
/* 0e4f64c6 */  MOV qword ptr [R15 + 0x8],R14
/* 0e4f64ca */  TEST RDI,RDI
/* 0e4f64cd */  JZ 0x0e4f64d5
/* 0e4f64cf */  MOV RAX,qword ptr [RDI]
/* 0e4f64d2 */  CALL qword ptr [RAX + 0x28]
/* 0e4f64d5 */  MOV RDI,qword ptr [RSP + 0x2a8]
/* 0e4f64dd */  CALL 0x0d31a0e0
/* 0e4f64e2 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f64e9 */  JNZ 0x0e4f652d
/* 0e4f64eb */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4f64ef */  TEST RAX,RAX
/* 0e4f64f2 */  JZ 0x0e4f652d
/* 0e4f64f4 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4f64f8 */  LEA RDX,[RAX + 0x9]
/* 0e4f64fc */  MOV ECX,ESI
/* 0e4f64fe */  SHR ECX,0x1
/* 0e4f6500 */  TEST SIL,0x1
/* 0e4f6504 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4f6509 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4f650e */  LEA RDI,[RSP + 0xe0]
/* 0e4f6516 */  MOV RSI,RBX
/* 0e4f6519 */  CALL 0x0e69ac90
/* 0e4f651e */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f6526 */  JZ 0x0e4f6557
/* 0e4f6528 */  JMP 0x0e4f70c6
/* 0e4f652d */  LEA RDX,[0x12b87ef]
/* 0e4f6534 */  LEA RDI,[RSP + 0xe0]
/* 0e4f653c */  MOV ECX,0x68
/* 0e4f6541 */  MOV RSI,RBX
/* 0e4f6544 */  CALL 0x0e69ac90
/* 0e4f6549 */  CMP byte ptr [RSP + 0x110],0x0
/* 0e4f6551 */  JNZ 0x0e4f70c6
/* 0e4f6557 */  MOV RBX,qword ptr [RSP + 0xe0]
/* 0e4f655f */  ADD RBX,0x18
/* 0e4f6563 */  MOV RDI,RBX
/* 0e4f6566 */  CALL 0x0d31a0e0
/* 0e4f656b */  MOV RDX,qword ptr [RSP + 0xe0]
/* 0e4f6573 */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e4f6577 */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e4f657b */  CMP RCX,RDX
/* 0e4f657e */  JZ 0x0e4f6606
/* 0e4f6584 */  MOVDQA XMM0,xmmword ptr [0x014e4ff0]
/* 0e4f658c */  MOVDQA XMM1,xmmword ptr [0x014eaba0]
/* 0e4f6594 */  JMP 0x0e4f65ce
/* 0e4f65a0 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4f65a4 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e4f65a8 */  PCMPEQB XMM2,XMM1
/* 0e4f65ac */  MOVDQU XMM3,xmmword ptr [RSI + 0xa]
/* 0e4f65b1 */  PCMPEQB XMM3,XMM0
/* 0e4f65b5 */  PAND XMM3,XMM2
/* 0e4f65b9 */  PMOVMSKB ESI,XMM3
/* 0e4f65bd */  CMP ESI,0xffff
/* 0e4f65c3 */  JZ 0x0e4f6606
/* 0e4f65c5 */  ADD RCX,0x38
/* 0e4f65c9 */  CMP RCX,RDX
/* 0e4f65cc */  JZ 0x0e4f6606
/* 0e4f65ce */  MOVZX ESI,byte ptr [RCX]
/* 0e4f65d1 */  TEST SIL,0x1
/* 0e4f65d5 */  JZ 0x0e4f65f0
/* 0e4f65d7 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e4f65db */  CMP RDI,0x1a
/* 0e4f65df */  JNZ 0x0e4f65c5
/* 0e4f65e1 */  JMP 0x0e4f65fa
/* 0e4f65f0 */  MOV EDI,ESI
/* 0e4f65f2 */  SHR EDI,0x1
/* 0e4f65f4 */  CMP RDI,0x1a
/* 0e4f65f8 */  JNZ 0x0e4f65c5
/* 0e4f65fa */  TEST SIL,0x1
/* 0e4f65fe */  JNZ 0x0e4f65a0
/* 0e4f6600 */  LEA RSI,[RCX + 0x1]
/* 0e4f6604 */  JMP 0x0e4f65a4
/* 0e4f6606 */  CMP RCX,RDX
/* 0e4f6609 */  JZ 0x0e4f6629
/* 0e4f660b */  MOV EBP,dword ptr [RCX + 0x1c]
/* 0e4f660e */  MOVZX ECX,byte ptr [0x0f550ad8]
/* 0e4f6615 */  TEST CL,CL
/* 0e4f6617 */  JZ 0x0e4f79cf
/* 0e4f661d */  CMP EBP,dword ptr [0x0f550ac4]
/* 0e4f6623 */  JNZ 0x0e4f6843
/* 0e4f6629 */  CMP dword ptr [RSP + 0x108],0x0
/* 0e4f6631 */  JZ 0x0e4f6681
/* 0e4f6633 */  MOV EDX,dword ptr [RSP + 0x10c]
/* 0e4f663a */  MOV RDI,RBX
/* 0e4f663d */  MOV RSI,RAX
/* 0e4f6640 */  MOV ECX,0x1
/* 0e4f6645 */  CALL 0x048b0c90
/* 0e4f664a */  TEST RAX,RAX
/* 0e4f664d */  JNZ 0x0e4f6669
/* 0e4f664f */  PXOR XMM0,XMM0
/* 0e4f6653 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f6658 */  MOV RDI,RSP
/* 0e4f665b */  CALL 0x048b0d20
/* 0e4f6660 */  MOV RAX,qword ptr [RSP]
/* 0e4f6664 */  TEST RAX,RAX
/* 0e4f6667 */  JZ 0x0e4f6699
/* 0e4f6669 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4f6670 */  JNZ 0x0e4f6699
/* 0e4f6672 */  MOV RBX,qword ptr [RAX + 0x58]
/* 0e4f6676 */  TEST RBX,RBX
/* 0e4f6679 */  JZ 0x0e4f6699
/* 0e4f667b */  ADD RBX,0x40
/* 0e4f667f */  JMP 0x0e4f669b
/* 0e4f6681 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4f6688 */  JNZ 0x0e4f6699
/* 0e4f668a */  MOV RBX,qword ptr [RAX + 0x68]
/* 0e4f668e */  TEST RBX,RBX
/* 0e4f6691 */  JZ 0x0e4f6699
/* 0e4f6693 */  ADD RBX,0x38
/* 0e4f6697 */  JMP 0x0e4f669b
/* 0e4f6699 */  XOR EBX,EBX
/* 0e4f669b */  LEA RAX,[0x488e0b0]
/* 0e4f66a2 */  MOV qword ptr [RSP + 0x130],RAX
/* 0e4f66aa */  MOV dword ptr [RSP + 0x140],0x48b5725f
/* 0e4f66b5 */  MOV qword ptr [RSP + 0x138],0x0
/* 0e4f66c1 */  MOV byte ptr [RSP + 0x144],0x0
/* 0e4f66c9 */  MOV qword ptr [RSP + 0x120],0x0
/* 0e4f66d5 */  PXOR XMM0,XMM0
/* 0e4f66d9 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4f66de */  MOV qword ptr [RSP + 0x18],RAX
/* 0e4f66e3 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4f66ec */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e4f66f4 */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e4f66f9 */  LEA RDI,[0xf5463b0]
/* 0e4f6700 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f6707 */  MOV ESI,0x20
/* 0e4f670c */  CALL qword ptr [RAX + 0x10]
/* 0e4f670f */  MOV R14,RAX
/* 0e4f6712 */  TEST RAX,RAX
/* 0e4f6715 */  JZ 0x0e4f72a3
/* 0e4f671b */  MOV qword ptr [RSP + 0x1f0],R14
/* 0e4f6723 */  MOV qword ptr [RSP + 0x1e0],0x21
/* 0e4f672f */  MOV qword ptr [RSP + 0x1e8],0x1a
/* 0e4f673b */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4f6742 */  MOVUPS xmmword ptr [R14 + 0xa],XMM0
/* 0e4f6747 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4f674f */  MOVDQU xmmword ptr [R14],XMM0
/* 0e4f6754 */  MOV byte ptr [R14 + 0x1a],0x0
/* 0e4f6759 */  LEA RSI,[RSP + 0x1e0]
/* 0e4f6761 */  MOV RDI,RBX
/* 0e4f6764 */  CALL 0x048b5060
/* 0e4f6769 */  MOV R14,RAX
/* 0e4f676c */  LEA RBX,[RSP + 0x8]
/* 0e4f6771 */  ADD RAX,0x20
/* 0e4f6775 */  MOV qword ptr [R14 + 0x20],0x0
/* 0e4f677d */  MOV RCX,RSP
/* 0e4f6780 */  CMP RAX,RCX
/* 0e4f6783 */  JZ 0x0e4f67b9
/* 0e4f6785 */  MOV RAX,qword ptr [R14 + 0x40]
/* 0e4f6789 */  TEST RAX,RAX
/* 0e4f678c */  JZ 0x0e4f67d8
/* 0e4f678e */  MOV R15,R14
/* 0e4f6791 */  ADD R15,0x28
/* 0e4f6795 */  MOV RDI,R15
/* 0e4f6798 */  CALL RAX
/* 0e4f679a */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4f679f */  TEST EAX,EAX
/* 0e4f67a1 */  JZ 0x0e4f67d8
/* 0e4f67a3 */  CMP EAX,0x2
/* 0e4f67a6 */  JNZ 0x0e4f67c7
/* 0e4f67a8 */  MOV EDI,0x5
/* 0e4f67ad */  MOV RSI,RBX
/* 0e4f67b0 */  MOV RDX,R15
/* 0e4f67b3 */  CALL qword ptr [RSP + 0x18]
/* 0e4f67b7 */  JMP 0x0e4f67d8
/* 0e4f67b9 */  XOR EAX,EAX
/* 0e4f67bb */  TEST byte ptr [RSP + 0x1e0],0x1
/* 0e4f67c3 */  JNZ 0x0e4f6804
/* 0e4f67c5 */  JMP 0x0e4f6822
/* 0e4f67c7 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0e4f67cc */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f67d5 */  MOV qword ptr [R15],RAX
/* 0e4f67d8 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e4f67dd */  MOVDQU XMM0,xmmword ptr [RSP + 0x18]
/* 0e4f67e3 */  MOVDQU xmmword ptr [R14 + 0x38],XMM0
/* 0e4f67e9 */  MOV ECX,dword ptr [RSP + 0x28]
/* 0e4f67ed */  MOV dword ptr [R14 + 0x48],ECX
/* 0e4f67f1 */  MOVZX ECX,byte ptr [RSP + 0x2c]
/* 0e4f67f6 */  MOV byte ptr [R14 + 0x4c],CL
/* 0e4f67fa */  TEST byte ptr [RSP + 0x1e0],0x1
/* 0e4f6802 */  JZ 0x0e4f6822
/* 0e4f6804 */  MOV RSI,qword ptr [RSP + 0x1e0]
/* 0e4f680c */  MOV RDI,qword ptr [RSP + 0x1f0]
/* 0e4f6814 */  AND RSI,-0x2
/* 0e4f6818 */  CALL 0x0412a280
/* 0e4f681d */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e4f6822 */  TEST RAX,RAX
/* 0e4f6825 */  JZ 0x0e4f682c
/* 0e4f6827 */  MOV RDI,RBX
/* 0e4f682a */  CALL RAX
/* 0e4f682c */  MOV RAX,qword ptr [RSP + 0x138]
/* 0e4f6834 */  TEST RAX,RAX
/* 0e4f6837 */  JZ 0x0e4f6843
/* 0e4f6839 */  LEA RDI,[RSP + 0x120]
/* 0e4f6841 */  CALL RAX
/* 0e4f6843 */  MOV RBP,qword ptr [RSP + 0xe0]
/* 0e4f684b */  MOVUPS XMM0,xmmword ptr [RSP + 0xe8]
/* 0e4f6853 */  MOVAPS xmmword ptr [RSP + 0x2c0],XMM0
/* 0e4f685b */  MOVUPS XMM0,xmmword ptr [RSP + 0xf8]
/* 0e4f6863 */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM0
/* 0e4f686b */  MOV EAX,dword ptr [RSP + 0x108]
/* 0e4f6872 */  MOV dword ptr [RSP + 0x2a8],EAX
/* 0e4f6879 */  MOV EAX,dword ptr [RSP + 0x10c]
/* 0e4f6880 */  MOV dword ptr [RSP + 0xd8],EAX
/* 0e4f6887 */  MOV RAX,qword ptr [RSP + 0x110]
/* 0e4f688f */  MOV qword ptr [RSP + 0x2b0],RAX
/* 0e4f6897 */  MOV word ptr [RSP + 0x304],0x7465
/* 0e4f68a1 */  MOV dword ptr [RSP + 0x300],0x53206572
/* 0e4f68ac */  LEA R15,[RBP + 0x18]
/* 0e4f68b0 */  MOV RDI,R15
/* 0e4f68b3 */  CALL 0x0d31a0e0
/* 0e4f68b8 */  MOV R14,RAX
/* 0e4f68bb */  MOV R12,qword ptr [RBP + 0x50]
/* 0e4f68bf */  MOV RBX,qword ptr [RBP + 0x58]
/* 0e4f68c3 */  CMP R12,RBX
/* 0e4f68c6 */  JZ 0x0e4f6935
/* 0e4f68c8 */  LEA R13,[0x14518a9]
/* 0e4f68cf */  JMP 0x0e4f68ff
/* 0e4f68e0 */  MOV RSI,qword ptr [R12 + 0x10]
/* 0e4f68e5 */  MOV EDX,0x24
/* 0e4f68ea */  MOV RDI,R13
/* 0e4f68ed */  CALL 0x0eee3000
/* 0e4f68f2 */  TEST EAX,EAX
/* 0e4f68f4 */  JZ 0x0e4f6935
/* 0e4f68f6 */  ADD R12,0x38
/* 0e4f68fa */  CMP R12,RBX
/* 0e4f68fd */  JZ 0x0e4f6935
/* 0e4f68ff */  MOVZX EAX,byte ptr [R12]
/* 0e4f6904 */  TEST AL,0x1
/* 0e4f6906 */  JZ 0x0e4f6920
/* 0e4f6908 */  MOV RCX,qword ptr [R12 + 0x8]
/* 0e4f690d */  CMP RCX,0x24
/* 0e4f6911 */  JNZ 0x0e4f68f6
/* 0e4f6913 */  JMP 0x0e4f692a
/* 0e4f6920 */  MOV ECX,EAX
/* 0e4f6922 */  SHR ECX,0x1
/* 0e4f6924 */  CMP RCX,0x24
/* 0e4f6928 */  JNZ 0x0e4f68f6
/* 0e4f692a */  TEST AL,0x1
/* 0e4f692c */  JNZ 0x0e4f68e0
/* 0e4f692e */  LEA RSI,[R12 + 0x1]
/* 0e4f6933 */  JMP 0x0e4f68e5
/* 0e4f6935 */  CMP R12,RBX
/* 0e4f6938 */  JZ 0x0e4f695a
/* 0e4f693a */  MOV EBX,dword ptr [R12 + 0x1c]
/* 0e4f693f */  MOVZX EAX,byte ptr [0x0f550768]
/* 0e4f6946 */  TEST AL,AL
/* 0e4f6948 */  JZ 0x0e4f7a0b
/* 0e4f694e */  CMP EBX,dword ptr [0x0f550754]
/* 0e4f6954 */  JNZ 0x0e4f6c16
/* 0e4f695a */  CMP dword ptr [RSP + 0x2a8],0x0
/* 0e4f6962 */  JZ 0x0e4f69b0
/* 0e4f6964 */  MOV RDI,R15
/* 0e4f6967 */  MOV RSI,R14
/* 0e4f696a */  MOV EDX,dword ptr [RSP + 0xd8]
/* 0e4f6971 */  MOV ECX,0x1
/* 0e4f6976 */  CALL 0x048b0c90
/* 0e4f697b */  TEST RAX,RAX
/* 0e4f697e */  JNZ 0x0e4f6998
/* 0e4f6980 */  XORPS XMM0,XMM0
/* 0e4f6983 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0e4f6987 */  MOV RDI,RSP
/* 0e4f698a */  CALL 0x048b0d20
/* 0e4f698f */  MOV RAX,qword ptr [RSP]
/* 0e4f6993 */  TEST RAX,RAX
/* 0e4f6996 */  JZ 0x0e4f69c9
/* 0e4f6998 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4f699f */  JNZ 0x0e4f69c9
/* 0e4f69a1 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4f69a5 */  TEST R14,R14
/* 0e4f69a8 */  JZ 0x0e4f69c9
/* 0e4f69aa */  ADD R14,0x40
/* 0e4f69ae */  JMP 0x0e4f69cc
/* 0e4f69b0 */  CMP dword ptr [R14 + 0x60],0xd4c25870
/* 0e4f69b8 */  JNZ 0x0e4f69c9
/* 0e4f69ba */  MOV R14,qword ptr [R14 + 0x68]
/* 0e4f69be */  TEST R14,R14
/* 0e4f69c1 */  JZ 0x0e4f69c9
/* 0e4f69c3 */  ADD R14,0x38
/* 0e4f69c7 */  JMP 0x0e4f69cc
/* 0e4f69c9 */  XOR R14D,R14D
/* 0e4f69cc */  MOV qword ptr [RSP + 0x120],0x0
/* 0e4f69d8 */  LEA R13,[0x48b4ab0]
/* 0e4f69df */  MOV qword ptr [RSP + 0x130],R13
/* 0e4f69e7 */  MOV dword ptr [RSP + 0x140],0xd33bd9c5
/* 0e4f69f2 */  LEA R12,[0x48b49f0]
/* 0e4f69f9 */  MOV qword ptr [RSP + 0x138],R12
/* 0e4f6a01 */  MOV byte ptr [RSP + 0x144],0x1
/* 0e4f6a09 */  LEA RDI,[0xf5463b0]
/* 0e4f6a10 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f6a17 */  MOV ESI,0x38
/* 0e4f6a1c */  CALL qword ptr [RAX + 0x10]
/* 0e4f6a1f */  MOV R15,RAX
/* 0e4f6a22 */  TEST RAX,RAX
/* 0e4f6a25 */  JZ 0x0e4f72b4
/* 0e4f6a2b */  LEA RAX,[0x1254d89]
/* 0e4f6a32 */  MOV RCX,-0xff000000000001
/* 0e4f6a3c */  AND RCX,RAX
/* 0e4f6a3f */  MOV RAX,0x757463757274531a
/* 0e4f6a49 */  MOV qword ptr [R15],RAX
/* 0e4f6a4c */  MOV EAX,dword ptr [RSP + 0x300]
/* 0e4f6a53 */  MOV dword ptr [R15 + 0x8],EAX
/* 0e4f6a57 */  MOVZX EAX,word ptr [RSP + 0x304]
/* 0e4f6a5f */  MOV word ptr [R15 + 0xc],AX
/* 0e4f6a64 */  MOV word ptr [R15 + 0xe],0x0
/* 0e4f6a6b */  MOV qword ptr [R15 + 0x10],0x0
/* 0e4f6a73 */  MOV dword ptr [RSP + 0x300],0x0
/* 0e4f6a7e */  MOV word ptr [RSP + 0x304],0x0
/* 0e4f6a88 */  MOV word ptr [R15 + 0x18],0x1400
/* 0e4f6a8f */  MOV RAX,0x1001400150001
/* 0e4f6a99 */  MOV qword ptr [R15 + 0x20],RAX
/* 0e4f6a9d */  MOV qword ptr [R15 + 0x28],RCX
/* 0e4f6aa1 */  MOV qword ptr [R15 + 0x30],RCX
/* 0e4f6aa5 */  LEA RBX,[0x48b46e0]
/* 0e4f6aac */  MOV qword ptr [RSP],RBX
/* 0e4f6ab0 */  MOV qword ptr [RSP + 0x18],R13
/* 0e4f6ab5 */  MOV qword ptr [RSP + 0x20],R12
/* 0e4f6aba */  MOV dword ptr [RSP + 0x28],0xd33bd9c5
/* 0e4f6ac2 */  MOV byte ptr [RSP + 0x2c],0x1
/* 0e4f6ac7 */  MOV qword ptr [RSP + 0x120],0x0
/* 0e4f6ad3 */  MOV qword ptr [RSP + 0x8],R15
/* 0e4f6ad8 */  LEA RDI,[0xf5463b0]
/* 0e4f6adf */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4f6ae6 */  MOV ESI,0x28
/* 0e4f6aeb */  CALL qword ptr [RAX + 0x10]
/* 0e4f6aee */  MOV R15,RAX
/* 0e4f6af1 */  TEST RAX,RAX
/* 0e4f6af4 */  JZ 0x0e4f72c5
/* 0e4f6afa */  MOV qword ptr [RSP + 0x1f0],R15
/* 0e4f6b02 */  MOV qword ptr [RSP + 0x1e0],0x29
/* 0e4f6b0e */  MOV qword ptr [RSP + 0x1e8],0x24
/* 0e4f6b1a */  MOVUPS XMM0,xmmword ptr [0x014518b9]
/* 0e4f6b21 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0e4f6b26 */  MOVUPS XMM0,xmmword ptr [0x014518a9]
/* 0e4f6b2d */  MOVUPS xmmword ptr [R15],XMM0
/* 0e4f6b31 */  MOV dword ptr [R15 + 0x20],0x5d797472
/* 0e4f6b39 */  MOV byte ptr [R15 + 0x24],0x0
/* 0e4f6b3e */  LEA RSI,[RSP + 0x1e0]
/* 0e4f6b46 */  MOV RDI,R14
/* 0e4f6b49 */  CALL 0x048b5060
/* 0e4f6b4e */  MOV R15,RAX
/* 0e4f6b51 */  LEA R14,[RSP + 0x8]
/* 0e4f6b56 */  ADD RAX,0x20
/* 0e4f6b5a */  MOV qword ptr [R15 + 0x20],RBX
/* 0e4f6b5e */  MOV RCX,RSP
/* 0e4f6b61 */  CMP RAX,RCX
/* 0e4f6b64 */  JZ 0x0e4f6bcc
/* 0e4f6b66 */  MOV R12,R15
/* 0e4f6b69 */  ADD R12,0x28
/* 0e4f6b6d */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4f6b71 */  TEST RAX,RAX
/* 0e4f6b74 */  JZ 0x0e4f6b9a
/* 0e4f6b76 */  MOV RDI,R12
/* 0e4f6b79 */  CALL RAX
/* 0e4f6b7b */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4f6b80 */  TEST EAX,EAX
/* 0e4f6b82 */  JZ 0x0e4f6bac
/* 0e4f6b84 */  CMP EAX,0x2
/* 0e4f6b87 */  JNZ 0x0e4f6b9a
/* 0e4f6b89 */  MOV EDI,0x5
/* 0e4f6b8e */  MOV RSI,R14
/* 0e4f6b91 */  MOV RDX,R12
/* 0e4f6b94 */  CALL qword ptr [RSP + 0x18]
/* 0e4f6b98 */  JMP 0x0e4f6bac
/* 0e4f6b9a */  MOV RAX,qword ptr [RSP + 0x8]
/* 0e4f6b9f */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4f6ba8 */  MOV qword ptr [R12],RAX
/* 0e4f6bac */  MOV R12,qword ptr [RSP + 0x20]
/* 0e4f6bb1 */  MOVUPS XMM0,xmmword ptr [RSP + 0x18]
/* 0e4f6bb6 */  MOVUPS xmmword ptr [R15 + 0x38],XMM0
/* 0e4f6bbb */  MOV EAX,dword ptr [RSP + 0x28]
/* 0e4f6bbf */  MOV dword ptr [R15 + 0x48],EAX
/* 0e4f6bc3 */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4f6bc8 */  MOV byte ptr [R15 + 0x4c],AL
/* 0e4f6bcc */  TEST byte ptr [RSP + 0x1e0],0x1
/* 0e4f6bd4 */  JZ 0x0e4f6bf4
/* 0e4f6bd6 */  MOV RSI,qword ptr [RSP + 0x1e0]
/* 0e4f6bde */  MOV RDI,qword ptr [RSP + 0x1f0]
/* 0e4f6be6 */  AND RSI,-0x2
/* 0e4f6bea */  CALL 0x0412a280
/* 0e4f6bef */  MOV R12,qword ptr [RSP + 0x20]
/* 0e4f6bf4 */  TEST R12,R12
/* 0e4f6bf7 */  JZ 0x0e4f6bff
/* 0e4f6bf9 */  MOV RDI,R14
/* 0e4f6bfc */  CALL R12
/* 0e4f6bff */  MOV RAX,qword ptr [RSP + 0x138]
/* 0e4f6c07 */  TEST RAX,RAX
/* 0e4f6c0a */  JZ 0x0e4f6c16
/* 0e4f6c0c */  LEA RDI,[RSP + 0x120]
/* 0e4f6c14 */  CALL RAX
/* 0e4f6c16 */  MOV qword ptr [RSP + 0x270],RBP
/* 0e4f6c1e */  MOVAPS XMM0,xmmword ptr [RSP + 0x2c0]
/* 0e4f6c26 */  MOVAPS XMM1,xmmword ptr [RSP + 0x2d0]
/* 0e4f6c2e */  MOVUPS xmmword ptr [RSP + 0x278],XMM0
/* 0e4f6c36 */  MOVUPS xmmword ptr [RSP + 0x288],XMM1
/* 0e4f6c3e */  MOV EAX,dword ptr [RSP + 0x2a8]
/* 0e4f6c45 */  MOV dword ptr [RSP + 0x298],EAX
/* 0e4f6c4c */  MOV EAX,dword ptr [RSP + 0xd8]
/* 0e4f6c53 */  MOV dword ptr [RSP + 0x29c],EAX
/* 0e4f6c5a */  MOV RAX,qword ptr [RSP + 0x2b0]
/* 0e4f6c62 */  MOV qword ptr [RSP + 0x2a0],RAX
/* 0e4f6c6a */  LEA RDX,[0x11ea907]
/* 0e4f6c71 */  MOV RDI,RSP
/* 0e4f6c74 */  LEA RSI,[RSP + 0x270]
/* 0e4f6c7c */  MOV ECX,0xb
/* 0e4f6c81 */  CALL 0x0e69b540
/* 0e4f6c86 */  LEA RDI,[0xf5463b0]
; truncated
