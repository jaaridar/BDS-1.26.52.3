/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb768470 (ELF vaddr 0xb668470)
 * Label: string:CustomBiomeSourceConfig
 * Body:  [[0b768470, 0b768b10] [0b768b20, 0b768c5c] [0b768c60, 0b768d09]]
 * Ghidra: FUN_0b768470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b768470(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined4 uStack_2b0;
  undefined1 uStack_2ac;
  undefined1 uStack_2ab;
  undefined2 uStack_2aa;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 uStack_2a0;
  undefined2 uStack_29f;
  undefined5 uStack_29d;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 *puStack_258;
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
  undefined1 auStack_1e8 [8];
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  
  puStack_1d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puStack_1d8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar3 = _UNK_01384f8b;
  auStack_1e8 = (undefined1  [8])0x1b;
  uStack_1e0 = 0x17;
  *puStack_1d8 = _DAT_01384f83;
  puStack_1d8[1] = uVar3;
  *(undefined8 *)((long)puStack_1d8 + 0xf) = 0x6769666e6f436563;
  *(undefined1 *)((long)puStack_1d8 + 0x17) = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  puStack_258 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_250);
  func_0x048b1dc0(&uStack_240);
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
    if (((ulong)auStack_1e8 & 1) == 0) {
      puStack_258 = puStack_1d8;
      uStack_268 = (ulong)auStack_1e8;
      uStack_260 = uStack_1e0;
    }
    else {
      func_0x04885070(&uStack_268,puStack_1d8,uStack_1e0);
    }
  }
  else {
    uVar8 = (ulong)auStack_1e8 >> 1 & 0x7f;
    puVar7 = (undefined8 *)(auStack_1e8 + 1);
    if (((ulong)auStack_1e8 & 1) != 0) {
      uVar8 = uStack_1e0;
      puVar7 = puStack_1d8;
    }
    func_0x04885120(&uStack_268,puVar7,uVar8);
  }
  auStack_250 = func_0x0b80d5b0();
  if (((ulong)auStack_1e8 & 1) != 0) {
    func_0x0412a280(puStack_1d8,(ulong)auStack_1e8 & 0xfffffffffffffffe);
  }
  uStack_2b0 = 0x65657308;
  uStack_2ac = 100;
  uStack_2ab = 0;
  func_0x0b80e440();
  func_0x065af670(auStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_2b0 & 1) == 0) {
      uStack_1c0 = CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0));
      uStack_1cc = CONCAT22(uStack_2aa,CONCAT11(uStack_2ab,uStack_2ac));
      uStack_1d0 = uStack_2b0;
      uStack_1c8 = uStack_2a8;
      uStack_1c4 = uStack_2a4;
    }
    else {
      func_0x04885070(&uStack_1d0,CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0)),
                      CONCAT44(uStack_2a4,uStack_2a8));
    }
  }
  else {
    bVar10 = (uStack_2b0 & 1) == 0;
    lVar9 = CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0));
    if (bVar10) {
      lVar9 = (long)&uStack_2b0 + 1;
    }
    uVar8 = (ulong)((byte)uStack_2b0 >> 1);
    if (!bVar10) {
      uVar8 = CONCAT44(uStack_2a4,uStack_2a8);
    }
    func_0x04885120(&uStack_1d0,lVar9,uVar8);
  }
  auStack_1b8 = func_0x0b80f030();
  func_0x0b80e440();
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar1 = plStack_1a0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0f2da648;
  plStack_1a8 = plVar6 + 4;
  plVar6[10] = 0;
  plVar6[0x10] = 0;
  *(undefined1 *)(plVar6 + 0x12) = 1;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[4] = (long)&UNK_0f2da698;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1a0 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      lVar9 = *plStack_1a0;
      plStack_1a0 = plVar6;
      (**(code **)(lVar9 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      plVar6 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar6;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar1 = plStack_190;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0f2da6f0;
  plStack_198 = plVar6 + 3;
  *(undefined1 *)(plVar6 + 4) = 1;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[3] = (long)&UNK_0f2da740;
  if (plStack_190 == (long *)0x0) {
LAB_0b7687ca:
    plStack_190 = plVar6;
    if (uStack_228 < uStack_220) goto LAB_0b7687e4;
LAB_0b768829:
    uStack_228 = func_0x065b01f0(&lStack_230,auStack_1e8);
  }
  else {
    LOCK();
    plVar2 = plStack_190 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 != 0) goto LAB_0b7687ca;
    lVar9 = *plStack_190;
    plStack_190 = plVar6;
    (**(code **)(lVar9 + 0x10))(plVar1);
    func_0x0412c2d0(plVar1);
    if (uStack_220 <= uStack_228) goto LAB_0b768829;
LAB_0b7687e4:
    uVar8 = uStack_228;
    func_0x065b0410(uStack_228,auStack_1e8);
    uStack_228 = uVar8 + 0x1b0;
  }
  lVar9 = uStack_228 - 0x1b0;
  func_0x0652dc20(auStack_1e8);
  func_0x064e40a0(lVar9);
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0)),
                    CONCAT26(uStack_2aa,CONCAT15(uStack_2ab,CONCAT14(uStack_2ac,uStack_2b0))) &
                    0xfffffffffffffffe);
  }
  uStack_2b0 = CONCAT31((int3)_DAT_011e11a1,0x22);
  uStack_2ac = (undefined1)((uint)_DAT_011e11a1 >> 0x18);
  uStack_2ab = (undefined1)_UNK_011e11a5;
  uStack_2aa = (undefined2)((uint)_UNK_011e11a5 >> 8);
  uStack_2a8._1_3_ = (undefined3)_UNK_011e11a9;
  uStack_2a8 = CONCAT31(uStack_2a8._1_3_,(char)((uint)_UNK_011e11a5 >> 0x18));
  uStack_2a4._1_3_ = (undefined3)_UNK_011e11ad;
  uStack_2a4 = CONCAT31(uStack_2a4._1_3_,(char)((uint)_UNK_011e11a9 >> 0x18));
  uStack_2a0 = (undefined1)((uint)_UNK_011e11ad >> 0x18);
  uStack_29f = 0x73;
  func_0x065af670(auStack_1e8);
  if ((uStack_1d0 & 1) == 0) {
    if ((uStack_2b0 & 1) == 0) {
      uStack_1c0 = CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0));
      uStack_1cc = CONCAT22(uStack_2aa,CONCAT11(uStack_2ab,uStack_2ac));
      uStack_1d0 = uStack_2b0;
      uStack_1c8 = uStack_2a8;
      uStack_1c4 = uStack_2a4;
    }
    else {
      func_0x04885070(&uStack_1d0,CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0)),
                      CONCAT44(uStack_2a4,uStack_2a8));
    }
  }
  else {
    bVar10 = (uStack_2b0 & 1) != 0;
    lVar9 = (long)&uStack_2b0 + 1;
    if (bVar10) {
      lVar9 = CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0));
    }
    uVar8 = (ulong)((byte)uStack_2b0 >> 1);
    if (bVar10) {
      uVar8 = CONCAT44(uStack_2a4,uStack_2a8);
    }
    func_0x04885120(&uStack_1d0,lVar9,uVar8);
  }
  auVar11 = func_0x0b80fb00();
  auStack_1b8 = auVar11;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  plVar1 = plStack_1a0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0f2da7b0;
  plStack_1a8 = plVar6 + 4;
  plVar6[10] = 0;
  plVar6[0x10] = 0;
  *(undefined1 *)(plVar6 + 0x12) = 1;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[4] = (long)&UNK_0f2da800;
  if (plStack_1a0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_1a0 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      lVar9 = *plStack_1a0;
      plStack_1a0 = plVar6;
      (**(code **)(lVar9 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      plVar6 = plStack_1a0;
    }
  }
  plStack_1a0 = plVar6;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar6 = plStack_190;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &UNK_0f2da858;
  plStack_198 = puVar7 + 3;
  *(undefined1 *)(puVar7 + 4) = 1;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[3] = &UNK_0f2da8a8;
  if (plStack_190 == (long *)0x0) {
LAB_0b768a49:
    plStack_190 = puVar7;
    if (uStack_220 <= uStack_228) {
LAB_0b768a98:
      uStack_228 = func_0x065b01f0(&lStack_230,auStack_1e8);
      goto LAB_0b768aab;
    }
  }
  else {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 != 0) goto LAB_0b768a49;
    lVar9 = *plStack_190;
    plStack_190 = puVar7;
    (**(code **)(lVar9 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
    if (uStack_220 <= uStack_228) goto LAB_0b768a98;
  }
  uVar8 = uStack_228;
  func_0x065b0410(uStack_228,auStack_1e8);
  uStack_228 = uVar8 + 0x1b0;
LAB_0b768aab:
  lVar9 = uStack_228 + -0x1b0;
  func_0x0652dc20(auStack_1e8);
  func_0x064e40a0(lVar9);
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_29d,CONCAT21(uStack_29f,uStack_2a0)),
                    CONCAT26(uStack_2aa,CONCAT15(uStack_2ab,CONCAT14(uStack_2ac,uStack_2b0))) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&lStack_298);
  lVar4 = lStack_280;
  lVar9 = lStack_278;
  if (lStack_280 != 0) {
    for (; lVar4 != lVar9; lVar9 = lVar9 + -0x30) {
      if ((*(byte *)(lVar9 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar9 + -0x10),
                        *(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_278 = lVar4;
    func_0x0412a280(lStack_280,lStack_270 - lStack_280);
  }
  lVar5 = lStack_288;
  lVar4 = lStack_290;
  lVar9 = lStack_298;
  lStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  *param_1 = lVar9;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  param_1[5] = (long)puStack_258;
  param_1[3] = uStack_268;
  param_1[4] = uStack_260;
  uStack_268 = 0;
  uStack_260 = 0;
  puStack_258 = (undefined8 *)0x0;
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
  lVar4 = lStack_298;
  lVar9 = lStack_290;
  if (lStack_298 != 0) {
    for (; lVar4 != lVar9; lVar9 = lVar9 + -0x30) {
      if ((*(byte *)(lVar9 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar9 + -0x10),
                        *(ulong *)(lVar9 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_290 = lVar4;
    func_0x0412a280(lStack_298,lStack_288 - lStack_298);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x11e11a1  userDefinedBiomes
 * 0x1384f83  CustomBiomeSourceConfig
 */
