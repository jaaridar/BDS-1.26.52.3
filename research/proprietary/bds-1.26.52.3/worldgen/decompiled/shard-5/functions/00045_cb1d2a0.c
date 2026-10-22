/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc1d2a0 (ELF vaddr 0xcb1d2a0)
 * Label: caller-of-callee
 * Body:  [[0cc1d2a0, 0cc1df84] [0cc1df90, 0cc1e01a] [0cc1e020, 0cc1e055] [0cc1e060, 0cc1e0d2] [0cc1e0e0, 0cc1e0f8] [0cc1e100, 0cc1e140] [0cc1e150, 0cc1e1bc] [0cc1e1c0, 0cc1e1f2] [0cc1e200, 0cc1e20c] [0cc1e210, 0cc1e239] [0cc1e240, 0cc1e281] [0cc1e290, 0cc1e2b1] [0cc1e2c0, 0cc1e462] [0cc1e470, 0cc1e4d1] [0cc1e4e0, 0cc1e5c6] [0cc1e5d0, 0cc1e86c] [0cc1e870, 0cc1e8a4] [0cc1e8b0, 0cc1e91d] [0cc1e920, 0cc1e939] [0cc1e940, 0cc1e9e6] [0cc1e9f0, 0cc1ea5e] [0cc1ea60, 0cc1eaa5] [0cc1eab0, 0cc1ead4] [0cc1eae0, 0cc1edca] [0cc1edd0, 0cc1eee3] [0cc1eef0, 0cc1ef1a] [0cc1ef20, 0cc1ef61] [0cc1ef70, 0cc1eff0] [0cc1f000, 0cc1f2e1] [0cc1f2f0, 0cc1f36c] [0cc1f370, 0cc1f485] [0cc1f490, 0cc1f4e5] [0cc1f4f0, 0cc1f53a] [0cc1f540, 0cc1f59b] [0cc1f5a0, 0cc1f689] [0cc1f690, 0cc1f6cb] [0cc1f6d0, 0cc1f944] [0cc1f950, 0cc1fb6c] [0cc1fb70, 0cc1fc14] [0cc1fc20, 0cc1fc70] [0cc1fc80, 0cc1fcb7] [0cc1fcc0, 0cc1febb] [0cc1fec0, 0cc1ff1b] [0cc1ff20, 0cc201b3] [0cc201c0, 0cc20230] [0cc20240, 0cc20277] [0cc20280, 0cc20294] [0cc202a0, 0cc202e5] [0cc202f0, 0cc2034c] [0cc20350, 0cc20363] [0cc20370, 0cc205e0] [0cc205f0, 0cc20627] [0cc20630, 0cc2065d] [0cc20660, 0cc206c3] [0cc206d0, 0cc2070d] [0cc20710, 0cc20760] [0cc20770, 0cc207a7] [0cc207b0, 0cc20b9d] [0cc20ba0, 0cc20bf0] [0cc20c00, 0cc20c37] [0cc20c40, 0cc20d42] [0cc20d50, 0cc20da0] [0cc20db0, 0cc20de7] [0cc20df0, 0cc20e2d] [0cc20e30, 0cc20e80] [0cc20e90, 0cc20ec7] [0cc20ed0, 0cc20f17] [0cc20f20, 0cc20f70] [0cc20f80, 0cc20fb7] [0cc20fc0, 0cc20ffb] [0cc21000, 0cc21050] [0cc21060, 0cc21097] [0cc210a0, 0cc21108] [0cc21110, 0cc2121c] [0cc21220, 0cc2143b] [0cc2180a, 0cc2183c] [0cc21844, 0cc219ee]]
 * Ghidra: FUN_0cc1d2a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc1d2a0(long *param_1,long *param_2,long *param_3,long param_4)

{
  byte bVar1;
  float *pfVar2;
  uint6 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  short sVar6;
  undefined2 uVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  byte **ppbVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  float *pfVar25;
  float *pfVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  byte *pbVar31;
  long lVar32;
  uint uVar33;
  float *pfVar34;
  byte *pbVar35;
  ulong uVar36;
  ulong uVar37;
  long *plVar38;
  undefined7 uVar39;
  bool bVar40;
  byte *pbVar41;
  long lVar42;
  bool bVar43;
  bool bVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar59 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  undefined4 uVar64;
  undefined8 uVar63;
  long *plStack_408;
  byte bStack_3e0;
  byte bStack_3df;
  byte bStack_3de;
  byte bStack_3dd;
  byte bStack_3dc;
  byte bStack_3db;
  byte bStack_3da;
  byte bStack_3d9;
  byte bStack_3d8;
  byte bStack_3d7;
  byte bStack_3d6;
  byte bStack_3d5;
  byte bStack_3d4;
  byte bStack_3d3;
  byte bStack_3d2;
  byte bStack_3d1;
  byte bStack_3d0;
  byte bStack_3cf;
  byte bStack_3ce;
  byte bStack_3cd;
  byte bStack_3cc;
  byte bStack_3cb;
  short sStack_3ca;
  undefined1 auStack_3c8 [16];
  float fStack_3b8;
  undefined4 uStack_3b4;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  long lStack_3a8;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  byte *pbStack_398;
  byte *pbStack_390;
  long lStack_388;
  ulong uStack_380;
  undefined1 uStack_371;
  long lStack_370;
  undefined1 auStack_368 [16];
  undefined8 uStack_350;
  byte *pbStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  long lStack_318;
  undefined1 uStack_310;
  byte bStack_308;
  byte bStack_307;
  byte bStack_306;
  byte bStack_305;
  byte bStack_304;
  byte bStack_303;
  byte bStack_302;
  byte bStack_301;
  byte bStack_300;
  byte bStack_2ff;
  byte bStack_2fe;
  byte bStack_2fd;
  byte bStack_2fc;
  byte bStack_2fb;
  byte bStack_2fa;
  byte bStack_2f9;
  byte bStack_2f8;
  char cStack_2f7;
  char cStack_2f6;
  char cStack_2f5;
  undefined4 uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  undefined1 auStack_2e8 [16];
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  byte *pbStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [16];
  long lStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined4 uStack_230;
  undefined2 uStack_22c;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined4 uStack_1f8;
  undefined1 uStack_1f4;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 uStack_1c0;
  undefined1 uStack_1bc;
  undefined2 uStack_1b8;
  undefined1 uStack_1b6;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined2 uStack_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined4 uStack_158;
  byte bStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined4 uStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  ulong uStack_c0;
  float fStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar43 = (*(byte *)(param_3 + 0x23) & 1) != 0;
  lStack_260 = (long)param_3 + 0x119;
  if (bVar43) {
    lStack_260 = param_3[0x25];
  }
  uStack_258 = (ulong)(*(byte *)(param_3 + 0x23) >> 1);
  if (bVar43) {
    uStack_258 = param_3[0x24];
  }
  auStack_250[0] = 1;
  bStack_308 = 0;
  bStack_307 = 0;
  bStack_306 = 0;
  bStack_305 = 0;
  bStack_304 = 0;
  bStack_303 = 0;
  bStack_302 = '\0';
  bStack_301 = 0;
  lStack_370 = param_4;
  func_0x0eeb79f0(auStack_48,&bStack_308);
  if ((char)bStack_302 < '\0') {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT17(bStack_301,
                         CONCAT16(bStack_302,
                                  CONCAT15(bStack_303,
                                           CONCAT14(bStack_304,
                                                    CONCAT13(bStack_305,
                                                             CONCAT12(bStack_306,
                                                                      CONCAT11(bStack_307,bStack_308
                                                                              ))))))) &
               0xff00ffffffffffff) - 8);
  }
  bVar43 = (*(byte *)(param_3 + 0x26) & 1) != 0;
  lStack_260 = (long)param_3 + 0x131;
  if (bVar43) {
    lStack_260 = param_3[0x28];
  }
  uStack_258 = (ulong)(*(byte *)(param_3 + 0x26) >> 1);
  if (bVar43) {
    uStack_258 = param_3[0x27];
  }
  auStack_250[0] = 1;
  bStack_308 = 0;
  bStack_307 = 0;
  bStack_306 = 0;
  bStack_305 = 0;
  bStack_304 = 0;
  bStack_303 = 0;
  bStack_302 = 0;
  bStack_301 = 0;
  func_0x0eeb79f0(auStack_60,&bStack_308);
  if ((bStack_302 & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT17(bStack_301,
                         CONCAT16(bStack_302,
                                  CONCAT15(bStack_303,
                                           CONCAT14(bStack_304,
                                                    CONCAT13(bStack_305,
                                                             CONCAT12(bStack_306,
                                                                      CONCAT11(bStack_307,bStack_308
                                                                              ))))))) &
               0xff00ffffffffffff) - 8);
  }
  bVar43 = (*(byte *)(param_3 + 10) & 1) != 0;
  lStack_260 = (long)param_3 + 0x51;
  if (bVar43) {
    lStack_260 = param_3[0xc];
  }
  uStack_258 = (ulong)(*(byte *)(param_3 + 10) >> 1);
  if (bVar43) {
    uStack_258 = param_3[0xb];
  }
  auStack_250[0] = 1;
  bStack_308 = 0;
  bStack_307 = 0;
  bStack_306 = 0;
  bStack_305 = 0;
  bStack_304 = 0;
  bStack_303 = 0;
  bStack_302 = 0;
  bStack_301 = 0;
  func_0x0eeb79f0(auStack_78,&bStack_308);
  plStack_80 = param_1;
  if ((bStack_302 & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT17(bStack_301,
                         CONCAT16(bStack_302,
                                  CONCAT15(bStack_303,
                                           CONCAT14(bStack_304,
                                                    CONCAT13(bStack_305,
                                                             CONCAT12(bStack_306,
                                                                      CONCAT11(bStack_307,bStack_308
                                                                              ))))))) &
               0xff00ffffffffffff) - 8);
  }
  auStack_240 = (undefined1  [16])0x0;
  auStack_250 = (undefined1  [16])0x0;
  uStack_230 = 0x34;
  uStack_22c = 0xffff;
  auStack_228 = (undefined1  [16])0x0;
  auStack_218 = (undefined1  [16])0x0;
  auStack_208 = (undefined1  [16])0x0;
  uStack_1f8 = 0xffffffff;
  uStack_1f4 = 1;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b6 = 0;
  auStack_1f0 = (undefined1  [16])0x0;
  auStack_1e0 = (undefined1  [16])0x0;
  auStack_1d0 = (undefined1  [16])0x0;
  uStack_1c0 = 0;
  auStack_1b0 = (undefined1  [16])0x0;
  auStack_1a0 = (undefined1  [16])0x0;
  auStack_190 = (undefined1  [16])0x0;
  uStack_180 = 6;
  auStack_178 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_158 = 0x3f800000;
  bStack_150 = 0;
  auStack_148 = (undefined1  [16])0x0;
  auStack_138 = (undefined1  [16])0x0;
  uStack_128 = 0x3f800000;
  auStack_120 = (undefined1  [16])0x0;
  auStack_110 = (undefined1  [16])0x0;
  auStack_100 = (undefined1  [16])0x0;
  auStack_f0 = (undefined1  [16])0x0;
  auStack_e0 = (undefined1  [16])0x0;
  auStack_d0 = (undefined1  [16])0x0;
  uStack_c0 = 0;
  fStack_b8 = 1.0;
  lStack_260 = *param_3;
  uVar37 = param_3[1];
  uStack_258 = 0;
  if ((uVar37 & 0x80000000000000) != 0) {
    lVar32 = *(long *)((uVar37 & 0xff00ffffffffffff) - 8);
    lVar16 = lVar32 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *plVar13 = lVar32;
    func_0x0eee2f00(plVar13 + 1,uVar37 & 0xff00ffffffffffff,lVar32);
    *(undefined1 *)((long)plVar13 + lVar32 + 8) = 0;
    uStack_258 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    uVar37 = uStack_258;
    if ((auStack_250._0_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_250._0_8_ & 0xff00ffffffffffff) - 8);
      uVar37 = uStack_258;
    }
  }
  uStack_258 = uVar37;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = auStack_250._8_8_;
  auStack_250 = auVar60 << 0x40;
  uVar37 = param_3[2];
  if ((uVar37 & 0x80000000000000) != 0) {
    lVar32 = *(long *)((uVar37 & 0xff00ffffffffffff) - 8);
    lVar16 = lVar32 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *plVar13 = lVar32;
    func_0x0eee2f00(plVar13 + 1,uVar37 & 0xff00ffffffffffff,lVar32);
    *(undefined1 *)((long)plVar13 + lVar32 + 8) = 0;
    uVar37 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  auStack_250._8_8_ = param_3[3];
  auStack_250._0_8_ = uVar37;
  if ((auStack_240._0_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_240._0_8_ & 0xff00ffffffffffff) - 8);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auStack_240._8_8_;
  auStack_240 = auVar4 << 0x40;
  uVar37 = param_3[4];
  if ((uVar37 & 0x80000000000000) != 0) {
    lVar32 = *(long *)((uVar37 & 0xff00ffffffffffff) - 8);
    lVar16 = lVar32 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *plVar13 = lVar32;
    func_0x0eee2f00(plVar13 + 1,uVar37 & 0xff00ffffffffffff,lVar32);
    *(undefined1 *)((long)plVar13 + lVar32 + 8) = 0;
    uVar37 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  auStack_240._0_8_ = uVar37;
  if ((auStack_240._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_240._8_8_ & 0xff00ffffffffffff) - 8);
    uVar37 = auStack_240._0_8_;
  }
  auStack_240._0_8_ = uVar37;
  auStack_240._8_8_ = 0;
  uVar37 = param_3[5];
  if ((uVar37 & 0x80000000000000) != 0) {
    lVar32 = *(long *)((uVar37 & 0xff00ffffffffffff) - 8);
    lVar16 = lVar32 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *plVar13 = lVar32;
    func_0x0eee2f00(plVar13 + 1,uVar37 & 0xff00ffffffffffff,lVar32);
    *(undefined1 *)((long)plVar13 + lVar32 + 8) = 0;
    uVar37 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  auStack_240._8_8_ = uVar37;
  uStack_22c = *(undefined2 *)((long)param_3 + 0x34);
  uStack_230 = (undefined4)param_3[6];
  auStack_228._0_8_ = param_3[7];
  uVar37 = param_3[7];
  if ((auStack_228._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_228._8_8_ & 0xff00ffffffffffff) - 8);
    uVar37 = auStack_228._0_8_;
  }
  auStack_228._0_8_ = uVar37;
  auStack_228._8_8_ = 0;
  uVar37 = param_3[8];
  if ((uVar37 & 0x80000000000000) != 0) {
    lVar32 = *(long *)((uVar37 & 0xff00ffffffffffff) - 8);
    lVar16 = lVar32 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *plVar13 = lVar32;
    func_0x0eee2f00(plVar13 + 1,uVar37 & 0xff00ffffffffffff,lVar32);
    *(undefined1 *)((long)plVar13 + lVar32 + 8) = 0;
    uVar37 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  auStack_228._8_8_ = uVar37;
  if ((auStack_218._0_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_218._0_8_ & 0xff00ffffffffffff) - 8);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auStack_218._8_8_;
  auStack_218 = auVar5 << 0x40;
  uVar37 = param_3[9];
  if ((uVar37 & 0x80000000000000) != 0) {
    lVar32 = *(long *)((uVar37 & 0xff00ffffffffffff) - 8);
    lVar16 = lVar32 + 9;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && plVar13 == (long *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *plVar13 = lVar32;
    func_0x0eee2f00(plVar13 + 1,uVar37 & 0xff00ffffffffffff,lVar32);
    *(undefined1 *)((long)plVar13 + lVar32 + 8) = 0;
    uVar37 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  auStack_218._0_8_ = uVar37;
  func_0x0cbb58c0(auStack_218 + 8,param_3 + 10);
  auStack_368._0_8_ = param_3 + 0x29;
  uVar14 = func_0x048648e0(param_3 + 0x29,&UNK_014873f2);
  bStack_3e0 = 0x81;
  bStack_3df = 0xd1;
  bStack_3de = 0x1e;
  bStack_3dd = 1;
  bStack_3dc = 0;
  bStack_3db = 0;
  bStack_3da = 10;
  bStack_3d9 = 0;
  bStack_308 = 0;
  bStack_2f8 = 0;
  lVar16 = (ulong)CONCAT43(uStack_2f4,CONCAT12(cStack_2f5,CONCAT11(cStack_2f6,cStack_2f7))) << 8;
  uVar64 = CONCAT13(bStack_301,CONCAT12(bStack_302,CONCAT11(bStack_303,bStack_304)));
  uVar15 = CONCAT17(bStack_2f9,
                    CONCAT16(bStack_2fa,
                             CONCAT15(bStack_2fb,
                                      CONCAT14(bStack_2fc,
                                               CONCAT13(bStack_2fd,
                                                        CONCAT12(bStack_2fe,
                                                                 CONCAT11(bStack_2ff,bStack_300)))))
                            ));
  func_0x0eeb79f0(auStack_b0,&bStack_3e0);
  if ((bStack_3da & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT17(bStack_3d9,
                         CONCAT16(bStack_3da,
                                  CONCAT15(bStack_3db,
                                           CONCAT14(bStack_3dc,
                                                    CONCAT13(bStack_3dd,
                                                             CONCAT12(bStack_3de,
                                                                      CONCAT11(bStack_3df,bStack_3e0
                                                                              ))))))) &
               0xff00ffffffffffff) - 8);
  }
  uVar63 = CONCAT44(uVar64,(uint)bStack_150);
  cVar8 = FUN_0cc2e330(param_2,uVar14,auStack_148,auStack_218 + 8,auStack_228,lStack_370,uVar63,
                       uVar15,lVar16);
  if (cVar8 == '\0') {
LAB_0cc20032:
    func_0x0eeb81b0(auStack_b0);
  }
  else {
    uVar15 = func_0x048648e0(uVar14);
    cVar8 = func_0x04864260(uVar15);
    if (cVar8 == '\0') {
      cVar8 = func_0x0d678aa0(lStack_370);
      if ((cVar8 == '\0') && (auStack_228[7] == '\0')) {
        if ((auStack_228._8_8_ & 0x80000000000000) == 0) {
          uVar37 = (ulong)(auStack_228._14_2_ & 0x7f);
        }
        else {
          uVar37 = *(ulong *)((auStack_228._8_8_ & 0xff00ffffffffffff) - 8);
        }
        if ((((uVar37 == 0) && (auStack_228._0_2_ == 1)) && (auStack_228._2_2_ == 0x13)) &&
           (auStack_228._4_2_ == 0x3c)) {
          func_0x0b61d900(1,3,6,&UNK_0126872e);
          goto LAB_0cc20032;
        }
      }
      cVar8 = func_0x04864270(uVar15);
      if (cVar8 == '\0') {
        func_0x04b0c980(1,3,6,&UNK_013d68e9);
        goto LAB_0cc20032;
      }
      uVar12 = func_0x048641f0(uVar15);
      if (uVar12 != 0) {
        uVar37 = 0;
        uStack_98 = 0x1fffffffffff;
        uStack_88 = uVar15;
        do {
          uStack_380 = uVar37;
          uVar15 = func_0x04864620(uVar15);
          cVar8 = func_0x04864290(uVar15);
          if (cVar8 == '\0') {
            func_0x0c4930c0(1,3,6,&UNK_014a5692);
            goto LAB_0cc20032;
          }
          bStack_308 = 0;
          bStack_307 = 0;
          bStack_306 = 0;
          bStack_305 = 0;
          bStack_300 = 1;
          bStack_2ff = 0;
          bStack_2fe = 0;
          bStack_2fd = 0;
          auStack_2e8 = (undefined1  [16])0x0;
          bStack_2f8 = 0;
          cStack_2f7 = 0;
          cStack_2f6 = 0;
          cStack_2f5 = 0;
          uStack_2f4 = 0;
          iStack_2f0 = 0;
          uStack_2ec = 0;
          uStack_2d8 = 0x3f800000;
          auStack_2b0 = (undefined1  [16])0x0;
          auStack_2c0 = (undefined1  [16])0x0;
          auStack_2d0 = (undefined1  [16])0x0;
          uVar14 = func_0x048648e0(uVar15,&UNK_0122361d);
          func_0x04863480(auStack_270,uVar14);
          uVar7 = uStack_22c;
          if ((DAT_0f6b3fe8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b3fe8), iVar11 != 0)) {
            func_0x0ee25020(0xf6b3fc0,&DAT_015918f2);
            func_0x0eee2f40(&UNK_0b5d68a0,0xf6b3fc0,0xf53dab8);
            func_0x0410844d(&DAT_0f6b3fe8);
          }
          pbVar31 = _DAT_0f6ff970;
          bStack_3d8 = 1;
          bStack_3d7 = 0;
          bStack_3d6 = 0;
          bStack_3d5 = 0;
          bStack_3d4 = 0;
          bStack_3d3 = 0;
          bStack_3d2 = 0;
          bStack_3d1 = 0;
          bStack_3d0 = 0xc0;
          bStack_3cf = 0x3f;
          bStack_3ce = 0x6b;
          bStack_3cd = 0xf;
          bStack_3cc = 0;
          bStack_3cb = 0;
          sStack_3ca = 0;
          lStack_3a8 = 0;
          uStack_3a0 = 0;
          fStack_3b8 = 0.0;
          uStack_3b4 = 0;
          uStack_3b0 = 0;
          uStack_3af = 0;
          bStack_3e0 = (byte)uVar7;
          bStack_3df = (byte)((ushort)uVar7 >> 8);
          auStack_3c8._8_8_ = 0x1fffffffff7f;
          auStack_3c8._0_8_ = 0xfffffff9ffffffff;
          for (pbVar41 = _DAT_0f6ff968; pbVar41 != pbVar31; pbVar41 = pbVar41 + 0x18) {
            if ((*pbVar41 & 1) == 0) {
              uStack_278 = *(undefined8 *)(pbVar41 + 0x10);
              pbStack_288 = *(byte **)pbVar41;
              uStack_280 = *(undefined8 *)(pbVar41 + 8);
            }
            else {
              func_0x0412e5e0(&pbStack_288,*(undefined8 *)(pbVar41 + 0x10),
                              *(undefined8 *)(pbVar41 + 8));
            }
            func_0x0b5c16b0(&bStack_3e0,&pbStack_288);
            if (((ulong)pbStack_288 & 1) != 0) {
              func_0x0412a280(uStack_278,(ulong)pbStack_288 & 0xfffffffffffffffe);
            }
          }
          cVar8 = func_0x0551ca70(auStack_228,&UNK_0f3f67e0);
          if (cVar8 == '\0') {
            cVar8 = func_0x04864260(auStack_270);
            if ((cVar8 == '\0') && (cVar8 = func_0x04865490(auStack_270), cVar8 != '\0')) {
              pbStack_398 = (byte *)((ulong)pbStack_398 & 0xffffffffffff0000);
              func_0x04863cb0(&uStack_350,auStack_270,&pbStack_398);
              pbVar31 = (byte *)((ulong)uStack_350 >> 1 & 0x7f);
              lVar16 = (long)&uStack_350 + 1;
              if (((ulong)uStack_350 & 1) != 0) {
                pbVar31 = pbStack_348;
                lVar16 = lStack_340;
              }
              cVar8 = func_0x0b5be630(&bStack_308,lVar16,pbVar31,&bStack_3e0);
              if (((ulong)uStack_350 & 1) != 0) {
                func_0x0412a280(lStack_340,(ulong)uStack_350 & 0xfffffffffffffffe);
              }
              if (((ulong)pbStack_398 & 1) != 0) {
                func_0x0412a280(lStack_388,(ulong)pbStack_398 & 0xfffffffffffffffe);
              }
              if (cVar8 == '\0') goto LAB_0cc1f351;
              func_0x04b0c980(1,3,6,&UNK_011cabd0);
            }
            else {
              func_0x057d2c10(1,3,6,&UNK_0128253f);
            }
LAB_0cc1f343:
            uVar64 = (undefined4)((ulong)uVar63 >> 0x20);
            bVar44 = false;
            bVar43 = false;
            lVar16 = CONCAT44(uStack_3b4,fStack_3b8);
          }
          else {
            func_0x0b5beee0(&uStack_350,auStack_270,&bStack_3e0);
            uVar37 = (ulong)CONCAT13(bStack_2fd,CONCAT12(bStack_2fe,CONCAT11(bStack_2ff,bStack_300))
                                    );
            if (uVar37 == 0xffffffff) {
              if ((int)pbStack_348 != -1) goto LAB_0cc1f0e3;
LAB_0cc1f167:
              if ((DAT_0f6b3fe8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b3fe8), iVar11 != 0))
              {
                func_0x0ee25020(0xf6b3fc0,&DAT_015918f2);
                func_0x0eee2f40(&UNK_0b5d68a0,0xf6b3fc0,0xf53dab8);
                func_0x0410844d(&DAT_0f6b3fe8);
              }
              pbStack_348 = (byte *)0x1;
              lStack_340 = 0xf6b3fc0;
              uStack_338 = 0xffffffffffffffff;
              uStack_330 = uStack_98;
              lStack_318 = 0;
              uStack_310 = 0;
              lStack_328 = 0;
              uStack_320 = 0;
              uStack_31f = 0;
              uStack_350 = (byte *)CONCAT62(uStack_350._2_6_,uVar7);
              func_0x0b5beee0(&pbStack_398,auStack_270,&uStack_350);
              uVar33 = (uint)pbStack_390;
              if ((uint)pbStack_390 == 1) {
                cVar8 = '\x01';
LAB_0cc1f2a7:
                cVar9 = cVar8;
                (**(code **)(&UNK_0f3f5cd0 + (ulong)uVar33 * 8))(&uStack_371,&pbStack_398);
              }
              else {
                if ((uint)pbStack_390 == 0) {
                  if (pbStack_398 == (byte *)0x0) {
                    uVar33 = 0;
                    cVar8 = '\0';
                  }
                  else {
                    cVar9 = (**(code **)(*(long *)pbStack_398 + 0x50))();
                    uVar33 = (uint)pbStack_390;
                    cVar8 = cVar9;
                    if ((uint)pbStack_390 == 0xffffffff) goto LAB_0cc1f2c3;
                  }
                  goto LAB_0cc1f2a7;
                }
                cVar9 = '\0';
                cVar8 = '\0';
                if ((uint)pbStack_390 != 0xffffffff) goto LAB_0cc1f2a7;
              }
LAB_0cc1f2c3:
              lVar16 = lStack_328;
              if (lStack_328 != 0) {
                for (lVar32 = CONCAT71(uStack_31f,uStack_320); lVar16 != lVar32;
                    lVar32 = lVar32 + -0x18) {
                  if ((*(byte *)(lVar32 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar32 + -8),
                                    *(ulong *)(lVar32 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                uStack_320 = (undefined1)lVar16;
                uStack_31f = (undefined7)((ulong)lVar16 >> 8);
                func_0x0412a280(lStack_328,lStack_318 - lStack_328);
              }
              if (cVar9 != '\0') goto LAB_0cc1f343;
            }
            else {
              if ((int)pbStack_348 == -1) {
                (**(code **)(&UNK_0f3f5cd0 + uVar37 * 8))(&pbStack_398,&bStack_308);
                bStack_300 = 0xff;
                bStack_2ff = 0xff;
                bStack_2fe = 0xff;
                bStack_2fd = 0xff;
              }
              else {
LAB_0cc1f0e3:
                pbStack_398 = &bStack_308;
                (**(code **)(&UNK_0f3f5ce0 + ((ulong)pbStack_348 & 0xffffffff) * 8))
                          (&pbStack_398,pbStack_398,&uStack_350);
              }
              if (((ulong)pbStack_348 & 0xffffffff) != 0xffffffff) {
                (**(code **)(&UNK_0f3f5cd0 + ((ulong)pbStack_348 & 0xffffffff) * 8))
                          (&pbStack_398,&uStack_350);
              }
              iVar11 = CONCAT13(bStack_2fd,CONCAT12(bStack_2fe,CONCAT11(bStack_2ff,bStack_300)));
              if ((iVar11 != 1) &&
                 (((iVar11 != 0 ||
                   (plVar13 = (long *)CONCAT17(bStack_301,
                                               CONCAT16(bStack_302,
                                                        CONCAT15(bStack_303,
                                                                 CONCAT14(bStack_304,
                                                                          CONCAT13(bStack_305,
                                                                                   CONCAT12(
                                                  bStack_306,CONCAT11(bStack_307,bStack_308))))))),
                   plVar13 == (long *)0x0)) ||
                  (cVar8 = (**(code **)(*plVar13 + 0x50))(), cVar8 == '\0')))) goto LAB_0cc1f167;
            }
LAB_0cc1f351:
            uVar64 = (undefined4)((ulong)uVar63 >> 0x20);
            bVar44 = true;
            bVar43 = true;
            lVar16 = CONCAT44(uStack_3b4,fStack_3b8);
          }
          if (lVar16 != 0) {
            uVar64 = (undefined4)((ulong)uVar63 >> 0x20);
            lVar32 = CONCAT71(uStack_3af,uStack_3b0);
            lVar42 = lVar16;
            if (lVar16 != lVar32) {
              do {
                if ((*(byte *)(lVar32 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar32 + -8),
                                  *(ulong *)(lVar32 + -0x18) & 0xfffffffffffffffe);
                }
                uVar64 = (undefined4)((ulong)uVar63 >> 0x20);
                lVar32 = lVar32 + -0x18;
              } while (lVar32 != lVar16);
              lVar42 = CONCAT44(uStack_3b4,fStack_3b8);
            }
            uStack_3b0 = (undefined1)lVar16;
            uStack_3af = (undefined7)((ulong)lVar16 >> 8);
            func_0x0412a280(lVar42,lStack_3a8 - lVar42);
            bVar43 = bVar44;
          }
          func_0x04863610(auStack_270);
          if (!bVar43) {
LAB_0cc1fffd:
            func_0x0cc13b10(&bStack_2f8);
            uVar37 = (ulong)CONCAT13(bStack_2fd,CONCAT12(bStack_2fe,CONCAT11(bStack_2ff,bStack_300))
                                    );
            if (uVar37 != 0xffffffff) {
              (**(code **)(&UNK_0f3f5cd0 + uVar37 * 8))(&bStack_3e0,&bStack_308);
            }
            goto LAB_0cc20032;
          }
          uVar63 = CONCAT44(uVar64,(uint)bStack_150);
          cVar8 = FUN_0cc2e330(param_2,uVar15,&bStack_2f8,auStack_218 + 8,auStack_228,lStack_370,
                               uVar63);
          ppbVar21 = &pbStack_288;
          if (cVar8 == '\0') goto LAB_0cc1fffd;
          uStack_350 = &DAT_01d64311;
          pbStack_288 = &DAT_01d5ff89;
          uVar37 = _DAT_0f704e00;
          pbVar31 = _DAT_0f704e08;
          if ((DAT_0f704df8 & 1) == 0) {
            uVar37 = (ulong)(DAT_0f704df8 >> 1);
            pbVar31 = (byte *)0xf704df9;
          }
          pbStack_398 = pbVar31;
          bStack_3e0 = 0x2a;
          bStack_3cf = (byte)_UNK_01d64321;
          bStack_3ce = (byte)((uint5)_UNK_01d64321 >> 8);
          bStack_3cd = (byte)((uint5)_UNK_01d64321 >> 0x10);
          bStack_3cc = (byte)((uint5)_UNK_01d64321 >> 0x18);
          bStack_3cb = (byte)((uint5)_UNK_01d64321 >> 0x20);
          bStack_3df = DAT_01d64311;
          bStack_3de = DAT_01d64311._1_1_;
          bStack_3dd = DAT_01d64311._2_1_;
          bStack_3dc = DAT_01d64311._3_1_;
          bStack_3db = DAT_01d64311._4_1_;
          bStack_3da = DAT_01d64311._5_1_;
          bStack_3d9 = DAT_01d64311._6_1_;
          bStack_3d8 = DAT_01d64311._7_1_;
          bStack_3d7 = DAT_01d64311._8_1_;
          bStack_3d6 = DAT_01d64311._9_1_;
          bStack_3d5 = DAT_01d64311._10_1_;
          bStack_3d4 = DAT_01d64311._11_1_;
          bStack_3d3 = DAT_01d64311._12_1_;
          bStack_3d2 = (byte)_DAT_01d6431e;
          bStack_3d1 = (byte)((uint3)_DAT_01d6431e >> 8);
          bStack_3d0 = (byte)((uint3)_DAT_01d6431e >> 0x10);
          uVar15 = auStack_2b0._0_8_;
          for (plVar13 = (long *)auStack_2c0._8_8_; plVar13 != (long *)uVar15; plVar13 = plVar13 + 2
              ) {
            pbVar41 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
            bVar10 = *pbVar41;
            if ((bVar10 & 1) == 0) {
              if (bVar10 >> 1 == 0x15) goto LAB_0cc1f4fa;
            }
            else if (*(long *)(pbVar41 + 8) == 0x15) {
LAB_0cc1f4fa:
              if ((bVar10 & 1) == 0) {
                pbVar41 = pbVar41 + 1;
              }
              else {
                pbVar41 = *(byte **)(pbVar41 + 0x10);
              }
              auVar60 = *(undefined1 (*) [16])(pbVar41 + 5);
              in_XMM2[0] = -(bStack_3df == *pbVar41);
              in_XMM2[1] = -(bStack_3de == pbVar41[1]);
              in_XMM2[2] = -(bStack_3dd == pbVar41[2]);
              in_XMM2[3] = -(bStack_3dc == pbVar41[3]);
              in_XMM2[4] = -(bStack_3db == pbVar41[4]);
              in_XMM2[5] = -(bStack_3da == pbVar41[5]);
              in_XMM2[6] = -(bStack_3d9 == pbVar41[6]);
              in_XMM2[7] = -(bStack_3d8 == pbVar41[7]);
              in_XMM2[8] = -(bStack_3d7 == pbVar41[8]);
              in_XMM2[9] = -(bStack_3d6 == pbVar41[9]);
              in_XMM2[10] = -(bStack_3d5 == pbVar41[10]);
              in_XMM2[0xb] = -(bStack_3d4 == pbVar41[0xb]);
              in_XMM2[0xc] = -(bStack_3d3 == pbVar41[0xc]);
              in_XMM2[0xd] = -(bStack_3d2 == pbVar41[0xd]);
              in_XMM2[0xe] = -(bStack_3d1 == pbVar41[0xe]);
              in_XMM2[0xf] = -(bStack_3d0 == pbVar41[0xf]);
              auVar46[0] = -(bStack_3da == auVar60[0]);
              auVar46[1] = -(bStack_3d9 == auVar60[1]);
              auVar46[2] = -(bStack_3d8 == auVar60[2]);
              auVar46[3] = -(bStack_3d7 == auVar60[3]);
              auVar46[4] = -(bStack_3d6 == auVar60[4]);
              auVar46[5] = -(bStack_3d5 == auVar60[5]);
              auVar46[6] = -(bStack_3d4 == auVar60[6]);
              auVar46[7] = -(bStack_3d3 == auVar60[7]);
              auVar46[8] = -(bStack_3d2 == auVar60[8]);
              auVar46[9] = -(bStack_3d1 == auVar60[9]);
              auVar46[10] = -(bStack_3d0 == auVar60[10]);
              auVar46[0xb] = -(bStack_3cf == auVar60[0xb]);
              auVar46[0xc] = -(bStack_3ce == auVar60[0xc]);
              auVar46[0xd] = -(bStack_3cd == auVar60[0xd]);
              auVar46[0xe] = -(bStack_3cc == auVar60[0xe]);
              auVar46[0xf] = -(bStack_3cb == auVar60[0xf]);
              auVar46 = auVar46 & in_XMM2;
              if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar46[0xf] >> 7) << 0xf) == 0xffff) {
                if (*plVar13 != 0) {
                  ppbVar21 = (byte **)&uStack_350;
                  goto LAB_0cc1ffd5;
                }
                break;
              }
            }
          }
          bStack_3cf = DAT_01d5ff99;
          bStack_3df = DAT_01d5ff89;
          bStack_3de = DAT_01d5ff89._1_1_;
          bStack_3dd = DAT_01d5ff89._2_1_;
          bStack_3dc = DAT_01d5ff89._3_1_;
          bStack_3db = DAT_01d5ff89._4_1_;
          bStack_3da = DAT_01d5ff89._5_1_;
          bStack_3d9 = DAT_01d5ff89._6_1_;
          bStack_3d8 = DAT_01d5ff89._7_1_;
          bStack_3d7 = DAT_01d5ff89._8_1_;
          bStack_3d6 = DAT_01d5ff89._9_1_;
          bStack_3d5 = DAT_01d5ff89._10_1_;
          bStack_3d4 = DAT_01d5ff89._11_1_;
          bStack_3d3 = DAT_01d5ff89._12_1_;
          bStack_3d2 = DAT_01d5ff89._13_1_;
          bStack_3d1 = DAT_01d5ff89._14_1_;
          bStack_3d0 = DAT_01d5ff89._15_1_;
          uVar15 = auStack_2b0._0_8_;
          for (plVar13 = (long *)auStack_2c0._8_8_; plVar13 != (long *)uVar15; plVar13 = plVar13 + 2
              ) {
            pbVar41 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
            bVar10 = *pbVar41;
            if ((bVar10 & 1) == 0) {
              if (bVar10 >> 1 == 0x11) goto LAB_0cc1f5aa;
            }
            else if (*(long *)(pbVar41 + 8) == 0x11) {
LAB_0cc1f5aa:
              if ((bVar10 & 1) == 0) {
                pbVar41 = pbVar41 + 1;
              }
              else {
                pbVar41 = *(byte **)(pbVar41 + 0x10);
              }
              auVar51[0] = -(bStack_3df == *pbVar41);
              auVar51[1] = -(bStack_3de == pbVar41[1]);
              auVar51[2] = -(bStack_3dd == pbVar41[2]);
              auVar51[3] = -(bStack_3dc == pbVar41[3]);
              auVar51[4] = -(bStack_3db == pbVar41[4]);
              auVar51[5] = -(bStack_3da == pbVar41[5]);
              auVar51[6] = -(bStack_3d9 == pbVar41[6]);
              auVar51[7] = -(bStack_3d8 == pbVar41[7]);
              auVar51[8] = -(bStack_3d7 == pbVar41[8]);
              auVar51[9] = -(bStack_3d6 == pbVar41[9]);
              auVar51[10] = -(bStack_3d5 == pbVar41[10]);
              auVar51[0xb] = -(bStack_3d4 == pbVar41[0xb]);
              auVar51[0xc] = -(bStack_3d3 == pbVar41[0xc]);
              auVar51[0xd] = -(bStack_3d2 == pbVar41[0xd]);
              auVar51[0xe] = -(bStack_3d1 == pbVar41[0xe]);
              auVar51[0xf] = -(bStack_3d0 == pbVar41[0xf]);
              auVar54[0] = -(bStack_3cf == pbVar41[0x10]);
              auVar54[1] = 0xff;
              auVar54[2] = 0xff;
              auVar54[3] = 0xff;
              auVar54[4] = 0xff;
              auVar54[5] = 0xff;
              auVar54[6] = 0xff;
              auVar54[7] = 0xff;
              auVar54[8] = 0xff;
              auVar54[9] = 0xff;
              auVar54[10] = 0xff;
              auVar54[0xb] = 0xff;
              auVar54[0xc] = 0xff;
              auVar54[0xd] = 0xff;
              auVar54[0xe] = 0xff;
              auVar54[0xf] = 0xff;
              in_XMM2 = auVar54 & auVar51;
              if ((ushort)((ushort)(SUB161(in_XMM2 >> 7,0) & 1) |
                           (ushort)(SUB161(in_XMM2 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(in_XMM2 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(in_XMM2 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(in_XMM2 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(in_XMM2 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(in_XMM2 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(in_XMM2 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(in_XMM2 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(in_XMM2 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(in_XMM2 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(in_XMM2 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(in_XMM2 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(in_XMM2 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(in_XMM2 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(in_XMM2[0xf] >> 7) << 0xf) == 0xffff) {
                if (*plVar13 != 0) goto LAB_0cc1ffd5;
                break;
              }
            }
          }
          if (0xfffffffffffffff7 < uVar37) {
            func_0x04882e30();
LAB_0cc21414:
            func_0x0cc84ea0();
LAB_0cc21419:
            FUN_04882eb0();
LAB_0cc2141e:
            func_0x04931450();
LAB_0cc21423:
            lVar16 = func_0x04931450();
            func_0x041084d6(&DAT_0f6b3fe8);
            func_0x04ab4450(&bStack_3e0);
            func_0x04863610(auStack_270);
            func_0x0cc13ac0(&bStack_308);
            func_0x0eeb81b0(auStack_b0);
            func_0x0cc13c30(&lStack_260);
            func_0x0eeb81b0(auStack_78);
            func_0x0eeb81b0(auStack_60);
            func_0x0eeb81b0(auStack_48);
            func_0x0eee2d70();
            func_0x04863610(lVar16 + 0x148);
            if ((*(byte *)(lVar16 + 0x130) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar16 + 0x140),
                              *(ulong *)(lVar16 + 0x130) & 0xfffffffffffffffe);
            }
            if ((*(byte *)(lVar16 + 0x118) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar16 + 0x128),
                              *(ulong *)(lVar16 + 0x118) & 0xfffffffffffffffe);
            }
            func_0x0cbb6500(lVar16 + 0x50);
            if ((*(ulong *)(lVar16 + 0x48) >> 0x37 & 1) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(lVar16 + 0x48) & 0xff00ffffffffffff) - 8);
            }
            *(undefined8 *)(lVar16 + 0x48) = 0;
            if ((*(ulong *)(lVar16 + 0x40) & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(lVar16 + 0x40) & 0xff00ffffffffffff) - 8);
            }
            *(undefined8 *)(lVar16 + 0x40) = 0;
            if ((*(ulong *)(lVar16 + 0x28) & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(lVar16 + 0x28) & 0xff00ffffffffffff) - 8);
            }
            *(undefined8 *)(lVar16 + 0x28) = 0;
            if ((*(ulong *)(lVar16 + 0x20) & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(lVar16 + 0x20) & 0xff00ffffffffffff) - 8);
            }
            *(undefined8 *)(lVar16 + 0x20) = 0;
            if ((*(ulong *)(lVar16 + 0x10) & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(lVar16 + 0x10) & 0xff00ffffffffffff) - 8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
            if ((*(ulong *)(lVar16 + 8) & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(lVar16 + 8) & 0xff00ffffffffffff) - 8);
            }
            *(undefined8 *)(lVar16 + 8) = 0;
            return;
          }
          if (uVar37 < 0x17) {
            bStack_3e0 = (byte)uVar37 * '\x02';
            pbVar41 = &bStack_3df;
            if (uVar37 != 0) goto LAB_0cc1f62c;
          }
          else {
            lVar16 = (uVar37 | 7) + 1;
            if ((uVar37 | 7) == 0x17) {
              lVar16 = 0x1a;
            }
            pbVar41 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar16);
            if (pbVar41 == (byte *)0x0) {
              func_0x0eec74c0(lVar16,0);
            }
            bStack_3d0 = (byte)pbVar41;
            bStack_3cf = (byte)((ulong)pbVar41 >> 8);
            bStack_3ce = (byte)((ulong)pbVar41 >> 0x10);
            bStack_3cd = (byte)((ulong)pbVar41 >> 0x18);
            bStack_3cc = (byte)((ulong)pbVar41 >> 0x20);
            bStack_3cb = (byte)((ulong)pbVar41 >> 0x28);
            sStack_3ca = (short)((ulong)pbVar41 >> 0x30);
            bStack_3e0 = (byte)lVar16 | 1;
            bStack_3df = (byte)((ulong)lVar16 >> 8);
            bStack_3de = (byte)((ulong)lVar16 >> 0x10);
            bStack_3dd = (byte)((ulong)lVar16 >> 0x18);
            bStack_3dc = (byte)((ulong)lVar16 >> 0x20);
            bStack_3db = (byte)((ulong)lVar16 >> 0x28);
            bStack_3da = (byte)((ulong)lVar16 >> 0x30);
            bStack_3d9 = (byte)((ulong)lVar16 >> 0x38);
            bStack_3d7 = (byte)(uVar37 >> 8);
            bStack_3d6 = (byte)(uVar37 >> 0x10);
            bStack_3d5 = (byte)(uVar37 >> 0x18);
            bStack_3d4 = (byte)(uVar37 >> 0x20);
            bStack_3d3 = (byte)(uVar37 >> 0x28);
            bStack_3d2 = (byte)(uVar37 >> 0x30);
            bStack_3d1 = (byte)(uVar37 >> 0x38);
            bStack_3d8 = (byte)uVar37;
LAB_0cc1f62c:
            func_0x0eee2ee0(pbVar41,pbVar31,uVar37);
          }
          bVar10 = bStack_3e0;
          pbVar41[uVar37] = 0;
          uVar15 = auStack_2b0._0_8_;
          bVar43 = true;
          if (auStack_2c0._8_8_ != auStack_2b0._0_8_) {
            bVar44 = (bStack_3e0 & 1) != 0;
            uVar37 = (ulong)(bStack_3e0 >> 1);
            if (bVar44) {
              uVar37 = CONCAT17(bStack_3d1,
                                CONCAT16(bStack_3d2,
                                         CONCAT15(bStack_3d3,
                                                  CONCAT14(bStack_3d4,
                                                           CONCAT13(bStack_3d5,
                                                                    CONCAT12(bStack_3d6,
                                                                             CONCAT11(bStack_3d7,
                                                                                      bStack_3d8))))
                                                 )));
            }
            pbStack_90 = (byte *)CONCAT26(sStack_3ca,
                                          CONCAT15(bStack_3cb,
                                                   CONCAT14(bStack_3cc,
                                                            CONCAT13(bStack_3cd,
                                                                     CONCAT12(bStack_3ce,
                                                                              CONCAT11(bStack_3cf,
                                                                                       bStack_3d0)))
                                                           )));
            plVar13 = (long *)auStack_2c0._8_8_;
            pbVar31 = pbStack_90;
            if (!bVar44) {
              pbVar31 = &bStack_3df;
            }
            do {
              pbVar41 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
              bVar1 = *pbVar41;
              if ((bVar1 & 1) == 0) {
                uVar36 = (ulong)(bVar1 >> 1);
              }
              else {
                uVar36 = *(ulong *)(pbVar41 + 8);
              }
              if (uVar36 == uVar37) {
                if ((bVar1 & 1) == 0) {
                  pbVar41 = pbVar41 + 1;
                }
                else {
                  pbVar41 = *(byte **)(pbVar41 + 0x10);
                }
                iVar11 = func_0x0eee3000(pbVar41,pbVar31,uVar37);
                if (iVar11 == 0) {
                  bVar43 = *plVar13 == 0;
                  break;
                }
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != (long *)uVar15);
          }
          if ((bVar10 & 1) != 0) {
            func_0x0412a280(CONCAT26(sStack_3ca,
                                     CONCAT15(bStack_3cb,
                                              CONCAT14(bStack_3cc,
                                                       CONCAT13(bStack_3cd,
                                                                CONCAT12(bStack_3ce,
                                                                         CONCAT11(bStack_3cf,
                                                                                  bStack_3d0)))))),
                            CONCAT17(bStack_3d9,
                                     CONCAT16(bStack_3da,
                                              CONCAT15(bStack_3db,
                                                       CONCAT14(bStack_3dc,
                                                                CONCAT13(bStack_3dd,
                                                                         CONCAT12(bStack_3de,
                                                                                  CONCAT11(
                                                  bStack_3df,bStack_3e0))))))) & 0xfffffffffffffffe)
            ;
          }
          if (!bVar43) {
            ppbVar21 = &pbStack_398;
LAB_0cc1ffd5:
            pbVar31 = *ppbVar21;
            bStack_3e0 = (byte)pbVar31;
            bStack_3df = (byte)((ulong)pbVar31 >> 8);
            bStack_3de = (byte)((ulong)pbVar31 >> 0x10);
            bStack_3dd = (byte)((ulong)pbVar31 >> 0x18);
            bStack_3dc = (byte)((ulong)pbVar31 >> 0x20);
            bStack_3db = (byte)((ulong)pbVar31 >> 0x28);
            bStack_3da = (byte)((ulong)pbVar31 >> 0x30);
            bStack_3d9 = (byte)((ulong)pbVar31 >> 0x38);
            func_0x05636600(1,3,6,&UNK_014a56bc,&bStack_3e0);
            goto LAB_0cc1fffd;
          }
          uVar15 = auStack_f0._8_8_;
          if ((ulong)auStack_f0._8_8_ < (ulong)auStack_e0._0_8_) {
            *(undefined8 *)auStack_f0._8_8_ = 0;
            pbVar31 = (byte *)(auStack_f0._8_8_ + 8);
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            if ((byte *)auStack_f0._8_8_ != &bStack_308) {
              bStack_3e0 = auStack_f0[8];
              bStack_3df = auStack_f0[9];
              bStack_3de = auStack_f0[10];
              bStack_3dd = auStack_f0[0xb];
              bStack_3dc = auStack_f0[0xc];
              bStack_3db = auStack_f0[0xd];
              bStack_3da = auStack_f0[0xe];
              bStack_3d9 = auStack_f0[0xf];
              uVar37 = (ulong)CONCAT13(bStack_2fd,
                                       CONCAT12(bStack_2fe,CONCAT11(bStack_2ff,bStack_300)));
              bStack_3d8 = bStack_3e0;
              bStack_3d7 = bStack_3df;
              bStack_3d6 = bStack_3de;
              bStack_3d5 = bStack_3dd;
              bStack_3d4 = bStack_3dc;
              bStack_3d3 = bStack_3db;
              bStack_3d2 = bStack_3da;
              bStack_3d1 = bStack_3d9;
              if (uVar37 == 0xffffffff) goto LAB_0cc2141e;
              uStack_350 = &bStack_3e0;
              (**(code **)(&UNK_0f2bc850 + uVar37 * 8))(&uStack_350,&bStack_308);
            }
            func_0x0cc13980((byte *)(uVar15 + 0x10),&bStack_2f8);
            pbVar31 = (byte *)(uVar15 + 0x68);
            lVar42 = auStack_f0._0_8_;
          }
          else {
            lVar16 = auStack_f0._8_8_ - auStack_f0._0_8_;
            uVar37 = (lVar16 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
            if (0x276276276276276 < uVar37) goto LAB_0cc21414;
            lVar32 = (long)(auStack_e0._0_8_ - auStack_f0._0_8_) >> 3;
            uVar36 = lVar32 * -0x6276276276276276;
            if (uVar37 < uVar36) {
              uVar37 = uVar36;
            }
            if (0x13b13b13b13b13a < (ulong)(lVar32 * 0x4ec4ec4ec4ec4ec5)) {
              uVar37 = 0x276276276276276;
            }
            auStack_3c8._8_8_ = auStack_f0;
            if (uVar37 == 0) {
              lVar32 = 0;
            }
            else {
              if (0x276276276276276 < uVar37) goto LAB_0cc21419;
              lVar32 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar37 * 0x68);
              if (lVar32 == 0) {
                func_0x0eec74c0(uVar37 * 0x68,0);
                lVar32 = 0;
              }
            }
            bStack_3e0 = (byte)lVar32;
            bStack_3df = (byte)((ulong)lVar32 >> 8);
            bStack_3de = (byte)((ulong)lVar32 >> 0x10);
            bStack_3dd = (byte)((ulong)lVar32 >> 0x18);
            bStack_3dc = (byte)((ulong)lVar32 >> 0x20);
            bStack_3db = (byte)((ulong)lVar32 >> 0x28);
            bStack_3da = (byte)((ulong)lVar32 >> 0x30);
            bStack_3d9 = (byte)((ulong)lVar32 >> 0x38);
            pbVar31 = (byte *)(lVar32 + lVar16);
            bStack_3d0 = (byte)pbVar31;
            bStack_3cf = (byte)((ulong)pbVar31 >> 8);
            bStack_3ce = (byte)((ulong)pbVar31 >> 0x10);
            bStack_3cd = (byte)((ulong)pbVar31 >> 0x18);
            bStack_3cc = (byte)((ulong)pbVar31 >> 0x20);
            bStack_3cb = (byte)((ulong)pbVar31 >> 0x28);
            sStack_3ca = (short)((ulong)pbVar31 >> 0x30);
            bStack_3d2 = (byte)((ulong)pbVar31 >> 0x30);
            bStack_3d1 = (byte)((ulong)pbVar31 >> 0x38);
            auStack_3c8._0_8_ = uVar37 * 0x68 + lVar32;
            *(undefined8 *)(lVar32 + lVar16) = 0;
            *(undefined4 *)(lVar32 + 8 + lVar16) = 0;
            bStack_3d8 = bStack_3d0;
            bStack_3d7 = bStack_3cf;
            bStack_3d6 = bStack_3ce;
            bStack_3d5 = bStack_3cd;
            bStack_3d4 = bStack_3cc;
            bStack_3d3 = bStack_3cb;
            if (pbVar31 != &bStack_308) {
              uVar37 = (ulong)CONCAT13(bStack_2fd,
                                       CONCAT12(bStack_2fe,CONCAT11(bStack_2ff,bStack_300)));
              uStack_350 = pbVar31;
              pbStack_348 = pbVar31;
              if (uVar37 == 0xffffffff) goto LAB_0cc21423;
              pbStack_288 = (byte *)&uStack_350;
              (**(code **)(&UNK_0f2bc850 + uVar37 * 8))(&pbStack_288,&bStack_308);
            }
            func_0x0cc13980(pbVar31 + 0x10,&bStack_2f8);
            pbVar31 = (byte *)(CONCAT26(sStack_3ca,
                                        CONCAT15(bStack_3cb,
                                                 CONCAT14(bStack_3cc,
                                                          CONCAT13(bStack_3cd,
                                                                   CONCAT12(bStack_3ce,
                                                                            CONCAT11(bStack_3cf,
                                                                                     bStack_3d0)))))
                                       ) + 0x68);
            uVar15 = auStack_f0._0_8_;
            uVar14 = auStack_f0._8_8_;
            lVar42 = (auStack_f0._0_8_ - auStack_f0._8_8_) +
                     CONCAT17(bStack_3d1,
                              CONCAT16(bStack_3d2,
                                       CONCAT15(bStack_3d3,
                                                CONCAT14(bStack_3d4,
                                                         CONCAT13(bStack_3d5,
                                                                  CONCAT12(bStack_3d6,
                                                                           CONCAT11(bStack_3d7,
                                                                                    bStack_3d8))))))
                             );
            bStack_3d0 = (byte)pbVar31;
            bStack_3cf = (byte)((ulong)pbVar31 >> 8);
            bStack_3ce = (byte)((ulong)pbVar31 >> 0x10);
            bStack_3cd = (byte)((ulong)pbVar31 >> 0x18);
            bStack_3cc = (byte)((ulong)pbVar31 >> 0x20);
            bStack_3cb = (byte)((ulong)pbVar31 >> 0x28);
            sStack_3ca = (short)((ulong)pbVar31 >> 0x30);
            lVar16 = lVar42;
            lVar32 = auStack_f0._0_8_;
            if (auStack_f0._0_8_ != auStack_f0._8_8_) {
              do {
                func_0x0cc84cc0(lVar16,lVar32);
                lVar32 = lVar32 + 0x68;
                lVar16 = lVar16 + 0x68;
              } while (lVar32 != uVar14);
              lVar16 = uVar15 + 0x10;
              do {
                func_0x0cc13b10(lVar16);
                if ((ulong)*(uint *)(lVar16 + -8) != 0xffffffff) {
                  (**(code **)(&UNK_0f3f5cd0 + (ulong)*(uint *)(lVar16 + -8) * 8))
                            (&uStack_350,lVar16 + -0x10);
                }
                *(undefined4 *)(lVar16 + -8) = 0xffffffff;
                lVar32 = lVar16 + 0x58;
                lVar16 = lVar16 + 0x68;
              } while (lVar32 != uVar14);
              pbVar31 = (byte *)CONCAT26(sStack_3ca,
                                         CONCAT15(bStack_3cb,
                                                  CONCAT14(bStack_3cc,
                                                           CONCAT13(bStack_3cd,
                                                                    CONCAT12(bStack_3ce,
                                                                             CONCAT11(bStack_3cf,
                                                                                      bStack_3d0))))
                                                 ));
              lVar32 = auStack_f0._0_8_;
            }
            auStack_f0._8_8_ = pbVar31;
            auStack_f0._0_8_ = lVar42;
            uVar15 = auStack_e0._0_8_;
            auStack_e0._0_8_ = auStack_3c8._0_8_;
            if (lVar32 != 0) {
              func_0x0412a280(lVar32,uVar15 - lVar32);
              lVar42 = auStack_f0._0_8_;
            }
          }
          auStack_f0._0_8_ = lVar42;
          auStack_f0._8_8_ = pbVar31;
          func_0x0cc13b10(&bStack_2f8);
          uVar15 = uStack_88;
          uVar37 = (ulong)CONCAT13(bStack_2fd,CONCAT12(bStack_2fe,CONCAT11(bStack_2ff,bStack_300)));
          if (uVar37 != 0xffffffff) {
            (**(code **)(&UNK_0f3f5cd0 + uVar37 * 8))(&bStack_3e0,&bStack_308);
          }
          uVar33 = (int)uStack_380 + 1;
          uVar37 = (ulong)uVar33;
        } while (uVar33 != uVar12);
      }
    }
    func_0x0eeb81b0(auStack_b0);
    uVar15 = func_0x048648e0(auStack_368._0_8_,&UNK_014873f2);
    uVar15 = func_0x048648e0(uVar15,&UNK_01416889);
    auStack_368._0_8_ = uVar15;
    bStack_3e0 = 0x89;
    bStack_3df = 0x68;
    bStack_3de = 0x41;
    bStack_3dd = 1;
    bStack_3dc = 0;
    bStack_3db = 0;
    bStack_3da = 6;
    bStack_3d9 = 0;
    bStack_308 = 0;
    bStack_2f8 = 0;
    func_0x0eeb79f0(&pbStack_288,&bStack_3e0);
    if ((bStack_3da & 0x80) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,
                 (CONCAT17(bStack_3d9,
                           CONCAT16(bStack_3da,
                                    CONCAT15(bStack_3db,
                                             CONCAT14(bStack_3dc,
                                                      CONCAT13(bStack_3dd,
                                                               CONCAT12(bStack_3de,
                                                                        CONCAT11(bStack_3df,
                                                                                 bStack_3e0))))))) &
                 0xff00ffffffffffff) - 8);
    }
    uStack_350 = &UNK_01d4b570;
    bStack_308 = (byte)&uStack_350;
    bStack_307 = (byte)((ulong)&uStack_350 >> 8);
    bStack_306 = (byte)((ulong)&uStack_350 >> 0x10);
    bStack_305 = (byte)((ulong)&uStack_350 >> 0x18);
    bStack_304 = (byte)((ulong)&uStack_350 >> 0x20);
    bStack_303 = (byte)((ulong)&uStack_350 >> 0x28);
    bStack_302 = (byte)((ulong)&uStack_350 >> 0x30);
    bStack_301 = (byte)((ulong)&uStack_350 >> 0x38);
    lVar16 = func_0x0b0cdfd0(lStack_370 + 0xa8,&uStack_350,&UNK_01563a4f,&bStack_308,&pbStack_398);
    plVar13 = *(long **)(lVar16 + 0x18);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (plVar13 == (long *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      *(undefined1 (*) [16])(plVar13 + 3) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
      *(undefined4 *)(plVar13 + 5) = 0x3f800000;
      *(undefined1 (*) [16])(plVar13 + 6) = (undefined1  [16])0x0;
      *plVar13 = (long)&UNK_0f3f58f8;
      plVar13[8] = (long)&UNK_0f3f5928;
      func_0x0cc38a80(plVar13,lStack_370);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      plVar13 = plVar13 + 8;
      plVar28 = *(long **)(lVar16 + 0x18);
      *(long **)(lVar16 + 0x18) = plVar13;
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 8))();
        plVar13 = *(long **)(lVar16 + 0x18);
      }
    }
    bStack_3d8 = 0;
    bStack_3d7 = 0;
    bStack_3d6 = 0;
    bStack_3d5 = 0;
    bStack_3d4 = 0;
    bStack_3d3 = 0;
    bStack_3d2 = 0;
    bStack_3d1 = 0;
    bStack_3d0 = 0;
    bStack_3cf = 0;
    bStack_3ce = 0;
    bStack_3cd = 0;
    bStack_3cc = 0;
    bStack_3cb = 0;
    sStack_3ca = 0;
    auStack_3c8 = (undefined1  [16])0x0;
    fStack_3b8 = *(float *)(plVar13 + -3);
    uVar37 = plVar13[-6];
    uVar36 = 2;
    if (uVar37 == 1) {
LAB_0cc1deb8:
      func_0x0c476960(&bStack_3d8,uVar36);
    }
    else {
      if ((uVar37 & uVar37 - 1) != 0) {
        uVar37 = func_0x0412c3f0(uVar37,2);
        uVar20 = CONCAT26(sStack_3ca,
                          CONCAT15(bStack_3cb,
                                   CONCAT14(bStack_3cc,
                                            CONCAT13(bStack_3cd,
                                                     CONCAT12(bStack_3ce,
                                                              CONCAT11(bStack_3cf,bStack_3d0))))));
        bVar43 = uVar37 < uVar20;
        uVar36 = uVar37;
        if (uVar37 <= uVar20) goto LAB_0cc1fcee;
        goto LAB_0cc1deb8;
      }
      uVar20 = 0;
      bVar43 = false;
      uVar36 = uVar37;
      if (uVar37 != 0) goto LAB_0cc1deb8;
LAB_0cc1fcee:
      if (bVar43) {
        fVar61 = (float)func_0x0eee3ab0((float)(ulong)auStack_3c8._8_8_ / fStack_3b8);
        uVar36 = (long)(fVar61 - _DAT_01198778) & (long)fVar61 >> 0x3f | (long)fVar61;
        if ((uVar20 < 3) ||
           (uVar29 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
           uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
           1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar36 = func_0x0412c3f0(uVar36);
        }
        else if (1 < uVar36) {
          lVar16 = 0x3f;
          if (uVar36 - 1 != 0) {
            for (; uVar36 - 1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar36 = 1L << (-((byte)lVar16 ^ 0x3f) & 0x3f);
        }
        if (uVar36 < uVar37) {
          uVar36 = uVar37;
        }
        if (uVar36 < uVar20) goto LAB_0cc1deb8;
      }
    }
    plVar17 = plVar13;
    plStack_408 = param_2;
    for (plVar28 = (long *)plVar13[-5]; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
LAB_0cc1dee0:
      lVar16 = (long)plVar28 + 0x11;
      bVar43 = (*(byte *)(plVar28 + 2) & 1) == 0;
      lVar32 = plVar28[4];
      if (bVar43) {
        lVar32 = lVar16;
      }
      uVar37 = (ulong)(*(byte *)(plVar28 + 2) >> 1);
      if (!bVar43) {
        uVar37 = plVar28[3];
      }
      plVar17 = (long *)func_0x04883620(&bStack_308,lVar32,uVar37);
      sVar6 = sStack_3ca;
      uVar3 = CONCAT15(bStack_3cb,
                       CONCAT14(bStack_3cc,
                                CONCAT13(bStack_3cd,
                                         CONCAT12(bStack_3ce,CONCAT11(bStack_3cf,bStack_3d0)))));
      plVar30 = (long *)CONCAT26(sStack_3ca,uVar3);
      if (plVar30 != (long *)0x0) {
        uVar37 = (long)plVar30 - ((ulong)plVar30 >> 1 & 0x5555555555555555);
        uVar37 = (uVar37 >> 2 & 0x3333333333333333) + (uVar37 & 0x3333333333333333);
        uVar37 = ((uVar37 >> 4) + uVar37 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar37 >> 0x38 < 2) {
          plStack_408 = (long *)((long)plVar30 - 1U & (ulong)plVar17);
        }
        else {
          plStack_408 = plVar17;
          if (plVar30 <= plVar17) {
            if (((ulong)plVar17 | (ulong)plVar30) >> 0x20 == 0) {
              plStack_408 = (long *)(((ulong)plVar17 & 0xffffffff) % ((ulong)uVar3 & 0xffffffff));
            }
            else {
              plStack_408 = (long *)((ulong)plVar17 % (ulong)plVar30);
            }
          }
        }
        plVar38 = *(long **)(CONCAT17(bStack_3d1,
                                      CONCAT16(bStack_3d2,
                                               CONCAT15(bStack_3d3,
                                                        CONCAT14(bStack_3d4,
                                                                 CONCAT13(bStack_3d5,
                                                                          CONCAT12(bStack_3d6,
                                                                                   CONCAT11(
                                                  bStack_3d7,bStack_3d8))))))) +
                            (long)plStack_408 * 8);
        if ((plVar38 != (long *)0x0) && (plVar38 = (long *)*plVar38, plVar38 != (long *)0x0)) {
          if ((*(byte *)(plVar28 + 2) & 1) == 0) {
            uVar36 = (ulong)(*(byte *)(plVar28 + 2) >> 1);
          }
          else {
            uVar36 = plVar28[3];
            lVar16 = plVar28[4];
          }
          if (1 < (byte)(uVar37 >> 0x38)) {
            do {
              plVar27 = (long *)plVar38[1];
              if (plVar27 == plVar17) {
                bVar10 = *(byte *)(plVar38 + 2);
                if ((bVar10 & 1) == 0) {
                  uVar37 = (ulong)(bVar10 >> 1);
                }
                else {
                  uVar37 = plVar38[3];
                }
                if (uVar37 == uVar36) {
                  if ((bVar10 & 1) == 0) {
                    lVar32 = (long)plVar38 + 0x11;
                  }
                  else {
                    lVar32 = plVar38[4];
                  }
                  iVar11 = func_0x0eee3000(lVar32,lVar16,uVar36);
                  if (iVar11 == 0) goto LAB_0cc1e130;
                }
              }
              else {
                if (plVar30 <= plVar27) {
                  if (((ulong)plVar27 | (ulong)plVar30) >> 0x20 == 0) {
                    plVar27 = (long *)(((ulong)plVar27 & 0xffffffff) % ((ulong)uVar3 & 0xffffffff));
                  }
                  else {
                    plVar27 = (long *)((ulong)plVar27 % (ulong)plVar30);
                  }
                }
                if (plVar27 != plStack_408) goto LAB_0cc1e150;
              }
              plVar38 = (long *)*plVar38;
              if (plVar38 == (long *)0x0) goto LAB_0cc1e150;
            } while( true );
          }
          uVar37 = (long)plVar30 - 1;
          uStack_380 = uVar37;
          do {
            if ((long *)plVar38[1] == plVar17) {
              bVar10 = *(byte *)(plVar38 + 2);
              if ((bVar10 & 1) == 0) {
                uVar20 = (ulong)(bVar10 >> 1);
              }
              else {
                uVar20 = plVar38[3];
              }
              if (uVar20 == uVar36) {
                if ((bVar10 & 1) == 0) {
                  lVar32 = (long)plVar38 + 0x11;
                }
                else {
                  lVar32 = plVar38[4];
                }
                iVar11 = func_0x0eee3000(lVar32,lVar16,uVar36);
                uVar37 = uStack_380;
                if (iVar11 == 0) goto LAB_0cc1e130;
              }
            }
            else if ((long *)((ulong)plVar38[1] & uVar37) != plStack_408) break;
            plVar38 = (long *)*plVar38;
            if (plVar38 == (long *)0x0) break;
          } while( true );
        }
      }
LAB_0cc1e150:
      puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (puVar22 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      bStack_308 = (byte)puVar22;
      bStack_307 = (byte)((ulong)puVar22 >> 8);
      bStack_306 = (byte)((ulong)puVar22 >> 0x10);
      bStack_305 = (byte)((ulong)puVar22 >> 0x18);
      bStack_304 = (byte)((ulong)puVar22 >> 0x20);
      bStack_303 = (byte)((ulong)puVar22 >> 0x28);
      bStack_302 = (byte)((ulong)puVar22 >> 0x30);
      bStack_301 = (byte)((ulong)puVar22 >> 0x38);
      bStack_300 = (byte)&bStack_3d8;
      bStack_2ff = (byte)((ulong)&bStack_3d8 >> 8);
      bStack_2fe = (byte)((ulong)&bStack_3d8 >> 0x10);
      bStack_2fd = (byte)((ulong)&bStack_3d8 >> 0x18);
      bStack_2fc = (byte)((ulong)&bStack_3d8 >> 0x20);
      bStack_2fb = (byte)((ulong)&bStack_3d8 >> 0x28);
      bStack_2fa = (byte)((ulong)&bStack_3d8 >> 0x30);
      bStack_2f9 = (byte)((ulong)&bStack_3d8 >> 0x38);
      bStack_2f8 = 0;
      cStack_2f7 = 0;
      cStack_2f6 = 0;
      cStack_2f5 = 0;
      uStack_2f4 = 0;
      *puVar22 = 0;
      puVar22[1] = plVar17;
      if ((*(byte *)(plVar28 + 2) & 1) == 0) {
        puVar22[4] = plVar28[4];
        lVar16 = plVar28[3];
        puVar22[2] = plVar28[2];
        puVar22[3] = lVar16;
      }
      else {
        func_0x0412e5e0(puVar22 + 2,plVar28[4],plVar28[3]);
      }
      auVar59 = in_XMM2._4_12_;
      plVar38 = (long *)plVar28[10];
      if (plVar38 == (long *)0x0) {
        puVar22[10] = 0;
      }
      else if (plVar38 == plVar28 + 6) {
        puVar22[10] = puVar22 + 6;
        (**(code **)(*plVar38 + 0x18))();
        auVar59 = in_XMM2._4_12_;
      }
      else {
        uVar15 = (**(code **)(*plVar38 + 0x10))();
        auVar59 = in_XMM2._4_12_;
        puVar22[10] = uVar15;
      }
      bStack_2f8 = 1;
      if (sVar6 < 0) {
        in_XMM2._0_4_ = (float)plVar30;
        in_XMM2._4_12_ = auVar59;
        if (plVar30 != (long *)0x0) goto LAB_0cc1e2a1;
LAB_0cc1e2c0:
        uVar37 = 1;
        if ((long *)0x2 < plVar30) {
          uVar37 = (ulong)(((ulong)plVar30 & (long)plVar30 - 1U) != 0);
        }
        uVar37 = (long)plVar30 * 2 | uVar37;
        fVar61 = (float)func_0x0eee3ab0((float)(auStack_3c8._8_8_ + 1) / fStack_3b8);
        uVar36 = (long)(fVar61 - _DAT_01198778) & (long)fVar61 >> 0x3f | (long)fVar61;
        if (uVar36 < uVar37) {
          uVar36 = uVar37;
        }
        uVar37 = 2;
        if ((uVar36 == 1) || (uVar37 = uVar36, (uVar36 & uVar36 - 1) == 0)) {
          uVar36 = CONCAT26(sStack_3ca,
                            CONCAT15(bStack_3cb,
                                     CONCAT14(bStack_3cc,
                                              CONCAT13(bStack_3cd,
                                                       CONCAT12(bStack_3ce,
                                                                CONCAT11(bStack_3cf,bStack_3d0))))))
          ;
          bVar43 = uVar37 < uVar36;
          if (uVar37 <= uVar36) goto LAB_0cc1e351;
LAB_0cc1e32d:
          func_0x0c476960(&bStack_3d8,uVar37);
        }
        else {
          uVar37 = func_0x0412c3f0();
          uVar36 = CONCAT26(sStack_3ca,
                            CONCAT15(bStack_3cb,
                                     CONCAT14(bStack_3cc,
                                              CONCAT13(bStack_3cd,
                                                       CONCAT12(bStack_3ce,
                                                                CONCAT11(bStack_3cf,bStack_3d0))))))
          ;
          bVar43 = uVar37 < uVar36;
          if (uVar36 < uVar37) goto LAB_0cc1e32d;
LAB_0cc1e351:
          if (bVar43) {
            fVar61 = (float)func_0x0eee3ab0((float)(ulong)auStack_3c8._8_8_ / fStack_3b8);
            uVar20 = (long)(fVar61 - _DAT_01198778) & (long)fVar61 >> 0x3f | (long)fVar61;
            if ((uVar36 < 3) ||
               (uVar29 = uVar36 - (uVar36 >> 1 & 0x5555555555555555),
               uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
               1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar20 = func_0x0412c3f0(uVar20);
            }
            else if (1 < uVar20) {
              lVar16 = 0x3f;
              if (uVar20 - 1 != 0) {
                for (; uVar20 - 1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar20 = 1L << (-((byte)lVar16 ^ 0x3f) & 0x3f);
            }
            if (uVar37 <= uVar20) {
              uVar37 = uVar20;
            }
            if (uVar37 < uVar36) goto LAB_0cc1e32d;
          }
        }
        uVar3 = CONCAT15(bStack_3cb,
                         CONCAT14(bStack_3cc,
                                  CONCAT13(bStack_3cd,
                                           CONCAT12(bStack_3ce,CONCAT11(bStack_3cf,bStack_3d0)))));
        plVar30 = (long *)CONCAT26(sStack_3ca,uVar3);
        if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
          plVar38 = (long *)((ulong)plVar17 & (long)plVar30 - 1U);
        }
        else {
          plVar38 = plVar17;
          if (plVar30 <= plVar17) {
            if (((ulong)plVar17 | (ulong)plVar30) >> 0x20 == 0) {
              plVar38 = (long *)(((ulong)plVar17 & 0xffffffff) % ((ulong)uVar3 & 0xffffffff));
            }
            else {
              plVar38 = (long *)((ulong)plVar17 % (ulong)plVar30);
            }
          }
        }
      }
      else {
        in_XMM2._0_4_ = (float)(long)plVar30;
        in_XMM2._4_12_ = auVar59;
        if (plVar30 == (long *)0x0) goto LAB_0cc1e2c0;
LAB_0cc1e2a1:
        in_XMM2._0_4_ = in_XMM2._0_4_ * fStack_3b8;
        plVar38 = plStack_408;
        if (in_XMM2._0_4_ < (float)(auStack_3c8._8_8_ + 1)) goto LAB_0cc1e2c0;
      }
      lVar16 = CONCAT17(bStack_3d1,
                        CONCAT16(bStack_3d2,
                                 CONCAT15(bStack_3d3,
                                          CONCAT14(bStack_3d4,
                                                   CONCAT13(bStack_3d5,
                                                            CONCAT12(bStack_3d6,
                                                                     CONCAT11(bStack_3d7,bStack_3d8)
                                                                    ))))));
      plVar17 = *(long **)(lVar16 + (long)plVar38 * 8);
      plVar27 = (long *)CONCAT17(bStack_301,
                                 CONCAT16(bStack_302,
                                          CONCAT15(bStack_303,
                                                   CONCAT14(bStack_304,
                                                            CONCAT13(bStack_305,
                                                                     CONCAT12(bStack_306,
                                                                              CONCAT11(bStack_307,
                                                                                       bStack_308)))
                                                           ))));
      if (plVar17 == (long *)0x0) {
        *plVar27 = auStack_3c8._0_8_;
        auStack_3c8._0_8_ = plVar27;
        *(undefined1 **)(lVar16 + (long)plVar38 * 8) = auStack_3c8;
        if (*plVar27 != 0) {
          plVar17 = *(long **)(*plVar27 + 8);
          if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
            *(long **)(lVar16 + ((ulong)plVar17 & (long)plVar30 - 1U) * 8) = plVar27;
          }
          else {
            if (plVar30 <= plVar17) {
              if (((ulong)plVar17 | (ulong)plVar30) >> 0x20 == 0) {
                *(long **)(lVar16 + (((ulong)plVar17 & 0xffffffff) % ((ulong)plVar30 & 0xffffffff))
                                    * 8) = plVar27;
                goto LAB_0cc1e4bf;
              }
              plVar17 = (long *)((ulong)plVar17 % (ulong)plVar30);
            }
            *(long **)(lVar16 + (long)plVar17 * 8) = plVar27;
          }
        }
      }
      else {
        *plVar27 = *plVar17;
        *plVar17 = (long)plVar27;
      }
LAB_0cc1e4bf:
      auStack_3c8._8_8_ = auStack_3c8._8_8_ + 1;
      plVar17 = plVar38;
    }
LAB_0cc1e550:
    lStack_3a8 = plVar13[-1];
    uStack_3b0 = (undefined1)plVar13[-2];
    uStack_3af = (undefined7)((ulong)plVar13[-2] >> 8);
    if (plVar13[-1] != 0) {
      LOCK();
      plVar13 = (long *)(plVar13[-1] + 8);
      *plVar13 = *plVar13 + 1;
      UNLOCK();
    }
    bStack_3e0 = 0xf8;
    bStack_3df = 0x58;
    bStack_3de = 0x3f;
    bStack_3dd = 0xf;
    bStack_3dc = 0;
    bStack_3db = 0;
    bStack_3da = 0;
    bStack_3d9 = 0;
    uStack_3a0 = 0x28;
    uStack_39f = 0xf3f59;
    func_0x04865230(&pbStack_398,auStack_368._0_8_);
    pbVar41 = pbStack_390;
    bVar43 = true;
    pbVar31 = pbStack_398;
    if (pbStack_398 != pbStack_390) {
      do {
        pbVar19 = pbVar31 + 1;
        bVar43 = (*pbVar31 & 1) == 0;
        pbVar18 = *(byte **)(pbVar31 + 0x10);
        if (bVar43) {
          pbVar18 = pbVar19;
        }
        uVar37 = (ulong)(*pbVar31 >> 1);
        if (!bVar43) {
          uVar37 = *(ulong *)(pbVar31 + 8);
        }
        bStack_308 = (byte)pbVar18;
        bStack_307 = (byte)((ulong)pbVar18 >> 8);
        bStack_306 = (byte)((ulong)pbVar18 >> 0x10);
        bStack_305 = (byte)((ulong)pbVar18 >> 0x18);
        bStack_304 = (byte)((ulong)pbVar18 >> 0x20);
        bStack_303 = (byte)((ulong)pbVar18 >> 0x28);
        bStack_302 = (byte)((ulong)pbVar18 >> 0x30);
        bStack_301 = (byte)((ulong)pbVar18 >> 0x38);
        bStack_300 = (byte)uVar37;
        bStack_2ff = (byte)(uVar37 >> 8);
        bStack_2fe = (byte)(uVar37 >> 0x10);
        bStack_2fd = (byte)(uVar37 >> 0x18);
        bStack_2fc = (byte)(uVar37 >> 0x20);
        bStack_2fb = (byte)(uVar37 >> 0x28);
        bStack_2fa = (byte)(uVar37 >> 0x30);
        bStack_2f9 = (byte)(uVar37 >> 0x38);
        bStack_2f8 = 1;
        uStack_350 = (byte *)0x0;
        func_0x0eeb79f0(auStack_b0,&uStack_350);
        if (((ulong)uStack_350 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_350 & 0xff00ffffffffffff) - 8);
        }
        uVar15 = func_0x04864990(auStack_368._0_8_,pbVar31);
        cVar8 = func_0x04864290(uVar15);
        if (cVar8 == '\0') {
          func_0x0714efb0(1,3,6,&UNK_011e37c4);
          func_0x0eeb81b0(auStack_b0);
          bVar43 = false;
          pbVar31 = pbStack_398;
          goto joined_r0x0cc1fb59;
        }
        uVar15 = func_0x04864990(auStack_368._0_8_,pbVar31);
        func_0x04863480(auStack_270,uVar15);
        func_0x0b699270(&bStack_308,auStack_270,auStack_250 + 8,0,&bStack_3e0);
        func_0x04863610(auStack_270);
        if (iStack_2f0 != 3) {
          bVar43 = (*pbVar31 & 1) == 0;
          pbVar18 = *(byte **)(pbVar31 + 0x10);
          if (bVar43) {
            pbVar18 = pbVar19;
          }
          uVar37 = (ulong)(*pbVar31 >> 1);
          if (!bVar43) {
            uVar37 = *(ulong *)(pbVar31 + 8);
          }
          plVar17 = (long *)func_0x04883620(&uStack_350,pbVar18,uVar37);
          plVar13 = (long *)auStack_d0._0_8_;
          if ((long *)auStack_d0._0_8_ != (long *)0x0) {
            uVar37 = auStack_d0._0_8_ - ((ulong)auStack_d0._0_8_ >> 1 & 0x5555555555555555);
            uVar37 = (uVar37 >> 2 & 0x3333333333333333) + (uVar37 & 0x3333333333333333);
            uVar37 = ((uVar37 >> 4) + uVar37 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar37 >> 0x38 < 2) {
              plStack_408 = (long *)(auStack_d0._0_8_ - 1 & (ulong)plVar17);
            }
            else {
              plStack_408 = plVar17;
              if ((ulong)auStack_d0._0_8_ <= plVar17) {
                if (((ulong)plVar17 | auStack_d0._0_8_) >> 0x20 == 0) {
                  plStack_408 = (long *)(((ulong)plVar17 & 0xffffffff) %
                                        (auStack_d0._0_8_ & 0xffffffff));
                }
                else {
                  plStack_408 = (long *)((ulong)plVar17 % (ulong)auStack_d0._0_8_);
                }
              }
            }
            puVar22 = *(undefined8 **)(auStack_e0._8_8_ + (long)plStack_408 * 8);
            if ((puVar22 != (undefined8 *)0x0) &&
               (pbVar18 = (byte *)*puVar22, pbVar18 != (byte *)0x0)) {
              if ((*pbVar31 & 1) == 0) {
                uVar36 = (ulong)(*pbVar31 >> 1);
              }
              else {
                uVar36 = *(ulong *)(pbVar31 + 8);
                pbVar19 = *(byte **)(pbVar31 + 0x10);
              }
              if ((byte)(uVar37 >> 0x38) < 2) {
                uVar37 = auStack_d0._0_8_ - 1;
                uStack_380 = uVar37;
                do {
                  if (*(long **)(pbVar18 + 8) == plVar17) {
                    bVar10 = pbVar18[0x10];
                    if ((bVar10 & 1) == 0) {
                      uVar20 = (ulong)(bVar10 >> 1);
                    }
                    else {
                      uVar20 = *(ulong *)(pbVar18 + 0x18);
                    }
                    if (uVar20 == uVar36) {
                      if ((bVar10 & 1) == 0) {
                        pbVar35 = pbVar18 + 0x11;
                      }
                      else {
                        pbVar35 = *(byte **)(pbVar18 + 0x20);
                      }
                      iVar11 = func_0x0eee3000(pbVar35,pbVar19,uVar36);
                      uVar37 = uStack_380;
                      if (iVar11 == 0) goto LAB_0cc1e5e1;
                    }
                  }
                  else if ((long *)((ulong)*(long **)(pbVar18 + 8) & uVar37) != plStack_408) break;
                  pbVar18 = *(byte **)pbVar18;
                } while (pbVar18 != (byte *)0x0);
              }
              else {
                do {
                  plVar28 = *(long **)(pbVar18 + 8);
                  if (plVar28 == plVar17) {
                    bVar10 = pbVar18[0x10];
                    if ((bVar10 & 1) == 0) {
                      uVar37 = (ulong)(bVar10 >> 1);
                    }
                    else {
                      uVar37 = *(ulong *)(pbVar18 + 0x18);
                    }
                    if (uVar37 == uVar36) {
                      if ((bVar10 & 1) == 0) {
                        pbVar35 = pbVar18 + 0x11;
                      }
                      else {
                        pbVar35 = *(byte **)(pbVar18 + 0x20);
                      }
                      iVar11 = func_0x0eee3000(pbVar35,pbVar19,uVar36);
                      if (iVar11 == 0) goto LAB_0cc1e5e1;
                    }
                  }
                  else {
                    if (plVar13 <= plVar28) {
                      if (((ulong)plVar28 | (ulong)plVar13) >> 0x20 == 0) {
                        plVar28 = (long *)(((ulong)plVar28 & 0xffffffff) %
                                          ((ulong)plVar13 & 0xffffffff));
                      }
                      else {
                        plVar28 = (long *)((ulong)plVar28 % (ulong)plVar13);
                      }
                    }
                    if (plVar28 != plStack_408) break;
                  }
                  pbVar18 = *(byte **)pbVar18;
                } while (pbVar18 != (byte *)0x0);
              }
            }
          }
          pbVar19 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
          if (pbVar19 == (byte *)0x0) {
            func_0x0eec74c0(0xa8,0);
          }
          auVar59 = in_XMM2._4_12_;
          pbStack_348 = auStack_e0 + 8;
          lStack_340 = 0;
          pbVar19[0] = 0;
          pbVar19[1] = 0;
          pbVar19[2] = 0;
          pbVar19[3] = 0;
          pbVar19[4] = 0;
          pbVar19[5] = 0;
          pbVar19[6] = 0;
          pbVar19[7] = 0;
          *(long **)(pbVar19 + 8) = plVar17;
          uStack_350 = pbVar19;
          if ((*pbVar31 & 1) == 0) {
            *(long *)(pbVar19 + 0x20) = *(long *)(pbVar31 + 0x10);
            lVar16 = *(long *)(pbVar31 + 8);
            *(long *)(pbVar19 + 0x10) = *(long *)pbVar31;
            *(long *)(pbVar19 + 0x18) = lVar16;
          }
          else {
            func_0x0412e5e0(pbVar19 + 0x10,*(undefined8 *)(pbVar31 + 0x10),
                            *(undefined8 *)(pbVar31 + 8));
            auVar59 = in_XMM2._4_12_;
          }
          pbVar19[0x28] = 0;
          pbVar19[0x29] = 0;
          pbVar19[0x2a] = 0;
          pbVar19[0x2b] = 0;
          pbVar19[0x2c] = 0;
          pbVar19[0x2d] = 0;
          pbVar19[0x2e] = 0;
          pbVar19[0x2f] = 0;
          pbVar19[0x30] = 0;
          pbVar19[0x31] = 0;
          pbVar19[0x32] = 0;
          pbVar19[0x33] = 0;
          pbVar19[0x34] = 0;
          pbVar19[0x35] = 0;
          pbVar19[0x36] = 0;
          pbVar19[0x37] = 0;
          pbVar19[0x38] = 0;
          pbVar19[0x39] = 0;
          pbVar19[0x3a] = 0;
          pbVar19[0x3b] = 0;
          pbVar19[0x3c] = 0;
          pbVar19[0x3d] = 0;
          pbVar19[0x3e] = 0;
          pbVar19[0x3f] = 0;
          pbVar19[0x40] = 0;
          pbVar19[0x41] = 0;
          pbVar19[0x42] = 0;
          pbVar19[0x43] = 0;
          pbVar19[0x44] = 0;
          pbVar19[0x45] = 0;
          pbVar19[0x46] = 0;
          pbVar19[0x47] = 0;
          pbVar19[0x58] = 0;
          pbVar19[0x59] = 0;
          pbVar19[0x5a] = 0;
          pbVar19[0x5b] = 0;
          pbVar19[0x5c] = 0;
          pbVar19[0x5d] = 0;
          pbVar19[0x5e] = 0;
          pbVar19[0x5f] = 0;
          pbVar19[0x60] = 0;
          pbVar19[0x61] = 0;
          pbVar19[0x62] = 0;
          pbVar19[99] = 0;
          pbVar19[100] = 0;
          pbVar19[0x65] = 0;
          pbVar19[0x66] = 0;
          pbVar19[0x67] = 0;
          pbVar19[0x48] = 0;
          pbVar19[0x49] = 0;
          pbVar19[0x4a] = 0;
          pbVar19[0x4b] = 0;
          pbVar19[0x4c] = 0;
          pbVar19[0x4d] = 0;
          pbVar19[0x4e] = 0;
          pbVar19[0x4f] = 0;
          pbVar19[0x50] = 0;
          pbVar19[0x51] = 0;
          pbVar19[0x52] = 0;
          pbVar19[0x53] = 0;
          pbVar19[0x54] = 0;
          pbVar19[0x55] = 0;
          pbVar19[0x56] = 0;
          pbVar19[0x57] = 0;
          pbVar19[0x68] = 0;
          pbVar19[0x69] = 0;
          pbVar19[0x6a] = 0;
          pbVar19[0x6b] = 0;
          pbVar19[0x6c] = 0;
          pbVar19[0x6d] = 0;
          pbVar19[0x6e] = 0;
          pbVar19[0x6f] = 0;
          pbVar19[0x70] = 0;
          pbVar19[0x71] = 0;
          pbVar19[0x72] = 0;
          pbVar19[0x73] = 0;
          pbVar19[0x74] = 0;
          pbVar19[0x75] = 0;
          pbVar19[0x76] = 0;
          pbVar19[0x77] = 0;
          pbVar19[0x28] = 0;
          pbVar19[0x29] = 0;
          pbVar19[0x2a] = 0x80;
          pbVar19[0x2b] = 0x3f;
          pbVar19[0x40] = 3;
          pbVar19[0x41] = 0;
          pbVar19[0x42] = 0;
          pbVar19[0x43] = 0;
          pbVar19[0x52] = 0;
          pbVar19[0x53] = 0;
          pbVar19[0x54] = 0;
          pbVar19[0x55] = 0;
          pbVar19[0x56] = 0;
          pbVar19[0x57] = 0;
          pbVar19[0x58] = 0;
          pbVar19[0x59] = 0;
          pbVar19[0x5a] = 0;
          pbVar19[0x5b] = 0;
          pbVar19[0x5c] = 0;
          pbVar19[0x5d] = 0;
          pbVar19[0x5e] = 0;
          pbVar19[0x5f] = 0;
          pbVar19[0x60] = 0;
          pbVar19[0x61] = 0;
          pbVar19[0x78] = 0;
          pbVar19[0x79] = 0;
          pbVar19[0x7a] = 0;
          pbVar19[0x7b] = 0;
          pbVar19[0x7c] = 0;
          pbVar19[0x7d] = 0;
          pbVar19[0x7e] = 0;
          pbVar19[0x7f] = 0;
          pbVar19[0x80] = 0;
          pbVar19[0x81] = 0;
          pbVar19[0x82] = 0;
          pbVar19[0x83] = 0;
          pbVar19[0x84] = 0;
          pbVar19[0x85] = 0;
          pbVar19[0x86] = 0;
          pbVar19[0x87] = 0;
          pbVar19[0x88] = 0;
          pbVar19[0x89] = 0;
          pbVar19[0x8a] = 0;
          pbVar19[0x8b] = 0;
          pbVar19[0x8c] = 0;
          pbVar19[0x8d] = 0;
          pbVar19[0x8e] = 0;
          pbVar19[0x8f] = 0;
          pbVar19[0x90] = 0;
          pbVar19[0x91] = 0;
          pbVar19[0x92] = 0;
          pbVar19[0x93] = 0;
          pbVar19[0x94] = 0;
          pbVar19[0x95] = 0;
          pbVar19[0x96] = 0;
          pbVar19[0x97] = 0;
          pbVar19[0x98] = 0;
          pbVar19[0x99] = 0;
          pbVar19[0x9a] = 0;
          pbVar19[0x9b] = 0;
          pbVar19[0x9c] = 0;
          pbVar19[0x9d] = 0;
          pbVar19[0x9e] = 0;
          pbVar19[0x9f] = 0;
          pbVar19[0xa0] = 0;
          pbVar19[0xa1] = 0;
          pbVar19[0xa2] = 0;
          pbVar19[0xa3] = 0;
          pbVar19[0xa4] = 0;
          pbVar19[0xa5] = 0;
          pbVar19[0xa6] = 0;
          pbVar19[0xa7] = 0;
          lStack_340 = CONCAT71(lStack_340._1_7_,1);
          if ((long)plVar13 < 0) {
            in_XMM2._0_4_ = (float)plVar13;
            in_XMM2._4_12_ = auVar59;
            if (plVar13 != (long *)0x0) goto LAB_0cc1eac4;
LAB_0cc1eae0:
            uVar37 = 1;
            if ((long *)0x2 < plVar13) {
              uVar37 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
            }
            uVar37 = (long)plVar13 * 2 | uVar37;
            fVar61 = (float)func_0x0eee3ab0((float)(uStack_c0 + 1) / fStack_b8);
            uVar36 = (long)(fVar61 - _DAT_01198778) & (long)fVar61 >> 0x3f | (long)fVar61;
            if (uVar36 < uVar37) {
              uVar36 = uVar37;
            }
            uVar37 = 2;
            if ((uVar36 == 1) || (uVar37 = uVar36, (uVar36 & uVar36 - 1) == 0)) {
              bVar43 = uVar37 < (ulong)auStack_d0._0_8_;
              uVar36 = auStack_d0._0_8_;
              if (uVar37 <= (ulong)auStack_d0._0_8_) goto LAB_0cc1eb7b;
LAB_0cc1eb51:
              func_0x0c0ddb40(auStack_e0 + 8,uVar37);
            }
            else {
              uVar37 = func_0x0412c3f0();
              bVar43 = uVar37 < (ulong)auStack_d0._0_8_;
              uVar36 = auStack_d0._0_8_;
              if ((ulong)auStack_d0._0_8_ < uVar37) goto LAB_0cc1eb51;
LAB_0cc1eb7b:
              if (bVar43) {
                fVar61 = (float)func_0x0eee3ab0((float)uStack_c0 / fStack_b8);
                uVar20 = (long)(fVar61 - _DAT_01198778) & (long)fVar61 >> 0x3f | (long)fVar61;
                if ((uVar36 < 3) ||
                   (uVar29 = uVar36 - (uVar36 >> 1 & 0x5555555555555555),
                   uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
                   1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  uVar20 = func_0x0412c3f0(uVar20);
                }
                else if (1 < uVar20) {
                  lVar16 = 0x3f;
                  if (uVar20 - 1 != 0) {
                    for (; uVar20 - 1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  uVar20 = 1L << (-((byte)lVar16 ^ 0x3f) & 0x3f);
                }
                if (uVar37 <= uVar20) {
                  uVar37 = uVar20;
                }
                if (uVar37 < uVar36) goto LAB_0cc1eb51;
              }
            }
            plVar13 = (long *)auStack_d0._0_8_;
            if ((auStack_d0._0_8_ & auStack_d0._0_8_ - 1) == 0) {
              plVar28 = (long *)((ulong)plVar17 & auStack_d0._0_8_ - 1);
            }
            else {
              plVar28 = plVar17;
              if ((ulong)auStack_d0._0_8_ <= plVar17) {
                if (((ulong)plVar17 | auStack_d0._0_8_) >> 0x20 == 0) {
                  plVar28 = (long *)(((ulong)plVar17 & 0xffffffff) % (auStack_d0._0_8_ & 0xffffffff)
                                    );
                }
                else {
                  plVar28 = (long *)((ulong)plVar17 % (ulong)auStack_d0._0_8_);
                }
              }
            }
          }
          else {
            in_XMM2._0_4_ = (float)(long)plVar13;
            in_XMM2._4_12_ = auVar59;
            if (plVar13 == (long *)0x0) goto LAB_0cc1eae0;
LAB_0cc1eac4:
            in_XMM2._0_4_ = in_XMM2._0_4_ * fStack_b8;
            plVar28 = plStack_408;
            if (in_XMM2._0_4_ < (float)(uStack_c0 + 1)) goto LAB_0cc1eae0;
          }
          plVar17 = *(long **)(auStack_e0._8_8_ + (long)plVar28 * 8);
          if (plVar17 == (long *)0x0) {
            *(undefined8 *)uStack_350 = auStack_d0._8_8_;
            auStack_d0._8_8_ = uStack_350;
            *(undefined1 **)(auStack_e0._8_8_ + (long)plVar28 * 8) = auStack_d0 + 8;
            if (*(long *)uStack_350 != 0) {
              plVar17 = *(long **)(*(long *)uStack_350 + 8);
              if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
                *(byte **)(auStack_e0._8_8_ + ((ulong)plVar17 & (long)plVar13 - 1U) * 8) =
                     uStack_350;
              }
              else {
                if (plVar13 <= plVar17) {
                  if (((ulong)plVar17 | (ulong)plVar13) >> 0x20 == 0) {
                    *(byte **)(auStack_e0._8_8_ +
                              (((ulong)plVar17 & 0xffffffff) % ((ulong)plVar13 & 0xffffffff)) * 8) =
                         uStack_350;
                    goto LAB_0cc1e5d9;
                  }
                  plVar17 = (long *)((ulong)plVar17 % (ulong)plVar13);
                }
                *(byte **)(auStack_e0._8_8_ + (long)plVar17 * 8) = uStack_350;
              }
            }
          }
          else {
            *(long *)uStack_350 = *plVar17;
            *plVar17 = (long)uStack_350;
          }
LAB_0cc1e5d9:
          uStack_c0 = uStack_c0 + 1;
          plVar17 = plVar28;
          pbVar18 = uStack_350;
LAB_0cc1e5e1:
          func_0x0cc30750(pbVar18 + 0x28,&bStack_308);
        }
        func_0x0b69a770(&bStack_308);
        func_0x0eeb81b0(auStack_b0);
        pbVar31 = pbVar31 + 0x18;
      } while (pbVar31 != pbVar41);
      bVar43 = true;
      pbVar31 = pbStack_398;
    }
joined_r0x0cc1fb59:
    pbStack_398 = pbVar31;
    pbVar41 = pbStack_390;
    if (pbVar31 != (byte *)0x0) {
      for (; pbVar31 != pbVar41; pbVar41 = pbVar41 + -0x18) {
        if ((pbVar41[-0x18] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(pbVar41 + -8),
                          *(ulong *)(pbVar41 + -0x18) & 0xfffffffffffffffe);
        }
      }
      pbStack_390 = pbVar31;
      func_0x0412a280(pbStack_398,lStack_388 - (long)pbStack_398);
    }
    func_0x0cc38910(&bStack_3e0);
    func_0x0eeb81b0(&pbStack_288);
    if (bVar43) {
      cVar8 = func_0x0551ca70(param_3 + 7,&UNK_0f3f6808);
      if (cVar8 != '\0') {
        uVar15 = auStack_100._0_8_;
        if (auStack_110._8_8_ == auStack_100._0_8_) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          plVar13 = (long *)auStack_110._8_8_;
          do {
            pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
            bVar10 = *pbVar31;
            if ((bVar10 & 1) == 0) {
              uVar37 = (ulong)(bVar10 >> 1);
              if ((DAT_0f706ea8 & 1) != 0) goto LAB_0cc1fc91;
LAB_0cc1fc66:
              if (uVar37 == DAT_0f706ea8 >> 1) {
LAB_0cc1fc9d:
                if ((bVar10 & 1) == 0) {
                  pbVar31 = pbVar31 + 1;
                }
                else {
                  pbVar31 = *(byte **)(pbVar31 + 0x10);
                }
                uVar14 = 0xf706ea9;
                if ((DAT_0f706ea8 & 1) != 0) {
                  uVar14 = _DAT_0f706eb8;
                }
                iVar11 = func_0x0eee3000(pbVar31,uVar14);
                if (iVar11 == 0) {
                  lVar16 = *plVar13;
                  break;
                }
              }
            }
            else {
              uVar37 = *(ulong *)(pbVar31 + 8);
              if ((DAT_0f706ea8 & 1) == 0) goto LAB_0cc1fc66;
LAB_0cc1fc91:
              if (uVar37 == _DAT_0f706eb0) goto LAB_0cc1fc9d;
            }
            plVar13 = plVar13 + 2;
          } while (plVar13 != (long *)uVar15);
        }
        bStack_308 = 0x26;
        bStack_307 = DAT_0131c4c6;
        bStack_306 = DAT_0131c4c6._1_1_;
        bStack_305 = DAT_0131c4c6._2_1_;
        bStack_304 = DAT_0131c4c6._3_1_;
        bStack_303 = DAT_0131c4c6._4_1_;
        bStack_302 = DAT_0131c4c6._5_1_;
        bStack_301 = DAT_0131c4c6._6_1_;
        bStack_300 = DAT_0131c4c6._7_1_;
        bStack_2ff = DAT_0131c4c6._8_1_;
        bStack_2fe = DAT_0131c4c6._9_1_;
        bStack_2fd = DAT_0131c4c6._10_1_;
        bStack_2fc = DAT_0131c4c6._11_1_;
        bStack_2fb = DAT_0131c4c6._12_1_;
        bStack_2fa = DAT_0131c4c6._13_1_;
        bStack_2f9 = DAT_0131c4c6._14_1_;
        bStack_2f8 = 99;
        cStack_2f7 = 'u';
        cStack_2f6 = 'b';
        cStack_2f5 = 'e';
        uVar15 = auStack_100._0_8_;
        for (plVar13 = (long *)auStack_110._8_8_; uVar39 = (undefined7)((ulong)plVar17 >> 8),
            plVar13 != (long *)uVar15; plVar13 = plVar13 + 2) {
          pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
          bVar10 = *pbVar31;
          if ((bVar10 & 1) != 0) {
            if (*(long *)(pbVar31 + 8) != 0x13) goto LAB_0cc1fef6;
LAB_0cc1ff2a:
            if ((bVar10 & 1) == 0) {
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar31 = *(byte **)(pbVar31 + 0x10);
            }
            auVar60 = *(undefined1 (*) [16])(pbVar31 + 3);
            auVar55[0] = -(bStack_307 == *pbVar31);
            auVar55[1] = -(bStack_306 == pbVar31[1]);
            auVar55[2] = -(bStack_305 == pbVar31[2]);
            auVar55[3] = -(bStack_304 == pbVar31[3]);
            auVar55[4] = -(bStack_303 == pbVar31[4]);
            auVar55[5] = -(bStack_302 == pbVar31[5]);
            auVar55[6] = -(bStack_301 == pbVar31[6]);
            auVar55[7] = -(bStack_300 == pbVar31[7]);
            auVar55[8] = -(bStack_2ff == pbVar31[8]);
            auVar55[9] = -(bStack_2fe == pbVar31[9]);
            auVar55[10] = -(bStack_2fd == pbVar31[10]);
            auVar55[0xb] = -(bStack_2fc == pbVar31[0xb]);
            auVar55[0xc] = -(bStack_2fb == pbVar31[0xc]);
            auVar55[0xd] = -(bStack_2fa == pbVar31[0xd]);
            auVar55[0xe] = -(bStack_2f9 == pbVar31[0xe]);
            auVar55[0xf] = -(bStack_2f8 == pbVar31[0xf]);
            auVar47[0] = -(bStack_304 == auVar60[0]);
            auVar47[1] = -(bStack_303 == auVar60[1]);
            auVar47[2] = -(bStack_302 == auVar60[2]);
            auVar47[3] = -(bStack_301 == auVar60[3]);
            auVar47[4] = -(bStack_300 == auVar60[4]);
            auVar47[5] = -(bStack_2ff == auVar60[5]);
            auVar47[6] = -(bStack_2fe == auVar60[6]);
            auVar47[7] = -(bStack_2fd == auVar60[7]);
            auVar47[8] = -(bStack_2fc == auVar60[8]);
            auVar47[9] = -(bStack_2fb == auVar60[9]);
            auVar47[10] = -(bStack_2fa == auVar60[10]);
            auVar47[0xb] = -(bStack_2f9 == auVar60[0xb]);
            auVar47[0xc] = -(bStack_2f8 == auVar60[0xc]);
            auVar47[0xd] = -(cStack_2f7 == auVar60[0xd]);
            auVar47[0xe] = -(cStack_2f6 == auVar60[0xe]);
            auVar47[0xf] = -(cStack_2f5 == auVar60[0xf]);
            auVar47 = auVar47 & auVar55;
            if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0cc1fef6;
            uVar37 = CONCAT71(uVar39,*plVar13 == 0);
            if ((lVar16 == 0) || (*plVar13 == 0)) goto joined_r0x0cc20095;
            plVar13 = *(long **)(lVar16 + 0x20);
            if (plVar13 != (long *)0x0) {
              bVar10 = 1;
              do {
                bVar10 = bVar10 & *(byte *)((long)plVar13 + 0x54) < 0x12 &
                         (byte)(0x20220 >> (*(byte *)((long)plVar13 + 0x54) & 0x1f));
                plVar13 = (long *)*plVar13;
              } while (plVar13 != (long *)0x0);
              uVar37 = 0;
              bVar43 = false;
              if (bVar10 != 0) goto LAB_0cc200a0;
              goto LAB_0cc20185;
            }
            uVar37 = 0;
            goto LAB_0cc200a0;
          }
          if (bVar10 >> 1 == 0x13) goto LAB_0cc1ff2a;
LAB_0cc1fef6:
        }
        uVar37 = CONCAT71(uVar39,1);
joined_r0x0cc20095:
        if (lVar16 == 0) {
LAB_0cc200a0:
          puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar22 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
          *puVar22 = &UNK_0f3f7fb8;
          puVar23 = puVar22 + 3;
          *(undefined1 *)(puVar22 + 4) = 1;
          puVar22[3] = &UNK_0f4033e0;
          *(undefined2 *)((long)puVar22 + 0x21) = 0x101;
          bStack_308 = (byte)puVar23;
          bStack_307 = (byte)((ulong)puVar23 >> 8);
          bStack_306 = (byte)((ulong)puVar23 >> 0x10);
          bStack_305 = (byte)((ulong)puVar23 >> 0x18);
          bStack_304 = (byte)((ulong)puVar23 >> 0x20);
          bStack_303 = (byte)((ulong)puVar23 >> 0x28);
          bStack_302 = (byte)((ulong)puVar23 >> 0x30);
          bStack_301 = (byte)((ulong)puVar23 >> 0x38);
          bStack_300 = (byte)puVar22;
          bStack_2ff = (byte)((ulong)puVar22 >> 8);
          bStack_2fe = (byte)((ulong)puVar22 >> 0x10);
          bStack_2fd = (byte)((ulong)puVar22 >> 0x18);
          bStack_2fc = (byte)((ulong)puVar22 >> 0x20);
          bStack_2fb = (byte)((ulong)puVar22 >> 0x28);
          bStack_2fa = (byte)((ulong)puVar22 >> 0x30);
          bStack_2f9 = (byte)((ulong)puVar22 >> 0x38);
          LOCK();
          puVar22[1] = puVar22[1] + 1;
          UNLOCK();
          bStack_3e0 = bStack_308;
          bStack_3df = bStack_307;
          bStack_3de = bStack_306;
          bStack_3dd = bStack_305;
          bStack_3dc = bStack_304;
          bStack_3db = bStack_303;
          bStack_3da = bStack_302;
          bStack_3d9 = bStack_301;
          bStack_3d8 = bStack_300;
          bStack_3d7 = bStack_2ff;
          bStack_3d6 = bStack_2fe;
          bStack_3d5 = bStack_2fd;
          bStack_3d4 = bStack_2fc;
          bStack_3d3 = bStack_2fb;
          bStack_3d2 = bStack_2fa;
          bStack_3d1 = bStack_2f9;
          func_0x0cbeb690(auStack_148,&bStack_3e0);
          plVar13 = (long *)CONCAT17(bStack_3d1,
                                     CONCAT16(bStack_3d2,
                                              CONCAT15(bStack_3d3,
                                                       CONCAT14(bStack_3d4,
                                                                CONCAT13(bStack_3d5,
                                                                         CONCAT12(bStack_3d6,
                                                                                  CONCAT11(
                                                  bStack_3d7,bStack_3d8)))))));
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar28 = plVar13 + 1;
            lVar32 = *plVar28;
            *plVar28 = *plVar28 + -1;
            UNLOCK();
            if (lVar32 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              func_0x0412c2d0(plVar13);
            }
          }
          plVar13 = (long *)CONCAT17(bStack_2f9,
                                     CONCAT16(bStack_2fa,
                                              CONCAT15(bStack_2fb,
                                                       CONCAT14(bStack_2fc,
                                                                CONCAT13(bStack_2fd,
                                                                         CONCAT12(bStack_2fe,
                                                                                  CONCAT11(
                                                  bStack_2ff,bStack_300)))))));
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar28 = plVar13 + 1;
            lVar32 = *plVar28;
            *plVar28 = *plVar28 + -1;
            UNLOCK();
            if (lVar32 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              func_0x0412c2d0(plVar13);
            }
          }
          bVar43 = true;
        }
        else {
          bVar43 = false;
        }
LAB_0cc20185:
        uVar15 = auStack_f0._8_8_;
        if (auStack_f0._0_8_ != auStack_f0._8_8_) {
          auStack_368._0_4_ = (int)uVar37;
          lVar32 = auStack_f0._0_8_;
          do {
            plVar28 = *(long **)(lVar32 + 0x58);
            for (plVar13 = *(long **)(lVar32 + 0x50); lVar42 = lVar16, plVar13 != plVar28;
                plVar13 = plVar13 + 2) {
              pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
              bVar10 = *pbVar31;
              if ((bVar10 & 1) == 0) {
                uVar36 = (ulong)(bVar10 >> 1);
                if ((DAT_0f706ea8 & 1) != 0) goto LAB_0cc20251;
LAB_0cc20226:
                if (uVar36 == DAT_0f706ea8 >> 1) {
LAB_0cc2025d:
                  if ((bVar10 & 1) == 0) {
                    pbVar31 = pbVar31 + 1;
                  }
                  else {
                    pbVar31 = *(byte **)(pbVar31 + 0x10);
                  }
                  uVar14 = 0xf706ea9;
                  if ((DAT_0f706ea8 & 1) != 0) {
                    uVar14 = _DAT_0f706eb8;
                  }
                  iVar11 = func_0x0eee3000(pbVar31,uVar14);
                  if (iVar11 == 0) {
                    lVar42 = *plVar13;
                    if (*plVar13 == 0) {
                      lVar42 = lVar16;
                    }
                    break;
                  }
                }
              }
              else {
                uVar36 = *(ulong *)(pbVar31 + 8);
                if ((DAT_0f706ea8 & 1) == 0) goto LAB_0cc20226;
LAB_0cc20251:
                if (uVar36 == _DAT_0f706eb0) goto LAB_0cc2025d;
              }
            }
            if ((char)uVar37 == '\0') {
              bVar44 = false;
              if (lVar42 != 0) goto LAB_0cc203ad;
              bVar40 = true;
LAB_0cc203f3:
              if (bVar43 != bVar40) {
LAB_0cc203fe:
                pbVar31 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                if (pbVar31 == (byte *)0x0) {
                  func_0x0eec74c0(0x28,0);
                }
                *(undefined1 (*) [16])(pbVar31 + 8) = (undefined1  [16])0x0;
                *(undefined **)pbVar31 = &UNK_0f3f7fb8;
                uStack_350 = pbVar31 + 0x18;
                pbVar31[0x20] = 1;
                *(undefined **)(pbVar31 + 0x18) = &UNK_0f4033e0;
                *(ushort *)(pbVar31 + 0x21) = bVar40 | 0x100;
                bStack_308 = (byte)uStack_350;
                bStack_307 = (byte)((ulong)uStack_350 >> 8);
                bStack_306 = (byte)((ulong)uStack_350 >> 0x10);
                bStack_305 = (byte)((ulong)uStack_350 >> 0x18);
                bStack_304 = (byte)((ulong)uStack_350 >> 0x20);
                bStack_303 = (byte)((ulong)uStack_350 >> 0x28);
                bStack_302 = (byte)((ulong)uStack_350 >> 0x30);
                bStack_301 = (byte)((ulong)uStack_350 >> 0x38);
                bStack_300 = (byte)pbVar31;
                bStack_2ff = (byte)((ulong)pbVar31 >> 8);
                bStack_2fe = (byte)((ulong)pbVar31 >> 0x10);
                bStack_2fd = (byte)((ulong)pbVar31 >> 0x18);
                bStack_2fc = (byte)((ulong)pbVar31 >> 0x20);
                bStack_2fb = (byte)((ulong)pbVar31 >> 0x28);
                bStack_2fa = (byte)((ulong)pbVar31 >> 0x30);
                bStack_2f9 = (byte)((ulong)pbVar31 >> 0x38);
                LOCK();
                *(long *)(pbVar31 + 8) = *(long *)(pbVar31 + 8) + 1;
                UNLOCK();
                pbStack_348 = pbVar31;
                func_0x0cbeb690(lVar32 + 0x10,&uStack_350);
                pbVar31 = pbStack_348;
                if (pbStack_348 != (byte *)0x0) {
                  LOCK();
                  pbVar41 = pbStack_348 + 8;
                  lVar42 = *(long *)pbVar41;
                  *(long *)pbVar41 = *(long *)pbVar41 + -1;
                  UNLOCK();
                  if (lVar42 == 0) {
                    (**(code **)(*(long *)pbStack_348 + 0x10))(pbStack_348);
                    func_0x0412c2d0(pbVar31);
                  }
                }
                plVar13 = (long *)CONCAT17(bStack_2f9,
                                           CONCAT16(bStack_2fa,
                                                    CONCAT15(bStack_2fb,
                                                             CONCAT14(bStack_2fc,
                                                                      CONCAT13(bStack_2fd,
                                                                               CONCAT12(bStack_2fe,
                                                                                        CONCAT11(
                                                  bStack_2ff,bStack_300)))))));
                if (plVar13 != (long *)0x0) {
                  LOCK();
                  plVar28 = plVar13 + 1;
                  lVar42 = *plVar28;
                  *plVar28 = *plVar28 + -1;
                  UNLOCK();
                  if (lVar42 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    func_0x0412c2d0(plVar13);
                  }
                }
              }
            }
            else {
              bStack_308 = 0x26;
              bStack_307 = DAT_0131c4c6;
              bStack_306 = DAT_0131c4c6._1_1_;
              bStack_305 = DAT_0131c4c6._2_1_;
              bStack_304 = DAT_0131c4c6._3_1_;
              bStack_303 = DAT_0131c4c6._4_1_;
              bStack_302 = DAT_0131c4c6._5_1_;
              bStack_301 = DAT_0131c4c6._6_1_;
              bStack_300 = DAT_0131c4c6._7_1_;
              bStack_2ff = DAT_0131c4c6._8_1_;
              bStack_2fe = DAT_0131c4c6._9_1_;
              bStack_2fd = DAT_0131c4c6._10_1_;
              bStack_2fc = DAT_0131c4c6._11_1_;
              bStack_2fb = DAT_0131c4c6._12_1_;
              bStack_2fa = DAT_0131c4c6._13_1_;
              bStack_2f9 = DAT_0131c4c6._14_1_;
              bStack_2f8 = 99;
              cStack_2f7 = 'u';
              cStack_2f6 = 'b';
              cStack_2f5 = 'e';
              plVar28 = *(long **)(lVar32 + 0x58);
              bVar44 = true;
              for (plVar13 = *(long **)(lVar32 + 0x50); plVar13 != plVar28; plVar13 = plVar13 + 2) {
                pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
                bVar10 = *pbVar31;
                if ((bVar10 & 1) == 0) {
                  if (bVar10 >> 1 == 0x13) goto LAB_0cc2035a;
                }
                else if (*(long *)(pbVar31 + 8) == 0x13) {
LAB_0cc2035a:
                  if ((bVar10 & 1) == 0) {
                    pbVar31 = pbVar31 + 1;
                  }
                  else {
                    pbVar31 = *(byte **)(pbVar31 + 0x10);
                  }
                  auVar60 = *(undefined1 (*) [16])(pbVar31 + 3);
                  auVar56[0] = -(bStack_307 == *pbVar31);
                  auVar56[1] = -(bStack_306 == pbVar31[1]);
                  auVar56[2] = -(bStack_305 == pbVar31[2]);
                  auVar56[3] = -(bStack_304 == pbVar31[3]);
                  auVar56[4] = -(bStack_303 == pbVar31[4]);
                  auVar56[5] = -(bStack_302 == pbVar31[5]);
                  auVar56[6] = -(bStack_301 == pbVar31[6]);
                  auVar56[7] = -(bStack_300 == pbVar31[7]);
                  auVar56[8] = -(bStack_2ff == pbVar31[8]);
                  auVar56[9] = -(bStack_2fe == pbVar31[9]);
                  auVar56[10] = -(bStack_2fd == pbVar31[10]);
                  auVar56[0xb] = -(bStack_2fc == pbVar31[0xb]);
                  auVar56[0xc] = -(bStack_2fb == pbVar31[0xc]);
                  auVar56[0xd] = -(bStack_2fa == pbVar31[0xd]);
                  auVar56[0xe] = -(bStack_2f9 == pbVar31[0xe]);
                  auVar56[0xf] = -(bStack_2f8 == pbVar31[0xf]);
                  auVar48[0] = -(bStack_304 == auVar60[0]);
                  auVar48[1] = -(bStack_303 == auVar60[1]);
                  auVar48[2] = -(bStack_302 == auVar60[2]);
                  auVar48[3] = -(bStack_301 == auVar60[3]);
                  auVar48[4] = -(bStack_300 == auVar60[4]);
                  auVar48[5] = -(bStack_2ff == auVar60[5]);
                  auVar48[6] = -(bStack_2fe == auVar60[6]);
                  auVar48[7] = -(bStack_2fd == auVar60[7]);
                  auVar48[8] = -(bStack_2fc == auVar60[8]);
                  auVar48[9] = -(bStack_2fb == auVar60[9]);
                  auVar48[10] = -(bStack_2fa == auVar60[10]);
                  auVar48[0xb] = -(bStack_2f9 == auVar60[0xb]);
                  auVar48[0xc] = -(bStack_2f8 == auVar60[0xc]);
                  auVar48[0xd] = -(cStack_2f7 == auVar60[0xd]);
                  auVar48[0xe] = -(cStack_2f6 == auVar60[0xe]);
                  auVar48[0xf] = -(cStack_2f5 == auVar60[0xf]);
                  auVar48 = auVar48 & auVar56;
                  if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) == 0xffff) {
                    bVar44 = *plVar13 == 0;
                    break;
                  }
                }
              }
              uVar37 = (ulong)(uint)auStack_368._0_4_;
              bVar40 = true;
              if (lVar42 == 0) goto LAB_0cc203f3;
LAB_0cc203ad:
              bVar40 = lVar42 == 0;
              if (bVar44) goto LAB_0cc203f3;
              plVar13 = *(long **)(lVar42 + 0x20);
              if (plVar13 != (long *)0x0) {
                bVar40 = true;
                do {
                  bVar40 = (bool)(*(byte *)((long)plVar13 + 0x54) < 0x12 & bVar40 &
                                 (byte)(0x20220 >> (*(byte *)((long)plVar13 + 0x54) & 0x1f)));
                  plVar13 = (long *)*plVar13;
                } while (plVar13 != (long *)0x0);
                goto LAB_0cc203f3;
              }
              bVar40 = true;
              if (bVar43 == false) goto LAB_0cc203fe;
            }
            lVar32 = lVar32 + 0x68;
          } while (lVar32 != uVar15);
        }
      }
      auStack_2e8._0_8_ = _DAT_0f3f58e0;
      bStack_2f8 = (byte)_DAT_0f3f58d0;
      cStack_2f7 = (char)((ulong)_DAT_0f3f58d0 >> 8);
      cStack_2f6 = (char)((ulong)_DAT_0f3f58d0 >> 0x10);
      cStack_2f5 = (char)((ulong)_DAT_0f3f58d0 >> 0x18);
      uStack_2f4 = (undefined4)((ulong)_DAT_0f3f58d0 >> 0x20);
      iStack_2f0 = (int)_UNK_0f3f58d8;
      uStack_2ec = (undefined4)((ulong)_UNK_0f3f58d8 >> 0x20);
      bStack_308 = (byte)_DAT_0f3f58c0;
      bStack_307 = (byte)((ulong)_DAT_0f3f58c0 >> 8);
      bStack_306 = (byte)((ulong)_DAT_0f3f58c0 >> 0x10);
      bStack_305 = (byte)((ulong)_DAT_0f3f58c0 >> 0x18);
      bStack_304 = (byte)((ulong)_DAT_0f3f58c0 >> 0x20);
      bStack_303 = (byte)((ulong)_DAT_0f3f58c0 >> 0x28);
      bStack_302 = (byte)((ulong)_DAT_0f3f58c0 >> 0x30);
      bStack_301 = (byte)((ulong)_DAT_0f3f58c0 >> 0x38);
      bStack_300 = (byte)_UNK_0f3f58c8;
      bStack_2ff = (byte)((ulong)_UNK_0f3f58c8 >> 8);
      bStack_2fe = (byte)((ulong)_UNK_0f3f58c8 >> 0x10);
      bStack_2fd = (byte)((ulong)_UNK_0f3f58c8 >> 0x18);
      bStack_2fc = (byte)((ulong)_UNK_0f3f58c8 >> 0x20);
      bStack_2fb = (byte)((ulong)_UNK_0f3f58c8 >> 0x28);
      bStack_2fa = (byte)((ulong)_UNK_0f3f58c8 >> 0x30);
      bStack_2f9 = (byte)((ulong)_UNK_0f3f58c8 >> 0x38);
      cVar8 = func_0x0551ca70(auStack_228,&bStack_308);
      if (cVar8 == '\0') {
        uVar15 = auStack_100._0_8_;
        bVar43 = true;
        for (plVar13 = (long *)auStack_110._8_8_; plVar13 != (long *)uVar15;
            plVar13 = (long *)((long)plVar13 + 0x10)) {
          pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
          bVar10 = *pbVar31;
          if ((bVar10 & 1) == 0) {
            uVar37 = (ulong)(bVar10 >> 1);
            if ((DAT_0f706ea8 & 1) != 0) goto LAB_0cc20601;
LAB_0cc205d6:
            if (uVar37 == DAT_0f706ea8 >> 1) {
LAB_0cc2060d:
              if ((bVar10 & 1) == 0) {
                pbVar31 = pbVar31 + 1;
              }
              else {
                pbVar31 = *(byte **)(pbVar31 + 0x10);
              }
              uVar14 = 0xf706ea9;
              if ((DAT_0f706ea8 & 1) != 0) {
                uVar14 = _DAT_0f706eb8;
              }
              iVar11 = func_0x0eee3000(pbVar31,uVar14);
              if (iVar11 == 0) {
                bVar43 = *plVar13 == 0;
                break;
              }
            }
          }
          else {
            uVar37 = *(ulong *)(pbVar31 + 8);
            if ((DAT_0f706ea8 & 1) == 0) goto LAB_0cc205d6;
LAB_0cc20601:
            if (uVar37 == _DAT_0f706eb0) goto LAB_0cc2060d;
          }
        }
        uVar15 = auStack_100._0_8_;
        for (plVar13 = (long *)auStack_110._8_8_; plVar13 != (long *)uVar15; plVar13 = plVar13 + 2)
        {
          pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
          bVar10 = *pbVar31;
          if ((bVar10 & 1) == 0) {
            if (bVar10 >> 1 == 0x12) goto LAB_0cc206da;
          }
          else if (*(long *)(pbVar31 + 8) == 0x12) {
LAB_0cc206da:
            if ((bVar10 & 1) == 0) {
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar31 = *(byte **)(pbVar31 + 0x10);
            }
            auVar52[0] = -(DAT_01d64281 == *pbVar31);
            auVar52[1] = -(UNK_01d64282 == pbVar31[1]);
            auVar52[2] = -(UNK_01d64283 == pbVar31[2]);
            auVar52[3] = -(UNK_01d64284 == pbVar31[3]);
            auVar52[4] = -(UNK_01d64285 == pbVar31[4]);
            auVar52[5] = -(UNK_01d64286 == pbVar31[5]);
            auVar52[6] = -(UNK_01d64287 == pbVar31[6]);
            auVar52[7] = -(UNK_01d64288 == pbVar31[7]);
            auVar52[8] = -(UNK_01d64289 == pbVar31[8]);
            auVar52[9] = -(UNK_01d6428a == pbVar31[9]);
            auVar52[10] = -(UNK_01d6428b == pbVar31[10]);
            auVar52[0xb] = -(UNK_01d6428c == pbVar31[0xb]);
            auVar52[0xc] = -(UNK_01d6428d == pbVar31[0xc]);
            auVar52[0xd] = -(UNK_01d6428e == pbVar31[0xd]);
            auVar52[0xe] = -(UNK_01d6428f == pbVar31[0xe]);
            auVar52[0xf] = -(DAT_01d64290 == pbVar31[0xf]);
            auVar57[0] = -((char)_DAT_01d64291 == (char)*(undefined2 *)(pbVar31 + 0x10));
            auVar57[1] = -((char)((ushort)_DAT_01d64291 >> 8) ==
                          (char)((ushort)*(undefined2 *)(pbVar31 + 0x10) >> 8));
            auVar57[2] = 0xff;
            auVar57[3] = 0xff;
            auVar57[4] = 0xff;
            auVar57[5] = 0xff;
            auVar57[6] = 0xff;
            auVar57[7] = 0xff;
            auVar57[8] = 0xff;
            auVar57[9] = 0xff;
            auVar57[10] = 0xff;
            auVar57[0xb] = 0xff;
            auVar57[0xc] = 0xff;
            auVar57[0xd] = 0xff;
            auVar57[0xe] = 0xff;
            auVar57[0xf] = 0xff;
            auVar57 = auVar57 & auVar52;
            if ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) == 0xffff) {
              if (bVar43 != (*plVar13 == 0)) goto LAB_0cc2089c;
              goto LAB_0cc206ec;
            }
          }
        }
        if (!bVar43) {
LAB_0cc2089c:
          func_0x05896c80(1,3,6,&UNK_013bd166);
          goto LAB_0cc2003f;
        }
      }
LAB_0cc206ec:
      uVar15 = auStack_100._0_8_;
      for (plVar13 = (long *)auStack_110._8_8_; plVar13 != (long *)uVar15;
          plVar13 = (long *)((long)plVar13 + 0x10)) {
        pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
        bVar10 = *pbVar31;
        if ((bVar10 & 1) == 0) {
          uVar37 = (ulong)(bVar10 >> 1);
          if ((DAT_0f704ba0 & 1) != 0) goto LAB_0cc20781;
LAB_0cc20756:
          if (uVar37 == DAT_0f704ba0 >> 1) {
LAB_0cc2078d:
            if ((bVar10 & 1) == 0) {
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar31 = *(byte **)(pbVar31 + 0x10);
            }
            uVar14 = 0xf704ba1;
            if ((DAT_0f704ba0 & 1) != 0) {
              uVar14 = _DAT_0f704bb0;
            }
            iVar11 = func_0x0eee3000(pbVar31,uVar14);
            if (iVar11 == 0) {
              lVar16 = *plVar13;
              if (lVar16 != 0) {
                uVar15 = auStack_100._0_8_;
                plVar13 = (long *)auStack_110._8_8_;
                goto joined_r0x0cc207e4;
              }
              break;
            }
          }
        }
        else {
          uVar37 = *(ulong *)(pbVar31 + 8);
          if ((DAT_0f704ba0 & 1) == 0) goto LAB_0cc20756;
LAB_0cc20781:
          if (uVar37 == _DAT_0f704ba8) goto LAB_0cc2078d;
        }
      }
LAB_0cc20b7c:
      uVar15 = auStack_100._0_8_;
      for (plVar13 = (long *)auStack_110._8_8_; plVar13 != (long *)uVar15;
          plVar13 = (long *)((long)plVar13 + 0x10)) {
        pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
        bVar10 = *pbVar31;
        if ((bVar10 & 1) == 0) {
          uVar37 = (ulong)(bVar10 >> 1);
          if ((DAT_0f704ba0 & 1) != 0) goto LAB_0cc20c11;
LAB_0cc20be6:
          if (uVar37 == DAT_0f704ba0 >> 1) {
LAB_0cc20c1d:
            if ((bVar10 & 1) == 0) {
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar31 = *(byte **)(pbVar31 + 0x10);
            }
            uVar14 = 0xf704ba1;
            if ((DAT_0f704ba0 & 1) != 0) {
              uVar14 = _DAT_0f704bb0;
            }
            iVar11 = func_0x0eee3000(pbVar31,uVar14);
            if (iVar11 == 0) {
              if (*plVar13 != 0) {
                uVar15 = auStack_100._0_8_;
                plVar13 = (long *)auStack_110._8_8_;
                goto LAB_0cc20caf;
              }
              break;
            }
          }
        }
        else {
          uVar37 = *(ulong *)(pbVar31 + 8);
          if ((DAT_0f704ba0 & 1) == 0) goto LAB_0cc20be6;
LAB_0cc20c11:
          if (uVar37 == _DAT_0f704ba8) goto LAB_0cc20c1d;
        }
      }
LAB_0cc20d1f:
      uVar15 = auStack_100._0_8_;
      bVar43 = true;
      for (plVar13 = (long *)auStack_110._8_8_; plVar13 != (long *)uVar15;
          plVar13 = (long *)((long)plVar13 + 0x10)) {
        pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
        bVar10 = *pbVar31;
        if ((bVar10 & 1) == 0) {
          uVar37 = (ulong)(bVar10 >> 1);
          if ((DAT_0f704c70 & 1) != 0) goto LAB_0cc20dc1;
LAB_0cc20d96:
          if (uVar37 == DAT_0f704c70 >> 1) {
LAB_0cc20dcd:
            if ((bVar10 & 1) == 0) {
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar31 = *(byte **)(pbVar31 + 0x10);
            }
            uVar14 = 0xf704c71;
            if ((DAT_0f704c70 & 1) != 0) {
              uVar14 = _DAT_0f704c80;
            }
            iVar11 = func_0x0eee3000(pbVar31,uVar14);
            if (iVar11 == 0) {
              bVar43 = *plVar13 == 0;
              break;
            }
          }
        }
        else {
          uVar37 = *(ulong *)(pbVar31 + 8);
          if ((DAT_0f704c70 & 1) == 0) goto LAB_0cc20d96;
LAB_0cc20dc1:
          if (uVar37 == _DAT_0f704c78) goto LAB_0cc20dcd;
        }
      }
      uVar15 = auStack_100._0_8_;
      for (plVar13 = (long *)auStack_110._8_8_; plVar13 != (long *)uVar15;
          plVar13 = (long *)((long)plVar13 + 0x10)) {
        pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
        bVar10 = *pbVar31;
        if ((bVar10 & 1) == 0) {
          uVar37 = (ulong)(bVar10 >> 1);
          if ((DAT_0f704df8 & 1) != 0) goto LAB_0cc20ea1;
LAB_0cc20e76:
          if (uVar37 == DAT_0f704df8 >> 1) {
LAB_0cc20ead:
            if ((bVar10 & 1) == 0) {
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar31 = *(byte **)(pbVar31 + 0x10);
            }
            pbVar41 = (byte *)0xf704df9;
            if ((DAT_0f704df8 & 1) != 0) {
              pbVar41 = _DAT_0f704e08;
            }
            iVar11 = func_0x0eee3000(pbVar31,pbVar41);
            if (iVar11 == 0) {
              if (!(bool)(bVar43 | *plVar13 == 0)) {
                func_0x0cc0b6f0();
                goto LAB_0cc2003f;
              }
              break;
            }
          }
        }
        else {
          uVar37 = *(ulong *)(pbVar31 + 8);
          if ((DAT_0f704df8 & 1) == 0) goto LAB_0cc20e76;
LAB_0cc20ea1:
          if (uVar37 == _DAT_0f704e00) goto LAB_0cc20ead;
        }
      }
      uVar15 = auStack_100._0_8_;
      for (plVar13 = (long *)auStack_110._8_8_; plVar13 != (long *)uVar15;
          plVar13 = (long *)((long)plVar13 + 0x10)) {
        pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
        bVar10 = *pbVar31;
        if ((bVar10 & 1) == 0) {
          uVar37 = (ulong)(bVar10 >> 1);
          if ((DAT_0f7075c0 & 1) != 0) goto LAB_0cc20f91;
LAB_0cc20f66:
          if (uVar37 == DAT_0f7075c0 >> 1) {
LAB_0cc20f9d:
            if ((bVar10 & 1) == 0) {
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar31 = *(byte **)(pbVar31 + 0x10);
            }
            uVar14 = 0xf7075c1;
            if ((DAT_0f7075c0 & 1) != 0) {
              uVar14 = _DAT_0f7075d0;
            }
            iVar11 = func_0x0eee3000(pbVar31,uVar14);
            if (iVar11 == 0) {
              lVar16 = *plVar13;
              plVar13 = (long *)auStack_110._8_8_;
              uVar15 = auStack_100._0_8_;
              if (auStack_110._8_8_ == auStack_100._0_8_) goto LAB_0cc210d4;
              goto LAB_0cc21024;
            }
          }
        }
        else {
          uVar37 = *(ulong *)(pbVar31 + 8);
          if ((DAT_0f7075c0 & 1) == 0) goto LAB_0cc20f66;
LAB_0cc20f91:
          if (uVar37 == _DAT_0f7075c8) goto LAB_0cc20f9d;
        }
      }
      lVar16 = 0;
      plVar13 = (long *)auStack_110._8_8_;
      uVar15 = auStack_100._0_8_;
      if (auStack_110._8_8_ != auStack_100._0_8_) {
LAB_0cc21024:
        do {
          pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
          bVar10 = *pbVar31;
          if ((bVar10 & 1) == 0) {
            uVar37 = (ulong)(bVar10 >> 1);
            if ((DAT_0f70b388 & 1) != 0) goto LAB_0cc21071;
LAB_0cc21046:
            if (uVar37 == DAT_0f70b388 >> 1) {
LAB_0cc2107d:
              if ((bVar10 & 1) == 0) {
                pbVar31 = pbVar31 + 1;
              }
              else {
                pbVar31 = *(byte **)(pbVar31 + 0x10);
              }
              uVar14 = 0xf70b389;
              if ((DAT_0f70b388 & 1) != 0) {
                uVar14 = _DAT_0f70b398;
              }
              iVar11 = func_0x0eee3000(pbVar31,uVar14);
              if (iVar11 == 0) {
                lVar32 = *plVar13;
                goto joined_r0x0cc21154;
              }
            }
          }
          else {
            uVar37 = *(ulong *)(pbVar31 + 8);
            if ((DAT_0f70b388 & 1) == 0) goto LAB_0cc21046;
LAB_0cc21071:
            if (uVar37 == _DAT_0f70b390) goto LAB_0cc2107d;
          }
          plVar13 = plVar13 + 2;
        } while (plVar13 != (long *)uVar15);
      }
LAB_0cc210d4:
      lVar32 = 0;
joined_r0x0cc21154:
      if ((lVar16 == 0) || (*(char *)(lVar16 + 9) != '\x03')) goto LAB_0cc21161;
      if (lVar32 != 0) {
        pfVar2 = *(float **)(lVar32 + 0x18);
        if (pfVar2 == *(float **)(lVar32 + 0x10)) {
          if (*(char *)(lVar32 + 9) != '\x01') goto LAB_0cc21161;
        }
        else {
          bVar43 = true;
          pfVar26 = *(float **)(lVar32 + 0x10);
          do {
            while (((pfVar25 = pfVar26 + 6, *pfVar26 < pfVar26[3] && (pfVar26[1] < pfVar26[4])) &&
                   (pfVar26[2] < pfVar26[5]))) {
              bVar43 = false;
              pfVar26 = pfVar25;
              if (pfVar25 == pfVar2) goto LAB_0cc21330;
            }
            pfVar34 = pfVar26 + 6;
            pfVar26 = pfVar25;
          } while (pfVar34 != pfVar2);
          if (bVar43) {
LAB_0cc21161:
            cVar8 = func_0x0cc0b860(auStack_148);
            if (cVar8 != '\0') {
              cVar8 = func_0x0d678aa0(lStack_370);
              if (cVar8 == '\0') {
                if (uStack_c0 != 0) {
                  puVar22 = (undefined8 *)auStack_d0._8_8_;
                  while (puVar22 != (undefined8 *)0x0) {
                    puVar23 = (undefined8 *)*puVar22;
                    func_0x0b69a770(puVar22 + 5);
                    if ((*(byte *)(puVar22 + 2) & 1) != 0) {
                      func_0x0412a280(puVar22[4],puVar22[2] & 0xfffffffffffffffe);
                    }
                    func_0x0412a280(puVar22,0xa8);
                    puVar22 = puVar23;
                  }
                  auStack_d0._8_8_ = 0;
                  if (auStack_d0._0_8_ != 0) {
                    func_0x0eee2dd0(auStack_e0._8_8_,0,auStack_d0._0_8_ << 3);
                  }
                  uStack_c0 = 0;
                }
                cVar8 = func_0x0551ca70(auStack_228,&UNK_0f3f67b8);
                uVar15 = auStack_1b0._0_8_;
                pbVar31 = (byte *)auStack_1b0._8_8_;
                if (cVar8 == '\0') {
                  if ((auStack_1b0._0_8_ != auStack_1b0._8_8_) &&
                     (cVar8 = func_0x0551ca70(auStack_228,&UNK_0f3f67e0), cVar8 != '\0')) {
                    func_0x0537fbe0(1,3,6,&UNK_011e377f);
                    goto LAB_0cc2003f;
                  }
                }
                else {
                  while ((byte *)uVar15 != pbVar31) {
                    plVar13 = *(long **)(pbVar31 + -8);
                    pbVar31[-8] = 0;
                    pbVar31[-7] = 0;
                    pbVar31[-6] = 0;
                    pbVar31[-5] = 0;
                    pbVar31[-4] = 0;
                    pbVar31[-3] = 0;
                    pbVar31[-2] = 0;
                    pbVar31[-1] = 0;
                    if (plVar13 != (long *)0x0) {
                      (**(code **)(*plVar13 + 8))();
                    }
                    if ((pbVar31[-0x28] & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(pbVar31 + -0x18),
                                      *(ulong *)(pbVar31 + -0x28) & 0xfffffffffffffffe);
                    }
                    pbVar31 = pbVar31 + -0x28;
                  }
                  auStack_1b0._8_8_ = uVar15;
                }
              }
              lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
              if (lVar16 == 0) {
                func_0x0eec74c0(0x1b0,0);
              }
              func_0x0cc337f0(lVar16,&lStack_260);
              goto LAB_0cc20041;
            }
            goto LAB_0cc2003f;
          }
        }
      }
LAB_0cc21330:
      func_0x0b615790(1,3,6,&UNK_014575fe);
    }
  }
LAB_0cc2003f:
  lVar16 = 0;
LAB_0cc20041:
  *plStack_80 = lVar16;
  func_0x0cc13c30(&lStack_260);
  func_0x0eeb81b0(auStack_78);
  func_0x0eeb81b0(auStack_60);
  func_0x0eeb81b0(auStack_48);
  return;
LAB_0cc1e130:
  plVar28 = (long *)*plVar28;
  if (plVar28 == (long *)0x0) goto LAB_0cc1e550;
  goto LAB_0cc1dee0;
joined_r0x0cc207e4:
  if (plVar13 == (long *)uVar15) goto LAB_0cc20b7c;
  pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
  bVar10 = *pbVar31;
  if ((bVar10 & 1) == 0) {
    uVar37 = (ulong)(bVar10 >> 1);
    if ((DAT_0f70b388 & 1) != 0) goto LAB_0cc20855;
LAB_0cc20839:
    if (uVar37 == DAT_0f70b388 >> 1) {
LAB_0cc20861:
      if ((bVar10 & 1) == 0) {
        pbVar31 = pbVar31 + 1;
      }
      else {
        pbVar31 = *(byte **)(pbVar31 + 0x10);
      }
      uVar14 = 0xf70b389;
      if ((DAT_0f70b388 & 1) != 0) {
        uVar14 = _DAT_0f70b398;
      }
      iVar11 = func_0x0eee3000(pbVar31,uVar14);
      if (iVar11 == 0) {
        lVar32 = *plVar13;
        if ((lVar32 != 0) && (*(char *)(lVar32 + 9) == '\x01')) {
          puVar24 = *(ulong **)(lVar32 + 0x10);
          auVar60 = _DAT_014e3820;
          auStack_368 = _DAT_014e1d80;
          fVar45 = _DAT_011987f4;
          fVar61 = _DAT_011988dc;
          uVar15 = _DAT_014e3820;
          if (puVar24 != *(ulong **)(lVar32 + 0x18)) {
            do {
              auVar49._8_8_ = 0;
              auVar49._0_8_ = *puVar24;
              auStack_368 = minps(auStack_368,auVar49);
              auVar50._8_8_ = 0;
              auVar50._0_8_ = *(ulong *)((long)puVar24 + 0xc);
              auVar60 = maxps(auVar60,auVar50);
              if (*(float *)(puVar24 + 1) <= fVar45) {
                fVar45 = *(float *)(puVar24 + 1);
              }
              if (fVar61 <= *(float *)((long)puVar24 + 0x14)) {
                fVar61 = *(float *)((long)puVar24 + 0x14);
              }
              puVar24 = puVar24 + 3;
            } while (puVar24 != *(ulong **)(lVar32 + 0x18));
            fVar45 = fVar45 + _DAT_01198808;
            fVar61 = fVar61 + _DAT_01198808;
            uVar15 = auVar60._0_8_;
          }
          uStack_380 = CONCAT44(uStack_380._4_4_,fVar61);
          fVar61 = auStack_368._0_4_ + _DAT_01198808;
          if (*(float *)(lVar16 + 0xc) + fVar61 < _DAT_01198808) {
            fVar61 = _DAT_01198808 - fVar61;
            func_0x0cc0b550(&UNK_0145753c,(float *)(lVar16 + 0xc));
            *(float *)(lVar16 + 0xc) = fVar61;
          }
          fVar61 = auStack_368._4_4_;
          fVar62 = (float)uVar15 + _DAT_01198808;
          if (_DAT_01198494 < *(float *)(lVar16 + 0x10) + fVar62) {
            fVar62 = _DAT_01198494 - fVar62;
            func_0x0cc0b550(&UNK_0129bfa7,(float *)(lVar16 + 0x10));
            *(float *)(lVar16 + 0x10) = fVar62;
            fVar61 = auStack_368._4_4_;
          }
          pfVar2 = (float *)(lVar16 + 0x18);
          if (*pfVar2 + fVar61 + _DAT_01198808 < _DAT_01198808) {
            auStack_368._0_4_ = _DAT_01198808 - (fVar61 + _DAT_01198808);
            func_0x0cc0b550(&UNK_01301242,pfVar2);
            *pfVar2 = (float)auStack_368._0_4_;
          }
          fVar61 = (float)((ulong)uVar15 >> 0x20) + _DAT_01198808;
          if (_DAT_01198494 < *(float *)(lVar16 + 0x1c) + fVar61) {
            fVar61 = _DAT_01198494 - fVar61;
            func_0x0cc0b550(&UNK_01423b95,(float *)(lVar16 + 0x1c));
            *(float *)(lVar16 + 0x1c) = fVar61;
          }
          pfVar2 = (float *)(lVar16 + 0x24);
          if (*pfVar2 + fVar45 < _DAT_01198808) {
            fVar45 = _DAT_01198808 - fVar45;
            func_0x0cc0b550(&UNK_011ae8eb,pfVar2);
            *pfVar2 = fVar45;
          }
          if (_DAT_01198494 < *(float *)(lVar16 + 0x28) + (float)uStack_380) {
            fVar61 = _DAT_01198494 - (float)uStack_380;
            func_0x0cc0b550(&UNK_0145759d,(float *)(lVar16 + 0x28));
            *(float *)(lVar16 + 0x28) = fVar61;
          }
        }
        goto LAB_0cc20b7c;
      }
    }
  }
  else {
    uVar37 = *(ulong *)(pbVar31 + 8);
    if ((DAT_0f70b388 & 1) == 0) goto LAB_0cc20839;
LAB_0cc20855:
    if (uVar37 == _DAT_0f70b390) goto LAB_0cc20861;
  }
  plVar13 = (long *)((long)plVar13 + 0x10);
  goto joined_r0x0cc207e4;
LAB_0cc20caf:
  if (plVar13 == (long *)uVar15) goto LAB_0cc20d1f;
  pbVar31 = (byte *)(**(code **)(*(long *)*plVar13 + 0x10))();
  bVar10 = *pbVar31;
  if ((bVar10 & 1) == 0) {
    if (bVar10 >> 1 == 0x12) goto LAB_0cc20cdb;
  }
  else if (*(long *)(pbVar31 + 8) == 0x12) {
LAB_0cc20cdb:
    if ((bVar10 & 1) == 0) {
      pbVar31 = pbVar31 + 1;
    }
    else {
      pbVar31 = *(byte **)(pbVar31 + 0x10);
    }
    auVar53[0] = -(DAT_01d64281 == *pbVar31);
    auVar53[1] = -(UNK_01d64282 == pbVar31[1]);
    auVar53[2] = -(UNK_01d64283 == pbVar31[2]);
    auVar53[3] = -(UNK_01d64284 == pbVar31[3]);
    auVar53[4] = -(UNK_01d64285 == pbVar31[4]);
    auVar53[5] = -(UNK_01d64286 == pbVar31[5]);
    auVar53[6] = -(UNK_01d64287 == pbVar31[6]);
    auVar53[7] = -(UNK_01d64288 == pbVar31[7]);
    auVar53[8] = -(UNK_01d64289 == pbVar31[8]);
    auVar53[9] = -(UNK_01d6428a == pbVar31[9]);
    auVar53[10] = -(UNK_01d6428b == pbVar31[10]);
    auVar53[0xb] = -(UNK_01d6428c == pbVar31[0xb]);
    auVar53[0xc] = -(UNK_01d6428d == pbVar31[0xc]);
    auVar53[0xd] = -(UNK_01d6428e == pbVar31[0xd]);
    auVar53[0xe] = -(UNK_01d6428f == pbVar31[0xe]);
    auVar53[0xf] = -(DAT_01d64290 == pbVar31[0xf]);
    auVar58[0] = -((char)_DAT_01d64291 == (char)*(undefined2 *)(pbVar31 + 0x10));
    auVar58[1] = -((char)((ushort)_DAT_01d64291 >> 8) ==
                  (char)((ushort)*(undefined2 *)(pbVar31 + 0x10) >> 8));
    auVar58[2] = 0xff;
    auVar58[3] = 0xff;
    auVar58[4] = 0xff;
    auVar58[5] = 0xff;
    auVar58[6] = 0xff;
    auVar58[7] = 0xff;
    auVar58[8] = 0xff;
    auVar58[9] = 0xff;
    auVar58[10] = 0xff;
    auVar58[0xb] = 0xff;
    auVar58[0xc] = 0xff;
    auVar58[0xd] = 0xff;
    auVar58[0xe] = 0xff;
    auVar58[0xf] = 0xff;
    auVar58 = auVar58 & auVar53;
    if ((ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) == 0xffff) {
      if (*plVar13 != 0) {
        lVar16 = *plVar13 + 0x10;
        cVar8 = func_0x0ee24c30(lVar16,0xf706810);
        if ((cVar8 == '\0') || (cVar8 = func_0x0ee24c30(lVar16,0xf706838), cVar8 == '\0')) {
          func_0x0b610190(1,3,6,&UNK_01409eab);
          goto LAB_0cc2003f;
        }
      }
      goto LAB_0cc20d1f;
    }
  }
  plVar13 = plVar13 + 2;
  goto LAB_0cc20caf;
}



/* ---- referenced strings ----
 * 0x131c4c6  minecraft:unit_cube
 * 0x1d5ff89  minecraft:support
 * 0x1d64281  minecraft:geometry
 * 0x1d64311  minecraft:item_visual
 * 0x1d6431e  m_visual
 */
