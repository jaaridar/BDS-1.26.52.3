/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a4d8c0 (ELF vaddr 0x494d8c0)
 * Label: string:Erosion Spline For ({:.2f}, {:.2f}, {:.2f}, {:.2f})
 * Body:  [[04a4d8c0, 04a4df07] [04a4df10, 04a4e352]]
 * Ghidra: FUN_04a4d8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a4d8c0(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 *apuStack_7d8 [3];
  undefined4 *puStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  undefined4 uStack_794;
  byte bStack_790;
  undefined7 uStack_78f;
  undefined8 uStack_780;
  undefined1 auStack_778 [120];
  uint uStack_700;
  uint uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  undefined1 auStack_6e0 [120];
  uint uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined1 auStack_640 [8];
  undefined4 uStack_638;
  undefined4 uStack_628;
  undefined4 uStack_618;
  uint uStack_5c8;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a0;
  undefined1 auStack_598 [120];
  uint uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4f8;
  undefined1 auStack_4f0 [120];
  uint uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined4 auStack_450 [2];
  undefined1 auStack_448 [120];
  uint uStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [120];
  uint uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [120];
  uint uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [120];
  uint uStack_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 auStack_1d8 [30];
  uint uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [120];
  uint uStack_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [120];
  
  puStack_7c0 = (undefined4 *)CONCAT44(puStack_7c0._4_4_,param_1);
  uStack_794 = param_2;
  func_0x04a4fe70(_DAT_011983f0,auStack_140);
  func_0x04a4fe70(puStack_7c0._0_4_,0,auStack_778);
  puStack_648 = (undefined1 *)CONCAT44(puStack_648._4_4_,0x3f800000);
  uStack_638 = puStack_7c0._0_4_;
  uStack_628 = uStack_794;
  uStack_618 = 0;
  func_0x0470d9a0(&bStack_790,&UNK_014c8d06,0x33,0x9999,&puStack_648);
  uVar3 = _DAT_0f556570;
  auStack_270[0] = 0;
  uStack_1f8 = 0xffffffff;
  if ((ulong)_DAT_0f556570 != 0xffffffff) {
    puStack_648 = auStack_270;
    (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f556570 * 8))(&puStack_648,0xf5564f8);
    uStack_1f8 = uVar3;
  }
  if ((_DAT_0f556578 & 1) == 0) {
    uStack_1e0 = _DAT_0f556588;
    uStack_1f0 = _DAT_0f556578;
    uStack_1ec = uRam000000000f55657c;
    uStack_1e8 = _DAT_0f556580;
    uStack_1e4 = uRam000000000f556584;
  }
  else {
    func_0x0412e5e0(&uStack_1f0,_DAT_0f556588,CONCAT44(uRam000000000f556584,_DAT_0f556580));
  }
  uVar3 = uStack_c8;
  auStack_6e0[0] = 0;
  uStack_668 = 0xffffffff;
  if ((ulong)uStack_c8 != 0xffffffff) {
    apuStack_7d8[0] = auStack_6e0;
    (**(code **)(&UNK_0ef53130 + (ulong)uStack_c8 * 8))(apuStack_7d8,auStack_140);
    uStack_668 = uVar3;
  }
  if ((uStack_c0 & 1) == 0) {
    uStack_650 = uStack_b0;
    uStack_660 = CONCAT44(uStack_bc,uStack_c0);
    uStack_658 = CONCAT44(uStack_b4,uStack_b8);
  }
  else {
    func_0x0412e5e0(&uStack_660,uStack_b0,CONCAT44(uStack_b4,uStack_b8));
    uVar3 = uStack_668;
  }
  puStack_648 = (undefined1 *)CONCAT44(puStack_648._4_4_,0xbf800000);
  auStack_640[0] = 0;
  uStack_5c8 = 0xffffffff;
  if (uVar3 != 0xffffffff) {
    apuStack_7d8[0] = auStack_640;
    (**(code **)(&UNK_0ef53118 + (ulong)uVar3 * 8))(apuStack_7d8,auStack_6e0);
    uStack_5c8 = uVar3;
  }
  uVar3 = uStack_700;
  uStack_5b0 = uStack_650;
  uStack_5c0 = uStack_660;
  uStack_5b8 = uStack_658;
  uStack_660 = 0;
  uStack_658 = 0;
  uStack_650 = 0;
  uStack_5a8 = 0;
  auStack_308[0] = 0;
  uStack_290 = 0xffffffff;
  if ((ulong)uStack_700 != 0xffffffff) {
    apuStack_7d8[0] = auStack_308;
    (**(code **)(&UNK_0ef53130 + (ulong)uStack_700 * 8))(apuStack_7d8,auStack_778);
    uStack_290 = uVar3;
  }
  if ((uStack_6f8 & 1) == 0) {
    uStack_278 = uStack_6e8;
    uStack_288 = CONCAT44(uStack_6f4,uStack_6f8);
    uStack_280 = CONCAT44(uStack_6ec,uStack_6f0);
  }
  else {
    func_0x0412e5e0(&uStack_288,uStack_6e8,CONCAT44(uStack_6ec,uStack_6f0));
    uVar3 = uStack_290;
  }
  uStack_5a0 = 0xbf47ae14;
  auStack_598[0] = 0;
  uStack_520 = 0xffffffff;
  if (uVar3 != 0xffffffff) {
    apuStack_7d8[0] = auStack_598;
    (**(code **)(&UNK_0ef53118 + (ulong)uVar3 * 8))(apuStack_7d8,auStack_308);
    uStack_520 = uVar3;
  }
  uVar3 = uStack_700;
  uStack_508 = uStack_278;
  uStack_518 = uStack_288;
  uStack_510 = uStack_280;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_500 = 0;
  auStack_3a0[0] = 0;
  uStack_328 = 0xffffffff;
  if ((ulong)uStack_700 != 0xffffffff) {
    apuStack_7d8[0] = auStack_3a0;
    (**(code **)(&UNK_0ef53130 + (ulong)uStack_700 * 8))(apuStack_7d8,auStack_778);
    uStack_328 = uVar3;
  }
  if ((uStack_6f8 & 1) == 0) {
    uStack_310 = uStack_6e8;
    uStack_320 = CONCAT44(uStack_6f4,uStack_6f8);
    uStack_318 = CONCAT44(uStack_6ec,uStack_6f0);
  }
  else {
    func_0x0412e5e0(&uStack_320,uStack_6e8,CONCAT44(uStack_6ec,uStack_6f0));
    uVar3 = uStack_328;
  }
  uStack_4f8 = 0xbf13d70a;
  auStack_4f0[0] = 0;
  uStack_478 = 0xffffffff;
  if (uVar3 != 0xffffffff) {
    apuStack_7d8[0] = auStack_4f0;
    (**(code **)(&UNK_0ef53118 + (ulong)uVar3 * 8))(apuStack_7d8,auStack_3a0);
    uStack_478 = uVar3;
  }
  uStack_460 = uStack_310;
  uStack_470 = uStack_320;
  uStack_468 = uStack_318;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_458 = 0;
  puStack_7c0 = auStack_450;
  auStack_1d8[0] = 0;
  uStack_160 = 0;
  apuStack_7d8[0] = (undefined1 *)((ulong)apuStack_7d8[0] & 0xffffffff00000000);
  func_0x0470d9a0(&uStack_158,&UNK_013251d8,8,9,apuStack_7d8);
  uVar3 = uStack_160;
  auStack_450[0] = 0xbec00000;
  auStack_448[0] = 0;
  uStack_3d0 = 0xffffffff;
  if ((ulong)uStack_160 != 0xffffffff) {
    apuStack_7d8[0] = auStack_448;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_160 * 8))(apuStack_7d8,auStack_1d8);
    uStack_3d0 = uVar3;
  }
  uStack_3b8 = uStack_148;
  uStack_3c8 = uStack_158;
  uStack_3c0 = uStack_150;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_3b0 = 0;
  lStack_7b8 = 0;
  lStack_7b0 = 0;
  lStack_7a8 = 0;
  lVar2 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2a0);
  if (lVar2 == 0) {
    func_0x0eec74c0(0x2a0,0);
  }
  lStack_7a8 = lVar2 + 0x2a0;
  lStack_7b8 = lVar2;
  lStack_7b0 = lVar2;
  lStack_7b0 = func_0x04a6b0a0(&lStack_7b8,&puStack_648,auStack_3a8,lVar2);
  func_0x04a48d80(auStack_a8,&bStack_790,auStack_270,&lStack_7b8);
  func_0x049cd640(param_3,auStack_a8);
  *(undefined4 *)(param_3 + 0x78) = 2;
  func_0x04a770f0(param_3 + 0x80,auStack_a8);
  func_0x049cd3b0(auStack_a8);
  lVar1 = lStack_7b8;
  lVar2 = lStack_7b0;
  if (lStack_7b8 != 0) {
    for (; lVar1 != lVar2; lVar2 = lVar2 + -0xa8) {
      if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar2 + -0x10),
                        *(ulong *)(lVar2 + -0x20) & 0xfffffffffffffffe);
      }
      if ((ulong)*(uint *)(lVar2 + -0x28) != 0xffffffff) {
        (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar2 + -0x28) * 8))
                  (apuStack_7d8,lVar2 + -0xa0);
      }
      *(undefined4 *)(lVar2 + -0x28) = 0xffffffff;
    }
    lStack_7b0 = lVar1;
    func_0x0412a280(lStack_7b8,lStack_7a8 - lStack_7b8);
  }
  if ((uStack_3c8 & 1) != 0) {
    func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_3d0 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_3d0 * 8))(apuStack_7d8,auStack_448);
  }
  uStack_3d0 = 0xffffffff;
  if ((uStack_470 & 1) != 0) {
    func_0x0412a280(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_478 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_478 * 8))(apuStack_7d8,auStack_4f0);
  }
  uStack_478 = 0xffffffff;
  if ((uStack_518 & 1) != 0) {
    func_0x0412a280(uStack_508,uStack_518 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_520 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_520 * 8))(apuStack_7d8,auStack_598);
  }
  uStack_520 = 0xffffffff;
  if ((uStack_5c0 & 1) != 0) {
    func_0x0412a280(uStack_5b0,uStack_5c0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_5c8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_5c8 * 8))(apuStack_7d8,auStack_640);
  }
  uStack_5c8 = 0xffffffff;
  if ((uStack_158 & 1) != 0) {
    func_0x0412a280(uStack_148,uStack_158 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_160 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_160 * 8))(apuStack_7d8,auStack_1d8);
  }
  uStack_160 = 0xffffffff;
  if ((uStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,uStack_320 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_328 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_328 * 8))(apuStack_7d8,auStack_3a0);
  }
  uStack_328 = 0xffffffff;
  if ((uStack_288 & 1) != 0) {
    func_0x0412a280(uStack_278,uStack_288 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_290 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_290 * 8))(apuStack_7d8,auStack_308);
  }
  uStack_290 = 0xffffffff;
  if ((uStack_660 & 1) != 0) {
    func_0x0412a280(uStack_650,uStack_660 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_668 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_668 * 8))(apuStack_7d8,auStack_6e0);
  }
  uStack_668 = 0xffffffff;
  if ((uStack_1f0 & 1) != 0) {
    func_0x0412a280(uStack_1e0,CONCAT44(uStack_1ec,uStack_1f0) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_1f8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_1f8 * 8))(&puStack_648,auStack_270);
  }
  uStack_1f8 = 0xffffffff;
  if ((bStack_790 & 1) != 0) {
    func_0x0412a280(uStack_780,CONCAT71(uStack_78f,bStack_790) & 0xfffffffffffffffe);
  }
  if ((uStack_6f8 & 1) != 0) {
    func_0x0412a280(uStack_6e8,CONCAT44(uStack_6f4,uStack_6f8) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_700 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_700 * 8))(&puStack_648,auStack_778);
  }
  if ((uStack_c0 & 1) != 0) {
    func_0x0412a280(uStack_b0,CONCAT44(uStack_bc,uStack_c0) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_c8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_c8 * 8))(&puStack_648,auStack_140);
  }
  return;
}


