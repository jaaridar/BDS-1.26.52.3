/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc2cb5e0 (ELF vaddr 0xc1cb5e0)
 * Label: caller-of-callee
 * Body:  [[0c2cb5e0, 0c2d4096]]
 * Ghidra: FUN_0c2cb5e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c2cb5e0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined *puVar18;
  uint *puVar19;
  undefined8 **ppuVar20;
  undefined **ppuVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  bool bVar26;
  undefined8 *puStack_1158;
  byte bStack_1150;
  undefined4 uStack_114f;
  undefined2 uStack_114b;
  undefined1 uStack_1149;
  undefined1 uStack_1148;
  undefined2 uStack_1147;
  undefined2 uStack_1145;
  undefined1 uStack_1143;
  undefined1 uStack_1142;
  undefined1 uStack_1141;
  undefined1 uStack_1140;
  undefined4 uStack_113f;
  undefined1 uStack_113b;
  undefined1 uStack_113a;
  undefined1 uStack_1139;
  undefined8 uStack_1138;
  long *plStack_1118;
  uint *puStack_1110;
  undefined8 *puStack_1108;
  byte bStack_1100;
  undefined4 uStack_10ff;
  undefined2 uStack_10fb;
  undefined1 uStack_10f9;
  undefined1 uStack_10f8;
  undefined2 uStack_10f7;
  undefined1 uStack_10f5;
  undefined1 uStack_10f4;
  undefined2 uStack_10f3;
  undefined1 uStack_10f1;
  undefined1 uStack_10f0;
  undefined6 uStack_10ef;
  undefined1 uStack_10e9;
  undefined8 uStack_10e8;
  long *plStack_10c0;
  long *plStack_10b8;
  undefined1 uStack_10a9;
  undefined8 uStack_10a8;
  ulong uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  long *plStack_1080;
  undefined8 *puStack_1078;
  undefined8 uStack_1070;
  undefined8 *puStack_1038;
  undefined8 uStack_1030;
  undefined8 *puStack_ff8;
  undefined8 uStack_ff0;
  undefined8 *puStack_fb8;
  undefined8 uStack_fb0;
  undefined *puStack_f78;
  long *plStack_f70;
  undefined *puStack_f38;
  long *plStack_f30;
  undefined *puStack_ef8;
  long *plStack_ef0;
  undefined *puStack_eb8;
  long *plStack_eb0;
  undefined8 *puStack_e78;
  undefined8 uStack_e70;
  undefined8 *puStack_e38;
  undefined8 uStack_e30;
  undefined8 *puStack_df8;
  undefined8 uStack_df0;
  undefined8 *puStack_db8;
  undefined8 uStack_db0;
  undefined8 *puStack_d78;
  undefined8 uStack_d70;
  undefined8 *puStack_d38;
  undefined8 uStack_d30;
  undefined8 *puStack_cf8;
  undefined8 uStack_cf0;
  undefined8 *puStack_cb8;
  undefined8 uStack_cb0;
  undefined8 *puStack_c78;
  undefined8 uStack_c70;
  undefined8 *puStack_c38;
  undefined8 uStack_c30;
  undefined8 *puStack_bf8;
  undefined8 uStack_bf0;
  undefined8 *puStack_bb8;
  undefined8 uStack_bb0;
  undefined8 *puStack_b78;
  undefined8 uStack_b70;
  undefined8 *puStack_b38;
  undefined8 uStack_b30;
  undefined8 *puStack_af8;
  undefined8 uStack_af0;
  undefined8 *puStack_ab8;
  undefined8 uStack_ab0;
  undefined *puStack_a78;
  undefined8 uStack_a70;
  undefined *puStack_a38;
  undefined8 uStack_a30;
  undefined *puStack_9f8;
  undefined8 uStack_9f0;
  undefined *puStack_9b8;
  undefined8 uStack_9b0;
  undefined *puStack_978;
  undefined8 uStack_970;
  undefined *puStack_938;
  undefined8 uStack_930;
  undefined *puStack_8f8;
  undefined8 uStack_8f0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined *puStack_878;
  undefined8 uStack_870;
  undefined *puStack_838;
  undefined8 uStack_830;
  undefined *puStack_7f8;
  undefined8 uStack_7f0;
  undefined *puStack_7b8;
  undefined8 uStack_7b0;
  undefined *puStack_778;
  undefined8 uStack_770;
  undefined *puStack_738;
  undefined8 uStack_730;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined *puStack_638;
  undefined8 uStack_630;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined *puStack_538;
  undefined8 uStack_530;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  plStack_10c0 = param_2;
  cVar8 = func_0x0551ca70(param_2,&UNK_0f3561b0);
  uVar16 = *param_1;
  if (cVar8 == '\0') {
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    uStack_10e8 = 0;
    bStack_1100 = 0x16;
    uStack_10ff = 0x63736564;
    uStack_10fb = 0x6972;
    uStack_10f9 = 0x70;
    uStack_10f8 = 0x74;
    uStack_10f7 = 0x6f69;
    uStack_10f5 = 0x6e;
    puStack_1108 = (undefined8 *)0x25922c29eda62c81;
    puStack_ab8 = (undefined8 *)0x0;
    uStack_ab0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35b350;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_ab8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_ab8)(&puStack_ab8,&puStack_1158);
      puStack_1158 = puStack_ab8;
    }
    puStack_ab8 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plStack_1118 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35b3a0;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plStack_1118 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    puStack_1110 = (uint *)(plVar9 + 1);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35b498;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35b4e8;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2d9200(uVar16,&puStack_1108,0);
    plVar12 = *(long **)(puVar11 + 0x24);
    if (plVar12 < *(long **)(puVar11 + 0x26)) {
      plVar12[2] = 0;
      plVar12[3] = 0;
      *plVar12 = 0;
      plVar12[1] = 0;
      plVar12[4] = 0;
      if (plVar12 != plStack_1118) {
        if ((*puVar19 & 1) == 0) {
          plVar12[3] = plVar9[0x14];
          lVar14 = plVar9[0x13];
          plVar12[1] = *(long *)puVar19;
          plVar12[2] = lVar14;
        }
        else {
          FUN_04885070(plVar12 + 1,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar12 = *plStack_1118;
      plVar12[5] = (long)(puVar10 + 4);
      plVar12[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar12 = plVar12 + 7;
      *(long **)(puVar11 + 0x24) = plVar12;
    }
    else {
      plVar12 = (long *)func_0x0c2dc890(puVar11 + 0x22,plStack_1118,&puStack_1158);
    }
    *(long **)(puVar11 + 0x24) = plVar12;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar12 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar12 = *plVar12 + 1;
      UNLOCK();
    }
    plVar12 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar12 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar19 = puStack_1110;
    LOCK();
    lVar14 = *(long *)puStack_1110;
    *(long *)puStack_1110 = *(long *)puStack_1110 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *(long *)puVar19;
      *(long *)puVar19 = *(long *)puVar19 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *(long *)puStack_1110;
      *(long *)puStack_1110 = *(long *)puStack_1110 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_ab8 != (undefined8 *)0x0) {
      (*(code *)puStack_ab8[1])(&puStack_ab8);
    }
    if ((bStack_1100 & 1) != 0) {
      uVar24 = CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)));
      uVar16 = CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0));
      goto LAB_0c2cbf2a;
    }
  }
  else {
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    uStack_10e8 = 0;
    bStack_1100 = 0x16;
    uStack_10ff = 0x63736564;
    uStack_10fb = 0x6972;
    uStack_10f9 = 0x70;
    uStack_10f8 = 0x74;
    uStack_10f7 = 0x6f69;
    uStack_10f5 = 0x6e;
    puStack_1108 = (undefined8 *)0x25922c29eda62c81;
    puStack_af8 = (undefined8 *)0x0;
    uStack_af0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35b5a0;
    puVar19 = (uint *)(plVar9 + 4);
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_af8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_af8)(&puStack_af8,&puStack_1158);
      puStack_1158 = puStack_af8;
    }
    puStack_af8 = (undefined8 *)0x0;
    func_0x0c2dcc60(puVar19,&puStack_1158);
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 0;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35b6e8;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35b738;
    puVar10[0xe] = puVar19;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2d9200(uVar16,&puStack_1108,1);
    plVar12 = plVar9 + 0x11;
    plVar15 = *(long **)(puVar11 + 0x24);
    puStack_1110 = puVar19;
    if (plVar15 < *(long **)(puVar11 + 0x26)) {
      plVar15[2] = 0;
      plVar15[3] = 0;
      *plVar15 = 0;
      plVar15[1] = 0;
      plVar15[4] = 0;
      if (plVar15 != plVar12) {
        if ((*(byte *)(plVar9 + 0x12) & 1) == 0) {
          plVar15[3] = plVar9[0x14];
          lVar14 = plVar9[0x13];
          plVar15[1] = plVar9[0x12];
          plVar15[2] = lVar14;
        }
        else {
          plStack_10b8 = plVar12;
          FUN_04885070(plVar15 + 1,plVar9[0x14],plVar9[0x13]);
          plVar12 = plStack_10b8;
        }
      }
      *plVar15 = *plVar12;
      plVar15[5] = (long)(puVar10 + 4);
      plVar15[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar15 = plVar15 + 7;
      *(long **)(puVar11 + 0x24) = plVar15;
    }
    else {
      plVar15 = (long *)func_0x0c2dc890(puVar11 + 0x22,plVar12,&puStack_1158);
    }
    *(long **)(puVar11 + 0x24) = plVar15;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar12 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar12 = *plVar12 + 1;
      UNLOCK();
    }
    plVar12 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar12 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = plStack_1118;
    LOCK();
    lVar14 = *plStack_1118;
    *plStack_1118 = *plStack_1118 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plStack_1118;
      *plStack_1118 = *plStack_1118 + -1;
      UNLOCK();
    }
    puVar19 = puStack_1110;
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      puVar19 = puStack_1110;
    }
    puStack_1110 = puVar19;
    if (puStack_af8 != (undefined8 *)0x0) {
      (*(code *)puStack_af8[1])(&puStack_af8);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0x14;
    uStack_114f = 0x6e656469;
    uStack_114b = 0x6974;
    uStack_1149 = 0x66;
    uStack_1148 = 0x69;
    uStack_1147 = 0x7265;
    puStack_1158 = (undefined8 *)0x1ec7b02a7b9da20c;
    uStack_170 = 0;
    puStack_178 = &UNK_0f35b9c0;
    func_0x0c2d6d40(puVar19,&puStack_1158,1,&puStack_178);
    if (puStack_178 != (undefined *)0x0) {
      (**(code **)(puStack_178 + 8))(&puStack_178);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0x10;
    uStack_114f = 0x65746163;
    uStack_114b = 0x6f67;
    uStack_1149 = 0x72;
    uStack_1148 = 0x79;
    puStack_1158 = (undefined8 *)0x16aa56d5d04b3781;
    uStack_1b0 = 0;
    puStack_1b8 = &UNK_0f35b9d8;
    func_0x0c2d6d40(puVar19,&puStack_1158,0,&puStack_1b8);
    if (puStack_1b8 != (undefined *)0x0) {
      (**(code **)(puStack_1b8 + 8))(&puStack_1b8);
    }
    if ((bStack_1150 & 1) != 0) {
      uVar24 = CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
      uVar16 = CONCAT17(uStack_1139,
                        CONCAT16(uStack_113a,CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140))
                                ));
LAB_0c2cbf2a:
      func_0x0412a280(uVar16,uVar24 & 0xfffffffffffffffe);
    }
  }
  uVar16 = *param_1;
  uStack_10f5 = 0;
  uStack_10f4 = 0;
  uStack_10f3 = 0;
  uStack_10f1 = 0;
  uStack_10f0 = 0;
  uStack_10ef = 0;
  uStack_10e9 = 0;
  uStack_10e8 = 0;
  bStack_1100 = 0x14;
  uStack_10ff = 0x706d6f63;
  uStack_10fb = 0x6e6f;
  uStack_10f9 = 0x65;
  uStack_10f8 = 0x6e;
  uStack_10f7 = 0x7374;
  puStack_1108 = (undefined8 *)0x551c507aec893ca9;
  puStack_b38 = (undefined8 *)0x0;
  uStack_b30 = 0;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f35b5a0;
  plVar12 = plVar9 + 4;
  puStack_1158 = (undefined8 *)0x0;
  bStack_1150 = 0;
  uStack_114f = 0;
  uStack_114b = 0;
  uStack_1149 = 0;
  if (puStack_b38 == (undefined8 *)0x0) {
    puStack_1158 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_b38)(&puStack_b38,&puStack_1158);
    puStack_1158 = puStack_b38;
  }
  puStack_b38 = (undefined8 *)0x0;
  func_0x0c2dcc60(plVar12,&puStack_1158);
  plVar15 = plVar9 + 1;
  if (puStack_1158 != (undefined8 *)0x0) {
    (*(code *)puStack_1158[1])(&puStack_1158);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  plStack_1118 = plVar15;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f35b6e8;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f35b738;
  puVar10[0xe] = plVar12;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_1150 = (byte)puVar10;
  uStack_114f = (undefined4)((ulong)puVar10 >> 8);
  uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
  puStack_1158 = puVar10 + 4;
  puVar11 = (undefined4 *)func_0x0c2d9200(uVar16,&puStack_1108,0);
  puVar19 = (uint *)(plVar9 + 0x11);
  puVar13 = *(uint **)(puVar11 + 0x24);
  if (puVar13 < *(uint **)(puVar11 + 0x26)) {
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[8] = 0;
    puVar13[9] = 0;
    if (puVar13 != puVar19) {
      if ((*(byte *)(plVar9 + 0x12) & 1) == 0) {
        *(long *)(puVar13 + 6) = plVar9[0x14];
        lVar14 = plVar9[0x13];
        *(long *)(puVar13 + 2) = plVar9[0x12];
        *(long *)(puVar13 + 4) = lVar14;
      }
      else {
        puStack_1110 = puVar19;
        FUN_04885070(puVar13 + 2,plVar9[0x14],plVar9[0x13]);
        puVar19 = puStack_1110;
      }
    }
    *(long *)puVar13 = *(long *)puVar19;
    *(undefined8 **)(puVar13 + 10) = puVar10 + 4;
    *(undefined8 **)(puVar13 + 0xc) = puVar10;
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
    puVar13 = puVar13 + 0xe;
    *(uint **)(puVar11 + 0x24) = puVar13;
  }
  else {
    puVar13 = (uint *)func_0x0c2dc890(puVar11 + 0x22,puVar19,&puStack_1158);
  }
  plVar15 = plStack_10c0;
  *(uint **)(puVar11 + 0x24) = puVar13;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_1118;
  LOCK();
  lVar14 = *plStack_1118;
  *plStack_1118 = *plStack_1118 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar14 != 0) goto LAB_0c2cc25f;
LAB_0c2cc697:
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    plVar9[0x16] = 0;
  }
  else {
    LOCK();
    lVar14 = *plStack_1118;
    *plStack_1118 = *plStack_1118 + -1;
    UNLOCK();
    if (lVar14 == 0) goto LAB_0c2cc697;
LAB_0c2cc25f:
    plVar9[0x16] = 0;
  }
  if (puStack_b38 != (undefined8 *)0x0) {
    (*(code *)puStack_b38[1])(&puStack_b38);
  }
  if ((bStack_1100 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                    CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100))) &
                    0xfffffffffffffffe);
  }
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113b = 0;
  uStack_113a = 0;
  uStack_1139 = 0;
  uStack_1138 = 0;
  bStack_1150 = 0x1e;
  uStack_114f = 0x656e696d;
  uStack_114b = 0x7263;
  uStack_1149 = 0x61;
  uStack_1148 = 0x66;
  uStack_1147 = 0x3a74;
  uStack_1145 = 0x6c62;
  uStack_1143 = 0x6f;
  uStack_1142 = 99;
  uStack_1141 = 0x6b;
  puStack_1158 = (undefined8 *)0xd3a2ca0d43870687;
  uStack_1f0 = 0;
  puStack_1f8 = &UNK_0f35b9f0;
  func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_1f8);
  if (puStack_1f8 != (undefined *)0x0) {
    (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  cVar8 = func_0x0551ca70(plVar15,&UNK_0f356188);
  if (cVar8 == '\0') {
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_01267652,0x18);
    puStack_1158 = (undefined8 *)0x96d309e979cdacb1;
    uStack_2f0 = 0;
    puStack_2f8 = &UNK_0f35be10;
    func_0x0c2d78b0(plVar12,&puStack_1158,&puStack_2f8);
    if (puStack_2f8 != (undefined *)0x0) {
      (**(code **)(puStack_2f8 + 8))(&puStack_2f8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_01267652,0x18);
    puStack_1108 = (undefined8 *)0x96d309e979cdacb1;
    puStack_b78 = (undefined8 *)0x0;
    uStack_b70 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35be38;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_b78 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_b78)(&puStack_b78,&puStack_1158);
      puStack_1158 = puStack_b78;
    }
    puStack_b78 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35be88;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35bf80;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35bfd0;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_b78 != (undefined8 *)0x0) {
      (*(code *)puStack_b78[1])(&puStack_b78);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_014a4a8b,0x21);
    puStack_1158 = (undefined8 *)0xb758028ac5d37b13;
    uStack_330 = 0;
    puStack_338 = &UNK_0f35c020;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_338);
    if (puStack_338 != (undefined *)0x0) {
      (**(code **)(puStack_338 + 8))(&puStack_338);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_014a4a8b,0x21);
    puStack_1108 = (undefined8 *)0xb758028ac5d37b13;
    puStack_bb8 = (undefined8 *)0x0;
    uStack_bb0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35c048;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_bb8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_bb8)(&puStack_bb8,&puStack_1158);
      puStack_1158 = puStack_bb8;
    }
    puStack_bb8 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35c098;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35c190;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35c1e0;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_bb8 != (undefined8 *)0x0) {
      (*(code *)puStack_bb8[1])(&puStack_bb8);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_011e233c,0x1a);
    puStack_1158 = (undefined8 *)0xac217dd34288146c;
    uStack_370 = 0;
    puStack_378 = &UNK_0f35c230;
    func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_378);
    if (puStack_378 != (undefined *)0x0) {
      (**(code **)(puStack_378 + 8))(&puStack_378);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_011e233c,0x1a);
    puStack_1108 = (undefined8 *)0xac217dd34288146c;
    puStack_bf8 = (undefined8 *)0x0;
    uStack_bf0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35c258;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_bf8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_bf8)(&puStack_bf8,&puStack_1158);
      puStack_1158 = puStack_bf8;
    }
    puStack_bf8 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35c2a8;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35c3a0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35c3f0;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(long *)puVar19 = *(long *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_10c0;
    plVar1 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      lVar14 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      lVar14 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_bf8 != (undefined8 *)0x0) {
      (*(code *)puStack_bf8[1])(&puStack_bf8);
    }
    if ((bStack_1100 & 1) != 0) {
      uVar24 = CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)));
      uVar16 = CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0));
      goto LAB_0c2cd56a;
    }
  }
  else {
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_014a4a8b,0x21);
    puStack_1158 = (undefined8 *)0xb758028ac5d37b13;
    uStack_230 = 0;
    puStack_238 = &UNK_0f35bbe8;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_238);
    if (puStack_238 != (undefined *)0x0) {
      (**(code **)(puStack_238 + 8))(&puStack_238);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_01267652,0x18);
    puStack_1158 = (undefined8 *)0x96d309e979cdacb1;
    uStack_270 = 0;
    puStack_278 = &UNK_0f35bde0;
    lVar14 = func_0x0c2d78b0(plVar12,&puStack_1158,&puStack_278);
    *(undefined8 *)(lVar14 + 0x150) = 0x4000000001;
    if (puStack_278 != (undefined *)0x0) {
      (**(code **)(puStack_278 + 8))(&puStack_278);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_011e233c,0x1a);
    puStack_1158 = (undefined8 *)0xac217dd34288146c;
    uStack_2b0 = 0;
    puStack_2b8 = &UNK_0f35bdf8;
    func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_2b8);
    if (puStack_2b8 != (undefined *)0x0) {
      (**(code **)(puStack_2b8 + 8))(&puStack_2b8);
    }
    if ((bStack_1150 & 1) != 0) {
      uVar24 = CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
      uVar16 = CONCAT17(uStack_1139,
                        CONCAT16(uStack_113a,CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140))
                                ));
LAB_0c2cd56a:
      func_0x0412a280(uVar16,uVar24 & 0xfffffffffffffffe);
    }
  }
  cVar8 = func_0x0551ca70(plVar15,&UNK_0f356160);
  if (cVar8 == '\0') {
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_01408ccb,0x18);
    puStack_1158 = (undefined8 *)0x7a11570815884c7;
    uStack_570 = 0;
    puStack_578 = &UNK_0f35c4e8;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_578);
    if (puStack_578 != (undefined *)0x0) {
      (**(code **)(puStack_578 + 8))(&puStack_578);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_01408ccb,0x18);
    puStack_1108 = (undefined8 *)0x7a11570815884c7;
    puStack_c38 = (undefined8 *)0x0;
    uStack_c30 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35c510;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_c38 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_c38)(&puStack_c38,&puStack_1158);
      puStack_1158 = puStack_c38;
    }
    puStack_c38 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35c560;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35c658;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35c6a8;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_c38 != (undefined8 *)0x0) {
      (*(code *)puStack_c38[1])(&puStack_c38);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_0138617a,0x17);
    puStack_1158 = (undefined8 *)0x77e0f85551014702;
    uStack_5b0 = 0;
    puStack_5b8 = &UNK_0f35c6f8;
    func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_5b8);
    if (puStack_5b8 != (undefined *)0x0) {
      (**(code **)(puStack_5b8 + 8))(&puStack_5b8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_0138617a,0x17);
    puStack_1108 = (undefined8 *)0x77e0f85551014702;
    puStack_c78 = (undefined8 *)0x0;
    uStack_c70 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35c720;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_c78 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_c78)(&puStack_c78,&puStack_1158);
      puStack_1158 = puStack_c78;
    }
    puStack_c78 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35c770;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35c868;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35c8b8;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_c78 != (undefined8 *)0x0) {
      (*(code *)puStack_c78[1])(&puStack_c78);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_011e228e,0x19);
    puStack_1158 = (undefined8 *)0xe251ec2c64726730;
    uStack_5f0 = 0;
    puStack_5f8 = &UNK_0f35c908;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_5f8);
    if (puStack_5f8 != (undefined *)0x0) {
      (**(code **)(puStack_5f8 + 8))(&puStack_5f8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_011e228e,0x19);
    puStack_1108 = (undefined8 *)0xe251ec2c64726730;
    puStack_cb8 = (undefined8 *)0x0;
    uStack_cb0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35c930;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_cb8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_cb8)(&puStack_cb8,&puStack_1158);
      puStack_1158 = puStack_cb8;
    }
    puStack_cb8 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35c980;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35ca78;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35cac8;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_cb8 != (undefined8 *)0x0) {
      (*(code *)puStack_cb8[1])(&puStack_cb8);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_01335d05,0x17);
    puStack_1158 = (undefined8 *)0x4d912d419b5a4669;
    uStack_630 = 0;
    puStack_638 = &UNK_0f35cb18;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_638);
    if (puStack_638 != (undefined *)0x0) {
      (**(code **)(puStack_638 + 8))(&puStack_638);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_01335d05,0x17);
    puStack_1108 = (undefined8 *)0x4d912d419b5a4669;
    puStack_cf8 = (undefined8 *)0x0;
    uStack_cf0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35cb40;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_cf8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_cf8)(&puStack_cf8,&puStack_1158);
      puStack_1158 = puStack_cf8;
    }
    puStack_cf8 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35cb90;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35cc88;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35ccd8;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_cf8 != (undefined8 *)0x0) {
      (*(code *)puStack_cf8[1])(&puStack_cf8);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_011fde56,0x18);
    puStack_1158 = (undefined8 *)0x86bd3e98e9d58c1c;
    uStack_670 = 0;
    puStack_678 = &UNK_0f35cd28;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_678);
    if (puStack_678 != (undefined *)0x0) {
      (**(code **)(puStack_678 + 8))(&puStack_678);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_011fde56,0x18);
    puStack_1108 = (undefined8 *)0x86bd3e98e9d58c1c;
    puStack_d38 = (undefined8 *)0x0;
    uStack_d30 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35cd50;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_d38 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_d38)(&puStack_d38,&puStack_1158);
      puStack_1158 = puStack_d38;
    }
    puStack_d38 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35cda0;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35ce98;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35cee8;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_d38 != (undefined8 *)0x0) {
      (*(code *)puStack_d38[1])(&puStack_d38);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0x20;
    uStack_114f = _DAT_012e773e;
    uStack_114b = (undefined2)_UNK_012e7742;
    uStack_1149 = (undefined1)((uint)_UNK_012e7742 >> 0x10);
    uStack_1148 = (undefined1)((uint)_UNK_012e7742 >> 0x18);
    uStack_1147 = (undefined2)_UNK_012e7746;
    uStack_1145 = (undefined2)((uint)_UNK_012e7746 >> 0x10);
    uStack_1143 = (undefined1)_UNK_012e774a;
    uStack_1142 = (undefined1)((uint)_UNK_012e774a >> 8);
    uStack_1141 = (undefined1)((uint)_UNK_012e774a >> 0x10);
    uStack_1140 = (undefined1)((uint)_UNK_012e774a >> 0x18);
    puStack_1158 = (undefined8 *)0x6a629adf4951e5bf;
    uStack_6b0 = 0;
    puStack_6b8 = &UNK_0f35cf38;
    func_0x0c2d78b0(plVar12,&puStack_1158,&puStack_6b8);
    if (puStack_6b8 != (undefined *)0x0) {
      (**(code **)(puStack_6b8 + 8))(&puStack_6b8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10ef = 0;
    uStack_10e9 = 0;
    uStack_10e8 = 0;
    bStack_1100 = 0x20;
    uStack_10ff = _DAT_012e773e;
    uStack_10fb = (undefined2)_UNK_012e7742;
    uStack_10f9 = (undefined1)((uint)_UNK_012e7742 >> 0x10);
    uStack_10f8 = (undefined1)((uint)_UNK_012e7742 >> 0x18);
    uStack_10f7 = (undefined2)_UNK_012e7746;
    uStack_10f5 = (undefined1)((uint)_UNK_012e7746 >> 0x10);
    uStack_10f4 = (undefined1)((uint)_UNK_012e7746 >> 0x18);
    uStack_10f3 = (undefined2)_UNK_012e774a;
    uStack_10f1 = (undefined1)((uint)_UNK_012e774a >> 0x10);
    uStack_10f0 = (undefined1)((uint)_UNK_012e774a >> 0x18);
    puStack_1108 = (undefined8 *)0x6a629adf4951e5bf;
    puStack_d78 = (undefined8 *)0x0;
    uStack_d70 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35cf60;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_d78 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_d78)(&puStack_d78,&puStack_1158);
      puStack_1158 = puStack_d78;
    }
    puStack_d78 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35cfb0;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35d0a8;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35d0f8;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_d78 != (undefined8 *)0x0) {
      (*(code *)puStack_d78[1])(&puStack_d78);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_014a4777,0x18);
    puStack_1158 = (undefined8 *)0xe33ae16d52a55e82;
    uStack_6f0 = 0;
    puStack_6f8 = &UNK_0f35d148;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_6f8);
    if (puStack_6f8 != (undefined *)0x0) {
      (**(code **)(puStack_6f8 + 8))(&puStack_6f8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uStack_10f0 = 0;
    uStack_10ef = 0;
    uStack_10e9 = 0;
    puStack_1108 = (undefined8 *)0x0;
    bStack_1100 = 0;
    uStack_10ff = 0;
    uStack_10fb = 0;
    uStack_10f9 = 0;
    uStack_10e8 = 0;
    func_0x0412f5e0(&bStack_1100,&DAT_014a4777,0x18);
    puStack_1108 = (undefined8 *)0xe33ae16d52a55e82;
    puStack_db8 = (undefined8 *)0x0;
    uStack_db0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35d170;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_db8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_db8)(&puStack_db8,&puStack_1158);
      puStack_1158 = puStack_db8;
    }
    puStack_db8 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35d1c0;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35d2b8;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35d308;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_db8 != (undefined8 *)0x0) {
      (*(code *)puStack_db8[1])(&puStack_db8);
    }
    if ((bStack_1100 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                      CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)))
                      & 0xfffffffffffffffe);
    }
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0x20;
    uStack_114f = _DAT_013eefd3;
    uStack_114b = (undefined2)_UNK_013eefd7;
    uStack_1149 = (undefined1)((uint)_UNK_013eefd7 >> 0x10);
    uStack_1148 = (undefined1)((uint)_UNK_013eefd7 >> 0x18);
    uStack_1147 = (undefined2)_UNK_013eefdb;
    uStack_1145 = (undefined2)((uint)_UNK_013eefdb >> 0x10);
    uStack_1143 = (undefined1)_UNK_013eefdf;
    uStack_1142 = (undefined1)((uint)_UNK_013eefdf >> 8);
    uStack_1141 = (undefined1)((uint)_UNK_013eefdf >> 0x10);
    uStack_1140 = (undefined1)((uint)_UNK_013eefdf >> 0x18);
    puStack_1158 = (undefined8 *)0x6fd9829d44de39e5;
    uStack_730 = 0;
    puStack_738 = &UNK_0f35d358;
    func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_738);
    if (puStack_738 != (undefined *)0x0) {
      (**(code **)(puStack_738 + 8))(&puStack_738);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_10ef = 0;
    uStack_10e9 = 0;
    uStack_10e8 = 0;
    bStack_1100 = 0x20;
    uStack_10ff = _DAT_013eefd3;
    uStack_10fb = (undefined2)_UNK_013eefd7;
    uStack_10f9 = (undefined1)((uint)_UNK_013eefd7 >> 0x10);
    uStack_10f8 = (undefined1)((uint)_UNK_013eefd7 >> 0x18);
    uStack_10f7 = (undefined2)_UNK_013eefdb;
    uStack_10f5 = (undefined1)((uint)_UNK_013eefdb >> 0x10);
    uStack_10f4 = (undefined1)((uint)_UNK_013eefdb >> 0x18);
    uStack_10f3 = (undefined2)_UNK_013eefdf;
    uStack_10f1 = (undefined1)((uint)_UNK_013eefdf >> 0x10);
    uStack_10f0 = (undefined1)((uint)_UNK_013eefdf >> 0x18);
    puStack_1108 = (undefined8 *)0x6fd9829d44de39e5;
    puStack_df8 = (undefined8 *)0x0;
    uStack_df0 = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0f35d380;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    if (puStack_df8 == (undefined8 *)0x0) {
      puStack_1158 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_df8)(&puStack_df8,&puStack_1158);
      puStack_1158 = puStack_df8;
    }
    puStack_df8 = (undefined8 *)0x0;
    plVar9[4] = (long)&UNK_0f2ccd78;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
    *(undefined1 *)(plVar9 + 0x10) = 0;
    plVar15 = plVar9 + 0x11;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0xffffffff;
    plVar9[0x26] = 0;
    plVar9[0x27] = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x1f] = 0;
    plVar9[4] = (long)&UNK_0f35d3d0;
    ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
    plVar9[0x2e] = 0;
    plVar9[0x2f] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 0;
    if (ppuVar20 != &puStack_1158) {
      if (puStack_1158 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
        puVar10 = puStack_1158;
      }
      puStack_1158 = (undefined8 *)0x0;
      *ppuVar20 = puVar10;
    }
    puVar19 = (uint *)(plVar9 + 0x12);
    if (plVar15 != (long *)&DAT_0f552108) {
      if ((*puVar19 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          plVar9[0x14] = _DAT_0f552120;
          uVar6 = uRam000000000f55211c;
          uVar5 = _DAT_0f552118;
          uVar4 = uRam000000000f552114;
          *puVar19 = _DAT_0f552110;
          *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
          *(undefined4 *)(plVar9 + 0x13) = uVar5;
          *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
        }
        else {
          FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar26 = (_DAT_0f552110 & 1) != 0;
        lVar14 = 0xf552111;
        if (bVar26) {
          lVar14 = _DAT_0f552120;
        }
        uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar26) {
          uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar19,lVar14,uVar24);
      }
    }
    plVar9[0x11] = _DAT_0f552108;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
    *(undefined1 *)(plVar9 + 0x36) = 1;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    plStack_1118 = plVar9 + 1;
    puStack_1110 = puVar19;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &UNK_0f35d4c8;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = &UNK_0f35d518;
    puVar10[0xe] = plVar9 + 4;
    puVar10[0xf] = plVar9;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    bStack_1150 = (byte)puVar10;
    uStack_114f = (undefined4)((ulong)puVar10 >> 8);
    uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
    uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
    puStack_1158 = puVar10 + 4;
    puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
    plVar17 = *(long **)(puVar11 + 0x24);
    if (plVar17 < *(long **)(puVar11 + 0x26)) {
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[4] = 0;
      if (plVar17 != plVar15) {
        puVar19 = (uint *)(plVar17 + 1);
        if ((*puStack_1110 & 1) == 0) {
          plVar17[3] = *(long *)(puStack_1110 + 4);
          lVar14 = *(long *)(puStack_1110 + 2);
          *(long *)puVar19 = *(long *)puStack_1110;
          plVar17[2] = lVar14;
        }
        else {
          puStack_1110 = puVar19;
          FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
        }
      }
      *plVar17 = *plVar15;
      plVar17[5] = (long)(puVar10 + 4);
      plVar17[6] = (long)puVar10;
      LOCK();
      puVar10[1] = puVar10[1] + 1;
      UNLOCK();
      plVar17 = plVar17 + 7;
      *(long **)(puVar11 + 0x24) = plVar17;
    }
    else {
      plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
    }
    plVar15 = plStack_10c0;
    plVar1 = plStack_1118;
    *(long **)(puVar11 + 0x24) = plVar17;
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    if (*(long *)(puVar11 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar9[0xf];
    *(undefined4 *)(plVar9 + 0xe) = uVar4;
    *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
    *(undefined4 *)(plVar9 + 0xf) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      lVar14 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
    plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      lVar14 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    LOCK();
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      LOCK();
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
    }
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    if (puStack_df8 != (undefined8 *)0x0) {
      (*(code *)puStack_df8[1])(&puStack_df8);
    }
    if ((bStack_1100 & 1) != 0) {
      uVar24 = CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)));
      uVar16 = CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0));
      goto LAB_0c2d0485;
    }
  }
  else {
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_011e228e,0x19);
    puStack_1158 = (undefined8 *)0xe251ec2c64726730;
    uStack_3b0 = 0;
    puStack_3b8 = &UNK_0f35c440;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_3b8);
    if (puStack_3b8 != (undefined *)0x0) {
      (**(code **)(puStack_3b8 + 8))(&puStack_3b8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_01335d05,0x17);
    puStack_1158 = (undefined8 *)0x4d912d419b5a4669;
    uStack_3f0 = 0;
    puStack_3f8 = &UNK_0f35c458;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_3f8);
    if (puStack_3f8 != (undefined *)0x0) {
      (**(code **)(puStack_3f8 + 8))(&puStack_3f8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_011fde56,0x18);
    puStack_1158 = (undefined8 *)0x86bd3e98e9d58c1c;
    uStack_430 = 0;
    puStack_438 = &UNK_0f35c470;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_438);
    if (puStack_438 != (undefined *)0x0) {
      (**(code **)(puStack_438 + 8))(&puStack_438);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_01408ccb,0x18);
    puStack_1158 = (undefined8 *)0x7a11570815884c7;
    uStack_470 = 0;
    puStack_478 = &UNK_0f35c488;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_478);
    if (puStack_478 != (undefined *)0x0) {
      (**(code **)(puStack_478 + 8))(&puStack_478);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0x20;
    uStack_114f = _DAT_012e773e;
    uStack_114b = (undefined2)_UNK_012e7742;
    uStack_1149 = (undefined1)((uint)_UNK_012e7742 >> 0x10);
    uStack_1148 = (undefined1)((uint)_UNK_012e7742 >> 0x18);
    uStack_1147 = (undefined2)_UNK_012e7746;
    uStack_1145 = (undefined2)((uint)_UNK_012e7746 >> 0x10);
    uStack_1143 = (undefined1)_UNK_012e774a;
    uStack_1142 = (undefined1)((uint)_UNK_012e774a >> 8);
    uStack_1141 = (undefined1)((uint)_UNK_012e774a >> 0x10);
    uStack_1140 = (undefined1)((uint)_UNK_012e774a >> 0x18);
    puStack_1158 = (undefined8 *)0x6a629adf4951e5bf;
    uStack_4b0 = 0;
    puStack_4b8 = &UNK_0f35c4a0;
    func_0x0c2d78b0(plVar12,&puStack_1158,&puStack_4b8);
    if (puStack_4b8 != (undefined *)0x0) {
      (**(code **)(puStack_4b8 + 8))(&puStack_4b8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_014a4777,0x18);
    puStack_1158 = (undefined8 *)0xe33ae16d52a55e82;
    uStack_4f0 = 0;
    puStack_4f8 = &UNK_0f35c4b8;
    func_0x0c2d7320(plVar12,&puStack_1158,&puStack_4f8);
    if (puStack_4f8 != (undefined *)0x0) {
      (**(code **)(puStack_4f8 + 8))(&puStack_4f8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&DAT_0138617a,0x17);
    puStack_1158 = (undefined8 *)0x77e0f85551014702;
    uStack_530 = 0;
    puStack_538 = &UNK_0f35c4d0;
    func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_538);
    if (puStack_538 != (undefined *)0x0) {
      (**(code **)(puStack_538 + 8))(&puStack_538);
    }
    if ((bStack_1150 & 1) != 0) {
      uVar24 = CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
      uVar16 = CONCAT17(uStack_1139,
                        CONCAT16(uStack_113a,CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140))
                                ));
LAB_0c2d0485:
      func_0x0412a280(uVar16,uVar24 & 0xfffffffffffffffe);
    }
  }
  cVar8 = func_0x0551ca70(plVar15,&UNK_0f356160);
  if (cVar8 == '\0') {
    cVar8 = func_0x0551ca70(plVar15,&UNK_0f356110);
    if (cVar8 == '\0') {
      uStack_10f8 = 0;
      uStack_10f7 = 0;
      uStack_10f5 = 0;
      uStack_10f4 = 0;
      uStack_10f3 = 0;
      uStack_10f1 = 0;
      uStack_10f0 = 0;
      uStack_10ef = 0;
      uStack_10e9 = 0;
      puStack_1108 = (undefined8 *)0x0;
      bStack_1100 = 0;
      uStack_10ff = 0;
      uStack_10fb = 0;
      uStack_10f9 = 0;
      uStack_10e8 = 0;
      func_0x0412f5e0(&bStack_1100,&DAT_012e74a9,0x17);
      puStack_1108 = (undefined8 *)0x4ba33ec43eb42a22;
      puStack_e78 = (undefined8 *)0x0;
      uStack_e70 = 0;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar9 == (long *)0x0) {
        FUN_0eec74c0(0x1c0,0);
      }
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&UNK_0f35d980;
      puStack_1158 = (undefined8 *)0x0;
      bStack_1150 = 0;
      uStack_114f = 0;
      uStack_114b = 0;
      uStack_1149 = 0;
      if (puStack_e78 == (undefined8 *)0x0) {
        puStack_1158 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_e78)(&puStack_e78,&puStack_1158);
        puStack_1158 = puStack_e78;
      }
      puStack_e78 = (undefined8 *)0x0;
      plVar9[4] = (long)&UNK_0f2ccd78;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0;
      plVar9[0xc] = 0;
      *(undefined1 *)(plVar9 + 0xd) = 0;
      func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
      *(undefined1 *)(plVar9 + 0x10) = 0;
      plVar15 = plVar9 + 0x11;
      plVar9[0x11] = 0;
      plVar9[0x12] = 0;
      plVar9[0x13] = 0;
      plVar9[0x14] = 0;
      plVar9[0x15] = 0;
      plVar9[0x16] = 0;
      plVar9[0x17] = 0xffffffff;
      plVar9[0x26] = 0;
      plVar9[0x27] = 0;
      plVar9[0x18] = 0;
      plVar9[0x19] = 0;
      plVar9[0x1a] = 0;
      plVar9[0x1b] = 0;
      plVar9[0x1c] = 0;
      plVar9[0x1d] = 0;
      plVar9[0x1e] = 0;
      plVar9[0x1f] = 0;
      plVar9[4] = (long)&UNK_0f35d9d0;
      ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
      plVar9[0x2e] = 0;
      plVar9[0x2f] = 0;
      *(undefined1 *)(plVar9 + 0x36) = 0;
      if (ppuVar20 != &puStack_1158) {
        if (puStack_1158 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
          puVar10 = puStack_1158;
        }
        puStack_1158 = (undefined8 *)0x0;
        *ppuVar20 = puVar10;
      }
      puVar19 = (uint *)(plVar9 + 0x12);
      if (plVar15 != (long *)&DAT_0f552108) {
        if ((*puVar19 & 1) == 0) {
          if ((_DAT_0f552110 & 1) == 0) {
            plVar9[0x14] = _DAT_0f552120;
            uVar6 = uRam000000000f55211c;
            uVar5 = _DAT_0f552118;
            uVar4 = uRam000000000f552114;
            *puVar19 = _DAT_0f552110;
            *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
            *(undefined4 *)(plVar9 + 0x13) = uVar5;
            *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
          }
          else {
            FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
          }
        }
        else {
          bVar26 = (_DAT_0f552110 & 1) != 0;
          lVar14 = 0xf552111;
          if (bVar26) {
            lVar14 = _DAT_0f552120;
          }
          uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
          if (bVar26) {
            uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
          }
          func_0x04885120(puVar19,lVar14,uVar24);
        }
      }
      plVar9[0x11] = _DAT_0f552108;
      plVar9[0x15] = 0;
      if (puStack_1158 != (undefined8 *)0x0) {
        (*(code *)puStack_1158[1])(&puStack_1158);
      }
      *(undefined1 *)(plVar9 + 0x36) = 1;
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      plStack_1118 = plVar9 + 1;
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &UNK_0f35dac8;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[4] = &UNK_0f35db18;
      puVar10[0xe] = plVar9 + 4;
      puVar10[0xf] = plVar9;
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      bStack_1150 = (byte)puVar10;
      uStack_114f = (undefined4)((ulong)puVar10 >> 8);
      uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
      uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
      puStack_1158 = puVar10 + 4;
      puStack_1110 = puVar19;
      puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
      plVar17 = *(long **)(puVar11 + 0x24);
      if (plVar17 < *(long **)(puVar11 + 0x26)) {
        plVar17[2] = 0;
        plVar17[3] = 0;
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar17[4] = 0;
        if (plVar17 != plVar15) {
          puVar19 = (uint *)(plVar17 + 1);
          if ((*puStack_1110 & 1) == 0) {
            plVar17[3] = *(long *)(puStack_1110 + 4);
            lVar14 = *(long *)(puStack_1110 + 2);
            *(long *)puVar19 = *(long *)puStack_1110;
            plVar17[2] = lVar14;
          }
          else {
            puStack_1110 = puVar19;
            FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
          }
        }
        *plVar17 = *plVar15;
        plVar17[5] = (long)(puVar10 + 4);
        plVar17[6] = (long)puVar10;
        LOCK();
        puVar10[1] = puVar10[1] + 1;
        UNLOCK();
        plVar17 = plVar17 + 7;
        *(long **)(puVar11 + 0x24) = plVar17;
      }
      else {
        plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
      }
      plVar15 = plStack_10c0;
      *(long **)(puVar11 + 0x24) = plVar17;
      uVar4 = *puVar11;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      if (*(long *)(puVar11 + 2) != 0) {
        LOCK();
        plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
        *plVar17 = *plVar17 + 1;
        UNLOCK();
      }
      plVar17 = (long *)plVar9[0xf];
      *(undefined4 *)(plVar9 + 0xe) = uVar4;
      *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
      *(undefined4 *)(plVar9 + 0xf) = uVar6;
      *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar1 = plVar17 + 1;
        lVar14 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
      plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))
                                );
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar1 = plVar17 + 1;
        lVar14 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      plVar17 = plStack_1118;
      LOCK();
      lVar14 = *plStack_1118;
      *plStack_1118 = *plStack_1118 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
        LOCK();
        lVar14 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar14 = *plStack_1118;
        *plStack_1118 = *plStack_1118 + -1;
        UNLOCK();
      }
      puVar10 = puStack_e78;
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
        puVar10 = puStack_e78;
      }
      puStack_e78 = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        ppuVar20 = &puStack_e78;
        goto LAB_0c2d0fd4;
      }
    }
    else {
      uStack_1138 = 0;
      bStack_1150 = 0x2c;
      uStack_114f = (undefined4)_DAT_01267571;
      uStack_114b = (undefined2)((ulong)_DAT_01267571 >> 0x20);
      uStack_1149 = (undefined1)((ulong)_DAT_01267571 >> 0x30);
      uStack_1148 = (undefined1)((ulong)_DAT_01267571 >> 0x38);
      uStack_1147 = (undefined2)_UNK_01267579;
      uStack_1145 = (undefined2)((ulong)_UNK_01267579 >> 0x10);
      uStack_1143 = (undefined1)((ulong)_UNK_01267579 >> 0x20);
      uStack_1142 = (undefined1)((ulong)_UNK_01267579 >> 0x28);
      uStack_1141 = 100;
      uStack_1140 = 0x75;
      uStack_113f = 0x69746172;
      uStack_113b = 0x6f;
      uStack_113a = 0x6e;
      uStack_1139 = 0;
      puStack_1158 = (undefined8 *)0x1f5e1dfd50296088;
      uStack_7b0 = 0;
      puStack_7b8 = &UNK_0f35d760;
      func_0x0c2d7e30(plVar12,&puStack_1158,&puStack_7b8);
      if (puStack_7b8 != (undefined *)0x0) {
        (**(code **)(puStack_7b8 + 8))(&puStack_7b8);
      }
      if ((bStack_1150 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_1139,
                                 CONCAT16(uStack_113a,
                                          CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                        CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))
                                ) & 0xfffffffffffffffe);
      }
      uStack_10e8 = 0;
      bStack_1100 = 0x2c;
      uStack_10ff = (undefined4)_DAT_01267571;
      uStack_10fb = (undefined2)((ulong)_DAT_01267571 >> 0x20);
      uStack_10f9 = (undefined1)((ulong)_DAT_01267571 >> 0x30);
      uStack_10f8 = (undefined1)((ulong)_DAT_01267571 >> 0x38);
      uStack_10f7 = (undefined2)_UNK_01267579;
      uStack_10f5 = (undefined1)((ulong)_UNK_01267579 >> 0x10);
      uStack_10f4 = (undefined1)((ulong)_UNK_01267579 >> 0x18);
      uStack_10f3 = (undefined2)((ulong)_UNK_01267579 >> 0x20);
      uStack_10f1 = 100;
      uStack_10f0 = 0x75;
      uStack_10ef = 0x6e6f69746172;
      uStack_10e9 = 0;
      puStack_1108 = (undefined8 *)0x1f5e1dfd50296088;
      puStack_e38 = (undefined8 *)0x0;
      uStack_e30 = 0;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar9 == (long *)0x0) {
        FUN_0eec74c0(0x1c0,0);
      }
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&UNK_0f35d788;
      puStack_1158 = (undefined8 *)0x0;
      bStack_1150 = 0;
      uStack_114f = 0;
      uStack_114b = 0;
      uStack_1149 = 0;
      if (puStack_e38 == (undefined8 *)0x0) {
        puStack_1158 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_e38)(&puStack_e38,&puStack_1158);
        puStack_1158 = puStack_e38;
      }
      puStack_e38 = (undefined8 *)0x0;
      plVar9[4] = (long)&UNK_0f2ccd78;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0;
      plVar9[0xc] = 0;
      *(undefined1 *)(plVar9 + 0xd) = 0;
      func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
      *(undefined1 *)(plVar9 + 0x10) = 0;
      plVar15 = plVar9 + 0x11;
      plVar9[0x11] = 0;
      plVar9[0x12] = 0;
      plVar9[0x13] = 0;
      plVar9[0x14] = 0;
      plVar9[0x15] = 0;
      plVar9[0x16] = 0;
      plVar9[0x17] = 0xffffffff;
      plVar9[0x26] = 0;
      plVar9[0x27] = 0;
      plVar9[0x18] = 0;
      plVar9[0x19] = 0;
      plVar9[0x1a] = 0;
      plVar9[0x1b] = 0;
      plVar9[0x1c] = 0;
      plVar9[0x1d] = 0;
      plVar9[0x1e] = 0;
      plVar9[0x1f] = 0;
      plVar9[4] = (long)&UNK_0f35d7d8;
      ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
      plVar9[0x2e] = 0;
      plVar9[0x2f] = 0;
      *(undefined1 *)(plVar9 + 0x36) = 0;
      if (ppuVar20 != &puStack_1158) {
        if (puStack_1158 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
          puVar10 = puStack_1158;
        }
        puStack_1158 = (undefined8 *)0x0;
        *ppuVar20 = puVar10;
      }
      puVar19 = (uint *)(plVar9 + 0x12);
      if (plVar15 != (long *)&DAT_0f552108) {
        if ((*puVar19 & 1) == 0) {
          if ((_DAT_0f552110 & 1) == 0) {
            plVar9[0x14] = _DAT_0f552120;
            uVar6 = uRam000000000f55211c;
            uVar5 = _DAT_0f552118;
            uVar4 = uRam000000000f552114;
            *puVar19 = _DAT_0f552110;
            *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
            *(undefined4 *)(plVar9 + 0x13) = uVar5;
            *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
          }
          else {
            FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
          }
        }
        else {
          bVar26 = (_DAT_0f552110 & 1) != 0;
          lVar14 = 0xf552111;
          if (bVar26) {
            lVar14 = _DAT_0f552120;
          }
          uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
          if (bVar26) {
            uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
          }
          func_0x04885120(puVar19,lVar14,uVar24);
        }
      }
      plVar9[0x11] = _DAT_0f552108;
      plVar9[0x15] = 0;
      if (puStack_1158 != (undefined8 *)0x0) {
        (*(code *)puStack_1158[1])(&puStack_1158);
      }
      *(undefined1 *)(plVar9 + 0x36) = 1;
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      plStack_1118 = plVar9 + 1;
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &UNK_0f35d8d0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[4] = &UNK_0f35d920;
      puVar10[0xe] = plVar9 + 4;
      puVar10[0xf] = plVar9;
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      bStack_1150 = (byte)puVar10;
      uStack_114f = (undefined4)((ulong)puVar10 >> 8);
      uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
      uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
      puStack_1158 = puVar10 + 4;
      puStack_1110 = puVar19;
      puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
      plVar17 = *(long **)(puVar11 + 0x24);
      if (plVar17 < *(long **)(puVar11 + 0x26)) {
        plVar17[2] = 0;
        plVar17[3] = 0;
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar17[4] = 0;
        if (plVar17 != plVar15) {
          puVar19 = (uint *)(plVar17 + 1);
          if ((*puStack_1110 & 1) == 0) {
            plVar17[3] = *(long *)(puStack_1110 + 4);
            lVar14 = *(long *)(puStack_1110 + 2);
            *(long *)puVar19 = *(long *)puStack_1110;
            plVar17[2] = lVar14;
          }
          else {
            puStack_1110 = puVar19;
            FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
          }
        }
        *plVar17 = *plVar15;
        plVar17[5] = (long)(puVar10 + 4);
        plVar17[6] = (long)puVar10;
        LOCK();
        puVar10[1] = puVar10[1] + 1;
        UNLOCK();
        plVar17 = plVar17 + 7;
        *(long **)(puVar11 + 0x24) = plVar17;
      }
      else {
        plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
      }
      plVar1 = plStack_1118;
      *(long **)(puVar11 + 0x24) = plVar17;
      uVar4 = *puVar11;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      if (*(long *)(puVar11 + 2) != 0) {
        LOCK();
        plVar15 = (long *)(*(long *)(puVar11 + 2) + 8);
        *plVar15 = *plVar15 + 1;
        UNLOCK();
      }
      plVar15 = (long *)plVar9[0xf];
      *(undefined4 *)(plVar9 + 0xe) = uVar4;
      *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
      *(undefined4 *)(plVar9 + 0xf) = uVar6;
      *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar17 = plVar15 + 1;
        lVar14 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
      *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
      plVar15 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))
                                );
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar17 = plVar15 + 1;
        lVar14 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
        }
      }
      plVar15 = plStack_10c0;
      LOCK();
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
        LOCK();
        lVar14 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar14 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
      }
      puVar10 = puStack_e38;
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
        puVar10 = puStack_e38;
      }
      puStack_e38 = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        ppuVar20 = &puStack_e38;
LAB_0c2d0fd4:
        (*(code *)puVar10[1])(ppuVar20);
      }
    }
    if ((bStack_1100 & 1) != 0) {
      uVar24 = CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100)));
      uVar16 = CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0));
      goto LAB_0c2d0fe8;
    }
  }
  else {
    uStack_1138 = 0;
    bStack_1150 = 0x2c;
    uStack_114f = (undefined4)_DAT_01267571;
    uStack_114b = (undefined2)((ulong)_DAT_01267571 >> 0x20);
    uStack_1149 = (undefined1)((ulong)_DAT_01267571 >> 0x30);
    uStack_1148 = (undefined1)((ulong)_DAT_01267571 >> 0x38);
    uStack_1147 = (undefined2)_UNK_01267579;
    uStack_1145 = (undefined2)((ulong)_UNK_01267579 >> 0x10);
    uStack_1143 = (undefined1)((ulong)_UNK_01267579 >> 0x20);
    uStack_1142 = (undefined1)((ulong)_UNK_01267579 >> 0x28);
    uStack_1141 = 100;
    uStack_1140 = 0x75;
    uStack_113f = 0x69746172;
    uStack_113b = 0x6f;
    uStack_113a = 0x6e;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x1f5e1dfd50296088;
    uStack_770 = 0;
    puStack_778 = &UNK_0f35d748;
    lVar14 = func_0x0c2d7e30(plVar12,&puStack_1158,&puStack_778);
    *(undefined4 *)(lVar14 + 0x150) = 0;
    if (puStack_778 != (undefined *)0x0) {
      (**(code **)(puStack_778 + 8))(&puStack_778);
    }
    if ((bStack_1150 & 1) != 0) {
      uVar24 = CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
      uVar16 = CONCAT17(uStack_1139,
                        CONCAT16(uStack_113a,CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140))
                                ));
LAB_0c2d0fe8:
      func_0x0412a280(uVar16,uVar24 & 0xfffffffffffffffe);
    }
  }
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113b = 0;
  uStack_113a = 0;
  uStack_1139 = 0;
  uStack_1138 = 0;
  bStack_1150 = 0x1c;
  uStack_114f = 0x656e696d;
  uStack_114b = 0x7263;
  uStack_1149 = 0x61;
  uStack_1148 = 0x66;
  uStack_1147 = 0x3a74;
  uStack_1145 = 0x6f66;
  uStack_1143 = 0x69;
  uStack_1142 = 0x6c;
  uStack_1141 = 0;
  puStack_1158 = (undefined8 *)0xa3d6525cf2207cf2;
  puVar10 = (undefined8 *)*plVar15;
  uVar24 = plVar15[1];
  puStack_1108 = puVar10;
  if ((uVar24 >> 0x37 & 1) != 0) {
    lVar3 = *(long *)((uVar24 & 0xff00ffffffffffff) - 8);
    lVar14 = lVar3 + 9;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar9 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar9 = lVar3;
    func_0x0eee2f00(plVar9 + 1,uVar24 & 0xff00ffffffffffff,lVar3);
    *(undefined1 *)((long)plVar9 + lVar3 + 8) = 0;
    uVar24 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  bStack_1100 = (byte)uVar24;
  uStack_10ff = (undefined4)(uVar24 >> 8);
  uStack_10fb = (undefined2)(uVar24 >> 0x28);
  uStack_10f9 = (undefined1)(uVar24 >> 0x38);
  uStack_10f8 = 0;
  uStack_10f7 = 0;
  uStack_10f5 = 0;
  uStack_10f4 = 0;
  uStack_10f3 = 0;
  uStack_10f1 = 0;
  uVar25 = plVar15[2];
  if ((uVar25 & 0x80000000000000) != 0) {
    lVar3 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
    lVar14 = lVar3 + 9;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar9 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar9 = lVar3;
    func_0x0eee2f00(plVar9 + 1,uVar25 & 0xff00ffffffffffff,lVar3);
    *(undefined1 *)((long)plVar9 + lVar3 + 8) = 0;
    uVar25 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_10f8 = (undefined1)uVar25;
  uStack_10f7 = (undefined2)(uVar25 >> 8);
  uStack_10f5 = (undefined1)(uVar25 >> 0x18);
  uStack_10f4 = (undefined1)(uVar25 >> 0x20);
  uStack_10f3 = (undefined2)(uVar25 >> 0x28);
  uStack_10f1 = (undefined1)(uVar25 >> 0x38);
  plStack_eb0 = (long *)0x0;
  puStack_eb8 = &UNK_0f35db68;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x18,0);
  }
  *plVar9 = (long)puVar10;
  plVar9[1] = 0;
  plStack_1118 = (long *)(uVar24 & 0xff00ffffffffffff);
  puStack_1110 = (uint *)uVar24;
  if ((uVar24 & 0x80000000000000) != 0) {
    lVar3 = *(long *)((long)plStack_1118 - 8);
    lVar14 = lVar3 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar15 = lVar3;
    func_0x0eee2f00(plVar15 + 1,plStack_1118,lVar3);
    *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
    uVar24 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar9[1] = uVar24;
  plVar9[2] = 0;
  uVar22 = uVar25 & 0xff00ffffffffffff;
  uVar24 = uVar25;
  if ((uVar25 & 0x80000000000000) != 0) {
    plStack_10b8 = plVar9 + 1;
    lVar3 = *(long *)(uVar22 - 8);
    lVar14 = lVar3 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar15 = lVar3;
    func_0x0eee2f00(plVar15 + 1,uVar22,lVar3);
    *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
    uVar24 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar19 = puStack_1110;
  plVar9[2] = uVar24;
  plStack_eb0 = plVar9;
  func_0x0c2d7320(plVar12,&puStack_1158,&puStack_eb8);
  if (puStack_eb8 != (undefined *)0x0) {
    (**(code **)(puStack_eb8 + 8))(&puStack_eb8);
  }
  if ((uVar25 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar22 - 8);
  }
  plVar9 = plStack_10c0;
  uStack_10f8 = 0;
  uStack_10f7 = 0;
  uStack_10f5 = 0;
  uStack_10f4 = 0;
  uStack_10f3 = 0;
  uStack_10f1 = 0;
  if (((ulong)puVar19 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(long)plStack_1118 - 8);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_1138 = 0;
  bStack_1150 = 0x2c;
  uStack_114f = _DAT_014a4b66;
  uStack_114b = (undefined2)_UNK_014a4b6a;
  uStack_1149 = (undefined1)((uint)_UNK_014a4b6a >> 0x10);
  uStack_1148 = (undefined1)((uint)_UNK_014a4b6a >> 0x18);
  uStack_1147 = (undefined2)_UNK_014a4b6e;
  uStack_1145 = (undefined2)((uint)_UNK_014a4b6e >> 0x10);
  uStack_1143 = (undefined1)_UNK_014a4b72;
  uStack_1142 = (undefined1)((uint)_UNK_014a4b72 >> 8);
  uStack_1141 = 0x6e;
  uStack_1140 = 0x67;
  uStack_113f = 0x6570735f;
  uStack_113b = 0x65;
  uStack_113a = 100;
  uStack_1139 = 0;
  puStack_1158 = (undefined8 *)0x2454d3e08be30290;
  puVar10 = (undefined8 *)*plVar9;
  uVar24 = plVar9[1];
  puStack_1108 = puVar10;
  if ((uVar24 & 0x80000000000000) != 0) {
    lVar3 = *(long *)((uVar24 & 0xff00ffffffffffff) - 8);
    lVar14 = lVar3 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar15 = lVar3;
    func_0x0eee2f00(plVar15 + 1,uVar24 & 0xff00ffffffffffff,lVar3);
    *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
    uVar24 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  bStack_1100 = (byte)uVar24;
  uStack_10ff = (undefined4)(uVar24 >> 8);
  uStack_10fb = (undefined2)(uVar24 >> 0x28);
  uStack_10f9 = (undefined1)(uVar24 >> 0x38);
  uStack_10f8 = 0;
  uStack_10f7 = 0;
  uStack_10f5 = 0;
  uStack_10f4 = 0;
  uStack_10f3 = 0;
  uStack_10f1 = 0;
  uVar25 = plVar9[2];
  if ((uVar25 & 0x80000000000000) != 0) {
    lVar3 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
    lVar14 = lVar3 + 9;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar9 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar9 = lVar3;
    func_0x0eee2f00(plVar9 + 1,uVar25 & 0xff00ffffffffffff,lVar3);
    *(undefined1 *)((long)plVar9 + lVar3 + 8) = 0;
    uVar25 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_10f8 = (undefined1)uVar25;
  uStack_10f7 = (undefined2)(uVar25 >> 8);
  uStack_10f5 = (undefined1)(uVar25 >> 0x18);
  uStack_10f4 = (undefined1)(uVar25 >> 0x20);
  uStack_10f3 = (undefined2)(uVar25 >> 0x28);
  uStack_10f1 = (undefined1)(uVar25 >> 0x38);
  plStack_ef0 = (long *)0x0;
  puStack_ef8 = &UNK_0f35db80;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x18,0);
  }
  *plVar9 = (long)puVar10;
  plVar9[1] = 0;
  plStack_1118 = (long *)(uVar24 & 0xff00ffffffffffff);
  puStack_1110 = (uint *)uVar24;
  if ((uVar24 & 0x80000000000000) != 0) {
    lVar3 = *(long *)((long)plStack_1118 - 8);
    lVar14 = lVar3 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar15 = lVar3;
    func_0x0eee2f00(plVar15 + 1,plStack_1118,lVar3);
    *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
    uVar24 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar9[1] = uVar24;
  plVar9[2] = 0;
  uVar22 = uVar25 & 0xff00ffffffffffff;
  uVar24 = uVar25;
  if ((uVar25 & 0x80000000000000) != 0) {
    plStack_10b8 = plVar9 + 1;
    lVar3 = *(long *)(uVar22 - 8);
    lVar14 = lVar3 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
    if (lVar14 != 0 && plVar15 == (long *)0x0) {
      FUN_0eec74c0(lVar14,8);
    }
    *plVar15 = lVar3;
    func_0x0eee2f00(plVar15 + 1,uVar22,lVar3);
    *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
    uVar24 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar19 = puStack_1110;
  plVar9[2] = uVar24;
  plStack_ef0 = plVar9;
  func_0x0c2d78b0(plVar12,&puStack_1158,&puStack_ef8);
  if (puStack_ef8 != (undefined *)0x0) {
    (**(code **)(puStack_ef8 + 8))(&puStack_ef8);
  }
  if ((uVar25 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar22 - 8);
  }
  uStack_10f8 = 0;
  uStack_10f7 = 0;
  uStack_10f5 = 0;
  uStack_10f4 = 0;
  uStack_10f3 = 0;
  uStack_10f1 = 0;
  if (((ulong)puVar19 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(long)plStack_1118 - 8);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_113a = 0;
  uStack_1139 = 0;
  uStack_1138 = 0;
  bStack_1150 = 0x2a;
  uStack_114f = _DAT_011fdfde;
  uStack_114b = (undefined2)_UNK_011fdfe2;
  uStack_1149 = (undefined1)((uint)_UNK_011fdfe2 >> 0x10);
  uStack_1148 = (undefined1)((uint)_UNK_011fdfe2 >> 0x18);
  uStack_1147 = (undefined2)_UNK_011fdfe6;
  uStack_1145 = (undefined2)((uint)_UNK_011fdfe6 >> 0x10);
  uStack_1143 = (undefined1)_UNK_011fdfea;
  uStack_1142 = 0x68;
  uStack_1141 = 0x61;
  uStack_1140 = 0x6e;
  uStack_113f = 0x6c626174;
  uStack_113b = 0x65;
  puStack_1158 = (undefined8 *)0x85e940e35b9f20d7;
  lStack_78 = 0;
  uStack_70 = 0;
  uVar24 = func_0x0c2d83b0(plVar12,&puStack_1158,&lStack_78);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_1098 = 0;
  uStack_1090 = 0;
  uStack_1088 = 0;
  uStack_10a0 = 0x65756c61760a;
  uStack_10a8 = 0x32a5b0178e27619c;
  uStack_b0 = 0;
  bStack_1100 = 0;
  uStack_10ff = 0;
  uStack_10fb = 0;
  uStack_10f9 = 0;
  lStack_b8 = 0;
  puStack_1108 = (undefined8 *)&UNK_0f35dfc8;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  puStack_1158 = puStack_1108;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f35dda0;
  bStack_1150 = 0;
  uStack_114f = 0;
  uStack_114b = 0;
  uStack_1149 = 0;
  puStack_1108 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_10a9,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f35ddf0;
  plVar9[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar9 + 0x2f) = 1;
  plVar9[0x30] = 0;
  plVar9[0x31] = 0;
  if (puStack_1158 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_1158)(&puStack_1158,plVar9 + 0x30);
    puVar10 = puStack_1158;
  }
  puStack_1158 = (undefined8 *)0x0;
  plVar9[0x30] = (long)puVar10;
  puStack_1110 = (uint *)(plVar9 + 0x12);
  if (plVar9 + 0x11 == (long *)&DAT_0f552078) {
    plVar9[0x15] = 0;
  }
  else {
    if ((*puStack_1110 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar9[0x14] = _DAT_0f552090;
        uVar6 = uRam000000000f55208c;
        uVar5 = _DAT_0f552088;
        uVar4 = uRam000000000f552084;
        *puStack_1110 = _DAT_0f552080;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        FUN_04885070(puStack_1110,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar26 = (_DAT_0f552080 & 1) != 0;
      lVar14 = 0xf552081;
      if (bVar26) {
        lVar14 = _DAT_0f552090;
      }
      uVar25 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar26) {
        uVar25 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puStack_1110,lVar14,uVar25);
    }
    plVar9[0x11] = _DAT_0f552078;
    plVar9[0x15] = 0;
    if (puStack_1158 != (undefined8 *)0x0) {
      (*(code *)puStack_1158[1])(&puStack_1158);
    }
  }
  plVar15 = plVar9 + 1;
  if (puStack_1108 != (undefined8 *)0x0) {
    (*(code *)puStack_1108[1])(&puStack_1108);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  plStack_1118 = plVar9 + 0x11;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f35ded0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f35df20;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_1150 = (byte)puVar10;
  uStack_114f = (undefined4)((ulong)puVar10 >> 8);
  uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
  puStack_1158 = puVar10 + 4;
  plStack_10b8 = (long *)uVar24;
  puVar11 = (undefined4 *)func_0x0c312af0(uVar24,&uStack_10a8,0);
  plVar17 = *(long **)(puVar11 + 0x24);
  if (plVar17 < *(long **)(puVar11 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plStack_1118) {
      puVar19 = (uint *)(plVar17 + 1);
      if ((*puStack_1110 & 1) == 0) {
        plVar17[3] = *(long *)(puStack_1110 + 4);
        lVar14 = *(long *)(puStack_1110 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
        plVar17[2] = lVar14;
      }
      else {
        puStack_1110 = puVar19;
        FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
      }
    }
    *plVar17 = *plStack_1118;
    plVar17[5] = (long)(puVar10 + 4);
    plVar17[6] = (long)puVar10;
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar11 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0c3148c0(puVar11 + 0x22,plStack_1118,&puStack_1158);
  }
  plVar1 = plStack_10b8;
  *(long **)(puVar11 + 0x24) = plVar17;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar2 = plVar17 + 1;
    lVar14 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar2 = plVar17 + 1;
    lVar14 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar14 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  plVar15 = plStack_10c0;
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    plVar15 = plStack_10c0;
  }
  plStack_10c0 = plVar15;
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((uStack_10a0 & 1) != 0) {
    func_0x0412a280(uStack_1090,uStack_10a0 & 0xfffffffffffffffe);
  }
  uStack_114b = 0;
  uStack_1149 = 0;
  uStack_1148 = 0;
  uStack_1147 = 0;
  uStack_1145 = 0;
  uStack_1143 = 0;
  uStack_1142 = 0;
  uStack_1141 = 0;
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113b = 0;
  uStack_113a = 0;
  uStack_1139 = 0;
  uStack_1138 = 0;
  bStack_1150 = 8;
  uStack_114f = 0x746f6c73;
  puStack_1158 = (undefined8 *)0x93026c7ea344dae1;
  uStack_7f0 = 0;
  puStack_7f8 = &UNK_0f35e1c0;
  func_0x0c2d88c0(plVar1,&puStack_1158,1,&puStack_7f8);
  if (puStack_7f8 != (undefined *)0x0) {
    (**(code **)(puStack_7f8 + 8))(&puStack_7f8);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_113a = 0;
  uStack_1139 = 0;
  uStack_1138 = 0;
  bStack_1150 = 0x2a;
  uStack_114f = _DAT_01489eb3;
  uStack_114b = (undefined2)_UNK_01489eb7;
  uStack_1149 = (undefined1)((uint)_UNK_01489eb7 >> 0x10);
  uStack_1148 = (undefined1)((uint)_UNK_01489eb7 >> 0x18);
  uStack_1147 = (undefined2)_UNK_01489ebb;
  uStack_1145 = (undefined2)((uint)_UNK_01489ebb >> 0x10);
  uStack_1143 = (undefined1)_UNK_01489ebf;
  uStack_1142 = 0x6d;
  uStack_1141 = 0x65;
  uStack_1140 = 0x5f;
  uStack_113f = 0x6e756f63;
  uStack_113b = 0x74;
  puStack_1158 = (undefined8 *)0x8054a9de4717f4d3;
  uStack_830 = 0;
  puStack_838 = &UNK_0f35e1d8;
  func_0x0c2d78b0(plVar12,&puStack_1158,&puStack_838);
  if (puStack_838 != (undefined *)0x0) {
    (**(code **)(puStack_838 + 8))(&puStack_838);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  cVar8 = func_0x0551ca70(plVar15,&UNK_0f356160);
  if (cVar8 == '\0') {
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&UNK_013a16bb,0x1b);
    puStack_1158 = (undefined8 *)0xf09633cfdbdb8f16;
    lStack_138 = 0;
    uStack_130 = 0;
    puStack_1110 = (uint *)func_0x0c2d83b0(plVar12,&puStack_1158,&lStack_138);
    if (lStack_138 != 0) {
      (**(code **)(lStack_138 + 8))(&lStack_138);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0xc;
    uStack_114f = 0x65726170;
    uStack_114b = 0x746e;
    uStack_1149 = 0;
    puStack_1158 = (undefined8 *)0x1f7501ed72876b35;
    puVar10 = (undefined8 *)*plVar15;
    uVar24 = plVar15[1];
    puStack_1108 = puVar10;
    if ((uVar24 & 0x80000000000000) != 0) {
      lVar3 = *(long *)((uVar24 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar3 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar9 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar9 = lVar3;
      func_0x0eee2f00(plVar9 + 1,uVar24 & 0xff00ffffffffffff,lVar3);
      *(undefined1 *)((long)plVar9 + lVar3 + 8) = 0;
      uVar24 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    bStack_1100 = (byte)uVar24;
    uStack_10ff = (undefined4)(uVar24 >> 8);
    uStack_10fb = (undefined2)(uVar24 >> 0x28);
    uStack_10f9 = (undefined1)(uVar24 >> 0x38);
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uVar25 = plVar15[2];
    plStack_1118 = (long *)uVar24;
    if ((uVar25 & 0x80000000000000) != 0) {
      lVar3 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar3 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar9 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar9 = lVar3;
      func_0x0eee2f00(plVar9 + 1,uVar25 & 0xff00ffffffffffff,lVar3);
      *(undefined1 *)((long)plVar9 + lVar3 + 8) = 0;
      uVar25 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_10f8 = (undefined1)uVar25;
    uStack_10f7 = (undefined2)(uVar25 >> 8);
    uStack_10f5 = (undefined1)(uVar25 >> 0x18);
    uStack_10f4 = (undefined1)(uVar25 >> 0x20);
    uStack_10f3 = (undefined2)(uVar25 >> 0x28);
    uStack_10f1 = (undefined1)(uVar25 >> 0x38);
    plStack_f30 = (long *)0x0;
    puStack_f38 = &UNK_0f35e220;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    *plVar9 = (long)puVar10;
    plVar9[1] = 0;
    uVar24 = (ulong)plStack_1118 & 0xff00ffffffffffff;
    plVar15 = plStack_1118;
    if (((ulong)plStack_1118 & 0x80000000000000) != 0) {
      lVar3 = *(long *)(uVar24 - 8);
      lVar14 = lVar3 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar15 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar15 = lVar3;
      func_0x0eee2f00(plVar15 + 1,uVar24,lVar3);
      *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
      plVar15 = (long *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = 0;
    uVar23 = uVar25 & 0xff00ffffffffffff;
    uVar22 = uVar25;
    plStack_10b8 = (long *)uVar24;
    if ((uVar25 & 0x80000000000000) != 0) {
      plStack_1080 = plVar9 + 1;
      lVar3 = *(long *)(uVar23 - 8);
      lVar14 = lVar3 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar15 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar15 = lVar3;
      func_0x0eee2f00(plVar15 + 1,uVar23,lVar3);
      *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
      uVar22 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plVar9[2] = uVar22;
    plStack_f30 = plVar9;
    func_0x0c2d88c0(puStack_1110,&puStack_1158,0,&puStack_f38);
    plVar9 = plStack_10c0;
    if (puStack_f38 != (undefined *)0x0) {
      (**(code **)(puStack_f38 + 8))(&puStack_f38);
    }
    if ((uVar25 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar23 - 8);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    if (((ulong)plStack_1118 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(long)plStack_10b8 - 8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0x10;
    uStack_114f = 0x65746163;
    uStack_114b = 0x6f67;
    uStack_1149 = 0x72;
    uStack_1148 = 0x79;
    puStack_1158 = (undefined8 *)0x16aa56d5d04b3781;
    puVar10 = (undefined8 *)*plVar9;
    plVar15 = (long *)plVar9[1];
    puStack_1108 = puVar10;
    if (((ulong)plVar15 & 0x80000000000000) != 0) {
      lVar3 = *(long *)(((ulong)plVar15 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar3 + 9;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar17 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar17 = lVar3;
      func_0x0eee2f00(plVar17 + 1,(ulong)plVar15 & 0xff00ffffffffffff,lVar3);
      *(undefined1 *)((long)plVar17 + lVar3 + 8) = 0;
      plVar15 = (long *)((ulong)(plVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    bStack_1100 = (byte)plVar15;
    uStack_10ff = (undefined4)((ulong)plVar15 >> 8);
    uStack_10fb = (undefined2)((ulong)plVar15 >> 0x28);
    uStack_10f9 = (undefined1)((ulong)plVar15 >> 0x38);
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    uVar24 = plVar9[2];
    plStack_1118 = plVar15;
    if ((uVar24 & 0x80000000000000) != 0) {
      lVar3 = *(long *)((uVar24 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar3 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar9 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar9 = lVar3;
      func_0x0eee2f00(plVar9 + 1,uVar24 & 0xff00ffffffffffff,lVar3);
      *(undefined1 *)((long)plVar9 + lVar3 + 8) = 0;
      uVar24 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_10f8 = (undefined1)uVar24;
    uStack_10f7 = (undefined2)(uVar24 >> 8);
    uStack_10f5 = (undefined1)(uVar24 >> 0x18);
    uStack_10f4 = (undefined1)(uVar24 >> 0x20);
    uStack_10f3 = (undefined2)(uVar24 >> 0x28);
    uStack_10f1 = (undefined1)(uVar24 >> 0x38);
    plStack_f70 = (long *)0x0;
    puStack_f78 = &UNK_0f35e238;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    *plVar9 = (long)puVar10;
    plVar9[1] = 0;
    uVar25 = (ulong)plStack_1118 & 0xff00ffffffffffff;
    plVar15 = plStack_1118;
    if (((ulong)plStack_1118 & 0x80000000000000) != 0) {
      lVar3 = *(long *)(uVar25 - 8);
      lVar14 = lVar3 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar15 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar15 = lVar3;
      func_0x0eee2f00(plVar15 + 1,uVar25,lVar3);
      *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
      plVar15 = (long *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = 0;
    uVar23 = uVar24 & 0xff00ffffffffffff;
    uVar22 = uVar24;
    plStack_10b8 = (long *)uVar25;
    if ((uVar24 & 0x80000000000000) != 0) {
      plStack_1080 = plVar9 + 1;
      lVar3 = *(long *)(uVar23 - 8);
      lVar14 = lVar3 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar15 == (long *)0x0) {
        FUN_0eec74c0(lVar14,8);
      }
      *plVar15 = lVar3;
      func_0x0eee2f00(plVar15 + 1,uVar23,lVar3);
      *(undefined1 *)((long)plVar15 + lVar3 + 8) = 0;
      uVar22 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plVar9[2] = uVar22;
    plStack_f70 = plVar9;
    func_0x0c2d88c0(puStack_1110,&puStack_1158,0,&puStack_f78);
    plVar9 = plStack_10b8;
    if (puStack_f78 != (undefined *)0x0) {
      (**(code **)(puStack_f78 + 8))(&puStack_f78);
    }
    if ((uVar24 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar23 - 8);
    }
    uStack_10f8 = 0;
    uStack_10f7 = 0;
    uStack_10f5 = 0;
    uStack_10f4 = 0;
    uStack_10f3 = 0;
    uStack_10f1 = 0;
    if (((ulong)plStack_1118 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(long)plVar9 - 8);
    }
  }
  else {
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    puStack_1158 = (undefined8 *)0x0;
    bStack_1150 = 0;
    uStack_114f = 0;
    uStack_114b = 0;
    uStack_1149 = 0;
    uStack_1138 = 0;
    func_0x0412f5e0(&bStack_1150,&UNK_013a16bb,0x1b);
    puStack_1158 = (undefined8 *)0xf09633cfdbdb8f16;
    lStack_f8 = 0;
    uStack_f0 = 0;
    uVar16 = func_0x0c2d83b0(plVar12,&puStack_1158,&lStack_f8);
    if (lStack_f8 != 0) {
      (**(code **)(lStack_f8 + 8))(&lStack_f8);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1148 = 0;
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0xc;
    uStack_114f = 0x65726170;
    uStack_114b = 0x746e;
    uStack_1149 = 0;
    puStack_1158 = (undefined8 *)0x1f7501ed72876b35;
    uStack_870 = 0;
    puStack_878 = &UNK_0f35e1f0;
    func_0x0c2d88c0(uVar16,&puStack_1158,0,&puStack_878);
    if (puStack_878 != (undefined *)0x0) {
      (**(code **)(puStack_878 + 8))(&puStack_878);
    }
    if ((bStack_1150 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1139,
                               CONCAT16(uStack_113a,
                                        CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                      CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)))
                      & 0xfffffffffffffffe);
    }
    uStack_1147 = 0;
    uStack_1145 = 0;
    uStack_1143 = 0;
    uStack_1142 = 0;
    uStack_1141 = 0;
    uStack_1140 = 0;
    uStack_113f = 0;
    uStack_113b = 0;
    uStack_113a = 0;
    uStack_1139 = 0;
    uStack_1138 = 0;
    bStack_1150 = 0x10;
    uStack_114f = 0x65746163;
    uStack_114b = 0x6f67;
    uStack_1149 = 0x72;
    uStack_1148 = 0x79;
    puStack_1158 = (undefined8 *)0x16aa56d5d04b3781;
    uStack_8b0 = 0;
    puStack_8b8 = &UNK_0f35e208;
    func_0x0c2d88c0(uVar16,&puStack_1158,0,&puStack_8b8);
    if (puStack_8b8 != (undefined *)0x0) {
      (**(code **)(puStack_8b8 + 8))(&puStack_8b8);
    }
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_1148 = 0;
  uStack_1147 = 0;
  uStack_1145 = 0;
  uStack_1143 = 0;
  uStack_1142 = 0;
  uStack_1141 = 0;
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113b = 0;
  uStack_113a = 0;
  uStack_1139 = 0;
  puStack_1158 = (undefined8 *)0x0;
  bStack_1150 = 0;
  uStack_114f = 0;
  uStack_114b = 0;
  uStack_1149 = 0;
  uStack_1138 = 0;
  func_0x0412f5e0(&bStack_1150,&UNK_0123256c,0x18);
  puStack_1158 = (undefined8 *)0x85e226c715af48d5;
  uStack_8f0 = 0;
  puStack_8f8 = &UNK_0f35e250;
  func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_8f8);
  if (puStack_8f8 != (undefined *)0x0) {
    (**(code **)(puStack_8f8 + 8))(&puStack_8f8);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_10f8 = 0;
  uStack_10f7 = 0;
  uStack_10f5 = 0;
  uStack_10f4 = 0;
  uStack_10f3 = 0;
  uStack_10f1 = 0;
  uStack_10f0 = 0;
  uStack_10ef = 0;
  uStack_10e9 = 0;
  puStack_1108 = (undefined8 *)0x0;
  bStack_1100 = 0;
  uStack_10ff = 0;
  uStack_10fb = 0;
  uStack_10f9 = 0;
  uStack_10e8 = 0;
  func_0x0412f5e0(&bStack_1100,&UNK_0123256c,0x18);
  puStack_1108 = (undefined8 *)0x85e226c715af48d5;
  puStack_fb8 = (undefined8 *)0x0;
  uStack_fb0 = 0;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f35e278;
  puStack_1158 = (undefined8 *)0x0;
  bStack_1150 = 0;
  uStack_114f = 0;
  uStack_114b = 0;
  uStack_1149 = 0;
  if (puStack_fb8 == (undefined8 *)0x0) {
    puStack_1158 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_fb8)(&puStack_fb8,&puStack_1158);
    puStack_1158 = puStack_fb8;
  }
  puStack_fb8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar15 = plVar9 + 0x11;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f35e2c8;
  ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  *(undefined1 *)(plVar9 + 0x36) = 0;
  if (ppuVar20 != &puStack_1158) {
    if (puStack_1158 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
      puVar10 = puStack_1158;
    }
    puStack_1158 = (undefined8 *)0x0;
    *ppuVar20 = puVar10;
  }
  puVar19 = (uint *)(plVar9 + 0x12);
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar9[0x14] = _DAT_0f552120;
        uVar6 = uRam000000000f55211c;
        uVar5 = _DAT_0f552118;
        uVar4 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar26 = (_DAT_0f552110 & 1) != 0;
      lVar14 = 0xf552111;
      if (bVar26) {
        lVar14 = _DAT_0f552120;
      }
      uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar26) {
        uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar14,uVar24);
    }
  }
  plVar9[0x11] = _DAT_0f552108;
  plVar9[0x15] = 0;
  if (puStack_1158 != (undefined8 *)0x0) {
    (*(code *)puStack_1158[1])(&puStack_1158);
  }
  *(undefined1 *)(plVar9 + 0x36) = 1;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  plStack_1118 = plVar9 + 1;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f35e3c0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f35e410;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_1150 = (byte)puVar10;
  uStack_114f = (undefined4)((ulong)puVar10 >> 8);
  uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
  puStack_1158 = puVar10 + 4;
  puStack_1110 = puVar19;
  puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
  plVar17 = *(long **)(puVar11 + 0x24);
  if (plVar17 < *(long **)(puVar11 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar15) {
      puVar19 = (uint *)(plVar17 + 1);
      if ((*puStack_1110 & 1) == 0) {
        plVar17[3] = *(long *)(puStack_1110 + 4);
        lVar14 = *(long *)(puStack_1110 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
        plVar17[2] = lVar14;
      }
      else {
        puStack_1110 = puVar19;
        FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
      }
    }
    *plVar17 = *plVar15;
    plVar17[5] = (long)(puVar10 + 4);
    plVar17[6] = (long)puVar10;
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar11 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
  }
  plVar15 = plStack_1118;
  *(long **)(puVar11 + 0x24) = plVar17;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar14 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  if (puStack_fb8 != (undefined8 *)0x0) {
    (*(code *)puStack_fb8[1])(&puStack_fb8);
  }
  if ((bStack_1100 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                    CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100))) &
                    0xfffffffffffffffe);
  }
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113b = 0;
  uStack_113a = 0;
  uStack_1139 = 0;
  uStack_1138 = 0;
  bStack_1150 = 0x1e;
  uStack_114f = 0x656e696d;
  uStack_114b = 0x7263;
  uStack_1149 = 0x61;
  uStack_1148 = 0x66;
  uStack_1147 = 0x3a74;
  uStack_1145 = 0x6c67;
  uStack_1143 = 0x69;
  uStack_1142 = 0x6e;
  uStack_1141 = 0x74;
  puStack_1158 = (undefined8 *)0xa89b9af5c959d498;
  uStack_930 = 0;
  puStack_938 = &UNK_0f35e460;
  func_0x0c2d7320(plVar12,&puStack_1158,&puStack_938);
  if (puStack_938 != (undefined *)0x0) {
    (**(code **)(puStack_938 + 8))(&puStack_938);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_10f0 = 0;
  uStack_10ef = 0;
  uStack_10e9 = 0;
  uStack_10e8 = 0;
  bStack_1100 = 0x1e;
  uStack_10ff = 0x656e696d;
  uStack_10fb = 0x7263;
  uStack_10f9 = 0x61;
  uStack_10f8 = 0x66;
  uStack_10f7 = 0x3a74;
  uStack_10f5 = 0x67;
  uStack_10f4 = 0x6c;
  uStack_10f3 = 0x6e69;
  uStack_10f1 = 0x74;
  puStack_1108 = (undefined8 *)0xa89b9af5c959d498;
  puStack_ff8 = (undefined8 *)0x0;
  uStack_ff0 = 0;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f35e488;
  puStack_1158 = (undefined8 *)0x0;
  bStack_1150 = 0;
  uStack_114f = 0;
  uStack_114b = 0;
  uStack_1149 = 0;
  if (puStack_ff8 == (undefined8 *)0x0) {
    puStack_1158 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_ff8)(&puStack_ff8,&puStack_1158);
    puStack_1158 = puStack_ff8;
  }
  puStack_ff8 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_10a8,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar15 = plVar9 + 0x11;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0f35e4d8;
  ppuVar20 = (undefined8 **)(plVar9 + 0x2e);
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  *(undefined1 *)(plVar9 + 0x36) = 0;
  if (ppuVar20 != &puStack_1158) {
    if (puStack_1158 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_1158)(&puStack_1158,ppuVar20);
      puVar10 = puStack_1158;
    }
    puStack_1158 = (undefined8 *)0x0;
    *ppuVar20 = puVar10;
  }
  puVar19 = (uint *)(plVar9 + 0x12);
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar9[0x14] = _DAT_0f552120;
        uVar6 = uRam000000000f55211c;
        uVar5 = _DAT_0f552118;
        uVar4 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar9 + 0x94) = uVar4;
        *(undefined4 *)(plVar9 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar9 + 0x9c) = uVar6;
      }
      else {
        FUN_04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar26 = (_DAT_0f552110 & 1) != 0;
      lVar14 = 0xf552111;
      if (bVar26) {
        lVar14 = _DAT_0f552120;
      }
      uVar24 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar26) {
        uVar24 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar14,uVar24);
    }
  }
  plVar9[0x11] = _DAT_0f552108;
  plVar9[0x15] = 0;
  if (puStack_1158 != (undefined8 *)0x0) {
    (*(code *)puStack_1158[1])(&puStack_1158);
  }
  *(undefined1 *)(plVar9 + 0x36) = 1;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  plStack_1118 = plVar9 + 1;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f35e5d0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0f35e620;
  puVar10[0xe] = plVar9 + 4;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_1150 = (byte)puVar10;
  uStack_114f = (undefined4)((ulong)puVar10 >> 8);
  uStack_114b = (undefined2)((ulong)puVar10 >> 0x28);
  uStack_1149 = (undefined1)((ulong)puVar10 >> 0x38);
  puStack_1158 = puVar10 + 4;
  puStack_1110 = puVar19;
  puVar11 = (undefined4 *)func_0x0c2dfd50(plVar12,&puStack_1108,0);
  plVar17 = *(long **)(puVar11 + 0x24);
  if (plVar17 < *(long **)(puVar11 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar15) {
      puVar19 = (uint *)(plVar17 + 1);
      if ((*puStack_1110 & 1) == 0) {
        plVar17[3] = *(long *)(puStack_1110 + 4);
        lVar14 = *(long *)(puStack_1110 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_1110;
        plVar17[2] = lVar14;
      }
      else {
        puStack_1110 = puVar19;
        FUN_04885070(puVar19,plVar9[0x14],plVar9[0x13]);
      }
    }
    *plVar17 = *plVar15;
    plVar17[5] = (long)(puVar10 + 4);
    plVar17[6] = (long)puVar10;
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar11 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0c2e2640(puVar11 + 0x22,plVar15,&puStack_1158);
  }
  plVar15 = plStack_1118;
  *(long **)(puVar11 + 0x24) = plVar17;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar17 = (long *)CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150)));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_10c0;
  LOCK();
  lVar14 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  if (puStack_ff8 != (undefined8 *)0x0) {
    (*(code *)puStack_ff8[1])(&puStack_ff8);
  }
  if ((bStack_1100 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_10e9,CONCAT61(uStack_10ef,uStack_10f0)),
                    CONCAT17(uStack_10f9,CONCAT25(uStack_10fb,CONCAT41(uStack_10ff,bStack_1100))) &
                    0xfffffffffffffffe);
  }
  uStack_1148 = 0;
  uStack_1147 = 0;
  uStack_1145 = 0;
  uStack_1143 = 0;
  uStack_1142 = 0;
  uStack_1141 = 0;
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113b = 0;
  uStack_113a = 0;
  uStack_1139 = 0;
  puStack_1158 = (undefined8 *)0x0;
  bStack_1150 = 0;
  uStack_114f = 0;
  uStack_114b = 0;
  uStack_1149 = 0;
  uStack_1138 = 0;
  func_0x0412f5e0(&bStack_1150,&DAT_0129a9ee,0x19);
  puStack_1158 = (undefined8 *)0xb027c043b433a6dd;
  uStack_970 = 0;
  puStack_978 = &UNK_0f35e670;
  func_0x0c2d7320(plVar12,&puStack_1158,&puStack_978);
  if (puStack_978 != (undefined *)0x0) {
    (**(code **)(puStack_978 + 8))(&puStack_978);
  }
  if ((bStack_1150 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_1139,
                             CONCAT16(uStack_113a,
                                      CONCAT15(uStack_113b,CONCAT41(uStack_113f,uStack_1140)))),
                    CONCAT17(uStack_1149,CONCAT25(uStack_114b,CONCAT41(uStack_114f,bStack_1150))) &
                    0xfffffffffffffffe);
  }
  uStack_1148 = 0;
  uStack_1147 = 0;
  uStack_1145 = 0;
  uStack_1143 = 0;
  uStack_1142 = 0;
  uStack_1141 = 0;
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113b = 0;
  uStack_113a = 0;
  uStack_1139 = 0;
  puStack_1158 = (undefined8 *)0x0;
  bStack_1150 = 0;
  uStack_114f = 0;
  uStack_114b = 0;
  uStack_1149 = 0;
  uStack_1138 = 0;
  func_0x0412f5e0(&bStack_1150,&DAT_0129a9ee,0x19);
  puStack_1158 = (undefined8 *)0xb027c043b433a6dd;
  uStack_9b0 = 0;
  puStack_9b8 = &UNK_0f35e688;
  func_0x0c2d6d40(plVar12,&puStack_1158,0,&puStack_9b8);
  if (puStack_9b8 != (undefined *)0x0) {
    (**(code **)(puStack_9b8 + 8))(&puStack_9b8);
  }
  if ((bStack_1150 & 1
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11fdfde  minecraft:enchantable
 * 0x1218018  tag:[a-zA-Z0-9_.:-]+
 * 0x1267571  minecraft:use_duration
 * 0x12e773e  minecraft:damage
 * 0x13eefd3  minecraft:rarity
 * 0x147c4a4  [a-zA-Z0-9_.:-]+
 * 0x1489eb3  minecraft:frame_count
 * 0x14a4b66  minecraft:mining_speed
 */
