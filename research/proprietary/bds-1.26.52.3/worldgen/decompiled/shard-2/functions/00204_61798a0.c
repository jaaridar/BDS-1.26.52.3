/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x62798a0 (ELF vaddr 0x61798a0)
 * Label: caller-of-callee
 * Body:  [[062798a0, 06279a29] [06279a30, 06279afa] [06279b00, 06279e58] [06279e60, 06279e72] [06279e80, 0627a220] [0627a230, 0627a2c6] [0627a2d0, 0627a743] [0627a750, 0627a910] [0627a920, 0627ab38] [0627acd9, 0627acf4] [0627acf8, 0627ad1c] [0627ad20, 0627ad3b] [0627ad5b, 0627ad6c]]
 * Ghidra: FUN_062798a0
 */


/* WARNING: Removing unreachable block (ram,0x062799bb) */
/* WARNING: Removing unreachable block (ram,0x062799e1) */
/* WARNING: Removing unreachable block (ram,0x062799f8) */
/* WARNING: Removing unreachable block (ram,0x06279a0a) */
/* WARNING: Removing unreachable block (ram,0x062799d0) */
/* WARNING: Removing unreachable block (ram,0x06279a8d) */
/* WARNING: Removing unreachable block (ram,0x06279aab) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_062798a0(undefined8 *param_1,long param_2,uint *param_3,int param_4,ulong param_5)

{
  long *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 ******ppppppuVar9;
  undefined1 auVar10 [8];
  undefined8 *******pppppppuVar11;
  uint uVar12;
  undefined8 ******ppppppuVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *******pppppppuVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  uint *puVar24;
  byte *pbVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  uint *puVar29;
  long lVar30;
  long *plVar31;
  byte *pbVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  uint *puVar36;
  bool bVar37;
  undefined1 auStack_358 [8];
  undefined8 *******pppppppuStack_350;
  undefined8 *******pppppppuStack_348;
  undefined8 uStack_338;
  undefined8 *******pppppppuStack_330;
  undefined8 *******pppppppuStack_328;
  uint uStack_320;
  undefined8 *******pppppppuStack_318;
  undefined8 *******pppppppuStack_310;
  undefined8 *******pppppppuStack_308;
  uint *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  uint uStack_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  undefined8 uStack_288;
  int iStack_280;
  uint uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  long lStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  long lStack_250;
  int iStack_248;
  undefined8 *******pppppppuStack_238;
  undefined1 uStack_230;
  undefined8 ******ppppppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 ******ppppppuStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  byte bStack_1e8;
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [136];
  uint uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [136];
  uint uStack_38;
  
  uVar15 = func_0x0627ad70(param_2,param_3,param_4);
  if ((param_5 >> 0x20 & 1) != 0) {
    uVar15 = (uint)param_5;
  }
  plVar31 = *(long **)(param_2 + 0x60);
  plVar34 = *(long **)(param_2 + 0x68);
  if ((*param_3 & 1) == 0) {
    uStack_288 = *(undefined8 *)(param_3 + 4);
    uStack_298 = *param_3;
    uStack_294 = param_3[1];
    uStack_290 = param_3[2];
    uStack_28c = param_3[3];
  }
  else {
    func_0x0412e5e0(&uStack_298,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 2));
  }
  iStack_280 = param_4;
  uStack_27c = uVar15;
  if (plVar31 != plVar34) {
    do {
      cVar14 = func_0x062a5a70(&uStack_298,plVar31);
      if (cVar14 != '\0') break;
      plVar31 = plVar31 + 2;
    } while (plVar31 != plVar34);
  }
  plVar26 = plVar31 + 2;
  puStack_300 = param_3;
  if (plVar26 != plVar34 && plVar31 != plVar34) {
    do {
      cVar14 = func_0x062a5a70(&uStack_298,plVar26);
      if (cVar14 == '\0') {
        lVar30 = *plVar26;
        uVar7 = *(undefined4 *)((long)plVar26 + 4);
        lVar28 = plVar26[1];
        uVar8 = *(undefined4 *)((long)plVar26 + 0xc);
        *plVar26 = 0;
        plVar26[1] = 0;
        plVar5 = (long *)plVar31[1];
        *(int *)plVar31 = (int)lVar30;
        *(undefined4 *)((long)plVar31 + 4) = uVar7;
        *(int *)(plVar31 + 1) = (int)lVar28;
        *(undefined4 *)((long)plVar31 + 0xc) = uVar8;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar30 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar30 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            FUN_0412c2d0(plVar5);
          }
        }
        plVar31 = plVar31 + 2;
      }
      plVar26 = plVar26 + 2;
    } while (plVar26 != plVar34);
  }
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,CONCAT44(uStack_294,uStack_298) & 0xfffffffffffffffe);
  }
  plVar34 = *(long **)(param_2 + 0x68);
  if (plVar31 != plVar34) {
    iVar16 = *(int *)(*plVar31 + 0x60);
    for (; plVar31 != plVar34; plVar34 = plVar34 + -2) {
      plVar26 = (long *)plVar34[-1];
      if (plVar26 != (long *)0x0) {
        LOCK();
        plVar5 = plVar26 + 1;
        lVar30 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar30 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          FUN_0412c2d0(plVar26);
        }
      }
    }
    *(long **)(param_2 + 0x68) = plVar31;
    if (iVar16 == 1) {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[8] = 0;
      func_0x05d84ba0(param_1 + 1);
      return param_1;
    }
  }
  pbVar32 = (byte *)((long)puStack_300 + 1);
  bVar37 = ((byte)*puStack_300 & 1) == 0;
  pbVar25 = *(byte **)(puStack_300 + 4);
  if (bVar37) {
    pbVar25 = pbVar32;
  }
  uVar27 = (ulong)(byte)((byte)*puStack_300 >> 1);
  if (!bVar37) {
    uVar27 = *(ulong *)(puStack_300 + 2);
  }
  uVar17 = uVar27;
  if (uVar27 != 0) {
    do {
      if (uVar17 == 0) goto LAB_06279bb2;
      uVar23 = uVar17 - 1;
      lVar30 = uVar17 - 1;
      uVar17 = uVar23;
    } while (pbVar25[lVar30] != 0x3a);
    if (uVar23 == 0xffffffffffffffff) goto LAB_06279bb2;
    if (uVar23 <= uVar27) {
      uVar27 = uVar23;
    }
    if (uVar27 < 0xfffffffffffffff8) {
      if (uVar27 < 0x17) {
        uStack_2e0 = CONCAT71(uStack_2e0._1_7_,(char)uVar27 * '\x02');
        lVar30 = (long)&uStack_2e0 + 1;
        if (uVar23 != 0) goto LAB_0627aa4f;
        goto LAB_06279bc2;
      }
      uVar17 = 0x1a;
      if ((uVar27 | 7) != 0x17) {
        uVar17 = (uVar27 | 7) + 1;
      }
      lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (lVar30 == 0) {
        func_0x0eec74c0(uVar17,0);
      }
      uStack_2e0 = uVar17 | 1;
      uStack_2d8 = uVar27;
      lStack_2d0 = lVar30;
LAB_0627aa4f:
      func_0x0eee2ee0(lVar30,pbVar25,uVar27);
      goto LAB_06279bc4;
    }
LAB_0627ab14:
    FUN_04882e30();
LAB_0627ab19:
    uVar21 = func_0x04882ef0(&UNK_01306d2f);
    func_0x041084d6(&DAT_0f7b8fb8);
    if (((ulong)auStack_358 & 1) != 0) {
      func_0x0412a280(pppppppuStack_348,(ulong)auStack_358 & 0xfffffffffffffffe);
    }
    if ((uStack_2f8 & 1) != 0) {
      func_0x0412a280(lStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
    }
    if ((uStack_2e0 & 1) != 0) {
      func_0x0412a280(lStack_2d0,uStack_2e0 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar21);
    pcVar6 = (code *)swi(3);
    puVar22 = (undefined8 *)(*pcVar6)();
    return puVar22;
  }
LAB_06279bb2:
  uStack_2e0 = (ulong)uStack_2e0._1_7_ << 8;
LAB_06279bc2:
  lVar30 = (long)&uStack_2e0 + 1;
  uVar27 = 0;
LAB_06279bc4:
  *(undefined1 *)(lVar30 + uVar27) = 0;
  bVar37 = ((byte)*puStack_300 & 1) != 0;
  if (bVar37) {
    pbVar32 = *(byte **)(puStack_300 + 4);
  }
  uVar27 = (ulong)(byte)((byte)*puStack_300 >> 1);
  if (bVar37) {
    uVar27 = *(ulong *)(puStack_300 + 2);
  }
  puStack_2a0 = param_1;
  if (uVar27 == 0) {
    uStack_2f8 = (ulong)uStack_2f8._1_7_ << 8;
LAB_06279c74:
    lVar30 = (long)&uStack_2f8 + 1;
    uVar27 = 0;
  }
  else {
    uVar17 = 0;
    pbVar25 = pbVar32;
    do {
      uVar23 = uVar17;
      if (uVar27 == uVar23) goto LAB_06279c3b;
      pbVar2 = pbVar25 + -1;
      uVar17 = uVar23 + 1;
      pbVar3 = pbVar25 + (uVar27 - 1);
      pbVar25 = pbVar2;
    } while (*pbVar3 != 0x3a);
    if (uVar27 + 1 != uVar17) {
      if (uVar27 <= uVar27 - uVar17) goto LAB_0627ab19;
      pbVar32 = pbVar2 + uVar27 + 1;
      uVar27 = uVar23;
    }
LAB_06279c3b:
    if (0xfffffffffffffff7 < uVar27) {
      FUN_04882e30();
      goto LAB_0627ab14;
    }
    if (uVar27 < 0x17) {
      uStack_2f8 = CONCAT71(uStack_2f8._1_7_,(char)uVar27 * '\x02');
      lVar30 = (long)&uStack_2f8 + 1;
      if (uVar27 == 0) goto LAB_06279c74;
    }
    else {
      uVar17 = 0x1a;
      if ((uVar27 | 7) != 0x17) {
        uVar17 = (uVar27 | 7) + 1;
      }
      lVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (lVar30 == 0) {
        func_0x0eec74c0(uVar17,0);
      }
      uStack_2f8 = uVar17 | 1;
      uStack_2f0 = uVar27;
      lStack_2e8 = lVar30;
    }
    func_0x0eee2ee0(lVar30,pbVar32,uVar27);
  }
  *(undefined1 *)(lVar30 + uVar27) = 0;
  lVar30 = *(long *)(param_2 + 0x78);
  lVar28 = *(long *)(param_2 + 0x80);
  if ((uStack_2e0 & 1) == 0) {
    lStack_268 = lStack_2d0;
    uStack_278 = (uint)uStack_2e0;
    uStack_274 = uStack_2e0._4_4_;
    uStack_270 = (undefined4)uStack_2d8;
    uStack_26c = uStack_2d8._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_278,lStack_2d0,uStack_2d8);
  }
  if ((uStack_2f8 & 1) == 0) {
    lStack_250 = lStack_2e8;
    uStack_260 = (uint)uStack_2f8;
    uStack_25c = uStack_2f8._4_4_;
    uStack_258 = (undefined4)uStack_2f0;
    uStack_254 = uStack_2f0._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_260,lStack_2e8,uStack_2f0);
  }
  uVar12 = uStack_260;
  puVar18 = puStack_300;
  iStack_248 = param_4;
  if (lVar30 != lVar28) {
    lVar35 = (long)&uStack_278 + 1;
    uVar27 = (ulong)((byte)uStack_278 >> 1);
    if ((uStack_278 & 1) != 0) {
      lVar35 = lStack_268;
      uVar27 = CONCAT44(uStack_26c,uStack_270);
    }
    if ((uStack_260 & 1) == 0) {
      lStack_2c8 = (long)&uStack_260 + 1;
      uVar17 = (ulong)((byte)uStack_260 >> 1);
    }
    else {
      uVar17 = CONCAT44(uStack_254,uStack_258);
      lStack_2c8 = lStack_250;
    }
    lVar33 = lVar30 + 0x19;
    do {
      lVar30 = lVar33;
      bVar4 = *(byte *)(lVar30 + -0x19);
      if ((bVar4 & 1) == 0) {
        uVar23 = (ulong)(bVar4 >> 1);
      }
      else {
        uVar23 = *(ulong *)(lVar30 + -0x11);
      }
      if (uVar23 == uVar27) {
        if ((bVar4 & 1) == 0) {
          lVar33 = lVar30 + -0x18;
        }
        else {
          lVar33 = *(long *)(lVar30 + -9);
        }
        iVar16 = func_0x0eee3000(lVar33,lVar35,uVar27);
        if (iVar16 == 0) {
          bVar4 = *(byte *)(lVar30 + -1);
          if ((bVar4 & 1) == 0) {
            uVar23 = (ulong)(bVar4 >> 1);
          }
          else {
            uVar23 = *(ulong *)(lVar30 + 7);
          }
          if (uVar23 == uVar17) {
            lVar33 = lVar30;
            if ((bVar4 & 1) != 0) {
              lVar33 = *(long *)(lVar30 + 0xf);
            }
            iVar16 = func_0x0eee3000(lVar33,lStack_2c8,uVar17);
            if ((iVar16 == 0) && (*(int *)(lVar30 + 0x17) == param_4)) {
              lVar30 = lVar30 + -0x19;
              puVar18 = puStack_300;
              goto joined_r0x06279dee;
            }
          }
        }
      }
      lVar33 = lVar30 + 0x68;
    } while (lVar30 + 0x4f != lVar28);
    lVar30 = lVar30 + 0x4f;
    puVar18 = puStack_300;
  }
joined_r0x06279dee:
  puStack_300 = puVar18;
  if ((uVar12 & 1) != 0) {
    func_0x0412a280(lStack_250,CONCAT44(uStack_25c,uStack_260) & 0xfffffffffffffffe);
  }
  if ((uStack_278 & 1) != 0) {
    func_0x0412a280(lStack_268,CONCAT44(uStack_274,uStack_278) & 0xfffffffffffffffe);
  }
  if (lVar30 != *(long *)(param_2 + 0x80)) {
    puVar29 = *(uint **)(lVar30 + 0x40);
    puVar18 = *(uint **)(lVar30 + 0x38);
    for (puVar36 = puVar18; (puVar36 != puVar29 && (*puVar36 != uVar15)); puVar36 = puVar36 + 1) {
    }
    puVar24 = puVar36 + 1;
    if (puVar24 != puVar29 && puVar36 != puVar29) {
      do {
        if (*puVar24 != uVar15) {
          *puVar36 = *puVar24;
          puVar36 = puVar36 + 1;
        }
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar29);
    }
    if (puVar36 != puVar29) {
      lVar28 = (long)puVar29 - (long)(puVar36 + 1);
      if (lVar28 != 0) {
        func_0x0eee2ee0(puVar36,puVar36 + 1,lVar28);
        puVar18 = *(uint **)(lVar30 + 0x38);
      }
      puVar29 = (uint *)(lVar28 + (long)puVar36);
      *(uint **)(lVar30 + 0x40) = puVar29;
    }
    if (puVar29 == puVar18) {
      lVar28 = *(long *)(param_2 + 0x80);
      lVar35 = lVar30;
      if (lVar30 + 0x68 != lVar28) {
        do {
          lVar35 = lVar30 + 0x68;
          func_0x062a5ba0(lVar30,lVar35);
          lVar33 = lVar30 + 0xd0;
          lVar30 = lVar35;
        } while (lVar33 != lVar28);
        lVar28 = *(long *)(param_2 + 0x80);
      }
      while (lVar35 != lVar28) {
        lVar28 = lVar28 + -0x68;
        func_0x062a5a00(lVar28);
      }
      *(long *)(param_2 + 0x80) = lVar35;
    }
    puVar18 = puStack_300;
    cVar14 = func_0x0627b020(param_2,param_4);
    if (cVar14 == '\0') {
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar21 = _UNK_01273718;
      uStack_2b8 = 0x21;
      uStack_2b0 = 0x1d;
      *(ulong *)((long)puVar19 + 0xd) = CONCAT53(_UNK_01273713,_DAT_01273710);
      *(undefined8 *)((long)puVar19 + 0x15) = uVar21;
      uVar21 = CONCAT35(_DAT_01273710,_UNK_0127370b);
      *puVar19 = _DAT_01273703;
      puVar19[1] = uVar21;
      *(undefined1 *)((long)puVar19 + 0x1d) = 0;
      uVar21 = *(undefined8 *)(param_2 + 0x18);
      uStack_218 = (undefined8 ******)0x0;
      ppppppuStack_210 = (undefined8 ******)0x0;
      ppppppuStack_228 = (undefined8 ******)0x0;
      uStack_220 = 0;
      lStack_208 = 0;
      puStack_2a8 = puVar19;
      if ((DAT_0f569528 & 1) == 0) {
        ppppppuStack_210 = _DAT_0f569538;
        uStack_220 = CONCAT71(uRam000000000f569529,DAT_0f569528);
        uStack_218 = _DAT_0f569530;
      }
      else {
        func_0x04885070(&uStack_220,_DAT_0f569538,_DAT_0f569530);
      }
      ppppppuStack_228 = _DAT_0f569520;
      auStack_358 = (undefined1  [8])0x0;
      pppppppuStack_350 = (undefined8 *******)0x0;
      pppppppuStack_348 = (undefined8 *******)0x0;
      pppppppuStack_310 = (undefined8 *******)((ulong)pppppppuStack_310 & 0xffffffffffffff00);
      pppppppuStack_318 = (undefined8 *******)auStack_358;
      pppppppuVar20 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (pppppppuVar20 == (undefined8 *******)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      pppppppuStack_348 = pppppppuVar20 + 5;
      pppppppuStack_330 = &pppppppuStack_2c0;
      pppppppuStack_328 = &pppppppuStack_238;
      uStack_320 = uStack_320 & 0xffffff00;
      pppppppuVar20[2] = (undefined8 ******)0x0;
      pppppppuVar20[3] = (undefined8 ******)0x0;
      *pppppppuVar20 = (undefined8 ******)0x0;
      pppppppuVar20[1] = (undefined8 ******)0x0;
      pppppppuVar20[4] = (undefined8 ******)0x0;
      auStack_358 = (undefined1  [8])pppppppuVar20;
      uStack_338 = (undefined8 *******)auStack_358;
      pppppppuStack_2c0 = pppppppuVar20;
      pppppppuStack_238 = pppppppuVar20;
      if (pppppppuVar20 != &ppppppuStack_228) {
        if ((uStack_220 & 1) == 0) {
          pppppppuVar20[3] = ppppppuStack_210;
          *(undefined4 *)(pppppppuVar20 + 1) = (undefined4)uStack_220;
          *(undefined4 *)((long)pppppppuVar20 + 0xc) = uStack_220._4_4_;
          *(undefined4 *)(pppppppuVar20 + 2) = (undefined4)uStack_218;
          *(undefined4 *)((long)pppppppuVar20 + 0x14) = uStack_218._4_4_;
        }
        else {
          pppppppuStack_350 = pppppppuVar20;
          func_0x04885070(pppppppuVar20 + 1,ppppppuStack_210,uStack_218);
        }
      }
      *pppppppuVar20 = ppppppuStack_228;
      pppppppuStack_350 = pppppppuStack_238 + 5;
      func_0x0412e5e0(auStack_c0,puVar19,0x1d);
      uStack_38 = 0;
      func_0x060aeeb0(uVar21,0,2,auStack_358,auStack_c8,1);
      puVar22 = puStack_2a0;
      if ((ulong)uStack_38 != 0xffffffff) {
        (**(code **)(&UNK_0f023e00 + (ulong)uStack_38 * 8))(&uStack_338,auStack_c0);
      }
      auVar10 = auStack_358;
      uStack_38 = 0xffffffff;
      pppppppuVar20 = pppppppuStack_350;
      if (auStack_358 != (undefined1  [8])0x0) {
        for (; auVar10 != (undefined1  [8])pppppppuVar20; pppppppuVar20 = pppppppuVar20 + -5) {
          if (((ulong)pppppppuVar20[-4] & 1) != 0) {
            func_0x0412a280(pppppppuVar20[-2],(ulong)pppppppuVar20[-4] & 0xfffffffffffffffe);
          }
        }
        pppppppuStack_350 = (undefined8 *******)auVar10;
        func_0x0412a280(auStack_358,(long)pppppppuStack_348 - (long)auStack_358);
      }
      if ((uStack_220 & 1) != 0) {
        func_0x0412a280(ppppppuStack_210,uStack_220 & 0xfffffffffffffffe);
      }
      pppppppuVar20 = uStack_338;
      uStack_338._0_5_ = CONCAT41(_DAT_013f776f,10);
      uStack_338._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_338);
      uStack_338._7_1_ = SUB81(pppppppuVar20,7);
      uStack_338._0_7_ = (uint7)(uint6)uStack_338;
      func_0x0d858ce0(&ppppppuStack_228,&uStack_338,&uStack_2b8);
      *(undefined1 *)puVar22 = 1;
      func_0x05e91e00(puVar22 + 1,&ppppppuStack_228);
      func_0x048fb670(&ppppppuStack_228);
      func_0x0412a280(puVar19,0x20);
      goto joined_r0x0627a1ce;
    }
  }
  func_0x0627ba40(auStack_358,param_2,puVar18,param_4,(ulong)uVar15 | 0x100000000);
  if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pppppppuStack_170 = (undefined8 *******)(auStack_358 + 1);
  pppppppuStack_168 = (undefined8 *******)((ulong)auStack_358 >> 1 & 0x7f);
  if (((ulong)auStack_358 & 1) != 0) {
    pppppppuStack_168 = pppppppuStack_350;
    pppppppuStack_170 = pppppppuStack_348;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x98))(&ppppppuStack_228,&DAT_0f7b8f98,&pppppppuStack_170);
  uStack_338 = (undefined8 *******)0xba2af6ff3ca9d92c;
  pppppppuStack_330 = (undefined8 *******)&UNK_0140f690;
  pppppppuStack_328 = (undefined8 *******)0x1;
  uStack_320 = 0x90;
  if (bStack_1e8 == 0) {
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_2a8 = (undefined8 *)0x0;
    func_0x0eedeb80(2,0x2d,&ppppppuStack_228,&uStack_2b8,&uStack_338);
    if ((uStack_2b8 & 1) != 0) {
      func_0x0412a280(puStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
    }
  }
  lVar30 = lStack_200;
  puVar22 = puStack_2a0;
  if ((bStack_1e8 & 1) == 0) {
    if (lStack_200 != 0) {
      while (lVar30 != lStack_1f8) {
        func_0x048b3e80(lStack_1f8 + -0x40);
        lStack_1f8 = lStack_1f8 + -0x40;
      }
      lStack_1f8 = lVar30;
      func_0x0412a280(lStack_200,lStack_1f0 - lStack_200);
    }
    ppppppuVar13 = uStack_218;
    ppppppuVar9 = ppppppuStack_210;
    if (uStack_218 != (undefined8 ******)0x0) {
      for (; ppppppuVar13 != ppppppuVar9; ppppppuVar9 = ppppppuVar9 + -10) {
        if ((*(char *)(ppppppuVar9 + -1) == '\x01') && (((ulong)ppppppuVar9[-6] & 1) != 0)) {
          func_0x0412a280(ppppppuVar9[-4],(ulong)ppppppuVar9[-6] & 0xfffffffffffffffe);
        }
      }
      ppppppuStack_210 = ppppppuVar13;
      func_0x0412a280(uStack_218,lStack_208 - (long)uStack_218);
    }
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar21 = _UNK_011ba2ee;
    uStack_2b8 = 0x29;
    uStack_2b0 = 0x20;
    puVar19[2] = _DAT_011ba2e6;
    puVar19[3] = uVar21;
    uVar21 = _UNK_011ba2de;
    *puVar19 = _DAT_011ba2d6;
    puVar19[1] = uVar21;
    *(undefined1 *)(puVar19 + 4) = 0;
    uVar21 = *(undefined8 *)(param_2 + 0x18);
    uStack_218 = (undefined8 ******)0x0;
    ppppppuStack_210 = (undefined8 ******)0x0;
    ppppppuStack_228 = (undefined8 ******)0x0;
    uStack_220 = 0;
    lStack_208 = 0;
    puStack_2a8 = puVar19;
    if ((DAT_0f569528 & 1) == 0) {
      ppppppuStack_210 = _DAT_0f569538;
      uStack_220 = CONCAT71(uRam000000000f569529,DAT_0f569528);
      uStack_218 = _DAT_0f569530;
    }
    else {
      func_0x04885070(&uStack_220,_DAT_0f569538,_DAT_0f569530);
    }
    ppppppuStack_228 = _DAT_0f569520;
    pppppppuStack_318 = (undefined8 *******)0x0;
    pppppppuStack_310 = (undefined8 *******)0x0;
    pppppppuStack_308 = (undefined8 *******)0x0;
    uStack_230 = 0;
    pppppppuStack_238 = &pppppppuStack_318;
    pppppppuVar20 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pppppppuVar20 == (undefined8 *******)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    pppppppuStack_308 = pppppppuVar20 + 5;
    pppppppuStack_330 = &pppppppuStack_178;
    pppppppuStack_328 = &pppppppuStack_2c0;
    uStack_320 = uStack_320 & 0xffffff00;
    pppppppuVar20[2] = (undefined8 ******)0x0;
    pppppppuVar20[3] = (undefined8 ******)0x0;
    *pppppppuVar20 = (undefined8 ******)0x0;
    pppppppuVar20[1] = (undefined8 ******)0x0;
    pppppppuVar20[4] = (undefined8 ******)0x0;
    uStack_338 = &pppppppuStack_318;
    pppppppuStack_318 = pppppppuVar20;
    pppppppuStack_2c0 = pppppppuVar20;
    pppppppuStack_178 = pppppppuVar20;
    if (pppppppuVar20 != &ppppppuStack_228) {
      if ((uStack_220 & 1) == 0) {
        pppppppuVar20[3] = ppppppuStack_210;
        *(undefined4 *)(pppppppuVar20 + 1) = (undefined4)uStack_220;
        *(undefined4 *)((long)pppppppuVar20 + 0xc) = uStack_220._4_4_;
        *(undefined4 *)(pppppppuVar20 + 2) = (undefined4)uStack_218;
        *(undefined4 *)((long)pppppppuVar20 + 0x14) = uStack_218._4_4_;
      }
      else {
        pppppppuStack_310 = pppppppuVar20;
        func_0x04885070(pppppppuVar20 + 1,ppppppuStack_210,uStack_218);
      }
    }
    *pppppppuVar20 = ppppppuStack_228;
    pppppppuStack_310 = pppppppuStack_2c0 + 5;
    func_0x0412e5e0(auStack_158,puVar19,0x20);
    uStack_d0 = 0;
    func_0x060aeeb0(uVar21,0,2,&pppppppuStack_318,auStack_160,1);
    puVar22 = puStack_2a0;
    if ((ulong)uStack_d0 != 0xffffffff) {
      (**(code **)(&UNK_0f023e00 + (ulong)uStack_d0 * 8))(&uStack_338,auStack_158);
    }
    pppppppuVar11 = pppppppuStack_318;
    uStack_d0 = 0xffffffff;
    pppppppuVar20 = pppppppuStack_310;
    if (pppppppuStack_318 != (undefined8 *******)0x0) {
      for (; pppppppuVar11 != pppppppuVar20; pppppppuVar20 = pppppppuVar20 + -5) {
        if (((ulong)pppppppuVar20[-4] & 1) != 0) {
          func_0x0412a280(pppppppuVar20[-2],(ulong)pppppppuVar20[-4] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_310 = pppppppuVar11;
      func_0x0412a280(pppppppuStack_318,(long)pppppppuStack_308 - (long)pppppppuStack_318);
    }
    if ((uStack_220 & 1) != 0) {
      func_0x0412a280(ppppppuStack_210,uStack_220 & 0xfffffffffffffffe);
    }
    pppppppuVar20 = uStack_338;
    uStack_338._0_5_ = CONCAT41(_DAT_013f776f,10);
    uStack_338._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_338);
    uStack_338._7_1_ = SUB81(pppppppuVar20,7);
    uStack_338._0_7_ = (uint7)(uint6)uStack_338;
    func_0x0d858ce0(&ppppppuStack_228,&uStack_338,&uStack_2b8);
    *(undefined1 *)puVar22 = 1;
    func_0x05e91e00(puVar22 + 1,&ppppppuStack_228);
    func_0x048fb670(&ppppppuStack_228);
    func_0x0412a280(puVar19,0x28);
  }
  else {
    puStack_2a0[6] = 0;
    puStack_2a0[7] = 0;
    puStack_2a0[4] = 0;
    puStack_2a0[5] = 0;
    puStack_2a0[2] = 0;
    puStack_2a0[3] = 0;
    *puStack_2a0 = 0;
    puStack_2a0[1] = 0;
    puStack_2a0[8] = 0;
    func_0x05d84ba0(puStack_2a0 + 1);
  }
  if (((ulong)auStack_358 & 1) != 0) {
    func_0x0412a280(pppppppuStack_348,(ulong)auStack_358 & 0xfffffffffffffffe);
  }
joined_r0x0627a1ce:
  if ((uStack_2f8 & 1) != 0) {
    func_0x0412a280(lStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
  }
  if ((uStack_2e0 & 1) != 0) {
    func_0x0412a280(lStack_2d0,uStack_2e0 & 0xfffffffffffffffe);
  }
  return puVar22;
}



/* ---- referenced strings ----
 * 0x11ba2d6  Failed to delete group directory
 * 0x11ba2e6   group directory
 * 0x1273703  Failed to save group metadata
 * 0x1273710  e group metadata
 * 0x13f776f  Error
 */
