/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6924c0 (ELF vaddr 0xb5924c0)
 * Label: caller-of-callee
 * Body:  [[0b6924c0, 0b6925a4] [0b6925b0, 0b6925fa] [0b692600, 0b692d1b]]
 * Ghidra: FUN_0b6924c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b6924c0(void)

{
  long *plVar1;
  ulong **ppuVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  undefined8 **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  uint *puVar21;
  ulong uVar22;
  undefined *puVar23;
  bool bVar24;
  undefined1 uStack_189;
  ulong *puStack_188;
  byte bStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined2 uStack_176;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  byte bStack_120;
  undefined4 uStack_11f;
  undefined4 uStack_11b;
  undefined4 uStack_117;
  undefined4 uStack_113;
  undefined2 uStack_10f;
  undefined5 uStack_10d;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  uStack_10d = 0;
  uStack_108 = 0;
  bStack_120 = 0x24;
  uStack_11f = _DAT_012a3e14;
  uStack_11b = _UNK_012a3e18;
  uStack_117 = _UNK_012a3e1c;
  uStack_113 = _UNK_012a3e20;
  uStack_10f = 0x6e6f;
  uStack_128 = 0x601977ec4d12d34a;
  uStack_140 = 0x10000000e0001;
  puStack_138 = &UNK_01254d89;
  uStack_100 = 0;
  puStack_130 = &UNK_01254d89;
  uStack_148 = 0;
  func_0x0412d680(0xf6b4d60);
  if ((DAT_0f6b4d58 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6b4d58), iVar9 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    FUN_0410844d(&DAT_0f6b4d58);
  }
  uVar15 = uStack_128;
  if (_DAT_0f6b4d48 != (undefined *)0x0) {
    bVar24 = (bStack_120 & 1) != 0;
    puVar16 = &uStack_11f;
    if (bVar24) {
      puVar16 = (undefined4 *)CONCAT53(uStack_10d,CONCAT21(uStack_10f,uStack_113._3_1_));
    }
    uVar22 = (ulong)(bStack_120 >> 1);
    if (bVar24) {
      uVar22 = CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,uStack_11b._3_1_));
    }
    puVar23 = &DAT_0f6b4d48;
    puVar19 = _DAT_0f6b4d48;
    do {
      uVar14 = *(ulong *)(puVar19 + 0x20);
      bVar8 = (uVar14 >= uVar15 && uVar14 != uVar15) - (uVar14 < uVar15);
      if (uVar14 == uVar15) {
        if ((puVar19[0x28] & 1) == 0) {
          uVar14 = (ulong)((byte)puVar19[0x28] >> 1);
          puVar17 = puVar19 + 0x29;
        }
        else {
          uVar14 = *(ulong *)(puVar19 + 0x30);
          puVar17 = *(undefined **)(puVar19 + 0x38);
        }
        uVar13 = uVar14;
        if (uVar22 < uVar14) {
          uVar13 = uVar22;
        }
        iVar9 = func_0x0eee2ff0(puVar17,puVar16,uVar13);
        if (iVar9 == 0) {
          iVar9 = (int)(char)((uVar22 < uVar14) - (uVar14 < uVar22));
        }
        bVar8 = (0 < iVar9) - (iVar9 < 0);
      }
      if (-1 < (char)bVar8) {
        puVar23 = puVar19;
      }
      puVar19 = *(undefined **)(puVar19 + (bVar8 >> 4 & 8));
    } while (puVar19 != (undefined *)0x0);
    if (puVar23 != &DAT_0f6b4d48) {
      if (uVar15 == *(ulong *)(puVar23 + 0x20)) {
        bVar24 = (puVar23[0x28] & 1) != 0;
        puVar19 = puVar23 + 0x29;
        if (bVar24) {
          puVar19 = *(undefined **)(puVar23 + 0x38);
        }
        uVar15 = (ulong)((byte)puVar23[0x28] >> 1);
        if (bVar24) {
          uVar15 = *(ulong *)(puVar23 + 0x30);
        }
        uVar14 = uVar22;
        if (uVar15 < uVar22) {
          uVar14 = uVar15;
        }
        iVar9 = func_0x0eee2ff0(puVar16,puVar19,uVar14);
        bVar24 = uVar22 < uVar15;
        if (iVar9 != 0) {
          bVar24 = iVar9 < 0;
        }
        if (!bVar24) goto LAB_0b69268a;
      }
      else if (*(ulong *)(puVar23 + 0x20) <= uVar15) goto LAB_0b69268a;
    }
  }
  puVar23 = &DAT_0f6b4d48;
LAB_0b69268a:
  if ((DAT_0f6b4d58 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6b4d58), iVar9 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    FUN_0410844d(&DAT_0f6b4d58);
  }
  if ((puVar23 != &DAT_0f6b4d48) &&
     (puVar19 = *(undefined **)(puVar23 + 0x50), puVar19 != (undefined *)0x0)) {
    puVar17 = puVar23 + 0x50;
    do {
      bVar8 = func_0x04fa7a10(puVar19 + 0x20,&uStack_140);
      if (bVar8 == 0) {
        puVar17 = puVar19;
      }
      puVar19 = *(undefined **)(puVar19 + (ulong)bVar8 * 8);
    } while (puVar19 != (undefined *)0x0);
    if (puVar17 != puVar23 + 0x50) {
      func_0x04fa7a10(&uStack_140,puVar17 + 0x20);
    }
  }
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f2cd060;
  puStack_188 = (ulong *)0x0;
  bStack_180 = 0;
  uStack_17f = 0;
  puVar10[4] = &UNK_0f2ccd78;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  *(undefined1 *)(puVar10 + 0xd) = 0;
  func_0x04aa75f0(puVar10 + 0xe,&uStack_189,&UNK_01254d89);
  *(undefined1 *)(puVar10 + 0x10) = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0xffffffff;
  puVar10[0x26] = 0;
  puVar10[0x27] = 0;
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1f] = 0;
  puVar10[4] = &UNK_0f2cd0b0;
  ppuVar2 = (ulong **)(puVar10 + 0x2e);
  puVar10[0x2e] = 0;
  puVar10[0x2f] = 0;
  *(undefined1 *)(puVar10 + 0x36) = 0;
  if (ppuVar2 != &puStack_188) {
    if (puStack_188 == (ulong *)0x0) {
      puVar11 = (ulong *)0x0;
    }
    else {
      (*(code *)*puStack_188)(&puStack_188,ppuVar2);
      puVar11 = puStack_188;
    }
    puStack_188 = (ulong *)0x0;
    *ppuVar2 = puVar11;
  }
  if (puVar10 != (undefined8 *)&DAT_0f552080) {
    puVar21 = (uint *)(puVar10 + 0x12);
    if ((*puVar21 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        puVar10[0x14] = _DAT_0f552120;
        uVar6 = uRam000000000f55211c;
        uVar5 = _DAT_0f552118;
        uVar4 = uRam000000000f552114;
        *puVar21 = _DAT_0f552110;
        *(undefined4 *)((long)puVar10 + 0x94) = uVar4;
        *(undefined4 *)(puVar10 + 0x13) = uVar5;
        *(undefined4 *)((long)puVar10 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar21,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar24 = (_DAT_0f552110 & 1) != 0;
      uVar20 = 0xf552111;
      if (bVar24) {
        uVar20 = _DAT_0f552120;
      }
      uVar15 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar24) {
        uVar15 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar21,uVar20,uVar15);
    }
  }
  puVar10[0x11] = _DAT_0f552108;
  puVar10[0x15] = 0;
  if (puStack_188 != (ulong *)0x0) {
    (*(code *)puStack_188[1])(&puStack_188);
  }
  _DAT_0f6b5110 = puVar10 + 4;
  _DAT_0f6b5118 = puVar10;
  if ((DAT_0f6b4d58 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6b4d58), iVar9 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    FUN_0410844d(&DAT_0f6b4d58);
  }
  puStack_188 = &uStack_128;
  lVar12 = func_0x0b5d53e0(&DAT_0f6b4d40,puStack_188,&UNK_01563a4f,&puStack_188,&uStack_189);
  puStack_188 = &uStack_140;
  lVar12 = func_0x0b5d5780(lVar12 + 0x48,puStack_188,&UNK_01563a4f,&puStack_188,&uStack_189);
  uVar4 = _DAT_0f6b5110;
  uVar5 = DAT_0f6b5110_4;
  uVar6 = _DAT_0f6b5118;
  uVar7 = DAT_0f6b5118_4;
  if (_DAT_0f6b5118 != (undefined8 *)0x0) {
    LOCK();
    _DAT_0f6b5118[1] = _DAT_0f6b5118[1] + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(lVar12 + 0x40);
  *(undefined4 *)(lVar12 + 0x38) = uVar4;
  *(undefined4 *)(lVar12 + 0x3c) = uVar5;
  *(undefined4 *)(lVar12 + 0x40) = uVar6;
  *(undefined4 *)(lVar12 + 0x44) = uVar7;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  pthread_mutex_unlock(0xf6b4d60);
  if (((ulong)puStack_130 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_130 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_130 = (undefined *)0x0;
  if (((ulong)puStack_138 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_138 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_138 = (undefined *)0x0;
  if ((uStack_148 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_148 & 0xff00ffffffffffff) - 8);
  }
  uStack_148 = 0;
  if ((uStack_100 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8);
  }
  if ((bStack_120 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_10d,CONCAT21(uStack_10f,uStack_113._3_1_)),
                    CONCAT35((undefined3)uStack_11b,CONCAT41(uStack_11f,bStack_120)) &
                    0xfffffffffffffffe);
  }
  uStack_176 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  bStack_180 = 0x12;
  uStack_17f = 0x746172656d756e;
  uStack_178 = 0x6f;
  uStack_177 = 0x72;
  puStack_188 = (ulong *)0x21dac947437b2e5e;
  uStack_b0 = 0;
  puStack_b8 = &UNK_0f2cd3d0;
  lVar12 = func_0x0b69cfb0(_DAT_0f6b5110,&puStack_188,&puStack_b8);
  *(undefined4 *)(lVar12 + 0x150) = 0;
  if (puStack_b8 != (undefined *)0x0) {
    (**(code **)(puStack_b8 + 8))(&puStack_b8);
  }
  if ((bStack_180 & 1) != 0) {
    func_0x0412a280(uStack_170,CONCAT71(uStack_17f,bStack_180) & 0xfffffffffffffffe);
  }
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  bStack_180 = 0x16;
  uStack_17f = 0x6e696d6f6e6564;
  uStack_178 = 0x61;
  uStack_177 = 0x74;
  uStack_176 = 0x726f;
  puStack_188 = (ulong *)0x28d1f426771e2c6f;
  uStack_f0 = 0;
  puStack_f8 = &UNK_0f2cd3e8;
  lVar12 = func_0x0b69cfb0(_DAT_0f6b5110,&puStack_188,&puStack_f8);
  *(undefined4 *)(lVar12 + 0x150) = 1;
  if (puStack_f8 != (undefined *)0x0) {
    (**(code **)(puStack_f8 + 8))(&puStack_f8);
  }
  if ((bStack_180 & 1) != 0) {
    func_0x0412a280(uStack_170,CONCAT71(uStack_17f,bStack_180) & 0xfffffffffffffffe);
  }
  uStack_70 = 0;
  puStack_78 = (undefined8 *)&UNK_0f2cd400;
  ppuVar18 = (undefined8 **)(_DAT_0f6b5110 + 0x1a);
  if (ppuVar18 != &puStack_78) {
    if ((*ppuVar18 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar18)[1])(ppuVar18), puStack_78 != (undefined8 *)0x0)) {
      (*(code *)*puStack_78)(&puStack_78,ppuVar18);
    }
    else {
      puStack_78 = (undefined8 *)0x0;
    }
    *ppuVar18 = puStack_78;
  }
  return;
}



/* ---- referenced strings ----
 * 0x12a3e14  chance_information
 */
