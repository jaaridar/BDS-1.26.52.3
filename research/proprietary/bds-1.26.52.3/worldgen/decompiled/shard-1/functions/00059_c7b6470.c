/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8b6470 (ELF vaddr 0xc7b6470)
 * Label: string:Returns a Perlin simplex noise value for the given (x, z) po
 * Body:  [[0c8b6470, 0c8b6e0c]]
 * Ghidra: FUN_0c8b6470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8b6470(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bStack_358;
  undefined7 uStack_357;
  undefined4 uStack_350;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  undefined2 uStack_34a;
  uint uStack_348;
  undefined1 uStack_344;
  undefined1 uStack_343;
  undefined1 uStack_342;
  undefined1 uStack_341;
  undefined8 uStack_338;
  byte bStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined6 uStack_326;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  byte bStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined1 uStack_2ff;
  undefined6 uStack_2fe;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined1 uStack_2d7;
  undefined6 uStack_2d6;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  byte bStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined1 uStack_2af;
  undefined6 uStack_2ae;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  byte bStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined1 uStack_287;
  undefined6 uStack_286;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  byte bStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined6 uStack_25e;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined6 uStack_236;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte bStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined6 uStack_20e;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte bStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte bStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined6 uStack_1be;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined1 uStack_197;
  undefined6 uStack_196;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  byte bStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined6 uStack_16e;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined **ppuStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_108;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined **ppuStack_48;
  
  uVar2 = DAT_01591884;
  bStack_358 = 0x26;
  uStack_357 = (undefined7)_DAT_0121880b;
  uStack_350._0_1_ = (undefined1)((ulong)_DAT_0121880b >> 0x38);
  uStack_350._1_3_ = (undefined3)_UNK_01218813;
  uStack_34c = (undefined1)((ulong)_UNK_01218813 >> 0x18);
  uStack_34b = (undefined1)((ulong)_UNK_01218813 >> 0x20);
  uStack_34a = (undefined2)((ulong)_UNK_01218813 >> 0x28);
  uStack_348 = 0x6761745f;
  uStack_344 = 0;
  uStack_16e = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  bStack_178 = 0x12;
  uStack_177 = (undefined7)_DAT_0159187c;
  uVar3 = uStack_177;
  uStack_170 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
  uVar4 = uStack_170;
  uStack_16f = DAT_01591884;
  uStack_180 = 0x838dddc83a29ed6c;
  func_0x0b5dc1d0(&bStack_358,&uStack_180);
  if ((bStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
  }
  if ((bStack_358 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_341,
                             CONCAT16(uStack_342,
                                      CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)))),
                    CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
  }
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar1 = _UNK_014da7d3;
  uStack_348 = (uint)puVar5;
  uStack_344 = (undefined1)((ulong)puVar5 >> 0x20);
  uStack_343 = (undefined1)((ulong)puVar5 >> 0x28);
  uStack_342 = (undefined1)((ulong)puVar5 >> 0x30);
  uStack_341 = (undefined1)((ulong)puVar5 >> 0x38);
  bStack_358 = 0x21;
  uStack_357 = 0;
  uStack_350 = 0x18;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  *puVar5 = _DAT_014da7cb;
  puVar5[1] = uVar1;
  puVar5[2] = 0x736761745f656d6f;
  *(undefined1 *)(puVar5 + 3) = 0;
  uStack_196 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  bStack_1a0 = 0x12;
  uStack_197 = uVar2;
  uStack_1a8 = 0x838dddc83a29ed6c;
  uStack_19f = uVar3;
  uStack_198 = uVar4;
  func_0x0b5dc1d0(&bStack_358,&uStack_1a8);
  if ((bStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
  }
  if ((bStack_358 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_341,
                             CONCAT16(uStack_342,
                                      CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)))),
                    CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
  }
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar1 = _UNK_014097c7;
  uStack_348 = (uint)puVar5;
  uStack_344 = (undefined1)((ulong)puVar5 >> 0x20);
  uStack_343 = (undefined1)((ulong)puVar5 >> 0x28);
  uStack_342 = (undefined1)((ulong)puVar5 >> 0x30);
  uStack_341 = (undefined1)((ulong)puVar5 >> 0x38);
  bStack_358 = 0x21;
  uStack_357 = 0;
  uStack_350 = 0x18;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  *puVar5 = _DAT_014097bf;
  puVar5[1] = uVar1;
  puVar5[2] = 0x736761745f656d6f;
  *(undefined1 *)(puVar5 + 3) = 0;
  uStack_1be = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  bStack_1c8 = 0x12;
  uStack_1bf = uVar2;
  uStack_1d0 = 0x838dddc83a29ed6c;
  uStack_1c7 = uVar3;
  uStack_1c0 = uVar4;
  func_0x0b5dc1d0(&bStack_358,&uStack_1d0);
  if ((bStack_1c8 & 1) != 0) {
    func_0x0412a280(uStack_1b8,CONCAT71(uStack_1c7,bStack_1c8) & 0xfffffffffffffffe);
  }
  if ((bStack_358 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_341,
                             CONCAT16(uStack_342,
                                      CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)))),
                    CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
  }
  bStack_358 = 0x16;
  uStack_357 = 0x6e2e7972657571;
  uStack_350 = 0x6573696f;
  uStack_34c = 0;
  uStack_1e6 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  bStack_1f0 = 0x12;
  uStack_1e7 = uVar2;
  uStack_1f8 = 0x838dddc83a29ed6c;
  uStack_1ef = uVar3;
  uStack_1e8 = uVar4;
  func_0x0b5dc1d0(&bStack_358,&uStack_1f8);
  if ((bStack_1f0 & 1) != 0) {
    func_0x0412a280(uStack_1e0,CONCAT71(uStack_1ef,bStack_1f0) & 0xfffffffffffffffe);
  }
  if ((bStack_358 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_341,
                             CONCAT16(uStack_342,
                                      CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)))),
                    CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
  }
  bStack_358 = 0x1e;
  uStack_357 = 0x682e7972657571;
  uStack_350 = 0x68676965;
  uStack_34c = 0x74;
  uStack_34b = 0x6d;
  uStack_34a = 0x7061;
  uStack_348 = uStack_348 & 0xffffff00;
  uStack_20e = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  bStack_218 = 0x12;
  uStack_20f = uVar2;
  uStack_220 = 0x838dddc83a29ed6c;
  uStack_217 = uVar3;
  uStack_210 = uVar4;
  func_0x0b5dc1d0(&bStack_358,&uStack_220);
  if ((bStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,CONCAT71(uStack_217,bStack_218) & 0xfffffffffffffffe);
  }
  if ((bStack_358 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_341,
                             CONCAT16(uStack_342,
                                      CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)))),
                    CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
  }
  bStack_358 = 0x2a;
  uStack_357 = (undefined7)_DAT_013520da;
  uStack_350._0_1_ = (undefined1)((ulong)_DAT_013520da >> 0x38);
  uStack_350._1_3_ = (undefined3)_UNK_013520e2;
  uStack_34c = (undefined1)((ulong)_UNK_013520e2 >> 0x18);
  uStack_34b = (undefined1)((ulong)_UNK_013520e2 >> 0x20);
  uStack_34a = 0x706f;
  uStack_348 = 0x6c6f735f;
  uStack_344 = 0x69;
  uStack_343 = 100;
  uStack_342 = 0;
  uStack_236 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  bStack_240 = 0x12;
  uStack_237 = uVar2;
  uStack_248 = 0x838dddc83a29ed6c;
  uStack_23f = uVar3;
  uStack_238 = uVar4;
  func_0x0b5dc1d0(&bStack_358,&uStack_248);
  if ((bStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,CONCAT71(uStack_23f,bStack_240) & 0xfffffffffffffffe);
  }
  if ((bStack_358 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_341,
                             CONCAT16(uStack_342,
                                      CONCAT15(uStack_343,CONCAT14(uStack_344,uStack_348)))),
                    CONCAT71(uStack_357,bStack_358) & 0xfffffffffffffffe);
  }
  puStack_68 = &UNK_0f2c7e40;
  puStack_60 = &UNK_0c8b7040;
  uStack_25e = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  bStack_268 = 0x12;
  uStack_25f = uVar2;
  uStack_270 = 0x838dddc83a29ed6c;
  bStack_358 = 0;
  uStack_357 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  uStack_267 = uVar3;
  uStack_260 = uVar4;
  ppuStack_48 = &puStack_68;
  func_0x0b5dad10(&DAT_0121880b,0x13,&puStack_68,&UNK_0121881f,0x91,0x20000,&uStack_270,0,
                  0xffffffffffffffff,&bStack_358);
  if ((bStack_268 & 1) != 0) {
    func_0x0412a280(uStack_258,CONCAT71(uStack_267,bStack_268) & 0xfffffffffffffffe);
  }
  if (ppuStack_48 == &puStack_68) {
    lVar6 = 0x20;
LAB_0c8b69ab:
    (**(code **)(*ppuStack_48 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0c8b69ab;
  }
  puStack_98 = &UNK_0f2c7e40;
  puStack_90 = &UNK_0c8b72e0;
  uStack_286 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  bStack_290 = 0x12;
  uStack_287 = uVar2;
  uStack_298 = 0x838dddc83a29ed6c;
  bStack_358 = 0;
  uStack_357 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  uStack_28f = uVar3;
  uStack_288 = uVar4;
  ppuStack_78 = &puStack_98;
  func_0x0b5dad10(&DAT_014da7cb,0x18,&puStack_98,&UNK_011e2e09,0x85,0x20000,&uStack_298,0,
                  0xffffffffffffffff,&bStack_358);
  if ((bStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,CONCAT71(uStack_28f,bStack_290) & 0xfffffffffffffffe);
  }
  if (ppuStack_78 == &puStack_98) {
    lVar6 = 0x20;
LAB_0c8b6a8d:
    (**(code **)(*ppuStack_78 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_78 != (undefined **)0x0) goto LAB_0c8b6a8d;
  }
  puStack_c8 = &UNK_0f2c7e40;
  puStack_c0 = &UNK_0c8b74f0;
  uStack_2ae = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  bStack_2b8 = 0x12;
  uStack_2af = uVar2;
  uStack_2c0 = 0x838dddc83a29ed6c;
  bStack_358 = 0;
  uStack_357 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  uStack_2b7 = uVar3;
  uStack_2b0 = uVar4;
  ppuStack_a8 = &puStack_c8;
  func_0x0b5dad10(&DAT_014097bf,0x18,&puStack_c8,&UNK_011fed81,0x7c,0x20000,&uStack_2c0,0,
                  0xffffffffffffffff,&bStack_358);
  if ((bStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
  }
  if (ppuStack_a8 == &puStack_c8) {
    lVar6 = 0x20;
LAB_0c8b6b6f:
    (**(code **)(*ppuStack_a8 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_a8 != (undefined **)0x0) goto LAB_0c8b6b6f;
  }
  puStack_f8 = &UNK_0f2c7e40;
  puStack_f0 = &UNK_0c8b7700;
  uStack_2d6 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  bStack_2e0 = 0x12;
  uStack_2d7 = uVar2;
  uStack_2e8 = 0x838dddc83a29ed6c;
  bStack_358 = 0;
  uStack_357 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  uStack_2df = uVar3;
  uStack_2d8 = uVar4;
  ppuStack_d8 = &puStack_f8;
  func_0x0b5dad10(&UNK_0146fb1a,0xb,&puStack_f8,&UNK_012336aa,0x43,1,&uStack_2e8,0,
                  0xffffffffffffffff,&bStack_358);
  if ((bStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,CONCAT71(uStack_2df,bStack_2e0) & 0xfffffffffffffffe);
  }
  if (ppuStack_d8 == &puStack_f8) {
    lVar6 = 0x20;
LAB_0c8b6c3f:
    (**(code **)(*ppuStack_d8 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_d8 != (undefined **)0x0) goto LAB_0c8b6c3f;
  }
  puStack_128 = &UNK_0f2c7e40;
  puStack_120 = &UNK_0c8b7910;
  uStack_2fe = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  bStack_308 = 0x12;
  uStack_2ff = uVar2;
  uStack_310 = 0x838dddc83a29ed6c;
  bStack_358 = 0;
  uStack_357 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  uStack_307 = uVar3;
  uStack_300 = uVar4;
  ppuStack_108 = &puStack_128;
  func_0x0b5dad10(&UNK_01423319,0xf,&puStack_128,&UNK_011ae51a,0x39,1,&uStack_310,0,
                  0xffffffffffffffff,&bStack_358);
  if ((bStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,CONCAT71(uStack_307,bStack_308) & 0xfffffffffffffffe);
  }
  if (ppuStack_108 == &puStack_128) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_108 == (undefined **)0x0) goto LAB_0c8b6d09;
  }
  (**(code **)(*ppuStack_108 + lVar6))();
LAB_0c8b6d09:
  puStack_158 = &UNK_0f2c7e40;
  puStack_150 = &UNK_0c8b7a60;
  uStack_326 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  bStack_330 = 0x12;
  uStack_327 = uVar2;
  uStack_338 = 0x838dddc83a29ed6c;
  bStack_358 = 0;
  uStack_357 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_34b = 0;
  uStack_34a = 0;
  uStack_32f = uVar3;
  uStack_328 = uVar4;
  ppuStack_138 = &puStack_158;
  func_0x0b5dad10(&DAT_013520da,0x15,&puStack_158,&UNK_0146fb26,0x66,1,&uStack_338,0,
                  0xffffffffffffffff,&bStack_358);
  if ((bStack_330 & 1) != 0) {
    func_0x0412a280(uStack_320,CONCAT71(uStack_32f,bStack_330) & 0xfffffffffffffffe);
  }
  if (ppuStack_138 == &puStack_158) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_138 == (undefined **)0x0) {
      return;
    }
  }
  (**(code **)(*ppuStack_138 + lVar6))();
  return;
}



/* ---- referenced strings ----
 * 0x121880b  query.has_biome_tag
 * 0x13520da  query.above_top_solid
 * 0x14097bf  query.has_all_biome_tags
 * 0x14da7cb  query.has_any_biome_tags
 * 0x159187c  world_gen
 */
