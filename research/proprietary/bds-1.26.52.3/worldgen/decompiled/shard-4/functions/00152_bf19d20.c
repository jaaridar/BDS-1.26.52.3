/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc019d20 (ELF vaddr 0xbf19d20)
 * Label: string:density
 * Body:  [[0c019d20, 0c019d4b] [0c019d50, 0c019ea6] [0c019eb0, 0c01b5e1] [0c01b5f0, 0c01b6d7] [0c01b6e0, 0c01b7e1] [0c01b7f0, 0c01b84b] [0c01b850, 0c01b8dc] [0c01b8e0, 0c01b914] [0c01b920, 0c01b965] [0c01b970, 0c01b993] [0c01b9a0, 0c01bac6] [0c01bad0, 0c01bcc4] [0c01bcd0, 0c01bd43] [0c01bd50, 0c01bddd] [0c01bde0, 0c01be98] [0c01bea0, 0c01c3dc] [0c01c3e0, 0c01c4e6] [0c01c4f0, 0c01c5a8] [0c01c5b0, 0c01c5e3] [0c01c5f0, 0c01c658] [0c01c660, 0c01c67a] [0c01c680, 0c01c6ab] [0c01c6b0, 0c01c6c5] [0c01c6d0, 0c01c70c] [0c01c710, 0c01c97c] [0c01c980, 0c01ca34] [0c01ca40, 0c01cd9b] [0c01cdec, 0c01cdfb] [0c01ce74, 0c01cfac] [0c01cfb0, 0c01cfe5] [0c01cff0, 0c01d056] [0c01d060, 0c01d079] [0c01d080, 0c01da03] [0c01da10, 0c01dad8] [0c01dae0, 0c01db3b] [0c01db40, 0c01db8a] [0c01db90, 0c01dbe5] [0c01dbf0, 0c01dc2b] [0c01dc30, 0c01de95] [0c01dea0, 0c01e4cc] [0c01e4d0, 0c01e922] [0c01e930, 0c01e98a] [0c01e990, 0c01e9db] [0c01e9e0, 0c01eaaa] [0c01eab0, 0c01ead2] [0c01eae0, 0c01eb29] [0c01eb30, 0c01ebaa] [0c01ebb0, 0c01ed97] [0c01eda0, 0c01ee46] [0c01f856, 0c01f86b]]
 * Ghidra: FUN_0c019d20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c019d20(long *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  long *plVar19;
  byte *pbVar20;
  long *plVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  bool bVar29;
  float fVar30;
  long *plStack_398;
  long *plStack_388;
  undefined1 auStack_380 [4];
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  uint uStack_360;
  uint uStack_35c;
  byte bStack_358;
  undefined4 uStack_357;
  undefined3 uStack_353;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  uint uStack_338;
  undefined4 uStack_334;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  undefined4 uStack_328;
  undefined4 uStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  byte bStack_318;
  undefined2 uStack_317;
  undefined1 uStack_315;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined2 uStack_30f;
  undefined1 uStack_30d;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  uint uStack_300;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  byte bStack_2d8;
  undefined2 uStack_2d7;
  undefined1 uStack_2d5;
  undefined4 uStack_2d4;
  undefined1 uStack_2d0;
  undefined2 uStack_2cf;
  undefined1 uStack_2cd;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  byte bStack_2b8;
  undefined2 uStack_2b7;
  undefined1 uStack_2b5;
  undefined4 uStack_2b4;
  undefined1 uStack_2b0;
  undefined2 uStack_2af;
  undefined1 uStack_2ad;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  undefined1 uStack_29c;
  undefined2 uStack_29b;
  undefined1 uStack_299;
  byte bStack_298;
  undefined4 uStack_297;
  undefined2 uStack_293;
  undefined1 uStack_291;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  uint uStack_27c;
  byte bStack_278;
  undefined4 uStack_277;
  undefined3 uStack_273;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  uint uStack_260;
  undefined1 uStack_25c;
  undefined2 uStack_25b;
  undefined1 uStack_259;
  byte bStack_258;
  undefined4 uStack_257;
  undefined2 uStack_253;
  undefined1 uStack_251;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  byte bStack_238;
  undefined1 uStack_237;
  undefined6 uStack_236;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined6 uStack_22e;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  uint uStack_218;
  uint uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint uStack_200;
  undefined1 uStack_1fc;
  undefined2 uStack_1fb;
  undefined1 uStack_1f9;
  byte bStack_1f8;
  undefined4 uStack_1f7;
  undefined2 uStack_1f3;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  byte bStack_1e0;
  undefined2 uStack_1df;
  undefined1 uStack_1dd;
  uint uStack_1dc;
  byte bStack_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  uint uStack_1d4;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint uStack_1c0;
  undefined1 uStack_1bc;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  byte bStack_1b8;
  undefined4 uStack_1b7;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  byte bStack_198;
  undefined2 uStack_197;
  undefined1 uStack_195;
  undefined4 uStack_194;
  undefined1 uStack_190;
  undefined2 uStack_18f;
  undefined1 uStack_18d;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  undefined1 uStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  byte bStack_178;
  undefined4 uStack_177;
  undefined2 uStack_173;
  undefined1 uStack_171;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  byte bStack_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined5 uStack_155;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined5 uStack_14d;
  undefined4 uStack_148;
  undefined4 uStack_144;
  byte bStack_140;
  undefined2 uStack_13f;
  undefined1 uStack_13d;
  uint uStack_13c;
  byte bStack_138;
  undefined2 uStack_137;
  undefined1 uStack_135;
  uint uStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined1 uStack_fc;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  byte bStack_f8;
  undefined4 uStack_f7;
  undefined2 uStack_f3;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  byte bStack_b8;
  undefined4 uStack_b7;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined1 uStack_b0;
  undefined4 uStack_af;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  byte bStack_98;
  undefined4 uStack_97;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte bStack_80;
  undefined5 uStack_7f;
  undefined2 uStack_7a;
  undefined1 uStack_78;
  undefined5 uStack_77;
  undefined1 uStack_72;
  undefined8 uStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar28 = _DAT_0f6d2fc0;
  plVar27 = _DAT_0f6d2fc0;
  for (plVar25 = _DAT_0f6d2fc8; _DAT_0f6d2fc0 = plVar27, plVar28 != plVar25; plVar25 = plVar25 + -1)
  {
    plVar27 = (long *)plVar25[-1];
    plVar25[-1] = 0;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 8))();
    }
    plVar27 = _DAT_0f6d2fc0;
  }
  _DAT_0f6d2fc8 = plVar28;
  lVar17 = (long)plVar28 - (long)plVar27;
  uVar26 = lVar17 >> 3;
  if (uVar26 < 0x2a) {
    iVar9 = (int)(0x2a - uVar26);
    if ((ulong)(_DAT_0f6d2fd0 - (long)plVar28 >> 3) < 0x2a - uVar26) {
      plStack_398 = (long *)(_DAT_0f6d2fd0 - (long)plVar27);
      uVar10 = 0x2a;
      if (0x2a < (ulong)((long)plStack_398 >> 2)) {
        uVar10 = (long)plStack_398 >> 2;
      }
      uVar24 = 0x1fffffffffffffff;
      if (plStack_398 < (long *)0x7ffffffffffffff8) {
        uVar24 = uVar10;
      }
      if (uVar24 >> 0x3d != 0) {
LAB_0c01cd95:
        uVar14 = func_0x04882eb0();
        func_0x0412a280(plVar27,0x90);
        uVar14 = _Unwind_Resume(uVar14);
        func_0x04882e20(uVar14);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar11 == 0) {
        func_0x0eec74c0(uVar24 * 8,0);
      }
      lVar22 = lVar11 + uVar24 * 8;
      lVar11 = lVar11 + lVar17;
      uVar10 = (ulong)(uint)(iVar9 << 3);
      func_0x0eee2dd0(lVar11,0,uVar10);
      plVar25 = (long *)(uVar10 + lVar11);
      plVar28 = (long *)(lVar11 + uVar26 * -8);
      func_0x0eee2f00(plVar28,plVar27,lVar17);
      _DAT_0f6d2fc0 = plVar28;
      _DAT_0f6d2fd0 = lVar22;
      plStack_388 = param_1;
      if (plVar27 != (long *)0x0) {
        _DAT_0f6d2fc8 = plVar25;
        func_0x0412a280(plVar27,plStack_398);
        plVar25 = _DAT_0f6d2fc8;
      }
    }
    else {
      uVar26 = (ulong)(uint)(iVar9 << 3);
      func_0x0eee2dd0(plVar28,0,uVar26);
      plVar25 = (long *)((long)plVar28 + uVar26);
    }
  }
  else {
    plVar25 = _DAT_0f6d2fc8;
    if (lVar17 != 0x150) {
      for (; plVar25 = plVar27 + 0x2a, plVar27 + 0x2a != plVar28; plVar28 = plVar28 + -1) {
        plVar25 = (long *)plVar28[-1];
        plVar28[-1] = 0;
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
  }
  _DAT_0f6d2fc8 = plVar25;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0,0x1e,&UNK_011e223d,10,&UNK_01e79d91,0,&UNK_012324ee,0x17,1,0xf,0);
  *puVar12 = &UNK_0f34b028;
  plVar27 = (long *)*_DAT_0f6d2fc0;
  *_DAT_0f6d2fc0 = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,1,10,&UNK_0126750e,0xf,&UNK_01e79d91,0,&UNK_0124dfd4,0x18,1,0xf,0);
  *puVar12 = &UNK_0f34b028;
  plVar27 = (long *)_DAT_0f6d2fc0[1];
  _DAT_0f6d2fc0[1] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,2,10,&UNK_014a4716,0xf,&UNK_01e79d91,0,&UNK_0143db2c,0x18,1,4,0);
  *puVar12 = &UNK_0f34b028;
  plVar27 = (long *)_DAT_0f6d2fc0[2];
  _DAT_0f6d2fc0[2] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,3,3,&UNK_01232506,0x10,&UNK_01e79d91,0,&UNK_014bdf3a,0x1d,1,0xf,0);
  *puVar12 = &UNK_0f34b028;
  plVar27 = (long *)_DAT_0f6d2fc0[3];
  _DAT_0f6d2fc0[3] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,4,10,&UNK_0131a7a6,0x15,&UNK_01e79d91,0,&UNK_0136d04e,0x1e,1,0xf,0);
  *puVar12 = &UNK_0f34b028;
  plVar27 = (long *)_DAT_0f6d2fc0[4];
  _DAT_0f6d2fc0[4] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,5,1,&UNK_01384360,6,&UNK_01e79d91,0,&UNK_0142231d,0x12,1,2,0xd);
  *puVar12 = &UNK_0f34b028;
  plVar27 = (long *)_DAT_0f6d2fc0[5];
  _DAT_0f6d2fc0[5] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,8,3,&UNK_012e7458,0xd,&UNK_01e79d91,0,&UNK_0136d06d,0x17,1,1,0);
  *puVar12 = &UNK_0f34b0d0;
  plVar27 = (long *)_DAT_0f6d2fc0[8];
  _DAT_0f6d2fc0[8] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,6,3,&UNK_01281000,0xb,&UNK_01e79d91,0,&UNK_014bdf58,0x12,1,1,0);
  *puVar12 = &UNK_0f34b0d0;
  plVar27 = (long *)_DAT_0f6d2fc0[6];
  _DAT_0f6d2fc0[6] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,7,3,&UNK_01422330,0xd,&UNK_01e79d91,0,&UNK_0138613c,0x17,1,4,0);
  *puVar12 = &UNK_0f34b0d0;
  plVar27 = (long *)_DAT_0f6d2fc0[7];
  _DAT_0f6d2fc0[7] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,9,0x1e,&UNK_014a4726,9,&UNK_01e79d91,0,&UNK_012cc9fc,0x16,1,0x800010,0x200
                 );
  *puVar12 = &UNK_0f34b178;
  plVar27 = (long *)_DAT_0f6d2fc0[9];
  _DAT_0f6d2fc0[9] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,10,10,&UNK_014bdf6b,5,&UNK_01e79d91,0,&UNK_0124dfed,0x19,1,0xc00010,0x200)
  ;
  *puVar12 = &UNK_0f34b178;
  plVar27 = (long *)_DAT_0f6d2fc0[10];
  _DAT_0f6d2fc0[10] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0xb,10,&UNK_013a118f,0x12,&UNK_01e79d91,0,&UNK_014bdf71,0x1d,1,0xc00010,
                  0x200);
  *puVar12 = &UNK_0f34b178;
  plVar27 = (long *)_DAT_0f6d2fc0[0xb];
  _DAT_0f6d2fc0[0xb] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0xc,10,&UNK_01463249,9,&UNK_01e79d91,0,&UNK_012ffe59,0x15,1,0x800010,0);
  *puVar12 = &UNK_0f34b178;
  plVar27 = (long *)_DAT_0f6d2fc0[0xc];
  _DAT_0f6d2fc0[0xc] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0xd,3,&UNK_01350b56,0xb,&UNK_01e79d91,0,&UNK_014bdf8f,0x10,1,0xc00010,0);
  *puVar12 = &UNK_0f34b178;
  plVar27 = (long *)_DAT_0f6d2fc0[0xd];
  _DAT_0f6d2fc0[0xd] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x26,3,&UNK_0132964e,10,&UNK_01e79d91,0,&UNK_01232517,0x22,0,0x400000,0);
  *puVar12 = &UNK_0f34b220;
  plVar27 = (long *)_DAT_0f6d2fc0[0x26];
  _DAT_0f6d2fc0[0x26] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x27,10,&UNK_0119c60d,7,&UNK_01e79d91,0,&UNK_0124e007,0x20,1,0x400000,0);
  *puVar12 = &UNK_0f34c760;
  plVar27 = (long *)_DAT_0f6d2fc0[0x27];
  _DAT_0f6d2fc0[0x27] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x28,3,&UNK_014bdfa0,6,&UNK_01e79d91,0,&UNK_01350b62,0x1f,1,0x400000,0);
  *puVar12 = &UNK_0f34c460;
  plVar27 = (long *)_DAT_0f6d2fc0[0x28];
  _DAT_0f6d2fc0[0x28] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x29,10,&UNK_0143bb4a,5,&UNK_01e79d91,0,&UNK_0126751e,0x11,1,0x800000,0);
  *puVar12 = &UNK_0f34b2c8;
  plVar27 = (long *)_DAT_0f6d2fc0[0x29];
  _DAT_0f6d2fc0[0x29] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x17,3,&UNK_013eedbb,0xf,&UNK_01e79d91,0,&UNK_011e2248,0x1c,1,0x1000,0);
  *puVar12 = &UNK_0f34b370;
  plVar27 = (long *)_DAT_0f6d2fc0[0x17];
  _DAT_0f6d2fc0[0x17] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x12,3,&UNK_012b311b,7,&UNK_01e79d91,0,&UNK_0142233e,0x1b,1,0xe40,0);
  *puVar12 = &UNK_0f34b370;
  plVar27 = (long *)_DAT_0f6d2fc0[0x12];
  _DAT_0f6d2fc0[0x12] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0xe,3,&UNK_0143db45,7,&UNK_01e79d91,0,&UNK_012b3123,0x15,1,0x800010,0);
  *puVar12 = &UNK_0f34b370;
  plVar27 = (long *)_DAT_0f6d2fc0[0xe];
  _DAT_0f6d2fc0[0xe] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0xf,0x1e,&UNK_012ffe6f,10,&UNK_01e79d91,0,&UNK_01217b31,0x13,1,0xe40,0x80)
  ;
  *puVar12 = &UNK_0f34c820;
  plVar27 = (long *)_DAT_0f6d2fc0[0xf];
  _DAT_0f6d2fc0[0xf] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x11,10,&UNK_011c9195,10,&UNK_01e79d91,0,&UNK_01267530,0x16,1,0x811e7f,
                  0x72e1c0);
  *puVar12 = &UNK_0f34c820;
  plVar27 = (long *)_DAT_0f6d2fc0[0x11];
  _DAT_0f6d2fc0[0x11] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x10,1,&UNK_0128100c,10,&UNK_01e79d91,0,&UNK_013d4ef5,0x16,1,0xe40,0x80);
  *puVar12 = &UNK_0f34c820;
  plVar27 = (long *)_DAT_0f6d2fc0[0x10];
  _DAT_0f6d2fc0[0x10] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x13,0x1e,&UNK_01343ddf,5,&UNK_01e79d91,0,&UNK_01489159,0x17,1,0x20,0);
  *puVar12 = &UNK_0f34c3a0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x13];
  _DAT_0f6d2fc0[0x13] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x14,3,&UNK_011c91a0,5,&UNK_01e79d91,0,&UNK_012e7466,0x1a,1,0x20,0);
  *puVar12 = &UNK_0f34c3a0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x14];
  _DAT_0f6d2fc0[0x14] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x15,3,&UNK_012e7481,5,&UNK_01e79d91,0,&UNK_014085af,0x15,1,0x20,0);
  *puVar12 = &UNK_0f34c3a0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x15];
  _DAT_0f6d2fc0[0x15] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x16,1,&UNK_0142235a,8,&UNK_0136d085,0xc,&UNK_0131a7bc,0x19,1,0x20,0);
  *puVar12 = &UNK_0f34c3a0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x16];
  _DAT_0f6d2fc0[0x16] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x18,3,&UNK_011fdd8b,4,&UNK_01e79d91,0,&UNK_014a4730,0x18,1,0x1000,0);
  *puVar12 = &UNK_0f34b418;
  plVar27 = (long *)_DAT_0f6d2fc0[0x18];
  _DAT_0f6d2fc0[0x18] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x19,3,&UNK_013a11a2,0xc,&UNK_01e79d91,0,&UNK_014a4749,0x17,1,4,0);
  *puVar12 = &UNK_0f34b4c0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x19];
  _DAT_0f6d2fc0[0x19] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x1a,3,&UNK_01350b82,7,&UNK_01e79d91,0,&UNK_01335998,0x13,1,0x811e7f,
                  0x72e1c0);
  *puVar12 = &UNK_0f34b568;
  plVar27 = (long *)_DAT_0f6d2fc0[0x1a];
  _DAT_0f6d2fc0[0x1a] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x1b,1,&UNK_014491b7,7,&UNK_01e79d91,0,&UNK_0124e028,0x19,1,0x4400f,0);
  *puVar12 = &UNK_0f34c5e0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x1b];
  _DAT_0f6d2fc0[0x1b] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x1c,1,&UNK_0131a7d6,9,&UNK_01e79d91,0,&UNK_013eedcb,0x1b,1,
                  0xffffffffffffffff,0);
  *puVar12 = &UNK_0f34c6a0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x1c];
  _DAT_0f6d2fc0[0x1c] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x1d,10,&UNK_012e7487,8,&UNK_01e79d91,0,&UNK_01217b45,0x1b,1,0x8000,0);
  *puVar12 = &UNK_0f34b610;
  plVar27 = (long *)_DAT_0f6d2fc0[0x1d];
  _DAT_0f6d2fc0[0x1d] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x1e,3,&UNK_0129a581,7,&UNK_01e79d91,0,&UNK_01217b61,0x1a,1,0x8000,0);
  *puVar12 = &UNK_0f34b6b8;
  plVar27 = (long *)_DAT_0f6d2fc0[0x1e];
  _DAT_0f6d2fc0[0x1e] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x1f,0x1e,&UNK_012b3139,7,&UNK_01e79d91,0,&UNK_013d4f0c,0x1a,1,0x8000,0);
  *puVar12 = &UNK_0f34b760;
  plVar27 = (long *)_DAT_0f6d2fc0[0x1f];
  _DAT_0f6d2fc0[0x1f] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x20,1,&UNK_01240b4c,10,&UNK_01e79d91,0,&UNK_014561ed,0x1d,1,0x8000,0);
  *puVar12 = &UNK_0f34b808;
  plVar27 = (long *)_DAT_0f6d2fc0[0x20];
  _DAT_0f6d2fc0[0x20] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x21,3,&UNK_0136d092,9,&UNK_01e79d91,0,&UNK_01489171,0x1d,1,0x10000,0);
  *puVar12 = &UNK_0f34c520;
  plVar27 = (long *)_DAT_0f6d2fc0[0x21];
  _DAT_0f6d2fc0[0x21] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x22,0x1e,&UNK_0129a589,8,&UNK_01e79d91,0,&UNK_01281017,0x1c,1,0x10000,0);
  *puVar12 = &UNK_0f34c520;
  plVar27 = (long *)_DAT_0f6d2fc0[0x22];
  _DAT_0f6d2fc0[0x22] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x23,10,&UNK_014085c5,0xc,&UNK_01e79d91,0,&UNK_0148918f,0x1f,1,0x10000,0);
  *puVar12 = &UNK_0f34c520;
  plVar27 = (long *)_DAT_0f6d2fc0[0x23];
  _DAT_0f6d2fc0[0x23] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x24,1,&UNK_014891af,10,&UNK_01e79d91,0,&UNK_0143db4d,0x16,0,4,0);
  *puVar12 = &UNK_0f34b8b0;
  plVar27 = (long *)_DAT_0f6d2fc0[0x24];
  _DAT_0f6d2fc0[0x24] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  func_0x0c019630(puVar12,0x25,1,&UNK_01386154,0xb,&UNK_01e79d91,0,&UNK_012ffe7a,0x17,0,8,0);
  *puVar12 = &UNK_0f34b958;
  plVar27 = (long *)_DAT_0f6d2fc0[0x25];
  _DAT_0f6d2fc0[0x25] = (long)puVar12;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 8))();
  }
  if (((DAT_0f5a2b38 != '\0') || ((char)param_1[3] != '\0')) ||
     (((DAT_0f5a2b26 & 1) != 0 &&
      ((*(char *)((long)param_1 + 7) == '\0' &&
       (cVar8 = func_0x04fa7a10(param_1,0xf5a2b20), cVar8 != '\0')))))) {
    *(undefined1 *)(_DAT_0f6d2fc0[0x29] + 0x88) = 1;
  }
  plVar27 = _DAT_0f6d2f40;
  if (_DAT_0f6d2f48 != 0) {
    while (plVar27 != (long *)0x0) {
      plVar28 = (long *)*plVar27;
      if ((*(byte *)(plVar27 + 3) & 1) != 0) {
        func_0x0412a280(plVar27[5],plVar27[3] & 0xfffffffffffffffe);
      }
      func_0x0412a280(plVar27,0x40);
      plVar27 = plVar28;
    }
    _DAT_0f6d2f40 = (long *)0x0;
    if (_DAT_0f6d2f38 != (long *)0x0) {
      func_0x0eee2dd0(_DAT_0f6d2f30,0,(long)_DAT_0f6d2f38 << 3);
    }
    _DAT_0f6d2f48 = 0;
  }
  plStack_48 = _DAT_0f6d2fc8;
  plVar27 = _DAT_0f6d2fc0;
  if (_DAT_0f6d2fc0 != _DAT_0f6d2fc8) {
LAB_0c01b550:
    do {
      plStack_398 = plVar27;
      plVar25 = _DAT_0f6d2f38;
      lVar17 = *plStack_398;
      uVar1 = *(undefined1 *)(lVar17 + 8);
      plVar28 = (long *)(lVar17 + 0x38);
      plVar27 = *(long **)(lVar17 + 0x38);
      if (_DAT_0f6d2f38 != (long *)0x0) {
        uVar26 = (long)_DAT_0f6d2f38 - ((ulong)_DAT_0f6d2f38 >> 1 & 0x5555555555555555);
        uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
        uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar26 >> 0x38 < 2) {
          plStack_388 = (long *)((long)_DAT_0f6d2f38 - 1U & (ulong)plVar27);
        }
        else {
          plStack_388 = plVar27;
          if (_DAT_0f6d2f38 <= plVar27) {
            if (((ulong)plVar27 | (ulong)_DAT_0f6d2f38) >> 0x20 == 0) {
              plStack_388 = (long *)(((ulong)plVar27 & 0xffffffff) %
                                    ((ulong)_DAT_0f6d2f38 & 0xffffffff));
            }
            else {
              plStack_388 = (long *)((ulong)plVar27 % (ulong)_DAT_0f6d2f38);
            }
          }
        }
        plVar13 = *(long **)(_DAT_0f6d2f30 + (long)plStack_388 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          lStack_40 = lVar17 + 0x41;
          if ((byte)(uVar26 >> 0x38) < 2) {
            uVar26 = (long)_DAT_0f6d2f38 - 1;
            plStack_38 = plVar28;
            do {
              if ((long *)plVar13[1] == plVar27) {
                if ((long *)plVar13[2] == plVar27) {
                  plVar19 = plVar13 + 2;
                  if (((long *)plVar13[6] == plVar28) && (*(long **)(lVar17 + 0x58) == plVar19))
                  goto LAB_0c01be58;
                  bVar2 = *(byte *)(plVar13 + 3);
                  if ((bVar2 & 1) == 0) {
                    uVar10 = (ulong)(bVar2 >> 1);
                    uVar24 = (ulong)*(byte *)(lVar17 + 0x40);
                    if ((*(byte *)(lVar17 + 0x40) & 1) != 0) goto LAB_0c01b807;
LAB_0c01b7d7:
                    if (uVar10 != uVar24 >> 1) goto LAB_0c01b78a;
                  }
                  else {
                    uVar10 = plVar13[4];
                    uVar24 = (ulong)*(byte *)(lVar17 + 0x40);
                    if ((*(byte *)(lVar17 + 0x40) & 1) == 0) goto LAB_0c01b7d7;
LAB_0c01b807:
                    if (uVar10 != *(ulong *)(lVar17 + 0x48)) goto LAB_0c01b78a;
                  }
                  if ((bVar2 & 1) == 0) {
                    lVar11 = (long)plVar13 + 0x19;
                  }
                  else {
                    lVar11 = plVar13[5];
                  }
                  lVar22 = lStack_40;
                  if ((uVar24 & 1) != 0) {
                    lVar22 = *(long *)(lVar17 + 0x50);
                  }
                  iVar9 = bcmp(lVar11,lVar22);
                  plVar28 = plStack_38;
                  if (iVar9 == 0) goto LAB_0c01be50;
                }
LAB_0c01b78a:
                plVar13[6] = 0;
              }
              else if ((long *)((ulong)plVar13[1] & uVar26) != plStack_388) break;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              plVar19 = (long *)plVar13[1];
              if (plVar19 == plVar27) {
                if ((long *)plVar13[2] == plVar27) {
                  plVar19 = plVar13 + 2;
                  if (((long *)plVar13[6] == plVar28) && (*(long **)(lVar17 + 0x58) == plVar19))
                  goto LAB_0c01be58;
                  bVar2 = *(byte *)(plVar13 + 3);
                  if ((bVar2 & 1) == 0) {
                    uVar26 = (ulong)(bVar2 >> 1);
                    uVar10 = (ulong)*(byte *)(lVar17 + 0x40);
                    if ((*(byte *)(lVar17 + 0x40) & 1) != 0) goto LAB_0c01b710;
LAB_0c01b6cd:
                    if (uVar26 != uVar10 >> 1) goto LAB_0c01b680;
                  }
                  else {
                    uVar26 = plVar13[4];
                    uVar10 = (ulong)*(byte *)(lVar17 + 0x40);
                    if ((*(byte *)(lVar17 + 0x40) & 1) == 0) goto LAB_0c01b6cd;
LAB_0c01b710:
                    if (uVar26 != *(ulong *)(lVar17 + 0x48)) goto LAB_0c01b680;
                  }
                  if ((bVar2 & 1) == 0) {
                    lVar11 = (long)plVar13 + 0x19;
                  }
                  else {
                    lVar11 = plVar13[5];
                  }
                  lVar22 = lStack_40;
                  if ((uVar10 & 1) != 0) {
                    lVar22 = *(long *)(lVar17 + 0x50);
                  }
                  iVar9 = bcmp(lVar11,lVar22);
                  if (iVar9 == 0) goto LAB_0c01be50;
                }
LAB_0c01b680:
                plVar13[6] = 0;
              }
              else {
                if (plVar25 <= plVar19) {
                  if (((ulong)plVar19 | (ulong)plVar25) >> 0x20 == 0) {
                    if ((long *)(((ulong)plVar19 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff)) ==
                        plStack_388) goto LAB_0c01b688;
                    break;
                  }
                  plVar19 = (long *)((ulong)plVar19 % (ulong)plVar25);
                }
                if (plVar19 != plStack_388) break;
              }
LAB_0c01b688:
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
      }
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (plVar13 == (long *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      uStack_378 = &DAT_0f6d2f30;
      uStack_370 = 0;
      *plVar13 = 0;
      plVar13[1] = (long)plVar27;
      plVar13[2] = 0;
      plVar13[3] = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[6] = 0;
      _auStack_380 = plVar13;
      if (plVar13 + 2 != plVar28) {
        if ((*(byte *)(lVar17 + 0x40) & 1) == 0) {
          plVar13[5] = *(long *)(lVar17 + 0x50);
          lVar11 = *(long *)(lVar17 + 0x48);
          plVar13[3] = *(long *)(lVar17 + 0x40);
          plVar13[4] = lVar11;
        }
        else {
          func_0x04885070(plVar13 + 3,*(undefined8 *)(lVar17 + 0x50),*(undefined8 *)(lVar17 + 0x48))
          ;
        }
      }
      plVar13[2] = *plVar28;
      *(undefined1 *)(plVar13 + 7) = 0;
      uStack_370 = CONCAT71(uStack_370._1_7_,1);
      if ((long)plVar25 < 0) {
        fVar30 = (float)plVar25;
        if (plVar25 != (long *)0x0) goto LAB_0c01b983;
LAB_0c01b9a0:
        uVar26 = 1;
        if ((long *)0x2 < plVar25) {
          uVar26 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
        }
        plVar25 = (long *)((long)plVar25 * 2 | uVar26);
        fVar30 = (float)ceilf((float)(_DAT_0f6d2f48 + 1) / _DAT_0f6d2f50);
        plVar28 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
        if (plVar28 < plVar25) {
          plVar28 = plVar25;
        }
        plVar25 = (long *)0x2;
        if ((plVar28 == (long *)0x1) ||
           (plVar25 = plVar28, ((ulong)plVar28 & (long)plVar28 - 1U) == 0)) {
          bVar29 = plVar25 < _DAT_0f6d2f38;
          if (plVar25 <= _DAT_0f6d2f38) goto LAB_0c01bb33;
LAB_0c01ba1b:
          if ((long *)0x1fffffffffffffff < plVar25) {
            func_0x04882eb0();
            goto LAB_0c01cd95;
          }
          lVar17 = (long)plVar25 * 8;
          lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
          if (lVar11 == 0) {
            func_0x0eec74c0(lVar17,0);
          }
          lVar22 = _DAT_0f6d2f30;
          bVar29 = _DAT_0f6d2f30 != 0;
          _DAT_0f6d2f30 = lVar11;
          if (bVar29) {
            func_0x0412a280(lVar22,(long)_DAT_0f6d2f38 << 3);
          }
          lVar11 = _DAT_0f6d2f30;
          _DAT_0f6d2f38 = plVar25;
          func_0x0eee2dd0(_DAT_0f6d2f30,0,lVar17);
          plVar28 = _DAT_0f6d2f40;
          if (_DAT_0f6d2f40 != (long *)0x0) {
            plVar19 = (long *)_DAT_0f6d2f40[1];
            uVar26 = (long)plVar25 - 1;
            if (((ulong)plVar25 & uVar26) == 0) {
              *(undefined **)(lVar11 + ((ulong)plVar19 & uVar26) * 8) = &DAT_0f6d2f40;
              uVar10 = (ulong)plVar19 & uVar26;
              while (plVar25 = plVar28, plVar28 = (long *)*plVar25, plVar28 != (long *)0x0) {
                uVar24 = plVar28[1] & uVar26;
                if (uVar24 != uVar10) {
                  if (*(long *)(lVar11 + uVar24 * 8) == 0) {
                    *(long **)(lVar11 + uVar24 * 8) = plVar25;
                    uVar10 = uVar24;
                  }
                  else {
                    *plVar25 = *plVar28;
                    *plVar28 = **(long **)(lVar11 + uVar24 * 8);
                    **(undefined8 **)(lVar11 + uVar24 * 8) = plVar28;
                    plVar28 = plVar25;
                  }
                }
              }
            }
            else {
              if (plVar25 <= plVar19) {
                if (((ulong)plVar19 | (ulong)plVar25) >> 0x20 == 0) {
                  plVar19 = (long *)(((ulong)plVar19 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff));
                }
                else {
                  plVar19 = (long *)((ulong)plVar19 % (ulong)plVar25);
                }
              }
              *(undefined **)(lVar11 + (long)plVar19 * 8) = &DAT_0f6d2f40;
              plVar21 = (long *)*plVar28;
              while (plVar21 != (long *)0x0) {
                plVar15 = (long *)plVar21[1];
                if (plVar25 <= plVar15) {
                  if (((ulong)plVar15 | (ulong)plVar25) >> 0x20 == 0) {
                    plVar15 = (long *)(((ulong)plVar15 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff)
                                      );
                  }
                  else {
                    plVar15 = (long *)((ulong)plVar15 % (ulong)plVar25);
                  }
                }
                if (plVar15 != plVar19) {
                  if (*(long *)(lVar11 + (long)plVar15 * 8) == 0) {
                    *(long **)(lVar11 + (long)plVar15 * 8) = plVar28;
                    plVar19 = plVar15;
                  }
                  else {
                    *plVar28 = *plVar21;
                    *plVar21 = **(long **)(lVar11 + (long)plVar15 * 8);
                    **(undefined8 **)(lVar11 + (long)plVar15 * 8) = plVar21;
                    plVar21 = plVar28;
                  }
                }
                plVar28 = plVar21;
                plVar21 = (long *)*plVar28;
              }
            }
          }
        }
        else {
          plVar25 = (long *)func_0x0412c3f0();
          bVar29 = plVar25 < _DAT_0f6d2f38;
          if (_DAT_0f6d2f38 < plVar25) goto LAB_0c01ba1b;
LAB_0c01bb33:
          plVar28 = _DAT_0f6d2f38;
          if (bVar29) {
            fVar30 = (float)ceilf((float)_DAT_0f6d2f48 / _DAT_0f6d2f50);
            plVar19 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
            ;
            if ((plVar28 < (long *)0x3) ||
               (uVar26 = (long)plVar28 - ((ulong)plVar28 >> 1 & 0x5555555555555555),
               uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
               1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              plVar19 = (long *)func_0x0412c3f0(plVar19);
              lVar17 = _DAT_0f6d2f30;
              if (plVar19 < plVar25) {
                plVar19 = plVar25;
              }
            }
            else {
              if ((long *)0x1 < plVar19) {
                lVar17 = 0x3f;
                if ((long)plVar19 - 1U != 0) {
                  for (; (long)plVar19 - 1U >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                plVar19 = (long *)(1L << (-((byte)lVar17 ^ 0x3f) & 0x3f));
              }
              lVar17 = _DAT_0f6d2f30;
              if (plVar19 < plVar25) {
                plVar19 = plVar25;
              }
            }
            plVar25 = plVar19;
            _DAT_0f6d2f30 = lVar17;
            if (plVar25 < plVar28) {
              if (plVar25 != (long *)0x0) goto LAB_0c01ba1b;
              _DAT_0f6d2f30 = 0;
              if (lVar17 != 0) {
                func_0x0412a280(lVar17,(long)_DAT_0f6d2f38 << 3);
              }
              _DAT_0f6d2f38 = (long *)0x0;
            }
          }
        }
        plVar25 = _DAT_0f6d2f38;
        if (((ulong)_DAT_0f6d2f38 & (long)_DAT_0f6d2f38 - 1U) == 0) {
          plVar28 = (long *)((ulong)plVar27 & (long)_DAT_0f6d2f38 - 1U);
        }
        else {
          plVar28 = plVar27;
          if (_DAT_0f6d2f38 <= plVar27) {
            if (((ulong)plVar27 | (ulong)_DAT_0f6d2f38) >> 0x20 == 0) {
              plVar28 = (long *)(((ulong)plVar27 & 0xffffffff) % ((ulong)_DAT_0f6d2f38 & 0xffffffff)
                                );
            }
            else {
              plVar28 = (long *)((ulong)plVar27 % (ulong)_DAT_0f6d2f38);
            }
          }
        }
      }
      else {
        fVar30 = (float)(long)plVar25;
        if (plVar25 == (long *)0x0) goto LAB_0c01b9a0;
LAB_0c01b983:
        plVar28 = plStack_388;
        if (fVar30 * _DAT_0f6d2f50 < (float)(_DAT_0f6d2f48 + 1)) goto LAB_0c01b9a0;
      }
      lVar17 = _DAT_0f6d2f30;
      plVar27 = *(long **)(_DAT_0f6d2f30 + (long)plVar28 * 8);
      if (plVar27 == (long *)0x0) {
        *plVar13 = (long)_DAT_0f6d2f40;
        _DAT_0f6d2f40 = plVar13;
        *(undefined **)(lVar17 + (long)plVar28 * 8) = &DAT_0f6d2f40;
        if (*plVar13 != 0) {
          plVar27 = *(long **)(*plVar13 + 8);
          if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
            *(long **)(lVar17 + ((ulong)plVar27 & (long)plVar25 - 1U) * 8) = plVar13;
          }
          else {
            if (plVar25 <= plVar27) {
              if (((ulong)plVar27 | (ulong)plVar25) >> 0x20 == 0) {
                *(long **)(lVar17 + (((ulong)plVar27 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff))
                                    * 8) = plVar13;
                goto LAB_0c01bd22;
              }
              plVar27 = (long *)((ulong)plVar27 % (ulong)plVar25);
            }
            *(long **)(lVar17 + (long)plVar27 * 8) = plVar13;
          }
        }
      }
      else {
        *plVar13 = *plVar27;
        *plVar27 = (long)plVar13;
      }
LAB_0c01bd22:
      _DAT_0f6d2f48 = _DAT_0f6d2f48 + 1;
      *(undefined1 *)(plVar13 + 7) = uVar1;
      plVar27 = plStack_398 + 1;
    } while (plStack_398 + 1 != plStack_48);
  }
LAB_0c01bed5:
  _auStack_380 = (long *)CONCAT26(uStack_37c._2_2_,0x656e6f6e08);
  uStack_368._0_4_ = 0;
  uStack_360 = 0x6c6c6106;
  uStack_35c = uStack_35c & 0xffffff00;
  uStack_348 = 0xffffffff;
  uStack_340 = 0x615f670e;
  uStack_33c = 0x726f6d72;
  uStack_338 = uStack_338 & 0xffffff00;
  uStack_328 = 0xf;
  uStack_320 = 0x6d726114;
  uStack_31c = 0x685f726f;
  bStack_318 = 0x65;
  uStack_317 = 0x6461;
  uStack_315 = 0;
  uStack_308 = 1;
  uStack_300 = 0x6d726116;
  uStack_2fc = 0x745f726f;
  uStack_2f8 = 0x6f73726f;
  uStack_2f4 = uStack_2f4 & 0xffffff00;
  uStack_2e8 = 2;
  uStack_2e0 = 0x6d726114;
  uStack_2dc = 0x665f726f;
  bStack_2d8 = 0x65;
  uStack_2d7 = 0x7465;
  uStack_2d5 = 0;
  uStack_2c8 = 4;
  uStack_2c0 = 0x6d726114;
  uStack_2bc = 0x6c5f726f;
  bStack_2b8 = 0x65;
  uStack_2b7 = 0x7367;
  uStack_2b5 = 0;
  uStack_2a8 = 8;
  uStack_29b = 100;
  uStack_2a0 = 0x6f77730a;
  uStack_29c = 0x72;
  uStack_288 = 0x10;
  uStack_280 = 0x776f6206;
  uStack_27c = uStack_27c & 0xffffff00;
  uStack_268 = 0x20;
  uStack_260 = 0x6570730a;
  uStack_25c = 0x61;
  uStack_25b = 0x72;
  uStack_248 = 0x8000;
  uStack_240 = 0x6f726310;
  uStack_23c = 0x6f627373;
  bStack_238 = 0x77;
  uStack_237 = 0;
  uStack_228 = 0x10000;
  uStack_220 = 0x6c656d16;
  uStack_21c = 0x735f6565;
  uStack_218 = 0x72616570;
  uStack_214 = uStack_214 & 0xffffff00;
  uStack_208 = 0x800000;
  uStack_1fb = 0x6c6f;
  uStack_200 = 0x745f670c;
  uStack_1fc = 0x6f;
  uStack_1f9 = 0;
  uStack_1e8 = 0x201c0;
  bStack_1e0 = 6;
  uStack_1dd = 0x65;
  uStack_1df = 0x6f68;
  uStack_1dc = uStack_1dc & 0xffffff00;
  uStack_1c8 = 0x40;
  uStack_1bb = 0x7372;
  uStack_1c0 = 0x6568730c;
  uStack_1bc = 0x61;
  uStack_1b9 = 0;
  uStack_1a8 = 0x80;
  uStack_1a0 = 0x696c6614;
  uStack_19c = 0x7473746e;
  bStack_198 = 0x65;
  uStack_197 = 0x6c65;
  uStack_195 = 0;
  uStack_188 = 0x100;
  uStack_17b = 0x646c;
  uStack_180 = 0x6968730c;
  uStack_17c = 0x65;
  uStack_179 = 0;
  uStack_168 = 0x20000;
  uStack_160 = 0x645f6712;
  uStack_15c = 0x69676769;
  bStack_158 = 0x6e;
  uStack_157 = 0x67;
  uStack_156 = 0;
  uStack_148 = 0xe40;
  bStack_140 = 6;
  uStack_13d = 0x65;
  uStack_13f = 0x7861;
  uStack_13c = uStack_13c & 0xffffff00;
  uStack_128 = 0x200;
  uStack_120 = 0x6369700e;
  uStack_11c = 0x6578616b;
  uStack_118 = uStack_118 & 0xffffff00;
  uStack_108 = 0x400;
  uStack_fb = 0x6c65;
  uStack_100 = 0x6f68730c;
  uStack_fc = 0x76;
  uStack_f9 = 0;
  uStack_e8 = 0x800;
  uStack_e0 = 0x73696616;
  uStack_dc = 0x676e6968;
  uStack_d8 = 0x646f725f;
  uStack_d4 = uStack_d4 & 0xffffff00;
  uStack_c8 = 0x1000;
  uStack_c0 = 0x72616318;
  uStack_bc = 0x5f746f72;
  bStack_b8 = 0x73;
  uStack_b7 = 0x6b636974;
  uStack_b3 = 0;
  uStack_a8 = 0x2000;
  uStack_9b = 0x6172;
  uStack_a0 = 0x796c650c;
  uStack_9c = 0x74;
  uStack_99 = 0;
  uStack_88 = 0x4000;
  bStack_80 = 0x1a;
  uStack_77 = 0x646165685f;
  uStack_7f = 0x656d736f63;
  uStack_7a = 0x6974;
  uStack_78 = 99;
  uStack_72 = 0;
  uStack_68 = 0x40000;
  if (_DAT_0f6d2f88 == (long *)0x0) {
    lVar17 = 0;
    goto LAB_0c01ce74;
  }
  lVar17 = 0;
  func_0x0eee2dd0(_DAT_0f6d2f80,0,(long)_DAT_0f6d2f88 << 3);
  plVar27 = _DAT_0f6d2f90;
  _DAT_0f6d2f90 = (long *)0x0;
  _DAT_0f6d2f98 = 0;
  if (plVar27 == (long *)0x0) goto LAB_0c01ce74;
  lVar17 = 0;
  do {
    pbVar18 = auStack_380 + lVar17;
    pbVar20 = (byte *)(plVar27 + 2);
    if (pbVar20 != pbVar18) {
      bVar2 = *pbVar18;
      if ((*pbVar20 & 1) == 0) {
        if ((bVar2 & 1) == 0) {
          plVar27[4] = *(long *)((long)&uStack_370 + lVar17);
          uVar5 = *(undefined4 *)(auStack_380 + lVar17 + 4);
          uVar6 = *(undefined4 *)((long)&uStack_378 + lVar17);
          uVar7 = *(undefined4 *)((long)&uStack_378 + lVar17 + 4);
          *(undefined4 *)pbVar20 = *(undefined4 *)pbVar18;
          *(undefined4 *)((long)plVar27 + 0x14) = uVar5;
          *(undefined4 *)(plVar27 + 3) = uVar6;
          *(undefined4 *)((long)plVar27 + 0x1c) = uVar7;
        }
        else {
          func_0x04885070(pbVar20,*(undefined8 *)((long)&uStack_370 + lVar17),
                          *(undefined8 *)((long)&uStack_378 + lVar17));
        }
      }
      else {
        bVar29 = (bVar2 & 1) != 0;
        puVar23 = auStack_380 + lVar17 + 1;
        if (bVar29) {
          puVar23 = *(undefined1 **)((long)&uStack_370 + lVar17);
        }
        uVar26 = (ulong)(bVar2 >> 1);
        if (bVar29) {
          uVar26 = *(ulong *)((long)&uStack_378 + lVar17);
        }
        func_0x04885120(pbVar20,puVar23,uVar26);
      }
    }
    *(undefined4 *)(plVar27 + 5) = *(undefined4 *)((long)&uStack_368 + lVar17);
    plStack_398 = (long *)((long)plVar27 + 0x11);
    bVar29 = (*(byte *)(plVar27 + 2) & 1) == 0;
    plVar28 = (long *)plVar27[4];
    if (bVar29) {
      plVar28 = plStack_398;
    }
    plVar25 = (long *)*plVar27;
    uVar26 = (ulong)(*(byte *)(plVar27 + 2) >> 1);
    if (!bVar29) {
      uVar26 = plVar27[3];
    }
    plVar13 = (long *)func_0x04883620(&plStack_60,plVar28,uVar26);
    plVar27[1] = (long)plVar13;
    plVar28 = _DAT_0f6d2f88;
    if (_DAT_0f6d2f88 != (long *)0x0) {
      uVar26 = (long)_DAT_0f6d2f88 - ((ulong)_DAT_0f6d2f88 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar26 >> 0x38 < 2) {
        plVar21 = (long *)((long)_DAT_0f6d2f88 - 1U & (ulong)plVar13);
        plVar19 = *(long **)(_DAT_0f6d2f80 + (long)plVar21 * 8);
      }
      else if (plVar13 < _DAT_0f6d2f88) {
        plVar19 = *(long **)(_DAT_0f6d2f80 + (long)plVar13 * 8);
        plVar21 = plVar13;
      }
      else if (((ulong)plVar13 | (ulong)_DAT_0f6d2f88) >> 0x20 == 0) {
        plVar21 = (long *)(((ulong)plVar13 & 0xffffffff) % ((ulong)_DAT_0f6d2f88 & 0xffffffff));
        plVar19 = *(long **)(_DAT_0f6d2f80 + (long)plVar21 * 8);
      }
      else {
        plVar19 = *(long **)(_DAT_0f6d2f80 + (long)((ulong)plVar13 % (ulong)_DAT_0f6d2f88) * 8);
        plVar21 = (long *)((ulong)plVar13 % (ulong)_DAT_0f6d2f88);
      }
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if ((*(byte *)(plVar27 + 2) & 1) == 0) {
          uVar10 = (ulong)(*(byte *)(plVar27 + 2) >> 1);
        }
        else {
          uVar10 = plVar27[3];
          plStack_398 = (long *)plVar27[4];
        }
        if ((byte)(uVar26 >> 0x38) < 2) {
          plVar15 = (long *)((long)_DAT_0f6d2f88 + -1);
          plStack_48 = plVar15;
          do {
            if ((long *)plVar19[1] == plVar13) {
              bVar2 = *(byte *)(plVar19 + 2);
              if ((bVar2 & 1) == 0) {
                uVar26 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar26 = plVar19[3];
              }
              if (uVar26 == uVar10) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar19 + 0x11;
                }
                else {
                  lVar11 = plVar19[4];
                }
                iVar9 = bcmp(lVar11,plStack_398,uVar10);
                plVar15 = plStack_48;
                if (iVar9 == 0) goto LAB_0c01c9c0;
              }
            }
            else if ((long *)((ulong)plVar19[1] & (ulong)plVar15) != plVar21) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            plVar15 = (long *)plVar19[1];
            if (plVar15 == plVar13) {
              bVar2 = *(byte *)(plVar19 + 2);
              if ((bVar2 & 1) == 0) {
                uVar26 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar26 = plVar19[3];
              }
              if (uVar26 == uVar10) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar19 + 0x11;
                }
                else {
                  lVar11 = plVar19[4];
                }
                iVar9 = bcmp(lVar11,plStack_398,uVar10);
                if (iVar9 == 0) goto LAB_0c01c9c0;
              }
            }
            else {
              if (plVar28 <= plVar15) {
                if (((ulong)plVar15 | (ulong)plVar28) >> 0x20 == 0) {
                  plVar15 = (long *)(((ulong)plVar15 & 0xffffffff) % ((ulong)plVar28 & 0xffffffff));
                }
                else {
                  plVar15 = (long *)((ulong)plVar15 % (ulong)plVar28);
                }
              }
              if (plVar15 != plVar21) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    if ((long)plVar28 < 0) {
      fVar30 = (float)plVar28;
      if (plVar28 == (long *)0x0) goto LAB_0c01c730;
LAB_0c01c723:
      if (fVar30 * _DAT_0f6d2fa0 < (float)(_DAT_0f6d2f98 + 1)) goto LAB_0c01c730;
      goto LAB_0c01c8c0;
    }
    fVar30 = (float)(long)plVar28;
    if (plVar28 != (long *)0x0) goto LAB_0c01c723;
LAB_0c01c730:
    uVar26 = 1;
    if ((long *)0x2 < plVar28) {
      uVar26 = (ulong)(((ulong)plVar28 & (long)plVar28 - 1U) != 0);
    }
    plVar19 = (long *)((long)plVar28 * 2 | uVar26);
    fVar30 = (float)ceilf((float)(_DAT_0f6d2f98 + 1) / _DAT_0f6d2fa0);
    plVar13 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
    if (plVar13 < plVar19) {
      plVar13 = plVar19;
    }
    plVar19 = (long *)0x2;
    if ((plVar13 == (long *)0x1) || (plVar19 = plVar13, ((ulong)plVar13 & (long)plVar13 - 1U) == 0))
    {
      bVar29 = plVar19 < plVar28;
      if (plVar19 <= plVar28) goto LAB_0c01c7bc;
LAB_0c01c79b:
      func_0x0c02bd90(plVar19);
    }
    else {
      plVar19 = (long *)func_0x0412c3f0();
      bVar29 = plVar19 < _DAT_0f6d2f88;
      plVar28 = _DAT_0f6d2f88;
      if (_DAT_0f6d2f88 < plVar19) goto LAB_0c01c79b;
LAB_0c01c7bc:
      if (bVar29) {
        fVar30 = (float)ceilf((float)_DAT_0f6d2f98 / _DAT_0f6d2fa0);
        plVar13 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
        if ((plVar28 < (long *)0x3) ||
           (uVar26 = (long)plVar28 - ((ulong)plVar28 >> 1 & 0x5555555555555555),
           uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
           1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          plVar13 = (long *)func_0x0412c3f0(plVar13);
        }
        else if ((long *)0x1 < plVar13) {
          lVar11 = 0x3f;
          if ((long)plVar13 - 1U != 0) {
            for (; (long)plVar13 - 1U >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          plVar13 = (long *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
        }
        if (plVar19 <= plVar13) {
          plVar19 = plVar13;
        }
        if (plVar19 < plVar28) goto LAB_0c01c79b;
      }
    }
LAB_0c01c8c0:
    plVar13 = _DAT_0f6d2f88;
    lVar11 = _DAT_0f6d2f80;
    plVar28 = (long *)plVar27[1];
    uVar26 = (long)_DAT_0f6d2f88 - ((ulong)_DAT_0f6d2f88 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
    uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar26 >> 0x38 < 2) {
      plVar28 = (long *)((ulong)plVar28 & (long)_DAT_0f6d2f88 - 1U);
      plVar19 = *(long **)(_DAT_0f6d2f80 + (long)plVar28 * 8);
      if (plVar19 == (long *)0x0) goto LAB_0c01c944;
LAB_0c01c9b0:
      *plVar27 = *plVar19;
      *plVar19 = (long)plVar27;
    }
    else {
      if (plVar28 < _DAT_0f6d2f88) {
LAB_0c01c9a0:
        plVar19 = *(long **)(_DAT_0f6d2f80 + (long)plVar28 * 8);
      }
      else {
        if (((ulong)plVar28 | (ulong)_DAT_0f6d2f88) >> 0x20 != 0) {
          plVar28 = (long *)((ulong)plVar28 % (ulong)_DAT_0f6d2f88);
          goto LAB_0c01c9a0;
        }
        plVar28 = (long *)(((ulong)plVar28 & 0xffffffff) % ((ulong)_DAT_0f6d2f88 & 0xffffffff));
        plVar19 = *(long **)(_DAT_0f6d2f80 + (long)plVar28 * 8);
      }
      if (plVar19 != (long *)0x0) goto LAB_0c01c9b0;
LAB_0c01c944:
      *plVar27 = (long)_DAT_0f6d2f90;
      _DAT_0f6d2f90 = plVar27;
      *(undefined **)(lVar11 + (long)plVar28 * 8) = &DAT_0f6d2f90;
      if (*plVar27 != 0) {
        plVar28 = *(long **)(*plVar27 + 8);
        if ((byte)(uVar26 >> 0x38) < 2) {
          *(long **)(lVar11 + ((ulong)plVar28 & (long)plVar13 - 1U) * 8) = plVar27;
        }
        else {
          if (plVar13 <= plVar28) {
            if (((ulong)plVar28 | (ulong)plVar13) >> 0x20 == 0) {
              *(long **)(lVar11 + (((ulong)plVar28 & 0xffffffff) % ((ulong)plVar13 & 0xffffffff)) *
                                  8) = plVar27;
              goto LAB_0c01c9b9;
            }
            plVar28 = (long *)((ulong)plVar28 % (ulong)plVar13);
          }
          *(long **)(lVar11 + (long)plVar28 * 8) = plVar27;
        }
      }
    }
LAB_0c01c9b9:
    _DAT_0f6d2f98 = _DAT_0f6d2f98 + 1;
LAB_0c01c9c0:
    lVar17 = lVar17 + 0x20;
  } while ((plVar25 != (long *)0x0) && (plVar27 = plVar25, lVar17 != 800));
  if (plVar25 == (long *)0x0) {
    plVar28 = (long *)0x0;
  }
  else {
    do {
      plVar27 = (long *)*plVar25;
      if ((*(byte *)(plVar25 + 2) & 1) != 0) {
        func_0x0412a280(plVar25[4],plVar25[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(plVar25,0x30);
      plVar28 = (long *)0x0;
      plVar25 = plVar27;
    } while (plVar27 != (long *)0x0);
  }
  for (; lVar17 != 800; lVar17 = lVar17 + 0x20) {
LAB_0c01ce74:
    bVar29 = (auStack_380[lVar17] & 1) == 0;
    plVar28 = (long *)(auStack_380 + lVar17 + 1);
    plVar27 = *(long **)((long)&uStack_370 + lVar17);
    if (bVar29) {
      plVar27 = plVar28;
    }
    uVar26 = (ulong)((byte)auStack_380[lVar17] >> 1);
    if (!bVar29) {
      uVar26 = *(ulong *)((long)&uStack_378 + lVar17);
    }
    plVar25 = (long *)func_0x04883620(&plStack_60,plVar27,uVar26);
    plVar27 = _DAT_0f6d2f88;
    pbVar20 = auStack_380 + lVar17;
    if (_DAT_0f6d2f88 != (long *)0x0) {
      uVar26 = (long)_DAT_0f6d2f88 - ((ulong)_DAT_0f6d2f88 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar26 >> 0x38 < 2) {
        plStack_398 = (long *)((long)_DAT_0f6d2f88 - 1U & (ulong)plVar25);
      }
      else {
        plStack_398 = plVar25;
        if (_DAT_0f6d2f88 <= plVar25) {
          if (((ulong)plVar25 | (ulong)_DAT_0f6d2f88) >> 0x20 == 0) {
            plStack_398 = (long *)(((ulong)plVar25 & 0xffffffff) %
                                  ((ulong)_DAT_0f6d2f88 & 0xffffffff));
          }
          else {
            plStack_398 = (long *)((ulong)plVar25 % (ulong)_DAT_0f6d2f88);
          }
        }
      }
      plVar13 = *(long **)(_DAT_0f6d2f80 + (long)plStack_398 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if ((*pbVar20 & 1) == 0) {
          uVar10 = (ulong)(*pbVar20 >> 1);
        }
        else {
          uVar10 = *(ulong *)((long)&uStack_378 + lVar17);
          plVar28 = *(long **)((long)&uStack_370 + lVar17);
        }
        if ((byte)(uVar26 >> 0x38) < 2) {
          uVar26 = (long)_DAT_0f6d2f88 - 1;
          do {
            if ((long *)plVar13[1] == plVar25) {
              bVar2 = *(byte *)(plVar13 + 2);
              if ((bVar2 & 1) == 0) {
                uVar24 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar24 = plVar13[3];
              }
              if (uVar24 == uVar10) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar13 + 0x11;
                }
                else {
                  lVar11 = plVar13[4];
                }
                iVar9 = bcmp(lVar11,plVar28,uVar10);
                if (iVar9 == 0) goto LAB_0c01d3a4;
              }
            }
            else if ((long *)((ulong)plVar13[1] & uVar26) != plStack_398) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            plVar19 = (long *)plVar13[1];
            if (plVar19 == plVar25) {
              bVar2 = *(byte *)(plVar13 + 2);
              if ((bVar2 & 1) == 0) {
                uVar26 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar26 = plVar13[3];
              }
              if (uVar26 == uVar10) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar13 + 0x11;
                }
                else {
                  lVar11 = plVar13[4];
                }
                iVar9 = bcmp(lVar11,plVar28,uVar10);
                if (iVar9 == 0) goto LAB_0c01d3a4;
              }
            }
            else {
              if (plVar27 <= plVar19) {
                if (((ulong)plVar19 | (ulong)plVar27) >> 0x20 == 0) {
                  plVar19 = (long *)(((ulong)plVar19 & 0xffffffff) % ((ulong)plVar27 & 0xffffffff));
                }
                else {
                  plVar19 = (long *)((ulong)plVar19 % (ulong)plVar27);
                }
              }
              if (plVar19 != plStack_398) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar28 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plStack_60 = plVar28;
    puStack_58 = &DAT_0f6d2f80;
    uStack_50 = 0;
    *plVar28 = 0;
    plVar28[1] = (long)plVar25;
    if ((*pbVar20 & 1) == 0) {
      plVar28[4] = *(long *)((long)&uStack_370 + lVar17);
      lVar11 = *(long *)((long)&uStack_378 + lVar17);
      plVar28[2] = *(long *)pbVar20;
      plVar28[3] = lVar11;
    }
    else {
      func_0x0412e5e0(plVar28 + 2,*(undefined8 *)((long)&uStack_370 + lVar17),
                      *(undefined8 *)((long)&uStack_378 + lVar17));
    }
    *(undefined4 *)(plVar28 + 5) = *(undefined4 *)((long)&uStack_368 + lVar17);
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    if ((long)plVar27 < 0) {
      fVar30 = (float)plVar27;
      if (plVar27 != (long *)0x0) goto LAB_0c01d1a4;
LAB_0c01d1b5:
      uVar26 = 1;
      if ((long *)0x2 < plVar27) {
        uVar26 = (ulong)(((ulong)plVar27 & (long)plVar27 - 1U) != 0);
      }
      plVar13 = (long *)((long)plVar27 * 2 | uVar26);
      fVar30 = (float)ceilf((float)(_DAT_0f6d2f98 + 1) / _DAT_0f6d2fa0);
      plVar27 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
      if (plVar27 < plVar13) {
        plVar27 = plVar13;
      }
      plVar13 = (long *)0x2;
      if ((plVar27 == (long *)0x1) ||
         (plVar13 = plVar27, ((ulong)plVar27 & (long)plVar27 - 1U) == 0)) {
        bVar29 = plVar13 < _DAT_0f6d2f88;
        if (plVar13 <= _DAT_0f6d2f88) goto LAB_0c01d246;
LAB_0c01d225:
        func_0x0c02bd90(plVar13);
      }
      else {
        plVar13 = (long *)func_0x0412c3f0();
        bVar29 = plVar13 < _DAT_0f6d2f88;
        if (_DAT_0f6d2f88 < plVar13) goto LAB_0c01d225;
LAB_0c01d246:
        plVar27 = _DAT_0f6d2f88;
        if (bVar29) {
          fVar30 = (float)ceilf((float)_DAT_0f6d2f98 / _DAT_0f6d2fa0);
          plVar19 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
          if ((plVar27 < (long *)0x3) ||
             (uVar26 = (long)plVar27 - ((ulong)plVar27 >> 1 & 0x5555555555555555),
             uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
             1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            plVar19 = (long *)func_0x0412c3f0(plVar19);
          }
          else if ((long *)0x1 < plVar19) {
            lVar11 = 0x3f;
            if ((long)plVar19 - 1U != 0) {
              for (; (long)plVar19 - 1U >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            plVar19 = (long *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
          }
          if (plVar13 <= plVar19) {
            plVar13 = plVar19;
          }
          if (plVar13 < plVar27) goto LAB_0c01d225;
        }
      }
      plVar27 = _DAT_0f6d2f88;
      if (((ulong)_DAT_0f6d2f88 & (long)_DAT_0f6d2f88 - 1U) == 0) {
        plVar13 = (long *)((ulong)plVar25 & (long)_DAT_0f6d2f88 - 1U);
      }
      else {
        plVar13 = plVar25;
        if (_DAT_0f6d2f88 <= plVar25) {
          if (((ulong)plVar25 | (ulong)_DAT_0f6d2f88) >> 0x20 == 0) {
            plVar13 = (long *)(((ulong)plVar25 & 0xffffffff) % ((ulong)_DAT_0f6d2f88 & 0xffffffff));
          }
          else {
            plVar13 = (long *)((ulong)plVar25 % (ulong)_DAT_0f6d2f88);
          }
        }
      }
    }
    else {
      fVar30 = (float)(long)plVar27;
      if (plVar27 == (long *)0x0) goto LAB_0c01d1b5;
LAB_0c01d1a4:
      plVar13 = plStack_398;
      if (fVar30 * _DAT_0f6d2fa0 < (float)(_DAT_0f6d2f98 + 1)) goto LAB_0c01d1b5;
    }
    lVar11 = _DAT_0f6d2f80;
    plVar25 = *(long **)(_DAT_0f6d2f80 + (long)plVar13 * 8);
    if (plVar25 == (long *)0x0) {
      *plVar28 = (long)_DAT_0f6d2f90;
      _DAT_0f6d2f90 = plVar28;
      *(undefined **)(lVar11 + (long)plVar13 * 8) = &DAT_0f6d2f90;
      if (*plVar28 != 0) {
        plVar25 = *(long **)(*plVar28 + 8);
        if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
          *(long **)(lVar11 + ((ulong)plVar25 & (long)plVar27 - 1U) * 8) = plVar28;
        }
        else {
          if (plVar27 <= plVar25) {
            if (((ulong)plVar25 | (ulong)plVar27) >> 0x20 == 0) {
              *(long **)(lVar11 + (((ulong)plVar25 & 0xffffffff) % ((ulong)plVar27 & 0xffffffff)) *
                                  8) = plVar28;
              goto LAB_0c01d39d;
            }
            plVar25 = (long *)((ulong)plVar25 % (ulong)plVar27);
          }
          *(long **)(lVar11 + (long)plVar25 * 8) = plVar28;
        }
      }
    }
    else {
      *plVar28 = *plVar25;
      *plVar25 = (long)plVar28;
    }
LAB_0c01d39d:
    _DAT_0f6d2f98 = _DAT_0f6d2f98 + 1;
LAB_0c01d3a4:
  }
  if ((bStack_80 & 1) != 0) {
    func_0x0412a280(uStack_70,CONCAT26(uStack_7a,CONCAT51(uStack_7f,bStack_80)) & 0xfffffffffffffffe
                   );
  }
  if ((uStack_a0 & 1) != 0) {
    func_0x0412a280(uStack_90,
                    CONCAT17(uStack_99,CONCAT25(uStack_9b,CONCAT14(uStack_9c,uStack_a0))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_c0 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_aa,CONCAT15(uStack_ab,CONCAT41(uStack_af,uStack_b0))),
                    CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
  }
  if ((uStack_e0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_cc,uStack_d0),CONCAT44(uStack_dc,uStack_e0) & 0xfffffffffffffffe
                   );
  }
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,
                    CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_120 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_10f,uStack_110),
                    CONCAT44(uStack_11c,uStack_120) & 0xfffffffffffffffe);
  }
  if ((bStack_140 & 1) != 0) {
    func_0x0412a280(uStack_130,
                    CONCAT44(uStack_13c,CONCAT13(uStack_13d,CONCAT21(uStack_13f,bStack_140))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_160 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_14d,CONCAT12(uStack_14e,CONCAT11(uStack_14f,uStack_150))),
                    CONCAT44(uStack_15c,uStack_160) & 0xfffffffffffffffe);
  }
  if ((uStack_180 & 1) != 0) {
    func_0x0412a280(uStack_170,
                    CONCAT17(uStack_179,CONCAT25(uStack_17b,CONCAT14(uStack_17c,uStack_180))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_1a0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_18c,CONCAT13(uStack_18d,CONCAT21(uStack_18f,uStack_190))),
                    CONCAT44(uStack_19c,uStack_1a0) & 0xfffffffffffffffe);
  }
  if ((uStack_1c0 & 1) != 0) {
    func_0x0412a280(uStack_1b0,
                    CONCAT17(uStack_1b9,CONCAT25(uStack_1bb,CONCAT14(uStack_1bc,uStack_1c0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_1e0 & 1) != 0) {
    func_0x0412a280(uStack_1d0,
                    CONCAT44(uStack_1dc,CONCAT13(uStack_1dd,CONCAT21(uStack_1df,bStack_1e0))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_200 & 1) != 0) {
    func_0x0412a280(uStack_1f0,
                    CONCAT17(uStack_1f9,CONCAT25(uStack_1fb,CONCAT14(uStack_1fc,uStack_200))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_220 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_20c,uStack_210),
                    CONCAT44(uStack_21c,uStack_220) & 0xfffffffffffffffe);
  }
  if ((uStack_240 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_22e,CONCAT11(uStack_22f,uStack_230)),
                    CONCAT44(uStack_23c,uStack_240) & 0xfffffffffffffffe);
  }
  if ((uStack_260 & 1) != 0) {
    func_0x0412a280(uStack_250,
                    CONCAT17(uStack_259,CONCAT25(uStack_25b,CONCAT14(uStack_25c,uStack_260))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_280 & 1) != 0) {
    func_0x0412a280(uStack_270,CONCAT44(uStack_27c,uStack_280) & 0xfffffffffffffffe);
  }
  if ((uStack_2a0 & 1) != 0) {
    func_0x0412a280(uStack_290,
                    CONCAT17(uStack_299,CONCAT25(uStack_29b,CONCAT14(uStack_29c,uStack_2a0))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_2c0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_2ac,CONCAT13(uStack_2ad,CONCAT21(uStack_2af,uStack_2b0))),
                    CONCAT44(uStack_2bc,uStack_2c0) & 0xfffffffffffffffe);
  }
  if ((uStack_2e0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_2cc,CONCAT13(uStack_2cd,CONCAT21(uStack_2cf,uStack_2d0))),
                    CONCAT44(uStack_2dc,uStack_2e0) & 0xfffffffffffffffe);
  }
  if ((uStack_300 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_2ec,uStack_2f0),
                    CONCAT44(uStack_2fc,uStack_300) & 0xfffffffffffffffe);
  }
  if ((uStack_320 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_30c,CONCAT13(uStack_30d,CONCAT21(uStack_30f,uStack_310))),
                    CONCAT44(uStack_31c,uStack_320) & 0xfffffffffffffffe);
  }
  if ((uStack_340 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_32f,uStack_330),
                    CONCAT44(uStack_33c,uStack_340) & 0xfffffffffffffffe);
  }
  if ((uStack_360 & 1) != 0) {
    func_0x0412a280(uStack_350,CONCAT44(uStack_35c,uStack_360) & 0xfffffffffffffffe);
  }
  if (((ulong)_auStack_380 & 1) != 0) {
    func_0x0412a280(uStack_370,(ulong)_auStack_380 & 0xfffffffffffffffe);
  }
  _auStack_380 = (long *)((ulong)_auStack_380 & 0xffffffff00000000);
  uStack_378 = (undefined *)CONCAT26(uStack_378._6_2_,0x656e6f6e08);
  uStack_360 = 0xffffffff;
  bStack_358 = 6;
  uStack_357 = 0x6c6c61;
  uStack_340 = 0xf;
  uStack_338 = 0x615f670e;
  uStack_334 = 0x726f6d72;
  uStack_330 = 0;
  uStack_320 = 1;
  bStack_318 = 0x14;
  uStack_317 = 0x7261;
  uStack_315 = 0x6d;
  uStack_314 = 0x685f726f;
  uStack_310 = 0x65;
  uStack_30f = 0x6461;
  uStack_30d = 0;
  uStack_300 = 2;
  uStack_2f8 = 0x6d726116;
  uStack_2f4 = 0x745f726f;
  uStack_2f0 = 0x6f73726f;
  uStack_2ec = uStack_2ec & 0xffffff00;
  uStack_2e0 = 4;
  bStack_2d8 = 0x14;
  uStack_2d7 = 0x7261;
  uStack_2d5 = 0x6d;
  uStack_2d4 = 0x665f726f;
  uStack_2d0 = 0x65;
  uStack_2cf = 0x7465;
  uStack_2cd = 0;
  uStack_2c0 = 8;
  bStack_2b8 = 0x14;
  uStack_2b7 = 0x7261;
  uStack_2b5 = 0x6d;
  uStack_2b4 = 0x6c5f726f;
  uStack_2b0 = 0x65;
  uStack_2af = 0x7367;
  uStack_2ad = 0;
  uStack_2a0 = 0x10;
  bStack_298 = 10;
  uStack_293 = 100;
  uStack_297 = 0x726f7773;
  uStack_280 = 0x20;
  bStack_278 = 6;
  uStack_277 = 0x776f62;
  uStack_260 = 0x8000;
  bStack_258 = 10;
  uStack_257 = 0x61657073;
  uStack_253 = 0x72;
  uStack_240 = 0x10000;
  bStack_238 = 0x10;
  uStack_237 = 99;
  uStack_236 = 0x6f6273736f72;
  uStack_230 = 0x77;
  uStack_22f = 0;
  uStack_220 = 0x800000;
  uStack_218 = 0x6c656d16;
  uStack_214 = 0x735f6565;
  uStack_210 = 0x72616570;
  uStack_20c = uStack_20c & 0xffffff00;
  uStack_200 = 0x201c0;
  bStack_1f8 = 0xc;
  uStack_1f3 = 0x6c6f;
  uStack_1f7 = 0x6f745f67;
  uStack_1f1 = 0;
  bStack_1e0 = 0x40;
  uStack_1df = 0;
  uStack_1dd = 0;
  bStack_1d8 = 6;
  uStack_1d5 = 0x65;
  uStack_1d7 = 0x6f68;
  uStack_1d4 = uStack_1d4 & 0xffffff00;
  uStack_1c0 = 0x80;
  bStack_1b8 = 0xc;
  uStack_1b3 = 0x7372;
  uStack_1b7 = 0x61656873;
  uStack_1b1 = 0;
  uStack_1a0 = 0x100;
  bStack_198 = 0x14;
  uStack_197 = 0x6c66;
  uStack_195 = 0x69;
  uStack_194 = 0x7473746e;
  uStack_190 = 0x65;
  uStack_18f = 0x6c65;
  uStack_18d = 0;
  uStack_180 = 0x20000;
  bStack_178 = 0xc;
  uStack_173 = 0x646c;
  uStack_177 = 0x65696873;
  uStack_171 = 0;
  uStack_160 = 0xe40;
  bStack_158 = 0x12;
  uStack_157 = 0x67;
  uStack_156 = 0x5f;
  uStack_155 = 0x6967676964;
  uStack_150 = 0x6e;
  uStack_14f = 0x67;
  uStack_14e = 0;
  bStack_140 = 0;
  uStack_13f = 2;
  uStack_13d = 0;
  bStack_138 = 6;
  uStack_135 = 0x65;
  uStack_137 = 0x7861;
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_120 = 0x400;
  uStack_118 = 0x6369700e;
  uStack_114 = 0x6578616b;
  uStack_110 = 0;
  uStack_100 = 0x800;
  bStack_f8 = 0xc;
  uStack_f3 = 0x6c65;
  uStack_f7 = 0x766f6873;
  uStack_f1 = 0;
  uStack_e0 = 0x1000;
  uStack_d8 = 0x73696616;
  uStack_d4 = 0x676e6968;
  uStack_d0 = 0x646f725f;
  uStack_cc = uStack_cc & 0xffffff00;
  uStack_c0 = 0x2000;
  bStack_b8 = 0x18;
  uStack_b7 = 0x72726163;
  uStack_b3 = 0x6f;
  uStack_b2 = 0x5f74;
  uStack_b0 = 0x73;
  uStack_af = 0x6b636974;
  uStack_ab = 0;
  uStack_a0 = 0x4000;
  bStack_98 = 0xc;
  uStack_93 = 0x6172;
  uStack_97 = 0x74796c65;
  uStack_91 = 0;
  if (_DAT_0f6d2f60 == (long *)0x0) {
    lVar17 = 0;
    goto LAB_0c01e890;
  }
  lVar17 = 0;
  func_0x0eee2dd0(_DAT_0f6d2f58,0,(long)_DAT_0f6d2f60 << 3);
  plVar27 = _DAT_0f6d2f68;
  _DAT_0f6d2f68 = (long *)0x0;
  _DAT_0f6d2f70 = 0;
  if (plVar27 == (long *)0x0) goto LAB_0c01e890;
  lVar17 = 0;
  plVar28 = (long *)&DAT_0f6d2f68;
  do {
    *(undefined4 *)(plVar27 + 2) = *(undefined4 *)(auStack_380 + lVar17);
    if (plVar27 + 2 != (long *)(auStack_380 + lVar17)) {
      pbVar20 = (byte *)(plVar27 + 3);
      bVar2 = *(byte *)((long)&uStack_378 + lVar17);
      if ((*pbVar20 & 1) == 0) {
        if ((bVar2 & 1) == 0) {
          plVar27[5] = *(long *)((long)&uStack_368 + lVar17);
          uVar5 = *(undefined4 *)((long)&uStack_378 + lVar17 + 4);
          uVar6 = *(undefined4 *)((long)&uStack_370 + lVar17);
          uVar7 = *(undefined4 *)((long)&uStack_370 + lVar17 + 4);
          *(undefined4 *)pbVar20 = *(undefined4 *)((long)&uStack_378 + lVar17);
          *(undefined4 *)((long)plVar27 + 0x1c) = uVar5;
          *(undefined4 *)(plVar27 + 4) = uVar6;
          *(undefined4 *)((long)plVar27 + 0x24) = uVar7;
        }
        else {
          func_0x04885070(pbVar20,*(undefined8 *)((long)&uStack_368 + lVar17),
                          *(undefined8 *)((long)&uStack_370 + lVar17));
        }
      }
      else {
        bVar29 = (bVar2 & 1) != 0;
        lVar11 = (long)&uStack_378 + lVar17 + 1;
        if (bVar29) {
          lVar11 = *(long *)((long)&uStack_368 + lVar17);
        }
        uVar26 = (ulong)(bVar2 >> 1);
        if (bVar29) {
          uVar26 = *(ulong *)((long)&uStack_370 + lVar17);
        }
        func_0x04885120(pbVar20,lVar11,uVar26);
      }
    }
    plVar25 = (long *)*plVar27;
    uVar3 = *(uint *)(plVar27 + 2);
    plVar19 = (long *)(long)(int)uVar3;
    plVar27[1] = (long)plVar19;
    plVar13 = _DAT_0f6d2f60;
    if (_DAT_0f6d2f60 != (long *)0x0) {
      uVar26 = (long)_DAT_0f6d2f60 - ((ulong)_DAT_0f6d2f60 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar26 >> 0x38 < 2) {
        plVar21 = (long *)((long)_DAT_0f6d2f60 - 1U & (ulong)plVar19);
        plVar15 = *(long **)(_DAT_0f6d2f58 + (long)plVar21 * 8);
      }
      else {
        plVar21 = plVar19;
        if (_DAT_0f6d2f60 <= plVar19) {
          if (((ulong)plVar19 | (ulong)_DAT_0f6d2f60) >> 0x20 == 0) {
            plVar21 = (long *)((ulong)uVar3 % ((ulong)_DAT_0f6d2f60 & 0xffffffff));
            plVar15 = *(long **)(_DAT_0f6d2f58 + (long)plVar21 * 8);
            goto joined_r0x0c01dbca;
          }
          plVar21 = (long *)((ulong)plVar19 % (ulong)_DAT_0f6d2f60);
        }
        plVar15 = *(long **)(_DAT_0f6d2f58 + (long)plVar21 * 8);
      }
joined_r0x0c01dbca:
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if ((byte)(uVar26 >> 0x38) < 2) {
          do {
            if ((long *)plVar15[1] == plVar19) {
              if (*(uint *)(plVar15 + 2) == uVar3) goto LAB_0c01dee0;
            }
            else if ((long *)((ulong)plVar15[1] & (long)_DAT_0f6d2f60 - 1U) != plVar21) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            plVar16 = (long *)plVar15[1];
            if (plVar16 == plVar19) {
              if (*(uint *)(plVar15 + 2) == uVar3) goto LAB_0c01dee0;
            }
            else {
              if (_DAT_0f6d2f60 <= plVar16) {
                if (((ulong)plVar16 | (ulong)_DAT_0f6d2f60) >> 0x20 == 0) {
                  if ((long *)(((ulong)plVar16 & 0xffffffff) % ((ulong)_DAT_0f6d2f60 & 0xffffffff))
                      == plVar21) goto LAB_0c01db49;
                  break;
                }
                plVar16 = (long *)((ulong)plVar16 % (ulong)_DAT_0f6d2f60);
              }
              if (plVar16 != plVar21) break;
            }
LAB_0c01db49:
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    if ((long)_DAT_0f6d2f60 < 0) {
      fVar30 = (float)_DAT_0f6d2f60;
      if (_DAT_0f6d2f60 == (long *)0x0) goto LAB_0c01dc50;
LAB_0c01dc43:
      if (fVar30 * _DAT_0f6d2f78 < (float)(_DAT_0f6d2f70 + 1)) goto LAB_0c01dc50;
      goto LAB_0c01dde0;
    }
    fVar30 = (float)(long)_DAT_0f6d2f60;
    if (_DAT_0f6d2f60 != (long *)0x0) goto LAB_0c01dc43;
LAB_0c01dc50:
    uVar26 = 1;
    if ((long *)0x2 < _DAT_0f6d2f60) {
      uVar26 = (ulong)(((ulong)_DAT_0f6d2f60 & (long)_DAT_0f6d2f60 - 1U) != 0);
    }
    plVar21 = (long *)((long)_DAT_0f6d2f60 * 2 | uVar26);
    fVar30 = (float)ceilf((float)(_DAT_0f6d2f70 + 1) / _DAT_0f6d2f78);
    plVar19 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
    if (plVar19 < plVar21) {
      plVar19 = plVar21;
    }
    plVar21 = (long *)0x2;
    if ((plVar19 == (long *)0x1) || (plVar21 = plVar19, ((ulong)plVar19 & (long)plVar19 - 1U) == 0))
    {
      bVar29 = plVar21 < plVar13;
      if (plVar21 <= plVar13) goto LAB_0c01dcdf;
LAB_0c01dcbe:
      func_0x0c02c000(plVar21);
    }
    else {
      plVar21 = (long *)func_0x0412c3f0();
      bVar29 = plVar21 < _DAT_0f6d2f60;
      plVar13 = _DAT_0f6d2f60;
      if (_DAT_0f6d2f60 < plVar21) goto LAB_0c01dcbe;
LAB_0c01dcdf:
      if (bVar29) {
        fVar30 = (float)ceilf((float)_DAT_0f6d2f70 / _DAT_0f6d2f78);
        plVar19 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
        if ((plVar13 < (long *)0x3) ||
           (uVar26 = (long)plVar13 - ((ulong)plVar13 >> 1 & 0x5555555555555555),
           uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
           1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          plVar19 = (long *)func_0x0412c3f0(plVar19);
        }
        else if ((long *)0x1 < plVar19) {
          lVar11 = 0x3f;
          if ((long)plVar19 - 1U != 0) {
            for (; (long)plVar19 - 1U >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          plVar19 = (long *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
        }
        if (plVar21 <= plVar19) {
          plVar21 = plVar19;
        }
        if (plVar21 < plVar13) goto LAB_0c01dcbe;
      }
    }
LAB_0c01dde0:
    plVar19 = _DAT_0f6d2f60;
    lVar11 = _DAT_0f6d2f58;
    plVar13 = (long *)plVar27[1];
    uVar26 = (long)_DAT_0f6d2f60 - ((ulong)_DAT_0f6d2f60 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
    uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar26 >> 0x38 < 2) {
      plVar13 = (long *)((ulong)plVar13 & (long)_DAT_0f6d2f60 - 1U);
      plVar21 = *(long **)(_DAT_0f6d2f58 + (long)plVar13 * 8);
      if (plVar21 == (long *)0x0) goto LAB_0c01de64;
LAB_0c01ded0:
      *plVar27 = *plVar21;
      *plVar21 = (long)plVar27;
    }
    else {
      if (plVar13 < _DAT_0f6d2f60) {
LAB_0c01dec0:
        plVar21 = *(long **)(_DAT_0f6d2f58 + (long)plVar13 * 8);
      }
      else {
        if (((ulong)plVar13 | (ulong)_DAT_0f6d2f60) >> 0x20 != 0) {
          plVar13 = (long *)((ulong)plVar13 % (ulong)_DAT_0f6d2f60);
          goto LAB_0c01dec0;
        }
        plVar13 = (long *)(((ulong)plVar13 & 0xffffffff) % ((ulong)_DAT_0f6d2f60 & 0xffffffff));
        plVar21 = *(long **)(_DAT_0f6d2f58 + (long)plVar13 * 8);
      }
      if (plVar21 != (long *)0x0) goto LAB_0c01ded0;
LAB_0c01de64:
      *plVar27 = (long)_DAT_0f6d2f68;
      _DAT_0f6d2f68 = plVar27;
      *(undefined **)(lVar11 + (long)plVar13 * 8) = &DAT_0f6d2f68;
      if (*plVar27 != 0) {
        plVar13 = *(long **)(*plVar27 + 8);
        if ((byte)(uVar26 >> 0x38) < 2) {
          *(long **)(lVar11 + ((ulong)plVar13 & (long)plVar19 - 1U) * 8) = plVar27;
        }
        else {
          if (plVar19 <= plVar13) {
            if (((ulong)plVar13 | (ulong)plVar19) >> 0x20 == 0) {
              *(long **)(lVar11 + (((ulong)plVar13 & 0xffffffff) % ((ulong)plVar19 & 0xffffffff)) *
                                  8) = plVar27;
              goto LAB_0c01ded9;
            }
            plVar13 = (long *)((ulong)plVar13 % (ulong)plVar19);
          }
          *(long **)(lVar11 + (long)plVar13 * 8) = plVar27;
        }
      }
    }
LAB_0c01ded9:
    _DAT_0f6d2f70 = _DAT_0f6d2f70 + 1;
LAB_0c01dee0:
    lVar17 = lVar17 + 0x20;
  } while ((plVar25 != (long *)0x0) && (plVar27 = plVar25, lVar17 != 0x300));
  while (plVar25 != (long *)0x0) {
    plVar27 = (long *)*plVar25;
    if ((*(byte *)(plVar25 + 3) & 1) != 0) {
      func_0x0412a280(plVar25[5],plVar25[3] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar25,0x30);
    plVar25 = plVar27;
  }
  do {
    if (lVar17 == 0x300) {
      if ((bStack_98 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_84,uStack_88),
                        CONCAT17(uStack_91,CONCAT25(uStack_93,CONCAT41(uStack_97,bStack_98))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_b8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_a4,uStack_a8),
                        CONCAT26(uStack_b2,CONCAT15(uStack_b3,CONCAT41(uStack_b7,bStack_b8))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_d8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_c4,uStack_c8),
                        CONCAT44(uStack_d4,uStack_d8) & 0xfffffffffffffffe);
      }
      if ((bStack_f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_e4,uStack_e8),
                        CONCAT17(uStack_f1,CONCAT25(uStack_f3,CONCAT41(uStack_f7,bStack_f8))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_118 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_104,uStack_108),
                        CONCAT44(uStack_114,uStack_118) & 0xfffffffffffffffe);
      }
      if ((bStack_138 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_124,uStack_128),
                        CONCAT44(uStack_134,CONCAT13(uStack_135,CONCAT21(uStack_137,bStack_138))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_158 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_144,uStack_148),
                        CONCAT53(uStack_155,CONCAT12(uStack_156,CONCAT11(uStack_157,bStack_158))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_178 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_164,uStack_168),
                        CONCAT17(uStack_171,CONCAT25(uStack_173,CONCAT41(uStack_177,bStack_178))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_198 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_184,uStack_188),
                        CONCAT44(uStack_194,CONCAT13(uStack_195,CONCAT21(uStack_197,bStack_198))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_1b8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_1a4,uStack_1a8),
                        CONCAT17(uStack_1b1,CONCAT25(uStack_1b3,CONCAT41(uStack_1b7,bStack_1b8))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_1d8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_1c4,uStack_1c8),
                        CONCAT44(uStack_1d4,CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,bStack_1d8))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_1f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_1e4,uStack_1e8),
                        CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT41(uStack_1f7,bStack_1f8))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_218 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_204,uStack_208),
                        CONCAT44(uStack_214,uStack_218) & 0xfffffffffffffffe);
      }
      if ((bStack_238 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_224,uStack_228),
                        CONCAT62(uStack_236,CONCAT11(uStack_237,bStack_238)) & 0xfffffffffffffffe);
      }
      if ((bStack_258 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_244,uStack_248),
                        CONCAT17(uStack_251,CONCAT25(uStack_253,CONCAT41(uStack_257,bStack_258))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_278 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_264,uStack_268),
                        CONCAT35(uStack_273,CONCAT41(uStack_277,bStack_278)) & 0xfffffffffffffffe);
      }
      if ((bStack_298 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_284,uStack_288),
                        CONCAT17(uStack_291,CONCAT25(uStack_293,CONCAT41(uStack_297,bStack_298))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_2b8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_2a4,uStack_2a8),
                        CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT21(uStack_2b7,bStack_2b8))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_2d8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_2c4,uStack_2c8),
                        CONCAT44(uStack_2d4,CONCAT13(uStack_2d5,CONCAT21(uStack_2d7,bStack_2d8))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_2f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_2e4,uStack_2e8),
                        CONCAT44(uStack_2f4,uStack_2f8) & 0xfffffffffffffffe);
      }
      if ((bStack_318 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_304,uStack_308),
                        CONCAT44(uStack_314,CONCAT13(uStack_315,CONCAT21(uStack_317,bStack_318))) &
                        0xfffffffffffffffe);
      }
      if ((uStack_338 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_324,uStack_328),
                        CONCAT44(uStack_334,uStack_338) & 0xfffffffffffffffe);
      }
      if ((bStack_358 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_344,uStack_348),
                        CONCAT35(uStack_353,CONCAT41(uStack_357,bStack_358)) & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_378 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_368._4_4_,(undefined4)uStack_368),
                        (ulong)uStack_378 & 0xfffffffffffffffe);
      }
      return;
    }
LAB_0c01e890:
    plVar25 = _DAT_0f6d2f60;
    uVar3 = *(uint *)(auStack_380 + lVar17);
    plVar27 = (long *)(long)(int)uVar3;
    if (_DAT_0f6d2f60 != (long *)0x0) {
      uVar26 = (long)_DAT_0f6d2f60 - ((ulong)_DAT_0f6d2f60 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar26 >> 0x38 < 2) {
        plVar28 = (long *)((long)_DAT_0f6d2f60 - 1U & (ulong)plVar27);
        plVar13 = *(long **)(_DAT_0f6d2f58 + (long)plVar28 * 8);
      }
      else {
        plVar28 = plVar27;
        if (_DAT_0f6d2f60 <= plVar27) {
          if (((ulong)plVar27 | (ulong)_DAT_0f6d2f60) >> 0x20 == 0) {
            plVar28 = (long *)((ulong)uVar3 % ((ulong)_DAT_0f6d2f60 & 0xffffffff));
            plVar13 = *(long **)(_DAT_0f6d2f58 + (long)plVar28 * 8);
            goto joined_r0x0c01e96e;
          }
          plVar28 = (long *)((ulong)plVar27 % (ulong)_DAT_0f6d2f60);
        }
        plVar13 = *(long **)(_DAT_0f6d2f58 + (long)plVar28 * 8);
      }
joined_r0x0c01e96e:
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if ((byte)(uVar26 >> 0x38) < 2) {
          do {
            if ((long *)plVar13[1] == plVar27) {
              if (*(uint *)(plVar13 + 2) == uVar3) goto LAB_0c01ede4;
            }
            else if ((long *)((ulong)plVar13[1] & (long)_DAT_0f6d2f60 - 1U) != plVar28) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            plVar19 = (long *)plVar13[1];
            if (plVar19 == plVar27) {
              if (*(uint *)(plVar13 + 2) == uVar3) goto LAB_0c01ede4;
            }
            else {
              if (_DAT_0f6d2f60 <= plVar19) {
                if (((ulong)plVar19 | (ulong)_DAT_0f6d2f60) >> 0x20 == 0) {
                  if ((long *)(((ulong)plVar19 & 0xffffffff) % ((ulong)_DAT_0f6d2f60 & 0xffffffff))
                      == plVar28) goto LAB_0c01e99a;
                  break;
                }
                plVar19 = (long *)((ulong)plVar19 % (ulong)_DAT_0f6d2f60);
              }
              if (plVar19 != plVar28) break;
            }
LAB_0c01e99a:
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plStack_60 = plVar13;
    puStack_58 = &DAT_0f6d2f58;
    uStack_50 = 0;
    *plVar13 = 0;
    plVar13[1] = (long)plVar27;
    *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(auStack_380 + lVar17);
    if ((*(byte *)((long)&uStack_378 + lVar17) & 1) == 0) {
      plVar13[5] = *(long *)((long)&uStack_368 + lVar17);
      lVar11 = *(long *)((long)&uStack_370 + lVar17);
      plVar13[3] = *(long *)((long)&uStack_378 + lVar17);
      plVar13[4] = lVar11;
    }
    else {
      func_0x0412e5e0(plVar13 + 3,*(undefined8 *)((long)&uStack_368 + lVar17),
                      *(undefined8 *)((long)&uStack_370 + lVar17));
    }
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    if ((long)plVar25 < 0) {
      fVar30 = (float)plVar25;
      if (plVar25 != (long *)0x0) goto LAB_0c01eb46;
LAB_0c01ebb0:
      uVar26 = 1;
      if ((long *)0x2 < plVar25) {
        uVar26 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
      }
      plVar28 = (long *)((long)plVar25 * 2 | uVar26);
      fVar30 = (float)ceilf((float)(_DAT_0f6d2f70 + 1) / _DAT_0f6d2f78);
      plVar25 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
      if (plVar25 < plVar28) {
        plVar25 = plVar28;
      }
      plVar28 = (long *)0x2;
      if ((plVar25 == (long *)0x1) ||
         (plVar28 = plVar25, ((ulong)plVar25 & (long)plVar25 - 1U) == 0)) {
        bVar29 = plVar28 < _DAT_0f6d2f60;
        if (plVar28 <= _DAT_0f6d2f60) goto LAB_0c01ec41;
LAB_0c01ec20:
        func_0x0c02c000(plVar28);
      }
      else {
        plVar28 = (long *)func_0x0412c3f0();
        bVar29 = plVar28 < _DAT_0f6d2f60;
        if (_DAT_0f6d2f60 < plVar28) goto LAB_0c01ec20;
LAB_0c01ec41:
        plVar25 = _DAT_0f6d2f60;
        if (bVar29) {
          fVar30 = (float)ceilf((float)_DAT_0f6d2f70 / _DAT_0f6d2f78);
          plVar19 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
          if ((plVar25 < (long *)0x3) ||
             (uVar26 = (long)plVar25 - ((ulong)plVar25 >> 1 & 0x5555555555555555),
             uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
             1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            plVar19 = (long *)func_0x0412c3f0(plVar19);
          }
          else if ((long *)0x1 < plVar19) {
            lVar11 = 0x3f;
            if ((long)plVar19 - 1U != 0) {
              for (; (long)plVar19 - 1U >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            plVar19 = (long *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
          }
          if (plVar28 <= plVar19) {
            plVar28 = plVar19;
          }
          if (plVar28 < plVar25) goto LAB_0c01ec20;
        }
      }
      plVar25 = _DAT_0f6d2f60;
      if (((ulong)_DAT_0f6d2f60 & (long)_DAT_0f6d2f60 - 1U) != 0) {
        if (_DAT_0f6d2f60 <= plVar27) {
          if (((ulong)plVar27 | (ulong)_DAT_0f6d2f60) >> 0x20 == 0) {
            plVar27 = (long *)((ulong)uVar3 % ((ulong)_DAT_0f6d2f60 & 0xffffffff));
            plVar19 = *(long **)(_DAT_0f6d2f58 + (long)plVar27 * 8);
            goto joined_r0x0c01ee12;
          }
          plVar27 = (long *)((ulong)plVar27 % (ulong)_DAT_0f6d2f60);
        }
        plVar19 = *(long **)(_DAT_0f6d2f58 + (long)plVar27 * 8);
        goto joined_r0x0c01edce;
      }
      plVar27 = (long *)((ulong)plVar27 & (long)_DAT_0f6d2f60 - 1U);
      plVar19 = *(long **)(_DAT_0f6d2f58 + (long)plVar27 * 8);
joined_r0x0c01ee12:
      if (plVar19 == (long *)0x0) goto LAB_0c01eb66;
LAB_0c01edd4:
      *plVar13 = *plVar19;
      *plVar19 = (long)plVar13;
    }
    else {
      fVar30 = (float)(long)plVar25;
      if (plVar25 == (long *)0x0) goto LAB_0c01ebb0;
LAB_0c01eb46:
      if (fVar30 * _DAT_0f6d2f78 < (float)(_DAT_0f6d2f70 + 1)) goto LAB_0c01ebb0;
      plVar19 = *(long **)(_DAT_0f6d2f58 + (long)plVar28 * 8);
      plVar27 = plVar28;
joined_r0x0c01edce:
      if (plVar19 != (long *)0x0) goto LAB_0c01edd4;
LAB_0c01eb66:
      lVar11 = _DAT_0f6d2f58;
      *plVar13 = (long)_DAT_0f6d2f68;
      _DAT_0f6d2f68 = plVar13;
      *(undefined **)(lVar11 + (long)plVar27 * 8) = &DAT_0f6d2f68;
      if (*plVar13 != 0) {
        plVar27 = *(long **)(*plVar13 + 8);
        if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
          *(long **)(lVar11 + ((ulong)plVar27 & (long)plVar25 - 1U) * 8) = plVar13;
        }
        else {
          if (plVar25 <= plVar27) {
            if (((ulong)plVar27 | (ulong)plVar25) >> 0x20 == 0) {
              *(long **)(lVar11 + (((ulong)plVar27 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff)) *
                                  8) = plVar13;
              goto LAB_0c01eddd;
            }
            plVar27 = (long *)((ulong)plVar27 % (ulong)plVar25);
          }
          *(long **)(lVar11 + (long)plVar27 * 8) = plVar13;
        }
      }
    }
LAB_0c01eddd:
    _DAT_0f6d2f70 = _DAT_0f6d2f70 + 1;
LAB_0c01ede4:
    lVar17 = lVar17 + 0x20;
  } while( true );
LAB_0c01be50:
  plVar13[6] = (long)plVar28;
  *(long **)(lVar17 + 0x58) = plVar19;
LAB_0c01be58:
  *(undefined1 *)(plVar13 + 7) = uVar1;
  plVar27 = plStack_398 + 1;
  if (plStack_398 + 1 == plStack_48) goto LAB_0c01bed5;
  goto LAB_0c01b550;
}


