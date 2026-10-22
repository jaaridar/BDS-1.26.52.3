/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc001aa0 (ELF vaddr 0xbf01aa0)
 * Label: caller-of-callee
 * Body:  [[0c001aa0, 0c0020ce] [0c0020d0, 0c002f5d] [0c003140, 0c003151] [0c003252, 0c0032d3]]
 * Ghidra: FUN_0c001aa0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c001aa0(undefined8 *param_1,long param_2,ulong param_3,undefined2 param_4,char param_5,
                 undefined4 param_6)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 unaff_R12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  float *pfVar16;
  long lVar17;
  byte *pbVar18;
  long *in_FS_OFFSET;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iStack_32c;
  undefined8 uStack_328;
  undefined8 uStack_320;
  byte *pbStack_318;
  int iStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  byte *pbStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined8 uStack_298;
  ulong uStack_290;
  long lStack_288;
  undefined8 uStack_278;
  ulong uStack_270;
  long lStack_268;
  byte *apbStack_260 [2];
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  byte *pbStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_148;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined5 uStack_54;
  undefined3 uStack_4f;
  undefined5 uStack_4c;
  
  uStack_328 = (byte *)0x0;
  uStack_320 = (byte *)0x0;
  pbStack_318 = (byte *)0x0;
  iStack_32c = 0x7fff;
  iStack_304 = 1;
  uStack_278 = 0;
  uStack_270 = 0;
  lStack_268 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  lStack_288 = 0;
  uStack_238 = param_6;
  cVar5 = func_0x04865490(param_3);
  if (cVar5 == '\0') {
    cVar5 = func_0x04864290(param_3);
    if (cVar5 != '\0') {
      unaff_R12 = func_0x048648e0(param_3,&UNK_01446a5b);
      cVar5 = func_0x04864220(unaff_R12);
      if (cVar5 == '\0') {
        uStack_208 = 0;
        lStack_200 = 0;
        uStack_218 = (byte *)0x0;
        pbStack_210 = (byte *)0x0;
        uStack_228 = (byte *)0x0;
        uStack_220 = (byte *)0x0;
        uStack_1f8 = 3;
        ppuStack_148 = &puStack_168;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        puStack_168 = &UNK_0f325c88;
        puStack_160 = &UNK_0bccfd60;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_110 = 0;
        uStack_b8 = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_60 = 0x3f800000;
        uStack_130 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_5c = 0;
        uStack_54 = 0;
        uStack_4f = 0;
        uStack_4c = 0;
        uStack_128 = 0x3f800000;
        uStack_1b8 = *(undefined8 *)(param_2 + 0x118);
        uStack_2e8 = (int *)CONCAT62(uStack_2e8._2_6_,param_4);
        if (DAT_0f6b3fe8 == '\0') goto LAB_0c002eed;
        goto LAB_0c001d8c;
      }
LAB_0c0021b0:
      uVar9 = func_0x048648e0(param_3,&UNK_011d1a34);
      cVar5 = func_0x04864220(uVar9);
      if (cVar5 == '\0') {
        if (param_5 != '\0') {
          cVar5 = func_0x04865420(uVar9);
          if (cVar5 != '\0') {
            iStack_304 = func_0x04863e00(uVar9,1);
          }
          goto LAB_0c0021d2;
        }
        func_0x04ab81b0(1,3,0x19,&UNK_013a10d2);
        goto LAB_0c0029f9;
      }
LAB_0c0021d2:
      uVar9 = func_0x048648e0(param_3,&UNK_014ae949);
      cVar5 = func_0x04865490(uVar9);
      if (cVar5 == '\0') {
        if ((char)uStack_238 == '\0') {
          func_0x05a37630(1,3,0x19,&UNK_0124df35);
        }
        else {
          pbVar14 = (byte *)func_0x048648e0(param_3,&UNK_013b3f3b);
          cVar5 = func_0x04865490(pbVar14);
          if (cVar5 != '\0') {
            apbStack_260[0] = (byte *)((ulong)apbStack_260[0] & 0xffffffffffff0000);
            func_0x04863cb0(&fStack_300,pbVar14,apbStack_260);
            uStack_228 = (byte *)0x0;
            if (((uint)fStack_300 & 1) == 0) {
              pbStack_210 = pbStack_2f0;
              uStack_220 = (byte *)CONCAT44(uStack_2fc,fStack_300);
              uStack_218 = (byte *)CONCAT44(uStack_2f4,uStack_2f8);
            }
            else {
              func_0x0412e5e0(&uStack_220,pbStack_2f0,CONCAT44(uStack_2f4,uStack_2f8));
            }
            uStack_208 = 0;
            pbVar18 = uStack_218;
            if (((ulong)uStack_220 & 1) == 0) {
              pbVar18 = (byte *)((ulong)uStack_220 >> 1 & 0x7f);
            }
            if (pbVar18 == (byte *)0x0) {
LAB_0c002bdc:
              pbVar15 = (byte *)0x0;
            }
            else {
              pbVar18 = pbStack_210;
              if (((ulong)uStack_220 & 1) == 0) {
                pbVar18 = (byte *)((long)&uStack_220 + 1);
              }
              if ((pbVar18 == (byte *)0x0) || (*pbVar18 == 0)) goto LAB_0c002bdc;
              pbVar15 = (byte *)0xcbf29ce484222325;
              uVar10 = func_0x0eee2e90(pbVar18);
              if (uVar10 != 0) {
                uVar12 = (ulong)((uint)uVar10 & 7);
                if (7 < uVar10) {
                  uVar10 = uVar10 & 0xfffffffffffffff8;
                  do {
                    pbVar15 = (byte *)(((((((((long)pbVar15 * 0x100000001b3 ^ (ulong)*pbVar18) *
                                             0x100000001b3 ^ (ulong)pbVar18[1]) * 0x100000001b3 ^
                                           (ulong)pbVar18[2]) * 0x100000001b3 ^ (ulong)pbVar18[3]) *
                                          0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3 ^
                                        (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) *
                                       0x100000001b3 ^ (ulong)pbVar18[7]);
                    pbVar18 = pbVar18 + 8;
                    uVar10 = uVar10 - 8;
                  } while (uVar10 != 0);
                }
                if (uVar12 != 0) {
                  uVar10 = 0;
                  do {
                    pbVar15 = (byte *)((long)pbVar15 * 0x100000001b3 ^ (ulong)pbVar18[uVar10]);
                    uVar10 = uVar10 + 1;
                  } while (uVar12 != uVar10);
                }
              }
            }
            iVar7 = iStack_304;
            uStack_228 = pbVar15;
            func_0x0c4ac9d0(&uStack_2e8,&uStack_228);
            uStack_2d8 = CONCAT62(uStack_2d8._2_6_,(short)iVar7);
            uStack_2e8 = (int *)&UNK_0f0d6548;
            if (((ulong)uStack_220 & 1) != 0) {
              func_0x0412a280(pbStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
            }
            if (((uint)fStack_300 & 1) != 0) {
              func_0x0412a280(pbStack_2f0,CONCAT44(uStack_2fc,fStack_300) & 0xfffffffffffffffe);
            }
            pbVar18 = uStack_2e0;
            if (((ulong)apbStack_260[0] & 1) != 0) {
              func_0x0412a280(uStack_250,(ulong)apbStack_260[0] & 0xfffffffffffffffe);
              pbVar18 = uStack_2e0;
            }
            uStack_2e0 = pbVar18;
            if (pbVar18 == (byte *)0x0) {
LAB_0c002d53:
              func_0x04160690(&fStack_300,&UNK_01254d89);
              func_0x04863cb0(&uStack_228,pbVar14,&fStack_300);
              apbStack_260[0] = uStack_218;
              if (((ulong)uStack_228 & 1) == 0) {
                apbStack_260[0] = (byte *)((long)&uStack_228 + 1);
              }
              func_0x0b6513c0(1,3,0x19,&UNK_013d4e39,apbStack_260);
              if (((ulong)uStack_228 & 1) != 0) {
                func_0x0412a280(uStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
              }
              if (((uint)fStack_300 & 1) != 0) {
                func_0x0412a280(pbStack_2f0,CONCAT44(uStack_2fc,fStack_300) & 0xfffffffffffffffe);
              }
              param_1[1] = 0;
              *(undefined2 *)(param_1 + 2) = 0;
              *param_1 = &UNK_0f0d6548;
            }
            else {
              cVar5 = (**(code **)(*(long *)pbVar18 + 0x78))(pbVar18);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pbVar18 + 0x80))(&uStack_228,pbVar18);
                pbVar15 = uStack_228;
                uStack_228 = (byte *)0x0;
                uStack_2e0 = pbVar15;
                (**(code **)(*(long *)pbVar18 + 0x90))(pbVar18);
                plVar3 = (long *)uStack_228;
                uStack_228 = (byte *)0x0;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x90))();
                }
                if (pbVar15 == (byte *)0x0) goto LAB_0c002d53;
              }
              uStack_228 = (byte *)&iStack_304;
              uStack_220 = pbVar14;
              cVar5 = func_0x0c4ae700(&uStack_2e8,&UNK_0c026040,&uStack_228);
              pbVar14 = uStack_2e0;
              if (cVar5 == '\0') {
                *param_1 = &UNK_0f3773c0;
                if (uStack_2e0 == (byte *)0x0) {
                  param_1[1] = 0;
                }
                else {
                  (*(code *)**(undefined8 **)uStack_2e0)(param_1 + 1,uStack_2e0);
                }
                *(undefined2 *)(param_1 + 2) = (undefined2)uStack_2d8;
              }
              else {
                param_1[1] = 0;
                *(undefined2 *)(param_1 + 2) = 0;
              }
              *param_1 = &UNK_0f0d6548;
              if (pbVar14 != (byte *)0x0) {
                (**(code **)(*(long *)pbVar14 + 0x90))(pbVar14);
              }
            }
            goto LAB_0c002a11;
          }
          func_0x0b6042d0(1,3,0x19,&UNK_013eeca7);
        }
LAB_0c0029f9:
        param_1[1] = 0;
        *(undefined2 *)(param_1 + 2) = 0;
        *param_1 = &UNK_0f0d6548;
        goto LAB_0c002a11;
      }
      uStack_2e8 = (int *)((ulong)uStack_2e8 & 0xffffffffffff0000);
      func_0x04863cb0(&uStack_228,uVar9,&uStack_2e8);
      pbVar15 = (byte *)((ulong)uStack_228 >> 1 & 0x7f);
      pbVar14 = (byte *)((long)&uStack_228 + 1);
      pbVar18 = pbVar14;
      if (((ulong)uStack_228 & 1) != 0) {
        pbVar15 = uStack_220;
        pbVar18 = uStack_218;
      }
      func_0x0b6373c0(&uStack_278,&uStack_298,&iStack_32c,pbVar18,pbVar15);
      if (((ulong)uStack_228 & 1) != 0) {
        func_0x0412a280(uStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
      }
      uVar10 = uStack_298;
      if (((ulong)uStack_2e8 & 1) != 0) {
        func_0x0412a280(uStack_2d8,(ulong)uStack_2e8 & 0xfffffffffffffffe);
        uVar10 = uStack_298;
      }
      uVar12 = uStack_290;
      if ((uVar10 & 1) == 0) {
        uVar12 = (uVar10 & 0xff) >> 1;
      }
      pbVar18 = (byte *)(uVar12 + 1);
      uStack_298 = uVar10;
      if ((byte *)0xfffffffffffffff7 < pbVar18) {
        uVar9 = func_0x04882e30();
        func_0x041084d6(&DAT_0f6b3fe8);
        func_0x04aa1870(&uStack_228);
        if ((uStack_298 & 1) != 0) goto LAB_0c003275;
        if ((uStack_278 & 1) != 0) goto LAB_0c003298;
        while (((ulong)uStack_328 & 1) == 0) {
          while( true ) {
            func_0x0eee2d70(uVar9);
LAB_0c003275:
            func_0x0412a280(lStack_288,uStack_298 & 0xfffffffffffffffe);
            if ((uStack_278 & 1) == 0) break;
LAB_0c003298:
            func_0x0412a280(lStack_268,uStack_278 & 0xfffffffffffffffe);
            if (((ulong)uStack_328 & 1) != 0) goto LAB_0c0032b8;
          }
        }
LAB_0c0032b8:
        func_0x0412a280(pbStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
        func_0x0eee2d70(uVar9);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pbVar18 < (byte *)0x17) {
        uStack_220 = (byte *)0x0;
        uStack_218 = (byte *)0x0;
        uStack_228 = (byte *)(ulong)(byte)((char)pbVar18 * '\x02');
        if (uVar12 != 0) goto joined_r0x0c002475;
      }
      else {
        uVar13 = 0x1a;
        if (((ulong)pbVar18 | 7) != 0x17) {
          uVar13 = ((ulong)pbVar18 | 7) + 1;
        }
        pbVar14 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (pbVar14 == (byte *)0x0) {
          func_0x0eec74c0(uVar13,0);
        }
        uStack_228 = (byte *)(uVar13 | 1);
        uStack_220 = pbVar18;
        uStack_218 = pbVar14;
joined_r0x0c002475:
        lVar11 = lStack_288;
        if ((uVar10 & 1) == 0) {
          lVar11 = (long)&uStack_298 + 1;
        }
        func_0x0eee2ee0(pbVar14,lVar11,uVar12);
      }
      (pbVar14 + uVar12)[0] = 0x3a;
      (pbVar14 + uVar12)[1] = 0;
      uVar10 = uStack_278 >> 1 & 0x7f;
      lVar11 = (long)&uStack_278 + 1;
      if ((uStack_278 & 1) != 0) {
        uVar10 = uStack_270;
        lVar11 = lStack_268;
      }
      puVar8 = (undefined8 *)func_0x0412f8c0(&uStack_228,lVar11,uVar10);
      uVar20 = *(undefined4 *)puVar8;
      uVar22 = *(undefined4 *)(puVar8 + 1);
      pbVar14 = (byte *)puVar8[2];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      uVar24 = *(undefined4 *)((long)puVar8 + 4);
      uVar26 = *(undefined4 *)((long)puVar8 + 0xc);
      if (((ulong)uStack_328 & 1) != 0) {
        uStack_248 = uVar20;
        uStack_244 = *(undefined4 *)((long)puVar8 + 4);
        uStack_240 = uVar22;
        uStack_23c = *(undefined4 *)((long)puVar8 + 0xc);
        func_0x0412a280(pbStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
        uVar20 = uStack_248;
        uVar24 = uStack_244;
        uVar22 = uStack_240;
        uVar26 = uStack_23c;
      }
      uStack_328 = (byte *)CONCAT44(uVar24,uVar20);
      uStack_320 = (byte *)CONCAT44(uVar26,uVar22);
      pbStack_318 = pbVar14;
      if (((ulong)uStack_228 & 1) != 0) {
        func_0x0412a280(uStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    uStack_2e8 = (int *)((ulong)uStack_2e8 & 0xffffffffffff0000);
    func_0x04863cb0(&uStack_228,param_3,&uStack_2e8);
    if (((ulong)uStack_328 & 1) != 0) {
      func_0x0412a280(pbStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
    }
    pbStack_318 = uStack_218;
    uStack_328 = uStack_228;
    uStack_320 = uStack_220;
    uStack_228 = (byte *)((ulong)uStack_228 & 0xffffffffffff0000);
    if (((ulong)uStack_2e8 & 1) != 0) {
      func_0x0412a280(uStack_2d8,(ulong)uStack_2e8 & 0xfffffffffffffffe);
    }
    pbVar15 = (byte *)((ulong)uStack_328 >> 1 & 0x7f);
    pbVar14 = (byte *)((long)&uStack_328 + 1);
    pbVar18 = pbVar14;
    if (((ulong)uStack_328 & 1) != 0) {
      pbVar15 = uStack_320;
      pbVar18 = pbStack_318;
    }
    func_0x0c3f7a00(&uStack_2e8,pbVar18,pbVar15);
    if (uStack_2e8 == (int *)0x0) {
      pbVar18 = (byte *)((ulong)uStack_328 >> 1 & 0x7f);
      if (((ulong)uStack_328 & 1) != 0) {
        pbVar18 = uStack_320;
        pbVar14 = pbStack_318;
      }
      func_0x0b6373c0(&uStack_278,&uStack_298,&iStack_32c,pbVar14,pbVar18);
      uVar10 = uStack_298;
      param_3 = uStack_290;
      if ((uStack_298 & 1) == 0) {
        param_3 = uStack_298 >> 1 & 0x7f;
      }
      pbVar14 = (byte *)(param_3 + 1);
      if ((byte *)0xfffffffffffffff7 < pbVar14) {
        func_0x04882e30();
LAB_0c002eed:
        iVar7 = func_0x04108328(&DAT_0f6b3fe8);
        if (iVar7 != 0) {
          func_0x0ee25020(0xf6b3fc0,&DAT_015918f2);
          func_0x0eee2f40(&UNK_0b5d68a0,0xf6b3fc0,0xf53dab8);
          FUN_0410844d(&DAT_0f6b3fe8);
        }
LAB_0c001d8c:
        uStack_2e0 = (byte *)0x1;
        uStack_2d8 = 0xf6b3fc0;
        uStack_2d0 = 0xffffffffffffffff;
        uStack_2c8 = 0x1fffffffffff;
        lStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2b7 = 0;
        uStack_2b0 = 0;
        uStack_2af = 0;
        uStack_2a8 = 0;
        pfVar16 = &fStack_300;
        func_0x0b5beee0(pfVar16,unaff_R12,&uStack_2e8);
        uVar10 = (ulong)uStack_2f8;
        if (uStack_2f8 == 1) {
LAB_0c002088:
          iStack_32c = (int)*pfVar16;
LAB_0c002092:
          (**(code **)(&UNK_0f34c8d0 + uVar10 * 8))(apbStack_260,&fStack_300);
        }
        else {
          if (uStack_2f8 == 0) {
            plVar3 = (long *)CONCAT44(uStack_2fc,fStack_300);
            if (plVar3 == (long *)0x0) {
              pfVar16 = (float *)&DAT_0f6b4ca8;
              goto LAB_0c002088;
            }
            lVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_228);
            uVar10 = (ulong)uStack_2f8;
          }
          else {
            lVar11 = 0xf6b4ca0;
          }
          iStack_32c = (int)*(float *)(lVar11 + 8);
          if ((int)uVar10 != -1) goto LAB_0c002092;
        }
        lVar11 = lStack_2c0;
        uStack_2f8 = 0xffffffff;
        if (lStack_2c0 != 0) {
          for (lVar17 = CONCAT71(uStack_2b7,uStack_2b8); lVar11 != lVar17; lVar17 = lVar17 + -0x18)
          {
            if ((*(byte *)(lVar17 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar17 + -8),
                              *(ulong *)(lVar17 + -0x18) & 0xfffffffffffffffe);
            }
          }
          uStack_2b8 = (undefined1)lVar11;
          uStack_2b7 = (undefined7)((ulong)lVar11 >> 8);
          func_0x0412a280(lStack_2c0,CONCAT71(uStack_2af,uStack_2b0) - lStack_2c0);
        }
        if (uStack_6c >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (uStack_6c >> 0x20) * 8))(&uStack_2e8,&uStack_a8);
        }
        uStack_6c = CONCAT44(0xffffffff,(undefined4)uStack_6c);
        if (uStack_c4 >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (uStack_c4 >> 0x20) * 8))(&uStack_2e8,&uStack_100);
        }
        uStack_c4 = CONCAT44(0xffffffff,(undefined4)uStack_c4);
        if (ppuStack_148 == &puStack_168) {
          lVar11 = 0x20;
LAB_0c002198:
          (**(code **)(*ppuStack_148 + lVar11))();
        }
        else {
          lVar11 = 0x28;
          if (ppuStack_148 != (undefined **)0x0) goto LAB_0c002198;
        }
        if (lStack_200 != 0) {
          func_0x0412c2d0();
        }
        goto LAB_0c0021b0;
      }
      if (pbVar14 < (byte *)0x17) {
        uStack_220 = (byte *)0x0;
        uStack_218 = (byte *)0x0;
        uStack_228 = (byte *)(ulong)(byte)((char)pbVar14 * '\x02');
        pbVar18 = (byte *)((long)&uStack_228 + 1);
        if (param_3 != 0) goto joined_r0x0c001f4c;
      }
      else {
        uVar12 = 0x1a;
        if (((ulong)pbVar14 | 7) != 0x17) {
          uVar12 = ((ulong)pbVar14 | 7) + 1;
        }
        pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (pbVar18 == (byte *)0x0) {
          func_0x0eec74c0(uVar12,0);
        }
        uStack_228 = (byte *)(uVar12 | 1);
        uStack_220 = pbVar14;
        uStack_218 = pbVar18;
joined_r0x0c001f4c:
        lVar11 = lStack_288;
        if ((uVar10 & 1) == 0) {
          lVar11 = (long)&uStack_298 + 1;
        }
        func_0x0eee2ee0(pbVar18,lVar11,param_3);
      }
      (pbVar18 + param_3)[0] = 0x3a;
      (pbVar18 + param_3)[1] = 0;
      uVar10 = uStack_278 >> 1 & 0x7f;
      lVar11 = (long)&uStack_278 + 1;
      if ((uStack_278 & 1) != 0) {
        uVar10 = uStack_270;
        lVar11 = lStack_268;
      }
      puVar8 = (undefined8 *)func_0x0412f8c0(&uStack_228,lVar11,uVar10);
      uVar20 = *(undefined4 *)puVar8;
      pbVar18 = (byte *)*puVar8;
      uVar22 = *(undefined4 *)(puVar8 + 1);
      uStack_320 = (byte *)puVar8[1];
      pbVar14 = (byte *)puVar8[2];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      if (((ulong)uStack_328 & 1) != 0) {
        uStack_248 = uVar20;
        uStack_244 = *(undefined4 *)((long)puVar8 + 4);
        uStack_240 = uVar22;
        uStack_23c = *(undefined4 *)((long)puVar8 + 0xc);
        func_0x0412a280(pbStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
        uStack_328 = (byte *)CONCAT44(uStack_244,uStack_248);
        uStack_320 = (byte *)CONCAT44(uStack_23c,uStack_240);
        pbVar18 = uStack_328;
      }
      uStack_328 = pbVar18;
      pbStack_318 = pbVar14;
      pbVar14 = uStack_2e0;
      if (((ulong)uStack_228 & 1) != 0) {
        func_0x0412a280(uStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
        pbVar14 = uStack_2e0;
      }
    }
    else {
      if (((ulong)uStack_328 & 1) == 0) {
        uStack_328 = (byte *)CONCAT71(uStack_328._1_7_,0x20);
      }
      else {
        uStack_320 = &DAT_00000010;
        pbVar14 = pbStack_318;
      }
      *(undefined4 *)pbVar14 = _DAT_01489130;
      *(undefined4 *)(pbVar14 + 4) = _UNK_01489134;
      *(undefined4 *)(pbVar14 + 8) = _UNK_01489138;
      *(undefined4 *)(pbVar14 + 0xc) = _UNK_0148913c;
      pbVar14[0x10] = 0;
      iStack_32c = *uStack_2e8;
      pbVar14 = uStack_2e0;
    }
    uStack_2e0 = pbVar14;
    if (pbVar14 != (byte *)0x0) {
      LOCK();
      pbVar18 = pbVar14 + 8;
      lVar11 = *(long *)pbVar18;
      *(long *)pbVar18 = *(long *)pbVar18 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)pbVar14 + 0x10))(pbVar14);
        func_0x0412c2d0(pbVar14);
      }
    }
  }
  lVar11 = *in_FS_OFFSET;
  if (*(char *)(lVar11 + -0xb68) == '\0') {
    *(undefined1 *)(lVar11 + -0xb68) = 1;
    func_0x0417d010(&UNK_0ca00780,lVar11 + -0xb78,0xf53dab8);
  }
  lVar17 = *(long *)(lVar11 + -0xb70);
  uVar20 = *(undefined4 *)(lVar11 + -0xb78);
  uVar22 = *(undefined4 *)(lVar11 + -0xb74);
  uVar24 = *(undefined4 *)(lVar11 + -0xb70);
  uVar26 = *(undefined4 *)(lVar11 + -0xb6c);
  if (lVar17 != 0) {
    LOCK();
    *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
    UNLOCK();
    uStack_248 = uVar20;
    uStack_244 = uVar22;
    uStack_240 = uVar24;
    uStack_23c = uVar26;
    func_0x0412c2d0();
    uVar20 = uStack_248;
    uVar22 = uStack_244;
    uVar24 = uStack_240;
    uVar26 = uStack_23c;
  }
  uStack_2e8 = (int *)CONCAT44(uVar22,uVar20);
  uStack_2e0 = (byte *)CONCAT44(uVar26,uVar24);
  bVar4 = false;
  if (((char)uStack_238 != '\0') && (bVar4 = false, iStack_32c == 0x7fff)) {
    uStack_228 = (byte *)0x0;
    if (((ulong)uStack_328 & 1) == 0) {
      pbStack_210 = pbStack_318;
      uStack_220 = uStack_328;
      uStack_218 = uStack_320;
    }
    else {
      func_0x0412e5e0(&uStack_220,pbStack_318,uStack_320);
    }
    uStack_208 = 0;
    if (((ulong)uStack_220 & 1) == 0) {
      if ((byte)uStack_220 >> 1 != 0) goto LAB_0c00261d;
LAB_0c002726:
      pbVar18 = (byte *)0x0;
    }
    else {
      if (uStack_218 == (byte *)0x0) goto LAB_0c002726;
LAB_0c00261d:
      if (((ulong)uStack_220 & 1) == 0) {
        pbVar14 = (byte *)((long)&uStack_220 + 1);
        if (pbVar14 != (byte *)0x0) goto LAB_0c002644;
        goto LAB_0c002726;
      }
      pbVar14 = pbStack_210;
      if (pbStack_210 == (byte *)0x0) goto LAB_0c002726;
LAB_0c002644:
      if (*pbVar14 == 0) goto LAB_0c002726;
      pbVar18 = (byte *)0xcbf29ce484222325;
      uVar10 = func_0x0eee2e90(pbVar14);
      if (uVar10 != 0) {
        uVar12 = (ulong)((uint)uVar10 & 7);
        if (7 < uVar10) {
          uVar10 = uVar10 & 0xfffffffffffffff8;
          do {
            pbVar18 = (byte *)(((((((((long)pbVar18 * 0x100000001b3 ^ (ulong)*pbVar14) *
                                     0x100000001b3 ^ (ulong)pbVar14[1]) * 0x100000001b3 ^
                                   (ulong)pbVar14[2]) * 0x100000001b3 ^ (ulong)pbVar14[3]) *
                                  0x100000001b3 ^ (ulong)pbVar14[4]) * 0x100000001b3 ^
                                (ulong)pbVar14[5]) * 0x100000001b3 ^ (ulong)pbVar14[6]) *
                               0x100000001b3 ^ (ulong)pbVar14[7]);
            pbVar14 = pbVar14 + 8;
            uVar10 = uVar10 - 8;
          } while (uVar10 != 0);
        }
        if (uVar12 != 0) {
          uVar10 = 0;
          do {
            pbVar18 = (byte *)((long)pbVar18 * 0x100000001b3 ^ (ulong)pbVar14[uVar10]);
            uVar10 = uVar10 + 1;
          } while (uVar12 != uVar10);
        }
      }
    }
    uStack_228 = pbVar18;
    cVar5 = func_0x0ca13640(&uStack_2e8,&uStack_228);
    if (((ulong)uStack_220 & 1) != 0) {
      func_0x0412a280(pbStack_210,(ulong)uStack_220 & 0xfffffffffffffffe);
    }
    if (cVar5 == '\0') {
      bVar4 = false;
    }
    else {
      iStack_32c = 0;
      bVar4 = true;
    }
  }
  if (*(char *)(lVar11 + -0xb68) == '\0') {
    *(undefined1 *)(lVar11 + -0xb68) = 1;
    func_0x0417d010(&UNK_0ca00780,lVar11 + -0xb78,0xf53dab8);
    lVar17 = *(long *)(lVar11 + -0xb70);
    uVar21 = *(undefined4 *)(lVar11 + -0xb78);
    uVar23 = *(undefined4 *)(lVar11 + -0xb74);
    uVar25 = *(undefined4 *)(lVar11 + -0xb70);
    uVar27 = *(undefined4 *)(lVar11 + -0xb6c);
    uVar20 = uStack_238;
    uVar22 = uStack_234;
    uVar24 = uStack_230;
    uVar26 = uStack_22c;
  }
  else {
    lVar17 = *(long *)(lVar11 + -0xb70);
    uVar21 = *(undefined4 *)(lVar11 + -0xb78);
    uVar23 = *(undefined4 *)(lVar11 + -0xb74);
    uVar25 = *(undefined4 *)(lVar11 + -0xb70);
    uVar27 = *(undefined4 *)(lVar11 + -0xb6c);
    uVar20 = uStack_238;
    uVar22 = uStack_234;
    uVar24 = uStack_230;
    uVar26 = uStack_22c;
  }
  uStack_22c = uVar27;
  uStack_230 = uVar25;
  uStack_234 = uVar23;
  uStack_238 = uVar21;
  uVar21 = uStack_238;
  uVar23 = uStack_234;
  uVar25 = uStack_230;
  uVar27 = uStack_22c;
  if (lVar17 != 0) {
    LOCK();
    *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
    UNLOCK();
    func_0x0412c2d0(lVar17);
    uVar21 = uStack_238;
    uVar23 = uStack_234;
    uVar25 = uStack_230;
    uVar27 = uStack_22c;
    uVar20 = uStack_238;
    uVar22 = uStack_234;
    uVar24 = uStack_230;
    uVar26 = uStack_22c;
  }
  uStack_22c = uVar26;
  uStack_230 = uVar24;
  uStack_234 = uVar22;
  uStack_238 = uVar20;
  bVar19 = ((ulong)uStack_328 & 1) == 0;
  pbVar14 = (byte *)((long)&uStack_328 + 1);
  pbVar18 = pbStack_318;
  if (bVar19) {
    pbVar18 = pbVar14;
  }
  uStack_228 = (byte *)CONCAT44(uVar23,uVar21);
  uStack_220 = (byte *)CONCAT44(uVar27,uVar25);
  pbVar15 = (byte *)((ulong)uStack_328 >> 1 & 0x7f);
  if (!bVar19) {
    pbVar15 = uStack_320;
  }
  func_0x0ca12710(&fStack_300,&uStack_228,&iStack_32c,pbVar18,pbVar15);
  plVar3 = (long *)CONCAT44(uStack_2fc,fStack_300);
  if (plVar3 == (long *)0x0) {
    if (lVar17 != 0) {
      func_0x0412c2d0(lVar17);
    }
LAB_0c0028ee:
    uStack_228 = pbVar14;
    if (((ulong)uStack_328 & 1) != 0) {
      uStack_228 = pbStack_318;
    }
    func_0x0b64b060(1,3,0x19,&UNK_012ffd86,&uStack_228);
LAB_0c002925:
    param_1[1] = 0;
    iVar7 = 0;
  }
  else {
    plVar1 = (long *)*plVar3;
    LOCK();
    *(int *)((long)plVar3 + 0xc) = *(int *)((long)plVar3 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)plVar3 + 0xc) < 1) && (*plVar3 == 0)) &&
       (CONCAT44(uStack_2fc,fStack_300) != 0)) {
      func_0x0412a280(CONCAT44(uStack_2fc,fStack_300),0x10);
    }
    if (uStack_220 != (byte *)0x0) {
      func_0x0412c2d0();
    }
    if (plVar1 == (long *)0x0) goto LAB_0c0028ee;
    func_0x0c4ac7e0(&uStack_228,plVar1,(int)(short)iStack_32c);
    bVar6 = (**(code **)(*plVar1 + 0x328))(plVar1,&uStack_228);
    pbVar18 = uStack_220;
    iVar7 = iStack_304;
    uStack_228 = &UNK_0f3773c0;
    uStack_220 = (byte *)0x0;
    if (pbVar18 != (byte *)0x0) {
      (**(code **)(*(long *)pbVar18 + 0x90))();
    }
    if ((int)(uint)bVar6 < iVar7) {
      if (((ulong)uStack_328 & 1) != 0) {
        pbVar14 = pbStack_318;
      }
      func_0x0c0032e0(&UNK_013d4e78,pbVar14,&iStack_304);
      goto LAB_0c002925;
    }
    if (bVar4) {
      pbVar18 = (byte *)((ulong)uStack_328 >> 1 & 0x7f);
      if (((ulong)uStack_328 & 1) != 0) {
        pbVar18 = uStack_320;
        pbVar14 = pbStack_318;
      }
      func_0x0c4acc40(param_1,pbVar14,pbVar18,0x7fff);
    }
    else {
      lVar11 = plVar1[0x27];
      if (lVar11 == 0) {
        func_0x0c4ac7e0(param_1,plVar1);
      }
      else if (iStack_32c == 0x7fff) {
        func_0x0c4ac5f0(param_1,lVar11);
      }
      else {
        lVar11 = FUN_0c6c88d0(lVar11,(short)iStack_32c);
        if (lVar11 == 0) {
          if (((ulong)uStack_328 & 1) != 0) {
            pbVar14 = pbStack_318;
          }
          func_0x0c0032e0(&UNK_0131a726,pbVar14,&iStack_32c);
          goto LAB_0c002925;
        }
        func_0x0c4ac3e0(param_1,lVar11);
      }
    }
  }
  *(short *)(param_1 + 2) = (short)iVar7;
  *param_1 = &UNK_0f0d6548;
  if (uStack_2e0 != (byte *)0x0) {
    func_0x0412c2d0();
  }
LAB_0c002a11:
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(lStack_288,uStack_298 & 0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(lStack_268,uStack_278 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_328 & 1) != 0) {
    func_0x0412a280(pbStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1489130  minecraft:potion
 */
