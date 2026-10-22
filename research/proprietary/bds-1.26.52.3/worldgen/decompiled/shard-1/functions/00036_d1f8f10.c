/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f8f10 (ELF vaddr 0xd1f8f10)
 * Label: caller-of-callee
 * Body:  [[0d2f8f10, 0d2fad29] [0d2fad30, 0d2fbc19] [0d2fbc20, 0d2fcb02] [0d2fcb10, 0d2fcdc7] [0d2fcdd0, 0d2fce77] [0d2fce80, 0d2fcf6c] [0d2fcf70, 0d2fd308] [0d2fd617, 0d2fd652] [0d2fd824, 0d2fd8cf]]
 * Ghidra: FUN_0d2f8f10
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2f8f10(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  int iVar19;
  undefined *puVar20;
  long *plVar21;
  int *piVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  bool bVar31;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_918;
  ulong uStack_910;
  undefined8 uStack_908;
  ulong uStack_900;
  long lStack_8f8;
  undefined *puStack_8f0;
  undefined1 *puStack_8e8;
  undefined1 *puStack_8e0;
  undefined1 *puStack_8d8;
  undefined *puStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long *plStack_8b8;
  undefined **ppuStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined4 uStack_878;
  undefined2 uStack_874;
  undefined8 uStack_870;
  undefined *puStack_868;
  undefined8 uStack_860;
  undefined *puStack_858;
  code *pcStack_850;
  undefined8 uStack_848;
  long lStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined4 uStack_820;
  undefined1 uStack_81c;
  char cStack_818;
  undefined1 uStack_809;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined *puStack_7f8;
  code *pcStack_7f0;
  undefined8 uStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  undefined *puStack_7d0;
  undefined8 uStack_7c8;
  undefined4 uStack_7c0;
  undefined1 uStack_7bc;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined *puStack_788;
  undefined8 uStack_780;
  undefined *puStack_778;
  code *pcStack_770;
  undefined8 uStack_768;
  long lStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined4 uStack_740;
  undefined1 uStack_73c;
  uint uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined1 uStack_72c;
  undefined2 uStack_72b;
  undefined1 uStack_729;
  long lStack_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined8 uStack_710;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined8 uStack_6f8;
  undefined4 uStack_6f0;
  undefined1 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 uStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined8 uStack_6c0;
  char cStack_6b8;
  long *plStack_6a8;
  long lStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong *puStack_680;
  undefined2 uStack_678;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  undefined8 *puStack_650;
  undefined2 uStack_648;
  ulong uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong *puStack_600;
  undefined2 uStack_5f8;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined1 uStack_5dc;
  undefined2 uStack_5db;
  undefined1 uStack_5d9;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  undefined1 uStack_59c;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [384];
  undefined2 uStack_330;
  undefined1 uStack_32e;
  undefined8 uStack_32c;
  undefined8 uStack_320;
  undefined2 uStack_318;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong *puStack_2c0;
  undefined2 uStack_2b8;
  ulong uStack_2a8;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined8 uStack_28c;
  undefined1 uStack_284;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_b0;
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  plVar28 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar28;
  lStack_2e8 = 0;
  lStack_2e0 = 0;
  uStack_2f8 = 0;
  lStack_2f0 = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  lStack_248 = 0;
  lStack_240 = 0;
  uStack_258 = 0;
  lStack_250 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_238 = _DAT_01d9de70;
  uStack_234 = _UNK_01d9de74;
  uStack_230 = _UNK_01d9de78;
  uStack_22c = _UNK_01d9de7c;
  uStack_228 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_148 = 0x3f800000;
  uStack_b0 = 2;
  uStack_a8 = 0;
  uStack_68 = 0;
  uStack_5c = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_97 = 0;
  uStack_90 = 0;
  uStack_8f = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_58 = 0x7fffffff00000050;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_29f = 0;
  uStack_298 = 0;
  uStack_297 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_284 = 0;
  plStack_6a8 = param_1;
  func_0x0d8a24d0(param_3);
  func_0x0e4efe20(param_3);
  if ((DAT_0f71ed88 == '\0') && (iVar19 = func_0x04108328(&DAT_0f71ed88), iVar19 != 0)) {
    func_0x0d30f550();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f71ed08,0xf53dab8);
    func_0x0410844d(&DAT_0f71ed88);
  }
  lStack_6a0 = param_3 + 0x18;
  plVar21 = (long *)(*(long *)(param_3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f71ed08 + 4)) * 8);
  do {
    lVar26 = *plVar21;
    if (lVar26 == -1) goto LAB_0d2f90d0;
    plVar21 = (long *)(*(long *)(param_3 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(param_3 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f71ed08 + 4))
  ;
  if (plVar21 == *(long **)(param_3 + 0x38)) {
LAB_0d2f90d0:
    puVar20 = &DAT_0f71ed08;
    if (iRam000000000f71ed68 != -0x2b3da790) goto LAB_0d2f9138;
LAB_0d2f90fb:
    lVar26 = *(long *)(puVar20 + 0x68);
    if (lVar26 == 0) goto LAB_0d2f9138;
    bVar31 = (*(byte *)(lVar26 + 8) & 1) != 0;
    lVar30 = lVar26 + 9;
    if (bVar31) {
      lVar30 = *(long *)(lVar26 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar26 + 8) >> 1);
    if (bVar31) {
      uVar23 = *(ulong *)(lVar26 + 0x10);
    }
    func_0x0d30ed50(&uStack_9a8,param_3,lVar30,uVar23);
  }
  else {
    puVar20 = (undefined *)plVar21[2];
    if (*(int *)(puVar20 + 0x60) == -0x2b3da790) goto LAB_0d2f90fb;
LAB_0d2f9138:
    func_0x0d30ed50(&uStack_9a8,param_3,0,0);
  }
  if ((char)uStack_978 == '\0') {
    uStack_8c8._4_4_ = (uint)(uStack_8c8 >> 0x20);
    uStack_908._4_4_ = (uint)(uStack_908 >> 0x20);
    uStack_918._4_4_ = (undefined4)((ulong)uStack_918 >> 0x20);
    func_0x0d3100d0(&uStack_5e8,&uStack_9a8,&UNK_013771cd,0xe);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f012628;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = (ulong)uStack_908._4_4_ << 0x20;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_05eadd90;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_05eada80;
    puStack_8d8 = &UNK_0d3106e0;
    puStack_8d0 = &UNK_0d310880;
    uStack_8c8 = (ulong)uStack_8c8._4_4_ << 0x20;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0d3103e0(&uStack_5e8);
    uStack_708 = CONCAT31(uStack_708._1_3_,(char)uStack_978);
    uStack_718 = (undefined4)uStack_988;
    uStack_714 = uStack_988._4_4_;
    uStack_710 = uStack_980;
    lStack_728 = lStack_998;
    uStack_720 = (undefined4)uStack_990;
    uStack_71c = uStack_990._4_4_;
    uStack_738 = (uint)uStack_9a8;
    uStack_734 = uStack_9a8._4_4_;
    uStack_730 = (undefined4)uStack_9a0;
    uStack_72c = (undefined1)((ulong)uStack_9a0 >> 0x20);
    uStack_72b = (undefined2)((ulong)uStack_9a0 >> 0x28);
    uStack_729 = (undefined1)((ulong)uStack_9a0 >> 0x38);
    func_0x048b0bc0(&plStack_5d0);
    func_0x0d3100d0(&uStack_5e8,&uStack_738,&UNK_012693e9,0x18);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f45fd08;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = uStack_908 & 0xffffffff00000000;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_0d311420;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_0d311110;
    puStack_8d8 = &UNK_0d311430;
    puStack_8d0 = &UNK_0d311580;
    uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    lVar26 = CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0)));
    iVar19 = *(int *)(lVar26 + 0x1c);
    if (iVar19 == 2) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x60);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x16;
        iVar19 = *piVar22;
      }
      lVar30 = *(long *)(piVar22 + 0xc);
      while (lVar30 != *(long *)(lVar26 + 8)) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar30 = *(long *)(piVar22 + 0xc);
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 1) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x48);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x1a;
        iVar19 = *piVar22;
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 0) {
      puVar1 = (uint *)(*(long *)(lVar26 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0d3103e0(&uStack_5e8);
    func_0x048b0bc0(&plStack_5d0);
  }
  func_0x05d54750(&uStack_1b8,&UNK_0f45f928);
  uStack_2d8 = uStack_1b8;
  uStack_2d0 = uStack_1b0;
  uStack_2c8 = uStack_1a8;
  puStack_2c0 = &uStack_308;
  uStack_2b8 = 0;
  lStack_840 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_910 = uStack_910 & 0xffffffffffff0000;
  uStack_918 = &UNK_0ef473d8;
  ppuStack_8b0 = &puStack_8f0;
  uStack_908 = 0;
  uStack_900 = 0;
  lStack_8f8 = 0;
  puStack_8f0 = (undefined *)0x0;
  puStack_8e8 = (undefined1 *)0x0;
  puStack_8e0 = (undefined1 *)0x0;
  puStack_8d8 = (undefined1 *)0x0;
  puStack_8d0 = (undefined *)0x0;
  uStack_8c8 = 0x100;
  uStack_8c0 = 0;
  plStack_8b8 = (long *)0x0;
  uStack_8a8 = 0;
  lStack_8a0 = 0;
  uStack_898 = 0;
  uStack_890 = 0;
  uStack_888 = 0;
  uStack_880 = 0x200;
  uStack_878 = 0x144;
  uStack_874 = 0x2000;
  uStack_870 = 4;
  uStack_5e0 = (undefined4)param_3;
  uVar5 = uStack_5e0;
  uStack_5dc = (undefined1)((ulong)param_3 >> 0x20);
  uVar7 = uStack_5dc;
  uStack_5db = (undefined2)((ulong)param_3 >> 0x28);
  uVar8 = uStack_5db;
  uStack_5d9 = (undefined1)((ulong)param_3 >> 0x38);
  uVar9 = uStack_5d9;
  uStack_5e8 = 0xef474c0;
  uStack_5e4 = 0;
  lStack_5d8 = CONCAT44(lStack_5d8._4_4_,0xffffffff);
  plStack_5d0 = &lStack_5c0;
  uStack_5c8 = 0x800000000;
  puStack_4c0 = auStack_4b0;
  uStack_4b8 = 0x800000000;
  uStack_330 = 0xfffc;
  uStack_32e = 1;
  uStack_32c = 0xffffffff00000000;
  uStack_320 = 0;
  uStack_318 = 0;
  puStack_788 = &UNK_0f45fd80;
  if (lStack_840 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_668);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar4 = (undefined4)uStack_800;
    uVar6 = uStack_800._4_4_;
    uStack_808 = (ulong *)0x0;
    uStack_800 = (long *)0x0;
    plVar21 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar6;
    if (plVar21 != (long *)0x0) {
      LOCK();
      plVar25 = plVar21 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        func_0x0412c2d0(plVar21);
      }
    }
    plVar21 = uStack_800;
    if (uStack_800 != (long *)0x0) {
      LOCK();
      plVar25 = uStack_800 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar21);
      }
    }
    lStack_840 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_858 = &UNK_0d30f8d0;
  pcStack_850 = (code *)0x0;
  uStack_848 = CONCAT35(uStack_848._5_3_,0x43a51569c);
  uStack_838 = 0;
  uStack_830 = 0;
  puStack_7f8 = &UNK_0d30f8d0;
  pcStack_7f0 = (code *)0x0;
  uStack_7e8 = CONCAT35(uStack_7e8._5_3_,0x43a51569c);
  puStack_868 = (undefined *)0x0;
  uStack_808 = &uStack_2d8;
  lStack_7e0 = lStack_6a0;
  uStack_7d8 = 0;
  puStack_7d0 = &UNK_0d30f750;
  cVar18 = func_0x0ed6b850(&uStack_5e8,&uStack_918,&uStack_808,&puStack_788);
  if ((pcStack_7f0 != (code *)0x0) && ((*pcStack_7f0)(&uStack_808), pcStack_850 != (code *)0x0)) {
    (*pcStack_850)(&puStack_868);
  }
  if (cVar18 == '\0') {
    func_0x0d6b2c60(&puStack_788,&lStack_5d8);
    puStack_868 = puStack_788;
    uStack_860 = uStack_780;
    puStack_858 = puStack_778;
    puStack_788 = (undefined *)0x0;
    uStack_780 = 0;
    puStack_778 = (undefined *)0x0;
    pcStack_850 = pcStack_770;
    uStack_848 = uStack_768;
    lStack_840 = lStack_760;
    pcStack_770 = (code *)0x0;
    uStack_768 = 0;
    lStack_760 = 0;
    uStack_838 = uStack_758;
    uStack_830 = uStack_750;
    uStack_828 = uStack_748;
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    uStack_81c = uStack_73c;
    uStack_820 = uStack_740;
    cStack_818 = '\x01';
    func_0x0d311930(&uStack_808,&puStack_868);
    func_0x0d311b30(&uStack_9a8,&uStack_808);
    func_0x0d30a100(&uStack_808);
    if (cStack_818 == '\x01') {
      func_0x05d85c50(&puStack_868);
    }
    func_0x05d85c50(&puStack_788);
    func_0x048ffe50(&uStack_5e8);
    if ((char)uStack_928 != '\x01') goto LAB_0d2f9b38;
LAB_0d2f989e:
    if ((long)puStack_8d0 - (long)puStack_8d8 < 1) {
      func_0x048fcad0(&puStack_8f0,1);
    }
    puVar3 = puStack_8e0;
    *puStack_8d8 = 0;
    uVar23 = func_0x0eee2e90(puStack_8e0);
    if (uVar23 < 0xfffffffffffffff8) {
      if (uVar23 < 0x17) {
        uStack_5e8 = CONCAT31(uStack_5e8._1_3_,(char)uVar23 * '\x02');
        lVar30 = (long)&uStack_5e8 + 1;
        if (uVar23 != 0) goto LAB_0d2f9963;
      }
      else {
        lVar26 = 0x1a;
        if ((uVar23 | 7) != 0x17) {
          lVar26 = (uVar23 | 7) + 1;
        }
        lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
        if (lVar30 == 0) {
          func_0x0eec74c0(lVar26,0);
        }
        uStack_5e8 = (uint)lVar26 | 1;
        uStack_5e4 = (undefined4)((ulong)lVar26 >> 0x20);
        uStack_5e0 = (undefined4)uVar23;
        uStack_5dc = (undefined1)(uVar23 >> 0x20);
        uStack_5db = (undefined2)(uVar23 >> 0x28);
        uStack_5d9 = (undefined1)(uVar23 >> 0x38);
        lStack_5d8 = lVar30;
LAB_0d2f9963:
        func_0x0eee2ee0(lVar30,puVar3,uVar23);
      }
      *(undefined1 *)(lVar30 + uVar23) = 0;
      cStack_6b8 = '\x01';
      uStack_72b = uStack_5db;
      uStack_729 = uStack_5d9;
      lStack_728 = lStack_5d8;
      uStack_734 = uStack_5e4;
      uStack_72c = uStack_5dc;
      uStack_738 = uStack_5e8;
      uStack_730 = uStack_5e0;
      goto joined_r0x0d2f99e3;
    }
    func_0x04882e30();
LAB_0d2fd2c1:
    func_0x04882e30();
LAB_0d2fd2c6:
    func_0x04882e30();
    goto LAB_0d2fd2cb;
  }
  uStack_938 = 0;
  uStack_930 = 0;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_958 = 0;
  uStack_950 = 0;
  uStack_968 = 0;
  uStack_960 = 0;
  uStack_978 = 0;
  uStack_970 = 0;
  uStack_988 = 0;
  uStack_980 = 0;
  lStack_998 = 0;
  uStack_990 = 0;
  uStack_9a8 = 0;
  uStack_9a0 = 0;
  uStack_928 = 1;
  func_0x048ffe50(&uStack_5e8);
  if ((char)uStack_928 == '\x01') goto LAB_0d2f989e;
LAB_0d2f9b38:
  uStack_6c0 = uStack_930;
  uStack_6d8 = uStack_948;
  uStack_6f8 = uStack_968;
  uStack_710 = uStack_980;
  lStack_728 = lStack_998;
  uVar27 = uStack_9a0;
  uStack_738 = (uint)uStack_9a8;
  uStack_734 = uStack_9a8._4_4_;
  uStack_730 = (undefined4)uStack_9a0;
  uStack_9a8 = 0;
  uStack_9a0 = 0;
  lStack_998 = 0;
  uStack_720 = (undefined4)uStack_990;
  uStack_71c = uStack_990._4_4_;
  uStack_718 = (undefined4)uStack_988;
  uStack_714 = uStack_988._4_4_;
  uStack_990 = 0;
  uStack_988 = 0;
  uStack_980 = 0;
  uStack_708 = (undefined4)uStack_978;
  uStack_704 = uStack_978._4_4_;
  uStack_700 = (undefined4)uStack_970;
  uStack_6fc = uStack_970._4_4_;
  uStack_978 = 0;
  uStack_970 = 0;
  uStack_968 = 0;
  uStack_7c0 = (undefined4)uStack_960;
  uStack_7bc = uStack_960._4_1_;
  uStack_6e8 = (undefined4)uStack_958;
  uStack_6e4 = uStack_958._4_4_;
  uStack_6e0 = (undefined4)uStack_950;
  uStack_6dc = uStack_950._4_4_;
  uStack_958 = 0;
  uStack_950 = 0;
  uStack_948 = 0;
  uStack_6d0 = (undefined4)uStack_940;
  uStack_6cc = uStack_940._4_4_;
  uStack_6c8 = (undefined4)uStack_938;
  uStack_6c4 = uStack_938._4_4_;
  uStack_940 = 0;
  uStack_938 = 0;
  uStack_930 = 0;
  uStack_7d8 = 0;
  puStack_7d0 = (undefined *)0x0;
  uStack_7e8 = 0;
  lStack_7e0 = 0;
  puStack_7f8 = (undefined *)0x0;
  pcStack_7f0 = (code *)0x0;
  uStack_808 = (ulong *)0x0;
  uStack_800 = (long *)0x0;
  uStack_7c8 = 0;
  uStack_5a0 = (undefined4)uStack_960;
  uStack_59c = uStack_960._4_1_;
  uStack_798 = 0;
  uStack_790 = 0;
  uStack_7a8 = 0;
  uStack_7a0 = 0;
  uStack_7b8 = 0;
  uStack_7b0 = 0;
  cStack_6b8 = '\0';
  uStack_72c = (undefined1)((ulong)uVar27 >> 0x20);
  uStack_72b = (undefined2)((ulong)uVar27 >> 0x28);
  uStack_729 = (undefined1)((ulong)uVar27 >> 0x38);
  uStack_5e8 = 0;
  uStack_5e4 = 0;
  uStack_5e0 = 0;
  uStack_5dc = 0;
  uStack_5db = 0;
  uStack_5d9 = 0;
  lStack_5d8 = 0;
  plStack_5d0 = (long *)0x0;
  uStack_5c8 = 0;
  lStack_5c0 = 0;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  uStack_6ec = uStack_960._4_1_;
  uStack_6f0 = (undefined4)uStack_960;
  uStack_598 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = 0;
  func_0x0d30a100(&uStack_5e8);
  func_0x0d30a100(&uStack_808);
joined_r0x0d2f99e3:
  if ((char)uStack_928 == '\0') {
    func_0x0d30a100(&uStack_9a8);
  }
  uStack_918 = &UNK_0ef473d8;
  func_0x0eee2e20(uStack_898);
  if (lStack_8a0 != 0) {
    func_0x0412a280(lStack_8a0,1);
  }
  func_0x0eee2e20(puStack_8e0);
  if (puStack_8e8 != (undefined1 *)0x0) {
    func_0x0412a280(puStack_8e8,1);
  }
  if (uStack_908 != 0) {
    uStack_900 = uStack_908;
    func_0x0412a280(uStack_908,lStack_8f8 - uStack_908);
  }
  uStack_5e8 = 0xfc377887;
  uStack_5e4 = 0xc6607923;
  uStack_5e0 = 0x140f690;
  uStack_5dc = 0;
  uStack_5db = 0;
  uStack_5d9 = 0;
  lStack_5d8 = 1;
  plStack_5d0 = (long *)CONCAT44(plStack_5d0._4_4_,0x43);
  func_0x0d309880(&uStack_618,&uStack_738,&UNK_01254d89,&UNK_04916f70,&SUB_0eedea30,param_6,
                  0xfc377887,0x140f690,1,0x43);
  plVar21 = plVar28;
  for (plVar25 = (long *)*plVar28; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
    if ((char)plVar25[4] == '\0') goto LAB_0d2f9eee;
    plVar21 = plVar25;
  }
  puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar24 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar25 = plStack_6a8;
  *(undefined1 *)(puVar24 + 4) = 0;
  puVar24[7] = uStack_608;
  puVar24[5] = uStack_618;
  puVar24[6] = uStack_610;
  uStack_618 = 0;
  uStack_610 = 0;
  uStack_608 = 0;
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24[2] = plVar21;
  *plVar21 = (long)puVar24;
  if (*(long *)*plStack_6a8 != 0) {
    *plStack_6a8 = *(long *)*plStack_6a8;
  }
  func_0x048bed00(plStack_6a8[1],puVar24);
  plVar25[2] = plVar25[2] + 1;
LAB_0d2f9eee:
  if ((uStack_618 & 1) != 0) {
    func_0x0412a280(uStack_608,uStack_618 & 0xfffffffffffffffe);
  }
  if (cStack_6b8 == '\x01') {
    if ((uStack_738 & 1) != 0) {
      func_0x0412a280(lStack_728,CONCAT44(uStack_734,uStack_738) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x0d30a100(&uStack_738);
  }
  func_0x0d8a24d0(param_3);
  func_0x0e4f7eb0(param_3);
  if ((DAT_0f71eef8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f71eef8), iVar19 != 0)) {
    func_0x0d3125f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f71ee78,0xf53dab8);
    func_0x0410844d(&DAT_0f71eef8);
  }
  plVar21 = (long *)(*(long *)(param_3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f71ee78 + 4)) * 8);
  do {
    lVar26 = *plVar21;
    if (lVar26 == -1) goto LAB_0d2f9fc0;
    plVar21 = (long *)(*(long *)(param_3 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(param_3 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f71ee78 + 4))
  ;
  if (plVar21 == *(long **)(param_3 + 0x38)) {
LAB_0d2f9fc0:
    puVar20 = &DAT_0f71ee78;
    if (iRam000000000f71eed8 != -0x2b3da790) goto LAB_0d2fa028;
LAB_0d2f9feb:
    lVar26 = *(long *)(puVar20 + 0x68);
    if (lVar26 == 0) goto LAB_0d2fa028;
    bVar31 = (*(byte *)(lVar26 + 8) & 1) != 0;
    lVar30 = lVar26 + 9;
    if (bVar31) {
      lVar30 = *(long *)(lVar26 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar26 + 8) >> 1);
    if (bVar31) {
      uVar23 = *(ulong *)(lVar26 + 0x10);
    }
    func_0x0d311df0(&uStack_9a8,param_3,lVar30,uVar23);
  }
  else {
    puVar20 = (undefined *)plVar21[2];
    if (*(int *)(puVar20 + 0x60) == -0x2b3da790) goto LAB_0d2f9feb;
LAB_0d2fa028:
    func_0x0d311df0(&uStack_9a8,param_3,0,0);
  }
  if ((char)uStack_978 == '\0') {
    func_0x0d313170(&uStack_5e8,&uStack_9a8,&UNK_013771cd,0xe);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f012628;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = uStack_908 & 0xffffffff00000000;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_05eadd90;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_05eada80;
    puStack_8d8 = &UNK_0d313770;
    puStack_8d0 = &UNK_0d313910;
    uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0d313470(&uStack_5e8);
    uStack_708 = CONCAT31(uStack_708._1_3_,(char)uStack_978);
    uStack_718 = (undefined4)uStack_988;
    uStack_714 = uStack_988._4_4_;
    uStack_710 = uStack_980;
    lStack_728 = lStack_998;
    uStack_720 = (undefined4)uStack_990;
    uStack_71c = uStack_990._4_4_;
    uStack_738 = (uint)uStack_9a8;
    uStack_734 = uStack_9a8._4_4_;
    uStack_730 = (undefined4)uStack_9a0;
    uStack_72c = (undefined1)((ulong)uStack_9a0 >> 0x20);
    uStack_72b = (undefined2)((ulong)uStack_9a0 >> 0x28);
    uStack_729 = (undefined1)((ulong)uStack_9a0 >> 0x38);
    func_0x048b0bc0(&plStack_5d0);
    func_0x0d313170(&uStack_5e8,&uStack_738,&UNK_0140afe9,0x17);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f45fe68;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = uStack_908 & 0xffffffff00000000;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_0d314500;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_0d3141e0;
    puStack_8d8 = &UNK_0d314510;
    puStack_8d0 = &UNK_0d314660;
    uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    lVar26 = CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0)));
    iVar19 = *(int *)(lVar26 + 0x1c);
    if (iVar19 == 2) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x60);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x16;
        iVar19 = *piVar22;
      }
      lVar30 = *(long *)(piVar22 + 0xc);
      while (lVar30 != *(long *)(lVar26 + 8)) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar30 = *(long *)(piVar22 + 0xc);
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 1) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x48);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x1a;
        iVar19 = *piVar22;
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 0) {
      puVar1 = (uint *)(*(long *)(lVar26 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0d313470(&uStack_5e8);
    func_0x048b0bc0(&plStack_5d0);
  }
  func_0x05d54750(&uStack_1d8,&UNK_0f45f950);
  uStack_618 = uStack_1d8;
  uStack_610 = uStack_1d0;
  uStack_608 = uStack_1c8;
  puStack_600 = &uStack_268;
  uStack_5f8 = 0;
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_910 = uStack_910 & 0xffffffffffff0000;
  uStack_918 = &UNK_0ef473d8;
  uStack_908 = 0;
  uStack_900 = 0;
  lStack_8f8 = 0;
  puStack_8f0 = (undefined *)0x0;
  puStack_8e8 = (undefined1 *)0x0;
  puStack_8e0 = (undefined1 *)0x0;
  puStack_8d8 = (undefined1 *)0x0;
  puStack_8d0 = (undefined *)0x0;
  uStack_8c8 = 0x100;
  uStack_8c0 = 0;
  plStack_8b8 = (long *)0x0;
  ppuStack_8b0 = &puStack_8f0;
  uStack_8a8 = 0;
  lStack_8a0 = 0;
  uStack_898 = 0;
  uStack_890 = 0;
  uStack_888 = 0;
  uStack_880 = 0x200;
  uStack_878 = 0x144;
  uStack_874 = 0x2000;
  uStack_870 = 4;
  uStack_5e8 = 0xef474c0;
  uStack_5e4 = 0;
  lStack_5d8 = CONCAT44(lStack_5d8._4_4_,0xffffffff);
  plStack_5d0 = &lStack_5c0;
  uStack_5c8 = 0x800000000;
  puStack_4c0 = auStack_4b0;
  uStack_4b8 = 0x800000000;
  uStack_330 = 0xfffc;
  uStack_32e = 1;
  uStack_32c = 0xffffffff00000000;
  uStack_320 = 0;
  uStack_318 = 0;
  puStack_788 = &UNK_0f45fee0;
  uStack_5e0 = uVar5;
  uStack_5dc = uVar7;
  uStack_5db = uVar8;
  uStack_5d9 = uVar9;
  if (lVar26 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_698);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar4 = (undefined4)uStack_800;
    uVar6 = uStack_800._4_4_;
    uStack_808 = (ulong *)0x0;
    uStack_800 = (long *)0x0;
    plVar21 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar6;
    if (plVar21 != (long *)0x0) {
      LOCK();
      plVar25 = plVar21 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        func_0x0412c2d0(plVar21);
      }
    }
    plVar21 = uStack_800;
    if (uStack_800 != (long *)0x0) {
      LOCK();
      plVar25 = uStack_800 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar21);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_858 = &UNK_0d312970;
  pcStack_850 = (code *)0x0;
  uStack_848 = CONCAT35(uStack_848._5_3_,0x43f2a3a4e);
  uStack_838 = 0;
  uStack_830 = 0;
  puStack_7f8 = &UNK_0d312970;
  pcStack_7f0 = (code *)0x0;
  uStack_7e8 = CONCAT35(uStack_7e8._5_3_,0x43f2a3a4e);
  puStack_868 = (undefined *)0x0;
  lStack_7e0 = lStack_6a0;
  uStack_7d8 = 0;
  puStack_7d0 = &UNK_0d3127f0;
  lStack_840 = lVar26;
  uStack_808 = &uStack_618;
  cVar18 = func_0x0ed6b850(&uStack_5e8,&uStack_918,&uStack_808,&puStack_788);
  if ((pcStack_7f0 != (code *)0x0) && ((*pcStack_7f0)(&uStack_808), pcStack_850 != (code *)0x0)) {
    (*pcStack_850)(&puStack_868);
  }
  if (cVar18 == '\0') {
    func_0x0d6b2c60(&puStack_788,&lStack_5d8);
    puStack_868 = puStack_788;
    uStack_860 = uStack_780;
    puStack_858 = puStack_778;
    puStack_788 = (undefined *)0x0;
    uStack_780 = 0;
    puStack_778 = (undefined *)0x0;
    pcStack_850 = pcStack_770;
    uStack_848 = uStack_768;
    lStack_840 = lStack_760;
    pcStack_770 = (code *)0x0;
    uStack_768 = 0;
    lStack_760 = 0;
    uStack_838 = uStack_758;
    uStack_830 = uStack_750;
    uStack_828 = uStack_748;
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    uStack_81c = uStack_73c;
    uStack_820 = uStack_740;
    cStack_818 = '\x01';
    func_0x0d314a10(&uStack_808,&puStack_868);
    func_0x0d311b30(&uStack_9a8,&uStack_808);
    func_0x0d30a100(&uStack_808);
    if (cStack_818 == '\x01') {
      func_0x05d85c50(&puStack_868);
    }
    func_0x05d85c50(&puStack_788);
    func_0x048ffe50(&uStack_5e8);
    if ((char)uStack_928 != '\x01') goto LAB_0d2faa20;
LAB_0d2fa786:
    if ((long)puStack_8d0 - (long)puStack_8d8 < 1) {
      func_0x048fcad0(&puStack_8f0,1);
    }
    puVar3 = puStack_8e0;
    *puStack_8d8 = 0;
    uVar23 = func_0x0eee2e90(puStack_8e0);
    if (0xfffffffffffffff7 < uVar23) goto LAB_0d2fd2c1;
    if (uVar23 < 0x17) {
      uStack_5e8 = CONCAT31(uStack_5e8._1_3_,(char)uVar23 * '\x02');
      lVar30 = (long)&uStack_5e8 + 1;
      if (uVar23 != 0) goto LAB_0d2fa84b;
    }
    else {
      lVar26 = 0x1a;
      if ((uVar23 | 7) != 0x17) {
        lVar26 = (uVar23 | 7) + 1;
      }
      lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
      if (lVar30 == 0) {
        func_0x0eec74c0(lVar26,0);
      }
      uStack_5e8 = (uint)lVar26 | 1;
      uStack_5e4 = (undefined4)((ulong)lVar26 >> 0x20);
      uStack_5e0 = (undefined4)uVar23;
      uStack_5dc = (undefined1)(uVar23 >> 0x20);
      uStack_5db = (undefined2)(uVar23 >> 0x28);
      uStack_5d9 = (undefined1)(uVar23 >> 0x38);
      lStack_5d8 = lVar30;
LAB_0d2fa84b:
      func_0x0eee2ee0(lVar30,puVar3,uVar23);
    }
    *(undefined1 *)(lVar30 + uVar23) = 0;
    cStack_6b8 = '\x01';
    uStack_738 = uStack_5e8;
    uStack_734 = uStack_5e4;
    uStack_730 = uStack_5e0;
    uStack_72c = uStack_5dc;
    uStack_72b = uStack_5db;
    uStack_729 = uStack_5d9;
    lStack_728 = lStack_5d8;
  }
  else {
    uStack_938 = 0;
    uStack_930 = 0;
    uStack_948 = 0;
    uStack_940 = 0;
    uStack_958 = 0;
    uStack_950 = 0;
    uStack_968 = 0;
    uStack_960 = 0;
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    lStack_998 = 0;
    uStack_990 = 0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    uStack_928 = 1;
    func_0x048ffe50(&uStack_5e8);
    if ((char)uStack_928 == '\x01') goto LAB_0d2fa786;
LAB_0d2faa20:
    uStack_6c0 = uStack_930;
    uStack_6d8 = uStack_948;
    uStack_6f8 = uStack_968;
    uStack_710 = uStack_980;
    lStack_728 = lStack_998;
    uVar27 = uStack_9a0;
    uStack_738 = (uint)uStack_9a8;
    uStack_734 = uStack_9a8._4_4_;
    uStack_730 = (undefined4)uStack_9a0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    lStack_998 = 0;
    uStack_720 = (undefined4)uStack_990;
    uStack_71c = uStack_990._4_4_;
    uStack_718 = (undefined4)uStack_988;
    uStack_714 = uStack_988._4_4_;
    uStack_990 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    uStack_708 = (undefined4)uStack_978;
    uStack_704 = uStack_978._4_4_;
    uStack_700 = (undefined4)uStack_970;
    uStack_6fc = uStack_970._4_4_;
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_968 = 0;
    uStack_7c0 = (undefined4)uStack_960;
    uStack_7bc = uStack_960._4_1_;
    uStack_6e8 = (undefined4)uStack_958;
    uStack_6e4 = uStack_958._4_4_;
    uStack_6e0 = (undefined4)uStack_950;
    uStack_6dc = uStack_950._4_4_;
    uStack_958 = 0;
    uStack_950 = 0;
    uStack_948 = 0;
    uStack_6d0 = (undefined4)uStack_940;
    uStack_6cc = uStack_940._4_4_;
    uStack_6c8 = (undefined4)uStack_938;
    uStack_6c4 = uStack_938._4_4_;
    uStack_940 = 0;
    uStack_938 = 0;
    uStack_930 = 0;
    uStack_7d8 = 0;
    puStack_7d0 = (undefined *)0x0;
    uStack_7e8 = 0;
    lStack_7e0 = 0;
    puStack_7f8 = (undefined *)0x0;
    pcStack_7f0 = (code *)0x0;
    uStack_808 = (ulong *)0x0;
    uStack_800 = (long *)0x0;
    uStack_7c8 = 0;
    uStack_5a0 = (undefined4)uStack_960;
    uStack_59c = uStack_960._4_1_;
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_7a8 = 0;
    uStack_7a0 = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 0;
    cStack_6b8 = '\0';
    uStack_72c = (undefined1)((ulong)uVar27 >> 0x20);
    uStack_72b = (undefined2)((ulong)uVar27 >> 0x28);
    uStack_729 = (undefined1)((ulong)uVar27 >> 0x38);
    uStack_5e8 = 0;
    uStack_5e4 = 0;
    uStack_5e0 = 0;
    uStack_5dc = 0;
    uStack_5db = 0;
    uStack_5d9 = 0;
    lStack_5d8 = 0;
    plStack_5d0 = (long *)0x0;
    uStack_5c8 = 0;
    lStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    uStack_6ec = uStack_960._4_1_;
    uStack_6f0 = (undefined4)uStack_960;
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x0d30a100(&uStack_5e8);
    func_0x0d30a100(&uStack_808);
  }
  if ((char)uStack_928 == '\0') {
    func_0x0d30a100(&uStack_9a8);
  }
  uStack_918 = &UNK_0ef473d8;
  func_0x0eee2e20(uStack_898);
  if (lStack_8a0 != 0) {
    func_0x0412a280(lStack_8a0,1);
  }
  func_0x0eee2e20(puStack_8e0);
  if (puStack_8e8 != (undefined1 *)0x0) {
    func_0x0412a280(puStack_8e8,1);
  }
  if (uStack_908 != 0) {
    uStack_900 = uStack_908;
    func_0x0412a280(uStack_908,lStack_8f8 - uStack_908);
  }
  uStack_5e8 = 0xfc377887;
  uStack_5e4 = 0xc6607923;
  uStack_5e0 = 0x140f690;
  uStack_5dc = 0;
  uStack_5db = 0;
  uStack_5d9 = 0;
  lStack_5d8 = 1;
  plStack_5d0 = (long *)CONCAT44(plStack_5d0._4_4_,0x4f);
  func_0x0d309880(&uStack_668,&uStack_738,&UNK_01254d89,&UNK_04916f70,&SUB_0eedea30,param_6,
                  0xfc377887,0x140f690,1,0x4f);
  plVar25 = (long *)*plVar28;
  plVar21 = plVar28;
  while (plVar29 = plVar21, plVar25 != (long *)0x0) {
    while (plVar29 = plVar25, *(byte *)(plVar29 + 4) < 4) {
      if (*(byte *)(plVar29 + 4) == 3) goto LAB_0d2fade5;
      plVar25 = (long *)plVar29[1];
      if ((long *)plVar29[1] == (long *)0x0) {
        plVar21 = plVar29 + 1;
        goto LAB_0d2fad5b;
      }
    }
    plVar21 = plVar29;
    plVar25 = (long *)*plVar29;
  }
LAB_0d2fad5b:
  puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar24 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar25 = plStack_6a8;
  *(undefined1 *)(puVar24 + 4) = 3;
  puVar24[7] = uStack_658;
  puVar24[5] = uStack_668;
  puVar24[6] = uStack_660;
  uStack_668 = 0;
  uStack_660 = 0;
  uStack_658 = 0;
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24[2] = plVar29;
  *plVar21 = (long)puVar24;
  if (*(long *)*plStack_6a8 != 0) {
    *plStack_6a8 = *(long *)*plStack_6a8;
  }
  func_0x048bed00(plStack_6a8[1],puVar24);
  plVar25[2] = plVar25[2] + 1;
LAB_0d2fade5:
  if ((uStack_668 & 1) != 0) {
    func_0x0412a280(uStack_658,uStack_668 & 0xfffffffffffffffe);
  }
  if (cStack_6b8 == '\x01') {
    if ((uStack_738 & 1) != 0) {
      func_0x0412a280(lStack_728,CONCAT44(uStack_734,uStack_738) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x0d30a100(&uStack_738);
  }
  func_0x0d8a24d0(param_3);
  func_0x0e4ddaa0(param_3);
  if ((DAT_0f71f068 == '\0') && (iVar19 = func_0x04108328(&DAT_0f71f068), iVar19 != 0)) {
    func_0x0d3155b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f71efe8,0xf53dab8);
    func_0x0410844d(&DAT_0f71f068);
  }
  plVar21 = (long *)(*(long *)(param_3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f71efe8 + 4)) * 8);
  do {
    lVar26 = *plVar21;
    if (lVar26 == -1) goto LAB_0d2faeb0;
    plVar21 = (long *)(*(long *)(param_3 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(param_3 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f71efe8 + 4))
  ;
  if (plVar21 == *(long **)(param_3 + 0x38)) {
LAB_0d2faeb0:
    puVar20 = &DAT_0f71efe8;
    if (iRam000000000f71f048 != -0x2b3da790) goto LAB_0d2faf18;
LAB_0d2faedb:
    lVar26 = *(long *)(puVar20 + 0x68);
    if (lVar26 == 0) goto LAB_0d2faf18;
    bVar31 = (*(byte *)(lVar26 + 8) & 1) != 0;
    lVar30 = lVar26 + 9;
    if (bVar31) {
      lVar30 = *(long *)(lVar26 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar26 + 8) >> 1);
    if (bVar31) {
      uVar23 = *(ulong *)(lVar26 + 0x10);
    }
    func_0x0d314db0(&uStack_9a8,param_3,lVar30,uVar23);
  }
  else {
    puVar20 = (undefined *)plVar21[2];
    if (*(int *)(puVar20 + 0x60) == -0x2b3da790) goto LAB_0d2faedb;
LAB_0d2faf18:
    func_0x0d314db0(&uStack_9a8,param_3,0,0);
  }
  if ((char)uStack_978 == '\0') {
    func_0x0d316130(&uStack_5e8,&uStack_9a8,&UNK_013771cd,0xe);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f012628;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = uStack_908 & 0xffffffff00000000;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_05eadd90;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_05eada80;
    puStack_8d8 = &UNK_0d3166e0;
    puStack_8d0 = &UNK_0d316880;
    uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0d3163e0(&uStack_5e8);
    uStack_708 = CONCAT31(uStack_708._1_3_,(char)uStack_978);
    uStack_718 = (undefined4)uStack_988;
    uStack_714 = uStack_988._4_4_;
    uStack_710 = uStack_980;
    lStack_728 = lStack_998;
    uStack_720 = (undefined4)uStack_990;
    uStack_71c = uStack_990._4_4_;
    uStack_738 = (uint)uStack_9a8;
    uStack_734 = uStack_9a8._4_4_;
    uStack_730 = (undefined4)uStack_9a0;
    uStack_72c = (undefined1)((ulong)uStack_9a0 >> 0x20);
    uStack_72b = (undefined2)((ulong)uStack_9a0 >> 0x28);
    uStack_729 = (undefined1)((ulong)uStack_9a0 >> 0x38);
    func_0x048b0bc0(&plStack_5d0);
    func_0x0d316130(&uStack_5e8,&uStack_738,&UNK_01457e1d,0x10);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f45ffc8;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = uStack_908 & 0xffffffff00000000;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_0d3174a0;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_0d317130;
    puStack_8d8 = &UNK_0d3174b0;
    puStack_8d0 = &UNK_0d317600;
    uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    lVar26 = CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0)));
    iVar19 = *(int *)(lVar26 + 0x1c);
    if (iVar19 == 2) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x60);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x16;
        iVar19 = *piVar22;
      }
      lVar30 = *(long *)(piVar22 + 0xc);
      while (lVar30 != *(long *)(lVar26 + 8)) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar30 = *(long *)(piVar22 + 0xc);
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 1) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x48);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x1a;
        iVar19 = *piVar22;
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 0) {
      puVar1 = (uint *)(*(long *)(lVar26 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0d3163e0(&uStack_5e8);
    func_0x048b0bc0(&plStack_5d0);
  }
  func_0x05d54750(&uStack_1f8,&UNK_0f45f978);
  uStack_668 = uStack_1f8;
  uStack_660 = uStack_1f0;
  uStack_658 = uStack_1e8;
  puStack_650 = &uStack_198;
  uStack_648 = 0;
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_910 = uStack_910 & 0xffffffffffff0000;
  uStack_918 = &UNK_0ef473d8;
  uStack_908 = 0;
  uStack_900 = 0;
  lStack_8f8 = 0;
  puStack_8f0 = (undefined *)0x0;
  puStack_8e8 = (undefined1 *)0x0;
  puStack_8e0 = (undefined1 *)0x0;
  puStack_8d8 = (undefined1 *)0x0;
  puStack_8d0 = (undefined *)0x0;
  uStack_8c8 = 0x100;
  uStack_8c0 = 0;
  plStack_8b8 = (long *)0x0;
  ppuStack_8b0 = &puStack_8f0;
  uStack_8a8 = 0;
  lStack_8a0 = 0;
  uStack_898 = 0;
  uStack_890 = 0;
  uStack_888 = 0;
  uStack_880 = 0x200;
  uStack_878 = 0x144;
  uStack_874 = 0x2000;
  uStack_870 = 4;
  uStack_5e8 = 0xef474c0;
  uStack_5e4 = 0;
  lStack_5d8 = CONCAT44(lStack_5d8._4_4_,0xffffffff);
  plStack_5d0 = &lStack_5c0;
  uStack_5c8 = 0x800000000;
  puStack_4c0 = auStack_4b0;
  uStack_4b8 = 0x800000000;
  uStack_330 = 0xfffc;
  uStack_32e = 1;
  uStack_32c = 0xffffffff00000000;
  uStack_320 = 0;
  uStack_318 = 0;
  puStack_788 = &UNK_0f460058;
  uStack_5e0 = uVar5;
  uStack_5dc = uVar7;
  uStack_5db = uVar8;
  uStack_5d9 = uVar9;
  if (lVar26 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_638);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar4 = (undefined4)uStack_800;
    uVar6 = uStack_800._4_4_;
    uStack_808 = (ulong *)0x0;
    uStack_800 = (long *)0x0;
    plVar21 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar6;
    if (plVar21 != (long *)0x0) {
      LOCK();
      plVar25 = plVar21 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        func_0x0412c2d0(plVar21);
      }
    }
    plVar21 = uStack_800;
    if (uStack_800 != (long *)0x0) {
      LOCK();
      plVar25 = uStack_800 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar21);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_858 = &UNK_0d315930;
  pcStack_850 = (code *)0x0;
  uStack_848 = CONCAT35(uStack_848._5_3_,0x4b44fa451);
  uStack_838 = 0;
  uStack_830 = 0;
  puStack_7f8 = &UNK_0d315930;
  pcStack_7f0 = (code *)0x0;
  uStack_7e8 = CONCAT35(uStack_7e8._5_3_,0x4b44fa451);
  puStack_868 = (undefined *)0x0;
  lStack_7e0 = lStack_6a0;
  uStack_7d8 = 0;
  puStack_7d0 = &UNK_0d3157b0;
  lStack_840 = lVar26;
  uStack_808 = &uStack_668;
  cVar18 = func_0x0ed6b850(&uStack_5e8,&uStack_918,&uStack_808,&puStack_788);
  if ((pcStack_7f0 != (code *)0x0) && ((*pcStack_7f0)(&uStack_808), pcStack_850 != (code *)0x0)) {
    (*pcStack_850)(&puStack_868);
  }
  if (cVar18 == '\0') {
    func_0x0d6b2c60(&puStack_788,&lStack_5d8);
    puStack_868 = puStack_788;
    uStack_860 = uStack_780;
    puStack_858 = puStack_778;
    puStack_788 = (undefined *)0x0;
    uStack_780 = 0;
    puStack_778 = (undefined *)0x0;
    pcStack_850 = pcStack_770;
    uStack_848 = uStack_768;
    lStack_840 = lStack_760;
    pcStack_770 = (code *)0x0;
    uStack_768 = 0;
    lStack_760 = 0;
    uStack_838 = uStack_758;
    uStack_830 = uStack_750;
    uStack_828 = uStack_748;
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    uStack_81c = uStack_73c;
    uStack_820 = uStack_740;
    cStack_818 = '\x01';
    func_0x0d3179b0(&uStack_808,&puStack_868);
    func_0x0d311b30(&uStack_9a8,&uStack_808);
    func_0x0d30a100(&uStack_808);
    if (cStack_818 == '\x01') {
      func_0x05d85c50(&puStack_868);
    }
    func_0x05d85c50(&puStack_788);
    func_0x048ffe50(&uStack_5e8);
    if ((char)uStack_928 != '\x01') goto LAB_0d2fb910;
LAB_0d2fb676:
    if ((long)puStack_8d0 - (long)puStack_8d8 < 1) {
      func_0x048fcad0(&puStack_8f0,1);
    }
    puVar3 = puStack_8e0;
    *puStack_8d8 = 0;
    uVar23 = func_0x0eee2e90(puStack_8e0);
    if (0xfffffffffffffff7 < uVar23) goto LAB_0d2fd2c6;
    if (uVar23 < 0x17) {
      uStack_5e8 = CONCAT31(uStack_5e8._1_3_,(char)uVar23 * '\x02');
      lVar30 = (long)&uStack_5e8 + 1;
      if (uVar23 != 0) goto LAB_0d2fb73b;
    }
    else {
      lVar26 = 0x1a;
      if ((uVar23 | 7) != 0x17) {
        lVar26 = (uVar23 | 7) + 1;
      }
      lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
      if (lVar30 == 0) {
        func_0x0eec74c0(lVar26,0);
      }
      uStack_5e8 = (uint)lVar26 | 1;
      uStack_5e4 = (undefined4)((ulong)lVar26 >> 0x20);
      uStack_5e0 = (undefined4)uVar23;
      uStack_5dc = (undefined1)(uVar23 >> 0x20);
      uStack_5db = (undefined2)(uVar23 >> 0x28);
      uStack_5d9 = (undefined1)(uVar23 >> 0x38);
      lStack_5d8 = lVar30;
LAB_0d2fb73b:
      func_0x0eee2ee0(lVar30,puVar3,uVar23);
    }
    *(undefined1 *)(lVar30 + uVar23) = 0;
    cStack_6b8 = '\x01';
    uStack_738 = uStack_5e8;
    uStack_734 = uStack_5e4;
    uStack_730 = uStack_5e0;
    uStack_72c = uStack_5dc;
    uStack_72b = uStack_5db;
    uStack_729 = uStack_5d9;
    lStack_728 = lStack_5d8;
  }
  else {
    uStack_938 = 0;
    uStack_930 = 0;
    uStack_948 = 0;
    uStack_940 = 0;
    uStack_958 = 0;
    uStack_950 = 0;
    uStack_968 = 0;
    uStack_960 = 0;
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    lStack_998 = 0;
    uStack_990 = 0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    uStack_928 = 1;
    func_0x048ffe50(&uStack_5e8);
    if ((char)uStack_928 == '\x01') goto LAB_0d2fb676;
LAB_0d2fb910:
    uStack_6c0 = uStack_930;
    uStack_6d8 = uStack_948;
    uStack_6f8 = uStack_968;
    uStack_710 = uStack_980;
    lStack_728 = lStack_998;
    uVar27 = uStack_9a0;
    uStack_738 = (uint)uStack_9a8;
    uStack_734 = uStack_9a8._4_4_;
    uStack_730 = (undefined4)uStack_9a0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    lStack_998 = 0;
    uStack_720 = (undefined4)uStack_990;
    uStack_71c = uStack_990._4_4_;
    uStack_718 = (undefined4)uStack_988;
    uStack_714 = uStack_988._4_4_;
    uStack_990 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    uStack_708 = (undefined4)uStack_978;
    uStack_704 = uStack_978._4_4_;
    uStack_700 = (undefined4)uStack_970;
    uStack_6fc = uStack_970._4_4_;
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_968 = 0;
    uStack_7c0 = (undefined4)uStack_960;
    uStack_7bc = uStack_960._4_1_;
    uStack_6e8 = (undefined4)uStack_958;
    uStack_6e4 = uStack_958._4_4_;
    uStack_6e0 = (undefined4)uStack_950;
    uStack_6dc = uStack_950._4_4_;
    uStack_958 = 0;
    uStack_950 = 0;
    uStack_948 = 0;
    uStack_6d0 = (undefined4)uStack_940;
    uStack_6cc = uStack_940._4_4_;
    uStack_6c8 = (undefined4)uStack_938;
    uStack_6c4 = uStack_938._4_4_;
    uStack_940 = 0;
    uStack_938 = 0;
    uStack_930 = 0;
    uStack_7d8 = 0;
    puStack_7d0 = (undefined *)0x0;
    uStack_7e8 = 0;
    lStack_7e0 = 0;
    puStack_7f8 = (undefined *)0x0;
    pcStack_7f0 = (code *)0x0;
    uStack_808 = (ulong *)0x0;
    uStack_800 = (long *)0x0;
    uStack_7c8 = 0;
    uStack_5a0 = (undefined4)uStack_960;
    uStack_59c = uStack_960._4_1_;
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_7a8 = 0;
    uStack_7a0 = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 0;
    cStack_6b8 = '\0';
    uStack_72c = (undefined1)((ulong)uVar27 >> 0x20);
    uStack_72b = (undefined2)((ulong)uVar27 >> 0x28);
    uStack_729 = (undefined1)((ulong)uVar27 >> 0x38);
    uStack_5e8 = 0;
    uStack_5e4 = 0;
    uStack_5e0 = 0;
    uStack_5dc = 0;
    uStack_5db = 0;
    uStack_5d9 = 0;
    lStack_5d8 = 0;
    plStack_5d0 = (long *)0x0;
    uStack_5c8 = 0;
    lStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    uStack_6ec = uStack_960._4_1_;
    uStack_6f0 = (undefined4)uStack_960;
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x0d30a100(&uStack_5e8);
    func_0x0d30a100(&uStack_808);
  }
  if ((char)uStack_928 == '\0') {
    func_0x0d30a100(&uStack_9a8);
  }
  uStack_918 = &UNK_0ef473d8;
  func_0x0eee2e20(uStack_898);
  if (lStack_8a0 != 0) {
    func_0x0412a280(lStack_8a0,1);
  }
  func_0x0eee2e20(puStack_8e0);
  if (puStack_8e8 != (undefined1 *)0x0) {
    func_0x0412a280(puStack_8e8,1);
  }
  if (uStack_908 != 0) {
    uStack_900 = uStack_908;
    func_0x0412a280(uStack_908,lStack_8f8 - uStack_908);
  }
  uStack_5e8 = 0xfc377887;
  uStack_5e4 = 0xc6607923;
  uStack_5e0 = 0x140f690;
  uStack_5dc = 0;
  uStack_5db = 0;
  uStack_5d9 = 0;
  lStack_5d8 = 1;
  plStack_5d0 = (long *)CONCAT44(plStack_5d0._4_4_,0x5b);
  func_0x0d309880(&uStack_698,&uStack_738,&UNK_01254d89,&UNK_04916f70,&SUB_0eedea30,param_6,
                  0xfc377887,0x140f690,1,0x5b);
  plVar25 = (long *)*plVar28;
  plVar21 = plVar28;
  while (plVar29 = plVar21, plVar25 != (long *)0x0) {
    while (plVar29 = plVar25, *(byte *)(plVar29 + 4) < 2) {
      if (*(byte *)(plVar29 + 4) != 0) goto LAB_0d2fbcd5;
      plVar25 = (long *)plVar29[1];
      if ((long *)plVar29[1] == (long *)0x0) {
        plVar21 = plVar29 + 1;
        goto LAB_0d2fbc4b;
      }
    }
    plVar21 = plVar29;
    plVar25 = (long *)*plVar29;
  }
LAB_0d2fbc4b:
  puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar24 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar25 = plStack_6a8;
  *(undefined1 *)(puVar24 + 4) = 1;
  puVar24[7] = uStack_688;
  puVar24[5] = uStack_698;
  puVar24[6] = uStack_690;
  uStack_698 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24[2] = plVar29;
  *plVar21 = (long)puVar24;
  if (*(long *)*plStack_6a8 != 0) {
    *plStack_6a8 = *(long *)*plStack_6a8;
  }
  func_0x048bed00(plStack_6a8[1],puVar24);
  plVar25[2] = plVar25[2] + 1;
LAB_0d2fbcd5:
  if ((uStack_698 & 1) != 0) {
    func_0x0412a280(uStack_688,uStack_698 & 0xfffffffffffffffe);
  }
  if (cStack_6b8 == '\x01') {
    if ((uStack_738 & 1) != 0) {
      func_0x0412a280(lStack_728,CONCAT44(uStack_734,uStack_738) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x0d30a100(&uStack_738);
  }
  func_0x0d8a24d0(param_3);
  func_0x0e4f1ef0(param_3);
  if ((DAT_0f71f1d8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f71f1d8), iVar19 != 0)) {
    func_0x0d318550();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f71f158,0xf53dab8);
    func_0x0410844d(&DAT_0f71f1d8);
  }
  plVar21 = (long *)(*(long *)(param_3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f71f158 + 4)) * 8);
  do {
    lVar26 = *plVar21;
    if (lVar26 == -1) goto LAB_0d2fbda0;
    plVar21 = (long *)(*(long *)(param_3 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(param_3 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f71f158 + 4))
  ;
  if (plVar21 == *(long **)(param_3 + 0x38)) {
LAB_0d2fbda0:
    puVar20 = &DAT_0f71f158;
    if (iRam000000000f71f1b8 != -0x2b3da790) goto LAB_0d2fbe08;
LAB_0d2fbdcb:
    lVar26 = *(long *)(puVar20 + 0x68);
    if (lVar26 == 0) goto LAB_0d2fbe08;
    bVar31 = (*(byte *)(lVar26 + 8) & 1) != 0;
    lVar30 = lVar26 + 9;
    if (bVar31) {
      lVar30 = *(long *)(lVar26 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar26 + 8) >> 1);
    if (bVar31) {
      uVar23 = *(ulong *)(lVar26 + 0x10);
    }
    func_0x0d317d50(&uStack_9a8,param_3,lVar30,uVar23);
  }
  else {
    puVar20 = (undefined *)plVar21[2];
    if (*(int *)(puVar20 + 0x60) == -0x2b3da790) goto LAB_0d2fbdcb;
LAB_0d2fbe08:
    func_0x0d317d50(&uStack_9a8,param_3,0,0);
  }
  if ((char)uStack_978 == '\0') {
    func_0x0d3190d0(&uStack_5e8,&uStack_9a8,&UNK_013771cd,0xe);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f012628;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = uStack_908 & 0xffffffff00000000;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_05eadd90;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_05eada80;
    puStack_8d8 = &UNK_0d3196d0;
    puStack_8d0 = &UNK_0d319870;
    uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    func_0x0d3193d0(&uStack_5e8);
    uStack_708 = CONCAT31(uStack_708._1_3_,(char)uStack_978);
    uStack_718 = (undefined4)uStack_988;
    uStack_714 = uStack_988._4_4_;
    uStack_710 = uStack_980;
    lStack_728 = lStack_998;
    uStack_720 = (undefined4)uStack_990;
    uStack_71c = uStack_990._4_4_;
    uStack_738 = (uint)uStack_9a8;
    uStack_734 = uStack_9a8._4_4_;
    uStack_730 = (undefined4)uStack_9a0;
    uStack_72c = (undefined1)((ulong)uStack_9a0 >> 0x20);
    uStack_72b = (undefined2)((ulong)uStack_9a0 >> 0x28);
    uStack_729 = (undefined1)((ulong)uStack_9a0 >> 0x38);
    func_0x048b0bc0(&plStack_5d0);
    func_0x0d3190d0(&uStack_5e8,&uStack_738,&UNK_013be01f,0x17);
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar21 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar21 = (long)&UNK_0f460140;
    if (plStack_5d0 != (long *)0x0) {
      lVar26 = *plStack_5d0;
      plStack_5d0 = plVar21;
      (**(code **)(lVar26 + 8))();
      plVar21 = plStack_5d0;
    }
    plStack_5d0 = plVar21;
    uStack_918 = (undefined *)CONCAT44(uStack_918._4_4_,(undefined4)lStack_5d8);
    uStack_910 = 0;
    uStack_908 = uStack_908 & 0xffffffff00000000;
    uStack_900 = 1;
    lStack_8f8 = 0;
    puStack_8f0 = &UNK_0d31a3f0;
    puStack_8e8 = &SUB_048b06d0;
    puStack_8e0 = &SUB_0d31a0e0;
    puStack_8d8 = &UNK_0d31a400;
    puStack_8d0 = &UNK_0d31a550;
    uStack_8c8 = uStack_8c8 & 0xffffffff00000000;
    uStack_8c0 = 0;
    plStack_8b8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0))),
                    &uStack_918);
    plVar21 = plStack_8b8;
    if (plStack_8b8 != (long *)0x0) {
      LOCK();
      plVar25 = plStack_8b8 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_8b8 + 0x10))(plStack_8b8);
        func_0x0412c2d0(plVar21);
      }
    }
    lVar26 = CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT14(uStack_5dc,uStack_5e0)));
    iVar19 = *(int *)(lVar26 + 0x1c);
    if (iVar19 == 2) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x60);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x16;
        iVar19 = *piVar22;
      }
      lVar30 = *(long *)(piVar22 + 0xc);
      while (lVar30 != *(long *)(lVar26 + 8)) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar30 = *(long *)(piVar22 + 0xc);
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 1) {
      piVar22 = *(int **)(*(long *)(*(long *)(lVar26 + 0x10) + 0x78) + 0x48);
      iVar19 = *piVar22;
      while (iVar19 != *(int *)(lVar26 + 0x18)) {
        piVar22 = piVar22 + 0x1a;
        iVar19 = *piVar22;
      }
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else if (iVar19 == 0) {
      puVar1 = (uint *)(*(long *)(lVar26 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0d3193d0(&uStack_5e8);
    func_0x048b0bc0(&plStack_5d0);
  }
  func_0x05d54750(&uStack_218,&UNK_0f45f9a0);
  uStack_698 = uStack_218;
  uStack_690 = uStack_210;
  uStack_688 = uStack_208;
  puStack_680 = &uStack_2a8;
  uStack_678 = 0;
  lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_910 = uStack_910 & 0xffffffffffff0000;
  uStack_918 = &UNK_0ef473d8;
  uStack_908 = 0;
  uStack_900 = 0;
  lStack_8f8 = 0;
  puStack_8f0 = (undefined *)0x0;
  puStack_8e8 = (undefined1 *)0x0;
  puStack_8e0 = (undefined1 *)0x0;
  puStack_8d8 = (undefined1 *)0x0;
  puStack_8d0 = (undefined *)0x0;
  uStack_8c8 = 0x100;
  uStack_8c0 = 0;
  plStack_8b8 = (long *)0x0;
  ppuStack_8b0 = &puStack_8f0;
  uStack_8a8 = 0;
  lStack_8a0 = 0;
  uStack_898 = 0;
  uStack_890 = 0;
  uStack_888 = 0;
  uStack_880 = 0x200;
  uStack_878 = 0x144;
  uStack_874 = 0x2000;
  uStack_870 = 4;
  uStack_5e8 = 0xef474c0;
  uStack_5e4 = 0;
  lStack_5d8 = CONCAT44(lStack_5d8._4_4_,0xffffffff);
  plStack_5d0 = &lStack_5c0;
  uStack_5c8 = 0x800000000;
  puStack_4c0 = auStack_4b0;
  uStack_4b8 = 0x800000000;
  uStack_330 = 0xfffc;
  uStack_32e = 1;
  uStack_32c = 0xffffffff00000000;
  uStack_320 = 0;
  uStack_318 = 0;
  puStack_788 = &UNK_0f4601b8;
  uStack_5e0 = uVar5;
  uStack_5dc = uVar7;
  uStack_5db = uVar8;
  uStack_5d9 = uVar9;
  if (lVar26 == 0) {
    func_0x048b0de0(&uStack_808,&uStack_809);
    _DAT_0f54fd90 = (undefined4)uStack_808;
    uRam000000000f54fd94 = uStack_808._4_4_;
    uVar5 = (undefined4)uStack_800;
    uVar4 = uStack_800._4_4_;
    uStack_808 = (ulong *)0x0;
    uStack_800 = (long *)0x0;
    plVar21 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar4;
    if (plVar21 != (long *)0x0) {
      LOCK();
      plVar25 = plVar21 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        func_0x0412c2d0(plVar21);
      }
    }
    plVar21 = uStack_800;
    if (uStack_800 != (long *)0x0) {
      LOCK();
      plVar25 = uStack_800 + 1;
      lVar26 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*uStack_800 + 0x10))(uStack_800);
        func_0x0412c2d0(plVar21);
      }
    }
    lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_858 = &UNK_0d3188d0;
  pcStack_850 = (code *)0x0;
  uStack_848 = CONCAT35(uStack_848._5_3_,0x4cc66aa69);
  uStack_838 = 0;
  uStack_830 = 0;
  puStack_7f8 = &UNK_0d3188d0;
  pcStack_7f0 = (code *)0x0;
  uStack_7e8 = CONCAT35(uStack_7e8._5_3_,0x4cc66aa69);
  puStack_868 = (undefined *)0x0;
  lStack_7e0 = lStack_6a0;
  uStack_7d8 = 0;
  puStack_7d0 = &UNK_0d318750;
  lStack_840 = lVar26;
  uStack_808 = &uStack_698;
  cVar18 = func_0x0ed6b850(&uStack_5e8,&uStack_918,&uStack_808,&puStack_788);
  if ((pcStack_7f0 != (code *)0x0) && ((*pcStack_7f0)(&uStack_808), pcStack_850 != (code *)0x0)) {
    (*pcStack_850)(&puStack_868);
  }
  if (cVar18 == '\0') {
    func_0x0d6b2c60(&puStack_788,&lStack_5d8);
    puStack_868 = puStack_788;
    uStack_860 = uStack_780;
    puStack_858 = puStack_778;
    puStack_788 = (undefined *)0x0;
    uStack_780 = 0;
    puStack_778 = (undefined *)0x0;
    pcStack_850 = pcStack_770;
    uStack_848 = uStack_768;
    lStack_840 = lStack_760;
    pcStack_770 = (code *)0x0;
    uStack_768 = 0;
    lStack_760 = 0;
    uStack_838 = uStack_758;
    uStack_830 = uStack_750;
    uStack_828 = uStack_748;
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    uStack_81c = uStack_73c;
    uStack_820 = uStack_740;
    cStack_818 = '\x01';
    func_0x0d31a900(&uStack_808,&puStack_868);
    func_0x0d311b30(&uStack_9a8,&uStack_808);
    func_0x0d30a100(&uStack_808);
    if (cStack_818 == '\x01') {
      func_0x05d85c50(&puStack_868);
    }
    func_0x05d85c50(&puStack_788);
    func_0x048ffe50(&uStack_5e8);
    uVar27 = uStack_9a0;
    lVar30 = lStack_998;
    uVar14 = uStack_980;
    uVar15 = uStack_968;
    uVar16 = uStack_948;
    uVar17 = uStack_930;
    lVar26 = lStack_728;
    uVar10 = uStack_710;
    uVar11 = uStack_6f8;
    uVar12 = uStack_6d8;
    uVar13 = uStack_6c0;
  }
  else {
    uStack_938 = 0;
    uStack_930 = 0;
    uStack_948 = 0;
    uStack_940 = 0;
    uStack_958 = 0;
    uStack_950 = 0;
    uStack_968 = 0;
    uStack_960 = 0;
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    lStack_998 = 0;
    uStack_990 = 0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    uStack_928 = 1;
    func_0x048ffe50(&uStack_5e8);
    uVar27 = uStack_9a0;
    lVar30 = lStack_998;
    uVar14 = uStack_980;
    uVar15 = uStack_968;
    uVar16 = uStack_948;
    uVar17 = uStack_930;
    lVar26 = lStack_728;
    uVar10 = uStack_710;
    uVar11 = uStack_6f8;
    uVar12 = uStack_6d8;
    uVar13 = uStack_6c0;
  }
  uStack_6c0 = uVar17;
  uStack_6d8 = uVar16;
  uStack_6f8 = uVar15;
  uStack_710 = uVar14;
  lStack_728 = lVar30;
  if ((char)uStack_928 != '\x01') {
    uStack_738 = (uint)uStack_9a8;
    uStack_9a8._4_4_ = (undefined4)((ulong)uStack_9a8 >> 0x20);
    uStack_734 = uStack_9a8._4_4_;
    uStack_9a0._0_4_ = (undefined4)uVar27;
    uStack_730 = (undefined4)uStack_9a0;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    lStack_998 = 0;
    uStack_720 = (undefined4)uStack_990;
    uStack_990._4_4_ = (undefined4)((ulong)uStack_990 >> 0x20);
    uStack_71c = uStack_990._4_4_;
    uStack_718 = (undefined4)uStack_988;
    uStack_988._4_4_ = (undefined4)((ulong)uStack_988 >> 0x20);
    uStack_714 = uStack_988._4_4_;
    uStack_990 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    uStack_708 = (undefined4)uStack_978;
    uStack_978._4_4_ = (undefined4)((ulong)uStack_978 >> 0x20);
    uStack_704 = uStack_978._4_4_;
    uStack_700 = (undefined4)uStack_970;
    uStack_970._4_4_ = (undefined4)((ulong)uStack_970 >> 0x20);
    uStack_6fc = uStack_970._4_4_;
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_968 = 0;
    uStack_7c0 = (undefined4)uStack_960;
    uStack_960._4_1_ = (undefined1)((ulong)uStack_960 >> 0x20);
    uStack_7bc = uStack_960._4_1_;
    uStack_6e8 = (undefined4)uStack_958;
    uStack_958._4_4_ = (undefined4)((ulong)uStack_958 >> 0x20);
    uStack_6e4 = uStack_958._4_4_;
    uStack_6e0 = (undefined4)uStack_950;
    uStack_950._4_4_ = (undefined4)((ulong)uStack_950 >> 0x20);
    uStack_6dc = uStack_950._4_4_;
    uStack_958 = 0;
    uStack_950 = 0;
    uStack_948 = 0;
    uStack_6d0 = (undefined4)uStack_940;
    uStack_940._4_4_ = (undefined4)((ulong)uStack_940 >> 0x20);
    uStack_6cc = uStack_940._4_4_;
    uStack_6c8 = (undefined4)uStack_938;
    uStack_938._4_4_ = (undefined4)((ulong)uStack_938 >> 0x20);
    uStack_6c4 = uStack_938._4_4_;
    uStack_940 = 0;
    uStack_938 = 0;
    uStack_930 = 0;
    uStack_7d8 = 0;
    puStack_7d0 = (undefined *)0x0;
    uStack_7e8 = 0;
    lStack_7e0 = 0;
    puStack_7f8 = (undefined *)0x0;
    pcStack_7f0 = (code *)0x0;
    uStack_808 = (ulong *)0x0;
    uStack_800 = (long *)0x0;
    uStack_7c8 = 0;
    uStack_5a0 = (undefined4)uStack_960;
    uStack_59c = uStack_960._4_1_;
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_7a8 = 0;
    uStack_7a0 = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 0;
    cStack_6b8 = '\0';
    uStack_72c = (undefined1)((ulong)uVar27 >> 0x20);
    uStack_72b = (undefined2)((ulong)uVar27 >> 0x28);
    uStack_729 = (undefined1)((ulong)uVar27 >> 0x38);
    uStack_5e8 = 0;
    uStack_5e4 = 0;
    uStack_5e0 = 0;
    uStack_5dc = 0;
    uStack_5db = 0;
    uStack_5d9 = 0;
    lStack_5d8 = 0;
    plStack_5d0 = (long *)0x0;
    uStack_5c8 = 0;
    lStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    uStack_6ec = uStack_960._4_1_;
    uStack_6f0 = (undefined4)uStack_960;
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x0d30a100(&uStack_5e8);
    func_0x0d30a100(&uStack_808);
    goto joined_r0x0d2fc9f8;
  }
  uStack_9a0 = uVar27;
  lStack_998 = lStack_728;
  uStack_980 = uStack_710;
  uStack_968 = uStack_6f8;
  uStack_948 = uStack_6d8;
  uStack_930 = uStack_6c0;
  if ((long)puStack_8d0 - (long)puStack_8d8 < 1) {
    lStack_728 = lVar26;
    uStack_710 = uVar10;
    uStack_6f8 = uVar11;
    uStack_6d8 = uVar12;
    uStack_6c0 = uVar13;
    func_0x048fcad0(&puStack_8f0,1);
    lVar26 = lStack_728;
    uVar10 = uStack_710;
    uVar11 = uStack_6f8;
    uVar12 = uStack_6d8;
    uVar13 = uStack_6c0;
  }
  uStack_6c0 = uVar13;
  uStack_6d8 = uVar12;
  uStack_6f8 = uVar11;
  uStack_710 = uVar10;
  lStack_728 = lVar26;
  puVar3 = puStack_8e0;
  *puStack_8d8 = 0;
  uVar23 = func_0x0eee2e90(puStack_8e0);
  if (0xfffffffffffffff7 < uVar23) {
LAB_0d2fd2cb:
    uVar27 = func_0x04882e30();
    func_0x0d30a100(&uStack_808);
    if (cStack_818 == '\x01') {
      func_0x05d85c50(&puStack_868);
    }
    func_0x05d85c50(&puStack_788);
    func_0x048ffe50(&uStack_5e8);
    func_0x048fe9e0(&uStack_918);
    func_0x0ee386e0(&uStack_688);
    func_0x0ee386e0(&uStack_690);
    func_0x0ee386e0(&uStack_658);
    func_0x0ee386e0(&uStack_660);
    do {
      func_0x0ee386e0(&uStack_608);
      func_0x0ee386e0(&uStack_610);
      func_0x0ee386e0(&uStack_2c8);
      func_0x0ee386e0(&uStack_2d0);
      func_0x0d2fd920(&uStack_2a8);
      func_0x049e9b20(&uStack_198);
      func_0x0d2fd9a0(&uStack_268);
      func_0x0d2c8e40(&uStack_308);
      func_0x06336d60(plStack_6a8,plStack_6a8[1]);
      uVar27 = _Unwind_Resume(uVar27);
    } while( true );
  }
  if (uVar23 < 0x17) {
    uStack_5e8 = CONCAT31(uStack_5e8._1_3_,(char)uVar23 * '\x02');
    lVar30 = (long)&uStack_5e8 + 1;
    if (uVar23 != 0) goto LAB_0d2fc62b;
  }
  else {
    lVar26 = 0x1a;
    if ((uVar23 | 7) != 0x17) {
      lVar26 = (uVar23 | 7) + 1;
    }
    lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
    if (lVar30 == 0) {
      func_0x0eec74c0(lVar26,0);
    }
    uStack_5e8 = (uint)lVar26 | 1;
    uStack_5e4 = (undefined4)((ulong)lVar26 >> 0x20);
    uStack_5e0 = (undefined4)uVar23;
    uStack_5dc = (undefined1)(uVar23 >> 0x20);
    uStack_5db = (undefined2)(uVar23 >> 0x28);
    uStack_5d9 = (undefined1)(uVar23 >> 0x38);
    lStack_5d8 = lVar30;
LAB_0d2fc62b:
    func_0x0eee2ee0(lVar30,puVar3,uVar23);
  }
  *(undefined1 *)(lVar30 + uVar23) = 0;
  cStack_6b8 = '\x01';
  uStack_738 = uStack_5e8;
  uStack_734 = uStack_5e4;
  uStack_730 = uStack_5e0;
  uStack_72c = uStack_5dc;
  uStack_72b = uStack_5db;
  uStack_729 = uStack_5d9;
  lStack_728 = lStack_5d8;
joined_r0x0d2fc9f8:
  if ((char)uStack_928 == '\0') {
    func_0x0d30a100(&uStack_9a8);
  }
  uStack_918 = &UNK_0ef473d8;
  func_0x0eee2e20(uStack_898);
  if (lStack_8a0 != 0) {
    func_0x0412a280(lStack_8a0,1);
  }
  func_0x0eee2e20(puStack_8e0);
  if (puStack_8e8 != (undefined1 *)0x0) {
    func_0x0412a280(puStack_8e8,1);
  }
  if (uStack_908 != 0) {
    uStack_900 = uStack_908;
    func_0x0412a280(uStack_908,lStack_8f8 - uStack_908);
  }
  uStack_5e8 = 0xfc377887;
  uStack_5e4 = 0xc6607923;
  uStack_5e0 = 0x140f690;
  uStack_5dc = 0;
  uStack_5db = 0;
  uStack_5d9 = 0;
  lStack_5d8 = 1;
  plStack_5d0 = (long *)CONCAT44(plStack_5d0._4_4_,0x67);
  func_0x0d309880(&uStack_638,&uStack_738,&UNK_01254d89,&UNK_04916f70,&SUB_0eedea30,param_6,
                  0xfc377887,0x140f690,1,0x67);
  plVar21 = (long *)*plVar28;
  do {
    plVar25 = plVar28;
    if (plVar21 == (long *)0x0) {
LAB_0d2fcb3b:
      puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar24 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      plVar21 = plStack_6a8;
      *(undefined1 *)(puVar24 + 4) = 2;
      puVar24[7] = uStack_628;
      puVar24[5] = uStack_638;
      puVar24[6] = uStack_630;
      uStack_638 = 0;
      uStack_630 = 0;
      uStack_628 = 0;
      *puVar24 = 0;
      puVar24[1] = 0;
      puVar24[2] = plVar25;
      *plVar28 = (long)puVar24;
      if (*(long *)*plStack_6a8 != 0) {
        *plStack_6a8 = *(long *)*plStack_6a8;
      }
      func_0x048bed00(plStack_6a8[1],puVar24);
      plVar21[2] = plVar21[2] + 1;
LAB_0d2fcbc3:
      if ((uStack_638 & 1) != 0) {
        func_0x0412a280(uStack_628,uStack_638 & 0xfffffffffffffffe);
      }
      if (cStack_6b8 == '\x01') {
        if ((uStack_738 & 1) != 0) {
          func_0x0412a280(lStack_728,CONCAT44(uStack_734,uStack_738) & 0xfffffffffffffffe);
        }
      }
      else {
        func_0x0d30a100(&uStack_738);
      }
      if ((uStack_688 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_688 & 0xff00ffffffffffff) - 8);
      }
      uStack_688 = 0;
      if ((uStack_690 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_690 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_658 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_658 & 0xff00ffffffffffff) - 8);
      }
      uStack_658 = 0;
      if ((uStack_660 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_660 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_608 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_608 & 0xff00ffffffffffff) - 8);
      }
      uStack_608 = 0;
      if ((uStack_610 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_610 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_2c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
      }
      uStack_2c8 = 0;
      if ((uStack_2d0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2d0 & 0xff00ffffffffffff) - 8);
      }
      lVar30 = lStack_280;
      lVar26 = lStack_278;
      if (lStack_280 != 0) {
        for (; lVar30 != lVar26; lVar26 = lVar26 + -0x20) {
          if ((*(byte *)(lVar26 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar26 + -0x10),
                            *(ulong *)(lVar26 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_278 = lVar30;
        func_0x0412a280(lStack_280,lStack_270 - lStack_280);
      }
      if ((uStack_2a8 & 1) == 0) {
        func_0x049e9b20(&uStack_198);
      }
      else {
        func_0x0412a280(CONCAT71(uStack_297,uStack_298),uStack_2a8 & 0xfffffffffffffffe);
        func_0x049e9b20(&uStack_198);
      }
      lVar26 = lStack_250;
      if ((uStack_238 & 1) != 0) {
        func_0x0412a280(uStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
        lVar26 = lStack_250;
      }
      lStack_250 = lVar26;
      if (lVar26 != 0) {
        if (lVar26 != lStack_248) {
          lVar30 = lStack_248;
          do {
            lVar2 = lVar30 + -0x48;
            if ((ulong)*(uint *)(lVar30 + -0x10) != 0xffffffff) {
              (**(code **)(&UNK_0f45f8f8 + (ulong)*(uint *)(lVar30 + -0x10) * 8))(&uStack_5e8,lVar2)
              ;
            }
            *(undefined4 *)(lVar30 + -0x10) = 0xffffffff;
            lVar30 = lVar2;
          } while (lVar2 != lVar26);
        }
        lStack_248 = lVar26;
        func_0x0412a280(lStack_250,lStack_240 - lStack_250);
      }
      if ((uStack_268 & 1) != 0) {
        func_0x0412a280(uStack_258,uStack_268 & 0xfffffffffffffffe);
      }
      lVar26 = lStack_2f0;
      if (lStack_2f0 != 0) {
        if (lStack_2f0 != lStack_2e8) {
          lVar30 = lStack_2e8;
          do {
            if ((ulong)*(uint *)(lVar30 + -8) != 0xffffffff) {
              (**(code **)(&UNK_0f45f9e0 + (ulong)*(uint *)(lVar30 + -8) * 8))
                        (&uStack_5e8,lVar30 + -0x38);
            }
            *(undefined4 *)(lVar30 + -8) = 0xffffffff;
            lVar30 = lVar30 + -0x40;
          } while (lVar30 != lVar26);
        }
        lStack_2e8 = lVar26;
        func_0x0412a280(lStack_2f0,lStack_2e0 - lStack_2f0);
      }
      if ((uStack_308 & 1) != 0) {
        func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
      }
      return plStack_6a8;
    }
    while (plVar25 = plVar21, *(byte *)(plVar25 + 4) < 3) {
      if (*(byte *)(plVar25 + 4) == 2) goto LAB_0d2fcbc3;
      plVar21 = (long *)plVar25[1];
      if ((long *)plVar25[1] == (long *)0x0) {
        plVar28 = plVar25 + 1;
        goto LAB_0d2fcb3b;
      }
    }
    plVar21 = (long *)*plVar25;
    plVar28 = plVar25;
  } while( true );
}


