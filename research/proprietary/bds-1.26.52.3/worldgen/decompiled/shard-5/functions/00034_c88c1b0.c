/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc98c1b0 (ELF vaddr 0xc88c1b0)
 * Label: caller-of-callee
 * Body:  [[0c98c1b0, 0c98c305] [0c98c310, 0c98c7c9] [0c98c7d0, 0c98c7e7] [0c98c7f0, 0c98d0e2] [0c98d0f0, 0c98d64c] [0c98d650, 0c98fed0] [0c98fee0, 0c990ddc] [0c990f41, 0c990f4f] [0c991180, 0c9911b3] [0c99148c, 0c9914a4]]
 * Ghidra: FUN_0c98c1b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0c98c1b0(byte *param_1,byte *param_2,uint *param_3,byte *param_4,byte *param_5,
            undefined8 param_6,undefined8 param_7,char param_8)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint *puVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  byte bVar25;
  ulong uVar26;
  long *plVar27;
  byte *pbVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  long *plVar32;
  byte *pbVar33;
  long lVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  bool bVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  byte bStack_178;
  undefined1 uStack_177;
  undefined2 uStack_176;
  uint uStack_174;
  byte bStack_170;
  undefined1 uStack_16f;
  undefined2 uStack_16e;
  uint uStack_16c;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  undefined1 uStack_128;
  byte bStack_118;
  undefined4 uStack_117;
  undefined4 uStack_113;
  undefined4 uStack_10f;
  undefined4 uStack_10b;
  undefined2 uStack_107;
  undefined5 uStack_105;
  undefined1 uStack_f9;
  uint *puStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  long *plStack_b0;
  byte *pbStack_a8;
  long *plStack_a0;
  long *plStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  long alStack_60 [2];
  long lStack_50;
  byte *pbStack_48;
  ulong uStack_40;
  byte *pbStack_38;
  
  pbStack_e8 = param_2;
  pbStack_e0 = param_4;
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  pbVar33 = _DAT_0f5523a0;
  pbStack_168 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    bStack_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    bStack_170 = 0;
    pbStack_168 = (byte *)0x0;
    pbStack_160 = (byte *)0x0;
    pbStack_158 = (byte *)0x0;
    func_0x0eee02f0(0xf5522b8);
    pbVar18 = (byte *)0x0;
    pbVar33 = (byte *)0x0;
  }
  else {
    bVar25 = 1;
    if (_DAT_0f5523a0 != (byte *)0x0) {
      LOCK();
      *(long *)(_DAT_0f5523a0 + 8) = *(long *)(_DAT_0f5523a0 + 8) + 1;
      UNLOCK();
      bVar25 = *pbStack_168;
    }
    pbVar18 = _DAT_0f5523a8;
    bStack_178 = 0xb8;
    uStack_177 = 0x22;
    uStack_176 = 0xf55;
    uStack_174 = 0;
    bStack_170 = 1;
    pbStack_160 = pbVar33;
    pbStack_158 = _DAT_0f5523a8;
    if (((bVar25 & 1) == 0) &&
       (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  func_0x0d5d4d00(&lStack_d0,pbStack_e0);
  puStack_f8 = param_3;
  (**(code **)(*(long *)pbVar18 + 0x240))(pbVar18,&lStack_d0);
  lVar14 = lStack_d0;
  if (lStack_d0 != 0) {
    for (; lVar14 != lStack_c8; lStack_c8 = lStack_c8 + -0x18) {
      if ((*(byte *)(lStack_c8 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lStack_c8 + -8),
                        *(ulong *)(lStack_c8 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_c8 = lVar14;
    func_0x0412a280(lStack_d0,(long)pbStack_c0 - lStack_d0);
  }
  pbStack_168 = (byte *)0x0;
  pbStack_160 = (byte *)0x0;
  if (pbVar33 != (byte *)0x0) {
    LOCK();
    pbVar18 = pbVar33 + 8;
    lVar14 = *(long *)pbVar18;
    *(long *)pbVar18 = *(long *)pbVar18 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)pbVar33 + 0x10))(pbVar33);
      func_0x0412c2d0(pbVar33);
      pbVar18 = pbStack_160;
      pbStack_158 = (byte *)0x0;
      if (pbStack_160 != (byte *)0x0) {
        pbStack_158 = (byte *)0x0;
        LOCK();
        pbVar17 = pbStack_160 + 8;
        lVar14 = *(long *)pbVar17;
        *(long *)pbVar17 = *(long *)pbVar17 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
          func_0x0412c2d0(pbVar18);
        }
      }
    }
    else {
      pbStack_158 = (byte *)0x0;
    }
  }
  if (bStack_170 == 1) {
    func_0x0eee02f0(CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))));
  }
  func_0x0412d550(0xf54fda8);
  LOCK();
  _DAT_0f54fe78 = _DAT_0f54fe78 + 1;
  UNLOCK();
  func_0x0412d610(0xf54fda8);
  pbVar17 = _DAT_0f54fe90;
  pbVar18 = _DAT_0f54fe88;
  if ((_DAT_0f54fe88 == (byte *)0x0) || (*_DAT_0f54fe88 != 1)) {
    lStack_d0 = 0;
    lStack_c8 = (ulong)lStack_c8._1_7_ << 8;
    func_0x0eee02f0(0xf54fda8);
  }
  else {
    bVar25 = 1;
    if (_DAT_0f54fe90 != (byte *)0x0) {
      LOCK();
      *(long *)(_DAT_0f54fe90 + 8) = *(long *)(_DAT_0f54fe90 + 8) + 1;
      UNLOCK();
      bVar25 = *pbVar18;
    }
    lStack_d0 = 0xf54fda8;
    lStack_c8 = CONCAT71(lStack_c8._1_7_,1);
    pbStack_c0 = pbVar18;
    pbStack_b8 = pbVar17;
    plStack_b0 = _DAT_0f54fe98;
    if ((bVar25 & 1) != 0) {
      (**(code **)(*_DAT_0f54fe98 + 0x28))(&bStack_178);
      func_0x0d5d5010(&uStack_198,pbStack_e0);
      uStack_128 = 1;
      bStack_118 = 0x16;
      uStack_117 = 0x65707865;
      uStack_113 = 0x656d6972;
      uStack_10f = 0x73746e;
      pbStack_f0 = &bStack_118;
      lVar14 = func_0x049490b0(CONCAT44(uStack_174,
                                        CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))) + 0x90
                               ,&bStack_118,&UNK_01563a4f,&pbStack_f0,&uStack_f9);
      if ((*(byte *)(lVar14 + 0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + 0x48),
                        *(ulong *)(lVar14 + 0x38) & 0xfffffffffffffffe);
      }
      *(byte **)(lVar14 + 0x48) = pbStack_188;
      *(undefined4 *)(lVar14 + 0x38) = (undefined4)uStack_198;
      *(undefined4 *)(lVar14 + 0x3c) = uStack_198._4_4_;
      *(undefined4 *)(lVar14 + 0x40) = (undefined4)uStack_190;
      *(undefined4 *)(lVar14 + 0x44) = uStack_190._4_4_;
      uStack_198 = (byte *)((ulong)uStack_198 & 0xffffffffffff0000);
      if ((bStack_118 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_105,CONCAT21(uStack_107,uStack_10b._3_1_)),
                        CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118)) &
                        0xfffffffffffffffe);
        if (((ulong)uStack_198 & 1) != 0) {
          func_0x0412a280(pbStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
      }
      lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
      func_0x0ee34180(&uStack_198,lVar14 + 0x20);
      uStack_128 = 1;
      bStack_118 = 0x22;
      uStack_117 = _DAT_0128215d;
      uStack_113 = _UNK_01282161;
      uStack_10f = _UNK_01282165;
      uStack_10b = _UNK_01282169;
      uStack_107 = 100;
      pbStack_f0 = &bStack_118;
      lVar14 = func_0x049490b0(CONCAT44(uStack_174,
                                        CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))) + 0x90
                               ,&bStack_118,&UNK_01563a4f,&pbStack_f0,&uStack_f9);
      if ((*(byte *)(lVar14 + 0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + 0x48),
                        *(ulong *)(lVar14 + 0x38) & 0xfffffffffffffffe);
      }
      *(byte **)(lVar14 + 0x48) = pbStack_188;
      *(undefined4 *)(lVar14 + 0x38) = (undefined4)uStack_198;
      *(undefined4 *)(lVar14 + 0x3c) = uStack_198._4_4_;
      *(undefined4 *)(lVar14 + 0x40) = (undefined4)uStack_190;
      *(undefined4 *)(lVar14 + 0x44) = uStack_190._4_4_;
      uStack_198 = (byte *)((ulong)uStack_198 & 0xffffffffffff0000);
      if ((bStack_118 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_105,CONCAT21(uStack_107,uStack_10b._3_1_)),
                        CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118)) &
                        0xfffffffffffffffe);
        if (((ulong)uStack_198 & 1) != 0) {
          func_0x0412a280(pbStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
      }
      lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
      if (*(int *)(lVar14 + 0x398) == 1) {
        uStack_128 = 1;
        uStack_198 = (byte *)0x726f746964650c;
        bStack_118 = (byte)&uStack_198;
        uStack_117 = (undefined4)((ulong)&uStack_198 >> 8);
        uStack_113._0_3_ = (undefined3)((ulong)&uStack_198 >> 0x28);
        lVar14 = func_0x049490b0(CONCAT44(uStack_174,
                                          CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))) +
                                 0x90,&uStack_198,&UNK_01563a4f,&bStack_118,&pbStack_f0);
        if ((*(byte *)(lVar14 + 0x38) & 1) == 0) {
          *(undefined1 *)(lVar14 + 0x38) = 8;
          puVar15 = (undefined4 *)(lVar14 + 0x39);
        }
        else {
          *(undefined8 *)(lVar14 + 0x40) = 4;
          puVar15 = *(undefined4 **)(lVar14 + 0x48);
        }
        *puVar15 = 0x65757274;
        *(undefined1 *)(puVar15 + 1) = 0;
        pbVar17 = pbStack_b8;
        if (((ulong)uStack_198 & 1) != 0) {
          func_0x0412a280(pbStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
          pbVar17 = pbStack_b8;
        }
      }
      func_0x0c9914b0(&bStack_178);
    }
    pbStack_c0 = (byte *)0x0;
    pbStack_b8 = (byte *)0x0;
    pbVar33 = pbVar17;
    if (pbVar17 != (byte *)0x0) {
      LOCK();
      pbVar18 = pbVar17 + 8;
      lVar14 = *(long *)pbVar18;
      *(long *)pbVar18 = *(long *)pbVar18 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
        func_0x0412c2d0(pbVar17);
      }
      pbVar18 = pbStack_b8;
      plStack_b0 = (long *)0x0;
      if (pbStack_b8 != (byte *)0x0) {
        LOCK();
        plVar22 = (long *)((long)pbStack_b8 + 8);
        lVar14 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)pbStack_b8 + 0x10))(pbStack_b8);
          func_0x0412c2d0(pbVar18);
        }
      }
    }
  }
  if ((char)lStack_c8 == '\x01') {
    func_0x0eee02f0(lStack_d0);
  }
  pbVar18 = (byte *)**(long **)pbStack_e0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (puVar16 == (undefined8 *)0x0) goto LAB_0c9909a2;
  do {
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    *(undefined4 *)(puVar16 + 4) = 0x3f800000;
    puVar16[5] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    *(byte *)(puVar16 + 10) = (byte)pbVar18 & 1;
    plVar22 = *(long **)(param_1 + 0x2c0);
    *(undefined8 **)(param_1 + 0x2c0) = puVar16;
    if (plVar22 != (long *)0x0) {
      puVar16 = (undefined8 *)plVar22[2];
      while (puVar16 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)*puVar16;
        func_0x0d1cdab0(puVar16 + 5,0);
        if ((*(byte *)(puVar16 + 2) & 1) != 0) {
          func_0x0412a280(puVar16[4],puVar16[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar16);
        puVar16 = puVar20;
      }
      lVar14 = *plVar22;
      *plVar22 = 0;
      if (lVar14 != 0) {
        func_0x0412a280(lVar14,plVar22[1] << 3);
      }
      func_0x0412a280(plVar22,0x58);
    }
    func_0x0c9cdd80(*(undefined8 *)(param_1 + 0x148));
    plVar32 = *(long **)(*(long *)(param_1 + 0x148) + 0x50);
    for (plVar22 = *(long **)(*(long *)(param_1 + 0x148) + 0x48); plVar22 != plVar32;
        plVar22 = plVar22 + 1) {
      if (*plVar22 != 0) {
        func_0x0c848d00();
      }
    }
    pbVar18 = pbStack_e8 + 1;
    bVar37 = (*pbStack_e8 & 1) == 0;
    pbVar17 = *(byte **)(pbStack_e8 + 0x10);
    if (bVar37) {
      pbVar17 = pbVar18;
    }
    uVar26 = (ulong)(*pbStack_e8 >> 1);
    if (!bVar37) {
      uVar26 = *(ulong *)(pbStack_e8 + 8);
    }
    bStack_178 = (byte)pbVar17;
    uStack_177 = (undefined1)((ulong)pbVar17 >> 8);
    uStack_176 = (undefined2)((ulong)pbVar17 >> 0x10);
    uStack_174 = (uint)((ulong)pbVar17 >> 0x20);
    bStack_170 = (byte)uVar26;
    uStack_16f = (undefined1)(uVar26 >> 8);
    uStack_16e = (undefined2)(uVar26 >> 0x10);
    uStack_16c = (uint)(uVar26 >> 0x20);
    pbStack_168 = (byte *)CONCAT71(pbStack_168._1_7_,1);
    uStack_198 = (byte *)0x0;
    func_0x0eeb79f0(&lStack_d0,&uStack_198);
    pbStack_38 = pbVar18;
    if (((ulong)uStack_198 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    }
    if ((param_5 != (byte *)0x0) && (pbVar18 = param_1 + 0x238, pbVar18 != param_5)) {
      bVar25 = *param_5;
      if ((*pbVar18 & 1) == 0) {
        if ((bVar25 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_5 + 0x10);
          uVar4 = *(undefined4 *)(param_5 + 4);
          uVar5 = *(undefined4 *)(param_5 + 8);
          uVar6 = *(undefined4 *)(param_5 + 0xc);
          *(undefined4 *)pbVar18 = *(undefined4 *)param_5;
          *(undefined4 *)(param_1 + 0x23c) = uVar4;
          *(undefined4 *)(param_1 + 0x240) = uVar5;
          *(undefined4 *)(param_1 + 0x244) = uVar6;
        }
        else {
          func_0x04885070(pbVar18,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
        }
      }
      else {
        bVar37 = (bVar25 & 1) != 0;
        pbVar17 = param_5 + 1;
        if (bVar37) {
          pbVar17 = *(byte **)(param_5 + 0x10);
        }
        uVar26 = (ulong)(bVar25 >> 1);
        if (bVar37) {
          uVar26 = *(ulong *)(param_5 + 8);
        }
        func_0x04885120(pbVar18,pbVar17,uVar26);
      }
    }
    if ((param_1[0x218] == 0) &&
       (lVar14 = (**(code **)(*(long *)param_1 + 0x568))(),
       (**(byte **)(lVar14 + 0x138) & 0x20) != 0)) {
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x58,0);
      }
      puVar16[6] = 0;
      puVar16[7] = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      *(undefined4 *)(puVar16 + 7) = 0x3f800000;
      puVar16[8] = 0;
      puVar16[9] = 0;
      puVar16[10] = 0;
      bStack_118 = (byte)puVar16;
      bVar25 = bStack_118;
      uStack_117 = (undefined4)((ulong)puVar16 >> 8);
      uStack_113._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
      pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
      if (pbVar18 == (byte *)0x0) {
        func_0x0eec74c0(0x88,0);
      }
      pbVar18[0x30] = 0;
      pbVar18[0x31] = 0;
      pbVar18[0x32] = 0;
      pbVar18[0x33] = 0;
      pbVar18[0x34] = 0;
      pbVar18[0x35] = 0;
      pbVar18[0x36] = 0;
      pbVar18[0x37] = 0;
      pbVar18[0x38] = 0;
      pbVar18[0x39] = 0;
      pbVar18[0x3a] = 0;
      pbVar18[0x3b] = 0;
      pbVar18[0x3c] = 0;
      pbVar18[0x3d] = 0;
      pbVar18[0x3e] = 0;
      pbVar18[0x3f] = 0;
      pbVar18[0x70] = 0;
      pbVar18[0x71] = 0;
      pbVar18[0x72] = 0;
      pbVar18[0x73] = 0;
      pbVar18[0x74] = 0;
      pbVar18[0x75] = 0;
      pbVar18[0x76] = 0;
      pbVar18[0x77] = 0;
      pbVar18[0x78] = 0;
      pbVar18[0x79] = 0;
      pbVar18[0x7a] = 0;
      pbVar18[0x7b] = 0;
      pbVar18[0x7c] = 0;
      pbVar18[0x7d] = 0;
      pbVar18[0x7e] = 0;
      pbVar18[0x7f] = 0;
      pbVar18[0x60] = 0;
      pbVar18[0x61] = 0;
      pbVar18[0x62] = 0;
      pbVar18[99] = 0;
      pbVar18[100] = 0;
      pbVar18[0x65] = 0;
      pbVar18[0x66] = 0;
      pbVar18[0x67] = 0;
      pbVar18[0x68] = 0;
      pbVar18[0x69] = 0;
      pbVar18[0x6a] = 0;
      pbVar18[0x6b] = 0;
      pbVar18[0x6c] = 0;
      pbVar18[0x6d] = 0;
      pbVar18[0x6e] = 0;
      pbVar18[0x6f] = 0;
      pbVar18[0x50] = 0;
      pbVar18[0x51] = 0;
      pbVar18[0x52] = 0;
      pbVar18[0x53] = 0;
      pbVar18[0x54] = 0;
      pbVar18[0x55] = 0;
      pbVar18[0x56] = 0;
      pbVar18[0x57] = 0;
      pbVar18[0x58] = 0;
      pbVar18[0x59] = 0;
      pbVar18[0x5a] = 0;
      pbVar18[0x5b] = 0;
      pbVar18[0x5c] = 0;
      pbVar18[0x5d] = 0;
      pbVar18[0x5e] = 0;
      pbVar18[0x5f] = 0;
      pbVar18[0x40] = 0;
      pbVar18[0x41] = 0;
      pbVar18[0x42] = 0;
      pbVar18[0x43] = 0;
      pbVar18[0x44] = 0;
      pbVar18[0x45] = 0;
      pbVar18[0x46] = 0;
      pbVar18[0x47] = 0;
      pbVar18[0x48] = 0;
      pbVar18[0x49] = 0;
      pbVar18[0x4a] = 0;
      pbVar18[0x4b] = 0;
      pbVar18[0x4c] = 0;
      pbVar18[0x4d] = 0;
      pbVar18[0x4e] = 0;
      pbVar18[0x4f] = 0;
      pbVar18[0x20] = 0;
      pbVar18[0x21] = 0;
      pbVar18[0x22] = 0;
      pbVar18[0x23] = 0;
      pbVar18[0x24] = 0;
      pbVar18[0x25] = 0;
      pbVar18[0x26] = 0;
      pbVar18[0x27] = 0;
      pbVar18[0x28] = 0;
      pbVar18[0x29] = 0;
      pbVar18[0x2a] = 0;
      pbVar18[0x2b] = 0;
      pbVar18[0x2c] = 0;
      pbVar18[0x2d] = 0;
      pbVar18[0x2e] = 0;
      pbVar18[0x2f] = 0;
      pbVar18[0x10] = 0;
      pbVar18[0x11] = 0;
      pbVar18[0x12] = 0;
      pbVar18[0x13] = 0;
      pbVar18[0x14] = 0;
      pbVar18[0x15] = 0;
      pbVar18[0x16] = 0;
      pbVar18[0x17] = 0;
      pbVar18[0x18] = 0;
      pbVar18[0x19] = 0;
      pbVar18[0x1a] = 0;
      pbVar18[0x1b] = 0;
      pbVar18[0x1c] = 0;
      pbVar18[0x1d] = 0;
      pbVar18[0x1e] = 0;
      pbVar18[0x1f] = 0;
      pbVar18[0] = 0;
      pbVar18[1] = 0;
      pbVar18[2] = 0;
      pbVar18[3] = 0;
      pbVar18[4] = 0;
      pbVar18[5] = 0;
      pbVar18[6] = 0;
      pbVar18[7] = 0;
      pbVar18[8] = 0;
      pbVar18[9] = 0;
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      pbVar18[0xc] = 0;
      pbVar18[0xd] = 0;
      pbVar18[0xe] = 0;
      pbVar18[0xf] = 0;
      pbVar18[0x80] = 0;
      pbVar18[0x81] = 0;
      pbVar18[0x82] = 0;
      pbVar18[0x83] = 0;
      pbVar18[0x84] = 0;
      pbVar18[0x85] = 0;
      pbVar18[0x86] = 0;
      pbVar18[0x87] = 0;
      pbVar18[0x30] = 0;
      pbVar18[0x31] = 0;
      pbVar18[0x32] = 0x60;
      pbVar18[0x33] = 0x3f;
      func_0x0c9bb3d0(pbVar18,8);
      pbVar18[0x58] = 0;
      pbVar18[0x59] = 0;
      pbVar18[0x5a] = 0;
      pbVar18[0x5b] = 0;
      pbVar18[0x5c] = 0;
      pbVar18[0x5d] = 0;
      pbVar18[0x5e] = 0;
      pbVar18[0x5f] = 0;
      pbVar18[0x60] = 0;
      pbVar18[0x61] = 0;
      pbVar18[0x62] = 0;
      pbVar18[99] = 0;
      pbVar18[100] = 0;
      pbVar18[0x65] = 0;
      pbVar18[0x66] = 0;
      pbVar18[0x67] = 0;
      pbVar18[0x48] = 0;
      pbVar18[0x49] = 0;
      pbVar18[0x4a] = 0;
      pbVar18[0x4b] = 0;
      pbVar18[0x4c] = 0;
      pbVar18[0x4d] = 0;
      pbVar18[0x4e] = 0;
      pbVar18[0x4f] = 0;
      pbVar18[0x50] = 0;
      pbVar18[0x51] = 0;
      pbVar18[0x52] = 0;
      pbVar18[0x53] = 0;
      pbVar18[0x54] = 0;
      pbVar18[0x55] = 0;
      pbVar18[0x56] = 0;
      pbVar18[0x57] = 0;
      pbVar18[0x38] = 0;
      pbVar18[0x39] = 0;
      pbVar18[0x3a] = 0;
      pbVar18[0x3b] = 0;
      pbVar18[0x3c] = 0;
      pbVar18[0x3d] = 0;
      pbVar18[0x3e] = 0;
      pbVar18[0x3f] = 0;
      pbVar18[0x40] = 0;
      pbVar18[0x41] = 0;
      pbVar18[0x42] = 0;
      pbVar18[0x43] = 0;
      pbVar18[0x44] = 0;
      pbVar18[0x45] = 0;
      pbVar18[0x46] = 0;
      pbVar18[0x47] = 0;
      pbVar18[0x68] = 0;
      pbVar18[0x69] = 0;
      pbVar18[0x6a] = 0x60;
      pbVar18[0x6b] = 0x3f;
      func_0x0c9bb5d0(pbVar18 + 0x38,8);
      pbVar18[0x70] = 0;
      pbVar18[0x71] = 0;
      pbVar18[0x72] = 0;
      pbVar18[0x73] = 0;
      pbVar18[0x74] = 0;
      pbVar18[0x75] = 0;
      pbVar18[0x76] = 0;
      pbVar18[0x77] = 0;
      pbVar18[0x78] = 0;
      pbVar18[0x79] = 0;
      pbVar18[0x7a] = 0;
      pbVar18[0x7b] = 0;
      pbVar18[0x7c] = 0;
      pbVar18[0x7d] = 0;
      pbVar18[0x7e] = 0;
      pbVar18[0x7f] = 0;
      pbVar18[0x80] = 0;
      pbVar18[0x81] = 0;
      pbVar18[0x82] = 0;
      pbVar18[0x83] = 0;
      pbVar18[0x84] = 0;
      pbVar18[0x85] = 0;
      pbVar18[0x86] = 0;
      pbVar18[0x87] = 0;
      pbStack_f0 = pbVar18;
      cVar10 = (**(code **)(*(long *)param_1 + 0x550))();
      if (cVar10 != '\0') {
        uVar19 = (**(code **)(*(long *)param_1 + 0x558))();
        func_0x0d286e70(pbVar18,puVar16,uVar19);
      }
      lVar14 = (**(code **)(*(long *)param_1 + 0x8d8))();
      if (lVar14 != 0) {
        pbStack_168 = (byte *)0x0;
        pbStack_160 = (byte *)0x0;
        pbStack_158 = (byte *)0x0;
        uStack_177 = (undefined1)((ulong)puVar16 >> 8);
        uStack_176 = (undefined2)((ulong)puVar16 >> 0x10);
        uStack_174 = (uint)((ulong)puVar16 >> 0x20);
        bStack_170 = (byte)pbVar18;
        uStack_16f = (undefined1)((ulong)pbVar18 >> 8);
        uStack_16e = (undefined2)((ulong)pbVar18 >> 0x10);
        uStack_16c = (uint)((ulong)pbVar18 >> 0x20);
        bStack_178 = bVar25;
        uVar19 = (**(code **)(*(long *)param_1 + 0x270))();
        func_0x0d2888a0(pbVar18,puVar16,&bStack_178,lVar14,uVar19);
        uVar19 = (**(code **)(*(long *)param_1 + 0x270))();
        func_0x0d285630(&bStack_178,lVar14,uVar19);
        func_0x0d282540(&bStack_178);
        pbVar17 = pbStack_168;
        pbVar33 = pbStack_160;
        if (pbStack_168 != (byte *)0x0) {
          while (pbVar17 != pbVar33) {
            func_0x0d284b20(pbVar33 + -0x58);
            pbVar33 = pbVar33 + -0x58;
          }
          pbStack_160 = pbVar17;
          func_0x0412a280(pbStack_168,(long)pbStack_158 - (long)pbStack_168);
        }
        cVar10 = (**(code **)(*(long *)param_1 + 0x550))();
        if (cVar10 != '\0') {
          uVar19 = (**(code **)(*(long *)param_1 + 0x558))();
          func_0x0d287c90(pbVar18,uVar19);
        }
      }
      if ((*(long *)(param_1 + 0x310) == 0) &&
         (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b6dd1),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0x310) == '\0') &&
         (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b6dd1),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(**(long **)(param_1 + 800) + 0x10))(&uStack_198);
      pbVar33 = uStack_198;
      if (uStack_198 != (byte *)0x0) {
        func_0x0c9944f0(uStack_198);
        if ((DAT_0f649980 == '\0') && (iVar13 = func_0x04108328(&DAT_0f649980), iVar13 != 0)) {
          func_0x09ce8df0(0xf649968);
          FUN_0410844d(&DAT_0f649980);
        }
        pbVar17 = pbVar33 + 0x28;
        plVar22 = (long *)(*(long *)(pbVar33 + 0x28) +
                          (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) -
                                               *(long *)(pbVar33 + 0x28)) >> 3) - 1U & _DAT_0f64996c
                                 ) * 8);
        pbStack_90 = pbVar33 + 0x40;
        do {
          if (*plVar22 == -1) goto LAB_0c98cd0a;
          lVar14 = *plVar22 * 0x30;
          plVar22 = (long *)(*(long *)(pbVar33 + 0x40) + lVar14);
        } while (*(uint *)(*(long *)(pbVar33 + 0x40) + 8 + lVar14) != _DAT_0f64996c);
        if ((plVar22 == *(long **)(pbVar33 + 0x48)) ||
           (plVar32 = (long *)plVar22[2],
           (plVar32 == (long *)0x0 || *(char *)((long)plVar22 + 0x2c) == '\x04') ||
           (int)plVar22[5] != -0x1a3b76f7)) {
LAB_0c98cd0a:
          if ((DAT_0f649980 == '\0') && (iVar13 = func_0x04108328(&DAT_0f649980), iVar13 != 0)) {
            func_0x09ce8df0(0xf649968);
            FUN_0410844d(&DAT_0f649980);
          }
          uVar29 = _DAT_0f64996c;
          uVar26 = (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) - *(long *)(pbVar33 + 0x28)) >> 3
                                ) - 1U & _DAT_0f64996c);
          plVar22 = (long *)(*(long *)(pbVar33 + 0x28) + uVar26 * 8);
          lVar14 = *(long *)(pbVar33 + 0x40);
          plVar27 = plVar22;
          do {
            if (*plVar27 == -1) {
              plVar32 = *(long **)(pbVar33 + 0x48);
              goto LAB_0c98cd7a;
            }
            lVar30 = *plVar27 * 0x30;
            plVar27 = (long *)(lVar14 + lVar30);
          } while (*(uint *)(lVar14 + 8 + lVar30) != _DAT_0f64996c);
          plVar32 = *(long **)(pbVar33 + 0x48);
          if (plVar27 == plVar32) {
LAB_0c98cd7a:
            uStack_40 = uVar26;
            if (plVar32 < *(long **)(pbVar33 + 0x50)) {
              *plVar32 = *plVar22;
              *(uint *)(plVar32 + 1) = uVar29;
              plVar32[2] = 0;
              plVar32[3] = (long)&UNK_0c9bb8e0;
              *(undefined4 *)(plVar32 + 5) = 0xe5c48909;
              plVar32[4] = (long)&UNK_0c9bba60;
              *(undefined1 *)((long)plVar32 + 0x2c) = 1;
              puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
              if (puVar20 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x40,0);
              }
              puVar20[6] = 0;
              puVar20[7] = 0;
              puVar20[4] = 0;
              puVar20[5] = 0;
              puVar20[2] = 0;
              puVar20[3] = 0;
              *puVar20 = 0;
              puVar20[1] = 0;
              plVar32[2] = (long)puVar20;
              plVar32 = plVar32 + 6;
              *(long **)(pbVar33 + 0x48) = plVar32;
            }
            else {
              puVar20 = (undefined8 *)((long)plVar32 - lVar14);
              uVar26 = ((long)puVar20 >> 4) * -0x5555555555555555 + 1;
              pbStack_48 = pbVar17;
              if (0x555555555555555 < uVar26) {
                func_0x049dc2c0();
LAB_0c990dc0:
                FUN_04882eb0();
                goto LAB_0c990dc5;
              }
              lVar14 = (long)*(long **)(pbVar33 + 0x50) - lVar14 >> 4;
              uVar31 = lVar14 * 0x5555555555555556;
              if (uVar26 < uVar31) {
                uVar26 = uVar31;
              }
              if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
                uVar26 = 0x555555555555555;
              }
              pbStack_158 = pbStack_90;
              if (uVar26 == 0) {
                lVar14 = 0;
              }
              else {
                plStack_d8 = plVar22;
                if (0x555555555555555 < uVar26) goto LAB_0c990dc0;
                lStack_50 = uVar26 * 0x30;
                lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                plVar22 = plStack_d8;
                if (lVar14 == 0) {
                  func_0x0eec74c0(lStack_50,0);
                  lVar14 = 0;
                  plVar22 = plStack_d8;
                }
              }
              bStack_178 = (byte)lVar14;
              uStack_177 = (undefined1)((ulong)lVar14 >> 8);
              uStack_176 = (undefined2)((ulong)lVar14 >> 0x10);
              uStack_174 = (uint)((ulong)lVar14 >> 0x20);
              pbStack_168 = (byte *)(lVar14 + (long)puVar20);
              bStack_170 = (byte)pbStack_168;
              uStack_16f = (undefined1)((ulong)pbStack_168 >> 8);
              uStack_16e = (undefined2)((ulong)pbStack_168 >> 0x10);
              uStack_16c = (uint)((ulong)pbStack_168 >> 0x20);
              pbStack_160 = (byte *)(uVar26 * 0x30 + lVar14);
              *(long *)(lVar14 + (long)puVar20) = *plVar22;
              *(uint *)(lVar14 + 8 + (long)puVar20) = uVar29;
              *(undefined8 *)(lVar14 + 0x10 + (long)puVar20) = 0;
              *(undefined **)(lVar14 + 0x18 + (long)puVar20) = &UNK_0c9bb8e0;
              *(undefined4 *)(lVar14 + 0x28 + (long)puVar20) = 0xe5c48909;
              *(undefined **)(lVar14 + 0x20 + (long)puVar20) = &UNK_0c9bba60;
              *(undefined1 *)(lVar14 + 0x2c + (long)puVar20) = 1;
              plStack_d8 = (long *)pbStack_168;
              puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
              if (puVar20 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x40,0);
              }
              puVar20[6] = 0;
              puVar20[7] = 0;
              puVar20[4] = 0;
              puVar20[5] = 0;
              puVar20[2] = 0;
              puVar20[3] = 0;
              *puVar20 = 0;
              puVar20[1] = 0;
              plStack_d8[2] = (long)puVar20;
              pbStack_168 = (byte *)(plStack_d8 + 6);
              func_0x049dc0d0(pbStack_90,&bStack_178);
              pbVar17 = pbStack_48;
              plVar32 = *(long **)(pbVar33 + 0x48);
              pbVar28 = (byte *)CONCAT44(uStack_16c,
                                         CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
              while (pbVar35 = pbStack_168, pbVar28 != pbVar35) {
                pbStack_168 = pbVar35 + -0x30;
                if (*(code **)(pbVar35 + -0x10) != (code *)0x0) {
                  (**(code **)(pbVar35 + -0x10))(pbVar35 + -0x20);
                }
              }
              lVar14 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
              pbStack_168 = pbVar35;
              if (lVar14 != 0) {
                func_0x0412a280(lVar14,(long)pbStack_160 - lVar14);
              }
            }
            *(long **)(pbVar33 + 0x48) = plVar32;
            lVar14 = *(long *)(pbVar33 + 0x28);
            lVar30 = *(long *)(pbVar33 + 0x40);
            lVar34 = (long)plVar32 - lVar30;
            uVar26 = (lVar34 >> 4) * -0x5555555555555555;
            *(ulong *)(lVar14 + uStack_40 * 8) = uVar26 - 1;
            lVar14 = *(long *)(pbVar33 + 0x30) - lVar14;
            fVar38 = (float)(ulong)(lVar14 >> 3) * *(float *)(pbVar33 + 0x58);
            uVar31 = (ulong)fVar38;
            uVar31 = (long)(fVar38 - _DAT_01198778) & (long)uVar31 >> 0x3f | uVar31;
            if (uVar31 <= uVar26 && uVar26 - uVar31 != 0) {
              func_0x049dc2d0(pbVar17,lVar14 >> 2);
              lVar30 = *(long *)(pbVar33 + 0x40);
              lVar34 = *(long *)(pbVar33 + 0x48) - lVar30;
            }
            plVar27 = (long *)(lVar30 + lVar34 + -0x30);
          }
          plVar32 = (long *)0x0;
          if ((int)plVar27[5] == -0x1a3b76f7) {
            plVar32 = (long *)plVar27[2];
          }
          if (*(char *)((long)plVar27 + 0x2c) == '\x04') {
            plVar32 = (long *)0x0;
          }
        }
        bStack_118 = 0;
        uStack_117 = 0;
        uStack_113 = uStack_113 & 0xff000000;
        lVar14 = *plVar32;
        *plVar32 = (long)puVar16;
        if (lVar14 != 0) {
          func_0x0c9bb240(lVar14);
          func_0x0412a280(lVar14,0x58);
        }
        pbStack_f0 = (byte *)0x0;
        lVar14 = plVar32[1];
        plVar32[1] = (long)pbVar18;
        if (lVar14 != 0) {
          func_0x0c9bb760(lVar14);
          func_0x0412a280(lVar14,0x88);
        }
      }
      plVar22 = (long *)uStack_190;
      if (uStack_190 != (byte *)0x0) {
        LOCK();
        plVar32 = (long *)((long)uStack_190 + 8);
        lVar14 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)uStack_190 + 0x10))(uStack_190);
          func_0x0412c2d0(plVar22);
        }
      }
      pbVar18 = pbStack_f0;
      if (pbStack_f0 != (byte *)0x0) {
        func_0x0c9bb760(pbStack_f0);
        func_0x0412a280(pbVar18,0x88);
      }
      lVar14 = CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118));
      if (lVar14 != 0) {
        func_0x0c9bb240(lVar14);
        func_0x0412a280(lVar14,0x58);
      }
    }
    if (param_1[0x218] == 0) {
      pbVar18 = *(byte **)(*(long *)(param_1 + 0x2f0) + 0x18);
      plVar22 = *(long **)(param_1 + 0x78);
      uVar19 = (**(code **)(*(long *)param_1 + 0xca0))();
      uVar21 = (**(code **)(*(long *)param_1 + 0x8d8))();
      func_0x0ca6cb30(&plStack_68,uVar19,uVar21,*(undefined8 *)(param_1 + 0x278));
      plVar32 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22);
      bStack_118 = 0;
      uStack_117 = 0;
      uStack_113 = uStack_113 & 0xff000000;
      pbVar33 = &UNK_0f3e8c18;
      bStack_178 = 0x18;
      uStack_177 = 0x8c;
      uStack_176 = 0xf3e;
      uStack_174 = 0;
      bStack_170 = 0x10;
      uStack_16f = 0x2b;
      uStack_16e = 0xc96;
      uStack_16c = 0;
      pbStack_168 = (byte *)0x0;
      pbStack_160 = pbVar18;
      (**(code **)(*plVar32 + 0x10))(&uStack_198,plVar32,&bStack_178,0,&bStack_118);
      lVar14 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
      if (lVar14 != 0) {
        (**(code **)(lVar14 + 8))(&bStack_178);
      }
      pbVar17 = pbVar18 + 0xf8;
      if ((byte *)&uStack_198 != pbVar17) {
        if (*(long *)(pbVar18 + 0x100) == 0) {
          lVar14 = 0;
        }
        else {
          plVar32 = (long *)func_0x0412c300();
          bStack_170 = (byte)plVar32;
          uStack_16f = (undefined1)((ulong)plVar32 >> 8);
          uStack_16e = (undefined2)((ulong)plVar32 >> 0x10);
          uStack_16c = (uint)((ulong)plVar32 >> 0x20);
          if (plVar32 != (long *)0x0) {
            lVar14 = *(long *)pbVar17;
            bStack_178 = (byte)lVar14;
            uStack_177 = (undefined1)((ulong)lVar14 >> 8);
            uStack_176 = (undefined2)((ulong)lVar14 >> 0x10);
            uStack_174 = (uint)((ulong)lVar14 >> 0x20);
            if (lVar14 != 0) {
              (**(code **)(**(long **)(lVar14 + 0x28) + 0x10))();
            }
            LOCK();
            plVar27 = plVar32 + 1;
            lVar14 = *plVar27;
            *plVar27 = *plVar27 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              func_0x0412c2d0(plVar32);
            }
          }
          lVar14 = *(long *)(pbVar18 + 0x100);
        }
        uVar4 = (undefined4)uStack_198;
        uVar5 = uStack_198._4_4_;
        uVar6 = (undefined4)uStack_190;
        uVar8 = uStack_190._4_4_;
        uStack_198 = (byte *)0x0;
        uStack_190 = (byte *)0x0;
        *(undefined4 *)pbVar17 = uVar4;
        *(undefined4 *)(pbVar18 + 0xfc) = uVar5;
        *(undefined4 *)(pbVar18 + 0x100) = uVar6;
        *(undefined4 *)(pbVar18 + 0x104) = uVar8;
        if (lVar14 != 0) {
          func_0x0412c2d0();
        }
      }
      if (uStack_190 != (byte *)0x0) {
        plVar32 = (long *)func_0x0412c300();
        bStack_170 = (byte)plVar32;
        uStack_16f = (undefined1)((ulong)plVar32 >> 8);
        uStack_16e = (undefined2)((ulong)plVar32 >> 0x10);
        uStack_16c = (uint)((ulong)plVar32 >> 0x20);
        if (plVar32 != (long *)0x0) {
          bStack_178 = (byte)uStack_198;
          uStack_177 = (undefined1)((ulong)uStack_198 >> 8);
          uStack_176 = (undefined2)((ulong)uStack_198 >> 0x10);
          uStack_174 = (uint)((ulong)uStack_198 >> 0x20);
          if (uStack_198 != (byte *)0x0) {
            (**(code **)(**(long **)(uStack_198 + 0x28) + 0x10))();
          }
          LOCK();
          plVar27 = plVar32 + 1;
          lVar14 = *plVar27;
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            func_0x0412c2d0(plVar32);
          }
        }
        if (uStack_190 != (byte *)0x0) {
          func_0x0412c2d0();
        }
      }
      plVar32 = (long *)CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118));
      bStack_118 = 0;
      uStack_117 = 0;
      uStack_113._0_3_ = 0;
      if (plVar32 != (long *)0x0) {
        (**(code **)(*plVar32 + 8))();
      }
      plVar22 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22);
      bStack_118 = 0;
      uStack_117 = 0;
      uStack_113 = (uint)uStack_113._3_1_ << 0x18;
      bStack_178 = 0x18;
      uStack_177 = 0x8c;
      uStack_176 = 0xf3e;
      uStack_174 = 0;
      bStack_170 = 0x10;
      uStack_16f = 0x2b;
      uStack_16e = 0xc96;
      uStack_16c = 0;
      pbStack_168 = (byte *)0x0;
      pbVar17 = &bStack_178;
      pbStack_160 = pbVar18;
      (**(code **)(*plVar22 + 0x10))(&uStack_198,plVar22,pbVar17,0,&bStack_118);
      lVar14 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
      if (lVar14 != 0) {
        (**(code **)(lVar14 + 8))(&bStack_178);
      }
      pbVar28 = pbVar18 + 0x108;
      if ((byte *)&uStack_198 != pbVar28) {
        if (*(long *)(pbVar18 + 0x110) == 0) {
          lVar14 = 0;
        }
        else {
          plVar22 = (long *)func_0x0412c300(*(long *)(pbVar18 + 0x110));
          bStack_170 = (byte)plVar22;
          uStack_16f = (undefined1)((ulong)plVar22 >> 8);
          uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
          uStack_16c = (uint)((ulong)plVar22 >> 0x20);
          if (plVar22 != (long *)0x0) {
            lVar14 = *(long *)pbVar28;
            bStack_178 = (byte)lVar14;
            uStack_177 = (undefined1)((ulong)lVar14 >> 8);
            uStack_176 = (undefined2)((ulong)lVar14 >> 0x10);
            uStack_174 = (uint)((ulong)lVar14 >> 0x20);
            if (lVar14 != 0) {
              (**(code **)(**(long **)(lVar14 + 0x28) + 0x10))();
            }
            LOCK();
            plVar32 = plVar22 + 1;
            lVar14 = *plVar32;
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
              func_0x0412c2d0(plVar22);
            }
          }
          lVar14 = *(long *)(pbVar18 + 0x110);
        }
        uVar4 = (undefined4)uStack_198;
        uVar5 = uStack_198._4_4_;
        uVar6 = (undefined4)uStack_190;
        uVar8 = uStack_190._4_4_;
        uStack_198 = (byte *)0x0;
        uStack_190 = (byte *)0x0;
        *(undefined4 *)pbVar28 = uVar4;
        *(undefined4 *)(pbVar18 + 0x10c) = uVar5;
        *(undefined4 *)(pbVar18 + 0x110) = uVar6;
        *(undefined4 *)(pbVar18 + 0x114) = uVar8;
        if (lVar14 != 0) {
          func_0x0412c2d0(lVar14);
        }
      }
      if (uStack_190 != (byte *)0x0) {
        plVar22 = (long *)func_0x0412c300(uStack_190);
        bStack_170 = (byte)plVar22;
        uStack_16f = (undefined1)((ulong)plVar22 >> 8);
        uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
        uStack_16c = (uint)((ulong)plVar22 >> 0x20);
        if (plVar22 != (long *)0x0) {
          bStack_178 = (byte)uStack_198;
          uStack_177 = (undefined1)((ulong)uStack_198 >> 8);
          uStack_176 = (undefined2)((ulong)uStack_198 >> 0x10);
          uStack_174 = (uint)((ulong)uStack_198 >> 0x20);
          if (uStack_198 != (byte *)0x0) {
            (**(code **)(**(long **)(uStack_198 + 0x28) + 0x10))();
          }
          LOCK();
          plVar32 = plVar22 + 1;
          lVar14 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
          }
        }
        if (uStack_190 != (byte *)0x0) {
          func_0x0412c2d0(uStack_190);
        }
      }
      plVar22 = (long *)CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118));
      bStack_118 = 0;
      uStack_117 = 0;
      uStack_113 = uStack_113 & 0xff000000;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))(plVar22);
      }
      bStack_178 = 0x40;
      uStack_177 = 0x8c;
      uStack_176 = 0xf3e;
      uStack_174 = 0;
      bStack_170 = (byte)pbVar18;
      uStack_16f = (undefined1)((ulong)pbVar18 >> 8);
      uStack_16e = (undefined2)((ulong)pbVar18 >> 0x10);
      uStack_16c = (uint)((ulong)pbVar18 >> 0x20);
      pbStack_158 = pbVar17;
      lVar14 = 0x20;
      plVar22 = plStack_68;
      if (plStack_68 == alStack_60) {
LAB_0c98d684:
        (**(code **)(*(long *)pbVar17 + lVar14))();
      }
      else {
        do {
          (**(code **)(*(long *)pbStack_158 + 0x30))(pbStack_158,plVar22 + 4,plVar22 + 7);
          plVar32 = (long *)plVar22[1];
          if ((long *)plVar22[1] == (long *)0x0) {
            do {
              plVar27 = (long *)plVar22[2];
              bVar37 = plVar22 != (long *)*plVar27;
              plVar22 = plVar27;
            } while (bVar37);
          }
          else {
            do {
              plVar27 = plVar32;
              plVar32 = (long *)*plVar27;
            } while ((long *)*plVar27 != (long *)0x0);
          }
          pbVar17 = pbStack_158;
          if (plVar27 == alStack_60) goto LAB_0c98d670;
          plVar22 = plVar27;
        } while (pbStack_158 != (byte *)0x0);
        func_0x04891200();
LAB_0c98d670:
        if ((pbVar17 == &bStack_178) || (lVar14 = 0x28, pbVar17 != (byte *)0x0)) goto LAB_0c98d684;
      }
      func_0x067c7d60(&plStack_68,alStack_60[0]);
    }
    puVar9 = puStack_f8;
    plVar22 = *(long **)(param_1 + 0x118);
    bStack_178 = (byte)(short)puStack_f8[0xe];
    uStack_177 = (undefined1)((ushort)(short)puStack_f8[0xe] >> 8);
    if ((puStack_f8[0x10] & 1) == 0) {
      pbStack_160 = *(byte **)(puStack_f8 + 0x14);
      uVar29 = puStack_f8[0x10];
      uStack_16c = puStack_f8[0x11];
      pbStack_168 = *(byte **)(puStack_f8 + 0x12);
      bStack_170 = (byte)uVar29;
      uStack_16f = (undefined1)(uVar29 >> 8);
      uStack_16e = (undefined2)(uVar29 >> 0x10);
    }
    else {
      func_0x0412e5e0(&bStack_170,*(undefined8 *)(puStack_f8 + 0x14),
                      *(undefined8 *)(puStack_f8 + 0x12));
    }
    pbStack_158 = (byte *)CONCAT44(pbStack_158._4_4_,puVar9[0x16]);
    (**(code **)(*plVar22 + 0x20))(plVar22,&bStack_178);
    if ((bStack_170 & 1) != 0) {
      func_0x0412a280(pbStack_160,
                      CONCAT44(uStack_16c,CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170))) &
                      0xfffffffffffffffe);
    }
    lVar14 = (**(code **)(**(long **)(param_1 + 0x1f0) + 0x18))();
    lVar14 = *(long *)(lVar14 + 0x9f8);
    if (*(char *)(lVar14 + 0x9e7) == '\x01') {
      uVar29 = *puStack_f8;
      *(uint *)(lVar14 + 8) = uVar29;
      *(undefined2 *)(lVar14 + 0x9e4) = 0;
      *(undefined4 *)(lVar14 + 0x9d4) = 0;
      *(undefined8 *)(lVar14 + 0x9d8) = 0;
      *(uint *)(lVar14 + 0xc) = uVar29;
      lVar30 = 5;
      while( true ) {
        uVar26 = ((ulong)((uVar29 >> 0x1e ^ uVar29) * 0x6c078965) + lVar30) - 4;
        uVar29 = (uint)uVar26;
        *(uint *)(lVar14 + -4 + lVar30 * 4) = uVar29;
        if (lVar30 == 0x191) break;
        uVar29 = (((uint)(uVar26 >> 0x1e) & 3 ^ uVar29) * 0x6c078965 + (int)lVar30) - 3;
        *(uint *)(lVar14 + lVar30 * 4) = uVar29;
        lVar30 = lVar30 + 2;
      }
      *(undefined8 *)(lVar14 + 0x9cc) = 0x18e00000270;
    }
    (**(code **)(*(long *)param_1 + 0x388))(param_1,*(undefined8 *)(param_1 + 0x398));
    param_1[0x2c8] = 0;
    param_1[0x2c9] = 0;
    param_1[0x2ca] = 0;
    param_1[0x2cb] = 0;
    param_1[0x2cc] = 0;
    param_1[0x2cd] = 0;
    param_1[0x2ce] = 0;
    param_1[0x2cf] = 0;
    uVar19 = func_0x0cc422f0(&DAT_0f6ff9e0,0xf714b70,0,0,0);
    *(undefined8 *)(param_1 + 0x2c8) = uVar19;
    if (param_1[0x218] == 0) {
      (**(code **)(**(long **)(param_1 + 0x5a0) + 0x10))(*(long **)(param_1 + 0x5a0),0x3c);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x70,0);
      }
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = &UNK_0f3e9ad8;
      puVar16[7] = 0;
      puVar16[8] = 0;
      puVar16[9] = 0;
      puVar16[10] = 0;
      puVar16[0xb] = 0;
      puVar16[0xc] = 0;
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar16[6] = 0;
      puVar16[0xd] = 0;
      *(undefined4 *)(puVar16 + 7) = 0x3f800000;
      puVar16[8] = 0;
      puVar16[9] = 0;
      puVar16[10] = 0;
      puVar16[0xb] = 0;
      *(undefined4 *)(puVar16 + 0xc) = 0x3f800000;
      *(undefined4 *)(puVar16 + 0xd) = 0x100;
      *(undefined8 **)(param_1 + 0x50) = puVar16 + 3;
      plVar22 = *(long **)(param_1 + 0x58);
      *(undefined8 **)(param_1 + 0x58) = puVar16;
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar32 = plVar22 + 1;
        lVar14 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      uVar19 = (**(code **)(*(long *)param_1 + 0x8d8))();
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x88,0);
      }
      *puVar16 = &UNK_0f534768;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puVar20[1] = 0;
      puVar20[2] = 0;
      pbVar33 = &UNK_0ef44a60;
      *puVar20 = &UNK_0ef44a60;
      *(undefined1 *)(puVar20 + 3) = 1;
      puVar16[1] = puVar20 + 3;
      puVar16[2] = puVar20;
      *puVar16 = &UNK_0f3202f8;
      puVar16[3] = _DAT_0f6cfcc0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar16[6] = 0;
      puVar16[7] = 0;
      *(undefined4 *)(puVar16 + 8) = 0x3f800000;
      puVar16[9] = 0;
      puVar16[10] = 0;
      puVar16[0xb] = 0;
      puVar16[0xc] = 0;
      puVar16[0xd] = 0;
      puVar16[0xe] = 0;
      puVar16[0xf] = 0;
      puVar16[0x10] = 0;
      plVar22 = *(long **)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puVar16;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
      }
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x88,0);
      }
      *puVar16 = &UNK_0f534768;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puVar20[1] = 0;
      puVar20[2] = 0;
      *puVar20 = &UNK_0ef44a60;
      *(undefined1 *)(puVar20 + 3) = 1;
      puVar16[1] = puVar20 + 3;
      puVar16[2] = puVar20;
      *puVar16 = &UNK_0f32f408;
      puVar16[3] = _DAT_0f6cfcc0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar16[6] = 0;
      puVar16[7] = 0;
      puVar16[8] = 0;
      puVar16[9] = 0;
      puVar16[10] = 0;
      puVar16[0xb] = 0;
      puVar16[0xc] = 0;
      *(undefined4 *)(puVar16 + 0xd) = 0x3f800000;
      puVar16[0xe] = 0;
      puVar16[0xf] = 0;
      puVar16[0x10] = 0;
      plVar22 = *(long **)(param_1 + 0xe8);
      *(undefined8 **)(param_1 + 0xe8) = puVar16;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
      }
      func_0x0bcc9e90(*(undefined8 *)(param_1 + 0xe0),uVar19);
      func_0x0bd6d860(*(undefined8 *)(param_1 + 0xe8),uVar19);
      uVar21 = *(undefined8 *)(param_1 + 0x278);
      lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x120);
      if (lVar14 == 0) {
        func_0x0eec74c0(0x120,0);
      }
      uVar4 = *(undefined4 *)(param_1 + 0xc0);
      uStack_174 = *(uint *)(param_1 + 0xc4);
      uVar5 = *(undefined4 *)(param_1 + 200);
      uStack_16c = *(uint *)(param_1 + 0xcc);
      bStack_178 = (byte)uVar4;
      uStack_177 = (undefined1)((uint)uVar4 >> 8);
      uStack_176 = (undefined2)((uint)uVar4 >> 0x10);
      bStack_170 = (byte)uVar5;
      uStack_16f = (undefined1)((uint)uVar5 >> 8);
      uStack_16e = (undefined2)((uint)uVar5 >> 0x10);
      if (*(long *)(param_1 + 200) != 0) {
        LOCK();
        plVar22 = (long *)(*(long *)(param_1 + 200) + 8);
        *plVar22 = *plVar22 + 1;
        UNLOCK();
      }
      pbStack_168 = *(byte **)(param_1 + 0xd0);
      func_0x0b0330a0(lVar14,param_1,uVar19,uVar21,pbStack_e0);
      plVar22 = (long *)CONCAT44(uStack_16c,CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
      bStack_178 = 0;
      uStack_177 = 0;
      uStack_176 = 0;
      uStack_174 = 0;
      bStack_170 = 0;
      uStack_16f = 0;
      uStack_16e = 0;
      uStack_16c = 0;
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar32 = plVar22 + 1;
        lVar30 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar30 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
        plVar22 = (long *)CONCAT44(uStack_16c,CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
        pbStack_168 = (byte *)0x0;
        if (plVar22 != (long *)0x0) {
          LOCK();
          plVar32 = plVar22 + 1;
          lVar30 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar30 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
          }
        }
      }
      plVar22 = *(long **)(param_1 + 0xd8);
      *(long *)(param_1 + 0xd8) = lVar14;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
      }
    }
    lVar14 = (**(code **)(*(long *)param_1 + 0x908))(param_1);
    if ((*(char **)(lVar14 + 0x30) == (char *)0x0) || (**(char **)(lVar14 + 0x30) == '\0')) {
      func_0x0b04e6c0(lVar14,*(undefined8 *)(param_1 + 0xd8));
    }
    func_0x048e6b30(&bStack_178,*(undefined8 *)(*(long *)(param_1 + 0x230) + 0x50),
                    *(long *)(param_1 + 0x230),&UNK_012e86ae);
    uVar19 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
    bStack_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    plVar22 = *(long **)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x220) = uVar19;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
      plVar22 = (long *)CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
      bStack_178 = 0;
      uStack_177 = 0;
      uStack_176 = 0;
      uStack_174 = 0;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
      }
    }
    if ((_DAT_0f7280f0 == (char *)0x0) &&
       (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*_DAT_0f7280f0 == '\0') &&
       (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar21 = _DAT_0f728100;
    uVar19 = *(undefined8 *)(param_1 + 0x230);
    lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
    if (lVar14 == 0) {
      func_0x0eec74c0(0xf8,0);
    }
    bStack_178 = 0x10;
    uStack_177 = 0x4c;
    uStack_176 = 0x7665;
    uStack_174 = 0x49206c65;
    bStack_170 = 0x4f;
    uStack_16f = 0;
    func_0x0ee2a680(lVar14,uVar21,uVar19,&bStack_178);
    if ((bStack_178 & 1) != 0) {
      func_0x0412a280(pbStack_168,
                      CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))) &
                      0xfffffffffffffffe);
    }
    plVar22 = *(long **)(param_1 + 0x228);
    *(long *)(param_1 + 0x228) = lVar14;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = param_1;
    lVar14 = *(long *)(param_1 + 0x120);
    *(undefined8 **)(param_1 + 0x120) = puVar16;
    if (lVar14 != 0) {
      func_0x0412a280(lVar14,8);
    }
    plVar22 = (long *)(**(code **)(**(long **)(param_1 + 0x5e0) + 0x10))();
    bStack_118 = 0;
    uStack_117 = 0;
    uStack_113 = uStack_113 & 0xff000000;
    bStack_178 = 0x30;
    uStack_177 = 0x9f;
    uStack_176 = 0xf3e;
    uStack_174 = 0;
    bStack_170 = 0x30;
    uStack_16f = 0xed;
    uStack_16e = 0xc99;
    uStack_16c = 0;
    pbStack_168 = (byte *)0x0;
    pbStack_160 = param_1;
    (**(code **)(*plVar22 + 0x10))(&uStack_198,plVar22,&bStack_178,0,&bStack_118);
    lVar14 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
    if (lVar14 != 0) {
      (**(code **)(lVar14 + 8))(&bStack_178);
    }
    pbVar18 = param_1 + 0x5e8;
    if ((byte *)&uStack_198 != pbVar18) {
      if (*(long *)(param_1 + 0x5f0) == 0) {
        lVar14 = 0;
      }
      else {
        plVar22 = (long *)func_0x0412c300();
        bStack_170 = (byte)plVar22;
        uStack_16f = (undefined1)((ulong)plVar22 >> 8);
        uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
        uStack_16c = (uint)((ulong)plVar22 >> 0x20);
        if (plVar22 != (long *)0x0) {
          lVar14 = *(long *)pbVar18;
          bStack_178 = (byte)lVar14;
          uStack_177 = (undefined1)((ulong)lVar14 >> 8);
          uStack_176 = (undefined2)((ulong)lVar14 >> 0x10);
          uStack_174 = (uint)((ulong)lVar14 >> 0x20);
          if (lVar14 != 0) {
            (**(code **)(**(long **)(lVar14 + 0x28) + 0x10))();
          }
          LOCK();
          plVar32 = plVar22 + 1;
          lVar14 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
          }
        }
        lVar14 = *(long *)(param_1 + 0x5f0);
      }
      uVar4 = (undefined4)uStack_198;
      uVar5 = uStack_198._4_4_;
      uVar6 = (undefined4)uStack_190;
      uVar8 = uStack_190._4_4_;
      uStack_198 = (byte *)0x0;
      uStack_190 = (byte *)0x0;
      *(undefined4 *)pbVar18 = uVar4;
      *(undefined4 *)(param_1 + 0x5ec) = uVar5;
      *(undefined4 *)(param_1 + 0x5f0) = uVar6;
      *(undefined4 *)(param_1 + 0x5f4) = uVar8;
      if (lVar14 != 0) {
        func_0x0412c2d0();
      }
    }
    if (uStack_190 != (byte *)0x0) {
      plVar22 = (long *)func_0x0412c300();
      bStack_170 = (byte)plVar22;
      uStack_16f = (undefined1)((ulong)plVar22 >> 8);
      uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
      uStack_16c = (uint)((ulong)plVar22 >> 0x20);
      if (plVar22 != (long *)0x0) {
        bStack_178 = (byte)uStack_198;
        uStack_177 = (undefined1)((ulong)uStack_198 >> 8);
        uStack_176 = (undefined2)((ulong)uStack_198 >> 0x10);
        uStack_174 = (uint)((ulong)uStack_198 >> 0x20);
        if (uStack_198 != (byte *)0x0) {
          (**(code **)(**(long **)(uStack_198 + 0x28) + 0x10))();
        }
        LOCK();
        plVar32 = plVar22 + 1;
        lVar14 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      if (uStack_190 != (byte *)0x0) {
        func_0x0412c2d0();
      }
    }
    plVar22 = (long *)CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118));
    bStack_118 = 0;
    uStack_117 = 0;
    uStack_113._0_3_ = 0;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    plVar22 = (long *)(**(code **)(**(long **)(param_1 + 0x5e0) + 0x18))();
    bStack_118 = 0;
    uStack_117 = 0;
    uStack_113 = (uint)uStack_113._3_1_ << 0x18;
    bStack_178 = 0x48;
    uStack_177 = 0x9f;
    uStack_176 = 0xf3e;
    uStack_174 = 0;
    bStack_170 = 0xa0;
    uStack_16f = 0xed;
    uStack_16e = 0xc99;
    uStack_16c = 0;
    pbStack_168 = (byte *)0x0;
    pbVar17 = (byte *)0x0;
    pbStack_160 = param_1;
    (**(code **)(*plVar22 + 0x10))(&uStack_198,plVar22,&bStack_178,0);
    lVar14 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
    if (lVar14 != 0) {
      (**(code **)(lVar14 + 8))(&bStack_178);
    }
    pbVar18 = param_1 + 0x5f8;
    if ((byte *)&uStack_198 != pbVar18) {
      if (*(long *)(param_1 + 0x600) == 0) {
        lVar14 = 0;
      }
      else {
        plVar22 = (long *)func_0x0412c300();
        bStack_170 = (byte)plVar22;
        uStack_16f = (undefined1)((ulong)plVar22 >> 8);
        uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
        uStack_16c = (uint)((ulong)plVar22 >> 0x20);
        if (plVar22 != (long *)0x0) {
          lVar14 = *(long *)pbVar18;
          bStack_178 = (byte)lVar14;
          uStack_177 = (undefined1)((ulong)lVar14 >> 8);
          uStack_176 = (undefined2)((ulong)lVar14 >> 0x10);
          uStack_174 = (uint)((ulong)lVar14 >> 0x20);
          if (lVar14 != 0) {
            (**(code **)(**(long **)(lVar14 + 0x28) + 0x10))();
          }
          LOCK();
          plVar32 = plVar22 + 1;
          lVar14 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
          }
        }
        lVar14 = *(long *)(param_1 + 0x600);
      }
      uVar4 = (undefined4)uStack_198;
      uVar5 = uStack_198._4_4_;
      uVar6 = (undefined4)uStack_190;
      uVar8 = uStack_190._4_4_;
      uStack_198 = (byte *)0x0;
      uStack_190 = (byte *)0x0;
      *(undefined4 *)pbVar18 = uVar4;
      *(undefined4 *)(param_1 + 0x5fc) = uVar5;
      *(undefined4 *)(param_1 + 0x600) = uVar6;
      *(undefined4 *)(param_1 + 0x604) = uVar8;
      if (lVar14 != 0) {
        func_0x0412c2d0();
      }
    }
    if (uStack_190 != (byte *)0x0) {
      plVar22 = (long *)func_0x0412c300();
      bStack_170 = (byte)plVar22;
      uStack_16f = (undefined1)((ulong)plVar22 >> 8);
      uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
      uStack_16c = (uint)((ulong)plVar22 >> 0x20);
      if (plVar22 != (long *)0x0) {
        bStack_178 = (byte)uStack_198;
        uStack_177 = (undefined1)((ulong)uStack_198 >> 8);
        uStack_176 = (undefined2)((ulong)uStack_198 >> 0x10);
        uStack_174 = (uint)((ulong)uStack_198 >> 0x20);
        if (uStack_198 != (byte *)0x0) {
          (**(code **)(**(long **)(uStack_198 + 0x28) + 0x10))();
        }
        LOCK();
        plVar32 = plVar22 + 1;
        lVar14 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      if (uStack_190 != (byte *)0x0) {
        func_0x0412c2d0();
      }
    }
    plVar22 = (long *)CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118));
    bStack_118 = 0;
    uStack_117 = 0;
    uStack_113 = uStack_113 & 0xff000000;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *puVar16 = &UNK_0f300f08;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    puVar16[4] = 0;
    *(undefined4 *)(puVar16 + 5) = 0x3f800000;
    plVar22 = *(long **)(param_1 + 0x158);
    *(undefined8 **)(param_1 + 0x158) = puVar16;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x120);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x120,0);
    }
    puVar16[3] = 0;
    puVar16[4] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = puVar16 + 3;
    *(undefined1 *)(puVar16 + 5) = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[6] = puVar16 + 7;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    puVar16[0xc] = 0;
    *(undefined4 *)(puVar16 + 0xd) = 0x3f800000;
    puVar16[0xe] = 0;
    puVar16[0xf] = 0;
    puVar16[0x10] = 0;
    puVar16[0x11] = 0;
    *(undefined4 *)(puVar16 + 0x12) = 0x3f800000;
    puVar16[0x13] = 0;
    puVar16[0x14] = 0;
    puVar16[0x15] = 0;
    puVar16[0x16] = 0;
    puVar16[0x17] = 0;
    puVar16[0x18] = 0;
    puVar16[0x19] = 0;
    *(undefined4 *)(puVar16 + 0x1a) = 0x3f800000;
    puVar16[0x1b] = 0;
    puVar16[0x1c] = 0;
    puVar16[0x1d] = 0;
    puVar16[0x1e] = 0;
    *(undefined4 *)(puVar16 + 0x1f) = 0x3f800000;
    puVar16[0x20] = 0;
    puVar16[0x21] = 0;
    puVar16[0x22] = 0;
    puVar16[0x23] = param_1;
    lVar14 = *(long *)(param_1 + 0x150);
    *(undefined8 **)(param_1 + 0x150) = puVar16;
    if (lVar14 != 0) {
      func_0x0c00bb00(lVar14);
      func_0x0412a280(lVar14,0x120);
    }
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar20[2] = 0;
    puVar20[3] = 0;
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[4] = 0;
    *(undefined4 *)(puVar20 + 4) = 0x3f800000;
    lVar14 = *(long *)(param_1 + 0x160);
    *(undefined8 **)(param_1 + 0x160) = puVar20;
    if (lVar14 != 0) {
      func_0x0c9ba950();
    }
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    param_5 = (byte *)0xf5522b8;
    func_0x0412d610(0xf5522b8);
    pbVar35 = _DAT_0f5523a0;
    pbVar28 = _DAT_0f552398;
    if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_0c990dc5:
      uVar19 = func_0x0eee02f0(0xf5522b8);
      *(undefined8 **)(pbVar33 + 0x48) = puVar20;
      func_0x0495e910(&uStack_198);
      func_0x0c9915d0(&pbStack_f0);
      func_0x0c991600(&bStack_118);
      func_0x0eeb81b0(&lStack_d0);
      uVar19 = func_0x0eee2d70(uVar19);
      func_0x0eeb81b0(&lStack_d0);
      func_0x0eee2d70(uVar19);
      pcVar2 = (code *)swi(3);
      uVar19 = (*pcVar2)();
      return uVar19;
    }
    bVar25 = 1;
    if (_DAT_0f5523a0 != (byte *)0x0) {
      LOCK();
      *(long *)(_DAT_0f5523a0 + 8) = *(long *)(_DAT_0f5523a0 + 8) + 1;
      UNLOCK();
      bVar25 = *pbVar28;
    }
    pbVar7 = _DAT_0f5523a8;
    bStack_178 = 0xb8;
    uStack_177 = 0x22;
    uStack_176 = 0xf55;
    uStack_174 = 0;
    bStack_170 = 1;
    pbStack_168 = pbVar28;
    pbStack_160 = pbVar35;
    pbStack_158 = _DAT_0f5523a8;
    if (((bVar25 & 1) == 0) &&
       (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41), cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(*(long *)pbVar7 + 0x160))(pbVar7,0);
    pbStack_168 = (byte *)0x0;
    pbStack_160 = (byte *)0x0;
    if (pbVar35 != (byte *)0x0) {
      LOCK();
      pbVar28 = pbVar35 + 8;
      lVar14 = *(long *)pbVar28;
      *(long *)pbVar28 = *(long *)pbVar28 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)pbVar35 + 0x10))(pbVar35);
        func_0x0412c2d0(pbVar35);
        pbVar28 = pbStack_160;
        pbStack_158 = (byte *)0x0;
        if (pbStack_160 != (byte *)0x0) {
          pbStack_158 = (byte *)0x0;
          LOCK();
          pbVar35 = pbStack_160 + 8;
          lVar14 = *(long *)pbVar35;
          *(long *)pbVar35 = *(long *)pbVar35 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
            func_0x0412c2d0(pbVar28);
          }
        }
      }
      else {
        pbStack_158 = (byte *)0x0;
      }
    }
    if (bStack_170 == 1) {
      func_0x0eee02f0(CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))));
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      uVar19 = (**(code **)(*(long *)param_1 + 0x568))();
      func_0x0d213af0(uVar19,*(undefined8 *)(param_1 + 0x78));
    }
    uVar19 = (**(code **)(*(long *)param_1 + 0x650))();
    (**(code **)(*(long *)param_1 + 0x568))();
    func_0x0c5df720(uVar19);
    func_0x0c91d5c0();
    pcVar1 = *(char **)(param_1 + 0x298);
    bStack_178 = (byte)pcVar1;
    uStack_177 = (undefined1)((ulong)pcVar1 >> 8);
    uStack_176 = (undefined2)((ulong)pcVar1 >> 0x10);
    uStack_174 = (uint)((ulong)pcVar1 >> 0x20);
    plVar22 = *(long **)(param_1 + 0x2a0);
    bStack_170 = (byte)plVar22;
    uStack_16f = (undefined1)((ulong)plVar22 >> 8);
    uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
    uStack_16c = (uint)((ulong)plVar22 >> 0x20);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar22[1] = plVar22[1] + 1;
      UNLOCK();
    }
    pbStack_168 = *(byte **)(param_1 + 0x2a8);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      func_0x0d35ce20();
      bStack_178 = 0;
      uStack_177 = 0;
      uStack_176 = 0;
      uStack_174 = 0;
      bStack_170 = 0;
      uStack_16f = 0;
      uStack_16e = 0;
      uStack_16c = 0;
      if (plVar22 == (long *)0x0) {
LAB_0c98e4fc:
        bVar25 = param_1[0x218];
      }
      else {
        LOCK();
        plVar32 = plVar22 + 1;
        lVar14 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar14 != 0) {
          pbStack_168 = (byte *)0x0;
          goto LAB_0c98e4fc;
        }
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
        plVar22 = (long *)CONCAT44(uStack_16c,CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
        pbStack_168 = (byte *)0x0;
        if (plVar22 == (long *)0x0) goto LAB_0c98e4fc;
        pbStack_168 = (byte *)0x0;
        LOCK();
        plVar32 = plVar22 + 1;
        lVar14 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar14 != 0) goto LAB_0c98e4fc;
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
        bVar25 = param_1[0x218];
      }
      if (bVar25 == 0) {
        pbVar18 = (byte *)(**(code **)(*(long *)param_1 + 0x8d8))();
        if ((pbVar18 == (byte *)0x0) &&
           (cVar10 = func_0x0eeddcf0(&UNK_0148a9b3,&UNK_011e30e6,0x2ad,&UNK_012cde57,&UNK_011ff134),
           cVar10 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        pbVar33 = (byte *)(lVar14 + 0x50);
        pbVar28 = pbVar33;
        if ((*(char *)(lVar14 + 0x77) == '\0') &&
           (((pbVar35 = (byte *)(lVar14 + 0x70), *(char *)(lVar14 + 0x68) != '\0' ||
             (pbVar28 = pbVar35, (*(byte *)(lVar14 + 0x56) & 1) != 0)) &&
            (cVar10 = func_0x04fa7a10(pbVar35,pbVar33), pbVar28 = pbVar33, cVar10 != '\0')))) {
          pbVar28 = pbVar35;
        }
        pbVar33 = &DAT_0f72b850;
        if (((pbVar28[6] | pbVar28[0x18]) & 1) != 0) {
          pbVar33 = pbVar28;
        }
        if ((param_8 == '\0') &&
           (cVar10 = func_0x0eeddcf0(&UNK_014da8a1,&UNK_0148a9db,0x2b1,&UNK_012cde57,&UNK_011ff134),
           cVar10 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar19 = *(undefined8 *)(param_1 + 0x3b8);
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        lVar30 = func_0x0d2279e0(lVar14 + 0x518,0xf71d538);
        if (((lVar30 == 0) && (lVar30 = func_0x0d2279e0(lVar14 + 0x4f0,0xf71d538), lVar30 == 0)) ||
           (*(int *)(lVar30 + 0x50) != 7)) {
          param_5 = (byte *)0x0;
        }
        else {
          param_5 = *(byte **)(lVar30 + 0x38);
        }
        uVar21 = (**(code **)(*(long *)param_1 + 0x558))();
        plVar22 = *(long **)(param_1 + 200);
        uStack_88 = *(undefined8 *)(param_1 + 0xc0);
        plStack_80 = *(long **)(param_1 + 200);
        if (plVar22 != (long *)0x0) {
          LOCK();
          plVar22[1] = plVar22[1] + 1;
          UNLOCK();
        }
        uStack_78 = *(undefined8 *)(param_1 + 0xd0);
        if (param_8 == '\0') {
          func_0x048a88b0();
          goto LAB_0c990c65;
        }
        pbVar17 = param_1 + 0x20;
        func_0x0c8bb500(uVar19,pbVar17,pbVar18,param_5,uVar21,&uStack_88,param_7);
        uStack_88 = 0;
        plStack_80 = (long *)0x0;
        if (plVar22 == (long *)0x0) {
          uStack_78 = 0;
        }
        else {
          LOCK();
          plVar32 = plVar22 + 1;
          lVar14 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
          }
          plVar22 = plStack_80;
          uStack_78 = 0;
          if (plStack_80 != (long *)0x0) {
            LOCK();
            plVar32 = plStack_80 + 1;
            lVar14 = *plVar32;
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              func_0x0412c2d0(plVar22);
            }
          }
        }
        uVar19 = *(undefined8 *)(param_1 + 0x348);
        uVar11 = (**(code **)(*(long *)param_1 + 0xc38))();
        func_0x0d39b6f0(uVar19,pbVar17,pbVar18,uVar11);
        FUN_0d328c00(*(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2e8),pbVar33,
                     pbVar17);
        lVar14 = *(long *)(param_1 + 0x290);
        uVar19 = (**(code **)(*(long *)param_1 + 0xca0))();
        func_0x0c9224d0(lVar14 + 0x18,uVar19,pbVar18,(**(uint **)pbStack_e0 & 2) >> 1);
        lVar14 = *(long *)(param_1 + 0x288);
        bStack_170 = 0;
        uStack_16f = 0;
        uStack_16e = 0;
        uStack_16c = 0;
        lVar30 = *(long *)(lVar14 + 8);
        if (lVar30 != 0) {
          pbVar18 = *(byte **)(lVar30 + 8);
          param_5 = *(byte **)(lVar30 + 0x10);
          if (param_5 != (byte *)0x0) {
            LOCK();
            *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 1;
            UNLOCK();
            bStack_170 = (byte)param_5;
            uStack_16f = (undefined1)((ulong)param_5 >> 8);
            uStack_16e = (undefined2)((ulong)param_5 >> 0x10);
            uStack_16c = (uint)((ulong)param_5 >> 0x20);
          }
          bStack_178 = (byte)pbVar18;
          uStack_177 = (undefined1)((ulong)pbVar18 >> 8);
          uStack_176 = (undefined2)((ulong)pbVar18 >> 0x10);
          uStack_174 = (uint)((ulong)pbVar18 >> 0x20);
          if ((pbVar18 != (byte *)0x0) &&
             (pbVar33 = *(byte **)(lVar14 + 0x10), pbStack_168 = pbVar33, *pbVar18 != 0)) {
            plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (plVar22 == (long *)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            func_0x0c900ce0(plVar22);
            plVar32 = *(long **)(param_1 + 0x3a0);
            *(long **)(param_1 + 0x3a0) = plVar22;
            if (plVar32 != (long *)0x0) {
              plVar22 = (long *)plVar32[2];
              plVar32[2] = 0;
              if (plVar22 != (long *)0x0) {
                (**(code **)(*plVar22 + 8))();
              }
              plVar22 = (long *)plVar32[1];
              plVar32[1] = 0;
              if (plVar22 != (long *)0x0) {
                (**(code **)(*plVar22 + 8))();
              }
              plVar22 = (long *)*plVar32;
              *plVar32 = 0;
              if (plVar22 != (long *)0x0) {
                (**(code **)(*plVar22 + 8))();
              }
              func_0x0412a280(plVar32,0x18);
              plVar22 = *(long **)(param_1 + 0x3a0);
            }
            if (((*pbVar18 & 1) == 0) &&
               (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
               cVar10 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if (((*plVar22 != 0) && (func_0x0497e120(pbVar33), plVar22[1] != 0)) &&
               (func_0x0497e120(pbVar33), plVar22[2] != 0)) {
              func_0x0497e120(pbVar33);
              puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (puVar16 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x30,0);
              }
              puVar16[4] = 0;
              puVar16[5] = 0;
              *puVar16 = &UNK_0f34a9d0;
              puVar16[1] = 0;
              puVar16[2] = 0;
              puVar16[3] = 0;
              puVar16[4] = 0;
              *(undefined4 *)(puVar16 + 5) = 0x3f800000;
              func_0x0bf69dd0(puVar16);
              plVar22 = *(long **)(param_1 + 0x168);
              *(undefined8 **)(param_1 + 0x168) = puVar16;
              if (plVar22 != (long *)0x0) {
                (**(code **)(*plVar22 + 8))();
              }
              bStack_178 = 0;
              uStack_177 = 0;
              uStack_176 = 0;
              uStack_174 = 0;
              bStack_170 = 0;
              uStack_16f = 0;
              uStack_16e = 0;
              uStack_16c = 0;
              if (param_5 != (byte *)0x0) {
                LOCK();
                pbVar18 = param_5 + 8;
                lVar14 = *(long *)pbVar18;
                *(long *)pbVar18 = *(long *)pbVar18 + -1;
                UNLOCK();
                if (lVar14 == 0) {
                  (**(code **)(*(long *)param_5 + 0x10))(param_5);
                  func_0x0412c2d0(param_5);
                }
                plVar22 = (long *)CONCAT44(uStack_16c,
                                           CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
                pbStack_168 = (byte *)0x0;
                if (plVar22 != (long *)0x0) {
                  LOCK();
                  plVar32 = plVar22 + 1;
                  lVar14 = *plVar32;
                  *plVar32 = *plVar32 + -1;
                  UNLOCK();
                  if (lVar14 == 0) {
                    (**(code **)(*plVar22 + 0x10))(plVar22);
                    func_0x0412c2d0(plVar22);
                  }
                }
              }
              goto LAB_0c98ea5c;
            }
          }
        }
      }
      else {
LAB_0c98ea5c:
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        *(byte *)(lVar14 + 0x374) = (byte)puStack_f8[5];
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        if (*(char *)(lVar14 + 0x374) == '\x01') {
          (**(code **)(*(long *)param_1 + 0x460))(param_1,puStack_f8[2]);
        }
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        *(byte *)(lVar14 + 0x378) = *(byte *)((long)puStack_f8 + 0x97);
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        if (*(int *)(lVar14 + 0x398) == 1) {
          lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
          if ((*(uint *)(lVar14 + 0x340) < _DAT_0f71d6c8) ||
             ((*(uint *)(lVar14 + 0x340) <= _DAT_0f71d6c8 &&
              ((*(uint *)(lVar14 + 0x344) < _DAT_0f71d6cc ||
               ((*(uint *)(lVar14 + 0x344) <= _DAT_0f71d6cc &&
                ((*(uint *)(lVar14 + 0x348) < _DAT_0f71d6d0 ||
                 ((*(uint *)(lVar14 + 0x348) <= _DAT_0f71d6d0 &&
                  ((*(uint *)(lVar14 + 0x34c) < _DAT_0f71d6d4 ||
                   ((*(uint *)(lVar14 + 0x34c) <= _DAT_0f71d6d4 &&
                    (*(uint *)(lVar14 + 0x350) < _DAT_0f71d6d8)))))))))))))))) {
            lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
            *(undefined1 *)(lVar14 + 0x394) = 0;
            *(undefined1 *)(lVar14 + 0x451) = 0;
          }
        }
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        if (((*(char *)(lVar14 + 0x394) != '\0') || (*(char *)(lVar14 + 0x451) != '\0')) ||
           (((lVar30 = func_0x0d2279e0(lVar14 + 0x518,0xf71d6f8), lVar30 != 0 ||
             (lVar30 = func_0x0d2279e0(lVar14 + 0x4f0,0xf71d6f8), lVar30 != 0)) &&
            ((*(int *)(lVar30 + 0x50) == 5 && (*(int *)(lVar30 + 0x38) == 1)))))) {
          lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
          *(undefined1 *)(lVar14 + 0x394) = 1;
          auVar39 = func_0x0d212ce0(lVar14,0xe);
          if ((auVar39._8_8_ & 1) != 0) {
            func_0x0495d5f0(auVar39._0_8_);
          }
        }
        if (*(byte *)((long)puStack_f8 + 0x9f) == 1) {
          lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
          *(uint *)(lVar14 + 0x370) = puStack_f8[4];
          auVar39 = func_0x0d212ce0(lVar14,3);
          if ((auVar39._8_8_ & 1) != 0) {
            func_0x0495d5f0(auVar39._0_8_);
          }
          *(byte *)(lVar14 + 0x451) = (byte)puStack_f8[0x26];
          auVar39 = func_0x0d212ce0(lVar14,0xb);
          if ((auVar39._8_8_ & 1) != 0) {
            func_0x0495d5f0(auVar39._0_8_);
          }
          *(byte *)(lVar14 + 0x452) = *(byte *)((long)puStack_f8 + 0x99);
          *(byte *)(lVar14 + 0x4b8) = *(byte *)((long)puStack_f8 + 0x9e);
          *(byte *)(lVar14 + 0x560) = (byte)puStack_f8[0xac];
        }
        cVar10 = (**(code **)(*(long *)param_1 + 0x550))();
        if (cVar10 != '\0') {
          uVar19 = (**(code **)(*(long *)param_1 + 0x860))();
          cVar10 = func_0x0d1d92e0(uVar19,*(undefined8 *)(param_1 + 0x178),&UNK_01d3ab00);
          if (cVar10 == '\0') {
            lVar14 = (**(code **)(*(long *)param_1 + 0x860))();
            uVar19 = *(undefined8 *)(param_1 + 0x178);
            bStack_178 = 0;
            uStack_177 = 0xab;
            uStack_176 = 0x1d3;
            uStack_174 = 0;
            lVar14 = func_0x0d1ea5b0(lVar14 + 0x10,&UNK_01d3ab00,&UNK_01563a4f,&bStack_178,
                                     &uStack_198);
            *(undefined8 *)(lVar14 + 0x28) = uVar19;
          }
        }
        plVar22 = (long *)(**(code **)(**(long **)(param_1 + 0x3d8) + 0x10))();
        bStack_118 = 0;
        uStack_117 = 0;
        uStack_113 = uStack_113 & 0xff000000;
        bStack_178 = 0x18;
        uStack_177 = 0x9c;
        uStack_176 = 0xf3e;
        uStack_174 = 0;
        bStack_170 = 0xe0;
        uStack_16f = 0x69;
        uStack_16e = 0xc99;
        uStack_16c = 0;
        pbStack_168 = (byte *)0x0;
        param_5 = &bStack_178;
        pbStack_160 = param_1;
        (**(code **)(*plVar22 + 0x10))(&uStack_198,plVar22,param_5,0);
        lVar14 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 8))(&bStack_178);
        }
        pbVar18 = param_1 + 0x3e0;
        if ((byte *)&uStack_198 != pbVar18) {
          if (*(long *)(param_1 + 1000) == 0) {
            lVar14 = 0;
          }
          else {
            plVar22 = (long *)func_0x0412c300();
            bStack_170 = (byte)plVar22;
            uStack_16f = (undefined1)((ulong)plVar22 >> 8);
            uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
            uStack_16c = (uint)((ulong)plVar22 >> 0x20);
            if (plVar22 != (long *)0x0) {
              lVar14 = *(long *)pbVar18;
              bStack_178 = (byte)lVar14;
              uStack_177 = (undefined1)((ulong)lVar14 >> 8);
              uStack_176 = (undefined2)((ulong)lVar14 >> 0x10);
              uStack_174 = (uint)((ulong)lVar14 >> 0x20);
              if (lVar14 != 0) {
                (**(code **)(**(long **)(lVar14 + 0x28) + 0x10))();
              }
              LOCK();
              plVar32 = plVar22 + 1;
              lVar14 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (lVar14 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
                func_0x0412c2d0(plVar22);
              }
            }
            lVar14 = *(long *)(param_1 + 1000);
          }
          uVar4 = (undefined4)uStack_198;
          uVar5 = uStack_198._4_4_;
          uVar6 = (undefined4)uStack_190;
          uVar8 = uStack_190._4_4_;
          uStack_198 = (byte *)0x0;
          uStack_190 = (byte *)0x0;
          *(undefined4 *)pbVar18 = uVar4;
          *(undefined4 *)(param_1 + 0x3e4) = uVar5;
          *(undefined4 *)(param_1 + 1000) = uVar6;
          *(undefined4 *)(param_1 + 0x3ec) = uVar8;
          if (lVar14 != 0) {
            func_0x0412c2d0();
          }
        }
        if (uStack_190 != (byte *)0x0) {
          plVar22 = (long *)func_0x0412c300();
          bStack_170 = (byte)plVar22;
          uStack_16f = (undefined1)((ulong)plVar22 >> 8);
          uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
          uStack_16c = (uint)((ulong)plVar22 >> 0x20);
          if (plVar22 != (long *)0x0) {
            bStack_178 = (byte)uStack_198;
            uStack_177 = (undefined1)((ulong)uStack_198 >> 8);
            uStack_176 = (undefined2)((ulong)uStack_198 >> 0x10);
            uStack_174 = (uint)((ulong)uStack_198 >> 0x20);
            if (uStack_198 != (byte *)0x0) {
              (**(code **)(**(long **)(uStack_198 + 0x28) + 0x10))();
            }
            LOCK();
            plVar32 = plVar22 + 1;
            lVar14 = *plVar32;
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
              func_0x0412c2d0(plVar22);
            }
          }
          if (uStack_190 != (byte *)0x0) {
            func_0x0412c2d0();
          }
        }
        plVar22 = (long *)CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,bStack_118));
        bStack_118 = 0;
        uStack_117 = 0;
        uStack_113 = uStack_113 & 0xff000000;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 8))();
        }
        func_0x0c9beb20(*(undefined8 *)(param_1 + 0x470),*(undefined8 *)(param_1 + 0x3d8));
        if (*(long *)(param_1 + 0x78) != 0) {
          func_0x0c9c1170(*(undefined8 *)(param_1 + 0x3f8));
        }
        func_0x0c9c1de0(*(undefined8 *)(param_1 + 0x3f8),*(undefined8 *)(param_1 + 0x660));
        func_0x0ca2ce50(*(undefined8 *)(param_1 + 0x3d8),*(undefined8 *)(param_1 + 0x660));
        if (param_1[0x218] == 0) {
          func_0x0c9e8ed0(*(undefined8 *)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x660));
        }
        func_0x0d14e0e0(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x3d8),
                        *(undefined8 *)(param_1 + 0x418));
        lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
        if ((*(byte *)(lVar14 + 0x278) & 1) == 0) {
          if (*(byte *)(lVar14 + 0x278) >> 1 == 0) goto LAB_0c98ef74;
        }
        else if (*(long *)(lVar14 + 0x280) == 0) {
LAB_0c98ef74:
          lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
          pbVar17 = (byte *)(lVar14 + 0x278);
          if (pbVar17 != pbStack_e8) {
            bVar25 = *pbStack_e8;
            if ((*pbVar17 & 1) == 0) {
              if ((bVar25 & 1) == 0) {
                *(undefined8 *)(lVar14 + 0x288) = *(undefined8 *)(pbStack_e8 + 0x10);
                uVar4 = *(undefined4 *)(pbStack_e8 + 4);
                uVar5 = *(undefined4 *)(pbStack_e8 + 8);
                uVar6 = *(undefined4 *)(pbStack_e8 + 0xc);
                *(undefined4 *)pbVar17 = *(undefined4 *)pbStack_e8;
                *(undefined4 *)(lVar14 + 0x27c) = uVar4;
                *(undefined4 *)(lVar14 + 0x280) = uVar5;
                *(undefined4 *)(lVar14 + 0x284) = uVar6;
              }
              else {
                func_0x04885070(pbVar17,*(undefined8 *)(pbStack_e8 + 0x10),
                                *(undefined8 *)(pbStack_e8 + 8));
              }
            }
            else {
              bVar37 = (bVar25 & 1) != 0;
              pbVar28 = pbStack_38;
              if (bVar37) {
                pbVar28 = *(byte **)(pbStack_e8 + 0x10);
              }
              uVar26 = (ulong)(bVar25 >> 1);
              if (bVar37) {
                uVar26 = *(ulong *)(pbStack_e8 + 8);
              }
              func_0x04885120(pbVar17,pbVar28,uVar26);
            }
          }
          auVar39 = func_0x0d212ce0(lVar14);
          if ((auVar39._8_8_ & 1) != 0) {
            func_0x0495d5f0(auVar39._0_8_);
          }
        }
        cVar10 = (**(code **)(*(long *)param_1 + 0x550))();
        if (cVar10 == '\0') goto LAB_0c98f150;
        puVar16 = *(undefined8 **)(param_1 + 0x3b8);
        lVar14 = *(long *)(param_1 + 0x78);
        bStack_170 = 0;
        uStack_16f = 0;
        uStack_16e = 0;
        uStack_16c = 0;
        lVar30 = *(long *)(lVar14 + 8);
        if (lVar30 != 0) {
          pcVar1 = *(char **)(lVar30 + 8);
          plVar22 = *(long **)(lVar30 + 0x10);
          if (plVar22 != (long *)0x0) {
            LOCK();
            plVar22[1] = plVar22[1] + 1;
            UNLOCK();
            bStack_170 = (byte)plVar22;
            uStack_16f = (undefined1)((ulong)plVar22 >> 8);
            uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
            uStack_16c = (uint)((ulong)plVar22 >> 0x20);
          }
          bStack_178 = (byte)pcVar1;
          uStack_177 = (undefined1)((ulong)pcVar1 >> 8);
          uStack_176 = (undefined2)((ulong)pcVar1 >> 0x10);
          uStack_174 = (uint)((ulong)pcVar1 >> 0x20);
          if ((pcVar1 != (char *)0x0) && (pbStack_168 = *(byte **)(lVar14 + 0x10), *pcVar1 != '\0'))
          {
            func_0x0c8bbb10(*puVar16);
            bStack_178 = 0;
            uStack_177 = 0;
            uStack_176 = 0;
            uStack_174 = 0;
            bStack_170 = 0;
            uStack_16f = 0;
            uStack_16e = 0;
            uStack_16c = 0;
            if (plVar22 == (long *)0x0) {
LAB_0c98f150:
              bVar25 = param_1[0x218];
            }
            else {
              LOCK();
              plVar32 = plVar22 + 1;
              lVar14 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (lVar14 != 0) {
                pbStack_168 = (byte *)0x0;
                goto LAB_0c98f150;
              }
              (**(code **)(*plVar22 + 0x10))(plVar22);
              func_0x0412c2d0(plVar22);
              plVar22 = (long *)CONCAT44(uStack_16c,
                                         CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
              pbStack_168 = (byte *)0x0;
              if (plVar22 == (long *)0x0) goto LAB_0c98f150;
              pbStack_168 = (byte *)0x0;
              LOCK();
              plVar32 = plVar22 + 1;
              lVar14 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (lVar14 != 0) goto LAB_0c98f150;
              (**(code **)(*plVar22 + 0x10))(plVar22);
              func_0x0412c2d0(plVar22);
              bVar25 = param_1[0x218];
            }
            if (bVar25 == 0) {
              lVar14 = (**(code **)(*(long *)param_1 + 0x8d8))(param_1);
              if (lVar14 != 0) {
                (**(code **)(**(long **)(param_1 + 0x118) + 0x10))
                          (*(long **)(param_1 + 0x118),lVar14,param_1 + 0x20);
              }
              lVar14 = (**(code **)(**(long **)(param_1 + 0x118) + 0x30))();
              puVar23 = (ulong *)(**(code **)(*(long *)param_1 + 0x280))(param_1);
              plVar22 = *(long **)(lVar14 + 0x40);
              if (plVar22 != (long *)0x0) {
                uVar26 = *puVar23;
                do {
                  *(int *)(plVar22 + 5) = (int)plVar22[5] + (int)(uVar26 / 0x14);
                  plVar22 = (long *)*plVar22;
                } while (plVar22 != (long *)0x0);
              }
              (**(code **)(**(long **)(param_1 + 0x5a0) + 0x10))();
            }
            lVar14 = *(long *)(param_1 + 0x78);
            pbVar18 = param_1;
            if ((lVar14 == 0) || (lVar30 = *(long *)(param_1 + 0x250), lVar30 == 0)) {
LAB_0c98f315:
              if (param_1[0x218] == 0) {
                uVar19 = *(undefined8 *)(param_1 + 0x5d0);
                func_0x0412d550(0xf5522b8);
                LOCK();
                _DAT_0f552388 = _DAT_0f552388 + 1;
                UNLOCK();
                pbVar33 = (byte *)0xf5522b8;
                func_0x0412d610(0xf5522b8);
                param_5 = _DAT_0f5523a0;
                pbStack_168 = _DAT_0f552398;
                if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
                  bStack_178 = 0;
                  uStack_177 = 0;
                  uStack_176 = 0;
                  uStack_174 = 0;
                  bStack_170 = 0;
                  pbStack_168 = (byte *)0x0;
                  pbStack_160 = (byte *)0x0;
                  pbStack_158 = (byte *)0x0;
                  func_0x0eee02f0(0xf5522b8);
                  uStack_198 = (byte *)0x0;
                  uStack_190 = (byte *)0x0;
                  pbStack_188 = (byte *)0x0;
                  func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012d6a7e);
                  _DAT_00000000 = 0xdeadc0de;
                  goto LAB_0c990bf5;
                }
                if (_DAT_0f5523a0 != (byte *)0x0) {
                  LOCK();
                  *(long *)(_DAT_0f5523a0 + 8) = *(long *)(_DAT_0f5523a0 + 8) + 1;
                  UNLOCK();
                }
                pbVar17 = _DAT_0f5523a8;
                bStack_178 = 0xb8;
                uStack_177 = 0x22;
                uStack_176 = 0xf55;
                uStack_174 = 0;
                bStack_170 = 1;
                pbStack_160 = param_5;
                pbStack_158 = _DAT_0f5523a8;
                uStack_198 = pbStack_168;
                uStack_190 = param_5;
                if (param_5 != (byte *)0x0) {
                  LOCK();
                  *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 1;
                  UNLOCK();
                }
                pbStack_188 = pbVar17;
                if ((*pbStack_168 == 0) &&
                   (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
                   cVar10 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                func_0x0c950720(uVar19,param_1 + 0x238,pbVar17);
                uStack_198 = (byte *)0x0;
                uStack_190 = (byte *)0x0;
                if (param_5 == (byte *)0x0) {
                  pbStack_188 = (byte *)0x0;
                }
                else {
                  LOCK();
                  pbVar17 = param_5 + 8;
                  lVar14 = *(long *)pbVar17;
                  *(long *)pbVar17 = *(long *)pbVar17 + -1;
                  UNLOCK();
                  if (lVar14 == 0) {
                    (**(code **)(*(long *)param_5 + 0x10))(param_5);
                    func_0x0412c2d0(param_5);
                  }
                  plVar22 = (long *)uStack_190;
                  pbStack_188 = (byte *)0x0;
                  if (uStack_190 != (byte *)0x0) {
                    LOCK();
                    plVar32 = (long *)((long)uStack_190 + 8);
                    lVar14 = *plVar32;
                    *plVar32 = *plVar32 + -1;
                    UNLOCK();
                    if (lVar14 == 0) {
                      (**(code **)(*(long *)uStack_190 + 0x10))(uStack_190);
                      func_0x0412c2d0(plVar22);
                    }
                  }
                }
                pbVar17 = pbStack_160;
                pbStack_168 = (byte *)0x0;
                pbStack_160 = (byte *)0x0;
                if (pbVar17 != (byte *)0x0) {
                  LOCK();
                  pbVar28 = pbVar17 + 8;
                  lVar14 = *(long *)pbVar28;
                  *(long *)pbVar28 = *(long *)pbVar28 + -1;
                  UNLOCK();
                  if (lVar14 == 0) {
                    (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
                    func_0x0412c2d0(pbVar17);
                  }
                  pbVar17 = pbStack_160;
                  pbStack_158 = (byte *)0x0;
                  if (pbStack_160 != (byte *)0x0) {
                    LOCK();
                    pbVar28 = pbStack_160 + 8;
                    lVar14 = *(long *)pbVar28;
                    *(long *)pbVar28 = *(long *)pbVar28 + -1;
                    UNLOCK();
                    if (lVar14 == 0) {
                      (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
                      func_0x0412c2d0(pbVar17);
                    }
                  }
                }
                if (bStack_170 == 1) {
                  func_0x0eee02f0(CONCAT44(uStack_174,
                                           CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))));
                }
                func_0x0c950930(*(undefined8 *)(param_1 + 0x5d0));
              }
              lVar14 = *(long *)(param_1 + 0x78);
              if (lVar14 == 0) goto LAB_0c98f5f6;
              uVar19 = *(undefined8 *)(param_1 + 0x3f8);
              bStack_170 = 0;
              uStack_16f = 0;
              uStack_16e = 0;
              uStack_16c = 0;
              lVar30 = *(long *)(lVar14 + 8);
              if (lVar30 != 0) {
                pcVar1 = *(char **)(lVar30 + 8);
                plVar22 = *(long **)(lVar30 + 0x10);
                if (plVar22 != (long *)0x0) {
                  LOCK();
                  plVar22[1] = plVar22[1] + 1;
                  UNLOCK();
                  bStack_170 = (byte)plVar22;
                  uStack_16f = (undefined1)((ulong)plVar22 >> 8);
                  uStack_16e = (undefined2)((ulong)plVar22 >> 0x10);
                  uStack_16c = (uint)((ulong)plVar22 >> 0x20);
                }
                bStack_178 = (byte)pcVar1;
                uStack_177 = (undefined1)((ulong)pcVar1 >> 8);
                uStack_176 = (undefined2)((ulong)pcVar1 >> 0x10);
                uStack_174 = (uint)((ulong)pcVar1 >> 0x20);
                if ((pcVar1 != (char *)0x0) &&
                   (param_5 = *(byte **)(lVar14 + 0x10), pbStack_168 = param_5, *pcVar1 != '\0'))
                goto code_r0x0c98f56f;
              }
            }
            else {
              uStack_190 = (byte *)0x0;
              lVar34 = *(long *)(lVar14 + 8);
              if (lVar34 != 0) {
                uStack_198 = *(byte **)(lVar34 + 8);
                plVar22 = *(long **)(lVar34 + 0x10);
                if (plVar22 != (long *)0x0) {
                  LOCK();
                  plVar22[1] = plVar22[1] + 1;
                  UNLOCK();
                  uStack_190 = (byte *)plVar22;
                }
                if ((uStack_198 != (byte *)0x0) &&
                   (pbStack_188 = *(byte **)(lVar14 + 0x10), *uStack_198 != 0)) {
                  bStack_178 = 0x28;
                  uStack_177 = 0x70;
                  uStack_176 = 0xf45;
                  uStack_174 = 0;
                  bStack_170 = (byte)lVar30;
                  uStack_16f = (undefined1)((ulong)lVar30 >> 8);
                  uStack_16e = (undefined2)((ulong)lVar30 >> 0x10);
                  uStack_16c = (uint)((ulong)lVar30 >> 0x20);
                  pbStack_158 = param_5;
                  (**(code **)(*(long *)pbStack_188 + 0x30))(pbStack_188,&UNK_01d937c1,0xc,10);
                  if (pbStack_158 == param_5) {
                    lVar14 = 0x20;
LAB_0c98f2a4:
                    (**(code **)(*(long *)pbStack_158 + lVar14))();
                  }
                  else {
                    lVar14 = 0x28;
                    if (pbStack_158 != (byte *)0x0) goto LAB_0c98f2a4;
                  }
                  uStack_190 = (byte *)0x0;
                  uStack_198 = (byte *)0x0;
                  if (plVar22 != (long *)0x0) {
                    uStack_190 = (byte *)0x0;
                    uStack_198 = (byte *)0x0;
                    LOCK();
                    plVar32 = plVar22 + 1;
                    lVar14 = *plVar32;
                    *plVar32 = *plVar32 + -1;
                    UNLOCK();
                    if (lVar14 == 0) {
                      (**(code **)(*plVar22 + 0x10))(plVar22);
                      func_0x0412c2d0(plVar22);
                    }
                    plVar22 = (long *)uStack_190;
                    pbStack_188 = (byte *)0x0;
                    if (uStack_190 != (byte *)0x0) {
                      LOCK();
                      plVar32 = (long *)((long)uStack_190 + 8);
                      lVar14 = *plVar32;
                      *plVar32 = *plVar32 + -1;
                      UNLOCK();
                      if (lVar14 == 0) {
                        (**(code **)(*(long *)uStack_190 + 0x10))(uStack_190);
                        func_0x0412c2d0(plVar22);
                      }
                    }
                  }
                  goto LAB_0c98f315;
                }
              }
            }
          }
        }
      }
    }
    puVar16 = (undefined8 *)func_0x04890760();
LAB_0c9909a2:
    func_0x0eec74c0(0x58);
  } while( true );
LAB_0c990d3b:
  func_0x049dc2c0();
LAB_0c990d40:
  iVar13 = func_0x04108328(&DAT_0f5a4510);
  if (iVar13 != 0) {
    func_0x06de1f70(0xf5a44f8);
    FUN_0410844d(&DAT_0f5a4510);
  }
LAB_0c98f9ea:
  plVar22 = (long *)(*(long *)(pbVar33 + 0x28) +
                    (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) - *(long *)(pbVar33 + 0x28)) >>
                                 3) + (int)param_5 & _DAT_0f5a44fc) * 8);
  do {
    if (*plVar22 == -1) goto LAB_0c98fb45;
    lVar14 = *plVar22 * 0x30;
    plVar22 = (long *)(*(long *)(pbVar33 + 0x40) + lVar14);
  } while (*(uint *)(*(long *)(pbVar33 + 0x40) + 8 + lVar14) != _DAT_0f5a44fc);
  if (plVar22 != *(long **)(pbVar33 + 0x48)) {
    lVar14 = (*(code *)plVar22[3])(0,plVar22 + 2,0);
    if (DAT_0f5a4510 == '\0') {
LAB_0c990d7f:
      iVar13 = func_0x04108328(&DAT_0f5a4510);
      if (iVar13 != 0) {
        func_0x06de1f70(0xf5a44f8);
        FUN_0410844d(&DAT_0f5a4510);
      }
    }
    if (*(uint *)(lVar14 + 4) == _DAT_0f5a44fc) {
      plVar32 = (long *)(*(long *)(pbVar33 + 0x28) +
                        (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) - *(long *)(pbVar33 + 0x28))
                                     >> 3) + (int)param_5 & *(uint *)(plVar22 + 1)) * 8);
      do {
        plVar27 = plVar32;
        lVar14 = *plVar27;
        if (lVar14 == -1) goto LAB_0c98fb45;
        lVar14 = lVar14 * 0x30;
        plVar32 = (long *)(*(long *)(pbVar33 + 0x40) + lVar14);
      } while (*(uint *)(*(long *)(pbVar33 + 0x40) + 8 + lVar14) != *(uint *)(plVar22 + 1));
      *plVar27 = *plVar32;
      func_0x049dbe50(puStack_f8);
    }
  }
  goto LAB_0c98fb45;
code_r0x0c98f56f:
  uVar21 = (**(code **)(*(long *)param_1 + 0x908))();
  func_0x0c9c3050(uVar19,param_5,uVar21);
  bStack_178 = 0;
  uStack_177 = 0;
  uStack_176 = 0;
  uStack_174 = 0;
  bStack_170 = 0;
  uStack_16f = 0;
  uStack_16e = 0;
  uStack_16c = 0;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar32 = plVar22 + 1;
    lVar14 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = (long *)CONCAT44(uStack_16c,CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170)));
    pbStack_168 = (byte *)0x0;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar32 = plVar22 + 1;
      lVar14 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
    }
  }
LAB_0c98f5f6:
  if (**(long **)(param_1 + 0x590) != 0) {
    func_0x0c90c070();
  }
  lVar14 = *(long *)(param_1 + 0x530);
  uVar29 = *(uint *)(lVar14 + 0x10);
  if (*(uint *)(lVar14 + 0x14) < *(uint *)(lVar14 + 0x10)) {
    uVar29 = *(uint *)(lVar14 + 0x14);
  }
  if (*(byte *)((long)puStack_f8 + 0x9f) != 0) {
    uVar29 = puStack_f8[0x29];
  }
  *(uint *)(lVar14 + 0x10) = uVar29;
  lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
  *(uint *)(lVar14 + 0x328) = uVar29;
  auVar39 = func_0x0d212ce0(lVar14,10);
  if ((auVar39._8_8_ & 1) != 0) {
    func_0x0495d5f0(auVar39._0_8_);
  }
  func_0x0cb33510(*(undefined8 *)(param_1 + 0x610),uVar29);
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x218);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x218,0);
  }
  bStack_178 = 0;
  uStack_177 = 0;
  uStack_176 = 0;
  uStack_174 = 0;
  func_0x0d07a410(plVar22,&bStack_178);
  plVar32 = *(long **)(param_1 + 0x450);
  *(long **)(param_1 + 0x450) = plVar22;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 8))();
    plVar22 = *(long **)(param_1 + 0x450);
  }
  if (((*(char **)(param_1 + 0x28) != (char *)0x0) && (**(char **)(param_1 + 0x28) == '\0')) &&
     (cVar10 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014da8dc),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar22 + 0x70))(plVar22,*(undefined8 *)(param_1 + 0x38));
  lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
  if (*(char *)(lVar14 + 0x90) == '\x01') {
    lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
    func_0x06cfd9a0(&bStack_178,1,0xb,0,0,0);
    uVar29 = CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178));
    bVar37 = true;
    if (uVar29 <= *(uint *)(lVar14 + 0x340)) {
      if (uVar29 < *(uint *)(lVar14 + 0x340)) {
LAB_0c98f78b:
        bVar37 = false;
      }
      else if (uStack_174 <= *(uint *)(lVar14 + 0x344)) {
        if (uStack_174 < *(uint *)(lVar14 + 0x344)) goto LAB_0c98f78b;
        uVar29 = CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170));
        if (uVar29 <= *(uint *)(lVar14 + 0x348)) {
          if (*(uint *)(lVar14 + 0x348) != uVar29) goto LAB_0c98f78b;
          if (uStack_16c <= *(uint *)(lVar14 + 0x34c)) {
            if (*(uint *)(lVar14 + 0x34c) != uStack_16c) goto LAB_0c98f78b;
            bVar37 = *(uint *)(lVar14 + 0x350) < (uint)pbStack_168;
          }
        }
      }
    }
    if (((ulong)pbStack_160 & 1) != 0) {
      func_0x0412a280(uStack_150,(ulong)pbStack_160 & 0xfffffffffffffffe);
    }
    if (bVar37) {
      lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
      *(undefined1 *)(lVar14 + 0x4be) = 1;
    }
  }
  uVar19 = (**(code **)(*(long *)param_1 + 0x568))();
  func_0x0d2132b0(uVar19);
  if ((*(long *)(param_1 + 0x310) == 0) &&
     (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b6dd1),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_1 + 0x310) == '\0') &&
     (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b6dd1),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(**(long **)(param_1 + 800) + 0x10))(&uStack_198);
  if (uStack_198 != (byte *)0x0) {
    pbVar33 = uStack_198;
    if (DAT_0f5a4510 == '\0') {
LAB_0c990bf5:
      iVar13 = func_0x04108328(&DAT_0f5a4510);
      if (iVar13 != 0) {
        func_0x06de1f70(0xf5a44f8);
        FUN_0410844d(&DAT_0f5a4510);
      }
    }
    puStack_f8 = (uint *)(pbVar33 + 0x28);
    param_5 = (byte *)0xffffffff;
    plVar22 = (long *)(*(long *)(pbVar33 + 0x28) +
                      (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) - *(long *)(pbVar33 + 0x28))
                                   >> 3) - 1U & _DAT_0f5a44fc) * 8);
    pbVar17 = pbVar33 + 0x40;
    do {
      if (*plVar22 == -1) goto LAB_0c98fb45;
      lVar14 = *plVar22 * 0x30;
      plVar22 = (long *)(*(long *)(pbVar33 + 0x40) + lVar14);
    } while (*(uint *)(*(long *)(pbVar33 + 0x40) + 8 + lVar14) != _DAT_0f5a44fc);
    if ((((plVar22 != *(long **)(pbVar33 + 0x48)) && (*(char *)((long)plVar22 + 0x2c) != '\x04')) &&
        ((int)plVar22[5] == 0x75c382e5)) && (plVar22[2] != 0)) {
      if ((DAT_0f5a4510 == '\0') && (iVar13 = func_0x04108328(&DAT_0f5a4510), iVar13 != 0)) {
        func_0x06de1f70(0xf5a44f8);
        FUN_0410844d(&DAT_0f5a4510);
      }
      plVar22 = (long *)(*(long *)(pbVar33 + 0x28) +
                        (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) - *(long *)(pbVar33 + 0x28))
                                     >> 3) - 1U & _DAT_0f5a44fc) * 8);
      do {
        if (*plVar22 == -1) goto LAB_0c98fb45;
        lVar14 = *plVar22 * 0x30;
        plVar22 = (long *)(*(long *)(pbVar33 + 0x40) + lVar14);
      } while (*(uint *)(*(long *)(pbVar33 + 0x40) + 8 + lVar14) != _DAT_0f5a44fc);
      if (((plVar22 != *(long **)(pbVar33 + 0x48)) && (*(char *)((long)plVar22 + 0x2c) != '\x04'))
         && (((int)plVar22[5] == 0x75c382e5 && (plVar22[2] != 0)))) {
        if (DAT_0f5a4510 == '\0') goto LAB_0c990d40;
        goto LAB_0c98f9ea;
      }
    }
LAB_0c98fb45:
    iVar13 = (int)param_5;
    if ((DAT_0f5a4510 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5a4510), iVar12 != 0)) {
      func_0x06de1f70(0xf5a44f8);
      FUN_0410844d(&DAT_0f5a4510);
    }
    plVar22 = (long *)(*(long *)(pbVar33 + 0x28) +
                      (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) - *(long *)(pbVar33 + 0x28))
                                   >> 3) + iVar13 & _DAT_0f5a44fc) * 8);
    do {
      if (*plVar22 == -1) goto LAB_0c98fbda;
      lVar14 = *plVar22 * 0x30;
      plVar22 = (long *)(*(long *)(pbVar33 + 0x40) + lVar14);
    } while (*(uint *)(*(long *)(pbVar33 + 0x40) + 8 + lVar14) != _DAT_0f5a44fc);
    if ((plVar22 == *(long **)(pbVar33 + 0x48)) ||
       (puVar16 = (undefined8 *)plVar22[2],
       (puVar16 == (undefined8 *)0x0 || *(char *)((long)plVar22 + 0x2c) == '\x04') ||
       (int)plVar22[5] != 0x75c382e5)) {
LAB_0c98fbda:
      if (DAT_0f5a4510 == '\0') {
LAB_0c990c65:
        iVar13 = (int)param_5;
        iVar12 = func_0x04108328(&DAT_0f5a4510);
        if (iVar12 != 0) {
          func_0x06de1f70(0xf5a44f8);
          FUN_0410844d(&DAT_0f5a4510);
        }
      }
      uVar29 = _DAT_0f5a44fc;
      plVar22 = (long *)(ulong)_DAT_0f5a44fc;
      uVar26 = (ulong)((int)((ulong)(*(long *)(pbVar33 + 0x30) - *(long *)(pbVar33 + 0x28)) >> 3) +
                       iVar13 & _DAT_0f5a44fc);
      pbVar18 = (byte *)(*(long *)(pbVar33 + 0x28) + uVar26 * 8);
      lVar14 = *(long *)(pbVar33 + 0x40);
      pbVar28 = pbVar18;
      do {
        if (*(long *)pbVar28 == -1) {
          param_5 = *(byte **)(pbVar33 + 0x48);
          goto LAB_0c98fc4a;
        }
        lVar30 = *(long *)pbVar28 * 0x30;
        pbVar28 = (byte *)(lVar14 + lVar30);
      } while (*(uint *)(lVar14 + 8 + lVar30) != _DAT_0f5a44fc);
      param_5 = *(byte **)(pbVar33 + 0x48);
      if (pbVar28 == param_5) {
LAB_0c98fc4a:
        if (param_5 < *(byte **)(pbVar33 + 0x50)) {
          *(undefined8 *)param_5 = *(undefined8 *)pbVar18;
          *(uint *)(param_5 + 8) = uVar29;
          param_5[0x10] = 0;
          param_5[0x11] = 0;
          param_5[0x12] = 0;
          param_5[0x13] = 0;
          param_5[0x14] = 0;
          param_5[0x15] = 0;
          param_5[0x16] = 0;
          param_5[0x17] = 0;
          *(undefined **)(param_5 + 0x18) = &UNK_0c9bbc20;
          param_5[0x28] = 0xe5;
          param_5[0x29] = 0x82;
          param_5[0x2a] = 0xc3;
          param_5[0x2b] = 0x75;
          *(undefined **)(param_5 + 0x20) = &UNK_0c9bbf30;
          param_5[0x2c] = 1;
          puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar16 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          puVar16[2] = 0;
          puVar16[3] = 0;
          *puVar16 = 0;
          puVar16[1] = 0;
          func_0x0d88e390(puVar16,&DAT_0f72b540);
          *(undefined8 **)(param_5 + 0x10) = puVar16;
          param_5 = param_5 + 0x30;
          *(byte **)(pbVar33 + 0x48) = param_5;
        }
        else {
          param_5 = param_5 + -lVar14;
          uVar31 = ((long)param_5 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar31) goto LAB_0c990d3b;
          lVar14 = (long)*(byte **)(pbVar33 + 0x50) - lVar14 >> 4;
          uVar3 = lVar14 * 0x5555555555555556;
          if (uVar31 < uVar3) {
            uVar31 = uVar3;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
            uVar31 = 0x555555555555555;
          }
          pbStack_158 = pbVar17;
          pbStack_e0 = pbVar17;
          if (uVar31 == 0) {
            lVar14 = 0;
          }
          else {
            if (0x555555555555555 < uVar31) {
              lVar14 = FUN_04882eb0();
              pbVar17 = pbVar18;
              goto LAB_0c990d7f;
            }
            pbStack_e8 = (byte *)(uVar31 * 0x30);
            lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (lVar14 == 0) {
              func_0x0eec74c0(pbStack_e8,0);
              lVar14 = 0;
            }
          }
          bStack_178 = (byte)lVar14;
          uStack_177 = (undefined1)((ulong)lVar14 >> 8);
          uStack_176 = (undefined2)((ulong)lVar14 >> 0x10);
          uStack_174 = (uint)((ulong)lVar14 >> 0x20);
          pbStack_168 = param_5 + lVar14;
          bStack_170 = (byte)pbStack_168;
          uStack_16f = (undefined1)((ulong)pbStack_168 >> 8);
          uStack_16e = (undefined2)((ulong)pbStack_168 >> 0x10);
          uStack_16c = (uint)((ulong)pbStack_168 >> 0x20);
          pbStack_160 = (byte *)(uVar31 * 0x30 + lVar14);
          *(undefined8 *)(param_5 + lVar14) = *(undefined8 *)pbVar18;
          *(uint *)(param_5 + lVar14 + 8) = uVar29;
          pbVar18 = param_5 + lVar14 + 0x10;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          *(undefined **)(param_5 + lVar14 + 0x18) = &UNK_0c9bbc20;
          pbVar18 = param_5 + lVar14 + 0x28;
          pbVar18[0] = 0xe5;
          pbVar18[1] = 0x82;
          pbVar18[2] = 0xc3;
          pbVar18[3] = 0x75;
          *(undefined **)(param_5 + lVar14 + 0x20) = &UNK_0c9bbf30;
          param_5[lVar14 + 0x2c] = 1;
          pbStack_e8 = pbStack_168;
          puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar16 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          puVar16[2] = 0;
          puVar16[3] = 0;
          *puVar16 = 0;
          puVar16[1] = 0;
          func_0x0d88e390(puVar16,&DAT_0f72b540);
          *(undefined8 **)(pbStack_e8 + 0x10) = puVar16;
          pbStack_168 = pbStack_168 + 0x30;
          func_0x049dc0d0(pbStack_e0,&bStack_178);
          param_5 = *(byte **)(pbVar33 + 0x48);
          pbVar18 = (byte *)CONCAT44(uStack_16c,CONCAT22(uStack_16e,CONCAT11(uStack_16f,bStack_170))
                                    );
          while (pbVar17 = pbStack_168, pbVar18 != pbVar17) {
            pbStack_168 = pbVar17 + -0x30;
            if (*(code **)(pbVar17 + -0x10) != (code *)0x0) {
              (**(code **)(pbVar17 + -0x10))(pbVar17 + -0x20);
            }
          }
          lVar14 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178)));
          pbStack_168 = pbVar17;
          if (lVar14 != 0) {
            func_0x0412a280(lVar14,(long)pbStack_160 - lVar14);
          }
        }
        *(byte **)(pbVar33 + 0x48) = param_5;
        lVar14 = *(long *)(pbVar33 + 0x28);
        lVar30 = *(long *)(pbVar33 + 0x40);
        lVar34 = (long)param_5 - lVar30;
        uVar31 = (lVar34 >> 4) * -0x5555555555555555;
        *(ulong *)(lVar14 + uVar26 * 8) = uVar31 - 1;
        lVar14 = *(long *)(pbVar33 + 0x30) - lVar14;
        fVar38 = (float)(ulong)(lVar14 >> 3) * *(float *)(pbVar33 + 0x58);
        uVar26 = (ulong)fVar38;
        uVar26 = (long)(fVar38 - _DAT_01198778) & (long)uVar26 >> 0x3f | uVar26;
        if (uVar26 <= uVar31 && uVar31 - uVar26 != 0) {
          func_0x049dc2d0(puStack_f8,lVar14 >> 2);
          lVar30 = *(long *)(pbVar33 + 0x40);
          lVar34 = *(long *)(pbVar33 + 0x48) - lVar30;
        }
        pbVar28 = (byte *)(lVar30 + lVar34 + -0x30);
      }
      puVar16 = (undefined8 *)0x0;
      if (*(int *)(pbVar28 + 0x28) == 0x75c382e5) {
        puVar16 = *(undefined8 **)(pbVar28 + 0x10);
      }
      if (pbVar28[0x2c] == 4) {
        puVar16 = (undefined8 *)0x0;
      }
    }
    lVar14 = (**(code **)(*(long *)param_1 + 0x568))();
    puVar20 = (undefined8 *)(lVar14 + 0x50);
    puVar24 = puVar20;
    if ((*(char *)(lVar14 + 0x77) == '\0') &&
       (((puVar36 = (undefined8 *)(lVar14 + 0x70), *(char *)(lVar14 + 0x68) != '\0' ||
         (puVar24 = puVar36, (*(byte *)(lVar14 + 0x56) & 1) != 0)) &&
        (cVar10 = func_0x04fa7a10(puVar36,puVar20), puVar24 = puVar20, cVar10 != '\0')))) {
      puVar24 = puVar36;
    }
    puVar20 = (undefined8 *)&DAT_0f72b850;
    if (((*(byte *)((long)puVar24 + 6) | *(byte *)(puVar24 + 3)) & 1) != 0) {
      puVar20 = puVar24;
    }
    *puVar16 = *puVar20;
    if ((puVar16[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar16[1] & 0xff00ffffffffffff) - 8);
    }
    puVar16[1] = 0;
    uVar26 = puVar20[1];
    if ((uVar26 & 0x80000000000000) != 0) {
      lVar30 = *(long *)((uVar26 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar30 + 9;
      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar22 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar22 = lVar30;
      func_0x0eee2f00(plVar22 + 1,uVar26 & 0xff00ffffffffffff,lVar30);
      *(undefined1 *)((long)plVar22 + lVar30 + 8) = 0;
      uVar26 = (ulong)(plVar22 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar16[1] = uVar26;
    if ((puVar16[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar16[2] & 0xff00ffffffffffff) - 8);
    }
    puVar16[2] = 0;
    uVar26 = puVar20[2];
    if ((uVar26 & 0x80000000000000) != 0) {
      lVar30 = *(long *)((uVar26 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar30 + 9;
      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar22 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar22 = lVar30;
      func_0x0eee2f00(plVar22 + 1,uVar26 & 0xff00ffffffffffff,lVar30);
      *(undefined1 *)((long)plVar22 + lVar30 + 8) = 0;
      uVar26 = (ulong)(plVar22 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar16[2] = uVar26;
    *(undefined1 *)(puVar16 + 3) = *(undefined1 *)(puVar20 + 3);
  }
  plVar22 = (long *)uStack_190;
  if (uStack_190 == (byte *)0x0) {
LAB_0c9901b9:
    bVar25 = param_1[0x218];
  }
  else {
    LOCK();
    plVar32 = (long *)((long)uStack_190 + 8);
    lVar14 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar14 != 0) goto LAB_0c9901b9;
    (**(code **)(*(long *)uStack_190 + 0x10))(uStack_190);
    func_0x0412c2d0(plVar22);
    bVar25 = param_1[0x218];
  }
  if (bVar25 == 1) {
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    *puVar16 = param_1;
    puVar16[1] = 0;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar20 = param_1;
    puVar20[2] = 0;
    puVar20[3] = 0;
    puVar20[1] = puVar20 + 2;
    puVar16[1] = puVar20;
    lVar14 = *(long *)(param_1 + 0x3a8);
    *(undefined8 **)(param_1 + 0x3a8) = puVar16;
    if (lVar14 != 0) {
      lVar30 = *(long *)(lVar14 + 8);
      *(undefined8 *)(lVar14 + 8) = 0;
      if (lVar30 != 0) {
        func_0x0c9396d0(lVar30 + 8,*(undefined8 *)(lVar30 + 0x10));
        func_0x0412a280(lVar30,0x20);
      }
      func_0x0412a280(lVar14,0x10);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x5a0) + 0x10))(*(long **)(param_1 + 0x5a0),0x24);
  lVar14 = *(long *)(param_1 + 0x2b8);
  bVar25 = param_1[0x219];
  func_0x0412d550(0xf550550);
  LOCK();
  _DAT_0f550620 = _DAT_0f550620 + 1;
  UNLOCK();
  func_0x0412d610(0xf550550);
  pbStack_160 = (byte *)_DAT_0f550638;
  pbStack_168 = _DAT_0f550630;
  if ((_DAT_0f550630 == (byte *)0x0) || (*_DAT_0f550630 != 1)) {
    bStack_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    bStack_170 = 0;
    pbStack_168 = (byte *)0x0;
    pbStack_160 = (byte *)0x0;
    pbStack_158 = (byte *)0x0;
    func_0x0eee02f0(0xf550550);
    *(undefined8 *)(lVar14 + 0x10) = 0;
  }
  else {
    if (_DAT_0f550638 != (long *)0x0) {
      LOCK();
      _DAT_0f550638[1] = _DAT_0f550638[1] + 1;
      UNLOCK();
    }
    plStack_98 = _DAT_0f550640;
    bStack_178 = 0x50;
    uStack_177 = 5;
    uStack_176 = 0xf55;
    uStack_174 = 0;
    bStack_170 = 1;
    pbStack_158 = (byte *)_DAT_0f550640;
    pbStack_a8 = pbStack_168;
    plStack_a0 = (long *)pbStack_160;
    if (pbStack_160 != (byte *)0x0) {
      LOCK();
      *(long *)((long)pbStack_160 + 8) = *(long *)((long)pbStack_160 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(lVar14 + 0x10) = 0;
    plVar22 = (long *)pbStack_160;
    if (((bVar25 == 0) && (*pbStack_168 != 0)) && ((*(byte *)(plStack_98 + 0x12) & 1) != 0)) {
      (**(code **)(*plStack_98 + 0x18))();
      plVar22 = plStack_a0;
    }
    pbStack_a8 = (byte *)0x0;
    plStack_a0 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar32 = plVar22 + 1;
      lVar14 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
      plVar22 = plStack_a0;
      plStack_98 = (long *)0x0;
      if (plStack_a0 != (long *)0x0) {
        LOCK();
        plVar32 = plStack_a0 + 1;
        lVar14 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          func_0x0412c2d0(plVar22);
        }
      }
      goto LAB_0c990465;
    }
  }
  plStack_a0 = (long *)0x0;
  pbStack_a8 = (byte *)0x0;
  plStack_98 = (long *)0x0;
LAB_0c990465:
  pbVar33 = pbStack_160;
  pbStack_168 = (byte *)0x0;
  pbStack_160 = (byte *)0x0;
  if (pbVar33 != (byte *)0x0) {
    LOCK();
    plVar22 = (long *)((long)pbVar33 + 8);
    lVar14 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)pbVar33 + 0x10))(pbVar33);
      func_0x0412c2d0(pbVar33);
      pbVar33 = pbStack_160;
      pbStack_158 = (byte *)0x0;
      if (pbStack_160 != (byte *)0x0) {
        pbStack_158 = (byte *)0x0;
        LOCK();
        plVar22 = (long *)((long)pbStack_160 + 8);
        lVar14 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
          func_0x0412c2d0(pbVar33);
        }
      }
    }
    else {
      pbStack_158 = (byte *)0x0;
    }
  }
  if (bStack_170 == 1) {
    func_0x0eee02f0(CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))));
  }
  func_0x0412d550(0xf550550);
  LOCK();
  _DAT_0f550620 = _DAT_0f550620 + 1;
  UNLOCK();
  func_0x0412d610(0xf550550);
  plVar22 = _DAT_0f550638;
  pbVar33 = _DAT_0f550630;
  if ((_DAT_0f550630 == (byte *)0x0) || (*_DAT_0f550630 != 1)) {
    bStack_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    bStack_170 = 0;
    func_0x0eee02f0(0xf550550);
  }
  else {
    bVar25 = 1;
    if (_DAT_0f550638 != (long *)0x0) {
      LOCK();
      _DAT_0f550638[1] = _DAT_0f550638[1] + 1;
      UNLOCK();
      bVar25 = *pbVar33;
    }
    bStack_178 = 0x50;
    uStack_177 = 5;
    uStack_176 = 0xf55;
    uStack_174 = 0;
    bStack_170 = 1;
    pbStack_168 = pbVar33;
    pbStack_160 = (byte *)plVar22;
    pbStack_158 = (byte *)_DAT_0f550640;
    if (((bVar25 & 1) != 0) && (param_1[0x218] == 0)) {
      func_0x0cb29f80(_DAT_0f550640,*(undefined8 *)(param_1 + 0x660));
    }
    pbStack_168 = (byte *)0x0;
    pbStack_160 = (byte *)0x0;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar32 = plVar22 + 1;
      lVar14 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
      pbVar33 = pbStack_160;
      pbStack_158 = (byte *)0x0;
      if (pbStack_160 != (byte *)0x0) {
        LOCK();
        plVar22 = (long *)((long)pbStack_160 + 8);
        lVar14 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
          func_0x0412c2d0(pbVar33);
        }
      }
    }
  }
  if (bStack_170 == 1) {
    func_0x0eee02f0(CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))));
  }
  func_0x0412d550(0xf6ebf60);
  LOCK();
  _DAT_0f6ec030 = _DAT_0f6ec030 + 1;
  UNLOCK();
  func_0x0412d610(0xf6ebf60);
  plVar22 = _DAT_0f6ec048;
  pbVar33 = _DAT_0f6ec040;
  if ((_DAT_0f6ec040 == (byte *)0x0) || (*_DAT_0f6ec040 != 1)) {
    bStack_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_174 = 0;
    bStack_170 = 0;
    func_0x0eee02f0(0xf6ebf60);
  }
  else {
    bVar25 = 1;
    if (_DAT_0f6ec048 != (long *)0x0) {
      LOCK();
      _DAT_0f6ec048[1] = _DAT_0f6ec048[1] + 1;
      UNLOCK();
      bVar25 = *pbVar33;
    }
    bStack_178 = 0x60;
    uStack_177 = 0xbf;
    uStack_176 = 0xf6e;
    uStack_174 = 0;
    bStack_170 = 1;
    pbStack_168 = pbVar33;
    pbStack_160 = (byte *)plVar22;
    pbStack_158 = (byte *)_DAT_0f6ec050;
    if (((bVar25 & 1) != 0) && (param_1[0x219] == 0)) {
      func_0x0d2601f0();
    }
    pbStack_168 = (byte *)0x0;
    pbStack_160 = (byte *)0x0;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar32 = plVar22 + 1;
      lVar14 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
      pbVar33 = pbStack_160;
      pbStack_158 = (byte *)0x0;
      if (pbStack_160 != (byte *)0x0) {
        LOCK();
        plVar22 = (long *)((long)pbStack_160 + 8);
        lVar14 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
          func_0x0412c2d0(pbVar33);
        }
      }
    }
  }
  if (bStack_170 == 1) {
    func_0x0eee02f0(CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(uStack_177,bStack_178))));
  }
  if (param_1[0x218] == 1) {
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    bStack_178 = (byte)puVar16;
    uStack_177 = (undefined1)((ulong)puVar16 >> 8);
    uStack_176 = (undefined2)((ulong)puVar16 >> 0x10);
    uStack_174 = (uint)((ulong)puVar16 >> 0x20);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar20 = &UNK_0f534768;
    puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = &UNK_0ef44a60;
    *(undefined1 *)(puVar24 + 3) = 1;
    puVar20[1] = puVar24 + 3;
    puVar20[2] = puVar24;
    plVar22 = *(long **)(param_1 + 0x478);
    *(undefined8 **)(param_1 + 0x478) = puVar20;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    plVar22 = *(long **)(param_1 + 0x480);
    *(undefined8 **)(param_1 + 0x480) = puVar16;
    if (plVar22 != (long *)0x0) {
      lVar14 = plVar22[3];
      if (lVar14 != 0) {
        plVar22[4] = lVar14;
        func_0x0412a280(lVar14,plVar22[5] - lVar14);
      }
      lVar14 = *plVar22;
      if (lVar14 != 0) {
        plVar22[1] = lVar14;
        func_0x0412a280(lVar14,plVar22[2] - lVar14);
      }
      func_0x0412a280(plVar22,0x30);
    }
    lVar14 = *(long *)(param_1 + 0x478);
    lVar30 = *(long *)(param_1 + 0x4a0);
    if (lVar14 == 0) {
      lVar34 = 0;
      plVar22 = (long *)0x0;
      uVar19 = 0;
    }
    else {
      lVar34 = *(long *)(lVar14 + 8);
      plVar22 = *(long **)(lVar14 + 0x10);
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar22[1] = plVar22[1] + 1;
        UNLOCK();
      }
      uVar19 = 0;
      if (lVar34 != 0) {
        uVar19 = *(undefined8 *)(param_1 + 0x480);
      }
    }
    plVar32 = *(long **)(lVar30 + 0x48);
    *(undefined8 *)(lVar30 + 0x40) = 0;
    *(undefined8 *)(lVar30 + 0x48) = 0;
    if (plVar32 != (long *)0x0) {
      LOCK();
      plVar27 = plVar32 + 1;
      lVar14 = *plVar27;
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
      }
    }
    *(undefined8 *)(lVar30 + 0x50) = 0;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar22[1] = plVar22[1] + 1;
      UNLOCK();
    }
    *(long *)(lVar30 + 0x40) = lVar34;
    plVar32 = *(long **)(lVar30 + 0x48);
    *(long **)(lVar30 + 0x48) = plVar22;
    if (plVar32 != (long *)0x0) {
      LOCK();
      plVar27 = plVar32 + 1;
      lVar14 = *plVar27;
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
      }
    }
    *(undefined8 *)(lVar30 + 0x50) = uVar19;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar32 = plVar22 + 1;
      lVar14 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  func_0x0eeb81b0(&lStack_d0);
  return 1;
}



/* ---- referenced strings ----
 * 0x128215d  world_template_id
 */
