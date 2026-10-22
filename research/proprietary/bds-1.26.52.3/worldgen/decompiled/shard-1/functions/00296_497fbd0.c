/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a7fbd0 (ELF vaddr 0x497fbd0)
 * Label: caller-of-seed
 * Body:  [[04a7fbd0, 04a80afe]]
 * Ghidra: FUN_04a7fbd0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a7fbd0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  byte bStack_470;
  undefined4 uStack_46f;
  undefined2 uStack_46b;
  undefined1 uStack_469;
  undefined8 uStack_460;
  byte bStack_458;
  undefined7 uStack_457;
  undefined8 uStack_448;
  byte bStack_440;
  undefined7 uStack_43f;
  undefined8 uStack_430;
  byte bStack_428;
  undefined7 uStack_427;
  undefined8 uStack_418;
  byte bStack_410;
  undefined7 uStack_40f;
  undefined8 uStack_400;
  byte bStack_3f8;
  undefined7 uStack_3f7;
  undefined8 uStack_3e8;
  byte bStack_3e0;
  undefined7 uStack_3df;
  undefined8 uStack_3d0;
  byte *apbStack_3c8 [2];
  undefined8 uStack_3b8;
  byte bStack_3b0;
  undefined7 uStack_3af;
  undefined8 uStack_3a0;
  byte bStack_398;
  undefined7 uStack_397;
  undefined8 uStack_388;
  byte bStack_380;
  undefined7 uStack_37f;
  undefined8 uStack_370;
  byte bStack_368;
  undefined7 uStack_367;
  undefined8 uStack_358;
  byte bStack_350;
  undefined7 uStack_34f;
  undefined8 uStack_340;
  byte bStack_338;
  undefined7 uStack_337;
  undefined8 uStack_328;
  byte bStack_320;
  undefined7 uStack_31f;
  undefined8 uStack_310;
  byte bStack_308;
  undefined7 uStack_307;
  undefined8 uStack_2f8;
  byte bStack_2f0;
  undefined7 uStack_2ef;
  undefined8 uStack_2e0;
  byte bStack_2d8;
  undefined7 uStack_2d7;
  undefined8 uStack_2c8;
  byte bStack_2c0;
  undefined7 uStack_2bf;
  undefined8 uStack_2b0;
  byte bStack_2a8;
  undefined7 uStack_2a7;
  undefined8 uStack_298;
  byte bStack_290;
  undefined7 uStack_28f;
  undefined8 uStack_280;
  byte bStack_278;
  undefined7 uStack_277;
  undefined8 uStack_268;
  byte bStack_260;
  undefined7 uStack_25f;
  undefined8 uStack_250;
  byte bStack_248;
  undefined7 uStack_247;
  undefined8 uStack_238;
  byte bStack_230;
  undefined7 uStack_22f;
  undefined8 uStack_220;
  byte bStack_218;
  undefined7 uStack_217;
  undefined8 uStack_208;
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  undefined7 uStack_1e7;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined8 uStack_1c0;
  byte bStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  byte bStack_188;
  undefined7 uStack_187;
  undefined8 uStack_178;
  byte bStack_170;
  undefined7 uStack_16f;
  undefined8 uStack_160;
  byte bStack_158;
  undefined7 uStack_157;
  undefined8 uStack_148;
  byte bStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0ca5fb20();
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x100);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x100,0);
  }
  *puVar3 = uVar5;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(undefined4 *)((long)puVar3 + 0x37) = 0;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  *(undefined4 *)((long)puVar3 + 0x44) = 0xffffffff;
  *(undefined4 *)(puVar3 + 9) = 0xffffffff;
  *(undefined4 *)((long)puVar3 + 0x4c) = 0xffffffff;
  *(undefined4 *)(puVar3 + 10) = 0xffffffff;
  *(undefined8 *)((long)puVar3 + 0x54) = 0x8000000000;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0;
  *(undefined8 *)((long)puVar3 + 100) = 0;
  *(undefined8 *)((long)puVar3 + 0x6c) = 0;
  *(undefined8 *)((long)puVar3 + 0x74) = 0;
  *(undefined8 *)((long)puVar3 + 0x79) = 0;
  *(undefined1 *)(puVar3 + 0x11) = 1;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  *(undefined1 *)(puVar3 + 0x15) = 1;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  *(undefined4 *)(puVar3 + 0x18) = 0;
  *(undefined1 *)(puVar3 + 0x19) = 2;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  if ((DAT_0f556b00 != '\0') || (iVar2 = func_0x04108328(&DAT_0f556b00), iVar2 == 0))
  goto LAB_04a7fcc7;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  func_0x04160690(&bStack_470,&UNK_01447545);
  func_0x04160690(&bStack_458,&UNK_01447545);
  func_0x04160690(&bStack_440,&UNK_01447545);
  func_0x04160690(&bStack_428,&UNK_014c8fe6);
  func_0x04160690(&bStack_410,&UNK_01447545);
  func_0x04160690(&bStack_3f8,&UNK_01447545);
  func_0x04160690(&bStack_3e0,&UNK_01447545);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x048f5d50(&uStack_a8,&bStack_470,apbStack_3c8,7);
  func_0x0c9ce9d0(&uStack_88,&uStack_a8);
  func_0x04160690(apbStack_3c8,&UNK_01447545);
  func_0x04160690(&bStack_3b0,&UNK_01447545);
  func_0x04160690(&bStack_398,&UNK_01447545);
  func_0x04160690(&bStack_380,&UNK_014c8fe6);
  func_0x04160690(&bStack_368,&UNK_01447545);
  func_0x04160690(&bStack_350,&UNK_01447545);
  func_0x04160690(&bStack_338,&UNK_01447545);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x048f5d50(&uStack_c8,apbStack_3c8,&bStack_320,7);
  func_0x0c9ce9d0(&uStack_88,&uStack_c8);
  func_0x04160690(&bStack_320,&UNK_01447545);
  func_0x04160690(&bStack_308,&UNK_01447545);
  func_0x04160690(&bStack_2f0,&UNK_01447545);
  func_0x04160690(&bStack_2d8,&UNK_014c8fe6);
  func_0x04160690(&bStack_2c0,&UNK_01447545);
  func_0x04160690(&bStack_2a8,&UNK_01447545);
  func_0x04160690(&bStack_290,&UNK_01447545);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x048f5d50(&uStack_e8,&bStack_320,&bStack_278,7);
  func_0x0c9ce9d0(&uStack_88,&uStack_e8);
  func_0x04160690(&bStack_1d0,&UNK_01412302);
  func_0x04160690(&bStack_1b8,&UNK_01494c94);
  func_0x04160690(&bStack_1a0,&UNK_0123ca01);
  func_0x04160690(&bStack_188,&UNK_012718db);
  func_0x04160690(&bStack_170,&UNK_0123ca01);
  func_0x04160690(&bStack_158,&UNK_01494c94);
  func_0x04160690(&bStack_140,&UNK_01412302);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x048f5d50(&uStack_108,&bStack_1d0,&uStack_128,7);
  func_0x0c9ce9d0(&uStack_88,&uStack_108);
  func_0x04160690(&bStack_278,&UNK_01447545);
  func_0x04160690(&bStack_260,&UNK_01412302);
  func_0x04160690(&bStack_248,&UNK_0144754d);
  func_0x04160690(&bStack_230,&UNK_0144754d);
  func_0x04160690(&bStack_218,&UNK_0144754d);
  func_0x04160690(&bStack_200,&UNK_01412302);
  func_0x04160690(&bStack_1e8,&UNK_01447545);
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x048f5d50(&uStack_128,&bStack_278,&bStack_1d0,7);
  func_0x0c9ce9d0(&uStack_88,&uStack_128);
  func_0x0c9cea40(&uStack_88,0x23,&DAT_0f713fc8);
  func_0x0c9cf370(0xf556ab0,&uStack_88);
  func_0x04886070(&uStack_128);
  if ((bStack_1e8 & 1) == 0) {
    if ((bStack_200 & 1) == 0) goto LAB_04a80385;
LAB_04a805e6:
    func_0x0412a280(uStack_1f0,CONCAT71(uStack_1ff,bStack_200) & 0xfffffffffffffffe);
    if ((bStack_218 & 1) != 0) goto LAB_04a8060d;
LAB_04a80393:
    if ((bStack_230 & 1) == 0) goto LAB_04a803a1;
LAB_04a80634:
    func_0x0412a280(uStack_220,CONCAT71(uStack_22f,bStack_230) & 0xfffffffffffffffe);
    if ((bStack_248 & 1) != 0) goto LAB_04a8065b;
LAB_04a803af:
    if ((bStack_260 & 1) == 0) goto LAB_04a803bd;
LAB_04a80682:
    func_0x0412a280(uStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
    if ((bStack_278 & 1) != 0) goto LAB_04a806a9;
LAB_04a803cb:
    func_0x04886070(&uStack_108);
    if ((bStack_140 & 1) == 0) goto LAB_04a803e6;
LAB_04a806dd:
    func_0x0412a280(uStack_130,CONCAT71(uStack_13f,bStack_140) & 0xfffffffffffffffe);
    if ((bStack_158 & 1) != 0) goto LAB_04a80704;
LAB_04a803f4:
    if ((bStack_170 & 1) == 0) goto LAB_04a80402;
LAB_04a8072b:
    func_0x0412a280(uStack_160,CONCAT71(uStack_16f,bStack_170) & 0xfffffffffffffffe);
    if ((bStack_188 & 1) != 0) goto LAB_04a80752;
LAB_04a80410:
    if ((bStack_1a0 & 1) == 0) goto LAB_04a8041e;
LAB_04a80779:
    func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
    if ((bStack_1b8 & 1) != 0) goto LAB_04a807a0;
LAB_04a8042c:
    if ((bStack_1d0 & 1) == 0) goto LAB_04a8043a;
LAB_04a807c7:
    func_0x0412a280(uStack_1c0,CONCAT71(uStack_1cf,bStack_1d0) & 0xfffffffffffffffe);
    func_0x04886070(&uStack_e8);
    if ((bStack_290 & 1) != 0) goto LAB_04a807fb;
LAB_04a80455:
    if ((bStack_2a8 & 1) == 0) goto LAB_04a80463;
LAB_04a80822:
    func_0x0412a280(uStack_298,CONCAT71(uStack_2a7,bStack_2a8) & 0xfffffffffffffffe);
    if ((bStack_2c0 & 1) != 0) goto LAB_04a80849;
LAB_04a80471:
    if ((bStack_2d8 & 1) == 0) goto LAB_04a8047f;
LAB_04a80870:
    func_0x0412a280(uStack_2c8,CONCAT71(uStack_2d7,bStack_2d8) & 0xfffffffffffffffe);
    if ((bStack_2f0 & 1) != 0) goto LAB_04a80897;
LAB_04a8048d:
    if ((bStack_308 & 1) == 0) goto LAB_04a8049b;
LAB_04a808be:
    func_0x0412a280(uStack_2f8,CONCAT71(uStack_307,bStack_308) & 0xfffffffffffffffe);
    if ((bStack_320 & 1) != 0) goto LAB_04a808e5;
LAB_04a804a9:
    func_0x04886070(&uStack_c8);
    if ((bStack_338 & 1) == 0) goto LAB_04a804c4;
LAB_04a80919:
    func_0x0412a280(uStack_328,CONCAT71(uStack_337,bStack_338) & 0xfffffffffffffffe);
    if ((bStack_350 & 1) != 0) goto LAB_04a80940;
LAB_04a804d2:
    if ((bStack_368 & 1) == 0) goto LAB_04a804e0;
LAB_04a80967:
    func_0x0412a280(uStack_358,CONCAT71(uStack_367,bStack_368) & 0xfffffffffffffffe);
    if ((bStack_380 & 1) != 0) goto LAB_04a8098e;
LAB_04a804ee:
    if ((bStack_398 & 1) == 0) goto LAB_04a804fc;
LAB_04a809b5:
    func_0x0412a280(uStack_388,CONCAT71(uStack_397,bStack_398) & 0xfffffffffffffffe);
    if ((bStack_3b0 & 1) != 0) goto LAB_04a809dc;
LAB_04a8050a:
    if (((ulong)apbStack_3c8[0] & 1) == 0) goto LAB_04a80518;
LAB_04a80a03:
    func_0x0412a280(uStack_3b8,(ulong)apbStack_3c8[0] & 0xfffffffffffffffe);
    func_0x04886070(&uStack_a8);
  }
  else {
    func_0x0412a280(uStack_1d8,CONCAT71(uStack_1e7,bStack_1e8) & 0xfffffffffffffffe);
    if ((bStack_200 & 1) != 0) goto LAB_04a805e6;
LAB_04a80385:
    if ((bStack_218 & 1) == 0) goto LAB_04a80393;
LAB_04a8060d:
    func_0x0412a280(uStack_208,CONCAT71(uStack_217,bStack_218) & 0xfffffffffffffffe);
    if ((bStack_230 & 1) != 0) goto LAB_04a80634;
LAB_04a803a1:
    if ((bStack_248 & 1) == 0) goto LAB_04a803af;
LAB_04a8065b:
    func_0x0412a280(uStack_238,CONCAT71(uStack_247,bStack_248) & 0xfffffffffffffffe);
    if ((bStack_260 & 1) != 0) goto LAB_04a80682;
LAB_04a803bd:
    if ((bStack_278 & 1) == 0) goto LAB_04a803cb;
LAB_04a806a9:
    func_0x0412a280(uStack_268,CONCAT71(uStack_277,bStack_278) & 0xfffffffffffffffe);
    func_0x04886070(&uStack_108);
    if ((bStack_140 & 1) != 0) goto LAB_04a806dd;
LAB_04a803e6:
    if ((bStack_158 & 1) == 0) goto LAB_04a803f4;
LAB_04a80704:
    func_0x0412a280(uStack_148,CONCAT71(uStack_157,bStack_158) & 0xfffffffffffffffe);
    if ((bStack_170 & 1) != 0) goto LAB_04a8072b;
LAB_04a80402:
    if ((bStack_188 & 1) == 0) goto LAB_04a80410;
LAB_04a80752:
    func_0x0412a280(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
    if ((bStack_1a0 & 1) != 0) goto LAB_04a80779;
LAB_04a8041e:
    if ((bStack_1b8 & 1) == 0) goto LAB_04a8042c;
LAB_04a807a0:
    func_0x0412a280(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
    if ((bStack_1d0 & 1) != 0) goto LAB_04a807c7;
LAB_04a8043a:
    func_0x04886070(&uStack_e8);
    if ((bStack_290 & 1) == 0) goto LAB_04a80455;
LAB_04a807fb:
    func_0x0412a280(uStack_280,CONCAT71(uStack_28f,bStack_290) & 0xfffffffffffffffe);
    if ((bStack_2a8 & 1) != 0) goto LAB_04a80822;
LAB_04a80463:
    if ((bStack_2c0 & 1) == 0) goto LAB_04a80471;
LAB_04a80849:
    func_0x0412a280(uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0) & 0xfffffffffffffffe);
    if ((bStack_2d8 & 1) != 0) goto LAB_04a80870;
LAB_04a8047f:
    if ((bStack_2f0 & 1) == 0) goto LAB_04a8048d;
LAB_04a80897:
    func_0x0412a280(uStack_2e0,CONCAT71(uStack_2ef,bStack_2f0) & 0xfffffffffffffffe);
    if ((bStack_308 & 1) != 0) goto LAB_04a808be;
LAB_04a8049b:
    if ((bStack_320 & 1) == 0) goto LAB_04a804a9;
LAB_04a808e5:
    func_0x0412a280(uStack_310,CONCAT71(uStack_31f,bStack_320) & 0xfffffffffffffffe);
    func_0x04886070(&uStack_c8);
    if ((bStack_338 & 1) != 0) goto LAB_04a80919;
LAB_04a804c4:
    if ((bStack_350 & 1) == 0) goto LAB_04a804d2;
LAB_04a80940:
    func_0x0412a280(uStack_340,CONCAT71(uStack_34f,bStack_350) & 0xfffffffffffffffe);
    if ((bStack_368 & 1) != 0) goto LAB_04a80967;
LAB_04a804e0:
    if ((bStack_380 & 1) == 0) goto LAB_04a804ee;
LAB_04a8098e:
    func_0x0412a280(uStack_370,CONCAT71(uStack_37f,bStack_380) & 0xfffffffffffffffe);
    if ((bStack_398 & 1) != 0) goto LAB_04a809b5;
LAB_04a804fc:
    if ((bStack_3b0 & 1) == 0) goto LAB_04a8050a;
LAB_04a809dc:
    func_0x0412a280(uStack_3a0,CONCAT71(uStack_3af,bStack_3b0) & 0xfffffffffffffffe);
    if (((ulong)apbStack_3c8[0] & 1) != 0) goto LAB_04a80a03;
LAB_04a80518:
    func_0x04886070(&uStack_a8);
  }
  if ((bStack_3e0 & 1) != 0) {
    func_0x0412a280(uStack_3d0,CONCAT71(uStack_3df,bStack_3e0) & 0xfffffffffffffffe);
  }
  if ((bStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,CONCAT71(uStack_3f7,bStack_3f8) & 0xfffffffffffffffe);
  }
  if ((bStack_410 & 1) != 0) {
    func_0x0412a280(uStack_400,CONCAT71(uStack_40f,bStack_410) & 0xfffffffffffffffe);
  }
  if ((bStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,CONCAT71(uStack_427,bStack_428) & 0xfffffffffffffffe);
  }
  if ((bStack_440 & 1) != 0) {
    func_0x0412a280(uStack_430,CONCAT71(uStack_43f,bStack_440) & 0xfffffffffffffffe);
  }
  if ((bStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,CONCAT71(uStack_457,bStack_458) & 0xfffffffffffffffe);
  }
  if ((bStack_470 & 1) != 0) {
    func_0x0412a280(uStack_460,
                    CONCAT17(uStack_469,CONCAT25(uStack_46b,CONCAT41(uStack_46f,bStack_470))) &
                    0xfffffffffffffffe);
  }
  func_0x04aa1cc0(&uStack_88);
  __cxa_atexit(&SUB_04aa1cc0,0xf556ab0,0xf53dab8);
  func_0x0410844d(&DAT_0f556b00);
LAB_04a7fcc7:
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puVar4 = uVar5;
  puVar4[1] = 0xf556ab0;
  lVar6 = puVar3[4];
  puVar3[4] = puVar4;
  if (lVar6 != 0) {
    func_0x0412a280(lVar6,0x10);
  }
  lVar6 = *(long *)(param_1 + 0x4b8);
  *(undefined8 **)(param_1 + 0x4b8) = puVar3;
  if (lVar6 != 0) {
    func_0x04aa4aa0(lVar6);
    func_0x0412a280(lVar6,0x100);
  }
  cVar1 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x550))();
  if (cVar1 != '\0') {
    uVar5 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x860))();
    bStack_470 = 0xc;
    uStack_46f = 0x45656854;
    uStack_46b = 0x646e;
    uStack_469 = 0;
    cVar1 = func_0x0d1d92e0(uVar5,param_1 + 0x10,&bStack_470);
    if ((bStack_470 & 1) != 0) {
      func_0x0412a280(uStack_460,
                      CONCAT17(uStack_469,CONCAT25(uStack_46b,CONCAT41(uStack_46f,bStack_470))) &
                      0xfffffffffffffffe);
    }
    if (cVar1 == '\0') {
      lVar6 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x860))();
      bStack_470 = 0xc;
      uStack_46f = 0x45656854;
      uStack_46b = 0x646e;
      uStack_469 = 0;
      apbStack_3c8[0] = &bStack_470;
      lVar6 = FUN_0d1ea5b0(lVar6 + 0x10,&bStack_470,&UNK_01563a4f,apbStack_3c8,&bStack_320);
      *(long *)(lVar6 + 0x28) = param_1 + 0x10;
      if ((bStack_470 & 1) != 0) {
        func_0x0412a280(uStack_460,
                        CONCAT17(uStack_469,CONCAT25(uStack_46b,CONCAT41(uStack_46f,bStack_470))) &
                        0xfffffffffffffffe);
      }
    }
  }
  return;
}


