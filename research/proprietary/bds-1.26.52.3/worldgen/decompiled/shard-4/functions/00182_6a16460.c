/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6b16460 (ELF vaddr 0x6a16460)
 * Label: string:EditorJigsawSection
 * Body:  [[06b16460, 06b16fa1] [06b16fb0, 06b170f5] [06b17100, 06b171d6]]
 * Ghidra: FUN_06b16460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_06b16460(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined4 uStack_2b0;
  undefined1 uStack_2ac;
  undefined2 uStack_2ab;
  undefined1 uStack_2a9;
  undefined1 uStack_2a8;
  undefined1 uStack_2a7;
  undefined2 uStack_2a6;
  uint uStack_2a4;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined1 auStack_250 [16];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  long lStack_1c0;
  undefined1 auStack_1b8 [16];
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  
  uStack_1e8 = CONCAT31((int3)_DAT_0130d8c3,0x26);
  uStack_1e4 = (undefined4)((ulong)_DAT_0130d8c3 >> 0x18);
  uStack_1e0._0_1_ = (undefined1)((ulong)_DAT_0130d8c3 >> 0x38);
  uStack_1e0._1_3_ = (undefined3)_UNK_0130d8cb;
  uStack_1dc = (undefined4)((ulong)_UNK_0130d8cb >> 0x18);
  uStack_1d8 = 0x6e6f6974;
  uStack_1d4 = uStack_1d4 & 0xffffff00;
  lStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  lStack_258 = 0;
  FUN_048b1dc0(auStack_250);
  FUN_048b1dc0(&uStack_240);
  uStack_200 = 0;
  uStack_1f8 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  uStack_220 = 0;
  lStack_218 = 0;
  lStack_230 = 0;
  uStack_228 = 0;
  lStack_1f0 = 0;
  if ((uStack_268 & 1) == 0) {
    lStack_258 = CONCAT44(uStack_1d4,uStack_1d8);
    uStack_268 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_260 = CONCAT44(uStack_1dc,uStack_1e0);
  }
  else {
    func_0x04885120(&uStack_268,(long)&uStack_1e8 + 1,0x13);
  }
  auStack_250 = func_0x06c3dff0();
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_1d4,uStack_1d8),
                    CONCAT44(uStack_1e4,uStack_1e8) & 0xfffffffffffffffe);
  }
  uStack_2b0 = 0x66666f0c;
  uStack_2ac = 0x73;
  uStack_2ab = 0x7465;
  uStack_2a9 = 0;
  func_0x065af670(&uStack_1e8);
  lVar8 = (long)&uStack_2b0 + 1;
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_2b0 & 1) == 0) {
      lStack_1c0 = lStack_2a0;
      uStack_1cc = CONCAT13(uStack_2a9,CONCAT21(uStack_2ab,uStack_2ac));
      uStack_1c8 = CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8));
      uStack_1d0 = uStack_2b0;
      uStack_1c4 = uStack_2a4;
    }
    else {
      func_0x04885070(&uStack_1d0,lStack_2a0,
                      CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8))));
    }
  }
  else {
    bVar9 = (uStack_2b0 & 1) == 0;
    lVar7 = lStack_2a0;
    if (bVar9) {
      lVar7 = lVar8;
    }
    uVar6 = (ulong)((byte)uStack_2b0 >> 1);
    if (!bVar9) {
      uVar6 = CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8)));
    }
    func_0x04885120(&uStack_1d0,lVar7,uVar6);
  }
  auStack_1b8 = func_0x065f3710();
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f07df08;
  plStack_1a8 = plVar4 + 4;
  plVar4[10] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[4] = (long)&UNK_0f07df58;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      lVar7 = *plStack_1a0;
      plStack_1a0 = plVar4;
      (**(code **)(lVar7 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar4 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar4;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f07dfb0;
  plStack_198 = plVar4 + 3;
  *(undefined1 *)(plVar4 + 4) = 1;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[3] = (long)&UNK_0f07e000;
  if (plStack_190 == (long *)0x0) {
LAB_06b1674d:
    plStack_190 = plVar4;
    if (uStack_228 < uStack_220) goto LAB_06b16767;
LAB_06b167ac:
    uStack_228 = func_0x065b01f0(&lStack_230,&uStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_06b1674d;
    lVar7 = *plStack_190;
    plStack_190 = plVar4;
    (**(code **)(lVar7 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_220 <= uStack_228) goto LAB_06b167ac;
LAB_06b16767:
    uVar6 = uStack_228;
    func_0x065b0410(uStack_228,&uStack_1e8);
    uStack_228 = uVar6 + 0x1b0;
  }
  lVar7 = uStack_228 - 0x1b0;
  func_0x0652dc20(&uStack_1e8);
  func_0x064e40a0(lVar7);
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(lStack_2a0,
                    CONCAT17(uStack_2a9,CONCAT25(uStack_2ab,CONCAT14(uStack_2ac,uStack_2b0))) &
                    0xfffffffffffffffe);
  }
  uStack_2b0 = 0x72747316;
  uStack_2ac = 0x75;
  uStack_2ab = 0x7463;
  uStack_2a9 = 0x75;
  uStack_2a8 = 0x72;
  uStack_2a7 = 0x65;
  uStack_2a6 = 0x6449;
  uStack_2a4 = uStack_2a4 & 0xffffff00;
  func_0x065af670(&uStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_2b0 & 1) == 0) {
      lStack_1c0 = lStack_2a0;
      uStack_1cc = CONCAT13(uStack_2a9,CONCAT21(uStack_2ab,uStack_2ac));
      uStack_1c8 = CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8));
      uStack_1d0 = uStack_2b0;
      uStack_1c4 = uStack_2a4;
    }
    else {
      func_0x04885070(&uStack_1d0,lStack_2a0,
                      CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8))));
    }
  }
  else {
    bVar9 = (uStack_2b0 & 1) == 0;
    lVar7 = lStack_2a0;
    if (bVar9) {
      lVar7 = lVar8;
    }
    uVar6 = (ulong)((byte)uStack_2b0 >> 1);
    if (!bVar9) {
      uVar6 = CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8)));
    }
    func_0x04885120(&uStack_1d0,lVar7,uVar6);
  }
  auVar10 = func_0x0d8543b0();
  auStack_1b8 = auVar10;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f07e060;
  plStack_1a8 = plVar4 + 4;
  plVar4[10] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[4] = (long)&UNK_0f07e0b0;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      lVar7 = *plStack_1a0;
      plStack_1a0 = plVar4;
      (**(code **)(lVar7 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar4 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar4;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f07e108;
  plStack_198 = plVar4 + 3;
  *(undefined1 *)(plVar4 + 4) = 1;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[3] = (long)&UNK_0f07e158;
  if (plStack_190 == (long *)0x0) {
LAB_06b169d4:
    plStack_190 = plVar4;
    if (uStack_228 < uStack_220) goto LAB_06b169e6;
LAB_06b16a23:
    uStack_228 = func_0x065b01f0(&lStack_230,&uStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_06b169d4;
    lVar7 = *plStack_190;
    plStack_190 = plVar4;
    (**(code **)(lVar7 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_220 <= uStack_228) goto LAB_06b16a23;
LAB_06b169e6:
    uVar6 = uStack_228;
    func_0x065b0410(uStack_228,&uStack_1e8);
    uStack_228 = uVar6 + 0x1b0;
  }
  lVar7 = uStack_228 - 0x1b0;
  func_0x0652dc20(&uStack_1e8);
  func_0x064e40a0(lVar7);
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(lStack_2a0,
                    CONCAT17(uStack_2a9,CONCAT25(uStack_2ab,CONCAT14(uStack_2ac,uStack_2b0))) &
                    0xfffffffffffffffe);
  }
  uStack_2b0 = 0x756f620c;
  uStack_2ac = 0x6e;
  uStack_2ab = 0x7364;
  uStack_2a9 = 0;
  func_0x065af670(&uStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_2b0 & 1) == 0) {
      lStack_1c0 = lStack_2a0;
      uStack_1cc = CONCAT13(uStack_2a9,CONCAT21(uStack_2ab,uStack_2ac));
      uStack_1c8 = CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8));
      uStack_1d0 = uStack_2b0;
      uStack_1c4 = uStack_2a4;
    }
    else {
      func_0x04885070(&uStack_1d0,lStack_2a0,
                      CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8))));
    }
  }
  else {
    bVar9 = (uStack_2b0 & 1) == 0;
    lVar7 = lStack_2a0;
    if (bVar9) {
      lVar7 = lVar8;
    }
    uVar6 = (ulong)((byte)uStack_2b0 >> 1);
    if (!bVar9) {
      uVar6 = CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8)));
    }
    func_0x04885120(&uStack_1d0,lVar7,uVar6);
  }
  auVar10 = func_0x065f4130();
  auStack_1b8 = auVar10;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f07e1b8;
  plStack_1a8 = plVar4 + 4;
  plVar4[10] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[4] = (long)&UNK_0f07e208;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      lVar7 = *plStack_1a0;
      plStack_1a0 = plVar4;
      (**(code **)(lVar7 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar4 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar4;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = plStack_190;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f07e260;
  plStack_198 = plVar4 + 3;
  *(undefined1 *)(plVar4 + 4) = 1;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[3] = (long)&UNK_0f07e2b0;
  if (plStack_190 == (long *)0x0) {
LAB_06b16c4b:
    plStack_190 = plVar4;
    if (uStack_228 < uStack_220) goto LAB_06b16c5d;
LAB_06b16c9a:
    uStack_228 = func_0x065b01f0(&lStack_230,&uStack_1e8);
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_06b16c4b;
    lVar7 = *plStack_190;
    plStack_190 = plVar4;
    (**(code **)(lVar7 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_220 <= uStack_228) goto LAB_06b16c9a;
LAB_06b16c5d:
    uVar6 = uStack_228;
    func_0x065b0410(uStack_228,&uStack_1e8);
    uStack_228 = uVar6 + 0x1b0;
  }
  lVar7 = uStack_228 - 0x1b0;
  func_0x0652dc20(&uStack_1e8);
  func_0x064e40a0(lVar7);
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(lStack_2a0,
                    CONCAT17(uStack_2a9,CONCAT25(uStack_2ab,CONCAT14(uStack_2ac,uStack_2b0))) &
                    0xfffffffffffffffe);
  }
  uStack_2b0 = 0x746f7210;
  uStack_2ac = 0x61;
  uStack_2ab = 0x6974;
  uStack_2a9 = 0x6f;
  uStack_2a8 = 0x6e;
  uStack_2a7 = 0;
  func_0x065af670(&uStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_2b0 & 1) == 0) {
      lStack_1c0 = lStack_2a0;
      uStack_1cc = CONCAT13(uStack_2a9,CONCAT21(uStack_2ab,uStack_2ac));
      uStack_1c8 = CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8));
      uStack_1d0 = uStack_2b0;
      uStack_1c4 = uStack_2a4;
    }
    else {
      func_0x04885070(&uStack_1d0,lStack_2a0,
                      CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8))));
    }
  }
  else {
    bVar9 = (uStack_2b0 & 1) != 0;
    if (bVar9) {
      lVar8 = lStack_2a0;
    }
    uVar6 = (ulong)((byte)uStack_2b0 >> 1);
    if (bVar9) {
      uVar6 = CONCAT44(uStack_2a4,CONCAT22(uStack_2a6,CONCAT11(uStack_2a7,uStack_2a8)));
    }
    func_0x04885120(&uStack_1d0,lVar8,uVar6);
  }
  auVar10 = func_0x06858140();
  auStack_1b8 = auVar10;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar2 = plStack_1a0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f07e310;
  plStack_1a8 = plVar4 + 4;
  plVar4[10] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)(plVar4 + 0x12) = 1;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[4] = (long)&UNK_0f07e360;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      lVar8 = *plStack_1a0;
      plStack_1a0 = plVar4;
      (**(code **)(lVar8 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar4 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar4;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar4 = plStack_190;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &UNK_0f07e3b8;
  plStack_198 = puVar5 + 3;
  *(undefined1 *)(puVar5 + 4) = 1;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[3] = &UNK_0f07e408;
  if (plStack_190 == (long *)0x0) {
LAB_06b16eda:
    plStack_190 = puVar5;
    if (uStack_220 <= uStack_228) {
LAB_06b16f29:
      uStack_228 = func_0x065b01f0(&lStack_230,&uStack_1e8);
      goto LAB_06b16f3c;
    }
  }
  else {
    LOCK();
    plVar2 = plStack_190 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_06b16eda;
    lVar8 = *plStack_190;
    plStack_190 = puVar5;
    (**(code **)(lVar8 + 0x10))(plVar4);
    func_0x0412c2d0(plVar4);
    if (uStack_220 <= uStack_228) goto LAB_06b16f29;
  }
  uVar6 = uStack_228;
  func_0x065b0410(uStack_228,&uStack_1e8);
  uStack_228 = uVar6 + 0x1b0;
LAB_06b16f3c:
  lVar8 = uStack_228 + -0x1b0;
  func_0x0652dc20(&uStack_1e8);
  func_0x064e40a0(lVar8);
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(lStack_2a0,
                    CONCAT17(uStack_2a9,CONCAT25(uStack_2ab,CONCAT14(uStack_2ac,uStack_2b0))) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&lStack_298);
  lVar7 = lStack_280;
  lVar8 = lStack_278;
  if (lStack_280 != 0) {
    for (; lVar7 != lVar8; lVar8 = lVar8 + -0x30) {
      if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                        *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_278 = lVar7;
    func_0x0412a280(lStack_280,lStack_270 - lStack_280);
  }
  lVar3 = lStack_288;
  lVar7 = lStack_290;
  lVar8 = lStack_298;
  lStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  *param_1 = lVar8;
  param_1[1] = lVar7;
  param_1[2] = lVar3;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  param_1[5] = lStack_258;
  param_1[3] = uStack_268;
  param_1[4] = uStack_260;
  uStack_268 = 0;
  uStack_260 = 0;
  lStack_258 = 0;
  *(undefined4 *)(param_1 + 8) = uStack_240;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_23c;
  *(undefined4 *)(param_1 + 9) = uStack_238;
  *(undefined4 *)((long)param_1 + 0x4c) = uStack_234;
  *(undefined1 (*) [16])(param_1 + 6) = auStack_250;
  param_1[10] = lStack_230;
  param_1[0xb] = uStack_228;
  param_1[0xc] = uStack_220;
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  param_1[0xd] = lStack_218;
  param_1[0xe] = lStack_210;
  param_1[0xf] = lStack_208;
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_200;
  *(undefined4 *)((long)param_1 + 0x84) = uStack_200._4_4_;
  *(undefined4 *)(param_1 + 0x11) = (undefined4)uStack_1f8;
  *(undefined4 *)((long)param_1 + 0x8c) = uStack_1f8._4_4_;
  param_1[0x12] = lStack_1f0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  lStack_1f0 = 0;
  func_0x0652e400(&lStack_280);
  lVar7 = lStack_298;
  lVar8 = lStack_290;
  if (lStack_298 != 0) {
    for (; lVar7 != lVar8; lVar8 = lVar8 + -0x30) {
      if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                        *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_290 = lVar7;
    func_0x0412a280(lStack_298,lStack_288 - lStack_298);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x130d8c3  EditorJigsawSection
 */
