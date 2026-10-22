/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce4b270 (ELF vaddr 0xcd4b270)
 * Label: caller-of-callee
 * Body:  [[0ce4b270, 0ce4b352] [0ce4b360, 0ce4b3a8] [0ce4b3b0, 0ce4b9e5] [0ce4ba88, 0ce4baf7]]
 * Ghidra: FUN_0ce4b270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ce4b270(long param_1)

{
  long *plVar1;
  ulong **ppuVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint *puVar22;
  undefined *puVar23;
  ulong uVar24;
  bool bVar25;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_68;
  long lStack_60;
  undefined **ppuStack_48;
  
  uStack_e8 = 0;
  lStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  func_0x0412f5e0(&uStack_f0,&UNK_011ffd33,0x17);
  uStack_f8 = 0xabf379e6496caa17;
  func_0x05d54750(&uStack_c0,&UNK_0f4086d8);
  puStack_68 = &UNK_0f40c798;
  ppuStack_48 = &puStack_68;
  lStack_60 = param_1;
  func_0x0412d680(0xf6b4d60);
  lStack_c8 = param_1;
  if ((DAT_0f6b4d58 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b4d58), iVar11 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    func_0x0410844d(&DAT_0f6b4d58);
  }
  uVar19 = uStack_f8;
  if (_DAT_0f6b4d48 == (undefined *)0x0) {
LAB_0ce4b435:
    puVar23 = &DAT_0f6b4d48;
  }
  else {
    uVar24 = uStack_f0 >> 1 & 0x7f;
    lVar15 = (long)&uStack_f0 + 1;
    if ((uStack_f0 & 1) != 0) {
      uVar24 = uStack_e8;
      lVar15 = lStack_e0;
    }
    puVar23 = &DAT_0f6b4d48;
    puVar20 = _DAT_0f6b4d48;
    do {
      uVar18 = *(ulong *)(puVar20 + 0x20);
      bVar9 = (uVar18 >= uVar19 && uVar18 != uVar19) - (uVar18 < uVar19);
      if (uVar18 == uVar19) {
        if ((puVar20[0x28] & 1) == 0) {
          uVar18 = (ulong)((byte)puVar20[0x28] >> 1);
          puVar21 = puVar20 + 0x29;
        }
        else {
          uVar18 = *(ulong *)(puVar20 + 0x30);
          puVar21 = *(undefined **)(puVar20 + 0x38);
        }
        uVar17 = uVar18;
        if (uVar24 < uVar18) {
          uVar17 = uVar24;
        }
        iVar11 = func_0x0eee2ff0(puVar21,lVar15,uVar17);
        if (iVar11 == 0) {
          iVar11 = (int)(char)((uVar24 < uVar18) - (uVar18 < uVar24));
        }
        bVar9 = (0 < iVar11) - (iVar11 < 0);
      }
      if (-1 < (char)bVar9) {
        puVar23 = puVar20;
      }
      puVar20 = *(undefined **)(puVar20 + (bVar9 >> 4 & 8));
    } while (puVar20 != (undefined *)0x0);
    if (puVar23 == &DAT_0f6b4d48) goto LAB_0ce4b435;
    if (uVar19 == *(ulong *)(puVar23 + 0x20)) {
      bVar25 = (puVar23[0x28] & 1) != 0;
      puVar20 = puVar23 + 0x29;
      if (bVar25) {
        puVar20 = *(undefined **)(puVar23 + 0x38);
      }
      uVar19 = (ulong)((byte)puVar23[0x28] >> 1);
      if (bVar25) {
        uVar19 = *(ulong *)(puVar23 + 0x30);
      }
      uVar18 = uVar24;
      if (uVar19 < uVar24) {
        uVar18 = uVar19;
      }
      iVar11 = func_0x0eee2ff0(lVar15,puVar20,uVar18);
      bVar25 = uVar24 < uVar19;
      if (iVar11 != 0) {
        bVar25 = iVar11 < 0;
      }
      if (bVar25) goto LAB_0ce4b435;
    }
    else if (uVar19 < *(ulong *)(puVar23 + 0x20)) goto LAB_0ce4b435;
  }
  if ((DAT_0f6b4d58 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b4d58), iVar11 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    func_0x0410844d(&DAT_0f6b4d58);
  }
  if ((puVar23 == &DAT_0f6b4d48) ||
     (puVar20 = *(undefined **)(puVar23 + 0x50), puVar20 == (undefined *)0x0)) {
LAB_0ce4b4aa:
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (puVar12 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x1c0,0);
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0f40c650;
    puStack_a8 = (ulong *)0x0;
    uStack_a0 = 0;
    puVar12[4] = &UNK_0f2ccd78;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    *(undefined1 *)(puVar12 + 0xd) = 0;
    func_0x04aa75f0(puVar12 + 0xe,&uStack_109,&UNK_01254d89);
    *(undefined1 *)(puVar12 + 0x10) = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[0x17] = 0xffffffff;
    puVar12[0x26] = 0;
    puVar12[0x27] = 0;
    puVar12[0x18] = 0;
    puVar12[0x19] = 0;
    puVar12[0x1a] = 0;
    puVar12[0x1b] = 0;
    puVar12[0x1c] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x1e] = 0;
    puVar12[0x1f] = 0;
    puVar12[4] = &UNK_0f40c6a0;
    ppuVar2 = (ulong **)(puVar12 + 0x2e);
    puVar12[0x2e] = 0;
    puVar12[0x2f] = 0;
    *(undefined1 *)(puVar12 + 0x36) = 0;
    if (ppuVar2 != &puStack_a8) {
      if (puStack_a8 == (ulong *)0x0) {
        puVar13 = (ulong *)0x0;
      }
      else {
        (*(code *)*puStack_a8)(&puStack_a8,ppuVar2);
        puVar13 = puStack_a8;
      }
      puStack_a8 = (ulong *)0x0;
      *ppuVar2 = puVar13;
    }
    if (puVar12 != (undefined8 *)&DAT_0f552080) {
      puVar22 = (uint *)(puVar12 + 0x12);
      if ((*puVar22 & 1) == 0) {
        if ((_DAT_0f552110 & 1) == 0) {
          puVar12[0x14] = _DAT_0f552120;
          uVar7 = uRam000000000f55211c;
          uVar6 = _DAT_0f552118;
          uVar5 = uRam000000000f552114;
          *puVar22 = _DAT_0f552110;
          *(undefined4 *)((long)puVar12 + 0x94) = uVar5;
          *(undefined4 *)(puVar12 + 0x13) = uVar6;
          *(undefined4 *)((long)puVar12 + 0x9c) = uVar7;
        }
        else {
          FUN_04885070(puVar22,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
        }
      }
      else {
        bVar25 = (_DAT_0f552110 & 1) != 0;
        uVar16 = 0xf552111;
        if (bVar25) {
          uVar16 = _DAT_0f552120;
        }
        uVar19 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
        if (bVar25) {
          uVar19 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
        }
        func_0x04885120(puVar22,uVar16,uVar19);
      }
    }
    puVar12[0x11] = _DAT_0f552108;
    puVar12[0x15] = 0;
    if (puStack_a8 != (ulong *)0x0) {
      (*(code *)puStack_a8[1])(&puStack_a8);
    }
    uStack_108 = puVar12 + 4;
    uStack_100 = puVar12;
    if ((DAT_0f6b4d58 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b4d58), iVar11 != 0)) {
      _DAT_0f6b4d48 = (undefined *)0x0;
      _DAT_0f6b4d50 = 0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    puStack_a8 = &uStack_f8;
    lVar14 = func_0x0b5d53e0(&DAT_0f6b4d40,puStack_a8,&UNK_01563a4f,&puStack_a8,&uStack_109);
    lVar15 = lStack_c8;
    puStack_a8 = &uStack_c0;
    lVar14 = func_0x0b5d5780(lVar14 + 0x48,puStack_a8,&UNK_01563a4f,&puStack_a8,&uStack_109);
    if (uStack_100 != (undefined8 *)0x0) {
      LOCK();
      uStack_100[1] = uStack_100[1] + 1;
      UNLOCK();
    }
    plVar3 = *(long **)(lVar14 + 0x40);
    *(undefined4 *)(lVar14 + 0x38) = (undefined4)uStack_108;
    *(undefined4 *)(lVar14 + 0x3c) = uStack_108._4_4_;
    *(undefined4 *)(lVar14 + 0x40) = (undefined4)uStack_100;
    *(undefined4 *)(lVar14 + 0x44) = uStack_100._4_4_;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    if (ppuStack_48 == (undefined **)0x0) {
      uVar16 = func_0x04891200();
      func_0x0412d6b0(0xf6b4d60);
      lVar15 = 0x20;
      if ((ppuStack_48 == &puStack_68) || (lVar15 = 0x28, ppuStack_48 != (undefined **)0x0)) {
        (**(code **)(*ppuStack_48 + lVar15))();
      }
      func_0x0ee386e0(&uStack_b0);
      func_0x0ee386e0(&uStack_b8);
      if ((uStack_f0 & 1) != 0) {
        func_0x0412a280(lStack_e0,uStack_f0 & 0xfffffffffffffffe);
      }
      func_0x0eee2d70(uVar16);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*ppuStack_48 + 0x30))(ppuStack_48,&uStack_108);
  }
  else {
    puVar21 = puVar23 + 0x50;
    do {
      bVar9 = func_0x04fa7a10(puVar20 + 0x20,&uStack_c0);
      if (bVar9 == 0) {
        puVar21 = puVar20;
      }
      puVar20 = *(undefined **)(puVar20 + (ulong)bVar9 * 8);
    } while (puVar20 != (undefined *)0x0);
    if ((puVar21 == puVar23 + 0x50) ||
       (cVar10 = func_0x04fa7a10(&uStack_c0,puVar21 + 0x20), cVar10 != '\0')) goto LAB_0ce4b4aa;
    uStack_108 = *(undefined8 **)(puVar21 + 0x38);
    uStack_100 = *(long **)(puVar21 + 0x40);
    lVar15 = lStack_c8;
    if (*(long *)(puVar21 + 0x40) != 0) {
      LOCK();
      plVar3 = (long *)(*(long *)(puVar21 + 0x40) + 8);
      *plVar3 = *plVar3 + 1;
      UNLOCK();
    }
  }
  func_0x0412d6b0(0xf6b4d60);
  uVar5 = (undefined4)uStack_108;
  uVar6 = uStack_108._4_4_;
  uVar7 = (undefined4)uStack_100;
  uVar8 = uStack_100._4_4_;
  uStack_108 = (undefined8 *)0x0;
  uStack_100 = (long *)0x0;
  plVar3 = *(long **)(lVar15 + 0x38);
  *(undefined4 *)(lVar15 + 0x30) = uVar5;
  *(undefined4 *)(lVar15 + 0x34) = uVar6;
  *(undefined4 *)(lVar15 + 0x38) = uVar7;
  *(undefined4 *)(lVar15 + 0x3c) = uVar8;
  if (plVar3 == (long *)0x0) {
LAB_0ce4b793:
    if (ppuStack_48 == &puStack_68) goto LAB_0ce4b803;
LAB_0ce4b7a8:
    lVar15 = 0x28;
    if (ppuStack_48 == (undefined **)0x0) goto joined_r0x0ce4b7bc;
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 != 0) goto LAB_0ce4b793;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    func_0x0412c2d0(plVar3);
    plVar3 = uStack_100;
    if (uStack_100 == (long *)0x0) goto LAB_0ce4b793;
    LOCK();
    plVar1 = uStack_100 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 != 0) goto LAB_0ce4b793;
    (**(code **)(*uStack_100 + 0x10))(uStack_100);
    func_0x0412c2d0(plVar3);
    if (ppuStack_48 != &puStack_68) goto LAB_0ce4b7a8;
LAB_0ce4b803:
    lVar15 = 0x20;
  }
  (**(code **)(*ppuStack_48 + lVar15))();
joined_r0x0ce4b7bc:
  if ((uStack_b0 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b0 & 0xff00ffffffffffff) - 8);
  }
  uStack_b0 = 0;
  if ((uStack_b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_f0 & 1) != 0) {
    func_0x0412a280(lStack_e0,uStack_f0 & 0xfffffffffffffffe);
  }
  return;
}


