/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb370f0 (ELF vaddr 0xda370f0)
 * Label: string:SurfaceBuilderType
 * Body:  [[0db370f0, 0db374d6] [0db374e0, 0db37522] [0db37530, 0db381ea] [0db381f0, 0db38381]]
 * Ghidra: FUN_0db370f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db370f0(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined *puVar15;
  byte *pbVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined4 uStack_380;
  undefined1 auStack_378 [16];
  byte bStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
  byte bStack_350;
  undefined6 uStack_34f;
  undefined1 uStack_349;
  undefined1 uStack_348;
  undefined6 uStack_347;
  undefined1 uStack_341;
  undefined8 uStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  code *pcStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  uint5 uStack_308;
  undefined3 uStack_303;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined2 uStack_290;
  undefined1 uStack_28c;
  undefined1 uStack_288;
  undefined1 uStack_284;
  byte bStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined2 uStack_257;
  undefined5 uStack_255;
  byte bStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined6 uStack_23e;
  byte bStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined4 uStack_228;
  uint uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  char cStack_208;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte bStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined6 uStack_1af;
  undefined1 uStack_1a9;
  undefined1 uStack_1a8;
  undefined6 uStack_1a7;
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined4 uStack_10c;
  char cStack_108;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_88;
  undefined7 uStack_87;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  
  func_0x0e8af270();
  lVar9 = param_1 + 0x18;
  func_0x0db61980(lVar9);
  lVar7 = func_0x0db61aa0(lVar9);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar17 = (*(byte *)(lVar7 + 8) & 1) != 0;
    puVar15 = (undefined *)(lVar7 + 9);
    if (bVar17) {
      puVar15 = *(undefined **)(lVar7 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar17) {
      uVar13 = *(ulong *)(lVar7 + 0x10);
    }
  }
  else {
    puVar15 = &UNK_01339a9c;
    uVar13 = 0x12;
  }
  func_0x0db61e90(auStack_338,param_1,puVar15,uVar13,0);
  uVar12 = _uStack_308;
  uStack_308 = (uint5)(uint)uStack_308;
  uVar3 = _uStack_308;
  uStack_300 = uStack_300 & 0xffffffffffffff00;
  uStack_308._0_1_ = (char)uVar12;
  bVar17 = (char)uStack_308 == '\0';
  _uStack_308 = uVar3;
  if (bVar17) {
    bStack_238 = 0x26;
    uStack_237 = (undefined7)_DAT_0142bedc;
    uStack_230 = (undefined1)((ulong)_DAT_0142bedc >> 0x38);
    uStack_22f = (undefined7)_UNK_0142bee4;
    uStack_228 = 0x646c726f;
    uStack_224 = uStack_224 & 0xffffff00;
    func_0x0db5fe60(&uStack_178,auStack_338,&uStack_237,0x13);
    bStack_1b8 = 0x2c;
    uStack_1b7 = (undefined7)_DAT_011b8f64;
    uStack_1b0 = (undefined1)((ulong)_DAT_011b8f64 >> 0x38);
    uStack_1af = (undefined6)_UNK_011b8f6c;
    uStack_1a9 = 0x65;
    uStack_1a8 = 0x6e;
    uStack_1a7 = 0x6e6165636f5f;
    uStack_1a1 = 0;
    func_0x0db60240(&uStack_f8,&uStack_178,&uStack_1b7,0x16);
    bStack_350 = 0x1c;
    uStack_34f = 0x7263656e696d;
    uStack_349 = 0x61;
    uStack_348 = 0x66;
    uStack_347 = 0x6173656d3a74;
    uStack_341 = 0;
    FUN_0db60620(&uStack_78,&uStack_f8,&uStack_34f,0xe);
    bStack_368 = 0x1e;
    uStack_367 = 0x617263656e696d;
    uStack_360 = 0x66;
    uStack_35f = 0x706d6177733a74;
    uStack_358 = 0;
    func_0x0db60a00(&uStack_1f8,&uStack_78,&uStack_367,0xf);
    bStack_250 = 0x20;
    uStack_24f = (undefined7)_DAT_01222b04;
    uStack_248 = (undefined1)((ulong)_DAT_01222b04 >> 0x38);
    uStack_247 = (undefined7)_UNK_01222b0c;
    uStack_240 = (undefined1)((ulong)_UNK_01222b0c >> 0x38);
    uStack_23f = 0;
    func_0x0db60de0(&lStack_138,&uStack_1f8,&uStack_24f,0x10);
    bStack_268 = 0x22;
    uStack_267 = (undefined7)_DAT_013df14a;
    uStack_260 = (undefined1)((ulong)_DAT_013df14a >> 0x38);
    uStack_25f = (undefined7)_UNK_013df152;
    uStack_258 = (undefined1)((ulong)_UNK_013df152 >> 0x38);
    uStack_257 = 100;
    func_0x0db611c0(&uStack_3d0,&lStack_138,&uStack_267,0x11);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar12 = _UNK_012a48b1;
    *puVar8 = _DAT_012a48a9;
    puVar8[1] = uVar12;
    puVar8[2] = 0x746e656964617267;
    *(undefined1 *)(puVar8 + 3) = 0;
    func_0x0db615a0(&uStack_b8,&uStack_3d0,puVar8,0x18);
    func_0x0412a280(puVar8,0x20);
    if ((bStack_268 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_255,CONCAT21(uStack_257,uStack_258)),
                      CONCAT71(uStack_267,bStack_268) & 0xfffffffffffffffe);
    }
    if ((bStack_250 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_23e,CONCAT11(uStack_23f,uStack_240)),
                      CONCAT71(uStack_24f,bStack_250) & 0xfffffffffffffffe);
    }
    if ((bStack_368 & 1) != 0) {
      func_0x0412a280(CONCAT71(uStack_357,uStack_358),
                      CONCAT71(uStack_367,bStack_368) & 0xfffffffffffffffe);
    }
    if ((bStack_350 & 1) != 0) {
      func_0x0412a280(uStack_340,
                      CONCAT17(uStack_349,CONCAT61(uStack_34f,bStack_350)) & 0xfffffffffffffffe);
    }
    if ((bStack_1b8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_1a1,CONCAT61(uStack_1a7,uStack_1a8)),
                      CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
    }
    if ((bStack_238 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_224,uStack_228),
                      CONCAT71(uStack_237,bStack_238) & 0xfffffffffffffffe);
    }
  }
  func_0x0dcf0a90(param_1);
  func_0x0db39a40(param_1);
  lVar9 = func_0x0db66120(lVar9);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar17 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar7 = lVar9 + 9;
    if (bVar17) {
      lVar7 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar17) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0db66b60(&lStack_138,param_1,lVar7,uVar13);
  }
  else {
    func_0x0db66b60(&lStack_138,param_1,&DAT_012a48a9,0x18);
  }
  if (cStack_108 != '\0') {
    return;
  }
  lVar7 = lStack_138 + 0x18;
  lVar9 = func_0x0db66120(lVar7);
  for (pbVar14 = *(byte **)(lStack_138 + 0x50); pbVar14 != *(byte **)(lStack_138 + 0x58);
      pbVar14 = pbVar14 + 0x38) {
    bVar1 = *pbVar14;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0db3753a;
    }
    else if (*(long *)(pbVar14 + 8) == 0x1a) {
LAB_0db3753a:
      if ((bVar1 & 1) == 0) {
        pbVar16 = pbVar14 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar14 + 0x10);
      }
      auVar18[0] = -(*pbVar16 == DAT_014eaba0);
      auVar18[1] = -(pbVar16[1] == DAT_014eaba0._1_1_);
      auVar18[2] = -(pbVar16[2] == DAT_014eaba0._2_1_);
      auVar18[3] = -(pbVar16[3] == DAT_014eaba0._3_1_);
      auVar18[4] = -(pbVar16[4] == DAT_014eaba0._4_1_);
      auVar18[5] = -(pbVar16[5] == DAT_014eaba0._5_1_);
      auVar18[6] = -(pbVar16[6] == DAT_014eaba0._6_1_);
      auVar18[7] = -(pbVar16[7] == DAT_014eaba0._7_1_);
      auVar18[8] = -(pbVar16[8] == DAT_014eaba0._8_1_);
      auVar18[9] = -(pbVar16[9] == DAT_014eaba0._9_1_);
      auVar18[10] = -(pbVar16[10] == DAT_014eaba0._10_1_);
      auVar18[0xb] = -(pbVar16[0xb] == DAT_014eaba0._11_1_);
      auVar18[0xc] = -(pbVar16[0xc] == DAT_014eaba0._12_1_);
      auVar18[0xd] = -(pbVar16[0xd] == DAT_014eaba0._13_1_);
      auVar18[0xe] = -(pbVar16[0xe] == DAT_014eaba0._14_1_);
      auVar18[0xf] = -(pbVar16[0xf] == DAT_014eaba0._15_1_);
      auVar19[0] = -(pbVar16[10] == DAT_014e4ff0);
      auVar19[1] = -(pbVar16[0xb] == DAT_014e4ff0._1_1_);
      auVar19[2] = -(pbVar16[0xc] == DAT_014e4ff0._2_1_);
      auVar19[3] = -(pbVar16[0xd] == DAT_014e4ff0._3_1_);
      auVar19[4] = -(pbVar16[0xe] == DAT_014e4ff0._4_1_);
      auVar19[5] = -(pbVar16[0xf] == DAT_014e4ff0._5_1_);
      auVar19[6] = -(pbVar16[0x10] == DAT_014e4ff0._6_1_);
      auVar19[7] = -(pbVar16[0x11] == DAT_014e4ff0._7_1_);
      auVar19[8] = -(pbVar16[0x12] == DAT_014e4ff0._8_1_);
      auVar19[9] = -(pbVar16[0x13] == DAT_014e4ff0._9_1_);
      auVar19[10] = -(pbVar16[0x14] == DAT_014e4ff0._10_1_);
      auVar19[0xb] = -(pbVar16[0x15] == DAT_014e4ff0._11_1_);
      auVar19[0xc] = -(pbVar16[0x16] == DAT_014e4ff0._12_1_);
      auVar19[0xd] = -(pbVar16[0x17] == DAT_014e4ff0._13_1_);
      auVar19[0xe] = -(pbVar16[0x18] == DAT_014e4ff0._14_1_);
      auVar19[0xf] = -(pbVar16[0x19] == DAT_014e4ff0._15_1_);
      auVar19 = auVar19 & auVar18;
      if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar14 == *(byte **)(lStack_138 + 0x58)) {
LAB_0db37569:
    if (iStack_110 == 0) {
      if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
      goto LAB_0db376bb;
      lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
    }
    else {
      auStack_338._0_8_ = func_0x048b0c90(lVar7,lVar9,uStack_10c,1);
      if (auStack_338._0_8_ == 0) {
        auStack_338 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_338);
        if (auStack_338._0_8_ == 0) goto LAB_0db376bb;
      }
      if ((*(int *)(auStack_338._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_338._0_8_ + 0x58) != 0)) {
        lVar9 = *(long *)(auStack_338._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0db376bb:
        lVar9 = 0;
      }
    }
    puStack_3c0 = &UNK_0488e0b0;
    uStack_3b8 = (code *)0x0;
    uStack_3b0 = CONCAT35(uStack_3b0._5_3_,0x48b5725f);
    uStack_3d0 = 0;
    auStack_338 = (undefined1  [16])0x0;
    pcStack_320 = (code *)&UNK_0488e0b0;
    pcStack_318 = (code *)0x0;
    uStack_310 = CONCAT35(uStack_310._5_3_,0x48b5725f);
    puStack_1e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1e8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar12 = _UNK_013bbadf;
    uStack_1f8 = 0x21;
    uStack_1f0 = 0x1a;
    *(ulong *)((long)puStack_1e8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1e8 + 0x12) = uVar12;
    uVar12 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1e8 = _DAT_013bbacd;
    puStack_1e8[1] = uVar12;
    *(undefined1 *)((long)puStack_1e8 + 0x1a) = 0;
    lVar9 = func_0x048b5060(lVar9,&uStack_1f8);
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if ((undefined1 *)(lVar9 + 0x20) == auStack_338) {
      pcVar10 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
        puVar8 = (undefined8 *)(lVar9 + 0x28);
        (**(code **)(lVar9 + 0x40))(puVar8);
        if (uStack_310._4_1_ != '\0') {
          if (uStack_310._4_1_ == '\x02') {
            (*pcStack_320)(5,auStack_338 + 8,puVar8);
          }
          else {
            uVar12 = auStack_338._8_8_;
            auStack_338._8_8_ = 0;
            *puVar8 = uVar12;
          }
        }
      }
      *(code **)(lVar9 + 0x38) = pcStack_320;
      *(code **)(lVar9 + 0x40) = pcStack_318;
      *(undefined4 *)(lVar9 + 0x48) = (undefined4)uStack_310;
      *(char *)(lVar9 + 0x4c) = uStack_310._4_1_;
      pcVar10 = pcStack_318;
    }
    if ((uStack_1f8 & 1) != 0) {
      func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
      pcVar10 = pcStack_318;
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(auStack_338 + 8);
    }
    if (uStack_3b8 != (code *)0x0) {
      (*uStack_3b8)(&uStack_3d0);
    }
  }
  else {
    iVar5 = *(int *)(pbVar14 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0db37569;
  }
  cStack_208 = cStack_108;
  uStack_210 = CONCAT44(uStack_10c,iStack_110);
  uStack_198 = uStack_118;
  uStack_1a8 = (undefined1)uStack_128;
  uStack_1a7 = (undefined6)((ulong)uStack_128 >> 8);
  uStack_1a1 = (undefined1)((ulong)uStack_128 >> 0x38);
  uStack_1a0 = uStack_120;
  bStack_1b8 = (byte)lStack_138;
  uStack_1b7 = (undefined7)((ulong)lStack_138 >> 8);
  uStack_1b0 = (undefined1)uStack_130;
  uStack_1af = (undefined6)((ulong)uStack_130 >> 8);
  uStack_1a9 = (undefined1)((ulong)uStack_130 >> 0x38);
  uStack_22f = (undefined7)((ulong)uStack_130 >> 8);
  uStack_228 = (undefined4)uStack_128;
  uStack_224 = (uint)((ulong)uStack_128 >> 0x20);
  uStack_220 = uStack_120;
  uStack_218 = uStack_118;
  bStack_238 = bStack_1b8;
  uStack_237 = uStack_1b7;
  uStack_230 = uStack_1b0;
  func_0x0db67440(auStack_338,&bStack_238,&UNK_013549dc,0x10,1);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f131030;
  if (pcStack_320 != (code *)0x0) {
    lVar9 = *(long *)pcStack_320;
    pcStack_320 = pcVar10;
    (**(code **)(lVar9 + 8))();
    pcVar10 = pcStack_320;
  }
  pcStack_320 = pcVar10;
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_328);
  lStack_3c8 = 0;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffff00000000);
  uStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_08912920;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &SUB_08912600;
  puStack_390 = &UNK_0db67710;
  puStack_388 = &UNK_0db67930;
  uStack_380 = 0;
  auStack_378 = ZEXT816(0);
  func_0x048b05a0(auStack_338._8_8_,&uStack_3d0);
  uVar12 = auStack_378._8_8_;
  if ((long *)auStack_378._8_8_ != (long *)0x0) {
    LOCK();
    plVar2 = (long *)(auStack_378._8_8_ + 8);
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
      func_0x0412c2d0(uVar12);
    }
  }
  func_0x0db67640(auStack_338);
  cStack_88 = cStack_208;
  uStack_b8 = CONCAT71(uStack_237,bStack_238);
  uStack_b0 = CONCAT71(uStack_22f,uStack_230);
  uStack_a8 = CONCAT44(uStack_224,uStack_228);
  uStack_98 = uStack_218;
  uStack_90 = uStack_210;
  uStack_a0 = uStack_220;
  func_0x048b0bc0(&pcStack_320);
  uStack_158 = uStack_98;
  uStack_178 = uStack_b8;
  uStack_170 = uStack_b0;
  uStack_168 = uStack_a8;
  uStack_160 = uStack_a0;
  uStack_148 = CONCAT71(uStack_87,cStack_88);
  uStack_150 = 0x5127f14d00000002;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  _uStack_308 = 0;
  uStack_300 = 0;
  pcStack_318 = (code *)0x0;
  uStack_310 = 0;
  uStack_328 = 0;
  pcStack_320 = (code *)0x0;
  auStack_338 = ZEXT816(0);
  uStack_2c8 = 0x3f600000;
  func_0x048afb10(&uStack_2f8,8);
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_290 = 0xff00;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f497e98;
  uVar12 = auStack_338._0_8_;
  auStack_338._0_8_ = puVar8;
  if ((long *)uVar12 != (long *)0x0) {
    (**(code **)(*(long *)uVar12 + 8))();
  }
  if ((uStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,uStack_310 & 0xfffffffffffffffe);
  }
  uStack_310 = CONCAT26(uStack_310._6_2_,0x6570797408);
  if ((DAT_0f736ab8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f736ab8), iVar5 != 0)) {
    func_0x0db66310(0xf736aa0);
    func_0x0410844d(&DAT_0f736ab8);
  }
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uStack_150._4_4_);
  lStack_3c8 = 0;
  puStack_3c0 = (undefined *)CONCAT44(puStack_3c0._4_4_,3);
  uStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0db65ce0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &SUB_0db61aa0;
  puStack_390 = &UNK_0db67d80;
  puStack_388 = &UNK_0db67d90;
  uStack_380 = 0;
  auStack_378 = ZEXT816(0);
  func_0x048b05a0(&uStack_170,&uStack_3d0);
  uVar12 = auStack_378._8_8_;
  if ((long *)auStack_378._8_8_ != (long *)0x0) {
    LOCK();
    plVar2 = (long *)(auStack_378._8_8_ + 8);
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
      func_0x0412c2d0(uVar12);
    }
  }
  puStack_1e8 = (undefined8 *)uStack_160;
  uStack_1e0 = uStack_158;
  uStack_1f8 = uStack_170;
  uStack_1f0 = uStack_168;
  func_0x0db67b10(&uStack_3d0,&uStack_1f8,auStack_338);
  if (uStack_3b8._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)((long)puStack_3c0 + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != (int)uStack_3b8) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_3c8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_0db37d1f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_3b8._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)((long)puStack_3c0 + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_3b8) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0db37d1f;
    }
    if (uStack_3b8._4_4_ == 0) {
      *(uint *)((long)puStack_3c0 + 0x18U) = *(uint *)((long)puStack_3c0 + 0x18U) | 0x90000;
    }
  }
  uStack_f8 = uStack_178;
  uStack_f0 = uStack_170;
  uStack_e8 = uStack_168;
  uStack_e0 = uStack_160;
  uStack_d8 = uStack_158;
  uStack_d0 = uStack_150;
  uStack_c8 = (undefined1)uStack_148;
  func_0x048b0bc0(auStack_338);
  func_0x0db67440(auStack_338,&uStack_f8,&UNK_01340c23,0x16,0);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f493a50;
  if (pcStack_320 != (code *)0x0) {
    lVar9 = *(long *)pcStack_320;
    pcStack_320 = pcVar10;
    (**(code **)(lVar9 + 8))();
    pcVar10 = pcStack_320;
  }
  pcStack_320 = pcVar10;
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_328);
  lStack_3c8 = 0;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffff00000000);
  uStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0db6c4a0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0db6c180;
  puStack_390 = &UNK_0db6c560;
  puStack_388 = &UNK_0db6c740;
  uStack_380 = 0;
  auStack_378 = ZEXT816(0);
  func_0x048b05a0(auStack_338._8_8_,&uStack_3d0);
  uVar12 = auStack_378._8_8_;
  if ((long *)auStack_378._8_8_ != (long *)0x0) {
    LOCK();
    plVar2 = (long *)(auStack_378._8_8_ + 8);
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
      func_0x0412c2d0(uVar12);
    }
  }
  func_0x0db67640(auStack_338);
  uStack_48 = uStack_c8;
  uStack_58 = uStack_d8;
  uStack_50 = uStack_d0;
  uStack_68 = uStack_e8;
  uStack_60 = uStack_e0;
  uStack_78 = uStack_f8;
  uStack_70 = uStack_f0;
  func_0x048b0bc0(&pcStack_320);
  uStack_1f8 = uStack_78;
  uStack_1f0 = uStack_70;
  puStack_1e8 = (undefined8 *)uStack_68;
  uStack_1e0 = uStack_60;
  uStack_1d8 = uStack_58;
  uStack_1d0 = uStack_50;
  uStack_1c8 = CONCAT71(uStack_47,uStack_48);
  func_0x0db67440(auStack_338,&uStack_1f8,&UNK_012ea9cc,0x16,1);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f493ad8;
  if (pcStack_320 != (code *)0x0) {
    lVar9 = *(long *)pcStack_320;
    pcStack_320 = pcVar10;
    (**(code **)(lVar9 + 8))();
    pcVar10 = pcStack_320;
  }
  pcStack_320 = pcVar10;
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_328);
  lStack_3c8 = 0;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffff00000000);
  uStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0db707a0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0db6f4b0;
  puStack_390 = &UNK_0db70860;
  puStack_388 = &UNK_0db70a40;
  uStack_380 = 0;
  auStack_378 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_338._8_8_,&uStack_3d0);
  uVar12 = auStack_378._8_8_;
  if ((long *)auStack_378._8_8_ != (long *)0x0) {
    LOCK();
    plVar2 = (long *)(auStack_378._8_8_ + 8);
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
      func_0x0412c2d0(uVar12);
    }
  }
  func_0x0db67640(auStack_338);
  uVar13 = uStack_1f8;
  iVar5 = (int)uStack_1d0;
  uVar4 = uStack_1d0._4_4_;
  func_0x048b0bc0(&pcStack_320);
  if (iVar5 != 4) {
    if (iVar5 != 1) {
      return;
    }
    lVar9 = uVar13 + 0x18;
    uVar12 = func_0x0db66120(lVar9);
    lVar9 = func_0x048b0c90(lVar9,uVar12,uVar4,1);
    if (lVar9 == 0) {
      auStack_338 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_338);
      lVar9 = auStack_338._0_8_;
    }
    lVar9 = *(long *)(lVar9 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0db38246;
  }
  lVar9 = uVar13 + 0x18;
  uVar12 = func_0x0db66120(lVar9);
  lVar9 = func_0x048b1040(lVar9,uVar12,uVar4,1);
  if (lVar9 == 0) {
    auStack_338 = (undefined1  [16])0x0;
    func_0x048b10d0(auStack_338);
    lVar7 = *(long *)(auStack_338._0_8_ + 0x38);
    lVar9 = auStack_338._0_8_;
    if (lVar7 == 0) goto LAB_0db381ba;
LAB_0db381e1:
    do {
      lVar9 = lVar7;
      lVar7 = *(long *)(lVar9 + 0x38);
      if (*(long *)(lVar9 + 0x38) == 0) {
        auStack_338 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_338);
        lVar7 = auStack_338._0_8_;
      }
    } while (lVar7 != 0);
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x38);
    if (*(long *)(lVar9 + 0x38) != 0) goto LAB_0db381e1;
LAB_0db381ba:
    auStack_338 = (undefined1  [16])0x0;
    func_0x048b10d0(auStack_338);
    lVar7 = auStack_338._0_8_;
    if (auStack_338._0_8_ != 0) goto LAB_0db381e1;
  }
  lVar9 = *(long *)(lVar9 + 0x48);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_0db38246:
  puVar8[1] = 0xffffffffffffffff;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 0xff;
  *puVar8 = &UNK_0f4e3cf0;
  puVar8[4] = 1;
  *(undefined1 (*) [16])(puVar8 + 5) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar8 + 7) = 0;
  plVar2 = *(long **)(lVar9 + 8);
  *(undefined8 **)(lVar9 + 8) = puVar8;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x11b8f64  minecraft:frozen_ocean
 * 0x1222b04  minecraft:capped
 * 0x12a48a9  minecraft:noise_gradient
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x13df14a  minecraft:the_end
 * 0x142bedc  minecraft:overworld
 * 0x14eaba0  [cereal:document
 */
