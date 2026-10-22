/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527f6c0 (ELF vaddr 0x517f6c0)
 * Label: callee-of:0x517ea80
 * Body:  [[0527f6c0, 0527fe30] [0527fe40, 0527fe7d] [0527fe80, 05280257] [05280260, 0528068b] [05280690, 0528072a]]
 * Ghidra: FUN_0527f6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0527f6c0(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  uint uVar37;
  long *plVar38;
  ulong uVar39;
  ushort uVar40;
  float *pfVar41;
  float *pfVar42;
  long lVar43;
  undefined1 *puVar44;
  long lVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar48 [16];
  float fVar52;
  float fVar53;
  float fVar56;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar60 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 in_stack_ffffffffffffcac8 [16];
  ushort uStack_34ec;
  float fStack_34e4;
  float fStack_34e0;
  float fStack_34dc;
  ulong uStack_34d8;
  long lStack_34d0;
  ulong uStack_34c8;
  ulong uStack_34c0;
  undefined8 uStack_34b8;
  float fStack_34b0;
  int iStack_34a8;
  int iStack_34a4;
  long lStack_34a0;
  long lStack_3498;
  long lStack_3490;
  uint uStack_3488;
  uint uStack_3484;
  uint uStack_3480;
  uint uStack_347c;
  uint uStack_3478;
  uint uStack_3474;
  uint uStack_3470;
  uint uStack_346c;
  uint uStack_3468;
  uint uStack_3464;
  uint uStack_3460;
  uint uStack_345c;
  float fStack_3458;
  float fStack_3454;
  float fStack_3450;
  float fStack_344c;
  float fStack_3448;
  float fStack_3444;
  float fStack_3440;
  float fStack_343c;
  float fStack_3438;
  float fStack_3434;
  float fStack_3430;
  float fStack_342c;
  uint uStack_3428;
  uint uStack_3424;
  uint uStack_3420;
  uint uStack_341c;
  float fStack_3418;
  float fStack_3414;
  float fStack_3410;
  float fStack_340c;
  uint uStack_3408;
  uint uStack_3404;
  uint uStack_3400;
  uint uStack_33fc;
  float fStack_33f8;
  float fStack_33f4;
  float fStack_33f0;
  float fStack_33ec;
  float fStack_33e8;
  float fStack_33e4;
  float fStack_33e0;
  float fStack_33dc;
  uint uStack_33d8;
  uint uStack_33d4;
  uint uStack_33d0;
  uint uStack_33cc;
  float fStack_33c8;
  float fStack_33c4;
  float fStack_33c0;
  float fStack_33bc;
  float fStack_33b8;
  float fStack_33b4;
  float fStack_33b0;
  float fStack_33ac;
  uint uStack_33a8;
  uint uStack_33a4;
  uint uStack_33a0;
  uint uStack_339c;
  undefined1 auStack_3398 [16];
  undefined1 auStack_3388 [16];
  undefined1 auStack_3378 [16];
  undefined1 auStack_3368 [16];
  undefined1 auStack_3358 [16];
  undefined1 auStack_3348 [16];
  undefined4 uStack_3338;
  undefined8 uStack_3058;
  float afStack_3050 [1026];
  ulong uStack_2048;
  float fStack_2040;
  undefined8 uStack_203c;
  int iStack_2034;
  undefined1 auStack_2028 [16];
  undefined1 auStack_2018 [16];
  float afStack_2008 [1012];
  undefined8 uStack_1038;
  float afStack_1030 [1024];
  
  func_0x0eee2dd0(param_1,0,0x1004);
  uStack_2048 = (ulong)(*param_3 * 0x10 - 4);
  fStack_2040 = (float)(param_3[1] * 0x10 + -4);
  iStack_2034 = param_3[1] * 0x10 + 0x18;
  uStack_203c = (ulong)(*param_3 * 0x10 + 0x18) | 0x1400000000;
  plVar38 = (long *)(**(code **)(*param_2 + 0x188))(param_2);
  (**(code **)(*plVar38 + 0x28))(&iStack_34a8,plVar38,&uStack_2048,4);
  uVar11 = *(ushort *)(param_2[5] + 0xa8);
  uStack_34d8 = (ulong)uVar11;
  uVar40 = uVar11 + 7;
  if (-1 < (short)uVar11) {
    uVar40 = uVar11;
  }
  fVar52 = (float)((int)(short)uVar40 >> 3);
  fStack_34e4 = (float)(*param_3 << 2);
  fStack_34dc = (float)(param_3[1] << 2);
  uStack_3058 = CONCAT44(0x41200000,fStack_34e4);
  auStack_3398._0_12_ = ZEXT812(0);
  auStack_3398._12_4_ = 0;
  uStack_3338 = 0;
  lVar45 = (long)*(int *)param_2[0x43];
  fStack_34e0 = fVar52;
  auStack_3388 = auStack_3398;
  auStack_3378 = auStack_3398;
  auStack_3368 = auStack_3398;
  auStack_3358 = auStack_3398;
  auStack_3348 = auStack_3398;
  afStack_3050[0] = fStack_34dc;
  if (0 < lVar45) {
    lVar43 = *(long *)((int *)param_2[0x43] + 2);
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    fVar46 = _DAT_011983f0;
    do {
      in_stack_ffffffffffffcac8._4_4_ = uVar49;
      in_stack_ffffffffffffcac8._0_4_ = fVar46;
      in_stack_ffffffffffffcac8._8_4_ = uVar50;
      in_stack_ffffffffffffcac8._12_4_ = uVar51;
      fStack_2040 = fVar46 * _DAT_01198928;
      uStack_2048 = CONCAT44(fVar46,fStack_2040);
      func_0x0d33ef10(lVar43,auStack_3398,&uStack_3058,5,1,5,&uStack_2048,1,1,1);
      uVar49 = in_stack_ffffffffffffcac8._4_4_;
      uVar50 = in_stack_ffffffffffffcac8._8_4_;
      uVar51 = in_stack_ffffffffffffcac8._12_4_;
      fVar46 = in_stack_ffffffffffffcac8._0_4_ * _DAT_011986e0;
      lVar43 = lVar43 + 0x818;
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
  }
  piVar12 = (int *)param_2[0x40];
  func_0x0eee2dd0(&uStack_2048,0,0x6a4);
  lVar45 = (long)*piVar12;
  if (0 < lVar45) {
    lVar43 = *(long *)(piVar12 + 2);
    auVar58 = ZEXT416((uint)_DAT_011983f0);
    do {
      afStack_3050[0] = auVar58._0_4_ * _DAT_014e8d20;
      uStack_3058 = CONCAT44(auVar58._0_4_ * _UNK_014e8d24,afStack_3050[0]);
      in_stack_ffffffffffffcac8 = auVar58;
      func_0x0d33ef10(lVar43,&uStack_2048,&fStack_34e4,5,0x11,5,&uStack_3058,1,1,1,auVar58);
      auVar58._4_12_ = in_stack_ffffffffffffcac8._4_12_;
      auVar58._0_4_ = in_stack_ffffffffffffcac8._0_4_ * _DAT_011986e0;
      lVar43 = lVar43 + 0x818;
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
  }
  piVar12 = (int *)param_2[0x3e];
  func_0x0eee2dd0(&uStack_3058,0,0x6a4);
  lVar45 = (long)*piVar12;
  if (0 < lVar45) {
    lVar43 = *(long *)(piVar12 + 2);
    auVar60 = ZEXT416((uint)_DAT_011983f0);
    do {
      afStack_1030[0] = auVar60._0_4_ * _DAT_014e77a0;
      uStack_1038 = CONCAT44(auVar60._0_4_ * _UNK_014e77a4,afStack_1030[0]);
      in_stack_ffffffffffffcac8 = auVar60;
      func_0x0d33ef10(lVar43,&uStack_3058,&fStack_34e4,5,0x11,5,&uStack_1038,1,1,1,auVar60);
      auVar60._4_12_ = in_stack_ffffffffffffcac8._4_12_;
      auVar60._0_4_ = in_stack_ffffffffffffcac8._0_4_ * _DAT_011986e0;
      lVar43 = lVar43 + 0x818;
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
  }
  piVar12 = (int *)param_2[0x3f];
  func_0x0eee2dd0(&uStack_1038,0,0x6a4);
  lVar45 = (long)*piVar12;
  if (0 < lVar45) {
    lVar43 = *(long *)(piVar12 + 2);
    fVar46 = _DAT_011983f0;
    do {
      in_stack_ffffffffffffcac8._0_4_ = fVar46;
      fStack_34b0 = fVar46 * _DAT_01198354;
      uStack_34b8 = CONCAT44(fStack_34b0,fStack_34b0);
      func_0x0d33ef10(lVar43,&uStack_1038,&fStack_34e4,5,0x11,5,&uStack_34b8,1,1,1);
      fVar46 = in_stack_ffffffffffffcac8._0_4_ * _DAT_011986e0;
      lVar43 = lVar43 + 0x818;
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
  }
  lVar45 = 0;
  uVar26 = CONCAT44(_UNK_014ea474,_DAT_014ea470);
  uVar27 = CONCAT44(_UNK_014ea47c,_UNK_014ea478);
  do {
    puVar2 = (undefined8 *)(param_1 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2 = (undefined8 *)(param_1 + 0x10 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2 = (undefined8 *)(param_1 + 0x30 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2 = (undefined8 *)(param_1 + 0x40 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2 = (undefined8 *)(param_1 + 0x50 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2 = (undefined8 *)(param_1 + 0x60 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    puVar2 = (undefined8 *)(param_1 + 0x70 + lVar45 * 4);
    *puVar2 = uVar26;
    puVar2[1] = uVar27;
    lVar45 = lVar45 + 0x20;
  } while (lVar45 != 0x400);
  *(undefined4 *)(param_1 + 0x1000) = 0xc7c35000;
  uVar31 = _UNK_014ea47c;
  uVar30 = _UNK_014ea478;
  uVar29 = _UNK_014ea474;
  uVar28 = _DAT_014ea470;
  iVar36 = (int)(short)(0xd - (short)((uint)(int)(short)uVar40 >> 3));
  iVar1 = iVar36 + 4;
  uStack_33a8 = -(uint)(_DAT_014e31a0 < iVar1 && iVar36 < _DAT_014e31a0);
  uStack_33a4 = -(uint)(_UNK_014e31a4 < iVar1 && iVar36 < _UNK_014e31a4);
  uStack_33a0 = -(uint)(_UNK_014e31a8 < iVar1 && iVar36 < _UNK_014e31a8);
  uStack_339c = -(uint)(_UNK_014e31ac < iVar1 && iVar36 < _UNK_014e31ac);
  auVar57._0_4_ = (float)(_DAT_014e31a0 - iVar36);
  auVar57._4_4_ = (float)(_UNK_014e31a4 - iVar36);
  auVar57._8_4_ = (float)(_UNK_014e31a8 - iVar36);
  auVar57._12_4_ = (float)(_UNK_014e31ac - iVar36);
  auVar58 = divps(auVar57,_DAT_014e47b0);
  fStack_33c8 = _DAT_014ea7c0 - auVar58._0_4_;
  fStack_33c4 = _UNK_014ea7c4 - auVar58._4_4_;
  fStack_33c0 = _UNK_014ea7c8 - auVar58._8_4_;
  fStack_33bc = _UNK_014ea7cc - auVar58._12_4_;
  fStack_33b8 = auVar58._0_4_ * _DAT_014e27e0;
  fStack_33b4 = auVar58._4_4_ * _UNK_014e27e4;
  fStack_33b0 = auVar58._8_4_ * _UNK_014e27e8;
  fStack_33ac = auVar58._12_4_ * _UNK_014e27ec;
  uStack_33d8 = -(uint)(_DAT_014e20a0 < iVar1 && iVar36 < _DAT_014e20a0);
  uStack_33d4 = -(uint)(_UNK_014e20a4 < iVar1 && iVar36 < _UNK_014e20a4);
  uStack_33d0 = -(uint)(_UNK_014e20a8 < iVar1 && iVar36 < _UNK_014e20a8);
  uStack_33cc = -(uint)(_UNK_014e20ac < iVar1 && iVar36 < _UNK_014e20ac);
  auVar59._0_4_ = (float)(_DAT_014e20a0 - iVar36);
  auVar59._4_4_ = (float)(_UNK_014e20a4 - iVar36);
  auVar59._8_4_ = (float)(_UNK_014e20a8 - iVar36);
  auVar59._12_4_ = (float)(_UNK_014e20ac - iVar36);
  auVar58 = divps(auVar59,_DAT_014e47b0);
  fStack_33f8 = _DAT_014ea7c0 - auVar58._0_4_;
  fStack_33f4 = _UNK_014ea7c4 - auVar58._4_4_;
  fStack_33f0 = _UNK_014ea7c8 - auVar58._8_4_;
  fStack_33ec = _UNK_014ea7cc - auVar58._12_4_;
  fStack_33e8 = auVar58._0_4_ * _DAT_014e27e0;
  fStack_33e4 = auVar58._4_4_ * _UNK_014e27e4;
  fStack_33e0 = auVar58._8_4_ * _UNK_014e27e8;
  fStack_33dc = auVar58._12_4_ * _UNK_014e27ec;
  uStack_3408 = -(uint)(_DAT_014e1d20 < iVar1 && iVar36 < _DAT_014e1d20);
  uStack_3404 = -(uint)(_UNK_014e1d24 < iVar1 && iVar36 < _UNK_014e1d24);
  uStack_3400 = -(uint)(_UNK_014e1d28 < iVar1 && iVar36 < _UNK_014e1d28);
  uStack_33fc = -(uint)(_UNK_014e1d2c < iVar1 && iVar36 < _UNK_014e1d2c);
  auVar82._0_4_ = (float)(_DAT_014e1d20 - iVar36);
  auVar82._4_4_ = (float)(_UNK_014e1d24 - iVar36);
  auVar82._8_4_ = (float)(_UNK_014e1d28 - iVar36);
  auVar82._12_4_ = (float)(_UNK_014e1d2c - iVar36);
  auVar58 = divps(auVar82,_DAT_014e47b0);
  uStack_3428 = -(uint)(_DAT_014e1d30 < iVar1 && iVar36 < _DAT_014e1d30);
  uStack_3424 = -(uint)(_UNK_014e1d34 < iVar1 && iVar36 < _UNK_014e1d34);
  uStack_3420 = -(uint)(_UNK_014e1d38 < iVar1 && iVar36 < _UNK_014e1d38);
  uStack_341c = -(uint)(_UNK_014e1d3c < iVar1 && iVar36 < _UNK_014e1d3c);
  fStack_3438 = _DAT_014ea7c0 - auVar58._0_4_;
  fStack_3434 = _UNK_014ea7c4 - auVar58._4_4_;
  fStack_3430 = _UNK_014ea7c8 - auVar58._8_4_;
  fStack_342c = _UNK_014ea7cc - auVar58._12_4_;
  fStack_3418 = auVar58._0_4_ * _DAT_014e27e0;
  fStack_3414 = auVar58._4_4_ * _UNK_014e27e4;
  fStack_3410 = auVar58._8_4_ * _UNK_014e27e8;
  fStack_340c = auVar58._12_4_ * _UNK_014e27ec;
  auVar48._0_4_ = (float)(_DAT_014e1d30 - iVar36);
  auVar48._4_4_ = (float)(_UNK_014e1d34 - iVar36);
  auVar48._8_4_ = (float)(_UNK_014e1d38 - iVar36);
  auVar48._12_4_ = (float)(_UNK_014e1d3c - iVar36);
  auVar58 = divps(auVar48,_DAT_014e47b0);
  fStack_3458 = _DAT_014ea7c0 - auVar58._0_4_;
  fStack_3454 = _UNK_014ea7c4 - auVar58._4_4_;
  fStack_3450 = _UNK_014ea7c8 - auVar58._8_4_;
  fStack_344c = _UNK_014ea7cc - auVar58._12_4_;
  fStack_3448 = auVar58._0_4_ * _DAT_014e27e0;
  fStack_3444 = auVar58._4_4_ * _UNK_014e27e4;
  fStack_3440 = auVar58._8_4_ * _UNK_014e27e8;
  fStack_343c = auVar58._12_4_ * _UNK_014e27ec;
  fVar53 = (float)(0x10 - iVar36) / _DAT_01198af0;
  uStack_34ec = (short)uStack_34d8 + 0x17;
  fVar47 = _DAT_011983f0 - fVar53;
  fVar53 = fVar53 * _DAT_01198aa4;
  uStack_34c0 = (ulong)(uint)(iStack_34a4 * 2);
  pfVar41 = (float *)(param_1 + 0x40);
  uStack_3468 = -(uint)(_DAT_014e1d30 < iVar1);
  uStack_3464 = -(uint)(_UNK_014e1d34 < iVar1);
  uStack_3460 = -(uint)(_UNK_014e1d38 < iVar1);
  uStack_345c = -(uint)(_UNK_014e1d3c < iVar1);
  puVar44 = auStack_3398;
  uStack_3478 = -(uint)(_DAT_014e1d20 < iVar1);
  uStack_3474 = -(uint)(_UNK_014e1d24 < iVar1);
  uStack_3470 = -(uint)(_UNK_014e1d28 < iVar1);
  uStack_346c = -(uint)(_UNK_014e1d2c < iVar1);
  uVar37 = 0;
  uStack_3488 = -(uint)(_DAT_014e20a0 < iVar1);
  uStack_3484 = -(uint)(_UNK_014e20a4 < iVar1);
  uStack_3480 = -(uint)(_UNK_014e20a8 < iVar1);
  uStack_347c = -(uint)(_UNK_014e20ac < iVar1);
  bVar22 = _DAT_014e31a0 < iVar1;
  bVar23 = _UNK_014e31a4 < iVar1;
  bVar24 = _UNK_014e31a8 < iVar1;
  bVar25 = _UNK_014e31ac < iVar1;
  lStack_34d0 = 0;
  lVar45 = 0;
  fVar46 = *(float *)((long)param_2 + 0x10c);
  fVar3 = *(float *)(param_2 + 0x22);
  fVar4 = *(float *)(param_2 + 0x23);
  fVar5 = *(float *)((long)param_2 + 0x124);
  fVar6 = *(float *)((long)param_2 + 0x11c);
  fVar7 = *(float *)(param_2 + 0x25);
  fVar8 = *(float *)((long)param_2 + 0x114);
  fVar9 = *(float *)(param_2 + 0x24);
  fVar10 = *(float *)((long)param_2 + 300);
  fVar61 = _DAT_011985d4;
  fVar70 = _DAT_011983f0;
  fVar65 = _DAT_011987f8;
  fVar63 = _DAT_011986e0;
  do {
    uStack_34c8 = (ulong)uVar37;
    lStack_34d0 = lStack_34d0 + 1;
    lVar43 = 0;
    uVar39 = uStack_34c8;
    pfVar42 = pfVar41;
    do {
      auVar58 = _DAT_014eaec0;
      fVar81 = _UNK_014ea7ec;
      fVar76 = _UNK_014ea7e8;
      fVar74 = _UNK_014ea7e4;
      fVar73 = _DAT_014ea7e0;
      fVar35 = _UNK_014ea7cc;
      fVar34 = _UNK_014ea7c8;
      fVar33 = _UNK_014ea7c4;
      fVar32 = _DAT_014ea7c0;
      fVar66 = _UNK_014e96ec;
      fVar64 = _UNK_014e96e8;
      fVar62 = _UNK_014e96e4;
      fVar56 = _DAT_014e96e0;
      iVar1 = (int)uVar39;
      lVar13 = *(long *)(lStack_34a0 + (ulong)(uint)(iStack_34a4 + iStack_34a8 + iVar1) * 8);
      fVar71 = *(float *)(lVar13 + 0x30);
      lVar14 = *(long *)(lStack_34a0 + uVar39 * 8);
      fVar72 = *(float *)(lVar14 + 0x30);
      fVar88 = fVar46 / (fVar72 + _DAT_01198724);
      fVar79 = (float)((uint)(fVar88 * fVar63) & -(uint)(fVar71 < fVar72) |
                      ~-(uint)(fVar71 < fVar72) & (uint)fVar88);
      uVar39 = (ulong)(uint)(iStack_34a8 + iVar1);
      lVar15 = *(long *)(lStack_34a0 + uVar39 * 8);
      fVar88 = *(float *)(lVar15 + 0x30);
      fVar54 = fVar4 / (fVar88 + _DAT_01198724);
      fVar86 = (float)((uint)(fVar54 * fVar63) & -(uint)(fVar71 < fVar88) |
                      ~-(uint)(fVar71 < fVar88) & (uint)fVar54);
      lVar16 = *(long *)(lStack_34a0 + (ulong)(uint)(iStack_34a8 * 2 + iVar1) * 8);
      fVar54 = *(float *)(lVar16 + 0x30);
      fVar89 = fVar5 / (fVar54 + _DAT_01198724);
      fVar80 = (float)((uint)(fVar89 * fVar63) & -(uint)(fVar71 < fVar54) |
                      ~-(uint)(fVar71 < fVar54) & (uint)fVar89);
      lVar17 = *(long *)(lStack_34a0 + (ulong)(uint)(iStack_34a4 + iVar1) * 8);
      fVar89 = *(float *)(lVar17 + 0x30);
      fVar83 = fVar3 / (fVar89 + _DAT_01198724);
      fVar87 = (float)((uint)(fVar83 * fVar63) & -(uint)(fVar71 < fVar89) |
                      ~-(uint)(fVar71 < fVar89) & (uint)fVar83);
      fVar67 = fVar6 / (fVar71 + _DAT_01198724);
      lVar18 = *(long *)(lStack_34a0 + (ulong)(uint)(iStack_34a4 + iStack_34a8 * 2 + iVar1) * 8);
      fVar83 = *(float *)(lVar18 + 0x30);
      fVar55 = fVar7 / (fVar83 + _DAT_01198724);
      fVar77 = (float)((uint)(fVar55 * fVar63) & -(uint)(fVar71 < fVar83) |
                      ~-(uint)(fVar71 < fVar83) & (uint)fVar55);
      lVar19 = *(long *)(lStack_34a0 + (ulong)(uint)(iStack_34a4 * 2 + iVar1) * 8);
      fVar55 = *(float *)(lVar19 + 0x30);
      fVar90 = fVar8 / (fVar55 + _DAT_01198724);
      fVar78 = (float)((uint)(fVar90 * fVar63) & -(uint)(fVar71 < fVar55) |
                      ~-(uint)(fVar71 < fVar55) & (uint)fVar90);
      lVar20 = *(long *)(lStack_34a0 + (ulong)(uint)(iStack_34a8 + iStack_34a4 * 2 + iVar1) * 8);
      fVar90 = *(float *)(lVar20 + 0x30);
      fVar68 = fVar9 / (fVar90 + _DAT_01198724);
      fVar75 = (float)((uint)(fVar68 * fVar63) & -(uint)(fVar71 < fVar90) |
                      ~-(uint)(fVar71 < fVar90) & (uint)fVar68);
      lVar21 = *(long *)(lStack_34a0 + (ulong)(uint)(iVar1 + iStack_34a8 * 2 + iStack_34a4 * 2) * 8)
      ;
      fVar68 = *(float *)(lVar21 + 0x30);
      fVar84 = fVar10 / (fVar68 + _DAT_01198724);
      fVar84 = (float)((uint)(fVar84 * fVar63) & -(uint)(fVar71 < fVar68) |
                      ~-(uint)(fVar71 < fVar68) & (uint)fVar84);
      fVar85 = fVar84 + fVar75 + fVar78 + fVar77 + fVar67 + fVar87 + fVar80 + fVar86 + fVar79 + 0.0;
      fVar69 = *(float *)(puVar44 + lVar43 * 4) / _DAT_01198c08;
      fVar69 = (float)(~-(uint)(fVar69 < 0.0) & (uint)fVar69 |
                      (uint)(fVar69 * _DAT_01198b44) & -(uint)(fVar69 < 0.0)) * _DAT_01198af0 +
               _DAT_01198458;
      if (0.0 <= fVar69) {
        if (fVar69 <= fVar70) {
          fVar70 = fVar69;
        }
        fVar70 = fVar70 * _DAT_01198a50;
      }
      else {
        fVar70 = fVar61;
        if (fVar61 <= fVar69 * fVar63) {
          fVar70 = fVar69 * fVar63;
        }
        fVar70 = (fVar70 / _DAT_01198a0c) * fVar63;
      }
      fVar69 = fVar52 - (((((fVar68 * fVar84 +
                            fVar90 * fVar75 +
                            fVar55 * fVar78 +
                            fVar83 * fVar77 +
                            fVar71 * fVar67 +
                            fVar89 * fVar87 +
                            fVar54 * fVar80 + fVar88 * fVar86 + fVar72 * fVar79 + 0.0) / fVar85) *
                           fVar65 + fVar61) * _DAT_01198a50 + fVar70 * _DAT_011987c4) *
                         _DAT_01198c18 * fVar63 + _DAT_01198c18);
      fVar83 = _DAT_01198c5c /
               (((*(float *)(lVar21 + 0x34) * fVar84 +
                 *(float *)(lVar20 + 0x34) * fVar75 +
                 *(float *)(lVar19 + 0x34) * fVar78 +
                 *(float *)(lVar18 + 0x34) * fVar77 +
                 *(float *)(lVar13 + 0x34) * fVar67 +
                 *(float *)(lVar17 + 0x34) * fVar87 +
                 *(float *)(lVar16 + 0x34) * fVar80 +
                 *(float *)(lVar15 + 0x34) * fVar86 + *(float *)(lVar14 + 0x34) * fVar79 + 0.0) /
                fVar85) * _DAT_011983f4 + _DAT_01198a9c);
      lVar45 = (long)(int)lVar45;
      fVar71 = *(float *)((long)&uStack_3058 + lVar45 * 4) * _DAT_014ea7e0;
      fVar88 = *(float *)((long)&uStack_3058 + lVar45 * 4 + 4) * _UNK_014ea7e4;
      fVar89 = afStack_3050[lVar45] * _UNK_014ea7e8;
      fVar90 = afStack_3050[lVar45 + 1] * _UNK_014ea7ec;
      fVar86 = *(float *)((long)&uStack_1038 + lVar45 * 4) * _DAT_014e96d0;
      fVar87 = *(float *)((long)&uStack_1038 + lVar45 * 4 + 4) * _UNK_014e96d4;
      auVar60 = divps(*(undefined1 (*) [16])((long)&uStack_2048 + lVar45 * 4),_DAT_014eaec0);
      fVar70 = (auVar60._0_4_ + _DAT_014ea7c0) * _DAT_014e96e0;
      fVar61 = (auVar60._4_4_ + _UNK_014ea7c4) * _UNK_014e96e4;
      fVar63 = (auVar60._8_4_ + _UNK_014ea7c8) * _UNK_014e96e8;
      fVar65 = (auVar60._12_4_ + _UNK_014ea7cc) * _UNK_014e96ec;
      fVar72 = (fVar69 + _DAT_014e9700) * fVar83;
      fVar54 = (fVar69 + _UNK_014e9704) * fVar83;
      fVar55 = (fVar69 + _UNK_014e9708) * fVar83;
      fVar68 = (fVar69 + _UNK_014e970c) * fVar83;
      fVar70 = (float)(~-(uint)(0.0 <= fVar70) & (uint)fVar71 |
                      (~-(uint)(_DAT_014ea7c0 < fVar70) &
                       (uint)((fVar86 - fVar71) * fVar70 + fVar71) |
                      (uint)fVar86 & -(uint)(_DAT_014ea7c0 < fVar70)) & -(uint)(0.0 <= fVar70)) -
               (float)((uint)(fVar72 * _DAT_014e3c00) & -(uint)(fVar72 < 0.0) |
                      ~-(uint)(fVar72 < 0.0) & (uint)fVar72);
      fVar61 = (float)(~-(uint)(0.0 <= fVar61) & (uint)fVar88 |
                      (~-(uint)(_UNK_014ea7c4 < fVar61) &
                       (uint)((fVar87 - fVar88) * fVar61 + fVar88) |
                      (uint)fVar87 & -(uint)(_UNK_014ea7c4 < fVar61)) & -(uint)(0.0 <= fVar61)) -
               (float)((uint)(fVar54 * _UNK_014e3c04) & -(uint)(fVar54 < 0.0) |
                      ~-(uint)(fVar54 < 0.0) & (uint)fVar54);
      fVar63 = (float)(~-(uint)(0.0 <= fVar63) & (uint)fVar89 |
                      (~-(uint)(_UNK_014ea7c8 < fVar63) &
                       (uint)((afStack_1030[lVar45] * _UNK_014e96d8 - fVar89) * fVar63 + fVar89) |
                      (uint)(afStack_1030[lVar45] * _UNK_014e96d8) & -(uint)(_UNK_014ea7c8 < fVar63)
                      ) & -(uint)(0.0 <= fVar63)) -
               (float)((uint)(fVar55 * _UNK_014e3c08) & -(uint)(fVar55 < 0.0) |
                      ~-(uint)(fVar55 < 0.0) & (uint)fVar55);
      fVar65 = (float)(~-(uint)(0.0 <= fVar65) & (uint)fVar90 |
                      (~-(uint)(_UNK_014ea7cc < fVar65) &
                       (uint)((afStack_1030[lVar45 + 1] * _UNK_014e96dc - fVar90) * fVar65 + fVar90)
                      | (uint)(afStack_1030[lVar45 + 1] * _UNK_014e96dc) &
                        -(uint)(_UNK_014ea7cc < fVar65)) & -(uint)(0.0 <= fVar65)) -
               (float)((uint)(fVar68 * _UNK_014e3c0c) & -(uint)(fVar68 < 0.0) |
                      ~-(uint)(fVar68 < 0.0) & (uint)fVar68);
      pfVar42[-0x10] =
           (float)(~-(uint)bVar22 & uVar28 |
                  ((uint)(fVar70 * fStack_33c8 + fStack_33b8) & uStack_33a8 |
                  ~uStack_33a8 & (uint)fVar70) & -(uint)bVar22);
      pfVar42[-0xf] =
           (float)(~-(uint)bVar23 & uVar29 |
                  ((uint)(fVar61 * fStack_33c4 + fStack_33b4) & uStack_33a4 |
                  ~uStack_33a4 & (uint)fVar61) & -(uint)bVar23);
      pfVar42[-0xe] =
           (float)(~-(uint)bVar24 & uVar30 |
                  ((uint)(fVar63 * fStack_33c0 + fStack_33b0) & uStack_33a0 |
                  ~uStack_33a0 & (uint)fVar63) & -(uint)bVar24);
      pfVar42[-0xd] =
           (float)(~-(uint)bVar25 & uVar31 |
                  ((uint)(fVar65 * fStack_33bc + fStack_33ac) & uStack_339c |
                  ~uStack_339c & (uint)fVar65) & -(uint)bVar25);
      fVar89 = _UNK_014e96dc;
      fVar54 = _UNK_014e96d8;
      fVar88 = _UNK_014e96d4;
      fVar72 = _DAT_014e96d0;
      fVar71 = _UNK_014e3c0c;
      fVar65 = _UNK_014e3c08;
      fVar61 = _UNK_014e3c04;
      fVar70 = _DAT_014e3c00;
      fVar63 = afStack_3050[lVar45 + 2] * fVar73;
      fVar90 = afStack_3050[lVar45 + 3] * fVar74;
      fVar86 = afStack_3050[lVar45 + 4] * fVar76;
      fVar77 = afStack_3050[lVar45 + 5] * fVar81;
      auVar60 = divps(*(undefined1 (*) [16])((long)&uStack_203c + lVar45 * 4 + 4),auVar58);
      fVar56 = (auVar60._0_4_ + fVar32) * fVar56;
      fVar62 = (auVar60._4_4_ + fVar33) * fVar62;
      fVar64 = (auVar60._8_4_ + fVar34) * fVar64;
      fVar66 = (auVar60._12_4_ + fVar35) * fVar66;
      fVar55 = (fVar69 + _DAT_014ea480) * fVar83;
      fVar68 = (fVar69 + _UNK_014ea484) * fVar83;
      fVar87 = (fVar69 + _UNK_014ea488) * fVar83;
      fVar78 = (fVar69 + _UNK_014ea48c) * fVar83;
      fVar63 = (float)(~-(uint)(0.0 <= fVar56) & (uint)fVar63 |
                      (~-(uint)(fVar32 < fVar56) &
                       (uint)((afStack_1030[lVar45 + 2] * _DAT_014e96d0 - fVar63) * fVar56 + fVar63)
                      | (uint)(afStack_1030[lVar45 + 2] * _DAT_014e96d0) & -(uint)(fVar32 < fVar56))
                      & -(uint)(0.0 <= fVar56)) -
               (float)((uint)(fVar55 * _DAT_014e3c00) & -(uint)(fVar55 < 0.0) |
                      ~-(uint)(fVar55 < 0.0) & (uint)fVar55);
      fVar55 = (float)(~-(uint)(0.0 <= fVar62) & (uint)fVar90 |
                      (~-(uint)(fVar33 < fVar62) &
                       (uint)((afStack_1030[lVar45 + 3] * _UNK_014e96d4 - fVar90) * fVar62 + fVar90)
                      | (uint)(afStack_1030[lVar45 + 3] * _UNK_014e96d4) & -(uint)(fVar33 < fVar62))
                      & -(uint)(0.0 <= fVar62)) -
               (float)((uint)(fVar68 * _UNK_014e3c04) & -(uint)(fVar68 < 0.0) |
                      ~-(uint)(fVar68 < 0.0) & (uint)fVar68);
      fVar90 = (float)(~-(uint)(0.0 <= fVar64) & (uint)fVar86 |
                      (~-(uint)(fVar34 < fVar64) &
                       (uint)((afStack_1030[lVar45 + 4] * _UNK_014e96d8 - fVar86) * fVar64 + fVar86)
                      | (uint)(afStack_1030[lVar45 + 4] * _UNK_014e96d8) & -(uint)(fVar34 < fVar64))
                      & -(uint)(0.0 <= fVar64)) -
               (float)((uint)(fVar87 * _UNK_014e3c08) & -(uint)(fVar87 < 0.0) |
                      ~-(uint)(fVar87 < 0.0) & (uint)fVar87);
      fVar68 = (float)(~-(uint)(0.0 <= fVar66) & (uint)fVar77 |
                      (~-(uint)(fVar35 < fVar66) &
                       (uint)((afStack_1030[lVar45 + 5] * _UNK_014e96dc - fVar77) * fVar66 + fVar77)
                      | (uint)(afStack_1030[lVar45 + 5] * _UNK_014e96dc) & -(uint)(fVar35 < fVar66))
                      & -(uint)(0.0 <= fVar66)) -
               (float)((uint)(fVar78 * _UNK_014e3c0c) & -(uint)(fVar78 < 0.0) |
                      ~-(uint)(fVar78 < 0.0) & (uint)fVar78);
      pfVar42[-0xc] =
           (float)(~uStack_3488 & uVar28 |
                  ((uint)(fVar63 * fStack_33f8 + fStack_33e8) & uStack_33d8 |
                  ~uStack_33d8 & (uint)fVar63) & uStack_3488);
      pfVar42[-0xb] =
           (float)(~uStack_3484 & uVar29 |
                  ((uint)(fVar55 * fStack_33f4 + fStack_33e4) & uStack_33d4 |
                  ~uStack_33d4 & (uint)fVar55) & uStack_3484);
      pfVar42[-10] = (float)(~uStack_3480 & uVar30 |
                            ((uint)(fVar90 * fStack_33f0 + fStack_33e0) & uStack_33d0 |
                            ~uStack_33d0 & (uint)fVar90) & uStack_3480);
      pfVar42[-9] = (float)(~uStack_347c & uVar31 |
                           ((uint)(fVar68 * fStack_33ec + fStack_33dc) & uStack_33cc |
                           ~uStack_33cc & (uint)fVar68) & uStack_347c);
      fVar86 = afStack_3050[lVar45 + 6] * fVar73;
      fVar77 = afStack_3050[lVar45 + 7] * fVar74;
      fVar75 = afStack_3050[lVar45 + 8] * fVar76;
      fVar79 = afStack_3050[lVar45 + 9] * fVar81;
      fVar56 = afStack_1030[lVar45 + 6] * fVar72;
      fVar62 = afStack_1030[lVar45 + 7] * fVar88;
      fVar64 = afStack_1030[lVar45 + 8] * fVar54;
      fVar66 = afStack_1030[lVar45 + 9] * fVar89;
      auVar60 = divps(*(undefined1 (*) [16])(auStack_2028 + lVar45 * 4),auVar58);
      fVar63 = (auVar60._0_4_ + fVar32) * _DAT_014e96e0;
      fVar55 = (auVar60._4_4_ + fVar33) * _UNK_014e96e4;
      fVar90 = (auVar60._8_4_ + fVar34) * _UNK_014e96e8;
      fVar68 = (auVar60._12_4_ + fVar35) * _UNK_014e96ec;
      fVar87 = (fVar69 + _DAT_014e6810) * fVar83;
      fVar78 = (fVar69 + _UNK_014e6814) * fVar83;
      fVar84 = (fVar69 + _UNK_014e6818) * fVar83;
      fVar80 = (fVar69 + _UNK_014e681c) * fVar83;
      fVar63 = (float)(~-(uint)(0.0 <= fVar63) & (uint)fVar86 |
                      (~-(uint)(fVar32 < fVar63) & (uint)((fVar56 - fVar86) * fVar63 + fVar86) |
                      (uint)fVar56 & -(uint)(fVar32 < fVar63)) & -(uint)(0.0 <= fVar63)) -
               (float)((uint)(fVar87 * fVar70) & -(uint)(fVar87 < 0.0) |
                      ~-(uint)(fVar87 < 0.0) & (uint)fVar87);
      fVar55 = (float)(~-(uint)(0.0 <= fVar55) & (uint)fVar77 |
                      (~-(uint)(fVar33 < fVar55) & (uint)((fVar62 - fVar77) * fVar55 + fVar77) |
                      (uint)fVar62 & -(uint)(fVar33 < fVar55)) & -(uint)(0.0 <= fVar55)) -
               (float)((uint)(fVar78 * fVar61) & -(uint)(fVar78 < 0.0) |
                      ~-(uint)(fVar78 < 0.0) & (uint)fVar78);
      fVar90 = (float)(~-(uint)(0.0 <= fVar90) & (uint)fVar75 |
                      (~-(uint)(fVar34 < fVar90) & (uint)((fVar64 - fVar75) * fVar90 + fVar75) |
                      (uint)fVar64 & -(uint)(fVar34 < fVar90)) & -(uint)(0.0 <= fVar90)) -
               (float)((uint)(fVar84 * fVar65) & -(uint)(fVar84 < 0.0) |
                      ~-(uint)(fVar84 < 0.0) & (uint)fVar84);
      fVar68 = (float)(~-(uint)(0.0 <= fVar68) & (uint)fVar79 |
                      (~-(uint)(fVar35 < fVar68) & (uint)((fVar66 - fVar79) * fVar68 + fVar79) |
                      (uint)fVar66 & -(uint)(fVar35 < fVar68)) & -(uint)(0.0 <= fVar68)) -
               (float)((uint)(fVar80 * fVar71) & -(uint)(fVar80 < 0.0) |
                      ~-(uint)(fVar80 < 0.0) & (uint)fVar80);
      pfVar42[-8] = (float)(~uStack_3478 & uVar28 |
                           ((uint)(fVar63 * fStack_3438 + fStack_3418) & uStack_3408 |
                           ~uStack_3408 & (uint)fVar63) & uStack_3478);
      pfVar42[-7] = (float)(~uStack_3474 & uVar29 |
                           ((uint)(fVar55 * fStack_3434 + fStack_3414) & uStack_3404 |
                           ~uStack_3404 & (uint)fVar55) & uStack_3474);
      pfVar42[-6] = (float)(~uStack_3470 & uVar30 |
                           ((uint)(fVar90 * fStack_3430 + fStack_3410) & uStack_3400 |
                           ~uStack_3400 & (uint)fVar90) & uStack_3470);
      pfVar42[-5] = (float)(~uStack_346c & uVar31 |
                           ((uint)(fVar68 * fStack_342c + fStack_340c) & uStack_33fc |
                           ~uStack_33fc & (uint)fVar68) & uStack_346c);
      fVar63 = _DAT_011986e0;
      fVar73 = afStack_3050[lVar45 + 10] * fVar73;
      fVar74 = afStack_3050[lVar45 + 0xb] * fVar74;
      fVar76 = afStack_3050[lVar45 + 0xc] * fVar76;
      fVar81 = afStack_3050[lVar45 + 0xd] * fVar81;
      fVar72 = afStack_1030[lVar45 + 10] * fVar72;
      fVar88 = afStack_1030[lVar45 + 0xb] * fVar88;
      fVar54 = afStack_1030[lVar45 + 0xc] * fVar54;
      fVar89 = afStack_1030[lVar45 + 0xd] * fVar89;
      auVar58 = divps(*(undefined1 (*) [16])(auStack_2018 + lVar45 * 4),auVar58);
      fVar55 = (auVar58._0_4_ + fVar32) * _DAT_014e96e0;
      fVar90 = (auVar58._4_4_ + fVar33) * _UNK_014e96e4;
      fVar68 = (auVar58._8_4_ + fVar34) * _UNK_014e96e8;
      fVar86 = (auVar58._12_4_ + fVar35) * _UNK_014e96ec;
      fVar87 = (fVar69 + _DAT_014e6820) * fVar83;
      fVar77 = (fVar69 + _UNK_014e6824) * fVar83;
      fVar78 = (fVar69 + _UNK_014e6828) * fVar83;
      fVar75 = (fVar69 + _UNK_014e682c) * fVar83;
      fVar70 = (float)(~-(uint)(0.0 <= fVar55) & (uint)fVar73 |
                      (~-(uint)(fVar32 < fVar55) & (uint)((fVar72 - fVar73) * fVar55 + fVar73) |
                      (uint)fVar72 & -(uint)(fVar32 < fVar55)) & -(uint)(0.0 <= fVar55)) -
               (float)((uint)(fVar87 * fVar70) & -(uint)(fVar87 < 0.0) |
                      ~-(uint)(fVar87 < 0.0) & (uint)fVar87);
      fVar61 = (float)(~-(uint)(0.0 <= fVar90) & (uint)fVar74 |
                      (~-(uint)(fVar33 < fVar90) & (uint)((fVar88 - fVar74) * fVar90 + fVar74) |
                      (uint)fVar88 & -(uint)(fVar33 < fVar90)) & -(uint)(0.0 <= fVar90)) -
               (float)((uint)(fVar77 * fVar61) & -(uint)(fVar77 < 0.0) |
                      ~-(uint)(fVar77 < 0.0) & (uint)fVar77);
      fVar65 = (float)(~-(uint)(0.0 <= fVar68) & (uint)fVar76 |
                      (~-(uint)(fVar34 < fVar68) & (uint)((fVar54 - fVar76) * fVar68 + fVar76) |
                      (uint)fVar54 & -(uint)(fVar34 < fVar68)) & -(uint)(0.0 <= fVar68)) -
               (float)((uint)(fVar78 * fVar65) & -(uint)(fVar78 < 0.0) |
                      ~-(uint)(fVar78 < 0.0) & (uint)fVar78);
      fVar71 = (float)(~-(uint)(0.0 <= fVar86) & (uint)fVar81 |
                      (~-(uint)(fVar35 < fVar86) & (uint)((fVar89 - fVar81) * fVar86 + fVar81) |
                      (uint)fVar89 & -(uint)(fVar35 < fVar86)) & -(uint)(0.0 <= fVar86)) -
               (float)((uint)(fVar75 * fVar71) & -(uint)(fVar75 < 0.0) |
                      ~-(uint)(fVar75 < 0.0) & (uint)fVar75);
      pfVar42[-4] = (float)(~uStack_3468 & uVar28 |
                           ((uint)(fVar70 * fStack_3458 + fStack_3448) & uStack_3428 |
                           ~uStack_3428 & (uint)fVar70) & uStack_3468);
      pfVar42[-3] = (float)(~uStack_3464 & uVar29 |
                           ((uint)(fVar61 * fStack_3454 + fStack_3444) & uStack_3424 |
                           ~uStack_3424 & (uint)fVar61) & uStack_3464);
      pfVar42[-2] = (float)(~uStack_3460 & uVar30 |
                           ((uint)(fVar65 * fStack_3450 + fStack_3440) & uStack_3420 |
                           ~uStack_3420 & (uint)fVar65) & uStack_3460);
      pfVar42[-1] = (float)(~uStack_345c & uVar31 |
                           ((uint)(fVar71 * fStack_344c + fStack_343c) & uStack_341c |
                           ~uStack_341c & (uint)fVar71) & uStack_345c);
      fVar65 = _DAT_011987f8;
      fVar61 = _DAT_011985d4;
      fVar70 = _DAT_011983f0;
      fVar88 = afStack_3050[lVar45 + 0xe] * _DAT_01198c04;
      fVar72 = (afStack_2008[lVar45] / _DAT_01198400 + _DAT_011983f0) * fVar63;
      fVar71 = fVar88;
      if ((0.0 <= fVar72) &&
         (fVar71 = afStack_1030[lVar45 + 0xe] * _DAT_01198994, fVar72 <= _DAT_011983f0)) {
        fVar71 = fVar88 + (afStack_1030[lVar45 + 0xe] * _DAT_01198994 - fVar88) * fVar72;
      }
      fVar83 = fVar83 * (fVar69 + _DAT_01198634);
      fVar71 = fVar71 - (float)(~-(uint)(fVar83 < 0.0) & (uint)fVar83 |
                               (uint)(fVar83 * _DAT_011987f8) & -(uint)(fVar83 < 0.0));
      if (uStack_34ec < 0x1f) {
        fVar71 = fVar71 * fVar47 + fVar53;
      }
      else if (7 < (short)uStack_34d8) {
        fVar71 = _DAT_011988ac;
      }
      lVar43 = lVar43 + 1;
      *pfVar42 = fVar71;
      lVar45 = lVar45 + 0x11;
      pfVar42 = pfVar42 + 0x29;
    } while (lVar43 != 5);
    puVar44 = puVar44 + 0x14;
    uVar37 = uVar37 + iStack_34a4;
    pfVar41 = pfVar41 + 0xcd;
  } while (lStack_34d0 != 5);
  if (lStack_34a0 != 0) {
    lStack_3498 = lStack_34a0;
    func_0x0412a280(lStack_34a0,lStack_3490 - lStack_34a0);
  }
  return;
}


