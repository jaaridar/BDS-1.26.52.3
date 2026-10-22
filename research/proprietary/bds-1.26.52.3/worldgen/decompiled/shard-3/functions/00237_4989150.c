/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a89150 (ELF vaddr 0x4989150)
 * Label: callee-of:0x517ab30
 * Body:  [[04a89150, 04a89278] [04a89280, 04a892cb] [04a892d0, 04a8939b] [04a893a0, 04a8950e] [04a89510, 04a89661] [04a89670, 04a89752] [04a89760, 04a897f5] [04a89800, 04a8986e] [04a89870, 04a898fe] [04a89900, 04a89fa6]]
 * Ghidra: FUN_04a89150
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a89150(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 int *param_5,long *param_6,uint param_7,undefined8 param_8,undefined8 param_9)

{
  undefined **ppuVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  double dVar39;
  float fStack_1aa4;
  float fStack_1a9c;
  float fStack_1a98;
  undefined8 uStack_1a80;
  float fStack_1a78;
  int iStack_1a74;
  int *piStack_1a70;
  int iStack_1a68;
  int iStack_1a64;
  ulong uStack_1a60;
  undefined1 auStack_1a58 [16];
  uint uStack_1a44;
  int iStack_1a40;
  uint uStack_1a3c;
  int iStack_1a38;
  float fStack_1a34;
  float fStack_1a30;
  float fStack_1a2c;
  undefined1 auStack_1a28 [16];
  undefined1 auStack_1a18 [16];
  undefined1 auStack_1a08 [16];
  long *plStack_19f0;
  undefined8 *puStack_19e8;
  int *piStack_19e0;
  undefined1 auStack_19d8 [16];
  undefined1 auStack_19c8 [8];
  float fStack_19c0;
  float fStack_19bc;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  ulong uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  float fStack_1980;
  undefined1 auStack_1978 [16];
  undefined8 uStack_1968;
  float *pfStack_1960;
  float fStack_1958;
  float fStack_1954;
  float fStack_1950;
  float fStack_194c;
  undefined1 auStack_1948 [16];
  uint uStack_1934;
  undefined *puStack_1930;
  undefined *puStack_1928;
  uint uStack_1920;
  uint uStack_191c;
  uint auStack_1918 [623];
  undefined8 uStack_f5c;
  undefined4 uStack_f54;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined1 uStack_f40;
  undefined8 uStack_f38;
  undefined *puStack_f30;
  undefined *puStack_f28;
  uint uStack_f20;
  uint uStack_f1c;
  uint auStack_f18 [623];
  undefined8 uStack_55c;
  undefined4 uStack_554;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined **ppuStack_538;
  float afStack_530 [128];
  float afStack_330 [192];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar34 [16];
  
  lVar11 = param_6[0x13f];
  if (*(char *)(lVar11 + 0x9e7) == '\x01') {
    *(uint *)(lVar11 + 8) = param_7;
    *(undefined2 *)(lVar11 + 0x9e4) = 0;
    *(undefined4 *)(lVar11 + 0x9d4) = 0;
    *(undefined8 *)(lVar11 + 0x9d8) = 0;
    *(uint *)(lVar11 + 0xc) = param_7;
    lVar12 = 5;
    uVar13 = param_7;
    while( true ) {
      uVar15 = ((ulong)((uVar13 >> 0x1e ^ uVar13) * 0x6c078965) + lVar12) - 4;
      uVar13 = (uint)uVar15;
      *(uint *)(lVar11 + -4 + lVar12 * 4) = uVar13;
      if (lVar12 == 0x191) break;
      uVar13 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar13) * 0x6c078965 + (int)lVar12) - 3;
      *(uint *)(lVar11 + lVar12 * 4) = uVar13;
      lVar12 = lVar12 + 2;
    }
    *(undefined8 *)(lVar11 + 0x9cc) = 0x18e00000270;
  }
  piStack_1a70 = param_3;
  puStack_19e8 = param_1;
  uStack_1998 = param_2;
  uStack_1990 = param_4;
  iVar3 = (**(code **)(*param_6 + 0x10))(param_6);
  uStack_1a44 = iVar3 - (iVar3 >> 0x1f) | 1;
  iVar3 = (**(code **)(*param_6 + 0x10))(param_6);
  uStack_1a3c = iVar3 - (iVar3 >> 0x1f) | 1;
  iVar3 = piStack_1a70[1];
  uVar13 = *piStack_1a70 - 8;
  plStack_19f0 = param_6;
  piStack_19e0 = param_5;
  do {
    uStack_19a0 = (ulong)uVar13;
    iStack_1a38 = uVar13 * uStack_1a44;
    uVar4 = iVar3 - 8;
    iStack_1a40 = uVar13 << 4;
    do {
      uStack_1a60 = (ulong)uVar4;
      lVar11 = param_6[0x13f];
      if (*(char *)(lVar11 + 0x9e7) == '\x01') {
        uVar13 = uVar4 * uStack_1a3c + iStack_1a38 ^ param_7;
        *(uint *)(lVar11 + 8) = uVar13;
        *(undefined2 *)(lVar11 + 0x9e4) = 0;
        *(undefined4 *)(lVar11 + 0x9d4) = 0;
        *(undefined8 *)(lVar11 + 0x9d8) = 0;
        *(uint *)(lVar11 + 0xc) = uVar13;
        lVar12 = 5;
        while( true ) {
          uVar15 = ((ulong)((uVar13 >> 0x1e ^ uVar13) * 0x6c078965) + lVar12) - 4;
          uVar13 = (uint)uVar15;
          *(uint *)(lVar11 + -4 + lVar12 * 4) = uVar13;
          if (lVar12 == 0x191) break;
          uVar13 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar13) * 0x6c078965 + (int)lVar12) - 3;
          *(uint *)(lVar11 + lVar12 * 4) = uVar13;
          lVar12 = lVar12 + 2;
        }
        *(undefined8 *)(lVar11 + 0x9cc) = 0x18e00000270;
      }
      iVar3 = (**(code **)(*param_6 + 0x18))(param_6,param_5[3]);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*param_6 + 0x18))(param_6,0x10);
        if (*(char *)((long)param_5 + 10) == '\x01') {
          iVar5 = (**(code **)(*param_6 + 0x18))(param_6,0x3a);
          iVar5 = iVar5 + *param_5 + 10;
          (**(code **)(*param_6 + 0x48))(param_6,1);
        }
        else {
          iVar5 = (**(code **)(*param_6 + 0x18))(param_6,0x28);
          iVar5 = (**(code **)(*param_6 + 0x18))(param_6,iVar5 + 8);
          iVar5 = iVar5 + *param_5 + 0x14;
        }
        (**(code **)(*param_6 + 0x48))(param_6,1);
        iVar6 = (**(code **)(*param_6 + 0x18))(param_6,0x10);
        auVar24._0_8_ = (**(code **)(*param_6 + 0x30))(param_6);
        auVar24._8_8_ = extraout_XMM0_Qb;
        auStack_1a58._4_12_ = auVar24._4_12_;
        auStack_1a58._0_4_ = (float)auVar24._0_8_ * _DAT_01198b3c;
        auVar25._0_8_ = (**(code **)(*param_6 + 0x30))(param_6);
        auVar25._8_8_ = extraout_XMM0_Qb_00;
        auStack_1a18._4_12_ = auVar25._4_12_;
        auStack_1a18._0_4_ = ((float)auVar25._0_8_ + _DAT_01198780) * _DAT_01198630;
        fVar22 = (float)(**(code **)(*param_6 + 0x30))(param_6);
        fVar23 = (float)(**(code **)(*param_6 + 0x30))(param_6);
        fStack_1aa4 = fVar22 * _DAT_01198af0 + fVar23 * _DAT_01198af0;
        if ((*(char *)((long)puStack_19e8 + 10) != '\x01') ||
           (fVar22 = (float)(**(code **)(*param_6 + 0x30))(param_6), _DAT_01198844 <= fVar22)) {
          fStack_1a9c = _DAT_011987f8;
          iVar16 = (int)uStack_1a60;
        }
        else {
          iVar16 = (int)uStack_1a60;
          fStack_1a9c = _DAT_011987f8;
          if (*(char *)((long)param_5 + 9) == '\x01') {
            fStack_1aa4 = fStack_1aa4 + fStack_1aa4;
            fStack_1a9c = _DAT_01198850;
          }
        }
        auStack_1a58._0_4_ = (float)auStack_1a58._0_4_ + (float)auStack_1a58._0_4_;
        uStack_1a80 = CONCAT44((float)iVar5,(float)(iVar3 + iStack_1a40));
        fStack_1a78 = (float)(iVar6 + iVar16 * 0x10);
        iVar3 = *piStack_1a70;
        iVar5 = piStack_1a70[1];
        uStack_1988 = uStack_1a80;
        fStack_1980 = fStack_1a78;
        uVar13 = (**(code **)(*plStack_19f0 + 0x10))();
        uVar19 = (ulong)uVar13;
        puStack_1930 = &UNK_0f147b18;
        puStack_1928 = &UNK_0f5356d0;
        uStack_f48 = 0x100000000000000;
        uStack_f54 = 0;
        uStack_f50 = 0;
        lVar11 = 7;
        uVar15 = uVar19;
        while( true ) {
          uVar15 = ((ulong)(((uint)(uVar15 >> 0x1e) ^ (uint)uVar15) * 0x6c078965) + lVar11) - 6;
          uVar4 = (uint)uVar15;
          (&uStack_1934)[lVar11] = uVar4;
          if (lVar11 == 0x193) break;
          uVar4 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar4) * 0x6c078965 + (int)lVar11) - 5;
          uVar15 = (ulong)uVar4;
          *(uint *)((long)&puStack_1930 + lVar11 * 4) = uVar4;
          lVar11 = lVar11 + 2;
        }
        uStack_f5c = 0x18e00000270;
        uStack_f40 = 1;
        uStack_f38 = &puStack_1928;
        uStack_1920 = uVar13;
        uStack_191c = uVar13;
        uVar4 = func_0x0ee4a030(uStack_f38,0);
        func_0x0eee2dd0(afStack_530 + 1,0,0x4fc);
        puStack_f30 = &UNK_0f147b18;
        puStack_f28 = &UNK_0f5356d0;
        uStack_548 = 0x100000000000000;
        uStack_554 = 0;
        uStack_550 = 0;
        lVar11 = 7;
        while( true ) {
          uVar15 = ((ulong)(((uint)(uVar19 >> 0x1e) ^ (uint)uVar19) * 0x6c078965) + lVar11) - 6;
          uVar17 = (uint)uVar15;
          *(uint *)((long)&uStack_f38 + lVar11 * 4 + 4) = uVar17;
          if (lVar11 == 0x193) break;
          uVar17 = ((int)lVar11 + ((uint)(uVar15 >> 0x1e) & 3 ^ uVar17) * 0x6c078965) - 5;
          uVar19 = (ulong)uVar17;
          *(uint *)((long)&puStack_f30 + lVar11 * 4) = uVar17;
          lVar11 = lVar11 + 2;
        }
        uStack_55c = 0x18e00000270;
        uStack_540 = 1;
        ppuStack_538 = &puStack_f28;
        uStack_f20 = uVar13;
        uStack_f1c = uVar13;
        fVar22 = (float)(**(code **)(puStack_1930 + 0x30))(&puStack_1930);
        fVar23 = (float)(**(code **)(puStack_1930 + 0x30))(&puStack_1930);
        fStack_1a98 = fVar23 * fVar22 + _DAT_011983f0;
        afStack_530[0] = fStack_1a98 * fStack_1a98;
        lVar11 = 1;
        do {
          iVar6 = (**(code **)(puStack_1930 + 0x18))(&puStack_1930,3);
          if (iVar6 == 0) {
            fVar22 = (float)(**(code **)(puStack_1930 + 0x30))(&puStack_1930);
            fVar23 = (float)(**(code **)(puStack_1930 + 0x30))(&puStack_1930);
            fStack_1a98 = fVar23 * fVar22 + _DAT_011983f0;
          }
          afStack_530[lVar11] = fStack_1a98 * fStack_1a98;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x80);
        auStack_1978 = ZEXT416((uint)(float)(int)(iVar3 << 4 | 8));
        lVar11 = 0x80;
        do {
          iVar3 = (**(code **)(puStack_f30 + 0x18))(&puStack_f30,3);
          if (iVar3 == 0) {
            fVar22 = (float)(**(code **)(puStack_f30 + 0x30))(&puStack_f30);
            fVar23 = (float)(**(code **)(puStack_f30 + 0x30))(&puStack_f30);
            fStack_1a98 = fVar23 * fVar22 + _DAT_011983f0;
          }
          afStack_530[lVar11] = fStack_1a98 * fStack_1a98;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x140);
        fStack_194c = (float)(int)(iVar5 << 4 | 8);
        auStack_1948 = ZEXT416((uint)fStack_194c);
        iStack_1a74 = 0x78 - (uVar4 / 0x1e + uVar4 / 0x1e + (uVar4 / 0x1e) * -0x20 + uVar4);
        fStack_1a2c = (float)iStack_1a74;
        fStack_1a30 = fStack_1aa4 + _DAT_01198724 + _DAT_01198634;
        fStack_1a30 = fStack_1a30 * fStack_1a30;
        fStack_1958 = (float)auStack_1978._0_4_ + _DAT_014e9170;
        fStack_1954 = (float)auStack_1978._0_4_ + _UNK_014e9174;
        fStack_1950 = fStack_194c + _UNK_014e9178;
        fStack_194c = fStack_194c + _UNK_014e917c;
        uStack_19b8 = 0;
        uStack_19b0 = 0;
        iStack_1a68 = 0;
        iVar3 = 1;
        iStack_1a64 = iStack_1a74;
        do {
          fVar22 = (float)func_0x0eee3830(((float)(iVar3 + -1) * _DAT_01198b3c) / fStack_1a2c);
          auStack_1a28._0_4_ = fVar22 * fStack_1aa4 + _DAT_0119858c;
          uVar13 = func_0x0ee4a030(uStack_f38,0);
          uVar7 = func_0x0ee4a030(uStack_f38);
          auStack_19d8._0_4_ = uVar7;
          fVar22 = (float)func_0x0eee3810();
          uVar7 = func_0x0eee3830();
          auStack_19c8._0_4_ = uVar7;
          fVar23 = (float)func_0x0eee3810();
          uStack_1a80 = CONCAT44((float)auStack_19c8._0_4_ + uStack_1a80._4_4_,
                                 fVar23 * fVar22 + (float)uStack_1a80);
          fVar23 = (float)func_0x0eee3830();
          ppuVar1 = uStack_f38;
          fStack_1a78 = fVar23 * fVar22 + fStack_1a78;
          auStack_1a18._0_4_ = (float)auStack_1a18._0_4_ * _DAT_01198c10;
          fVar22 = (float)uStack_19b8 * _DAT_014e36e0;
          fVar23 = uStack_19b8._4_4_ * _UNK_014e36e4;
          fVar30 = (float)uStack_19b0 * _UNK_014e36e8;
          fVar31 = uStack_19b0._4_4_ * _UNK_014e36ec;
          uVar7 = func_0x0ee4a030(uStack_f38);
          uVar8 = func_0x0ee4a030(ppuVar1);
          uVar9 = func_0x0ee4a030(uStack_f38);
          ppuVar1 = uStack_f38;
          uVar4 = func_0x0ee4a030(uStack_f38);
          uVar17 = func_0x0ee4a030(ppuVar1);
          uVar10 = func_0x0ee4a030(uStack_f38);
          auVar26._4_4_ = 0;
          auVar26._0_4_ = uVar4;
          auVar26._8_4_ = uVar7;
          auVar26._12_4_ = 0;
          dVar38 = (double)DAT_014e81e0;
          dVar39 = DAT_014e81e0._8_8_;
          auVar33._4_4_ = 0;
          auVar33._0_4_ = uVar17;
          auVar33._8_4_ = uVar8;
          auVar33._12_4_ = 0;
          auVar36._4_4_ = 0;
          auVar36._0_4_ = uVar10;
          auVar36._8_4_ = uVar9;
          auVar36._12_4_ = 0;
          auStack_19c8._0_4_ =
               (float)((SUB168(auVar36 | _DAT_014e81e0,0) - dVar38) * _DAT_014e6cc0) *
               ((float)((SUB168(auVar26 | _DAT_014e81e0,0) - dVar38) * _DAT_014e6cc0) -
               (float)((SUB168(auVar33 | _DAT_014e81e0,0) - dVar38) * _DAT_014e6cc0)) *
               _DAT_014e8cf0;
          auStack_19c8._4_4_ =
               (float)((SUB168(auVar36 | _DAT_014e81e0,8) - dVar39) * _UNK_014e6cc8) *
               ((float)((SUB168(auVar26 | _DAT_014e81e0,8) - dVar39) * _UNK_014e6cc8) -
               (float)((SUB168(auVar33 | _DAT_014e81e0,8) - dVar39) * _UNK_014e6cc8)) *
               _UNK_014e8cf4;
          fStack_19c0 = _UNK_014e8cf8 * 0.0;
          fStack_19bc = _UNK_014e8cfc * 0.0;
          uVar15 = func_0x0ee4a030(uStack_f38);
          if ((uVar15 & 3) != 0) {
            param_5 = piStack_19e0;
            param_6 = plStack_19f0;
            if (fStack_1a30 <
                (((float)uStack_1a80 - (float)auStack_1978._0_4_) *
                 ((float)uStack_1a80 - (float)auStack_1978._0_4_) +
                (fStack_1a78 - (float)auStack_1948._0_4_) *
                (fStack_1a78 - (float)auStack_1948._0_4_)) - (float)iStack_1a74 * (float)iStack_1a74
               ) break;
            fVar37 = ((float)((double)uVar13 * _DAT_014f0898) * _DAT_01198630 + _DAT_01198aa0) *
                     (float)auStack_1a28._0_4_;
            fVar32 = (float)((uint)fVar37 ^ _DAT_014e9ac0) + (float)((uint)fVar37 ^ _DAT_014e9ac0);
            iVar5 = -(uint)(fVar37 + fVar37 + fStack_1958 < (float)uStack_1a80);
            iVar6 = -(uint)(fVar37 + fVar37 + fStack_1950 < fStack_1a78);
            auVar35._4_4_ = iVar6;
            auVar35._0_4_ = iVar5;
            auVar35._8_4_ = iVar6;
            auVar35._12_4_ = -(uint)(fStack_1a78 < fVar32 + fStack_194c);
            auVar34._8_8_ = auVar35._8_8_;
            auVar34._4_4_ = -(uint)((float)uStack_1a80 < fVar32 + fStack_1954);
            auVar34._0_4_ = iVar5;
            iVar5 = movmskps(uVar13,auVar34);
            if (iVar5 == 0) {
              fVar32 = ((float)((double)(uint)auStack_19d8._0_4_ * _DAT_014f0898) * _DAT_01198630 +
                       _DAT_01198aa0) * (float)auStack_1a28._0_4_ * fStack_1a9c;
              auStack_1a08 = ZEXT416((uint)(float)uStack_1a80);
              auStack_1a28 = ZEXT416((uint)fVar37);
              auStack_19d8 = ZEXT416((uint)fStack_1a78);
              fVar37 = (float)func_0x0eee4390((float)uStack_1a80 - fVar37);
              iVar5 = piStack_1a70[1];
              fStack_1a34 = (float)(*piStack_1a70 << 4);
              iVar16 = (int)((fVar37 - fStack_1a34) + _DAT_011985d4);
              auVar27._4_12_ = auStack_1a08._4_12_;
              auVar27._0_4_ = auStack_1a08._0_4_ + (float)auStack_1a28._0_4_;
              fVar37 = (float)func_0x0eee4390(auVar27._0_8_);
              iVar18 = (int)((fVar37 - fStack_1a34) + _DAT_011983f0);
              auStack_1a08._0_4_ = uStack_1a80._4_4_;
              fVar37 = (float)func_0x0eee4390(uStack_1a80._4_4_ - fVar32);
              iVar20 = (int)(fVar37 + _DAT_011985d4);
              fVar32 = (float)func_0x0eee4390((float)auStack_1a08._0_4_ + fVar32);
              iVar21 = (int)(fVar32 + _DAT_011983f0);
              auVar28._4_12_ = auStack_19d8._4_12_;
              auVar28._0_4_ = auStack_19d8._0_4_ - (float)auStack_1a28._0_4_;
              fVar32 = (float)func_0x0eee4390(auVar28._0_8_);
              auStack_1a08._0_4_ = (float)(iVar5 << 4);
              iVar5 = (int)((fVar32 - (float)(iVar5 << 4)) + _DAT_011985d4);
              auVar29._4_12_ = auStack_19d8._4_12_;
              auVar29._0_4_ = auStack_19d8._0_4_ + (float)auStack_1a28._0_4_;
              fVar32 = (float)func_0x0eee4390(auVar29._0_8_);
              iVar6 = (int)((fVar32 - (float)auStack_1a08._0_4_) + _DAT_011983f0);
              if (iVar16 < 1) {
                iVar16 = 0;
              }
              if (0xf < iVar18) {
                iVar18 = 0x10;
              }
              iVar14 = 1;
              if (1 < iVar21) {
                iVar14 = iVar21;
              }
              if (piStack_19e0[1] < iVar21) {
                iVar14 = piStack_19e0[1];
              }
              iVar21 = 1;
              if (1 < iVar20) {
                iVar21 = iVar20;
              }
              if (iVar14 < iVar20) {
                iVar21 = iVar14;
              }
              if (iVar5 < 1) {
                iVar5 = 0;
              }
              if (0xf < iVar6) {
                iVar6 = 0x10;
              }
              uStack_1968 = 0x140;
              pfStack_1960 = afStack_530;
              cVar2 = (**(code **)*puStack_19e8)
                                (puStack_19e8,uStack_1998,uStack_1990,piStack_19e0,&puStack_1930,
                                 piStack_1a70,&uStack_1a80,&uStack_1988,iVar16,iVar18,iVar21,iVar14,
                                 iVar5,iVar6,0x140,pfStack_1960,param_8,param_9);
              param_5 = piStack_19e0;
              param_6 = plStack_19f0;
              if (cVar2 == '\0') break;
            }
          }
          param_5 = piStack_19e0;
          param_6 = plStack_19f0;
          if (iStack_1a64 <= iVar3) break;
          iStack_1a68 = iStack_1a68 + 1;
          auStack_1a18._0_4_ = (float)auStack_1a18._0_4_ + uStack_19b8._4_4_ * _DAT_01198844;
          auStack_1a58._0_4_ = (float)auStack_1a58._0_4_ + (float)uStack_19b8 * _DAT_01198844;
          iVar3 = iVar3 + 1;
          iStack_1a74 = iStack_1a74 + -1;
          uStack_19b8 = CONCAT44((float)auStack_19c8._4_4_ + fVar23,
                                 (float)auStack_19c8._0_4_ + fVar22);
          uStack_19b0 = CONCAT44(fStack_19bc + fVar31,fStack_19c0 + fVar30);
        } while( true );
      }
      uVar4 = (int)uStack_1a60 + 1;
      iVar3 = piStack_1a70[1];
    } while ((int)uStack_1a60 < iVar3 + 8);
    uVar13 = (int)uStack_19a0 + 1;
    if (*piStack_1a70 + 8 <= (int)uStack_19a0) {
      return;
    }
  } while( true );
}



/* ---- referenced strings ----
 * 0x1198c10  333?
 */
