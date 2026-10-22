/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6242da0 (ELF vaddr 0x6142da0)
 * Label: caller-of-callee
 * Body:  [[06242da0, 062436f0] [06243700, 06243785] [06243790, 062437dc] [062437e0, 0624382b] [06243830, 062438c7] [062438d0, 062438f3] [06243900, 06243958] [06243960, 06243a54] [06243a60, 06243bf7] [06243c00, 062441f1] [06244200, 0624460b] [06244610, 06244855] [06244860, 06244a9d] [06244aa0, 06245280] [06245290, 062455e8] [062455f0, 06245957] [06245960, 06245b27] [06245b30, 06245ce0] [06245cf0, 06245db1] [06245dc0, 06245eb5]]
 * Ghidra: FUN_06242da0
 */


/* WARNING: Removing unreachable block (ram,0x06244b54) */
/* WARNING: Removing unreachable block (ram,0x06243fe5) */
/* WARNING: Removing unreachable block (ram,0x062448f7) */
/* WARNING: Removing unreachable block (ram,0x062446e8) */
/* WARNING: Removing unreachable block (ram,0x0624491e) */
/* WARNING: Removing unreachable block (ram,0x06244709) */
/* WARNING: Removing unreachable block (ram,0x0624493f) */
/* WARNING: Removing unreachable block (ram,0x0624472a) */
/* WARNING: Removing unreachable block (ram,0x06244b4b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffc19 : 0x06244040 */
/* WARNING: Removing unreachable block (ram,0x06244b6d) */
/* WARNING: Removing unreachable block (ram,0x06244b76) */
/* WARNING: Removing unreachable block (ram,0x06244b8f) */
/* WARNING: Removing unreachable block (ram,0x06244b94) */
/* WARNING: Removing unreachable block (ram,0x06244bb1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_06242da0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lVar23;
  undefined1 (*pauVar24) [16];
  char cVar25;
  int iVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  undefined8 *puVar29;
  undefined1 (*pauVar30) [16];
  undefined7 *puVar31;
  undefined1 (*pauVar32) [16];
  byte *pbVar33;
  undefined *puVar34;
  byte bVar35;
  undefined1 (*pauVar36) [16];
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  bool bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_408 [16];
  undefined1 (*pauStack_3f8) [16];
  undefined8 uStack_3e8;
  undefined1 (*pauStack_3e0) [16];
  undefined1 (*pauStack_3d8) [16];
  undefined8 uStack_3d0;
  undefined1 (*pauStack_3c8) [16];
  undefined1 (*pauStack_3c0) [16];
  undefined1 (*pauStack_3b8) [16];
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  uint uStack_3a8;
  byte bStack_3a0;
  undefined1 uStack_360;
  uint uStack_358;
  byte bStack_350;
  undefined1 auStack_34f [7];
  undefined1 (*pauStack_348) [16];
  undefined1 (*pauStack_340) [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 (*pauStack_318) [16];
  undefined1 auStack_310 [16];
  long lStack_300;
  byte bStack_2f8;
  byte *pbStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 (*pauStack_2d8) [16];
  undefined8 uStack_2c8;
  undefined1 (*pauStack_2c0) [16];
  undefined1 (*pauStack_2b8) [16];
  undefined8 uStack_2a8;
  undefined1 (*pauStack_2a0) [16];
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_288) [16];
  byte bStack_280;
  undefined7 uStack_27f;
  ulong uStack_278;
  undefined7 *puStack_270;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  ulong uStack_228;
  byte bStack_218;
  undefined1 auStack_217 [6];
  undefined1 uStack_211;
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 auStack_1f8 [8];
  undefined1 (*pauStack_1f0) [16];
  undefined1 auStack_1e8 [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 auStack_1d0 [16];
  ulong uStack_1c0;
  char acStack_1b8 [56];
  uint uStack_180;
  byte bStack_178;
  undefined1 auStack_168 [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 (*pauStack_128) [16];
  undefined1 auStack_120 [16];
  long lStack_110;
  byte bStack_108;
  undefined1 (*pauStack_100) [16];
  byte *pbStack_f8;
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined7 *puStack_d0;
  ulong uStack_c8;
  undefined7 *puStack_c0;
  ulong uStack_b8;
  undefined7 *puStack_b0;
  ulong uStack_a8;
  undefined7 *puStack_a0;
  ulong uStack_98;
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined7 *puStack_80;
  ulong uStack_78;
  undefined1 (*pauStack_70) [16];
  undefined1 (*pauStack_68) [16];
  undefined1 (*pauStack_60) [16];
  undefined1 (*pauStack_58) [16];
  undefined1 (*pauStack_50) [16];
  undefined1 (*pauStack_48) [16];
  undefined1 (*pauStack_40) [16];
  ulong uStack_38;
  
  auStack_2e8 = (undefined1  [16])0x0;
  pauStack_2d8 = (undefined1 (*) [16])0x0;
  bVar41 = (param_1[0x26][0] & 1) == 0;
  uStack_3e8 = *(undefined1 (**) [16])param_1[0x27];
  if (bVar41) {
    uStack_3e8 = (undefined1 (*) [16])(param_1[0x26] + 1);
  }
  pauStack_3e0 = (undefined1 (*) [16])(ulong)((byte)param_1[0x26][0] >> 1);
  if (!bVar41) {
    pauStack_3e0 = *(undefined1 (**) [16])(param_1[0x26] + 8);
  }
  pauStack_3d8 = *(undefined1 (**) [16])param_2[1];
  uStack_3d0 = *(undefined1 (**) [16])(*param_2 + 8);
  if (((*param_2)[0] & 1) == 0) {
    pauStack_3d8 = (undefined1 (*) [16])(*param_2 + 1);
    uStack_3d0 = (undefined1 (*) [16])(ulong)((byte)(*param_2)[0] >> 1);
  }
  func_0x048ad670(&bStack_350,&uStack_3e8,2,0x2f);
  bVar41 = ((*param_2)[0] & 1) != 0;
  uStack_3e8 = (undefined1 (*) [16])(*param_2 + 1);
  if (bVar41) {
    uStack_3e8 = (undefined1 (*) [16])*(undefined **)param_2[1];
  }
  pauStack_3e0 = (undefined1 (*) [16])(ulong)((byte)(*param_2)[0] >> 1);
  if (bVar41) {
    pauStack_3e0 = *(undefined1 (**) [16])(*param_2 + 8);
  }
  func_0x0470d9a0(auStack_1f8,&UNK_01377d93,6,0xd,&uStack_3e8);
  bVar41 = (param_1[0x26][0] & 1) != 0;
  pauVar40 = (undefined1 (*) [16])(param_1[0x26] + 1);
  if (bVar41) {
    pauVar40 = *(undefined1 (**) [16])param_1[0x27];
  }
  pauStack_3e0 = (undefined1 (*) [16])(ulong)((byte)param_1[0x26][0] >> 1);
  if (bVar41) {
    pauStack_3e0 = *(undefined1 (**) [16])(param_1[0x26] + 8);
  }
  bVar41 = (auStack_1f8[0] & 1) != 0;
  pauStack_3d8 = (undefined1 (*) [16])(auStack_1f8 + 1);
  if (bVar41) {
    pauStack_3d8 = (undefined1 (*) [16])auStack_1e8._0_8_;
  }
  uStack_3d0 = (undefined1 (*) [16])(ulong)(auStack_1f8[0] >> 1);
  if (bVar41) {
    uStack_3d0 = pauStack_1f0;
  }
  uStack_3e8 = pauVar40;
  func_0x048ad670(&bStack_280,&uStack_3e8,2,0x2f);
  if ((auStack_1f8[0] & 1) != 0) {
    func_0x0412a280(auStack_1e8._0_8_,(ulong)auStack_1f8 & 0xfffffffffffffffe);
  }
  if (DAT_0f7b8fb8 == '\0') goto LAB_06245e6b;
LAB_06242f29:
  pauStack_58 = (undefined1 (*) [16])(ulong)(bStack_350 >> 1);
  pauStack_60 = (undefined1 (*) [16])auStack_34f;
  if ((bStack_350 & 1) != 0) {
    pauStack_58 = pauStack_348;
    pauStack_60 = pauStack_340;
  }
  cVar25 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pauStack_60);
  if (cVar25 == '\0') goto LAB_0624358e;
  pauStack_68 = (undefined1 (*) [16])(ulong)(bStack_350 >> 1);
  pauStack_70 = (undefined1 (*) [16])auStack_34f;
  if ((bStack_350 & 1) != 0) {
    pauStack_68 = pauStack_348;
    pauStack_70 = pauStack_340;
  }
  puStack_80 = &uStack_27f;
  uStack_78 = (ulong)(bStack_280 >> 1);
  if ((bStack_280 & 1) != 0) {
    uStack_78 = uStack_278;
    puStack_80 = puStack_270;
  }
  (**(code **)(_DAT_0f7b8f98 + 0xa8))(auStack_338,&DAT_0f7b8f98,&pauStack_70,&puStack_80);
  if (bStack_2f8 != 0) goto LAB_06243427;
  pauVar40 = *(undefined1 (**) [16])(param_1[1] + 8);
  pauVar28 = (undefined1 (*) [16])(auStack_268 + 8);
  auStack_258 = (undefined1  [16])0x0;
  auStack_268._0_8_ = 0;
  auStack_268._8_8_ = 0;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = auStack_248._8_8_;
  auStack_248 = auVar44 << 0x40;
  if ((DAT_0f569528 & 1) == 0) {
    auStack_268._9_7_ = uRam000000000f569529;
    auStack_268[8] = DAT_0f569528;
    auStack_258._8_8_ = _DAT_0f569538;
    auStack_258._0_8_ = _DAT_0f569530;
  }
  else {
    func_0x04885070(pauVar28,_DAT_0f569538,_DAT_0f569530);
  }
  auStack_268._0_8_ = _DAT_0f569520;
  auStack_408 = (undefined1  [16])0x0;
  pauStack_3f8 = (undefined1 (*) [16])0x0;
  pauStack_1f0._0_1_ = 0;
  auStack_1f8 = (undefined1  [8])auStack_408;
  pauVar27 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  pauVar30 = &auStack_408;
  pauVar32 = &auStack_408;
  if (pauVar27 == (undefined1 (*) [16])0x0) goto LAB_06245e3f;
LAB_062430f5:
  auStack_408._8_8_ = pauVar27;
  auStack_408._0_8_ = pauVar27;
  pauStack_3f8 = (undefined1 (*) [16])(pauVar27[2] + 8);
  auStack_148._0_8_ = pauVar27;
  uStack_2c8 = pauVar27;
  pauStack_3e0 = (undefined1 (*) [16])&uStack_2c8;
  pauStack_3d8 = &auStack_148;
  uStack_3d0 = (undefined1 (*) [16])((ulong)uStack_3d0 & 0xffffffffffffff00);
  pauVar27[1] = (undefined1  [16])0x0;
  *pauVar27 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar27[2] = 0;
  pauVar30 = pauVar27;
  uStack_3e8 = pauVar32;
  pauVar32 = pauVar27;
  if (pauVar27 != &auStack_268) {
    if ((auStack_268[8] & 1) == 0) {
      *(undefined8 *)(pauVar27[1] + 8) = *(undefined8 *)pauVar28[1];
      uVar2 = *(undefined8 *)(*pauVar28 + 8);
      *(undefined8 *)(*pauVar27 + 8) = *(undefined8 *)*pauVar28;
      *(undefined8 *)pauVar27[1] = uVar2;
    }
    else {
      func_0x04885070(*pauVar27 + 8,auStack_258._8_8_,auStack_258._0_8_);
      pauVar30 = (undefined1 (*) [16])auStack_148._0_8_;
      pauVar32 = (undefined1 (*) [16])auStack_408._0_8_;
    }
  }
  auStack_408._0_8_ = pauVar32;
  *(undefined8 *)*pauVar27 = auStack_268._0_8_;
  auStack_408._8_8_ = pauVar30[2] + 8;
  pauVar28 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (pauVar28 == (undefined1 (*) [16])0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar2 = _UNK_012d90aa;
  *(ulong *)(pauVar28[1] + 0xd) = CONCAT53(_UNK_012d90a5,_DAT_012d90a2);
  *(undefined8 *)(pauVar28[2] + 5) = uVar2;
  uVar2 = CONCAT35(_DAT_012d90a2,_UNK_012d909d);
  *(undefined8 *)pauVar28[1] = _DAT_012d9095;
  *(undefined8 *)(pauVar28[1] + 8) = uVar2;
  uVar2 = _UNK_012d908d;
  *(undefined8 *)*pauVar28 = _DAT_012d9085;
  *(undefined8 *)(*pauVar28 + 8) = uVar2;
  pauVar28[2][0xd] = 0;
  auStack_138[8] = 0;
  auStack_138._0_8_ = pauVar28;
  auStack_120[8] = 0;
  auStack_148 = (undefined1  [16])0x0;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = auStack_138._8_8_;
  auStack_138 = auVar13 << 0x40;
  auStack_1e8[8] = 0;
  auStack_1d0[8] = 0;
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
  acStack_1b8[0] = '\0';
  bStack_178 = 0;
  pauStack_3e0 = (undefined1 (*) [16])0x31;
  pauStack_3d8 = (undefined1 (*) [16])0x2d;
  _auStack_1f8 = (undefined1  [16])0x0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auStack_1e8._8_8_;
  auStack_1e8 = auVar14 << 0x40;
  pauStack_3c8 = (undefined1 (*) [16])((ulong)pauStack_3c8 & 0xffffffffffffff00);
  uStack_3b0 = 0;
  uStack_3a8 = 1;
  bStack_3a0 = 0;
  uStack_360 = 0;
  uStack_358 = 1;
  uStack_3d0 = pauVar28;
  func_0x060aeeb0(pauVar40,1,1,auStack_408,&uStack_3e8,1);
  if ((ulong)uStack_358 != 0xffffffff) {
    (**(code **)(&UNK_0f023e00 + (ulong)uStack_358 * 8))(&uStack_2c8,&pauStack_3e0);
    uStack_358 = 0xffffffff;
    if ((bStack_178 & 1) != 0) {
      if ((ulong)uStack_180 != 0xffffffff) {
        (**(code **)(&UNK_0f023ee0 + (ulong)uStack_180 * 8))(&uStack_2c8,acStack_1b8);
      }
      uStack_180 = 0xffffffff;
    }
  }
  if ((uStack_1c0 & 0xffffffff) != 0xffffffff) {
    (**(code **)(&UNK_0f023ee0 + (uStack_1c0 & 0xffffffff) * 8))(&uStack_2c8,auStack_1f8);
  }
  pauVar40 = (undefined1 (*) [16])auStack_408._0_8_;
  if ((undefined1 (*) [16])auStack_408._0_8_ != (undefined1 (*) [16])0x0) {
    for (pauVar28 = (undefined1 (*) [16])auStack_408._8_8_; pauVar40 != pauVar28;
        pauVar28 = (undefined1 (*) [16])(pauVar28[-3] + 8)) {
      if ((pauVar28[-2][0] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)pauVar28[-1],*(ulong *)pauVar28[-2] & 0xfffffffffffffffe);
      }
    }
    auStack_408._8_8_ = pauVar40;
    func_0x0412a280(auStack_408._0_8_,(long)pauStack_3f8 - auStack_408._0_8_);
  }
  if ((auStack_268[8] & 1) != 0) {
    func_0x0412a280(auStack_258._8_8_,auStack_268._8_8_ & 0xfffffffffffffffe);
  }
LAB_06243427:
  uStack_3e8 = (undefined1 (*) [16])0x85eaac5f456d7e;
  pauStack_3e0 = (undefined1 (*) [16])&UNK_0140f690;
  pauStack_3d8 = (undefined1 (*) [16])0x1;
  uStack_3d0 = (undefined1 (*) [16])CONCAT44(uStack_3d0._4_4_,0x2c0);
  if ((bStack_2f8 & 1) == 0) {
    _auStack_1f8 = (undefined1  [16])0x0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auStack_1e8._8_8_;
    auStack_1e8 = auVar15 << 0x40;
    func_0x0eedeb80(2,0x2d,auStack_338,auStack_1f8,&uStack_3e8);
    if ((auStack_1f8[0] & 1) != 0) {
      func_0x0412a280(auStack_1e8._0_8_,(ulong)auStack_1f8 & 0xfffffffffffffffe);
    }
  }
  uVar2 = auStack_310._0_8_;
  if ((bStack_2f8 & 1) == 0) {
    if (auStack_310._0_8_ != 0) {
      lVar38 = auStack_310._8_8_;
      while (uVar2 != lVar38) {
        lVar38 = lVar38 + -0x40;
        FUN_048b3e80(lVar38);
      }
      auStack_310._8_8_ = uVar2;
      func_0x0412a280(auStack_310._0_8_,lStack_300 - auStack_310._0_8_);
    }
    pauVar40 = (undefined1 (*) [16])auStack_328._0_8_;
    if ((undefined1 (*) [16])auStack_328._0_8_ != (undefined1 (*) [16])0x0) {
      for (pauVar28 = (undefined1 (*) [16])auStack_328._8_8_; pauVar40 != pauVar28;
          pauVar28 = pauVar28 + -5) {
        if ((pauVar28[-1][8] == '\x01') && ((pauVar28[-3][0] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)pauVar28[-2],*(ulong *)pauVar28[-3] & 0xfffffffffffffffe);
        }
      }
      auStack_328._8_8_ = pauVar40;
      func_0x0412a280(auStack_328._0_8_,(long)pauStack_318 - auStack_328._0_8_);
    }
  }
LAB_0624358e:
  pauStack_88 = (undefined1 (*) [16])(ulong)(bStack_350 >> 1);
  pauStack_90 = (undefined1 (*) [16])auStack_34f;
  if ((bStack_350 & 1) != 0) {
    pauStack_88 = pauStack_348;
    pauStack_90 = pauStack_340;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_3e8,&DAT_0f7b8f98,&pauStack_90);
  pauStack_1f0 = (undefined1 (*) [16])&UNK_0140f690;
  auStack_1f8 = (undefined1  [8])0x85eaac5f456d7e;
  auStack_1e8._8_4_ = 0x2c3;
  auStack_1e8._0_8_ = 1;
  if ((byte)uStack_3a8 == 0) {
    auStack_338 = (undefined1  [16])0x0;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auStack_328._8_8_;
    auStack_328 = auVar16 << 0x40;
    func_0x0eedeb80(2,0x2d,&uStack_3e8,auStack_338,auStack_1f8);
    if ((auStack_338[0] & 1) != 0) {
      func_0x0412a280(auStack_328._0_8_,auStack_338._0_8_ & 0xfffffffffffffffe);
    }
  }
  pauVar28 = pauStack_3c0;
  if (((byte)uStack_3a8 & 1) == 0) {
    pauVar40 = pauStack_3b8;
    if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
      while (pauVar28 != pauVar40) {
        FUN_048b3e80(pauVar40 + -4);
        pauVar40 = pauVar40 + -4;
      }
      pauStack_3b8 = pauVar28;
      func_0x0412a280(pauStack_3c0,CONCAT71(uStack_3af,uStack_3b0) - (long)pauStack_3c0);
    }
    pauVar40 = pauStack_3d8;
    pauVar28 = uStack_3d0;
    if (pauStack_3d8 != (undefined1 (*) [16])0x0) {
      for (; pauVar40 != pauVar28; pauVar28 = pauVar28 + -5) {
        if ((pauVar28[-1][8] == '\x01') && ((pauVar28[-3][0] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)pauVar28[-2],*(ulong *)pauVar28[-3] & 0xfffffffffffffffe);
        }
      }
      uStack_3d0 = pauVar40;
      func_0x0412a280(pauStack_3d8,(long)pauStack_3c8 - (long)pauStack_3d8);
    }
  }
  lVar38 = func_0x06339cc0(param_1 + 0x22,param_2,param_2);
  pauVar32 = *(undefined1 (**) [16])(lVar38 + 0x40);
  pauVar28 = (undefined1 (*) [16])(lVar38 + 0x48);
  pauVar30 = pauVar28;
  if (pauVar32 != pauVar28) {
    do {
      pauStack_150 = pauVar30;
      pbStack_2f0 = *(byte **)(pauVar32[2] + 8);
      pbStack_f8 = *(byte **)pauVar32[3];
      pauStack_100 = pauVar32;
      if (pbStack_2f0 != pbStack_f8) {
LAB_062437fe:
        pauVar27 = (undefined1 (*) [16])&DAT_0f7b8f98;
        pauVar30 = (undefined1 (*) [16])&DAT_0141433a;
        if ((bStack_350 & 1) == 0) {
          pauStack_298 = pauStack_340;
          uStack_2a8 = CONCAT71(auStack_34f,bStack_350);
          pauStack_2a0 = pauStack_348;
        }
        else {
          func_0x0412e5e0(&uStack_2a8,pauStack_340,pauStack_348);
        }
        bVar35 = pauVar32[2][0];
        param_1 = (undefined1 (*) [16])(ulong)bVar35;
        if ((DAT_0f7b8fb8 == '\0') && (iVar26 = FUN_04108328(&DAT_0f7b8fb8), iVar26 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        pauStack_48 = (undefined1 (*) [16])(uStack_2a8 >> 1 & 0x7f);
        pauStack_50 = (undefined1 (*) [16])((long)&uStack_2a8 + 1);
        if ((uStack_2a8 & 1) != 0) {
          pauStack_48 = pauStack_2a0;
          pauStack_50 = pauStack_298;
        }
        cVar25 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pauStack_50);
        if (cVar25 != '\0') {
          puVar29 = _DAT_0f56adc8;
          if (_DAT_0f56adc8 != (undefined8 *)0x0) {
            do {
              if (bVar35 < *(byte *)(puVar29 + 4)) {
                puVar29 = (undefined8 *)*puVar29;
              }
              else {
                if (bVar35 <= *(byte *)(puVar29 + 4)) goto LAB_06243960;
                puVar29 = (undefined8 *)puVar29[1];
              }
              if (puVar29 == (undefined8 *)0x0) break;
            } while( true );
          }
          func_0x04882ef0(&UNK_011b50a6);
LAB_06245e21:
          func_0x04882e30();
          goto LAB_06245e26;
        }
        param_1 = (undefined1 (*) [16])(ulong)((byte)uStack_2a8 >> 1);
        param_2 = (undefined1 (*) [16])((long)&uStack_2a8 + 1);
        if ((uStack_2a8 & 1) != 0) {
          param_1 = pauStack_2a0;
          param_2 = pauStack_298;
        }
        if ((undefined1 (*) [16])0xfffffffffffffff7 < param_1) goto LAB_06245e21;
        if (param_1 < (undefined1 (*) [16])0x17) {
          uStack_3e8 = (undefined1 (*) [16])CONCAT71(uStack_3e8._1_7_,(char)param_1 * '\x02');
          pauVar40 = (undefined1 (*) [16])((long)&uStack_3e8 + 1);
          if (param_1 != (undefined1 (*) [16])0x0) goto LAB_06243aab;
        }
        else {
          uVar39 = ((ulong)param_1 | 7) + 1;
          if (((ulong)param_1 | 7) == 0x17) {
            uVar39 = 0x1a;
          }
          pauVar40 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar39);
          if (pauVar40 == (undefined1 (*) [16])0x0) {
            func_0x0eec74c0(uVar39,0);
          }
          pauVar27 = (undefined1 (*) [16])(uVar39 | 1);
          uStack_3e8 = pauVar27;
          pauStack_3e0 = param_1;
          pauStack_3d8 = pauVar40;
LAB_06243aab:
          memmove(pauVar40,param_2,param_1);
        }
        pauVar28 = uStack_3e8;
        (*pauVar40)[(long)param_1] = 0;
        param_1 = (undefined1 (*) [16])(((ulong)uStack_3e8 & 0xfffffffffffffffe) - 1);
        pauVar40 = pauStack_3e0;
        if (((ulong)uStack_3e8 & 1) == 0) {
          param_1 = (undefined1 (*) [16])0x16;
          pauVar40 = (undefined1 (*) [16])((ulong)uStack_3e8 >> 1 & 0x7f);
        }
        if ((ulong)((long)param_1 - (long)pauVar40) < 0x1c) {
          pauVar27 = (undefined1 (*) [16])(pauVar40[1] + 0xc);
          if ((ulong)((long)pauVar27 - (long)param_1) <= -(long)param_1 - 10U) {
            pauVar30 = (undefined1 (*) [16])((long)&uStack_3e8 + 1);
            if (((ulong)uStack_3e8 & 1) != 0) {
              pauVar30 = pauStack_3d8;
            }
            uVar39 = 0xfffffffffffffff7;
            if (param_1 < (undefined1 (*) [16])0x7ffffffffffffff3) {
              pauVar28 = (undefined1 (*) [16])((long)param_1 * 2);
              if ((undefined1 (*) [16])((long)param_1 * 2) < pauVar27) {
                pauVar28 = pauVar27;
              }
              uVar39 = ((ulong)pauVar28 | 7) + 1;
              if (((ulong)pauVar28 | 7) == 0x17) {
                uVar39 = 0x1a;
              }
              if (pauVar28 < (undefined1 (*) [16])0x17) {
                uVar39 = 0x17;
              }
            }
            pauVar28 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar39);
            if (uVar39 != 0 && pauVar28 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(uVar39,0);
            }
            uVar2 = _UNK_0141434e;
            *(ulong *)(*pauVar28 + 0xc) = CONCAT44(_UNK_0141434a,_DAT_01414346);
            *(undefined8 *)(pauVar28[1] + 4) = uVar2;
            uVar2 = CONCAT44(_DAT_01414346,_UNK_01414342);
            *(undefined8 *)*pauVar28 = _DAT_0141433a;
            *(undefined8 *)(*pauVar28 + 8) = uVar2;
            if (pauVar40 != (undefined1 (*) [16])0x0) {
              memmove(pauVar28[1] + 0xc,pauVar30,pauVar40);
            }
            if (*param_1 + 1 != (undefined *)0x17) {
              func_0x0412a280(pauVar30,*param_1 + 1);
            }
            uStack_3e8 = (undefined1 (*) [16])(uVar39 | 1);
            (*pauVar28)[(long)pauVar27] = 0;
            pauStack_3e0 = pauVar27;
            pauStack_3d8 = pauVar28;
            goto LAB_062441a1;
          }
          goto LAB_06245e35;
        }
        pauVar32 = pauStack_3d8;
        if (((ulong)uStack_3e8 & 1) == 0) {
          pauVar32 = (undefined1 (*) [16])((long)&uStack_3e8 + 1);
        }
        pauVar30 = (undefined1 (*) [16])&DAT_0141433a;
        if (pauVar40 != (undefined1 (*) [16])0x0) {
          lVar38 = 0;
          if (&DAT_0141433a < *pauVar32 + (long)pauVar40) {
            lVar38 = 0x1c;
          }
          if ((undefined1 (*) [16])&DAT_0141433a < pauVar32) {
            lVar38 = 0;
          }
          pauVar30 = (undefined1 (*) [16])(&DAT_0141433a + lVar38);
          puVar34 = pauStack_3d8[1] + 0xc;
          if (((ulong)uStack_3e8 & 1) == 0) {
            puVar34 = (undefined *)((long)&uStack_3d0 + 5);
          }
          memmove(puVar34,pauVar32,pauVar40);
        }
        pauVar36 = (undefined1 (*) [16])(pauVar40[1] + 0xc);
        uVar2 = *(undefined8 *)*pauVar30;
        uVar10 = *(undefined8 *)(*pauVar30 + 8);
        uVar12 = *(undefined8 *)(pauVar30[1] + 4);
        *(undefined8 *)(*pauVar32 + 0xc) = *(undefined8 *)(*pauVar30 + 0xc);
        *(undefined8 *)(pauVar32[1] + 4) = uVar12;
        *(undefined8 *)*pauVar32 = uVar2;
        *(undefined8 *)(*pauVar32 + 8) = uVar10;
        pauVar40 = pauVar36;
        if (((ulong)pauVar28 & 1) == 0) {
          uStack_3e8 = (undefined1 (*) [16])CONCAT71(uStack_3e8._1_7_,(char)pauVar36 * '\x02');
          pauVar40 = pauStack_3e0;
        }
        pauStack_3e0 = pauVar40;
        (*pauVar32)[(long)pauVar36] = 0;
LAB_062441a1:
        pauVar32 = pauStack_3e0;
        pauVar40 = uStack_3e8;
        param_2 = (undefined1 (*) [16])auStack_2e8._0_8_;
        pauStack_288 = pauStack_3d8;
        uVar2 = auStack_2e8._8_8_;
        if ((ulong)auStack_2e8._8_8_ < pauStack_2d8) {
          bVar35 = (byte)uStack_3e8;
          if (((ulong)uStack_3e8 & 1) == 0) {
            *(undefined1 (**) [16])(undefined *)auStack_2e8._8_8_ = uStack_3e8;
            *(undefined1 (**) [16])((undefined *)auStack_2e8._8_8_ + 8) = pauStack_3e0;
            *(undefined1 (**) [16])*(undefined1 (*) [16])(auStack_2e8._8_8_ + 0x10) = pauStack_3d8;
          }
          else {
            func_0x0412e5e0(auStack_2e8._8_8_,pauStack_3d8,pauStack_3e0);
          }
          puVar34 = *(undefined1 (*) [16])(uVar2 + 0x10) + 8;
          pauVar28 = pauStack_2d8;
          pauVar27 = (undefined1 (*) [16])auStack_2e8._0_8_;
LAB_06244512:
          auStack_2e8._0_8_ = pauVar27;
          pauStack_2d8 = pauVar28;
          pauVar32 = pauStack_100;
          pauVar28 = pauStack_150;
          auStack_2e8._8_8_ = puVar34;
          param_2 = pauVar30;
          if ((bVar35 & 1) != 0) {
            pauVar40 = (undefined1 (*) [16])((ulong)pauVar40 & 0xfffffffffffffffe);
            func_0x0412a280(pauStack_288,pauVar40);
          }
          goto joined_r0x06244551;
        }
        param_1 = (undefined1 (*) [16])(auStack_2e8._8_8_ - auStack_2e8._0_8_);
        pauVar28 = (undefined1 (*) [16])(((long)param_1 >> 3) * -0x5555555555555555 + 1);
        pauVar30 = pauStack_3e0;
        if (pauVar28 < (undefined1 (*) [16])0xaaaaaaaaaaaaaab) {
          lVar38 = (long)pauStack_2d8 - auStack_2e8._0_8_ >> 3;
          pauVar30 = (undefined1 (*) [16])(lVar38 * 0x5555555555555556);
          if (pauVar28 < pauVar30) {
            pauVar28 = pauVar30;
          }
          if (0x555555555555554 < (ulong)(lVar38 * -0x5555555555555555)) {
            pauVar28 = (undefined1 (*) [16])0xaaaaaaaaaaaaaaa;
          }
          pauStack_3c8 = &auStack_2e8;
          pauStack_158 = uStack_3e8;
          if (pauVar28 == (undefined1 (*) [16])0x0) {
            pauVar40 = (undefined1 (*) [16])0x0;
LAB_06244430:
            pauStack_3e0 = (undefined1 (*) [16])((long)pauVar40 + (long)param_1);
            uStack_3d0 = (undefined1 (*) [16])((long)pauVar40 + (long)pauVar28 * 0x18);
            bVar35 = (byte)pauStack_158;
            uStack_3e8 = pauVar40;
            pauStack_3d8 = pauStack_3e0;
            if (((ulong)pauStack_158 & 1) == 0) {
              *(undefined1 (**) [16])*pauStack_3e0 = pauStack_158;
              *(undefined1 (**) [16])(*pauStack_3e0 + 8) = pauVar32;
              *(undefined1 (**) [16])pauStack_3e0[1] = pauStack_288;
              pauVar30 = param_2;
            }
            else {
              func_0x0412e5e0(pauStack_3e0,pauStack_288,pauVar32);
              param_1 = (undefined1 (*) [16])(auStack_2e8._8_8_ - auStack_2e8._0_8_);
              pauVar30 = (undefined1 (*) [16])auStack_2e8._0_8_;
            }
            pauVar28 = uStack_3d0;
            puVar34 = pauStack_3d8[1] + 8;
            pauVar27 = (undefined1 (*) [16])((long)pauStack_3e0 - (long)param_1);
            func_0x0eee2f00(pauVar27,pauVar30,param_1);
            uVar2 = auStack_2e8._0_8_;
            auStack_2e8._8_8_ = puVar34;
            auStack_2e8._0_8_ = pauVar27;
            pauVar40 = pauStack_158;
            if (uVar2 != 0) {
              lVar38 = (long)pauStack_2d8 - uVar2;
              pauStack_2d8 = pauVar28;
              func_0x0412a280(uVar2,lVar38);
              pauVar40 = pauStack_158;
              pauVar28 = pauStack_2d8;
              pauVar27 = (undefined1 (*) [16])auStack_2e8._0_8_;
            }
            goto LAB_06244512;
          }
          if (pauVar28 < (undefined1 (*) [16])0xaaaaaaaaaaaaaab) {
            pauVar40 = (undefined1 (*) [16])
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pauVar28 * 0x18);
            if (pauVar40 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0((long)pauVar28 * 0x18,0);
              pauVar40 = (undefined1 (*) [16])0x0;
            }
            goto LAB_06244430;
          }
          func_0x04882eb0();
          goto LAB_06245e66;
        }
        goto LAB_06245e3a;
      }
LAB_062437c1:
      pauVar30 = *(undefined1 (**) [16])(*pauVar32 + 8);
      pauVar27 = pauVar32;
      if (*(undefined1 (**) [16])(*pauVar32 + 8) == (undefined1 (*) [16])0x0) {
        do {
          pauVar32 = *(undefined1 (**) [16])pauVar27[1];
          bVar41 = pauVar27 != *(undefined1 (**) [16])*pauVar32;
          pauVar27 = pauVar32;
        } while (bVar41);
      }
      else {
        do {
          pauVar32 = pauVar30;
          pauVar30 = *(undefined1 (**) [16])*pauVar32;
        } while (*(undefined1 (**) [16])*pauVar32 != (undefined1 (*) [16])0x0);
      }
      pauVar30 = pauStack_150;
    } while (pauVar32 != pauVar28);
  }
  puVar31 = puStack_270;
  uVar39 = uStack_278;
  if ((bStack_280 & 1) == 0) {
    puVar31 = &uStack_27f;
    uVar39 = (ulong)(bStack_280 >> 1);
  }
  if (auStack_2e8._0_8_ == auStack_2e8._8_8_) {
    puStack_a0 = puVar31;
    uStack_98 = uVar39;
    cVar25 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&puStack_a0);
    if (cVar25 == '\0') goto LAB_06245d31;
    uStack_a8 = (ulong)(bStack_280 >> 1);
    puStack_b0 = &uStack_27f;
    if ((bStack_280 & 1) != 0) {
      uStack_a8 = uStack_278;
      puStack_b0 = puStack_270;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x98))(&uStack_3e8,&DAT_0f7b8f98,&puStack_b0);
    pauStack_1f0 = (undefined1 (*) [16])&UNK_0140f690;
    auStack_1f8 = (undefined1  [8])0x85eaac5f456d7e;
    auStack_1e8._8_4_ = 0x2ce;
    auStack_1e8._0_8_ = 1;
    if ((byte)uStack_3a8 == 0) {
      auStack_338 = (undefined1  [16])0x0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = auStack_328._8_8_;
      auStack_328 = auVar21 << 0x40;
      func_0x0eedeb80(2,0x2d,&uStack_3e8,auStack_338,auStack_1f8);
      if ((auStack_338[0] & 1) != 0) {
        func_0x0412a280(auStack_328._0_8_,auStack_338._0_8_ & 0xfffffffffffffffe);
      }
    }
    pauVar40 = pauStack_3c0;
    if (((byte)uStack_3a8 & 1) != 0) goto LAB_06245d31;
    pauVar28 = pauStack_3b8;
    if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
      while (pauVar40 != pauVar28) {
        FUN_048b3e80(pauVar28 + -4);
        pauVar28 = pauVar28 + -4;
      }
      pauStack_3b8 = pauVar40;
      func_0x0412a280(pauStack_3c0,CONCAT71(uStack_3af,uStack_3b0) - (long)pauStack_3c0);
    }
    pauVar28 = pauStack_3d8;
    pauVar40 = uStack_3d0;
    if (pauStack_3d8 == (undefined1 (*) [16])0x0) goto LAB_06245d31;
    for (; pauVar28 != pauVar40; pauVar40 = pauVar40 + -5) {
      if ((pauVar40[-1][8] == '\x01') && ((pauVar40[-3][0] & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)pauVar40[-2],*(ulong *)pauVar40[-3] & 0xfffffffffffffffe);
      }
    }
  }
  else {
    puStack_c0 = puVar31;
    uStack_b8 = uVar39;
    cVar25 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&puStack_c0);
    if (cVar25 != '\0') {
      uStack_c8 = (ulong)(bStack_280 >> 1);
      puStack_d0 = &uStack_27f;
      if ((bStack_280 & 1) != 0) {
        uStack_c8 = uStack_278;
        puStack_d0 = puStack_270;
      }
      pauStack_d8 = (undefined1 (*) [16])(ulong)(bStack_350 >> 1);
      pauStack_e0 = (undefined1 (*) [16])auStack_34f;
      if ((bStack_350 & 1) != 0) {
        pauStack_d8 = pauStack_348;
        pauStack_e0 = pauStack_340;
      }
      (**(code **)(_DAT_0f7b8f98 + 0xa8))(&uStack_3e8,&DAT_0f7b8f98,&puStack_d0,&pauStack_e0);
      pauStack_1f0 = (undefined1 (*) [16])&UNK_0140f690;
      auStack_1f8 = (undefined1  [8])0x85eaac5f456d7e;
      auStack_1e8._8_4_ = 0x2d3;
      auStack_1e8._0_8_ = 1;
      if ((byte)uStack_3a8 == 0) {
        auStack_338 = (undefined1  [16])0x0;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = auStack_328._8_8_;
        auStack_328 = auVar20 << 0x40;
        func_0x0eedeb80(2,0x2d,&uStack_3e8,auStack_338,auStack_1f8);
        if ((auStack_338[0] & 1) != 0) {
          func_0x0412a280(auStack_328._0_8_,auStack_338._0_8_ & 0xfffffffffffffffe);
        }
      }
      pauVar40 = pauStack_3c0;
      if (((byte)uStack_3a8 & 1) == 0) {
        pauVar28 = pauStack_3b8;
        if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
          while (pauVar40 != pauVar28) {
            FUN_048b3e80(pauVar28 + -4);
            pauVar28 = pauVar28 + -4;
          }
          pauStack_3b8 = pauVar40;
          func_0x0412a280(pauStack_3c0,CONCAT71(uStack_3af,uStack_3b0) - (long)pauStack_3c0);
        }
        pauVar28 = pauStack_3d8;
        pauVar40 = uStack_3d0;
        if (pauStack_3d8 != (undefined1 (*) [16])0x0) {
          for (; pauVar28 != pauVar40; pauVar40 = pauVar40 + -5) {
            if ((pauVar40[-1][8] == '\x01') && ((pauVar40[-3][0] & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)pauVar40[-2],
                              *(ulong *)pauVar40[-3] & 0xfffffffffffffffe);
            }
          }
          uStack_3d0 = pauVar28;
          func_0x0412a280(pauStack_3d8,(long)pauStack_3c8 - (long)pauStack_3d8);
        }
      }
    }
    pauStack_f0 = (undefined1 (*) [16])auStack_34f;
    pauStack_e8 = (undefined1 (*) [16])(ulong)(bStack_350 >> 1);
    if ((bStack_350 & 1) != 0) {
      pauStack_e8 = pauStack_348;
      pauStack_f0 = pauStack_340;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x98))(&uStack_3e8,&DAT_0f7b8f98,&pauStack_f0);
    pauStack_1f0 = (undefined1 (*) [16])&UNK_0140f690;
    auStack_1f8 = (undefined1  [8])0x85eaac5f456d7e;
    auStack_1e8._8_4_ = 0x2d5;
    auStack_1e8._0_8_ = 1;
    if ((byte)uStack_3a8 == 0) {
      auStack_338 = (undefined1  [16])0x0;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = auStack_328._8_8_;
      auStack_328 = auVar22 << 0x40;
      func_0x0eedeb80(2,0x2d,&uStack_3e8,auStack_338,auStack_1f8);
      if ((auStack_338[0] & 1) != 0) {
        func_0x0412a280(auStack_328._0_8_,auStack_338._0_8_ & 0xfffffffffffffffe);
      }
    }
    pauVar40 = pauStack_3c0;
    if (((byte)uStack_3a8 & 1) != 0) goto LAB_06245d31;
    pauVar28 = pauStack_3b8;
    if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
      while (pauVar40 != pauVar28) {
        FUN_048b3e80(pauVar28 + -4);
        pauVar28 = pauVar28 + -4;
      }
      pauStack_3b8 = pauVar40;
      func_0x0412a280(pauStack_3c0,CONCAT71(uStack_3af,uStack_3b0) - (long)pauStack_3c0);
    }
    pauVar28 = pauStack_3d8;
    pauVar40 = uStack_3d0;
    if (pauStack_3d8 == (undefined1 (*) [16])0x0) goto LAB_06245d31;
    for (; pauVar28 != pauVar40; pauVar40 = pauVar40 + -5) {
      if ((pauVar40[-1][8] == '\x01') && ((pauVar40[-3][0] & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)pauVar40[-2],*(ulong *)pauVar40[-3] & 0xfffffffffffffffe);
      }
    }
  }
  uStack_3d0 = pauVar28;
  func_0x0412a280(pauStack_3d8,(long)pauStack_3c8 - (long)pauStack_3d8);
LAB_06245d31:
  if ((bStack_280 & 1) != 0) {
    func_0x0412a280(puStack_270,CONCAT71(uStack_27f,bStack_280) & 0xfffffffffffffffe);
  }
  if ((bStack_350 & 1) == 0) {
    lVar38 = auStack_2e8._0_8_;
  }
  else {
    func_0x0412a280(pauStack_340,CONCAT71(auStack_34f,bStack_350) & 0xfffffffffffffffe);
    lVar38 = auStack_2e8._0_8_;
  }
  if (lVar38 != 0) {
    lVar23 = lVar38;
    for (lVar37 = auStack_2e8._8_8_; lVar38 != lVar37; lVar37 = lVar37 + -0x18) {
      if ((*(byte *)(lVar37 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar37 + -8),*(ulong *)(lVar37 + -0x18) & 0xfffffffffffffffe
                       );
      }
      lVar23 = auStack_2e8._0_8_;
    }
    auStack_2e8._8_8_ = lVar38;
    func_0x0412a280(lVar23,(long)pauStack_2d8 - lVar23);
  }
  return;
LAB_06243960:
  uStack_3e8 = pauStack_298;
  pauStack_3e0 = pauStack_2a0;
  if ((uStack_2a8 & 1) == 0) {
    uStack_3e8 = (undefined1 (*) [16])((long)&uStack_2a8 + 1);
    pauStack_3e0 = (undefined1 (*) [16])(ulong)((byte)uStack_2a8 >> 1);
  }
  bVar41 = (*(byte *)(puVar29 + 5) & 1) != 0;
  pauStack_3d8 = (undefined1 (*) [16])((long)puVar29 + 0x29);
  if (bVar41) {
    pauStack_3d8 = (undefined1 (*) [16])puVar29[7];
  }
  uStack_3d0 = (undefined1 (*) [16])(ulong)(*(byte *)(puVar29 + 5) >> 1);
  if (bVar41) {
    uStack_3d0 = (undefined1 (*) [16])puVar29[6];
  }
  func_0x048ad670(auStack_408,&uStack_3e8,2,0x2f);
  bVar35 = *pbStack_2f0;
  pauVar40 = (undefined1 (*) [16])(pbStack_2f0 + 1);
  bVar41 = (bVar35 & 1) == 0;
  pauVar32 = *(undefined1 (**) [16])(pbStack_2f0 + 0x10);
  if (bVar41) {
    pauVar32 = pauVar40;
  }
  pauVar36 = (undefined1 (*) [16])(ulong)(bVar35 >> 1);
  if (!bVar41) {
    pauVar36 = *(undefined1 (**) [16])(pbStack_2f0 + 8);
  }
  if (pauVar36 == (undefined1 (*) [16])0x0) {
    pauVar30 = (undefined1 (*) [16])0xffffffffffffffff;
    if ((bVar35 & 1) != 0) goto LAB_06243c9c;
LAB_06243a2f:
    pauStack_2b8 = *(undefined1 (**) [16])(pbStack_2f0 + 0x10);
    uStack_2c8 = *(undefined1 (**) [16])pbStack_2f0;
    pauStack_2c0 = *(undefined1 (**) [16])(pbStack_2f0 + 8);
  }
  else {
    do {
      if (pauVar36 == (undefined1 (*) [16])0x0) {
        pauVar30 = (undefined1 (*) [16])0xffffffffffffffff;
        break;
      }
      pauVar30 = (undefined1 (*) [16])(pauVar36[-1] + 0xf);
      pcVar1 = pauVar32[-1] + 0xf + (long)pauVar36;
      pauVar36 = pauVar30;
    } while (*pcVar1 != '/');
    if ((bVar35 & 1) == 0) goto LAB_06243a2f;
LAB_06243c9c:
    func_0x0412e5e0(&uStack_2c8);
  }
  if (pauVar30 != (undefined1 (*) [16])0xffffffffffffffff) {
    if ((*pbStack_2f0 & 1) == 0) {
      param_1 = (undefined1 (*) [16])(ulong)(*pbStack_2f0 >> 1);
      param_2 = pauVar40;
    }
    else {
      param_1 = *(undefined1 (**) [16])(pbStack_2f0 + 8);
      param_2 = *(undefined1 (**) [16])(pbStack_2f0 + 0x10);
    }
    if (pauVar30 <= param_1) {
      param_1 = pauVar30;
    }
    if ((undefined1 (*) [16])0xfffffffffffffff7 < param_1) {
LAB_06245e26:
      func_0x04882e30();
LAB_06245e2b:
      func_0x04882e30();
LAB_06245e30:
      func_0x04882ee0();
LAB_06245e35:
      func_0x04882e30();
LAB_06245e3a:
      func_0x0488efe0();
LAB_06245e3f:
      func_0x0eec74c0(0x28,0);
      pauVar32 = pauVar30;
      goto LAB_062430f5;
    }
    if (param_1 < (undefined1 (*) [16])0x17) {
      auStack_338[0] = (char)param_1 * '\x02';
      pauVar27 = (undefined1 (*) [16])(auStack_338 + 1);
      if (param_1 != (undefined1 (*) [16])0x0) goto LAB_06243d6f;
    }
    else {
      uVar39 = ((ulong)param_1 | 7) + 1;
      if (((ulong)param_1 | 7) == 0x17) {
        uVar39 = 0x1a;
      }
      pauVar27 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar39);
      if (pauVar27 == (undefined1 (*) [16])0x0) {
        func_0x0eec74c0(uVar39,0);
      }
      auStack_328._0_8_ = pauVar27;
      auStack_338._8_8_ = param_1;
      auStack_338._0_8_ = uVar39 | 1;
      pauVar28 = pauStack_150;
LAB_06243d6f:
      memmove(pauVar27,param_2,param_1);
    }
    (*pauVar27)[(long)param_1] = 0;
    uStack_3e8 = pauStack_3f8;
    pauStack_3e0 = (undefined1 (*) [16])auStack_408._8_8_;
    if ((auStack_408[0] & 1) == 0) {
      uStack_3e8 = (undefined1 (*) [16])(auStack_408 + 1);
      pauStack_3e0 = (undefined1 (*) [16])(ulong)(auStack_408[0] >> 1);
    }
    pauStack_3d8 = (undefined1 (*) [16])auStack_328._0_8_;
    uStack_3d0 = (undefined1 (*) [16])auStack_338._8_8_;
    if ((auStack_338[0] & 1) == 0) {
      pauStack_3d8 = (undefined1 (*) [16])(auStack_338 + 1);
      uStack_3d0 = (undefined1 (*) [16])(ulong)(auStack_338[0] >> 1);
    }
    func_0x048ad670(auStack_1f8,&uStack_3e8,2,0x2f);
    if ((auStack_408[0] & 1) != 0) {
      func_0x0412a280(pauStack_3f8,auStack_408._0_8_ & 0xfffffffffffffffe);
    }
    pauStack_3f8 = (undefined1 (*) [16])auStack_1e8._0_8_;
    auStack_408 = _auStack_1f8;
    auVar17._14_2_ = 0;
    auVar17._0_14_ = stack0xfffffffffffffe0a;
    _auStack_1f8 = auVar17 << 0x10;
    if ((auStack_338[0] & 1) != 0) {
      func_0x0412a280(auStack_328._0_8_,auStack_338._0_8_ & 0xfffffffffffffffe);
    }
    bVar35 = *pbStack_2f0;
    if ((bVar35 & 1) == 0) {
      pauVar32 = (undefined1 (*) [16])(ulong)(bVar35 >> 1);
    }
    else {
      pauVar32 = *(undefined1 (**) [16])(pbStack_2f0 + 8);
    }
    param_1 = (undefined1 (*) [16])((long)pauVar32 - (long)pauVar30);
    if (pauVar32 < pauVar30) goto LAB_06245e30;
    if ((bVar35 & 1) != 0) {
      pauVar40 = *(undefined1 (**) [16])(pbStack_2f0 + 0x10);
    }
    if ((undefined1 (*) [16])0xfffffffffffffff7 < param_1) goto LAB_06245e2b;
    if (param_1 < (undefined1 (*) [16])0x17) {
      uStack_3e8 = (undefined1 (*) [16])CONCAT71(uStack_3e8._1_7_,(char)param_1 * '\x02');
      param_2 = (undefined1 (*) [16])((long)&uStack_3e8 + 1);
      if (pauVar32 != pauVar30) goto LAB_0624416e;
      *(undefined1 *)((long)param_2 + (long)param_1) = 0;
    }
    else {
      uVar39 = ((ulong)param_1 | 7) + 1;
      if (((ulong)param_1 | 7) == 0x17) {
        uVar39 = 0x1a;
      }
      param_2 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar39);
      if (param_2 == (undefined1 (*) [16])0x0) {
        func_0x0eec74c0(uVar39,0);
      }
      uStack_3e8 = (undefined1 (*) [16])(uVar39 | 1);
      pauStack_3e0 = param_1;
      pauStack_3d8 = param_2;
LAB_0624416e:
      pauVar40 = (undefined1 (*) [16])(*pauVar40 + (long)pauVar30);
      memmove(param_2,pauVar40,param_1);
      *(undefined1 *)((long)param_2 + (long)param_1) = 0;
    }
    if (((ulong)uStack_2c8 & 1) != 0) {
      func_0x0412a280(pauStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
    }
    pauStack_2b8 = pauStack_3d8;
    uStack_2c8 = uStack_3e8;
    pauStack_2c0 = pauStack_3e0;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar26 = FUN_04108328(&DAT_0f7b8fb8), iVar26 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  bVar41 = (auStack_408[0] & 1) == 0;
  pauStack_40 = pauStack_3f8;
  if (bVar41) {
    pauStack_40 = (undefined1 (*) [16])(auStack_408 + 1);
  }
  uStack_38 = (ulong)(auStack_408[0] >> 1);
  if (!bVar41) {
    uStack_38 = auStack_408._8_8_;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_3e8,&DAT_0f7b8f98,&pauStack_40);
  pauVar24 = pauStack_3c8;
  pauVar36 = uStack_3d0;
  pauVar32 = _UNK_0f023f08;
  pauVar27 = _UNK_0f023ef8;
  pauVar30 = _DAT_0f023ef0;
  acStack_1b8[0] = (byte)uStack_3a8;
  if ((byte)uStack_3a8 == '\0') {
    pauStack_1f0 = pauStack_3e0;
    auStack_1f8 = (undefined1  [8])uStack_3e8;
    auStack_1e8._0_8_ = pauStack_3d8;
    auStack_1e8._0_8_ = pauStack_3d8;
    auStack_1e8._8_8_ = uStack_3d0;
    pauStack_1d8 = pauStack_3c8;
    auStack_1d0._0_8_ = pauStack_3c0;
    auStack_1d0._8_8_ = pauStack_3b8;
    uStack_1c0 = CONCAT71(uStack_3af,uStack_3b0);
    pauStack_3d8 = _DAT_0f023f00;
    uStack_3d0 = _UNK_0f023f08;
    uStack_3e8 = _DAT_0f023ef0;
    pauStack_3e0 = _UNK_0f023ef8;
    pauStack_3c8 = (undefined1 (*) [16])0x0;
    bStack_3a0 = 0;
    if (pauVar36 < pauVar24) {
      *(undefined1 (**) [16])pauVar36[1] = _DAT_0f023f00;
      *(undefined1 (**) [16])(pauVar36[1] + 8) = pauVar32;
      *(undefined1 (**) [16])*pauVar36 = pauVar30;
      *(undefined1 (**) [16])(*pauVar36 + 8) = pauVar27;
      pauVar36[2][0] = 0;
      pauVar36[4][8] = 0;
      pauVar30 = pauVar36 + 5;
    }
    else {
      auStack_1e8._8_8_ = func_0x0489d2c0(auStack_1e8,&uStack_3e8);
      pauVar30 = (undefined1 (*) [16])auStack_1e8._8_8_;
      if (((bStack_3a0 & 1) != 0) && (((ulong)pauStack_3c8 & 1) != 0)) {
        func_0x0412a280(pauStack_3b8,(ulong)pauStack_3c8 & 0xfffffffffffffffe);
        pauVar30 = (undefined1 (*) [16])auStack_1e8._8_8_;
      }
    }
    auStack_238._8_8_ = uStack_1c0;
    auStack_238._0_8_ = auStack_1d0._8_8_;
    auStack_248._8_8_ = auStack_1d0._0_8_;
    auStack_248._0_8_ = pauStack_1d8;
    auStack_258._0_8_ = auStack_1e8._0_8_;
    auStack_1e8 = (undefined1  [16])0x0;
    pauStack_1d8 = (undefined1 (*) [16])0x0;
    auStack_1d0 = (undefined1  [16])0x0;
    uStack_1c0 = 0;
    uStack_228 = uStack_228 & 0xffffffffffffff00;
    auStack_268 = _auStack_1f8;
    auStack_258._8_8_ = pauVar30;
    goto LAB_06245341;
  }
  uStack_3e8 = (undefined1 (*) [16])CONCAT17(uStack_3e8._7_1_,0x6e6f736a2e0a);
  param_2 = pauStack_2b8;
  param_1 = pauStack_2c0;
  if (((ulong)uStack_2c8 & 1) == 0) {
    param_2 = (undefined1 (*) [16])((long)&uStack_2c8 + 1);
    param_1 = (undefined1 (*) [16])((ulong)uStack_2c8 >> 1 & 0x7f);
  }
  if (param_1 < (undefined1 (*) [16])0x12) {
    if (param_1 != (undefined1 (*) [16])0x0) {
      pauVar40 = (undefined1 (*) [16])((long)&uStack_3e8 + 1);
      pauVar30 = (undefined1 (*) [16])0x0;
      if (param_2 < (undefined1 (*) [16])((long)&uStack_3e8 + 6)) {
        pauVar30 = param_1;
      }
      if (param_2 < pauVar40) {
        pauVar30 = (undefined1 (*) [16])0x0;
      }
      (*param_1)[(long)&uStack_3e8 + 5] = 0x6e;
      *(undefined4 *)(*pauVar40 + (long)param_1) = 0x6f736a2e;
      memmove(pauVar40,*pauVar30 + (long)param_2,param_1);
      pauVar30 = (undefined1 (*) [16])(*param_1 + 5);
      if (((ulong)uStack_3e8 & 1) == 0) {
        uStack_3e8 = (undefined1 (*) [16])CONCAT71(uStack_3e8._1_7_,(char)pauVar30 * '\x02');
      }
      else {
        pauStack_3e0 = pauVar30;
      }
      (*pauVar40)[(long)pauVar30] = 0;
    }
  }
  else {
    if (*param_1 + 0xe < (undefined *)0x1f) goto LAB_06245e66;
    pauVar28 = (undefined1 (*) [16])(*param_1 + 5);
    pauVar40 = (undefined1 (*) [16])0x2c;
    if ((undefined1 (*) [16])0x2c < pauVar28) {
      pauVar40 = pauVar28;
    }
    uVar39 = ((ulong)pauVar40 | 7) + 1;
    pauVar30 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar39);
    if (uVar39 != 0 && pauVar30 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(uVar39,0);
    }
    func_0x0eee2f00(pauVar30,param_2,param_1);
    *(undefined4 *)(*pauVar30 + (long)param_1) = uStack_3e8._1_4_;
    (*pauVar30 + 4)[(long)param_1] = uStack_3e8._5_1_;
    pauStack_3d8 = pauVar30;
    pauVar40 = (undefined1 (*) [16])(uVar39 | 1);
    pauStack_3e0 = pauVar28;
    (*pauVar30 + 5)[(long)param_1] = 0;
    pauVar28 = pauStack_150;
    uStack_3e8 = pauVar40;
  }
  pauStack_208 = pauStack_3d8;
  bStack_218 = (byte)uStack_3e8;
  auStack_217._0_4_ = uStack_3e8._1_4_;
  auStack_217._4_2_ = uStack_3e8._5_2_;
  uStack_211 = uStack_3e8._7_1_;
  pauStack_210 = pauStack_3e0;
  uStack_3d0 = (undefined1 (*) [16])(ulong)((byte)uStack_3e8 >> 1);
  pauVar30 = (undefined1 (*) [16])auStack_217;
  if (((ulong)uStack_3e8 & 1) == 0) {
    pauStack_3e0 = uStack_3d0;
    pauStack_3d8 = pauVar30;
  }
  if (pauStack_3e0 != (undefined1 (*) [16])0x0) {
    pauVar27 = pauStack_3d8;
    if (pauStack_3e0 < (undefined1 (*) [16])0x8) {
LAB_062455e4:
      do {
        if ((*pauVar27)[0] == ':') {
          (*pauVar27)[0] = 0x2d;
        }
        pauVar27 = (undefined1 (*) [16])(*pauVar27 + 1);
      } while (pauVar27 != (undefined1 (*) [16])(*pauStack_3d8 + (long)pauStack_3e0));
    }
    else if (pauStack_3e0 < (undefined1 (*) [16])0x20) {
      pauVar32 = (undefined1 (*) [16])0x0;
LAB_06244a91:
      pauVar36 = (undefined1 (*) [16])((ulong)pauStack_3e0 & 0xfffffffffffffff8);
      pauVar27 = (undefined1 (*) [16])(*pauStack_3d8 + (long)pauVar36);
      do {
        uVar39 = *(ulong *)(*pauStack_3d8 + (long)pauVar32);
        auVar42._8_8_ = 0;
        auVar42._0_8_ = uVar39;
        if ((char)uVar39 == DAT_014ea9f0) {
          (*pauStack_3d8)[(long)pauVar32] = 0x2d;
        }
        auVar43[0] = -(DAT_014e4860 == '\0');
        auVar43[1] = -((char)uVar39 == UNK_014e4861);
        auVar43[2] = -((char)(uVar39 >> 8) == UNK_014e4862);
        auVar43[3] = -((char)(uVar39 >> 0x10) == UNK_014e4863);
        auVar43[4] = -(UNK_014e4864 == '\0');
        auVar43[5] = -((char)(uVar39 >> 0x20) == UNK_014e4865);
        auVar43[6] = -((char)(uVar39 >> 0x28) == UNK_014e4866);
        auVar43[7] = -((char)(uVar39 >> 0x30) == UNK_014e4867);
        auVar43[8] = -(UNK_014e4868 == '\0');
        auVar43[9] = -(UNK_014e4869 == '\0');
        auVar43[10] = -(UNK_014e486a == '\0');
        auVar43[0xb] = -(UNK_014e486b == '\0');
        auVar43[0xc] = -(UNK_014e486c == '\0');
        auVar43[0xd] = -(UNK_014e486d == '\0');
        auVar43[0xe] = -(UNK_014e486e == '\0');
        auVar43[0xf] = -(UNK_014e486f == '\0');
        if ((auVar43[2] & 1) != 0) {
          (*pauStack_3d8 + 1)[(long)pauVar32] = 0x2d;
        }
        auVar44 = pshuflw(auVar43,auVar42,0x55);
        if (auVar44[4] == UNK_014e6354) {
          (*pauStack_3d8 + 2)[(long)pauVar32] = 0x2d;
        }
        if ((char)(uVar39 >> 0x18) == UNK_014e4356) {
          (*pauStack_3d8 + 3)[(long)pauVar32] = 0x2d;
        }
        pauVar32 = (undefined1 (*) [16])(*pauVar32 + 8);
      } while (pauVar36 != pauVar32);
      if (pauStack_3e0 != pauVar36) goto LAB_062455e4;
    }
    else {
      pauVar32 = (undefined1 (*) [16])((ulong)pauStack_3e0 & 0xffffffffffffffe0);
      pauVar27 = (undefined1 (*) [16])0x0;
      do {
        pcVar1 = *pauStack_3d8 + (long)pauVar27;
        cVar25 = pcVar1[1];
        cVar3 = pcVar1[2];
        cVar4 = pcVar1[3];
        cVar5 = pcVar1[4];
        cVar6 = pcVar1[5];
        cVar7 = pcVar1[6];
        cVar8 = pcVar1[7];
        cVar9 = pcVar1[8];
        if (*pcVar1 == DAT_014e3da0) {
          (*pauStack_3d8)[(long)pauVar27] = 0x2d;
        }
        if (cVar25 == UNK_014e3da1) {
          (*pauStack_3d8 + 1)[(long)pauVar27] = 0x2d;
        }
        if (cVar3 == UNK_014e3da2) {
          (*pauStack_3d8 + 2)[(long)pauVar27] = 0x2d;
        }
        if (cVar4 == UNK_014e3da3) {
          (*pauStack_3d8 + 3)[(long)pauVar27] = 0x2d;
        }
        if (cVar5 == UNK_014e3da4) {
          (*pauStack_3d8 + 4)[(long)pauVar27] = 0x2d;
        }
        if (cVar6 == UNK_014e3da5) {
          (*pauStack_3d8 + 5)[(long)pauVar27] = 0x2d;
        }
        if (cVar7 == UNK_014e3da6) {
          (*pauStack_3d8 + 6)[(long)pauVar27] = 0x2d;
        }
        if (cVar8 == UNK_014e3da7) {
          (*pauStack_3d8 + 7)[(long)pauVar27] = 0x2d;
        }
        if (cVar9 == UNK_014e3da8) {
          (*pauStack_3d8 + 8)[(long)pauVar27] = 0x2d;
        }
        pcVar1 = pauStack_3d8[1] + (long)pauVar27;
        cVar25 = *pcVar1;
        cVar3 = pcVar1[1];
        cVar4 = pcVar1[2];
        cVar5 = pcVar1[3];
        cVar6 = pcVar1[4];
        cVar7 = pcVar1[5];
        cVar9 = pcVar1[6];
        cVar11 = pcVar1[7];
        if (cVar8 == UNK_014e3da7) {
          (*pauStack_3d8 + 0xf)[(long)pauVar27] = 0x2d;
        }
        if (cVar25 == DAT_014e3da0) {
          pauStack_3d8[1][(long)pauVar27] = 0x2d;
        }
        if (cVar3 == UNK_014e3da1) {
          (pauStack_3d8[1] + 1)[(long)pauVar27] = 0x2d;
        }
        if (cVar4 == UNK_014e3da2) {
          (pauStack_3d8[1] + 2)[(long)pauVar27] = 0x2d;
        }
        if (cVar5 == UNK_014e3da3) {
          (pauStack_3d8[1] + 3)[(long)pauVar27] = 0x2d;
        }
        if (cVar6 == UNK_014e3da4) {
          (pauStack_3d8[1] + 4)[(long)pauVar27] = 0x2d;
        }
        if (cVar7 == UNK_014e3da5) {
          (pauStack_3d8[1] + 5)[(long)pauVar27] = 0x2d;
        }
        if (cVar9 == UNK_014e3da6) {
          (pauStack_3d8[1] + 6)[(long)pauVar27] = 0x2d;
        }
        if (cVar11 == UNK_014e3da7) {
          (pauStack_3d8[1] + 7)[(long)pauVar27] = 0x2d;
        }
        if (cVar25 == DAT_014e3da0) {
          (pauStack_3d8[1] + 8)[(long)pauVar27] = 0x2d;
        }
        if (cVar3 == UNK_014e3da1) {
          (pauStack_3d8[1] + 9)[(long)pauVar27] = 0x2d;
        }
        if (cVar4 == UNK_014e3da2) {
          (pauStack_3d8[1] + 10)[(long)pauVar27] = 0x2d;
        }
        if (cVar5 == UNK_014e3da3) {
          (pauStack_3d8[1] + 0xb)[(long)pauVar27] = 0x2d;
        }
        if (cVar6 == UNK_014e3da4) {
          (pauStack_3d8[1] + 0xc)[(long)pauVar27] = 0x2d;
        }
        if (cVar7 == UNK_014e3da5) {
          (pauStack_3d8[1] + 0xd)[(long)pauVar27] = 0x2d;
        }
        if (cVar9 == UNK_014e3da6) {
          (pauStack_3d8[1] + 0xe)[(long)pauVar27] = 0x2d;
        }
        if (cVar11 == UNK_014e3da7) {
          (pauStack_3d8[1] + 0xf)[(long)pauVar27] = 0x2d;
        }
        pauVar27 = pauVar27 + 2;
      } while (pauVar32 != pauVar27);
      if (pauStack_3e0 != pauVar32) {
        if (((ulong)pauStack_3e0 & 0x18) == 0) {
          pauVar27 = (undefined1 (*) [16])(*pauVar32 + (long)pauStack_3d8);
          goto LAB_062455e4;
        }
        goto LAB_06244a91;
      }
    }
    uStack_3d0 = (undefined1 (*) [16])(ulong)((byte)uStack_3e8 >> 1);
    uStack_3e8._0_1_ = bStack_218;
  }
  bVar35 = (byte)uStack_3e8 & 1;
  bVar41 = (auStack_408[0] & 1) == 0;
  uStack_3e8 = pauStack_3f8;
  if (bVar41) {
    uStack_3e8 = (undefined1 (*) [16])(auStack_408 + 1);
  }
  pauStack_3e0 = (undefined1 (*) [16])(ulong)(auStack_408[0] >> 1);
  if (!bVar41) {
    pauStack_3e0 = (undefined1 (*) [16])auStack_408._8_8_;
  }
  if (bVar35 != 0) {
    uStack_3d0 = pauStack_210;
    pauVar30 = pauStack_208;
  }
  pauStack_3d8 = pauVar30;
  func_0x048ad670(auStack_338,&uStack_3e8,2,0x2f);
  if ((auStack_408[0] & 1) != 0) {
    func_0x0412a280(pauStack_3f8,auStack_408._0_8_ & 0xfffffffffffffffe);
  }
  pauStack_3f8 = (undefined1 (*) [16])auStack_328._0_8_;
  auStack_408 = auStack_338;
  auVar44 = auStack_408;
  auStack_168 = (undefined1  [16])0x0;
  auStack_408[0] = auStack_338[0];
  pauVar30 = (undefined1 (*) [16])auStack_328._0_8_;
  param_2 = (undefined1 (*) [16])auStack_338._8_8_;
  if ((auStack_338._0_8_ & 1) == 0) {
    pauVar30 = (undefined1 (*) [16])(auStack_408 + 1);
    param_2 = (undefined1 (*) [16])(ulong)(auStack_408[0] >> 1);
  }
  auStack_408 = auVar44;
  if ((DAT_0f7b8fb8 == '\0') && (iVar26 = FUN_04108328(&DAT_0f7b8fb8), iVar26 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pauVar28 = pauStack_150;
  }
  auStack_148._8_8_ = param_2;
  auStack_148._0_8_ = pauVar30;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_3e8,&DAT_0f7b8f98,auStack_148,auStack_168,0x12e,0);
  pauVar24 = pauStack_3c8;
  pauVar36 = uStack_3d0;
  pauVar32 = _UNK_0f023f28;
  pauVar27 = _UNK_0f023f18;
  pauVar30 = _DAT_0f023f10;
  bStack_2f8 = (byte)uStack_3a8;
  if ((byte)uStack_3a8 == 0) {
    auStack_338._8_8_ = pauStack_3e0;
    auStack_338._0_8_ = uStack_3e8;
    auStack_328._0_8_ = pauStack_3d8;
    auStack_328._0_8_ = pauStack_3d8;
    auStack_328._8_8_ = uStack_3d0;
    pauStack_318 = pauStack_3c8;
    auStack_310._0_8_ = pauStack_3c0;
    auStack_310._8_8_ = pauStack_3b8;
    lStack_300 = CONCAT71(uStack_3af,uStack_3b0);
    pauStack_3d8 = _DAT_0f023f20;
    uStack_3d0 = _UNK_0f023f28;
    uStack_3e8 = _DAT_0f023f10;
    pauStack_3e0 = _UNK_0f023f18;
    pauStack_3c8 = (undefined1 (*) [16])0x0;
    bStack_3a0 = 0;
    if (pauVar36 < pauVar24) {
      *(undefined1 (**) [16])pauVar36[1] = _DAT_0f023f20;
      *(undefined1 (**) [16])(pauVar36[1] + 8) = pauVar32;
      *(undefined1 (**) [16])*pauVar36 = pauVar30;
      *(undefined1 (**) [16])(*pauVar36 + 8) = pauVar27;
      pauVar36[2][0] = 0;
      pauVar36[4][8] = 0;
      pauVar30 = pauVar36 + 5;
    }
    else {
      auStack_328._8_8_ = func_0x0489d2c0(auStack_328,&uStack_3e8);
      pauVar30 = (undefined1 (*) [16])auStack_328._8_8_;
      if (((bStack_3a0 & 1) != 0) && (((ulong)pauStack_3c8 & 1) != 0)) {
        func_0x0412a280(pauStack_3b8,(ulong)pauStack_3c8 & 0xfffffffffffffffe);
        pauVar30 = (undefined1 (*) [16])auStack_328._8_8_;
      }
    }
    auStack_238._8_8_ = lStack_300;
    auStack_238._0_8_ = auStack_310._8_8_;
    auStack_248._8_8_ = auStack_310._0_8_;
    auStack_248._0_8_ = pauStack_318;
    auStack_258._0_8_ = auStack_328._0_8_;
    auStack_328 = (undefined1  [16])0x0;
    pauStack_318 = (undefined1 (*) [16])0x0;
    auStack_310 = (undefined1  [16])0x0;
    lStack_300 = 0;
    uStack_228 = uStack_228 & 0xffffffffffffff00;
    auStack_268 = auStack_338;
    auStack_258._8_8_ = pauVar30;
  }
  else {
    bVar41 = (pbStack_2f0[0x18] & 1) != 0;
    pbVar33 = pbStack_2f0 + 0x19;
    if (bVar41) {
      pbVar33 = *(byte **)(pbStack_2f0 + 0x28);
    }
    uVar39 = (ulong)(pbStack_2f0[0x18] >> 1);
    if (bVar41) {
      uVar39 = *(ulong *)(pbStack_2f0 + 0x20);
    }
    func_0x0ee76e70(&uStack_3e8,auStack_168._0_8_,pbVar33,uVar39);
    pauVar24 = pauStack_3c8;
    pauVar36 = uStack_3d0;
    pauVar32 = _UNK_0f023f48;
    pauVar27 = _UNK_0f023f38;
    pauVar30 = _DAT_0f023f30;
    bStack_108 = (byte)uStack_3a8;
    if ((byte)uStack_3a8 == 0) {
      auStack_148._8_8_ = pauStack_3e0;
      auStack_148._0_8_ = uStack_3e8;
      auStack_138._0_8_ = pauStack_3d8;
      auStack_138._0_8_ = pauStack_3d8;
      auStack_138._8_8_ = uStack_3d0;
      pauStack_128 = pauStack_3c8;
      auStack_120._0_8_ = pauStack_3c0;
      auStack_120._8_8_ = pauStack_3b8;
      lStack_110 = CONCAT71(uStack_3af,uStack_3b0);
      pauStack_3d8 = _DAT_0f023f40;
      uStack_3d0 = _UNK_0f023f48;
      uStack_3e8 = _DAT_0f023f30;
      pauStack_3e0 = _UNK_0f023f38;
      pauStack_3c8 = (undefined1 (*) [16])0x0;
      bStack_3a0 = 0;
      if (pauVar36 < pauVar24) {
        *(undefined1 (**) [16])pauVar36[1] = _DAT_0f023f40;
        *(undefined1 (**) [16])(pauVar36[1] + 8) = pauVar32;
        *(undefined1 (**) [16])*pauVar36 = pauVar30;
        *(undefined1 (**) [16])(*pauVar36 + 8) = pauVar27;
        pauVar36[2][0] = 0;
        pauVar36[4][8] = 0;
        pauVar30 = pauVar36 + 5;
      }
      else {
        auStack_138._8_8_ = func_0x0489d2c0(auStack_138,&uStack_3e8);
        pauVar30 = (undefined1 (*) [16])auStack_138._8_8_;
        if (((bStack_3a0 & 1) != 0) && (((ulong)pauStack_3c8 & 1) != 0)) {
          func_0x0412a280(pauStack_3b8,(ulong)pauStack_3c8 & 0xfffffffffffffffe);
          pauVar30 = (undefined1 (*) [16])auStack_138._8_8_;
        }
      }
      auStack_238._8_8_ = lStack_110;
      auStack_238._0_8_ = auStack_120._8_8_;
      auStack_248._8_8_ = auStack_120._0_8_;
      auStack_248._0_8_ = pauStack_128;
      auStack_258._0_8_ = auStack_138._0_8_;
      auStack_138 = (undefined1  [16])0x0;
      pauStack_128 = (undefined1 (*) [16])0x0;
      auStack_120 = (undefined1  [16])0x0;
      lStack_110 = 0;
      uStack_228 = uStack_228 & 0xffffffffffffff00;
      auStack_268 = auStack_148;
      auStack_258._8_8_ = pauVar30;
      if ((bStack_108 & 1) == 0) goto LAB_06245072;
    }
    else {
      auStack_268 = (undefined1  [16])0x0;
      auStack_258 = (undefined1  [16])0x0;
      auStack_248 = (undefined1  [16])0x0;
      auStack_238 = (undefined1  [16])0x0;
      uStack_228 = 1;
      if ((uStack_3a8 & 1) == 0) {
LAB_06245072:
        param_2 = (undefined1 (*) [16])auStack_120._0_8_;
        if ((undefined1 (*) [16])auStack_120._0_8_ != (undefined1 (*) [16])0x0) {
          pauVar30 = (undefined1 (*) [16])auStack_120._8_8_;
          while (param_2 != pauVar30) {
            pauVar30 = pauVar30 + -4;
            FUN_048b3e80(pauVar30);
          }
          auStack_120._8_8_ = param_2;
          func_0x0412a280(auStack_120._0_8_,lStack_110 - auStack_120._0_8_);
        }
        uVar2 = auStack_138._0_8_;
        if ((undefined1 (*) [16])auStack_138._0_8_ != (undefined1 (*) [16])0x0) {
          for (param_2 = (undefined1 (*) [16])auStack_138._8_8_;
              (undefined1 (*) [16])uVar2 != param_2; param_2 = param_2 + -5) {
            if ((param_2[-1][8] == '\x01') && ((param_2[-3][0] & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)param_2[-2],*(ulong *)param_2[-3] & 0xfffffffffffffffe)
              ;
            }
          }
          auStack_138._8_8_ = uVar2;
          func_0x0412a280(auStack_138._0_8_,(long)pauStack_128 - auStack_138._0_8_);
        }
      }
    }
  }
  uVar2 = auStack_310._0_8_;
  if (bStack_2f8 == 0) {
    if ((undefined1 (*) [16])auStack_310._0_8_ != (undefined1 (*) [16])0x0) {
      pauVar30 = (undefined1 (*) [16])auStack_310._8_8_;
      while ((undefined1 (*) [16])uVar2 != pauVar30) {
        pauVar30 = pauVar30 + -4;
        FUN_048b3e80(pauVar30);
      }
      auStack_310._8_8_ = uVar2;
      func_0x0412a280(auStack_310._0_8_,lStack_300 - auStack_310._0_8_);
    }
    uVar10 = auStack_328._0_8_;
    param_2 = (undefined1 (*) [16])uVar2;
    if ((undefined1 (*) [16])auStack_328._0_8_ != (undefined1 (*) [16])0x0) {
      for (param_2 = (undefined1 (*) [16])auStack_328._8_8_; (undefined1 (*) [16])uVar10 != param_2;
          param_2 = param_2 + -5) {
        if ((param_2[-1][8] == '\x01') && ((param_2[-3][0] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)param_2[-2],*(ulong *)param_2[-3] & 0xfffffffffffffffe);
        }
      }
      auStack_328._8_8_ = uVar10;
      func_0x0412a280(auStack_328._0_8_,(long)pauStack_318 - auStack_328._0_8_);
    }
  }
  if (auStack_168._0_8_ != 0) {
    func_0x0ee56810(&uStack_3e8,auStack_168);
    pauVar30 = pauStack_3c0;
    if ((byte)uStack_3a8 == '\0') {
      pauVar27 = pauStack_3b8;
      if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
        while (pauVar30 != pauVar27) {
          FUN_048b3e80(pauVar27 + -4);
          pauVar27 = pauVar27 + -4;
        }
        pauStack_3b8 = pauVar30;
        func_0x0412a280(pauStack_3c0,CONCAT71(uStack_3af,uStack_3b0) - (long)pauStack_3c0);
      }
      pauVar27 = pauStack_3d8;
      param_2 = pauVar30;
      pauVar30 = uStack_3d0;
      if (pauStack_3d8 != (undefined1 (*) [16])0x0) {
        while (param_2 = pauVar30, pauVar27 != param_2) {
          if ((param_2[-1][8] == '\x01') && ((param_2[-3][0] & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)param_2[-2],*(ulong *)param_2[-3] & 0xfffffffffffffffe);
          }
          pauVar30 = param_2 + -5;
        }
        uStack_3d0 = pauVar27;
        func_0x0412a280(pauStack_3d8,(long)pauStack_3c8 - (long)pauStack_3d8);
      }
    }
  }
  uVar2 = auStack_168._8_8_;
  auStack_168._8_8_ = 0;
  if ((long *)uVar2 != (long *)0x0) {
    (**(code **)(*(long *)uVar2 + 8))();
  }
  uVar2 = auStack_168._0_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = auStack_168._8_8_;
  auStack_168 = auVar18 << 0x40;
  if ((long *)uVar2 != (long *)0x0) {
    (**(code **)(*(long *)uVar2 + 8))();
  }
  if ((bStack_218 & 1) != 0) {
    func_0x0412a280(pauStack_208,
                    CONCAT17(uStack_211,
                             CONCAT25(auStack_217._4_2_,CONCAT41(auStack_217._0_4_,bStack_218))) &
                    0xfffffffffffffffe);
  }
LAB_06245341:
  uVar2 = auStack_1d0._0_8_;
  if (acStack_1b8[0] == '\0') {
    if ((undefined1 (*) [16])auStack_1d0._0_8_ != (undefined1 (*) [16])0x0) {
      pauVar30 = (undefined1 (*) [16])auStack_1d0._8_8_;
      while ((undefined1 (*) [16])uVar2 != pauVar30) {
        pauVar30 = pauVar30 + -4;
        FUN_048b3e80(pauVar30);
      }
      auStack_1d0._8_8_ = uVar2;
      func_0x0412a280(auStack_1d0._0_8_,uStack_1c0 - auStack_1d0._0_8_);
    }
    uVar10 = auStack_1e8._0_8_;
    param_2 = (undefined1 (*) [16])uVar2;
    if ((undefined1 (*) [16])auStack_1e8._0_8_ != (undefined1 (*) [16])0x0) {
      for (param_2 = (undefined1 (*) [16])auStack_1e8._8_8_; (undefined1 (*) [16])uVar10 != param_2;
          param_2 = param_2 + -5) {
        if ((param_2[-1][8] == '\x01') && ((param_2[-3][0] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)param_2[-2],*(ulong *)param_2[-3] & 0xfffffffffffffffe);
        }
      }
      auStack_1e8._8_8_ = uVar10;
      func_0x0412a280(auStack_1e8._0_8_,(long)pauStack_1d8 - auStack_1e8._0_8_);
    }
  }
  if (((ulong)uStack_2c8 & 1) != 0) {
    func_0x0412a280(pauStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
  }
  if ((auStack_408[0] & 1) != 0) {
    func_0x0412a280(pauStack_3f8,auStack_408._0_8_ & 0xfffffffffffffffe);
  }
  uStack_3e8 = (undefined1 (*) [16])0x85eaac5f456d7e;
  pauStack_3e0 = (undefined1 (*) [16])&UNK_0140f690;
  pauStack_3d8 = (undefined1 (*) [16])0x1;
  uStack_3d0 = (undefined1 (*) [16])CONCAT44(uStack_3d0._4_4_,0x2f9);
  if ((byte)uStack_228 == 0) {
    _auStack_1f8 = (undefined1  [16])0x0;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auStack_1e8._8_8_;
    auStack_1e8 = auVar19 << 0x40;
    func_0x0eedeb80(2,0x2d,auStack_268,auStack_1f8,&uStack_3e8);
    if ((auStack_1f8[0] & 1) != 0) {
      func_0x0412a280(auStack_1e8._0_8_,(ulong)auStack_1f8 & 0xfffffffffffffffe);
    }
  }
  pauVar32 = pauStack_100;
  if (((byte)uStack_228 & 1) == 0) {
    param_2 = (undefined1 (*) [16])auStack_248._8_8_;
    if ((undefined1 (*) [16])auStack_248._8_8_ != (undefined1 (*) [16])0x0) {
      pauVar30 = (undefined1 (*) [16])auStack_238._0_8_;
      if (auStack_248._8_8_ != auStack_238._0_8_) {
        do {
          pauVar30 = pauVar30 + -4;
          FUN_048b3e80(pauVar30);
        } while (pauVar30 != param_2);
      }
      auStack_238._0_8_ = param_2;
      func_0x0412a280(auStack_248._8_8_,auStack_238._8_8_ - auStack_248._8_8_);
    }
    uVar2 = auStack_258._0_8_;
    pauVar32 = pauStack_100;
    if ((undefined1 (*) [16])auStack_258._0_8_ != (undefined1 (*) [16])0x0) {
      for (param_2 = (undefined1 (*) [16])auStack_258._8_8_; (undefined1 (*) [16])uVar2 != param_2;
          param_2 = param_2 + -5) {
        if ((param_2[-1][8] == '\x01') && ((param_2[-3][0] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)param_2[-2],*(ulong *)param_2[-3] & 0xfffffffffffffffe);
        }
      }
      auStack_258._8_8_ = uVar2;
      func_0x0412a280(auStack_258._0_8_,auStack_248._0_8_ - auStack_258._0_8_);
      pauVar32 = pauStack_100;
    }
  }
joined_r0x06244551:
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(pauStack_298,uStack_2a8 & 0xfffffffffffffffe);
  }
  pbStack_2f0 = pbStack_2f0 + 0x30;
  if (pbStack_2f0 == pbStack_f8) goto LAB_062437c1;
  goto LAB_062437fe;
LAB_06245e66:
  func_0x04882e30();
LAB_06245e6b:
  iVar26 = FUN_04108328(&DAT_0f7b8fb8);
  if (iVar26 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  goto LAB_06242f29;
}



/* ---- referenced strings ----
 * 0x12d9085  resourcePack.editor.jigsaw.save.fileOpenError
 * 0x12d9095  tor.jigsaw.save.fileOpenError
 * 0x12d90a2  ve.fileOpenError
 * 0x141433a  Jigsaw path does not exist: 
 * 0x1414346  does not exist: 
 * 0x14e3da0  ::::::::::::::::
 */
