/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb92ff50 (ELF vaddr 0xb82ff50)
 * Label: caller-of-callee
 * Body:  [[0b92ff50, 0b9315df]]
 * Ghidra: FUN_0b92ff50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b92ff50(long *param_1,byte *param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  byte *pbVar12;
  bool bVar13;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  byte *pbStack_278;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  byte *pbStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  long lStack_218;
  byte *pbStack_210;
  byte **ppbStack_208;
  long lStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  byte *pbStack_1c8;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  byte *pbStack_178;
  byte *pbStack_170;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  byte *pbStack_148;
  byte *pbStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  byte *pbStack_f8;
  undefined4 uStack_f0;
  byte abStack_e8 [16];
  byte **ppbStack_d8;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  byte *pbStack_98;
  long *plStack_88;
  long *plStack_80;
  byte *pbStack_78;
  byte bStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  long lStack_50;
  byte *pbStack_48;
  long lStack_40;
  ulong uStack_38;
  
  pbVar6 = &bStack_68;
  plStack_240 = param_4;
  (**(code **)(*(long *)param_2 + 0x8b0))(pbVar6);
  func_0x0b9321f0(&bStack_150,pbVar6,&UNK_01d3f2a8);
  if ((param_1[8] == 0) &&
     (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)param_1[8] == '\0') &&
     (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar8 = param_1[10];
  bVar13 = (*(byte *)(lVar8 + 0x78) & 1) != 0;
  uStack_238 = (long *)(lVar8 + 0x79);
  if (bVar13) {
    uStack_238 = (long *)*(long *)(lVar8 + 0x88);
  }
  uStack_230 = (byte *)(ulong)(*(byte *)(lVar8 + 0x78) >> 1);
  if (bVar13) {
    uStack_230 = *(byte **)(lVar8 + 0x80);
  }
  pbStack_228 = (byte *)&uStack_14f;
  pbStack_220 = (byte *)(ulong)(bStack_150 >> 1);
  if ((bStack_150 & 1) != 0) {
    pbStack_220 = pbStack_148;
    pbStack_228 = pbStack_140;
  }
  func_0x048ad670(&uStack_168,&uStack_238,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7b8fb8), iVar5 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  if ((param_1[8] == 0) &&
     (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)param_1[8] == '\0') &&
     (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar8 = param_1[10];
  bVar13 = (*(byte *)(lVar8 + 0x78) & 1) != 0;
  lStack_40 = lVar8 + 0x79;
  if (bVar13) {
    lStack_40 = *(long *)(lVar8 + 0x88);
  }
  uStack_38 = (ulong)(*(byte *)(lVar8 + 0x78) >> 1);
  if (bVar13) {
    uStack_38 = *(ulong *)(lVar8 + 0x80);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_238,&DAT_0f7b8f98,&lStack_40);
  plStack_108 = (long *)0x671262a05c33b58d;
  puStack_100 = (undefined8 *)&UNK_0140f690;
  pbStack_f8 = (byte *)0x1;
  uStack_f0 = 0x145;
  if ((byte)pbStack_1f8 == 0) {
    puStack_1b8 = (undefined *)0x0;
    puStack_1b0 = (undefined8 *)0x0;
    uStack_1a8 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_238,&puStack_1b8,&plStack_108);
    if (((ulong)puStack_1b8 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_1a8,(ulong)puStack_1b8 & 0xfffffffffffffffe);
    }
  }
  pbVar12 = pbStack_210;
  if (((byte)pbStack_1f8 & 1) == 0) {
    if (pbStack_210 != (byte *)0x0) {
      while (pbVar6 = (byte *)ppbStack_208, pbVar12 != pbVar6) {
        func_0x048b3e80(pbVar6 + -0x40);
        ppbStack_208 = (byte **)(pbVar6 + -0x40);
      }
      ppbStack_208 = (byte **)pbVar12;
      thunk_FUN_0ee326a0(pbStack_210,lStack_200 - (long)pbStack_210);
    }
    pbVar12 = pbStack_228;
    pbVar3 = pbStack_220;
    if (pbStack_228 != (byte *)0x0) {
      while (pbVar6 = pbVar3, pbVar12 != pbVar6) {
        if ((pbVar6[-8] == 1) && ((pbVar6[-0x30] & 1) != 0)) {
          thunk_FUN_0ee326a0(*(long *)(pbVar6 + -0x20),
                             *(ulong *)(pbVar6 + -0x30) & 0xfffffffffffffffe);
        }
        pbVar3 = pbVar6 + -0x50;
      }
      pbStack_220 = pbVar12;
      thunk_FUN_0ee326a0(pbStack_228,lStack_218 - (long)pbStack_228);
    }
  }
  (**(code **)(*param_1 + 0xa8))(&uStack_238,param_1);
  pbVar12 = uStack_230;
  lVar8 = (long)uStack_238;
  uStack_238 = (long *)0x0;
  uStack_230 = (byte *)0x0;
  lStack_50 = lVar8;
  pbStack_48 = pbVar12;
  if (lVar8 == 0) goto LAB_0b93154c;
  pbVar6 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (pbVar6 == (byte *)0x0) goto LAB_0b931551;
  do {
    pbVar6[8] = 0;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    pbVar6[0xc] = 0;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    pbVar6[0x10] = 0;
    pbVar6[0x11] = 0;
    pbVar6[0x12] = 0;
    pbVar6[0x13] = 0;
    pbVar6[0x14] = 0;
    pbVar6[0x15] = 0;
    pbVar6[0x16] = 0;
    pbVar6[0x17] = 0;
    *(undefined **)pbVar6 = &UNK_0ef560b8;
    pbVar6[0x18] = 0;
    pbVar6[0x19] = 0;
    pbVar6[0x1a] = 0;
    pbVar6[0x1b] = 0;
    pbVar6[0x1c] = 0;
    pbVar6[0x1d] = 0;
    pbVar6[0x1e] = 0;
    pbVar6[0x1f] = 0;
    pbVar6[0x20] = 0;
    pbVar6[0x21] = 0;
    pbVar6[0x22] = 0;
    pbVar6[0x23] = 0;
    pbVar6[0x24] = 0;
    pbVar6[0x25] = 0;
    pbVar6[0x26] = 0;
    pbVar6[0x27] = 0;
    pbVar6[0x28] = 0;
    pbVar6[0x29] = 0;
    pbVar6[0x2a] = 0;
    pbVar6[0x2b] = 0;
    pbVar6[0x2c] = 0;
    pbVar6[0x2d] = 0;
    pbVar6[0x2e] = 0;
    pbVar6[0x2f] = 0;
    pbStack_178 = pbVar6 + 0x18;
    pbStack_170 = pbVar6;
    *(undefined4 *)(param_1 + 7) = 1;
    pbVar6 = (byte *)(**(code **)(*(long *)param_2 + 0x8c0))(param_2);
    puStack_138 = &UNK_01216ef6;
    uStack_130 = 0x11;
    uStack_128 = _DAT_0f778528;
    uStack_120 = 0xffffffff00000001;
    uStack_118 = 0;
    uStack_110 = 0;
    plStack_108 = param_1;
    puStack_100 = param_3;
    pbStack_f8 = param_2;
    param_2 = abStack_e8;
    plVar10 = (long *)plStack_240[4];
    if (plVar10 == (long *)0x0) {
      pbStack_c8 = (byte *)0x0;
LAB_0b930446:
    }
    else {
      if (plVar10 != plStack_240) {
        pbStack_c8 = (byte *)(**(code **)(*plVar10 + 0x10))();
        goto LAB_0b930446;
      }
      pbStack_c8 = param_2;
      (**(code **)(*plVar10 + 0x18))(plVar10,param_2);
    }
    param_3 = &uStack_b8;
    if ((uStack_168 & 1) == 0) {
      uStack_a8 = uStack_158;
      uStack_b8 = CONCAT44(uStack_164,uStack_168);
      uStack_b0 = CONCAT44(uStack_15c,uStack_160);
    }
    else {
      FUN_0412e5e0(param_3,uStack_158,CONCAT44(uStack_15c,uStack_160));
    }
    lStack_a0 = lVar8;
    pbStack_98 = pbVar12;
    if (pbVar12 == (byte *)0x0) {
LAB_0b9304d0:
      plStack_2a8 = (long *)0x0;
      plStack_2a0 = (long *)0x0;
      pbStack_228 = pbStack_f8;
      uStack_238 = plStack_108;
      uStack_230 = (byte *)puStack_100;
      pbVar12 = (byte *)&lStack_218;
      if (pbStack_c8 == (byte *)0x0) {
        pbStack_1f8 = (byte *)0x0;
      }
      else if (pbStack_c8 == param_2) {
        pbStack_1f8 = pbVar12;
        (**(code **)(*(long *)pbStack_c8 + 0x18))(pbStack_c8,pbVar12);
      }
      else {
        pbStack_1f8 = pbStack_c8;
        pbStack_c8 = (byte *)0x0;
      }
      uStack_1d8 = uStack_a8;
      uStack_1e8 = uStack_b8;
      uStack_1e0 = uStack_b0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      pbStack_1c8 = pbStack_98;
      lStack_1d0 = lStack_a0;
      if (pbStack_98 != (byte *)0x0) {
        LOCK();
        *(long *)(pbStack_98 + 8) = *(long *)(pbStack_98 + 8) + 1;
        UNLOCK();
      }
      lVar8 = lStack_1d0;
      if (lStack_1d0 != 0) {
        plStack_298 = (long *)0x0;
        plStack_290 = (long *)0x0;
        plStack_2a8 = (long *)0x0;
        plStack_2a0 = (long *)0x0;
        puStack_1b0 = (undefined8 *)0x0;
        puStack_1b8 = &UNK_0f2ea178;
        param_3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (param_3 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        param_3[2] = pbStack_228;
        *(undefined4 *)param_3 = (undefined4)uStack_238;
        *(undefined4 *)((long)param_3 + 4) = uStack_238._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_230;
        *(undefined4 *)((long)param_3 + 0xc) = uStack_230._4_4_;
        if (pbStack_1f8 == (byte *)0x0) {
          param_3[8] = 0;
        }
        else if (pbStack_1f8 == pbVar12) {
          param_3[8] = param_3 + 4;
          (**(code **)(*(long *)pbStack_1f8 + 0x18))();
        }
        else {
          param_3[8] = pbStack_1f8;
          pbStack_1f8 = (byte *)0x0;
        }
        param_3[0xc] = uStack_1d8;
        param_3[10] = uStack_1e8;
        param_3[0xb] = uStack_1e0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        param_3[0xd] = lStack_1d0;
        param_3[0xe] = pbStack_1c8;
        lVar7 = lStack_1d0;
        if (pbStack_1c8 != (byte *)0x0) {
          LOCK();
          *(long *)(pbStack_1c8 + 8) = *(long *)(pbStack_1c8 + 8) + 1;
          UNLOCK();
          lVar7 = param_3[0xd];
        }
        if (lVar7 != 0) break;
      }
    }
    else {
      LOCK();
      *(long *)(pbVar12 + 8) = *(long *)(pbVar12 + 8) + 1;
      UNLOCK();
      lVar8 = lStack_a0;
      if (lStack_a0 != 0) goto LAB_0b9304d0;
    }
LAB_0b93154c:
    FUN_04890760();
LAB_0b931551:
    func_0x0eec74c0(0x30,0);
  } while( true );
  puStack_1b0 = param_3;
  func_0x0b968430(&plStack_288,pbVar6,&puStack_138,&plStack_298,0,&puStack_1b8);
  if (puStack_1b8 != (undefined *)0x0) {
    (**(code **)(puStack_1b8 + 8))(&puStack_1b8);
  }
  plVar10 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_290 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_2b8 = plStack_288;
  plStack_2b0 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plStack_280[1] = plStack_280[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(pbVar6 + 0x80);
  if (iVar5 != 1) {
    if (iVar5 == 3) {
      *(undefined4 *)(plStack_288 + 6) = 0;
    }
    else if (iVar5 == 2) {
      (**(code **)(*plStack_288 + 0x10))();
      goto LAB_0b93079f;
    }
    plStack_258 = plStack_288;
    plStack_250 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plStack_280[1] = plStack_280[1] + 1;
      UNLOCK();
    }
    (**(code **)(*(long *)pbVar6 + 0x28))(pbVar6,&plStack_258,0);
    plVar10 = plStack_250;
    if (plStack_250 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_250 + 1;
      lVar8 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_250 + 0x10))(plStack_250);
        func_0x0412c2d0(plVar10);
      }
    }
  }
LAB_0b93079f:
  plVar10 = plStack_2b0;
  if (plStack_2b0 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_2b0 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_2c0 = plStack_280;
  plStack_2c8 = plStack_288 + 0xe;
  if (plStack_288 == (long *)0x0) {
    plStack_2c8 = (long *)0x0;
  }
  plStack_288 = (long *)0x0;
  plStack_280 = (long *)0x0;
  plStack_268 = (long *)0x0;
  plStack_260 = (long *)0x0;
  func_0x0b9685d0(&plStack_258,&plStack_2c8);
  plVar10 = plStack_2c0;
  plStack_88 = plStack_258;
  plStack_80 = plStack_250;
  plStack_258 = (long *)0x0;
  plStack_250 = (long *)0x0;
  pbStack_78 = pbVar6;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_2c0 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_260;
  if (plStack_260 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_260 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_260 + 0x10))(plStack_260);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_280;
  pbVar3 = pbStack_1c8;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_280 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar10);
      pbVar3 = pbStack_1c8;
    }
  }
  pbStack_1c8 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    LOCK();
    pbVar1 = (byte *)((long)pbVar3 + 8);
    lVar8 = *(long *)pbVar1;
    *(long *)pbVar1 = *(long *)pbVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)pbVar3 + 0x10))(pbVar3);
      func_0x0412c2d0(pbVar3);
    }
  }
  if ((uStack_1e8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
  }
  plVar10 = plStack_240;
  if (pbStack_1f8 == pbVar12) {
    lVar8 = 0x20;
LAB_0b930914:
    (**(code **)(*(long *)pbStack_1f8 + lVar8))();
    plVar11 = plStack_2a0;
  }
  else {
    lVar8 = 0x28;
    plVar11 = plStack_2a0;
    if (pbStack_1f8 != (byte *)0x0) goto LAB_0b930914;
  }
  plStack_2a0 = plVar11;
  pbVar12 = pbStack_98;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar2 = (long *)((long)plVar11 + 8);
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
      pbVar12 = pbStack_98;
    }
  }
  pbStack_98 = pbVar12;
  if (pbVar12 != (byte *)0x0) {
    LOCK();
    pbVar3 = (byte *)((long)pbVar12 + 8);
    lVar8 = *(long *)pbVar3;
    *(long *)pbVar3 = *(long *)pbVar3 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)pbVar12 + 0x10))(pbVar12);
      func_0x0412c2d0(pbVar12);
    }
  }
  if ((uStack_b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_a8,uStack_b8 & 0xfffffffffffffffe);
  }
  if (pbStack_c8 == param_2) {
    lVar8 = 0x20;
LAB_0b93099e:
    (**(code **)(*(long *)pbStack_c8 + lVar8))();
  }
  else {
    lVar8 = 0x28;
    if (pbStack_c8 != (byte *)0x0) goto LAB_0b93099e;
  }
  puStack_138 = &UNK_01488658;
  uStack_130 = 0x14;
  uStack_128 = _DAT_0f778528;
  uStack_120 = 0xffffffff00000001;
  uStack_118 = 0;
  uStack_110 = 0;
  plVar11 = (long *)plVar10[4];
  plStack_108 = param_1;
  if (plVar11 == (long *)0x0) {
    ppbStack_d8 = (byte **)0x0;
  }
  else if (plVar11 == plVar10) {
    ppbStack_d8 = &pbStack_f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&pbStack_f8);
  }
  else {
    ppbStack_d8 = (byte **)(**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = plStack_80;
  plVar10 = plStack_88;
  pbStack_c8 = pbStack_178;
  pbStack_c0 = pbStack_170;
  if (pbStack_170 != (byte *)0x0) {
    LOCK();
    *(long *)(pbStack_170 + 8) = *(long *)(pbStack_170 + 8) + 1;
    UNLOCK();
  }
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  pbStack_248 = pbStack_78;
  plStack_2a8 = plVar10;
  plStack_2a0 = plVar11;
  plStack_258 = (long *)0x0;
  plStack_250 = (long *)0x0;
  uStack_238 = plStack_108;
  if (ppbStack_d8 == (byte **)0x0) {
    ppbStack_208 = (byte **)0x0;
  }
  else if (ppbStack_d8 == &pbStack_f8) {
    ppbStack_208 = &pbStack_228;
    (**(code **)(*ppbStack_d8 + 0x18))();
  }
  else {
    ppbStack_208 = ppbStack_d8;
    ppbStack_d8 = (byte **)0x0;
  }
  pbStack_1f8 = pbStack_c8;
  pbStack_1f0 = pbStack_c0;
  pbStack_c8 = (byte *)0x0;
  pbStack_c0 = (byte *)0x0;
  plStack_2c8 = plVar10;
  plStack_2c0 = plVar11;
  plStack_2a8 = (long *)0x0;
  plStack_2a0 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1b8 = &UNK_0f2ea190;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar9 = uStack_238;
  if (ppbStack_208 == (byte **)0x0) {
    puVar9[6] = 0;
  }
  else if (ppbStack_208 == &pbStack_228) {
    puVar9[6] = puVar9 + 2;
    (**(code **)(*ppbStack_208 + 0x18))();
  }
  else {
    puVar9[6] = ppbStack_208;
    ppbStack_208 = (byte **)0x0;
  }
  puVar9[8] = pbStack_1f8;
  puVar9[9] = pbStack_1f0;
  pbStack_1f8 = (byte *)0x0;
  pbStack_1f0 = (byte *)0x0;
  puStack_1b0 = puVar9;
  func_0x0b96b4b0(&plStack_2b8,pbVar6,&puStack_138,&plStack_2c8,0,&puStack_1b8);
  if (puStack_1b8 != (undefined *)0x0) {
    (**(code **)(puStack_1b8 + 8))(&puStack_1b8);
  }
  plVar10 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_2c0 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_268 = plStack_2b8;
  plStack_260 = plStack_2b0;
  if (plStack_2b0 != (long *)0x0) {
    LOCK();
    plStack_2b0[1] = plStack_2b0[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(pbVar6 + 0x80);
  if (iVar5 != 1) {
    if (iVar5 == 3) {
      *(undefined4 *)(plStack_2b8 + 6) = 0;
    }
    else if (iVar5 == 2) {
      (**(code **)(*plStack_2b8 + 0x10))();
      goto LAB_0b930d6a;
    }
    plStack_298 = plStack_2b8;
    plStack_290 = plStack_2b0;
    if (plStack_2b0 != (long *)0x0) {
      LOCK();
      plStack_2b0[1] = plStack_2b0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*(long *)pbVar6 + 0x28))(pbVar6,&plStack_298,0);
    plVar10 = plStack_290;
    if (plStack_290 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_290 + 1;
      lVar8 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_290 + 0x10))(plStack_290);
        func_0x0412c2d0(plVar10);
      }
    }
  }
LAB_0b930d6a:
  plVar10 = plStack_260;
  if (plStack_260 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_260 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_260 + 0x10))(plStack_260);
      func_0x0412c2d0(plVar10);
    }
  }
  pbVar12 = pbStack_1f0;
  plStack_288 = plStack_2b8 + 0xe;
  if (plStack_2b8 == (long *)0x0) {
    plStack_288 = (long *)0x0;
  }
  plStack_280 = plStack_2b0;
  pbStack_278 = pbVar6;
  if (pbStack_1f0 == (byte *)0x0) {
LAB_0b930ddb:
    if (ppbStack_208 != &pbStack_228) goto LAB_0b930df0;
LAB_0b930e2d:
    lVar8 = 0x20;
LAB_0b930e32:
    (**(code **)(*ppbStack_208 + lVar8))();
    plVar10 = plStack_2a0;
  }
  else {
    LOCK();
    plVar10 = (long *)((long)pbStack_1f0 + 8);
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b930ddb;
    (**(code **)(*(long *)pbStack_1f0 + 0x10))(pbStack_1f0);
    func_0x0412c2d0(pbVar12);
    if (ppbStack_208 == &pbStack_228) goto LAB_0b930e2d;
LAB_0b930df0:
    lVar8 = 0x28;
    plVar10 = plStack_2a0;
    if (ppbStack_208 != (byte **)0x0) goto LAB_0b930e32;
  }
  plStack_2a0 = plVar10;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_250;
  if (plStack_250 == (long *)0x0) {
LAB_0b930e82:
    if (pbStack_c0 == (byte *)0x0) goto LAB_0b930ea1;
LAB_0b930e8f:
    pbVar12 = pbStack_c0;
    LOCK();
    plVar10 = (long *)((long)pbStack_c0 + 8);
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b930ea1;
    (**(code **)(*(long *)pbStack_c0 + 0x10))(pbStack_c0);
    func_0x0412c2d0(pbVar12);
    if (ppbStack_d8 != &pbStack_f8) goto LAB_0b930eae;
LAB_0b930f02:
    lVar8 = 0x20;
LAB_0b930f0f:
    plVar10 = plStack_240;
    (**(code **)(*ppbStack_d8 + lVar8))();
  }
  else {
    LOCK();
    plVar11 = plStack_250 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b930e82;
    (**(code **)(*plStack_250 + 0x10))(plStack_250);
    func_0x0412c2d0(plVar10);
    if (pbStack_c0 != (byte *)0x0) goto LAB_0b930e8f;
LAB_0b930ea1:
    if (ppbStack_d8 == &pbStack_f8) goto LAB_0b930f02;
LAB_0b930eae:
    lVar8 = 0x28;
    plVar10 = plStack_240;
    if (ppbStack_d8 != (byte **)0x0) goto LAB_0b930f0f;
  }
  puStack_138 = &UNK_0143cac3;
  uStack_130 = 0x13;
  uStack_128 = _DAT_0f778528;
  uStack_120 = 0xffffffff00000001;
  uStack_118 = 0;
  uStack_110 = 0;
  plVar11 = (long *)plVar10[4];
  if (plVar11 == (long *)0x0) {
    ppbStack_d8 = (byte **)0x0;
    plStack_108 = param_1;
  }
  else if (plVar11 == plVar10) {
    plStack_108 = param_1;
    ppbStack_d8 = &pbStack_f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&pbStack_f8);
  }
  else {
    plStack_108 = param_1;
    ppbStack_d8 = (byte **)(**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = plStack_280;
  plVar10 = plStack_288;
  pbStack_c8 = pbStack_178;
  pbStack_c0 = pbStack_170;
  if (pbStack_170 != (byte *)0x0) {
    LOCK();
    *(long *)(pbStack_170 + 8) = *(long *)(pbStack_170 + 8) + 1;
    UNLOCK();
  }
  plStack_288 = (long *)0x0;
  plStack_280 = (long *)0x0;
  pbStack_248 = pbStack_278;
  plStack_2a8 = plVar10;
  plStack_2a0 = plVar11;
  plStack_258 = (long *)0x0;
  plStack_250 = (long *)0x0;
  uStack_238 = plStack_108;
  if (ppbStack_d8 == (byte **)0x0) {
    ppbStack_208 = (byte **)0x0;
  }
  else if (ppbStack_d8 == &pbStack_f8) {
    ppbStack_208 = &pbStack_228;
    (**(code **)(*ppbStack_d8 + 0x18))();
  }
  else {
    ppbStack_208 = ppbStack_d8;
    ppbStack_d8 = (byte **)0x0;
  }
  pbStack_1f8 = pbStack_c8;
  pbStack_1f0 = pbStack_c0;
  pbStack_c8 = (byte *)0x0;
  pbStack_c0 = (byte *)0x0;
  plStack_2c8 = plVar10;
  plStack_2c0 = plVar11;
  plStack_2a8 = (long *)0x0;
  plStack_2a0 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1b8 = &UNK_0f2ea1a8;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar9 = uStack_238;
  if (ppbStack_208 == (byte **)0x0) {
    puVar9[6] = 0;
  }
  else if (ppbStack_208 == &pbStack_228) {
    puVar9[6] = puVar9 + 2;
    (**(code **)(*ppbStack_208 + 0x18))();
  }
  else {
    puVar9[6] = ppbStack_208;
    ppbStack_208 = (byte **)0x0;
  }
  puVar9[8] = pbStack_1f8;
  puVar9[9] = pbStack_1f0;
  pbStack_1f8 = (byte *)0x0;
  pbStack_1f0 = (byte *)0x0;
  puStack_1b0 = puVar9;
  func_0x0488fb40(&plStack_2b8,pbVar6,&puStack_138,&plStack_2c8,0,&puStack_1b8);
  if (puStack_1b8 != (undefined *)0x0) {
    (**(code **)(puStack_1b8 + 8))(&puStack_1b8);
  }
  plVar10 = plStack_2c0;
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_2c0 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_268 = plStack_2b8;
  plStack_260 = plStack_2b0;
  if (plStack_2b0 != (long *)0x0) {
    LOCK();
    plStack_2b0[1] = plStack_2b0[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(pbVar6 + 0x80);
  if (iVar5 != 1) {
    if (iVar5 == 3) {
      *(undefined4 *)(plStack_2b8 + 6) = 0;
    }
    else if (iVar5 == 2) {
      (**(code **)(*plStack_2b8 + 0x10))();
      goto LAB_0b93121b;
    }
    plStack_298 = plStack_2b8;
    plStack_290 = plStack_2b0;
    if (plStack_2b0 != (long *)0x0) {
      LOCK();
      plStack_2b0[1] = plStack_2b0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*(long *)pbVar6 + 0x28))(pbVar6,&plStack_298,0);
    plVar10 = plStack_290;
    if (plStack_290 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_290 + 1;
      lVar8 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_290 + 0x10))(plStack_290);
        func_0x0412c2d0(plVar10);
      }
    }
  }
LAB_0b93121b:
  plVar10 = plStack_260;
  if (plStack_260 == (long *)0x0) {
LAB_0b931237:
    if (pbStack_1f0 == (byte *)0x0) goto LAB_0b93125b;
LAB_0b931249:
    pbVar6 = pbStack_1f0;
    plVar11 = plStack_2b0;
    LOCK();
    plVar10 = (long *)((long)pbStack_1f0 + 8);
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b93125b;
    (**(code **)(*(long *)pbStack_1f0 + 0x10))(pbStack_1f0);
    func_0x0412c2d0(pbVar6);
    if (ppbStack_208 != &pbStack_228) goto LAB_0b931270;
LAB_0b9312d4:
    lVar8 = 0x20;
LAB_0b9312d9:
    (**(code **)(*ppbStack_208 + lVar8))();
    plVar10 = plStack_2a0;
  }
  else {
    LOCK();
    plVar11 = plStack_260 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b931237;
    (**(code **)(*plStack_260 + 0x10))(plStack_260);
    func_0x0412c2d0(plVar10);
    if (pbStack_1f0 != (byte *)0x0) goto LAB_0b931249;
LAB_0b93125b:
    plVar11 = plStack_2b0;
    if (ppbStack_208 == &pbStack_228) goto LAB_0b9312d4;
LAB_0b931270:
    lVar8 = 0x28;
    plVar10 = plStack_2a0;
    if (ppbStack_208 != (byte **)0x0) goto LAB_0b9312d9;
  }
  plStack_2a0 = plVar10;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_250;
  if (plStack_250 == (long *)0x0) {
LAB_0b931328:
    if (pbStack_c0 == (byte *)0x0) goto LAB_0b931347;
LAB_0b931335:
    pbVar6 = pbStack_c0;
    LOCK();
    plVar10 = (long *)((long)pbStack_c0 + 8);
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b931347;
    (**(code **)(*(long *)pbStack_c0 + 0x10))(pbStack_c0);
    func_0x0412c2d0(pbVar6);
    if (ppbStack_d8 != &pbStack_f8) goto LAB_0b931354;
LAB_0b9313a3:
    lVar8 = 0x20;
  }
  else {
    LOCK();
    plVar2 = plStack_250 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_0b931328;
    (**(code **)(*plStack_250 + 0x10))(plStack_250);
    func_0x0412c2d0(plVar10);
    if (pbStack_c0 != (byte *)0x0) goto LAB_0b931335;
LAB_0b931347:
    if (ppbStack_d8 == &pbStack_f8) goto LAB_0b9313a3;
LAB_0b931354:
    lVar8 = 0x28;
    if (ppbStack_d8 == (byte **)0x0) goto joined_r0x0b931361;
  }
  (**(code **)(*ppbStack_d8 + lVar8))();
joined_r0x0b931361:
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar10 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_280 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_80 + 1;
    lVar8 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      func_0x0412c2d0(plVar10);
    }
  }
  pbVar12 = pbStack_170;
  pbVar6 = pbStack_48;
  if (pbStack_170 != (byte *)0x0) {
    LOCK();
    pbVar6 = pbStack_170 + 8;
    lVar8 = *(long *)pbVar6;
    *(long *)pbVar6 = *(long *)pbVar6 + -1;
    UNLOCK();
    pbVar6 = pbStack_48;
    if (lVar8 == 0) {
      (**(code **)(*(long *)pbStack_170 + 0x10))(pbStack_170);
      func_0x0412c2d0(pbVar12);
      pbVar6 = pbStack_48;
    }
  }
  pbStack_48 = pbVar6;
  if (pbVar6 != (byte *)0x0) {
    LOCK();
    pbVar12 = (byte *)((long)pbVar6 + 8);
    lVar8 = *(long *)pbVar12;
    *(long *)pbVar12 = *(long *)pbVar12 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)pbVar6 + 0x10))(pbVar6);
      func_0x0412c2d0(pbVar6);
    }
  }
  if ((uStack_168 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_158,CONCAT44(uStack_164,uStack_168) & 0xfffffffffffffffe);
  }
  if ((bStack_150 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_140,CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
  }
  if ((bStack_68 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_58,CONCAT71(uStack_67,bStack_68) & 0xfffffffffffffffe);
  }
  return;
}


