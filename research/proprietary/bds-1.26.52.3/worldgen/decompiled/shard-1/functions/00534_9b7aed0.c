/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9c7aed0 (ELF vaddr 0x9b7aed0)
 * Label: caller-of-callee
 * Body:  [[09c7aed0, 09c7b9f4] [09c7ba00, 09c7bad7] [09c7bae0, 09c7bb06] [09c7bb10, 09c7bb58] [09c7bb60, 09c7bc97] [09c7bca0, 09c7bdb8] [09c7bdc0, 09c7bea7] [09c7beb0, 09c7c119] [09c7c120, 09c7c520] [09c7c530, 09c7c5b9] [09c7c5c0, 09c7cb75] [09c7cc45, 09c7cc60] [09c7cc73, 09c7ccb6] [09c7ce04, 09c7ce33]]
 * Ghidra: FUN_09c7aed0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09c7aed0(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  ulong *puVar20;
  long lVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  bool bVar25;
  byte bStack_298;
  undefined1 uStack_297;
  undefined2 uStack_296;
  undefined1 uStack_294;
  undefined2 uStack_293;
  undefined1 uStack_291;
  undefined4 uStack_290;
  undefined2 uStack_28c;
  undefined2 uStack_28a;
  undefined1 uStack_288;
  undefined5 uStack_287;
  undefined1 uStack_282;
  undefined1 uStack_281;
  long *plStack_280;
  uint uStack_278;
  undefined4 uStack_274;
  undefined1 uStack_270;
  undefined2 uStack_26f;
  undefined1 uStack_26d;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined2 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong *puStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  undefined8 uStack_200;
  byte bStack_1f8;
  undefined4 uStack_1f7;
  undefined1 uStack_1f3;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  undefined1 uStack_1f0;
  undefined1 uStack_1ef;
  undefined1 uStack_1ee;
  undefined5 uStack_1ed;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  undefined *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  ulong *puStack_120;
  byte bStack_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined6 uStack_106;
  undefined8 uStack_100;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  uStack_220 = param_1;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar17 = _UNK_0127c40a;
  uStack_288 = SUB81(puVar10,0);
  uStack_287 = (undefined5)((ulong)puVar10 >> 8);
  uStack_282 = (undefined1)((ulong)puVar10 >> 0x30);
  uStack_281 = (undefined1)((ulong)puVar10 >> 0x38);
  bStack_298 = 0x21;
  uStack_297 = 0;
  uStack_296 = 0;
  uStack_294 = 0;
  uStack_293 = 0;
  uStack_291 = 0;
  uStack_290 = 0x19;
  uStack_28c = 0;
  uStack_28a = 0;
  *(ulong *)((long)puVar10 + 9) = CONCAT17(UNK_0127c409,_DAT_0127c402);
  *(undefined8 *)((long)puVar10 + 0x11) = uVar17;
  uVar17 = CONCAT71(_DAT_0127c402,UNK_0127c401);
  *puVar10 = _DAT_0127c3f9;
  puVar10[1] = uVar17;
  *(undefined1 *)((long)puVar10 + 0x19) = 0;
  puStack_218 = (ulong *)0x0;
  puStack_210 = (ulong *)0x0;
  puStack_208 = (ulong *)0x0;
  puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (ulong *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puStack_210 = puVar11 + 4;
  *puVar11 = 0x7574637572747312;
  puVar11[1] = 0x6572;
  *(byte *)(puVar11 + 3) = 0;
  puStack_218 = puVar11;
  puStack_208 = puStack_210;
  func_0x09c7ce40(uStack_220,&bStack_298,puVar11);
  if ((*puVar11 & 1) != 0) {
    func_0x0412a280(puVar11[2],*puVar11 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar11,0x20);
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))),
                    CONCAT17(uStack_291,
                             CONCAT25(uStack_293,
                                      CONCAT14(uStack_294,
                                               CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_298 = 0x2a;
  uStack_297 = (undefined1)_DAT_01469662;
  uStack_296 = (undefined2)((ulong)_DAT_01469662 >> 8);
  uStack_294 = (undefined1)((ulong)_DAT_01469662 >> 0x18);
  uStack_293 = (undefined2)((ulong)_DAT_01469662 >> 0x20);
  uStack_291 = (undefined1)((ulong)_DAT_01469662 >> 0x30);
  uStack_290._0_1_ = (undefined1)((ulong)_DAT_01469662 >> 0x38);
  uStack_290._1_3_ = (undefined3)_UNK_0146966a;
  uStack_28c = (undefined2)((ulong)_UNK_0146966a >> 0x18);
  uStack_28a = 0x6e61;
  uStack_288 = 100;
  uStack_287 = 0x656d6f6942;
  uStack_282 = 0;
  puStack_218 = (ulong *)0x0;
  puStack_210 = (ulong *)0x0;
  puStack_208 = (ulong *)0x0;
  puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (ulong *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puStack_210 = puVar11 + 4;
  *puVar11 = 0x656d6f69620a;
  *(byte *)(puVar11 + 3) = 1;
  puStack_218 = puVar11;
  puStack_208 = puStack_210;
  func_0x09c7ce40(uStack_220,&bStack_298,puVar11);
  if ((*puVar11 & 1) != 0) {
    func_0x0412a280(puVar11[2],*puVar11 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar11,0x20);
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))),
                    CONCAT17(uStack_291,
                             CONCAT25(uStack_293,
                                      CONCAT14(uStack_294,
                                               CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_298 = 0xc;
  uStack_297 = 0x6c;
  uStack_296 = 0x636f;
  uStack_294 = 0x61;
  uStack_293 = 0x6574;
  uStack_291 = 0;
  func_0x09d9d8e0(uStack_220,&bStack_298,&UNK_012c7f60,1,0,0);
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))),
                    CONCAT17(uStack_291,
                             CONCAT25(uStack_293,
                                      CONCAT14(uStack_294,
                                               CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298)))
                                     )) & 0xfffffffffffffffe);
  }
  if (DAT_0f551b88 == '\0') goto LAB_09c7c83f;
LAB_09c7b142:
  bStack_298 = (byte)_DAT_0f551b82;
  uStack_297 = (undefined1)((ushort)_DAT_0f551b82 >> 8);
  uStack_290 = 0xf64aba8;
  uStack_28c = 0;
  uStack_28a = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  plStack_280 = (long *)0x0;
  uStack_278 = 0x6165660e;
  uStack_274 = 0x65727574;
  uStack_270 = 0;
  puStack_260 = &UNK_011dda02;
  uStack_258 = 0xffffffff;
  uStack_250 = 0;
  uStack_248 = _DAT_014e8880;
  uStack_244 = _UNK_014e8884;
  uStack_240 = _UNK_014e8888;
  uStack_23c = _UNK_014e888c;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  if ((DAT_0f551ba8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f551ba8), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f551ba0 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f551ba8);
  }
  puStack_218 = (ulong *)CONCAT62(puStack_218._2_6_,_DAT_0f551ba0);
  puStack_210 = (ulong *)0xf551b60;
  puStack_208 = (ulong *)0x0;
  uStack_200 = 0;
  bStack_1f8 = 0x20;
  uStack_1f7 = (undefined4)_DAT_012faf01;
  uStack_1f3 = (undefined1)((ulong)_DAT_012faf01 >> 0x20);
  uStack_1f2 = (undefined1)((ulong)_DAT_012faf01 >> 0x28);
  uStack_1f1 = (undefined1)((ulong)_DAT_012faf01 >> 0x30);
  uStack_1f0 = (undefined1)((ulong)_DAT_012faf01 >> 0x38);
  uStack_1ef = (undefined1)_UNK_012faf09;
  uStack_1ee = (undefined1)((ulong)_UNK_012faf09 >> 8);
  uStack_1ed = (undefined5)((ulong)_UNK_012faf09 >> 0x10);
  uStack_1e8 = (undefined1)((ulong)_UNK_012faf09 >> 0x38);
  uStack_1e7 = 0;
  puStack_1e0 = (undefined *)0x0;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = _DAT_014e73e0;
  uStack_1c4 = _UNK_014e73e4;
  uStack_1c0 = _UNK_014e73e8;
  uStack_1bc = _UNK_014e73ec;
  uStack_1b8 = 1;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  bStack_118 = 0x20;
  uStack_117 = 0x39;
  uStack_116 = 0xef4;
  uStack_110 = 0xd0;
  uStack_10f = 0x9cee5;
  func_0x049315d0(uStack_220,&UNK_01438166,0x1400000001,&bStack_118,&bStack_298,&puStack_218);
  lVar12 = CONCAT62(uStack_116,CONCAT11(uStack_117,bStack_118));
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 8))(&bStack_118);
  }
  if ((bStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8)),
                    CONCAT17(uStack_1f1,
                             CONCAT16(uStack_1f2,
                                      CONCAT15(uStack_1f3,CONCAT41(uStack_1f7,bStack_1f8)))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  plStack_198 = param_2;
  if ((DAT_0f649668 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649668), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f649660 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649668);
  }
  bStack_298 = (byte)_DAT_0f649660;
  uStack_297 = (undefined1)((ushort)_DAT_0f649660 >> 8);
  uStack_290 = 0xf649178;
  uStack_28c = 0;
  uStack_28a = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  plStack_280 = (long *)0x0;
  uStack_278 = 0x62757314;
  uStack_274 = 0x6d6d6f63;
  uStack_270 = 0x61;
  uStack_26f = 0x646e;
  uStack_26d = 0;
  puStack_260 = &DAT_0127c3f9;
  uStack_258 = 0xffffffff;
  uStack_250 = 0;
  uStack_248 = _DAT_014e7c50;
  uStack_244 = _UNK_014e7c54;
  uStack_240 = _UNK_014e7c58;
  uStack_23c = _UNK_014e7c5c;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  if ((DAT_0f551b88 == '\0') && (iVar9 = func_0x04108328(&DAT_0f551b88), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f551b82 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f551b88);
  }
  puStack_218 = (ulong *)CONCAT62(puStack_218._2_6_,_DAT_0f551b82);
  puStack_210 = (ulong *)0xf64aba8;
  puStack_208 = (ulong *)0x0;
  uStack_200 = 0;
  bStack_1f8 = 0x12;
  uStack_1f7 = 0x75727473;
  uStack_1f3 = 99;
  uStack_1f2 = 0x74;
  uStack_1f1 = 0x75;
  uStack_1f0 = 0x72;
  uStack_1ef = 0x65;
  uStack_1ee = 0;
  puStack_1e0 = &UNK_011dda02;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = _DAT_014e8880;
  uStack_1c4 = _UNK_014e8884;
  uStack_1c0 = _UNK_014e8888;
  uStack_1bc = _UNK_014e888c;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  if ((DAT_0f551ba8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f551ba8), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f551ba0 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f551ba8);
  }
  bStack_118 = (byte)_DAT_0f551ba0;
  uStack_117 = (undefined1)((ushort)_DAT_0f551ba0 >> 8);
  uStack_110 = 0x60;
  uStack_10f = 0xf551b;
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_106 = 0;
  uStack_100 = 0;
  bStack_f8 = 0x20;
  uStack_f7 = (undefined7)_DAT_012faf01;
  uStack_f0 = (undefined1)((ulong)_DAT_012faf01 >> 0x38);
  uStack_ef = (undefined7)_UNK_012faf09;
  uStack_e8 = (undefined1)((ulong)_UNK_012faf09 >> 0x38);
  uStack_e7 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0xffffffff;
  uStack_d0 = 0;
  uStack_c8 = _DAT_014e73e0;
  uStack_c4 = _UNK_014e73e4;
  uStack_c0 = _UNK_014e73e8;
  uStack_bc = _UNK_014e73ec;
  uStack_b8 = 1;
  uStack_b0 = 0;
  uStack_a8 = 0;
  pbStack_168 = &UNK_0ef43920;
  pbStack_160 = &UNK_09cee5d0;
  func_0x05acbd50(uStack_220,&UNK_01438166,0x7fffffff00000015,&pbStack_168,&bStack_298,&puStack_218,
                  &bStack_118);
  if (pbStack_168 != (byte *)0x0) {
    (**(code **)(pbStack_168 + 8))(&pbStack_168);
  }
  if ((bStack_f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_e6,CONCAT11(uStack_e7,uStack_e8)),
                    CONCAT71(uStack_f7,bStack_f8) & 0xfffffffffffffffe);
  }
  if ((bStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8)),
                    CONCAT17(uStack_1f1,
                             CONCAT16(uStack_1f2,
                                      CONCAT15(uStack_1f3,CONCAT41(uStack_1f7,bStack_1f8)))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  if ((DAT_0f649668 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649668), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f649660 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649668);
  }
  bStack_298 = (byte)_DAT_0f649660;
  uStack_297 = (undefined1)((ushort)_DAT_0f649660 >> 8);
  uStack_290 = 0xf649178;
  uStack_28c = 0;
  uStack_28a = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  plStack_280 = (long *)0x0;
  uStack_278 = 0x62757314;
  uStack_274 = 0x6d6d6f63;
  uStack_270 = 0x61;
  uStack_26f = 0x646e;
  uStack_26d = 0;
  puStack_260 = &DAT_01469662;
  uStack_258 = 0xffffffff;
  uStack_250 = 0;
  uStack_248 = _DAT_014e7c50;
  uStack_244 = _UNK_014e7c54;
  uStack_240 = _UNK_014e7c58;
  uStack_23c = _UNK_014e7c5c;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  if ((DAT_0f649a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649a20), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f649a18 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649a20);
  }
  puStack_218 = (ulong *)CONCAT62(puStack_218._2_6_,_DAT_0f649a18);
  puStack_210 = (ulong *)0xf649198;
  puStack_208 = (ulong *)0x0;
  uStack_200 = 0;
  bStack_1f8 = 10;
  uStack_1f7 = 0x6d6f6962;
  uStack_1f3 = 0x65;
  uStack_1f2 = 0;
  puStack_1e0 = (undefined *)0x0;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = _DAT_014e8890;
  uStack_1c4 = _UNK_014e8894;
  uStack_1c0 = _UNK_014e8898;
  uStack_1bc = _UNK_014e889c;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  bStack_118 = 0x20;
  uStack_117 = 0x39;
  uStack_116 = 0xef4;
  uStack_110 = 0xd0;
  uStack_10f = 0x9cee5;
  func_0x049315d0(uStack_220,&UNK_01438166,0x7fffffff00000015,&bStack_118,&bStack_298,&puStack_218);
  plVar19 = plStack_198;
  lVar12 = CONCAT62(uStack_116,CONCAT11(uStack_117,bStack_118));
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 8))(&bStack_118);
  }
  if ((bStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8)),
                    CONCAT17(uStack_1f1,
                             CONCAT16(uStack_1f2,
                                      CONCAT15(uStack_1f3,CONCAT41(uStack_1f7,bStack_1f8)))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  lVar12 = (**(code **)(*plVar19 + 0x570))(plVar19);
  if ((**(byte **)(lVar12 + 0x138) & 0x20) == 0) {
    return;
  }
  func_0x0c9a24c0(&lStack_40,plVar19);
  lVar12 = lStack_40;
  if (lStack_40 == 0) goto LAB_09c7c603;
  if ((DAT_0f649980 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649980), iVar9 != 0)) {
    func_0x09ce8df0(0xf649968);
    func_0x0410844d(&DAT_0f649980);
  }
  plVar19 = (long *)(*(long *)(lVar12 + 0x28) +
                    (ulong)((int)((ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28)) >> 3)
                            - 1U & _DAT_0f64996c) * 8);
  do {
    if (*plVar19 == -1) {
      plVar19 = *(long **)(lVar12 + 0x48);
      iVar9 = (int)plVar19[5];
      goto joined_r0x09c7b805;
    }
    lVar21 = *plVar19 * 0x30;
    plVar19 = (long *)(*(long *)(lVar12 + 0x40) + lVar21);
  } while (*(uint *)(*(long *)(lVar12 + 0x40) + 8 + lVar21) != _DAT_0f64996c);
  iVar9 = (int)plVar19[5];
joined_r0x09c7b805:
  if (iVar9 == -0x1a3b76f7) {
    puVar10 = (undefined8 *)plVar19[2];
  }
  else {
    puVar10 = (undefined8 *)0x0;
  }
  bStack_118 = 0x20;
  uStack_117 = (undefined1)_DAT_01402601;
  uStack_116 = (undefined6)((ulong)_DAT_01402601 >> 8);
  uStack_110 = (undefined1)((ulong)_DAT_01402601 >> 0x38);
  uStack_10f = (undefined7)_UNK_01402609;
  uStack_108 = (undefined1)((ulong)_UNK_01402609 >> 0x38);
  uStack_107 = 0;
  pbStack_168 = (byte *)0x0;
  pbStack_160 = (byte *)0x0;
  pbStack_158 = (byte *)0x0;
  pbVar13 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pbVar13 == (byte *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  pbStack_160 = pbVar13 + 0x20;
  pbVar13[0] = 6;
  pbVar13[1] = 0x70;
  pbVar13[2] = 0x6f;
  pbVar13[3] = 0x69;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  pbVar13[0x18] = 0;
  puStack_218 = (ulong *)0x0;
  puStack_210 = (ulong *)0x0;
  puStack_208 = (ulong *)0x0;
  pbStack_168 = pbVar13;
  pbStack_158 = pbStack_160;
  puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (ulong *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puStack_208 = puVar11 + 4;
  plVar19 = (long *)(ulong)pbVar13[0x18];
  puStack_210 = puVar11;
  puStack_218 = puVar11;
  if ((*pbVar13 & 1) == 0) {
    uVar17 = *(undefined8 *)(pbVar13 + 0x10);
    uStack_288 = (undefined1)uVar17;
    uStack_287 = (undefined5)((ulong)uVar17 >> 8);
    uStack_282 = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_281 = (undefined1)((ulong)uVar17 >> 0x38);
    uVar17 = *(undefined8 *)pbVar13;
    uVar2 = *(undefined8 *)(pbVar13 + 8);
    bStack_298 = (byte)uVar17;
    uStack_297 = (undefined1)((ulong)uVar17 >> 8);
    uStack_296 = (undefined2)((ulong)uVar17 >> 0x10);
    uStack_294 = (undefined1)((ulong)uVar17 >> 0x20);
    uStack_293 = (undefined2)((ulong)uVar17 >> 0x28);
    uStack_291 = (undefined1)((ulong)uVar17 >> 0x38);
    uStack_290 = (undefined4)uVar2;
    uStack_28c = (undefined2)((ulong)uVar2 >> 0x20);
    uStack_28a = (undefined2)((ulong)uVar2 >> 0x30);
LAB_09c7b935:
    puStack_210[2] = CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288)));
    *puStack_210 = CONCAT17(uStack_291,
                            CONCAT25(uStack_293,
                                     CONCAT14(uStack_294,
                                              CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298))))
                           );
    puStack_210[1] = CONCAT26(uStack_28a,CONCAT24(uStack_28c,uStack_290));
    bStack_298 = 0;
    uStack_297 = 0;
    uStack_296 = 0;
    uStack_294 = 0;
    uStack_293 = 0;
    uStack_291 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_28a = 0;
    uStack_288 = 0;
    uStack_287 = 0;
    uStack_282 = 0;
    uStack_281 = 0;
    puStack_210[3] = (ulong)plVar19;
    plStack_280 = plVar19;
    puStack_210 = puStack_210 + 4;
  }
  else {
    func_0x0412e5e0(&bStack_298,*(undefined8 *)(pbVar13 + 0x10),*(undefined8 *)(pbVar13 + 8));
    if (puStack_210 < puStack_208) goto LAB_09c7b935;
    lVar12 = (long)puStack_210 - (long)puStack_218;
    uVar14 = (lVar12 >> 5) + 1;
    if (uVar14 >> 0x3b != 0) {
      plStack_280 = plVar19;
      func_0x049315c0();
LAB_09c7cb49:
      uVar17 = func_0x04882eb0();
      if ((bStack_298 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))),
                        CONCAT17(uStack_291,
                                 CONCAT25(uStack_293,
                                          CONCAT14(uStack_294,
                                                   CONCAT22(uStack_296,
                                                            CONCAT11(uStack_297,bStack_298))))) &
                        0xfffffffffffffffe);
      }
      func_0x04931550(&puStack_218);
      func_0x09c78740(&pbStack_168);
      if ((bStack_118 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_106,CONCAT11(uStack_107,uStack_108)),
                        CONCAT62(uStack_116,CONCAT11(uStack_117,bStack_118)) & 0xfffffffffffffffe);
        func_0x09b45b30(&lStack_40);
        uVar17 = _Unwind_Resume(uVar17);
        func_0x04886070(&puStack_188);
        func_0x04886070(&pbStack_168);
      }
      func_0x09b45b30(&lStack_40);
      _Unwind_Resume(uVar17);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puStack_120 = puStack_218;
    uVar24 = (long)puStack_208 - (long)puStack_218;
    uVar18 = (long)uVar24 >> 4;
    if ((ulong)((long)uVar24 >> 4) <= uVar14) {
      uVar18 = uVar14;
    }
    if (0x7fffffffffffffdf < uVar24) {
      uVar18 = 0x7ffffffffffffff;
    }
    plStack_280 = plVar19;
    plStack_198 = plVar19;
    if (0x7ffffffffffffff < uVar18) goto LAB_09c7cb49;
    lVar23 = uVar18 * 0x20;
    puStack_190 = puVar10;
    lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar23);
    if (lVar21 == 0) {
      func_0x0eec74c0(lVar23,0);
    }
    puVar11 = puStack_120;
    *(ulong *)(lVar21 + 0x10 + lVar12) =
         CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288)));
    *(undefined8 *)(lVar21 + lVar12) =
         CONCAT17(uStack_291,
                  CONCAT25(uStack_293,
                           CONCAT14(uStack_294,CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298)))
                          ));
    ((undefined8 *)(lVar21 + lVar12))[1] = CONCAT26(uStack_28a,CONCAT24(uStack_28c,uStack_290));
    bStack_298 = 0;
    uStack_297 = 0;
    uStack_296 = 0;
    uStack_294 = 0;
    uStack_293 = 0;
    uStack_291 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_28a = 0;
    uStack_288 = 0;
    uStack_287 = 0;
    uStack_282 = 0;
    uStack_281 = 0;
    *(long **)(lVar21 + 0x18 + lVar12) = plStack_198;
    puVar22 = (ulong *)(lVar21 + lVar12 + 0x20);
    puVar20 = (ulong *)(lVar12 + lVar21 + (lVar12 >> 5) * -0x20);
    memcpy(puVar20,puStack_120,lVar12);
    puVar10 = puStack_190;
    puStack_218 = puVar20;
    puStack_210 = puVar22;
    puStack_208 = (ulong *)(lVar23 + lVar21);
    if ((puVar11 != (ulong *)0x0) &&
       (func_0x0412a280(puVar11,uVar24), puVar10 = puStack_190, puStack_210 = puVar22,
       (bStack_298 & 1) != 0)) {
      func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))),
                      CONCAT17(uStack_291,
                               CONCAT25(uStack_293,
                                        CONCAT14(uStack_294,
                                                 CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f649638 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649638), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f649630 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649638);
  }
  puStack_188 = (undefined8 *)CONCAT62(puStack_188._2_6_,_DAT_0f649630);
  bStack_298 = 0x60;
  uStack_297 = 0x8e;
  uStack_296 = 0x9ce;
  uStack_294 = 0;
  uStack_293 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_28a = 0;
  func_0x09da7580(&lStack_98,uStack_220,&bStack_118,&puStack_218,&puStack_188);
  puVar20 = puStack_218;
  puVar11 = puStack_210;
  if (puStack_218 != (ulong *)0x0) {
    for (; puVar20 != puVar11; puVar11 = puVar11 + -4) {
      if ((puVar11[-4] & 1) != 0) {
        func_0x0412a280(puVar11[-2],puVar11[-4] & 0xfffffffffffffffe);
      }
    }
    puStack_210 = puVar20;
    func_0x0412a280(puStack_218,(long)puStack_208 - (long)puStack_218);
  }
  pbVar7 = pbStack_168;
  pbVar13 = pbStack_160;
  if (pbStack_168 != (byte *)0x0) {
    for (; pbVar7 != pbVar13; pbVar13 = pbVar13 + -0x20) {
      if ((pbVar13[-0x20] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar13 + -0x10),
                        *(ulong *)(pbVar13 + -0x20) & 0xfffffffffffffffe);
      }
    }
    pbStack_160 = pbVar7;
    func_0x0412a280(pbVar7,(long)pbStack_158 - (long)pbVar7);
  }
  if ((bStack_118 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_106,CONCAT11(uStack_107,uStack_108)),
                    CONCAT62(uStack_116,CONCAT11(uStack_117,bStack_118)) & 0xfffffffffffffffe);
  }
  pbStack_168 = (byte *)0x0;
  pbStack_160 = (byte *)0x0;
  pbStack_158 = (byte *)0x0;
  lVar12 = *(long *)(puVar10[1] + 0x18);
  lVar21 = *(long *)(puVar10[1] + 0x20);
  if (lVar12 != lVar21) {
    do {
      while (pbVar13 = pbStack_160, pbStack_160 < pbStack_158) {
        if ((*(byte *)(lVar12 + 8) & 1) == 0) {
          *(undefined8 *)(pbStack_160 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
          uVar4 = *(undefined4 *)(lVar12 + 0xc);
          uVar5 = *(undefined4 *)(lVar12 + 0x10);
          uVar6 = *(undefined4 *)(lVar12 + 0x14);
          *(undefined4 *)pbStack_160 = *(undefined4 *)(lVar12 + 8);
          *(undefined4 *)(pbStack_160 + 4) = uVar4;
          *(undefined4 *)(pbStack_160 + 8) = uVar5;
          *(undefined4 *)(pbStack_160 + 0xc) = uVar6;
        }
        else {
          func_0x0412e5e0(pbStack_160,*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 0x10))
          ;
        }
        pbStack_160 = pbVar13 + 0x18;
        lVar12 = lVar12 + 0x28;
        if (lVar12 == lVar21) goto LAB_09c7bb7c;
      }
      pbStack_160 = (byte *)func_0x04909a40(&pbStack_168);
      lVar12 = lVar12 + 0x28;
    } while (lVar12 != lVar21);
  }
LAB_09c7bb7c:
  uVar17 = uRam000000000f544800;
  uVar14 = func_0x0eee2e90(uRam000000000f544800);
  if (0xfffffffffffffff7 < uVar14) {
    func_0x04882e30();
    goto LAB_09c7ca4f;
  }
  if (uVar14 < 0x17) {
    bStack_298 = (char)uVar14 * '\x02';
    puVar16 = &uStack_297;
    if (uVar14 != 0) goto LAB_09c7bc00;
  }
  else {
    lVar12 = 0x1a;
    if ((uVar14 | 7) != 0x17) {
      lVar12 = (uVar14 | 7) + 1;
    }
    puVar16 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
    if (puVar16 == (undefined1 *)0x0) {
      func_0x0eec74c0(lVar12,0);
    }
    uStack_288 = SUB81(puVar16,0);
    uStack_287 = (undefined5)((ulong)puVar16 >> 8);
    uStack_282 = (undefined1)((ulong)puVar16 >> 0x30);
    uStack_281 = (undefined1)((ulong)puVar16 >> 0x38);
    bStack_298 = (byte)lVar12 | 1;
    uStack_297 = (undefined1)((ulong)lVar12 >> 8);
    uStack_296 = (undefined2)((ulong)lVar12 >> 0x10);
    uStack_294 = (undefined1)((ulong)lVar12 >> 0x20);
    uStack_293 = (undefined2)((ulong)lVar12 >> 0x28);
    uStack_291 = (undefined1)((ulong)lVar12 >> 0x38);
    uStack_290 = (undefined4)uVar14;
    uStack_28c = (undefined2)(uVar14 >> 0x20);
    uStack_28a = (undefined2)(uVar14 >> 0x30);
LAB_09c7bc00:
    func_0x0eee2ee0(puVar16,uVar17,uVar14);
  }
  puVar16[uVar14] = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  func_0x0488f040(&lStack_98,pbStack_168,pbStack_160,
                  ((long)pbStack_160 - (long)pbStack_168 >> 3) * -0x5555555555555555);
  func_0x09da94c0(uStack_220,&bStack_298,&lStack_98);
  lVar21 = lStack_98;
  lVar12 = lStack_90;
  if (lStack_98 != 0) {
    for (; lVar21 != lVar12; lVar12 = lVar12 + -0x18) {
      if ((*(byte *)(lVar12 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar12 + -8),*(ulong *)(lVar12 + -0x18) & 0xfffffffffffffffe
                       );
      }
    }
    lStack_90 = lVar21;
    func_0x0412a280(lStack_98,lStack_88 - lStack_98);
  }
  if ((bStack_298 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))),
                    CONCAT17(uStack_291,
                             CONCAT25(uStack_293,
                                      CONCAT14(uStack_294,
                                               CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298)))
                                     )) & 0xfffffffffffffffe);
  }
  puStack_188 = (undefined8 *)0x0;
  puStack_180 = (undefined8 *)0x0;
  puStack_178 = (undefined8 *)0x0;
  puStack_120 = (ulong *)*puVar10;
  if (puStack_120[9] - puStack_120[8] != 0) {
    lVar12 = ((long)(puStack_120[9] - puStack_120[8]) >> 3) * -0x5555555555555555;
    plVar19 = (long *)0x10;
    while( true ) {
      param_2 = (long *)0xaaaaaaaaaaaaaaab;
      uVar14 = *puStack_120;
      bVar1 = *(byte *)((uVar14 - 0x10) + (long)plVar19);
      bVar25 = (bVar1 & 1) != 0;
      lVar21 = (uVar14 - 0xf) + (long)plVar19;
      if (bVar25) {
        lVar21 = *(long *)(uVar14 + (long)plVar19);
      }
      uVar18 = (ulong)(bVar1 >> 1);
      if (bVar25) {
        uVar18 = *(ulong *)((uVar14 - 8) + (long)plVar19);
      }
      if (0xfffffffffffffff7 < uVar18) break;
      plStack_198 = plVar19;
      if (uVar18 < 0x17) {
        bStack_298 = (char)uVar18 * '\x02';
        puVar16 = &uStack_297;
        if (uVar18 != 0) goto LAB_09c7be12;
      }
      else {
        lVar23 = 0x1a;
        if ((uVar18 | 7) != 0x17) {
          lVar23 = (uVar18 | 7) + 1;
        }
        puVar16 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar23);
        if (puVar16 == (undefined1 *)0x0) {
          func_0x0eec74c0(lVar23,0);
        }
        uStack_288 = SUB81(puVar16,0);
        uStack_287 = (undefined5)((ulong)puVar16 >> 8);
        uStack_282 = (undefined1)((ulong)puVar16 >> 0x30);
        uStack_281 = (undefined1)((ulong)puVar16 >> 0x38);
        bStack_298 = (byte)lVar23 | 1;
        uStack_297 = (undefined1)((ulong)lVar23 >> 8);
        uStack_296 = (undefined2)((ulong)lVar23 >> 0x10);
        uStack_294 = (undefined1)((ulong)lVar23 >> 0x20);
        uStack_293 = (undefined2)((ulong)lVar23 >> 0x28);
        uStack_291 = (undefined1)((ulong)lVar23 >> 0x38);
        uStack_290 = (undefined4)uVar18;
        uStack_28c = (undefined2)(uVar18 >> 0x20);
        uStack_28a = (undefined2)(uVar18 >> 0x30);
LAB_09c7be12:
        func_0x0eee2ee0(puVar16,lVar21,uVar18);
      }
      puVar16[uVar18] = 0;
      puVar15 = (undefined8 *)func_0x0412f0e0(&bStack_298,0,&UNK_01a2a2c9,1);
      puVar8 = puStack_188;
      puVar10 = (undefined8 *)*puVar15;
      uVar17 = puVar15[1];
      uVar2 = puVar15[2];
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      if (puStack_180 < puStack_178) {
        *puStack_180 = puVar10;
        puStack_180[1] = uVar17;
        puStack_180[2] = uVar2;
        puVar15 = puStack_180 + 3;
        plVar19 = plStack_198;
      }
      else {
        lVar21 = (long)puStack_180 - (long)puStack_188;
        uVar14 = (lVar21 >> 3) * -0x5555555555555555 + 1;
        puStack_190 = puVar10;
        lStack_58 = lVar12;
        uStack_50 = uVar2;
        if (0xaaaaaaaaaaaaaaa < uVar14) goto LAB_09c7c835;
        lVar12 = (long)puStack_178 - (long)puStack_188 >> 3;
        uVar18 = lVar12 * 0x5555555555555556;
        if (uVar14 < uVar18) {
          uVar14 = uVar18;
        }
        if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
          uVar14 = 0xaaaaaaaaaaaaaaa;
        }
        uStack_48 = uVar17;
        if (0xaaaaaaaaaaaaaaa < uVar14) goto LAB_09c7c83a;
        puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 0x18);
        if (puVar10 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar14 * 0x18,0);
        }
        *(undefined8 **)((long)puVar10 + lVar21) = puStack_190;
        *(undefined8 *)((long)puVar10 + lVar21 + 8) = uStack_48;
        *(undefined8 *)((long)puVar10 + lVar21 + 0x10) = uStack_50;
        puVar15 = (undefined8 *)((long)puVar10 + lVar21 + 0x18);
        memcpy(puVar10,puVar8,lVar21);
        plVar19 = plStack_198;
        puStack_188 = puVar10;
        puStack_178 = puVar10 + uVar14 * 3;
        lVar12 = lStack_58;
        if (puVar8 != (undefined8 *)0x0) {
          func_0x0412a280(puVar8);
          plVar19 = plStack_198;
          lVar12 = lStack_58;
        }
      }
      puStack_180 = puVar15;
      plStack_198 = plVar19;
      if ((bStack_298 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))));
      }
      plVar19 = plVar19 + 3;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) goto LAB_09c7c002;
    }
    func_0x04882e30();
LAB_09c7c835:
    func_0x0488efe0();
LAB_09c7c83a:
    func_0x04882eb0();
LAB_09c7c83f:
    iVar9 = func_0x04108328(&DAT_0f551b88);
    if (iVar9 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f551b82 = _DAT_0f551b80;
      _DAT_0f551b80 = _DAT_0f551b80 + 1;
      func_0x0410844d(&DAT_0f551b88);
    }
    goto LAB_09c7b142;
  }
LAB_09c7c002:
  uVar17 = uRam000000000f544808;
  uVar14 = func_0x0eee2e90(uRam000000000f544808);
  if (uVar14 < 0xfffffffffffffff8) {
    if (uVar14 < 0x17) {
      bStack_298 = (char)uVar14 * '\x02';
      puVar16 = &uStack_297;
      if (uVar14 != 0) goto LAB_09c7c08c;
    }
    else {
      lVar12 = 0x1a;
      if ((uVar14 | 7) != 0x17) {
        lVar12 = (uVar14 | 7) + 1;
      }
      puVar16 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
      if (puVar16 == (undefined1 *)0x0) {
        func_0x0eec74c0(lVar12,0);
      }
      uStack_288 = SUB81(puVar16,0);
      uStack_287 = (undefined5)((ulong)puVar16 >> 8);
      uStack_282 = (undefined1)((ulong)puVar16 >> 0x30);
      uStack_281 = (undefined1)((ulong)puVar16 >> 0x38);
      bStack_298 = (byte)lVar12 | 1;
      uStack_297 = (undefined1)((ulong)lVar12 >> 8);
      uStack_296 = (undefined2)((ulong)lVar12 >> 0x10);
      uStack_294 = (undefined1)((ulong)lVar12 >> 0x20);
      uStack_293 = (undefined2)((ulong)lVar12 >> 0x28);
      uStack_291 = (undefined1)((ulong)lVar12 >> 0x38);
      uStack_290 = (undefined4)uVar14;
      uStack_28c = (undefined2)(uVar14 >> 0x20);
      uStack_28a = (undefined2)(uVar14 >> 0x30);
LAB_09c7c08c:
      func_0x0eee2ee0(puVar16,uVar17,uVar14);
    }
    puVar16[uVar14] = 0;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    func_0x0488f040(&lStack_78,puStack_188,puStack_180,
                    ((long)puStack_180 - (long)puStack_188 >> 3) * -0x5555555555555555);
    func_0x09da94c0(uStack_220,&bStack_298,&lStack_78);
    lVar21 = lStack_78;
    lVar12 = lStack_70;
    if (lStack_78 != 0) {
      for (; lVar21 != lVar12; lVar12 = lVar12 + -0x18) {
        if ((*(byte *)(lVar12 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar12 + -8),
                          *(ulong *)(lVar12 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_70 = lVar21;
      func_0x0412a280(lStack_78,lStack_68 - lStack_78);
    }
    if ((bStack_298 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_281,CONCAT16(uStack_282,CONCAT51(uStack_287,uStack_288))),
                      CONCAT17(uStack_291,
                               CONCAT25(uStack_293,
                                        CONCAT14(uStack_294,
                                                 CONCAT22(uStack_296,CONCAT11(uStack_297,bStack_298)
                                                         )))) & 0xfffffffffffffffe);
    }
    if (DAT_0f649638 != '\0') goto LAB_09c7c18c;
  }
  else {
LAB_09c7ca4f:
    func_0x04882e30();
  }
  iVar9 = func_0x04108328(&DAT_0f649638);
  if (iVar9 != 0) {
    LOCK();
    UNLOCK();
    _DAT_0f649630 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649638);
  }
LAB_09c7c18c:
  bStack_298 = (byte)_DAT_0f649630;
  uStack_297 = (undefined1)((ushort)_DAT_0f649630 >> 8);
  uStack_290 = 0xf649158;
  uStack_28c = 0;
  uStack_28a = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  plStack_280 = (long *)0x0;
  uStack_278 = 0x6d6f630e;
  uStack_274 = 0x646e616d;
  uStack_270 = 0;
  puStack_260 = &DAT_01402601;
  uStack_258 = 0xffffffff;
  uStack_250 = 0;
  uStack_248 = _DAT_014e8380;
  uStack_244 = _UNK_014e8384;
  uStack_240 = _UNK_014e8388;
  uStack_23c = _UNK_014e838c;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  if ((DAT_0f649648 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649648), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f649640 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649648);
  }
  puStack_218 = (ulong *)CONCAT62(puStack_218._2_6_,_DAT_0f649640);
  puStack_210 = (ulong *)0xf64aa68;
  puStack_208 = (ulong *)0x0;
  uStack_200 = 0;
  bStack_1f8 = 0x10;
  uStack_1f7 = 0x5f696f70;
  uStack_1f3 = 0x74;
  uStack_1f2 = 0x79;
  uStack_1f1 = 0x70;
  uStack_1f0 = 0x65;
  uStack_1ef = 0;
  puStack_1e0 = (undefined *)0x0;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = _DAT_014e6950;
  uStack_1c4 = _UNK_014e6954;
  uStack_1c0 = _UNK_014e6958;
  uStack_1bc = _UNK_014e695c;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  bStack_118 = 0x20;
  uStack_117 = 0x39;
  uStack_116 = 0xef4;
  uStack_110 = 0xf0;
  uStack_10f = 0x9ce8e;
  func_0x049315d0(uStack_220,&UNK_01438166,0x7fffffff0000002c,&bStack_118,&bStack_298,&puStack_218);
  lVar12 = CONCAT62(uStack_116,CONCAT11(uStack_117,bStack_118));
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 8))(&bStack_118);
  }
  if ((bStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8)),
                    CONCAT17(uStack_1f1,
                             CONCAT16(uStack_1f2,
                                      CONCAT15(uStack_1f3,CONCAT41(uStack_1f7,bStack_1f8)))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  if ((DAT_0f649638 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649638), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f649630 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649638);
  }
  bStack_298 = (byte)_DAT_0f649630;
  uStack_297 = (undefined1)((ushort)_DAT_0f649630 >> 8);
  uStack_290 = 0xf649158;
  uStack_28c = 0;
  uStack_28a = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_282 = 0;
  uStack_281 = 0;
  plStack_280 = (long *)0x0;
  uStack_278 = 0x6d6f630e;
  uStack_274 = 0x646e616d;
  uStack_270 = 0;
  puStack_260 = &DAT_01402601;
  uStack_258 = 0xffffffff;
  uStack_250 = 0;
  uStack_248 = _DAT_014e7c50;
  uStack_244 = _UNK_014e7c54;
  uStack_240 = _UNK_014e7c58;
  uStack_23c = _UNK_014e7c5c;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  if ((DAT_0f649658 == '\0') && (iVar9 = func_0x04108328(&DAT_0f649658), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f649650 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649658);
  }
  puStack_218 = (ulong *)CONCAT62(puStack_218._2_6_,_DAT_0f649650);
  puStack_210 = (ulong *)0xf64aa80;
  puStack_208 = (ulong *)0x0;
  uStack_200 = 0;
  bStack_1f8 = 8;
  uStack_1f7 = 0x73676174;
  uStack_1f3 = 0;
  puStack_1e0 = (undefined *)0x0;
  uStack_1d8 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1c8 = _DAT_014e1420;
  uStack_1c4 = _UNK_014e1424;
  uStack_1c0 = _UNK_014e1428;
  uStack_1bc = _UNK_014e142c;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  bStack_118 = 0x20;
  uStack_117 = 0x39;
  uStack_116 = 0xef4;
  uStack_110 = 0xf0;
  uStack_10f = 0x9ce8e;
  func_0x049315d0(uStack_220,&UNK_01438166,0x7fffffff0000002c,&bStack_118,&bStack_298,&puStack_218);
  lVar12 = CONCAT62(uStack_116,CONCAT11(uStack_117,bStack_118));
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 8))(&bStack_118);
  }
  if ((bStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,uStack_1e8)),
                    CONCAT17(uStack_1f1,
                             CONCAT16(uStack_1f2,
                                      CONCAT15(uStack_1f3,CONCAT41(uStack_1f7,bStack_1f8)))) &
                    0xfffffffffffffffe);
  }
  puVar8 = puStack_188;
  puVar10 = puStack_180;
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(uStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
    puVar8 = puStack_188;
    puVar10 = puStack_180;
  }
  puStack_188 = puVar8;
  puStack_180 = puVar10;
  pbVar13 = pbStack_168;
  if (puVar8 != (undefined8 *)0x0) {
    for (; puVar8 != puVar10; puVar10 = puVar10 + -3) {
      if ((*(byte *)(puVar10 + -3) & 1) != 0) {
        func_0x0412a280(puVar10[-1],puVar10[-3] & 0xfffffffffffffffe);
      }
    }
    puStack_180 = puVar8;
    func_0x0412a280(puVar8,(long)puStack_178 - (long)puVar8);
    pbVar13 = pbStack_168;
  }
  pbStack_168 = pbVar13;
  pbVar7 = pbStack_160;
  if (pbVar13 != (byte *)0x0) {
    for (; pbVar13 != pbVar7; pbVar7 = pbVar7 + -0x18) {
      if ((pbVar7[-0x18] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar7 + -8),*(ulong *)(pbVar7 + -0x18) & 0xfffffffffffffffe
                       );
      }
    }
    pbStack_160 = pbVar13;
    func_0x0412a280(pbStack_168,(long)pbStack_158 - (long)pbStack_168);
  }
LAB_09c7c603:
  if (plStack_38 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_38 + 1;
    lVar12 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x0412c2d0(plStack_38);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x127c3f9  LocateSubcommandStructure
 * 0x127c402  commandStructure
 * 0x12faf01  useNewChunksOnly
 * 0x1402601  LocatePoiCommand
 * 0x1469662  LocateSubcommandBiome
 */
