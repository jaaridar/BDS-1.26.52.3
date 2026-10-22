/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb08b090 (ELF vaddr 0xaf8b090)
 * Label: caller-of-callee
 * Body:  [[0b08b090, 0b08b178] [0b08b180, 0b08b7ed] [0b08b7f0, 0b08b812] [0b08b820, 0b08b8ba] [0b08b8c0, 0b08ba21] [0b08ba30, 0b08bde5] [0b08bdf0, 0b08be14] [0b08be20, 0b08beac] [0b08beb0, 0b08bf23] [0b08bf30, 0b08bf41] [0b08bf50, 0b08bfa9] [0b08bfb0, 0b08bfe6] [0b08bff0, 0b08c02c] [0b08c030, 0b08c066] [0b08c070, 0b08c0cd] [0b08c0d0, 0b08c157] [0b08c160, 0b08c17a] [0b08c180, 0b08c208] [0b08c210, 0b08c264] [0b08c270, 0b08c2f7] [0b08c300, 0b08c31a] [0b08c320, 0b08c3a8] [0b08c3b0, 0b08c403] [0b08c410, 0b08c497] [0b08c4a0, 0b08c4ba] [0b08c4c0, 0b08c548] [0b08c550, 0b08c828] [0b08c830, 0b08c842] [0b08c850, 0b08cc44] [0b08cc50, 0b08cc72] [0b08cc80, 0b08ccc8] [0b08ccd0, 0b08ccfa] [0b08cd00, 0b08cd3c] [0b08cd40, 0b08cdc7] [0b08cdd0, 0b08cdea] [0b08cdf0, 0b08ce78] [0b08ce80, 0b08cee5] [0b08cef0, 0b08cf77] [0b08cf80, 0b08cf9a] [0b08cfa0, 0b08d028] [0b08d030, 0b08d095] [0b08d0a0, 0b08d127] [0b08d130, 0b08d14a] [0b08d150, 0b08d1d8] [0b08d1e0, 0b08d715] [0b08d720, 0b08dbbc] [0b08dc0a, 0b08dc1b] [0b08dcff, 0b08dd1d] [0b08dd30, 0b08ddf4] [0b08dea3, 0b08dec2] [0b08e08a, 0b08e0df] [0b08e3f0, 0b08e439]]
 * Ghidra: FUN_0b08b090
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b08b090(byte ******param_1,byte ******param_2,undefined8 param_3)

{
  byte *****pppppbVar1;
  byte ****ppppbVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long lVar22;
  char cVar23;
  int iVar24;
  undefined8 uVar25;
  byte *******pppppppbVar26;
  byte ******ppppppbVar27;
  byte *******pppppppbVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plVar31;
  byte *****pppppbVar32;
  byte *****pppppbVar33;
  byte *******pppppppbVar34;
  byte *****pppppbVar35;
  byte ******ppppppbVar36;
  byte *pbVar37;
  long lVar38;
  long lVar39;
  undefined *puVar40;
  byte *****pppppbVar41;
  byte *****pppppbVar42;
  byte ******ppppppbVar43;
  byte *******pppppppbVar44;
  int iVar45;
  ulong uVar46;
  bool bVar47;
  byte *******pppppppbStack_348;
  byte ******ppppppbStack_340;
  byte ******ppppppbStack_338;
  undefined1 auStack_328 [4];
  undefined4 uStack_324;
  undefined8 uStack_320;
  byte *******pppppppbStack_318;
  byte *******pppppppbStack_310;
  byte *******pppppppbStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  byte ****ppppbStack_2e8;
  byte *******pppppppbStack_2e0;
  byte *******pppppppbStack_2d8;
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte *******pppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
  byte *******pppppppbStack_2b0;
  byte *******pppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  byte ******ppppppbStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  byte ******ppppppbStack_278;
  undefined8 uStack_270;
  byte *****pppppbStack_268;
  byte *******pppppppbStack_260;
  undefined1 auStack_258 [4];
  undefined4 uStack_254;
  undefined8 uStack_250;
  byte *******pppppppbStack_248;
  byte ******ppppppbStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  byte *******pppppppbStack_228;
  byte *******pppppppbStack_220;
  byte *******pppppppbStack_218;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  byte ****ppppbStack_1f8;
  undefined1 uStack_1f0;
  byte ****ppppbStack_1ec;
  undefined1 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  byte ****ppppbStack_1b8;
  undefined *apuStack_1b0 [9];
  uint uStack_168;
  byte *******pppppppbStack_160;
  byte ******ppppppbStack_158;
  byte ******ppppppbStack_150;
  byte ******ppppppbStack_148;
  byte ******ppppppbStack_140;
  long lStack_138;
  byte ******ppppppbStack_128;
  byte ******ppppppbStack_120;
  long lStack_118;
  byte ******ppppppbStack_108;
  byte ******ppppppbStack_100;
  long lStack_f8;
  byte ******ppppppbStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  byte *******pppppppbStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *****pppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  byte *pbStack_70;
  long alStack_68 [4];
  long *plStack_48;
  
  uStack_b0 = param_3;
  if (param_2 != param_1) {
    bVar3 = *(byte *)param_1;
    if (((ulong)*param_2 & 1) == 0) {
      if ((bVar3 & 1) == 0) {
        param_2[2] = param_1[2];
        pppppbVar33 = param_1[1];
        *param_2 = *param_1;
        param_2[1] = pppppbVar33;
      }
      else {
        func_0x04885070(param_2,param_1[2],param_1[1]);
      }
    }
    else {
      bVar47 = (bVar3 & 1) != 0;
      pppppbVar33 = (byte *****)((long)param_1 + 1);
      if (bVar47) {
        pppppbVar33 = param_1[2];
      }
      pppppbVar32 = (byte *****)(ulong)(bVar3 >> 1);
      if (bVar47) {
        pppppbVar32 = param_1[1];
      }
      func_0x04885120(param_2,pppppbVar33,pppppbVar32);
    }
  }
  pppppppbStack_2d8 = (byte *******)0x0;
  pppppppbStack_2d0 = (byte *******)0x0;
  pppppppbStack_2c8 = (byte *******)0x0;
  ppppppbVar43 = param_2 + 0x10;
  func_0x0b0b9bb0(ppppppbVar43,((long)param_1[7] - (long)param_1[6] >> 4) * 0x7d6343eb1a1f58d1);
  pppppbVar33 = param_1[6];
  pppppbStack_88 = param_1[7];
  ppppppbStack_278 = param_2;
  if (pppppbVar33 == pppppbStack_88) {
    uStack_270 = 0;
    uStack_e0 = 0;
  }
  else {
    uStack_e0 = 0;
    uStack_270 = 0;
    ppppppbStack_e8 = ppppppbVar43;
    do {
      uStack_e0 = CONCAT71((int7)((ulong)uStack_e0 >> 8),
                           (byte)uStack_e0 | *(byte *)((long)pppppbVar33 + 0x2ed));
      uStack_270 = CONCAT71((int7)((ulong)uStack_270 >> 8),
                            (byte)uStack_270 | *(byte *)((long)pppppbVar33 + 0x2f1));
      ppppppbStack_108 = (byte ******)0x0;
      ppppppbStack_100 = (byte ******)0x0;
      lStack_f8 = 0;
      _auStack_258 = &ppppppbStack_108;
      uStack_250 = _auStack_258;
      if ((ulong)*(uint *)(pppppbVar33 + 0xc) == 0xffffffff) {
LAB_0b08dd9e:
        func_0x04931450();
LAB_0b08dda3:
        func_0x04931450();
LAB_0b08dda8:
        func_0x04931450();
LAB_0b08ddad:
        func_0x04931450();
LAB_0b08ddb2:
        func_0x04931450();
LAB_0b08ddb7:
        func_0x04ec5dc0();
LAB_0b08ddbc:
        func_0x04ec5dc0();
LAB_0b08ddc1:
        func_0x0b0bb9c0();
LAB_0b08ddc6:
        func_0x04ec5dc0();
LAB_0b08ddcb:
        func_0x0b0bb290();
LAB_0b08ddd0:
        func_0x0b0ba2e0();
LAB_0b08ddd5:
        func_0x04882eb0();
LAB_0b08ddda:
        func_0x04882eb0();
        goto LAB_0b08dddf;
      }
      pppppppbStack_2b8 = (byte *******)auStack_258;
      (**(code **)(&UNK_0f280e48 + (ulong)*(uint *)(pppppbVar33 + 0xc) * 8))
                (&pppppppbStack_2b8,pppppbVar33 + 3);
      ppppppbStack_128 = (byte ******)0x0;
      ppppppbStack_120 = (byte ******)0x0;
      lStack_118 = 0;
      _auStack_258 = &ppppppbStack_128;
      uStack_250 = _auStack_258;
      if ((ulong)*(uint *)(pppppbVar33 + 0x16) == 0xffffffff) goto LAB_0b08dda3;
      pppppppbStack_2b8 = (byte *******)auStack_258;
      (**(code **)(&UNK_0f280e58 + (ulong)*(uint *)(pppppbVar33 + 0x16) * 8))
                (&pppppppbStack_2b8,pppppbVar33 + 0xd);
      uVar4 = *(uint *)(pppppbVar33 + 0x21);
      ppppppbStack_148 = (byte ******)0x0;
      ppppppbStack_140 = (byte ******)0x0;
      lStack_138 = 0;
      _auStack_258 = &ppppppbStack_148;
      uStack_250 = _auStack_258;
      if ((ulong)*(uint *)(pppppbVar33 + 0x20) == 0xffffffff) {
        func_0x04931450();
        goto LAB_0b08dd9e;
      }
      pppppppbStack_2b8 = (byte *******)auStack_258;
      (**(code **)(&UNK_0f280e68 + (ulong)*(uint *)(pppppbVar33 + 0x20) * 8))
                (&pppppppbStack_2b8,pppppbVar33 + 0x17);
      pppppbStack_268 = pppppbVar33;
      if (((((ppppppbStack_108 != ppppppbStack_100) || (ppppppbStack_128 != ppppppbStack_120)) ||
           (ppppppbStack_148 != ppppppbStack_140)) ||
          (((*(char *)((long)pppppbVar33 + 0x2e4) != '\0' || (*(char *)(pppppbVar33 + 0x33) != '\0')
            ) || ((*(char *)(pppppbVar33 + 0x59) != '\0' ||
                  ((*(char *)(pppppbVar33 + 0x5b) != '\0' ||
                   (*(char *)((long)pppppbVar33 + 0x18c) != '\0')))))))) ||
         (*(char *)(pppppbVar33 + 0x37) == '\x01')) {
        uVar25 = 0x300000000;
        if (*(char *)((long)pppppbVar33 + 0x2e4) != '\0') {
          uVar25 = *(undefined8 *)((long)pppppbVar33 + 0x2dc);
        }
        iVar24 = 0;
        if ((int)uVar25 - 1U < 3) {
          iVar24 = (int)uVar25;
        }
        iVar45 = (int)((ulong)uVar25 >> 0x20);
        if (2 < iVar45 - 1U) {
          iVar45 = 0;
        }
        pppppppbStack_2b0 = (byte *******)((ulong)pppppppbStack_2b0 & 0xffffffff00000000);
        uStack_288 = 0;
        uStack_280 = 0;
        ppppppbStack_298 = (byte ******)0x0;
        uStack_290 = 0;
        pppppppbStack_2a8 = (byte *******)0x0;
        pppppppbStack_2a0 = (byte *******)0x0;
        pppppppbStack_2b8 = (byte *******)&UNK_0ef516f8;
        ppppppbStack_240 = (byte ******)(pppppbVar33 + 0x38);
        _auStack_258 = (byte *******)&pppppppbStack_2b8;
        uStack_250 = _auStack_258;
        pppppppbStack_248 = _auStack_258;
        if ((ulong)*(uint *)(pppppbVar33 + 0x4f) == 0xffffffff) goto LAB_0b08dda8;
        _auStack_328 = (byte *******)auStack_258;
        cVar23 = (**(code **)(&UNK_0f3957b0 + (ulong)*(uint *)(pppppbVar33 + 0x4f) * 8))
                           (auStack_328);
        if (cVar23 == '\0') {
          func_0x09a0a6e0(1,3,0,&UNK_011c9e5c);
        }
        ppppppbVar36 = ppppppbStack_100;
        ppppppbVar43 = ppppppbStack_108;
        _auStack_258 = (byte *******)0x0;
        uStack_250 = (byte *******)0x0;
        pppppppbStack_248 = (byte *******)0x0;
        _auStack_328 = (byte *******)auStack_258;
        uStack_320 = (byte *******)((ulong)uStack_320 & 0xffffffffffffff00);
        lVar38 = (long)ppppppbStack_100 - (long)ppppppbStack_108;
        if (lVar38 != 0) {
          if ((ulong)((lVar38 >> 3) * -0x30c30c30c30c30c3) < 0x186186186186187) {
            pppppppbVar26 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar38);
            if (pppppppbVar26 == (byte *******)0x0) {
              func_0x0eec74c0(lVar38,0);
            }
            pppppppbStack_248 = (byte *******)((long)pppppppbVar26 + lVar38);
            lVar38 = 0;
            _auStack_258 = pppppppbVar26;
            uStack_250 = pppppppbVar26;
            do {
              func_0x0c6e7560((byte *)((long)pppppppbVar26 + lVar38),(long)ppppppbVar43 + lVar38);
              lVar30 = lVar38 + 0xa8;
              lVar38 = lVar38 + 0xa8;
            } while ((byte ******)((long)ppppppbVar43 + lVar30) != ppppppbVar36);
            uStack_250 = (byte *******)((long)pppppppbVar26 + lVar38);
            goto LAB_0b08b581;
          }
          goto LAB_0b08ddb7;
        }
LAB_0b08b581:
        ppppppbVar36 = ppppppbStack_120;
        ppppppbVar43 = ppppppbStack_128;
        _auStack_328 = &ppppppbStack_240;
        ppppppbStack_240 = (byte ******)0x0;
        uStack_238 = (byte ******)0x0;
        uStack_230 = (byte *)0x0;
        uStack_320 = (byte *******)((ulong)uStack_320 & 0xffffffffffffff00);
        lVar38 = (long)ppppppbStack_120 - (long)ppppppbStack_128;
        if (lVar38 != 0) {
          if ((ulong)((lVar38 >> 3) * -0x30c30c30c30c30c3) < 0x186186186186187) {
            ppppppbVar27 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar38);
            if (ppppppbVar27 == (byte ******)0x0) {
              func_0x0eec74c0(lVar38,0);
            }
            uStack_230 = (byte *)((long)ppppppbVar27 + lVar38);
            lVar38 = 0;
            ppppppbStack_240 = ppppppbVar27;
            uStack_238 = ppppppbVar27;
            do {
              func_0x0c6e7560((byte *)((long)ppppppbVar27 + lVar38),(long)ppppppbVar43 + lVar38);
              lVar30 = lVar38 + 0xa8;
              lVar38 = lVar38 + 0xa8;
            } while ((byte ******)((long)ppppppbVar43 + lVar30) != ppppppbVar36);
            uStack_238 = (byte ******)((long)ppppppbVar27 + lVar38);
            goto LAB_0b08b65e;
          }
          goto LAB_0b08ddbc;
        }
LAB_0b08b65e:
        ppppppbVar36 = ppppppbStack_140;
        ppppppbVar43 = ppppppbStack_148;
        _auStack_328 = (byte *******)&pppppppbStack_228;
        pppppppbStack_228 = (byte *******)0x0;
        pppppppbStack_220 = (byte *******)0x0;
        pppppppbStack_218 = (byte *******)0x0;
        uStack_320 = (byte *******)((ulong)uStack_320 & 0xffffffffffffff00);
        lVar38 = (long)ppppppbStack_140 - (long)ppppppbStack_148;
        if (lVar38 != 0) {
          if ((ulong)((lVar38 >> 3) * -0x30c30c30c30c30c3) < 0x186186186186187) {
            pppppppbVar26 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar38);
            if (pppppppbVar26 == (byte *******)0x0) {
              func_0x0eec74c0(lVar38,0);
            }
            pppppppbStack_218 = (byte *******)((long)pppppppbVar26 + lVar38);
            lVar38 = 0;
            pppppppbStack_228 = pppppppbVar26;
            pppppppbStack_220 = pppppppbVar26;
            do {
              func_0x0c6e7560((byte *)((long)pppppppbVar26 + lVar38),(long)ppppppbVar43 + lVar38);
              lVar30 = lVar38 + 0xa8;
              lVar38 = lVar38 + 0xa8;
            } while ((byte ******)((long)ppppppbVar43 + lVar30) != ppppppbVar36);
            pppppppbStack_220 = (byte *******)((long)pppppppbVar26 + lVar38);
            goto LAB_0b08b72e;
          }
          goto LAB_0b08ddc6;
        }
LAB_0b08b72e:
        ppppppbVar43 = ppppppbStack_e8;
        pppppbVar33 = pppppbStack_268;
        param_2 = ppppppbStack_278;
        uStack_204 = CONCAT31(uStack_204._1_3_,*(undefined1 *)(pppppbStack_268 + 0x31));
        uStack_20c = SUB84(pppppbStack_268[0x30],0);
        uStack_208 = (undefined4)((ulong)pppppbStack_268[0x30] >> 0x20);
        uStack_200 = CONCAT44(iVar45,iVar24);
        uStack_1f0 = *(undefined1 *)(pppppbStack_268 + 0x5b);
        ppppbStack_1f8 = pppppbStack_268[0x5a];
        uStack_1e4 = *(undefined1 *)(pppppbStack_268 + 0x33);
        ppppbStack_1ec = pppppbStack_268[0x32];
        uStack_1d0 = *(undefined1 *)(pppppbStack_268 + 0x37);
        uStack_1e0 = *(undefined4 *)(pppppbStack_268 + 0x35);
        uStack_1dc = *(undefined4 *)((long)pppppbStack_268 + 0x1ac);
        uStack_1d8 = *(undefined4 *)(pppppbStack_268 + 0x36);
        uStack_1d4 = *(undefined4 *)((long)pppppbStack_268 + 0x1b4);
        uStack_210 = uVar4;
        if (*(char *)(pppppbStack_268 + 0x59) == '\x01') {
          if (((ulong)pppppbStack_268[0x56] & 1) == 0) {
            ppppbStack_2e8 = pppppbStack_268[0x58];
            uStack_2f8 = (byte ******)pppppbStack_268[0x56];
            uStack_2f0 = (byte ******)pppppbStack_268[0x57];
          }
          else {
            func_0x0412e5e0(&uStack_2f8,pppppbStack_268[0x58],pppppbStack_268[0x57]);
          }
        }
        else {
          uStack_2f8 = (byte ******)0x0;
          uStack_2f0 = (byte ******)0x0;
          ppppbStack_2e8 = (byte ****)0x0;
        }
        ppppbStack_1b8 = ppppbStack_2e8;
        uStack_1c8 = (undefined4)uStack_2f8;
        uStack_1c4 = uStack_2f8._4_4_;
        uStack_1c0 = (undefined4)uStack_2f0;
        uStack_1bc = uStack_2f0._4_4_;
        uStack_2f8 = (byte ******)0x0;
        uStack_2f0 = (byte ******)0x0;
        ppppbStack_2e8 = (byte ****)0x0;
        func_0x049d00c0(apuStack_1b0,&pppppppbStack_2b8);
        pppppppbVar26 = pppppppbStack_2d0;
        apuStack_1b0[0] = &UNK_0ef516f8;
        if (pppppppbStack_2d0 < pppppppbStack_2c8) {
          func_0x0b0bb0d0(pppppppbStack_2d0,auStack_258);
          pppppppbVar26 = pppppppbVar26 + 0x1d;
          pppppppbVar44 = pppppppbStack_2d8;
LAB_0b08c5cd:
          pppppppbStack_2d8 = pppppppbVar44;
          pppppppbStack_2d0 = pppppppbVar26;
          func_0x0b0b9cd0(auStack_258);
          if (((ulong)uStack_2f8 & 1) != 0) {
            func_0x0412a280(ppppbStack_2e8,(ulong)uStack_2f8 & 0xfffffffffffffffe);
          }
          func_0x049d2400(&pppppppbStack_2b8);
          goto LAB_0b08c609;
        }
        ppppppbVar36 = (byte ******)((long)pppppppbStack_2d0 - (long)pppppppbStack_2d8);
        uVar46 = ((long)ppppppbVar36 >> 3) * 0x34f72c234f72c235 + 1;
        if (0x11a7b9611a7b961 < uVar46) goto LAB_0b08ddcb;
        lVar38 = (long)pppppppbStack_2c8 - (long)pppppppbStack_2d8 >> 3;
        uVar6 = lVar38 * 0x69ee58469ee5846a;
        if (uVar46 < uVar6) {
          uVar46 = uVar6;
        }
        if (0x8d3dcb08d3dcaf < (ulong)(lVar38 * 0x34f72c234f72c235)) {
          uVar46 = 0x11a7b9611a7b961;
        }
        pppppppbStack_308 = (byte *******)&pppppppbStack_2d8;
        if (uVar46 == 0) {
          pppppppbVar26 = (byte *******)0x0;
          ppppppbVar27 = ppppppbVar36;
LAB_0b08b96b:
          uStack_320 = (byte *******)((long)ppppppbVar36 + (long)pppppppbVar26);
          pppppppbStack_310 = pppppppbVar26 + uVar46 * 0x1d;
          _auStack_328 = pppppppbVar26;
          pppppppbStack_318 = uStack_320;
          func_0x0b0bb0d0(uStack_320,auStack_258);
          pppppppbStack_318 = pppppppbStack_318 + 0x1d;
          pppppppbStack_a0 = uStack_320;
          pppppppbVar44 =
               (byte *******)
               ((long)uStack_320 - ((long)pppppppbStack_2d0 - (long)pppppppbStack_2d8));
          pppppppbStack_260 = pppppppbStack_2d0;
          pppppppbVar26 = pppppppbStack_318;
          if (pppppppbStack_2d0 != pppppppbStack_2d8) {
            lStack_a8 = ((long)pppppppbStack_2d0 - (long)pppppppbStack_2d8 >> 3) *
                        -0x34f72c234f72c235;
            uVar46 = 0;
            pppppppbStack_90 = pppppppbStack_2d8;
            pppppppbVar26 = pppppppbStack_2d8;
            pppppppbStack_b8 = pppppppbVar44;
            pppppppbStack_98 = pppppppbStack_318;
            do {
              *pppppppbVar44 = (byte ******)0x0;
              pppppppbVar44[1] = (byte ******)0x0;
              pppppppbVar44[2] = (byte ******)0x0;
              pppppppbVar28 = (byte *******)*pppppppbVar26;
              param_2 = pppppppbVar26[1];
              ppppppbStack_340 = (byte ******)((ulong)ppppppbStack_340 & 0xffffffffffffff00);
              ppppppbVar43 = (byte ******)((long)param_2 - (long)pppppppbVar28);
              if (ppppppbVar43 != (byte ******)0x0) {
                pppppppbStack_348 = pppppppbVar44;
                if ((ulong)(((long)ppppppbVar43 >> 3) * -0x30c30c30c30c30c3) < 0x186186186186187) {
                  ppppppbVar27 = (byte ******)
                                 (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppppppbVar43);
                  if (ppppppbVar27 == (byte ******)0x0) {
                    func_0x0eec74c0(ppppppbVar43,0);
                  }
                  *pppppppbVar44 = ppppppbVar27;
                  pppppppbVar44[1] = ppppppbVar27;
                  pppppppbVar44[2] = (byte ******)((long)ppppppbVar43 + (long)ppppppbVar27);
                  lVar38 = 0;
                  do {
                    func_0x0c6e7560((long)ppppppbVar27 + lVar38,
                                    (byte *)((long)pppppppbVar28 + lVar38));
                    lVar30 = lVar38 + 0xa8;
                    lVar38 = lVar38 + 0xa8;
                  } while ((byte ******)((long)pppppppbVar28 + lVar30) != param_2);
                  ppppppbVar27 = (byte ******)((long)ppppppbVar27 + lVar38);
                  pppppppbVar44[1] = ppppppbVar27;
                  goto LAB_0b08bb2f;
                }
LAB_0b08dd67:
                func_0x04ec5dc0();
LAB_0b08dd6c:
                func_0x049d0440();
LAB_0b08dd71:
                func_0x04ec5dc0();
LAB_0b08dd76:
                func_0x049d03a0();
                goto LAB_0b08dd7b;
              }
LAB_0b08bb2f:
              pppppppbStack_348 = pppppppbVar44 + 3;
              pppppppbVar44[3] = (byte ******)0x0;
              pppppppbVar44[4] = (byte ******)0x0;
              pppppppbVar44[5] = (byte ******)0x0;
              pppppppbVar28 = (byte *******)pppppppbVar26[3];
              param_2 = pppppppbVar26[4];
              ppppppbStack_340 = (byte ******)((ulong)ppppppbStack_340 & 0xffffffffffffff00);
              ppppppbVar43 = (byte ******)((long)param_2 - (long)pppppppbVar28);
              pppppppbStack_2e0 = pppppppbStack_348;
              if (ppppppbVar43 != (byte ******)0x0) {
                if (0x186186186186186 < (ulong)(((long)ppppppbVar43 >> 3) * -0x30c30c30c30c30c3)) {
                  func_0x04ec5dc0();
                  goto LAB_0b08dd67;
                }
                ppppppbVar27 = (byte ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppppppbVar43);
                if (ppppppbVar27 == (byte ******)0x0) {
                  func_0x0eec74c0(ppppppbVar43,0);
                }
                pppppppbVar44[3] = ppppppbVar27;
                pppppppbVar44[4] = ppppppbVar27;
                pppppppbVar44[5] = (byte ******)((long)ppppppbVar43 + (long)ppppppbVar27);
                lVar38 = 0;
                do {
                  func_0x0c6e7560((long)ppppppbVar27 + lVar38,(byte *)((long)pppppppbVar28 + lVar38)
                                 );
                  lVar30 = lVar38 + 0xa8;
                  lVar38 = lVar38 + 0xa8;
                } while ((byte ******)((long)pppppppbVar28 + lVar30) != param_2);
                ppppppbVar27 = (byte ******)((long)ppppppbVar27 + lVar38);
                pppppppbVar44[4] = ppppppbVar27;
              }
              pppppppbStack_348 = pppppppbVar44 + 6;
              pppppppbVar44[6] = (byte ******)0x0;
              pppppppbVar44[7] = (byte ******)0x0;
              pppppppbVar44[8] = (byte ******)0x0;
              pppppppbVar28 = (byte *******)pppppppbVar26[6];
              param_2 = pppppppbVar26[7];
              ppppppbStack_340 = (byte ******)((ulong)ppppppbStack_340 & 0xffffffffffffff00);
              ppppppbVar43 = (byte ******)((long)param_2 - (long)pppppppbVar28);
              pppppppbStack_2c0 = pppppppbStack_348;
              if (ppppppbVar43 != (byte ******)0x0) {
                if ((ulong)(((long)ppppppbVar43 >> 3) * -0x30c30c30c30c30c3) < 0x186186186186187) {
                  ppppppbVar36 = (byte ******)
                                 (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppppppbVar43);
                  if (ppppppbVar36 == (byte ******)0x0) {
                    func_0x0eec74c0(ppppppbVar43,0);
                  }
                  pppppppbVar44[6] = ppppppbVar36;
                  pppppppbVar44[7] = ppppppbVar36;
                  pppppppbVar44[8] = (byte ******)((long)ppppppbVar43 + (long)ppppppbVar36);
                  lVar38 = 0;
                  do {
                    func_0x0c6e7560((long)ppppppbVar36 + lVar38,
                                    (byte *)((long)pppppppbVar28 + lVar38));
                    lVar30 = lVar38 + 0xa8;
                    lVar38 = lVar38 + 0xa8;
                  } while ((byte ******)((long)pppppppbVar28 + lVar30) != param_2);
                  pppppppbVar44[7] = (byte ******)((long)ppppppbVar36 + lVar38);
                  goto LAB_0b08bcbf;
                }
                goto LAB_0b08dd71;
              }
LAB_0b08bcbf:
              *(byte *)(pppppppbVar44 + 0x11) = *(byte *)(pppppppbVar26 + 0x11);
              uVar7 = *(undefined4 *)(pppppppbVar26 + 9);
              uVar8 = *(undefined4 *)((long)pppppppbVar26 + 0x4c);
              uVar9 = *(undefined4 *)(pppppppbVar26 + 10);
              uVar10 = *(undefined4 *)((long)pppppppbVar26 + 0x54);
              uVar11 = *(undefined4 *)(pppppppbVar26 + 0xb);
              uVar12 = *(undefined4 *)((long)pppppppbVar26 + 0x5c);
              uVar13 = *(undefined4 *)(pppppppbVar26 + 0xc);
              uVar14 = *(undefined4 *)((long)pppppppbVar26 + 100);
              uVar15 = *(undefined4 *)(pppppppbVar26 + 0xd);
              uVar16 = *(undefined4 *)((long)pppppppbVar26 + 0x6c);
              uVar17 = *(undefined4 *)(pppppppbVar26 + 0xe);
              uVar18 = *(undefined4 *)((long)pppppppbVar26 + 0x74);
              uVar19 = *(undefined4 *)((long)pppppppbVar26 + 0x7c);
              uVar20 = *(undefined4 *)(pppppppbVar26 + 0x10);
              uVar21 = *(undefined4 *)((long)pppppppbVar26 + 0x84);
              *(undefined4 *)(pppppppbVar44 + 0xf) = *(undefined4 *)(pppppppbVar26 + 0xf);
              *(undefined4 *)((long)pppppppbVar44 + 0x7c) = uVar19;
              *(undefined4 *)(pppppppbVar44 + 0x10) = uVar20;
              *(undefined4 *)((long)pppppppbVar44 + 0x84) = uVar21;
              *(undefined4 *)(pppppppbVar44 + 0xd) = uVar15;
              *(undefined4 *)((long)pppppppbVar44 + 0x6c) = uVar16;
              *(undefined4 *)(pppppppbVar44 + 0xe) = uVar17;
              *(undefined4 *)((long)pppppppbVar44 + 0x74) = uVar18;
              *(undefined4 *)(pppppppbVar44 + 0xb) = uVar11;
              *(undefined4 *)((long)pppppppbVar44 + 0x5c) = uVar12;
              *(undefined4 *)(pppppppbVar44 + 0xc) = uVar13;
              *(undefined4 *)((long)pppppppbVar44 + 100) = uVar14;
              *(undefined4 *)(pppppppbVar44 + 9) = uVar7;
              *(undefined4 *)((long)pppppppbVar44 + 0x4c) = uVar8;
              *(undefined4 *)(pppppppbVar44 + 10) = uVar9;
              *(undefined4 *)((long)pppppppbVar44 + 0x54) = uVar10;
              pppppppbStack_78 = pppppppbVar44 + 0x12;
              if (((ulong)pppppppbVar26[0x12] & 1) == 0) {
                pppppppbVar44[0x14] = pppppppbVar26[0x14];
                ppppppbVar43 = pppppppbVar26[0x13];
                *pppppppbStack_78 = pppppppbVar26[0x12];
                pppppppbVar44[0x13] = ppppppbVar43;
              }
              else {
                func_0x0412e5e0(pppppppbStack_78,pppppppbVar26[0x14],pppppppbVar26[0x13]);
              }
              pppppppbVar44[0x15] = (byte ******)&UNK_0f395808;
              *(undefined4 *)(pppppppbVar44 + 0x16) = *(undefined4 *)(pppppppbVar26 + 0x16);
              pppppppbStack_348 = pppppppbVar44 + 0x17;
              pppppppbVar44[0x17] = (byte ******)0x0;
              pppppppbVar44[0x18] = (byte ******)0x0;
              pppppppbVar44[0x19] = (byte ******)0x0;
              ppppppbVar27 = pppppppbVar26[0x17];
              param_2 = pppppppbVar26[0x18];
              ppppppbStack_340 = (byte ******)((ulong)ppppppbStack_340 & 0xffffffffffffff00);
              ppppppbVar43 = (byte ******)((long)param_2 - (long)ppppppbVar27);
              pppppppbStack_80 = pppppppbStack_348;
              if (ppppppbVar43 != (byte ******)0x0) {
                if (-1 < (long)ppppppbVar43) {
                  pppppppbVar28 =
                       (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppppppbVar43)
                  ;
                  if (pppppppbVar28 == (byte *******)0x0) {
                    func_0x0eec74c0(ppppppbVar43,0);
                  }
                  pppppppbVar44[0x17] = (byte ******)pppppppbVar28;
                  pppppppbVar44[0x18] = (byte ******)pppppppbVar28;
                  pppppppbVar44[0x19] = (byte ******)((long)ppppppbVar43 + (long)pppppppbVar28);
                  do {
                    pppppbVar33 = ppppppbVar27[1];
                    ppppppbVar43 = (byte ******)ppppppbVar27[1];
                    *pppppppbVar28 = (byte ******)*ppppppbVar27;
                    pppppppbVar28[1] = ppppppbVar43;
                    if (pppppbVar33 != (byte *****)0x0) {
                      LOCK();
                      pppppbVar33 = pppppbVar33 + 1;
                      *pppppbVar33 = (byte ****)((long)*pppppbVar33 + 1);
                      UNLOCK();
                    }
                    ppppppbVar27 = ppppppbVar27 + 2;
                    pppppppbVar28 = pppppppbVar28 + 2;
                  } while (ppppppbVar27 != param_2);
                  pppppppbVar44[0x18] = (byte ******)pppppppbVar28;
                  goto LAB_0b08be27;
                }
                goto LAB_0b08dd76;
              }
LAB_0b08be27:
              pppppppbStack_348 = pppppppbVar44 + 0x1a;
              pppppppbVar44[0x1a] = (byte ******)0x0;
              pppppppbVar44[0x1b] = (byte ******)0x0;
              pppppppbVar44[0x1c] = (byte ******)0x0;
              ppppppbVar27 = pppppppbVar26[0x1a];
              ppppppbVar43 = pppppppbVar26[0x1b];
              ppppppbStack_340 = (byte ******)((ulong)ppppppbStack_340 & 0xffffffffffffff00);
              param_2 = (byte ******)((long)ppppppbVar43 - (long)ppppppbVar27);
              if (param_2 != (byte ******)0x0) {
                if ((long)param_2 < 0) goto LAB_0b08dd6c;
                ppppppbVar36 = (byte ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_2);
                if (ppppppbVar36 == (byte ******)0x0) {
                  func_0x0eec74c0(param_2,0);
                }
                pppppppbVar44[0x1a] = ppppppbVar36;
                pppppppbVar44[0x1b] = ppppppbVar36;
                pppppppbVar44[0x1c] = (byte ******)((long)param_2 + (long)ppppppbVar36);
                do {
                  pppppbVar33 = ppppppbVar27[1];
                  uVar7 = *(undefined4 *)((long)ppppppbVar27 + 4);
                  uVar8 = *(undefined4 *)(ppppppbVar27 + 1);
                  uVar9 = *(undefined4 *)((long)ppppppbVar27 + 0xc);
                  *(undefined4 *)ppppppbVar36 = *(undefined4 *)ppppppbVar27;
                  *(undefined4 *)((long)ppppppbVar36 + 4) = uVar7;
                  *(undefined4 *)(ppppppbVar36 + 1) = uVar8;
                  *(undefined4 *)((long)ppppppbVar36 + 0xc) = uVar9;
                  if (pppppbVar33 != (byte *****)0x0) {
                    LOCK();
                    pppppbVar33 = pppppbVar33 + 1;
                    *pppppbVar33 = (byte ****)((long)*pppppbVar33 + 1);
                    UNLOCK();
                  }
                  ppppppbVar27 = ppppppbVar27 + 2;
                  ppppppbVar36 = ppppppbVar36 + 2;
                } while (ppppppbVar27 != ppppppbVar43);
                pppppppbVar44[0x1b] = ppppppbVar36;
              }
              param_2 = ppppppbStack_278;
              pppppppbVar44[0x15] = (byte ******)&UNK_0ef516f8;
              pppppppbVar26 = pppppppbVar26 + 0x1d;
              pppppppbVar44 = pppppppbVar44 + 0x1d;
              uVar46 = uVar46 + 0xe8;
              pppppppbVar28 = pppppppbStack_90;
            } while (pppppppbVar26 != pppppppbStack_260);
            do {
              pppppppbVar28[0x15] = (byte ******)&UNK_0f395808;
              ppppppbVar43 = pppppppbVar28[0x1a];
              if (ppppppbVar43 != (byte ******)0x0) {
                ppppppbVar36 = pppppppbVar28[0x1b];
                ppppppbVar27 = ppppppbVar43;
                if (ppppppbVar43 != ppppppbVar36) {
                  do {
                    pppppbVar33 = ppppppbVar36[-1];
                    if (pppppbVar33 != (byte *****)0x0) {
                      LOCK();
                      pppppbVar32 = pppppbVar33 + 1;
                      ppppbVar2 = *pppppbVar32;
                      *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
                      UNLOCK();
                      if (ppppbVar2 == (byte ****)0x0) {
                        (*(code *)(*pppppbVar33)[2])(pppppbVar33);
                        FUN_0412c2d0(pppppbVar33);
                      }
                    }
                    ppppppbVar36 = ppppppbVar36 + -2;
                  } while (ppppppbVar36 != ppppppbVar43);
                  ppppppbVar27 = pppppppbVar28[0x1a];
                }
                pppppppbVar28[0x1b] = ppppppbVar43;
                func_0x0412a280(ppppppbVar27,(long)pppppppbVar28[0x1c] - (long)ppppppbVar27);
              }
              ppppppbVar43 = pppppppbVar28[0x17];
              if (ppppppbVar43 != (byte ******)0x0) {
                ppppppbVar36 = pppppppbVar28[0x18];
                ppppppbVar27 = ppppppbVar43;
                if (ppppppbVar43 != ppppppbVar36) {
                  do {
                    pppppbVar33 = ppppppbVar36[-1];
                    if (pppppbVar33 != (byte *****)0x0) {
                      LOCK();
                      pppppbVar32 = pppppbVar33 + 1;
                      ppppbVar2 = *pppppbVar32;
                      *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
                      UNLOCK();
                      if (ppppbVar2 == (byte ****)0x0) {
                        (*(code *)(*pppppbVar33)[2])(pppppbVar33);
                        FUN_0412c2d0(pppppbVar33);
                      }
                    }
                    ppppppbVar36 = ppppppbVar36 + -2;
                  } while (ppppppbVar36 != ppppppbVar43);
                  ppppppbVar27 = pppppppbVar28[0x17];
                }
                pppppppbVar28[0x18] = ppppppbVar43;
                func_0x0412a280(ppppppbVar27,(long)pppppppbVar28[0x19] - (long)ppppppbVar27);
              }
              if (((ulong)pppppppbVar28[0x12] & 1) != 0) {
                func_0x0412a280(pppppppbVar28[0x14],(ulong)pppppppbVar28[0x12] & 0xfffffffffffffffe)
                ;
              }
              ppppppbVar43 = pppppppbVar28[6];
              if (ppppppbVar43 != (byte ******)0x0) {
                ppppppbVar36 = pppppppbVar28[7];
                ppppppbVar27 = ppppppbVar43;
                if (ppppppbVar43 != ppppppbVar36) {
                  do {
                    if (((ppppppbVar36[-1] != ppppppbVar36[-3]) ||
                        (*(int *)(ppppppbVar36 + -2) != 0)) &&
                       (cVar23 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,
                                              &UNK_013a8ed3), cVar23 != '\0')) {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                    pppppbVar33 = ppppppbVar36[-9];
                    if (pppppbVar33 != (byte *****)0x0) {
                      ppppppbVar36[-8] = pppppbVar33;
                      func_0x0412a280(pppppbVar33,(long)ppppppbVar36[-7] - (long)pppppbVar33);
                    }
                    pppppbVar33 = ppppppbVar36[-0xc];
                    if (pppppbVar33 != (byte *****)0x0) {
                      pppppbVar32 = ppppppbVar36[-0xb];
                      pppppbVar41 = pppppbVar33;
                      if (pppppbVar33 != pppppbVar32) {
                        do {
                          if (((ulong)pppppbVar32[-4] & 1) == 0) {
                            bVar3 = *(byte *)(pppppbVar32 + -8);
                          }
                          else {
                            func_0x0412a280(pppppbVar32[-2],
                                            (ulong)pppppbVar32[-4] & 0xfffffffffffffffe);
                            bVar3 = *(byte *)(pppppbVar32 + -8);
                          }
                          if ((bVar3 & 1) != 0) {
                            func_0x0412a280(pppppbVar32[-6],
                                            (ulong)pppppbVar32[-8] & 0xfffffffffffffffe);
                          }
                          pppppbVar32 = pppppbVar32 + -9;
                        } while (pppppbVar32 != pppppbVar33);
                        pppppbVar41 = ppppppbVar36[-0xc];
                      }
                      ppppppbVar36[-0xb] = pppppbVar33;
                      func_0x0412a280(pppppbVar41,(long)ppppppbVar36[-10] - (long)pppppbVar41);
                    }
                    pppppbVar33 = ppppppbVar36[-0xd];
                    if (pppppbVar33 == (byte *****)0x0) {
LAB_0b08c1df:
                      bVar3 = *(byte *)(ppppppbVar36 + -0x13);
                    }
                    else {
                      LOCK();
                      pppppbVar32 = pppppbVar33 + 1;
                      ppppbVar2 = *pppppbVar32;
                      *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
                      UNLOCK();
                      if (ppppbVar2 != (byte ****)0x0) goto LAB_0b08c1df;
                      (*(code *)(*pppppbVar33)[2])(pppppbVar33);
                      FUN_0412c2d0(pppppbVar33);
                      bVar3 = *(byte *)(ppppppbVar36 + -0x13);
                    }
                    if ((bVar3 & 1) != 0) {
                      func_0x0412a280(ppppppbVar36[-0x11],
                                      (ulong)ppppppbVar36[-0x13] & 0xfffffffffffffffe);
                    }
                    ppppppbVar36 = ppppppbVar36 + -0x15;
                  } while (ppppppbVar43 != ppppppbVar36);
                  ppppppbVar27 = pppppppbVar28[6];
                }
                pppppppbVar28[7] = ppppppbVar43;
                func_0x0412a280(ppppppbVar27,(long)pppppppbVar28[8] - (long)ppppppbVar27);
              }
              ppppppbVar43 = pppppppbVar28[3];
              if (ppppppbVar43 != (byte ******)0x0) {
                ppppppbVar36 = pppppppbVar28[4];
                ppppppbVar27 = ppppppbVar43;
                if (ppppppbVar43 != ppppppbVar36) {
                  do {
                    if (((ppppppbVar36[-1] != ppppppbVar36[-3]) ||
                        (*(int *)(ppppppbVar36 + -2) != 0)) &&
                       (cVar23 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,
                                              &UNK_013a8ed3), cVar23 != '\0')) {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                    pppppbVar33 = ppppppbVar36[-9];
                    if (pppppbVar33 != (byte *****)0x0) {
                      ppppppbVar36[-8] = pppppbVar33;
                      func_0x0412a280(pppppbVar33,(long)ppppppbVar36[-7] - (long)pppppbVar33);
                    }
                    pppppbVar33 = ppppppbVar36[-0xc];
                    if (pppppbVar33 != (byte *****)0x0) {
                      pppppbVar32 = ppppppbVar36[-0xb];
                      pppppbVar41 = pppppbVar33;
                      if (pppppbVar33 != pppppbVar32) {
                        do {
                          if (((ulong)pppppbVar32[-4] & 1) == 0) {
                            bVar3 = *(byte *)(pppppbVar32 + -8);
                          }
                          else {
                            func_0x0412a280(pppppbVar32[-2],
                                            (ulong)pppppbVar32[-4] & 0xfffffffffffffffe);
                            bVar3 = *(byte *)(pppppbVar32 + -8);
                          }
                          if ((bVar3 & 1) != 0) {
                            func_0x0412a280(pppppbVar32[-6],
                                            (ulong)pppppbVar32[-8] & 0xfffffffffffffffe);
                          }
                          pppppbVar32 = pppppbVar32 + -9;
                        } while (pppppbVar32 != pppppbVar33);
                        pppppbVar41 = ppppppbVar36[-0xc];
                      }
                      ppppppbVar36[-0xb] = pppppbVar33;
                      func_0x0412a280(pppppbVar41,(long)ppppppbVar36[-10] - (long)pppppbVar41);
                    }
                    pppppbVar33 = ppppppbVar36[-0xd];
                    if (pppppbVar33 == (byte *****)0x0) {
LAB_0b08c37f:
                      bVar3 = *(byte *)(ppppppbVar36 + -0x13);
                    }
                    else {
                      LOCK();
                      pppppbVar32 = pppppbVar33 + 1;
                      ppppbVar2 = *pppppbVar32;
                      *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
                      UNLOCK();
                      if (ppppbVar2 != (byte ****)0x0) goto LAB_0b08c37f;
                      (*(code *)(*pppppbVar33)[2])(pppppbVar33);
                      FUN_0412c2d0(pppppbVar33);
                      bVar3 = *(byte *)(ppppppbVar36 + -0x13);
                    }
                    if ((bVar3 & 1) != 0) {
                      func_0x0412a280(ppppppbVar36[-0x11],
                                      (ulong)ppppppbVar36[-0x13] & 0xfffffffffffffffe);
                    }
                    ppppppbVar36 = ppppppbVar36 + -0x15;
                  } while (ppppppbVar43 != ppppppbVar36);
                  ppppppbVar27 = pppppppbVar28[3];
                }
                pppppppbVar28[4] = ppppppbVar43;
                func_0x0412a280(ppppppbVar27,(long)pppppppbVar28[5] - (long)ppppppbVar27);
              }
              ppppppbVar43 = *pppppppbVar28;
              if (ppppppbVar43 != (byte ******)0x0) {
                ppppppbVar36 = pppppppbVar28[1];
                ppppppbVar27 = ppppppbVar43;
                if (ppppppbVar43 != ppppppbVar36) {
                  do {
                    if (((ppppppbVar36[-1] != ppppppbVar36[-3]) ||
                        (*(int *)(ppppppbVar36 + -2) != 0)) &&
                       (cVar23 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,
                                              &UNK_013a8ed3), cVar23 != '\0')) {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                    pppppbVar33 = ppppppbVar36[-9];
                    if (pppppbVar33 != (byte *****)0x0) {
                      ppppppbVar36[-8] = pppppbVar33;
                      func_0x0412a280(pppppbVar33,(long)ppppppbVar36[-7] - (long)pppppbVar33);
                    }
                    pppppbVar33 = ppppppbVar36[-0xc];
                    if (pppppbVar33 != (byte *****)0x0) {
                      pppppbVar32 = ppppppbVar36[-0xb];
                      pppppbVar41 = pppppbVar33;
                      if (pppppbVar33 != pppppbVar32) {
                        do {
                          if (((ulong)pppppbVar32[-4] & 1) == 0) {
                            bVar3 = *(byte *)(pppppbVar32 + -8);
                          }
                          else {
                            func_0x0412a280(pppppbVar32[-2],
                                            (ulong)pppppbVar32[-4] & 0xfffffffffffffffe);
                            bVar3 = *(byte *)(pppppbVar32 + -8);
                          }
                          if ((bVar3 & 1) != 0) {
                            func_0x0412a280(pppppbVar32[-6],
                                            (ulong)pppppbVar32[-8] & 0xfffffffffffffffe);
                          }
                          pppppbVar32 = pppppbVar32 + -9;
                        } while (pppppbVar32 != pppppbVar33);
                        pppppbVar41 = ppppppbVar36[-0xc];
                      }
                      ppppppbVar36[-0xb] = pppppbVar33;
                      func_0x0412a280(pppppbVar41,(long)ppppppbVar36[-10] - (long)pppppbVar41);
                    }
                    pppppbVar33 = ppppppbVar36[-0xd];
                    if (pppppbVar33 == (byte *****)0x0) {
LAB_0b08c51f:
                      bVar3 = *(byte *)(ppppppbVar36 + -0x13);
                    }
                    else {
                      LOCK();
                      pppppbVar32 = pppppbVar33 + 1;
                      ppppbVar2 = *pppppbVar32;
                      *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
                      UNLOCK();
                      if (ppppbVar2 != (byte ****)0x0) goto LAB_0b08c51f;
                      (*(code *)(*pppppbVar33)[2])(pppppbVar33);
                      FUN_0412c2d0(pppppbVar33);
                      bVar3 = *(byte *)(ppppppbVar36 + -0x13);
                    }
                    if ((bVar3 & 1) != 0) {
                      func_0x0412a280(ppppppbVar36[-0x11],
                                      (ulong)ppppppbVar36[-0x13] & 0xfffffffffffffffe);
                    }
                    ppppppbVar36 = ppppppbVar36 + -0x15;
                  } while (ppppppbVar43 != ppppppbVar36);
                  ppppppbVar27 = *pppppppbVar28;
                }
                pppppppbVar28[1] = ppppppbVar43;
                func_0x0412a280(ppppppbVar27,(long)pppppppbVar28[2] - (long)ppppppbVar27);
              }
              pppppppbVar28 = pppppppbVar28 + 0x1d;
              pppppppbVar26 = pppppppbStack_98;
              ppppppbVar43 = ppppppbStack_e8;
              pppppppbVar44 = pppppppbStack_b8;
            } while (pppppppbVar28 != pppppppbStack_260);
          }
          pppppbVar33 = pppppbStack_268;
          pppppppbVar28 = pppppppbStack_2c8;
          pppppppbStack_2c8 = pppppppbStack_310;
          if (pppppppbStack_2d8 != (byte *******)0x0) {
            lVar38 = (long)pppppppbVar28 - (long)pppppppbStack_2d8;
            pppppppbVar28 = pppppppbStack_2d8;
            pppppppbStack_2d8 = pppppppbVar44;
            pppppppbStack_2d0 = pppppppbVar26;
            func_0x0412a280(pppppppbVar28,lVar38);
            pppppppbVar44 = pppppppbStack_2d8;
          }
          goto LAB_0b08c5cd;
        }
        if (uVar46 < 0x11a7b9611a7b962) {
          ppppppbVar27 = (byte ******)(uVar46 * 0xe8);
          pppppppbVar26 =
               (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppppppbVar27);
          if (pppppppbVar26 == (byte *******)0x0) {
            func_0x0eec74c0(ppppppbVar27,0);
            pppppppbVar26 = (byte *******)0x0;
          }
          goto LAB_0b08b96b;
        }
        goto LAB_0b08ddda;
      }
LAB_0b08c609:
      _auStack_328 = (byte *******)0x0;
      uStack_320 = (byte *******)0x0;
      pppppppbStack_318 = (byte *******)0x0;
      _auStack_258 = (byte *******)auStack_328;
      uStack_250 = _auStack_258;
      if ((ulong)*(uint *)(pppppbVar33 + 0x2a) == 0xffffffff) goto LAB_0b08ddad;
      pppppppbStack_2b8 = (byte *******)auStack_258;
      (**(code **)(&UNK_0f280e78 + (ulong)*(uint *)(pppppbVar33 + 0x2a) * 8))
                (&pppppppbStack_2b8,pppppbVar33 + 0x22);
      uStack_2f8 = (byte ******)0x0;
      uStack_2f0 = (byte ******)0x0;
      ppppbStack_2e8 = (byte ****)0x0;
      _auStack_258 = (byte *******)&uStack_2f8;
      uStack_250 = _auStack_258;
      if ((ulong)*(uint *)(pppppbVar33 + 0x2f) == 0xffffffff) goto LAB_0b08ddb2;
      pppppppbStack_2b8 = (byte *******)auStack_258;
      (**(code **)(&UNK_0f280e88 + (ulong)*(uint *)(pppppbVar33 + 0x2f) * 8))
                (&pppppppbStack_2b8,pppppbVar33 + 0x2b);
      pppppppbVar44 = uStack_320;
      pppppppbVar26 = _auStack_328;
      _auStack_258 = (byte *******)CONCAT44(uStack_254,*(undefined4 *)pppppbVar33);
      pppppppbStack_2b8 = (byte *******)&uStack_250;
      uStack_250 = (byte *******)0x0;
      pppppppbStack_248 = (byte *******)0x0;
      ppppppbStack_240 = (byte ******)0x0;
      pppppppbStack_2b0 = (byte *******)((ulong)pppppppbStack_2b0 & 0xffffffffffffff00);
      lVar38 = (long)uStack_320 - (long)_auStack_328;
      if (lVar38 != 0) {
        if (-1 < lVar38) {
          pppppppbVar28 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar38);
          if (pppppppbVar28 == (byte *******)0x0) {
            func_0x0eec74c0(lVar38,0);
          }
          ppppppbStack_240 = (byte ******)((long)pppppppbVar28 + lVar38);
          uStack_250 = pppppppbVar28;
          pppppppbStack_248 = pppppppbVar28;
          pppppppbStack_248 =
               (byte *******)func_0x0b0bc2c0(&uStack_250,pppppppbVar26,pppppppbVar44,pppppppbVar28);
          goto LAB_0b08c772;
        }
        goto LAB_0b08ddc1;
      }
LAB_0b08c772:
      uStack_238 = (byte ******)0x0;
      uStack_230 = (byte *)0x0;
      pppppppbStack_228 = (byte *******)0x0;
      func_0x0b0bc3f0();
      pppppbVar33 = pppppbStack_268;
      pppppppbStack_220 = (byte *******)((ulong)pppppppbStack_220 & 0xffffffffffffff00);
      uStack_168 = 0xffffffff;
      uVar4 = *(uint *)(pppppbStack_268 + 0x4f);
      if ((ulong)uVar4 != 0xffffffff) {
        pppppppbStack_2b8 = (byte *******)&pppppppbStack_220;
        (**(code **)(&UNK_0f280d58 + (ulong)uVar4 * 8))(&pppppppbStack_2b8,pppppbStack_268 + 0x38);
        uStack_168 = uVar4;
      }
      if (*(char *)(pppppbVar33 + 0x59) == '\x01') {
        if (((ulong)pppppbVar33[0x56] & 1) == 0) {
          ppppppbStack_338 = (byte ******)pppppbVar33[0x58];
          pppppppbStack_348 = (byte *******)pppppbVar33[0x56];
          ppppppbStack_340 = (byte ******)pppppbVar33[0x57];
        }
        else {
          func_0x0412e5e0(&pppppppbStack_348,pppppbVar33[0x58],pppppbVar33[0x57]);
        }
      }
      else {
        pppppppbStack_348 = (byte *******)0x0;
        ppppppbStack_340 = (byte ******)0x0;
        ppppppbStack_338 = (byte ******)0x0;
      }
      uVar4 = uStack_168;
      ppppppbStack_150 = ppppppbStack_338;
      pppppppbStack_160 = pppppppbStack_348;
      ppppppbStack_158 = ppppppbStack_340;
      pppppppbStack_348 = (byte *******)0x0;
      ppppppbStack_340 = (byte ******)0x0;
      ppppppbStack_338 = (byte ******)0x0;
      pppppbVar33 = param_2[0x11];
      if (param_2[0x12] <= pppppbVar33) {
        lVar38 = (long)pppppbVar33 - (long)*ppppppbVar43;
        uVar46 = (lVar38 >> 4) * -0xf0f0f0f0f0f0f0f + 1;
        if (0xf0f0f0f0f0f0f0 < uVar46) goto LAB_0b08ddd0;
        lVar30 = (long)param_2[0x12] - (long)*ppppppbVar43 >> 4;
        uVar6 = lVar30 * -0x1e1e1e1e1e1e1e1e;
        if (uVar46 < uVar6) {
          uVar46 = uVar6;
        }
        if (0x78787878787877 < (ulong)(lVar30 * -0xf0f0f0f0f0f0f0f)) {
          uVar46 = 0xf0f0f0f0f0f0f0;
        }
        ppppppbStack_298 = ppppppbVar43;
        if (uVar46 == 0) {
          pppppppbVar26 = (byte *******)0x0;
LAB_0b08ca5f:
          uVar4 = uStack_168;
          pppppppbVar44 = (byte *******)((long)pppppppbVar26 + lVar38);
          pppppppbStack_2a0 = pppppppbVar26 + uVar46 * 0x22;
          *(undefined1 (*) [4])((long)pppppppbVar26 + lVar38) = auStack_258;
          pbVar37 = (byte *)((long)pppppppbVar26 + lVar38 + 8);
          *(byte ********)pbVar37 = uStack_250;
          *(byte ********)(pbVar37 + 8) = pppppppbStack_248;
          *(byte *******)((long)pppppppbVar26 + lVar38 + 0x18) = ppppppbStack_240;
          uStack_250 = (byte *******)0x0;
          pppppppbStack_248 = (byte *******)0x0;
          ppppppbStack_240 = (byte ******)0x0;
          pbVar37 = (byte *)((long)pppppppbVar26 + lVar38 + 0x20);
          *(undefined4 *)pbVar37 = (undefined4)uStack_238;
          *(undefined4 *)(pbVar37 + 4) = uStack_238._4_4_;
          *(undefined4 *)(pbVar37 + 8) = (undefined4)uStack_230;
          *(undefined4 *)(pbVar37 + 0xc) = uStack_230._4_4_;
          *(byte ********)((long)pppppppbVar26 + lVar38 + 0x30) = pppppppbStack_228;
          uStack_238 = (byte ******)0x0;
          uStack_230 = (byte *)0x0;
          pppppppbStack_228 = (byte *******)0x0;
          *(byte *)((long)pppppppbVar26 + lVar38 + 0x38) = 0;
          pbVar37 = (byte *)((long)pppppppbVar26 + lVar38 + 0xf0);
          pbVar37[0] = 0xff;
          pbVar37[1] = 0xff;
          pbVar37[2] = 0xff;
          pbVar37[3] = 0xff;
          pppppppbStack_2b8 = pppppppbVar26;
          pppppppbStack_2b0 = pppppppbVar44;
          if ((ulong)uStack_168 != 0xffffffff) {
            pbStack_70 = (byte *)((long)pppppppbVar26 + lVar38 + 0x38);
            pppppppbStack_2a8 = pppppppbVar44;
            (**(code **)(&UNK_0f280d58 + (ulong)uStack_168 * 8))(&pbStack_70,&pppppppbStack_220);
            *(uint *)(pppppppbVar44 + 0x1e) = uVar4;
          }
          pppppppbVar44[0x21] = ppppppbStack_150;
          pppppppbVar44[0x1f] = (byte ******)pppppppbStack_160;
          pppppppbVar44[0x20] = ppppppbStack_158;
          pppppppbStack_160 = (byte *******)0x0;
          ppppppbStack_158 = (byte ******)0x0;
          ppppppbStack_150 = (byte ******)0x0;
          pppppppbStack_2a8 = pppppppbVar44 + 0x22;
          func_0x0b0ba2f0(ppppppbVar43,&pppppppbStack_2b8);
          pppppppbVar26 = pppppppbStack_2b0;
          pppppbVar33 = param_2[0x11];
          while (pppppppbVar26 != pppppppbStack_2a8) {
            pppppppbStack_2a8 = pppppppbStack_2a8 + -0x22;
            func_0x0b0b9de0();
          }
          if (pppppppbStack_2b8 != (byte *******)0x0) {
            func_0x0412a280(pppppppbStack_2b8,(long)pppppppbStack_2a0 - (long)pppppppbStack_2b8);
          }
          goto LAB_0b08cbfe;
        }
        if (uVar46 < 0xf0f0f0f0f0f0f1) {
          pppppppbVar26 =
               (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46 * 0x110);
          if (pppppppbVar26 == (byte *******)0x0) {
            func_0x0eec74c0(uVar46 * 0x110,0);
            pppppppbVar26 = (byte *******)0x0;
          }
          goto LAB_0b08ca5f;
        }
        goto LAB_0b08ddd5;
      }
      *(undefined1 (*) [4])pppppbVar33 = auStack_258;
      pppppbVar33[1] = (byte ****)0x0;
      pppppbVar33[2] = (byte ****)0x0;
      pppppbVar33[3] = (byte ****)0x0;
      pppppbVar33[1] = (byte ****)uStack_250;
      pppppbVar33[2] = (byte ****)pppppppbStack_248;
      pppppbVar33[3] = (byte ****)ppppppbStack_240;
      uStack_250 = (byte *******)0x0;
      pppppppbStack_248 = (byte *******)0x0;
      ppppppbStack_240 = (byte ******)0x0;
      pppppbVar33[4] = (byte ****)0x0;
      pppppbVar33[5] = (byte ****)0x0;
      pppppbVar33[6] = (byte ****)0x0;
      *(undefined4 *)(pppppbVar33 + 4) = (undefined4)uStack_238;
      *(undefined4 *)((long)pppppbVar33 + 0x24) = uStack_238._4_4_;
      *(undefined4 *)(pppppbVar33 + 5) = (undefined4)uStack_230;
      *(undefined4 *)((long)pppppbVar33 + 0x2c) = uStack_230._4_4_;
      pppppbVar33[6] = (byte ****)pppppppbStack_228;
      uStack_238 = (byte ******)0x0;
      uStack_230 = (byte *)0x0;
      pppppppbStack_228 = (byte *******)0x0;
      *(undefined1 *)(pppppbVar33 + 7) = 0;
      *(undefined4 *)(pppppbVar33 + 0x1e) = 0xffffffff;
      if ((ulong)uStack_168 != 0xffffffff) {
        pppppppbStack_2b8 = (byte *******)(pppppbVar33 + 7);
        (**(code **)(&UNK_0f280d58 + (ulong)uStack_168 * 8))(&pppppppbStack_2b8,&pppppppbStack_220);
        *(uint *)(pppppbVar33 + 0x1e) = uVar4;
      }
      pppppbVar33[0x21] = (byte ****)ppppppbStack_150;
      pppppbVar33[0x1f] = (byte ****)pppppppbStack_160;
      pppppbVar33[0x20] = (byte ****)ppppppbStack_158;
      pppppppbStack_160 = (byte *******)0x0;
      ppppppbStack_158 = (byte ******)0x0;
      ppppppbStack_150 = (byte ******)0x0;
      pppppbVar33 = pppppbVar33 + 0x22;
LAB_0b08cbfe:
      param_2[0x11] = pppppbVar33;
      func_0x0b0b9de0(auStack_258);
      if (((ulong)pppppppbStack_348 & 1) != 0) {
        func_0x0412a280(ppppppbStack_338,(ulong)pppppppbStack_348 & 0xfffffffffffffffe);
      }
      ppppppbVar27 = uStack_2f8;
      ppppppbVar36 = uStack_2f0;
      if (uStack_2f8 != (byte ******)0x0) {
        for (; ppppppbVar27 != ppppppbVar36; ppppppbVar36 = ppppppbVar36 + -4) {
          if (((ulong)ppppppbVar36[-3] & 1) != 0) {
            func_0x0412a280(ppppppbVar36[-1],(ulong)ppppppbVar36[-3] & 0xfffffffffffffffe);
          }
        }
        uStack_2f0 = ppppppbVar27;
        func_0x0412a280(uStack_2f8,(long)ppppbStack_2e8 - (long)uStack_2f8);
      }
      pppppppbVar44 = _auStack_328;
      pppppppbVar26 = uStack_320;
      if (_auStack_328 != (byte *******)0x0) {
        for (; pppppppbVar44 != pppppppbVar26; pppppppbVar26 = pppppppbVar26 + -8) {
          if (((ulong)pppppppbVar26[-3] & 1) == 0) {
            bVar3 = *(byte *)(pppppppbVar26 + -6);
          }
          else {
            func_0x0412a280(pppppppbVar26[-1],(ulong)pppppppbVar26[-3] & 0xfffffffffffffffe);
            bVar3 = *(byte *)(pppppppbVar26 + -6);
          }
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(pppppppbVar26[-4],(ulong)pppppppbVar26[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_320 = pppppppbVar44;
        func_0x0412a280(_auStack_328,(long)pppppppbStack_318 - (long)_auStack_328);
      }
      ppppppbVar27 = ppppppbStack_148;
      ppppppbVar36 = ppppppbStack_140;
      if (ppppppbStack_148 != (byte ******)0x0) {
        for (; ppppppbVar27 != ppppppbVar36; ppppppbVar36 = ppppppbVar36 + -0x15) {
          if (((ppppppbVar36[-1] != ppppppbVar36[-3]) || (*(int *)(ppppppbVar36 + -2) != 0)) &&
             (cVar23 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          pppppbVar33 = ppppppbVar36[-9];
          if (pppppbVar33 != (byte *****)0x0) {
            ppppppbVar36[-8] = pppppbVar33;
            func_0x0412a280(pppppbVar33,(long)ppppppbVar36[-7] - (long)pppppbVar33);
          }
          pppppbVar33 = ppppppbVar36[-0xc];
          if (pppppbVar33 != (byte *****)0x0) {
            pppppbVar32 = ppppppbVar36[-0xb];
            pppppbVar41 = pppppbVar33;
            if (pppppbVar33 != pppppbVar32) {
              do {
                if (((ulong)pppppbVar32[-4] & 1) == 0) {
                  bVar3 = *(byte *)(pppppbVar32 + -8);
                }
                else {
                  func_0x0412a280(pppppbVar32[-2],(ulong)pppppbVar32[-4] & 0xfffffffffffffffe);
                  bVar3 = *(byte *)(pppppbVar32 + -8);
                }
                if ((bVar3 & 1) != 0) {
                  func_0x0412a280(pppppbVar32[-6],(ulong)pppppbVar32[-8] & 0xfffffffffffffffe);
                }
                pppppbVar32 = pppppbVar32 + -9;
              } while (pppppbVar32 != pppppbVar33);
              pppppbVar41 = ppppppbVar36[-0xc];
            }
            ppppppbVar36[-0xb] = pppppbVar33;
            func_0x0412a280(pppppbVar41,(long)ppppppbVar36[-10] - (long)pppppbVar41);
          }
          pppppbVar33 = ppppppbVar36[-0xd];
          if (pppppbVar33 == (byte *****)0x0) {
LAB_0b08ce4f:
            bVar3 = *(byte *)(ppppppbVar36 + -0x13);
          }
          else {
            LOCK();
            pppppbVar32 = pppppbVar33 + 1;
            ppppbVar2 = *pppppbVar32;
            *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
            UNLOCK();
            if (ppppbVar2 != (byte ****)0x0) goto LAB_0b08ce4f;
            (*(code *)(*pppppbVar33)[2])(pppppbVar33);
            FUN_0412c2d0(pppppbVar33);
            bVar3 = *(byte *)(ppppppbVar36 + -0x13);
          }
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(ppppppbVar36[-0x11],(ulong)ppppppbVar36[-0x13] & 0xfffffffffffffffe);
          }
        }
        ppppppbStack_140 = ppppppbVar27;
        func_0x0412a280(ppppppbStack_148,lStack_138 - (long)ppppppbStack_148);
      }
      ppppppbVar27 = ppppppbStack_128;
      ppppppbVar36 = ppppppbStack_120;
      if (ppppppbStack_128 != (byte ******)0x0) {
        for (; ppppppbVar27 != ppppppbVar36; ppppppbVar36 = ppppppbVar36 + -0x15) {
          if (((ppppppbVar36[-1] != ppppppbVar36[-3]) || (*(int *)(ppppppbVar36 + -2) != 0)) &&
             (cVar23 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          pppppbVar33 = ppppppbVar36[-9];
          if (pppppbVar33 != (byte *****)0x0) {
            ppppppbVar36[-8] = pppppbVar33;
            func_0x0412a280(pppppbVar33,(long)ppppppbVar36[-7] - (long)pppppbVar33);
          }
          pppppbVar33 = ppppppbVar36[-0xc];
          if (pppppbVar33 != (byte *****)0x0) {
            pppppbVar32 = ppppppbVar36[-0xb];
            pppppbVar41 = pppppbVar33;
            if (pppppbVar33 != pppppbVar32) {
              do {
                if (((ulong)pppppbVar32[-4] & 1) == 0) {
                  bVar3 = *(byte *)(pppppbVar32 + -8);
                }
                else {
                  func_0x0412a280(pppppbVar32[-2],(ulong)pppppbVar32[-4] & 0xfffffffffffffffe);
                  bVar3 = *(byte *)(pppppbVar32 + -8);
                }
                if ((bVar3 & 1) != 0) {
                  func_0x0412a280(pppppbVar32[-6],(ulong)pppppbVar32[-8] & 0xfffffffffffffffe);
                }
                pppppbVar32 = pppppbVar32 + -9;
              } while (pppppbVar32 != pppppbVar33);
              pppppbVar41 = ppppppbVar36[-0xc];
            }
            ppppppbVar36[-0xb] = pppppbVar33;
            func_0x0412a280(pppppbVar41,(long)ppppppbVar36[-10] - (long)pppppbVar41);
          }
          pppppbVar33 = ppppppbVar36[-0xd];
          if (pppppbVar33 == (byte *****)0x0) {
LAB_0b08cfff:
            bVar3 = *(byte *)(ppppppbVar36 + -0x13);
          }
          else {
            LOCK();
            pppppbVar32 = pppppbVar33 + 1;
            ppppbVar2 = *pppppbVar32;
            *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
            UNLOCK();
            if (ppppbVar2 != (byte ****)0x0) goto LAB_0b08cfff;
            (*(code *)(*pppppbVar33)[2])(pppppbVar33);
            FUN_0412c2d0(pppppbVar33);
            bVar3 = *(byte *)(ppppppbVar36 + -0x13);
          }
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(ppppppbVar36[-0x11],(ulong)ppppppbVar36[-0x13] & 0xfffffffffffffffe);
          }
        }
        ppppppbStack_120 = ppppppbVar27;
        func_0x0412a280(ppppppbStack_128,lStack_118 - (long)ppppppbStack_128);
      }
      ppppppbVar27 = ppppppbStack_108;
      ppppppbVar36 = ppppppbStack_100;
      if (ppppppbStack_108 != (byte ******)0x0) {
        for (; ppppppbVar27 != ppppppbVar36; ppppppbVar36 = ppppppbVar36 + -0x15) {
          if (((ppppppbVar36[-1] != ppppppbVar36[-3]) || (*(int *)(ppppppbVar36 + -2) != 0)) &&
             (cVar23 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
             cVar23 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          pppppbVar33 = ppppppbVar36[-9];
          if (pppppbVar33 != (byte *****)0x0) {
            ppppppbVar36[-8] = pppppbVar33;
            func_0x0412a280(pppppbVar33,(long)ppppppbVar36[-7] - (long)pppppbVar33);
          }
          pppppbVar33 = ppppppbVar36[-0xc];
          if (pppppbVar33 != (byte *****)0x0) {
            pppppbVar32 = ppppppbVar36[-0xb];
            pppppbVar41 = pppppbVar33;
            if (pppppbVar33 != pppppbVar32) {
              do {
                if (((ulong)pppppbVar32[-4] & 1) == 0) {
                  bVar3 = *(byte *)(pppppbVar32 + -8);
                }
                else {
                  func_0x0412a280(pppppbVar32[-2],(ulong)pppppbVar32[-4] & 0xfffffffffffffffe);
                  bVar3 = *(byte *)(pppppbVar32 + -8);
                }
                if ((bVar3 & 1) != 0) {
                  func_0x0412a280(pppppbVar32[-6],(ulong)pppppbVar32[-8] & 0xfffffffffffffffe);
                }
                pppppbVar32 = pppppbVar32 + -9;
              } while (pppppbVar32 != pppppbVar33);
              pppppbVar41 = ppppppbVar36[-0xc];
            }
            ppppppbVar36[-0xb] = pppppbVar33;
            func_0x0412a280(pppppbVar41,(long)ppppppbVar36[-10] - (long)pppppbVar41);
          }
          pppppbVar33 = ppppppbVar36[-0xd];
          if (pppppbVar33 == (byte *****)0x0) {
LAB_0b08d1af:
            bVar3 = *(byte *)(ppppppbVar36 + -0x13);
          }
          else {
            LOCK();
            pppppbVar32 = pppppbVar33 + 1;
            ppppbVar2 = *pppppbVar32;
            *pppppbVar32 = (byte ****)((long)*pppppbVar32 + -1);
            UNLOCK();
            if (ppppbVar2 != (byte ****)0x0) goto LAB_0b08d1af;
            (*(code *)(*pppppbVar33)[2])(pppppbVar33);
            FUN_0412c2d0(pppppbVar33);
            bVar3 = *(byte *)(ppppppbVar36 + -0x13);
          }
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(ppppppbVar36[-0x11],(ulong)ppppppbVar36[-0x13] & 0xfffffffffffffffe);
          }
        }
        ppppppbStack_100 = ppppppbVar27;
        func_0x0412a280(ppppppbStack_108,lStack_f8 - (long)ppppppbStack_108);
      }
      pppppbVar33 = pppppbStack_268 + 0x62;
    } while (pppppbVar33 != pppppbStack_88);
  }
  pppppppbVar44 = pppppppbStack_2d0;
  pppppppbVar26 = pppppppbStack_2d8;
  if (pppppppbStack_2d8 != pppppppbStack_2d0) {
    pppppppbStack_2b8 = pppppppbStack_2d8;
    pppppppbStack_2b0 = pppppppbStack_2d0;
    pppppppbStack_2a8 = pppppppbStack_2c8;
    pppppppbStack_2d8 = (byte *******)0x0;
    pppppppbStack_2d0 = (byte *******)0x0;
    pppppppbStack_2c8 = (byte *******)0x0;
    func_0x0ee34300(auStack_258,0xf76ded8);
    bVar47 = (*(byte *)param_2 & 1) != 0;
    pppppbVar33 = (byte *****)((long)param_2 + 1);
    if (bVar47) {
      pppppbVar33 = param_2[2];
    }
    pppppbVar32 = (byte *****)(ulong)(*(byte *)param_2 >> 1);
    if (bVar47) {
      pppppbVar32 = param_2[1];
    }
    puVar29 = (undefined8 *)FUN_0412f0e0(auStack_258,0,pppppbVar33,pppppbVar32);
    pppppppbStack_318 = (byte *******)puVar29[2];
    _auStack_328 = (byte *******)*puVar29;
    uStack_320 = (byte *******)puVar29[1];
    *puVar29 = 0;
    puVar29[1] = 0;
    puVar29[2] = 0;
    if (((ulong)_auStack_258 & 1) != 0) {
      func_0x0412a280(pppppppbStack_248,(ulong)_auStack_258 & 0xfffffffffffffffe);
    }
    pppppppbVar34 = (byte *******)((ulong)_auStack_328 >> 1 & 0x7f);
    pppppppbVar28 = (byte *******)(auStack_328 + 1);
    if (((ulong)_auStack_328 & 1) != 0) {
      pppppppbVar34 = uStack_320;
      pppppppbVar28 = pppppppbStack_318;
    }
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lVar38 = (long)pppppppbVar44 - (long)pppppppbVar26;
    if (0x11a7b9611a7b961 < (ulong)((lVar38 >> 3) * 0x34f72c234f72c235)) {
LAB_0b08dddf:
      func_0x0b0bb290();
      goto LAB_0b08dde4;
    }
    pppppppbStack_260 = pppppppbVar28;
    lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar38);
    if (lVar30 == 0) {
      func_0x0eec74c0(lVar38,0);
    }
    lVar39 = 0;
    lStack_d8 = lVar30;
    lStack_d0 = lVar30;
    lStack_c8 = lVar38 + lVar30;
    do {
      func_0x0b0bb2a0(lVar30 + lVar39,(byte *)((long)pppppppbVar26 + lVar39));
      lVar22 = lVar39 + 0xe8;
      lVar39 = lVar39 + 0xe8;
    } while ((byte *******)((long)pppppppbVar26 + lVar22) != pppppppbVar44);
    plStack_48 = (long *)0x0;
    lStack_d0 = lVar30 + lVar39;
    plVar31 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar31 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar31 = (long)&UNK_0f280ea8;
    plVar31[1] = lVar30;
    plVar31[2] = lVar30 + lVar39;
    plVar31[3] = lVar38 + lVar30;
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plStack_48 = plVar31;
    func_0x0d233230(uStack_b0,pppppppbStack_260,pppppppbVar34,alStack_68);
    param_2 = ppppppbStack_278;
    if (plStack_48 == alStack_68) {
      (**(code **)(*plStack_48 + 0x20))();
      bVar3 = *(byte *)(param_2 + 0xf);
joined_r0x0b08d5ce:
      if ((bVar3 & 1) != 0) goto LAB_0b08d584;
LAB_0b08d4c1:
      uStack_238 = (byte ******)0x0;
      uStack_230 = (byte *)0x0;
      pppppppbStack_248 = (byte *******)0x0;
      ppppppbStack_240 = (byte ******)0x0;
      _auStack_258 = (byte *******)0x0;
      uStack_250 = (byte *******)0x0;
      pppppppbStack_228 = _auStack_328;
      pppppppbStack_220 = uStack_320;
      pppppppbStack_218 = pppppppbStack_318;
      _auStack_328 = (byte *******)0x0;
      uStack_320 = (byte *******)0x0;
      pppppppbStack_318 = (byte *******)0x0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      func_0x0b0ba080(param_2 + 3,auStack_258);
      if ((uStack_210 & 1) != 0) {
        func_0x0412a280(uStack_200,CONCAT44(uStack_20c,uStack_210) & 0xfffffffffffffffe);
      }
      if (((ulong)pppppppbStack_228 & 1) != 0) {
        func_0x0412a280(pppppppbStack_218,(ulong)pppppppbStack_228 & 0xfffffffffffffffe);
      }
      if (((ulong)ppppppbStack_240 & 1) != 0) {
        func_0x0412a280(uStack_230,(ulong)ppppppbStack_240 & 0xfffffffffffffffe);
      }
      if (((ulong)_auStack_258 & 1) != 0) {
        func_0x0412a280(pppppppbStack_248,(ulong)_auStack_258 & 0xfffffffffffffffe);
      }
      if (((ulong)_auStack_328 & 1) != 0) {
        func_0x0412a280(pppppppbStack_318,(ulong)_auStack_328 & 0xfffffffffffffffe);
      }
    }
    else {
      if (plStack_48 == (long *)0x0) {
        bVar3 = *(byte *)(ppppppbStack_278 + 0xf);
        goto joined_r0x0b08d5ce;
      }
      (**(code **)(*plStack_48 + 0x28))();
      if (((ulong)param_2[0xf] & 1) == 0) goto LAB_0b08d4c1;
LAB_0b08d584:
      if (((ulong)param_2[9] & 1) != 0) {
        func_0x0412a280(param_2[0xb],(ulong)param_2[9] & 0xfffffffffffffffe);
      }
      param_2[0xb] = (byte *****)pppppppbStack_318;
      *(undefined1 (*) [4])(param_2 + 9) = auStack_328;
      *(undefined4 *)((long)param_2 + 0x4c) = uStack_324;
      *(undefined4 *)(param_2 + 10) = (undefined4)uStack_320;
      *(undefined4 *)((long)param_2 + 0x54) = uStack_320._4_4_;
    }
    if (pppppppbVar26 != (byte *******)0x0) {
      do {
        pppppppbVar44 = pppppppbVar44 + -0x1d;
        func_0x0b0b9cd0(pppppppbVar44);
      } while (pppppppbVar44 != pppppppbVar26);
      func_0x0412a280(pppppppbStack_2b8,(long)pppppppbStack_2a8 - (long)pppppppbStack_2b8);
    }
  }
  bVar47 = (*(byte *)param_2 & 1) != 0;
  pppppbVar33 = (byte *****)((long)param_2 + 1);
  if (bVar47) {
    pppppbVar33 = param_2[2];
  }
  pppppbVar32 = (byte *****)(ulong)(*(byte *)param_2 >> 1);
  if (bVar47) {
    pppppbVar32 = param_2[1];
  }
  ppppppbVar43 = (byte ******)&UNK_0124b968;
  pppppppbVar26 = (byte *******)0x13;
  if (pppppbVar32 == (byte *****)0x0) goto LAB_0b08d7c6;
  pppppbVar1 = (byte *****)((long)pppppbVar33 + (long)pppppbVar32);
  pppppbVar41 = pppppbVar33;
  pppppbVar35 = pppppbVar1;
  do {
    while (pppppbVar42 = pppppbVar41, pppppbVar41 = (byte *****)((long)pppppbVar42 + 1),
          *(byte *)pppppbVar42 == 0x6d) {
      if (pppppbVar41 == pppppbVar1) goto LAB_0b08d7bd;
      if (*(byte *)pppppbVar41 == 0x69) {
        if ((byte *****)((long)pppppbVar42 + 2) == pppppbVar1) goto LAB_0b08d7bd;
        if (*(byte *)((long)pppppbVar42 + 2) == 0x6e) {
          if ((byte *****)((long)pppppbVar42 + 3) == pppppbVar1) goto LAB_0b08d7bd;
          if (*(byte *)((long)pppppbVar42 + 3) == 0x65) {
            if ((byte *****)((long)pppppbVar42 + 4) == pppppbVar1) goto LAB_0b08d7bd;
            if (*(byte *)((long)pppppbVar42 + 4) == 99) {
              if ((byte *****)((long)pppppbVar42 + 5) == pppppbVar1) goto LAB_0b08d7bd;
              if (*(byte *)((long)pppppbVar42 + 5) == 0x72) {
                if ((byte *****)((long)pppppbVar42 + 6) == pppppbVar1) goto LAB_0b08d7bd;
                if (*(byte *)((long)pppppbVar42 + 6) == 0x61) {
                  if ((byte *****)((long)pppppbVar42 + 7) == pppppbVar1) goto LAB_0b08d7bd;
                  if (*(byte *)((long)pppppbVar42 + 7) == 0x66) {
                    if (pppppbVar42 + 1 == pppppbVar1) goto LAB_0b08d7bd;
                    if (*(byte *)(pppppbVar42 + 1) == 0x74) {
                      if ((byte *****)((long)pppppbVar42 + 9) == pppppbVar1) goto LAB_0b08d7bd;
                      if (*(byte *)((long)pppppbVar42 + 9) == 0x3a) {
                        pppppbVar35 = pppppbVar42;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } while (pppppbVar41 != pppppbVar1);
LAB_0b08d7bd:
  if (pppppbVar35 != pppppbVar33) goto LAB_0b08d7c6;
  if (pppppbVar32 < (byte *****)0xa) {
LAB_0b08dde4:
    uVar25 = func_0x04882ef0(&UNK_01306d2f);
    func_0x0b0ba280(&pppppppbStack_2d8);
    uVar25 = func_0x0eee2d70(uVar25);
    func_0x0b0bc5d0(&lStack_d8,0);
    if (((ulong)_auStack_328 & 1) != 0) {
      func_0x0412a280(pppppppbStack_318,(ulong)_auStack_328 & 0xfffffffffffffffe);
    }
    func_0x0b0ba020(&pppppppbStack_2b8);
    func_0x0b0ba280(&pppppppbStack_2d8);
    uVar25 = func_0x0eee2d70(uVar25);
    func_0x049d2400(&pppppppbStack_2b8);
    func_0x04afa1a0(&ppppppbStack_148);
    func_0x04afa1a0(&ppppppbStack_128);
    func_0x04afa1a0(&ppppppbStack_108);
    func_0x0b0ba280(&pppppppbStack_2d8);
    func_0x0eee2d70(uVar25);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pbVar37 = (byte *)((long)pppppbVar33 + 10);
  lVar38 = (long)pppppbVar32 - 10;
  if (lVar38 == 7) {
    if (*(int *)((long)pppppbVar33 + 0xd) == 0x72656469 && *(int *)pbVar37 == 0x69727473) {
      ppppppbVar43 = (byte ******)&UNK_014a2172;
      pppppppbVar26 = (byte *******)0x11;
      goto LAB_0b08d7c6;
    }
    ppppppbVar43 = (byte ******)&UNK_013d2cba;
    pppppppbVar26 = (byte *******)0x19;
    if (((*(int *)((long)pppppbVar33 + 0xd) == 0x6d6f746e && *(int *)pbVar37 == 0x6e616870) ||
        (*(int *)((long)pppppbVar33 + 0xd) == 0x72656761 && *(int *)pbVar37 == 0x61766172)) ||
       (*(int *)((long)pppppbVar33 + 0xd) == 0x72656b6c && *(int *)pbVar37 == 0x6c756873))
    goto LAB_0b08d7c6;
    if (*(int *)((long)pppppbVar33 + 0xd) == 0x6c746f6c && *(int *)pbVar37 == 0x6c6f7861)
    goto LAB_0b08dd30;
    bVar47 = *(int *)((long)pppppbVar33 + 0xd) == 0x6e696870 && *(int *)pbVar37 == 0x706c6f64;
    goto LAB_0b08dcff;
  }
  switch(pppppbVar32) {
  case (byte *****)0xd:
    iVar24 = func_0x0eee3000(pbVar37,&UNK_0134e27a,lVar38);
    ppppppbVar43 = (byte ******)&UNK_013d2cba;
    pppppppbVar26 = (byte *******)0x19;
    if ((iVar24 == 0) || (iVar24 = func_0x0eee3000(pbVar37,&UNK_014a2184,lVar38), iVar24 == 0))
    goto LAB_0b08d7c6;
    puVar40 = &UNK_0143b8d5;
    break;
  default:
    goto LAB_0b08d7c6;
  case (byte *****)0xf:
    iVar24 = func_0x0eee3000(pbVar37,&UNK_0124b97c,lVar38);
    if (iVar24 == 0) {
code_r0x0b08dd1e:
      ppppppbVar43 = (byte ******)&UNK_013d2cba;
      pppppppbVar26 = (byte *******)0x19;
      goto LAB_0b08d7c6;
    }
    puVar40 = &UNK_0124b989;
    break;
  case (byte *****)0x10:
    iVar24 = func_0x0eee3000(pbVar37,&UNK_0142082c,lVar38);
    if (iVar24 == 0) goto code_r0x0b08dd1e;
    puVar40 = &UNK_0124b982;
    break;
  case (byte *****)0x12:
    bVar47 = *(long *)pbVar37 == 0x6e61696472617567;
    goto LAB_0b08dcff;
  case (byte *****)0x14:
    iVar24 = func_0x0eee3000(pbVar37,&UNK_01333adb,lVar38);
    if (iVar24 == 0) goto code_r0x0b08dd1e;
    iVar24 = func_0x0eee3000(pbVar37,&UNK_01265347,lVar38);
    if (iVar24 == 0) {
LAB_0b08dd30:
      ppppppbVar43 = (byte ******)&UNK_012984d4;
      pppppppbVar26 = (byte *******)0x12;
      goto LAB_0b08d7c6;
    }
    puVar40 = &UNK_011c690f;
    break;
  case (byte *****)0x16:
    iVar24 = func_0x0eee3000(pbVar37,&UNK_014d7638,lVar38);
    if (iVar24 == 0) goto code_r0x0b08dd1e;
    puVar40 = &UNK_0124b98f;
    break;
  case (byte *****)0x18:
    bVar47 = pppppbVar33[2] == (byte ****)0x6e61696472617567 &&
             *(long *)pbVar37 == 0x75675f7265646c65;
    goto LAB_0b08dcff;
  }
  iVar24 = func_0x0eee3000(pbVar37,puVar40,lVar38);
  bVar47 = iVar24 == 0;
LAB_0b08dcff:
  ppppppbVar43 = (byte ******)&UNK_0124b968;
  if (bVar47) {
    ppppppbVar43 = (byte ******)&UNK_012984d4;
  }
  pppppppbVar26 = (byte *******)((ulong)bVar47 ^ 0x13);
LAB_0b08d7c6:
  bVar47 = ((~(byte)uStack_e0 | (byte)uStack_270) & 1) != 0;
  pppppppbVar28 = (byte *******)0x12;
  if (bVar47) {
    pppppppbVar28 = pppppppbVar26;
  }
  ppppppbVar36 = (byte ******)&UNK_012984d4;
  if (bVar47) {
    ppppppbVar36 = ppppppbVar43;
  }
  bVar47 = ((~(byte)uStack_270 | (byte)uStack_e0) & 1) != 0;
  pppppppbVar44 = (byte *******)0x11;
  if (bVar47) {
    pppppppbVar44 = pppppppbVar28;
  }
  ppppppbVar43 = (byte ******)&UNK_014a2172;
  if (bVar47) {
    ppppppbVar43 = ppppppbVar36;
  }
  ppppppbVar27 = param_2 + 3;
  if (*(byte *)(param_2 + 0xf) == 1) {
    if ((uint)pppppppbVar44 < 0x17) {
      _auStack_258 = (byte *******)CONCAT71(stack0xfffffffffffffda9,(char)pppppppbVar44 * '\x02');
      pppppppbVar28 = (byte *******)(auStack_258 + 1);
    }
    else {
      uVar46 = 0x1a;
      if (((ulong)pppppppbVar44 | 7) != 0x17) {
        uVar46 = ((ulong)pppppppbVar44 | 7) + 1;
      }
      pppppppbVar28 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
      if (pppppppbVar28 == (byte *******)0x0) {
LAB_0b08dd7b:
        func_0x0eec74c0(uVar46,0);
      }
      _auStack_258 = (byte *******)(uVar46 | 1);
      uStack_250 = pppppppbVar44;
      pppppppbStack_248 = pppppppbVar28;
    }
    func_0x0eee2f00(pppppppbVar28,ppppppbVar43,pppppppbVar44);
    *(byte *)((long)pppppppbVar28 + (long)pppppppbVar44) = 0;
    if (((ulong)*ppppppbVar27 & 1) != 0) {
      func_0x0412a280(param_2[5],(ulong)param_2[3] & 0xfffffffffffffffe);
    }
    ppppppbVar27[2] = (byte *****)pppppppbStack_248;
    *(undefined1 (*) [4])ppppppbVar27 = auStack_258;
    *(undefined4 *)((long)ppppppbVar27 + 4) = uStack_254;
    *(undefined4 *)(ppppppbVar27 + 1) = (undefined4)uStack_250;
    *(undefined4 *)((long)ppppppbVar27 + 0xc) = uStack_250._4_4_;
    pppppppbVar44 = pppppppbStack_2d8;
    pppppppbVar26 = pppppppbStack_2d0;
  }
  else {
    if ((uint)pppppppbVar44 < 0x17) {
      _auStack_258 = (byte *******)CONCAT71(stack0xfffffffffffffda9,(char)pppppppbVar44 * '\x02');
      pppppppbVar26 = (byte *******)(auStack_258 + 1);
    }
    else {
      uVar46 = 0x1a;
      if (((ulong)pppppppbVar44 | 7) != 0x17) {
        uVar46 = ((ulong)pppppppbVar44 | 7) + 1;
      }
      pppppppbVar26 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
      if (pppppppbVar26 == (byte *******)0x0) {
        func_0x0eec74c0(uVar46,0);
      }
      _auStack_258 = (byte *******)(uVar46 | 1);
      uStack_250 = pppppppbVar44;
      pppppppbStack_248 = pppppppbVar26;
    }
    func_0x0eee2f00(pppppppbVar26,ppppppbVar43,pppppppbVar44);
    *(byte *)((long)pppppppbVar26 + (long)pppppppbVar44) = 0;
    ppppppbStack_240 = (byte ******)0x0;
    uStack_238 = (byte ******)0x0;
    uStack_230 = (byte *)0x0;
    pppppppbStack_228 = (byte *******)0x0;
    pppppppbStack_220 = (byte *******)0x0;
    pppppppbStack_218 = (byte *******)0x0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_200 = 0;
    func_0x0b0ba080(ppppppbVar27,auStack_258);
    if ((uStack_210 & 1) != 0) {
      func_0x0412a280(uStack_200,CONCAT44(uStack_20c,uStack_210) & 0xfffffffffffffffe);
    }
    if (((ulong)pppppppbStack_228 & 1) != 0) {
      func_0x0412a280(pppppppbStack_218,(ulong)pppppppbStack_228 & 0xfffffffffffffffe);
    }
    if (((ulong)ppppppbStack_240 & 1) != 0) {
      func_0x0412a280(uStack_230,(ulong)ppppppbStack_240 & 0xfffffffffffffffe);
    }
    pppppppbVar44 = pppppppbStack_2d8;
    pppppppbVar26 = pppppppbStack_2d0;
    if (((ulong)_auStack_258 & 1) != 0) {
      func_0x0412a280(pppppppbStack_248,(ulong)_auStack_258 & 0xfffffffffffffffe);
      pppppppbVar44 = pppppppbStack_2d8;
      pppppppbVar26 = pppppppbStack_2d0;
    }
  }
  pppppppbStack_2d8 = pppppppbVar44;
  pppppppbStack_2d0 = pppppppbVar26;
  if (pppppppbVar44 != (byte *******)0x0) {
    while (pppppppbVar44 != pppppppbVar26) {
      pppppppbVar26 = pppppppbVar26 + -0x1d;
      func_0x0b0b9cd0(pppppppbVar26);
    }
    pppppppbStack_2d0 = pppppppbVar44;
    func_0x0412a280(pppppppbStack_2d8,(long)pppppppbStack_2c8 - (long)pppppppbStack_2d8);
  }
  return;
}


