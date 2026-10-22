/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a50a40 (ELF vaddr 0x4950a40)
 * Label: string:WeirdnessSpline for {:.2f} jaggedness factor
 * Body:  [[04a50a40, 04a50d98] [04a50da0, 04a50fde]]
 * Ghidra: FUN_04a50a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a50a40(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 *apuStack_418 [3];
  float fStack_3fc;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  byte bStack_3e0;
  undefined7 uStack_3df;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 auStack_3c0 [120];
  uint uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_320;
  undefined1 auStack_318 [120];
  uint uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [120];
  uint uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float afStack_1d8 [30];
  uint uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  float afStack_140 [30];
  uint uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [120];
  
  puStack_3c8 = (undefined1 *)CONCAT44(puStack_3c8._4_4_,param_1);
  fStack_3fc = param_1;
  func_0x0470d9a0(&bStack_3e0,&UNK_011b83b9,0x2d,9,&puStack_3c8);
  uVar1 = _DAT_0f5566a0;
  auStack_270[0] = 0;
  uStack_1f8 = 0xffffffff;
  if ((ulong)_DAT_0f5566a0 != 0xffffffff) {
    puStack_3c8 = auStack_270;
    (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f5566a0 * 8))(&puStack_3c8,0xf556628);
    uStack_1f8 = uVar1;
  }
  if ((DAT_0f5566a8 & 1) == 0) {
    uStack_1e0 = _DAT_0f5566b8;
    uStack_1f0 = CONCAT71(uRam000000000f5566a9,DAT_0f5566a8);
    uStack_1e8 = _DAT_0f5566b0;
  }
  else {
    func_0x0412e5e0(&uStack_1f0,_DAT_0f5566b8,_DAT_0f5566b0);
  }
  afStack_1d8[0] = _DAT_01198cac * fStack_3fc;
  uStack_160 = 0;
  apuStack_418[0] = (undefined1 *)CONCAT44(apuStack_418[0]._4_4_,afStack_1d8[0]);
  func_0x0470d9a0(&uStack_158,&UNK_013251d8,8,9,apuStack_418);
  uVar1 = uStack_160;
  puStack_3c8 = (undefined1 *)CONCAT44(puStack_3c8._4_4_,0xbc23d70a);
  auStack_3c0[0] = 0;
  uStack_348 = 0xffffffff;
  if ((ulong)uStack_160 != 0xffffffff) {
    apuStack_418[0] = auStack_3c0;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_160 * 8))(apuStack_418,afStack_1d8);
    uStack_348 = uVar1;
  }
  afStack_140[0] = fStack_3fc * _DAT_01198aec;
  uStack_330 = uStack_148;
  uStack_340 = uStack_158;
  uStack_338 = uStack_150;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_328 = 0;
  uStack_c8 = 0;
  apuStack_418[0] = (undefined1 *)CONCAT44(apuStack_418[0]._4_4_,afStack_140[0]);
  func_0x0470d9a0(&uStack_c0,&UNK_013251d8,8,9,apuStack_418);
  uVar1 = uStack_c8;
  uStack_320 = 0x3c23d70a;
  auStack_318[0] = 0;
  uStack_2a0 = 0xffffffff;
  if ((ulong)uStack_c8 != 0xffffffff) {
    apuStack_418[0] = auStack_318;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_c8 * 8))(apuStack_418,afStack_140);
    uStack_2a0 = uVar1;
  }
  uStack_288 = uStack_b0;
  uStack_298 = uStack_c0;
  uStack_290 = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_280 = 0;
  lStack_3f8 = 0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
  if (lVar3 == 0) {
    func_0x0eec74c0(0x150,0);
  }
  lStack_3e8 = lVar3 + 0x150;
  lStack_3f8 = lVar3;
  lStack_3f0 = lVar3;
  lStack_3f0 = func_0x04a6b0a0(&lStack_3f8,&puStack_3c8,auStack_278,lVar3);
  func_0x04a48d80(auStack_a8,&bStack_3e0,auStack_270,&lStack_3f8);
  func_0x049cd640(param_2,auStack_a8);
  *(undefined4 *)(param_2 + 0x78) = 2;
  func_0x04a770f0(param_2 + 0x80,auStack_a8);
  func_0x049cd3b0(auStack_a8);
  lVar2 = lStack_3f8;
  lVar3 = lStack_3f0;
  if (lStack_3f8 != 0) {
    for (; lVar2 != lVar3; lVar3 = lVar3 + -0xa8) {
      if ((*(byte *)(lVar3 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar3 + -0x10),
                        *(ulong *)(lVar3 + -0x20) & 0xfffffffffffffffe);
      }
      if ((ulong)*(uint *)(lVar3 + -0x28) != 0xffffffff) {
        (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar3 + -0x28) * 8))
                  (apuStack_418,lVar3 + -0xa0);
      }
      *(undefined4 *)(lVar3 + -0x28) = 0xffffffff;
    }
    lStack_3f0 = lVar2;
    func_0x0412a280(lStack_3f8,lStack_3e8 - lStack_3f8);
  }
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,uStack_298 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_2a0 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_2a0 * 8))(apuStack_418,auStack_318);
  }
  uStack_2a0 = 0xffffffff;
  if ((uStack_340 & 1) != 0) {
    func_0x0412a280(uStack_330,uStack_340 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_348 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_348 * 8))(apuStack_418,auStack_3c0);
  }
  uStack_348 = 0xffffffff;
  if ((uStack_c0 & 1) != 0) {
    func_0x0412a280(uStack_b0,uStack_c0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_c8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_c8 * 8))(apuStack_418,afStack_140);
  }
  uStack_c8 = 0xffffffff;
  if ((uStack_158 & 1) != 0) {
    func_0x0412a280(uStack_148,uStack_158 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_160 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_160 * 8))(apuStack_418,afStack_1d8);
  }
  uStack_160 = 0xffffffff;
  if ((uStack_1f0 & 1) != 0) {
    func_0x0412a280(uStack_1e0,uStack_1f0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_1f8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_1f8 * 8))(&puStack_3c8,auStack_270);
  }
  uStack_1f8 = 0xffffffff;
  if ((bStack_3e0 & 1) != 0) {
    func_0x0412a280(uStack_3d0,CONCAT71(uStack_3df,bStack_3e0) & 0xfffffffffffffffe);
  }
  return;
}


