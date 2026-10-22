/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd614100 (ELF vaddr 0xd514100)
 * Label: caller-of-callee
 * Body:  [[0d614100, 0d614525] [0d614530, 0d614591] [0d6145a0, 0d614785] [0d614790, 0d6147ea] [0d6147f0, 0d614a30] [0d614a40, 0d614abb] [0d614ac0, 0d614d23] [0d614d30, 0d614db8] [0d614dc0, 0d614ff5] [0d615000, 0d6150c2] [0d6150d0, 0d6151e5] [0d6151f0, 0d615324] [0d615330, 0d6157bc] [0d6157c0, 0d61581a] [0d615820, 0d615ce1] [0d615cf0, 0d615d4a] [0d615d50, 0d61659d] [0d6165a0, 0d61665c] [0d616660, 0d6166e5] [0d6166f0, 0d616a1e] [0d616a20, 0d616a81] [0d616a90, 0d616bcc] [0d616bd0, 0d616c2a] [0d616c30, 0d616cc2] [0d616cd0, 0d6170b2] [0d6170c0, 0d61737d] [0d617380, 0d6173db] [0d6173e0, 0d61752d] [0d617530, 0d61758a] [0d617590, 0d61798d] [0d617990, 0d6179fe] [0d617a00, 0d617b5b] [0d617b60, 0d617d6d] [0d617d70, 0d61853c] [0d618540, 0d61859a] [0d6185a0, 0d6189eb] [0d6189f0, 0d618a51] [0d618a60, 0d618adc] [0d618ae0, 0d619234] [0d619240, 0d6192c9] [0d6192d0, 0d61939c] [0d6193a0, 0d61946a] [0d619470, 0d6196b1] [0d6196c0, 0d619772] [0d619780, 0d6199d7] [0d6199e0, 0d619a3a] [0d619a40, 0d619ac9] [0d619ad0, 0d619d49] [0d619d50, 0d619dd8] [0d619de0, 0d619fdb] [0d61a00a, 0d61a03d] [0d61a96f, 0d61a97c] [0d61aff9, 0d61b039] [0d61b0ba, 0d61b113]]
 * Ghidra: FUN_0d614100
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0d614100(undefined1 *param_1,long *param_2,undefined8 param_3,ulong *******param_4,long param_5,
            long param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  uint *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  ulong ******ppppppuVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  byte *pbVar20;
  long *plVar21;
  ulong *******pppppppuVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  uint uVar28;
  int *piVar29;
  byte *extraout_RDX;
  ulong *******pppppppuVar30;
  ulong uVar31;
  ulong uVar32;
  ulong *******pppppppuVar33;
  long lVar34;
  undefined *puVar35;
  ulong uVar36;
  long lVar37;
  ulong ******ppppppuVar38;
  long lVar39;
  ulong uVar40;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined1 uStack_41c;
  undefined1 uStack_41b;
  byte bStack_41a;
  undefined1 uStack_419;
  ulong *******pppppppuStack_418;
  uint uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  uint uStack_404;
  ulong ******ppppppuStack_400;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong *******pppppppuStack_3d8;
  ulong ******ppppppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  ulong *******pppppppuStack_3b8;
  ulong *******pppppppuStack_3b0;
  ulong *******pppppppuStack_3a8;
  undefined1 uStack_3a0;
  long lStack_390;
  undefined8 uStack_388;
  uint uStack_380;
  undefined1 uStack_37c;
  undefined1 uStack_37b;
  undefined2 uStack_37a;
  ulong *******pppppppuStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined4 uStack_358;
  undefined1 uStack_354;
  undefined1 uStack_353;
  undefined2 uStack_352;
  char cStack_350;
  undefined1 uStack_34f;
  undefined2 uStack_34e;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  undefined1 uStack_34a;
  undefined1 uStack_349;
  char cStack_348;
  uint6 uStack_347;
  undefined1 uStack_341;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  uint uStack_328;
  undefined1 uStack_320;
  byte bStack_298;
  byte bStack_297;
  undefined2 uStack_296;
  undefined1 uStack_294;
  undefined1 uStack_293;
  undefined2 uStack_292;
  uint uStack_290;
  undefined1 uStack_28c;
  ushort uStack_28b;
  undefined1 uStack_289;
  char cStack_288;
  undefined1 auStack_287 [6];
  undefined1 uStack_281;
  ulong ******ppppppuStack_280;
  ulong ******ppppppuStack_278;
  ulong ******ppppppuStack_270;
  uint uStack_230;
  ulong *******pppppppuStack_228;
  ulong *******pppppppuStack_220;
  ulong *******pppppppuStack_218;
  ulong *******pppppppuStack_210;
  ulong *******pppppppuStack_208;
  ulong *******pppppppuStack_200;
  ulong *******pppppppuStack_1f8;
  ulong *******pppppppuStack_1e8;
  ulong *******pppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  undefined1 auStack_1c8 [16];
  ulong *******pppppppuStack_1b8;
  uint uStack_1ac;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  ulong *******pppppppuStack_170;
  ulong ******ppppppuStack_168;
  ulong ******ppppppuStack_160;
  ulong ******ppppppuStack_158;
  undefined2 uStack_142;
  ulong *******pppppppuStack_140;
  undefined1 uStack_138;
  uint uStack_12c;
  byte *pbStack_128;
  long lStack_120;
  ulong *******pppppppuStack_118;
  ulong *******pppppppuStack_110;
  long lStack_108;
  ulong ******ppppppuStack_f8;
  ulong ******ppppppuStack_f0;
  long lStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******apppppppuStack_d8 [2];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong *******apppppppuStack_88 [2];
  uint *puStack_78;
  undefined8 uStack_70;
  ulong uStack_60;
  long lStack_58;
  ulong *******pppppppuStack_50;
  ulong *******pppppppuStack_48;
  undefined1 auStack_40 [16];
  
  if (((param_4 == (ulong *******)0x0) || (param_5 == 0)) || (param_6 == 0)) {
    *param_1 = 0;
    param_1[0x38] = 0;
    param_1[0x80] = 0;
    param_1[0x88] = 0;
    param_1[0xa0] = 0;
    param_1[0xa8] = 0;
    param_1[0xc0] = 0;
    param_1[0xd0] = 0;
    param_1[0xe8] = 0;
    param_1[0x120] = 0;
    param_1[0x128] = 0;
    param_1[0x140] = 0;
    param_1[0x148] = 0;
    param_1[0x160] = 0;
    param_1[0x168] = 0;
    param_1[0x180] = 0;
    param_1[0x188] = 0;
    param_1[0x228] = 0;
    *(undefined2 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x11) = 0;
    *(undefined8 *)(param_1 + 0x19) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x59) = 0;
    *(undefined8 *)(param_1 + 0x61) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xf9) = 0;
    *(undefined8 *)(param_1 + 0x101) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return param_1;
  }
  lStack_3f0 = param_6;
  lStack_390 = param_5;
  pppppppuStack_170 = param_4;
  func_0x04863060(auStack_1c8,0);
  (**(code **)(*param_2 + 0x18))(param_2);
  bVar12 = *extraout_RDX;
  uVar32 = *(ulong *)(extraout_RDX + 8);
  pbVar26 = *(byte **)(extraout_RDX + 0x10);
  func_0x0485e1c0(&uStack_358);
  if ((bVar12 & 1) == 0) {
    pbVar26 = extraout_RDX + 1;
    uVar32 = (ulong)(bVar12 >> 1);
  }
  cVar11 = func_0x0485e650(&uStack_358,pbVar26,uVar32,auStack_1c8,1);
  if (cVar11 == '\0') {
    func_0x04860c50(&bStack_298,&uStack_358);
    func_0x0edfaac0(&uStack_3e8,&bStack_298);
    if ((bStack_298 & 1) != 0) {
      thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                         CONCAT26(uStack_292,
                                  CONCAT15(uStack_293,
                                           CONCAT14(uStack_294,
                                                    CONCAT22(uStack_296,
                                                             CONCAT11(bStack_297,bStack_298))))) &
                         0xfffffffffffffffe);
    }
    cVar11 = func_0x04864290(auStack_1c8);
    if (cVar11 == '\0') {
LAB_0d614351:
      pppppppuVar30 = uStack_3e8;
      if (((ulong)uStack_3e8 & 1) == 0) {
        pppppppuStack_3a8 = pppppppuStack_3d8;
        pppppppuStack_3b8 = uStack_3e8;
        pppppppuStack_3b0 = uStack_3e0;
      }
      else {
        FUN_0412e5e0(&pppppppuStack_3b8,pppppppuStack_3d8,uStack_3e0);
      }
      uStack_388._0_4_ = 0;
      uStack_388._4_4_ = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_37b = 0;
      uStack_37a = 0;
      pppppppuStack_378 = (ulong *******)0x0;
      pppppppuStack_220 = (ulong *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
      pppppppuStack_228 = (ulong *******)&uStack_388;
      pppppppuVar22 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (pppppppuVar22 == (ulong *******)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      uStack_388._0_4_ = (uint)pppppppuVar22;
      uStack_388._4_4_ = (undefined4)((ulong)pppppppuVar22 >> 0x20);
      uStack_37c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
      uStack_37b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
      uStack_37a = (undefined2)((ulong)pppppppuVar22 >> 0x30);
      pppppppuStack_378 = pppppppuVar22 + 3;
      uStack_428._0_1_ = (byte)&uStack_388;
      uStack_428._1_1_ = (undefined1)((ulong)&uStack_388 >> 8);
      uStack_428._2_2_ = (undefined2)((ulong)&uStack_388 >> 0x10);
      uStack_428._4_1_ = (undefined1)((ulong)&uStack_388 >> 0x20);
      uStack_428._5_1_ = (undefined1)((ulong)&uStack_388 >> 0x28);
      uStack_428._6_2_ = (undefined2)((ulong)&uStack_388 >> 0x30);
      uStack_420 = SUB84(&pppppppuStack_1e8,0);
      uStack_41c = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x20);
      uStack_41b = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x28);
      bStack_41a = (byte)((ulong)&pppppppuStack_1e8 >> 0x30);
      uStack_419 = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x38);
      pppppppuStack_418 = (ulong *******)&pppppppuStack_208;
      uStack_410 = uStack_410 & 0xffffff00;
      pppppppuStack_208 = pppppppuVar22;
      pppppppuStack_1e8 = pppppppuVar22;
      if (((ulong)pppppppuStack_3b8 & 1) == 0) {
        pppppppuVar22[2] = (ulong ******)pppppppuStack_3a8;
        *pppppppuVar22 = (ulong ******)pppppppuStack_3b8;
        pppppppuVar22[1] = (ulong ******)pppppppuStack_3b0;
      }
      else {
        uStack_380 = (uint)uStack_388;
        FUN_0412e5e0(pppppppuVar22,pppppppuStack_3a8,pppppppuStack_3b0);
        pppppppuVar22 = (ulong *******)CONCAT44(uStack_388._4_4_,(uint)uStack_388);
      }
      pppppppuVar33 = pppppppuStack_208 + 3;
      uStack_380 = (uint)pppppppuVar33;
      uStack_37c = (undefined1)((ulong)pppppppuVar33 >> 0x20);
      uStack_37b = (undefined1)((ulong)pppppppuVar33 >> 0x28);
      uStack_37a = (undefined2)((ulong)pppppppuVar33 >> 0x30);
      bStack_298 = 0xa0;
      bStack_297 = 0xcc;
      uStack_296 = 0xf47;
      uStack_294 = 0;
      uStack_293 = 0;
      uStack_292 = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      uStack_28b = 0;
      uStack_289 = 0;
      cStack_288 = '\0';
      auStack_287 = (undefined1  [6])0x0;
      uStack_281 = 0;
      ppppppuStack_280 = (ulong ******)0x0;
      func_0x0488f040(&uStack_290,pppppppuVar22,pppppppuVar33,
                      ((long)pppppppuVar33 - (long)pppppppuVar22 >> 3) * -0x5555555555555555);
      ppppppuStack_278 = (ulong ******)0x200000005;
      bStack_298 = 0x78;
      bStack_297 = 0xb7;
      uStack_296 = 0xf47;
      uStack_294 = 0;
      uStack_293 = 0;
      uStack_292 = 0;
      func_0x0d604f40(lStack_3f0,&bStack_298);
      uVar14 = uStack_289;
      uVar15 = uStack_290;
      bStack_298 = 0xa0;
      bStack_297 = 0xcc;
      uStack_296 = 0xf47;
      uStack_294 = 0;
      uStack_293 = 0;
      uStack_292 = 0;
      uVar5 = CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290));
      lVar37 = CONCAT17(uStack_289,uVar5);
      if (lVar37 != 0) {
        lVar39 = CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
        if (lVar37 != lVar39) {
          do {
            if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                 *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
            }
            lVar39 = lVar39 + -0x18;
          } while (lVar39 != lVar37);
          lVar37 = CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)));
        }
        cStack_288 = (char)uVar15;
        auStack_287 = SUB76((uint7)uVar5 >> 8,0);
        uStack_281 = uVar14;
        thunk_FUN_0ee326a0(lVar37,(long)ppppppuStack_280 - lVar37);
      }
      uVar4 = uStack_388._4_4_;
      uVar15 = (uint)uStack_388;
      lVar37 = CONCAT44(uStack_388._4_4_,(uint)uStack_388);
      if (lVar37 != 0) {
        lVar39 = CONCAT26(uStack_37a,CONCAT15(uStack_37b,CONCAT14(uStack_37c,uStack_380)));
        if (lVar37 != lVar39) {
          do {
            if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                 *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
            }
            lVar39 = lVar39 + -0x18;
          } while (lVar39 != lVar37);
          lVar37 = CONCAT44(uStack_388._4_4_,(uint)uStack_388);
        }
        uStack_380 = uVar15;
        uStack_37c = (undefined1)uVar4;
        uStack_37b = (undefined1)((uint)uVar4 >> 8);
        uStack_37a = (undefined2)((uint)uVar4 >> 0x10);
        thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_378 - lVar37);
      }
      if (((ulong)pppppppuStack_3b8 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuStack_3a8,(ulong)pppppppuStack_3b8 & 0xfffffffffffffffe);
      }
      uVar15 = 0;
    }
    else {
      uVar17 = func_0x04864970(auStack_1c8,&UNK_01dd31e8);
      cVar11 = func_0x04864260(uVar17);
      if (cVar11 != '\0') goto LAB_0d614351;
      uVar17 = func_0x04864970(auStack_1c8,&UNK_01dd31e8);
      uVar15 = func_0x04863e00(uVar17,0);
      pppppppuVar30 = uStack_3e8;
      if ((char)uVar15 == '\0') goto LAB_0d614351;
      if (((ulong)uStack_3e8 & 1) == 0) {
        pppppppuStack_3a8 = pppppppuStack_3d8;
        pppppppuStack_3b8 = uStack_3e8;
        pppppppuStack_3b0 = uStack_3e0;
      }
      else {
        FUN_0412e5e0(&pppppppuStack_3b8,pppppppuStack_3d8,uStack_3e0);
      }
      uStack_388._0_4_ = 0;
      uStack_388._4_4_ = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_37b = 0;
      uStack_37a = 0;
      pppppppuStack_378 = (ulong *******)0x0;
      pppppppuStack_220 = (ulong *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
      pppppppuStack_228 = (ulong *******)&uStack_388;
      pppppppuVar22 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (pppppppuVar22 == (ulong *******)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      uStack_388._0_4_ = (uint)pppppppuVar22;
      uStack_388._4_4_ = (undefined4)((ulong)pppppppuVar22 >> 0x20);
      uStack_37c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
      uStack_37b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
      uStack_37a = (undefined2)((ulong)pppppppuVar22 >> 0x30);
      pppppppuStack_378 = pppppppuVar22 + 3;
      uStack_428._0_1_ = (byte)&uStack_388;
      uStack_428._1_1_ = (undefined1)((ulong)&uStack_388 >> 8);
      uStack_428._2_2_ = (undefined2)((ulong)&uStack_388 >> 0x10);
      uStack_428._4_1_ = (undefined1)((ulong)&uStack_388 >> 0x20);
      uStack_428._5_1_ = (undefined1)((ulong)&uStack_388 >> 0x28);
      uStack_428._6_2_ = (undefined2)((ulong)&uStack_388 >> 0x30);
      uStack_420 = SUB84(&pppppppuStack_1e8,0);
      uStack_41c = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x20);
      uStack_41b = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x28);
      bStack_41a = (byte)((ulong)&pppppppuStack_1e8 >> 0x30);
      uStack_419 = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x38);
      pppppppuStack_418 = (ulong *******)&pppppppuStack_208;
      uStack_410 = uStack_410 & 0xffffff00;
      pppppppuStack_208 = pppppppuVar22;
      pppppppuStack_1e8 = pppppppuVar22;
      if (((ulong)pppppppuStack_3b8 & 1) == 0) {
        pppppppuVar22[2] = (ulong ******)pppppppuStack_3a8;
        *pppppppuVar22 = (ulong ******)pppppppuStack_3b8;
        pppppppuVar22[1] = (ulong ******)pppppppuStack_3b0;
      }
      else {
        uStack_380 = (uint)uStack_388;
        FUN_0412e5e0(pppppppuVar22,pppppppuStack_3a8,pppppppuStack_3b0);
        pppppppuVar22 = (ulong *******)CONCAT44(uStack_388._4_4_,(uint)uStack_388);
      }
      pppppppuVar33 = pppppppuStack_208 + 3;
      uStack_380 = (uint)pppppppuVar33;
      uStack_37c = (undefined1)((ulong)pppppppuVar33 >> 0x20);
      uStack_37b = (undefined1)((ulong)pppppppuVar33 >> 0x28);
      uStack_37a = (undefined2)((ulong)pppppppuVar33 >> 0x30);
      bStack_298 = 0xa0;
      bStack_297 = 0xcc;
      uStack_296 = 0xf47;
      uStack_294 = 0;
      uStack_293 = 0;
      uStack_292 = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      uStack_28b = 0;
      uStack_289 = 0;
      cStack_288 = '\0';
      auStack_287 = (undefined1  [6])0x0;
      uStack_281 = 0;
      ppppppuStack_280 = (ulong ******)0x0;
      func_0x0488f040(&uStack_290,pppppppuVar22,pppppppuVar33,
                      ((long)pppppppuVar33 - (long)pppppppuVar22 >> 3) * -0x5555555555555555);
      ppppppuStack_278 = (ulong ******)0x200000005;
      bStack_298 = 0x78;
      bStack_297 = 0xb7;
      uStack_296 = 0xf47;
      uStack_294 = 0;
      uStack_293 = 0;
      uStack_292 = 0;
      func_0x0d5eed10(lStack_3f0,&bStack_298);
      uVar14 = uStack_289;
      uVar28 = uStack_290;
      bStack_298 = 0xa0;
      bStack_297 = 0xcc;
      uStack_296 = 0xf47;
      uStack_294 = 0;
      uStack_293 = 0;
      uStack_292 = 0;
      uVar5 = CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290));
      lVar37 = CONCAT17(uStack_289,uVar5);
      if (lVar37 != 0) {
        lVar39 = CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
        if (lVar37 != lVar39) {
          do {
            if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                 *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
            }
            lVar39 = lVar39 + -0x18;
          } while (lVar39 != lVar37);
          lVar37 = CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)));
        }
        cStack_288 = (char)uVar28;
        auStack_287 = SUB76((uint7)uVar5 >> 8,0);
        uStack_281 = uVar14;
        thunk_FUN_0ee326a0(lVar37,(long)ppppppuStack_280 - lVar37);
      }
      uVar4 = uStack_388._4_4_;
      uVar28 = (uint)uStack_388;
      lVar37 = CONCAT44(uStack_388._4_4_,(uint)uStack_388);
      if (lVar37 != 0) {
        lVar39 = CONCAT26(uStack_37a,CONCAT15(uStack_37b,CONCAT14(uStack_37c,uStack_380)));
        if (lVar37 != lVar39) {
          do {
            if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                 *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
            }
            lVar39 = lVar39 + -0x18;
          } while (lVar39 != lVar37);
          lVar37 = CONCAT44(uStack_388._4_4_,(uint)uStack_388);
        }
        uStack_380 = uVar28;
        uStack_37c = (undefined1)uVar4;
        uStack_37b = (undefined1)((uint)uVar4 >> 8);
        uStack_37a = (undefined2)((uint)uVar4 >> 0x10);
        thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_378 - lVar37);
      }
      if (((ulong)pppppppuStack_3b8 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuStack_3a8,(ulong)pppppppuStack_3b8 & 0xfffffffffffffffe);
      }
    }
    if (((ulong)pppppppuVar30 & 1) != 0) {
      thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
    }
  }
  else {
    uVar15 = 0;
  }
  cVar11 = func_0x04864290(auStack_1c8);
  if (cVar11 != '\0') {
    uVar17 = func_0x04864970(auStack_1c8,&UNK_01dd31e8);
    cVar11 = func_0x04864260(uVar17);
    if (cVar11 == '\0') {
      uVar17 = func_0x04864970(auStack_1c8,&UNK_01dd31e8);
      uVar15 = func_0x04863e00(uVar17,0);
    }
  }
  if (2 < (byte)uVar15) {
    uStack_428._0_1_ = 0;
    uStack_428._1_1_ = 0;
    uStack_428._2_2_ = 0;
    uStack_428._4_1_ = 0;
    uStack_428._5_1_ = 0;
    uStack_428._6_2_ = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_41b = 0;
    bStack_41a = 0;
    uStack_419 = 0;
    pppppppuStack_418 = (ulong *******)0x0;
    uStack_3e0 = (ulong *******)((ulong)uStack_3e0 & 0xffffffffffffff00);
    uStack_3e8 = (ulong *******)&uStack_428;
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    uStack_428._0_1_ = (byte)puVar18;
    uStack_428._1_1_ = (undefined1)((ulong)puVar18 >> 8);
    uStack_428._2_2_ = (undefined2)((ulong)puVar18 >> 0x10);
    uStack_428._4_1_ = (undefined1)((ulong)puVar18 >> 0x20);
    uStack_428._5_1_ = (undefined1)((ulong)puVar18 >> 0x28);
    uStack_428._6_2_ = (undefined2)((ulong)puVar18 >> 0x30);
    pppppppuStack_418 = (ulong *******)(puVar18 + 3);
    *puVar18 = 0x5f74616d726f661c;
    puVar18[1] = 0x6e6f6973726576;
    puVar18[2] = 0;
    uStack_420 = SUB84(pppppppuStack_418,0);
    uStack_41c = (undefined1)((ulong)pppppppuStack_418 >> 0x20);
    uStack_41b = (undefined1)((ulong)pppppppuStack_418 >> 0x28);
    bStack_41a = (byte)((ulong)pppppppuStack_418 >> 0x30);
    uStack_419 = (undefined1)((ulong)pppppppuStack_418 >> 0x38);
    bStack_298 = 0xa0;
    bStack_297 = 0xcc;
    uStack_296 = 0xf47;
    uStack_294 = 0;
    uStack_293 = 0;
    uStack_292 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_28b = 0;
    uStack_289 = 0;
    cStack_288 = '\0';
    auStack_287 = (undefined1  [6])0x0;
    uStack_281 = 0;
    ppppppuStack_280 = (ulong ******)0x0;
    func_0x0488f040(&uStack_290,puVar18,pppppppuStack_418,1);
    ppppppuStack_278 = (ulong ******)0x20000000c;
    bStack_298 = 0x78;
    bStack_297 = 0xb7;
    uStack_296 = 0xf47;
    uStack_294 = 0;
    uStack_293 = 0;
    uStack_292 = 0;
    func_0x0d5eed10(lStack_3f0,&bStack_298);
    uVar14 = uStack_289;
    uVar28 = uStack_290;
    bStack_298 = 0xa0;
    bStack_297 = 0xcc;
    uStack_296 = 0xf47;
    uStack_294 = 0;
    uStack_293 = 0;
    uStack_292 = 0;
    uVar5 = CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290));
    lVar37 = CONCAT17(uStack_289,uVar5);
    if (lVar37 != 0) {
      lVar39 = CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
      if (lVar37 != lVar39) {
        do {
          if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                               *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
          }
          lVar39 = lVar39 + -0x18;
        } while (lVar39 != lVar37);
        lVar37 = CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)));
      }
      cStack_288 = (char)uVar28;
      auStack_287 = SUB76((uint7)uVar5 >> 8,0);
      uStack_281 = uVar14;
      thunk_FUN_0ee326a0(lVar37,(long)ppppppuStack_280 - lVar37);
    }
    uVar9 = uStack_428._6_2_;
    uVar8 = uStack_428._5_1_;
    uVar14 = uStack_428._4_1_;
    uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
    lVar37 = CONCAT26(uStack_428._6_2_,CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
    if (lVar37 != 0) {
      lVar39 = CONCAT17(uStack_419,
                        CONCAT16(bStack_41a,CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
      if (lVar37 != lVar39) {
        do {
          if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                               *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
          }
          lVar39 = lVar39 + -0x18;
        } while (lVar39 != lVar37);
        lVar37 = CONCAT26(uStack_428._6_2_,
                          CONCAT15(uStack_428._5_1_,
                                   CONCAT14(uStack_428._4_1_,
                                            CONCAT22(uStack_428._2_2_,
                                                     CONCAT11(uStack_428._1_1_,(byte)uStack_428)))))
        ;
      }
      uStack_41c = uVar14;
      uStack_41b = uVar8;
      bStack_41a = (byte)uVar9;
      uStack_419 = (undefined1)((ushort)uVar9 >> 8);
      uStack_420 = uVar4;
      thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
    }
  }
  func_0x0485e2d0(&uStack_358);
  uVar28 = uVar15 & 0xff;
  if (uVar28 - 1 < 2) {
    *(byte *)(lStack_390 + 0xf1) = (byte)uVar15;
    plVar21 = *(long **)(lStack_3f0 + 0x30);
    plVar1 = *(long **)(lStack_3f0 + 0x38);
    uStack_12c = uVar15;
    if (plVar21 == plVar1) {
LAB_0d6149aa:
      if (plVar21 != plVar1) goto LAB_0d619e2a;
    }
    else {
      do {
        if (*(int *)(*plVar21 + 0x24) == 2) goto LAB_0d6149aa;
        plVar21 = plVar21 + 2;
      } while (plVar21 != plVar1);
    }
    puStack_188 = (undefined8 *)0x0;
    puStack_180 = (undefined8 *)0x0;
    puStack_178 = (undefined8 *)0x0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_98 = 0;
    func_0x0d60fb40(auStack_1c8,&lStack_a8,lStack_390,lStack_3f0,0,pppppppuStack_170);
    lVar39 = lStack_a8;
    lVar37 = lStack_a0;
    if (lStack_a8 != 0) {
      for (; lVar39 != lVar37; lVar37 = lVar37 + -0x18) {
        if ((*(byte *)(lVar37 + -0x18) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar37 + -8),
                             *(ulong *)(lVar37 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_a0 = lVar39;
      thunk_FUN_0ee326a0(lStack_a8,lStack_98 - lStack_a8);
    }
    plVar21 = *(long **)(lStack_3f0 + 0x30);
    plVar1 = *(long **)(lStack_3f0 + 0x38);
    if (plVar21 == plVar1) {
LAB_0d614b34:
      if (plVar21 == plVar1) goto LAB_0d614b3d;
    }
    else {
      do {
        if (*(int *)(*plVar21 + 0x24) == 2) goto LAB_0d614b34;
        plVar21 = plVar21 + 2;
      } while (plVar21 != plVar1);
LAB_0d614b3d:
      lStack_c8 = 0;
      lStack_c0 = 0;
      lStack_b8 = 0;
      func_0x0488f040(&lStack_c8,puStack_188,puStack_180,
                      ((long)puStack_180 - (long)puStack_188 >> 3) * -0x5555555555555555);
      uStack_358 = 0x7265760e;
      uStack_354 = 0x73;
      uStack_353 = 0x69;
      uStack_352 = 0x6e6f;
      cStack_350 = 0;
      bStack_298 = 8;
      bStack_297 = 0x75;
      uStack_296 = 0x6975;
      uStack_294 = 100;
      uStack_293 = 0;
      pbStack_128 = &bStack_298;
      func_0x0d607090(auStack_40,auStack_1c8,&lStack_c8,lStack_390,lStack_3f0,0,&uStack_358,
                      pbStack_128,uVar28,pppppppuStack_170);
      if ((bStack_298 & 1) != 0) {
        thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                           CONCAT26(uStack_292,
                                    CONCAT15(uStack_293,
                                             CONCAT14(uStack_294,
                                                      CONCAT22(uStack_296,
                                                               CONCAT11(bStack_297,bStack_298))))) &
                           0xfffffffffffffffe);
      }
      lVar37 = lStack_c8;
      if ((uStack_358 & 1) != 0) {
        thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                           CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                           & 0xfffffffffffffffe);
        lVar37 = lStack_c8;
      }
      lStack_c8 = lVar37;
      lVar39 = lStack_c0;
      if (lVar37 != 0) {
        for (; lVar37 != lVar39; lVar39 = lVar39 + -0x18) {
          if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                               *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
          }
        }
        lStack_c0 = lVar37;
        thunk_FUN_0ee326a0(lStack_c8,lStack_b8 - lStack_c8);
      }
      ppppppuStack_168 = (ulong ******)0x0;
      ppppppuStack_160 = (ulong ******)0x0;
      ppppppuStack_158 = (ulong ******)0x0;
      func_0x0488f040(&ppppppuStack_168,puStack_188,puStack_180,
                      ((long)puStack_180 - (long)puStack_188 >> 3) * -0x5555555555555555);
      uStack_358 = 0x70656418;
      uStack_354 = 0x65;
      uStack_353 = 0x6e;
      uStack_352 = 0x6564;
      cStack_350 = 0x6e;
      uStack_34f = 99;
      uStack_34e = 0x6569;
      uStack_34c = 0x73;
      uStack_34b = 0;
      ppppppuStack_f8 = (ulong ******)&ppppppuStack_168;
      if (ppppppuStack_160 < ppppppuStack_158) {
        ppppppuStack_160[2] = (ulong *****)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
        *(uint *)ppppppuStack_160 = 0x70656418;
        *(uint *)((long)ppppppuStack_160 + 4) = 0x65646e65;
        *(uint *)(ppppppuStack_160 + 1) = 0x6569636e;
        *(uint *)((long)ppppppuStack_160 + 0xc) = CONCAT13(uStack_349,CONCAT12(uStack_34a,0x73));
        ppppppuStack_160 = ppppppuStack_160 + 3;
      }
      else {
        ppppppuStack_160 = (ulong ******)func_0x04909a40(&ppppppuStack_168,&uStack_358);
        if ((uStack_358 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT26(uStack_352,
                                      CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                             0xfffffffffffffffe);
        }
      }
      uStack_358 = 0x70656418;
      uStack_354 = 0x65;
      uStack_353 = 0x6e;
      uStack_352 = 0x6564;
      cStack_350 = 'n';
      uStack_34f = 99;
      uStack_34e = 0x6569;
      uStack_34c = 0x73;
      uStack_34b = 0;
      cVar11 = func_0x04864290(auStack_1c8);
      if (cVar11 == '\0') {
        bVar12 = 1;
        puVar19 = &DAT_0f54fc40;
      }
      else {
        puVar19 = (undefined *)func_0x04864990(auStack_1c8,&uStack_358);
        bVar12 = func_0x04864260(puVar19);
        bVar12 = bVar12 ^ 1;
      }
      if ((uStack_358 & 1) != 0) {
        thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                           CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                           & 0xfffffffffffffffe);
      }
      if (bVar12 != 0) {
        cVar11 = func_0x04864270(puVar19);
        if (cVar11 == '\0') {
          func_0x0d5ef090(&uStack_3e8,&ppppppuStack_168);
          uStack_428._0_1_ = 0;
          uStack_428._1_1_ = 0;
          uStack_428._2_2_ = 0;
          uStack_428._4_1_ = 0;
          uStack_428._5_1_ = 0;
          uStack_428._6_2_ = 0;
          uStack_420 = 0;
          uStack_41c = 0;
          uStack_41b = 0;
          bStack_41a = 0;
          uStack_419 = 0;
          pppppppuStack_418 = (ulong *******)0x0;
          uStack_380 = uStack_380 & 0xffffff00;
          uStack_388 = (ulong ******)&uStack_428;
          pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppuVar30 == (ulong *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          uStack_428._0_1_ = (byte)pppppppuVar30;
          uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar30 >> 8);
          uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x10);
          uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x20);
          uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x28);
          uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x30);
          uStack_420 = SUB84(pppppppuVar30,0);
          bStack_41a = (byte)((ulong)pppppppuVar30 >> 0x30);
          uStack_419 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
          pppppppuStack_418 = pppppppuVar30 + 3;
          bStack_298 = (byte)&uStack_428;
          bStack_297 = (byte)((ulong)&uStack_428 >> 8);
          uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
          uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
          uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
          uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
          uStack_290 = (uint)&pppppppuStack_228;
          uStack_28c = (undefined1)((ulong)&pppppppuStack_228 >> 0x20);
          uStack_28b = (ushort)((ulong)&pppppppuStack_228 >> 0x28);
          uStack_289 = (undefined1)((ulong)&pppppppuStack_228 >> 0x38);
          cStack_288 = (char)&pppppppuStack_3b8;
          auStack_287 = SUB86((ulong)&pppppppuStack_3b8 >> 8,0);
          uStack_281 = (undefined1)((ulong)&pppppppuStack_3b8 >> 0x38);
          ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
          uVar32 = (ulong)uStack_3e8 & 1;
          pppppppuStack_3b8 = pppppppuVar30;
          pppppppuStack_228 = pppppppuVar30;
          if (((ulong)uStack_3e8 & 1) == 0) {
            pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
            *pppppppuVar30 = (ulong ******)uStack_3e8;
            pppppppuVar30[1] = (ulong ******)uStack_3e0;
          }
          else {
            uStack_41c = uStack_428._4_1_;
            uStack_41b = uStack_428._5_1_;
            FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
            pppppppuVar30 =
                 (ulong *******)
                 CONCAT26(uStack_428._6_2_,
                          CONCAT15(uStack_428._5_1_,
                                   CONCAT14(uStack_428._4_1_,
                                            CONCAT22(uStack_428._2_2_,
                                                     CONCAT11(uStack_428._1_1_,(byte)uStack_428)))))
            ;
          }
          pppppppuVar22 = pppppppuStack_3b8 + 3;
          uStack_420 = SUB84(pppppppuVar22,0);
          uStack_41c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
          uStack_41b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
          bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
          uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
          uStack_358 = 0xf47cca0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          cStack_350 = '\0';
          uStack_34f = 0;
          uStack_34e = 0;
          uStack_34c = 0;
          uStack_34b = 0;
          uStack_34a = 0;
          uStack_349 = 0;
          cStack_348 = '\0';
          uStack_347 = 0;
          uStack_341 = 0;
          uStack_340 = (ulong *******)0x0;
          func_0x0488f040(&cStack_350,pppppppuVar30,pppppppuVar22,
                          ((long)pppppppuVar22 - (long)pppppppuVar30 >> 3) * -0x5555555555555555);
          uStack_338 = 0x200000009;
          uStack_358 = 0xf47b778;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          func_0x0d5eed10(lStack_3f0,&uStack_358);
          uVar14 = uStack_349;
          cVar11 = cStack_350;
          uStack_358 = 0xf47cca0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          uVar5 = CONCAT16(uStack_34a,
                           CONCAT15(uStack_34b,
                                    CONCAT14(uStack_34c,
                                             CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)))))
          ;
          lVar37 = CONCAT17(uStack_349,uVar5);
          if (lVar37 != 0) {
            lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
            if (lVar37 != lVar39) {
              do {
                if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                     *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                }
                lVar39 = lVar39 + -0x18;
              } while (lVar39 != lVar37);
              lVar37 = CONCAT17(uStack_349,
                                CONCAT16(uStack_34a,
                                         CONCAT15(uStack_34b,
                                                  CONCAT14(uStack_34c,
                                                           CONCAT22(uStack_34e,
                                                                    CONCAT11(uStack_34f,cStack_350))
                                                          ))));
            }
            cStack_348 = cVar11;
            uStack_347 = (uint6)((uint7)uVar5 >> 8);
            uStack_341 = uVar14;
            thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
          }
          uVar9 = uStack_428._6_2_;
          uVar8 = uStack_428._5_1_;
          uVar14 = uStack_428._4_1_;
          uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
          lVar37 = CONCAT26(uStack_428._6_2_,
                            CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
          if (lVar37 != 0) {
            lVar39 = CONCAT17(uStack_419,
                              CONCAT16(bStack_41a,
                                       CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
            if (lVar37 != lVar39) {
              do {
                if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                     *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                }
                lVar39 = lVar39 + -0x18;
              } while (lVar39 != lVar37);
              lVar37 = CONCAT26(uStack_428._6_2_,
                                CONCAT15(uStack_428._5_1_,
                                         CONCAT14(uStack_428._4_1_,
                                                  CONCAT22(uStack_428._2_2_,
                                                           CONCAT11(uStack_428._1_1_,
                                                                    (byte)uStack_428)))));
            }
            uStack_41c = uVar14;
            uStack_41b = uVar8;
            bStack_41a = (byte)uVar9;
            uStack_419 = (undefined1)((ushort)uVar9 >> 8);
            uStack_420 = uVar4;
            thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
          }
          if (uVar32 != 0) {
            thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
          }
        }
        else {
          func_0x04865530(&pppppppuStack_3b8,puVar19);
          func_0x048655b0(&pppppppuStack_228,puVar19);
          lStack_58 = lStack_390 + 0x1e8;
          lStack_120 = lStack_390 + 0x200;
          pppppppuVar30 = (ulong *******)0x0;
          while( true ) {
            cVar11 = func_0x04862c80(&pppppppuStack_3b8,&pppppppuStack_228);
            if (cVar11 != '\0') break;
            pbVar20 = (byte *)func_0x04862b80(&pppppppuStack_3b8);
            pbVar26 = &bStack_298;
            uVar15 = (uint)pppppppuVar30;
            if ((int)uVar15 < 0) {
              bStack_298 = 0x2d;
              uVar15 = -uVar15;
              pbVar26 = &bStack_297;
            }
            pppppppuStack_210 = pppppppuVar30;
            if ((long)(auStack_287 + (3 - (long)pbVar26)) < 10) {
              iVar16 = 0x1f;
              if ((uVar15 | 1) != 0) {
                for (; (uVar15 | 1) >> iVar16 == 0; iVar16 = iVar16 + -1) {
                }
              }
              uVar28 = iVar16 * 0x4d1 + 0x4d1U >> 0xc;
              if ((long)(ulong)((uVar28 - (uVar15 < *(uint *)(&UNK_014edae0 + (ulong)uVar28 * 4))) +
                               1) <= (long)(auStack_287 + (3 - (long)pbVar26))) goto LAB_0d6150d0;
              uStack_358 = uStack_358 & 0xffffff00;
              uVar32 = 0;
              lVar39 = (long)&uStack_358 + 1;
            }
            else {
LAB_0d6150d0:
              lVar37 = func_0x04136630();
              uVar32 = lVar37 - (long)&bStack_298;
              if (0xfffffffffffffff7 < uVar32) goto LAB_0d619fb0;
              if (uVar32 < 0x17) {
                uStack_358 = CONCAT31(uStack_358._1_3_,(char)uVar32 * '\x02');
                lVar39 = (long)&uStack_358 + 1;
                if (uVar32 == 0) {
                  uVar32 = 0;
                  goto LAB_0d61517f;
                }
              }
              else {
                lVar37 = (uVar32 | 7) + 1;
                if ((uVar32 | 7) == 0x17) {
                  lVar37 = 0x1a;
                }
                lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar37);
                if (lVar39 == 0) {
                  func_0x0eec74c0(lVar37,0);
                }
                cStack_348 = (char)lVar39;
                uStack_347 = (uint6)((ulong)lVar39 >> 8);
                uStack_341 = (undefined1)((ulong)lVar39 >> 0x38);
                uStack_358 = (uint)lVar37 | 1;
                uStack_354 = (undefined1)((ulong)lVar37 >> 0x20);
                uStack_353 = (undefined1)((ulong)lVar37 >> 0x28);
                uStack_352 = (undefined2)((ulong)lVar37 >> 0x30);
                uStack_34f = (undefined1)(uVar32 >> 8);
                uStack_34e = (undefined2)(uVar32 >> 0x10);
                uStack_34c = (undefined1)(uVar32 >> 0x20);
                uStack_34b = (undefined1)(uVar32 >> 0x28);
                uStack_34a = (undefined1)(uVar32 >> 0x30);
                uStack_349 = (undefined1)(uVar32 >> 0x38);
                cStack_350 = (char)uVar32;
              }
              func_0x0eee2f00(lVar39,&bStack_298,uVar32);
            }
LAB_0d61517f:
            *(undefined1 *)(lVar39 + uVar32) = 0;
            ppppppuVar38 = ppppppuStack_160;
            pppppppuStack_118 = &ppppppuStack_168;
            if (ppppppuStack_160 < ppppppuStack_158) {
              if ((uStack_358 & 1) == 0) {
                ppppppuStack_160[2] =
                     (ulong *****)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                *(uint *)ppppppuStack_160 = uStack_358;
                *(uint *)((long)ppppppuStack_160 + 4) =
                     CONCAT22(uStack_352,CONCAT11(uStack_353,uStack_354));
                *(uint *)(ppppppuStack_160 + 1) =
                     CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350));
                *(uint *)((long)ppppppuStack_160 + 0xc) =
                     CONCAT13(uStack_349,CONCAT12(uStack_34a,CONCAT11(uStack_34b,uStack_34c)));
                ppppppuStack_160 = ppppppuStack_160 + 3;
              }
              else {
                FUN_0412e5e0(ppppppuStack_160,CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT17(uStack_349,
                                      CONCAT16(uStack_34a,
                                               CONCAT15(uStack_34b,
                                                        CONCAT14(uStack_34c,
                                                                 CONCAT22(uStack_34e,
                                                                          CONCAT11(uStack_34f,
                                                                                   cStack_350)))))))
                ;
                ppppppuStack_160 = ppppppuVar38 + 3;
              }
            }
            else {
              ppppppuStack_160 = (ulong ******)func_0x04909a40(&ppppppuStack_168,&uStack_358);
            }
            if ((uStack_358 & 1) != 0) {
              thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                 CONCAT26(uStack_352,
                                          CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                                 0xfffffffffffffffe);
            }
            cVar11 = func_0x04864290(pbVar20);
            if (cVar11 == '\0') {
              func_0x0d5ef090(&uStack_3e8,&ppppppuStack_168);
              uStack_428._0_1_ = 0;
              uStack_428._1_1_ = 0;
              uStack_428._2_2_ = 0;
              uStack_428._4_1_ = 0;
              uStack_428._5_1_ = 0;
              uStack_428._6_2_ = 0;
              uStack_420 = 0;
              uStack_41c = 0;
              uStack_41b = 0;
              bStack_41a = 0;
              uStack_419 = 0;
              pppppppuStack_418 = (ulong *******)0x0;
              uStack_380 = uStack_380 & 0xffffff00;
              uStack_388 = (ulong ******)&uStack_428;
              pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
              ;
              iVar16 = (int)pppppppuStack_210;
              if (pppppppuVar30 == (ulong *******)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              uStack_428._0_1_ = (byte)pppppppuVar30;
              uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar30 >> 8);
              uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x10);
              uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x20);
              uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x28);
              uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x30);
              uStack_420 = SUB84(pppppppuVar30,0);
              bStack_41a = (byte)((ulong)pppppppuVar30 >> 0x30);
              uStack_419 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
              pppppppuStack_418 = pppppppuVar30 + 3;
              bStack_298 = (byte)&uStack_428;
              bStack_297 = (byte)((ulong)&uStack_428 >> 8);
              uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
              uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
              uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
              uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
              uStack_290 = (uint)&pppppppuStack_1e8;
              uStack_28c = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x20);
              uStack_28b = (ushort)((ulong)&pppppppuStack_1e8 >> 0x28);
              uStack_289 = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x38);
              cStack_288 = (char)&pppppppuStack_208;
              auStack_287 = SUB86((ulong)&pppppppuStack_208 >> 8,0);
              uStack_281 = (undefined1)((ulong)&pppppppuStack_208 >> 0x38);
              ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
              uVar32 = (ulong)uStack_3e8 & 1;
              pppppppuStack_208 = pppppppuVar30;
              pppppppuStack_1e8 = pppppppuVar30;
              if (((ulong)uStack_3e8 & 1) == 0) {
                pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
                *pppppppuVar30 = (ulong ******)uStack_3e8;
                pppppppuVar30[1] = (ulong ******)uStack_3e0;
              }
              else {
                uStack_41c = uStack_428._4_1_;
                uStack_41b = uStack_428._5_1_;
                FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
                pppppppuVar30 =
                     (ulong *******)
                     CONCAT26(uStack_428._6_2_,
                              CONCAT15(uStack_428._5_1_,
                                       CONCAT14(uStack_428._4_1_,
                                                CONCAT22(uStack_428._2_2_,
                                                         CONCAT11(uStack_428._1_1_,(byte)uStack_428)
                                                        ))));
              }
              pppppppuVar22 = pppppppuStack_208 + 3;
              uStack_420 = SUB84(pppppppuVar22,0);
              uStack_41c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
              uStack_41b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
              bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
              uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
              uStack_358 = 0xf47cca0;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              cStack_350 = '\0';
              uStack_34f = 0;
              uStack_34e = 0;
              uStack_34c = 0;
              uStack_34b = 0;
              uStack_34a = 0;
              uStack_349 = 0;
              cStack_348 = '\0';
              uStack_347 = 0;
              uStack_341 = 0;
              uStack_340 = (ulong *******)0x0;
              func_0x0488f040(&cStack_350,pppppppuVar30,pppppppuVar22,
                              ((long)pppppppuVar22 - (long)pppppppuVar30 >> 3) * -0x5555555555555555
                             );
              uStack_338 = 0x200000009;
              uStack_358 = 0xf47b778;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              func_0x0d5eed10(lStack_3f0,&uStack_358);
              uVar14 = uStack_349;
              cVar11 = cStack_350;
              uStack_358 = 0xf47cca0;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              uVar5 = CONCAT16(uStack_34a,
                               CONCAT15(uStack_34b,
                                        CONCAT14(uStack_34c,
                                                 CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)
                                                         ))));
              lVar37 = CONCAT17(uStack_349,uVar5);
              if (lVar37 != 0) {
                lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                if (lVar37 != lVar39) {
                  do {
                    if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                         *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar39 = lVar39 + -0x18;
                  } while (lVar39 != lVar37);
                  lVar37 = CONCAT17(uStack_349,
                                    CONCAT16(uStack_34a,
                                             CONCAT15(uStack_34b,
                                                      CONCAT14(uStack_34c,
                                                               CONCAT22(uStack_34e,
                                                                        CONCAT11(uStack_34f,
                                                                                 cStack_350))))));
                }
                cStack_348 = cVar11;
                uStack_347 = (uint6)((uint7)uVar5 >> 8);
                uStack_341 = uVar14;
                thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
              }
              uVar9 = uStack_428._6_2_;
              uVar8 = uStack_428._5_1_;
              uVar14 = uStack_428._4_1_;
              uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
              lVar37 = CONCAT26(uStack_428._6_2_,
                                CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
              if (lVar37 != 0) {
                lVar39 = CONCAT17(uStack_419,
                                  CONCAT16(bStack_41a,
                                           CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
                if (lVar37 != lVar39) {
                  do {
                    if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                         *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar39 = lVar39 + -0x18;
                  } while (lVar39 != lVar37);
                  lVar37 = CONCAT26(uStack_428._6_2_,
                                    CONCAT15(uStack_428._5_1_,
                                             CONCAT14(uStack_428._4_1_,
                                                      CONCAT22(uStack_428._2_2_,
                                                               CONCAT11(uStack_428._1_1_,
                                                                        (byte)uStack_428)))));
                }
                uStack_41c = uVar14;
                uStack_41b = uVar8;
                bStack_41a = (byte)uVar9;
                uStack_419 = (undefined1)((ushort)uVar9 >> 8);
                uStack_420 = uVar4;
                thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
              }
              pppppppuVar30 = uStack_3e8;
              pppppppuVar22 = pppppppuStack_3d8;
              if (uVar32 == 0) goto LAB_0d615be9;
LAB_0d61586c:
              thunk_FUN_0ee326a0(pppppppuVar22,(ulong)pppppppuVar30 & 0xfffffffffffffffe);
LAB_0d615be9:
              pppppppuVar30 = (ulong *******)(ulong)(iVar16 + 1);
            }
            else {
              uStack_358 = 0x646f6d16;
              uStack_354 = 0x75;
              uStack_353 = 0x6c;
              uStack_352 = 0x5f65;
              cStack_350 = 0x6e;
              uStack_34f = 0x61;
              uStack_34e = 0x656d;
              uStack_34c = 0;
              cVar11 = func_0x04864290(pbVar20);
              bVar12 = 1;
              if (cVar11 != '\0') {
                uVar17 = func_0x04864990(pbVar20,&uStack_358);
                bVar12 = func_0x04864260(uVar17);
                bVar12 = bVar12 ^ 1;
              }
              if ((uStack_358 & 1) != 0) {
                thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                   CONCAT26(uStack_352,
                                            CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                                   0xfffffffffffffffe);
              }
              if (bVar12 == 0) {
                uStack_358 = 0x69757508;
                uStack_354 = 100;
                uStack_353 = 0;
                auVar42 = func_0x0d606550(pbVar20,&uStack_358,&UNK_01e79d90,&ppppppuStack_168,
                                          lStack_3f0);
                uStack_428._0_1_ = auVar42[0];
                uStack_428._1_1_ = auVar42[1];
                uStack_428._2_2_ = auVar42._2_2_;
                uStack_428._4_1_ = auVar42[4];
                uStack_428._5_1_ = auVar42[5];
                uStack_428._6_2_ = auVar42._6_2_;
                uStack_420 = auVar42._8_4_;
                uStack_41c = auVar42[0xc];
                uStack_41b = auVar42[0xd];
                bStack_41a = auVar42[0xe];
                uStack_419 = auVar42[0xf];
                if ((uStack_358 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                     CONCAT26(uStack_352,
                                              CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                                     & 0xfffffffffffffffe);
                }
                uStack_353 = 0x69;
                uStack_352 = 0x6e6f;
                uStack_358 = 0x7265760e;
                uStack_354 = 0x73;
                cStack_350 = '\0';
                func_0x0d605200(&bStack_298,pbVar20,&uStack_358,&ppppppuStack_168);
                if ((uStack_358 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                     CONCAT26(uStack_352,
                                              CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                                     & 0xfffffffffffffffe);
                }
                func_0x0ee33d90(&uStack_358,&uStack_428,&bStack_298,0);
                puVar2 = *(uint **)(lStack_390 + 0x1f0);
                if (puVar2 < *(uint **)(lStack_390 + 0x1f8)) {
                  *puVar2 = uStack_358;
                  puVar2[1] = CONCAT22(uStack_352,CONCAT11(uStack_353,uStack_354));
                  puVar2[2] = CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350));
                  puVar2[3] = CONCAT13(uStack_349,
                                       CONCAT12(uStack_34a,CONCAT11(uStack_34b,uStack_34c)));
                  *(ulong *)(puVar2 + 4) = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                  puVar2[6] = 0;
                  puVar2[7] = 0;
                  pppppppuVar30 = uStack_340;
                  if (((ulong)uStack_340 & 0x80000000000000) != 0) {
                    uVar32 = (ulong)uStack_340 & 0xff00ffffffffffff;
                    lVar39 = *(long *)(uVar32 - 8);
                    lVar37 = lVar39 + 9;
                    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar37,8);
                    if (lVar37 != 0 && plVar21 == (long *)0x0) {
                      func_0x0eec74c0(lVar37,8);
                    }
                    *plVar21 = lVar39;
                    func_0x0eee2f00(plVar21 + 1,uVar32,lVar39);
                    *(undefined1 *)((long)plVar21 + lVar39 + 8) = 0;
                    pppppppuVar30 =
                         (ulong *******)
                         ((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
                  }
                  *(ulong ********)(puVar2 + 6) = pppppppuVar30;
                  puVar2[8] = 0;
                  puVar2[9] = 0;
                  uVar32 = uStack_338;
                  if ((uStack_338 & 0x80000000000000) != 0) {
                    puStack_78 = puVar2 + 6;
                    uVar32 = uStack_338 & 0xff00ffffffffffff;
                    lVar39 = *(long *)(uVar32 - 8);
                    lVar37 = lVar39 + 9;
                    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar37,8);
                    if (lVar37 != 0 && plVar21 == (long *)0x0) {
                      func_0x0eec74c0(lVar37,8);
                    }
                    *plVar21 = lVar39;
                    func_0x0eee2f00(plVar21 + 1,uVar32,lVar39);
                    *(undefined1 *)((long)plVar21 + lVar39 + 8) = 0;
                    uVar32 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                  }
                  *(ulong *)(puVar2 + 8) = uVar32;
                  *(undefined1 *)(puVar2 + 10) = (undefined1)uStack_330;
                  *(uint **)(lStack_390 + 0x1f0) = puVar2 + 0xc;
                  *(uint **)(lStack_390 + 0x1f0) = puVar2 + 0xc;
                }
                else {
                  uVar17 = func_0x09ab50c0(lStack_58,&uStack_358);
                  *(undefined8 *)(lStack_390 + 0x1f0) = uVar17;
                }
                if ((uStack_338 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_338 & 0xff00ffffffffffff) - 8);
                }
                uStack_338 = 0;
                if (((ulong)uStack_340 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)uStack_340 & 0xff00ffffffffffff) - 8);
                }
                if (((uint6)auStack_287 & 0x800000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,
                             (CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)) &
                             0xff00ffffffffffff) - 8);
                }
                cStack_288 = '\0';
                auStack_287 = (undefined1  [6])0x0;
                uStack_281 = 0;
                if ((uStack_28b & 0x8000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,
                             (CONCAT17(uStack_289,
                                       CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290))) &
                             0xff00ffffffffffff) - 8);
                }
                iVar16 = (int)pppppppuStack_210;
                goto LAB_0d615be9;
              }
              uStack_358 = 0x69757508;
              uStack_354 = 100;
              uStack_353 = 0;
              cVar11 = func_0x04864290(pbVar20);
              if (cVar11 == '\0') {
                cVar11 = '\0';
              }
              else {
                uVar17 = func_0x04864990(pbVar20,&uStack_358);
                cVar11 = func_0x04864260(uVar17);
              }
              if ((uStack_358 & 1) != 0) {
                thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                   CONCAT26(uStack_352,
                                            CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                                   0xfffffffffffffffe);
              }
              if (cVar11 != '\0') {
                uStack_358 = 0x646f6d16;
                uStack_354 = 0x75;
                uStack_353 = 0x6c;
                uStack_352 = 0x5f65;
                cStack_350 = 0x6e;
                uStack_34f = 0x61;
                uStack_34e = 0x656d;
                uStack_34c = 0;
                func_0x0d6050c0(&bStack_298,pbVar20,&uStack_358,&ppppppuStack_168,lStack_3f0,0);
                if ((uStack_358 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                     CONCAT26(uStack_352,
                                              CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                                     & 0xfffffffffffffffe);
                }
                uStack_353 = 0x69;
                uStack_352 = 0x6e6f;
                uStack_358 = 0x7265760e;
                uStack_354 = 0x73;
                cStack_350 = '\0';
                cVar11 = func_0x04864290(pbVar20);
                bVar12 = 1;
                puVar19 = &DAT_0f54fc40;
                if (cVar11 != '\0') {
                  puVar19 = (undefined *)func_0x04864990(pbVar20,&uStack_358);
                  bVar12 = func_0x04864260(puVar19);
                  bVar12 = bVar12 ^ 1;
                }
                if ((uStack_358 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                     CONCAT26(uStack_352,
                                              CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                                     & 0xfffffffffffffffe);
                }
                uStack_1ac = uStack_1ac & 0xffffff00;
                if (bVar12 == 0) {
LAB_0d615ecb:
                  uStack_353 = 0x69;
                  uStack_352 = 0x6e6f;
                  uStack_358 = 0x7265760e;
                  uStack_354 = 0x73;
                  cStack_350 = '\0';
                  func_0x0d605200(&uStack_428,pbVar20,&uStack_358,&ppppppuStack_168);
                  if ((uStack_358 & 1) != 0) {
                    thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                       CONCAT26(uStack_352,
                                                CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))
                                               ) & 0xfffffffffffffffe);
                  }
                  if ((bStack_298 & 1) == 0) {
                    cStack_348 = cStack_288;
                    uStack_347 = (uint6)auStack_287;
                    uStack_341 = uStack_281;
                    uStack_358 = CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298));
                    uStack_354 = uStack_294;
                    uStack_353 = uStack_293;
                    uStack_352 = uStack_292;
                    cStack_350 = (char)uStack_290;
                    uStack_34f = (undefined1)(uStack_290 >> 8);
                    uStack_34e = (undefined2)(uStack_290 >> 0x10);
                    uStack_34c = uStack_28c;
                    uStack_34b = (undefined1)uStack_28b;
                    uStack_34a = (undefined1)(uStack_28b >> 8);
                    uStack_349 = uStack_289;
                  }
                  else {
                    FUN_0412e5e0(&uStack_358,CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                 CONCAT17(uStack_289,
                                          CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290))));
                  }
                  uVar32 = CONCAT17(uStack_419,
                                    CONCAT16(bStack_41a,
                                             CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
                  if ((bStack_41a & 0x80) == 0) {
                    uVar31 = (ulong)((ushort)(uVar32 >> 0x30) & 0x7f);
                    if (((ulong)pppppppuStack_418 & 0x80000000000000) != 0) goto LAB_0d615fa3;
LAB_0d615fde:
                    uVar40 = (ulong)((ushort)((ulong)pppppppuStack_418 >> 0x30) & 0x7f);
                  }
                  else {
                    uVar31 = *(ulong *)((uVar32 & 0xff00ffffffffffff) - 8);
                    if (((ulong)pppppppuStack_418 & 0x80000000000000) == 0) goto LAB_0d615fde;
LAB_0d615fa3:
                    uVar40 = *(ulong *)(((ulong)pppppppuStack_418 & 0xff00ffffffffffff) - 8);
                  }
                  uVar36 = (ulong)pppppppuStack_418 & 0xff00ffffffffffff;
                  puStack_78 = (uint *)CONCAT26(uStack_428._6_2_,
                                                CONCAT15(uStack_428._5_1_,
                                                         CONCAT14(uStack_428._4_1_,
                                                                  CONCAT22(uStack_428._2_2_,
                                                                           CONCAT11(uStack_428._1_1_
                                                                                    ,(byte)
                                                  uStack_428)))));
                  uStack_70 = 0;
                  uStack_142 = CONCAT11(uStack_428._5_1_,uStack_428._4_1_);
                  if ((uVar32 & 0xff00ffffffffffff) == 0) {
                    uVar32 = (uVar31 & 0x7f) << 0x30;
                    uStack_388._0_4_ = 0;
                    uStack_388._4_4_ = (undefined4)(uVar32 >> 0x20);
                    if (uVar36 == 0) goto LAB_0d61613b;
LAB_0d6160a8:
                    lVar37 = uVar40 + 9;
                    puVar23 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar37,8);
                    if (lVar37 != 0 && puVar23 == (ulong *)0x0) {
                      func_0x0eec74c0(lVar37,8);
                    }
                    *puVar23 = uVar40;
                    func_0x0eee2f00(puVar23 + 1,uVar36,uVar40);
                    *(undefined1 *)((long)puVar23 + uVar40 + 8) = 0;
                    uStack_330 = (ulong)(puVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                  }
                  else {
                    lVar37 = uVar31 + 9;
                    uStack_60 = uVar36;
                    puVar23 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar37,8);
                    if (lVar37 != 0 && puVar23 == (ulong *)0x0) {
                      func_0x0eec74c0(lVar37,8);
                    }
                    *puVar23 = uVar31;
                    func_0x0eee2f00(puVar23 + 1,uVar32 & 0xff00ffffffffffff,uVar31);
                    *(undefined1 *)((long)puVar23 + uVar31 + 8) = 0;
                    uVar31 = (ulong)(puVar23 + 1) & 0xff00ffffffffffff;
                    uVar32 = uVar31 | 0x80000000000000;
                    uStack_388._0_4_ = (uint)uVar31;
                    uStack_388._4_4_ = (undefined4)(uVar32 >> 0x20);
                    uVar36 = uStack_60;
                    if (uStack_60 != 0) goto LAB_0d6160a8;
LAB_0d61613b:
                    uStack_330 = (uVar40 & 0x7f) << 0x30;
                  }
                  uStack_3e8 = (ulong *******)CONCAT26(1,CONCAT24(uStack_142,(int)puStack_78));
                  uStack_340 = uStack_3e8;
                  uStack_3e0 = (ulong *******)0x0;
                  pppppppuStack_3d8 = (ulong *******)0x0;
                  uStack_328 = 1;
                  uStack_320 = 0;
                  uVar31 = *(ulong *)(lStack_390 + 0x208);
                  uStack_338 = uVar32;
                  if (uVar31 < *(ulong *)(lStack_390 + 0x210)) {
                    func_0x0d633790(lStack_120,&uStack_358);
                    iVar16 = (int)pppppppuStack_210;
                    lVar37 = uVar31 + 0x40;
                  }
                  else {
                    lVar37 = func_0x0d633870(lStack_120,&uStack_358);
                    iVar16 = (int)pppppppuStack_210;
                  }
                  *(long *)(lStack_390 + 0x208) = lVar37;
                  if ((ulong)uStack_328 != 0xffffffff) {
                    (**(code **)(&UNK_0f47ba70 + (ulong)uStack_328 * 8))(&uStack_388,&uStack_340);
                  }
                  uStack_328 = 0xffffffff;
                  if ((uStack_358 & 1) != 0) {
                    thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                       CONCAT26(uStack_352,
                                                CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))
                                               ) & 0xfffffffffffffffe);
                  }
                  if (((ulong)pppppppuStack_418 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,((ulong)pppppppuStack_418 & 0xff00ffffffffffff) - 8);
                  }
                  pppppppuStack_418 = (ulong *******)0x0;
                  if ((bStack_41a & 0x80) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,
                               (CONCAT17(uStack_419,
                                         CONCAT16(bStack_41a,
                                                  CONCAT15(uStack_41b,
                                                           CONCAT14(uStack_41c,uStack_420)))) &
                               0xff00ffffffffffff) - 8);
                  }
                }
                else {
                  cVar11 = func_0x04865490(puVar19);
                  if (cVar11 == '\0') goto LAB_0d615ecb;
                  uStack_428._0_1_ = 0;
                  uStack_428._1_1_ = 0;
                  func_0x04863cb0(&uStack_358,puVar19,&uStack_428);
                  if (((byte)uStack_428 & 1) != 0) {
                    thunk_FUN_0ee326a0(pppppppuStack_418,
                                       CONCAT26(uStack_428._6_2_,
                                                CONCAT15(uStack_428._5_1_,
                                                         CONCAT14(uStack_428._4_1_,
                                                                  CONCAT22(uStack_428._2_2_,
                                                                           CONCAT11(uStack_428._1_1_
                                                                                    ,(byte)
                                                  uStack_428))))) & 0xfffffffffffffffe);
                  }
                  if ((uStack_358 & 1) == 0) {
                    uVar32 = (ulong)((byte)uStack_358 >> 1);
                  }
                  else {
                    uVar32 = CONCAT17(uStack_349,
                                      CONCAT16(uStack_34a,
                                               CONCAT15(uStack_34b,
                                                        CONCAT14(uStack_34c,
                                                                 CONCAT22(uStack_34e,
                                                                          CONCAT11(uStack_34f,
                                                                                   cStack_350))))));
                  }
                  if (uVar32 == 4) {
                    piVar29 = (int *)((long)&uStack_358 + 1);
                    if ((uStack_358 & 1) != 0) {
                      piVar29 = (int *)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                    }
                    if (*piVar29 != 0x61746562) goto LAB_0d615e6c;
                    uStack_1ac = 1;
joined_r0x0d616419:
                    bVar41 = true;
                  }
                  else if (uVar32 == 8) {
                    plVar21 = (long *)((long)&uStack_358 + 1);
                    if ((uStack_358 & 1) != 0) {
                      plVar21 = (long *)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                    }
                    bVar41 = *plVar21 == 0x6c616e7265746e69;
                    if (bVar41) {
                      uStack_1ac = 2;
                    }
                  }
                  else {
                    if (uVar32 == 5) {
                      piVar29 = (int *)((long)&uStack_358 + 1);
                      if ((uStack_358 & 1) != 0) {
                        piVar29 = (int *)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                      }
                      if ((char)piVar29[1] == 'a' && *piVar29 == 0x68706c61) {
                        uStack_1ac = 0;
                        goto joined_r0x0d616419;
                      }
                    }
LAB_0d615e6c:
                    bVar41 = false;
                  }
                  if ((uStack_358 & 1) != 0) {
                    thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                       CONCAT26(uStack_352,
                                                CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))
                                               ) & 0xfffffffffffffffe);
                  }
                  if (!bVar41) goto LAB_0d615ecb;
                  if ((bStack_298 & 1) == 0) {
                    cStack_348 = cStack_288;
                    uStack_347 = (uint6)auStack_287;
                    uStack_341 = uStack_281;
                    uStack_358 = CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298));
                    uStack_354 = uStack_294;
                    uStack_353 = uStack_293;
                    uStack_352 = uStack_292;
                    cStack_350 = (char)uStack_290;
                    uStack_34f = (undefined1)(uStack_290 >> 8);
                    uStack_34e = (undefined2)(uStack_290 >> 0x10);
                    uStack_34c = uStack_28c;
                    uStack_34b = (undefined1)uStack_28b;
                    uStack_34a = (undefined1)(uStack_28b >> 8);
                    uStack_349 = uStack_289;
                    iVar16 = (int)pppppppuStack_210;
                  }
                  else {
                    FUN_0412e5e0(&uStack_358,CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                 CONCAT17(uStack_289,
                                          CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290))));
                    iVar16 = (int)pppppppuStack_210;
                  }
                  uStack_340 = (ulong *******)CONCAT44(uStack_340._4_4_,uStack_1ac);
                  uStack_328 = 0;
                  uStack_320 = 0;
                  uVar32 = *(ulong *)(lStack_390 + 0x208);
                  if (uVar32 < *(ulong *)(lStack_390 + 0x210)) {
                    func_0x0d633790(lStack_120,&uStack_358);
                    lVar37 = uVar32 + 0x40;
                  }
                  else {
                    lVar37 = func_0x0d633870(lStack_120,&uStack_358);
                  }
                  *(long *)(lStack_390 + 0x208) = lVar37;
                  if ((ulong)uStack_328 != 0xffffffff) {
                    (**(code **)(&UNK_0f47ba70 + (ulong)uStack_328 * 8))(&uStack_428,&uStack_340);
                  }
                  uStack_328 = 0xffffffff;
                  if ((uStack_358 & 1) != 0) {
                    thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                       CONCAT26(uStack_352,
                                                CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))
                                               ) & 0xfffffffffffffffe);
                  }
                }
                if ((bStack_298 & 1) != 0) {
                  pppppppuVar30 =
                       (ulong *******)
                       CONCAT26(uStack_292,
                                CONCAT15(uStack_293,
                                         CONCAT14(uStack_294,
                                                  CONCAT22(uStack_296,
                                                           CONCAT11(bStack_297,bStack_298)))));
                  pppppppuVar22 =
                       (ulong *******)CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
                  goto LAB_0d61586c;
                }
                goto LAB_0d615be9;
              }
              func_0x0d5ef090(&uStack_3e8,&ppppppuStack_168);
              uStack_428._0_1_ = 0;
              uStack_428._1_1_ = 0;
              uStack_428._2_2_ = 0;
              uStack_428._4_1_ = 0;
              uStack_428._5_1_ = 0;
              uStack_428._6_2_ = 0;
              uStack_420 = 0;
              uStack_41c = 0;
              uStack_41b = 0;
              bStack_41a = 0;
              uStack_419 = 0;
              pppppppuStack_418 = (ulong *******)0x0;
              uStack_380 = uStack_380 & 0xffffff00;
              uStack_388 = (ulong ******)&uStack_428;
              pppppppuVar22 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
              ;
              pppppppuVar30 = pppppppuStack_210;
              if (pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              uStack_428._0_1_ = (byte)pppppppuVar22;
              uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar22 >> 8);
              uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar22 >> 0x10);
              uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar22 >> 0x20);
              uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar22 >> 0x28);
              uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar22 >> 0x30);
              uStack_420 = SUB84(pppppppuVar22,0);
              bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
              uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
              pppppppuStack_418 = pppppppuVar22 + 3;
              bStack_298 = (byte)&uStack_428;
              bStack_297 = (byte)((ulong)&uStack_428 >> 8);
              uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
              uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
              uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
              uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
              uStack_290 = (uint)&pppppppuStack_1e8;
              uStack_28c = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x20);
              uStack_28b = (ushort)((ulong)&pppppppuStack_1e8 >> 0x28);
              uStack_289 = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x38);
              cStack_288 = (char)&pppppppuStack_208;
              auStack_287 = SUB86((ulong)&pppppppuStack_208 >> 8,0);
              uStack_281 = (undefined1)((ulong)&pppppppuStack_208 >> 0x38);
              ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
              uVar32 = (ulong)uStack_3e8 & 1;
              pppppppuStack_208 = pppppppuVar22;
              pppppppuStack_1e8 = pppppppuVar22;
              if (((ulong)uStack_3e8 & 1) == 0) {
                pppppppuVar22[2] = (ulong ******)pppppppuStack_3d8;
                *pppppppuVar22 = (ulong ******)uStack_3e8;
                pppppppuVar22[1] = (ulong ******)uStack_3e0;
              }
              else {
                uStack_41c = uStack_428._4_1_;
                uStack_41b = uStack_428._5_1_;
                FUN_0412e5e0(pppppppuVar22,pppppppuStack_3d8,uStack_3e0);
                pppppppuVar22 =
                     (ulong *******)
                     CONCAT26(uStack_428._6_2_,
                              CONCAT15(uStack_428._5_1_,
                                       CONCAT14(uStack_428._4_1_,
                                                CONCAT22(uStack_428._2_2_,
                                                         CONCAT11(uStack_428._1_1_,(byte)uStack_428)
                                                        ))));
              }
              pppppppuVar33 = pppppppuStack_208 + 3;
              uStack_420 = SUB84(pppppppuVar33,0);
              uStack_41c = (undefined1)((ulong)pppppppuVar33 >> 0x20);
              uStack_41b = (undefined1)((ulong)pppppppuVar33 >> 0x28);
              bStack_41a = (byte)((ulong)pppppppuVar33 >> 0x30);
              uStack_419 = (undefined1)((ulong)pppppppuVar33 >> 0x38);
              uStack_358 = 0xf47cca0;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              cStack_350 = '\0';
              uStack_34f = 0;
              uStack_34e = 0;
              uStack_34c = 0;
              uStack_34b = 0;
              uStack_34a = 0;
              uStack_349 = 0;
              cStack_348 = '\0';
              uStack_347 = 0;
              uStack_341 = 0;
              uStack_340 = (ulong *******)0x0;
              func_0x0488f040(&cStack_350,pppppppuVar22,pppppppuVar33,
                              ((long)pppppppuVar33 - (long)pppppppuVar22 >> 3) * -0x5555555555555555
                             );
              uStack_338 = 0x20000000c;
              uStack_358 = 0xf47b778;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              func_0x0d604f40(lStack_3f0,&uStack_358);
              uVar14 = uStack_349;
              cVar11 = cStack_350;
              uStack_358 = 0xf47cca0;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              uVar5 = CONCAT16(uStack_34a,
                               CONCAT15(uStack_34b,
                                        CONCAT14(uStack_34c,
                                                 CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)
                                                         ))));
              lVar37 = CONCAT17(uStack_349,uVar5);
              if (lVar37 != 0) {
                lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                if (lVar37 != lVar39) {
                  do {
                    if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                         *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar39 = lVar39 + -0x18;
                  } while (lVar39 != lVar37);
                  lVar37 = CONCAT17(uStack_349,
                                    CONCAT16(uStack_34a,
                                             CONCAT15(uStack_34b,
                                                      CONCAT14(uStack_34c,
                                                               CONCAT22(uStack_34e,
                                                                        CONCAT11(uStack_34f,
                                                                                 cStack_350))))));
                }
                cStack_348 = cVar11;
                uStack_347 = (uint6)((uint7)uVar5 >> 8);
                uStack_341 = uVar14;
                thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
              }
              uVar9 = uStack_428._6_2_;
              uVar8 = uStack_428._5_1_;
              uVar14 = uStack_428._4_1_;
              uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
              lVar37 = CONCAT26(uStack_428._6_2_,
                                CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
              if (lVar37 != 0) {
                lVar39 = CONCAT17(uStack_419,
                                  CONCAT16(bStack_41a,
                                           CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
                if (lVar37 != lVar39) {
                  do {
                    if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                         *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar39 = lVar39 + -0x18;
                  } while (lVar39 != lVar37);
                  lVar37 = CONCAT26(uStack_428._6_2_,
                                    CONCAT15(uStack_428._5_1_,
                                             CONCAT14(uStack_428._4_1_,
                                                      CONCAT22(uStack_428._2_2_,
                                                               CONCAT11(uStack_428._1_1_,
                                                                        (byte)uStack_428)))));
                }
                uStack_41c = uVar14;
                uStack_41b = uVar8;
                bStack_41a = (byte)uVar9;
                uStack_419 = (undefined1)((ushort)uVar9 >> 8);
                uStack_420 = uVar4;
                thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
              }
              if (uVar32 != 0) {
                thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
              }
            }
            ppppppuVar38 = ppppppuStack_160;
            if (((ulong)ppppppuStack_160[-3] & 1) != 0) {
              thunk_FUN_0ee326a0(ppppppuStack_160[-1],
                                 (ulong)ppppppuStack_160[-3] & 0xfffffffffffffffe);
            }
            ppppppuStack_160 = ppppppuVar38 + -3;
            func_0x04862ba0(&pppppppuStack_3b8);
          }
          func_0x04862b40(&pppppppuStack_228);
          func_0x04862b40(&pppppppuStack_3b8);
        }
      }
      ppppppuVar38 = ppppppuStack_160 + -3;
      if (((ulong)ppppppuStack_160[-3] & 1) != 0) {
        thunk_FUN_0ee326a0(ppppppuStack_160[-1],(ulong)ppppppuStack_160[-3] & 0xfffffffffffffffe);
      }
      ppppppuVar10 = ppppppuStack_168;
      ppppppuStack_160 = ppppppuVar38;
      if (ppppppuStack_168 != (ulong ******)0x0) {
        for (; ppppppuVar10 != ppppppuVar38; ppppppuVar38 = ppppppuVar38 + -3) {
          if (((ulong)ppppppuVar38[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(ppppppuVar38[-1],(ulong)ppppppuVar38[-3] & 0xfffffffffffffffe);
          }
        }
        ppppppuStack_160 = ppppppuVar10;
        thunk_FUN_0ee326a0(ppppppuStack_168,(long)ppppppuStack_158 - (long)ppppppuStack_168);
      }
      func_0x0d60cce0(auStack_1c8,&puStack_188,lStack_390,lStack_3f0);
      ppppppuStack_f8 = (ulong ******)0x0;
      ppppppuStack_f0 = (ulong ******)0x0;
      lStack_e8 = 0;
      func_0x0488f040(&ppppppuStack_f8,puStack_188,puStack_180,
                      ((long)puStack_180 - (long)puStack_188 >> 3) * -0x5555555555555555);
      uStack_358 = 0x74657310;
      uStack_354 = 0x74;
      uStack_353 = 0x69;
      uStack_352 = 0x676e;
      cStack_350 = 's';
      uStack_34f = 0;
      cVar11 = func_0x04864290(auStack_1c8);
      if (cVar11 == '\0') {
        puVar19 = &DAT_0f54fc40;
LAB_0d616e0a:
        cVar11 = func_0x04864270(puVar19);
        if (cVar11 == '\0') {
          func_0x0d5ef090(&uStack_3e8,&ppppppuStack_f8);
          uStack_428._0_1_ = 0;
          uStack_428._1_1_ = 0;
          uStack_428._2_2_ = 0;
          uStack_428._4_1_ = 0;
          uStack_428._5_1_ = 0;
          uStack_428._6_2_ = 0;
          uStack_420 = 0;
          uStack_41c = 0;
          uStack_41b = 0;
          bStack_41a = 0;
          uStack_419 = 0;
          pppppppuStack_418 = (ulong *******)0x0;
          uStack_380 = uStack_380 & 0xffffff00;
          uStack_388 = (ulong ******)&uStack_428;
          pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppuVar30 == (ulong *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          uStack_428._0_1_ = (byte)pppppppuVar30;
          uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar30 >> 8);
          uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x10);
          uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x20);
          uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x28);
          uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x30);
          uStack_420 = SUB84(pppppppuVar30,0);
          bStack_41a = (byte)((ulong)pppppppuVar30 >> 0x30);
          uStack_419 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
          pppppppuStack_418 = pppppppuVar30 + 3;
          bStack_298 = (byte)&uStack_428;
          bStack_297 = (byte)((ulong)&uStack_428 >> 8);
          uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
          uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
          uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
          uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
          uStack_290 = (uint)&pppppppuStack_228;
          uStack_28c = (undefined1)((ulong)&pppppppuStack_228 >> 0x20);
          uStack_28b = (ushort)((ulong)&pppppppuStack_228 >> 0x28);
          uStack_289 = (undefined1)((ulong)&pppppppuStack_228 >> 0x38);
          cStack_288 = (char)&pppppppuStack_3b8;
          auStack_287 = SUB86((ulong)&pppppppuStack_3b8 >> 8,0);
          uStack_281 = (undefined1)((ulong)&pppppppuStack_3b8 >> 0x38);
          ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
          uVar32 = (ulong)uStack_3e8 & 1;
          pppppppuStack_3b8 = pppppppuVar30;
          pppppppuStack_228 = pppppppuVar30;
          if (((ulong)uStack_3e8 & 1) == 0) {
            pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
            *pppppppuVar30 = (ulong ******)uStack_3e8;
            pppppppuVar30[1] = (ulong ******)uStack_3e0;
          }
          else {
            uStack_41c = uStack_428._4_1_;
            uStack_41b = uStack_428._5_1_;
            FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
            pppppppuVar30 =
                 (ulong *******)
                 CONCAT26(uStack_428._6_2_,
                          CONCAT15(uStack_428._5_1_,
                                   CONCAT14(uStack_428._4_1_,
                                            CONCAT22(uStack_428._2_2_,
                                                     CONCAT11(uStack_428._1_1_,(byte)uStack_428)))))
            ;
          }
          pppppppuVar22 = pppppppuStack_3b8 + 3;
          uStack_420 = SUB84(pppppppuVar22,0);
          uStack_41c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
          uStack_41b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
          bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
          uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
          uStack_358 = 0xf47cca0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          cStack_350 = '\0';
          uStack_34f = 0;
          uStack_34e = 0;
          uStack_34c = 0;
          uStack_34b = 0;
          uStack_34a = 0;
          uStack_349 = 0;
          cStack_348 = '\0';
          uStack_347 = 0;
          uStack_341 = 0;
          uStack_340 = (ulong *******)0x0;
          func_0x0488f040(&cStack_350,pppppppuVar30,pppppppuVar22,
                          ((long)pppppppuVar22 - (long)pppppppuVar30 >> 3) * -0x5555555555555555);
          uStack_338 = 0x200000009;
          uStack_358 = 0xf47b778;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          func_0x0d5eed10(lStack_3f0,&uStack_358);
          uVar14 = uStack_349;
          cVar11 = cStack_350;
          uStack_358 = 0xf47cca0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          uVar5 = CONCAT16(uStack_34a,
                           CONCAT15(uStack_34b,
                                    CONCAT14(uStack_34c,
                                             CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)))))
          ;
          lVar37 = CONCAT17(uStack_349,uVar5);
          if (lVar37 != 0) {
            lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
            if (lVar37 != lVar39) {
              do {
                if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                     *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                }
                lVar39 = lVar39 + -0x18;
              } while (lVar39 != lVar37);
              lVar37 = CONCAT17(uStack_349,
                                CONCAT16(uStack_34a,
                                         CONCAT15(uStack_34b,
                                                  CONCAT14(uStack_34c,
                                                           CONCAT22(uStack_34e,
                                                                    CONCAT11(uStack_34f,cStack_350))
                                                          ))));
            }
            cStack_348 = cVar11;
            uStack_347 = (uint6)((uint7)uVar5 >> 8);
            uStack_341 = uVar14;
            thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
          }
          uVar9 = uStack_428._6_2_;
          uVar8 = uStack_428._5_1_;
          uVar14 = uStack_428._4_1_;
          uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
          lVar37 = CONCAT26(uStack_428._6_2_,
                            CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
          if (lVar37 != 0) {
            lVar39 = CONCAT17(uStack_419,
                              CONCAT16(bStack_41a,
                                       CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
            if (lVar37 != lVar39) {
              do {
                if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                     *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                }
                lVar39 = lVar39 + -0x18;
              } while (lVar39 != lVar37);
              lVar37 = CONCAT26(uStack_428._6_2_,
                                CONCAT15(uStack_428._5_1_,
                                         CONCAT14(uStack_428._4_1_,
                                                  CONCAT22(uStack_428._2_2_,
                                                           CONCAT11(uStack_428._1_1_,
                                                                    (byte)uStack_428)))));
            }
            uStack_41c = uVar14;
            uStack_41b = uVar8;
            bStack_41a = (byte)uVar9;
            uStack_419 = (undefined1)((ushort)uVar9 >> 8);
            uStack_420 = uVar4;
            thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
          }
          if (uVar32 != 0) {
            thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
          }
        }
        else {
          func_0x0d5cf970(&uStack_358);
          uStack_388._0_4_ = 0;
          uStack_388._4_4_ = 0;
          uStack_380 = 0;
          uStack_37c = 0;
          uStack_37b = 0;
          uStack_37a = 0;
          pppppppuStack_378 = (ulong *******)0x0;
          cVar11 = func_0x0d661c00(pppppppuStack_170,&uStack_358,puVar19,&uStack_388);
          if (cVar11 != '\0') {
            func_0x04865530(&pppppppuStack_208,puVar19);
            func_0x048655b0(&pppppppuStack_1e8,puVar19);
LAB_0d616eb1:
            cVar11 = func_0x04862c80(&pppppppuStack_208,&pppppppuStack_1e8);
            if (cVar11 == '\0') {
              uVar17 = func_0x04862b80(&pppppppuStack_208);
              cVar11 = func_0x04864290(uVar17);
              if (cVar11 == '\0') goto LAB_0d616ea9;
              uStack_428._0_1_ = 8;
              uStack_428._1_1_ = 0x74;
              uStack_428._2_2_ = 0x7079;
              uStack_428._4_1_ = 0x65;
              uStack_428._5_1_ = 0;
              func_0x0d6050c0(&bStack_298,uVar17,&uStack_428,&ppppppuStack_f8,lStack_3f0,0);
              if ((bStack_298 & 1) == 0) {
                if (bStack_298 >> 1 == 5) goto LAB_0d616f3a;
LAB_0d616f24:
                bVar41 = false;
              }
              else {
                if (CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290))) != 5)
                goto LAB_0d616f24;
LAB_0d616f3a:
                pbVar26 = &bStack_297;
                if ((bStack_298 & 1) != 0) {
                  pbVar26 = (byte *)CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
                }
                bVar41 = pbVar26[4] == 0x6c && *(int *)pbVar26 == 0x6562616c;
              }
              if ((bStack_298 & 1) != 0) {
                thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                   CONCAT26(uStack_292,
                                            CONCAT15(uStack_293,
                                                     CONCAT14(uStack_294,
                                                              CONCAT22(uStack_296,
                                                                       CONCAT11(bStack_297,
                                                                                bStack_298))))) &
                                   0xfffffffffffffffe);
              }
              if (((byte)uStack_428 & 1) != 0) {
                thunk_FUN_0ee326a0(pppppppuStack_418,
                                   CONCAT26(uStack_428._6_2_,
                                            CONCAT15(uStack_428._5_1_,
                                                     CONCAT14(uStack_428._4_1_,
                                                              CONCAT22(uStack_428._2_2_,
                                                                       CONCAT11(uStack_428._1_1_,
                                                                                (byte)uStack_428))))
                                           ) & 0xfffffffffffffffe);
              }
              if (!bVar41) goto LAB_0d616ea9;
              uStack_3e8 = (ulong *******)((ulong)uStack_3e8 & 0xffffffffffffff00);
              bStack_298 = 8;
              bStack_297 = 0x74;
              uStack_296 = 0x7865;
              uStack_294 = 0x74;
              uStack_293 = 0;
              func_0x0d6050c0(&uStack_3e0,uVar17,&bStack_298,&ppppppuStack_f8,lStack_3f0,0);
              if ((bStack_298 & 1) != 0) {
                thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                   CONCAT26(uStack_292,
                                            CONCAT15(uStack_293,
                                                     CONCAT14(uStack_294,
                                                              CONCAT22(uStack_296,
                                                                       CONCAT11(bStack_297,
                                                                                bStack_298))))) &
                                   0xfffffffffffffffe);
              }
              bStack_298 = (byte)uStack_3e8;
              ppppppuStack_280 = ppppppuStack_3d0;
              uStack_290 = (uint)uStack_3e0;
              uStack_28c = (undefined1)((ulong)uStack_3e0 >> 0x20);
              uStack_28b = (ushort)((ulong)uStack_3e0 >> 0x28);
              uStack_289 = (undefined1)((ulong)uStack_3e0 >> 0x38);
              cStack_288 = (char)pppppppuStack_3d8;
              auStack_287 = SUB86((ulong)pppppppuStack_3d8 >> 8,0);
              uStack_281 = (undefined1)((ulong)pppppppuStack_3d8 >> 0x38);
              uStack_3e0 = (ulong *******)0x0;
              pppppppuStack_3d8 = (ulong *******)0x0;
              ppppppuStack_3d0 = (ulong ******)0x0;
              uStack_230 = 0;
              pppppppuStack_3b8 = (ulong *******)0x0;
              pppppppuStack_3b0 = (ulong *******)0x0;
              pppppppuStack_3a8 = (ulong *******)0x0;
              pppppppuStack_220 = (ulong *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
              pppppppuStack_228 = (ulong *******)&pppppppuStack_3b8;
              pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70)
              ;
              if (pppppppuVar30 == (ulong *******)0x0) {
                func_0x0eec74c0(0x70,0);
              }
              uVar15 = uStack_230;
              pppppppuStack_3a8 = pppppppuVar30 + 0xe;
              uStack_428._0_1_ = (byte)&pppppppuStack_3b8;
              uStack_428._1_1_ = (undefined1)((ulong)&pppppppuStack_3b8 >> 8);
              uStack_428._2_2_ = (undefined2)((ulong)&pppppppuStack_3b8 >> 0x10);
              uStack_428._4_1_ = (undefined1)((ulong)&pppppppuStack_3b8 >> 0x20);
              uStack_428._5_1_ = (undefined1)((ulong)&pppppppuStack_3b8 >> 0x28);
              uStack_428._6_2_ = (undefined2)((ulong)&pppppppuStack_3b8 >> 0x30);
              uStack_420 = SUB84(&pppppppuStack_140,0);
              uStack_41c = (undefined1)((ulong)&pppppppuStack_140 >> 0x20);
              uStack_41b = (undefined1)((ulong)&pppppppuStack_140 >> 0x28);
              bStack_41a = (byte)((ulong)&pppppppuStack_140 >> 0x30);
              uStack_419 = (undefined1)((ulong)&pppppppuStack_140 >> 0x38);
              pppppppuStack_418 = (ulong *******)&pppppppuStack_1a8;
              uStack_410 = uStack_410 & 0xffffff00;
              *(byte *)pppppppuVar30 = 0;
              *(undefined4 *)(pppppppuVar30 + 0xd) = 0xffffffff;
              pppppppuVar22 = pppppppuStack_3a8;
              pppppppuStack_3b8 = pppppppuVar30;
              pppppppuStack_1a8 = pppppppuVar30;
              pppppppuStack_140 = pppppppuVar30;
              if ((ulong)uStack_230 != 0xffffffff) {
                pppppppuStack_3b0 = pppppppuVar30;
                pppppppuStack_118 = pppppppuVar30;
                (**(code **)(&UNK_0f47bab8 + (ulong)uStack_230 * 8))(&pppppppuStack_118,&bStack_298)
                ;
                *(uint *)(pppppppuVar30 + 0xd) = uVar15;
                pppppppuStack_3b0 = pppppppuStack_1a8 + 0xe;
                pppppppuVar22 = pppppppuStack_3b0;
                if ((ulong)uStack_230 != 0xffffffff) {
                  (**(code **)(&UNK_0f47ba90 + (ulong)uStack_230 * 8))(&uStack_428,&bStack_298);
                  pppppppuVar22 = pppppppuStack_3b0;
                }
              }
              pppppppuVar33 = pppppppuStack_3a8;
              pppppppuVar30 = pppppppuStack_3b8;
              pppppppuStack_3b8 = (ulong *******)0x0;
              pppppppuStack_3b0 = (ulong *******)0x0;
              pppppppuStack_3a8 = (ulong *******)0x0;
              if (*(char *)(lStack_390 + 0x230) == '\x01') {
                lVar37 = *(long *)(lStack_390 + 0x218);
                if (lVar37 == 0) {
                  *(ulong ********)(lStack_390 + 0x218) = pppppppuVar30;
                  *(ulong ********)(lStack_390 + 0x220) = pppppppuVar22;
                  *(ulong ********)(lStack_390 + 0x228) = pppppppuVar33;
                }
                else {
                  pppppppuStack_210 = pppppppuVar30;
                  lVar39 = lVar37;
                  if (lVar37 != *(long *)(lStack_390 + 0x220)) {
                    pppppppuStack_170 = pppppppuVar33;
                    lVar39 = *(long *)(lStack_390 + 0x220);
                    do {
                      lVar34 = lVar39 + -0x70;
                      if ((ulong)*(uint *)(lVar39 + -8) != 0xffffffff) {
                        (**(code **)(&UNK_0f47ba90 + (ulong)*(uint *)(lVar39 + -8) * 8))
                                  (&bStack_298,lVar34);
                      }
                      *(undefined4 *)(lVar39 + -8) = 0xffffffff;
                      lVar39 = lVar34;
                    } while (lVar34 != lVar37);
                    lVar39 = *(long *)(lStack_390 + 0x218);
                    pppppppuVar33 = pppppppuStack_170;
                  }
                  lVar34 = lStack_390;
                  *(long *)(lStack_390 + 0x220) = lVar37;
                  thunk_FUN_0ee326a0(lVar39,*(long *)(lStack_390 + 0x228) - lVar39);
                  pppppppuVar30 = pppppppuStack_3b8;
                  *(ulong ********)(lVar34 + 0x218) = pppppppuStack_210;
                  *(ulong ********)(lVar34 + 0x220) = pppppppuVar22;
                  *(ulong ********)(lVar34 + 0x228) = pppppppuVar33;
                  if (pppppppuStack_3b8 != (ulong *******)0x0) {
                    if (pppppppuStack_3b8 != pppppppuStack_3b0) {
                      pppppppuVar22 = pppppppuStack_3b0;
                      do {
                        pppppppuVar33 = pppppppuVar22 + -0xe;
                        if ((ulong)*(uint *)(pppppppuVar22 + -1) != 0xffffffff) {
                          (**(code **)(&UNK_0f47ba90 + (ulong)*(uint *)(pppppppuVar22 + -1) * 8))
                                    (&bStack_298,pppppppuVar33);
                        }
                        *(undefined4 *)(pppppppuVar22 + -1) = 0xffffffff;
                        pppppppuVar22 = pppppppuVar33;
                      } while (pppppppuVar33 != pppppppuVar30);
                    }
                    pppppppuStack_3b0 = pppppppuVar30;
                    thunk_FUN_0ee326a0(pppppppuStack_3b8,
                                       (long)pppppppuStack_3a8 - (long)pppppppuStack_3b8);
                  }
                }
              }
              else {
                *(ulong ********)(lStack_390 + 0x218) = pppppppuVar30;
                *(ulong ********)(lStack_390 + 0x220) = pppppppuVar22;
                *(ulong ********)(lStack_390 + 0x228) = pppppppuVar33;
                *(undefined1 *)(lStack_390 + 0x230) = 1;
              }
              if (((ulong)uStack_3e0 & 1) != 0) {
                thunk_FUN_0ee326a0(ppppppuStack_3d0,(ulong)uStack_3e0 & 0xfffffffffffffffe);
              }
            }
            func_0x04862b40(&pppppppuStack_1e8);
            func_0x04862b40(&pppppppuStack_208);
            goto LAB_0d61796f;
          }
          pppppppuVar30 = (ulong *******)CONCAT44(uStack_388._4_4_,(uint)uStack_388);
          pppppppuStack_210 =
               (ulong *******)
               CONCAT26(uStack_37a,CONCAT15(uStack_37b,CONCAT14(uStack_37c,uStack_380)));
          if (pppppppuVar30 != pppppppuStack_210) {
            pppppppuStack_170 = (ulong *******)(lStack_3f0 + 0x30);
            do {
              if (((ulong)*pppppppuVar30 & 1) == 0) {
                pppppppuStack_3a8 = (ulong *******)pppppppuVar30[2];
                pppppppuStack_3b8 = (ulong *******)*pppppppuVar30;
                pppppppuStack_3b0 = (ulong *******)pppppppuVar30[1];
              }
              else {
                FUN_0412e5e0(&pppppppuStack_3b8,pppppppuVar30[2],pppppppuVar30[1]);
              }
              uStack_3e8 = (ulong *******)0x0;
              uStack_3e0 = (ulong *******)0x0;
              pppppppuStack_3d8 = (ulong *******)0x0;
              pppppppuStack_228 = (ulong *******)&uStack_3e8;
              pppppppuStack_220 = (ulong *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
              pppppppuVar22 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
              ;
              if (pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              pppppppuStack_3d8 = pppppppuVar22 + 3;
              uStack_428._0_1_ = (byte)&uStack_3e8;
              uStack_428._1_1_ = (undefined1)((ulong)&uStack_3e8 >> 8);
              uStack_428._2_2_ = (undefined2)((ulong)&uStack_3e8 >> 0x10);
              uStack_428._4_1_ = (undefined1)((ulong)&uStack_3e8 >> 0x20);
              uStack_428._5_1_ = (undefined1)((ulong)&uStack_3e8 >> 0x28);
              uStack_428._6_2_ = (undefined2)((ulong)&uStack_3e8 >> 0x30);
              uStack_420 = SUB84(&pppppppuStack_1e8,0);
              uStack_41c = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x20);
              uStack_41b = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x28);
              bStack_41a = (byte)((ulong)&pppppppuStack_1e8 >> 0x30);
              uStack_419 = (undefined1)((ulong)&pppppppuStack_1e8 >> 0x38);
              pppppppuStack_418 = (ulong *******)&pppppppuStack_208;
              uStack_410 = uStack_410 & 0xffffff00;
              uStack_3e8 = pppppppuVar22;
              pppppppuStack_208 = pppppppuVar22;
              pppppppuStack_1e8 = pppppppuVar22;
              if (((ulong)pppppppuStack_3b8 & 1) == 0) {
                pppppppuVar22[2] = (ulong ******)pppppppuStack_3a8;
                *pppppppuVar22 = (ulong ******)pppppppuStack_3b8;
                pppppppuVar22[1] = (ulong ******)pppppppuStack_3b0;
              }
              else {
                uStack_3e0 = pppppppuVar22;
                FUN_0412e5e0(pppppppuVar22,pppppppuStack_3a8,pppppppuStack_3b0);
              }
              uStack_3e0 = pppppppuStack_208 + 3;
              bStack_298 = 0xa0;
              bStack_297 = 0xcc;
              uStack_296 = 0xf47;
              uStack_294 = 0;
              uStack_293 = 0;
              uStack_292 = 0;
              uStack_290 = 0;
              uStack_28c = 0;
              uStack_28b = 0;
              uStack_289 = 0;
              cStack_288 = '\0';
              auStack_287 = (undefined1  [6])0x0;
              uStack_281 = 0;
              ppppppuStack_280 = (ulong ******)0x0;
              func_0x0488f040(&uStack_290,uStack_3e8,uStack_3e0,
                              ((long)uStack_3e0 - (long)uStack_3e8 >> 3) * -0x5555555555555555);
              ppppppuStack_278 = (ulong ******)0x500000000;
              bStack_298 = 0xb0;
              bStack_297 = 0xb7;
              uStack_296 = 0xf47;
              uStack_294 = 0;
              uStack_293 = 0;
              uStack_292 = 0;
              puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
              if (puVar18 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x40,0);
              }
              puVar18[1] = 0;
              puVar18[2] = 0;
              *puVar18 = &UNK_0f1d71a0;
              puVar18[3] = &UNK_0f47cca0;
              puVar18[4] = 0;
              puVar18[5] = 0;
              puVar18[6] = 0;
              lVar37 = CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)));
              lVar39 = CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
              func_0x0488f040(puVar18 + 4,lVar37,lVar39,(lVar39 - lVar37 >> 3) * -0x5555555555555555
                             );
              puVar24 = puVar18 + 3;
              puVar18[7] = ppppppuStack_278;
              puVar18[3] = &UNK_0f47b7b0;
              pppppppuStack_228 = (ulong *******)0x0;
              pppppppuStack_220 = (ulong *******)0x0;
              uStack_428._0_1_ = (byte)puVar24;
              uStack_428._1_1_ = (undefined1)((ulong)puVar24 >> 8);
              uStack_428._2_2_ = (undefined2)((ulong)puVar24 >> 0x10);
              uStack_428._4_1_ = (undefined1)((ulong)puVar24 >> 0x20);
              uStack_428._5_1_ = (undefined1)((ulong)puVar24 >> 0x28);
              uStack_428._6_2_ = (undefined2)((ulong)puVar24 >> 0x30);
              uStack_420 = SUB84(puVar18,0);
              uStack_41c = (undefined1)((ulong)puVar18 >> 0x20);
              uStack_41b = (undefined1)((ulong)puVar18 >> 0x28);
              bStack_41a = (byte)((ulong)puVar18 >> 0x30);
              uStack_419 = (undefined1)((ulong)puVar18 >> 0x38);
              func_0x0d63a6b0(pppppppuStack_170,&uStack_428);
              plVar21 = (long *)CONCAT17(uStack_419,
                                         CONCAT16(bStack_41a,
                                                  CONCAT15(uStack_41b,
                                                           CONCAT14(uStack_41c,uStack_420))));
              if (plVar21 != (long *)0x0) {
                LOCK();
                plVar1 = plVar21 + 1;
                lVar37 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar37 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  func_0x0412c2d0(plVar21);
                }
              }
              pppppppuVar22 = pppppppuStack_220;
              if (pppppppuStack_220 != (ulong *******)0x0) {
                LOCK();
                pppppppuVar33 = pppppppuStack_220 + 1;
                ppppppuVar38 = *pppppppuVar33;
                *pppppppuVar33 = (ulong ******)((long)*pppppppuVar33 + -1);
                UNLOCK();
                if (ppppppuVar38 == (ulong ******)0x0) {
                  (*(code *)(*pppppppuStack_220)[2])(pppppppuStack_220);
                  func_0x0412c2d0(pppppppuVar22);
                }
              }
              uVar14 = uStack_289;
              uVar15 = uStack_290;
              bStack_298 = 0xa0;
              bStack_297 = 0xcc;
              uStack_296 = 0xf47;
              uStack_294 = 0;
              uStack_293 = 0;
              uStack_292 = 0;
              uVar5 = CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290));
              lVar37 = CONCAT17(uStack_289,uVar5);
              if (lVar37 != 0) {
                lVar39 = CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
                if (lVar37 != lVar39) {
                  do {
                    if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                         *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar39 = lVar39 + -0x18;
                  } while (lVar39 != lVar37);
                  lVar37 = CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)))
                  ;
                }
                cStack_288 = (char)uVar15;
                auStack_287 = SUB76((uint7)uVar5 >> 8,0);
                uStack_281 = uVar14;
                thunk_FUN_0ee326a0(lVar37,(long)ppppppuStack_280 - lVar37);
              }
              pppppppuVar33 = uStack_3e8;
              pppppppuVar22 = uStack_3e0;
              if (uStack_3e8 != (ulong *******)0x0) {
                for (; pppppppuVar33 != pppppppuVar22; pppppppuVar22 = pppppppuVar22 + -3) {
                  if (((ulong)pppppppuVar22[-3] & 1) != 0) {
                    thunk_FUN_0ee326a0(pppppppuVar22[-1],
                                       (ulong)pppppppuVar22[-3] & 0xfffffffffffffffe);
                  }
                }
                uStack_3e0 = pppppppuVar33;
                thunk_FUN_0ee326a0(uStack_3e8,(long)pppppppuStack_3d8 - (long)uStack_3e8);
              }
              if (((ulong)pppppppuStack_3b8 & 1) != 0) {
                thunk_FUN_0ee326a0(pppppppuStack_3a8,(ulong)pppppppuStack_3b8 & 0xfffffffffffffffe);
              }
              pppppppuVar30 = pppppppuVar30 + 3;
            } while (pppppppuVar30 != pppppppuStack_210);
          }
LAB_0d61796f:
          uVar4 = uStack_388._4_4_;
          uVar15 = (uint)uStack_388;
          lVar37 = CONCAT44(uStack_388._4_4_,(uint)uStack_388);
          if (lVar37 != 0) {
            lVar39 = CONCAT26(uStack_37a,CONCAT15(uStack_37b,CONCAT14(uStack_37c,uStack_380)));
            if (lVar37 != lVar39) {
              do {
                if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                     *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                }
                lVar39 = lVar39 + -0x18;
              } while (lVar39 != lVar37);
              lVar37 = CONCAT44(uStack_388._4_4_,(uint)uStack_388);
            }
            uStack_380 = uVar15;
            uStack_37c = (undefined1)uVar4;
            uStack_37b = (undefined1)((uint)uVar4 >> 8);
            uStack_37a = (undefined2)((uint)uVar4 >> 0x10);
            thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_378 - lVar37);
          }
          func_0x0d5ce370(&uStack_358);
        }
      }
      else {
        puVar19 = (undefined *)func_0x04864990(auStack_1c8,&uStack_358);
        cVar11 = func_0x04864260(puVar19);
        if ((uStack_358 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT26(uStack_352,
                                      CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                             0xfffffffffffffffe);
        }
        if (cVar11 == '\0') goto LAB_0d616e0a;
      }
      ppppppuVar10 = ppppppuStack_f8;
      ppppppuVar38 = ppppppuStack_f0;
      if (ppppppuStack_f8 != (ulong ******)0x0) {
        for (; ppppppuVar10 != ppppppuVar38; ppppppuVar38 = ppppppuVar38 + -3) {
          if (((ulong)ppppppuVar38[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(ppppppuVar38[-1],(ulong)ppppppuVar38[-3] & 0xfffffffffffffffe);
          }
        }
        ppppppuStack_f0 = ppppppuVar10;
        thunk_FUN_0ee326a0(ppppppuStack_f8,lStack_e8 - (long)ppppppuStack_f8);
      }
      pppppppuStack_118 = (ulong *******)0x0;
      pppppppuStack_110 = (ulong *******)0x0;
      lStack_108 = 0;
      func_0x0488f040(&pppppppuStack_118,puStack_188,puStack_180,
                      ((long)puStack_180 - (long)puStack_188 >> 3) * -0x5555555555555555);
      puVar25 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar25 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar17 = _UNK_011e4dd4;
      cStack_348 = (char)puVar25;
      uStack_347 = (uint6)((ulong)puVar25 >> 8);
      uStack_341 = (undefined1)((ulong)puVar25 >> 0x38);
      uStack_358 = 0x21;
      uStack_354 = 0;
      uStack_353 = 0;
      uStack_352 = 0;
      cStack_350 = '\x1a';
      uStack_34f = 0;
      uStack_34e = 0;
      uStack_34c = 0;
      uStack_34b = 0;
      uStack_34a = 0;
      uStack_349 = 0;
      *(ulong *)((long)puVar25 + 10) = CONCAT26(_UNK_011e4dd2,CONCAT42(_UNK_011e4dce,_DAT_011e4dcc))
      ;
      *(undefined8 *)((long)puVar25 + 0x12) = uVar17;
      uVar7 = _UNK_011e4dce;
      uVar6 = _UNK_011e4dc6;
      uVar4 = CONCAT22(_DAT_011e4dcc,_UNK_011e4dca);
      *puVar25 = _DAT_011e4dc2;
      puVar25[1] = uVar6;
      puVar25[2] = uVar4;
      puVar25[3] = uVar7;
      *(undefined1 *)((long)puVar25 + 0x1a) = 0;
      FUN_0d60bcd0(auStack_1c8,&pppppppuStack_118,lStack_390,lStack_3f0,0,&uStack_358);
      if ((uStack_358 & 1) != 0) {
        thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                           CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                           & 0xfffffffffffffffe);
      }
      pppppppuVar22 = pppppppuStack_118;
      pppppppuVar30 = pppppppuStack_110;
      if (pppppppuStack_118 != (ulong *******)0x0) {
        for (; pppppppuVar22 != pppppppuVar30; pppppppuVar30 = pppppppuVar30 + -3) {
          if (((ulong)pppppppuVar30[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(pppppppuVar30[-1],(ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_110 = pppppppuVar22;
        thunk_FUN_0ee326a0(pppppppuStack_118,lStack_108 - (long)pppppppuStack_118);
      }
      if (param_7 != 0) {
        pppppppuStack_1a8 = (ulong *******)0x0;
        pppppppuStack_1a0 = (ulong *******)0x0;
        pppppppuStack_198 = (ulong *******)0x0;
        func_0x0488f040(&pppppppuStack_1a8,puStack_188,puStack_180,
                        ((long)puStack_180 - (long)puStack_188 >> 3) * -0x5555555555555555);
        uStack_358 = 0x62757310;
        uStack_354 = 0x70;
        uStack_353 = 0x61;
        uStack_352 = 0x6b63;
        cStack_350 = 0x73;
        uStack_34f = 0;
        pppppppuStack_48 = (ulong *******)&pppppppuStack_1a8;
        if (pppppppuStack_1a0 < pppppppuStack_198) {
          pppppppuStack_1a0[2] = (ulong ******)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
          *(undefined4 *)pppppppuStack_1a0 = 0x62757310;
          pbVar26 = (byte *)((long)pppppppuStack_1a0 + 4);
          pbVar26[0] = 0x70;
          pbVar26[1] = 0x61;
          pbVar26[2] = 99;
          pbVar26[3] = 0x6b;
          *(uint *)(pppppppuStack_1a0 + 1) = CONCAT22(uStack_34e,0x73);
          *(uint *)((long)pppppppuStack_1a0 + 0xc) =
               CONCAT13(uStack_349,CONCAT12(uStack_34a,CONCAT11(uStack_34b,uStack_34c)));
          pppppppuStack_1a0 = pppppppuStack_1a0 + 3;
        }
        else {
          pppppppuStack_1a0 = (ulong *******)func_0x04909a40(&pppppppuStack_1a8,&uStack_358);
          if ((uStack_358 & 1) != 0) {
            thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                               CONCAT26(uStack_352,
                                        CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                               0xfffffffffffffffe);
          }
        }
        uStack_358 = 0x62757310;
        uStack_354 = 0x70;
        uStack_353 = 0x61;
        uStack_352 = 0x6b63;
        cStack_350 = 's';
        uStack_34f = 0;
        cVar11 = func_0x04864290(auStack_1c8);
        if (cVar11 == '\0') {
          bVar12 = 1;
          puVar19 = &DAT_0f54fc40;
        }
        else {
          puVar19 = (undefined *)func_0x04864990(auStack_1c8,&uStack_358);
          bVar12 = func_0x04864260(puVar19);
          bVar12 = bVar12 ^ 1;
        }
        if ((uStack_358 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT26(uStack_352,
                                      CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                             0xfffffffffffffffe);
        }
        if (bVar12 != 0) {
          cVar11 = func_0x04864270(puVar19);
          if (cVar11 == '\0') {
            func_0x0d5ef090(&uStack_3e8,&pppppppuStack_1a8);
            uStack_428._0_1_ = 0;
            uStack_428._1_1_ = 0;
            uStack_428._2_2_ = 0;
            uStack_428._4_1_ = 0;
            uStack_428._5_1_ = 0;
            uStack_428._6_2_ = 0;
            uStack_420 = 0;
            uStack_41c = 0;
            uStack_41b = 0;
            bStack_41a = 0;
            uStack_419 = 0;
            pppppppuStack_418 = (ulong *******)0x0;
            uStack_380 = uStack_380 & 0xffffff00;
            uStack_388 = (ulong ******)&uStack_428;
            pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (pppppppuVar30 == (ulong *******)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            uStack_428._0_1_ = (byte)pppppppuVar30;
            uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar30 >> 8);
            uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x10);
            uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x20);
            uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x28);
            uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x30);
            uStack_420 = SUB84(pppppppuVar30,0);
            bStack_41a = (byte)((ulong)pppppppuVar30 >> 0x30);
            uStack_419 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
            pppppppuStack_418 = pppppppuVar30 + 3;
            bStack_298 = (byte)&uStack_428;
            bStack_297 = (byte)((ulong)&uStack_428 >> 8);
            uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
            uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
            uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
            uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
            uStack_290 = (uint)&pppppppuStack_228;
            uStack_28c = (undefined1)((ulong)&pppppppuStack_228 >> 0x20);
            uStack_28b = (ushort)((ulong)&pppppppuStack_228 >> 0x28);
            uStack_289 = (undefined1)((ulong)&pppppppuStack_228 >> 0x38);
            cStack_288 = (char)&pppppppuStack_3b8;
            auStack_287 = SUB86((ulong)&pppppppuStack_3b8 >> 8,0);
            uStack_281 = (undefined1)((ulong)&pppppppuStack_3b8 >> 0x38);
            ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
            uVar32 = (ulong)uStack_3e8 & 1;
            pppppppuStack_3b8 = pppppppuVar30;
            pppppppuStack_228 = pppppppuVar30;
            if (((ulong)uStack_3e8 & 1) == 0) {
              pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
              *pppppppuVar30 = (ulong ******)uStack_3e8;
              pppppppuVar30[1] = (ulong ******)uStack_3e0;
            }
            else {
              uStack_41c = uStack_428._4_1_;
              uStack_41b = uStack_428._5_1_;
              FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
              pppppppuVar30 =
                   (ulong *******)
                   CONCAT26(uStack_428._6_2_,
                            CONCAT15(uStack_428._5_1_,
                                     CONCAT14(uStack_428._4_1_,
                                              CONCAT22(uStack_428._2_2_,
                                                       CONCAT11(uStack_428._1_1_,(byte)uStack_428)))
                                    ));
            }
            pppppppuVar22 = pppppppuStack_3b8 + 3;
            uStack_420 = SUB84(pppppppuVar22,0);
            uStack_41c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
            uStack_41b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
            bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
            uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
            uStack_358 = 0xf47cca0;
            uStack_354 = 0;
            uStack_353 = 0;
            uStack_352 = 0;
            cStack_350 = '\0';
            uStack_34f = 0;
            uStack_34e = 0;
            uStack_34c = 0;
            uStack_34b = 0;
            uStack_34a = 0;
            uStack_349 = 0;
            cStack_348 = '\0';
            uStack_347 = 0;
            uStack_341 = 0;
            uStack_340 = (ulong *******)0x0;
            func_0x0488f040(&cStack_350,pppppppuVar30,pppppppuVar22,
                            ((long)pppppppuVar22 - (long)pppppppuVar30 >> 3) * -0x5555555555555555);
            uStack_338 = 0x200000009;
            uStack_358 = 0xf47b778;
            uStack_354 = 0;
            uStack_353 = 0;
            uStack_352 = 0;
            func_0x0d5eed10(lStack_3f0,&uStack_358);
            uVar14 = uStack_349;
            cVar11 = cStack_350;
            uStack_358 = 0xf47cca0;
            uStack_354 = 0;
            uStack_353 = 0;
            uStack_352 = 0;
            uVar5 = CONCAT16(uStack_34a,
                             CONCAT15(uStack_34b,
                                      CONCAT14(uStack_34c,
                                               CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)))
                                     ));
            lVar37 = CONCAT17(uStack_349,uVar5);
            if (lVar37 != 0) {
              lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
              if (lVar37 != lVar39) {
                do {
                  if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                    thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                       *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar39 = lVar39 + -0x18;
                } while (lVar39 != lVar37);
                lVar37 = CONCAT17(uStack_349,
                                  CONCAT16(uStack_34a,
                                           CONCAT15(uStack_34b,
                                                    CONCAT14(uStack_34c,
                                                             CONCAT22(uStack_34e,
                                                                      CONCAT11(uStack_34f,cStack_350
                                                                              ))))));
              }
              cStack_348 = cVar11;
              uStack_347 = (uint6)((uint7)uVar5 >> 8);
              uStack_341 = uVar14;
              thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
            }
            uVar9 = uStack_428._6_2_;
            uVar8 = uStack_428._5_1_;
            uVar14 = uStack_428._4_1_;
            uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
            lVar37 = CONCAT26(uStack_428._6_2_,
                              CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
            if (lVar37 != 0) {
              lVar39 = CONCAT17(uStack_419,
                                CONCAT16(bStack_41a,
                                         CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
              if (lVar37 != lVar39) {
                do {
                  if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                    thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                       *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar39 = lVar39 + -0x18;
                } while (lVar39 != lVar37);
                lVar37 = CONCAT26(uStack_428._6_2_,
                                  CONCAT15(uStack_428._5_1_,
                                           CONCAT14(uStack_428._4_1_,
                                                    CONCAT22(uStack_428._2_2_,
                                                             CONCAT11(uStack_428._1_1_,
                                                                      (byte)uStack_428)))));
              }
              uStack_41c = uVar14;
              uStack_41b = uVar8;
              bStack_41a = (byte)uVar9;
              uStack_419 = (undefined1)((ushort)uVar9 >> 8);
              uStack_420 = uVar4;
              thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
            }
            if (uVar32 != 0) {
              thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
            }
          }
          else {
            func_0x04865530(apppppppuStack_d8,puVar19);
            func_0x048655b0(apppppppuStack_88,puVar19);
            pppppppuStack_210 = (ulong *******)((ulong)pppppppuStack_210 & 0xffffffff00000000);
            while( true ) {
              cVar11 = func_0x04862c80(apppppppuStack_d8,apppppppuStack_88);
              if (cVar11 != '\0') break;
              pbVar20 = (byte *)func_0x04862b80(apppppppuStack_d8);
              pbVar26 = (byte *)func_0x04136630(&bStack_298,(ulong)pppppppuStack_210 & 0xffffffff);
              uVar32 = (long)pbVar26 - (long)&bStack_298;
              if (0xfffffffffffffff7 < uVar32) goto LAB_0d619fb5;
              if (uVar32 < 0x17) {
                uStack_358 = CONCAT31(uStack_358._1_3_,(char)uVar32 * '\x02');
                lVar39 = (long)&uStack_358 + 1;
                if (pbVar26 != &bStack_298) goto LAB_0d617e59;
              }
              else {
                lVar37 = (uVar32 | 7) + 1;
                if ((uVar32 | 7) == 0x17) {
                  lVar37 = 0x1a;
                }
                lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar37);
                if (lVar39 == 0) {
                  func_0x0eec74c0(lVar37,0);
                }
                cStack_348 = (char)lVar39;
                uStack_347 = (uint6)((ulong)lVar39 >> 8);
                uStack_341 = (undefined1)((ulong)lVar39 >> 0x38);
                uStack_358 = (uint)lVar37 | 1;
                uStack_354 = (undefined1)((ulong)lVar37 >> 0x20);
                uStack_353 = (undefined1)((ulong)lVar37 >> 0x28);
                uStack_352 = (undefined2)((ulong)lVar37 >> 0x30);
                uStack_34f = (undefined1)(uVar32 >> 8);
                uStack_34e = (undefined2)(uVar32 >> 0x10);
                uStack_34c = (undefined1)(uVar32 >> 0x20);
                uStack_34b = (undefined1)(uVar32 >> 0x28);
                uStack_34a = (undefined1)(uVar32 >> 0x30);
                uStack_349 = (undefined1)(uVar32 >> 0x38);
                cStack_350 = (char)uVar32;
LAB_0d617e59:
                func_0x0eee2f00(lVar39,&bStack_298,uVar32);
              }
              *(undefined1 *)(lVar39 + uVar32) = 0;
              pppppppuVar30 = pppppppuStack_1a0;
              pppppppuStack_50 = (ulong *******)&pppppppuStack_1a8;
              if (pppppppuStack_1a0 < pppppppuStack_198) {
                if ((uStack_358 & 1) == 0) {
                  pppppppuStack_1a0[2] =
                       (ulong ******)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                  *(uint *)pppppppuStack_1a0 = uStack_358;
                  *(uint *)((long)pppppppuStack_1a0 + 4) =
                       CONCAT22(uStack_352,CONCAT11(uStack_353,uStack_354));
                  *(uint *)(pppppppuStack_1a0 + 1) =
                       CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350));
                  *(uint *)((long)pppppppuStack_1a0 + 0xc) =
                       CONCAT13(uStack_349,CONCAT12(uStack_34a,CONCAT11(uStack_34b,uStack_34c)));
                  pppppppuStack_1a0 = pppppppuStack_1a0 + 3;
                }
                else {
                  FUN_0412e5e0(pppppppuStack_1a0,
                               CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                               CONCAT17(uStack_349,
                                        CONCAT16(uStack_34a,
                                                 CONCAT15(uStack_34b,
                                                          CONCAT14(uStack_34c,
                                                                   CONCAT22(uStack_34e,
                                                                            CONCAT11(uStack_34f,
                                                                                     cStack_350)))))
                                       ));
                  pppppppuStack_1a0 = pppppppuVar30 + 3;
                }
              }
              else {
                pppppppuStack_1a0 = (ulong *******)func_0x04909a40(pppppppuStack_50,&uStack_358);
              }
              if ((uStack_358 & 1) != 0) {
                thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                   CONCAT26(uStack_352,
                                            CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                                   0xfffffffffffffffe);
              }
              cVar11 = func_0x04864290(pbVar20);
              if (cVar11 == '\0') {
                func_0x0d5ef090(&uStack_3e8,&pppppppuStack_1a8);
                uStack_428._0_1_ = 0;
                uStack_428._1_1_ = 0;
                uStack_428._2_2_ = 0;
                uStack_428._4_1_ = 0;
                uStack_428._5_1_ = 0;
                uStack_428._6_2_ = 0;
                uStack_420 = 0;
                uStack_41c = 0;
                uStack_41b = 0;
                bStack_41a = 0;
                uStack_419 = 0;
                pppppppuStack_418 = (ulong *******)0x0;
                uStack_380 = uStack_380 & 0xffffff00;
                uStack_388 = (ulong ******)&uStack_428;
                pppppppuVar30 =
                     (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                if (pppppppuVar30 == (ulong *******)0x0) {
                  func_0x0eec74c0(0x18,0);
                }
                uStack_428._0_1_ = (byte)pppppppuVar30;
                uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar30 >> 8);
                uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x10);
                uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x20);
                uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x28);
                uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x30);
                uStack_420 = SUB84(pppppppuVar30,0);
                bStack_41a = (byte)((ulong)pppppppuVar30 >> 0x30);
                uStack_419 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
                pppppppuStack_418 = pppppppuVar30 + 3;
                bStack_298 = (byte)&uStack_428;
                bStack_297 = (byte)((ulong)&uStack_428 >> 8);
                uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
                uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
                uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
                uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
                uStack_290 = (uint)&pppppppuStack_228;
                uStack_28c = (undefined1)((ulong)&pppppppuStack_228 >> 0x20);
                uStack_28b = (ushort)((ulong)&pppppppuStack_228 >> 0x28);
                uStack_289 = (undefined1)((ulong)&pppppppuStack_228 >> 0x38);
                cStack_288 = (char)&pppppppuStack_3b8;
                auStack_287 = SUB86((ulong)&pppppppuStack_3b8 >> 8,0);
                uStack_281 = (undefined1)((ulong)&pppppppuStack_3b8 >> 0x38);
                ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
                uVar32 = (ulong)uStack_3e8 & 1;
                pppppppuStack_3b8 = pppppppuVar30;
                pppppppuStack_228 = pppppppuVar30;
                if (((ulong)uStack_3e8 & 1) == 0) {
                  pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
                  *pppppppuVar30 = (ulong ******)uStack_3e8;
                  pppppppuVar30[1] = (ulong ******)uStack_3e0;
                }
                else {
                  uStack_41c = uStack_428._4_1_;
                  uStack_41b = uStack_428._5_1_;
                  FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
                  pppppppuVar30 =
                       (ulong *******)
                       CONCAT26(uStack_428._6_2_,
                                CONCAT15(uStack_428._5_1_,
                                         CONCAT14(uStack_428._4_1_,
                                                  CONCAT22(uStack_428._2_2_,
                                                           CONCAT11(uStack_428._1_1_,
                                                                    (byte)uStack_428)))));
                }
                pppppppuVar22 = pppppppuStack_3b8 + 3;
                uStack_420 = SUB84(pppppppuVar22,0);
                uStack_41c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
                uStack_41b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
                bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
                uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
                uStack_358 = 0xf47cca0;
                uStack_354 = 0;
                uStack_353 = 0;
                uStack_352 = 0;
                cStack_350 = '\0';
                uStack_34f = 0;
                uStack_34e = 0;
                uStack_34c = 0;
                uStack_34b = 0;
                uStack_34a = 0;
                uStack_349 = 0;
                cStack_348 = '\0';
                uStack_347 = 0;
                uStack_341 = 0;
                uStack_340 = (ulong *******)0x0;
                func_0x0488f040(&cStack_350,pppppppuVar30,pppppppuVar22,
                                ((long)pppppppuVar22 - (long)pppppppuVar30 >> 3) *
                                -0x5555555555555555);
                uStack_338 = 0x200000009;
                uStack_358 = 0xf47b778;
                uStack_354 = 0;
                uStack_353 = 0;
                uStack_352 = 0;
                func_0x0d5eed10(lStack_3f0,&uStack_358);
                uVar14 = uStack_349;
                cVar11 = cStack_350;
                uStack_358 = 0xf47cca0;
                uStack_354 = 0;
                uStack_353 = 0;
                uStack_352 = 0;
                uVar5 = CONCAT16(uStack_34a,
                                 CONCAT15(uStack_34b,
                                          CONCAT14(uStack_34c,
                                                   CONCAT22(uStack_34e,
                                                            CONCAT11(uStack_34f,cStack_350)))));
                lVar37 = CONCAT17(uStack_349,uVar5);
                if (lVar37 != 0) {
                  lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                  if (lVar37 != lVar39) {
                    do {
                      if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                        thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                           *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                      }
                      lVar39 = lVar39 + -0x18;
                    } while (lVar39 != lVar37);
                    lVar37 = CONCAT17(uStack_349,
                                      CONCAT16(uStack_34a,
                                               CONCAT15(uStack_34b,
                                                        CONCAT14(uStack_34c,
                                                                 CONCAT22(uStack_34e,
                                                                          CONCAT11(uStack_34f,
                                                                                   cStack_350))))));
                  }
                  cStack_348 = cVar11;
                  uStack_347 = (uint6)((uint7)uVar5 >> 8);
                  uStack_341 = uVar14;
                  thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
                }
                uVar9 = uStack_428._6_2_;
                uVar8 = uStack_428._5_1_;
                uVar14 = uStack_428._4_1_;
                uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
                lVar37 = CONCAT26(uStack_428._6_2_,
                                  CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
                if (lVar37 != 0) {
                  lVar39 = CONCAT17(uStack_419,
                                    CONCAT16(bStack_41a,
                                             CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
                  if (lVar37 != lVar39) {
                    do {
                      if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                        thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                           *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                      }
                      lVar39 = lVar39 + -0x18;
                    } while (lVar39 != lVar37);
                    lVar37 = CONCAT26(uStack_428._6_2_,
                                      CONCAT15(uStack_428._5_1_,
                                               CONCAT14(uStack_428._4_1_,
                                                        CONCAT22(uStack_428._2_2_,
                                                                 CONCAT11(uStack_428._1_1_,
                                                                          (byte)uStack_428)))));
                  }
                  uStack_41c = uVar14;
                  uStack_41b = uVar8;
                  bStack_41a = (byte)uVar9;
                  uStack_419 = (undefined1)((ushort)uVar9 >> 8);
                  uStack_420 = uVar4;
                  thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
                }
                pppppppuVar30 = uStack_3e8;
                pppppppuVar22 = pppppppuStack_3d8;
                if (uVar32 != 0) goto LAB_0d618ce8;
              }
              else {
                uStack_338 = 0;
                uStack_330 = 0;
                cStack_348 = 0;
                uStack_347 = 0;
                uStack_341 = 0;
                uStack_340 = (ulong *******)0x0;
                uStack_358 = 0;
                uStack_354 = 0;
                uStack_353 = 0;
                uStack_352 = 0;
                cStack_350 = 0;
                uStack_34f = 0;
                uStack_34e = 0;
                uStack_34c = 0;
                uStack_34b = 0;
                uStack_34a = 0;
                uStack_349 = 0;
                uStack_328 = uStack_328 & 0xffffff00;
                uStack_428._0_1_ = 0x16;
                uStack_428._1_1_ = 0x66;
                uStack_428._2_2_ = 0x6c6f;
                uStack_428._4_1_ = 100;
                uStack_428._5_1_ = 0x65;
                uStack_428._6_2_ = 0x5f72;
                uStack_420 = 0x656d616e;
                uStack_41c = 0;
                func_0x0d6050c0(&bStack_298,pbVar20,&uStack_428,&pppppppuStack_1a8,lStack_3f0,0);
                if ((uStack_358 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                     CONCAT26(uStack_352,
                                              CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                                     & 0xfffffffffffffffe);
                }
                cStack_348 = cStack_288;
                uStack_347 = (uint6)auStack_287;
                uStack_341 = uStack_281;
                uStack_358 = CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298));
                uStack_354 = uStack_294;
                uStack_353 = uStack_293;
                uStack_352 = uStack_292;
                cStack_350 = (char)uStack_290;
                uStack_34f = (undefined1)(uStack_290 >> 8);
                uStack_34e = (undefined2)(uStack_290 >> 0x10);
                uStack_34c = uStack_28c;
                uStack_34b = (undefined1)uStack_28b;
                uStack_34a = (undefined1)(uStack_28b >> 8);
                uStack_349 = uStack_289;
                bStack_298 = 0;
                bStack_297 = 0;
                if (((byte)uStack_428 & 1) != 0) {
                  thunk_FUN_0ee326a0(pppppppuStack_418,
                                     CONCAT26(uStack_428._6_2_,
                                              CONCAT15(uStack_428._5_1_,
                                                       CONCAT14(uStack_428._4_1_,
                                                                CONCAT22(uStack_428._2_2_,
                                                                         CONCAT11(uStack_428._1_1_,
                                                                                  (byte)uStack_428))
                                                               ))) & 0xfffffffffffffffe);
                }
                uStack_428._0_1_ = 8;
                uStack_428._1_1_ = 0x6e;
                uStack_428._2_2_ = 0x6d61;
                uStack_428._4_1_ = 0x65;
                uStack_428._5_1_ = 0;
                func_0x0d6050c0(&bStack_298,pbVar20,&uStack_428,&pppppppuStack_1a8,lStack_3f0,0);
                if (((ulong)uStack_340 & 1) != 0) {
                  thunk_FUN_0ee326a0(uStack_330,(ulong)uStack_340 & 0xfffffffffffffffe);
                }
                uStack_330 = CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
                uStack_340 = (ulong *******)
                             CONCAT44(CONCAT22(uStack_292,CONCAT11(uStack_293,uStack_294)),
                                      CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298)));
                uStack_338 = CONCAT44(CONCAT13(uStack_289,CONCAT21(uStack_28b,uStack_28c)),
                                      uStack_290);
                bStack_298 = 0;
                bStack_297 = 0;
                if (((byte)uStack_428 & 1) != 0) {
                  thunk_FUN_0ee326a0(pppppppuStack_418,
                                     CONCAT26(uStack_428._6_2_,
                                              CONCAT15(uStack_428._5_1_,
                                                       CONCAT14(uStack_428._4_1_,
                                                                CONCAT22(uStack_428._2_2_,
                                                                         CONCAT11(uStack_428._1_1_,
                                                                                  (byte)uStack_428))
                                                               ))) & 0xfffffffffffffffe);
                }
                bStack_298 = 0x16;
                bStack_297 = 0x6d;
                uStack_296 = 0x6d65;
                uStack_294 = 0x6f;
                uStack_293 = 0x72;
                uStack_292 = 0x5f79;
                uStack_290 = 0x72656974;
                uStack_28c = 0;
                cVar11 = func_0x04864290(pbVar20);
                bVar12 = 1;
                puVar19 = &DAT_0f54fc40;
                if (cVar11 != '\0') {
                  puVar19 = (undefined *)func_0x04864990(pbVar20,&bStack_298);
                  bVar12 = func_0x04864260(puVar19);
                  bVar12 = bVar12 ^ 1;
                }
                if ((bStack_298 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                     CONCAT26(uStack_292,
                                              CONCAT15(uStack_293,
                                                       CONCAT14(uStack_294,
                                                                CONCAT22(uStack_296,
                                                                         CONCAT11(bStack_297,
                                                                                  bStack_298))))) &
                                     0xfffffffffffffffe);
                }
                puVar25 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
                if (puVar25 == (undefined4 *)0x0) {
                  func_0x0eec74c0(0x1a,0);
                }
                uVar7 = _UNK_01234f13;
                uVar6 = _UNK_01234f0f;
                uVar4 = _UNK_01234f0b;
                cStack_288 = (char)puVar25;
                auStack_287 = SUB86((ulong)puVar25 >> 8,0);
                uStack_281 = (undefined1)((ulong)puVar25 >> 0x38);
                bStack_298 = 0x1b;
                bStack_297 = 0;
                uStack_296 = 0;
                uStack_294 = 0;
                uStack_293 = 0;
                uStack_292 = 0;
                uStack_290 = 0x17;
                uStack_28c = 0;
                uStack_28b = 0;
                uStack_289 = 0;
                *puVar25 = _DAT_01234f07;
                puVar25[1] = uVar4;
                puVar25[2] = uVar6;
                puVar25[3] = uVar7;
                *(undefined8 *)((long)puVar25 + 0xf) = 0x726569745f65636e;
                *(undefined1 *)((long)puVar25 + 0x17) = 0;
                cVar11 = func_0x04864290(pbVar20);
                bVar13 = 1;
                puVar35 = &DAT_0f54fc40;
                if (cVar11 != '\0') {
                  puVar35 = (undefined *)func_0x04864990(pbVar20,&bStack_298);
                  bVar13 = func_0x04864260(puVar35);
                  bVar13 = bVar13 ^ 1;
                }
                if ((bStack_298 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                     CONCAT26(uStack_292,
                                              CONCAT15(uStack_293,
                                                       CONCAT14(uStack_294,
                                                                CONCAT22(uStack_296,
                                                                         CONCAT11(bStack_297,
                                                                                  bStack_298))))) &
                                     0xfffffffffffffffe);
                }
                if (bVar12 == 0) {
LAB_0d61830d:
                  if (bVar13 != 0) {
                    cVar11 = func_0x04865420(puVar35);
                    if (cVar11 != '\0') {
                      iVar16 = func_0x04863e00(puVar35,0);
                      if (iVar16 < 1) {
                        iVar16 = 0;
                      }
                      uVar14 = (undefined1)iVar16;
                      if (4 < iVar16) {
                        uVar14 = 5;
                      }
                      goto LAB_0d618c8f;
                    }
                  }
                  func_0x0d5ef090(&uStack_428,&pppppppuStack_1a8);
                  uStack_410 = 0x6d656d16;
                  uStack_40c = 0x5f79726f;
                  uStack_408 = 0x72656974;
                  uStack_404 = uStack_404 & 0xffffff00;
                  pppppppuStack_208 = (ulong *******)0x0;
                  pppppppuStack_200 = (ulong *******)0x0;
                  pppppppuStack_1f8 = (ulong *******)0x0;
                  pppppppuStack_3b8 = (ulong *******)&pppppppuStack_208;
                  pppppppuStack_3b0 = (ulong *******)((ulong)pppppppuStack_3b0 & 0xffffffffffffff00)
                  ;
                  pppppppuVar30 =
                       (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
                  if (pppppppuVar30 == (ulong *******)0x0) {
                    func_0x0eec74c0(0x30,0);
                  }
                  pppppppuStack_1f8 = pppppppuVar30 + 6;
                  uStack_3e8 = (ulong *******)&pppppppuStack_208;
                  uStack_3e0 = (ulong *******)&pppppppuStack_140;
                  pppppppuStack_3d8 = (ulong *******)&pppppppuStack_1e8;
                  ppppppuStack_3d0 = (ulong ******)((ulong)ppppppuStack_3d0 & 0xffffffffffffff00);
                  pppppppuStack_208 = pppppppuVar30;
                  pppppppuStack_1e8 = pppppppuVar30;
                  pppppppuStack_140 = pppppppuVar30;
                  if (((byte)uStack_428 & 1) == 0) {
                    pppppppuVar30[2] = (ulong ******)pppppppuStack_418;
                    *pppppppuVar30 =
                         (ulong ******)
                         CONCAT26(uStack_428._6_2_,
                                  CONCAT15(uStack_428._5_1_,
                                           CONCAT14(uStack_428._4_1_,
                                                    CONCAT22(uStack_428._2_2_,
                                                             CONCAT11(uStack_428._1_1_,
                                                                      (byte)uStack_428)))));
                    pppppppuVar30[1] =
                         (ulong ******)
                         CONCAT17(uStack_419,
                                  CONCAT16(bStack_41a,
                                           CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
                  }
                  else {
                    pppppppuStack_200 = pppppppuVar30;
                    FUN_0412e5e0(pppppppuVar30,pppppppuStack_418,
                                 CONCAT17(uStack_419,
                                          CONCAT16(bStack_41a,
                                                   CONCAT15(uStack_41b,
                                                            CONCAT14(uStack_41c,uStack_420)))));
                  }
                  pppppppuStack_1e8[5] = ppppppuStack_400;
                  *(uint *)(pppppppuStack_1e8 + 3) = uStack_410;
                  *(undefined4 *)((long)pppppppuStack_1e8 + 0x1c) = uStack_40c;
                  *(undefined4 *)(pppppppuStack_1e8 + 4) = uStack_408;
                  *(uint *)((long)pppppppuStack_1e8 + 0x24) = uStack_404;
                  pppppppuStack_200 = pppppppuStack_1e8 + 6;
                  func_0x0d5ef090(&bStack_298,&pppppppuStack_208);
                  func_0x0d5ef090(&uStack_3e8,&pppppppuStack_1a8);
                  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
                  if (puVar18 == (undefined8 *)0x0) {
                    func_0x0eec74c0(0x1a,0);
                  }
                  ppppppuStack_3d0 = (ulong ******)0x1b;
                  uStack_3c8 = 0x17;
                  uVar17 = CONCAT44(_UNK_01234f13,_UNK_01234f0f);
                  *puVar18 = CONCAT44(_UNK_01234f0b,_DAT_01234f07);
                  puVar18[1] = uVar17;
                  *(undefined8 *)((long)puVar18 + 0xf) = 0x726569745f65636e;
                  *(undefined1 *)((long)puVar18 + 0x17) = 0;
                  pppppppuStack_1e8 = (ulong *******)0x0;
                  pppppppuStack_1e0 = (ulong *******)0x0;
                  pppppppuStack_1d8 = (ulong *******)0x0;
                  pppppppuStack_140 = (ulong *******)&pppppppuStack_1e8;
                  uStack_138 = 0;
                  puStack_3c0 = puVar18;
                  pppppppuVar30 =
                       (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
                  if (pppppppuVar30 == (ulong *******)0x0) {
                    func_0x0eec74c0(0x30,0);
                  }
                  pppppppuStack_1d8 = pppppppuVar30 + 6;
                  pppppppuStack_3b8 = (ulong *******)&pppppppuStack_1e8;
                  pppppppuStack_3b0 = (ulong *******)&pppppppuStack_e0;
                  pppppppuStack_3a8 = (ulong *******)&pppppppuStack_1b8;
                  uStack_3a0 = 0;
                  pppppppuStack_1b8 = pppppppuVar30;
                  pppppppuStack_1e8 = pppppppuVar30;
                  pppppppuStack_1e0 = pppppppuVar30;
                  pppppppuStack_e0 = pppppppuVar30;
                  if (((ulong)uStack_3e8 & 1) == 0) {
                    pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
                    *(undefined4 *)pppppppuVar30 = (undefined4)uStack_3e8;
                    *(undefined4 *)((long)pppppppuVar30 + 4) = uStack_3e8._4_4_;
                    *(undefined4 *)(pppppppuVar30 + 1) = (undefined4)uStack_3e0;
                    *(undefined4 *)((long)pppppppuVar30 + 0xc) = uStack_3e0._4_4_;
                  }
                  else {
                    FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
                  }
                  pppppppuStack_1b8 = pppppppuStack_1b8 + 3;
                  FUN_0412e5e0(pppppppuStack_1b8,puVar18,0x17);
                  pppppppuStack_1e0 = pppppppuStack_1b8 + 3;
                  func_0x0d5ef090(&ppppppuStack_280,&pppppppuStack_1e8);
                  pppppppuStack_228 = (ulong *******)0x0;
                  pppppppuStack_220 = (ulong *******)0x0;
                  pppppppuStack_218 = (ulong *******)0x0;
                  pppppppuStack_140 = (ulong *******)&pppppppuStack_228;
                  uStack_138 = 0;
                  pppppppuVar30 =
                       (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
                  if (pppppppuVar30 == (ulong *******)0x0) {
                    func_0x0eec74c0(0x30,0);
                  }
                  pppppppuStack_218 = pppppppuVar30 + 6;
                  pppppppuStack_3b8 = (ulong *******)&pppppppuStack_228;
                  pppppppuStack_3b0 = (ulong *******)&pppppppuStack_e0;
                  pppppppuStack_3a8 = (ulong *******)&pppppppuStack_1b8;
                  uStack_3a0 = 0;
                  pppppppuStack_228 = pppppppuVar30;
                  pppppppuStack_220 = pppppppuVar30;
                  pppppppuStack_e0 = pppppppuVar30;
                  if ((bStack_298 & 1) == 0) {
                    pppppppuVar30[2] =
                         (ulong ******)CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288));
                    *(uint *)pppppppuVar30 = CONCAT22(uStack_296,CONCAT11(bStack_297,bStack_298));
                    *(uint *)((long)pppppppuVar30 + 4) =
                         CONCAT22(uStack_292,CONCAT11(uStack_293,uStack_294));
                    *(uint *)(pppppppuVar30 + 1) = uStack_290;
                    *(uint *)((long)pppppppuVar30 + 0xc) =
                         CONCAT13(uStack_289,CONCAT21(uStack_28b,uStack_28c));
                    pppppppuStack_1b8 = pppppppuVar30 + 3;
                    if (((ulong)ppppppuStack_280 & 1) == 0) goto LAB_0d6188c4;
LAB_0d618912:
                    FUN_0412e5e0(pppppppuStack_1b8,ppppppuStack_270,ppppppuStack_278);
                  }
                  else {
                    pppppppuStack_1b8 = pppppppuVar30;
                    FUN_0412e5e0(pppppppuVar30,CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288))
                                 ,CONCAT17(uStack_289,
                                           CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290))));
                    pppppppuStack_1b8 = pppppppuStack_1b8 + 3;
                    if (((ulong)ppppppuStack_280 & 1) != 0) goto LAB_0d618912;
LAB_0d6188c4:
                    pppppppuStack_1b8[2] = ppppppuStack_270;
                    *pppppppuStack_1b8 = ppppppuStack_280;
                    pppppppuStack_1b8[1] = ppppppuStack_278;
                  }
                  pppppppuStack_220 = pppppppuStack_1b8 + 3;
                  uStack_388._0_4_ = 0xf47cca0;
                  uStack_388._4_4_ = 0;
                  uStack_380 = 0;
                  uStack_37c = 0;
                  uStack_37b = 0;
                  uStack_37a = 0;
                  pppppppuStack_378 = (ulong *******)0x0;
                  lStack_370 = 0;
                  func_0x0488f040();
                  uStack_368 = 0x200000009;
                  uStack_388._0_4_ = 0xf47b778;
                  uStack_388._4_4_ = 0;
                  func_0x0d604f40(lStack_3f0,&uStack_388);
                  uStack_388._0_4_ = 0xf47cca0;
                  uStack_388._4_4_ = 0;
                  pppppppuVar30 =
                       (ulong *******)
                       CONCAT26(uStack_37a,CONCAT15(uStack_37b,CONCAT14(uStack_37c,uStack_380)));
                  if (pppppppuVar30 != (ulong *******)0x0) {
                    pppppppuVar22 = pppppppuVar30;
                    pppppppuVar33 = pppppppuStack_378;
                    if (pppppppuVar30 != pppppppuStack_378) {
                      do {
                        if (((ulong)pppppppuVar33[-3] & 1) != 0) {
                          thunk_FUN_0ee326a0(pppppppuVar33[-1],
                                             (ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
                        }
                        pppppppuVar33 = pppppppuVar33 + -3;
                      } while (pppppppuVar33 != pppppppuVar30);
                      pppppppuVar22 =
                           (ulong *******)
                           CONCAT26(uStack_37a,CONCAT15(uStack_37b,CONCAT14(uStack_37c,uStack_380)))
                      ;
                    }
                    pppppppuStack_378 = pppppppuVar30;
                    thunk_FUN_0ee326a0(pppppppuVar22,lStack_370 - (long)pppppppuVar22);
                  }
                  pppppppuVar22 = pppppppuStack_228;
                  pppppppuVar30 = pppppppuStack_220;
                  if (pppppppuStack_228 != (ulong *******)0x0) {
                    for (; pppppppuVar22 != pppppppuVar30; pppppppuVar30 = pppppppuVar30 + -3) {
                      if (((ulong)pppppppuVar30[-3] & 1) != 0) {
                        thunk_FUN_0ee326a0(pppppppuVar30[-1],
                                           (ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
                      }
                    }
                    pppppppuStack_220 = pppppppuVar22;
                    thunk_FUN_0ee326a0(pppppppuStack_228,
                                       (long)pppppppuStack_218 - (long)pppppppuStack_228);
                  }
                  if (((ulong)ppppppuStack_280 & 1) != 0) {
                    thunk_FUN_0ee326a0(ppppppuStack_270,(ulong)ppppppuStack_280 & 0xfffffffffffffffe
                                      );
                  }
                  pppppppuVar22 = pppppppuStack_1e8;
                  pppppppuVar30 = pppppppuStack_1e0;
                  if ((bStack_298 & 1) != 0) {
                    thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                       CONCAT26(uStack_292,
                                                CONCAT15(uStack_293,
                                                         CONCAT14(uStack_294,
                                                                  CONCAT22(uStack_296,
                                                                           CONCAT11(bStack_297,
                                                                                    bStack_298)))))
                                       & 0xfffffffffffffffe);
                    pppppppuVar22 = pppppppuStack_1e8;
                    pppppppuVar30 = pppppppuStack_1e0;
                  }
                  pppppppuStack_1e8 = pppppppuVar22;
                  pppppppuStack_1e0 = pppppppuVar30;
                  if (pppppppuVar22 != (ulong *******)0x0) {
                    for (; pppppppuVar22 != pppppppuVar30; pppppppuVar30 = pppppppuVar30 + -3) {
                      if (((ulong)pppppppuVar30[-3] & 1) != 0) {
                        thunk_FUN_0ee326a0(pppppppuVar30[-1],
                                           (ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
                      }
                    }
                    pppppppuStack_1e0 = pppppppuVar22;
                    thunk_FUN_0ee326a0(pppppppuStack_1e8,
                                       (long)pppppppuStack_1d8 - (long)pppppppuStack_1e8);
                  }
                  if (((ulong)ppppppuStack_3d0 & 1) != 0) {
                    thunk_FUN_0ee326a0(puStack_3c0,(ulong)ppppppuStack_3d0 & 0xfffffffffffffffe);
                  }
                  pppppppuVar22 = pppppppuStack_208;
                  pppppppuVar30 = pppppppuStack_200;
                  if (((ulong)uStack_3e8 & 1) != 0) {
                    thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
                    pppppppuVar22 = pppppppuStack_208;
                    pppppppuVar30 = pppppppuStack_200;
                  }
                  pppppppuStack_208 = pppppppuVar22;
                  pppppppuStack_200 = pppppppuVar30;
                  if (pppppppuVar22 != (ulong *******)0x0) {
                    for (; pppppppuVar22 != pppppppuVar30; pppppppuVar30 = pppppppuVar30 + -3) {
                      if (((ulong)pppppppuVar30[-3] & 1) != 0) {
                        thunk_FUN_0ee326a0(pppppppuVar30[-1],
                                           (ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
                      }
                    }
                    pppppppuStack_200 = pppppppuVar22;
                    thunk_FUN_0ee326a0(pppppppuStack_208,
                                       (long)pppppppuStack_1f8 - (long)pppppppuStack_208);
                  }
                  if ((uStack_410 & 1) != 0) {
                    thunk_FUN_0ee326a0(ppppppuStack_400,
                                       CONCAT44(uStack_40c,uStack_410) & 0xfffffffffffffffe);
                  }
                  if (((byte)uStack_428 & 1) != 0) {
                    thunk_FUN_0ee326a0(pppppppuStack_418,
                                       CONCAT26(uStack_428._6_2_,
                                                CONCAT15(uStack_428._5_1_,
                                                         CONCAT14(uStack_428._4_1_,
                                                                  CONCAT22(uStack_428._2_2_,
                                                                           CONCAT11(uStack_428._1_1_
                                                                                    ,(byte)
                                                  uStack_428))))) & 0xfffffffffffffffe);
                  }
                }
                else {
                  cVar11 = func_0x04865420(puVar19);
                  if (cVar11 == '\0') goto LAB_0d61830d;
                  iVar16 = func_0x04863e00(puVar19,0);
                  if (iVar16 < 0x20) {
                    lVar37 = 8;
                    if ((0x17 < iVar16) || (lVar37 = 0x10, 0x11 < iVar16)) goto LAB_0d618c83;
                    lVar37 = 0x18;
                    if ((0xb < iVar16) ||
                       ((lVar37 = 0x20, iVar16 == 0xb || (lVar37 = 0x28, -1 < iVar16))))
                    goto LAB_0d618c83;
                    uVar14 = 0;
                  }
                  else {
                    lVar37 = 0;
LAB_0d618c83:
                    uVar14 = (&UNK_01dd2efc)[lVar37];
                  }
LAB_0d618c8f:
                  uStack_328 = CONCAT31(uStack_328._1_3_,uVar14);
                }
                func_0x0d612890(param_7,&uStack_358);
                if (((ulong)uStack_340 & 1) != 0) {
                  thunk_FUN_0ee326a0(uStack_330,(ulong)uStack_340 & 0xfffffffffffffffe);
                }
                if ((uStack_358 & 1) != 0) {
                  pppppppuVar30 =
                       (ulong *******)
                       CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)));
                  pppppppuVar22 =
                       (ulong *******)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
LAB_0d618ce8:
                  thunk_FUN_0ee326a0(pppppppuVar22,(ulong)pppppppuVar30 & 0xfffffffffffffffe);
                }
              }
              pppppppuVar30 = pppppppuStack_1a0;
              if (((ulong)pppppppuStack_1a0[-3] & 1) != 0) {
                thunk_FUN_0ee326a0(pppppppuStack_1a0[-1],
                                   (ulong)pppppppuStack_1a0[-3] & 0xfffffffffffffffe);
              }
              pppppppuStack_210 =
                   (ulong *******)CONCAT44(pppppppuStack_210._4_4_,(int)pppppppuStack_210 + 1);
              pppppppuStack_1a0 = pppppppuVar30 + -3;
              func_0x04862ba0(apppppppuStack_d8);
            }
            func_0x04862b40(apppppppuStack_88);
            func_0x04862b40(apppppppuStack_d8);
          }
        }
        pppppppuVar30 = pppppppuStack_1a0 + -3;
        if (((ulong)pppppppuStack_1a0[-3] & 1) != 0) {
          thunk_FUN_0ee326a0(pppppppuStack_1a0[-1],(ulong)pppppppuStack_1a0[-3] & 0xfffffffffffffffe
                            );
        }
        pppppppuVar22 = pppppppuStack_1a8;
        pppppppuStack_1a0 = pppppppuVar30;
        if (pppppppuStack_1a8 != (ulong *******)0x0) {
          for (; pppppppuVar22 != pppppppuVar30; pppppppuVar30 = pppppppuVar30 + -3) {
            if (((ulong)pppppppuVar30[-3] & 1) != 0) {
              thunk_FUN_0ee326a0(pppppppuVar30[-1],(ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_1a0 = pppppppuVar22;
          thunk_FUN_0ee326a0(pppppppuStack_1a8,(long)pppppppuStack_198 - (long)pppppppuStack_1a8);
        }
      }
      pppppppuStack_3b8 = (ulong *******)0x0;
      pppppppuStack_3b0 = (ulong *******)0x0;
      pppppppuStack_3a8 = (ulong *******)0x0;
      func_0x0488f040(&pppppppuStack_3b8,puStack_188,puStack_180,
                      ((long)puStack_180 - (long)puStack_188 >> 3) * -0x5555555555555555);
      uStack_358 = 0x70616318;
      uStack_354 = 0x61;
      uStack_353 = 0x62;
      uStack_352 = 0x6c69;
      cStack_350 = 0x69;
      uStack_34f = 0x74;
      uStack_34e = 0x6569;
      uStack_34c = 0x73;
      uStack_34b = 0;
      apppppppuStack_88[0] = (ulong *******)&pppppppuStack_3b8;
      if (pppppppuStack_3b0 < pppppppuStack_3a8) {
        pppppppuStack_3b0[2] = (ulong ******)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
        *(undefined4 *)pppppppuStack_3b0 = 0x70616318;
        *(undefined4 *)((long)pppppppuStack_3b0 + 4) = 0x6c696261;
        *(undefined4 *)(pppppppuStack_3b0 + 1) = 0x65697469;
        *(uint *)((long)pppppppuStack_3b0 + 0xc) = CONCAT13(uStack_349,CONCAT12(uStack_34a,0x73));
        pppppppuStack_3b0 = pppppppuStack_3b0 + 3;
      }
      else {
        pppppppuStack_3b0 = (ulong *******)func_0x04909a40(&pppppppuStack_3b8,&uStack_358);
        if ((uStack_358 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT26(uStack_352,
                                      CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                             0xfffffffffffffffe);
        }
      }
      uStack_358 = 0x70616318;
      uStack_354 = 0x61;
      uStack_353 = 0x62;
      uStack_352 = 0x6c69;
      cStack_350 = 'i';
      uStack_34f = 0x74;
      uStack_34e = 0x6569;
      uStack_34c = 0x73;
      uStack_34b = 0;
      cVar11 = func_0x04864290(auStack_1c8);
      if (cVar11 == '\0') {
        bVar12 = 1;
        puVar19 = &DAT_0f54fc40;
      }
      else {
        puVar19 = (undefined *)func_0x04864990(auStack_1c8,&uStack_358);
        bVar12 = func_0x04864260(puVar19);
        bVar12 = bVar12 ^ 1;
      }
      if ((uStack_358 & 1) != 0) {
        thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                           CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)))
                           & 0xfffffffffffffffe);
      }
      if (bVar12 != 0) {
        cVar11 = func_0x04864270(puVar19);
        if (cVar11 == '\0') {
          func_0x0d5ef090(&uStack_3e8,&pppppppuStack_3b8);
          uStack_428._0_1_ = 0;
          uStack_428._1_1_ = 0;
          uStack_428._2_2_ = 0;
          uStack_428._4_1_ = 0;
          uStack_428._5_1_ = 0;
          uStack_428._6_2_ = 0;
          uStack_420 = 0;
          uStack_41c = 0;
          uStack_41b = 0;
          bStack_41a = 0;
          uStack_419 = 0;
          pppppppuStack_418 = (ulong *******)0x0;
          uStack_380 = uStack_380 & 0xffffff00;
          uStack_388 = (ulong ******)&uStack_428;
          pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppuVar30 == (ulong *******)0x0) {
            func_0x0eec74c0(0x18,0);
          }
          uStack_428._0_1_ = (byte)pppppppuVar30;
          uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar30 >> 8);
          uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x10);
          uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x20);
          uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x28);
          uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x30);
          uStack_420 = SUB84(pppppppuVar30,0);
          bStack_41a = (byte)((ulong)pppppppuVar30 >> 0x30);
          uStack_419 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
          pppppppuStack_418 = pppppppuVar30 + 3;
          bStack_298 = (byte)&uStack_428;
          bStack_297 = (byte)((ulong)&uStack_428 >> 8);
          uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
          uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
          uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
          uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
          uStack_290 = (uint)&pppppppuStack_208;
          uStack_28c = (undefined1)((ulong)&pppppppuStack_208 >> 0x20);
          uStack_28b = (ushort)((ulong)&pppppppuStack_208 >> 0x28);
          uStack_289 = (undefined1)((ulong)&pppppppuStack_208 >> 0x38);
          cStack_288 = (char)&pppppppuStack_228;
          auStack_287 = SUB86((ulong)&pppppppuStack_228 >> 8,0);
          uStack_281 = (undefined1)((ulong)&pppppppuStack_228 >> 0x38);
          ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
          uVar32 = (ulong)uStack_3e8 & 1;
          pppppppuStack_228 = pppppppuVar30;
          pppppppuStack_208 = pppppppuVar30;
          if (((ulong)uStack_3e8 & 1) == 0) {
            pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
            *pppppppuVar30 = (ulong ******)uStack_3e8;
            pppppppuVar30[1] = (ulong ******)uStack_3e0;
          }
          else {
            uStack_41c = uStack_428._4_1_;
            uStack_41b = uStack_428._5_1_;
            FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
            pppppppuVar30 =
                 (ulong *******)
                 CONCAT26(uStack_428._6_2_,
                          CONCAT15(uStack_428._5_1_,
                                   CONCAT14(uStack_428._4_1_,
                                            CONCAT22(uStack_428._2_2_,
                                                     CONCAT11(uStack_428._1_1_,(byte)uStack_428)))))
            ;
          }
          pppppppuVar22 = pppppppuStack_228 + 3;
          uStack_420 = SUB84(pppppppuVar22,0);
          uStack_41c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
          uStack_41b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
          bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
          uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
          uStack_358 = 0xf47cca0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          cStack_350 = '\0';
          uStack_34f = 0;
          uStack_34e = 0;
          uStack_34c = 0;
          uStack_34b = 0;
          uStack_34a = 0;
          uStack_349 = 0;
          cStack_348 = '\0';
          uStack_347 = 0;
          uStack_341 = 0;
          uStack_340 = (ulong *******)0x0;
          func_0x0488f040(&cStack_350,pppppppuVar30,pppppppuVar22,
                          ((long)pppppppuVar22 - (long)pppppppuVar30 >> 3) * -0x5555555555555555);
          uStack_338 = 0x200000009;
          uStack_358 = 0xf47b778;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          func_0x0d5eed10(lStack_3f0,&uStack_358);
          uVar14 = uStack_349;
          cVar11 = cStack_350;
          uStack_358 = 0xf47cca0;
          uStack_354 = 0;
          uStack_353 = 0;
          uStack_352 = 0;
          uVar5 = CONCAT16(uStack_34a,
                           CONCAT15(uStack_34b,
                                    CONCAT14(uStack_34c,
                                             CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)))))
          ;
          lVar37 = CONCAT17(uStack_349,uVar5);
          if (lVar37 != 0) {
            lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
            if (lVar37 != lVar39) {
              do {
                if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                     *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                }
                lVar39 = lVar39 + -0x18;
              } while (lVar39 != lVar37);
              lVar37 = CONCAT17(uStack_349,
                                CONCAT16(uStack_34a,
                                         CONCAT15(uStack_34b,
                                                  CONCAT14(uStack_34c,
                                                           CONCAT22(uStack_34e,
                                                                    CONCAT11(uStack_34f,cStack_350))
                                                          ))));
            }
            cStack_348 = cVar11;
            uStack_347 = (uint6)((uint7)uVar5 >> 8);
            uStack_341 = uVar14;
            thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
          }
          uVar9 = uStack_428._6_2_;
          uVar8 = uStack_428._5_1_;
          uVar14 = uStack_428._4_1_;
          uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
          lVar37 = CONCAT26(uStack_428._6_2_,
                            CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
          if (lVar37 != 0) {
            lVar39 = CONCAT17(uStack_419,
                              CONCAT16(bStack_41a,
                                       CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
            if (lVar37 != lVar39) {
              do {
                if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                     *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                }
                lVar39 = lVar39 + -0x18;
              } while (lVar39 != lVar37);
              lVar37 = CONCAT26(uStack_428._6_2_,
                                CONCAT15(uStack_428._5_1_,
                                         CONCAT14(uStack_428._4_1_,
                                                  CONCAT22(uStack_428._2_2_,
                                                           CONCAT11(uStack_428._1_1_,
                                                                    (byte)uStack_428)))));
            }
            uStack_41c = uVar14;
            uStack_41b = uVar8;
            bStack_41a = (byte)uVar9;
            uStack_419 = (undefined1)((ushort)uVar9 >> 8);
            uStack_420 = uVar4;
            thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
          }
          if (uVar32 != 0) {
            thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
          }
        }
        else {
          func_0x04865530(&pppppppuStack_208,puVar19);
          func_0x048655b0(&pppppppuStack_1e8,puVar19);
          iVar16 = 0;
          while( true ) {
            cVar11 = func_0x04862c80(&pppppppuStack_208,&pppppppuStack_1e8);
            if (cVar11 != '\0') break;
            uVar17 = func_0x04862b80(&pppppppuStack_208);
            pbVar20 = &bStack_298;
            pbVar26 = (byte *)func_0x04136630(pbVar20,iVar16);
            uVar32 = (long)pbVar26 - (long)pbVar20;
            if (0xfffffffffffffff7 < uVar32) {
              func_0x04882e30();
LAB_0d619fb0:
              func_0x04882e30();
LAB_0d619fb5:
              uVar17 = func_0x04882e30();
              uVar17 = FUN_04882e20(uVar17);
              func_0x0d639a90(pbVar20);
              func_0x0d632010(&uStack_428);
              pppppppuStack_3b0 = (ulong *******)pbVar20;
              func_0x0d631f40(&pppppppuStack_228);
              func_0x0d612850(&bStack_298);
              if (((ulong)uStack_3e0 & 1) != 0) {
                thunk_FUN_0ee326a0(ppppppuStack_3d0,(ulong)uStack_3e0 & 0xfffffffffffffffe);
              }
              func_0x04862b40(&pppppppuStack_1e8);
              func_0x04862b40(&pppppppuStack_208);
              func_0x04886070(&uStack_388);
              func_0x0d5ce370(&uStack_358);
              func_0x04886070(&ppppppuStack_f8);
              FUN_04863610(auStack_40);
              func_0x04886070(&puStack_188);
              FUN_04863610(auStack_1c8);
              uVar17 = func_0x0eee2d70(uVar17);
              func_0x0485e2d0(&uStack_358);
              FUN_04863610(auStack_1c8);
              func_0x0eee2d70(uVar17);
              pcVar3 = (code *)swi(3);
              puVar27 = (undefined1 *)(*pcVar3)();
              return puVar27;
            }
            if (uVar32 < 0x17) {
              uStack_358 = CONCAT31(uStack_358._1_3_,(char)uVar32 * '\x02');
              lVar39 = (long)&uStack_358 + 1;
              if (pbVar26 != &bStack_298) goto LAB_0d619329;
            }
            else {
              lVar37 = (uVar32 | 7) + 1;
              if ((uVar32 | 7) == 0x17) {
                lVar37 = 0x1a;
              }
              lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar37);
              if (lVar39 == 0) {
                func_0x0eec74c0(lVar37,0);
              }
              cStack_348 = (char)lVar39;
              uStack_347 = (uint6)((ulong)lVar39 >> 8);
              uStack_341 = (undefined1)((ulong)lVar39 >> 0x38);
              uStack_358 = (uint)lVar37 | 1;
              uStack_354 = (undefined1)((ulong)lVar37 >> 0x20);
              uStack_353 = (undefined1)((ulong)lVar37 >> 0x28);
              uStack_352 = (undefined2)((ulong)lVar37 >> 0x30);
              uStack_34f = (undefined1)(uVar32 >> 8);
              uStack_34e = (undefined2)(uVar32 >> 0x10);
              uStack_34c = (undefined1)(uVar32 >> 0x20);
              uStack_34b = (undefined1)(uVar32 >> 0x28);
              uStack_34a = (undefined1)(uVar32 >> 0x30);
              uStack_349 = (undefined1)(uVar32 >> 0x38);
              cStack_350 = (char)uVar32;
LAB_0d619329:
              func_0x0eee2f00(lVar39,&bStack_298,uVar32);
            }
            pppppppuVar30 = pppppppuStack_3b0;
            *(undefined1 *)(lVar39 + uVar32) = 0;
            pppppppuStack_1b8 = (ulong *******)&pppppppuStack_3b8;
            if (pppppppuStack_3b0 < pppppppuStack_3a8) {
              if ((uStack_358 & 1) == 0) {
                pppppppuStack_3b0[2] =
                     (ulong ******)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                *(uint *)pppppppuStack_3b0 = uStack_358;
                *(uint *)((long)pppppppuStack_3b0 + 4) =
                     CONCAT22(uStack_352,CONCAT11(uStack_353,uStack_354));
                *(uint *)(pppppppuStack_3b0 + 1) =
                     CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350));
                *(uint *)((long)pppppppuStack_3b0 + 0xc) =
                     CONCAT13(uStack_349,CONCAT12(uStack_34a,CONCAT11(uStack_34b,uStack_34c)));
                pppppppuStack_3b0 = pppppppuStack_3b0 + 3;
              }
              else {
                FUN_0412e5e0(pppppppuStack_3b0,CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT17(uStack_349,
                                      CONCAT16(uStack_34a,
                                               CONCAT15(uStack_34b,
                                                        CONCAT14(uStack_34c,
                                                                 CONCAT22(uStack_34e,
                                                                          CONCAT11(uStack_34f,
                                                                                   cStack_350)))))))
                ;
                pppppppuStack_3b0 = pppppppuVar30 + 3;
              }
            }
            else {
              pppppppuStack_3b0 = (ulong *******)func_0x04909a40(&pppppppuStack_3b8,&uStack_358);
            }
            if ((uStack_358 & 1) != 0) {
              thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                 CONCAT26(uStack_352,
                                          CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                                 0xfffffffffffffffe);
            }
            cVar11 = func_0x04865490(uVar17);
            if (cVar11 == '\0') {
              func_0x0d5ef090(&uStack_3e8,&pppppppuStack_3b8);
              uStack_428._0_1_ = 0;
              uStack_428._1_1_ = 0;
              uStack_428._2_2_ = 0;
              uStack_428._4_1_ = 0;
              uStack_428._5_1_ = 0;
              uStack_428._6_2_ = 0;
              uStack_420 = 0;
              uStack_41c = 0;
              uStack_41b = 0;
              bStack_41a = 0;
              uStack_419 = 0;
              pppppppuStack_418 = (ulong *******)0x0;
              pppppppuStack_220 = (ulong *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
              pppppppuStack_228 = (ulong *******)&uStack_428;
              pppppppuVar30 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18)
              ;
              if (pppppppuVar30 == (ulong *******)0x0) {
                func_0x0eec74c0(0x18,0);
              }
              uStack_428._0_1_ = (byte)pppppppuVar30;
              uStack_428._1_1_ = (undefined1)((ulong)pppppppuVar30 >> 8);
              uStack_428._2_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x10);
              uStack_428._4_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x20);
              uStack_428._5_1_ = (undefined1)((ulong)pppppppuVar30 >> 0x28);
              uStack_428._6_2_ = (undefined2)((ulong)pppppppuVar30 >> 0x30);
              uStack_420 = SUB84(pppppppuVar30,0);
              bStack_41a = (byte)((ulong)pppppppuVar30 >> 0x30);
              uStack_419 = (undefined1)((ulong)pppppppuVar30 >> 0x38);
              pppppppuStack_418 = pppppppuVar30 + 3;
              bStack_298 = (byte)&uStack_428;
              bStack_297 = (byte)((ulong)&uStack_428 >> 8);
              uStack_296 = (undefined2)((ulong)&uStack_428 >> 0x10);
              uStack_294 = (undefined1)((ulong)&uStack_428 >> 0x20);
              uStack_293 = (undefined1)((ulong)&uStack_428 >> 0x28);
              uStack_292 = (undefined2)((ulong)&uStack_428 >> 0x30);
              uStack_290 = (uint)apppppppuStack_d8;
              uStack_28c = (undefined1)((ulong)apppppppuStack_d8 >> 0x20);
              uStack_28b = (ushort)((ulong)apppppppuStack_d8 >> 0x28);
              uStack_289 = (undefined1)((ulong)apppppppuStack_d8 >> 0x38);
              cStack_288 = (char)&pppppppuStack_140;
              auStack_287 = SUB86((ulong)&pppppppuStack_140 >> 8,0);
              uStack_281 = (undefined1)((ulong)&pppppppuStack_140 >> 0x38);
              ppppppuStack_280 = (ulong ******)((ulong)ppppppuStack_280 & 0xffffffffffffff00);
              uVar32 = (ulong)uStack_3e8 & 1;
              pppppppuStack_140 = pppppppuVar30;
              apppppppuStack_d8[0] = pppppppuVar30;
              if (((ulong)uStack_3e8 & 1) == 0) {
                pppppppuVar30[2] = (ulong ******)pppppppuStack_3d8;
                *pppppppuVar30 = (ulong ******)uStack_3e8;
                pppppppuVar30[1] = (ulong ******)uStack_3e0;
              }
              else {
                uStack_41c = uStack_428._4_1_;
                uStack_41b = uStack_428._5_1_;
                FUN_0412e5e0(pppppppuVar30,pppppppuStack_3d8,uStack_3e0);
                pppppppuVar30 =
                     (ulong *******)
                     CONCAT26(uStack_428._6_2_,
                              CONCAT15(uStack_428._5_1_,
                                       CONCAT14(uStack_428._4_1_,
                                                CONCAT22(uStack_428._2_2_,
                                                         CONCAT11(uStack_428._1_1_,(byte)uStack_428)
                                                        ))));
              }
              pppppppuVar22 = pppppppuStack_140 + 3;
              uStack_420 = SUB84(pppppppuVar22,0);
              uStack_41c = (undefined1)((ulong)pppppppuVar22 >> 0x20);
              uStack_41b = (undefined1)((ulong)pppppppuVar22 >> 0x28);
              bStack_41a = (byte)((ulong)pppppppuVar22 >> 0x30);
              uStack_419 = (undefined1)((ulong)pppppppuVar22 >> 0x38);
              uStack_358 = 0xf47cca0;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              cStack_350 = '\0';
              uStack_34f = 0;
              uStack_34e = 0;
              uStack_34c = 0;
              uStack_34b = 0;
              uStack_34a = 0;
              uStack_349 = 0;
              cStack_348 = '\0';
              uStack_347 = 0;
              uStack_341 = 0;
              uStack_340 = (ulong *******)0x0;
              func_0x0488f040(&cStack_350,pppppppuVar30,pppppppuVar22,
                              ((long)pppppppuVar22 - (long)pppppppuVar30 >> 3) * -0x5555555555555555
                             );
              uStack_338 = 0x200000009;
              uStack_358 = 0xf47b778;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              func_0x0d5eed10(lStack_3f0,&uStack_358);
              uVar14 = uStack_349;
              cVar11 = cStack_350;
              uStack_358 = 0xf47cca0;
              uStack_354 = 0;
              uStack_353 = 0;
              uStack_352 = 0;
              uVar5 = CONCAT16(uStack_34a,
                               CONCAT15(uStack_34b,
                                        CONCAT14(uStack_34c,
                                                 CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350)
                                                         ))));
              lVar37 = CONCAT17(uStack_349,uVar5);
              if (lVar37 != 0) {
                lVar39 = CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                if (lVar37 != lVar39) {
                  do {
                    if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                         *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar39 = lVar39 + -0x18;
                  } while (lVar39 != lVar37);
                  lVar37 = CONCAT17(uStack_349,
                                    CONCAT16(uStack_34a,
                                             CONCAT15(uStack_34b,
                                                      CONCAT14(uStack_34c,
                                                               CONCAT22(uStack_34e,
                                                                        CONCAT11(uStack_34f,
                                                                                 cStack_350))))));
                }
                cStack_348 = cVar11;
                uStack_347 = (uint6)((uint7)uVar5 >> 8);
                uStack_341 = uVar14;
                thunk_FUN_0ee326a0(lVar37,(long)uStack_340 - lVar37);
              }
              uVar9 = uStack_428._6_2_;
              uVar8 = uStack_428._5_1_;
              uVar14 = uStack_428._4_1_;
              uVar4 = CONCAT22(uStack_428._2_2_,CONCAT11(uStack_428._1_1_,(byte)uStack_428));
              lVar37 = CONCAT26(uStack_428._6_2_,
                                CONCAT15(uStack_428._5_1_,CONCAT14(uStack_428._4_1_,uVar4)));
              if (lVar37 != 0) {
                lVar39 = CONCAT17(uStack_419,
                                  CONCAT16(bStack_41a,
                                           CONCAT15(uStack_41b,CONCAT14(uStack_41c,uStack_420))));
                if (lVar37 != lVar39) {
                  do {
                    if ((*(byte *)(lVar39 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar39 + -8),
                                         *(ulong *)(lVar39 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar39 = lVar39 + -0x18;
                  } while (lVar39 != lVar37);
                  lVar37 = CONCAT26(uStack_428._6_2_,
                                    CONCAT15(uStack_428._5_1_,
                                             CONCAT14(uStack_428._4_1_,
                                                      CONCAT22(uStack_428._2_2_,
                                                               CONCAT11(uStack_428._1_1_,
                                                                        (byte)uStack_428)))));
                }
                uStack_41c = uVar14;
                uStack_41b = uVar8;
                bStack_41a = (byte)uVar9;
                uStack_419 = (undefined1)((ushort)uVar9 >> 8);
                uStack_420 = uVar4;
                thunk_FUN_0ee326a0(lVar37,(long)pppppppuStack_418 - lVar37);
              }
              if (uVar32 != 0) {
                thunk_FUN_0ee326a0(pppppppuStack_3d8,(ulong)uStack_3e8 & 0xfffffffffffffffe);
              }
              bVar12 = *(byte *)(pppppppuStack_3b0 + -3);
              pppppppuVar30 = pppppppuStack_3b0;
            }
            else {
              bStack_298 = 0;
              bStack_297 = 0;
              func_0x04863cb0(&uStack_358,uVar17,&bStack_298);
              if ((bStack_298 & 1) != 0) {
                thunk_FUN_0ee326a0(CONCAT17(uStack_281,CONCAT61(auStack_287,cStack_288)),
                                   CONCAT26(uStack_292,
                                            CONCAT15(uStack_293,
                                                     CONCAT14(uStack_294,
                                                              CONCAT22(uStack_296,
                                                                       CONCAT11(bStack_297,
                                                                                bStack_298))))) &
                                   0xfffffffffffffffe);
              }
              if ((uStack_358 & 1) == 0) {
                pppppppuStack_378 =
                     (ulong *******)CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348));
                uStack_380 = CONCAT22(uStack_34e,CONCAT11(uStack_34f,cStack_350));
                uStack_37a = CONCAT11(uStack_349,uStack_34a);
                uStack_388 = (ulong ******)
                             CONCAT44(CONCAT22(uStack_352,CONCAT11(uStack_353,uStack_354)),
                                      uStack_358);
                uStack_37c = uStack_34c;
                uStack_37b = uStack_34b;
              }
              else {
                FUN_0412e5e0(&uStack_388,CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT17(uStack_349,
                                      CONCAT16(uStack_34a,
                                               CONCAT15(uStack_34b,
                                                        CONCAT14(uStack_34c,
                                                                 CONCAT22(uStack_34e,
                                                                          CONCAT11(uStack_34f,
                                                                                   cStack_350)))))))
                ;
              }
              func_0x0d604da0(lStack_390,lStack_3f0,&uStack_388,param_8);
              if (((ulong)uStack_388 & 1) != 0) {
                thunk_FUN_0ee326a0(pppppppuStack_378,(ulong)uStack_388 & 0xfffffffffffffffe);
              }
              if ((uStack_358 & 1) == 0) {
                bVar12 = *(byte *)(pppppppuStack_3b0 + -3);
                pppppppuVar30 = pppppppuStack_3b0;
              }
              else {
                thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                                   CONCAT26(uStack_352,
                                            CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                                   0xfffffffffffffffe);
                bVar12 = *(byte *)(pppppppuStack_3b0 + -3);
                pppppppuVar30 = pppppppuStack_3b0;
              }
            }
            if ((bVar12 & 1) != 0) {
              pppppppuStack_3b0 = pppppppuVar30;
              thunk_FUN_0ee326a0(pppppppuVar30[-1],(ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
            }
            iVar16 = iVar16 + 1;
            pppppppuStack_3b0 = pppppppuVar30 + -3;
            func_0x04862ba0(&pppppppuStack_208);
          }
          func_0x04862b40(&pppppppuStack_1e8);
          func_0x04862b40(&pppppppuStack_208);
        }
      }
      pppppppuVar30 = pppppppuStack_3b0 + -3;
      if (((ulong)pppppppuStack_3b0[-3] & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuStack_3b0[-1],(ulong)pppppppuStack_3b0[-3] & 0xfffffffffffffffe);
      }
      pppppppuVar22 = pppppppuStack_3b8;
      pppppppuStack_3b0 = pppppppuVar30;
      if (pppppppuStack_3b8 != (ulong *******)0x0) {
        for (; pppppppuVar22 != pppppppuVar30; pppppppuVar30 = pppppppuVar30 + -3) {
          if (((ulong)pppppppuVar30[-3] & 1) != 0) {
            thunk_FUN_0ee326a0(pppppppuVar30[-1],(ulong)pppppppuVar30[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_3b0 = pppppppuVar22;
        thunk_FUN_0ee326a0(pppppppuStack_3b8,(long)pppppppuStack_3a8 - (long)pppppppuStack_3b8);
      }
      uStack_358._1_3_ = (undefined3)_DAT_013a4016;
      uStack_358 = CONCAT31(uStack_358._1_3_,0x2c);
      uStack_354 = (undefined1)((uint)_DAT_013a4016 >> 0x18);
      uStack_353 = (undefined1)_UNK_013a401a;
      uStack_352 = (undefined2)((uint)_UNK_013a401a >> 8);
      cStack_350 = (char)((uint)_UNK_013a401a >> 0x18);
      uStack_34f = (undefined1)_UNK_013a401e;
      uStack_34e = (undefined2)((uint)_UNK_013a401e >> 8);
      uStack_34c = (undefined1)((uint)_UNK_013a401e >> 0x18);
      uStack_34b = (undefined1)_UNK_013a4022;
      uStack_34a = (undefined1)((uint)_UNK_013a4022 >> 8);
      uStack_349 = 0x6d;
      cStack_348 = 0x65;
      uStack_347 = 0x617461646174;
      uStack_341 = 0;
      uStack_428._0_1_ = (byte)&puStack_188;
      uStack_428._1_1_ = (undefined1)((ulong)&puStack_188 >> 8);
      uStack_428._2_2_ = (undefined2)((ulong)&puStack_188 >> 0x10);
      uStack_428._4_1_ = (undefined1)((ulong)&puStack_188 >> 0x20);
      uStack_428._5_1_ = (undefined1)((ulong)&puStack_188 >> 0x28);
      uStack_428._6_2_ = (undefined2)((ulong)&puStack_188 >> 0x30);
      if (puStack_180 < puStack_178) {
        puStack_180[2] = 0x61746164617465;
        *puStack_180 = CONCAT26(uStack_352,CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358)));
        puStack_180[1] =
             CONCAT17(0x6d,CONCAT16(uStack_34a,
                                    CONCAT15(uStack_34b,
                                             CONCAT14(uStack_34c,
                                                      CONCAT22(uStack_34e,
                                                               CONCAT11(uStack_34f,cStack_350))))));
        puStack_180 = puStack_180 + 3;
      }
      else {
        puStack_180 = (undefined8 *)func_0x04909a40(&puStack_188,&uStack_358);
        if ((uStack_358 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT17(uStack_341,CONCAT61(uStack_347,cStack_348)),
                             CONCAT26(uStack_352,
                                      CONCAT15(uStack_353,CONCAT14(uStack_354,uStack_358))) &
                             0xfffffffffffffffe);
        }
      }
      bStack_298 = 0x2c;
      bStack_297 = (byte)_DAT_013a4016;
      uStack_296 = (undefined2)((uint)_DAT_013a4016 >> 8);
      uStack_294 = (undefined1)((uint)_DAT_013a4016 >> 0x18);
      uStack_293 = (undefined1)_UNK_013a401a;
      uStack_292 = (undefined2)((uint)_UNK_013a401a >> 8);
      uStack_290._1_3_ = (undefined3)_UNK_013a401e;
      uStack_290 = CONCAT31(uStack_290._1_3_,(char)((uint)_UNK_013a401a >> 0x18));
      uStack_28c = (undefined1)((uint)_UNK_013a401e >> 0x18);
      uStack_28b = (ushort)_UNK_013a4022;
      uStack_289 = 0x6d;
      cStack_288 = 'e';
      auStack_287 = (undefined1  [6])0x617461646174;
      uStack_281 = 0;
      func_0x0d6129a0(&uStack_358,auStack_1c8,&bStac
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11e4dc2  legacy_module_dependencies
 * 0x11e4dcc  ule_dependencies
 * 0x1234f07  memory_performance_tier
 * 0x13a4016  has_education_metadata
 */
