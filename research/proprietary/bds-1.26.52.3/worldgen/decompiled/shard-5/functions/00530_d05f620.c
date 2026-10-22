/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd15f620 (ELF vaddr 0xd05f620)
 * Label: caller-of-callee
 * Body:  [[0d15f620, 0d15f695] [0d15f6a0, 0d15f6ed] [0d15f6f0, 0d15fbc9] [0d15fc72, 0d15fc89]]
 * Ghidra: FUN_0d15f620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d15f620(undefined8 *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ulong **ppuVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong *puVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  uint *puVar24;
  ulong uVar25;
  undefined *puVar26;
  bool bVar27;
  undefined1 uStack_99;
  undefined8 *puStack_98;
  ulong *puStack_90;
  long lStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  
  puStack_98 = param_1;
  puStack_90 = param_2;
  lStack_88 = param_4;
  puStack_80 = param_3;
  func_0x0412d680(0xf6b4d60);
  if ((DAT_0f6b4d58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6b4d58), iVar12 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    FUN_0410844d(&DAT_0f6b4d58);
  }
  if (_DAT_0f6b4d48 == (undefined *)0x0) {
LAB_0d15f772:
    puVar26 = &DAT_0f6b4d48;
  }
  else {
    uVar20 = *puStack_90;
    bVar27 = ((byte)puStack_90[1] & 1) != 0;
    uVar25 = (long)puStack_90 + 9;
    if (bVar27) {
      uVar25 = puStack_90[3];
    }
    uVar22 = (ulong)(byte)((byte)puStack_90[1] >> 1);
    if (bVar27) {
      uVar22 = puStack_90[2];
    }
    puVar26 = &DAT_0f6b4d48;
    puVar23 = _DAT_0f6b4d48;
    do {
      uVar19 = *(ulong *)(puVar23 + 0x20);
      bVar10 = (uVar19 >= uVar20 && uVar19 != uVar20) - (uVar19 < uVar20);
      if (uVar19 == uVar20) {
        if ((puVar23[0x28] & 1) == 0) {
          uVar19 = (ulong)((byte)puVar23[0x28] >> 1);
          puVar21 = puVar23 + 0x29;
        }
        else {
          uVar19 = *(ulong *)(puVar23 + 0x30);
          puVar21 = *(undefined **)(puVar23 + 0x38);
        }
        uVar18 = uVar19;
        if (uVar22 < uVar19) {
          uVar18 = uVar22;
        }
        iVar12 = func_0x0eee2ff0(puVar21,uVar25,uVar18);
        if (iVar12 == 0) {
          iVar12 = (int)(char)((uVar22 < uVar19) - (uVar19 < uVar22));
        }
        bVar10 = (0 < iVar12) - (iVar12 < 0);
      }
      if (-1 < (char)bVar10) {
        puVar26 = puVar23;
      }
      puVar23 = *(undefined **)(puVar23 + (bVar10 >> 4 & 8));
    } while (puVar23 != (undefined *)0x0);
    if (puVar26 == &DAT_0f6b4d48) goto LAB_0d15f772;
    if (uVar20 == *(ulong *)(puVar26 + 0x20)) {
      bVar27 = (puVar26[0x28] & 1) != 0;
      puVar23 = puVar26 + 0x29;
      if (bVar27) {
        puVar23 = *(undefined **)(puVar26 + 0x38);
      }
      uVar20 = (ulong)((byte)puVar26[0x28] >> 1);
      if (bVar27) {
        uVar20 = *(ulong *)(puVar26 + 0x30);
      }
      uVar19 = uVar22;
      if (uVar20 < uVar22) {
        uVar19 = uVar20;
      }
      iVar12 = func_0x0eee2ff0(uVar25,puVar23,uVar19);
      bVar27 = uVar22 < uVar20;
      if (iVar12 != 0) {
        bVar27 = iVar12 < 0;
      }
      if (bVar27) goto LAB_0d15f772;
    }
    else if (uVar20 < *(ulong *)(puVar26 + 0x20)) goto LAB_0d15f772;
  }
  if ((DAT_0f6b4d58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6b4d58), iVar12 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    FUN_0410844d(&DAT_0f6b4d58);
  }
  puVar9 = puStack_80;
  if ((puVar26 != &DAT_0f6b4d48) &&
     (puVar23 = *(undefined **)(puVar26 + 0x50), puVar23 != (undefined *)0x0)) {
    puVar21 = puVar26 + 0x50;
    do {
      bVar10 = func_0x04fa7a10(puVar23 + 0x20,puVar9);
      if (bVar10 == 0) {
        puVar21 = puVar23;
      }
      puVar23 = *(undefined **)(puVar23 + (ulong)bVar10 * 8);
    } while (puVar23 != (undefined *)0x0);
    if ((puVar21 != puVar26 + 0x50) &&
       (cVar11 = func_0x04fa7a10(puVar9,puVar21 + 0x20), cVar11 == '\0')) {
      lVar15 = *(long *)(puVar21 + 0x40);
      uVar5 = *(undefined4 *)(puVar21 + 0x3c);
      uVar6 = *(undefined4 *)(puVar21 + 0x40);
      uVar7 = *(undefined4 *)(puVar21 + 0x44);
      *(undefined4 *)puStack_98 = *(undefined4 *)(puVar21 + 0x38);
      *(undefined4 *)((long)puStack_98 + 4) = uVar5;
      *(undefined4 *)(puStack_98 + 1) = uVar6;
      *(undefined4 *)((long)puStack_98 + 0xc) = uVar7;
      puVar17 = puStack_98;
      if (lVar15 != 0) {
        LOCK();
        plVar1 = (long *)(lVar15 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      goto LAB_0d15fa77;
    }
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f456130;
  puStack_78 = (ulong *)0x0;
  uStack_70 = 0;
  puVar13[4] = &UNK_0f2ccd78;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  *(undefined1 *)(puVar13 + 0xd) = 0;
  func_0x04aa75f0(puVar13 + 0xe,&uStack_99,&UNK_01254d89);
  *(undefined1 *)(puVar13 + 0x10) = 0;
  puVar13[0x11] = 0;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x14] = 0;
  puVar13[0x15] = 0;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0xffffffff;
  puVar13[0x26] = 0;
  puVar13[0x27] = 0;
  puVar13[0x18] = 0;
  puVar13[0x19] = 0;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  puVar13[0x1c] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  puVar13[4] = &UNK_0f456180;
  ppuVar3 = (ulong **)(puVar13 + 0x2e);
  puVar13[0x2e] = 0;
  puVar13[0x2f] = 0;
  *(undefined1 *)(puVar13 + 0x36) = 0;
  if (ppuVar3 != &puStack_78) {
    if (puStack_78 == (ulong *)0x0) {
      puVar14 = (ulong *)0x0;
    }
    else {
      (*(code *)*puStack_78)(&puStack_78,ppuVar3);
      puVar14 = puStack_78;
    }
    puStack_78 = (ulong *)0x0;
    *ppuVar3 = puVar14;
  }
  puVar17 = puStack_98;
  if (puVar13 != (undefined8 *)&DAT_0f552080) {
    puVar24 = (uint *)(puVar13 + 0x12);
    if ((*puVar24 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        puVar13[0x14] = _DAT_0f552120;
        uVar7 = uRam000000000f55211c;
        uVar6 = _DAT_0f552118;
        uVar5 = uRam000000000f552114;
        *puVar24 = _DAT_0f552110;
        *(undefined4 *)((long)puVar13 + 0x94) = uVar5;
        *(undefined4 *)(puVar13 + 0x13) = uVar6;
        *(undefined4 *)((long)puVar13 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puVar24,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar27 = (_DAT_0f552110 & 1) != 0;
      uVar16 = 0xf552111;
      if (bVar27) {
        uVar16 = _DAT_0f552120;
      }
      uVar20 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar27) {
        uVar20 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar24,uVar16,uVar20);
    }
  }
  puVar13[0x11] = _DAT_0f552108;
  puVar13[0x15] = 0;
  if (puStack_78 != (ulong *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  *puVar17 = puVar13 + 4;
  puVar17[1] = puVar13;
  if ((DAT_0f6b4d58 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6b4d58), iVar12 != 0)) {
    _DAT_0f6b4d48 = (undefined *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = &DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    FUN_0410844d(&DAT_0f6b4d58);
  }
  puStack_78 = puStack_90;
  lVar15 = func_0x0b5d53e0(&DAT_0f6b4d40,puStack_90,&UNK_01563a4f,&puStack_78,&uStack_99);
  puStack_78 = puVar9;
  lVar15 = func_0x0b5d5780(lVar15 + 0x48,puVar9,&UNK_01563a4f,&puStack_78,&uStack_99);
  uVar5 = *(undefined4 *)puVar17;
  uVar6 = *(undefined4 *)((long)puVar17 + 4);
  uVar7 = *(undefined4 *)(puVar17 + 1);
  uVar8 = *(undefined4 *)((long)puVar17 + 0xc);
  if (puVar17[1] != 0) {
    LOCK();
    plVar1 = (long *)(puVar17[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = *(long **)(lVar15 + 0x40);
  *(undefined4 *)(lVar15 + 0x38) = uVar5;
  *(undefined4 *)(lVar15 + 0x3c) = uVar6;
  *(undefined4 *)(lVar15 + 0x40) = uVar7;
  *(undefined4 *)(lVar15 + 0x44) = uVar8;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar15 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  plVar1 = *(long **)(lStack_88 + 0x20);
  if (plVar1 == (long *)0x0) {
    uVar16 = func_0x04891200();
    pthread_mutex_unlock(0xf6b4d60);
    func_0x0eee2d70(uVar16);
    pcVar4 = (code *)swi(3);
    puVar17 = (undefined8 *)(*pcVar4)();
    return puVar17;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,puVar17);
LAB_0d15fa77:
  pthread_mutex_unlock(0xf6b4d60);
  return puVar17;
}


