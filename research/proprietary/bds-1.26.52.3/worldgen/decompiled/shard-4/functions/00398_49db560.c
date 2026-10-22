/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4adb560 (ELF vaddr 0x49db560)
 * Label: caller-of-callee
 * Body:  [[04adb560, 04adcb1e] [04adcb20, 04add10d] [04add110, 04add14c] [04add150, 04addc7f] [04ade267, 04ade41c] [04ade63e, 04ade67c]]
 * Ghidra: FUN_04adb560
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04adb560(ulong *param_1,undefined8 param_2,long *param_3)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 **ppuVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  long *plVar23;
  undefined8 **ppuVar24;
  long *plVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined8 uVar28;
  long *plVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long *plVar33;
  uint *puVar34;
  undefined *puVar35;
  undefined8 **ppuVar36;
  undefined8 **ppuVar37;
  undefined8 **ppuVar38;
  undefined8 **ppuVar39;
  bool bVar40;
  undefined8 uStack_388;
  undefined8 *puStack_368;
  byte bStack_360;
  undefined5 uStack_35f;
  undefined2 uStack_35a;
  undefined1 uStack_358;
  undefined5 uStack_357;
  undefined2 uStack_352;
  undefined8 *puStack_350;
  undefined8 **ppuStack_348;
  undefined1 uStack_319;
  undefined8 *puStack_318;
  byte bStack_310;
  undefined7 uStack_30f;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined8 **ppuStack_2f8;
  long *plStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 **ppuStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 **ppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *apuStack_1a8 [4];
  undefined8 **ppuStack_188;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  puStack_1f8 = (undefined *)0x0;
  if ((*param_1 & 1) == 0) {
    pbStack_1e0 = (byte *)param_1[2];
    uStack_1f0 = *param_1;
    uStack_1e8 = (uint)param_1[1];
    uStack_1e4 = *(uint *)((long)param_1 + 0xc);
    uStack_1d8 = 0;
    uVar18 = (ulong)(uint)*param_1 & 0xff;
    if (((uint)*param_1 & 1) == 0) goto LAB_04adb5b9;
LAB_04adb5ec:
    if (CONCAT44(uStack_1e4,uStack_1e8) != 0) goto LAB_04adb5fd;
LAB_04adb711:
    uStack_1d8 = 0;
    puStack_1f8 = (undefined *)0x0;
    plVar19 = (long *)param_3[4];
joined_r0x04adb6f3:
    if (plVar19 == (long *)0x0) goto LAB_04adb725;
LAB_04adb6f5:
    if (plVar19 == param_3) {
      ppuStack_2f8 = &puStack_318;
      (**(code **)(*plVar19 + 0x18))();
    }
    else {
      ppuStack_2f8 = (undefined8 **)(**(code **)(*plVar19 + 0x10))();
    }
    ppuStack_188 = ppuStack_2f8;
    uStack_1b0 = 0;
    puStack_1b8 = (undefined8 *)&UNK_0ef623a0;
    if (ppuStack_2f8 == (undefined8 **)0x0) {
      ppuStack_188 = (undefined8 **)0x0;
    }
    else if (ppuStack_2f8 == &puStack_318) {
      ppuStack_188 = apuStack_1a8;
      (*(code *)(*ppuStack_2f8)[3])(ppuStack_2f8);
    }
    else {
      ppuStack_2f8 = (undefined8 **)0x0;
    }
  }
  else {
    func_0x0412e5e0(&uStack_1f0,param_1[2],param_1[1]);
    uStack_1d8 = 0;
    uVar18 = uStack_1f0 & 0xff;
    if ((uStack_1f0 & 1) != 0) goto LAB_04adb5ec;
LAB_04adb5b9:
    if (uVar18 >> 1 == 0) goto LAB_04adb711;
LAB_04adb5fd:
    uStack_1d8 = 0;
    if ((uVar18 & 1) == 0) {
      pbVar26 = (byte *)((long)&uStack_1f0 + 1);
      if (pbVar26 == (byte *)0x0) goto LAB_04adb76d;
LAB_04adb616:
      if (*pbVar26 == 0) goto LAB_04adb711;
      puVar35 = (undefined *)0xcbf29ce484222325;
      uVar18 = func_0x0eee2e90(pbVar26);
      if (uVar18 != 0) {
        uVar32 = (ulong)((uint)uVar18 & 7);
        if (7 < uVar18) {
          uVar18 = uVar18 & 0xfffffffffffffff8;
          do {
            puVar35 = (undefined *)
                      (((((((((long)puVar35 * 0x100000001b3 ^ (ulong)*pbVar26) * 0x100000001b3 ^
                            (ulong)pbVar26[1]) * 0x100000001b3 ^ (ulong)pbVar26[2]) * 0x100000001b3
                          ^ (ulong)pbVar26[3]) * 0x100000001b3 ^ (ulong)pbVar26[4]) * 0x100000001b3
                        ^ (ulong)pbVar26[5]) * 0x100000001b3 ^ (ulong)pbVar26[6]) * 0x100000001b3 ^
                      (ulong)pbVar26[7]);
            pbVar26 = pbVar26 + 8;
            uVar18 = uVar18 - 8;
          } while (uVar18 != 0);
        }
        if (uVar32 != 0) {
          uVar18 = 0;
          do {
            puVar35 = (undefined *)((long)puVar35 * 0x100000001b3 ^ (ulong)pbVar26[uVar18]);
            uVar18 = uVar18 + 1;
          } while (uVar32 != uVar18);
        }
      }
      plVar19 = (long *)param_3[4];
      puStack_1f8 = puVar35;
      goto joined_r0x04adb6f3;
    }
    pbVar26 = pbStack_1e0;
    if (pbStack_1e0 != (byte *)0x0) goto LAB_04adb616;
LAB_04adb76d:
    puStack_1f8 = (undefined *)0x0;
    plVar19 = (long *)param_3[4];
    if (plVar19 != (long *)0x0) goto LAB_04adb6f5;
LAB_04adb725:
    ppuStack_2f8 = (undefined8 **)0x0;
    uStack_1b0 = 0;
    puStack_1b8 = (undefined8 *)&UNK_0ef623a0;
    ppuStack_188 = (undefined8 **)0x0;
  }
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef621b8;
  puStack_368 = (undefined8 *)0x0;
  bStack_360 = 0;
  uStack_35f = 0;
  uStack_35a = 0;
  if (puStack_1b8 == (undefined8 *)0x0) {
    puStack_368 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_1b8)(&puStack_1b8,&puStack_368);
    puStack_368 = puStack_1b8;
  }
  puStack_1b8 = (undefined8 *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&puStack_138,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar25 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0ef62208;
  ppuVar24 = (undefined8 **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  *(undefined1 *)(plVar19 + 0x36) = 0;
  if (ppuVar24 != &puStack_368) {
    if (puStack_368 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_368)(&puStack_368,ppuVar24);
      puVar20 = puStack_368;
    }
    puStack_368 = (undefined8 *)0x0;
    *ppuVar24 = puVar20;
  }
  plVar33 = plVar19 + 4;
  puVar34 = (uint *)(plVar19 + 0x12);
  if (plVar25 != (long *)&DAT_0f552108) {
    if ((*puVar34 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puVar34 = _DAT_0f552110;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar34,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar40 = (_DAT_0f552110 & 1) != 0;
      lVar22 = 0xf552111;
      if (bVar40) {
        lVar22 = _DAT_0f552120;
      }
      uVar18 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar40) {
        uVar18 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar34,lVar22,uVar18);
    }
  }
  plVar29 = plVar19 + 1;
  plVar19[0x11] = _DAT_0f552108;
  plVar19[0x15] = 0;
  if (puStack_368 != (undefined8 *)0x0) {
    (*(code *)puStack_368[1])(&puStack_368);
  }
  LOCK();
  *plVar29 = *plVar29 + 1;
  UNLOCK();
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar20[1] = 0;
  puVar20[2] = 0;
  *puVar20 = &UNK_0ef62300;
  puVar20[6] = 0;
  puVar20[7] = 0;
  puVar20[4] = &UNK_0ef62350;
  puVar20[0xe] = plVar33;
  puVar20[0xf] = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  bStack_360 = (byte)puVar20;
  uStack_35f = (undefined5)((ulong)puVar20 >> 8);
  uStack_35a = (undefined2)((ulong)puVar20 >> 0x30);
  puStack_368 = puVar20 + 4;
  puVar21 = (undefined4 *)func_0x04b081a0(param_2,&puStack_1f8,0);
  plVar23 = *(long **)(puVar21 + 0x24);
  if (plVar23 < *(long **)(puVar21 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 == plVar25) {
LAB_04adbaf7:
      *plVar23 = *plVar25;
      plVar23[5] = (long)(puVar20 + 4);
      plVar23[6] = (long)puVar20;
LAB_04adbb6e:
      LOCK();
      puVar20[1] = puVar20[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar34 & 1) == 0) {
        plVar23[3] = plVar19[0x14];
        lVar22 = plVar19[0x13];
        plVar23[1] = *(long *)puVar34;
        plVar23[2] = lVar22;
        goto LAB_04adbaf7;
      }
      func_0x04885070(plVar23 + 1,plVar19[0x14],plVar19[0x13]);
      *plVar23 = *plVar25;
      puVar20 = (undefined8 *)CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
      plVar23[5] = (long)puStack_368;
      plVar23[6] = CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
      if (puVar20 != (undefined8 *)0x0) goto LAB_04adbb6e;
    }
    plVar23 = plVar23 + 7;
    *(long **)(puVar21 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x04b0c1b0(puVar21 + 0x22,plVar25,&puStack_368);
  }
  *(long **)(puVar21 + 0x24) = plVar23;
  uVar9 = *puVar21;
  uVar10 = puVar21[1];
  uVar11 = puVar21[2];
  uVar12 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar22 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar25 = (long *)CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar22 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  LOCK();
  lVar22 = *plVar29;
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  if (puStack_1b8 != (undefined8 *)0x0) {
    (*(code *)puStack_1b8[1])(&puStack_1b8);
  }
  if (ppuStack_2f8 == &puStack_318) {
    lVar22 = 0x20;
LAB_04adc079:
    (**(code **)((long)*ppuStack_2f8 + lVar22))();
  }
  else {
    lVar22 = 0x28;
    if (ppuStack_2f8 != (undefined8 **)0x0) goto LAB_04adc079;
  }
  if ((uStack_1f0 & 1) != 0) {
    func_0x0412a280(pbStack_1e0,uStack_1f0 & 0xfffffffffffffffe);
  }
  uStack_352 = 0;
  puStack_350 = (undefined8 *)0x0;
  ppuStack_348 = (undefined8 **)0x0;
  bStack_360 = 0x1a;
  uStack_35f = 0x706f6e6163;
  uStack_35a = 0x5f79;
  uStack_358 = 0x68;
  uStack_357 = 0x7468676965;
  puStack_368 = (undefined8 *)0x3974dd08a6783749;
  uStack_1f0 = 0;
  puStack_1f8 = &UNK_0ef625f0;
  plVar19 = (long *)func_0x04bb7830(plVar33,&puStack_368,&puStack_1f8);
  *(undefined4 *)(plVar19 + 0x2a) = 1;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_218);
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
  }
  if (puStack_1f8 != (undefined *)0x0) {
    (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
  }
  if ((bStack_360 & 1) != 0) {
    func_0x0412a280(puStack_350,
                    CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360)) & 0xfffffffffffffffe);
  }
  uStack_352 = 0;
  puStack_350 = (undefined8 *)0x0;
  ppuStack_348 = (undefined8 **)0x0;
  bStack_360 = 0x1a;
  uStack_35f = 0x706f6e6163;
  uStack_35a = 0x5f79;
  uStack_358 = 0x72;
  uStack_357 = 0x7375696461;
  puStack_368 = (undefined8 *)0x464fb92ac6e3c7b2;
  uStack_130 = 0;
  puStack_138 = &UNK_0ef62608;
  plVar19 = (long *)func_0x04bb7830(plVar33,&puStack_368,&puStack_138);
  *(undefined4 *)(plVar19 + 0x2a) = 1;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_238);
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(uStack_228,uStack_238 & 0xfffffffffffffffe);
  }
  if (puStack_138 != (undefined *)0x0) {
    (**(code **)(puStack_138 + 8))(&puStack_138);
  }
  if ((bStack_360 & 1) != 0) {
    func_0x0412a280(puStack_350,
                    CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360)) & 0xfffffffffffffffe);
  }
  uStack_288 = 0;
  uStack_280 = 0;
  puStack_298 = (undefined8 *)0x0;
  uStack_290 = 0;
  uStack_278 = 0;
  func_0x0412f5e0(&uStack_290,&UNK_0142c11b,0x17);
  puStack_298 = (undefined8 *)0x86a8ca0ca06726d6;
  uStack_70 = 0;
  bStack_310 = 0;
  uStack_30f = 0;
  lStack_78 = 0;
  puStack_318 = (undefined8 *)&UNK_0ef62800;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_368 = puStack_318;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef62630;
  bStack_360 = 0;
  uStack_35f = 0;
  uStack_35a = 0;
  puStack_318 = (undefined8 *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&puStack_178,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar25 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0ef62680;
  plVar19[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar19 + 0x2f) = 1;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  if (puStack_368 == (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_368)(&puStack_368,plVar19 + 0x30);
    puVar20 = puStack_368;
  }
  puStack_368 = (undefined8 *)0x0;
  plVar19[0x30] = (long)puVar20;
  puVar34 = (uint *)(plVar19 + 0x12);
  if (plVar25 == (long *)&DAT_0f552078) {
    plVar19[0x15] = 0;
  }
  else {
    if ((*puVar34 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552090;
        uVar11 = uRam000000000f55208c;
        uVar10 = _DAT_0f552088;
        uVar9 = uRam000000000f552084;
        *puVar34 = _DAT_0f552080;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar34,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar40 = (_DAT_0f552080 & 1) != 0;
      lVar22 = 0xf552081;
      if (bVar40) {
        lVar22 = _DAT_0f552090;
      }
      uVar18 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar40) {
        uVar18 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      FUN_04885120(puVar34,lVar22,uVar18);
    }
    plVar19[0x11] = _DAT_0f552078;
    plVar19[0x15] = 0;
    if (puStack_368 != (undefined8 *)0x0) {
      (*(code *)puStack_368[1])(&puStack_368);
    }
  }
  plVar29 = plVar19 + 1;
  if (puStack_318 != (undefined8 *)0x0) {
    (*(code *)puStack_318[1])(&puStack_318);
  }
  LOCK();
  *plVar29 = *plVar29 + 1;
  UNLOCK();
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar20[1] = 0;
  puVar20[2] = 0;
  *puVar20 = &UNK_0ef62760;
  puVar20[6] = 0;
  puVar20[7] = 0;
  puVar20[4] = &UNK_0ef627b0;
  puVar20[0xe] = plVar19 + 4;
  puVar20[0xf] = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  bStack_360 = (byte)puVar20;
  uStack_35f = (undefined5)((ulong)puVar20 >> 8);
  uStack_35a = (undefined2)((ulong)puVar20 >> 0x30);
  puStack_368 = puVar20 + 4;
  plStack_2d0 = plVar19 + 4;
  puVar21 = (undefined4 *)func_0x04bb7db0(plVar33,&puStack_298);
  plVar23 = *(long **)(puVar21 + 0x24);
  if (plVar23 < *(long **)(puVar21 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar25) {
      if ((*puVar34 & 1) == 0) {
        plVar23[3] = plVar19[0x14];
        lVar22 = plVar19[0x13];
        plVar23[1] = *(long *)puVar34;
        plVar23[2] = lVar22;
      }
      else {
        func_0x04885070(plVar23 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar23 = *plVar25;
    plVar23[5] = (long)(puVar20 + 4);
    plVar23[6] = (long)puVar20;
    LOCK();
    puVar20[1] = puVar20[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar21 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x04bb9c90(puVar21 + 0x22,plVar25,&puStack_368);
  }
  *(long **)(puVar21 + 0x24) = plVar23;
  uVar9 = *puVar21;
  uVar10 = puVar21[1];
  uVar11 = puVar21[2];
  uVar12 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar22 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar25 = (long *)CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar22 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  LOCK();
  lVar22 = *plVar29;
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  *(undefined4 *)(plVar19 + 0x2e) = 1;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  (**(code **)(plVar19[4] + 0x10))(plStack_2d0,&uStack_258);
  if ((uStack_258 & 1) != 0) {
    func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,uStack_290 & 0xfffffffffffffffe);
  }
  uStack_304 = 0;
  uStack_300 = 0;
  ppuStack_2f8 = (undefined8 **)0x0;
  bStack_310 = 0x16;
  uStack_30f = 0x6c625f6661656c;
  uStack_308 = 0x736b636f;
  puStack_318 = (undefined8 *)0x868643a780394936;
  puStack_298 = (undefined8 *)0x0;
  uStack_290 = 0;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef62828;
  puStack_368 = (undefined8 *)0x0;
  bStack_360 = 0;
  uStack_35f = 0;
  uStack_35a = 0;
  if (puStack_298 == (undefined8 *)0x0) {
    puStack_368 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_298)(&puStack_298,&puStack_368);
    puStack_368 = puStack_298;
  }
  puStack_298 = (undefined8 *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&puStack_178,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar25 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0ef62878;
  ppuVar24 = (undefined8 **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (ppuVar24 != &puStack_368) {
    if (puStack_368 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_368)(&puStack_368,ppuVar24);
      puVar20 = puStack_368;
    }
    puStack_368 = (undefined8 *)0x0;
    *ppuVar24 = puVar20;
  }
  puVar34 = (uint *)(plVar19 + 0x12);
  if (plVar25 != (long *)&DAT_0f551f58) {
    if ((*puVar34 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar19[0x14] = (long)_DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *puVar34 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
        *(undefined4 *)(plVar19 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar34,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar40 = (_DAT_0f551f60 & 1) != 0;
      puVar20 = (undefined8 *)0xf551f61;
      if (bVar40) {
        puVar20 = _DAT_0f551f70;
      }
      uVar18 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar40) {
        uVar18 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar34,puVar20,uVar18);
    }
  }
  plVar29 = plVar19 + 1;
  plVar19[0x11] = (long)_DAT_0f551f58;
  plVar19[0x15] = 0;
  if (puStack_368 != (undefined8 *)0x0) {
    (*(code *)puStack_368[1])(&puStack_368);
  }
  LOCK();
  *plVar29 = *plVar29 + 1;
  UNLOCK();
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar20[1] = 0;
  puVar20[2] = 0;
  *puVar20 = &UNK_0ef62970;
  puVar20[6] = 0;
  puVar20[7] = 0;
  puVar20[4] = &UNK_0ef629c0;
  puVar20[0xe] = plVar19 + 4;
  puVar20[0xf] = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  bStack_360 = (byte)puVar20;
  uStack_35f = (undefined5)((ulong)puVar20 >> 8);
  uStack_35a = (undefined2)((ulong)puVar20 >> 0x30);
  puStack_368 = puVar20 + 4;
  puVar21 = (undefined4 *)func_0x04bb7db0(plVar33,&puStack_318);
  plVar33 = *(long **)(puVar21 + 0x24);
  if (plVar33 < *(long **)(puVar21 + 0x26)) {
    plVar33[2] = 0;
    plVar33[3] = 0;
    *plVar33 = 0;
    plVar33[1] = 0;
    plVar33[4] = 0;
    if (plVar33 != plVar25) {
      if ((*puVar34 & 1) == 0) {
        plVar33[3] = plVar19[0x14];
        lVar22 = plVar19[0x13];
        plVar33[1] = *(long *)puVar34;
        plVar33[2] = lVar22;
      }
      else {
        func_0x04885070(plVar33 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar33 = *plVar25;
    plVar33[5] = (long)(puVar20 + 4);
    plVar33[6] = (long)puVar20;
    LOCK();
    puVar20[1] = puVar20[1] + 1;
    UNLOCK();
    plVar33 = plVar33 + 7;
    *(long **)(puVar21 + 0x24) = plVar33;
  }
  else {
    plVar33 = (long *)func_0x04bb9c90(puVar21 + 0x22,plVar25,&puStack_368);
  }
  *(long **)(puVar21 + 0x24) = plVar33;
  uVar9 = *puVar21;
  uVar10 = puVar21[1];
  uVar11 = puVar21[2];
  uVar12 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
  *(undefined4 *)(plVar19 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar33 = plVar25 + 1;
    lVar22 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  plVar25 = (long *)CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar33 = plVar25 + 1;
    lVar22 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  LOCK();
  lVar22 = *plVar29;
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  uStack_170 = 0;
  puStack_178 = (undefined8 *)&UNK_0ef62c60;
  ppuVar24 = (undefined8 **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (ppuVar24 == (undefined8 **)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  ppuVar24[1] = (undefined8 *)0x0;
  ppuVar24[2] = (undefined8 *)0x0;
  *ppuVar24 = (undefined8 *)&UNK_0ef62a20;
  puStack_368 = (undefined8 *)0x0;
  bStack_360 = 0;
  uStack_35f = 0;
  uStack_35a = 0;
  if (puStack_178 == (undefined8 *)0x0) {
    puStack_368 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_178)(&puStack_178,&puStack_368);
    puStack_368 = puStack_178;
  }
  puStack_178 = (undefined8 *)0x0;
  ppuVar24[4] = (undefined8 *)&UNK_0f2ccd78;
  ppuVar24[5] = (undefined8 *)0x0;
  ppuVar24[6] = (undefined8 *)0x0;
  ppuVar24[7] = (undefined8 *)0x0;
  ppuVar24[8] = (undefined8 *)0x0;
  ppuVar24[9] = (undefined8 *)0x0;
  ppuVar24[10] = (undefined8 *)0x0;
  ppuVar24[0xb] = (undefined8 *)0x0;
  ppuVar24[0xc] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar24 + 0xd) = 0;
  func_0x04aa75f0(ppuVar24 + 0xe,&lStack_b8,&UNK_01254d89);
  *(undefined1 *)(ppuVar24 + 0x10) = 0;
  ppuVar3 = ppuVar24 + 0x11;
  ppuVar24[0x11] = (undefined8 *)0x0;
  ppuVar24[0x12] = (undefined8 *)0x0;
  ppuVar24[0x13] = (undefined8 *)0x0;
  ppuVar24[0x14] = (undefined8 *)0x0;
  ppuVar24[0x15] = (undefined8 *)0x0;
  ppuVar24[0x16] = (undefined8 *)0x0;
  ppuVar24[0x17] = (undefined8 *)0xffffffff;
  ppuVar24[0x26] = (undefined8 *)0x0;
  ppuVar24[0x27] = (undefined8 *)0x0;
  ppuVar24[0x18] = (undefined8 *)0x0;
  ppuVar24[0x19] = (undefined8 *)0x0;
  ppuVar24[0x1a] = (undefined8 *)0x0;
  ppuVar24[0x1b] = (undefined8 *)0x0;
  ppuVar24[0x1c] = (undefined8 *)0x0;
  ppuVar24[0x1d] = (undefined8 *)0x0;
  ppuVar24[0x1e] = (undefined8 *)0x0;
  ppuVar24[0x1f] = (undefined8 *)0x0;
  ppuVar24[4] = (undefined8 *)&UNK_0ef62a70;
  ppuVar38 = ppuVar24 + 0x2e;
  ppuVar24[0x2e] = (undefined8 *)0x0;
  ppuVar24[0x2f] = (undefined8 *)0x0;
  if (ppuVar38 != &puStack_368) {
    if (puStack_368 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_368)(&puStack_368,ppuVar38);
      puVar20 = puStack_368;
    }
    puStack_368 = (undefined8 *)0x0;
    *ppuVar38 = puVar20;
  }
  ppuVar1 = ppuVar24 + 4;
  ppuStack_200 = ppuVar24 + 0x12;
  if (ppuVar3 != (undefined8 **)&DAT_0f551f58) {
    if (((ulong)*ppuStack_200 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        ppuVar24[0x14] = _DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *(uint *)ppuStack_200 = _DAT_0f551f60;
        *(undefined4 *)((long)ppuVar24 + 0x94) = uVar9;
        *(undefined4 *)(ppuVar24 + 0x13) = uVar10;
        *(undefined4 *)((long)ppuVar24 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(ppuStack_200,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar40 = (_DAT_0f551f60 & 1) != 0;
      puVar20 = (undefined8 *)0xf551f61;
      if (bVar40) {
        puVar20 = _DAT_0f551f70;
      }
      uVar18 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar40) {
        uVar18 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(ppuStack_200,puVar20,uVar18);
    }
  }
  ppuVar2 = ppuVar24 + 1;
  ppuVar24[0x11] = _DAT_0f551f58;
  ppuVar24[0x15] = (undefined8 *)0x0;
  if (puStack_368 != (undefined8 *)0x0) {
    (*(code *)puStack_368[1])(&puStack_368);
  }
  LOCK();
  *ppuVar2 = (undefined8 *)((long)*ppuVar2 + 1);
  UNLOCK();
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar25[1] = 0;
  plVar25[2] = 0;
  *plVar25 = (long)&UNK_0ef62b68;
  plVar25[6] = 0;
  plVar25[7] = 0;
  plVar25[4] = (long)&UNK_0ef62bb8;
  plVar25[0xe] = (long)ppuVar1;
  plVar25[0xf] = (long)ppuVar24;
  LOCK();
  ppuVar24[1] = (undefined8 *)((long)ppuVar24[1] + 1);
  UNLOCK();
  plStack_2d0 = plVar25 + 1;
  ppuVar36 = (undefined8 **)plVar19[0x1c];
  ppuVar39 = (undefined8 **)plVar19[0x1b];
  ppuVar37 = ppuVar39;
  while (ppuVar37 != ppuVar36) {
    if ((ppuVar37[0xf] == (undefined8 *)0x0) && (ppuVar37[0x10] == (undefined8 *)0xffffffffffffffff)
       ) goto LAB_04adce66;
    ppuVar38 = ppuVar37 + 0x15;
    ppuVar37 = ppuVar38;
  }
  if (ppuVar36 < (undefined8 **)plVar19[0x1d]) {
    func_0x04bbf2a0(ppuVar36);
    ppuVar36 = ppuVar36 + 0x15;
    plVar19[0x1c] = (long)ppuVar36;
LAB_04adcdf8:
    plVar19[0x1c] = (long)ppuVar36;
    pbVar26 = (byte *)ppuVar36[-0x15];
    if ((*pbVar26 & 1) == 0) {
      *pbVar26 = 0x26;
      pbVar26 = pbVar26 + 1;
    }
    else {
      pbVar26[8] = 0x13;
      pbVar26[9] = 0;
      pbVar26[10] = 0;
      pbVar26[0xb] = 0;
      pbVar26[0xc] = 0;
      pbVar26[0xd] = 0;
      pbVar26[0xe] = 0;
      pbVar26[0xf] = 0;
      pbVar26 = *(byte **)(pbVar26 + 0x10);
    }
    uVar11 = _UNK_01494d69;
    uVar10 = _UNK_01494d65;
    uVar9 = _UNK_01494d61;
    *(undefined4 *)pbVar26 = _DAT_01494d5d;
    *(undefined4 *)(pbVar26 + 4) = uVar9;
    *(undefined4 *)(pbVar26 + 8) = uVar10;
    *(undefined4 *)(pbVar26 + 0xc) = uVar11;
    pbVar26[0xf] = 0x65;
    pbVar26[0x10] = 0x6e;
    pbVar26[0x11] = 0x74;
    pbVar26[0x12] = 0x3e;
    pbVar26[0x13] = 0;
    lVar22 = plVar19[0x1c];
    ppuVar37 = (undefined8 **)(lVar22 + -0xa8);
    *(char *)(lVar22 + -7) = (char)plVar19[0x10];
    *(undefined8 *)(lVar22 + -0x30) = 0;
    *(undefined8 *)(lVar22 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar22 + -8) = 1;
LAB_04adce66:
    ppuVar39 = (undefined8 **)(plVar25 + 4);
    ppuVar38 = (undefined8 **)ppuVar37[0x12];
    if (ppuVar38 < ppuVar37[0x13]) {
      ppuVar38[2] = (undefined8 *)0x0;
      ppuVar38[3] = (undefined8 *)0x0;
      *ppuVar38 = (undefined8 *)0x0;
      ppuVar38[1] = (undefined8 *)0x0;
      ppuVar38[4] = (undefined8 *)0x0;
      if (ppuVar38 != ppuVar3) {
        if (((ulong)*ppuStack_200 & 1) == 0) {
          ppuVar38[3] = ppuStack_200[2];
          puVar20 = ppuStack_200[1];
          ppuVar38[1] = *ppuStack_200;
          ppuVar38[2] = puVar20;
        }
        else {
          func_0x04885070(ppuVar38 + 1,ppuVar24[0x14],ppuVar24[0x13]);
        }
      }
      *ppuVar38 = *ppuVar3;
      ppuVar38[5] = ppuVar39;
      ppuVar38[6] = plVar25;
      LOCK();
      plVar25[1] = plVar25[1] + 1;
      UNLOCK();
      ppuVar38 = ppuVar38 + 7;
      ppuVar37[0x12] = ppuVar38;
      goto LAB_04add1b5;
    }
    lVar22 = (long)ppuVar38 - (long)ppuVar37[0x11];
    plVar33 = (long *)((lVar22 >> 3) * 0x6db6db6db6db6db7 + 1);
    ppuVar38 = ppuVar37;
    if (plVar33 < (long *)0x492492492492493) {
      lVar30 = (long)ppuVar37[0x13] - (long)ppuVar37[0x11] >> 3;
      plVar29 = (long *)(lVar30 * -0x2492492492492492);
      if (plVar33 < plVar29) {
        plVar33 = plVar29;
      }
      ppuStack_348 = ppuVar37 + 0x11;
      if (0x249249249249248 < (ulong)(lVar30 * 0x6db6db6db6db6db7)) {
        plVar33 = (long *)0x492492492492492;
      }
      ppuStack_2c8 = ppuStack_348;
      ppuStack_2c0 = ppuVar39;
      if (plVar33 == (long *)0x0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        if ((long *)0x492492492492492 < plVar33) goto LAB_04addc3c;
        puVar20 = (undefined8 *)
                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar33 * 0x38);
        if (puVar20 == (undefined8 *)0x0) {
          func_0x0eec74c0((long)plVar33 * 0x38,0);
          puVar20 = (undefined8 *)0x0;
        }
      }
      ppuVar39 = (undefined8 **)((long)puVar20 + lVar22);
      uStack_358 = SUB81(ppuVar39,0);
      uStack_357 = (undefined5)((ulong)ppuVar39 >> 8);
      uStack_352 = (undefined2)((ulong)ppuVar39 >> 0x30);
      puStack_350 = puVar20 + (long)plVar33 * 7;
      puVar6 = (undefined8 *)((long)puVar20 + lVar22 + 0x10);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)((long)puVar20 + lVar22) = 0;
      ((undefined8 *)((long)puVar20 + lVar22))[1] = 0;
      *(undefined8 *)((long)puVar20 + lVar22 + 0x20) = 0;
      ppuVar36 = ppuVar39;
      ppuVar38 = ppuVar39;
      puStack_368 = puVar20;
      bStack_360 = uStack_358;
      uStack_35f = uStack_357;
      uStack_35a = uStack_352;
      if (ppuVar39 != ppuVar3) {
        puVar34 = (uint *)((long)puVar20 + lVar22 + 8);
        if (((ulong)*ppuStack_200 & 1) == 0) {
          *(undefined8 **)((long)puVar20 + lVar22 + 0x18) = ppuStack_200[2];
          uVar13 = *(uint *)((long)ppuStack_200 + 4);
          uVar14 = *(uint *)(ppuStack_200 + 1);
          uVar15 = *(uint *)((long)ppuStack_200 + 0xc);
          *puVar34 = *(uint *)ppuStack_200;
          *(uint *)((long)puVar20 + lVar22 + 0xc) = uVar13;
          *(uint *)((long)puVar20 + lVar22 + 0x10) = uVar14;
          *(uint *)((long)puVar20 + lVar22 + 0x14) = uVar15;
        }
        else {
          func_0x04885070(puVar34,ppuVar24[0x14],ppuVar24[0x13]);
          ppuVar36 = (undefined8 **)CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
          ppuVar38 = (undefined8 **)CONCAT26(uStack_352,CONCAT51(uStack_357,uStack_358));
        }
      }
      ppuVar17 = ppuStack_2c8;
      *ppuVar39 = *ppuVar3;
      ppuVar39[5] = ppuStack_2c0;
      ppuVar39[6] = plVar25;
      LOCK();
      plVar25[1] = plVar25[1] + 1;
      UNLOCK();
      ppuVar38 = ppuVar38 + 7;
      uStack_358 = SUB81(ppuVar38,0);
      uStack_357 = (undefined5)((ulong)ppuVar38 >> 8);
      uStack_352 = (undefined2)((ulong)ppuVar38 >> 0x30);
      puVar20 = ppuVar37[0x11];
      puVar6 = ppuVar37[0x12];
      pbVar26 = (byte *)((long)ppuVar36 + ((long)puVar20 - (long)puVar6));
      pbVar27 = pbVar26;
      puVar31 = puVar20;
      if ((long)puVar20 - (long)puVar6 != 0) {
        do {
          pbVar27[0x10] = 0;
          pbVar27[0x11] = 0;
          pbVar27[0x12] = 0;
          pbVar27[0x13] = 0;
          pbVar27[0x14] = 0;
          pbVar27[0x15] = 0;
          pbVar27[0x16] = 0;
          pbVar27[0x17] = 0;
          pbVar27[0x18] = 0;
          pbVar27[0x19] = 0;
          pbVar27[0x1a] = 0;
          pbVar27[0x1b] = 0;
          pbVar27[0x1c] = 0;
          pbVar27[0x1d] = 0;
          pbVar27[0x1e] = 0;
          pbVar27[0x1f] = 0;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          pbVar27[8] = 0;
          pbVar27[9] = 0;
          pbVar27[10] = 0;
          pbVar27[0xb] = 0;
          pbVar27[0xc] = 0;
          pbVar27[0xd] = 0;
          pbVar27[0xe] = 0;
          pbVar27[0xf] = 0;
          pbVar27[0x20] = 0;
          pbVar27[0x21] = 0;
          pbVar27[0x22] = 0;
          pbVar27[0x23] = 0;
          pbVar27[0x24] = 0;
          pbVar27[0x25] = 0;
          pbVar27[0x26] = 0;
          pbVar27[0x27] = 0;
          *(undefined8 *)(pbVar27 + 0x18) = puVar31[3];
          uVar28 = puVar31[2];
          *(undefined8 *)(pbVar27 + 8) = puVar31[1];
          *(undefined8 *)(pbVar27 + 0x10) = uVar28;
          *(undefined2 *)(puVar31 + 1) = 0;
          *(undefined8 *)pbVar27 = *puVar31;
          uVar9 = *(undefined4 *)((long)puVar31 + 0x2c);
          uVar10 = *(undefined4 *)(puVar31 + 6);
          uVar11 = *(undefined4 *)((long)puVar31 + 0x34);
          *(undefined4 *)(pbVar27 + 0x28) = *(undefined4 *)(puVar31 + 5);
          *(undefined4 *)(pbVar27 + 0x2c) = uVar9;
          *(undefined4 *)(pbVar27 + 0x30) = uVar10;
          *(undefined4 *)(pbVar27 + 0x34) = uVar11;
          puVar31[5] = 0;
          puVar31[6] = 0;
          puVar31 = puVar31 + 7;
          pbVar27 = pbVar27 + 0x38;
        } while (puVar31 != puVar6);
        do {
          plVar19 = (long *)puVar20[6];
          if (plVar19 == (long *)0x0) {
LAB_04add134:
            bVar7 = *(byte *)(puVar20 + 1);
          }
          else {
            LOCK();
            plVar33 = plVar19 + 1;
            lVar22 = *plVar33;
            *plVar33 = *plVar33 + -1;
            UNLOCK();
            if (lVar22 != 0) goto LAB_04add134;
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
            bVar7 = *(byte *)(puVar20 + 1);
          }
          if ((bVar7 & 1) != 0) {
            func_0x0412a280(puVar20[3],puVar20[1] & 0xfffffffffffffffe);
          }
          puVar20 = puVar20 + 7;
        } while (puVar20 != puVar6);
        puVar20 = *ppuVar17;
        ppuVar38 = (undefined8 **)CONCAT26(uStack_352,CONCAT51(uStack_357,uStack_358));
      }
      ppuVar37[0x11] = (undefined8 *)pbVar26;
      ppuVar37[0x12] = ppuVar38;
      puVar6 = ppuVar37[0x13];
      ppuVar37[0x13] = puStack_350;
      if (puVar20 != (undefined8 *)0x0) {
        func_0x0412a280(puVar20,(long)puVar6 - (long)puVar20);
      }
LAB_04add1b5:
      ppuVar37[0x12] = ppuVar38;
      ppuVar24[0x16] = (undefined8 *)0x2;
      ppuVar24[0x17] = (undefined8 *)0x2;
      uVar9 = *(undefined4 *)ppuVar37;
      uVar10 = *(undefined4 *)((long)ppuVar37 + 4);
      uVar11 = *(undefined4 *)(ppuVar37 + 1);
      uVar12 = *(undefined4 *)((long)ppuVar37 + 0xc);
      if (ppuVar37[1] != (undefined8 *)0x0) {
        LOCK();
        plVar19 = ppuVar37[1] + 1;
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      plVar19 = ppuVar24[0xf];
      *(undefined4 *)(ppuVar24 + 0xe) = uVar9;
      *(undefined4 *)((long)ppuVar24 + 0x74) = uVar10;
      *(undefined4 *)(ppuVar24 + 0xf) = uVar11;
      *(undefined4 *)((long)ppuVar24 + 0x7c) = uVar12;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar33 = plVar19 + 1;
        lVar22 = *plVar33;
        *plVar33 = *plVar33 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
      }
      *(undefined1 *)(ppuVar24 + 0x10) = *(undefined1 *)((long)ppuVar37 + 0xa1);
      LOCK();
      lVar22 = *plStack_2d0;
      *plStack_2d0 = *plStack_2d0 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        func_0x0412c2d0(plVar25);
        LOCK();
        puVar20 = *ppuVar2;
        *ppuVar2 = (undefined8 *)((long)*ppuVar2 + -1);
        UNLOCK();
      }
      else {
        LOCK();
        puVar20 = *ppuVar2;
        *ppuVar2 = (undefined8 *)((long)*ppuVar2 + -1);
        UNLOCK();
      }
      if (puVar20 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar24)[2])(ppuVar24);
        func_0x0412c2d0(ppuVar24);
        LOCK();
        puVar20 = *ppuVar2;
        *ppuVar2 = (undefined8 *)((long)*ppuVar2 + -1);
        UNLOCK();
      }
      else {
        LOCK();
        puVar20 = *ppuVar2;
        *ppuVar2 = (undefined8 *)((long)*ppuVar2 + -1);
        UNLOCK();
      }
      if (puVar20 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar24)[2])(ppuVar24);
        func_0x0412c2d0(ppuVar24);
      }
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uVar28 = (*(code *)(*ppuVar1)[2])(ppuVar1,&uStack_2b8);
      if ((uStack_2b8 & 1) != 0) {
        func_0x0412a280(uStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
      }
      if (puStack_178 != (undefined8 *)0x0) {
        (*(code *)puStack_178[1])(&puStack_178);
      }
      if (puStack_298 != (undefined8 *)0x0) {
        (*(code *)puStack_298[1])(&puStack_298);
      }
      if ((bStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,CONCAT71(uStack_30f,bStack_310) & 0xfffffffffffffffe);
      }
      uStack_b0 = 0;
      bStack_310 = 0;
      uStack_30f = 0;
      lStack_b8 = 0;
      puStack_318 = (undefined8 *)&UNK_0ef62eb0;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      puStack_368 = puStack_318;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&UNK_0ef62c88;
      bStack_360 = 0;
      uStack_35f = 0;
      uStack_35a = 0;
      puStack_318 = (undefined8 *)0x0;
      plVar19[4] = (long)&UNK_0f2ccd78;
      plVar19[5] = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar19[10] = 0;
      plVar19[0xb] = 0;
      plVar19[0xc] = 0;
      *(undefined1 *)(plVar19 + 0xd) = 0;
      func_0x04aa75f0(plVar19 + 0xe,&lStack_f8,&UNK_01254d89);
      *(undefined1 *)(plVar19 + 0x10) = 0;
      plVar19[0x11] = 0;
      plVar19[0x12] = 0;
      plVar19[0x13] = 0;
      plVar19[0x14] = 0;
      plVar19[0x15] = 0;
      plVar19[0x16] = 0;
      plVar19[0x17] = 0xffffffff;
      plVar19[0x26] = 0;
      plVar19[0x27] = 0;
      plVar19[0x18] = 0;
      plVar19[0x19] = 0;
      plVar19[0x1a] = 0;
      plVar19[0x1b] = 0;
      plVar19[0x1c] = 0;
      plVar19[0x1d] = 0;
      plVar19[0x1e] = 0;
      plVar19[0x1f] = 0;
      plVar19[4] = (long)&UNK_0ef62cd8;
      plVar19[0x2e] = 0;
      plVar19[0x2f] = 0;
      if (puStack_368 == (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_368)(&puStack_368,plVar19 + 0x2e);
        puVar20 = puStack_368;
      }
      plVar25 = plVar19 + 1;
      plVar19[0x2e] = (long)puVar20;
      if (puStack_318 != (undefined8 *)0x0) {
        (*(code *)puStack_318[1])(&puStack_318);
      }
      LOCK();
      *plVar25 = *plVar25 + 1;
      UNLOCK();
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar20[1] = 0;
      puVar20[2] = 0;
      *puVar20 = &UNK_0ef62db8;
      puVar20[6] = 0;
      puVar20[7] = 0;
      puVar20[4] = &UNK_0ef62e08;
      puVar20[0xe] = plVar19 + 4;
      puVar20[0xf] = plVar19;
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
      bStack_360 = (byte)puVar20;
      uStack_35f = (undefined5)((ulong)puVar20 >> 8);
      uStack_35a = (undefined2)((ulong)puVar20 >> 0x30);
      puStack_368 = puVar20 + 4;
      puVar21 = (undefined4 *)func_0x04bbf9a0(uVar28,0,0);
      plVar33 = plVar19 + 0x11;
      plVar29 = *(long **)(puVar21 + 0x24);
      if (plVar29 < *(long **)(puVar21 + 0x26)) {
        plVar29[2] = 0;
        plVar29[3] = 0;
        *plVar29 = 0;
        plVar29[1] = 0;
        plVar29[4] = 0;
        if (plVar29 != plVar33) {
          if ((*(byte *)(plVar19 + 0x12) & 1) == 0) {
            plVar29[3] = plVar19[0x14];
            lVar22 = plVar19[0x13];
            plVar29[1] = plVar19[0x12];
            plVar29[2] = lVar22;
          }
          else {
            func_0x04885070(plVar29 + 1,plVar19[0x14],plVar19[0x13]);
          }
        }
        *plVar29 = *plVar33;
        plVar29[5] = (long)(puVar20 + 4);
        plVar29[6] = (long)puVar20;
        LOCK();
        puVar20[1] = puVar20[1] + 1;
        UNLOCK();
        plVar29 = plVar29 + 7;
        *(long **)(puVar21 + 0x24) = plVar29;
      }
      else {
        plVar29 = (long *)func_0x04bc1840(puVar21 + 0x22,plVar33,&puStack_368);
      }
      *(long **)(puVar21 + 0x24) = plVar29;
      uVar9 = *puVar21;
      uVar10 = puVar21[1];
      uVar11 = puVar21[2];
      uVar12 = puVar21[3];
      if (*(long *)(puVar21 + 2) != 0) {
        LOCK();
        plVar33 = (long *)(*(long *)(puVar21 + 2) + 8);
        *plVar33 = *plVar33 + 1;
        UNLOCK();
      }
      plVar33 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar9;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
      *(undefined4 *)(plVar19 + 0xf) = uVar11;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
      if (plVar33 != (long *)0x0) {
        LOCK();
        plVar29 = plVar33 + 1;
        lVar22 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
          func_0x0412c2d0(plVar33);
        }
      }
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      plVar33 = (long *)CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
      if (plVar33 != (long *)0x0) {
        LOCK();
        plVar29 = plVar33 + 1;
        lVar22 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
          func_0x0412c2d0(plVar33);
        }
      }
      LOCK();
      lVar22 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
        LOCK();
        lVar22 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar22 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
      }
      if (lVar22 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      if (lStack_b8 != 0) {
        (**(code **)(lStack_b8 + 8))(&lStack_b8);
      }
      uStack_f0 = 0;
      bStack_310 = 0;
      uStack_30f = 0;
      lStack_f8 = 0;
      puStack_318 = (undefined8 *)&UNK_0ef630a8;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      puStack_368 = puStack_318;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&UNK_0ef62ed8;
      bStack_360 = 0;
      uStack_35f = 0;
      uStack_35a = 0;
      puStack_318 = (undefined8 *)0x0;
      plVar19[4] = (long)&UNK_0f2ccd78;
      plVar19[5] = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar19[10] = 0;
      plVar19[0xb] = 0;
      plVar19[0xc] = 0;
      *(undefined1 *)(plVar19 + 0xd) = 0;
      func_0x04aa75f0(plVar19 + 0xe,&uStack_319,&UNK_01254d89);
      *(undefined1 *)(plVar19 + 0x10) = 0;
      plVar25 = plVar19 + 0x11;
      plVar19[0x11] = 0;
      plVar19[0x12] = 0;
      plVar19[0x13] = 0;
      plVar19[0x14] = 0;
      plVar19[0x15] = 0;
      plVar19[0x16] = 0;
      plVar19[0x17] = 0xffffffff;
      plVar19[0x26] = 0;
      plVar19[0x27] = 0;
      plVar19[0x18] = 0;
      plVar19[0x19] = 0;
      plVar19[0x1a] = 0;
      plVar19[0x1b] = 0;
      plVar19[0x1c] = 0;
      plVar19[0x1d] = 0;
      plVar19[0x1e] = 0;
      plVar19[0x1f] = 0;
      plVar19[4] = (long)&UNK_0ef62f28;
      plVar19[0x2e] = _DAT_014eae60;
      *(undefined1 *)(plVar19 + 0x2f) = 1;
      plVar19[0x30] = 0;
      plVar19[0x31] = 0;
      if (puStack_368 == (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        (*(code *)*puStack_368)(&puStack_368,plVar19 + 0x30);
        puVar20 = puStack_368;
      }
      puStack_368 = (undefined8 *)0x0;
      plVar19[0x30] = (long)puVar20;
      puVar34 = (uint *)(plVar19 + 0x12);
      if (plVar25 == (long *)&DAT_0f552018) {
        plVar19[0x15] = 0;
      }
      else {
        if ((*puVar34 & 1) == 0) {
          if ((_DAT_0f552020 & 1) == 0) {
            plVar19[0x14] = _DAT_0f552030;
            uVar11 = uRam000000000f55202c;
            uVar10 = _DAT_0f552028;
            uVar9 = uRam000000000f552024;
            *puVar34 = _DAT_0f552020;
            *(undefined4 *)((long)plVar19 + 0x94) = uVar9;
            *(undefined4 *)(plVar19 + 0x13) = uVar10;
            *(undefined4 *)((long)plVar19 + 0x9c) = uVar11;
          }
          else {
            func_0x04885070(puVar34,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
          }
        }
        else {
          bVar40 = (_DAT_0f552020 & 1) != 0;
          lVar22 = 0xf552021;
          if (bVar40) {
            lVar22 = _DAT_0f552030;
          }
          uVar18 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
          if (bVar40) {
            uVar18 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
          }
          FUN_04885120(puVar34,lVar22,uVar18);
        }
        plVar19[0x11] = _DAT_0f552018;
        plVar19[0x15] = 0;
        if (puStack_368 != (undefined8 *)0x0) {
          (*(code *)puStack_368[1])(&puStack_368);
        }
      }
      plVar33 = plVar19 + 1;
      if (puStack_318 != (undefined8 *)0x0) {
        (*(code *)puStack_318[1])(&puStack_318);
      }
      LOCK();
      *plVar33 = *plVar33 + 1;
      UNLOCK();
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      puVar20[1] = 0;
      puVar20[2] = 0;
      *puVar20 = &UNK_0ef63008;
      puVar20[6] = 0;
      puVar20[7] = 0;
      puVar20[4] = &UNK_0ef63058;
      puVar20[0xe] = plVar19 + 4;
      puVar20[0xf] = plVar19;
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
      bStack_360 = (byte)puVar20;
      uStack_35f = (undefined5)((ulong)puVar20 >> 8);
      uStack_35a = (undefined2)((ulong)puVar20 >> 0x30);
      puStack_368 = puVar20 + 4;
      puVar21 = (undefined4 *)func_0x04bbf9a0(uVar28,1,1);
      plVar29 = *(long **)(puVar21 + 0x24);
      if (plVar29 < *(long **)(puVar21 + 0x26)) {
        plVar29[2] = 0;
        plVar29[3] = 0;
        *plVar29 = 0;
        plVar29[1] = 0;
        plVar29[4] = 0;
        if (plVar29 != plVar25) {
          if ((*puVar34 & 1) == 0) {
            plVar29[3] = plVar19[0x14];
            lVar22 = plVar19[0x13];
            plVar29[1] = *(long *)puVar34;
            plVar29[2] = lVar22;
          }
          else {
            func_0x04885070(plVar29 + 1,plVar19[0x14],plVar19[0x13]);
          }
        }
        *plVar29 = *plVar25;
        plVar29[5] = (long)(puVar20 + 4);
        plVar29[6] = (long)puVar20;
        LOCK();
        puVar20[1] = puVar20[1] + 1;
        UNLOCK();
        plVar29 = plVar29 + 7;
        *(long **)(puVar21 + 0x24) = plVar29;
      }
      else {
        plVar29 = (long *)func_0x04bc1840(puVar21 + 0x22,plVar25,&puStack_368);
      }
      *(long **)(puVar21 + 0x24) = plVar29;
      uVar9 = *puVar21;
      uVar10 = puVar21[1];
      uVar11 = puVar21[2];
      uVar12 = puVar21[3];
      if (*(long *)(puVar21 + 2) != 0) {
        LOCK();
        plVar25 = (long *)(*(long *)(puVar21 + 2) + 8);
        *plVar25 = *plVar25 + 1;
        UNLOCK();
      }
      plVar25 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar9;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar10;
      *(undefined4 *)(plVar19 + 0xf) = uVar11;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar12;
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar29 = plVar25 + 1;
        lVar22 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
        }
      }
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      plVar25 = (long *)CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360));
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar29 = plVar25 + 1;
        lVar22 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
        }
      }
      LOCK();
      lVar22 = *plVar33;
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
        LOCK();
        lVar22 = *plVar33;
        *plVar33 = *plVar33 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar22 = *plVar33;
        *plVar33 = *plVar33 + -1;
        UNLOCK();
      }
      if (lVar22 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      if (lStack_f8 != 0) {
        (**(code **)(lStack_f8 + 8))(&lStack_f8);
      }
      return;
    }
  }
  else {
    lVar22 = (long)ppuVar36 - (long)ppuVar39;
    plVar33 = (long *)((lVar22 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((long *)0x186186186186186 < plVar33) goto LAB_04addc46;
    ppuVar37 = (undefined8 **)(plVar19 + 0x1b);
    lVar30 = plVar19[0x1d] - (long)ppuVar39 >> 3;
    plVar29 = (long *)(lVar30 * -0x6186186186186186);
    if (plVar33 < plVar29) {
      plVar33 = plVar29;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar30 * -0x30c30c30c30c30c3)) {
      plVar33 = (long *)0x186186186186186;
    }
    ppuStack_348 = ppuVar37;
    if (plVar33 == (long *)0x0) {
      puVar20 = (undefined8 *)0x0;
LAB_04adcc12:
      puVar35 = (undefined *)(lVar22 + (long)puVar20);
      uStack_358 = SUB81(puVar35,0);
      uStack_357 = (undefined5)((ulong)puVar35 >> 8);
      uStack_352 = (undefined2)((ulong)puVar35 >> 0x30);
      puStack_350 = puVar20 + (long)plVar33 * 0x15;
      puStack_368 = puVar20;
      bStack_360 = uStack_358;
      uStack_35f = uStack_357;
      uStack_35a = uStack_352;
      ppuStack_2c0 = ppuVar37;
      func_0x04bbf2a0(puVar35);
      ppuVar36 = (undefined8 **)(CONCAT26(uStack_352,CONCAT51(uStack_357,uStack_358)) + 0xa8);
      puVar20 = (undefined8 *)plVar19[0x1b];
      puVar6 = (undefined8 *)plVar19[0x1c];
      lVar22 = (long)puVar20 + (CONCAT26(uStack_35a,CONCAT51(uStack_35f,bStack_360)) - (long)puVar6)
      ;
      if (puVar20 != puVar6) {
        lVar30 = 0;
        ppuStack_2c8 = ppuVar24;
        do {
          uVar28 = ((undefined8 *)((long)puVar20 + lVar30))[1];
          *(undefined8 *)(lVar22 + lVar30) = *(undefined8 *)((long)puVar20 + lVar30);
          ((undefined8 *)(lVar22 + lVar30))[1] = uVar28;
          *(undefined8 *)((long)puVar20 + lVar30) = 0;
          ((undefined8 *)((long)puVar20 + lVar30))[1] = 0;
          puVar31 = (undefined8 *)(lVar22 + 0x20 + lVar30);
          *puVar31 = 0;
          puVar31[1] = 0;
          puVar31 = (undefined8 *)(lVar22 + 0x10 + lVar30);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)(lVar22 + 0x30 + lVar30) = 0;
          *(undefined8 *)(lVar22 + 0x28 + lVar30) = *(undefined8 *)((long)puVar20 + lVar30 + 0x28);
          puVar21 = (undefined4 *)((long)puVar20 + lVar30 + 0x18);
          uVar9 = puVar21[1];
          uVar10 = puVar21[2];
          uVar11 = puVar21[3];
          puVar4 = (undefined4 *)(lVar22 + 0x18 + lVar30);
          *puVar4 = *puVar21;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined2 *)((long)puVar20 + lVar30 + 0x18) = 0;
          *(undefined8 *)(lVar22 + 0x10 + lVar30) = *(undefined8 *)((long)puVar20 + lVar30 + 0x10);
          FUN_04167a20(lVar22 + lVar30 + 0x38,(long)puVar20 + lVar30 + 0x38);
          puVar31 = (undefined8 *)((long)puVar20 + lVar30 + 0x40);
          uVar28 = puVar31[1];
          puVar5 = (undefined8 *)(lVar22 + 0x40 + lVar30);
          *puVar5 = *puVar31;
          puVar5[1] = uVar28;
          puVar31 = (undefined8 *)((long)puVar20 + lVar30 + 0x50);
          uVar28 = puVar31[1];
          puVar5 = (undefined8 *)(lVar22 + 0x50 + lVar30);
          *puVar5 = *puVar31;
          puVar5[1] = uVar28;
          puVar31 = (undefined8 *)((long)puVar20 + lVar30 + 0x60);
          uVar28 = puVar31[1];
          puVar5 = (undefined8 *)(lVar22 + 0x60 + lVar30);
          *puVar5 = *puVar31;
          puVar5[1] = uVar28;
          puVar31 = (undefined8 *)((long)puVar20 + lVar30 + 0x60);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)(lVar22 + 0x70 + lVar30) = *(undefined8 *)((long)puVar20 + lVar30 + 0x70);
          puVar31 = (undefined8 *)((long)puVar20 + lVar30 + 0x78);
          uVar28 = puVar31[1];
          puVar5 = (undefined8 *)(lVar22 + 0x78 + lVar30);
          *puVar5 = *puVar31;
          puVar5[1] = uVar28;
          puVar31 = (undefined8 *)(lVar22 + 0x88 + lVar30);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)(lVar22 + 0x98 + lVar30) = 0;
          puVar21 = (undefined4 *)((long)puVar20 + lVar30 + 0x88);
          uVar9 = puVar21[1];
          uVar10 = puVar21[2];
          uVar11 = puVar21[3];
          puVar4 = (undefined4 *)(lVar22 + 0x88 + lVar30);
          *puVar4 = *puVar21;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined8 *)(lVar22 + 0x98 + lVar30) = *(undefined8 *)((long)puVar20 + lVar30 + 0x98);
          puVar31 = (undefined8 *)((long)puVar20 + lVar30 + 0x88);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)((long)puVar20 + lVar30 + 0x98) = 0;
          *(undefined2 *)(lVar22 + 0xa0 + lVar30) = *(undefined2 *)((long)puVar20 + lVar30 + 0xa0);
          lVar16 = lVar30 + 0xa8;
          lVar30 = lVar30 + 0xa8;
        } while ((undefined8 *)((long)puVar20 + lVar16) != puVar6);
        do {
          func_0x04bbc010(puVar20);
          puVar20 = puVar20 + 0x15;
        } while (puVar20 != puVar6);
        puVar20 = *ppuStack_2c0;
        ppuVar24 = ppuStack_2c8;
      }
      plVar19[0x1b] = lVar22;
      plVar19[0x1c] = (long)ppuVar36;
      lVar22 = plVar19[0x1d];
      plVar19[0x1d] = (long)puStack_350;
      if (puVar20 != (undefined8 *)0x0) {
        func_0x0412a280(puVar20,lVar22 - (long)puVar20);
      }
      goto LAB_04adcdf8;
    }
    if (plVar33 < (long *)0x186186186186187) {
      puVar20 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar33 * 0xa8);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0((long)plVar33 * 0xa8,0);
        puVar20 = (undefined8 *)0x0;
      }
      goto LAB_04adcc12;
    }
LAB_04addc3c:
    func_0x04882eb0();
  }
  func_0x04bbf4e0();
LAB_04addc46:
  uVar28 = func_0x04bbf410();
  uStack_388 = func_0x04882e20(uVar28);
  if (((ulong)*ppuVar3 & 1) != 0) {
    func_0x0412a280(ppuVar38[3],(ulong)ppuVar38[1] & 0xfffffffffffffffe);
  }
  *(undefined8 ***)(lVar22 + 0x90) = ppuVar38;
  plVar29 = plVar33 + 1;
  LOCK();
  lVar22 = *plVar29;
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
  }
  LOCK();
  lVar22 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (*(code *)(*ppuVar24)[2])(ppuVar24);
    func_0x0412c2d0(ppuVar24);
  }
  LOCK();
  lVar22 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (*(code *)(*ppuVar24)[2])(ppuVar24);
    func_0x0412c2d0(ppuVar24);
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
    uStack_388 = func_0x0eee2d70(uStack_388);
    plVar33 = plVar19 + 1;
    LOCK();
    lVar22 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    LOCK();
    lVar22 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (*(code *)(*ppuVar24)[2])(ppuVar24);
      func_0x0412c2d0(ppuVar24);
    }
    LOCK();
    lVar22 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (*(code *)(*ppuVar24)[2])(ppuVar24);
      func_0x0412c2d0(ppuVar24);
    }
    if (lStack_b8 != 0) {
      (**(code **)(lStack_b8 + 8))(&lStack_b8);
      uStack_388 = func_0x0eee2d70(uStack_388);
      ppuVar38 = ppuVar24 + 1;
      LOCK();
      puVar20 = *ppuVar38;
      *ppuVar38 = (undefined8 *)((long)*ppuVar38 + -1);
      UNLOCK();
      if (puVar20 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar24)[2])(ppuVar24);
        func_0x0412c2d0(ppuVar24);
      }
      LOCK();
      puVar20 = *ppuVar3;
      *ppuVar3 = (undefined8 *)((long)*ppuVar3 + -1);
      UNLOCK();
      if (puVar20 == (undefined8 *)0x0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      LOCK();
      puVar20 = *ppuVar3;
      *ppuVar3 = (undefined8 *)((long)*ppuVar3 + -1);
      UNLOCK();
      if (puVar20 == (undefined8 *)0x0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      if (puStack_298 != (undefined8 *)0x0) {
        (*(code *)puStack_298[1])(&puStack_298);
      }
      if ((bStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,CONCAT71(uStack_30f,bStack_310) & 0xfffffffffffffffe);
      }
    }
  }
  func_0x0eee2d70(uStack_388);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



/* ---- referenced strings ----
 * 0x1494d5d  <any array element>
 */
