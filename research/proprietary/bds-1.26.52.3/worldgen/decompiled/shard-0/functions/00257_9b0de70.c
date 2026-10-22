/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9c0de70 (ELF vaddr 0x9b0de70)
 * Label: caller-of-callee
 * Body:  [[09c0de70, 09c0df80] [09c0df90, 09c0e05a] [09c0e060, 09c0e07a] [09c0e080, 09c0e0f6] [09c0e100, 09c0e1a4] [09c0e1b0, 09c0e335] [09c0e340, 09c0e4e6] [09c0e4f0, 09c0e50b] [09c0e510, 09c0e5fb] [09c0e600, 09c0ecf5] [09c0ee4a, 09c0eef2]]
 * Ghidra: FUN_09c0de70
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09c0de70(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong ****ppppuVar3;
  byte *pbVar4;
  ulong ****ppppuVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong ****ppppuVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 extraout_RDX;
  byte bVar22;
  ulong ***pppuVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong ****ppppuVar26;
  bool bVar27;
  long lStack_298;
  long *plStack_290;
  long lStack_288;
  ulong uStack_280;
  ulong ****ppppuStack_278;
  ulong ****ppppuStack_270;
  ulong ***pppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong ***pppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong ***pppuStack_238;
  char cStack_230;
  ulong ****ppppuStack_228;
  ulong ****ppppuStack_220;
  ulong ***pppuStack_218;
  undefined1 auStack_210 [4];
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ulong ***pppuStack_200;
  ulong ****ppppuStack_1f8;
  ulong ****ppppuStack_1f0;
  ulong ****ppppuStack_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  ulong ***pppuStack_1d0;
  ulong ****ppppuStack_1c8;
  ulong ****ppppuStack_1c0;
  ulong ****ppppuStack_1b8;
  ulong ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte bStack_190;
  long lStack_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  byte bStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  long lStack_138;
  long *plStack_130;
  undefined1 auStack_128 [16];
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_280 = 0x9c0de97;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(&lStack_138,param_1 + 0x10);
  lStack_188 = lStack_138;
  plVar2 = plStack_130;
  if (lStack_138 == 0) goto joined_r0x09c0e95a;
  uStack_280 = 0x9c0debf;
  uVar16 = func_0x048648e0(param_2,&UNK_0141ce3d);
  uStack_280 = 0x9c0deca;
  cVar14 = func_0x04865470(uVar16);
  if (cVar14 == '\0') {
    pppuStack_268 = (ulong ***)_DAT_0f1dfa88;
    uStack_260 = (ulong ***)_UNK_0f1dfa90;
    ppppuStack_278 = _DAT_0f1dfa78;
    ppppuStack_270 = (ulong ****)_UNK_0f1dfa80;
    uStack_258 = (ulong ***)((ulong)uStack_258 & 0xffffffffffffff00);
    cStack_230 = '\0';
    ppppuStack_228 = (ulong ****)0x0;
    ppppuStack_220 = (ulong ****)0x0;
    pppuStack_218 = (ulong ***)0x0;
    uStack_280 = 0x9c0e6a9;
    func_0x0eee17a0(&ppppuStack_228,&ppppuStack_278,&ppppuStack_228,1);
    if ((cStack_230 == '\x01') && (((ulong)uStack_258 & 1) != 0)) {
      uStack_280 = 0x9c0e6ca;
      thunk_FUN_0ee326a0(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
    }
    uStack_118 = CONCAT44(uStack_118._4_4_,0x1f);
    ppppuStack_278 = (ulong ****)CONCAT44(ppppuStack_278._4_4_,0x1f);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    bStack_190 = 0;
    ppppuStack_1c8 = (ulong ****)CONCAT44(ppppuStack_1c8._4_4_,0x1f);
    ppppuStack_1c0 = ppppuStack_228;
    ppppuStack_1b8 = ppppuStack_220;
    pppuStack_1b0 = pppuStack_218;
    ppppuStack_270 = (ulong ****)0x0;
    pppuStack_268 = (ulong ***)0x0;
    uStack_260 = (ulong ***)0x0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_258 = (ulong ***)0x0;
    pppuStack_250 = (ulong ***)0x0;
    uStack_248 = 0;
    uStack_280 = 0x9c0e75c;
    func_0x09ba6380(&ppppuStack_278);
    puVar24 = &uStack_118;
LAB_09c0e86d:
    uStack_280 = 0x9c0e872;
    func_0x09ba6380(puVar24);
    uStack_260 = (ulong ***)CONCAT44(uStack_260._4_4_,0x165);
LAB_09c0e89d:
    pppuStack_268 = (ulong ***)0x1;
    ppppuStack_270 = (ulong ****)&UNK_0140f690;
    ppppuStack_278 = (ulong ****)0xa845da53ae52c6fc;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_280 = 0x9c0e8d6;
    func_0x09ba6b90(2,0x2d,&ppppuStack_1c8,&uStack_118,&ppppuStack_278);
    bVar22 = bStack_190;
    if ((uStack_118 & 1) != 0) {
      uStack_280 = 0x9c0e8f9;
      thunk_FUN_0ee326a0(uStack_108,uStack_118 & 0xfffffffffffffffe);
      bVar22 = bStack_190;
    }
  }
  else {
    uStack_280 = 0x9c0ded7;
    lVar17 = func_0x0417cc60();
    uStack_280 = 0x9c0dee4;
    iVar15 = func_0x04863e00(uVar16,0);
    *(long *)(lStack_188 + 0x1e8) = (long)iVar15 * 1000000000 + lVar17;
    uStack_280 = 0x9c0df0e;
    uVar16 = func_0x048648e0(param_2,&UNK_011dd6c5);
    uStack_280 = 0x9c0df19;
    cVar14 = func_0x04864260(uVar16);
    if (cVar14 != '\0') {
LAB_09c0e769:
      pppuStack_268 = (ulong ***)_DAT_0f1dfaa8;
      uStack_260 = (ulong ***)_UNK_0f1dfab0;
      ppppuStack_278 = _DAT_0f1dfa98;
      ppppuStack_270 = (ulong ****)_UNK_0f1dfaa0;
      uStack_258 = (ulong ***)((ulong)uStack_258 & 0xffffffffffffff00);
      cStack_230 = '\0';
      ppppuStack_228 = (ulong ****)0x0;
      ppppuStack_220 = (ulong ****)0x0;
      pppuStack_218 = (ulong ***)0x0;
      uStack_280 = 0x9c0e7b2;
      func_0x0eee17a0(&ppppuStack_228,&ppppuStack_278,&ppppuStack_228,1);
      if ((cStack_230 == '\x01') && (((ulong)uStack_258 & 1) != 0)) {
        uStack_280 = 0x9c0e7d3;
        thunk_FUN_0ee326a0(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
      }
      auStack_68[0] = 0x1e;
      ppppuStack_278 = (ulong ****)CONCAT44(ppppuStack_278._4_4_,0x1e);
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      bStack_190 = 0;
      ppppuStack_1c8 = (ulong ****)CONCAT44(ppppuStack_1c8._4_4_,0x1e);
      ppppuStack_1c0 = ppppuStack_228;
      ppppuStack_1b8 = ppppuStack_220;
      pppuStack_1b0 = pppuStack_218;
      ppppuStack_270 = (ulong ****)0x0;
      pppuStack_268 = (ulong ***)0x0;
      uStack_260 = (ulong ***)0x0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_258 = (ulong ***)0x0;
      pppuStack_250 = (ulong ***)0x0;
      uStack_248 = 0;
      uStack_280 = 0x9c0e865;
      func_0x09ba6380(&ppppuStack_278);
      puVar24 = (ulong *)auStack_68;
      goto LAB_09c0e86d;
    }
    uStack_280 = 0x9c0df29;
    cVar14 = func_0x04864270(uVar16);
    if (cVar14 == '\0') goto LAB_09c0e769;
    ppppuStack_1f8 = (ulong ****)0x0;
    ppppuStack_1f0 = (ulong ****)0x0;
    ppppuStack_1e8 = (ulong ****)0x0;
    uStack_280 = 0x9c0df58;
    func_0x04865530(auStack_180,uVar16);
    uStack_280 = 0x9c0df68;
    func_0x048655b0(auStack_148,uVar16);
    while( true ) {
      uStack_280 = 0x9c0dfb0;
      cVar14 = func_0x04862c80(auStack_180,auStack_148);
      if (cVar14 != '\0') break;
      uStack_280 = 0x9c0dfc5;
      uVar16 = func_0x04862b80(auStack_180);
      uStack_280 = 0x9c0dfd7;
      uVar18 = func_0x048648e0(uVar16,&UNK_013e90bb);
      ppppuStack_278 = (ulong ****)((ulong)ppppuStack_278 & 0xffffffffffff0000);
      uStack_280 = 0x9c0dff0;
      func_0x04863cb0(&uStack_1e0,uVar18,&ppppuStack_278);
      if (((ulong)ppppuStack_278 & 1) != 0) {
        uStack_280 = 0x9c0e008;
        thunk_FUN_0ee326a0(pppuStack_268,(ulong)ppppuStack_278 & 0xfffffffffffffffe);
      }
      uStack_280 = 0x9c0e017;
      uVar18 = func_0x048648e0(uVar16,&UNK_011dd6d5);
      ppppuStack_278 = (ulong ****)((ulong)ppppuStack_278 & 0xffffffffffff0000);
      uStack_280 = 0x9c0e02d;
      func_0x04863cb0(auStack_210,uVar18,&ppppuStack_278);
      if (((ulong)ppppuStack_278 & 1) != 0) {
        uStack_280 = 0x9c0e045;
        thunk_FUN_0ee326a0(pppuStack_268,(ulong)ppppuStack_278 & 0xfffffffffffffffe);
      }
      if ((uStack_1e0 & 1) == 0) {
        uVar19 = (ulong)((byte)uStack_1e0 >> 1);
      }
      else {
        uVar19 = CONCAT44(uStack_1d4,uStack_1d8);
      }
      if (uVar19 == 0) {
LAB_09c0eb5b:
        pppuStack_268 = (ulong ***)_DAT_0f1dfac8;
        uStack_260 = (ulong ***)_UNK_0f1dfad0;
        ppppuStack_278 = _DAT_0f1dfab8;
        ppppuStack_270 = (ulong ****)_UNK_0f1dfac0;
        uStack_258 = (ulong ***)((ulong)uStack_258 & 0xffffffffffffff00);
        cStack_230 = '\0';
        ppppuStack_228 = (ulong ****)0x0;
        ppppuStack_220 = (ulong ****)0x0;
        pppuStack_218 = (ulong ***)0x0;
        uStack_280 = 0x9c0eba4;
        func_0x0eee17a0(&ppppuStack_228,&ppppuStack_278,&ppppuStack_228,1);
        if ((cStack_230 == '\x01') && (((ulong)uStack_258 & 1) != 0)) {
          uStack_280 = 0x9c0ebc5;
          thunk_FUN_0ee326a0(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
        }
        auStack_a0[0] = 0x1d;
        ppppuStack_278 = (ulong ****)CONCAT44(ppppuStack_278._4_4_,0x1d);
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        bStack_190 = 0;
        ppppuStack_1c8 = (ulong ****)CONCAT44(ppppuStack_1c8._4_4_,0x1d);
        ppppuStack_1c0 = ppppuStack_228;
        ppppuStack_1b8 = ppppuStack_220;
        pppuStack_1b0 = pppuStack_218;
        ppppuStack_270 = (ulong ****)0x0;
        pppuStack_268 = (ulong ***)0x0;
        uStack_260 = (ulong ***)0x0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_258 = (ulong ***)0x0;
        pppuStack_250 = (ulong ***)0x0;
        uStack_248 = 0;
        uStack_280 = 0x9c0ec57;
        func_0x09ba6380(&ppppuStack_278);
        uStack_280 = 0x9c0ec64;
        func_0x09ba6380(auStack_a0);
joined_r0x09c0ec69:
        if (((uint)auStack_210 & 1) != 0) {
          uStack_280 = 0x9c0ead0;
          thunk_FUN_0ee326a0(pppuStack_200,CONCAT44(uStack_20c,auStack_210) & 0xfffffffffffffffe);
        }
        if ((uStack_1e0 & 1) != 0) {
          uStack_280 = 0x9c0eaf3;
          thunk_FUN_0ee326a0(pppuStack_1d0,CONCAT44(uStack_1dc,uStack_1e0) & 0xfffffffffffffffe);
        }
        uStack_280 = 0x9c0eb00;
        func_0x04862b40(auStack_148);
        uStack_280 = 0x9c0eb0d;
        func_0x04862b40(auStack_180);
        bVar22 = 0;
        goto LAB_09c0eb0f;
      }
      if (((uint)auStack_210 & 1) == 0) {
        uVar19 = (ulong)(auStack_210[0] >> 1);
      }
      else {
        uVar19 = CONCAT44(uStack_204,uStack_208);
      }
      if (uVar19 == 0) goto LAB_09c0eb5b;
      uStack_280 = 0x9c0e09a;
      uVar16 = func_0x048648e0(uVar16,&UNK_012c7d1d);
      uStack_280 = 0x9c0e0a5;
      cVar14 = func_0x04864260(uVar16);
      if (cVar14 != '\0') {
LAB_09c0e9ad:
        pppuStack_268 = (ulong ***)_DAT_0f1dfae8;
        uStack_260 = (ulong ***)_UNK_0f1dfaf0;
        ppppuStack_278 = _DAT_0f1dfad8;
        ppppuStack_270 = (ulong ****)_UNK_0f1dfae0;
        uStack_258 = (ulong ***)((ulong)uStack_258 & 0xffffffffffffff00);
        cStack_230 = '\0';
        ppppuStack_228 = (ulong ****)0x0;
        ppppuStack_220 = (ulong ****)0x0;
        pppuStack_218 = (ulong ***)0x0;
        uStack_280 = 0x9c0e9f6;
        func_0x0eee17a0(&ppppuStack_228,&ppppuStack_278,&ppppuStack_228,1);
        if ((cStack_230 == '\x01') && (((ulong)uStack_258 & 1) != 0)) {
          uStack_280 = 0x9c0ea17;
          thunk_FUN_0ee326a0(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
        }
        auStack_d8[0] = 0x1c;
        ppppuStack_278 = (ulong ****)CONCAT44(ppppuStack_278._4_4_,0x1c);
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        bStack_190 = 0;
        ppppuStack_1c8 = (ulong ****)CONCAT44(ppppuStack_1c8._4_4_,0x1c);
        ppppuStack_1c0 = ppppuStack_228;
        ppppuStack_1b8 = ppppuStack_220;
        pppuStack_1b0 = pppuStack_218;
        ppppuStack_270 = (ulong ****)0x0;
        pppuStack_268 = (ulong ***)0x0;
        uStack_260 = (ulong ***)0x0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_258 = (ulong ***)0x0;
        pppuStack_250 = (ulong ***)0x0;
        uStack_248 = 0;
        uStack_280 = 0x9c0eaa9;
        func_0x09ba6380(&ppppuStack_278);
        uStack_280 = 0x9c0eab6;
        func_0x09ba6380(auStack_d8);
        goto joined_r0x09c0ec69;
      }
      uStack_280 = 0x9c0e0b5;
      cVar14 = func_0x04864270(uVar16);
      if (cVar14 == '\0') goto LAB_09c0e9ad;
      uStack_280 = 0x9c0e0c5;
      iVar15 = func_0x048641f0(uVar16);
      if (iVar15 == 0) goto LAB_09c0e9ad;
      uStack_280 = 0x9c0e0dd;
      func_0x04865530(auStack_170,uVar16);
      uStack_280 = 0x9c0e0ed;
      func_0x048655b0(auStack_128,uVar16);
      while( true ) {
        uStack_280 = 0x9c0e120;
        cVar14 = func_0x04862c80(auStack_170,auStack_128);
        if (cVar14 != '\0') break;
        uStack_280 = 0x9c0e135;
        uVar19 = func_0x04862b80(auStack_170);
        uStack_280 = 0x9c0e140;
        cVar14 = func_0x04865490(uVar19);
        if (cVar14 != '\0') {
          uStack_248 = 0;
          uStack_240 = 0;
          uStack_258 = (ulong ***)0x0;
          pppuStack_250 = (ulong ***)0x0;
          pppuStack_268 = (ulong ***)0x0;
          uStack_260 = (ulong ***)0x0;
          ppppuStack_278 = (ulong ****)0x0;
          ppppuStack_270 = (ulong ****)0x0;
          pppuStack_238 = (ulong ***)0x0;
          if ((uStack_1e0 & 1) == 0) {
            uStack_260 = (ulong ***)CONCAT44(uStack_1dc,uStack_1e0);
            uStack_258 = (ulong ***)CONCAT44(uStack_1d4,uStack_1d8);
            pppuStack_250 = pppuStack_1d0;
joined_r0x09c0e1d6:
            if (((uint)auStack_210 & 1) == 0) {
              uStack_248 = CONCAT44(uStack_20c,auStack_210);
              uStack_240 = CONCAT44(uStack_204,uStack_208);
              pppuStack_238 = pppuStack_200;
            }
            else {
              uStack_280 = 0x9c0e1ec;
              func_0x04885070(&uStack_248,pppuStack_200,CONCAT44(uStack_204,uStack_208));
            }
          }
          else {
            uStack_280 = 0x9c0e1c8;
            func_0x04885070(&uStack_260,pppuStack_1d0,CONCAT44(uStack_1d4,uStack_1d8));
            if ((uStack_248 & 1) == 0) goto joined_r0x09c0e1d6;
            bVar27 = ((uint)auStack_210 & 1) == 0;
            pppuVar23 = pppuStack_200;
            if (bVar27) {
              pppuVar23 = (ulong ***)(auStack_210 + 1);
            }
            uVar25 = (ulong)(auStack_210[0] >> 1);
            if (!bVar27) {
              uVar25 = CONCAT44(uStack_204,uStack_208);
            }
            uStack_280 = 0x9c0e212;
            func_0x04885120(&uStack_248,pppuVar23,uVar25);
          }
          bStack_160 = 0;
          uStack_15f = 0;
          uStack_280 = 0x9c0e231;
          func_0x04863cb0(&ppppuStack_228,uVar19,&bStack_160);
          if (((ulong)ppppuStack_278 & 1) != 0) {
            uVar19 = (ulong)ppppuStack_278 & 0xfffffffffffffffe;
            uStack_280 = 0x9c0e249;
            thunk_FUN_0ee326a0(pppuStack_268,uVar19);
          }
          pppuStack_268 = pppuStack_218;
          ppppuStack_278 = ppppuStack_228;
          ppppuStack_270 = ppppuStack_220;
          ppppuStack_228 = (ulong ****)((ulong)ppppuStack_228 & 0xffffffffffff0000);
          if ((bStack_160 & 1) != 0) {
            uVar19 = CONCAT62(uStack_15e,CONCAT11(uStack_15f,bStack_160)) & 0xfffffffffffffffe;
            uStack_280 = 0x9c0e286;
            thunk_FUN_0ee326a0(uStack_150,uVar19);
          }
          if (ppppuStack_1f0 < ppppuStack_1e8) {
            ppppuStack_1f0[2] = pppuStack_268;
            *ppppuStack_1f0 = (ulong ***)ppppuStack_278;
            ppppuStack_1f0[1] = (ulong ***)ppppuStack_270;
            ppppuStack_278 = (ulong ****)0x0;
            ppppuStack_270 = (ulong ****)0x0;
            pppuStack_268 = (ulong ***)0x0;
            ppppuStack_1f0[5] = pppuStack_250;
            ppppuStack_1f0[3] = uStack_260;
            ppppuStack_1f0[4] = uStack_258;
            uStack_260 = (ulong ***)0x0;
            uStack_258 = (ulong ***)0x0;
            pppuStack_250 = (ulong ***)0x0;
            ppppuStack_1f0[8] = pppuStack_238;
            *(undefined4 *)(ppppuStack_1f0 + 6) = (undefined4)uStack_248;
            *(undefined4 *)((long)ppppuStack_1f0 + 0x34) = uStack_248._4_4_;
            *(undefined4 *)(ppppuStack_1f0 + 7) = (undefined4)uStack_240;
            *(undefined4 *)((long)ppppuStack_1f0 + 0x3c) = uStack_240._4_4_;
            uStack_248 = 0;
            uStack_240 = 0;
            pppuStack_238 = (ulong ***)0x0;
            ppppuStack_1f0 = ppppuStack_1f0 + 9;
          }
          else {
            lVar17 = (long)ppppuStack_1f0 - (long)ppppuStack_1f8;
            uVar25 = (lVar17 >> 3) * -0x71c71c71c71c71c7 + 1;
            if (0x38e38e38e38e38e < uVar25) {
              uStack_280 = 0x9c0ecd9;
              func_0x09ba8780();
LAB_09c0ecd9:
              uStack_280 = 0x9c0ecde;
              uVar16 = func_0x04882eb0();
              uStack_280 = 0x9c0ece6;
              uVar16 = FUN_04882e20(uVar16);
              uStack_280 = 0x9c0ecee;
              lVar20 = FUN_04882e20(uVar16);
              uStack_280 = 0x9c0ee57;
              func_0x04862b40(auStack_180);
              ppppuStack_278 = (ulong ****)&ppppuStack_1f8;
              uStack_280 = 0x9c0ee6b;
              func_0x09ba8790(&ppppuStack_278);
              uStack_280 = 0x9c0ee78;
              func_0x09c0ccd0(&lStack_138);
              uStack_280 = 0x9c0ee80;
              lVar17 = lVar20;
              func_0x0eee2d70();
              lStack_288 = lVar20;
              uStack_280 = uVar25;
              (**(code **)(*(long *)(lVar17 + 0x10) + 0x10))(&lStack_298,lVar17 + 0x10);
              if (lStack_298 != 0) {
                *(undefined8 *)(lStack_298 + 0x1e8) = extraout_RDX;
                func_0x09c18740(lStack_298,uVar19);
              }
              if (plStack_290 != (long *)0x0) {
                LOCK();
                plVar2 = plStack_290 + 1;
                lVar17 = *plVar2;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*plStack_290 + 0x10))(plStack_290);
                  func_0x0412c2d0(plStack_290);
                  return;
                }
              }
              return;
            }
            lVar20 = (long)ppppuStack_1e8 - (long)ppppuStack_1f8 >> 3;
            uVar8 = lVar20 * 0x1c71c71c71c71c72;
            if (uVar25 < uVar8) {
              uVar25 = uVar8;
            }
            if (0x1c71c71c71c71c6 < (ulong)(lVar20 * -0x71c71c71c71c71c7)) {
              uVar25 = 0x38e38e38e38e38e;
            }
            if (uVar25 == 0) {
              lVar20 = 0;
            }
            else {
              if (0x38e38e38e38e38e < uVar25) goto LAB_09c0ecd9;
              uStack_280 = 0x9c0e3c1;
              lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25 * 0x48);
              if (lVar20 == 0) {
                uStack_280 = 0x9c0e3d3;
                func_0x0eec74c0(uVar25 * 0x48,0);
                lVar20 = 0;
              }
            }
            ppppuVar5 = ppppuStack_1f0;
            *(ulong ****)(lVar20 + 0x10 + lVar17) = pppuStack_268;
            *(undefined8 *)(lVar20 + lVar17) = ppppuStack_278;
            ((undefined8 *)(lVar20 + lVar17))[1] = ppppuStack_270;
            ppppuStack_278 = (ulong ****)0x0;
            ppppuStack_270 = (ulong ****)0x0;
            pppuStack_268 = (ulong ***)0x0;
            *(ulong ****)(lVar20 + 0x28 + lVar17) = pppuStack_250;
            puVar24 = (ulong *)(lVar20 + 0x18 + lVar17);
            *puVar24 = (ulong)uStack_260;
            puVar24[1] = (ulong)uStack_258;
            uStack_260 = (ulong ***)0x0;
            uStack_258 = (ulong ***)0x0;
            pppuStack_250 = (ulong ***)0x0;
            *(ulong ****)(lVar20 + 0x40 + lVar17) = pppuStack_238;
            puVar6 = (undefined4 *)(lVar20 + 0x30 + lVar17);
            *puVar6 = (undefined4)uStack_248;
            puVar6[1] = uStack_248._4_4_;
            puVar6[2] = (undefined4)uStack_240;
            puVar6[3] = uStack_240._4_4_;
            uStack_248 = 0;
            uStack_240 = 0;
            pppuStack_238 = (ulong ***)0x0;
            ppppuVar3 = (ulong ****)
                        (((long)ppppuStack_1f8 - (long)ppppuStack_1f0) + lVar20 + lVar17);
            if ((long)ppppuStack_1f8 - (long)ppppuStack_1f0 != 0) {
              lVar21 = 0;
              do {
                *(undefined8 *)((long)ppppuVar3 + lVar21 + 0x10) =
                     *(undefined8 *)((long)ppppuStack_1f8 + lVar21 + 0x10);
                uVar16 = *(undefined8 *)((byte *)((long)ppppuStack_1f8 + lVar21) + 8);
                *(undefined8 *)((long)ppppuVar3 + lVar21) =
                     *(undefined8 *)((long)ppppuStack_1f8 + lVar21);
                *(undefined8 *)((byte *)((long)ppppuVar3 + lVar21) + 8) = uVar16;
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21);
                pbVar4[0] = 0;
                pbVar4[1] = 0;
                pbVar4[2] = 0;
                pbVar4[3] = 0;
                pbVar4[4] = 0;
                pbVar4[5] = 0;
                pbVar4[6] = 0;
                pbVar4[7] = 0;
                pbVar4[8] = 0;
                pbVar4[9] = 0;
                pbVar4[10] = 0;
                pbVar4[0xb] = 0;
                pbVar4[0xc] = 0;
                pbVar4[0xd] = 0;
                pbVar4[0xe] = 0;
                pbVar4[0xf] = 0;
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21 + 0x10);
                pbVar4[0] = 0;
                pbVar4[1] = 0;
                pbVar4[2] = 0;
                pbVar4[3] = 0;
                pbVar4[4] = 0;
                pbVar4[5] = 0;
                pbVar4[6] = 0;
                pbVar4[7] = 0;
                *(undefined8 *)((long)ppppuVar3 + lVar21 + 0x28) =
                     *(undefined8 *)((long)ppppuStack_1f8 + lVar21 + 0x28);
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21 + 0x18);
                uVar16 = *(undefined8 *)(pbVar4 + 8);
                pbVar7 = (byte *)((long)ppppuVar3 + lVar21 + 0x18);
                *(undefined8 *)pbVar7 = *(undefined8 *)pbVar4;
                *(undefined8 *)(pbVar7 + 8) = uVar16;
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21 + 0x18);
                pbVar4[0] = 0;
                pbVar4[1] = 0;
                pbVar4[2] = 0;
                pbVar4[3] = 0;
                pbVar4[4] = 0;
                pbVar4[5] = 0;
                pbVar4[6] = 0;
                pbVar4[7] = 0;
                pbVar4[8] = 0;
                pbVar4[9] = 0;
                pbVar4[10] = 0;
                pbVar4[0xb] = 0;
                pbVar4[0xc] = 0;
                pbVar4[0xd] = 0;
                pbVar4[0xe] = 0;
                pbVar4[0xf] = 0;
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21 + 0x28);
                pbVar4[0] = 0;
                pbVar4[1] = 0;
                pbVar4[2] = 0;
                pbVar4[3] = 0;
                pbVar4[4] = 0;
                pbVar4[5] = 0;
                pbVar4[6] = 0;
                pbVar4[7] = 0;
                *(undefined8 *)((long)ppppuVar3 + lVar21 + 0x40) =
                     *(undefined8 *)((long)ppppuStack_1f8 + lVar21 + 0x40);
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21 + 0x30);
                uVar9 = *(undefined4 *)(pbVar4 + 4);
                uVar10 = *(undefined4 *)(pbVar4 + 8);
                uVar11 = *(undefined4 *)(pbVar4 + 0xc);
                pbVar7 = (byte *)((long)ppppuVar3 + lVar21 + 0x30);
                *(undefined4 *)pbVar7 = *(undefined4 *)pbVar4;
                *(undefined4 *)(pbVar7 + 4) = uVar9;
                *(undefined4 *)(pbVar7 + 8) = uVar10;
                *(undefined4 *)(pbVar7 + 0xc) = uVar11;
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21 + 0x30);
                pbVar4[0] = 0;
                pbVar4[1] = 0;
                pbVar4[2] = 0;
                pbVar4[3] = 0;
                pbVar4[4] = 0;
                pbVar4[5] = 0;
                pbVar4[6] = 0;
                pbVar4[7] = 0;
                pbVar4[8] = 0;
                pbVar4[9] = 0;
                pbVar4[10] = 0;
                pbVar4[0xb] = 0;
                pbVar4[0xc] = 0;
                pbVar4[0xd] = 0;
                pbVar4[0xe] = 0;
                pbVar4[0xf] = 0;
                pbVar4 = (byte *)((long)ppppuStack_1f8 + lVar21 + 0x40);
                pbVar4[0] = 0;
                pbVar4[1] = 0;
                pbVar4[2] = 0;
                pbVar4[3] = 0;
                pbVar4[4] = 0;
                pbVar4[5] = 0;
                pbVar4[6] = 0;
                pbVar4[7] = 0;
                lVar12 = lVar21 + 0x48;
                lVar21 = lVar21 + 0x48;
                ppppuVar26 = ppppuStack_1f8;
              } while ((ulong ****)((long)ppppuStack_1f8 + lVar12) != ppppuStack_1f0);
              do {
                if (((ulong)ppppuVar26[6] & 1) == 0) {
                  if (((ulong)ppppuVar26[3] & 1) == 0) goto LAB_09c0e505;
LAB_09c0e527:
                  uStack_280 = 0x9c0e538;
                  thunk_FUN_0ee326a0(ppppuVar26[5],(ulong)ppppuVar26[3] & 0xfffffffffffffffe);
                  bVar22 = *(byte *)ppppuVar26;
                }
                else {
                  uStack_280 = 0x9c0e521;
                  thunk_FUN_0ee326a0(ppppuVar26[8],(ulong)ppppuVar26[6] & 0xfffffffffffffffe);
                  if (((ulong)ppppuVar26[3] & 1) != 0) goto LAB_09c0e527;
LAB_09c0e505:
                  bVar22 = *(byte *)ppppuVar26;
                }
                if ((bVar22 & 1) != 0) {
                  uStack_280 = 0x9c0e54d;
                  thunk_FUN_0ee326a0(ppppuVar26[2],(ulong)*ppppuVar26 & 0xfffffffffffffffe);
                }
                ppppuVar26 = ppppuVar26 + 9;
              } while (ppppuVar26 != ppppuVar5);
            }
            ppppuVar26 = (ulong ****)(lVar20 + lVar17 + 0x48);
            ppppuVar5 = (ulong ****)(lVar20 + uVar25 * 0x48);
            if (ppppuStack_1f8 != (ulong ****)0x0) {
              lVar17 = (long)ppppuStack_1e8 - (long)ppppuStack_1f8;
              uStack_280 = 0x9c0e598;
              ppppuVar13 = ppppuStack_1f8;
              ppppuStack_1f8 = ppppuVar3;
              ppppuStack_1f0 = ppppuVar26;
              ppppuStack_1e8 = ppppuVar5;
              thunk_FUN_0ee326a0(ppppuVar13,lVar17);
              ppppuVar3 = ppppuStack_1f8;
              ppppuVar5 = ppppuStack_1e8;
            }
            ppppuStack_1e8 = ppppuVar5;
            ppppuStack_1f8 = ppppuVar3;
            ppppuStack_1f0 = ppppuVar26;
            if ((uStack_248 & 1) != 0) {
              uStack_280 = 0x9c0e5f0;
              thunk_FUN_0ee326a0(pppuStack_238,uStack_248 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_260 & 1) != 0) {
              uStack_280 = 0x9c0e327;
              thunk_FUN_0ee326a0(pppuStack_250,(ulong)uStack_260 & 0xfffffffffffffffe);
            }
          }
          if (((ulong)ppppuStack_278 & 1) != 0) {
            uStack_280 = 0x9c0e5d8;
            thunk_FUN_0ee326a0(pppuStack_268,(ulong)ppppuStack_278 & 0xfffffffffffffffe);
          }
        }
        uStack_280 = 0x9c0e110;
        func_0x04862ba0(auStack_170);
      }
      uStack_280 = 0x9c0e60d;
      func_0x04862b40(auStack_128);
      uStack_280 = 0x9c0e61a;
      func_0x04862b40(auStack_170);
      if (((uint)auStack_210 & 1) != 0) {
        uStack_280 = 0x9c0e634;
        thunk_FUN_0ee326a0(pppuStack_200,CONCAT44(uStack_20c,auStack_210) & 0xfffffffffffffffe);
      }
      if ((uStack_1e0 & 1) != 0) {
        uStack_280 = 0x9c0e65b;
        thunk_FUN_0ee326a0(pppuStack_1d0,CONCAT44(uStack_1dc,uStack_1e0) & 0xfffffffffffffffe);
      }
      uStack_280 = 0x9c0dfa0;
      func_0x04862ba0(auStack_180);
    }
    uStack_280 = 0x9c0ec81;
    func_0x04862b40(auStack_148);
    uStack_280 = 0x9c0ec8e;
    func_0x04862b40(auStack_180);
    ppppuStack_1c8 = ppppuStack_1f8;
    ppppuStack_1c0 = ppppuStack_1f0;
    bStack_190 = 1;
    ppppuStack_1b8 = ppppuStack_1e8;
    ppppuStack_1f8 = (ulong ****)0x0;
    ppppuStack_1f0 = (ulong ****)0x0;
    ppppuStack_1e8 = (ulong ****)0x0;
    bVar22 = 1;
LAB_09c0eb0f:
    ppppuStack_278 = (ulong ****)&ppppuStack_1f8;
    uStack_280 = 0x9c0eb23;
    func_0x09ba8790(&ppppuStack_278);
    ppppuStack_278 = (ulong ****)0xa845da53ae52c6fc;
    ppppuStack_270 = (ulong ****)&UNK_0140f690;
    pppuStack_268 = (ulong ***)0x1;
    uStack_260 = (ulong ***)CONCAT44(uStack_260._4_4_,0x165);
    if (bVar22 == 0) goto LAB_09c0e89d;
  }
  if ((bVar22 & 1) == 0) {
    uStack_280 = 0x9c0e931;
    func_0x09c0ef90(lStack_188,(ulong)ppppuStack_1c8 & 0xffffffff);
  }
  else {
    uStack_280 = 0x9c0e91b;
    func_0x09c18740(lStack_188,&ppppuStack_1c8);
  }
  if (bStack_190 == 1) {
    ppppuStack_278 = (ulong ****)&ppppuStack_1c8;
    uStack_280 = 0x9c0e94f;
    func_0x09ba8790(&ppppuStack_278);
    plVar2 = plStack_130;
  }
  else {
    uStack_280 = 0x9c0e96b;
    func_0x09ba6380(&ppppuStack_1c8);
    plVar2 = plStack_130;
  }
joined_r0x09c0e95a:
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      uStack_280 = 0x9c0e993;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      uStack_280 = 0x9c0e99b;
      func_0x0412c2d0(plVar2);
    }
  }
  return;
}


