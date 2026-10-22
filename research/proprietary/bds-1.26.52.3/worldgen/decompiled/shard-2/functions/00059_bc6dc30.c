/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbd6dc30 (ELF vaddr 0xbc6dc30)
 * Label: caller-of-callee
 * Body:  [[0bd6dc30, 0bd6ef67] [0bd6ef70, 0bd6f1bc] [0bd6f1c0, 0bd6f217] [0bd6f220, 0bd6f333] [0bd6f340, 0bd6f385] [0bd6f390, 0bd6f516] [0bd6f520, 0bd6f5d7] [0bd6f5e0, 0bd6f6d3] [0bd6f6e0, 0bd6f734] [0bd6f740, 0bd6f9f0] [0bd6fa00, 0bd6fa78] [0bd6fa80, 0bd6fb12] [0bd6fb20, 0bd6ff67] [0bd6ff70, 0bd6ffba] [0bd6ffc0, 0bd70a45] [0bd70a50, 0bd70ffd] [0bd71349, 0bd7137c] [0bd71401, 0bd71435] [0bd71899, 0bd71909]]
 * Ghidra: FUN_0bd6dc30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bd6dc30(undefined8 param_1,byte *param_2,byte *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  long lVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined7 uVar20;
  char cVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [8];
  undefined1 auVar27 [8];
  long lVar28;
  long *plVar29;
  char *pcVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  undefined5 *puVar35;
  undefined *puVar36;
  undefined1 *puVar37;
  uint uVar38;
  long lVar39;
  long *plVar40;
  byte *pbVar41;
  ulong uVar42;
  undefined *puVar43;
  ulong uVar44;
  byte *pbVar45;
  undefined *puVar46;
  ulong uVar47;
  long lVar48;
  bool bVar49;
  byte bVar50;
  byte bVar52;
  byte bVar54;
  byte bVar56;
  byte bVar58;
  byte bVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bStack_2f8;
  undefined4 uStack_2f7;
  undefined1 uStack_2f3;
  undefined2 uStack_2f2;
  char cStack_2f0;
  undefined2 uStack_2ef;
  undefined1 uStack_2ed;
  uint uStack_2ec;
  long *plStack_2e8;
  undefined1 uStack_2d9;
  byte bStack_2d8;
  undefined4 uStack_2d7;
  ushort uStack_2d3;
  undefined1 uStack_2d1;
  char cStack_2d0;
  undefined7 uStack_2cf;
  long *plStack_2c8;
  byte bStack_2b8;
  undefined7 uStack_2b7;
  byte bStack_2b0;
  undefined5 uStack_2af;
  ushort uStack_2aa;
  undefined1 uStack_2a8;
  undefined5 uStack_2a7;
  byte bStack_2a2;
  undefined1 uStack_2a1;
  undefined5 *puStack_2a0;
  undefined8 uStack_298;
  byte *pbStack_290;
  undefined1 auStack_288 [9];
  undefined1 auStack_27f [7];
  undefined1 auStack_278 [16];
  long *plStack_268;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  long *plStack_248;
  ulong uStack_240;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  long lStack_1f0;
  undefined1 *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined4 uStack_1d0;
  undefined2 uStack_1cc;
  byte bStack_1c8;
  uint7 uStack_1c7;
  char cStack_1c0;
  undefined7 uStack_1bf;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long alStack_1a8 [2];
  undefined1 auStack_198 [16];
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  long lStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined8 uStack_118;
  byte *pbStack_110;
  undefined1 auStack_108 [24];
  byte *pbStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  char cVar51;
  char cVar53;
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  
  pbStack_148 = param_3 + 1;
  bVar49 = (*param_3 & 1) == 0;
  pbStack_f0 = *(byte **)(param_3 + 0x10);
  if (bVar49) {
    pbStack_f0 = pbStack_148;
  }
  uStack_e8 = (ulong)(*param_3 >> 1);
  if (!bVar49) {
    uStack_e8 = *(ulong *)(param_3 + 8);
  }
  uStack_e0 = 1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_250;
  _auStack_258 = auVar3 << 0x40;
  uStack_13c = param_5;
  uStack_118 = param_1;
  pbStack_110 = param_3;
  func_0x0eeb79f0(auStack_108,auStack_258);
  if (((ulong)auStack_258 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)auStack_258 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x04863060(alStack_1a8,0);
  func_0x0485e1c0(&pbStack_f0);
  bVar49 = (*param_2 & 1) != 0;
  pbVar45 = param_2 + 1;
  if (bVar49) {
    pbVar45 = *(byte **)(param_2 + 0x10);
  }
  uVar47 = (ulong)(*param_2 >> 1);
  if (bVar49) {
    uVar47 = *(ulong *)(param_2 + 8);
  }
  cVar21 = func_0x0485e650(&pbStack_f0,pbVar45,uVar47,alStack_1a8,0);
  if (cVar21 == '\0') {
    func_0x04860c50(auStack_258,&pbStack_f0);
    plVar29 = plStack_248;
    if ((auStack_258[0] & 1) == 0) {
      plVar29 = (long *)(auStack_258 + 1);
    }
    auStack_288._0_8_ = plVar29;
    func_0x0b036410(1,3,3,&UNK_0139ed4c,auStack_288);
    if ((auStack_258[0] & 1) != 0) {
      func_0x0412a280(plStack_248,(ulong)auStack_258 & 0xfffffffffffffffe);
    }
    goto LAB_0bd70ce5;
  }
  auStack_198 = (undefined1  [16])0x0;
  uStack_188 = 0;
  uVar25 = func_0x0b63b920(alStack_1a8,&UNK_013771cd,0xe);
  iVar23 = func_0x0ee36b90(uVar25,auStack_198,1);
  if (iVar23 == 2) {
    func_0x05896f50(1,3,3,&UNK_0146e999);
  }
  else {
    cVar21 = func_0x0b5c6170(&UNK_0f0863e8,auStack_198);
    if (cVar21 == '\0') {
      cVar21 = func_0x0551ca70(auStack_198,&UNK_0f32f820);
      if (cVar21 == '\0') {
        func_0x0bccae00(&puStack_138,param_4,auStack_198);
        uStack_1b0._0_4_ = func_0x0551ca70(auStack_198,&UNK_0f32f7f8);
        cVar21 = func_0x0551ca70(auStack_198,&UNK_0f32f820);
        uStack_1b0 = (byte *)(CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0) ^ 1);
        if (cVar21 != '\0') goto LAB_0bd6fbb3;
        cVar21 = func_0x0551ca70(auStack_198,&UNK_0f32f7f8);
        if (cVar21 == '\0') goto LAB_0bd6fbb3;
        uStack_2a8 = 0;
        uStack_2a7 = 0;
        bStack_2a2 = 0;
        uStack_2a1 = 0;
        puStack_2a0 = (undefined5 *)0x0;
        bStack_2b8 = 0;
        uStack_2b7 = 0;
        bStack_2b0 = 0;
        uStack_2af = 0;
        uStack_2aa = 0;
        uStack_298 = 0;
        func_0x0412f5e0(&bStack_2b0,&UNK_0124dd88,0x1a);
        bStack_2b8 = 0x36;
        uStack_2b7 = 0x437a975723ece2;
        bStack_2f8 = 1;
        uStack_2f7 = 0x800;
        uStack_2f3 = 0;
        uStack_2f2 = 1;
        cStack_2f0 = -0x77;
        uStack_2ef = 0x254d;
        uStack_2ed = 1;
        uStack_2ec = 0;
        bStack_2d8 = 0;
        uStack_2d7 = 0;
        uStack_2d3 = 0;
        uStack_2d1 = 0;
        plStack_2e8 = (long *)&UNK_01254d89;
        bStack_1c8 = 0;
        uStack_1c7 = 0;
        auStack_288._0_8_ = &UNK_0f330020;
        plStack_268 = (long *)auStack_288;
        func_0x0412d680(0xf6b4d60);
        if (DAT_0f6b4d58 == '\0') goto LAB_0bd70ef0;
LAB_0bd6e04c:
        if (_DAT_0f6b4d48 != (undefined *)0x0) {
          uVar47 = CONCAT71(uStack_2b7,bStack_2b8);
          bVar49 = (bStack_2b0 & 1) != 0;
          puVar35 = &uStack_2af;
          if (bVar49) {
            puVar35 = puStack_2a0;
          }
          uVar44 = (ulong)(bStack_2b0 >> 1);
          if (bVar49) {
            uVar44 = CONCAT17(uStack_2a1,CONCAT16(bStack_2a2,CONCAT51(uStack_2a7,uStack_2a8)));
          }
          puVar46 = &DAT_0f6b4d48;
          puVar36 = _DAT_0f6b4d48;
          do {
            uVar42 = *(ulong *)(puVar36 + 0x20);
            bVar22 = (uVar42 >= uVar47 && uVar42 != uVar47) - (uVar42 < uVar47);
            if (uVar42 == uVar47) {
              if ((puVar36[0x28] & 1) == 0) {
                uVar42 = (ulong)((byte)puVar36[0x28] >> 1);
                puVar43 = puVar36 + 0x29;
              }
              else {
                uVar42 = *(ulong *)(puVar36 + 0x30);
                puVar43 = *(undefined **)(puVar36 + 0x38);
              }
              uVar34 = uVar42;
              if (uVar44 < uVar42) {
                uVar34 = uVar44;
              }
              iVar23 = func_0x0eee2ff0(puVar43,puVar35,uVar34);
              if (iVar23 == 0) {
                iVar23 = (int)(char)((uVar44 < uVar42) - (uVar42 < uVar44));
              }
              bVar22 = (0 < iVar23) - (iVar23 < 0);
            }
            if (-1 < (char)bVar22) {
              puVar46 = puVar36;
            }
            puVar36 = *(undefined **)(puVar36 + (bVar22 >> 4 & 8));
          } while (puVar36 != (undefined *)0x0);
          if (puVar46 != &DAT_0f6b4d48) {
            if (uVar47 == *(ulong *)(puVar46 + 0x20)) {
              bVar49 = (puVar46[0x28] & 1) != 0;
              puVar36 = puVar46 + 0x29;
              if (bVar49) {
                puVar36 = *(undefined **)(puVar46 + 0x38);
              }
              uVar47 = (ulong)((byte)puVar46[0x28] >> 1);
              if (bVar49) {
                uVar47 = *(ulong *)(puVar46 + 0x30);
              }
              uVar42 = uVar44;
              if (uVar47 < uVar44) {
                uVar42 = uVar47;
              }
              iVar23 = func_0x0eee2ff0(puVar35,puVar36,uVar42);
              bVar49 = uVar44 < uVar47;
              if (iVar23 != 0) {
                bVar49 = iVar23 < 0;
              }
              if (!bVar49) goto LAB_0bd6e21c;
            }
            else if (*(ulong *)(puVar46 + 0x20) <= uVar47) goto LAB_0bd6e21c;
          }
        }
        puVar46 = &DAT_0f6b4d48;
LAB_0bd6e21c:
        if ((DAT_0f6b4d58 == '\0') && (iVar23 = func_0x04108328(&DAT_0f6b4d58), iVar23 != 0)) {
          _DAT_0f6b4d48 = (undefined1  [16])0x0;
          _DAT_0f6b4d40 = &DAT_0f6b4d48;
          func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
          func_0x0410844d(&DAT_0f6b4d58);
        }
        pbVar45 = &DAT_0f6b4d48;
        if ((puVar46 != &DAT_0f6b4d48) &&
           (puVar36 = *(undefined **)(puVar46 + 0x50), puVar36 != (undefined *)0x0)) {
          puVar43 = puVar46 + 0x50;
          do {
            bVar22 = func_0x04fa7a10(puVar36 + 0x20,&bStack_2f8);
            if (bVar22 == 0) {
              puVar43 = puVar36;
            }
            puVar36 = *(undefined **)(puVar36 + (ulong)bVar22 * 8);
          } while (puVar36 != (undefined *)0x0);
          if ((puVar43 != puVar46 + 0x50) &&
             (cVar21 = func_0x04fa7a10(&bStack_2f8,puVar43 + 0x20), cVar21 == '\0')) {
            pbStack_168 = *(byte **)(puVar43 + 0x38);
            pbStack_160 = *(byte **)(puVar43 + 0x40);
            if (*(long *)(puVar43 + 0x40) == 0) goto LAB_0bd6e56f;
            LOCK();
            plVar29 = (long *)(*(long *)(puVar43 + 0x40) + 8);
            *plVar29 = *plVar29 + 1;
            UNLOCK();
            goto LAB_0bd6e56f;
          }
        }
        auVar26 = (undefined1  [8])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
        if (auVar26 == (undefined1  [8])0x0) goto LAB_0bd70d92;
        do {
          *(undefined1 (*) [16])((long)auVar26 + 8) = (undefined1  [16])0x0;
          *(undefined **)auVar26 = &UNK_0f32fed8;
          _auStack_258 = (undefined1  [16])0x0;
          *(undefined **)((long)auVar26 + 0x20) = &UNK_0f2ccd78;
          *(undefined1 (*) [16])((long)auVar26 + 0x28) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0x38) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0x48) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0x58) = (undefined1  [16])0x0;
          *(byte *)((long)auVar26 + 0x68) = 0;
          func_0x04aa75f0((byte *)((long)auVar26 + 0x70),&uStack_2d9,&UNK_01254d89);
          *(byte *)((long)auVar26 + 0x80) = 0;
          *(undefined1 (*) [16])((long)auVar26 + 0x88) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0x98) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0xa8) = (undefined1  [16])0x0;
          *(byte *)((long)auVar26 + 0xb8) = 0xff;
          *(byte *)((long)auVar26 + 0xb9) = 0xff;
          *(byte *)((long)auVar26 + 0xba) = 0xff;
          *(byte *)((long)auVar26 + 0xbb) = 0xff;
          *(byte *)((long)auVar26 + 0xbc) = 0;
          *(byte *)((long)auVar26 + 0xbd) = 0;
          *(byte *)((long)auVar26 + 0xbe) = 0;
          *(byte *)((long)auVar26 + 0xbf) = 0;
          *(undefined1 (*) [16])((long)auVar26 + 0x130) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0xc0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0xd0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0xe0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)auVar26 + 0xf0) = (undefined1  [16])0x0;
          *(undefined **)((long)auVar26 + 0x20) = &UNK_0f32ff28;
          pbVar41 = (byte *)((long)auVar26 + 0x170);
          *(undefined1 (*) [16])((long)auVar26 + 0x170) = (undefined1  [16])0x0;
          *(byte *)((long)auVar26 + 0x1b0) = 0;
          if (pbVar41 != auStack_258) {
            if (auStack_258 == (undefined1  [8])0x0) {
              auVar27 = (undefined1  [8])0x0;
            }
            else {
              (**(code **)auStack_258)(auStack_258,pbVar41);
              auVar27 = auStack_258;
            }
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uStack_250;
            _auStack_258 = auVar15 << 0x40;
            *(undefined1 (*) [8])pbVar41 = auVar27;
          }
          if (auVar26 != (undefined1  [8])&DAT_0f552080) {
            pbVar41 = (byte *)((long)auVar26 + 0x90);
            if ((*pbVar41 & 1) == 0) {
              if ((DAT_0f552110 & 1) == 0) {
                *(undefined8 *)((long)auVar26 + 0xa0) = _DAT_0f552120;
                uVar47 = _DAT_0f552118;
                *(ulong *)pbVar41 = CONCAT71(uRam000000000f552111,DAT_0f552110);
                *(ulong *)((long)auVar26 + 0x98) = uVar47;
              }
              else {
                func_0x04885070(pbVar41,_DAT_0f552120,_DAT_0f552118);
              }
            }
            else {
              uVar47 = (ulong)(DAT_0f552110 >> 1);
              uVar25 = 0xf552111;
              if ((DAT_0f552110 & 1) != 0) {
                uVar47 = _DAT_0f552118;
                uVar25 = _DAT_0f552120;
              }
              func_0x04885120(pbVar41,uVar25,uVar47);
            }
          }
          *(undefined8 *)((long)auVar26 + 0x88) = _DAT_0f552108;
          *(byte *)((long)auVar26 + 0xa8) = 0;
          *(byte *)((long)auVar26 + 0xa9) = 0;
          *(byte *)((long)auVar26 + 0xaa) = 0;
          *(byte *)((long)auVar26 + 0xab) = 0;
          *(byte *)((long)auVar26 + 0xac) = 0;
          *(byte *)((long)auVar26 + 0xad) = 0;
          *(byte *)((long)auVar26 + 0xae) = 0;
          *(byte *)((long)auVar26 + 0xaf) = 0;
          if (auStack_258 != (undefined1  [8])0x0) {
            (**(code **)((long)auStack_258 + 8))(auStack_258);
          }
          pbStack_168 = (byte *)((long)auVar26 + 0x20);
          pbStack_160 = (byte *)auVar26;
          if ((DAT_0f6b4d58 == '\0') && (iVar23 = func_0x04108328(&DAT_0f6b4d58), iVar23 != 0)) {
            _DAT_0f6b4d48 = (undefined1  [16])0x0;
            _DAT_0f6b4d40 = pbVar45;
            func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
            func_0x0410844d(&DAT_0f6b4d58);
          }
          auStack_258 = (undefined1  [8])&bStack_2b8;
          lVar28 = func_0x0b5d53e0(&DAT_0f6b4d40,&bStack_2b8,&UNK_01563a4f,auStack_258,&uStack_2d9);
          auStack_258 = (undefined1  [8])&bStack_2f8;
          lVar28 = func_0x0b5d5780(lVar28 + 0x48,&bStack_2f8,&UNK_01563a4f,auStack_258,&uStack_2d9);
          if (pbStack_160 != (byte *)0x0) {
            LOCK();
            *(long *)(pbStack_160 + 8) = *(long *)(pbStack_160 + 8) + 1;
            UNLOCK();
          }
          plVar29 = *(long **)(lVar28 + 0x40);
          *(byte **)(lVar28 + 0x38) = pbStack_168;
          *(byte **)(lVar28 + 0x40) = pbStack_160;
          if (plVar29 != (long *)0x0) {
            LOCK();
            plVar40 = plVar29 + 1;
            lVar28 = *plVar40;
            *plVar40 = *plVar40 + -1;
            UNLOCK();
            if (lVar28 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              FUN_0412c2d0(plVar29);
            }
          }
          if (plStack_268 == (long *)0x0) {
            uVar25 = func_0x04891200();
            if ((bStack_2b8 & 1) == 0) {
            }
            else {
              func_0x0412a280(CONCAT17(uStack_2a1,
                                       CONCAT16(bStack_2a2,CONCAT51(uStack_2a7,uStack_2a8))),
                              CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
            }
            if ((auStack_288[0] & 1) != 0) {
              func_0x0412a280(auStack_278._0_8_,auStack_288._0_8_ & 0xfffffffffffffffe);
            }
            func_0x0bd8a330(auStack_258);
            func_0x0bd6dc00(pbStack_160);
            func_0x0ee386e0(&uStack_128);
            func_0x0ee386e0(&uStack_130);
            func_0x0ee386e0(&uStack_188);
            func_0x0ee386e0(auStack_198 + 8);
            func_0x0485e2d0(&pbStack_f0);
            func_0x04863610(alStack_1a8);
            func_0x0eeb81b0(auStack_108);
            func_0x0eee2d70(uVar25);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(*plStack_268 + 0x30))(plStack_268,&pbStack_168);
LAB_0bd6e56f:
          func_0x0412d6b0(0xf6b4d60);
          if (plStack_268 == (long *)auStack_288) {
            lVar28 = 0x20;
LAB_0bd6e5a1:
            (**(code **)(*plStack_268 + lVar28))();
          }
          else {
            lVar28 = 0x28;
            if (plStack_268 != (long *)0x0) goto LAB_0bd6e5a1;
          }
          if (((ulong)plStack_2e8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)plStack_2e8 & 0xff00ffffffffffff) - 8);
          }
          plStack_2e8 = (long *)0x0;
          if ((uStack_2ec & 0x800000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,
                       (CONCAT44(uStack_2ec,CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0))) &
                       0xff00ffffffffffff) - 8);
          }
          cStack_2f0 = '\0';
          uStack_2ef = 0;
          uStack_2ed = 0;
          uStack_2ec = 0;
          if ((uStack_1c7 & 0x800000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(CONCAT71(uStack_1c7,bStack_1c8) & 0xff00ffffffffffff) - 8);
          }
          bStack_1c8 = 0;
          uStack_1c7 = 0;
          if ((uStack_2d3 & 0x8000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,
                       (CONCAT17(uStack_2d1,CONCAT25(uStack_2d3,CONCAT41(uStack_2d7,bStack_2d8))) &
                       0xff00ffffffffffff) - 8);
          }
          if ((bStack_2b0 & 1) != 0) {
            func_0x0412a280(puStack_2a0,
                            CONCAT26(uStack_2aa,CONCAT51(uStack_2af,bStack_2b0)) &
                            0xfffffffffffffffe);
          }
          pbVar45 = pbStack_168;
          if (pbStack_168[0x48] == 0) {
            _auStack_258 = ZEXT412(3) << 0x40;
            uStack_240 = CONCAT26(uStack_240._6_2_,0x746f6f7208);
            uStack_228 = 0;
            auStack_220 = (undefined1  [16])0x0;
            auStack_210 = (undefined1  [16])0x0;
            auStack_200 = (undefined1  [16])0x0;
            lStack_1f0 = 0;
            puStack_1e8 = puStack_138;
            uStack_1e0 = 0;
            uVar47 = uStack_130;
            plStack_248 = alStack_1a8;
            if ((uStack_130 & 0x80000000000000) != 0) {
              uVar47 = uStack_130 & 0xff00ffffffffffff;
              lVar48 = *(long *)(uVar47 - 8);
              lVar28 = lVar48 + 9;
              plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
              if (lVar28 != 0 && plVar29 == (long *)0x0) {
                func_0x0eec74c0(lVar28,8);
              }
              *plVar29 = lVar48;
              func_0x0eee2f00(plVar29 + 1,uVar47,lVar48);
              *(undefined1 *)((long)plVar29 + lVar48 + 8) = 0;
              uVar47 = (ulong)(plVar29 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            }
            uStack_1d8 = 0;
            uVar44 = uStack_128;
            uStack_1e0 = uVar47;
            if ((uStack_128 & 0x80000000000000) != 0) {
              uVar47 = uStack_128 & 0xff00ffffffffffff;
              lVar48 = *(long *)(uVar47 - 8);
              lVar28 = lVar48 + 9;
              plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
              if (lVar28 != 0 && plVar29 == (long *)0x0) {
                func_0x0eec74c0(lVar28,8);
              }
              *plVar29 = lVar48;
              func_0x0eee2f00(plVar29 + 1,uVar47,lVar48);
              *(undefined1 *)((long)plVar29 + lVar48 + 8) = 0;
              uVar44 = (ulong)(plVar29 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            }
            uStack_1d0 = uStack_120;
            uStack_1cc = uStack_11c;
            uStack_1d8 = uVar44;
            cVar21 = (**(code **)(*(long *)pbVar45 + 0x38))(pbVar45,auStack_258,0);
            if (cVar21 == '\0') {
LAB_0bd6eb48:
              bVar49 = false;
            }
            else {
              bVar49 = true;
              lVar28 = *(long *)(pbVar45 + 0xc0) - *(long *)(pbVar45 + 0xb8);
              if (lVar28 != 0) {
                lVar28 = (lVar28 >> 3) * -0x30c30c30c30c30c3;
                pcVar30 = (char *)(*(long *)(pbVar45 + 0xb8) + 0xa0);
                uVar47 = 0;
LAB_0bd6e90b:
                if ((*pcVar30 != '\x01') ||
                   ((*(ulong *)(auStack_220._8_8_ + (uVar47 >> 6) * 8) >> (uVar47 & 0x3f) & 1) != 0)
                   ) goto LAB_0bd6e8f9;
                _auStack_288 = (undefined1  [16])0x0;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = auStack_278._8_8_;
                auStack_278 = auVar16 << 0x40;
                bStack_2b8 = 0;
                uStack_2b7 = 0;
                bStack_2b0 = 0;
                uStack_2af = 0;
                uStack_2aa = 0;
                uStack_2a8 = 0;
                uStack_2a7 = 0;
                bStack_2a2 = 0;
                uStack_2a1 = 0;
                lVar48 = 0x28;
                uVar47 = 0;
                do {
                  lVar39 = *(long *)(pbVar45 + 0xb8);
                  if ((*(byte *)(lVar39 + -0x10 + lVar48) & 1) == 0) {
                    lVar39 = lVar39 + lVar48 + -0xf;
                  }
                  else {
                    lVar39 = *(long *)(lVar39 + lVar48);
                  }
                  bStack_2d8 = (byte)lVar39;
                  uStack_2d7 = (undefined4)((ulong)lVar39 >> 8);
                  uStack_2d3 = (ushort)((ulong)lVar39 >> 0x28);
                  uStack_2d1 = (undefined1)((ulong)lVar39 >> 0x38);
                  func_0x0470d9a0(&bStack_2f8,&UNK_0141230a,3,0xc,&bStack_2d8);
                  bVar49 = (bStack_2f8 & 1) == 0;
                  plVar29 = plStack_2e8;
                  if (bVar49) {
                    plVar29 = (long *)&uStack_2f7;
                  }
                  uVar44 = (ulong)(bStack_2f8 >> 1);
                  if (!bVar49) {
                    uVar44 = CONCAT44(uStack_2ec,
                                      CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0)));
                  }
                  func_0x0412f8c0(&bStack_2b8,plVar29,uVar44);
                  if ((*(ulong *)(auStack_220._8_8_ + (uVar47 >> 6) * 8) >> (uVar47 & 0x3f) & 1) ==
                      0) {
                    bVar49 = (bStack_2f8 & 1) == 0;
                    plVar29 = plStack_2e8;
                    if (bVar49) {
                      plVar29 = (long *)&uStack_2f7;
                    }
                    uVar44 = (ulong)(bStack_2f8 >> 1);
                    if (!bVar49) {
                      uVar44 = CONCAT44(uStack_2ec,
                                        CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0)));
                    }
                    func_0x0412f8c0(auStack_288,plVar29,uVar44);
                  }
                  if ((bStack_2f8 & 1) != 0) {
                    func_0x0412a280(plStack_2e8,
                                    CONCAT26(uStack_2f2,
                                             CONCAT15(uStack_2f3,CONCAT41(uStack_2f7,bStack_2f8))) &
                                    0xfffffffffffffffe);
                  }
                  uVar47 = uVar47 + 1;
                  lVar48 = lVar48 + 0xa8;
                } while (lVar28 - uVar47 != 0);
                lVar28 = *(long *)(pbVar45 + 0xc0);
                lVar48 = *(long *)(pbVar45 + 0xb8);
                if (lVar28 - lVar48 != 0) {
                  lVar39 = 0xa0;
                  uVar47 = 0;
                  do {
                    if ((*(char *)(*(long *)(pbVar45 + 0xb8) + lVar39) == '\x01') &&
                       ((*(ulong *)(auStack_220._8_8_ + (uVar47 >> 6) * 8) >> (uVar47 & 0x3f) & 1)
                        == 0)) {
                      func_0x0b63c8a0((undefined4)uStack_250,alStack_1a8,
                                      *(long *)(pbVar45 + 0xb8) + lVar39 + -0x88,auStack_288,
                                      &bStack_2b8);
                    }
                    uVar47 = uVar47 + 1;
                    lVar39 = lVar39 + 0xa8;
                  } while ((lVar28 - lVar48 >> 3) * -0x30c30c30c30c30c3 - uVar47 != 0);
                }
                if ((bStack_2b8 & 1) != 0) {
                  func_0x0412a280(CONCAT17(uStack_2a1,
                                           CONCAT16(bStack_2a2,CONCAT51(uStack_2a7,uStack_2a8))),
                                  CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
                }
                if ((auStack_288[0] & 1) != 0) {
                  func_0x0412a280(auStack_278._0_8_,auStack_288._0_8_ & 0xfffffffffffffffe);
                }
                goto LAB_0bd6eb48;
              }
            }
LAB_0bd6eb4b:
            if ((uStack_1d8 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
            }
            uStack_1d8 = 0;
            if ((uStack_1e0 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1e0 & 0xff00ffffffffffff) - 8);
            }
            uStack_1e0 = 0;
            if ((auStack_200[0] & 1) != 0) {
              func_0x0412a280(lStack_1f0,auStack_200._0_8_ & 0xfffffffffffffffe);
            }
            if (auStack_220._8_8_ != 0) {
              func_0x0412a280(auStack_220._8_8_,auStack_210._8_8_ << 3);
            }
            if ((uStack_240 & 1) != 0) {
              func_0x0412a280(uStack_230,uStack_240 & 0xfffffffffffffffe);
            }
            if (!bVar49) {
              uStack_1b0 = (byte *)((ulong)uStack_1b0 & 0xffffffff00000000);
              goto LAB_0bd6fb83;
            }
          }
          func_0x04863120(auStack_258,&UNK_012b2da3);
          uVar25 = func_0x0b63bf60(alStack_1a8,&UNK_013771cd,0xe);
          func_0x04863790(uVar25,auStack_258);
          func_0x04863610(auStack_258);
          _auStack_258 = (undefined1  [16])0x0;
          plStack_248 = (long *)0x0;
          lVar28 = func_0x0b66ce00(auStack_258);
          uStack_250 = (byte *)lVar28;
          uVar47 = *(ulong *)(lVar28 + -0x10);
          if (uVar47 < *(ulong *)(lVar28 + -8)) {
            func_0x0b66d450(uVar47,&UNK_01254d89,alStack_1a8);
            lVar48 = uVar47 + 0x28;
            *(long *)(lVar28 + -0x10) = lVar48;
          }
          else {
            lVar48 = func_0x0b66d260(lVar28 + -0x18,&UNK_01254d89,alStack_1a8);
          }
          *(long *)(lVar28 + -0x10) = lVar48;
          bStack_2b8 = 0x2a;
          uStack_2b7 = (undefined7)_DAT_01217897;
          bStack_2b0 = (byte)((ulong)_DAT_01217897 >> 0x38);
          uStack_2af = (undefined5)_UNK_0121789f;
          uStack_2aa = 0x7274;
          uStack_2a8 = 0x6f;
          uStack_2a7 = 0x7372656c6c;
          bStack_2a2 = 0;
          uVar25 = func_0x0b63a010(auStack_258,&bStack_2b8,0);
          plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (plVar29 == (long *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          lVar28 = _UNK_0124ddbb;
          bStack_2f8 = 0x29;
          uStack_2f7 = 0;
          uStack_2f3 = 0;
          uStack_2f2 = 0;
          cStack_2f0 = 0x26;
          uStack_2ef = 0;
          uStack_2ed = 0;
          uStack_2ec = 0;
          plVar29[2] = _DAT_0124ddb3;
          plVar29[3] = lVar28;
          lVar28 = _UNK_0124ddab;
          *plVar29 = _DAT_0124dda3;
          plVar29[1] = lVar28;
          builtin_strncpy((char *)((long)plVar29 + 0x1e),"0-9_.-]+",8);
          *(char *)((long)plVar29 + 0x26) = '\0';
          plStack_2e8 = plVar29;
          uVar25 = func_0x0b63a010(uVar25,&bStack_2f8,1);
          bStack_2d8 = 0xc;
          uStack_2d7 = 0x74617473;
          uStack_2d3 = 0x7365;
          uStack_2d1 = 0;
          uVar25 = func_0x0b63a010(uVar25,&bStack_2d8,1);
          bStack_1c8 = 0x1e;
          uStack_1c7 = 0x5a2d417a2d615b;
          cStack_1c0 = '0';
          uStack_1bf = 0x2b5d2d2e5f392d;
          plStack_1b8 = (long *)((ulong)plStack_1b8 & 0xffffffffffffff00);
          plVar29 = (long *)func_0x0b63a010(uVar25,&bStack_1c8,0);
          _auStack_288 = (undefined1  [16])0x0;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = auStack_278._8_8_;
          auStack_278 = auVar17 << 0x40;
          func_0x0b66d750(auStack_288,*plVar29,plVar29[1],
                          (plVar29[1] - *plVar29 >> 3) * -0x5555555555555555);
          if ((bStack_1c8 & 1) == 0) {
            if ((bStack_2d8 & 1) != 0) goto LAB_0bd6eec4;
LAB_0bd6ee84:
            if ((bStack_2f8 & 1) != 0) goto LAB_0bd6eede;
LAB_0bd6ee8b:
            if ((bStack_2b8 & 1) != 0) goto LAB_0bd6eef8;
LAB_0bd6ee92:
            auVar26 = auStack_258;
          }
          else {
            func_0x0412a280(plStack_1b8,CONCAT71(uStack_1c7,bStack_1c8) & 0xfffffffffffffffe);
            if ((bStack_2d8 & 1) == 0) goto LAB_0bd6ee84;
LAB_0bd6eec4:
            func_0x0412a280(plStack_2c8,
                            CONCAT17(uStack_2d1,CONCAT25(uStack_2d3,CONCAT41(uStack_2d7,bStack_2d8))
                                    ) & 0xfffffffffffffffe);
            if ((bStack_2f8 & 1) == 0) goto LAB_0bd6ee8b;
LAB_0bd6eede:
            func_0x0412a280(plStack_2e8,
                            CONCAT26(uStack_2f2,CONCAT15(uStack_2f3,CONCAT41(uStack_2f7,bStack_2f8))
                                    ) & 0xfffffffffffffffe);
            if ((bStack_2b8 & 1) == 0) goto LAB_0bd6ee92;
LAB_0bd6eef8:
            func_0x0412a280(CONCAT17(uStack_2a1,CONCAT16(bStack_2a2,CONCAT51(uStack_2a7,uStack_2a8))
                                    ),CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
            auVar26 = auStack_258;
          }
          if (auVar26 != (undefined1  [8])0x0) {
            auVar27 = auVar26;
            plVar29 = (long *)uStack_250;
            while (auVar26 != (undefined1  [8])plVar29) {
              lVar28 = plVar29[-3];
              if (lVar28 != 0) {
                lVar48 = plVar29[-2];
                lVar39 = lVar28;
                if (lVar28 != lVar48) {
                  do {
                    if ((*(byte *)(lVar48 + -0x28) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar48 + -0x18),
                                      *(ulong *)(lVar48 + -0x28) & 0xfffffffffffffffe);
                    }
                    lVar48 = lVar48 + -0x28;
                  } while (lVar48 != lVar28);
                  lVar39 = plVar29[-3];
                }
                plVar29[-2] = lVar28;
                func_0x0412a280(lVar39,plVar29[-1] - lVar39);
              }
              auVar27 = auStack_258;
              plVar29 = plVar29 + -3;
            }
            uStack_250 = (byte *)auVar26;
            func_0x0412a280(auVar27,(long)plStack_248 - (long)auVar27);
          }
          _auStack_258 = (undefined1  [16])0x0;
          plStack_248 = (long *)0x0;
          func_0x0b66d750(auStack_258,auStack_288._0_8_,stack0xfffffffffffffd80,
                          ((long)stack0xfffffffffffffd80 - auStack_288._0_8_ >> 3) *
                          -0x5555555555555555);
          bStack_2f8 = 0x14;
          uStack_2f7 = 0x6d696e61;
          uStack_2f3 = 0x61;
          uStack_2f2 = 0x6974;
          cStack_2f0 = 'o';
          uStack_2ef = 0x736e;
          uStack_2ed = 0;
          uVar25 = func_0x0b63a010(auStack_258,&bStack_2f8,1);
          uVar25 = func_0x0b63a9d0(uVar25,0,0xffffffffffffffff,0);
          bStack_2d8 = 0x1e;
          uStack_2d7 = 0x7a2d615b;
          uStack_2d3 = 0x2d41;
          uStack_2d1 = 0x5a;
          cStack_2d0 = '0';
          uStack_2cf = 0x2b5d2d2e5f392d;
          plStack_2c8 = (long *)((ulong)plStack_2c8 & 0xffffffffffffff00);
          plVar29 = (long *)func_0x0b63a010(uVar25,&bStack_2d8,0);
          bStack_2b8 = 0;
          uStack_2b7 = 0;
          bStack_2b0 = 0;
          uStack_2af = 0;
          uStack_2aa = 0;
          uStack_2a8 = 0;
          uStack_2a7 = 0;
          bStack_2a2 = 0;
          uStack_2a1 = 0;
          func_0x0b66d750(&bStack_2b8,*plVar29,plVar29[1],
                          (plVar29[1] - *plVar29 >> 3) * -0x5555555555555555);
          if ((bStack_2d8 & 1) == 0) {
            if ((bStack_2f8 & 1) != 0) goto LAB_0bd6f0e4;
LAB_0bd6f0b8:
            auVar26 = auStack_258;
          }
          else {
            func_0x0412a280(plStack_2c8,
                            CONCAT17(uStack_2d1,CONCAT25(uStack_2d3,CONCAT41(uStack_2d7,bStack_2d8))
                                    ) & 0xfffffffffffffffe);
            if ((bStack_2f8 & 1) == 0) goto LAB_0bd6f0b8;
LAB_0bd6f0e4:
            func_0x0412a280(plStack_2e8,
                            CONCAT26(uStack_2f2,CONCAT15(uStack_2f3,CONCAT41(uStack_2f7,bStack_2f8))
                                    ) & 0xfffffffffffffffe);
            auVar26 = auStack_258;
          }
          if (auVar26 != (undefined1  [8])0x0) {
            auVar27 = auVar26;
            plVar29 = (long *)uStack_250;
            while (auVar26 != (undefined1  [8])plVar29) {
              lVar28 = plVar29[-3];
              if (lVar28 != 0) {
                lVar48 = plVar29[-2];
                lVar39 = lVar28;
                if (lVar28 != lVar48) {
                  do {
                    if ((*(byte *)(lVar48 + -0x28) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar48 + -0x18),
                                      *(ulong *)(lVar48 + -0x28) & 0xfffffffffffffffe);
                    }
                    lVar48 = lVar48 + -0x28;
                  } while (lVar48 != lVar28);
                  lVar39 = plVar29[-3];
                }
                plVar29[-2] = lVar28;
                func_0x0412a280(lVar39,plVar29[-1] - lVar39);
              }
              auVar27 = auStack_258;
              plVar29 = plVar29 + -3;
            }
            uStack_250 = (byte *)auVar26;
            func_0x0412a280(auVar27,(long)plStack_248 - (long)auVar27);
          }
          pbVar45 = (byte *)CONCAT71(uStack_2b7,bStack_2b8);
          pbStack_150 = (byte *)CONCAT26(uStack_2aa,CONCAT51(uStack_2af,bStack_2b0));
          if (pbVar45 != pbStack_150) {
            do {
              bStack_2f8 = 8;
              uStack_2f7 = 0x66302e31;
              uStack_2f3 = 0;
              iVar23 = func_0x048641f0(*(undefined8 *)(*(long *)(pbVar45 + 8) + -0x10));
              if (iVar23 != 0) {
                lVar28 = *(long *)(pbVar45 + 8);
                pbVar41 = *(byte **)(lVar28 + -0x88);
                uVar38 = 0;
                pbStack_290 = pbVar45;
                pbStack_158 = pbVar41;
                while( true ) {
                  uVar24 = func_0x048641f0(*(undefined8 *)(lVar28 + -0x10));
                  if (uVar24 <= uVar38) break;
                  lVar28 = *(long *)(pbVar45 + 8);
                  bVar49 = (*(byte *)(lVar28 + -0x28) & 1) != 0;
                  auStack_258 = (undefined1  [8])(lVar28 + -0x27);
                  if (bVar49) {
                    auStack_258 = (undefined1  [8])*(long *)(lVar28 + -0x18);
                  }
                  uStack_250 = (byte *)(ulong)(*(byte *)(lVar28 + -0x28) >> 1);
                  if (bVar49) {
                    uStack_250 = (byte *)*(ulong *)(lVar28 + -0x20);
                  }
                  plStack_248 = (long *)CONCAT44(plStack_248._4_4_,uVar38);
                  func_0x0470d9a0(&bStack_2d8,&UNK_0139bd18,5,0x2d,auStack_258);
                  uVar25 = func_0x0b63bf60(pbVar41,&UNK_011ea955,9);
                  uVar25 = func_0x04864970(uVar25,&bStack_2d8);
                  uVar31 = func_0x0b63bf60(uVar25,&UNK_011f880f,5);
                  uVar32 = func_0x0b63b920(pbVar41,&UNK_0133f206,10);
                  uVar32 = func_0x04864620(uVar32,uVar38);
                  func_0x04863740(uVar31,uVar32);
                  uVar25 = func_0x0b63bf60(uVar25,&UNK_013ee8f7,0xb);
                  uVar31 = func_0x04864540(*(undefined8 *)(*(long *)(pbVar45 + 8) + -0x10),uVar38);
                  func_0x04863740(uVar25,uVar31);
                  bVar22 = bStack_2d8;
                  uStack_1b0 = (byte *)CONCAT44(uStack_1b0._4_4_,uVar38);
                  if ((bStack_2d8 & 1) == 0) {
                    auVar26 = (undefined1  [8])(ulong)(bStack_2d8 >> 1);
                  }
                  else {
                    auVar26 = (undefined1  [8])CONCAT71(uStack_2cf,cStack_2d0);
                  }
                  pbVar41 = (byte *)((long)auVar26 + 9);
                  if ((byte *)0xfffffffffffffff7 < pbVar41) goto LAB_0bd70d8d;
                  if (pbVar41 < (byte *)0x17) {
                    plStack_248 = (long *)0x0;
                    stack0xfffffffffffffda9 = SUB1615((undefined1  [16])0x0,1);
                    auStack_258[0] = (char)pbVar41 * '\x02';
                    uVar47 = 0;
                  }
                  else {
                    uVar47 = ((ulong)pbVar41 | 7) + 1;
                    if (((ulong)pbVar41 | 7) == 0x17) {
                      uVar47 = 0x1a;
                    }
                    plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
                    if (plVar29 == (long *)0x0) {
                      func_0x0eec74c0(uVar47,0);
                    }
                    uVar47 = uVar47 | 1;
                    uStack_250 = pbVar41;
                    auStack_258 = (undefined1  [8])uVar47;
                    plStack_248 = plVar29;
                  }
                  pbVar45 = pbStack_290;
                  pcVar30 = (char *)((long)plStack_248 + 9);
                  bVar49 = (uVar47 & 1) == 0;
                  plVar29 = plStack_248;
                  if (bVar49) {
                    plVar29 = (long *)(auStack_258 + 1);
                  }
                  *plVar29 = 0x656c626169726176;
                  *(char *)(plVar29 + 1) = '.';
                  if (bVar49) {
                    pcVar30 = (char *)((long)&uStack_250 + 2);
                  }
                  if (auVar26 != (undefined1  [8])0x0) {
                    plVar29 = (long *)&uStack_2d7;
                    if ((bVar22 & 1) != 0) {
                      plVar29 = plStack_2c8;
                    }
                    func_0x0eee2ee0(pcVar30,plVar29,auVar26);
                  }
                  pcVar30[(long)auVar26] = '\0';
                  if ((bVar22 & 1) != 0) {
                    func_0x0412a280(plStack_2c8,
                                    CONCAT17(uStack_2d1,
                                             CONCAT25(uStack_2d3,CONCAT41(uStack_2d7,bStack_2d8))) &
                                    0xfffffffffffffffe);
                  }
                  pbVar41 = pbStack_158;
                  plStack_2c8 = plStack_248;
                  uVar47 = (ulong)uStack_250;
                  bStack_2d8 = auStack_258[0];
                  uStack_2d7 = auStack_258._1_4_;
                  uStack_2d3 = auStack_258._5_2_;
                  uStack_2d1 = auStack_258[7];
                  cStack_2d0 = auStack_258[8];
                  uStack_2cf = auStack_258._9_7_;
                  iVar23 = (int)uStack_1b0;
                  if ((int)uStack_1b0 == 0) {
                    if (((ulong)auStack_258 & 1) == 0) {
                      uStack_1c7 = auStack_258._1_7_;
                      plStack_1b8 = plStack_248;
                      bStack_1c8 = bStack_2d8;
                      cStack_1c0 = cStack_2d0;
                      uStack_1bf = uStack_2cf;
                    }
                    else {
                      func_0x0412e5e0(&bStack_1c8,plStack_248,uStack_250);
                    }
                  }
                  else {
                    uStack_250 = (byte *)CONCAT44(uStack_2ec,
                                                  CONCAT13(uStack_2ed,
                                                           CONCAT21(uStack_2ef,cStack_2f0)));
                    auStack_258 = (undefined1  [8])plStack_2e8;
                    if ((bStack_2f8 & 1) == 0) {
                      auStack_258 = (undefined1  [8])&uStack_2f7;
                      uStack_250 = (byte *)(ulong)(bStack_2f8 >> 1);
                    }
                    if ((bStack_2d8 & 1) == 0) {
                      plStack_248 = (long *)&uStack_2d7;
                      uVar47 = (ulong)(bStack_2d8 >> 1);
                    }
                    uStack_240 = uVar47;
                    func_0x0470d9a0(&bStack_1c8,&UNK_011fd9d0,5,0xdd,auStack_258);
                  }
                  if ((bStack_2f8 & 1) != 0) {
                    func_0x0412a280(plStack_2e8,
                                    CONCAT26(uStack_2f2,
                                             CONCAT15(uStack_2f3,CONCAT41(uStack_2f7,bStack_2f8))) &
                                    0xfffffffffffffffe);
                  }
                  plStack_2e8 = plStack_1b8;
                  bStack_2f8 = bStack_1c8;
                  uStack_2f7 = (undefined4)uStack_1c7;
                  uStack_2f3 = (undefined1)(uStack_1c7 >> 0x20);
                  uStack_2f2 = (undefined2)(uStack_1c7 >> 0x28);
                  cStack_2f0 = cStack_1c0;
                  uStack_2ef = (undefined2)uStack_1bf;
                  uStack_2ed = (undefined1)((uint7)uStack_1bf >> 0x10);
                  uStack_2ec = (uint)((uint7)uStack_1bf >> 0x18);
                  if ((bStack_2d8 & 1) != 0) {
                    func_0x0412a280(plStack_2c8,
                                    CONCAT17(uStack_2d1,
                                             CONCAT25(uStack_2d3,CONCAT41(uStack_2d7,bStack_2d8))) &
                                    0xfffffffffffffffe);
                  }
                  uVar38 = iVar23 + 1;
                  lVar28 = *(long *)(pbVar45 + 8);
                }
              }
              func_0x048631d0(auStack_258,&bStack_2f8);
              func_0x04863790(*(undefined8 *)(*(long *)(pbVar45 + 8) + -0x10),auStack_258);
              func_0x04863610(auStack_258);
              if ((bStack_2f8 & 1) != 0) {
                func_0x0412a280(plStack_2e8,
                                CONCAT26(uStack_2f2,
                                         CONCAT15(uStack_2f3,CONCAT41(uStack_2f7,bStack_2f8))) &
                                0xfffffffffffffffe);
              }
              pbVar45 = pbVar45 + 0x18;
            } while (pbVar45 != pbStack_150);
          }
          pbStack_150 = stack0xfffffffffffffd80;
          pbVar45 = (byte *)auStack_288._0_8_;
          if ((byte *)auStack_288._0_8_ == stack0xfffffffffffffd80) goto LAB_0bd6fa26;
LAB_0bd6f68f:
          pbStack_158 = pbVar45;
          func_0x04865230(auStack_258,*(undefined8 *)(*(long *)(pbVar45 + 8) + -0x10));
          uStack_1b0 = uStack_250;
          auVar26 = auStack_258;
          if (auStack_258 == (undefined1  [8])uStack_250) goto joined_r0x0bd6f6cc;
          while( true ) {
            bVar49 = (*(byte *)auVar26 & 1) != 0;
            pbVar41 = (byte *)((long)auVar26 + 1);
            if (bVar49) {
              pbVar41 = *(byte **)((long)auVar26 + 0x10);
            }
            pbVar45 = (byte *)(ulong)(*(byte *)auVar26 >> 1);
            if (bVar49) {
              pbVar45 = *(byte **)((long)auVar26 + 8);
            }
            if ((byte *)0xfffffffffffffff7 < pbVar45) break;
            if (pbVar45 < (byte *)0x17) {
              bStack_2f8 = (char)pbVar45 * '\x02';
              plVar29 = (long *)&uStack_2f7;
              if (pbVar45 != (byte *)0x0) goto LAB_0bd6f7a7;
            }
            else {
              lVar28 = ((ulong)pbVar45 | 7) + 1;
              if (((ulong)pbVar45 | 7) == 0x17) {
                lVar28 = 0x1a;
              }
              pbStack_290 = (byte *)auVar26;
              plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar28);
              if (plVar29 == (long *)0x0) {
                func_0x0eec74c0(lVar28,0);
              }
              bStack_2f8 = (byte)lVar28 | 1;
              uStack_2f7 = (undefined4)((ulong)lVar28 >> 8);
              uStack_2f3 = (undefined1)((ulong)lVar28 >> 0x28);
              uStack_2f2 = (undefined2)((ulong)lVar28 >> 0x30);
              uStack_2ef = (undefined2)((ulong)pbVar45 >> 8);
              uStack_2ed = (undefined1)((ulong)pbVar45 >> 0x18);
              uStack_2ec = (uint)((ulong)pbVar45 >> 0x20);
              auVar26 = (undefined1  [8])pbStack_290;
              cStack_2f0 = (char)pbVar45;
              plStack_2e8 = plVar29;
LAB_0bd6f7a7:
              func_0x0eee2f00(plVar29,pbVar41,pbVar45);
            }
            *(byte *)((long)plVar29 + (long)pbVar45) = 0;
            bVar49 = (bStack_2f8 & 1) == 0;
            plVar29 = plStack_2e8;
            if (bVar49) {
              plVar29 = (long *)&uStack_2f7;
            }
            uVar47 = CONCAT44(uStack_2ec,CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0)));
            uVar44 = (ulong)(bStack_2f8 >> 1);
            if (!bVar49) {
              uVar44 = uVar47;
            }
            if (uVar44 != 0) {
              plVar40 = plVar29;
              if (uVar44 < 8) {
LAB_0bd6f8f0:
                do {
                  cVar21 = (char)*plVar40;
                  cVar51 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar51 = cVar21;
                  }
                  *(char *)plVar40 = cVar51;
                  plVar40 = (long *)((long)plVar40 + 1);
                } while (plVar40 != (long *)((long)plVar29 + uVar44));
              }
              else if (uVar44 < 0x20) {
                uVar47 = 0;
LAB_0bd6f885:
                uVar42 = uVar44 & 0xfffffffffffffff8;
                plVar40 = (long *)((long)plVar29 + uVar42);
                do {
                  uVar25 = *(undefined8 *)((long)plVar29 + uVar47);
                  bVar22 = (char)uVar25 + DAT_014e9110;
                  cVar51 = (char)((ulong)uVar25 >> 8);
                  bVar50 = cVar51 + UNK_014e9111;
                  cVar53 = (char)((ulong)uVar25 >> 0x10);
                  bVar52 = cVar53 + UNK_014e9112;
                  cVar55 = (char)((ulong)uVar25 >> 0x18);
                  bVar54 = cVar55 + UNK_014e9113;
                  cVar57 = (char)((ulong)uVar25 >> 0x20);
                  bVar56 = cVar57 + UNK_014e9114;
                  cVar59 = (char)((ulong)uVar25 >> 0x28);
                  bVar58 = cVar59 + UNK_014e9115;
                  cVar61 = (char)((ulong)uVar25 >> 0x30);
                  cVar21 = (char)((ulong)uVar25 >> 0x38);
                  bVar60 = cVar61 + UNK_014e9116;
                  bVar62 = cVar21 + UNK_014e9117;
                  *(ulong *)((long)plVar29 + uVar47) =
                       CONCAT17((~-((byte)((bVar62 < UNK_014e8cb7) * UNK_014e8cb7 |
                                          (bVar62 >= UNK_014e8cb7) * bVar62) == bVar62) &
                                UNK_014ea367) + cVar21,
                                CONCAT16((~-((byte)((bVar60 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                   (bVar60 >= UNK_014e8cb6) * bVar60) == bVar60) &
                                         UNK_014ea366) + cVar61,
                                         CONCAT15((~-((byte)((bVar58 < UNK_014e8cb5) * UNK_014e8cb5
                                                            | (bVar58 >= UNK_014e8cb5) * bVar58) ==
                                                     bVar58) & UNK_014ea365) + cVar59,
                                                  CONCAT14((~-((byte)((bVar56 < UNK_014e8cb4) *
                                                                      UNK_014e8cb4 |
                                                                     (bVar56 >= UNK_014e8cb4) *
                                                                     bVar56) == bVar56) &
                                                           UNK_014ea364) + cVar57,
                                                           CONCAT13((~-((byte)((bVar54 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar54 >= UNK_014e8cb3) * bVar54) == bVar54) &
                                                  UNK_014ea363) + cVar55,
                                                  CONCAT12((~-((byte)((bVar52 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar52 >= UNK_014e8cb2) *
                                                                     bVar52) == bVar52) &
                                                           UNK_014ea362) + cVar53,
                                                           CONCAT11((~-((byte)((bVar50 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar50 >= UNK_014e8cb1) * bVar50) == bVar50) &
                                                  UNK_014ea361) + cVar51,
                                                  (~-((byte)((bVar22 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar22 >= DAT_014e8cb0) * bVar22) ==
                                                     bVar22) & DAT_014ea360) + (char)uVar25)))))));
                  uVar47 = uVar47 + 8;
                } while (uVar42 != uVar47);
                if (uVar44 != uVar42) goto LAB_0bd6f8f0;
              }
              else {
                uVar47 = uVar44 & 0xffffffffffffffe0;
                uVar42 = 0;
                do {
                  auVar3 = *(undefined1 (*) [16])((long)plVar29 + uVar42);
                  pcVar30 = (char *)((long)plVar29 + uVar42 + 0x10);
                  cVar21 = *pcVar30;
                  cVar51 = pcVar30[1];
                  cVar53 = pcVar30[2];
                  cVar55 = pcVar30[3];
                  cVar57 = pcVar30[4];
                  cVar59 = pcVar30[5];
                  cVar61 = pcVar30[6];
                  cVar6 = pcVar30[7];
                  cVar7 = pcVar30[8];
                  cVar8 = pcVar30[9];
                  cVar9 = pcVar30[10];
                  cVar10 = pcVar30[0xb];
                  cVar11 = pcVar30[0xc];
                  cVar12 = pcVar30[0xd];
                  cVar13 = pcVar30[0xe];
                  cVar14 = pcVar30[0xf];
                  bVar22 = auVar3[0] + DAT_014e86b0;
                  bVar50 = auVar3[1] + UNK_014e86b1;
                  bVar52 = auVar3[2] + UNK_014e86b2;
                  bVar54 = auVar3[3] + UNK_014e86b3;
                  bVar56 = auVar3[4] + UNK_014e86b4;
                  bVar58 = auVar3[5] + UNK_014e86b5;
                  bVar60 = auVar3[6] + UNK_014e86b6;
                  bVar62 = auVar3[7] + UNK_014e86b7;
                  bVar63 = auVar3[8] + UNK_014e86b8;
                  bVar64 = auVar3[9] + UNK_014e86b9;
                  bVar65 = auVar3[10] + UNK_014e86ba;
                  bVar66 = auVar3[0xb] + UNK_014e86bb;
                  bVar67 = auVar3[0xc] + UNK_014e86bc;
                  bVar68 = auVar3[0xd] + UNK_014e86bd;
                  bVar69 = auVar3[0xe] + UNK_014e86be;
                  bVar70 = auVar3[0xf] + UNK_014e86bf;
                  bVar71 = cVar21 + DAT_014e86b0;
                  bVar72 = cVar51 + UNK_014e86b1;
                  bVar73 = cVar53 + UNK_014e86b2;
                  bVar74 = cVar55 + UNK_014e86b3;
                  bVar75 = cVar57 + UNK_014e86b4;
                  bVar76 = cVar59 + UNK_014e86b5;
                  bVar77 = cVar61 + UNK_014e86b6;
                  bVar78 = cVar6 + UNK_014e86b7;
                  bVar79 = cVar7 + UNK_014e86b8;
                  bVar80 = cVar8 + UNK_014e86b9;
                  bVar81 = cVar9 + UNK_014e86ba;
                  bVar82 = cVar10 + UNK_014e86bb;
                  bVar83 = cVar11 + UNK_014e86bc;
                  bVar84 = cVar12 + UNK_014e86bd;
                  bVar85 = cVar13 + UNK_014e86be;
                  bVar86 = cVar14 + UNK_014e86bf;
                  pcVar30 = (char *)((long)plVar29 + uVar42);
                  *pcVar30 = (-((byte)((DAT_014e4170 < bVar22) * DAT_014e4170 |
                                      (DAT_014e4170 >= bVar22) * bVar22) == bVar22) & DAT_014ead50)
                             + auVar3[0];
                  pcVar30[1] = (-((byte)((UNK_014e4171 < bVar50) * UNK_014e4171 |
                                        (UNK_014e4171 >= bVar50) * bVar50) == bVar50) & UNK_014ead51
                               ) + auVar3[1];
                  pcVar30[2] = (-((byte)((UNK_014e4172 < bVar52) * UNK_014e4172 |
                                        (UNK_014e4172 >= bVar52) * bVar52) == bVar52) & UNK_014ead52
                               ) + auVar3[2];
                  pcVar30[3] = (-((byte)((UNK_014e4173 < bVar54) * UNK_014e4173 |
                                        (UNK_014e4173 >= bVar54) * bVar54) == bVar54) & UNK_014ead53
                               ) + auVar3[3];
                  pcVar30[4] = (-((byte)((UNK_014e4174 < bVar56) * UNK_014e4174 |
                                        (UNK_014e4174 >= bVar56) * bVar56) == bVar56) & UNK_014ead54
                               ) + auVar3[4];
                  pcVar30[5] = (-((byte)((UNK_014e4175 < bVar58) * UNK_014e4175 |
                                        (UNK_014e4175 >= bVar58) * bVar58) == bVar58) & UNK_014ead55
                               ) + auVar3[5];
                  pcVar30[6] = (-((byte)((UNK_014e4176 < bVar60) * UNK_014e4176 |
                                        (UNK_014e4176 >= bVar60) * bVar60) == bVar60) & UNK_014ead56
                               ) + auVar3[6];
                  pcVar30[7] = (-((byte)((UNK_014e4177 < bVar62) * UNK_014e4177 |
                                        (UNK_014e4177 >= bVar62) * bVar62) == bVar62) & UNK_014ead57
                               ) + auVar3[7];
                  pcVar30[8] = (-((byte)((UNK_014e4178 < bVar63) * UNK_014e4178 |
                                        (UNK_014e4178 >= bVar63) * bVar63) == bVar63) & UNK_014ead58
                               ) + auVar3[8];
                  pcVar30[9] = (-((byte)((UNK_014e4179 < bVar64) * UNK_014e4179 |
                                        (UNK_014e4179 >= bVar64) * bVar64) == bVar64) & UNK_014ead59
                               ) + auVar3[9];
                  pcVar30[10] = (-((byte)((UNK_014e417a < bVar65) * UNK_014e417a |
                                         (UNK_014e417a >= bVar65) * bVar65) == bVar65) &
                                UNK_014ead5a) + auVar3[10];
                  pcVar30[0xb] = (-((byte)((UNK_014e417b < bVar66) * UNK_014e417b |
                                          (UNK_014e417b >= bVar66) * bVar66) == bVar66) &
                                 UNK_014ead5b) + auVar3[0xb];
                  pcVar30[0xc] = (-((byte)((UNK_014e417c < bVar67) * UNK_014e417c |
                                          (UNK_014e417c >= bVar67) * bVar67) == bVar67) &
                                 UNK_014ead5c) + auVar3[0xc];
                  pcVar30[0xd] = (-((byte)((UNK_014e417d < bVar68) * UNK_014e417d |
                                          (UNK_014e417d >= bVar68) * bVar68) == bVar68) &
                                 UNK_014ead5d) + auVar3[0xd];
                  pcVar30[0xe] = (-((byte)((UNK_014e417e < bVar69) * UNK_014e417e |
                                          (UNK_014e417e >= bVar69) * bVar69) == bVar69) &
                                 UNK_014ead5e) + auVar3[0xe];
                  pcVar30[0xf] = (-((byte)((UNK_014e417f < bVar70) * UNK_014e417f |
                                          (UNK_014e417f >= bVar70) * bVar70) == bVar70) &
                                 UNK_014ead5f) + auVar3[0xf];
                  pcVar30 = (char *)((long)plVar29 + uVar42 + 0x10);
                  *pcVar30 = (-((byte)((DAT_014e4170 < bVar71) * DAT_014e4170 |
                                      (DAT_014e4170 >= bVar71) * bVar71) == bVar71) & DAT_014ead50)
                             + cVar21;
                  pcVar30[1] = (-((byte)((UNK_014e4171 < bVar72) * UNK_014e4171 |
                                        (UNK_014e4171 >= bVar72) * bVar72) == bVar72) & UNK_014ead51
                               ) + cVar51;
                  pcVar30[2] = (-((byte)((UNK_014e4172 < bVar73) * UNK_014e4172 |
                                        (UNK_014e4172 >= bVar73) * bVar73) == bVar73) & UNK_014ead52
                               ) + cVar53;
                  pcVar30[3] = (-((byte)((UNK_014e4173 < bVar74) * UNK_014e4173 |
                                        (UNK_014e4173 >= bVar74) * bVar74) == bVar74) & UNK_014ead53
                               ) + cVar55;
                  pcVar30[4] = (-((byte)((UNK_014e4174 < bVar75) * UNK_014e4174 |
                                        (UNK_014e4174 >= bVar75) * bVar75) == bVar75) & UNK_014ead54
                               ) + cVar57;
                  pcVar30[5] = (-((byte)((UNK_014e4175 < bVar76) * UNK_014e4175 |
                                        (UNK_014e4175 >= bVar76) * bVar76) == bVar76) & UNK_014ead55
                               ) + cVar59;
                  pcVar30[6] = (-((byte)((UNK_014e4176 < bVar77) * UNK_014e4176 |
                                        (UNK_014e4176 >= bVar77) * bVar77) == bVar77) & UNK_014ead56
                               ) + cVar61;
                  pcVar30[7] = (-((byte)((UNK_014e4177 < bVar78) * UNK_014e4177 |
                                        (UNK_014e4177 >= bVar78) * bVar78) == bVar78) & UNK_014ead57
                               ) + cVar6;
                  pcVar30[8] = (-((byte)((UNK_014e4178 < bVar79) * UNK_014e4178 |
                                        (UNK_014e4178 >= bVar79) * bVar79) == bVar79) & UNK_014ead58
                               ) + cVar7;
                  pcVar30[9] = (-((byte)((UNK_014e4179 < bVar80) * UNK_014e4179 |
                                        (UNK_014e4179 >= bVar80) * bVar80) == bVar80) & UNK_014ead59
                               ) + cVar8;
                  pcVar30[10] = (-((byte)((UNK_014e417a < bVar81) * UNK_014e417a |
                                         (UNK_014e417a >= bVar81) * bVar81) == bVar81) &
                                UNK_014ead5a) + cVar9;
                  pcVar30[0xb] = (-((byte)((UNK_014e417b < bVar82) * UNK_014e417b |
                                          (UNK_014e417b >= bVar82) * bVar82) == bVar82) &
                                 UNK_014ead5b) + cVar10;
                  pcVar30[0xc] = (-((byte)((UNK_014e417c < bVar83) * UNK_014e417c |
                                          (UNK_014e417c >= bVar83) * bVar83) == bVar83) &
                                 UNK_014ead5c) + cVar11;
                  pcVar30[0xd] = (-((byte)((UNK_014e417d < bVar84) * UNK_014e417d |
                                          (UNK_014e417d >= bVar84) * bVar84) == bVar84) &
                                 UNK_014ead5d) + cVar12;
                  pcVar30[0xe] = (-((byte)((UNK_014e417e < bVar85) * UNK_014e417e |
                                          (UNK_014e417e >= bVar85) * bVar85) == bVar85) &
                                 UNK_014ead5e) + cVar13;
                  pcVar30[0xf] = (-((byte)((UNK_014e417f < bVar86) * UNK_014e417f |
                                          (UNK_014e417f >= bVar86) * bVar86) == bVar86) &
                                 UNK_014ead5f) + cVar14;
                  uVar42 = uVar42 + 0x20;
                } while (uVar47 != uVar42);
                if (uVar44 != uVar47) {
                  if ((uVar44 & 0x18) == 0) {
                    plVar40 = (long *)(uVar47 + (long)plVar29);
                    goto LAB_0bd6f8f0;
                  }
                  goto LAB_0bd6f885;
                }
              }
              uVar47 = CONCAT44(uStack_2ec,CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0)));
            }
            uVar44 = (ulong)(bStack_2f8 >> 1);
            if ((bStack_2f8 & 1) != 0) {
              uVar44 = uVar47;
            }
            if (uVar44 == 10) {
              plVar29 = (long *)&uStack_2f7;
              if ((bStack_2f8 & 1) != 0) {
                plVar29 = plStack_2e8;
              }
              if ((short)plVar29[1] == 0x7372 && *plVar29 == 0x6574656d61726170) {
                func_0x048650e0(&bStack_2d8,*(undefined8 *)(*(long *)(pbStack_158 + 8) + -0x10),
                                &bStack_2f8);
                func_0x04863610(&bStack_2d8);
              }
            }
            if ((bStack_2f8 & 1) != 0) {
              func_0x0412a280(plStack_2e8,
                              CONCAT26(uStack_2f2,
                                       CONCAT15(uStack_2f3,CONCAT41(uStack_2f7,bStack_2f8))) &
                              0xfffffffffffffffe);
            }
            auVar26 = (undefined1  [8])((long)auVar26 + 0x18);
            if (auVar26 == (undefined1  [8])uStack_1b0) goto LAB_0bd6f9cb;
          }
          FUN_04882e30();
LAB_0bd70d8d:
          FUN_04882e30();
LAB_0bd70d92:
          func_0x0eec74c0(0x1c0,0);
        } while( true );
      }
      func_0x0ee34300(auStack_258,auStack_198);
      plVar29 = plStack_248;
      if ((auStack_258[0] & 1) == 0) {
        plVar29 = (long *)(auStack_258 + 1);
      }
      auStack_288._0_8_ = plVar29;
      func_0x0bb76660(1,3,3,&UNK_0131a51e,auStack_288);
    }
    else {
      func_0x0ee34300(auStack_258,auStack_198);
      plVar29 = plStack_248;
      if ((auStack_258[0] & 1) == 0) {
        plVar29 = (long *)(auStack_258 + 1);
      }
      bStack_2b8 = (byte)plVar29;
      uStack_2b7 = (undefined7)((ulong)plVar29 >> 8);
      func_0x0ee382a0(auStack_288,&UNK_0f0863e8);
      if ((auStack_288[0] & 1) == 0) {
        puStack_138 = auStack_288 + 1;
      }
      else {
        puStack_138 = (undefined1 *)auStack_278._0_8_;
      }
      func_0x0b5c3950(1,3,3,&UNK_012ffb1b,&bStack_2b8,&puStack_138);
      if ((auStack_288[0] & 1) != 0) {
        func_0x0412a280(auStack_278._0_8_,auStack_288._0_8_ & 0xfffffffffffffffe);
      }
    }
    if ((auStack_258[0] & 1) != 0) {
      func_0x0412a280(plStack_248,(ulong)auStack_258 & 0xfffffffffffffffe);
    }
  }
  goto LAB_0bd70c7b;
LAB_0bd6e8f9:
  uVar47 = uVar47 + 1;
  pcVar30 = pcVar30 + 0xa8;
  if (lVar28 - uVar47 == 0) goto LAB_0bd6eb4b;
  goto LAB_0bd6e90b;
LAB_0bd6f9cb:
  auVar26 = auStack_258;
joined_r0x0bd6f6cc:
  if (auVar26 != (undefined1  [8])0x0) {
    auVar27 = auVar26;
    for (pbVar45 = uStack_250; auVar26 != (undefined1  [8])pbVar45; pbVar45 = pbVar45 + -0x18) {
      if ((pbVar45[-0x18] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar45 + -8),
                        *(ulong *)(pbVar45 + -0x18) & 0xfffffffffffffffe);
      }
      auVar27 = auStack_258;
    }
    uStack_250 = (byte *)auVar26;
    func_0x0412a280(auVar27,(long)plStack_248 - (long)auVar27);
  }
  pbVar45 = pbStack_158 + 0x18;
  if (pbVar45 == pbStack_150) goto LAB_0bd6fa26;
  goto LAB_0bd6f68f;
LAB_0bd70535:
  uVar47 = uVar47 + 1;
  pcVar30 = pcVar30 + 0xa8;
  if (lVar28 - uVar47 == 0) goto LAB_0bd70791;
  goto LAB_0bd70547;
LAB_0bd6fa26:
  uVar20 = uStack_2b7;
  bVar22 = bStack_2b8;
  plVar29 = (long *)CONCAT71(uStack_2b7,bStack_2b8);
  if (plVar29 != (long *)0x0) {
    plVar40 = (long *)CONCAT26(uStack_2aa,CONCAT51(uStack_2af,bStack_2b0));
    if (plVar29 != plVar40) {
      do {
        plVar1 = plVar40 + -3;
        lVar28 = plVar40[-3];
        if (lVar28 != 0) {
          lVar48 = plVar40[-2];
          lVar39 = lVar28;
          if (lVar28 != lVar48) {
            do {
              if ((*(byte *)(lVar48 + -0x28) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar48 + -0x18),
                                *(ulong *)(lVar48 + -0x28) & 0xfffffffffffffffe);
              }
              lVar48 = lVar48 + -0x28;
            } while (lVar48 != lVar28);
            lVar39 = *plVar1;
          }
          plVar40[-2] = lVar28;
          func_0x0412a280(lVar39,plVar40[-1] - lVar39);
        }
        plVar40 = plVar1;
      } while (plVar29 != plVar1);
      plVar29 = (long *)CONCAT71(uStack_2b7,bStack_2b8);
    }
    bStack_2b0 = bVar22;
    uStack_2af = (undefined5)uVar20;
    uStack_2aa = (ushort)((uint7)uVar20 >> 0x28);
    pbVar45 = (byte *)func_0x0412a280(plVar29,CONCAT17(uStack_2a1,
                                                       CONCAT16(bStack_2a2,
                                                                CONCAT51(uStack_2a7,uStack_2a8))) -
                                              (long)plVar29);
  }
  uVar25 = auStack_288._0_8_;
  if ((long *)auStack_288._0_8_ != (long *)0x0) {
    plVar29 = (long *)stack0xfffffffffffffd80;
    while ((long *)uVar25 != plVar29) {
      lVar28 = plVar29[-3];
      if (lVar28 != 0) {
        lVar48 = plVar29[-2];
        lVar39 = lVar28;
        if (lVar28 != lVar48) {
          do {
            if ((*(byte *)(lVar48 + -0x28) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar48 + -0x18),
                              *(ulong *)(lVar48 + -0x28) & 0xfffffffffffffffe);
            }
            lVar48 = lVar48 + -0x28;
          } while (lVar48 != lVar28);
          lVar39 = plVar29[-3];
        }
        plVar29[-2] = lVar28;
        func_0x0412a280(lVar39,plVar29[-1] - lVar39);
      }
      plVar29 = plVar29 + -3;
    }
    stack0xfffffffffffffd80 = (byte *)uVar25;
    pbVar45 = (byte *)func_0x0412a280(auStack_288._0_8_,auStack_278._0_8_ - auStack_288._0_8_);
  }
  uStack_1b0 = (byte *)CONCAT44(uStack_1b0._4_4_,(int)CONCAT71((int7)((ulong)pbVar45 >> 8),1));
LAB_0bd6fb83:
  pbVar45 = pbStack_160;
  if (pbStack_160 != (byte *)0x0) {
    LOCK();
    pbVar41 = pbStack_160 + 8;
    lVar28 = *(long *)pbVar41;
    *(long *)pbVar41 = *(long *)pbVar41 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
      FUN_0412c2d0(pbVar45);
    }
  }
LAB_0bd6fbb3:
  puVar36 = &UNK_0f32f7d0;
  cVar21 = func_0x0551ca70(auStack_198,&UNK_0f32f7d0);
  if (cVar21 != '\0') {
    puVar36 = &UNK_0f32f7f8;
  }
  func_0x05d54750(&bStack_2b8,puVar36);
  auStack_278 = (undefined1  [16])0x0;
  _auStack_288 = (undefined1  [16])0x0;
  plStack_268 = (long *)0x0;
  func_0x0412f5e0(auStack_288 + 8,&UNK_0124dd88,0x1a);
  auStack_288._0_8_ = 0x437a975723ece236;
  pbVar45 = (byte *)auStack_198._0_8_;
  bStack_2f8 = auStack_198[0];
  uStack_2f7 = auStack_198._1_4_;
  uStack_2f3 = auStack_198[5];
  uStack_2f2 = auStack_198._6_2_;
  uVar47 = auStack_198._8_8_;
  if ((auStack_198._8_8_ & 0x80000000000000) != 0) {
    uVar47 = auStack_198._8_8_ & 0xff00ffffffffffff;
    lVar48 = *(long *)(uVar47 - 8);
    lVar28 = lVar48 + 9;
    plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
    if (lVar28 != 0 && plVar29 == (long *)0x0) {
      func_0x0eec74c0(lVar28,8);
    }
    *plVar29 = lVar48;
    func_0x0eee2f00(plVar29 + 1,uVar47,lVar48);
    *(undefined1 *)((long)plVar29 + lVar48 + 8) = 0;
    uVar47 = (ulong)(plVar29 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  cStack_2f0 = (char)uVar47;
  uStack_2ef = (undefined2)(uVar47 >> 8);
  uStack_2ed = (undefined1)(uVar47 >> 0x18);
  uStack_2ec = (uint)(uVar47 >> 0x20);
  plStack_2e8 = (long *)0x0;
  uVar44 = uStack_188;
  if ((uStack_188 & 0x80000000000000) != 0) {
    pbStack_290 = pbVar45;
    uVar44 = uStack_188 & 0xff00ffffffffffff;
    lVar48 = *(long *)(uVar44 - 8);
    lVar28 = lVar48 + 9;
    plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
    if (lVar28 != 0 && plVar29 == (long *)0x0) {
      func_0x0eec74c0(lVar28,8);
    }
    *plVar29 = lVar48;
    func_0x0eee2f00(plVar29 + 1,uVar44,lVar48);
    *(undefined1 *)((long)plVar29 + lVar48 + 8) = 0;
    uVar44 = (ulong)(plVar29 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    pbVar45 = pbStack_290;
  }
  plStack_2e8 = (long *)uVar44;
  pbVar41 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pbVar41 == (byte *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *(undefined **)pbVar41 = &UNK_0f3320d0;
  *(byte **)(pbVar41 + 8) = pbVar45;
  pbVar41[0x10] = 0;
  pbVar41[0x11] = 0;
  pbVar41[0x12] = 0;
  pbVar41[0x13] = 0;
  pbVar41[0x14] = 0;
  pbVar41[0x15] = 0;
  pbVar41[0x16] = 0;
  pbVar41[0x17] = 0;
  pbStack_290 = pbVar41;
  if ((uVar47 & 0x80000000000000) != 0) {
    lVar48 = *(long *)((uVar47 & 0xff00ffffffffffff) - 8);
    lVar28 = lVar48 + 9;
    plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
    if (lVar28 != 0 && plVar29 == (long *)0x0) {
      func_0x0eec74c0(lVar28,8);
    }
    *plVar29 = lVar48;
    func_0x0eee2f00(plVar29 + 1,uVar47 & 0xff00ffffffffffff,lVar48);
    *(undefined1 *)((long)plVar29 + lVar48 + 8) = 0;
    uVar47 = (ulong)(plVar29 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  *(ulong *)(pbStack_290 + 0x10) = uVar47;
  pbStack_290[0x18] = 0;
  pbStack_290[0x19] = 0;
  pbStack_290[0x1a] = 0;
  pbStack_290[0x1b] = 0;
  pbStack_290[0x1c] = 0;
  pbStack_290[0x1d] = 0;
  pbStack_290[0x1e] = 0;
  pbStack_290[0x1f] = 0;
  if ((uVar44 & 0x80000000000000) != 0) {
    lVar48 = *(long *)((uVar44 & 0xff00ffffffffffff) - 8);
    lVar28 = lVar48 + 9;
    plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
    if (lVar28 != 0 && plVar29 == (long *)0x0) {
      func_0x0eec74c0(lVar28,8);
    }
    *plVar29 = lVar48;
    func_0x0eee2f00(plVar29 + 1,uVar44 & 0xff00ffffffffffff,lVar48);
    *(undefined1 *)((long)plVar29 + lVar48 + 8) = 0;
    uVar44 = (ulong)(plVar29 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  *(ulong *)(pbStack_290 + 0x18) = uVar44;
  func_0x0412d680(0xf6b4d60);
  if ((DAT_0f6b4d58 == '\0') && (iVar23 = func_0x04108328(&DAT_0f6b4d58), iVar23 != 0)) {
    _DAT_0f6b4d48 = (undefined1  [16])0x0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    func_0x0410844d(&DAT_0f6b4d58);
  }
  if (_DAT_0f6b4d48 == (undefined *)0x0) {
LAB_0bd70042:
    puVar46 = &DAT_0f6b4d48;
  }
  else {
    uVar25 = auStack_288._0_8_;
    bVar49 = (auStack_288[8] & 1) != 0;
    puVar37 = auStack_288 + 9;
    if (bVar49) {
      puVar37 = (undefined1 *)auStack_278._8_8_;
    }
    uVar47 = (ulong)(auStack_288[8] >> 1);
    if (bVar49) {
      uVar47 = auStack_278._0_8_;
    }
    puVar46 = &DAT_0f6b4d48;
    puVar36 = _DAT_0f6b4d48;
    do {
      uVar44 = *(ulong *)(puVar36 + 0x20);
      bVar22 = (uVar44 >= (ulong)uVar25 && uVar44 != uVar25) - (uVar44 < (ulong)uVar25);
      if (uVar44 == uVar25) {
        if ((puVar36[0x28] & 1) == 0) {
          uVar44 = (ulong)((byte)puVar36[0x28] >> 1);
          puVar43 = puVar36 + 0x29;
        }
        else {
          uVar44 = *(ulong *)(puVar36 + 0x30);
          puVar43 = *(undefined **)(puVar36 + 0x38);
        }
        uVar42 = uVar44;
        if (uVar47 < uVar44) {
          uVar42 = uVar47;
        }
        iVar23 = func_0x0eee2ff0(puVar43,puVar37,uVar42);
        if (iVar23 == 0) {
          iVar23 = (int)(char)((uVar47 < uVar44) - (uVar44 < uVar47));
        }
        bVar22 = (0 < iVar23) - (iVar23 < 0);
      }
      if (-1 < (char)bVar22) {
        puVar46 = puVar36;
      }
      puVar36 = *(undefined **)(puVar36 + (bVar22 >> 4 & 8));
    } while (puVar36 != (undefined *)0x0);
    if (puVar46 == &DAT_0f6b4d48) goto LAB_0bd70042;
    if (uVar25 == *(ulong *)(puVar46 + 0x20)) {
      bVar49 = (puVar46[0x28] & 1) != 0;
      puVar36 = puVar46 + 0x29;
      if (bVar49) {
        puVar36 = *(undefined **)(puVar46 + 0x38);
      }
      uVar44 = (ulong)((byte)puVar46[0x28] >> 1);
      if (bVar49) {
        uVar44 = *(ulong *)(puVar46 + 0x30);
      }
      uVar42 = uVar47;
      if (uVar44 < uVar47) {
        uVar42 = uVar44;
      }
      iVar23 = func_0x0eee2ff0(puVar37,puVar36,uVar42);
      bVar49 = uVar47 < uVar44;
      if (iVar23 != 0) {
        bVar49 = iVar23 < 0;
      }
      if (bVar49) goto LAB_0bd70042;
    }
    else if ((ulong)uVar25 < *(ulong *)(puVar46 + 0x20)) goto LAB_0bd70042;
  }
  if ((DAT_0f6b4d58 == '\0') && (iVar23 = func_0x04108328(&DAT_0f6b4d58), iVar23 != 0)) {
    _DAT_0f6b4d48 = (undefined1  [16])0x0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    func_0x0410844d(&DAT_0f6b4d58);
  }
  if ((puVar46 == &DAT_0f6b4d48) ||
     (puVar36 = *(undefined **)(puVar46 + 0x50), puVar36 == (undefined *)0x0)) {
LAB_0bd700ba:
    puVar33 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (puVar33 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1c0,0);
    }
    *(undefined1 (*) [16])(puVar33 + 1) = (undefined1  [16])0x0;
    *puVar33 = &UNK_0f331f88;
    _auStack_258 = (undefined1  [16])0x0;
    puVar33[4] = &UNK_0f2ccd78;
    *(undefined1 (*) [16])(puVar33 + 5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 7) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 9) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 0xb) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar33 + 0xd) = 0;
    func_0x04aa75f0(puVar33 + 0xe,&bStack_2d8,&UNK_01254d89);
    *(undefined1 *)(puVar33 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar33 + 0x11) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 0x13) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 0x15) = (undefined1  [16])0x0;
    puVar33[0x17] = 0xffffffff;
    *(undefined1 (*) [16])(puVar33 + 0x26) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 0x1a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 0x1c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar33 + 0x1e) = (undefined1  [16])0x0;
    puVar33[4] = &UNK_0f331fd8;
    puVar2 = puVar33 + 0x2e;
    *(undefined1 (*) [16])(puVar33 + 0x2e) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar33 + 0x36) = 0;
    if (puVar2 != (undefined8 *)auStack_258) {
      if (auStack_258 == (undefined1  [8])0x0) {
        auVar26 = (undefined1  [8])0x0;
      }
      else {
        (**(code **)auStack_258)(auStack_258,puVar2);
        auVar26 = auStack_258;
      }
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uStack_250;
      _auStack_258 = auVar18 << 0x40;
      *puVar2 = auVar26;
    }
    if (puVar33 != (undefined8 *)&DAT_0f552080) {
      pbVar45 = (byte *)(puVar33 + 0x12);
      if ((*pbVar45 & 1) == 0) {
        if ((DAT_0f552110 & 1) == 0) {
          puVar33[0x14] = _DAT_0f552120;
          uVar47 = _DAT_0f552118;
          *(ulong *)pbVar45 = CONCAT71(uRam000000000f552111,DAT_0f552110);
          puVar33[0x13] = uVar47;
        }
        else {
          func_0x04885070(pbVar45,_DAT_0f552120,_DAT_0f552118);
        }
      }
      else {
        uVar47 = (ulong)(DAT_0f552110 >> 1);
        uVar25 = 0xf552111;
        if ((DAT_0f552110 & 1) != 0) {
          uVar47 = _DAT_0f552118;
          uVar25 = _DAT_0f552120;
        }
        func_0x04885120(pbVar45,uVar25,uVar47);
      }
    }
    puVar33[0x11] = _DAT_0f552108;
    puVar33[0x15] = 0;
    if (auStack_258 != (undefined1  [8])0x0) {
      (**(code **)((long)auStack_258 + 8))(auStack_258);
    }
    bStack_1c8 = (byte)(puVar33 + 4);
    uStack_1c7 = (uint7)((ulong)(puVar33 + 4) >> 8);
    cStack_1c0 = (char)puVar33;
    uStack_1bf = (undefined7)((ulong)puVar33 >> 8);
    if ((DAT_0f6b4d58 == '\0') && (iVar23 = func_0x04108328(&DAT_0f6b4d58), iVar23 != 0)) {
      _DAT_0f6b4d48 = (undefined1  [16])0x0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    pbVar45 = pbStack_290;
    auStack_258 = (undefined1  [8])auStack_288;
    lVar28 = func_0x0b5d53e0(&DAT_0f6b4d40,auStack_288,&UNK_01563a4f,auStack_258,&bStack_2d8);
    auStack_258 = (undefined1  [8])&bStack_2b8;
    lVar28 = func_0x0b5d5780(lVar28 + 0x48,&bStack_2b8,&UNK_01563a4f,auStack_258,&bStack_2d8);
    if (CONCAT71(uStack_1bf,cStack_1c0) != 0) {
      LOCK();
      plVar29 = (long *)(CONCAT71(uStack_1bf,cStack_1c0) + 8);
      *plVar29 = *plVar29 + 1;
      UNLOCK();
    }
    plVar29 = *(long **)(lVar28 + 0x40);
    *(ulong *)(lVar28 + 0x38) = CONCAT71(uStack_1c7,bStack_1c8);
    *(ulong *)(lVar28 + 0x40) = CONCAT71(uStack_1bf,cStack_1c0);
    if (plVar29 != (long *)0x0) {
      LOCK();
      plVar40 = plVar29 + 1;
      lVar28 = *plVar40;
      *plVar40 = *plVar40 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        FUN_0412c2d0(plVar29);
      }
    }
    (**(code **)(*(long *)pbVar45 + 0x30))(pbVar45,&bStack_1c8);
  }
  else {
    puVar43 = puVar46 + 0x50;
    do {
      bVar22 = func_0x04fa7a10(puVar36 + 0x20,&bStack_2b8);
      if (bVar22 == 0) {
        puVar43 = puVar36;
      }
      puVar36 = *(undefined **)(puVar36 + (ulong)bVar22 * 8);
    } while (puVar36 != (undefined *)0x0);
    if ((puVar43 == puVar46 + 0x50) ||
       (cVar21 = func_0x04fa7a10(&bStack_2b8,puVar43 + 0x20), cVar21 != '\0')) goto LAB_0bd700ba;
    bStack_1c8 = (byte)*(undefined8 *)(puVar43 + 0x38);
    uStack_1c7 = (uint7)((ulong)*(undefined8 *)(puVar43 + 0x38) >> 8);
    cStack_1c0 = (char)*(undefined8 *)(puVar43 + 0x40);
    uStack_1bf = (undefined7)((ulong)*(undefined8 *)(puVar43 + 0x40) >> 8);
    pbVar45 = pbStack_290;
    if (*(long *)(puVar43 + 0x40) != 0) {
      LOCK();
      plVar29 = (long *)(*(long *)(puVar43 + 0x40) + 8);
      *plVar29 = *plVar29 + 1;
      UNLOCK();
    }
  }
  func_0x0412d6b0(0xf6b4d60);
  (**(code **)(*(long *)pbVar45 + 0x28))(pbVar45);
  if (((ulong)plStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_2e8 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_2e8 = (long *)0x0;
  if ((uStack_2ec & 0x800000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT44(uStack_2ec,CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0))) &
               0xff00ffffffffffff) - 8);
  }
  cStack_2f0 = '\0';
  uStack_2ef = 0;
  uStack_2ed = 0;
  uStack_2ec = 0;
  if ((auStack_288[8] & 1) != 0) {
    func_0x0412a280(auStack_278._8_8_,(ulong)stack0xfffffffffffffd80 & 0xfffffffffffffffe);
  }
  if ((bStack_2a2 & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT17(uStack_2a1,CONCAT16(bStack_2a2,CONCAT51(uStack_2a7,uStack_2a8))) &
               0xff00ffffffffffff) - 8);
  }
  uStack_2a8 = 0;
  uStack_2a7 = 0;
  bStack_2a2 = 0;
  uStack_2a1 = 0;
  if ((uStack_2aa & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT26(uStack_2aa,CONCAT51(uStack_2af,bStack_2b0)) & 0xff00ffffffffffff) - 8);
  }
  if ((char)uStack_1b0 == '\0') goto LAB_0bd70be1;
  plVar29 = (long *)CONCAT71(uStack_1c7,bStack_1c8);
  if ((char)plVar29[9] == '\0') {
    func_0x0be094e0(auStack_258,alStack_1a8,&puStack_138);
    cVar21 = (**(code **)(*plVar29 + 0x38))(plVar29,auStack_258,0);
    if (cVar21 == '\0') {
LAB_0bd7078f:
      bVar49 = false;
    }
    else {
      bVar49 = true;
      lVar28 = plVar29[0x18] - plVar29[0x17];
      if (lVar28 != 0) {
        lVar28 = (lVar28 >> 3) * -0x30c30c30c30c30c3;
        pcVar30 = (char *)(plVar29[0x17] + 0xa0);
        uVar47 = 0;
LAB_0bd70547:
        if ((*pcVar30 != '\x01') ||
           ((*(ulong *)(auStack_220._8_8_ + (uVar47 >> 6) * 8) >> (uVar47 & 0x3f) & 1) != 0))
        goto LAB_0bd70535;
        _auStack_288 = (undefined1  [16])0x0;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = auStack_278._8_8_;
        auStack_278 = auVar19 << 0x40;
        bStack_2b8 = 0;
        uStack_2b7 = 0;
        bStack_2b0 = 0;
        uStack_2af = 0;
        uStack_2aa = 0;
        uStack_2a8 = 0;
        uStack_2a7 = 0;
        bStack_2a2 = 0;
        uStack_2a1 = 0;
        lVar48 = 0x28;
        uVar47 = 0;
        do {
          lVar39 = plVar29[0x17];
          if ((*(byte *)(lVar39 + -0x10 + lVar48) & 1) == 0) {
            lVar39 = lVar39 + lVar48 + -0xf;
          }
          else {
            lVar39 = *(long *)(lVar39 + lVar48);
          }
          bStack_2d8 = (byte)lVar39;
          uStack_2d7 = (undefined4)((ulong)lVar39 >> 8);
          uStack_2d3 = (ushort)((ulong)lVar39 >> 0x28);
          uStack_2d1 = (undefined1)((ulong)lVar39 >> 0x38);
          func_0x0470d9a0(&bStack_2f8,&UNK_0141230a,3,0xc,&bStack_2d8);
          bVar49 = (bStack_2f8 & 1) == 0;
          plVar40 = plStack_2e8;
          if (bVar49) {
            plVar40 = (long *)&uStack_2f7;
          }
          uVar44 = (ulong)(bStack_2f8 >> 1);
          if (!bVar49) {
            uVar44 = CONCAT44(uStack_2ec,CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0)));
          }
          func_0x0412f8c0(&bStack_2b8,plVar40,uVar44);
          if ((*(ulong *)(auStack_220._8_8_ + (uVar47 >> 6) * 8) >> (uVar47 & 0x3f) & 1) == 0) {
            bVar49 = (bStack_2f8 & 1) == 0;
            plVar40 = plStack_2e8;
            if (bVar49) {
              plVar40 = (long *)&uStack_2f7;
            }
            uVar44 = (ulong)(bStack_2f8 >> 1);
            if (!bVar49) {
              uVar44 = CONCAT44(uStack_2ec,CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,cStack_2f0)));
            }
            func_0x0412f8c0(auStack_288,plVar40,uVar44);
          }
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(plStack_2e8,
                            CONCAT26(uStack_2f2,CONCAT15(uStack_2f3,CONCAT41(uStack_2f7,bStack_2f8))
                                    ) & 0xfffffffffffffffe);
          }
          uVar47 = uVar47 + 1;
          lVar48 = lVar48 + 0xa8;
        } while (lVar28 - uVar47 != 0);
        lVar28 = plVar29[0x18];
        lVar48 = plVar29[0x17];
        if (lVar28 - lVar48 != 0) {
          lVar39 = 0xa0;
          uVar47 = 0;
          do {
            if ((*(char *)(plVar29[0x17] + lVar39) == '\x01') &&
               ((*(ulong *)(auStack_220._8_8_ + (uVar47 >> 6) * 8) >> (uVar47 & 0x3f) & 1) == 0)) {
              func_0x0b63c8a0((undefined4)uStack_250,alStack_1a8,plVar29[0x17] + lVar39 + -0x88,
                              auStack_288,&bStack_2b8);
            }
            uVar47 = uVar47 + 1;
            lVar39 = lVar39 + 0xa8;
          } while ((lVar28 - lVar48 >> 3) * -0x30c30c30c30c30c3 - uVar47 != 0);
        }
        if ((bStack_2b8 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_2a1,CONCAT16(bStack_2a2,CONCAT51(uStack_2a7,uStack_2a8))),
                          CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
        }
        if ((auStack_288[0] & 1) != 0) {
          func_0x0412a280(auStack_278._0_8_,auStack_288._0_8_ & 0xfffffffffffffffe);
        }
        goto LAB_0bd7078f;
      }
    }
LAB_0bd70791:
    if ((uStack_1d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1d8 = 0;
    if ((uStack_1e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1e0 = 0;
    if ((auStack_200[0] & 1) != 0) {
      func_0x0412a280(lStack_1f0,auStack_200._0_8_ & 0xfffffffffffffffe);
    }
    if (auStack_220._8_8_ != 0) {
      func_0x0412a280(auStack_220._8_8_,auStack_210._8_8_ << 3);
    }
    if ((uStack_240 & 1) != 0) {
      func_0x0412a280(uStack_230,uStack_240 & 0xfffffffffffffffe);
    }
    if (!bVar49) goto LAB_0bd70be1;
    plVar29 = (long *)CONCAT71(uStack_1c7,bStack_1c8);
  }
  stack0xfffffffffffffd80 = uStack_13c;
  auStack_288._0_8_ = uStack_118;
  bVar49 = (*pbStack_110 & 1) != 0;
  if (bVar49) {
    pbStack_148 = *(byte **)(pbStack_110 + 0x10);
  }
  uVar47 = (ulong)(*pbStack_110 >> 1);
  if (bVar49) {
    uVar47 = *(ulong *)(pbStack_110 + 8);
  }
  if (0xfffffffffffffff7 < uVar47) {
    FUN_04882e30();
LAB_0bd70ef0:
    iVar23 = func_0x04108328(&DAT_0f6b4d58);
    if (iVar23 != 0) {
      _DAT_0f6b4d48 = (undefined1  [16])0x0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    goto LAB_0bd6e04c;
  }
  if (uVar47 < 0x17) {
    uStack_180 = CONCAT71(uStack_180._1_7_,(char)uVar47 * '\x02');
    lVar28 = (long)&uStack_180 + 1;
    if (uVar47 != 0) goto LAB_0bd70942;
  }
  else {
    uVar44 = 0x1a;
    if ((uVar47 | 7) != 0x17) {
      uVar44 = (uVar47 | 7) + 1;
    }
    lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
    if (lVar28 == 0) {
      func_0x0eec74c0(uVar44,0);
    }
    uStack_180 = uVar44 | 1;
    uStack_178 = uVar47;
    lStack_170 = lVar28;
LAB_0bd70942:
    func_0x0eee2ee0(lVar28,pbStack_148,uVar47);
  }
  *(undefined1 *)(lVar28 + uVar47) = 0;
  func_0x0be094e0(auStack_258,alStack_1a8,&puStack_138);
  if ((auStack_200[0] & 1) == 0) {
    if ((uStack_180 & 1) == 0) {
      lStack_1f0 = lStack_170;
      auStack_200._8_8_ = uStack_178;
      auStack_200._0_8_ = uStack_180;
    }
    else {
      func_0x04885070(auStack_200,lStack_170,uStack_178);
    }
  }
  else {
    uVar47 = uStack_180 >> 1 & 0x7f;
    lVar28 = (long)&uStack_180 + 1;
    if ((uStack_180 & 1) != 0) {
      uVar47 = uStack_178;
      lVar28 = lStack_170;
    }
    func_0x04885120(auStack_200,lVar28,uVar47);
  }
  auStack_258 = (undefined1  [8])auStack_288;
  (**(code **)(*plVar29 + 0x40))(plVar29,auStack_258);
  lVar28 = plVar29[0x18];
  lVar48 = plVar29[0x17];
  if (lVar28 - lVar48 != 0) {
    uVar47 = 0;
    do {
      if ((*(ulong *)(auStack_220._8_8_ + (uVar47 >> 6) * 8) >> (uVar47 & 0x3f) & 1) == 0) {
        lVar4 = *(long *)(plVar29[0x17] + 0x90 + uVar47 * 0xa8);
        for (lVar39 = *(long *)(plVar29[0x17] + 0x88 + uVar47 * 0xa8); lVar39 != lVar4;
            lVar39 = lVar39 + 0x38) {
          (**(code **)(**(long **)(lVar39 + 0x28) + 0x30))(*(long **)(lVar39 + 0x28),auStack_258);
        }
      }
      uVar47 = uVar47 + 1;
    } while (uVar47 != (lVar28 - lVar48 >> 3) * -0x30c30c30c30c30c3);
  }
  if (plVar29[0x1a] != 0) {
    (**(code **)(plVar29[0x1a] + 0x10))(plVar29 + 0x1a,auStack_258);
  }
  if ((uStack_1d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1d8 = 0;
  if ((uStack_1e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1e0 = 0;
  if ((auStack_200[0] & 1) != 0) {
    func_0x0412a280(lStack_1f0,auStack_200._0_8_ & 0xfffffffffffffffe);
  }
  if (auStack_220._8_8_ != 0) {
    func_0x0412a280(auStack_220._8_8_,auStack_210._8_8_ << 3);
  }
  if ((uStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,uStack_240 & 0xfffffffffffffffe);
  }
  if ((uStack_180 & 1) != 0) {
    func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
  }
LAB_0bd70be1:
  plVar29 = (long *)CONCAT71(uStack_1bf,cStack_1c0);
  if (plVar29 != (long *)0x0) {
    LOCK();
    plVar40 = plVar29 + 1;
    lVar28 = *plVar40;
    *plVar40 = *plVar40 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      FUN_0412c2d0(plVar29);
    }
  }
  if ((uStack_128 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
  }
  uStack_128 = 0;
  if ((uStack_130 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_130 & 0xff00ffffffffffff) - 8);
  }
LAB_0bd70c7b:
  if ((uStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_188 & 0xff00ffffffffffff) - 8);
  }
  uStack_188 = 0;
  if ((auStack_198._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_198._8_8_ & 0xff00ffffffffffff) - 8);
  }
LAB_0bd70ce5:
  func_0x0485e2d0(&pbStack_f0);
  func_0x04863610(alStack_1a8);
  func_0x0eeb81b0(auStack_108);
  return;
}



/* ---- referenced strings ----
 * 0x1217897  animation_controllers
 * 0x124dda3  controller\.animation\.[a-zA-Z0-9_.-]+
 * 0x124ddb3  ation\.[a-zA-Z0-9_.-]+
 * 0x14ea360          
 */
