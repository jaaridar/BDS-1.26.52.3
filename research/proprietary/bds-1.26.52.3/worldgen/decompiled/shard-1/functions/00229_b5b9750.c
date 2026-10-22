/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6b9750 (ELF vaddr 0xb5b9750)
 * Label: caller-of-callee
 * Body:  [[0b6b9750, 0b6b9844] [0b6b9850, 0b6b9a89] [0b6b9a90, 0b6b9b7d] [0b6b9b80, 0b6ba456] [0b6ba460, 0b6baba2] [0b6babb0, 0b6bb9de] [0b6bba30, 0b6bba37] [0b6bbbf2, 0b6bbc66] [0b6bbc6a, 0b6bbc8f] [0b6bbf19, 0b6bbf32]]
 * Ghidra: FUN_0b6b9750
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0b6b9750(undefined8 param_1,long param_2,long *param_3,byte *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  char *pcVar21;
  long *plVar22;
  ulong extraout_RDX;
  byte *pbVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  long lVar28;
  undefined *puVar29;
  byte bVar30;
  byte *pbVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  byte *pbVar36;
  bool bVar37;
  bool bVar38;
  undefined8 uStack_288;
  undefined8 uStack_280;
  byte *pbStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  byte *pbStack_260;
  long lStack_258;
  undefined8 uStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  byte *pbStack_200;
  long *plStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char *pcStack_1c8;
  undefined1 auStack_1c0 [8];
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  byte bStack_1a8;
  undefined1 uStack_1a7;
  undefined2 uStack_1a6;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  long alStack_160 [2];
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  byte bStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_120;
  ulong uStack_118;
  uint uStack_110;
  undefined1 auStack_108 [160];
  undefined *puStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  pbVar36 = param_4;
  lStack_258 = param_2;
  cVar10 = func_0x04864260();
  if ((cVar10 == '\0') && (cVar10 = func_0x04864270(param_1), cVar10 != '\0')) {
    lVar19 = *(long *)(lStack_258 + 8);
    pbStack_218 = param_4;
    plStack_1f8 = param_3;
    for (lVar33 = *(long *)(lStack_258 + 0x10); uStack_188 = param_1, lVar19 != lVar33;
        lVar33 = lVar33 + -8) {
      plVar22 = *(long **)(lVar33 + -8);
      *(undefined8 *)(lVar33 + -8) = 0;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
      }
      param_1 = uStack_188;
    }
    *(long *)(lStack_258 + 0x10) = lVar19;
    iVar11 = func_0x048641f0(param_1);
    uVar34 = CONCAT71((int7)((ulong)pbVar36 >> 8),1);
    if (iVar11 != 0) {
      pbStack_1e0 = pbStack_218 + 0x18;
      puStack_40 = &UNK_0eeed150;
      pbStack_48 = &UNK_0eeece20;
      pbStack_50 = _UNK_0eeed6a8;
      uStack_58 = _UNK_0eeed6c0;
      uVar34 = 0;
      puStack_68 = &UNK_0f2ceb78;
      pbVar36 = _UNK_0eeed6a8;
      param_4 = pbStack_218;
LAB_0b6b9939:
      uStack_38 = uVar34;
      puVar13 = (undefined8 *)func_0x04864650(param_1);
      cVar10 = func_0x04864260(puVar13);
      if ((cVar10 != '\0') || (cVar10 = func_0x04864290(puVar13), cVar10 == '\0')) {
        if (param_4 == &DAT_0f6b5ad0) goto LAB_0b6bb82c;
        if ((*param_4 & 1) != 0) {
          uVar34 = (ulong)(DAT_0f6b5ad0 >> 1);
          uVar14 = 0xf6b5ad1;
          if ((DAT_0f6b5ad0 & 1) != 0) {
            uVar34 = _DAT_0f6b5ad8;
            uVar14 = _DAT_0f6b5ae0;
          }
          goto LAB_0b6b98d4;
        }
        uVar34 = _DAT_0f6b5ad8;
        uVar14 = _DAT_0f6b5ae0;
        if ((DAT_0f6b5ad0 & 1) != 0) goto LAB_0b6bb813;
        *(undefined8 *)(param_4 + 0x10) = _DAT_0f6b5ae0;
        uVar34 = _DAT_0f6b5ad8;
        *(ulong *)param_4 = CONCAT71(uRam000000000f6b5ad1,DAT_0f6b5ad0);
        *(ulong *)(param_4 + 8) = uVar34;
        goto LAB_0b6bb82c;
      }
      uVar14 = func_0x04864990(puVar13,&UNK_01c04c08);
      uVar15 = func_0x04864990(puVar13,&UNK_01c04c20);
      uVar16 = func_0x04864990(puVar13,&UNK_01c04c98);
      puStack_208 = puVar13;
      uVar17 = func_0x04864990(puVar13,&UNK_01c04c50);
      cVar10 = func_0x04864260(uVar14);
      if ((cVar10 == '\0') && (cVar10 = func_0x04865490(uVar14), cVar10 == '\0')) {
        puVar29 = (undefined *)0xf6b5ae8;
LAB_0b6bb824:
        func_0x041307e0(param_4,puVar29);
        goto LAB_0b6bb82c;
      }
      cVar10 = func_0x04864260(uVar15);
      if ((cVar10 == '\0') && (cVar10 = func_0x04865490(uVar15), cVar10 == '\0')) {
        puVar29 = (undefined *)0xf6b5b00;
        goto LAB_0b6bb824;
      }
      cVar10 = func_0x04864260(uVar16);
      if ((cVar10 == '\0') && (cVar10 = func_0x04865490(uVar16), cVar10 == '\0')) {
        puVar29 = (undefined *)0xf6b5b18;
        goto LAB_0b6bb824;
      }
      cVar10 = func_0x04864260(uVar17);
      if ((cVar10 == '\0') && (cVar10 = func_0x04864290(uVar17), cVar10 == '\0')) {
        puVar29 = (undefined *)0xf6b5b30;
        goto LAB_0b6bb824;
      }
      cVar10 = func_0x04865490(uVar15);
      if (cVar10 == '\0') {
        cVar10 = func_0x04865490(uVar14);
        if (cVar10 != '\0') {
          uStack_288 = (byte *)((ulong)uStack_288 & 0xffffffffffff0000);
          func_0x04863cb0(&uStack_178,uVar14,&uStack_288);
          func_0x09dd5ed0(lStack_258,&uStack_178);
LAB_0b6b9ac9:
          if (((ulong)uStack_178 & 1) != 0) {
            func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
          }
          if (((ulong)uStack_288 & 1) != 0) {
            func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
          }
          goto LAB_0b6bac90;
        }
        cVar10 = func_0x04865490(uVar16);
        if (cVar10 == '\0') {
          cVar10 = func_0x04864260(uVar17);
          if ((cVar10 != '\0') || (cVar10 = func_0x04864290(uVar17), cVar10 == '\0'))
          goto LAB_0b6bac90;
          uVar14 = func_0x04864990(uVar17,&UNK_01c04c68);
          cVar10 = func_0x04865490(uVar14);
          if (cVar10 == '\0') {
            if (param_4 == &DAT_0f6b5b48) goto LAB_0b6bb82c;
            if ((*param_4 & 1) != 0) {
              uVar34 = (ulong)(DAT_0f6b5b48 >> 1);
              uVar14 = 0xf6b5b49;
              if ((DAT_0f6b5b48 & 1) != 0) {
                uVar34 = _DAT_0f6b5b50;
                uVar14 = _DAT_0f6b5b58;
              }
              goto LAB_0b6b98d4;
            }
            uVar34 = _DAT_0f6b5b50;
            uVar14 = _DAT_0f6b5b58;
            if ((DAT_0f6b5b48 & 1) == 0) {
              *(undefined8 *)(param_4 + 0x10) = _DAT_0f6b5b58;
              uVar34 = _DAT_0f6b5b50;
              *(ulong *)param_4 = CONCAT71(uRam000000000f6b5b49,DAT_0f6b5b48);
              *(ulong *)(param_4 + 8) = uVar34;
              goto LAB_0b6bb82c;
            }
          }
          else {
            uVar15 = func_0x04864990(uVar17,&UNK_01c04c80);
            cVar10 = func_0x04865490(uVar15);
            if (cVar10 != '\0') {
              uStack_178 = (byte *)((ulong)uStack_178 & 0xffffffffffff0000);
              func_0x04863cb0(&uStack_270,uVar14,&uStack_178);
              if (((ulong)uStack_178 & 1) != 0) {
                func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
              }
              uStack_178 = (byte *)((ulong)uStack_178 & 0xffffffffffff0000);
              func_0x04863cb0(&uStack_230,uVar15,&uStack_178);
              if (((ulong)uStack_178 & 1) != 0) {
                func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
              }
              if (plStack_1f8 == (long *)0x0) {
LAB_0b6ba577:
                puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                if (puVar13 == (undefined8 *)0x0) {
                  func_0x0eec74c0(0x38,0);
                }
                if (((ulong)uStack_270 & 1) == 0) {
                  pbStack_168 = pbStack_260;
                  uStack_178 = uStack_270;
                  uStack_170 = (byte *)CONCAT44(uStack_264,uStack_268);
                }
                else {
                  func_0x0412e5e0(&uStack_178,pbStack_260,CONCAT44(uStack_264,uStack_268));
                }
                if (((ulong)uStack_230 & 1) == 0) {
                  pbStack_278 = pbStack_220;
                  uStack_288 = uStack_230;
                  uStack_280 = pbStack_228;
                }
                else {
                  func_0x0412e5e0(&uStack_288,pbStack_220,pbStack_228);
                }
                *puVar13 = &UNK_0f2ce828;
                puVar13[1] = uStack_178;
                puVar13[2] = uStack_170;
                puVar13[3] = pbStack_168;
                *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_288;
                *(undefined4 *)((long)puVar13 + 0x24) = uStack_288._4_4_;
                *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_280;
                *(undefined4 *)((long)puVar13 + 0x2c) = uStack_280._4_4_;
                puVar13[6] = pbStack_278;
                pbVar31 = *(byte **)(lStack_258 + 0x10);
                pbVar23 = *(byte **)(lStack_258 + 0x18);
                if (pbVar31 < pbVar23) {
                  *(undefined8 **)pbVar31 = puVar13;
                  pbVar31 = pbVar31 + 8;
                }
                else {
                  lVar19 = *(long *)(lStack_258 + 8);
                  lVar33 = (long)pbVar31 - lVar19;
                  uVar34 = (lVar33 >> 3) + 1;
                  puStack_238 = puVar13;
                  if (0x1fffffffffffffff < uVar34) {
LAB_0b6bb9d3:
                    func_0x0b6c8e00();
LAB_0b6bb9d8:
                    uVar14 = func_0x04882eb0();
                    func_0x09d81fb0(&pbStack_1f0);
                    if (((ulong)uStack_230 & 1) != 0) {
                      func_0x0412a280(pbStack_220,(ulong)uStack_230 & 0xfffffffffffffffe);
                    }
                    if (((ulong)uStack_270 & 1) == 0) {
                      _Unwind_Resume(uVar14);
                    }
                    else {
                      func_0x0412a280(pbStack_260,(ulong)uStack_270 & 0xfffffffffffffffe);
                      uVar14 = _Unwind_Resume(uVar14);
                      if (((ulong)uStack_178 & 1) != 0) {
                        func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
                      }
                      if (((ulong)uStack_288 & 1) != 0) {
                        func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
                      }
                      uStack_250 = (byte *)0x0;
                    }
                    (**(code **)(*(long *)pbVar23 + 8))(pbVar23);
                    _Unwind_Resume(uVar14);
                    pcVar3 = (code *)swi(3);
                    uVar34 = (*pcVar3)();
                    return uVar34;
                  }
                  pbVar23 = pbVar23 + -lVar19;
                  uVar35 = (long)pbVar23 >> 2;
                  if ((ulong)((long)pbVar23 >> 2) <= uVar34) {
                    uVar35 = uVar34;
                  }
                  if ((byte *)0x7ffffffffffffff7 < pbVar23) {
                    uVar35 = 0x1fffffffffffffff;
                  }
                  lStack_210 = lVar19;
                  if (0x1fffffffffffffff < uVar35) {
                    func_0x04882eb0();
                    goto LAB_0b6bb9d3;
                  }
                  lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 8);
                  if (lVar19 == 0) {
                    func_0x0eec74c0(uVar35 * 8,0);
                  }
                  lVar28 = lStack_210;
                  pbStack_200 = (byte *)(uVar35 * 8 + lVar19);
                  *(undefined8 **)(lVar19 + lVar33) = puStack_238;
                  pbVar31 = (byte *)(lVar33 + lVar19 + 8);
                  lVar19 = lVar33 + lVar19 + (lVar33 >> 3) * -8;
                  memcpy(lVar19,lStack_210,lVar33);
                  *(long *)(lStack_258 + 8) = lVar19;
                  *(byte **)(lStack_258 + 0x10) = pbVar31;
                  *(byte **)(lStack_258 + 0x18) = pbStack_200;
                  pbVar36 = pbStack_200;
                  param_4 = pbStack_218;
                  if (lVar28 != 0) {
                    func_0x0412a280(lVar28,pbVar23);
                    param_4 = pbStack_218;
                  }
                }
                *(byte **)(lStack_258 + 0x10) = pbVar31;
                bVar38 = true;
              }
              else {
                if (((ulong)uStack_270 & 1) == 0) {
                  pbVar36 = (byte *)((ulong)uStack_270 >> 1 & 0x7f);
                }
                else {
                  pbVar36 = (byte *)CONCAT44(uStack_264,uStack_268);
                }
                if (pbVar36 == (byte *)0x1) {
                  pbVar36 = (byte *)((long)&uStack_270 + 1);
                  if (((ulong)uStack_270 & 1) != 0) {
                    pbVar36 = pbStack_260;
                  }
                  if (*pbVar36 == 0x2a) goto LAB_0b6ba577;
                }
                lStack_210 = plStack_1f8[2];
                lVar19 = func_0x0d08b100(lStack_210 + 0x108,&uStack_230);
                bVar38 = true;
                if ((lVar19 != 0) &&
                   (puStack_238 = *(undefined8 **)(lVar19 + 0x28), puStack_238 != (undefined8 *)0x0)
                   ) {
                  lVar19 = *plStack_1f8;
                  pbVar31 = (byte *)plStack_1f8[1];
                  func_0x09dad5d0(&pbStack_1f0,lVar19,&uStack_270,pbVar31);
                  if (pbStack_1f0 != (byte *)0x0) goto LAB_0b6ba63e;
                  if (((ulong)uStack_270 & 1) == 0) {
                    pbVar36 = (byte *)((ulong)uStack_270 >> 1 & 0x7f);
                  }
                  else {
                    pbVar36 = (byte *)CONCAT44(uStack_264,uStack_268);
                  }
                  if (pbVar36 == (byte *)0x0) {
LAB_0b6bb588:
                    pbVar31 = (byte *)(lVar19 + 0x80);
                    if (param_4 != pbVar31) {
                      bVar30 = *pbVar31;
                      pbVar36 = (byte *)0x0;
                      if ((*param_4 & 1) == 0) {
                        if ((bVar30 & 1) == 0) {
                          pbVar36 = *(byte **)(lVar19 + 0x90);
                          *(byte **)(param_4 + 0x10) = pbVar36;
                          uVar4 = *(undefined4 *)(lVar19 + 0x84);
                          uVar5 = *(undefined4 *)(lVar19 + 0x88);
                          uVar6 = *(undefined4 *)(lVar19 + 0x8c);
                          *(undefined4 *)param_4 = *(undefined4 *)pbVar31;
                          *(undefined4 *)(param_4 + 4) = uVar4;
                          *(undefined4 *)(param_4 + 8) = uVar5;
                          *(undefined4 *)(param_4 + 0xc) = uVar6;
                        }
                        else {
                          func_0x04885070(param_4,*(undefined8 *)(lVar19 + 0x90),
                                          *(undefined8 *)(lVar19 + 0x88));
                        }
                      }
                      else {
                        bVar38 = (bVar30 & 1) != 0;
                        lVar33 = lVar19 + 0x81;
                        if (bVar38) {
                          lVar33 = *(long *)(lVar19 + 0x90);
                        }
                        uVar34 = (ulong)(bVar30 >> 1);
                        if (bVar38) {
                          uVar34 = *(ulong *)(lVar19 + 0x88);
                        }
                        func_0x04885120(param_4,lVar33,uVar34);
                      }
                    }
                    func_0x09d828b0(&uStack_178,lVar19);
                    lVar19 = *(long *)pbStack_1e0;
                    if (lVar19 != 0) {
                      lVar33 = *(long *)(param_4 + 0x20);
                      lVar28 = lVar19;
                      if (lVar19 != lVar33) {
                        do {
                          if ((*(byte *)(lVar33 + -0x18) & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(lVar33 + -8),
                                            *(ulong *)(lVar33 + -0x18) & 0xfffffffffffffffe);
                          }
                          lVar33 = lVar33 + -0x18;
                        } while (lVar33 != lVar19);
                        lVar28 = *(long *)pbStack_1e0;
                      }
                      param_4 = pbStack_218;
                      *(long *)(pbStack_218 + 0x20) = lVar19;
                      func_0x0412a280(lVar28,*(long *)(pbStack_218 + 0x28) - lVar28);
                      pbStack_1e0[0] = 0;
                      pbStack_1e0[1] = 0;
                      pbStack_1e0[2] = 0;
                      pbStack_1e0[3] = 0;
                      pbStack_1e0[4] = 0;
                      pbStack_1e0[5] = 0;
                      pbStack_1e0[6] = 0;
                      pbStack_1e0[7] = 0;
                      pbStack_1e0[8] = 0;
                      pbStack_1e0[9] = 0;
                      pbStack_1e0[10] = 0;
                      pbStack_1e0[0xb] = 0;
                      pbStack_1e0[0xc] = 0;
                      pbStack_1e0[0xd] = 0;
                      pbStack_1e0[0xe] = 0;
                      pbStack_1e0[0xf] = 0;
                      pbStack_1e0[0x10] = 0;
                      pbStack_1e0[0x11] = 0;
                      pbStack_1e0[0x12] = 0;
                      pbStack_1e0[0x13] = 0;
                      pbStack_1e0[0x14] = 0;
                      pbStack_1e0[0x15] = 0;
                      pbStack_1e0[0x16] = 0;
                      pbStack_1e0[0x17] = 0;
                    }
                    *(undefined4 *)(param_4 + 0x18) = (undefined4)uStack_178;
                    *(undefined4 *)(param_4 + 0x1c) = uStack_178._4_4_;
                    *(undefined4 *)(param_4 + 0x20) = (undefined4)uStack_170;
                    *(undefined4 *)(param_4 + 0x24) = uStack_170._4_4_;
                    *(byte **)(param_4 + 0x28) = pbStack_168;
                    bVar38 = false;
                  }
                  else {
                    pbVar23 = pbStack_260;
                    if (((ulong)uStack_270 & 1) == 0) {
                      pbVar23 = (byte *)((long)&uStack_270 + 1);
                    }
                    bVar30 = *pbVar23;
                    if (bVar30 != 0x23) {
                      pbVar25 = (byte *)0x1;
                      if (9 < (byte)(bVar30 - 0x30)) goto LAB_0b6bb471;
                      do {
                        do {
                          if (pbVar36 == pbVar25) goto LAB_0b6bb4aa;
                          bVar30 = pbVar23[(long)pbVar25];
                          pbVar25 = pbVar25 + 1;
                        } while ((byte)(bVar30 - 0x30) < 10);
LAB_0b6bb471:
                      } while (((byte)((bVar30 & 0xdf) + 0xbf) < 0x1a) ||
                              ((bVar30 - 0x28 < 0x38 &&
                               ((0x80000000840063U >> ((ulong)(bVar30 - 0x28) & 0x3f) & 1) != 0))));
                      goto LAB_0b6bb588;
                    }
                    if (pbVar36 == (byte *)0x1) goto LAB_0b6bb588;
                    pbVar25 = pbStack_260 + 1;
                    if (((ulong)uStack_270 & 1) == 0) {
                      pbVar25 = (byte *)((long)&uStack_270 + 2);
                    }
                    pbVar23 = pbVar23 + (long)pbVar36;
                    for (; pbVar25 != pbVar23; pbVar25 = pbVar25 + 1) {
                      bVar30 = *pbVar25;
                      if (((9 < (byte)(bVar30 - 0x30)) && (0x19 < (byte)((bVar30 & 0xdf) + 0xbf)))
                         && ((pbVar36 = (byte *)(ulong)(bVar30 - 0x28), 0x37 < bVar30 - 0x28 ||
                             ((0x80000000840063U >> ((ulong)pbVar36 & 0x3f) & 1) == 0))))
                      goto LAB_0b6bb588;
                    }
LAB_0b6bb4aa:
                    func_0x0b6bc110(&uStack_288,&uStack_270);
                    func_0x0412fea0(&uStack_288,0x22);
                    pbStack_168 = pbStack_278;
                    uStack_178 = uStack_288;
                    uStack_170 = uStack_280;
                    uStack_288 = (byte *)0x0;
                    uStack_280 = (byte *)0x0;
                    pbStack_278 = (byte *)0x0;
                    pbVar36 = pbVar31;
                    func_0x09dad5d0(&uStack_250,lVar19,&uStack_178,pbVar31);
                    func_0x0b6bc210(&pbStack_1f0,&uStack_250);
                    func_0x09d81fb0(&uStack_250);
                    if (((ulong)uStack_178 & 1) != 0) {
                      func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
                    }
                    if (((ulong)uStack_288 & 1) != 0) {
                      func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
                      if (pbStack_1f0 != (byte *)0x0) goto LAB_0b6ba63e;
                      goto LAB_0b6bb588;
                    }
                    if (pbStack_1f0 == (byte *)0x0) goto LAB_0b6bb588;
LAB_0b6ba63e:
                    uStack_178 = (byte *)0x0;
                    uStack_170 = (byte *)0x0;
                    pbStack_168 = (byte *)0x0;
                    func_0x09db3fc0(&uStack_288,pbStack_1f0,pbVar31);
                    pbVar36 = uStack_280;
                    bStack_1a8 = (byte)uStack_288;
                    uStack_1a7 = (undefined1)((ulong)uStack_288 >> 8);
                    uStack_1a6 = (undefined2)((ulong)uStack_288 >> 0x10);
                    uStack_1a4 = uStack_288._4_4_;
                    uStack_1a0 = (undefined4)uStack_280;
                    uStack_19c = uStack_280._4_4_;
                    if (uStack_280 != (byte *)0x0) {
                      LOCK();
                      *(long *)(uStack_280 + 8) = *(long *)(uStack_280 + 8) + 1;
                      UNLOCK();
                      if (uStack_280 != (byte *)0x0) {
                        LOCK();
                        pbVar23 = uStack_280 + 8;
                        lVar19 = *(long *)pbVar23;
                        *(long *)pbVar23 = *(long *)pbVar23 + -1;
                        UNLOCK();
                        if (lVar19 == 0) {
                          (**(code **)(*(long *)uStack_280 + 0x10))(uStack_280);
                          func_0x0412c2d0(pbVar36);
                        }
                      }
                    }
                    pbVar23 = (byte *)CONCAT44(uStack_1a4,
                                               CONCAT22(uStack_1a6,CONCAT11(uStack_1a7,bStack_1a8)))
                    ;
                    pbVar36 = *(byte **)pbVar23;
                    if (pbVar36 == *(byte **)(pbVar23 + 8)) {
                      if (pbStack_1f0[0xc0] == 1) {
                        puVar13 = (undefined8 *)func_0x0d07f530(lStack_210,&uStack_270);
                        pbVar36 = (byte *)*puVar13;
                        uStack_280 = (byte *)puVar13[1];
                        uStack_288 = pbVar36;
                        if (pbVar36 != _DAT_0f544ff0) {
                          func_0x0b6bc250(&uStack_178,&uStack_288);
                        }
                      }
                    }
                    else {
                      pbVar25 = (byte *)CONCAT44(uStack_19c,uStack_1a0);
                      uStack_288 = pbVar23;
                      if (pbVar25 == (byte *)0x0) {
                        uStack_280 = (byte *)0x0;
                        pbStack_278 = pbVar36;
                      }
                      else {
                        LOCK();
                        *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
                        UNLOCK();
                        pbStack_278 = *(byte **)pbVar23;
                        LOCK();
                        *(long *)(pbVar25 + 8) = *(long *)(pbVar25 + 8) + 1;
                        UNLOCK();
                        LOCK();
                        pbVar36 = pbVar25 + 8;
                        lVar19 = *(long *)pbVar36;
                        *(long *)pbVar36 = *(long *)pbVar36 + -1;
                        UNLOCK();
                        uStack_280 = pbVar25;
                        if (lVar19 == 0) {
                          (**(code **)(*(long *)pbVar25 + 0x10))(pbVar25);
                          func_0x0412c2d0(pbVar25);
                        }
                      }
                      uStack_250 = (byte *)CONCAT44(uStack_1a4,
                                                    CONCAT22(uStack_1a6,
                                                             CONCAT11(uStack_1a7,bStack_1a8)));
                      pbVar36 = (byte *)CONCAT44(uStack_19c,uStack_1a0);
                      if (pbVar36 == (byte *)0x0) {
                        pbStack_240 = *(byte **)(uStack_250 + 8);
                        pbStack_248 = (byte *)0x0;
                      }
                      else {
                        LOCK();
                        *(long *)(pbVar36 + 8) = *(long *)(pbVar36 + 8) + 1;
                        UNLOCK();
                        pbStack_240 = *(byte **)(uStack_250 + 8);
                        LOCK();
                        *(long *)(pbVar36 + 8) = *(long *)(pbVar36 + 8) + 1;
                        UNLOCK();
                        LOCK();
                        pbVar23 = pbVar36 + 8;
                        lVar19 = *(long *)pbVar23;
                        *(long *)pbVar23 = *(long *)pbVar23 + -1;
                        UNLOCK();
                        pbStack_248 = pbVar36;
                        if (lVar19 == 0) {
                          (**(code **)(*(long *)pbVar36 + 0x10))(pbVar36);
                          func_0x0412c2d0(pbVar36);
                        }
                      }
                      pbStack_200 = uStack_288;
                      pbStack_60 = uStack_250;
                      pbVar36 = (byte *)((ulong)pbStack_278 ^ (ulong)pbStack_240 |
                                        (ulong)uStack_288 ^ (ulong)uStack_250);
                      pbVar25 = pbStack_240;
                      if (pbVar36 != (byte *)0x0) {
                        do {
                          pbVar23 = pbStack_278;
                          puVar13 = (undefined8 *)
                                    func_0x0d07ef20(lStack_210,*(undefined8 *)pbStack_278);
                          pbVar31 = (byte *)*puVar13;
                          pbVar27 = uStack_178;
                          pbVar26 = pbStack_168;
                          if (pbVar31 != _DAT_0f544ff0) {
                            uVar14 = puVar13[1];
                            if (uStack_170 < pbStack_168) {
                              *(byte **)uStack_170 = pbVar31;
                              *(undefined8 *)(uStack_170 + 8) = uVar14;
                              pbVar23 = pbStack_278;
                              pbVar25 = pbStack_240;
                              uStack_170 = uStack_170 + 0x10;
                            }
                            else {
                              lVar19 = (long)uStack_170 - (long)uStack_178;
                              uVar34 = (lVar19 >> 4) + 1;
                              if (0xfffffffffffffff < uVar34) goto LAB_0b6bb946;
                              uVar35 = (long)pbStack_168 - (long)uStack_178 >> 3;
                              if (uVar35 <= uVar34) {
                                uVar35 = uVar34;
                              }
                              if (0x7fffffffffffffef < (ulong)((long)pbStack_168 - (long)uStack_178)
                                 ) {
                                uVar35 = 0xfffffffffffffff;
                              }
                              if (uVar35 == 0) {
                                lVar33 = 0;
                              }
                              else {
                                if (0xfffffffffffffff < uVar35) goto LAB_0b6bb9d8;
                                lVar33 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                   (&DAT_0f5463b0,uVar35 << 4);
                                if (lVar33 == 0) {
                                  func_0x0eec74c0(uVar35 << 4,0);
                                  lVar33 = 0;
                                }
                              }
                              pbVar9 = uStack_178;
                              *(byte **)(lVar33 + lVar19) = pbVar31;
                              *(undefined8 *)(lVar33 + 8 + lVar19) = uVar14;
                              pbVar36 = (byte *)(((long)uStack_178 - (long)uStack_170) +
                                                lVar33 + lVar19);
                              if ((long)uStack_178 - (long)uStack_170 != 0) {
                                lVar28 = 0;
                                do {
                                  *(undefined8 *)(pbVar36 + lVar28) =
                                       *(undefined8 *)(uStack_178 + lVar28);
                                  *(undefined8 *)(pbVar36 + lVar28 + 8) =
                                       *(undefined8 *)(uStack_178 + lVar28 + 8);
                                  lVar7 = lVar28 + 0x10;
                                  lVar28 = lVar28 + 0x10;
                                } while (uStack_178 + lVar7 != uStack_170);
                              }
                              pbVar26 = (byte *)(uVar35 * 0x10 + lVar33);
                              pbVar32 = (byte *)(lVar19 + lVar33 + 0x10);
                              pbVar23 = pbStack_278;
                              pbVar25 = pbStack_240;
                              pbVar27 = pbVar36;
                              uStack_170 = pbVar32;
                              if (uStack_178 != (byte *)0x0) {
                                lVar19 = (long)pbStack_168 - (long)uStack_178;
                                uStack_178 = pbVar36;
                                pbStack_168 = pbVar26;
                                func_0x0412a280(pbVar9,lVar19);
                                pbVar23 = pbStack_278;
                                pbVar25 = pbStack_240;
                                pbVar27 = uStack_178;
                                uStack_170 = pbVar32;
                                pbVar26 = pbStack_168;
                              }
                            }
                          }
                          pbStack_168 = pbVar26;
                          uStack_178 = pbVar27;
                          pbStack_278 = pbVar23 + 8;
                        } while ((pbStack_200 != pbStack_60) || (pbStack_278 != pbVar25));
                      }
                      pbVar23 = pbStack_248;
                      if (pbStack_248 != (byte *)0x0) {
                        LOCK();
                        pbVar25 = pbStack_248 + 8;
                        lVar19 = *(long *)pbVar25;
                        *(long *)pbVar25 = *(long *)pbVar25 + -1;
                        UNLOCK();
                        if (lVar19 == 0) {
                          (**(code **)(*(long *)pbStack_248 + 0x10))(pbStack_248);
                          func_0x0412c2d0(pbVar23);
                        }
                      }
                      pbVar23 = uStack_280;
                      if (uStack_280 != (byte *)0x0) {
                        LOCK();
                        pbVar25 = uStack_280 + 8;
                        lVar19 = *(long *)pbVar25;
                        *(long *)pbVar25 = *(long *)pbVar25 + -1;
                        UNLOCK();
                        if (lVar19 == 0) {
                          (**(code **)(*(long *)uStack_280 + 0x10))(uStack_280);
                          func_0x0412c2d0(pbVar23);
                        }
                      }
                    }
                    pbVar23 = uStack_170;
                    if (uStack_178 != uStack_170) {
                      uStack_288 = (byte *)0x0;
                      uStack_280 = (byte *)0x0;
                      pbStack_278 = (byte *)0x0;
                      pbVar36 = uStack_178;
                      do {
                        func_0x0d0793f0(puStack_238,pbVar36);
                        if ((extraout_RDX & 1) != 0) {
                          pbVar25 = uStack_280;
                          if (((ulong)uStack_288 & 1) == 0) {
                            pbVar25 = (byte *)((ulong)uStack_288 >> 1 & 0x7f);
                          }
                          if (pbVar25 != (byte *)0x0) {
                            func_0x0412f8c0(&uStack_288,&UNK_0121f022,2);
                          }
                          uVar12 = (uint)(extraout_RDX >> 0x20);
                          if ((long)extraout_RDX < 0) {
                            auStack_1c0[0] = 0x2d;
                            uVar12 = -uVar12;
                            puVar13 = (undefined8 *)((long)auStack_1c0 + 1);
                          }
                          else {
                            puVar13 = (undefined8 *)auStack_1c0;
                          }
                          lVar19 = (long)&uStack_1b0 + (4 - (long)puVar13);
                          if (lVar19 < 10) {
                            iVar11 = 0x1f;
                            if ((uVar12 | 1) != 0) {
                              for (; (uVar12 | 1) >> iVar11 == 0; iVar11 = iVar11 + -1) {
                              }
                            }
                            uVar20 = iVar11 * 0x4d1 + 0x4d1U >> 0xc;
                            if ((long)(ulong)((uVar20 - (uVar12 < *(uint *)(&UNK_014edae0 +
                                                                           (ulong)uVar20 * 4))) + 1)
                                <= lVar19) goto LAB_0b6bb2b9;
                            uStack_250 = (byte *)((ulong)uStack_250 & 0xffffffffffffff00);
LAB_0b6bb2ee:
                            pbVar25 = (byte *)0x0;
                            pbVar31 = (byte *)((long)&uStack_250 + 1);
                          }
                          else {
LAB_0b6bb2b9:
                            lVar19 = func_0x04136630();
                            pbVar25 = (byte *)(lVar19 - (long)auStack_1c0);
                            if ((byte *)0xfffffffffffffff7 < pbVar25) goto LAB_0b6bb93c;
                            if (pbVar25 < (byte *)0x17) {
                              uStack_250 = (byte *)CONCAT71(uStack_250._1_7_,(char)pbVar25 * '\x02')
                              ;
                              pbVar31 = (byte *)((long)&uStack_250 + 1);
                              if (pbVar25 == (byte *)0x0) goto LAB_0b6bb2ee;
                            }
                            else {
                              uVar34 = 0x1a;
                              if (((ulong)pbVar25 | 7) != 0x17) {
                                uVar34 = ((ulong)pbVar25 | 7) + 1;
                              }
                              pbVar31 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                          (&DAT_0f5463b0,uVar34);
                              if (pbVar31 == (byte *)0x0) {
                                func_0x0eec74c0(uVar34,0);
                              }
                              uStack_250 = (byte *)(uVar34 | 1);
                              pbStack_248 = pbVar25;
                              pbStack_240 = pbVar31;
                            }
                            memcpy(pbVar31,auStack_1c0,pbVar25);
                          }
                          pbVar27 = (byte *)((long)&uStack_250 + 1);
                          pbVar31[(long)pbVar25] = 0;
                          pbVar25 = (byte *)((ulong)uStack_250 >> 1 & 0x7f);
                          if (((ulong)uStack_250 & 1) != 0) {
                            pbVar25 = pbStack_248;
                            pbVar27 = pbStack_240;
                          }
                          func_0x0412f8c0(&uStack_288,pbVar27,pbVar25);
                          if (((ulong)uStack_250 & 1) != 0) {
                            func_0x0412a280(pbStack_240,(ulong)uStack_250 & 0xfffffffffffffffe);
                          }
                        }
                        pbVar36 = pbVar36 + 0x10;
                      } while (pbVar36 != pbVar23);
                      pbVar36 = uStack_280;
                      if (((ulong)uStack_288 & 1) == 0) {
                        pbVar36 = (byte *)(ulong)((byte)uStack_288 >> 1);
                      }
                      if (pbVar36 != (byte *)0x0) {
                        func_0x09dd5ed0(lStack_258,&uStack_288);
                      }
                      if (((byte)uStack_288 & 1) != 0) {
                        func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
                      }
                    }
                    plVar22 = (long *)CONCAT44(uStack_19c,uStack_1a0);
                    if (plVar22 != (long *)0x0) {
                      LOCK();
                      plVar1 = plVar22 + 1;
                      lVar19 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar19 == 0) {
                        (**(code **)(*plVar22 + 0x10))(plVar22);
                        func_0x0412c2d0(plVar22);
                      }
                    }
                    if (uStack_178 != (byte *)0x0) {
                      uStack_170 = uStack_178;
                      func_0x0412a280(uStack_178,(long)pbStack_168 - (long)uStack_178);
                    }
                    bVar38 = true;
                  }
                  pbVar31 = pbStack_1f0;
                  pbStack_1f0 = (byte *)0x0;
                  if (pbVar31 != (byte *)0x0) {
                    func_0x05ab4630(pbVar31);
                    func_0x0412a280(pbVar31,200);
                  }
                }
              }
              if (((ulong)uStack_230 & 1) != 0) {
                func_0x0412a280(pbStack_220,(ulong)uStack_230 & 0xfffffffffffffffe);
              }
              if (((ulong)uStack_270 & 1) != 0) {
                func_0x0412a280(pbStack_260,(ulong)uStack_270 & 0xfffffffffffffffe);
                if (bVar38) goto LAB_0b6bac90;
                goto LAB_0b6bb82c;
              }
              if (!bVar38) goto LAB_0b6bb82c;
              goto LAB_0b6bac90;
            }
            if (param_4 == &DAT_0f6b5b60) goto LAB_0b6bb82c;
            if ((*param_4 & 1) != 0) {
              uVar34 = (ulong)(DAT_0f6b5b60 >> 1);
              uVar14 = 0xf6b5b61;
              if ((DAT_0f6b5b60 & 1) != 0) {
                uVar34 = _DAT_0f6b5b68;
                uVar14 = _DAT_0f6b5b70;
              }
              goto LAB_0b6b98d4;
            }
            uVar34 = _DAT_0f6b5b68;
            uVar14 = _DAT_0f6b5b70;
            if ((DAT_0f6b5b60 & 1) == 0) {
              *(undefined8 *)(param_4 + 0x10) = _DAT_0f6b5b70;
              uVar34 = _DAT_0f6b5b68;
              *(ulong *)param_4 = CONCAT71(uRam000000000f6b5b61,DAT_0f6b5b60);
              *(ulong *)(param_4 + 8) = uVar34;
              goto LAB_0b6bb82c;
            }
          }
LAB_0b6bb813:
          func_0x04885070(param_4,uVar14,uVar34);
          goto LAB_0b6bb82c;
        }
        bStack_1a8 = 0;
        uStack_1a7 = 0;
        func_0x04863cb0(&uStack_1d8,uVar16,&bStack_1a8);
        if (plStack_1f8 == (long *)0x0) {
LAB_0b6b9fc7:
          puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar13 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          pcVar21 = pcStack_1c8;
          uVar4 = (undefined4)uStack_1d8;
          uVar5 = uStack_1d8._4_4_;
          uVar6 = (undefined4)uStack_1d0;
          uVar8 = uStack_1d0._4_4_;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          pcStack_1c8 = (char *)0x0;
          *puVar13 = &UNK_0f2ce860;
          *(undefined4 *)(puVar13 + 1) = uVar4;
          *(undefined4 *)((long)puVar13 + 0xc) = uVar5;
          *(undefined4 *)(puVar13 + 2) = uVar6;
          *(undefined4 *)((long)puVar13 + 0x14) = uVar8;
          puVar13[3] = pcVar21;
          puVar18 = *(undefined8 **)(lStack_258 + 0x10);
          if (puVar18 < *(undefined8 **)(lStack_258 + 0x18)) {
            *puVar18 = puVar13;
            pbVar23 = (byte *)(puVar18 + 1);
            pbVar36 = &UNK_0f2ce860;
LAB_0b6ba29b:
            *(byte **)(lStack_258 + 0x10) = pbVar23;
            cVar10 = '\x01';
            goto LAB_0b6bac22;
          }
          lVar19 = *(long *)(lStack_258 + 8);
          pbVar31 = (byte *)((long)puVar18 - lVar19);
          uVar34 = ((long)pbVar31 >> 3) + 1;
          puStack_238 = puVar13;
          if (uVar34 < 0x2000000000000000) {
            uVar24 = (long)*(undefined8 **)(lStack_258 + 0x18) - lVar19;
            uVar35 = (long)uVar24 >> 2;
            if ((ulong)((long)uVar24 >> 2) <= uVar34) {
              uVar35 = uVar34;
            }
            if (0x7ffffffffffffff7 < uVar24) {
              uVar35 = 0x1fffffffffffffff;
            }
            lStack_210 = lVar19;
            if (uVar35 < 0x2000000000000000) {
              lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 8);
              if (lVar19 == 0) {
                func_0x0eec74c0(uVar35 * 8,0);
              }
              lVar33 = lStack_210;
              pbStack_200 = (byte *)(uVar35 * 8 + lVar19);
              *(undefined8 **)(pbVar31 + lVar19) = puStack_238;
              pbVar23 = pbVar31 + lVar19 + 8;
              memcpy(pbVar31 + ((long)pbVar31 >> 3) * -8 + lVar19,lStack_210,pbVar31);
              *(byte **)(lStack_258 + 8) = pbVar31 + ((long)pbVar31 >> 3) * -8 + lVar19;
              *(byte **)(lStack_258 + 0x10) = pbVar23;
              *(byte **)(lStack_258 + 0x18) = pbStack_200;
              pbVar36 = pbStack_200;
              param_4 = pbStack_218;
              if (lVar33 != 0) {
                func_0x0412a280(lVar33,uVar24);
                param_4 = pbStack_218;
              }
              goto LAB_0b6ba29b;
            }
            goto LAB_0b6bb932;
          }
          goto LAB_0b6bb937;
        }
        if ((uStack_1d8 & 1) == 0) {
          if ((byte)uStack_1d8 >> 1 == 1) goto LAB_0b6b9faa;
        }
        else if (uStack_1d0 == 1) {
LAB_0b6b9faa:
          pcVar21 = (char *)((long)&uStack_1d8 + 1);
          if ((uStack_1d8 & 1) != 0) {
            pcVar21 = pcStack_1c8;
          }
          if (*pcVar21 == '*') goto LAB_0b6b9fc7;
        }
        lVar19 = *plStack_1f8;
        pbVar31 = (byte *)plStack_1f8[1];
        pbVar36 = pbVar31;
        func_0x09dad5d0(&lStack_180,lVar19,&uStack_1d8,pbVar31);
        if (lStack_180 != 0) {
          func_0x09db3fc0(&uStack_178,lStack_180,pbVar31);
          pbVar36 = uStack_170;
          pbStack_1f0 = uStack_178;
          pbStack_1e8 = uStack_170;
          if (uStack_170 == (byte *)0x0) {
LAB_0b6ba2ac:
            pbStack_240 = *(byte **)pbStack_1f0;
            pbStack_248 = (byte *)0x0;
            uStack_250 = pbStack_1f0;
          }
          else {
            LOCK();
            *(long *)(uStack_170 + 8) = *(long *)(uStack_170 + 8) + 1;
            UNLOCK();
            if (uStack_170 != (byte *)0x0) {
              LOCK();
              pbVar31 = uStack_170 + 8;
              lVar19 = *(long *)pbVar31;
              *(long *)pbVar31 = *(long *)pbVar31 + -1;
              UNLOCK();
              if (lVar19 == 0) {
                (**(code **)(*(long *)uStack_170 + 0x10))(uStack_170);
                func_0x0412c2d0(pbVar36);
              }
            }
            pbVar36 = pbStack_1e8;
            if (pbStack_1e8 == (byte *)0x0) goto LAB_0b6ba2ac;
            LOCK();
            *(long *)(pbStack_1e8 + 8) = *(long *)(pbStack_1e8 + 8) + 1;
            UNLOCK();
            pbStack_240 = *(byte **)pbStack_1f0;
            uStack_250 = pbStack_1f0;
            pbStack_248 = pbStack_1e8;
            LOCK();
            *(long *)(pbStack_1e8 + 8) = *(long *)(pbStack_1e8 + 8) + 1;
            UNLOCK();
            LOCK();
            pbVar31 = pbStack_1e8 + 8;
            lVar19 = *(long *)pbVar31;
            *(long *)pbVar31 = *(long *)pbVar31 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*(long *)pbStack_1e8 + 0x10))(pbStack_1e8);
              func_0x0412c2d0(pbVar36);
            }
          }
          pbVar36 = pbStack_1e8;
          if (pbStack_1e8 == (byte *)0x0) {
            uStack_1b0 = *(byte **)(pbStack_1f0 + 8);
            auStack_1c0 = (undefined1  [8])pbStack_1f0;
            pbStack_1b8 = (byte *)0x0;
          }
          else {
            LOCK();
            *(long *)(pbStack_1e8 + 8) = *(long *)(pbStack_1e8 + 8) + 1;
            UNLOCK();
            uStack_1b0 = *(byte **)(pbStack_1f0 + 8);
            auStack_1c0 = (undefined1  [8])pbStack_1f0;
            pbStack_1b8 = pbStack_1e8;
            LOCK();
            *(long *)(pbStack_1e8 + 8) = *(long *)(pbStack_1e8 + 8) + 1;
            UNLOCK();
            LOCK();
            pbVar31 = pbStack_1e8 + 8;
            lVar19 = *(long *)pbVar31;
            *(long *)pbVar31 = *(long *)pbVar31 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*(long *)pbStack_1e8 + 0x10))(pbStack_1e8);
              func_0x0412c2d0(pbVar36);
            }
          }
          func_0x04a3b850(&uStack_178);
          pbVar23 = uStack_1b0;
          pbVar31 = pbStack_240;
          pbVar36 = pbStack_248;
          puStack_238 = (undefined8 *)CONCAT71(puStack_238._1_7_,1);
          uStack_288 = uStack_250;
          uStack_280 = pbStack_248;
          if (pbStack_248 != (byte *)0x0) {
            LOCK();
            *(long *)(pbStack_248 + 8) = *(long *)(pbStack_248 + 8) + 1;
            UNLOCK();
          }
          pbStack_278 = pbStack_240;
          bVar38 = (undefined1  [8])uStack_250 != auStack_1c0;
          if (uStack_1b0 != pbStack_240 || bVar38) {
            func_0x09dbc310(&uStack_270,*(undefined8 *)pbStack_240);
            bVar37 = ((ulong)uStack_270 & 1) == 0;
            pbVar25 = pbStack_260;
            if (bVar37) {
              pbVar25 = (byte *)((long)&uStack_270 + 1);
            }
            uVar34 = (ulong)uStack_270 >> 1 & 0x7f;
            if (!bVar37) {
              uVar34 = CONCAT44(uStack_264,uStack_268);
            }
            func_0x04885260(&uStack_178,pbVar25,uVar34);
            if (((ulong)uStack_270 & 1) != 0) {
              func_0x0412a280(pbStack_260,(ulong)uStack_270 & 0xfffffffffffffffe);
            }
            pbVar25 = pbVar31 + 8;
            pbStack_278 = pbVar25;
            if (pbVar25 != pbVar23 || bVar38) {
              if (bVar38) goto LAB_0b6bb94b;
              do {
                pbStack_278 = pbVar25;
                func_0x04885260(&uStack_178,&UNK_0121f022,2);
                func_0x09dbc310(&uStack_270,*(undefined8 *)pbVar25);
                bVar38 = ((ulong)uStack_270 & 1) == 0;
                pbVar27 = pbStack_260;
                if (bVar38) {
                  pbVar27 = (byte *)((long)&uStack_270 + 1);
                }
                uVar34 = (ulong)uStack_270 >> 1 & 0x7f;
                if (!bVar38) {
                  uVar34 = CONCAT44(uStack_264,uStack_268);
                }
                func_0x04885260(&uStack_178,pbVar27,uVar34);
                if (((ulong)uStack_270 & 1) != 0) {
                  func_0x0412a280(pbStack_260,(ulong)uStack_270 & 0xfffffffffffffffe);
                }
                pbVar25 = pbVar25 + 8;
                pbStack_278 = pbVar25;
              } while (pbVar25 != pbVar23);
            }
          }
          if (pbVar36 != (byte *)0x0) {
            LOCK();
            pbVar23 = pbVar36 + 8;
            lVar19 = *(long *)pbVar23;
            *(long *)pbVar23 = *(long *)pbVar23 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*(long *)pbVar36 + 0x10))(pbVar36);
              func_0x0412c2d0(pbVar36);
            }
          }
          if ((uStack_110 & 0x10) == 0) {
            if ((uStack_110 & 8) != 0) {
              plVar22 = alStack_160;
              uVar34 = uStack_150;
              goto LAB_0b6ba725;
            }
            uStack_230 = (byte *)((ulong)uStack_230._1_7_ << 8);
            pbVar23 = (byte *)0x0;
            pbVar36 = (byte *)((long)&uStack_230 + 1);
LAB_0b6ba7a9:
            pbVar36[(long)pbVar23] = 0;
            uStack_178 = pbStack_50;
            *(undefined8 *)((long)&uStack_178 + *(long *)(pbStack_50 + -0x18)) = uStack_58;
            uStack_170 = puStack_40;
            if ((bStack_130 & 1) != 0) {
              func_0x0412a280(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
            }
            uStack_170 = pbStack_48;
            func_0x04167a40(&pbStack_168);
            func_0x0413aec0(&uStack_178,&UNK_0eeed6b0);
            func_0x04138180(auStack_108);
            pbVar36 = pbStack_1b8;
            cVar10 = (char)puStack_238;
            if (pbStack_1b8 != (byte *)0x0) {
              LOCK();
              pbVar31 = pbStack_1b8 + 8;
              lVar19 = *(long *)pbVar31;
              *(long *)pbVar31 = *(long *)pbVar31 + -1;
              UNLOCK();
              if (lVar19 == 0) {
                (**(code **)(*(long *)pbStack_1b8 + 0x10))(pbStack_1b8);
                func_0x0412c2d0(pbVar36);
              }
            }
            pbVar36 = pbStack_248;
            if (pbStack_248 != (byte *)0x0) {
              LOCK();
              pbVar31 = pbStack_248 + 8;
              lVar19 = *(long *)pbVar31;
              *(long *)pbVar31 = *(long *)pbVar31 + -1;
              UNLOCK();
              if (lVar19 == 0) {
                (**(code **)(*(long *)pbStack_248 + 0x10))(pbStack_248);
                func_0x0412c2d0(pbVar36);
              }
            }
            pbVar36 = pbStack_228;
            if (((ulong)uStack_230 & 1) == 0) {
              pbVar36 = (byte *)(ulong)((byte)uStack_230 >> 1);
            }
            if (pbVar36 != (byte *)0x0) {
              func_0x09dd5ed0(lStack_258,&uStack_230);
            }
            if (((byte)uStack_230 & 1) != 0) {
              func_0x0412a280(pbStack_220,(ulong)uStack_230 & 0xfffffffffffffffe);
            }
            pbVar31 = pbStack_1e8;
            if (pbStack_1e8 != (byte *)0x0) {
              LOCK();
              pbVar23 = pbStack_1e8 + 8;
              lVar19 = *(long *)pbVar23;
              *(long *)pbVar23 = *(long *)pbVar23 + -1;
              UNLOCK();
              if (lVar19 == 0) {
                (**(code **)(*(long *)pbStack_1e8 + 0x10))(pbStack_1e8);
                func_0x0412c2d0(pbVar31);
              }
            }
            lVar19 = lStack_180;
            if (lStack_180 != 0) {
              func_0x05ab4630(lStack_180);
              func_0x0412a280(lVar19,200);
            }
            goto LAB_0b6bac22;
          }
          plVar22 = &lStack_148;
          uVar34 = uStack_118;
          if (uStack_118 < uStack_140) {
            uStack_118 = uStack_140;
            uVar34 = uStack_140;
          }
LAB_0b6ba725:
          lVar19 = *plVar22;
          pbVar23 = (byte *)(uVar34 - lVar19);
          if (pbVar23 < (byte *)0xfffffffffffffff8) {
            if (pbVar23 < (byte *)0x17) {
              uStack_230 = (byte *)CONCAT71(uStack_230._1_7_,(char)pbVar23 * '\x02');
              pbVar36 = (byte *)((long)&uStack_230 + 1);
              if (pbVar23 == (byte *)0x0) {
                pbVar23 = (byte *)0x0;
                goto LAB_0b6ba7a9;
              }
            }
            else {
              uVar34 = ((ulong)pbVar23 | 7) + 1;
              if (((ulong)pbVar23 | 7) == 0x17) {
                uVar34 = 0x1a;
              }
              pbVar36 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34);
              if (pbVar36 == (byte *)0x0) {
                func_0x0eec74c0(uVar34,0);
              }
              uStack_230 = (byte *)(uVar34 | 1);
              pbStack_228 = pbVar23;
              pbStack_220 = pbVar36;
            }
            func_0x0eee2ee0(pbVar36,lVar19,pbVar23);
            goto LAB_0b6ba7a9;
          }
LAB_0b6bb941:
          func_0x04882e30();
LAB_0b6bb946:
          func_0x09ce6670();
LAB_0b6bb94b:
          pbVar36 = pbVar31 + 0x10;
          do {
            pbVar31 = pbVar36;
            func_0x04885260(&uStack_178,&UNK_0121f022,2);
            func_0x09dbc310(&uStack_270,*(undefined8 *)(pbVar31 + -8));
            bVar38 = ((ulong)uStack_270 & 1) == 0;
            pbVar36 = pbStack_260;
            if (bVar38) {
              pbVar36 = (byte *)((long)&uStack_270 + 1);
            }
            uVar34 = (ulong)uStack_270 >> 1 & 0x7f;
            if (!bVar38) {
              uVar34 = CONCAT44(uStack_264,uStack_268);
            }
            func_0x04885260(&uStack_178,pbVar36,uVar34);
            if (((ulong)uStack_270 & 1) != 0) {
              func_0x0412a280(pbStack_260,(ulong)uStack_270 & 0xfffffffffffffffe);
            }
            pbVar36 = pbVar31 + 8;
            pbStack_278 = pbVar31;
          } while( true );
        }
        pbVar31 = (byte *)(lVar19 + 0x80);
        if (param_4 != pbVar31) {
          bVar30 = *pbVar31;
          pbVar36 = (byte *)0x0;
          if ((*param_4 & 1) == 0) {
            if ((bVar30 & 1) == 0) {
              pbVar36 = *(byte **)(lVar19 + 0x90);
              *(byte **)(param_4 + 0x10) = pbVar36;
              uVar4 = *(undefined4 *)(lVar19 + 0x84);
              uVar5 = *(undefined4 *)(lVar19 + 0x88);
              uVar6 = *(undefined4 *)(lVar19 + 0x8c);
              *(undefined4 *)param_4 = *(undefined4 *)pbVar31;
              *(undefined4 *)(param_4 + 4) = uVar4;
              *(undefined4 *)(param_4 + 8) = uVar5;
              *(undefined4 *)(param_4 + 0xc) = uVar6;
            }
            else {
              func_0x04885070(param_4,*(undefined8 *)(lVar19 + 0x90),*(undefined8 *)(lVar19 + 0x88))
              ;
            }
          }
          else {
            bVar38 = (bVar30 & 1) != 0;
            lVar33 = lVar19 + 0x81;
            if (bVar38) {
              lVar33 = *(long *)(lVar19 + 0x90);
            }
            uVar34 = (ulong)(bVar30 >> 1);
            if (bVar38) {
              uVar34 = *(ulong *)(lVar19 + 0x88);
            }
            func_0x04885120(param_4,lVar33,uVar34);
          }
        }
        func_0x09d828b0(&uStack_178,lVar19);
        lVar19 = *(long *)pbStack_1e0;
        if (lVar19 != 0) {
          lVar33 = *(long *)(param_4 + 0x20);
          lVar28 = lVar19;
          if (lVar19 != lVar33) {
            do {
              if ((*(byte *)(lVar33 + -0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar33 + -8),
                                *(ulong *)(lVar33 + -0x18) & 0xfffffffffffffffe);
              }
              lVar33 = lVar33 + -0x18;
            } while (lVar33 != lVar19);
            lVar28 = *(long *)pbStack_1e0;
          }
          param_4 = pbStack_218;
          *(long *)(pbStack_218 + 0x20) = lVar19;
          func_0x0412a280(lVar28,*(long *)(pbStack_218 + 0x28) - lVar28);
          pbStack_1e0[0] = 0;
          pbStack_1e0[1] = 0;
          pbStack_1e0[2] = 0;
          pbStack_1e0[3] = 0;
          pbStack_1e0[4] = 0;
          pbStack_1e0[5] = 0;
          pbStack_1e0[6] = 0;
          pbStack_1e0[7] = 0;
          pbStack_1e0[8] = 0;
          pbStack_1e0[9] = 0;
          pbStack_1e0[10] = 0;
          pbStack_1e0[0xb] = 0;
          pbStack_1e0[0xc] = 0;
          pbStack_1e0[0xd] = 0;
          pbStack_1e0[0xe] = 0;
          pbStack_1e0[0xf] = 0;
          pbStack_1e0[0x10] = 0;
          pbStack_1e0[0x11] = 0;
          pbStack_1e0[0x12] = 0;
          pbStack_1e0[0x13] = 0;
          pbStack_1e0[0x14] = 0;
          pbStack_1e0[0x15] = 0;
          pbStack_1e0[0x16] = 0;
          pbStack_1e0[0x17] = 0;
        }
        *(undefined4 *)(param_4 + 0x18) = (undefined4)uStack_178;
        *(undefined4 *)(param_4 + 0x1c) = uStack_178._4_4_;
        *(undefined4 *)(param_4 + 0x20) = (undefined4)uStack_170;
        *(undefined4 *)(param_4 + 0x24) = uStack_170._4_4_;
        *(byte **)(param_4 + 0x28) = pbStack_168;
        cVar10 = '\0';
LAB_0b6bac22:
        if ((uStack_1d8 & 1) != 0) {
          func_0x0412a280(pcStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
        }
        if ((bStack_1a8 & 1) != 0) {
          func_0x0412a280(uStack_198,
                          CONCAT44(uStack_1a4,CONCAT22(uStack_1a6,CONCAT11(uStack_1a7,bStack_1a8)))
                          & 0xfffffffffffffffe);
          if (cVar10 != '\0') goto LAB_0b6bac90;
          goto LAB_0b6bb82c;
        }
        if (cVar10 == '\0') goto LAB_0b6bb82c;
      }
      else {
        uVar14 = func_0x04864990(puStack_208,&UNK_01c04c38);
        cVar10 = func_0x04864260(uVar14);
        if (cVar10 != '\0') {
          uStack_288 = (byte *)((ulong)uStack_288 & 0xffffffffffff0000);
          func_0x04863cb0(&uStack_178,uVar15,&uStack_288);
          func_0x04986560(lStack_258,&uStack_178);
          goto LAB_0b6b9ac9;
        }
        cVar10 = func_0x04864270(uVar14);
        if (cVar10 == '\0') {
          cVar10 = func_0x04864290(uVar14);
          if (cVar10 == '\0') {
            puVar29 = (undefined *)0xf6b5b78;
            goto LAB_0b6bb824;
          }
          pbVar31 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (pbVar31 == (byte *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          *(undefined **)pbVar31 = &UNK_0f2ceb78;
          pbVar31[8] = 0;
          pbVar31[9] = 0;
          pbVar31[10] = 0;
          pbVar31[0xb] = 0;
          pbVar31[0xc] = 0;
          pbVar31[0xd] = 0;
          pbVar31[0xe] = 0;
          pbVar31[0xf] = 0;
          pbVar31[0x10] = 0;
          pbVar31[0x11] = 0;
          pbVar31[0x12] = 0;
          pbVar31[0x13] = 0;
          pbVar31[0x14] = 0;
          pbVar31[0x15] = 0;
          pbVar31[0x16] = 0;
          pbVar31[0x17] = 0;
          pbVar31[0x18] = 0;
          pbVar31[0x19] = 0;
          pbVar31[0x1a] = 0;
          pbVar31[0x1b] = 0;
          pbVar31[0x1c] = 0;
          pbVar31[0x1d] = 0;
          pbVar31[0x1e] = 0;
          pbVar31[0x1f] = 0;
          pbVar36 = param_4;
          uStack_270 = pbVar31;
          cVar10 = func_0x0b6b93a0(uVar14,pbVar31,plStack_1f8,param_4);
          if (cVar10 == '\0') {
            (**(code **)(*(long *)pbVar31 + 8))(pbVar31);
            goto LAB_0b6bb82c;
          }
          uStack_288 = (byte *)((ulong)uStack_288 & 0xffffffffffff0000);
          func_0x04863cb0(&uStack_178,uVar15,&uStack_288);
          func_0x0b6bbf40(lStack_258,&uStack_178,&uStack_270);
          if (((ulong)uStack_178 & 1) != 0) {
            func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
          }
          if (((ulong)uStack_288 & 1) != 0) {
            func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
          }
          if (uStack_270 != (byte *)0x0) {
            (**(code **)(*(long *)uStack_270 + 8))();
          }
        }
        else {
          pbVar31 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (pbVar31 == (byte *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          *(undefined **)pbVar31 = &UNK_0f2ceb78;
          pbVar31[8] = 0;
          pbVar31[9] = 0;
          pbVar31[10] = 0;
          pbVar31[0xb] = 0;
          pbVar31[0xc] = 0;
          pbVar31[0xd] = 0;
          pbVar31[0xe] = 0;
          pbVar31[0xf] = 0;
          pbVar31[0x10] = 0;
          pbVar31[0x11] = 0;
          pbVar31[0x12] = 0;
          pbVar31[0x13] = 0;
          pbVar31[0x14] = 0;
          pbVar31[0x15] = 0;
          pbVar31[0x16] = 0;
          pbVar31[0x17] = 0;
          pbVar31[0x18] = 0;
          pbVar31[0x19] = 0;
          pbVar31[0x1a] = 0;
          pbVar31[0x1b] = 0;
          pbVar31[0x1c] = 0;
          pbVar31[0x1d] = 0;
          pbVar31[0x1e] = 0;
          pbVar31[0x1f] = 0;
          uStack_250 = pbVar31;
          func_0x04865530(&uStack_270,uVar14);
          func_0x048655b0(&uStack_230,uVar14);
          while (cVar10 = func_0x04862c80(&uStack_270,&uStack_230), cVar10 == '\0') {
            uVar14 = func_0x04862b80(&uStack_270);
            cVar10 = func_0x04865490(uVar14);
            if (cVar10 != '\0') {
              uStack_288 = (byte *)((ulong)uStack_288 & 0xffffffffffff0000);
              func_0x04863cb0(&uStack_178,uVar14,&uStack_288);
              func_0x09dd5ed0(pbVar31,&uStack_178);
              if (((ulong)uStack_178 & 1) != 0) {
                func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
              }
              if (((ulong)uStack_288 & 1) != 0) {
                func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
              }
            }
            func_0x04862ba0(&uStack_270);
          }
          func_0x04862b40(&uStack_230);
          func_0x04862b40(&uStack_270);
          if (*(long *)(pbVar31 + 8) == *(long *)(pbVar31 + 0x10)) {
            uStack_288 = (byte *)((ulong)uStack_288._2_6_ << 0x10);
            func_0x04863cb0(&uStack_178,uVar15,&uStack_288);
            func_0x04986560(lStack_258,&uStack_178);
            if (((ulong)uStack_178 & 1) != 0) {
              func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
            }
            if (((ulong)uStack_288 & 1) != 0) {
              func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
            }
          }
          else {
            uStack_288 = (byte *)((ulong)uStack_288._2_6_ << 0x10);
            func_0x04863cb0(&uStack_178,uVar15,&uStack_288);
            func_0x0b6bbf40(lStack_258,&uStack_178,&uStack_250);
            if (((ulong)uStack_178 & 1) != 0) {
              func_0x0412a280(pbStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
            }
            pbVar31 = uStack_250;
            if (((ulong)uStack_288 & 1) != 0) {
              func_0x0412a280(pbStack_278,(ulong)uStack_288 & 0xfffffffffffffffe);
              pbVar31 = uStack_250;
            }
            uStack_250 = pbVar31;
            if (pbVar31 == (byte *)0x0) goto LAB_0b6bac90;
          }
          (**(code **)(*(long *)pbVar31 + 8))(pbVar31);
        }
      }
LAB_0b6bac90:
      puVar13 = (undefined8 *)func_0x04864990(puStack_208,&UNK_01c04bf0);
      cVar10 = func_0x04864260(puVar13);
      if (cVar10 == '\0') {
        cVar10 = func_0x04864270(puVar13);
        if (cVar10 == '\0') {
          puVar29 = &DAT_0f6b5ab8;
          goto LAB_0b6bb824;
        }
        puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *puVar18 = &UNK_0f2ceb78;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = 0;
        puVar2 = *(undefined8 **)(lStack_258 + 0x10);
        if (*(undefined8 **)(lStack_258 + 0x18) <= puVar2) {
          lVar19 = *(long *)(lStack_258 + 8);
          pbVar31 = (byte *)((long)puVar2 - lVar19);
          uVar34 = ((long)pbVar31 >> 3) + 1;
          puStack_238 = puVar13;
          puStack_208 = puVar18;
          if (uVar34 < 0x2000000000000000) {
            uVar24 = (long)*(undefined8 **)(lStack_258 + 0x18) - lVar19;
            uVar35 = (long)uVar24 >> 2;
            if ((ulong)((long)uVar24 >> 2) <= uVar34) {
              uVar35 = uVar34;
            }
            if (0x7ffffffffffffff7 < uVar24) {
              uVar35 = 0x1fffffffffffffff;
            }
            lStack_210 = lVar19;
            if (uVar35 < 0x2000000000000000) {
              lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 8);
              if (lVar19 == 0) {
                func_0x0eec74c0(uVar35 * 8,0);
              }
              lVar33 = lStack_210;
              pbStack_200 = (byte *)(uVar35 * 8 + lVar19);
              *(undefined8 **)(pbVar31 + lVar19) = puStack_208;
              pbVar36 = pbVar31 + lVar19 + 8;
              memcpy(pbVar31 + ((long)pbVar31 >> 3) * -8 + lVar19,lStack_210,pbVar31);
              *(byte **)(lStack_258 + 8) = pbVar31 + ((long)pbVar31 >> 3) * -8 + lVar19;
              *(byte **)(lStack_258 + 0x10) = pbVar36;
              *(byte **)(lStack_258 + 0x18) = pbStack_200;
              puVar13 = puStack_238;
              puVar18 = puStack_208;
              param_4 = pbStack_218;
              if (lVar33 != 0) {
                func_0x0412a280(lVar33,uVar24);
                puVar13 = puStack_238;
                puVar18 = puStack_208;
                param_4 = pbStack_218;
              }
              goto LAB_0b6b98e9;
            }
            func_0x04882eb0();
          }
          func_0x0b6c8e00();
LAB_0b6bb932:
          func_0x04882eb0();
LAB_0b6bb937:
          func_0x0b6c8e00();
LAB_0b6bb93c:
          func_0x04882e30();
          goto LAB_0b6bb941;
        }
        *puVar2 = puVar18;
        pbVar36 = (byte *)(puVar2 + 1);
LAB_0b6b98e9:
        *(byte **)(lStack_258 + 0x10) = pbVar36;
        pbVar36 = param_4;
        cVar10 = FUN_0b6b9750(puVar13,puVar18,plStack_1f8,param_4);
        if (cVar10 == '\0') goto LAB_0b6bb82c;
      }
      param_1 = uStack_188;
      uVar34 = uStack_38 + 1;
      uVar12 = func_0x048641f0(uStack_188);
      if (uVar12 <= uVar34) goto LAB_0b6bb7af;
      goto LAB_0b6b9939;
    }
  }
  else {
    if (param_4 != &DAT_0f6b5ab8) {
      if ((*param_4 & 1) == 0) {
        if ((DAT_0f6b5ab8 & 1) == 0) {
          *(undefined8 *)(param_4 + 0x10) = _DAT_0f6b5ac8;
          uVar34 = _DAT_0f6b5ac0;
          *(ulong *)param_4 = CONCAT71(uRam000000000f6b5ab9,DAT_0f6b5ab8);
          *(ulong *)(param_4 + 8) = uVar34;
        }
        else {
          func_0x04885070(param_4,_DAT_0f6b5ac8,_DAT_0f6b5ac0);
        }
      }
      else {
        uVar34 = (ulong)(DAT_0f6b5ab8 >> 1);
        uVar14 = 0xf6b5ab9;
        if ((DAT_0f6b5ab8 & 1) != 0) {
          uVar34 = _DAT_0f6b5ac0;
          uVar14 = _DAT_0f6b5ac8;
        }
LAB_0b6b98d4:
        func_0x04885120(param_4,uVar14,uVar34);
      }
    }
LAB_0b6bb82c:
    uVar34 = 0;
  }
LAB_0b6bb82e:
  return uVar34 & 0xffffffff;
LAB_0b6bb7af:
  uVar34 = CONCAT71((int7)((ulong)pbVar36 >> 8),1);
  goto LAB_0b6bb82e;
}


