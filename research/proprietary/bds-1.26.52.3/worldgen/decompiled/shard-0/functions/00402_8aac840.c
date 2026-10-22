/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8bac840 (ELF vaddr 0x8aac840)
 * Label: caller-of-callee
 * Body:  [[08bac840, 08bacb66] [08bacb70, 08bacc83] [08bacc90, 08bad4c2] [08bad4d0, 08bad621] [08bad660, 08bad73c] [08bad74b, 08bad77a] [08bad799, 08bad7e8] [08bad7fa, 08bad822] [08bad834, 08bad85c] [08bad86e, 08bad896] [08bad8a8, 08bad8f7] [08bad909, 08bad97c] [08bad9d3, 08bada03]]
 * Ghidra: FUN_08bac840
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08bac840(undefined8 param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  bool bVar23;
  ulong uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  byte *pbStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [8];
  char cStack_200;
  byte bStack_1f8;
  undefined1 uStack_1f7;
  undefined2 uStack_1f6;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 *puStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined1 uStack_198;
  undefined2 uStack_197;
  undefined1 uStack_195;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined8 uStack_178;
  byte bStack_168;
  undefined4 uStack_167;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined8 uStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_50;
  ulong uStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  if (*(char *)(param_2 + 0x70) == '\x01') {
    auStack_208[0] = 0;
    cStack_200 = '\0';
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plVar8 = _DAT_0f5523a0;
    pbVar5 = _DAT_0f552398;
    if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
      uStack_248 = 0;
      uStack_240 = (ulong)uStack_240._1_7_ << 8;
      FUN_0eee02f0(0xf5522b8);
    }
    else {
      bVar1 = 1;
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
        bVar1 = *pbVar5;
      }
      uStack_248 = 0xf5522b8;
      uStack_240 = CONCAT71(uStack_240._1_7_,1);
      pbStack_238 = pbVar5;
      plStack_230 = plVar8;
      uStack_228 = _DAT_0f5523a8;
      if ((bVar1 & 1) != 0) {
        func_0x0d77c290(&uStack_1a8);
        if (cStack_200 == (char)uStack_1a0) {
          if (cStack_200 != '\0') {
            FUN_04167a70(auStack_208,&uStack_1a8);
          }
        }
        else if (cStack_200 == '\0') {
          func_0x04167a20(auStack_208,&uStack_1a8);
          cStack_200 = '\x01';
        }
        else {
          func_0x04167a40();
          cStack_200 = '\0';
        }
        if ((char)uStack_1a0 == '\x01') {
          func_0x04167a40(&uStack_1a8);
        }
      }
      pbStack_238 = (byte *)0x0;
      plStack_230 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar10 = plVar8 + 1;
        lVar16 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
        plVar8 = plStack_230;
        uStack_228 = 0;
        if (plStack_230 != (long *)0x0) {
          LOCK();
          plVar10 = plStack_230 + 1;
          lVar16 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (lVar16 == 0) {
            (**(code **)(*plStack_230 + 0x10))(plStack_230);
            func_0x0412c2d0(plVar8);
          }
        }
      }
    }
    if ((char)uStack_240 == '\x01') {
      FUN_0eee02f0(uStack_248);
    }
    plVar8 = *(long **)(param_2 + 0x38);
    plStack_40 = (long *)(param_2 + 0x40);
    lStack_50 = param_2;
    if (plVar8 != plStack_40) {
      do {
        plStack_b8 = plVar8 + 7;
        lVar16 = (long)plVar8 + 0x39;
        bVar1 = *(byte *)(plVar8 + 7);
        uStack_250 = (ulong)bVar1;
        bVar23 = (bVar1 & 1) == 0;
        uStack_1d8 = plVar8[9];
        lVar21 = uStack_1d8;
        if (bVar23) {
          lVar21 = lVar16;
        }
        uStack_1e0 = plVar8[8];
        uVar17 = (ulong)(bVar1 >> 1);
        if (!bVar23) {
          uVar17 = uStack_1e0;
        }
        lVar9 = 0;
        while (lVar15 = uVar17 - lVar9, 10 < lVar15) {
          lVar9 = lVar9 + lVar21;
          while( true ) {
            plVar10 = (long *)func_0x0eee2ef0(lVar9,0x7e,lVar15 + -10);
            if (plVar10 == (long *)0x0) goto LAB_08bacac0;
            if (*(long *)((long)plVar10 + 3) == 0x7e4b41455242454e && *plVar10 == 0x455242454e494c7e
               ) break;
            lVar9 = (long)plVar10 + 1;
            lVar15 = (long)(uVar17 + lVar21) - lVar9;
            if (lVar15 < 0xb) goto LAB_08bacac0;
          }
          if ((plVar10 == (long *)(uVar17 + lVar21)) ||
             (uVar22 = (long)plVar10 - lVar21, uVar22 == 0xffffffffffffffff)) break;
          func_0x0412e660(plStack_b8,uVar22,0xb,&UNK_018faff1,1);
          lVar9 = uVar22 + 1;
          bVar1 = *(byte *)(plVar8 + 7);
          uStack_250 = (ulong)bVar1;
          bVar23 = (bVar1 & 1) == 0;
          uStack_1d8 = plVar8[9];
          lVar21 = uStack_1d8;
          if (bVar23) {
            lVar21 = lVar16;
          }
          uStack_1e0 = plVar8[8];
          uVar17 = (ulong)(bVar1 >> 1);
          if (!bVar23) {
            uVar17 = uStack_1e0;
          }
          if (uVar17 <= uVar22) break;
        }
LAB_08bacac0:
        uVar17 = uStack_250 >> 1;
        lVar21 = lVar16;
        if ((uStack_250 & 1) != 0) {
          uVar17 = uStack_1e0;
          lVar21 = uStack_1d8;
        }
        uVar22 = 0;
        lStack_c0 = lVar16;
        while (lVar16 = uVar17 - uVar22, 0xd < lVar16) {
          plVar10 = (long *)(lVar21 + uVar17);
          pcVar20 = (char *)(uVar22 + lVar21);
          while( true ) {
            plVar11 = (long *)func_0x0eee2ef0(pcVar20,0x7e,lVar16 + -0xd);
            if (plVar11 == (long *)0x0) goto LAB_08bad4d0;
            if (*(long *)((long)plVar11 + 6) == 0x3d454d4954455441 && *plVar11 == 0x5441445f4354557e
               ) break;
            pcVar20 = (char *)((long)plVar11 + 1);
            lVar16 = (long)plVar10 - (long)pcVar20;
            if (lVar16 < 0xe) goto LAB_08bad4d0;
          }
          if ((plVar11 == plVar10) || (lVar16 = (long)plVar11 - lVar21, lVar16 == -1)) break;
          uStack_48 = lVar16 + 0xe;
          uVar22 = lVar16 + 0xf;
          lVar9 = uVar17 - uVar22;
          if ((uVar22 <= uVar17) && (lVar9 != 0 && (long)uVar22 <= (long)uVar17)) {
            pcVar20 = (char *)(uVar22 + lVar21);
            while (plVar11 = (long *)func_0x0eee2ef0(pcVar20,0x7e,lVar9), uVar17 = uStack_48,
                  plVar11 != (long *)0x0) {
              if ((char)*plVar11 == '~') {
                if (plVar11 != plVar10) {
                  lVar21 = (long)plVar11 - lVar21;
                  bStack_1f8 = 0;
                  uStack_1f7 = 0;
                  if (lVar21 != -1) {
                    uVar22 = uStack_1e0;
                    if ((uStack_250 & 1) == 0) {
                      uVar22 = (ulong)(byte)((uint)uStack_250 >> 1);
                    }
                    if (uVar22 < uStack_48) {
LAB_08bad5ff:
                      uVar13 = func_0x04882ee0();
                      func_0x041084d6(&DAT_0f5ea4a0);
                      while( true ) {
                        if ((uStack_f8 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_e8,uStack_f8 & 0xfffffffffffffffe);
                        }
                        if ((uStack_118 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_108,uStack_118 & 0xfffffffffffffffe);
                        }
                        if ((uStack_1c0 & 1) != 0) {
                          thunk_FUN_0ee326a0(lStack_1b0,uStack_1c0 & 0xfffffffffffffffe);
                        }
                        if ((bStack_b0 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_a0,
                                             CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
                        }
                        if ((bStack_168 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_158,
                                             CONCAT17(uStack_161,
                                                      CONCAT16(uStack_162,
                                                               CONCAT15(uStack_163,
                                                                        CONCAT41(uStack_167,
                                                                                 bStack_168)))) &
                                             0xfffffffffffffffe);
                        }
                        if ((uStack_138 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_128,uStack_138 & 0xfffffffffffffffe);
                        }
                        if ((bStack_80 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_70,
                                             CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
                        }
                        if ((bStack_98 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_88,
                                             CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
                        }
                        if ((bStack_150 & 1) != 0) {
                          thunk_FUN_0ee326a0(uStack_140,
                                             CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
                        }
                        if ((bStack_1f8 & 1) != 0) {
                          thunk_FUN_0ee326a0(puStack_1e8,
                                             CONCAT44(uStack_1f4,
                                                      CONCAT22(uStack_1f6,
                                                               CONCAT11(uStack_1f7,bStack_1f8))) &
                                             0xfffffffffffffffe);
                        }
                        if (cStack_200 == '\x01') break;
                        func_0x0eee2d70(uVar13);
                        thunk_FUN_0ee326a0(uStack_c8,uStack_d8 & 0xfffffffffffffffe);
                        if ((uStack_248 & 1) == 0) {
                          func_0x0488b480(&uStack_68);
                        }
                        else {
                          thunk_FUN_0ee326a0(pbStack_238,uStack_248 & 0xfffffffffffffffe);
                          func_0x0488b480(&uStack_68);
                        }
                        if ((uStack_1a8 & 1) != 0) {
                          thunk_FUN_0ee326a0(CONCAT44(uStack_194,
                                                      CONCAT13(uStack_195,
                                                               CONCAT21(uStack_197,uStack_198))),
                                             CONCAT44(uStack_1a4,uStack_1a8) & 0xfffffffffffffffe);
                        }
                      }
                      func_0x04167a40(auStack_208);
                      func_0x0eee2d70(uVar13);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if ((uStack_250 & 1) == 0) {
                      uStack_1d8 = lStack_c0;
                    }
                    uVar18 = lVar21 - uStack_48;
                    if (uVar22 - uStack_48 < lVar21 - uStack_48) {
                      uVar18 = uVar22 - uStack_48;
                    }
                    if (0xfffffffffffffff7 < uVar18) {
                      func_0x04882e30();
                      goto LAB_08bad5ff;
                    }
                    if (uVar18 < 0x17) {
                      uStack_248 = CONCAT71(uStack_248._1_7_,(char)uVar18 * '\x02');
                      lVar9 = (long)&uStack_248 + 1;
                      if (uVar18 != 0) goto LAB_08bacd9f;
                    }
                    else {
                      uVar22 = (uVar18 | 7) + 1;
                      if ((uVar18 | 7) == 0x17) {
                        uVar22 = 0x1a;
                      }
                      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                      if (lVar9 == 0) {
                        func_0x0eec74c0(uVar22,0);
                      }
                      uStack_248 = uVar22 | 1;
                      uStack_240 = uVar18;
                      pbStack_238 = (byte *)lVar9;
LAB_08bacd9f:
                      func_0x0eee2ee0(lVar9,uStack_1d8 + uVar17,uVar18);
                    }
                    *(undefined1 *)(lVar9 + uVar18) = 0;
                    cVar6 = func_0x0ee14420(&uStack_248,&uStack_1a8,0,0);
                    uVar17 = 0;
                    if (cVar6 != '\0') {
                      uVar17 = CONCAT44(uStack_1a4,uStack_1a8);
                    }
                    if ((uStack_248 & 1) != 0) {
                      thunk_FUN_0ee326a0(pbStack_238,uStack_248 & 0xfffffffffffffffe);
                    }
                    bStack_150 = 0x10;
                    uStack_14f = 0x25207225207825;
                    uStack_148 = 0x5a;
                    uStack_147 = 0;
                    uStack_248 = 0;
                    pbStack_238 = (byte *)0x0;
                    uStack_220 = 0;
                    uStack_218 = 0;
                    uStack_240 = 0x100000000;
                    plStack_230 = (long *)0x1;
                    uStack_228 = 0xffffffff;
                    puVar19 = (uint *)&uStack_248;
                    uStack_1c0 = uVar17;
                    lVar9 = func_0x0eee3bb0(&uStack_1c0,puVar19);
                    if (lVar9 == 0) {
                      puVar19 = (uint *)&UNK_01e7a0d0;
                    }
                    uVar3 = puVar19[4];
                    uStack_1a8 = *puVar19;
                    uStack_1a4 = puVar19[1];
                    uStack_1a0 = puVar19[2];
                    uStack_19c = puVar19[3];
                    uStack_198 = (undefined1)uVar3;
                    uStack_197 = (undefined2)(uVar3 >> 8);
                    uStack_195 = (undefined1)(uVar3 >> 0x18);
                    uStack_194 = puVar19[5];
                    uStack_190 = puVar19[6];
                    uStack_18c = puVar19[7];
                    uStack_188 = puVar19[8];
                    uStack_184 = puVar19[9];
                    uStack_180 = puVar19[10];
                    uStack_17c = puVar19[0xb];
                    uStack_178 = *(undefined8 *)(puVar19 + 0xc);
                    func_0x0ee161c0(&bStack_98,&uStack_1a8,&bStack_150,auStack_208);
                    func_0x0b698dc0(&bStack_80,&bStack_98);
                    puVar12 = (ulong *)func_0x0412f8c0(&bStack_80,&UNK_012ee262,2);
                    uStack_128 = puVar12[2];
                    uStack_138 = *puVar12;
                    uStack_130 = puVar12[1];
                    *puVar12 = 0;
                    puVar12[1] = 0;
                    puVar12[2] = 0;
                    bStack_168 = 10;
                    uStack_163 = 0x58;
                    uStack_167 = 0x25207825;
                    uStack_162 = 0;
                    uStack_248 = 0;
                    pbStack_238 = (byte *)0x0;
                    uStack_220 = 0;
                    uStack_218 = 0;
                    uStack_240 = 0x100000000;
                    plStack_230 = (long *)0x1;
                    uStack_228 = 0xffffffff;
                    puVar19 = (uint *)&uStack_248;
                    uStack_38 = uVar17;
                    lVar9 = func_0x0eee3bc0(&uStack_38,puVar19);
                    if (lVar9 == 0) {
                      puVar19 = (uint *)&UNK_01e7a0d0;
                    }
                    uVar3 = puVar19[4];
                    uStack_1a8 = *puVar19;
                    uStack_1a4 = puVar19[1];
                    uStack_1a0 = puVar19[2];
                    uStack_19c = puVar19[3];
                    uStack_198 = (undefined1)uVar3;
                    uStack_197 = (undefined2)(uVar3 >> 8);
                    uStack_195 = (undefined1)(uVar3 >> 0x18);
                    uStack_194 = puVar19[5];
                    uStack_190 = puVar19[6];
                    uStack_18c = puVar19[7];
                    uStack_188 = puVar19[8];
                    uStack_184 = puVar19[9];
                    uStack_180 = puVar19[10];
                    uStack_17c = puVar19[0xb];
                    uStack_178 = *(undefined8 *)(puVar19 + 0xc);
                    func_0x0ee161c0(&bStack_b0,&uStack_1a8,&bStack_168,auStack_208);
                    func_0x0b698dc0(&uStack_1c0,&bStack_b0);
                    uVar17 = uStack_1c0 >> 1 & 0x7f;
                    lVar9 = (long)&uStack_1c0 + 1;
                    if ((uStack_1c0 & 1) != 0) {
                      uVar17 = uStack_1b8;
                      lVar9 = lStack_1b0;
                    }
                    puVar12 = (ulong *)func_0x0412f8c0(&uStack_138,lVar9,uVar17);
                    uStack_108 = puVar12[2];
                    uStack_118 = *puVar12;
                    uStack_110 = puVar12[1];
                    *puVar12 = 0;
                    puVar12[1] = 0;
                    puVar12[2] = 0;
                    puVar12 = (ulong *)func_0x0412f8c0(&uStack_118,&UNK_011d0654,1);
                    uStack_e8 = puVar12[2];
                    uStack_f8 = *puVar12;
                    uStack_f0 = puVar12[1];
                    *puVar12 = 0;
                    puVar12[1] = 0;
                    puVar12[2] = 0;
                    if ((DAT_0f5ea4a0 == '\0') &&
                       (iVar7 = func_0x04108328(&DAT_0f5ea4a0), iVar7 != 0)) {
                      func_0x08b670e0(&DAT_0f5ea138);
                      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
                      func_0x0410844d(&DAT_0f5ea4a0);
                    }
                    uStack_1a8 = CONCAT31((int3)_DAT_0125f04a,0x24);
                    uStack_1a4._1_3_ = (undefined3)_UNK_0125f04e;
                    uStack_1a4 = CONCAT31(uStack_1a4._1_3_,(char)((uint)_DAT_0125f04a >> 0x18));
                    uStack_1a0._1_3_ = (undefined3)_UNK_0125f052;
                    uStack_1a0 = CONCAT31(uStack_1a0._1_3_,(char)((uint)_UNK_0125f04e >> 0x18));
                    uStack_19c._1_3_ = (undefined3)_UNK_0125f056;
                    uStack_19c = CONCAT31(uStack_19c._1_3_,(char)((uint)_UNK_0125f052 >> 0x18));
                    uStack_198 = (undefined1)((uint)_UNK_0125f056 >> 0x18);
                    uStack_197 = 0x6374;
                    uStack_195 = 0;
                    uStack_68 = 0;
                    plStack_60 = (long *)0x0;
                    (**(code **)(_DAT_0f5ea138 + 0x90))
                              (&uStack_248,&DAT_0f5ea138,&uStack_1a8,&uStack_68);
                    uVar17 = uStack_248 >> 1 & 0x7f;
                    pbVar5 = (byte *)((long)&uStack_248 + 1);
                    if ((uStack_248 & 1) != 0) {
                      uVar17 = uStack_240;
                      pbVar5 = pbStack_238;
                    }
                    puVar12 = (ulong *)func_0x0412f8c0(&uStack_f8,pbVar5,uVar17);
                    uStack_c8 = puVar12[2];
                    uStack_d8 = *puVar12;
                    uStack_d0 = puVar12[1];
                    *puVar12 = 0;
                    puVar12[1] = 0;
                    puVar12[2] = 0;
                    plVar10 = (long *)func_0x0412f8c0(&uStack_d8,&UNK_012ba5df,1);
                    uVar4 = (undefined4)*plVar10;
                    lVar9 = *plVar10;
                    lVar15 = plVar10[1];
                    puVar14 = (undefined1 *)plVar10[2];
                    *plVar10 = 0;
                    plVar10[1] = 0;
                    plVar10[2] = 0;
                    if ((bStack_1f8 & 1) == 0) {
                      bStack_1f8 = (byte)uVar4;
                      uStack_1f7 = (undefined1)((uint)uVar4 >> 8);
                      uStack_1f6 = (undefined2)((uint)uVar4 >> 0x10);
                      uStack_1f4 = *(undefined4 *)((long)plVar10 + 4);
                      uStack_1f0 = (int)lVar15;
                      uStack_1ec = *(undefined4 *)((long)plVar10 + 0xc);
                    }
                    else {
                      uStack_1d8 = lVar9;
                      uStack_1d0 = (int)lVar15;
                      uStack_1cc = *(undefined4 *)((long)plVar10 + 0xc);
                      thunk_FUN_0ee326a0(puStack_1e8,
                                         CONCAT44(uStack_1f4,
                                                  CONCAT22(uStack_1f6,
                                                           CONCAT11(uStack_1f7,bStack_1f8))) &
                                         0xfffffffffffffffe);
                      bStack_1f8 = (byte)uStack_1d8;
                      uStack_1f7 = (undefined1)((ulong)uStack_1d8 >> 8);
                      uStack_1f6 = (undefined2)((ulong)uStack_1d8 >> 0x10);
                      uStack_1f4 = uStack_1d8._4_4_;
                      uStack_1f0 = uStack_1d0;
                      uStack_1ec = uStack_1cc;
                    }
                    puStack_1e8 = puVar14;
                    if ((uStack_d8 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_c8,uStack_d8 & 0xfffffffffffffffe);
                    }
                    plVar10 = plStack_60;
                    if ((uStack_248 & 1) != 0) {
                      thunk_FUN_0ee326a0(pbStack_238,uStack_248 & 0xfffffffffffffffe);
                      plVar10 = plStack_60;
                    }
                    plStack_60 = plVar10;
                    if (plVar10 != (long *)0x0) {
                      LOCK();
                      plVar11 = plVar10 + 1;
                      lVar9 = *plVar11;
                      *plVar11 = *plVar11 + -1;
                      UNLOCK();
                      if (lVar9 == 0) {
                        (**(code **)(*plVar10 + 0x10))(plVar10);
                        func_0x0412c2d0(plVar10);
                      }
                    }
                    if ((uStack_1a8 & 1) != 0) {
                      thunk_FUN_0ee326a0(CONCAT44(uStack_194,
                                                  CONCAT13(uStack_195,
                                                           CONCAT21(uStack_197,uStack_198))),
                                         CONCAT44(uStack_1a4,uStack_1a8) & 0xfffffffffffffffe);
                    }
                    if ((uStack_f8 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_e8,uStack_f8 & 0xfffffffffffffffe);
                    }
                    if ((uStack_118 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_108,uStack_118 & 0xfffffffffffffffe);
                    }
                    if ((uStack_1c0 & 1) != 0) {
                      thunk_FUN_0ee326a0(lStack_1b0,uStack_1c0 & 0xfffffffffffffffe);
                    }
                    if ((bStack_b0 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_a0,
                                         CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
                    }
                    if ((bStack_168 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_158,
                                         CONCAT17(uStack_161,
                                                  CONCAT16(uStack_162,
                                                           CONCAT15(uStack_163,
                                                                    CONCAT41(uStack_167,bStack_168))
                                                          )) & 0xfffffffffffffffe);
                    }
                    if ((uStack_138 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_128,uStack_138 & 0xfffffffffffffffe);
                    }
                    if ((bStack_80 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_70,
                                         CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
                    }
                    if ((bStack_98 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_88,
                                         CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
                    }
                    if ((bStack_150 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_140,
                                         CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
                    }
                    goto LAB_08bacca0;
                  }
                }
                break;
              }
              pcVar20 = (char *)((long)plVar11 + 1);
              lVar9 = (long)plVar10 - (long)pcVar20;
              if (lVar9 < 1) break;
            }
          }
          uStack_1f7 = 0;
          bStack_1f8 = 0;
          lVar21 = -1;
LAB_08bacca0:
          bVar23 = (bStack_1f8 & 1) == 0;
          puVar14 = puStack_1e8;
          if (bVar23) {
            puVar14 = &uStack_1f7;
          }
          uVar17 = (ulong)(bStack_1f8 >> 1);
          if (!bVar23) {
            uVar17 = CONCAT44(uStack_1ec,uStack_1f0);
          }
          func_0x0412e660(plStack_b8,lVar16,(lVar21 - lVar16) + 1,puVar14,uVar17);
          if ((bStack_1f8 & 1) == 0) {
            uVar22 = (ulong)(bStack_1f8 >> 1);
          }
          else {
            uVar22 = CONCAT44(uStack_1ec,uStack_1f0);
          }
          if ((bStack_1f8 & 1) != 0) {
            thunk_FUN_0ee326a0(puStack_1e8,
                               CONCAT44(uStack_1f4,
                                        CONCAT22(uStack_1f6,CONCAT11(uStack_1f7,bStack_1f8))) &
                               0xfffffffffffffffe);
          }
          uVar22 = uVar22 + lVar16;
          bVar1 = *(byte *)(plVar8 + 7);
          uStack_250 = (ulong)bVar1;
          bVar23 = (bVar1 & 1) == 0;
          uStack_1d8 = plVar8[9];
          lVar21 = uStack_1d8;
          if (bVar23) {
            lVar21 = lStack_c0;
          }
          uStack_1e0 = plVar8[8];
          uVar17 = (ulong)(bVar1 >> 1);
          if (!bVar23) {
            uVar17 = uStack_1e0;
          }
          if (uVar17 < uVar22) break;
        }
LAB_08bad4d0:
        plVar10 = (long *)plVar8[1];
        plVar11 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar11[2];
            bVar23 = plVar11 != (long *)*plVar8;
            plVar11 = plVar8;
          } while (bVar23);
        }
        else {
          do {
            plVar8 = plVar10;
            plVar10 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      } while (plVar8 != plStack_40);
    }
    param_2 = lStack_50;
    if (cStack_200 == '\x01') {
      func_0x04167a40(auStack_208);
      param_2 = lStack_50;
    }
  }
  *(undefined1 *)(param_2 + 0x70) = 0;
  return;
}



/* ---- referenced strings ----
 * 0x125f04a  date.time_zone_utc
 */
