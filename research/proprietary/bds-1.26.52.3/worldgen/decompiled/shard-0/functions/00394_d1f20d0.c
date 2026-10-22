/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f20d0 (ELF vaddr 0xd1f20d0)
 * Label: caller-of-seed
 * Body:  [[0d2f20d0, 0d2f2186] [0d2f2190, 0d2f21f9] [0d2f2200, 0d2f226c] [0d2f2270, 0d2f22d8] [0d2f22e0, 0d2f23e6] [0d2f23f0, 0d2f2490] [0d2f24a0, 0d2f24ba] [0d2f24c0, 0d2f24e8] [0d2f24f0, 0d2f2751] [0d2f2760, 0d2f2783] [0d2f2790, 0d2f2a8c] [0d2f2a90, 0d2f2b1e] [0d2f2b20, 0d2f3088] [0d2f3090, 0d2f31cd] [0d2f31d0, 0d2f3558] [0d2f3560, 0d2f3694] [0d2f36a0, 0d2f3781] [0d2f37b8, 0d2f37d4] [0d2f38fb, 0d2f392a] [0d2f3938, 0d2f398f]]
 * Ghidra: FUN_0d2f20d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_0d2f20d0(undefined8 *param_1,long param_2,ulong *param_3,int *param_4,undefined8 param_5,
            undefined4 param_6)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 auVar11 [8];
  uint uVar12;
  byte *pbVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  ulong *puVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  byte *pbVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  undefined8 ******ppppppuVar33;
  ulong uVar34;
  long *plVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong uVar38;
  byte *pbVar39;
  bool bVar40;
  undefined1 auVar41 [16];
  ulong *puStack_298;
  long lStack_290;
  ulong *puStack_288;
  ulong *puStack_278;
  byte *pbStack_258;
  undefined8 *******pppppppuStack_250;
  ulong *puStack_248;
  byte *pbStack_240;
  undefined8 *******pppppppuStack_238;
  undefined1 auStack_230 [8];
  undefined4 uStack_228;
  undefined4 uStack_224;
  ulong *puStack_220;
  ulong *puStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  undefined8 uStack_200;
  undefined8 *******pppppppuStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  char cStack_198;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  ulong *puStack_138;
  ulong uStack_130;
  int *piStack_128;
  undefined8 uStack_120;
  undefined4 uStack_114;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  long lStack_d8;
  undefined8 ******ppppppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  uint uStack_88;
  undefined8 ******ppppppuStack_80;
  ulong uStack_78;
  long *plStack_70;
  undefined *puStack_68;
  undefined8 ******appppppuStack_60 [5];
  uint uStack_38;
  
  pbStack_158 = (byte *)0x0;
  pbStack_150 = (byte *)0x0;
  pbStack_148 = (byte *)0x0;
  lStack_1f0 = param_2;
  puStack_1e0 = param_1;
  piStack_128 = param_4;
  uStack_120 = param_5;
  uStack_114 = param_6;
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  puVar24 = puVar17;
  puVar37 = param_3;
  if (puVar17 == (ulong *)0x0) goto LAB_0d2f370e;
LAB_0d2f2145:
  puVar36 = puVar24 + 4;
  puVar26 = (ulong *)puStack_1e0[3];
  puStack_208 = (ulong *)puStack_1e0[4];
  if (puVar26 != puStack_208) {
LAB_0d2f21a7:
    do {
      plVar3 = (long *)*puVar26;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      lStack_168 = 0;
      if (&uStack_188 != puVar37) {
        if ((puVar37[1] & 1) == 0) {
          uStack_170 = puVar37[3];
          uStack_180 = puVar37[1];
          uStack_178 = puVar37[2];
        }
        else {
          func_0x04885070(&uStack_180,puVar37[3],puVar37[2]);
        }
      }
      lVar18 = lStack_168;
      uVar21 = uStack_180;
      uVar38 = *puVar37;
      plVar35 = (long *)*plVar3;
      plVar3 = (long *)plVar3[1];
      uStack_188 = uVar38;
      if (plVar35 != plVar3) {
        uVar25 = uStack_178;
        uVar34 = uStack_170;
        if ((uStack_180 & 1) == 0) {
          uVar25 = uStack_180 >> 1 & 0x7f;
          uVar34 = (long)&uStack_180 + 1;
        }
        do {
          lVar31 = *plVar35;
          puStack_288 = puVar24;
          if (*(ulong *)(lVar31 + 0x70) == uVar38) {
            if ((*(ulong **)(lVar31 + 0x90) == &uStack_188) && (lVar18 == lVar31 + 0x70)) {
LAB_0d2f2823:
              uVar9 = true;
              uVar8 = true;
              goto joined_r0x0d2f2841;
            }
            bVar2 = *(byte *)(lVar31 + 0x78);
            if ((bVar2 & 1) == 0) {
              uVar30 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar30 = *(ulong *)(lVar31 + 0x80);
            }
            if (uVar30 == uVar25) {
              if ((bVar2 & 1) == 0) {
                lVar22 = lVar31 + 0x79;
              }
              else {
                lVar22 = *(long *)(lVar31 + 0x88);
              }
              iVar15 = func_0x0eee3000(lVar22,uVar34,uVar25);
              if (iVar15 == 0) {
                *(ulong **)(lVar31 + 0x90) = &uStack_188;
                lStack_168 = lVar31 + 0x70;
                goto LAB_0d2f2823;
              }
            }
          }
          *(undefined8 *)(lVar31 + 0x90) = 0;
          plVar35 = plVar35 + 3;
        } while (plVar35 != plVar3);
      }
      uVar9 = false;
      uVar8 = false;
joined_r0x0d2f2841:
      if ((uVar21 & 1) != 0) {
        func_0x0412a280(uStack_170,uStack_180 & 0xfffffffffffffffe);
        uVar8 = uVar9;
      }
      puStack_298 = puVar36;
      if (!(bool)uVar8) {
        puVar26 = puVar26 + 2;
        if (puVar26 == puStack_208) break;
        goto LAB_0d2f21a7;
      }
      puStack_278 = (ulong *)*puVar26;
      uVar38 = *puStack_278;
      uVar21 = puStack_278[1];
      if (uVar38 != uVar21) {
        iVar15 = 0;
        puVar17 = puVar24;
        do {
          if (puVar24 < puVar36) {
            *puVar24 = uVar38;
          }
          else {
            puVar27 = (ulong *)((long)puVar24 - (long)puVar17);
            uVar25 = ((long)puVar27 >> 3) + 1;
            if (0x1fffffffffffffff < uVar25) goto LAB_0d2f374b;
            uVar30 = (long)puVar36 - (long)puVar17;
            uVar34 = (long)uVar30 >> 2;
            if ((ulong)((long)uVar30 >> 2) <= uVar25) {
              uVar34 = uVar25;
            }
            if (0x7ffffffffffffff7 < uVar30) {
              uVar34 = 0x1fffffffffffffff;
            }
            puStack_288 = puVar17;
            if (0x1fffffffffffffff < uVar34) goto LAB_0d2f3750;
            lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (lVar18 == 0) {
              func_0x0eec74c0(uVar34 * 8,0);
            }
            puVar24 = (ulong *)((long)puVar27 + lVar18);
            *(ulong *)(lVar18 + (long)puVar27) = uVar38;
            func_0x0eee2f00(puVar24 + -((long)puVar27 >> 3),puVar17,puVar27);
            puVar36 = (ulong *)(lVar18 + uVar34 * 8);
            func_0x0412a280(puVar17,uVar30);
            puVar17 = puVar24 + -((long)puVar27 >> 3);
            puStack_298 = puVar24;
          }
          puVar24 = puVar24 + 1;
          iVar15 = iVar15 + *(int *)(uVar38 + 0x10);
          uVar38 = uVar38 + 0x18;
        } while (uVar38 != uVar21);
        puStack_278 = (ulong *)*puVar26;
        puVar27 = (ulong *)((long)puVar24 - (long)puVar17);
        puVar24 = puVar17;
        if (puVar27 != (ulong *)0x0) {
          if (-1 < (long)puVar27) {
            lStack_290 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar27);
            if (lStack_290 == 0) {
              func_0x0eec74c0(puVar27,0);
            }
            pbStack_258 = (byte *)(lStack_290 + (long)puVar27);
            func_0x0eee2f00(lStack_290,puVar17,puVar27);
            goto LAB_0d2f2580;
          }
          goto LAB_0d2f3773;
        }
        pbStack_258 = (byte *)0x0;
        lStack_290 = 0;
        if (pbStack_148 <= pbStack_150) goto LAB_0d2f261e;
LAB_0d2f259e:
        *(ulong **)pbStack_150 = puStack_278;
        *(long *)(pbStack_150 + 8) = lStack_290;
        *(byte **)(pbStack_150 + 0x10) = pbStack_258;
        *(byte **)(pbStack_150 + 0x18) = pbStack_258;
        *(int *)(pbStack_150 + 0x20) = iVar15;
        pbStack_150 = pbStack_150 + 0x28;
        puVar26 = puVar26 + 2;
        if (puVar26 == puStack_208) break;
        goto LAB_0d2f21a7;
      }
      iVar15 = 0;
      pbStack_258 = (byte *)0x0;
      lStack_290 = 0;
LAB_0d2f2580:
      if (pbStack_150 < pbStack_148) goto LAB_0d2f259e;
LAB_0d2f261e:
      pbVar39 = pbStack_150;
      pbVar13 = pbStack_158;
      puVar17 = (ulong *)(pbStack_150 + -(long)pbStack_158);
      uVar38 = ((long)puVar17 >> 3) * -0x3333333333333333 + 1;
      puVar27 = puVar26;
      puStack_298 = puVar36;
      if (0x666666666666666 < uVar38) goto LAB_0d2f376e;
      uStack_210 = (long)pbStack_148 - (long)pbStack_158;
      uVar21 = ((long)uStack_210 >> 3) * -0x6666666666666666;
      if (uVar38 < uVar21) {
        uVar38 = uVar21;
      }
      if (0x333333333333332 < (ulong)(((long)uStack_210 >> 3) * -0x3333333333333333)) {
        uVar38 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar38) goto LAB_0d2f3769;
      pbVar19 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (pbVar19 == (byte *)0x0) {
        func_0x0eec74c0(uVar38 * 0x28,0);
      }
      *(ulong **)(pbVar19 + (long)puVar17) = puStack_278;
      *(long *)(pbVar19 + 8 + (long)puVar17) = lStack_290;
      *(byte **)(pbVar19 + 0x10 + (long)puVar17) = pbStack_258;
      *(byte **)(pbVar19 + 0x18 + (long)puVar17) = pbStack_258;
      *(int *)(pbVar19 + 0x20 + (long)puVar17) = iVar15;
      if (pbVar13 != pbVar39) {
        lVar18 = 0;
        do {
          *(undefined8 *)(pbVar19 + lVar18) = *(undefined8 *)(pbVar13 + lVar18);
          pbVar28 = pbVar19 + lVar18 + 0x10;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar13 + lVar18 + 8;
          uVar5 = *(undefined4 *)(pbVar28 + 4);
          uVar6 = *(undefined4 *)(pbVar28 + 8);
          uVar7 = *(undefined4 *)(pbVar28 + 0xc);
          pbVar1 = pbVar19 + lVar18 + 8;
          *(undefined4 *)pbVar1 = *(undefined4 *)pbVar28;
          *(undefined4 *)(pbVar1 + 4) = uVar5;
          *(undefined4 *)(pbVar1 + 8) = uVar6;
          *(undefined4 *)(pbVar1 + 0xc) = uVar7;
          *(undefined8 *)(pbVar19 + lVar18 + 0x18) = *(undefined8 *)(pbVar13 + lVar18 + 0x18);
          pbVar28 = pbVar13 + lVar18 + 8;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar13 + lVar18 + 0x18;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          *(undefined4 *)(pbVar19 + lVar18 + 0x20) = *(undefined4 *)(pbVar13 + lVar18 + 0x20);
          lVar31 = lVar18 + 0x28;
          lVar18 = lVar18 + 0x28;
          pbVar28 = pbVar13;
        } while (pbVar13 + lVar31 != pbVar39);
        do {
          lVar18 = *(long *)(pbVar28 + 8);
          if (lVar18 != 0) {
            *(long *)(pbVar28 + 0x10) = lVar18;
            func_0x0412a280(lVar18,*(long *)(pbVar28 + 0x18) - lVar18);
          }
          pbVar28 = pbVar28 + 0x28;
        } while (pbVar28 != pbVar39);
      }
      pbStack_148 = pbVar19 + uVar38 * 0x28;
      pbStack_158 = pbVar19;
      if (pbVar13 != (byte *)0x0) {
        func_0x0412a280(pbVar13,uStack_210);
      }
      puVar26 = puVar26 + 2;
      puStack_288 = puVar24;
      pbStack_150 = (byte *)((long)puVar17 + (long)pbVar19) + 0x28;
    } while (puVar26 != puStack_208);
  }
  puVar36 = (ulong *)((long)puVar36 - (long)puVar24);
  func_0x0412a280(puVar24,puVar36);
  pbVar13 = pbStack_158;
  lVar18 = lStack_1f0;
  pbStack_240 = pbStack_150;
  if (pbStack_158 != pbStack_150) goto code_r0x0d2f2896;
  uVar38 = 0;
  uStack_130 = 0;
  uVar21 = 0;
  if (pbStack_158 == (byte *)0x0) goto LAB_0d2f36df;
  goto LAB_0d2f36cc;
LAB_0d2f34d6:
  if (iVar16 == 0xd) {
    iVar16 = 0;
  }
LAB_0d2f34fa:
  pbVar39 = pbStack_240;
  func_0x0412a280(puStack_298,(long)puStack_248 - (long)puStack_298);
LAB_0d2f350c:
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f45f8e8 + (ulong)uStack_38 * 8))(&pppppppuStack_1d8,appppppuStack_60);
  }
  if ((iVar16 == 0) || (iVar16 == 0xb)) goto LAB_0d2f2b2a;
  if (iVar16 != 6) {
    if (iVar16 != 9) {
      uVar38 = (ulong)ppppppuStack_e0 & 0xff;
      goto joined_r0x0d2f3615;
    }
    goto LAB_0d2f3590;
  }
  goto LAB_0d2f35d7;
code_r0x0d2f2896:
  ppppppuStack_e8 = (undefined8 ******)(**(code **)(**(long **)(lStack_1f0 + 0xa0) + 0x440))();
  lStack_110 = lVar18;
  uStack_108 = uStack_120;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  puVar17 = (ulong *)0xcccccccccccccccd;
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puVar20[2] = 0;
  puVar20[3] = 0;
  *puVar20 = 0;
  puVar20[1] = 0;
  *(undefined4 *)(puVar20 + 4) = 0x3f800000;
  puStack_100 = puVar20;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puVar20[2] = 0;
  puVar20[3] = 0;
  *puVar20 = 0;
  puVar20[1] = 0;
  *(undefined4 *)(puVar20 + 4) = 0x3f800000;
  uStack_c0 = *(undefined8 *)(*(long *)(lStack_1f0 + 0xa0) + 0x2d8);
  puStack_b8 = &UNK_0f45e800;
  ppppppuStack_b0 = (undefined8 ******)&UNK_0f2bdd80;
  uStack_a8 = 0x5deece66d;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  ppppppuStack_80 = ppppppuStack_e8;
  uStack_78 = 0;
  plStack_70 = &lStack_110;
  uStack_120 = CONCAT44(uStack_120._4_4_,*piStack_128 >> 4);
  piStack_128 = (int *)CONCAT44(piStack_128._4_4_,piStack_128[2] >> 4);
  lStack_d8 = ((long)pbStack_240 - (long)pbVar13 >> 3) * -0x3333333333333333;
  uStack_c8 = (ulong)ppppppuStack_e8 & 0xffffffffffff ^ 0x5deece66d;
  ppppppuStack_e0 = (undefined8 ******)((long)puVar37 + 9);
  lVar31 = 0;
  iVar15 = 0;
  iVar32 = 0;
  puStack_138 = (ulong *)0x0;
  uStack_f0 = 0;
  lVar18 = lStack_d8;
  uVar38 = 0;
  puVar24 = (ulong *)0x1;
  puStack_f8 = puVar20;
  ppppppuStack_d0 = ppppppuStack_e0;
LAB_0d2f2b4d:
  puStack_208 = puVar24;
  uStack_210 = uVar38;
  lVar18 = lVar18 + -1;
  lVar22 = *(long *)(pbVar13 + lVar18 * 0x28);
  puVar26 = (ulong *)(lVar18 * 5);
  if (*(int *)(lVar22 + 0x34) == -1) {
LAB_0d2f375a:
    func_0x04931450();
LAB_0d2f375f:
    func_0x04931450();
LAB_0d2f3764:
    func_0x0ca7bab0();
LAB_0d2f3769:
    FUN_04882eb0();
    puVar27 = puVar26;
LAB_0d2f376e:
    func_0x0d309870();
LAB_0d2f3773:
    uVar23 = func_0x0ca7bab0();
    uVar23 = FUN_04882e20(uVar23);
    func_0x0d2f3990(&pbStack_158);
    uVar23 = func_0x0eee2d70(uVar23);
    func_0x0412a280(puVar17,(long)puVar36 - (long)puVar17);
    func_0x0d2f3990(&pbStack_158);
    uVar23 = func_0x0eee2d70(uVar23);
    func_0x0624d960(&pppppppuStack_1d8);
    func_0x0412a280(puStack_298,(long)puVar27 - (long)puStack_298);
    func_0x0624d960(&puStack_68);
    func_0x0624dcb0(&uStack_c0);
    func_0x0624dcf0(&lStack_110);
    func_0x0d2f3990(&pbStack_158);
    func_0x0eee2d70(uVar23);
    pcVar4 = (code *)swi(3);
    auVar41 = (*pcVar4)();
    return auVar41;
  }
  uStack_200 = func_0x0d2d2570(lVar22 + 0x28,lVar22 + 0x18,puStack_1e0,
                               CONCAT44(*(int *)(lVar22 + 0x2c) * iVar32 + (int)piStack_128,
                                        *(int *)(lVar22 + 0x2c) * iVar15 + (int)uStack_120));
  if ((char)uStack_114 == '\0') {
LAB_0d2f2c35:
    uVar38 = uStack_200;
    puVar26 = (ulong *)(pbVar13 + lVar18 * 0x28);
    puVar17 = (ulong *)*puVar26;
    if (*(int *)((long)puVar17 + 0x34) == -1) goto LAB_0d2f375f;
    uVar21 = func_0x0d2d2570(puVar17 + 5,puVar17 + 3,puStack_1e0,uStack_200);
    pbVar39 = pbStack_240;
    if ((uVar38 != uVar21) ||
       ((*(float *)(puVar17 + 3) < _DAT_011983f0 &&
        (cVar14 = (*(code *)puVar17[4])(*puStack_1e0,(long)*(int *)((long)puVar17 + 0x1c),uVar38),
        pbVar39 = pbStack_240, cVar14 == '\0')))) goto LAB_0d2f2b2a;
    pppppppuStack_1d8 = (undefined8 *******)&UNK_0f45e800;
    puStack_1d0 = &UNK_0f2bdd80;
    uStack_1c8 = uStack_c8;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1a8 = 0;
    func_0x0d2d2c60(&pppppppuStack_1d8,ppppppuStack_e8,uStack_200 & 0xffffffff,uStack_200._4_4_);
    uVar12 = uStack_1a8;
    puStack_68 = &UNK_0f45e800;
    appppppuStack_60[0]._0_1_ = 0;
    uStack_38 = 0xffffffff;
    if ((ulong)uStack_1a8 != 0xffffffff) {
      pppppppuStack_238 = appppppuStack_60;
      (**(code **)(&UNK_0f45ee88 + (ulong)uStack_1a8 * 8))(&pppppppuStack_238,&puStack_1d0);
      uStack_38 = uVar12;
      if ((ulong)uStack_1a8 != 0xffffffff) {
        (**(code **)(&UNK_0f45f8e8 + (ulong)uStack_1a8 * 8))(&pppppppuStack_238,&puStack_1d0);
      }
    }
    uVar38 = puVar26[1];
    puVar17 = (ulong *)(puVar26[2] - uVar38);
    if (puVar17 == (ulong *)0x0) {
      puStack_298 = (ulong *)0x0;
      param_3 = (ulong *)0x0;
    }
    else {
      if ((long)puVar17 < 0) goto LAB_0d2f3764;
      puStack_298 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar17);
      if (puStack_298 == (ulong *)0x0) {
        func_0x0eec74c0(puVar17,0);
      }
      param_3 = (ulong *)((long)puStack_298 + (long)puVar17);
      func_0x0eee2f00(puStack_298,uVar38,puVar17);
    }
    iVar29 = (int)puVar26[4];
    puStack_248 = param_3;
LAB_0d2f2e0b:
    puVar27 = puStack_248;
    if (puStack_298 == param_3) {
      iVar16 = 0;
      pbVar39 = pbStack_240;
      if (puStack_298 == (ulong *)0x0) goto LAB_0d2f350c;
      goto LAB_0d2f34fa;
    }
    pppppppuStack_250 = (undefined8 *******)CONCAT44(pppppppuStack_250._4_4_,iVar29);
    pppppppuStack_238 = &pppppppuStack_250;
    if ((ulong)uStack_38 == 0xffffffff) {
      func_0x04931450();
LAB_0d2f374b:
      func_0x0ca7bab0();
LAB_0d2f3750:
      FUN_04882eb0();
      puVar26 = puVar27;
      puVar17 = puStack_288;
      goto LAB_0d2f375a;
    }
    pppppppuStack_1d8 = &pppppppuStack_238;
    iVar16 = (**(code **)(&UNK_0f45eeb8 + (ulong)uStack_38 * 8))
                       (&pppppppuStack_1d8,appppppuStack_60);
    ppppppuVar33 = ppppppuStack_80;
    uVar38 = uStack_200;
    puVar36 = (ulong *)0x0;
    puVar24 = puStack_298;
    do {
      iVar16 = iVar16 - *(int *)(*puVar24 + 0x10);
      if (iVar16 < 0) break;
      puVar36 = (ulong *)((long)puVar36 + 1);
      puVar24 = puVar24 + 1;
    } while (puVar24 != param_3);
    puStack_288 = (ulong *)puStack_298[(long)puVar36];
    plVar3 = (long *)*puStack_288;
    uStack_78 = uStack_200;
    uStack_1c8 = (ulong)ppppppuStack_80 & 0xffffffffffff ^ 0x5deece66d;
    pppppppuStack_1d8 = (undefined8 *******)&UNK_0f45e800;
    puStack_1d0 = &UNK_0f2bdd80;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1a8 = 0;
    pppppppuStack_250 = (undefined8 *******)ppppppuStack_80;
    pppppppuStack_1f8 = &pppppppuStack_250;
    pppppppuStack_238 = &pppppppuStack_1f8;
    func_0x0d2e1550(&pppppppuStack_238,&puStack_1d0);
    pppppppuStack_250 = &pppppppuStack_1f8;
    if ((ulong)uStack_1a8 != 0xffffffff) {
      pppppppuStack_238 = &pppppppuStack_250;
      puVar17 = (ulong *)(**(code **)(&UNK_0f45eec8 + (ulong)uStack_1a8 * 8))
                                   (&pppppppuStack_238,&puStack_1d0);
      pppppppuStack_250 = &pppppppuStack_1f8;
      if ((ulong)uStack_1a8 == 0xffffffff) goto LAB_0d2f3704;
      pppppppuStack_238 = &pppppppuStack_250;
      lVar22 = (**(code **)(&UNK_0f45eec8 + (ulong)uStack_1a8 * 8))(&pppppppuStack_238,&puStack_1d0)
      ;
      puVar17 = (ulong *)((long)puVar17 * (long)(int)uVar38);
      pppppppuStack_250 =
           (undefined8 *******)
           (lVar22 * ((long)uVar38 >> 0x20) ^ (ulong)puVar17 ^ (ulong)ppppppuVar33);
      pppppppuStack_1f8 = &pppppppuStack_250;
      if ((ulong)uStack_1a8 == 0xffffffff) goto LAB_0d2f3704;
      pppppppuStack_238 = &pppppppuStack_1f8;
      (**(code **)(&UNK_0f45ef38 + (ulong)uStack_1a8 * 8))(&pppppppuStack_238,&puStack_1d0);
      if ((ulong)uStack_88 == 0xffffffff) {
        if (uStack_1a8 != 0xffffffff) goto LAB_0d2f30a4;
      }
      else {
        if (uStack_1a8 == 0xffffffff) {
          (**(code **)(&UNK_0f45ee28 + (ulong)uStack_88 * 8))(&pppppppuStack_238,&ppppppuStack_b0);
          uStack_88 = 0xffffffff;
        }
        else {
LAB_0d2f30a4:
          pppppppuStack_238 = &ppppppuStack_b0;
          (**(code **)(&UNK_0f45ee98 + (ulong)uStack_1a8 * 8))
                    (&pppppppuStack_238,pppppppuStack_238,&puStack_1d0);
        }
        if ((ulong)uStack_1a8 != 0xffffffff) {
          (**(code **)(&UNK_0f45f8e8 + (ulong)uStack_1a8 * 8))(&pppppppuStack_238,&puStack_1d0);
        }
      }
      (**(code **)(*plVar3 + 0x10))(&pppppppuStack_1d8,plVar3,&uStack_c0);
      if (cStack_198 == '\x01') {
        uVar38 = plVar3[2];
        lVar22 = plVar3[3] - uVar38;
        pppppppuStack_238 = (undefined8 *******)(lVar22 >> 1);
        if ((lVar22 == -2) || (auStack_230 = (undefined1  [8])uVar38, plVar3[3] != 0 && uVar38 == 0)
           ) {
          func_0x04890760();
          goto LAB_0d2f3704;
        }
        cVar14 = (**(code **)(*(long *)plStack_70[1] + 0x38))
                           ((long *)plStack_70[1],pppppppuStack_1d8,(ulong)pppppppuStack_1d8 >> 0x20
                           );
        if (cVar14 == '\0') goto LAB_0d2f31d0;
        uVar38 = *puStack_288;
        pppppppuStack_238 = (undefined8 *******)0x0;
        if ((*(byte *)(uVar38 + 0x28) & 1) == 0) {
          puStack_220 = *(ulong **)(uVar38 + 0x38);
          auStack_230 = *(undefined1 (*) [8])(uVar38 + 0x28);
          uStack_228 = *(undefined4 *)(uVar38 + 0x30);
          uStack_224 = *(undefined4 *)(uVar38 + 0x34);
        }
        else {
          FUN_0412e5e0(auStack_230,*(undefined8 *)(uVar38 + 0x38),*(undefined8 *)(uVar38 + 0x30));
        }
        auVar11 = auStack_230;
        puStack_218 = (ulong *)0x0;
        puVar36 = (ulong *)((ulong)auStack_230 & 0xff);
        if (((ulong)auStack_230 & 1) == 0) {
          uVar38 = (ulong)(auStack_230[0] >> 1);
          if (auStack_230[0] >> 1 != 0) goto LAB_0d2f3259;
LAB_0d2f3365:
          uVar21 = *puVar37;
joined_r0x0d2f3387:
          pppppppuStack_238 = (undefined8 *******)0x0;
          if (uVar21 != 0) goto LAB_0d2f33f0;
LAB_0d2f3389:
          bVar2 = (byte)puVar37[1];
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == uVar38) goto LAB_0d2f33af;
            goto LAB_0d2f33f0;
          }
          if (puVar37[2] != uVar38) goto LAB_0d2f33f0;
LAB_0d2f33af:
          ppppppuVar33 = ppppppuStack_d0;
          if ((bVar2 & 1) != 0) {
            ppppppuVar33 = (undefined8 ******)puVar37[3];
          }
          puVar24 = (ulong *)(auStack_230 + 1);
          if (((ulong)auVar11 & 1) != 0) {
            puVar24 = puStack_220;
          }
          iVar16 = func_0x0eee3000(ppppppuVar33,puVar24,uVar38);
          if (iVar16 != 0) goto LAB_0d2f33f0;
          puVar37[4] = (ulong)&pppppppuStack_238;
          bVar10 = true;
          bVar40 = true;
          puStack_218 = puVar37;
        }
        else {
          uVar38 = CONCAT44(uStack_224,uStack_228);
          if (uVar38 == 0) goto LAB_0d2f3365;
LAB_0d2f3259:
          puVar17 = (ulong *)(auStack_230 + 1);
          if (((ulong)auStack_230 & 1) != 0) {
            puVar17 = puStack_220;
          }
          if (puVar17 == (ulong *)0x0) {
            uVar21 = *puVar37;
            goto joined_r0x0d2f3387;
          }
          if ((byte)*puVar17 == 0) goto LAB_0d2f3365;
          uVar21 = func_0x0eee2e90(puVar17);
          pppppppuStack_238 = (undefined8 *******)0xcbf29ce484222325;
          if (uVar21 != 0) {
            if (7 < uVar21) {
              uVar25 = uVar21 & 0xfffffffffffffff8;
              do {
                pppppppuStack_238 =
                     (undefined8 *******)
                     (((((((((long)pppppppuStack_238 * 0x100000001b3 ^ (ulong)(byte)*puVar17) *
                            0x100000001b3 ^ (ulong)*(byte *)((long)puVar17 + 1)) * 0x100000001b3 ^
                          (ulong)*(byte *)((long)puVar17 + 2)) * 0x100000001b3 ^
                         (ulong)*(byte *)((long)puVar17 + 3)) * 0x100000001b3 ^
                        (ulong)*(byte *)((long)puVar17 + 4)) * 0x100000001b3 ^
                       (ulong)*(byte *)((long)puVar17 + 5)) * 0x100000001b3 ^
                      (ulong)*(byte *)((long)puVar17 + 6)) * 0x100000001b3 ^
                     (ulong)*(byte *)((long)puVar17 + 7));
                puVar17 = puVar17 + 1;
                uVar25 = uVar25 - 8;
              } while (uVar25 != 0);
            }
            if ((uVar21 & 7) != 0) {
              uVar25 = 0;
              do {
                pppppppuStack_238 =
                     (undefined8 *******)
                     ((long)pppppppuStack_238 * 0x100000001b3 ^
                     (ulong)*(byte *)((long)puVar17 + uVar25));
                uVar25 = uVar25 + 1;
              } while (((uint)uVar21 & 7) != uVar25);
            }
          }
          if ((undefined8 *******)*puVar37 == pppppppuStack_238) goto LAB_0d2f3389;
LAB_0d2f33f0:
          puVar37[4] = 0;
          bVar10 = false;
          bVar40 = false;
        }
        if (((ulong)auVar11 & 1) != 0) {
          func_0x0412a280(puStack_220,(ulong)auStack_230 & 0xfffffffffffffffe);
          bVar40 = bVar10;
        }
        iVar16 = 0xd;
        if (bVar40) {
          uStack_130 = (ulong)pppppppuStack_1d8 >> 8;
          uStack_1e8 = uStack_1e8 & 0xffffff0000000000 | (ulong)puStack_1d0 & 0xffffffff |
                       0x100000000;
          iVar16 = 1;
          ppppppuStack_e0 = pppppppuStack_1d8;
        }
      }
      else {
LAB_0d2f31d0:
        puVar17 = puStack_298 + (long)puVar36;
        uVar38 = puStack_288[2];
        lVar22 = (long)param_3 - (long)(puVar17 + 1);
        if (lVar22 != 0) {
          func_0x0eee2ee0(puVar17,puVar17 + 1,lVar22);
        }
        param_3 = (ulong *)(lVar22 + (long)puVar17);
        iVar29 = iVar29 - (int)uVar38;
        iVar16 = 0;
      }
      if (cStack_198 == '\x01') {
        puVar24 = (ulong *)CONCAT44(uStack_1a4,uStack_1a8);
        if (puVar24 == &uStack_1c8) {
          lVar22 = 0x20;
        }
        else {
          lVar22 = 0x28;
          if (puVar24 == (ulong *)0x0) goto LAB_0d2f2e03;
        }
        (**(code **)(*puVar24 + lVar22))();
      }
LAB_0d2f2e03:
      if (iVar16 != 0) goto LAB_0d2f34d6;
      goto LAB_0d2f2e0b;
    }
LAB_0d2f3704:
    func_0x04931450();
LAB_0d2f370e:
    func_0x0eec74c0(0x20,0);
    puVar24 = puVar17;
    puVar37 = param_3;
    goto LAB_0d2f2145;
  }
  if ((*(long *)(lStack_1f0 + 0x1a8) == 0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef), cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar14 = (**(code **)(**(long **)(lStack_1f0 + 0x1a8) + 0x30))
                     (*(long **)(lStack_1f0 + 0x1a8),&uStack_200);
  pbVar39 = pbStack_240;
  if (cVar14 == '\0') goto LAB_0d2f2c35;
LAB_0d2f2b2a:
  uVar38 = uStack_210;
  puVar24 = puStack_208;
  if (lVar18 != 0) goto LAB_0d2f2b4d;
LAB_0d2f3590:
  puStack_138 = (ulong *)((long)puStack_138 + 1);
  uVar38 = uStack_210;
  puVar24 = puStack_208;
  if (puStack_208 <= puStack_138) {
    uStack_f0 = uStack_f0 + 1;
    bVar40 = 1 < uStack_f0;
    if (bVar40) {
      uStack_f0 = 0;
    }
    puStack_138 = (ulong *)0x0;
    uVar38 = (ulong)((int)uStack_210 + 1U & 3);
    puVar24 = (ulong *)((long)puStack_208 + (ulong)bVar40);
  }
  lVar31 = lVar31 + 1;
  iVar15 = iVar15 + *(int *)(&UNK_014e5390 + uStack_210 * 4);
  iVar32 = iVar32 + *(int *)(&UNK_014e1650 + uStack_210 * 4);
  lVar18 = lStack_d8;
  if (lVar31 != 0x9dd1) goto LAB_0d2f2b4d;
LAB_0d2f35d7:
  uStack_1e8 = uStack_1e8 & 0xffffff00ffffffff;
  uVar38 = 0;
joined_r0x0d2f3615:
  if ((ulong)uStack_88 != 0xffffffff) {
    (**(code **)(&UNK_0f45f8e8 + (ulong)uStack_88 * 8))(&pppppppuStack_1d8,&ppppppuStack_b0);
  }
  puVar20 = puStack_f8;
  puStack_f8 = (undefined8 *)0x0;
  if (puVar20 != (undefined8 *)0x0) {
    func_0x0629e480(&puStack_f8);
  }
  puVar20 = puStack_100;
  puStack_100 = (undefined8 *)0x0;
  if (puVar20 != (undefined8 *)0x0) {
    FUN_0629e540(&puStack_100);
  }
  uStack_130 = uStack_130 << 8;
  uVar21 = uStack_1e8;
  if (pbVar13 == (byte *)0x0) goto LAB_0d2f36df;
  do {
    lVar18 = *(long *)(pbVar39 + -0x20);
    if (lVar18 != 0) {
      *(long *)(pbVar39 + -0x18) = lVar18;
      func_0x0412a280(lVar18,*(long *)(pbVar39 + -0x10) - lVar18);
    }
    pbVar39 = pbVar39 + -0x28;
    uVar21 = uStack_1e8;
  } while (pbVar39 != pbVar13);
LAB_0d2f36cc:
  func_0x0412a280(pbVar13,(long)pbStack_148 - (long)pbVar13);
LAB_0d2f36df:
  auVar41._0_8_ = uStack_130 | uVar38;
  auVar41._8_8_ = uVar21;
  return auVar41;
}


