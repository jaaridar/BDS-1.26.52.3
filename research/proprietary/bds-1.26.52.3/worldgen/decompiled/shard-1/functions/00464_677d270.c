/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x687d270 (ELF vaddr 0x677d270)
 * Label: caller-of-callee
 * Body:  [[0687d270, 0687e85e]]
 * Ghidra: FUN_0687d270
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0687d270(long *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4,int param_5)

{
  long *****ppppplVar1;
  long *plVar2;
  long *******ppppppplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  undefined8 uVar6;
  long *****ppppplVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  long *******ppppppplVar17;
  ulong *puVar18;
  long ****pppplVar19;
  undefined8 *puVar20;
  long *****ppppplVar21;
  long lVar22;
  ulong uVar23;
  long *******ppppppplVar24;
  long *plVar25;
  undefined1 *puVar26;
  ulong *puVar27;
  long ****pppplVar28;
  ulong uVar29;
  byte extraout_DL;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long *****ppppplVar32;
  long ******pppppplVar33;
  ulong uVar34;
  long ******pppppplVar35;
  long ******pppppplVar36;
  long ******pppppplVar37;
  long *in_FS_OFFSET;
  bool bVar38;
  float fVar39;
  undefined1 auVar40 [16];
  long *******ppppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_220;
  uint uStack_218;
  undefined8 uStack_210;
  uint uStack_208;
  undefined4 uStack_204;
  ulong auStack_200 [2];
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  long *****appppplStack_1e0 [3];
  long ******pppppplStack_1c8;
  undefined1 uStack_1a0;
  long *aplStack_198 [2];
  code *pcStack_188;
  code *pcStack_180;
  undefined4 uStack_178;
  char cStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long *******appppppplStack_158 [2];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  char cStack_134;
  long lStack_130;
  long lStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long lStack_38;
  
  if (param_5 != 1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x05d84ba0(param_1);
    return param_1;
  }
  appppppplStack_158[0] = (long *******)0x0;
  uStack_148 = *(undefined4 *)(param_3 + 2);
  uStack_144 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_140 = *(undefined4 *)(param_3 + 3);
  uStack_13c = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_138 = *(int *)(param_3 + 4);
  cStack_134 = *(char *)((long)param_3 + 0x24);
  if (cStack_134 != '\0') {
    if (cStack_134 == '\x02') {
      (*(code *)param_3[2])(5,param_3,appppppplStack_158);
    }
    else {
      appppppplStack_158[0] = (long *******)*param_3;
      *param_3 = 0;
    }
  }
  lVar22 = param_3[5];
  lStack_128 = param_3[6];
  param_3[6] = 0;
  pcStack_120 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_130 = lVar22;
  if (cStack_134 != '\x04') {
    ppppppplVar17 = appppppplStack_158[0];
    if (cStack_134 == '\x02') {
      ppppppplVar17 = (long *******)appppppplStack_158;
    }
    if ((iStack_138 == -0x430b784d) && (ppppppplVar17 != (long *******)0x0)) {
LAB_0687d43c:
      if ((int)param_4[4] == -0x15176dda) {
        bVar38 = false;
      }
      else {
        func_0x0687edd0(&uStack_118,param_4);
        lVar22 = CONCAT71(uStack_df,uStack_e0);
        if ((lVar22 != 0) && ((byte)(uStack_f8._4_1_ - 1U) < 2)) {
          func_0x048b0900(param_4,&uStack_118);
        }
        if (pcStack_100 != (code *)0x0) {
          (*pcStack_100)(&uStack_118);
        }
        if (lVar22 == 0) goto LAB_0687d358;
        bVar38 = (int)param_4[4] != -0x15176dda;
      }
      lStack_38 = lStack_130;
      cVar10 = *(char *)((long)param_4 + 0x24);
      puVar27 = (ulong *)*param_4;
      puVar18 = puVar27;
      if (cVar10 == '\x02') {
        puVar18 = param_4;
      }
      if ((bool)(puVar18 == (ulong *)0x0 | bVar38)) {
        uVar23 = param_4[5];
        uVar29 = param_4[6];
        if (uVar29 == 0) {
          (*(code *)param_4[7])(0,param_4,0);
          uVar29 = param_4[6];
          cVar10 = *(char *)((long)param_4 + 0x24);
          puVar27 = (ulong *)*param_4;
        }
        if (cVar10 == '\x02') {
          puVar27 = param_4;
        }
        puVar18 = (ulong *)FUN_0488e200(uVar23,uVar29,0xeae89226,puVar27);
      }
      uVar11 = _DAT_0f5896d0;
      pppppplStack_220 = _DAT_0f5896c8;
      pppppplVar37 = ppppppplVar17[10];
      ppppppplVar24 = ppppppplVar17;
      if ((pppppplVar37 == (long ******)0x0) ||
         (ppppplVar32 = *pppppplVar37,
         ppppplVar32 == (long *****)0x0 ||
         *(int *)(pppppplVar37 + 1) != *(int *)(ppppppplVar17 + 0xb))) {
        pppppplVar37 = (long ******)(ulong)_DAT_0f5896d0;
        uStack_218 = _DAT_0f5896d0;
        uStack_210 = (long *******)CONCAT44(uRam000000000f5896dc,_DAT_0f5896d8);
        uStack_208 = uRam000000000f5896e0;
        uStack_204 = uRam000000000f5896e4;
        if (*_DAT_0f5896c8 != (long *****)0x0 && *(uint *)(_DAT_0f5896c8 + 1) == _DAT_0f5896d0) {
          func_0x0d8568b0();
        }
        if (*(uint *)(pppppplStack_220 + 1) != uVar11) goto LAB_0687dc6b;
        goto LAB_0687d59b;
      }
      pppppplVar37 = ppppppplVar17[0xc];
      appppplStack_1e0[0] = ppppplVar32 + 2;
      uStack_118 = (long *******)((ulong)uStack_118 & 0xffffffffffff0000);
      uStack_110 = (long *******)&UNK_06882bd0;
      puStack_108 = &UNK_06882db0;
      plStack_d8 = (long *)0x0;
      uStack_c8 = 0;
      uStack_c0 = 0x100000080;
      plStack_b8 = (long *)0x0;
      uStack_1e8 = (long *****)&UNK_0f057508;
      pppppplStack_1c8 = (long ******)&uStack_1e8;
      func_0x065bdd40(&uStack_1e8,&uStack_f8);
      if (pppppplStack_1c8 == (long ******)&uStack_1e8) {
        lVar22 = 0x20;
LAB_0687d65e:
        (**(code **)((long)*pppppplStack_1c8 + lVar22))();
      }
      else {
        lVar22 = 0x28;
        if (pppppplStack_1c8 != (long ******)0x0) goto LAB_0687d65e;
      }
      ppppppplStack_240 = (long *******)func_0x0d856c70(ppppplVar32,&uStack_118);
      plVar25 = plStack_b8;
      pppppplStack_238 = (long ******)(ulong)extraout_DL;
      plStack_b8 = (long *)0x0;
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 8))();
      }
      if (plStack_d8 == &uStack_f8) {
        lVar22 = 0x20;
LAB_0687d6ba:
        (**(code **)(*plStack_d8 + lVar22))();
      }
      else {
        lVar22 = 0x28;
        if (plStack_d8 != (long *)0x0) goto LAB_0687d6ba;
      }
      iVar16 = -1;
      bVar9 = extraout_DL;
      if ((int)ppppppplStack_240 == -1) goto LAB_0687db8d;
      auStack_200[0] = CONCAT44(auStack_200[0]._4_4_,0x90a84a03);
      pppplVar19 = ppppplVar32[0xe] +
                   ((int)((ulong)((long)ppppplVar32[0xf] - (long)ppppplVar32[0xe]) >> 3) - 1U &
                   0x90a84a03);
      do {
        ppplVar4 = *pppplVar19;
        if (ppplVar4 == (long ***)0xffffffffffffffff) {
          pppplVar19 = ppppplVar32[0x12];
          pppplVar28 = pppplVar19;
          goto LAB_0687d73e;
        }
        pppplVar19 = ppppplVar32[0x11] + (long)ppplVar4 * 4;
      } while (*(int *)(ppppplVar32[0x11] + (long)ppplVar4 * 4 + 1) != -0x6f57b5fd);
      pppplVar28 = ppppplVar32[0x12];
LAB_0687d73e:
      if (pppplVar19 == pppplVar28) {
        ppppplVar21 = (long *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (ppppplVar21 == (long *****)0x0) {
          func_0x0eec74c0(0x80,0);
        }
        ppppplVar21[1] = (long ****)0x0;
        ppppplVar21[2] = (long ****)0x0;
        *ppppplVar21 = (long ****)&UNK_0f057588;
        if ((DAT_0f589a40 == '\0') && (iVar16 = func_0x04108328(&DAT_0f589a40), iVar16 != 0)) {
          func_0x06870300(0xf589a28);
          func_0x0410844d(&DAT_0f589a40);
        }
        uStack_1e8 = ppppplVar21 + 3;
        ppppplVar21[8] = (long ****)0x0;
        ppppplVar21[9] = (long ****)0x0;
        ppppplVar21[6] = (long ****)0x0;
        ppppplVar21[7] = (long ****)0x0;
        ppppplVar21[4] = (long ****)0x0;
        ppppplVar21[5] = (long ****)0x0;
        ppppplVar21[10] = (long ****)0xf589a28;
        *(undefined1 *)(ppppplVar21 + 0xb) = 1;
        ppppplVar21[0xc] = (long ****)0xffffffff;
        ppppplVar21[3] = (long ****)&UNK_0f0575d8;
        ppppplVar21[0xd] = (long ****)0x0;
        ppppplVar21[0xe] = (long ****)0x0;
        ppppplVar21[0xf] = (long ****)0x0;
        appppplStack_1e0[0] = ppppplVar21;
        func_0x065bf170(ppppplVar32 + 0xe,auStack_200,&uStack_1e8);
        puStack_108 = &UNK_065bf690;
        pcStack_100 = (code *)0x0;
        uStack_f8 = CONCAT35(uStack_f8._5_3_,0x3145ad657);
        uStack_118 = (long *******)(ppppplVar32 + 7);
        (*(code *)(*uStack_1e8)[5])(uStack_1e8,&uStack_118);
        if (pcStack_100 != (code *)0x0) {
          (*pcStack_100)(&uStack_118);
        }
        ppppplVar7 = appppplStack_1e0[0];
        ppppplVar21 = uStack_1e8;
        if (appppplStack_1e0[0] != (long *****)0x0) {
          LOCK();
          ppppplVar1 = appppplStack_1e0[0] + 1;
          pppplVar19 = *ppppplVar1;
          *ppppplVar1 = (long ****)((long)*ppppplVar1 + -1);
          UNLOCK();
          if (pppplVar19 == (long ****)0x0) {
            (*(code *)(*appppplStack_1e0[0])[2])(appppplStack_1e0[0]);
            func_0x0412c2d0(ppppplVar7);
          }
        }
      }
      else {
        ppppplVar21 = (long *****)pppplVar19[2];
      }
      auVar40 = func_0x0d8547a0(ppppplVar21,ppppppplStack_240,0,0);
      lStack_58 = auVar40._8_8_;
      uStack_50 = auVar40._0_8_;
      lStack_60 = lStack_58 + -1;
      ppppplStack_48 = ppppplVar21;
      puVar20 = (undefined8 *)func_0x06884790(ppppplVar21);
      puVar20[1] = 0;
      *(undefined4 *)(puVar20 + 2) = 0;
      puVar20[3] = 0xffffffffffffff;
      *(undefined1 *)(puVar20 + 4) = 0;
      *puVar20 = &UNK_0f04b248;
      puVar20[5] = &UNK_0f04b298;
      puVar20[6] = ppppppplVar17[10];
      *(undefined4 *)(puVar20 + 7) = *(undefined4 *)(ppppppplVar17 + 0xb);
      puVar20[8] = pppppplVar37;
      puVar20[9] = ppppppplVar17;
      lVar22 = *in_FS_OFFSET;
      ppppplStack_40 = ppppplVar32;
      if (*(char *)(lVar22 + -0x58) == '\0') {
        func_0x0ee49c60(lVar22 + -0xa40);
        *(undefined1 *)(lVar22 + -0x58) = 1;
      }
      pppppplVar37 = (long ******)(lVar22 + -0xa40);
      uVar11 = func_0x0ee4a030(pppppplVar37,0);
      uVar12 = func_0x0ee4a030(pppppplVar37,0);
      ppppppplVar24 = (long *******)((ulong)uVar11 << 0x20);
      uVar13 = func_0x0ee4a030(pppppplVar37,0);
      uVar14 = func_0x0ee4a030(pppppplVar37,0);
      puVar20[10] = (CONCAT44(uVar11,uVar12) & 0xffffffffffff0fff) + 0x4000;
      puVar20[0xb] = CONCAT44(uVar13,uVar14) & 0x3fffffffffffffff | 0x8000000000000000;
      puVar20[0xc] = 0;
      puVar20[0xd] = 0;
      puVar20[0xe] = 0;
      *(undefined2 *)((long)puVar20 + 0x7c) = 0x101;
      *(undefined1 *)((long)puVar20 + 0x7e) = 0;
      bVar38 = *(char *)((long)puVar18 + 0xc) == '\0';
      uVar11 = (uint)puVar18[1];
      if (bVar38) {
        uVar11 = 0;
      }
      uVar23 = 0;
      if (!bVar38) {
        uVar23 = *puVar18;
      }
      uVar12 = 2;
      if ((uVar23 & 0x100000000) != 0) {
        uVar12 = (undefined4)uVar23;
      }
      *(undefined4 *)(puVar20 + 0xf) = uVar12;
      *(bool *)((long)puVar20 + 0x7d) = (uVar11 & 0x1010000) != 0x1000000;
      *(byte *)((long)puVar20 + 0x7e) = (byte)(uVar11 >> 8) & (byte)uVar11 & 1;
      pppppplVar36 = (long ******)func_0x05f9fd40(puVar20[8]);
      pppppplVar33 = (long ******)&uStack_1e8;
      if (pppppplVar36 == (long ******)0x0) goto LAB_0687e798;
      uStack_110 = *(long ********)(puVar20[9] + 0x68);
      puStack_108 = *(undefined **)(puVar20[9] + 0x70);
      pcStack_100 = (code *)puVar20[10];
      uStack_f8 = puVar20[0xb];
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_118 = (long *******)&UNK_0f009860;
      plStack_d8 = (long *)0x0;
      uStack_d0 = 0;
      uStack_c8._0_6_ =
           CONCAT24(*(undefined2 *)((long)puVar20 + 0x7d),*(undefined4 *)(puVar20 + 0xf));
      iVar16 = -1;
      ppppppplVar24 = ppppppplVar17;
      iVar15 = -1;
      pppppplStack_238._0_1_ = extraout_DL;
      if (DAT_0f588650 == '\0') goto LAB_0687e7d4;
LAB_0687d97a:
      uVar6 = _DAT_0f5434d0;
      if (_DAT_0f588640 == (long *)0x0) {
        pppppplStack_1c8 = (long ******)0x0;
      }
      else if (_DAT_0f588640 == (long *)&DAT_0f588620) {
        pppppplStack_1c8 = pppppplVar33;
        (**(code **)(_DAT_0f588620 + 0x18))(&DAT_0f588620,pppppplVar33);
      }
      else {
        pppppplStack_1c8 = (long ******)(**(code **)(*_DAT_0f588640 + 0x10))();
      }
      (*(code *)(*pppppplVar36)[9])(pppppplVar36,uVar6,&uStack_1e8);
      if (pppppplStack_1c8 == (long ******)&uStack_1e8) {
        lVar22 = 0x20;
LAB_0687db51:
        (**(code **)((long)*pppppplStack_1c8 + lVar22))();
      }
      else {
        lVar22 = 0x28;
        if (pppppplStack_1c8 != (long ******)0x0) goto LAB_0687db51;
      }
      (*(code *)(*pppppplVar36)[10])(&uStack_1e8,pppppplVar36,&uStack_118);
      ppppplVar32 = ppppplStack_40;
      bVar9 = (byte)pppppplStack_238;
      if (pppppplStack_1c8 != (long ******)0x0) {
        (*(code *)pppppplStack_1c8)(appppplStack_1e0);
        ppppplVar32 = ppppplStack_40;
      }
LAB_0687db8d:
      pppppplStack_238._0_1_ = bVar9;
      pppplVar19 = ppppplVar32[1];
      if (pppplVar19 == (long ****)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(pppplVar19 + 1);
      }
      uStack_210 = ppppppplStack_240;
      pppplVar28 = ppppplVar32[0xe] +
                   ((int)((ulong)((long)ppppplVar32[0xf] - (long)ppppplVar32[0xe]) >> 3) + iVar16 &
                   0x90a84a03);
      do {
        ppplVar4 = *pppplVar28;
        if (ppplVar4 == (long ***)0xffffffffffffffff) {
          pppplVar28 = ppppplVar32[0x12];
          break;
        }
        pppplVar28 = ppppplVar32[0x11] + (long)ppplVar4 * 4;
      } while (*(int *)(ppppplVar32[0x11] + (long)ppplVar4 * 4 + 1) != -0x6f57b5fd);
      uVar11 = *(uint *)(pppplVar28[2][1][(ulong)ppppppplStack_240 >> 0xc & 0xfffff] +
                        ((uint)ppppppplStack_240 & 0xfff));
      plVar25 = pppplVar28[2][10][uVar11 >> 7];
      uVar23 = (ulong)((uVar11 & 0x7f) << 7);
      *(long *****)((long)plVar25 + uVar23 + 8) = pppplVar19;
      *(undefined4 *)((long)plVar25 + uVar23 + 0x10) = uVar12;
      *(long ********)((long)plVar25 + uVar23 + 0x18) = ppppppplStack_240;
      *(byte *)((long)plVar25 + uVar23 + 0x20) = (byte)pppppplStack_238;
      pppppplStack_220 = (long ******)ppppplVar32[1];
      if (pppppplStack_220 == (long ******)0x0) {
        pppppplVar37 = (long ******)0x0;
      }
      else {
        pppppplVar37 = (long ******)(ulong)*(uint *)(pppppplStack_220 + 1);
      }
      uStack_218 = (uint)pppppplVar37;
      uStack_208 = CONCAT31(uStack_208._1_3_,(byte)pppppplStack_238);
      if (*(uint *)(pppppplStack_220 + 1) == uStack_218) {
LAB_0687d59b:
        ppppplVar32 = *pppppplStack_220;
      }
      else {
LAB_0687dc6b:
        ppppplVar32 = (long *****)0x0;
      }
      lVar22 = func_0x068829d0(ppppplVar32,uStack_210,uStack_208);
      ppppppplStack_240 = ppppppplVar24 + 0x15;
      ppplVar4 = *(long ****)(lVar22 + 0x50);
      ppplVar5 = *(long ****)(lVar22 + 0x58);
      pppppplStack_238 = (long ******)((long)ppplVar5 * 0x1f1f1f1f ^ (ulong)ppplVar4);
      pppppplVar33 = ppppppplVar24[0x16];
      uVar12 = SUB84(pppppplVar37,0);
      if (pppppplVar33 != (long ******)0x0) {
        uVar23 = (long)pppppplVar33 - ((ulong)pppppplVar33 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
        uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar23 >> 0x38 < 2) {
          pppppplVar37 = (long ******)((long)pppppplVar33 - 1U & (ulong)pppppplStack_238);
        }
        else {
          pppppplVar37 = pppppplStack_238;
          if (pppppplVar33 <= pppppplStack_238) {
            pppppplVar37 = (long ******)((ulong)pppppplStack_238 % (ulong)pppppplVar33);
          }
        }
        if (((*ppppppplStack_240)[(long)pppppplVar37] != (long *****)0x0) &&
           (pppplVar19 = *(*ppppppplStack_240)[(long)pppppplVar37], pppplVar19 != (long ****)0x0)) {
          if ((byte)(uVar23 >> 0x38) < 2) {
            do {
              if ((long ******)pppplVar19[1] == pppppplStack_238) {
                if ((pppplVar19[2] == ppplVar4) && (pppplVar19[3] == ppplVar5)) goto LAB_0687dd9f;
              }
              else if ((long ******)((ulong)pppplVar19[1] & (long)pppppplVar33 - 1U) != pppppplVar37
                      ) break;
              pppplVar19 = (long ****)*pppplVar19;
            } while (pppplVar19 != (long ****)0x0);
          }
          else {
            do {
              pppppplVar36 = (long ******)pppplVar19[1];
              if (pppppplVar36 == pppppplStack_238) {
                if ((pppplVar19[2] == ppplVar4) && (pppplVar19[3] == ppplVar5)) goto LAB_0687dd9f;
              }
              else {
                if (pppppplVar33 <= pppppplVar36) {
                  if (((ulong)pppppplVar36 | (ulong)pppppplVar33) >> 0x20 == 0) {
                    pppppplVar36 = (long ******)
                                   (((ulong)pppppplVar36 & 0xffffffff) %
                                   ((ulong)pppppplVar33 & 0xffffffff));
                  }
                  else {
                    pppppplVar36 = (long ******)((ulong)pppppplVar36 % (ulong)pppppplVar33);
                  }
                }
                if (pppppplVar36 != pppppplVar37) break;
              }
              pppplVar19 = (long ****)*pppplVar19;
            } while (pppplVar19 != (long ****)0x0);
          }
        }
      }
      ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (ppppppplVar24 == (long *******)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puStack_108 = (undefined *)0x1;
      *ppppppplVar24 = (long ******)0x0;
      ppppppplVar24[1] = pppppplStack_238;
      pppppplVar36 = *(long *******)(lVar22 + 0x58);
      ppppppplVar24[2] = *(long *******)(lVar22 + 0x50);
      ppppppplVar24[3] = pppppplVar36;
      ppppppplVar24[4] = pppppplStack_220;
      *(undefined4 *)(ppppppplVar24 + 5) = uVar12;
      ppppppplVar24[6] = (long ******)uStack_210;
      ppppppplVar24[7] = (long ******)CONCAT44(uStack_204,uStack_208);
      pppppplStack_220 = (long ******)0x0;
      uStack_218 = 0;
      uStack_210 = (long *******)0xffffffffffffff;
      uStack_208 = uStack_208 & 0xffffff00;
      if ((long)pppppplVar33 < 0) {
        fVar39 = *(float *)(ppppppplVar17 + 0x19);
      }
      else {
        fVar39 = *(float *)(ppppppplVar17 + 0x19);
      }
      uStack_118 = ppppppplVar24;
      uStack_110 = ppppppplStack_240;
      if ((pppppplVar33 != (long ******)0x0) &&
         ((float)((long)ppppppplVar17[0x18] + 1) <= (float)pppppplVar33 * fVar39))
      goto LAB_0687e315;
      uVar23 = 1;
      if ((long ******)0x2 < pppppplVar33) {
        uVar23 = (ulong)(((ulong)pppppplVar33 & (long)pppppplVar33 - 1U) != 0);
      }
      pppppplVar37 = (long ******)(uVar23 | (long)pppppplVar33 * 2);
      fVar39 = (float)func_0x0eee3ab0((float)((long)ppppppplVar17[0x18] + 1) / fVar39);
      pppppplVar33 = (long ******)
                     ((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
      if (pppppplVar33 < pppppplVar37) {
        pppppplVar33 = pppppplVar37;
      }
      pppppplVar37 = (long ******)0x2;
      if ((pppppplVar33 != (long ******)0x1) &&
         (pppppplVar37 = pppppplVar33, ((ulong)pppppplVar33 & (long)pppppplVar33 - 1U) != 0)) {
        pppppplVar37 = (long ******)FUN_0412c3f0();
      }
      pppppplVar33 = ppppppplVar17[0x16];
      pppppplVar36 = pppppplVar37;
      if (pppppplVar37 <= pppppplVar33) {
        if (pppppplVar33 <= pppppplVar37) goto LAB_0687e2d8;
        fVar39 = (float)func_0x0eee3ab0((float)ppppppplVar17[0x18] /
                                        *(float *)(ppppppplVar17 + 0x19));
        pppppplVar36 = (long ******)
                       ((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
        if ((pppppplVar33 < (long ******)0x3) ||
           (uVar23 = (long)pppppplVar33 - ((ulong)pppppplVar33 >> 1 & 0x5555555555555555),
           uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333),
           1 < (byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          pppppplVar36 = (long ******)FUN_0412c3f0(pppppplVar36);
        }
        else if ((long ******)0x1 < pppppplVar36) {
          lVar22 = 0x3f;
          if ((long)pppppplVar36 - 1U != 0) {
            for (; (long)pppppplVar36 - 1U >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          pppppplVar36 = (long ******)(1L << (-((byte)lVar22 ^ 0x3f) & 0x3f));
        }
        if (pppppplVar36 < pppppplVar37) {
          pppppplVar36 = pppppplVar37;
        }
        if (pppppplVar33 <= pppppplVar36) goto LAB_0687e2d8;
        if (pppppplVar36 == (long ******)0x0) {
          pppppplVar37 = *ppppppplStack_240;
          *ppppppplStack_240 = (long ******)0x0;
          if (pppppplVar37 != (long ******)0x0) {
            func_0x0412a280(pppppplVar37,(long)ppppppplVar17[0x16] << 3);
          }
          ppppppplVar17[0x16] = (long ******)0x0;
          goto LAB_0687e2d8;
        }
      }
      if ((ulong)pppppplVar36 >> 0x3d != 0) {
        func_0x04882eb0();
LAB_0687e798:
        cVar10 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_01392c94);
        if (cVar10 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
        func_0x04109e60();
        iVar15 = (int)pppppplVar37;
LAB_0687e7d4:
        iVar16 = iVar15;
        iVar15 = func_0x04108328(&DAT_0f588650);
        if (iVar15 != 0) {
          _DAT_0f588620 = &UNK_0f056b18;
          _DAT_0f588640 = (long *)&DAT_0f588620;
          func_0x0eee2f40(&UNK_062619b0,&DAT_0f588620,0xf53dab8);
          func_0x0410844d(&DAT_0f588650);
        }
        goto LAB_0687d97a;
      }
      lVar22 = (long)pppppplVar36 * 8;
      pppppplVar37 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
      if (pppppplVar37 == (long ******)0x0) {
        func_0x0eec74c0(lVar22,0);
      }
      pppppplVar33 = *ppppppplStack_240;
      *ppppppplStack_240 = pppppplVar37;
      if (pppppplVar33 != (long ******)0x0) {
        func_0x0412a280(pppppplVar33,(long)ppppppplVar17[0x16] << 3);
        pppppplVar37 = ppppppplVar17[0x15];
      }
      ppppppplVar17[0x16] = pppppplVar36;
      func_0x0eee2dd0(pppppplVar37,0,lVar22);
      pppppplVar33 = ppppppplVar17[0x17];
      if (pppppplVar33 != (long ******)0x0) {
        pppppplVar30 = (long ******)pppppplVar33[1];
        uVar23 = (long)pppppplVar36 - 1;
        if (((ulong)pppppplVar36 & uVar23) == 0) {
          pppppplVar37[(ulong)pppppplVar30 & uVar23] = (long *****)(ppppppplVar17 + 0x17);
          uVar29 = (ulong)pppppplVar30 & uVar23;
          while (pppppplVar36 = pppppplVar33, pppppplVar33 = (long ******)*pppppplVar36,
                pppppplVar33 != (long ******)0x0) {
            uVar34 = (ulong)pppppplVar33[1] & uVar23;
            if (uVar34 != uVar29) {
              if (pppppplVar37[uVar34] == (long *****)0x0) {
                pppppplVar37[uVar34] = (long *****)pppppplVar36;
                uVar29 = uVar34;
              }
              else {
                *pppppplVar36 = *pppppplVar33;
                *pppppplVar33 = (long *****)*pppppplVar37[uVar34];
                *pppppplVar37[uVar34] = (long ****)pppppplVar33;
                pppppplVar33 = pppppplVar36;
              }
            }
          }
        }
        else {
          if (pppppplVar36 <= pppppplVar30) {
            if (((ulong)pppppplVar30 | (ulong)pppppplVar36) >> 0x20 == 0) {
              pppppplVar30 = (long ******)
                             (((ulong)pppppplVar30 & 0xffffffff) %
                             ((ulong)pppppplVar36 & 0xffffffff));
            }
            else {
              pppppplVar30 = (long ******)((ulong)pppppplVar30 % (ulong)pppppplVar36);
            }
          }
          pppppplVar37[(long)pppppplVar30] = (long *****)(ppppppplVar17 + 0x17);
          pppppplVar35 = (long ******)*pppppplVar33;
          while (pppppplVar35 != (long ******)0x0) {
            pppppplVar31 = (long ******)pppppplVar35[1];
            if (pppppplVar36 <= pppppplVar31) {
              if (((ulong)pppppplVar31 | (ulong)pppppplVar36) >> 0x20 == 0) {
                pppppplVar31 = (long ******)
                               (((ulong)pppppplVar31 & 0xffffffff) %
                               ((ulong)pppppplVar36 & 0xffffffff));
              }
              else {
                pppppplVar31 = (long ******)((ulong)pppppplVar31 % (ulong)pppppplVar36);
              }
            }
            if (pppppplVar31 != pppppplVar30) {
              if (pppppplVar37[(long)pppppplVar31] == (long *****)0x0) {
                pppppplVar37[(long)pppppplVar31] = (long *****)pppppplVar33;
                pppppplVar30 = pppppplVar31;
              }
              else {
                *pppppplVar33 = *pppppplVar35;
                *pppppplVar35 = (long *****)*pppppplVar37[(long)pppppplVar31];
                *pppppplVar37[(long)pppppplVar31] = (long ****)pppppplVar35;
                pppppplVar35 = pppppplVar33;
              }
            }
            pppppplVar33 = pppppplVar35;
            pppppplVar35 = (long ******)*pppppplVar33;
          }
        }
      }
LAB_0687e2d8:
      pppppplVar33 = ppppppplVar17[0x16];
      if (((ulong)pppppplVar33 & (long)pppppplVar33 - 1U) == 0) {
        pppppplVar37 = (long ******)((ulong)pppppplStack_238 & (long)pppppplVar33 - 1U);
      }
      else {
        pppppplVar37 = pppppplStack_238;
        if (pppppplVar33 <= pppppplStack_238) {
          pppppplVar37 = (long ******)((ulong)pppppplStack_238 % (ulong)pppppplVar33);
        }
      }
LAB_0687e315:
      pppppplVar36 = *ppppppplStack_240;
      ppppplVar32 = pppppplVar36[(long)pppppplVar37];
      if (ppppplVar32 == (long *****)0x0) {
        *ppppppplVar24 = ppppppplVar17[0x17];
        ppppppplVar17[0x17] = (long ******)ppppppplVar24;
        pppppplVar36[(long)pppppplVar37] = (long *****)(ppppppplVar17 + 0x17);
        if (*ppppppplVar24 != (long ******)0x0) {
          pppppplVar37 = (long ******)(*ppppppplVar24)[1];
          if (((ulong)pppppplVar33 & (long)pppppplVar33 - 1U) == 0) {
            pppppplVar36[(ulong)pppppplVar37 & (long)pppppplVar33 - 1U] = (long *****)ppppppplVar24;
          }
          else {
            if (pppppplVar33 <= pppppplVar37) {
              if (((ulong)pppppplVar37 | (ulong)pppppplVar33) >> 0x20 == 0) {
                pppppplVar36
                [((ulong)pppppplVar37 & 0xffffffff) % ((ulong)pppppplVar33 & 0xffffffff)] =
                     (long *****)ppppppplVar24;
                goto LAB_0687e334;
              }
              pppppplVar37 = (long ******)((ulong)pppppplVar37 % (ulong)pppppplVar33);
            }
            pppppplVar36[(long)pppppplVar37] = (long *****)ppppppplVar24;
          }
        }
      }
      else {
        *ppppppplVar24 = (long ******)*ppppplVar32;
        *ppppplVar32 = (long ****)ppppppplVar24;
      }
LAB_0687e334:
      ppppppplVar17[0x18] = (long ******)((long)ppppppplVar17[0x18] + 1);
      lVar22 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar22 == 0) {
        func_0x048b0de0(&uStack_118,&uStack_1e8);
        _DAT_0f54fd90 = (undefined4)uStack_118;
        uRam000000000f54fd94 = uStack_118._4_4_;
        uVar12 = (undefined4)uStack_110;
        uVar13 = uStack_110._4_4_;
        uStack_118 = (long *******)0x0;
        uStack_110 = (long *******)0x0;
        plVar25 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar12;
        uRam000000000f54fd9c = uVar13;
        if (plVar25 != (long *)0x0) {
          LOCK();
          plVar2 = plVar25 + 1;
          lVar22 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar22 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            func_0x0412c2d0(plVar25);
          }
        }
        ppppppplVar17 = uStack_110;
        if (uStack_110 != (long *******)0x0) {
          LOCK();
          ppppppplVar3 = uStack_110 + 1;
          pppppplVar37 = *ppppppplVar3;
          *ppppppplVar3 = (long ******)((long)*ppppppplVar3 + -1);
          UNLOCK();
          if (pppppplVar37 == (long ******)0x0) {
            (*(code *)(*uStack_110)[2])(uStack_110);
            func_0x0412c2d0(ppppppplVar17);
          }
        }
        lVar22 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      }
      plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar25 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      pppppplVar37 = ppppppplVar24[4];
      *plVar25 = (long)pppppplVar37;
      iVar16 = *(int *)(ppppppplVar24 + 5);
      *(int *)(plVar25 + 1) = iVar16;
      uVar12 = *(undefined4 *)((long)ppppppplVar24 + 0x34);
      uVar13 = *(undefined4 *)(ppppppplVar24 + 7);
      uVar14 = *(undefined4 *)((long)ppppppplVar24 + 0x3c);
      *(undefined4 *)(plVar25 + 2) = *(undefined4 *)(ppppppplVar24 + 6);
      *(undefined4 *)((long)plVar25 + 0x14) = uVar12;
      *(undefined4 *)(plVar25 + 3) = uVar13;
      *(undefined4 *)((long)plVar25 + 0x1c) = uVar14;
      if ((pppppplVar37 != (long ******)0x0) &&
         (*pppppplVar37 != (long *****)0x0 && *(int *)(pppppplVar37 + 1) == iVar16)) {
        func_0x0d8568b0(*pppppplVar37,plVar25[2]);
      }
      uStack_1a0 = 0;
      pcStack_188 = (code *)&UNK_0687fd50;
      pcStack_180 = (code *)&UNK_0687fcf0;
      uStack_178 = 0x7a9daa40;
      cStack_174 = '\x01';
      uStack_168 = 0;
      puStack_160 = &UNK_0687fb00;
      aplStack_198[0] = plVar25;
      uStack_170 = lVar22;
LAB_0687e4ad:
      if ((pppppplStack_220 != (long ******)0x0) &&
         (*pppppplStack_220 != (long *****)0x0 && *(uint *)(pppppplStack_220 + 1) == uStack_218)) {
        func_0x0d8569b0(*pppppplStack_220,uStack_210,uStack_208);
      }
      *param_1 = 0;
      param_1[2] = (long)&UNK_0687f1e0;
      *(undefined4 *)(param_1 + 4) = 0xd138a3fc;
      param_1[3] = (long)&UNK_0687f4c0;
      *(undefined1 *)((long)param_1 + 0x24) = 1;
      puVar26 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar26 == (undefined1 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      plVar25 = aplStack_198[0];
      *puVar26 = uStack_1a0;
      *(undefined8 *)(puVar26 + 8) = 0;
      *(code **)(puVar26 + 0x18) = pcStack_188;
      *(code **)(puVar26 + 0x20) = pcStack_180;
      *(undefined4 *)(puVar26 + 0x28) = uStack_178;
      puVar26[0x2c] = cStack_174;
      if (cStack_174 != '\0') {
        if (cStack_174 == '\x02') {
          (*pcStack_188)(5,aplStack_198);
        }
        else {
          aplStack_198[0] = (long *)0x0;
          *(long **)(puVar26 + 8) = plVar25;
        }
      }
      puVar8 = puStack_160;
      uVar12 = (undefined4)uStack_168;
      uVar13 = uStack_168._4_4_;
      uStack_168 = 0;
      *(undefined4 *)(puVar26 + 0x30) = (undefined4)uStack_170;
      *(undefined4 *)(puVar26 + 0x34) = uStack_170._4_4_;
      *(undefined4 *)(puVar26 + 0x38) = uVar12;
      *(undefined4 *)(puVar26 + 0x3c) = uVar13;
      puStack_160 = (undefined *)0x0;
      *(undefined **)(puVar26 + 0x40) = puVar8;
      *param_1 = (long)puVar26;
      param_1[5] = lStack_38;
      param_1[6] = 0;
      param_1[7] = (long)&UNK_0687f070;
      if (pcStack_180 != (code *)0x0) {
        (*pcStack_180)(aplStack_198);
      }
      goto LAB_0687d390;
    }
    if (pcStack_120 != (code *)0x0) {
      if (lStack_128 == 0) {
        (*pcStack_120)(0,appppppplStack_158,0);
      }
      ppppppplVar17 = appppppplStack_158[0];
      if (cStack_134 == '\x02') {
        ppppppplVar17 = (long *******)appppppplStack_158;
      }
      ppppppplVar17 = (long *******)FUN_0488e200(lVar22,lStack_128,0xbcf487b3,ppppppplVar17);
      if (ppppppplVar17 != (long *******)0x0) goto LAB_0687d43c;
    }
  }
LAB_0687d358:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_130;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0687d390:
  if ((code *)CONCAT44(uStack_13c,uStack_140) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_13c,uStack_140))(appppppplStack_158);
  }
  return param_1;
LAB_0687dd9f:
  puStack_1f0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_1f0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  ppppplVar32 = uStack_1e8;
  uVar6 = _UNK_01461eac;
  auStack_200[0] = 0x29;
  auStack_200[1] = 0x24;
  *(undefined8 *)(puStack_1f0 + 4) = _DAT_01461ea4;
  *(undefined8 *)(puStack_1f0 + 6) = uVar6;
  uVar14 = _UNK_01461ea0;
  uVar13 = _UNK_01461e9c;
  uVar12 = _UNK_01461e98;
  *puStack_1f0 = _DAT_01461e94;
  puStack_1f0[1] = uVar12;
  puStack_1f0[2] = uVar13;
  puStack_1f0[3] = uVar14;
  puStack_1f0[8] = 0x2e70616d;
  *(undefined1 *)(puStack_1f0 + 9) = 0;
  uStack_1e8._7_1_ = SUB81(ppppplVar32,7);
  uStack_1e8._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
  func_0x0d858ce0(&uStack_118,&uStack_1e8,auStack_200);
  uStack_1a0 = 1;
  func_0x05e91e00(aplStack_198,&uStack_118);
  func_0x048fb670(&uStack_118);
  if ((auStack_200[0] & 1) != 0) {
    func_0x0412a280(puStack_1f0,auStack_200[0] & 0xfffffffffffffffe);
  }
  goto LAB_0687e4ad;
}



/* ---- referenced strings ----
 * 0x13f776f  Error
 * 0x1461e94  Failed to insert new group into map.
 * 0x1461ea4   new group into map.
 */
