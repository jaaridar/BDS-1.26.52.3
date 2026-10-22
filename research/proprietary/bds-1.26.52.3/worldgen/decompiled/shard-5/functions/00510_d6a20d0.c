/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd7a20d0 (ELF vaddr 0xd6a20d0)
 * Label: caller-of-callee
 * Body:  [[0d7a20d0, 0d7a2392] [0d7a23a0, 0d7a23e7] [0d7a23f0, 0d7a28fb] [0d7a2900, 0d7a29cd] [0d7a29d0, 0d7a2ae9] [0d7a2af0, 0d7a2bbe] [0d7a2bc0, 0d7a2d46] [0d7a2d50, 0d7a2e1b] [0d7a2e20, 0d7a31c6] [0d7a31d0, 0d7a34e5] [0d7a34f0, 0d7a3e7d]]
 * Ghidra: FUN_0d7a20d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ******* FUN_0d7a20d0(long *******param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long *****ppppplVar3;
  char cVar4;
  long ******pppppplVar5;
  undefined8 *puVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  int iVar25;
  undefined8 uVar26;
  long *******ppppppplVar27;
  ulong uVar28;
  long *******ppppppplVar29;
  char *pcVar30;
  long ******pppppplVar31;
  long *plVar32;
  undefined8 uVar33;
  long lVar34;
  long *******ppppppplVar35;
  long ******pppppplVar36;
  long ******pppppplVar37;
  long *******unaff_RBP;
  char *pcVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long ****pppplVar42;
  undefined1 *puVar43;
  uint uVar44;
  ulong uVar45;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar51;
  byte bVar53;
  byte bVar55;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined1 auVar84 [16];
  int iStack_43c;
  long *******ppppppplStack_438;
  long ******pppppplStack_430;
  undefined1 auStack_428 [8];
  long ******pppppplStack_420;
  int iStack_40c;
  undefined1 auStack_408 [16];
  undefined1 auStack_3f8 [16];
  long lStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long lStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  long *plStack_3a8;
  long *plStack_398;
  long alStack_388 [2];
  long alStack_378 [2];
  long *plStack_368;
  long *plStack_358;
  long *******ppppppplStack_338;
  long *******ppppppplStack_330;
  long *******ppppppplStack_328;
  long ******pppppplStack_320;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined4 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  long *plStack_2c0;
  long *******ppppppplStack_2b8;
  long lStack_280;
  long *plStack_278;
  long *******ppppppplStack_270;
  undefined8 uStack_268;
  char cStack_260;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  long lStack_238;
  long *******ppppppplStack_230;
  long *plStack_228;
  long *******ppppppplStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long *******ppppppplStack_1e8;
  long ******pppppplStack_1e0;
  undefined8 uStack_1d8;
  long *******ppppppplStack_1d0;
  char *apcStack_1c8 [2];
  undefined8 uStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  long *plStack_178;
  long *plStack_168;
  long alStack_148 [4];
  long *plStack_128;
  undefined1 auStack_108 [8];
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_a8;
  long alStack_88 [4];
  long *plStack_68;
  undefined1 auStack_48 [24];
  char cVar48;
  char cVar50;
  char cVar52;
  char cVar54;
  char cVar56;
  char cVar58;
  
  plVar39 = (long *)*param_3;
  ppppppplVar29 = *(long ********)(param_2 + 8);
  uStack_268 = *(undefined8 *)(param_2 + 0x10);
  cStack_260 = '\x01';
  ppppppplStack_270 = ppppppplVar29;
  iVar25 = func_0x045f62bc(plVar39,0);
  if (iVar25 < 0) {
    func_0x0d78cf40(auStack_408,iVar25);
    func_0x08b5b1d0(&uStack_1d8,auStack_108,auStack_408);
    plVar39 = plStack_3d8;
    *param_1 = (long ******)uStack_1d8;
    param_1[1] = (long ******)ppppppplStack_1d0;
    if (plStack_3d8 != (long *)0x0) {
      LOCK();
      plVar32 = plStack_3d8 + 1;
      lVar34 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
        func_0x0412c2d0(plVar39);
      }
    }
    puVar21 = (undefined8 *)auStack_3f8._0_8_;
    while (puVar21 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar21;
      if ((*(byte *)(puVar21 + 5) & 1) != 0) {
        func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar21 + 2) & 1) != 0) {
        func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar21,0x40);
      puVar21 = puVar6;
    }
    uVar33 = auStack_408._0_8_;
    uVar22 = auStack_408._8_8_;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = auStack_408._8_8_;
    auStack_408 = auVar84 << 0x40;
    ppppppplVar29 = ppppppplStack_270;
    uVar26 = uStack_268;
    if (uVar33 != 0) {
      func_0x0412a280(uVar33,uVar22 << 3);
      ppppppplVar29 = ppppppplStack_270;
      uVar26 = uStack_268;
    }
    goto joined_r0x0d7a3555;
  }
  puVar43 = *(undefined1 **)(param_2 + 0x10);
  if (puVar43 == (undefined1 *)0x0) {
LAB_0d7a35ac:
    func_0x04890760();
    plStack_368 = plVar39;
LAB_0d7a35b1:
    lVar34 = 0x20;
LAB_0d7a35b6:
    (**(code **)(*plStack_368 + lVar34))();
    goto LAB_0d7a35bc;
  }
  func_0x0d7a0450(&ppppppplStack_230,ppppppplVar29,puVar43);
  if (ppppppplStack_230 != (long *******)0x0) {
    iStack_43c = 0;
    iStack_40c = 0;
    iVar25 = func_0x04600ffb(puVar43,&iStack_43c,&iStack_40c);
    if (iVar25 < 0) {
      func_0x045fec3b(puVar43);
      (*(code *)(*ppppppplStack_230)[5])(ppppppplStack_230);
      func_0x0d78cf40(auStack_408,iVar25);
      func_0x08b5b1d0(&uStack_1d8,auStack_108,auStack_408);
      plVar39 = plStack_3d8;
      *param_1 = (long ******)uStack_1d8;
      param_1[1] = (long ******)ppppppplStack_1d0;
      if (plStack_3d8 != (long *)0x0) {
        LOCK();
        plVar32 = plStack_3d8 + 1;
        lVar34 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar34 == 0) {
          (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
          func_0x0412c2d0(plVar39);
        }
      }
      puVar21 = (undefined8 *)auStack_3f8._0_8_;
      while (puVar21 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar21;
        if ((*(byte *)(puVar21 + 5) & 1) != 0) {
          func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar21 + 2) & 1) != 0) {
          func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar21,0x40);
        puVar21 = puVar6;
      }
      goto LAB_0d7a2ac9;
    }
    if (iStack_43c < 0) {
      auStack_108 = (undefined1  [8])&UNK_01254d89;
      func_0x04601045(puVar43,auStack_108);
      func_0x045fec3b(puVar43);
      (*(code *)(*ppppppplStack_230)[5])(ppppppplStack_230);
      iVar25 = iStack_40c;
      if (iStack_40c == 0) {
        iVar25 = iStack_43c;
      }
      if (iStack_43c != -0x7fffbffb) {
        iVar25 = iStack_43c;
      }
      func_0x0d78cf40(auStack_408,iVar25);
      func_0x08b5b1d0(&uStack_1d8,auStack_318,auStack_408);
      plVar39 = plStack_3d8;
      *param_1 = (long ******)uStack_1d8;
      param_1[1] = (long ******)ppppppplStack_1d0;
      if (plStack_3d8 != (long *)0x0) {
        LOCK();
        plVar32 = plStack_3d8 + 1;
        lVar34 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar34 == 0) {
          (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
          func_0x0412c2d0(plVar39);
        }
      }
      puVar21 = (undefined8 *)auStack_3f8._0_8_;
      while (puVar21 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar21;
        if ((*(byte *)(puVar21 + 5) & 1) != 0) {
          func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar21 + 2) & 1) != 0) {
          func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar21,0x40);
        puVar21 = puVar6;
      }
      goto LAB_0d7a2ac9;
    }
    ppppppplStack_328 = ppppppplStack_230;
    auStack_308 = (undefined1  [16])0x0;
    auStack_318 = (undefined1  [16])0x0;
    uStack_2f8 = 0x3f800000;
    plStack_2e8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plStack_2e8 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    *(undefined1 (*) [16])(plStack_2e8 + 1) = (undefined1  [16])0x0;
    *plStack_2e8 = (long)&UNK_0f4848c0;
    plStack_2f0 = plStack_2e8 + 3;
    *(undefined1 (*) [16])(plStack_2e8 + 6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plStack_2e8 + 4) = (undefined1  [16])0x0;
    *(undefined1 *)(plStack_2e8 + 7) = 1;
    plStack_2e8[3] = (long)&UNK_0f484910;
    iStack_2e0 = 400;
    uStack_2d8 = 0;
    uVar26 = func_0x0412dd40();
    auStack_408._0_4_ = 0xffffffff;
    uStack_2d0 = uVar26;
    iVar25 = func_0x04600fc7(puVar43,auStack_408);
    if (iVar25 < 0) {
LAB_0d7a2b3a:
      func_0x045fec3b(puVar43);
      (*(code *)(*ppppppplStack_328)[5])();
      func_0x0d78cf40(auStack_408,iVar25);
      func_0x08b5b1d0(&uStack_1d8,auStack_108,auStack_408);
      plVar39 = plStack_3d8;
      *param_1 = (long ******)uStack_1d8;
      param_1[1] = (long ******)ppppppplStack_1d0;
      if (plStack_3d8 != (long *)0x0) {
        LOCK();
        plVar32 = plStack_3d8 + 1;
        lVar34 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar34 == 0) {
          (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
          func_0x0412c2d0(plVar39);
        }
      }
      puVar21 = (undefined8 *)auStack_3f8._0_8_;
      while (puVar21 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar21;
        if ((*(byte *)(puVar21 + 5) & 1) != 0) {
          func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar21 + 2) & 1) != 0) {
          func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar21,0x40);
        puVar21 = puVar6;
      }
    }
    else {
      iVar25 = -0x7fffbffb;
      if (auStack_408._0_4_ - 600 < 0xfffffe0c) goto LAB_0d7a2b3a;
      iStack_2e0 = auStack_408._0_4_;
      uStack_2d8 = 0;
      auVar16._12_4_ = 0;
      auVar16._0_12_ = stack0xfffffffffffffbdc;
      _auStack_428 = auVar16 << 0x20;
      ppppppplStack_330 = ppppppplVar29;
      uStack_2d0 = uVar26;
      iVar25 = func_0x04601234(puVar43,auStack_428);
      if (-1 < iVar25) {
        auStack_3f8 = (undefined1  [16])0x0;
        auStack_408 = (undefined1  [16])0x0;
        lStack_3e8 = CONCAT44(lStack_3e8._4_4_,0x3f800000);
        auStack_3f8._0_8_ = (long *)0x0;
        plVar39 = (long *)auStack_3f8._0_8_;
        ppppppplStack_338 = param_1;
        uVar23 = _DAT_011983f0;
        if (auStack_428._0_4_ != 0) {
          do {
            ppppppplVar35 = (long *******)&UNK_01254d89;
            ppppppplStack_220 = (long *******)&UNK_01254d89;
            ppppppplVar29 = (long *******)&ppppppplStack_438;
            ppppppplStack_438 = (long *******)&UNK_01254d89;
            iVar25 = func_0x04601254(puVar43,plVar39,&ppppppplStack_220,ppppppplVar29);
            unaff_RBP = ppppppplStack_220;
            if (iVar25 < 0) goto LAB_0d7a2c51;
            if ((ppppppplStack_220 != (long *******)0x0) && (ppppppplStack_438 != (long *******)0x0)
               ) {
              ppppppplVar27 = (long *******)func_0x0eee2e90(ppppppplStack_220);
              if (ppppppplVar27 < (long *******)0xfffffffffffffff8) {
                if (ppppppplVar27 < (long *******)0x17) {
                  auStack_108[0] = (char)ppppppplVar27 * '\x02';
                  ppppppplVar29 = (long *******)(auStack_108 + 1);
                  if (ppppppplVar27 != (long *******)0x0) goto LAB_0d7a24c1;
                }
                else {
                  uVar28 = ((ulong)ppppppplVar27 | 7) + 1;
                  if (((ulong)ppppppplVar27 | 7) == 0x17) {
                    uVar28 = 0x1a;
                  }
                  ppppppplVar29 =
                       (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
                  if (ppppppplVar29 == (long *******)0x0) {
                    func_0x0eec74c0(uVar28,0);
                  }
                  auStack_108 = (undefined1  [8])(uVar28 | 1);
                  ppppppplStack_100 = ppppppplVar27;
                  ppppppplStack_f8 = ppppppplVar29;
LAB_0d7a24c1:
                  func_0x0eee2ee0(ppppppplVar29,unaff_RBP,ppppppplVar27);
                }
                unaff_RBP = ppppppplStack_438;
                *(undefined1 *)((long)ppppppplVar29 + (long)ppppppplVar27) = 0;
                uVar28 = func_0x0eee2e90(ppppppplStack_438);
                ppppppplVar35 = ppppppplVar27;
                if (uVar28 < 0xfffffffffffffff8) {
                  if (uVar28 < 0x17) {
                    auStack_2c8[0] = (char)uVar28 * '\x02';
                    ppppppplVar29 = (long *******)(auStack_2c8 + 1);
                    if (uVar28 != 0) goto LAB_0d7a2561;
                  }
                  else {
                    uVar45 = (uVar28 | 7) + 1;
                    if ((uVar28 | 7) == 0x17) {
                      uVar45 = 0x1a;
                    }
                    ppppppplVar29 =
                         (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45);
                    if (ppppppplVar29 == (long *******)0x0) {
                      func_0x0eec74c0(uVar45,0);
                    }
                    plStack_2c0 = (long *)uVar28;
                    auStack_2c8 = (undefined1  [8])(uVar45 | 1);
                    ppppppplStack_2b8 = ppppppplVar29;
LAB_0d7a2561:
                    func_0x0eee2ee0(ppppppplVar29,unaff_RBP,uVar28);
                  }
                  *(undefined1 *)((long)ppppppplVar29 + uVar28) = 0;
                  unaff_RBP = (long *******)((ulong)auStack_108 >> 1 & 0x7f);
                  ppppppplVar35 = (long *******)(auStack_108 + 1);
                  if (((ulong)auStack_108 & 1) != 0) {
                    unaff_RBP = ppppppplStack_100;
                    ppppppplVar35 = ppppppplStack_f8;
                  }
                  if ((long *******)0xfffffffffffffff7 < unaff_RBP) goto LAB_0d7a3e63;
                  if (unaff_RBP < (long *******)0x17) {
                    uStack_1d8 = (long *******)CONCAT71(uStack_1d8._1_7_,(char)unaff_RBP * '\x02');
                    pcVar30 = (char *)((long)&uStack_1d8 + 1);
                    if (unaff_RBP != (long *******)0x0) goto LAB_0d7a2620;
                  }
                  else {
                    uVar28 = ((ulong)unaff_RBP | 7) + 1;
                    if (((ulong)unaff_RBP | 7) == 0x17) {
                      uVar28 = 0x1a;
                    }
                    pcVar30 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
                    if (pcVar30 == (char *)0x0) {
                      func_0x0eec74c0(uVar28,0);
                    }
                    uStack_1d8 = (long *******)(uVar28 | 1);
                    ppppppplStack_1d0 = unaff_RBP;
                    apcStack_1c8[0] = pcVar30;
LAB_0d7a2620:
                    func_0x0eee2f00(pcVar30,ppppppplVar35,unaff_RBP);
                  }
                  pcVar30[(long)unaff_RBP] = '\0';
                  ppppppplVar29 = (long *******)((ulong)uStack_1d8 >> 1 & 0x7f);
                  pcVar30 = (char *)((long)&uStack_1d8 + 1);
                  if (((ulong)uStack_1d8 & 1) != 0) {
                    ppppppplVar29 = ppppppplStack_1d0;
                    pcVar30 = apcStack_1c8[0];
                  }
                  if (ppppppplVar29 != (long *******)0x0) {
                    pcVar38 = pcVar30;
                    if ((long *******)0x7 < ppppppplVar29) {
                      if (ppppppplVar29 < (long *******)0x20) {
                        ppppppplVar35 = (long *******)0x0;
                      }
                      else {
                        ppppppplVar35 = (long *******)((ulong)ppppppplVar29 & 0xffffffffffffffe0);
                        ppppppplVar27 = (long *******)0x0;
                        do {
                          auVar84 = *(undefined1 (*) [16])(pcVar30 + (long)ppppppplVar27);
                          pcVar38 = pcVar30 + 0x10 + (long)ppppppplVar27;
                          cVar4 = *pcVar38;
                          cVar48 = pcVar38[1];
                          cVar50 = pcVar38[2];
                          cVar52 = pcVar38[3];
                          cVar54 = pcVar38[4];
                          cVar56 = pcVar38[5];
                          cVar58 = pcVar38[6];
                          cVar7 = pcVar38[7];
                          cVar8 = pcVar38[8];
                          cVar9 = pcVar38[9];
                          cVar10 = pcVar38[10];
                          cVar11 = pcVar38[0xb];
                          cVar12 = pcVar38[0xc];
                          cVar13 = pcVar38[0xd];
                          cVar14 = pcVar38[0xe];
                          cVar15 = pcVar38[0xf];
                          bVar46 = auVar84[0] + DAT_014e86b0;
                          bVar47 = auVar84[1] + UNK_014e86b1;
                          bVar49 = auVar84[2] + UNK_014e86b2;
                          bVar51 = auVar84[3] + UNK_014e86b3;
                          bVar53 = auVar84[4] + UNK_014e86b4;
                          bVar55 = auVar84[5] + UNK_014e86b5;
                          bVar57 = auVar84[6] + UNK_014e86b6;
                          bVar59 = auVar84[7] + UNK_014e86b7;
                          bVar60 = auVar84[8] + UNK_014e86b8;
                          bVar61 = auVar84[9] + UNK_014e86b9;
                          bVar62 = auVar84[10] + UNK_014e86ba;
                          bVar63 = auVar84[0xb] + UNK_014e86bb;
                          bVar64 = auVar84[0xc] + UNK_014e86bc;
                          bVar65 = auVar84[0xd] + UNK_014e86bd;
                          bVar66 = auVar84[0xe] + UNK_014e86be;
                          bVar67 = auVar84[0xf] + UNK_014e86bf;
                          bVar68 = cVar4 + DAT_014e86b0;
                          bVar69 = cVar48 + UNK_014e86b1;
                          bVar70 = cVar50 + UNK_014e86b2;
                          bVar71 = cVar52 + UNK_014e86b3;
                          bVar72 = cVar54 + UNK_014e86b4;
                          bVar73 = cVar56 + UNK_014e86b5;
                          bVar74 = cVar58 + UNK_014e86b6;
                          bVar75 = cVar7 + UNK_014e86b7;
                          bVar76 = cVar8 + UNK_014e86b8;
                          bVar77 = cVar9 + UNK_014e86b9;
                          bVar78 = cVar10 + UNK_014e86ba;
                          bVar79 = cVar11 + UNK_014e86bb;
                          bVar80 = cVar12 + UNK_014e86bc;
                          bVar81 = cVar13 + UNK_014e86bd;
                          bVar82 = cVar14 + UNK_014e86be;
                          bVar83 = cVar15 + UNK_014e86bf;
                          pcVar38 = pcVar30 + (long)ppppppplVar27;
                          *pcVar38 = (-((byte)((DAT_014e4170 < bVar46) * DAT_014e4170 |
                                              (DAT_014e4170 >= bVar46) * bVar46) == bVar46) &
                                     DAT_014ead50) + auVar84[0];
                          pcVar38[1] = (-((byte)((UNK_014e4171 < bVar47) * UNK_014e4171 |
                                                (UNK_014e4171 >= bVar47) * bVar47) == bVar47) &
                                       UNK_014ead51) + auVar84[1];
                          pcVar38[2] = (-((byte)((UNK_014e4172 < bVar49) * UNK_014e4172 |
                                                (UNK_014e4172 >= bVar49) * bVar49) == bVar49) &
                                       UNK_014ead52) + auVar84[2];
                          pcVar38[3] = (-((byte)((UNK_014e4173 < bVar51) * UNK_014e4173 |
                                                (UNK_014e4173 >= bVar51) * bVar51) == bVar51) &
                                       UNK_014ead53) + auVar84[3];
                          pcVar38[4] = (-((byte)((UNK_014e4174 < bVar53) * UNK_014e4174 |
                                                (UNK_014e4174 >= bVar53) * bVar53) == bVar53) &
                                       UNK_014ead54) + auVar84[4];
                          pcVar38[5] = (-((byte)((UNK_014e4175 < bVar55) * UNK_014e4175 |
                                                (UNK_014e4175 >= bVar55) * bVar55) == bVar55) &
                                       UNK_014ead55) + auVar84[5];
                          pcVar38[6] = (-((byte)((UNK_014e4176 < bVar57) * UNK_014e4176 |
                                                (UNK_014e4176 >= bVar57) * bVar57) == bVar57) &
                                       UNK_014ead56) + auVar84[6];
                          pcVar38[7] = (-((byte)((UNK_014e4177 < bVar59) * UNK_014e4177 |
                                                (UNK_014e4177 >= bVar59) * bVar59) == bVar59) &
                                       UNK_014ead57) + auVar84[7];
                          pcVar38[8] = (-((byte)((UNK_014e4178 < bVar60) * UNK_014e4178 |
                                                (UNK_014e4178 >= bVar60) * bVar60) == bVar60) &
                                       UNK_014ead58) + auVar84[8];
                          pcVar38[9] = (-((byte)((UNK_014e4179 < bVar61) * UNK_014e4179 |
                                                (UNK_014e4179 >= bVar61) * bVar61) == bVar61) &
                                       UNK_014ead59) + auVar84[9];
                          pcVar38[10] = (-((byte)((UNK_014e417a < bVar62) * UNK_014e417a |
                                                 (UNK_014e417a >= bVar62) * bVar62) == bVar62) &
                                        UNK_014ead5a) + auVar84[10];
                          pcVar38[0xb] = (-((byte)((UNK_014e417b < bVar63) * UNK_014e417b |
                                                  (UNK_014e417b >= bVar63) * bVar63) == bVar63) &
                                         UNK_014ead5b) + auVar84[0xb];
                          pcVar38[0xc] = (-((byte)((UNK_014e417c < bVar64) * UNK_014e417c |
                                                  (UNK_014e417c >= bVar64) * bVar64) == bVar64) &
                                         UNK_014ead5c) + auVar84[0xc];
                          pcVar38[0xd] = (-((byte)((UNK_014e417d < bVar65) * UNK_014e417d |
                                                  (UNK_014e417d >= bVar65) * bVar65) == bVar65) &
                                         UNK_014ead5d) + auVar84[0xd];
                          pcVar38[0xe] = (-((byte)((UNK_014e417e < bVar66) * UNK_014e417e |
                                                  (UNK_014e417e >= bVar66) * bVar66) == bVar66) &
                                         UNK_014ead5e) + auVar84[0xe];
                          pcVar38[0xf] = (-((byte)((UNK_014e417f < bVar67) * UNK_014e417f |
                                                  (UNK_014e417f >= bVar67) * bVar67) == bVar67) &
                                         UNK_014ead5f) + auVar84[0xf];
                          pcVar38 = pcVar30 + 0x10 + (long)ppppppplVar27;
                          *pcVar38 = (-((byte)((DAT_014e4170 < bVar68) * DAT_014e4170 |
                                              (DAT_014e4170 >= bVar68) * bVar68) == bVar68) &
                                     DAT_014ead50) + cVar4;
                          pcVar38[1] = (-((byte)((UNK_014e4171 < bVar69) * UNK_014e4171 |
                                                (UNK_014e4171 >= bVar69) * bVar69) == bVar69) &
                                       UNK_014ead51) + cVar48;
                          pcVar38[2] = (-((byte)((UNK_014e4172 < bVar70) * UNK_014e4172 |
                                                (UNK_014e4172 >= bVar70) * bVar70) == bVar70) &
                                       UNK_014ead52) + cVar50;
                          pcVar38[3] = (-((byte)((UNK_014e4173 < bVar71) * UNK_014e4173 |
                                                (UNK_014e4173 >= bVar71) * bVar71) == bVar71) &
                                       UNK_014ead53) + cVar52;
                          pcVar38[4] = (-((byte)((UNK_014e4174 < bVar72) * UNK_014e4174 |
                                                (UNK_014e4174 >= bVar72) * bVar72) == bVar72) &
                                       UNK_014ead54) + cVar54;
                          pcVar38[5] = (-((byte)((UNK_014e4175 < bVar73) * UNK_014e4175 |
                                                (UNK_014e4175 >= bVar73) * bVar73) == bVar73) &
                                       UNK_014ead55) + cVar56;
                          pcVar38[6] = (-((byte)((UNK_014e4176 < bVar74) * UNK_014e4176 |
                                                (UNK_014e4176 >= bVar74) * bVar74) == bVar74) &
                                       UNK_014ead56) + cVar58;
                          pcVar38[7] = (-((byte)((UNK_014e4177 < bVar75) * UNK_014e4177 |
                                                (UNK_014e4177 >= bVar75) * bVar75) == bVar75) &
                                       UNK_014ead57) + cVar7;
                          pcVar38[8] = (-((byte)((UNK_014e4178 < bVar76) * UNK_014e4178 |
                                                (UNK_014e4178 >= bVar76) * bVar76) == bVar76) &
                                       UNK_014ead58) + cVar8;
                          pcVar38[9] = (-((byte)((UNK_014e4179 < bVar77) * UNK_014e4179 |
                                                (UNK_014e4179 >= bVar77) * bVar77) == bVar77) &
                                       UNK_014ead59) + cVar9;
                          pcVar38[10] = (-((byte)((UNK_014e417a < bVar78) * UNK_014e417a |
                                                 (UNK_014e417a >= bVar78) * bVar78) == bVar78) &
                                        UNK_014ead5a) + cVar10;
                          pcVar38[0xb] = (-((byte)((UNK_014e417b < bVar79) * UNK_014e417b |
                                                  (UNK_014e417b >= bVar79) * bVar79) == bVar79) &
                                         UNK_014ead5b) + cVar11;
                          pcVar38[0xc] = (-((byte)((UNK_014e417c < bVar80) * UNK_014e417c |
                                                  (UNK_014e417c >= bVar80) * bVar80) == bVar80) &
                                         UNK_014ead5c) + cVar12;
                          pcVar38[0xd] = (-((byte)((UNK_014e417d < bVar81) * UNK_014e417d |
                                                  (UNK_014e417d >= bVar81) * bVar81) == bVar81) &
                                         UNK_014ead5d) + cVar13;
                          pcVar38[0xe] = (-((byte)((UNK_014e417e < bVar82) * UNK_014e417e |
                                                  (UNK_014e417e >= bVar82) * bVar82) == bVar82) &
                                         UNK_014ead5e) + cVar14;
                          pcVar38[0xf] = (-((byte)((UNK_014e417f < bVar83) * UNK_014e417f |
                                                  (UNK_014e417f >= bVar83) * bVar83) == bVar83) &
                                         UNK_014ead5f) + cVar15;
                          ppppppplVar27 = ppppppplVar27 + 4;
                        } while (ppppppplVar35 != ppppppplVar27);
                        if (ppppppplVar29 == ppppppplVar35) goto LAB_0d7a27ad;
                        if (((ulong)ppppppplVar29 & 0x18) == 0) {
                          pcVar38 = (char *)((long)ppppppplVar35 + (long)pcVar30);
                          goto LAB_0d7a278c;
                        }
                      }
                      ppppppplVar27 = (long *******)((ulong)ppppppplVar29 & 0xfffffffffffffff8);
                      pcVar38 = pcVar30 + (long)ppppppplVar27;
                      do {
                        uVar26 = *(undefined8 *)(pcVar30 + (long)ppppppplVar35);
                        bVar46 = (char)uVar26 + DAT_014e9110;
                        cVar48 = (char)((ulong)uVar26 >> 8);
                        bVar47 = cVar48 + UNK_014e9111;
                        cVar50 = (char)((ulong)uVar26 >> 0x10);
                        bVar49 = cVar50 + UNK_014e9112;
                        cVar52 = (char)((ulong)uVar26 >> 0x18);
                        bVar51 = cVar52 + UNK_014e9113;
                        cVar54 = (char)((ulong)uVar26 >> 0x20);
                        bVar53 = cVar54 + UNK_014e9114;
                        cVar56 = (char)((ulong)uVar26 >> 0x28);
                        bVar55 = cVar56 + UNK_014e9115;
                        cVar58 = (char)((ulong)uVar26 >> 0x30);
                        cVar4 = (char)((ulong)uVar26 >> 0x38);
                        bVar57 = cVar58 + UNK_014e9116;
                        bVar59 = cVar4 + UNK_014e9117;
                        *(ulong *)(pcVar30 + (long)ppppppplVar35) =
                             CONCAT17((~-((byte)((bVar59 < UNK_014e8cb7) * UNK_014e8cb7 |
                                                (bVar59 >= UNK_014e8cb7) * bVar59) == bVar59) &
                                      UNK_014ea367) + cVar4,
                                      CONCAT16((~-((byte)((bVar57 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                         (bVar57 >= UNK_014e8cb6) * bVar57) ==
                                                  bVar57) & UNK_014ea366) + cVar58,
                                               CONCAT15((~-((byte)((bVar55 < UNK_014e8cb5) *
                                                                   UNK_014e8cb5 |
                                                                  (bVar55 >= UNK_014e8cb5) * bVar55)
                                                           == bVar55) & UNK_014ea365) + cVar56,
                                                        CONCAT14((~-((byte)((bVar53 < UNK_014e8cb4)
                                                                            * UNK_014e8cb4 |
                                                                           (bVar53 >= UNK_014e8cb4)
                                                                           * bVar53) == bVar53) &
                                                                 UNK_014ea364) + cVar54,
                                                                 CONCAT13((~-((byte)((bVar51 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar51 >= UNK_014e8cb3) * bVar51) == bVar51) &
                                                  UNK_014ea363) + cVar52,
                                                  CONCAT12((~-((byte)((bVar49 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar49 >= UNK_014e8cb2) *
                                                                     bVar49) == bVar49) &
                                                           UNK_014ea362) + cVar50,
                                                           CONCAT11((~-((byte)((bVar47 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar47 >= UNK_014e8cb1) * bVar47) == bVar47) &
                                                  UNK_014ea361) + cVar48,
                                                  (~-((byte)((bVar46 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar46 >= DAT_014e8cb0) * bVar46) ==
                                                     bVar46) & DAT_014ea360) + (char)uVar26)))))));
                        ppppppplVar35 = ppppppplVar35 + 1;
                      } while (ppppppplVar27 != ppppppplVar35);
                      if (ppppppplVar29 == ppppppplVar27) goto LAB_0d7a27ad;
                    }
LAB_0d7a278c:
                    do {
                      cVar4 = *pcVar38;
                      cVar48 = cVar4 + ' ';
                      if (0x19 < (byte)(cVar4 + 0xbfU)) {
                        cVar48 = cVar4;
                      }
                      *pcVar38 = cVar48;
                      pcVar38 = pcVar38 + 1;
                    } while (pcVar38 != pcVar30 + (long)ppppppplVar29);
                  }
LAB_0d7a27ad:
                  func_0x0d79d320(auStack_408,&uStack_1d8,auStack_2c8,0);
                  if (((ulong)uStack_1d8 & 1) == 0) {
                  }
                  else {
                    func_0x0412a280(apcStack_1c8[0],(ulong)uStack_1d8 & 0xfffffffffffffffe);
                  }
                  if ((auStack_2c8[0] & 1) != 0) {
                    func_0x0412a280(ppppppplStack_2b8,(ulong)auStack_2c8 & 0xfffffffffffffffe);
                  }
                  if (((ulong)auStack_108 & 1) != 0) {
                    func_0x0412a280(ppppppplStack_f8,(ulong)auStack_108 & 0xfffffffffffffffe);
                  }
                  goto LAB_0d7a23f0;
                }
              }
              else {
                func_0x04882e30();
LAB_0d7a3e63:
                func_0x04882e30();
              }
              uVar24 = SUB81(ppppppplVar35,0);
              func_0x04882e30();
              goto LAB_0d7a3e6d;
            }
LAB_0d7a23f0:
            uVar44 = (int)plVar39 + 1;
            plVar39 = (long *)(ulong)uVar44;
          } while (uVar44 < (uint)auStack_428._0_4_);
          uVar23 = (undefined4)lStack_3e8;
        }
        uStack_2f8 = uVar23;
        iVar25 = 0;
        func_0x06042fb0(auStack_318,auStack_3f8._0_8_,0);
LAB_0d7a2c51:
        param_1 = ppppppplStack_338;
        puVar21 = (undefined8 *)auStack_3f8._0_8_;
        while (puVar21 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar21;
          if ((*(byte *)(puVar21 + 5) & 1) != 0) {
            func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar21 + 2) & 1) != 0) {
            func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar21,0x40);
          puVar21 = puVar6;
        }
        uVar26 = auStack_408._0_8_;
        uVar33 = auStack_408._8_8_;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auStack_408._8_8_;
        auStack_408 = auVar18 << 0x40;
        if (uVar26 != 0) {
          func_0x0412a280(uVar26,uVar33 << 3);
        }
        ppppppplVar29 = ppppppplStack_328;
        if (-1 < iVar25) {
          pppppplVar31 = (long ******)func_0x045fec3b(puVar43);
          ppppppplVar35 = ppppppplStack_330;
          auStack_408._0_8_ = pppppplVar31;
          param_1 = ppppppplStack_330 + 0xe;
          func_0x0412d680(param_1);
          pppppplVar5 = ppppppplVar35[10];
          if (pppppplVar5 != (long ******)0x0) {
            ppppppplVar35 = ppppppplStack_330 + 9;
            uVar28 = (long)pppppplVar5 - ((ulong)pppppplVar5 >> 1 & 0x5555555555555555);
            uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
            uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar28 >> 0x38 < 2) {
              pppppplVar36 = (long ******)((long)pppppplVar5 - 1U & (ulong)pppppplVar31);
            }
            else {
              pppppplVar36 = pppppplVar31;
              if (pppppplVar5 <= pppppplVar31) {
                if (((ulong)pppppplVar31 | (ulong)pppppplVar5) >> 0x20 == 0) {
                  pppppplVar36 = (long ******)
                                 (((ulong)pppppplVar31 & 0xffffffff) %
                                 ((ulong)pppppplVar5 & 0xffffffff));
                }
                else {
                  pppppplVar36 = (long ******)((ulong)pppppplVar31 % (ulong)pppppplVar5);
                }
              }
            }
            if (((*ppppppplVar35)[(long)pppppplVar36] != (long *****)0x0) &&
               (pppplVar42 = *(*ppppppplVar35)[(long)pppppplVar36], pppplVar42 != (long ****)0x0)) {
              if ((byte)(uVar28 >> 0x38) < 2) {
                do {
                  if (pppppplVar31 == (long ******)pppplVar42[1]) {
                    if ((long ******)pppplVar42[2] == pppppplVar31) goto LAB_0d7a2f2a;
                  }
                  else if ((long ******)((ulong)pppplVar42[1] & (long)pppppplVar5 - 1U) !=
                           pppppplVar36) break;
                  pppplVar42 = (long ****)*pppplVar42;
                } while (pppplVar42 != (long ****)0x0);
              }
              else {
                do {
                  pppppplVar37 = (long ******)pppplVar42[1];
                  if (pppppplVar31 == pppppplVar37) {
                    if ((long ******)pppplVar42[2] == pppppplVar31) goto LAB_0d7a2f2a;
                  }
                  else {
                    if (pppppplVar5 <= pppppplVar37) {
                      if (((ulong)pppppplVar37 | (ulong)pppppplVar5) >> 0x20 == 0) {
                        pppppplVar37 = (long ******)
                                       (((ulong)pppppplVar37 & 0xffffffff) %
                                       ((ulong)pppppplVar5 & 0xffffffff));
                      }
                      else {
                        pppppplVar37 = (long ******)((ulong)pppppplVar37 % (ulong)pppppplVar5);
                      }
                    }
                    if (pppppplVar37 != pppppplVar36) break;
                  }
                  pppplVar42 = (long ****)*pppplVar42;
                } while (pppplVar42 != (long ****)0x0);
              }
            }
          }
          goto LAB_0d7a3021;
        }
      }
      ppppppplVar29 = ppppppplStack_328;
      func_0x045fec3b(puVar43);
      (*(code *)(*ppppppplVar29)[5])(ppppppplVar29);
      func_0x0d78cf40(auStack_408,iVar25);
      func_0x08b5b1d0(&uStack_1d8,auStack_108,auStack_408);
      plVar39 = plStack_3d8;
      *param_1 = (long ******)uStack_1d8;
      param_1[1] = (long ******)ppppppplStack_1d0;
      if (plStack_3d8 != (long *)0x0) {
        LOCK();
        plVar32 = plStack_3d8 + 1;
        lVar34 = *plVar32;
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (lVar34 == 0) {
          (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
          func_0x0412c2d0(plVar39);
        }
      }
      puVar21 = (undefined8 *)auStack_3f8._0_8_;
      while (puVar21 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar21;
        if ((*(byte *)(puVar21 + 5) & 1) != 0) {
          func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar21 + 2) & 1) != 0) {
          func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar21,0x40);
        puVar21 = puVar6;
      }
    }
    goto LAB_0d7a33d2;
  }
  func_0x045fec3b(puVar43);
  func_0x0d78cf40(auStack_408,0x80004005);
  func_0x08b5b1d0(&uStack_1d8,auStack_108,auStack_408);
  plVar39 = plStack_3d8;
  *param_1 = (long ******)uStack_1d8;
  param_1[1] = (long ******)ppppppplStack_1d0;
  if (plStack_3d8 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_3d8 + 1;
    lVar34 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
      func_0x0412c2d0(plVar39);
    }
  }
  puVar21 = (undefined8 *)auStack_3f8._0_8_;
  while (puVar21 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar21;
    if ((*(byte *)(puVar21 + 5) & 1) != 0) {
      func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
    }
    if ((*(byte *)(puVar21 + 2) & 1) != 0) {
      func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar21,0x40);
    puVar21 = puVar6;
  }
LAB_0d7a2ac9:
  lVar34 = auStack_408._0_8_;
  uVar28 = auStack_408._8_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auStack_408._8_8_;
  auStack_408 = auVar17 << 0x40;
  goto joined_r0x0d7a344b;
LAB_0d7a2f2a:
  lVar34 = func_0x0d7a5cc0(ppppppplVar35,pppppplVar31,auStack_408);
  plVar39 = *(long **)(lVar34 + 0xc0);
  if (plVar39 == (long *)0x0) {
LAB_0d7a3021:
    pthread_mutex_unlock(param_1);
LAB_0d7a3029:
    func_0x0412d680(0xf727f68);
    param_1 = ppppppplStack_338;
    if ((_DAT_0f727f98 == 0) ||
       (plVar32 = (long *)func_0x0412c300(), lVar34 = _DAT_0f727f90, plVar32 == (long *)0x0)) {
      pthread_mutex_unlock(0xf727f68);
      unaff_RBP = (long *******)0x80004005;
    }
    else {
      plVar39 = (long *)0xf727f68;
      pthread_mutex_unlock();
      if (lVar34 == 0) {
        unaff_RBP = (long *******)0x80004005;
      }
      else {
        plVar39 = (long *)auStack_408;
        func_0x0d7a0450(plVar39,lVar34,puVar43);
        uVar26 = auStack_408._0_8_;
        if ((long *)auStack_408._0_8_ == (long *)0x0) {
          unaff_RBP = (long *******)0x80004005;
        }
        else {
          plVar39 = (long *)auStack_408._0_8_;
          (**(code **)(*(long *)auStack_408._0_8_ + 0x20))();
          plVar40 = plStack_2e8;
          plVar41 = (long *)auStack_408._8_8_;
          auStack_408 = (undefined1  [16])0x0;
          if (plVar41 != (long *)0x0) {
            LOCK();
            *(long *)((undefined8)plVar41 + 1) = *(long *)((undefined8)plVar41 + 1) + 1;
            UNLOCK();
          }
          plStack_2f0 = (long *)uVar26;
          plStack_2e8 = plVar41;
          if (plVar40 != (long *)0x0) {
            LOCK();
            plVar1 = plVar40 + 1;
            lVar34 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar34 == 0) {
              (**(code **)(*plVar40 + 0x10))(plVar40);
              func_0x0412c2d0();
              plVar39 = plVar40;
            }
          }
          unaff_RBP = (long *******)0x0;
          if (plVar41 != (long *)0x0) {
            LOCK();
            plVar40 = (long *)((undefined8)plVar41 + 1);
            lVar34 = *plVar40;
            *plVar40 = *plVar40 + -1;
            UNLOCK();
            if (lVar34 == 0) {
              (**(code **)(*plVar41 + 0x10))(plVar41);
              func_0x0412c2d0();
              plVar39 = plVar41;
            }
          }
        }
        plVar41 = (long *)auStack_408._8_8_;
        if ((long *)auStack_408._8_8_ != (long *)0x0) {
          LOCK();
          plVar40 = (long *)(auStack_408._8_8_ + 8);
          lVar34 = *plVar40;
          *plVar40 = *plVar40 + -1;
          UNLOCK();
          if (lVar34 == 0) {
            (**(code **)(*(long *)auStack_408._8_8_ + 0x10))(auStack_408._8_8_);
            func_0x0412c2d0();
            plVar39 = plVar41;
          }
        }
      }
      LOCK();
      plVar41 = plVar32 + 1;
      lVar34 = *plVar41;
      *plVar41 = *plVar41 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0();
        plVar39 = plVar32;
      }
      auVar84 = auStack_318;
      if (-1 < (int)unaff_RBP) {
        uVar26 = auStack_318._0_8_;
        uVar33 = auStack_318._8_8_;
        auStack_318 = (undefined1  [16])0x0;
        auStack_408 = auVar84;
        auStack_3f8 = auStack_308;
        lStack_3e8 = CONCAT44(lStack_3e8._4_4_,uStack_2f8);
        if (auStack_308._8_8_ != 0) {
          plVar39 = (long *)auStack_3f8;
          uVar28 = *(ulong *)(auStack_308._0_8_ + 8);
          if ((uVar33 & uVar33 - 1) == 0) {
            uVar28 = uVar28 & uVar33 - 1;
          }
          else if ((ulong)uVar33 <= uVar28) {
            if ((uVar28 | uVar33) >> 0x20 == 0) {
              uVar28 = (uVar28 & 0xffffffff) % (uVar33 & 0xffffffff);
            }
            else {
              uVar28 = uVar28 % (ulong)uVar33;
            }
          }
          *(long **)(uVar26 + uVar28 * 8) = plVar39;
          auStack_308 = ZEXT816(0);
        }
        plStack_3e0 = plStack_2f0;
        plStack_3d8 = plStack_2e8;
        if (plStack_2e8 != (long *)0x0) {
          LOCK();
          plStack_2e8[1] = plStack_2e8[1] + 1;
          UNLOCK();
        }
        if (plStack_2f0 != (long *)0x0) {
          uStack_3c0 = uStack_2d0;
          lStack_3d0 = CONCAT44(uStack_2dc,iStack_2e0);
          puStack_3c8 = (undefined8 *)CONCAT44(uStack_2d4,uStack_2d8);
          func_0x08b5b1d0(&uStack_1d8,auStack_108,auStack_408);
          plVar39 = plStack_3d8;
          *param_1 = (long ******)uStack_1d8;
          param_1[1] = (long ******)ppppppplStack_1d0;
          if (plStack_3d8 != (long *)0x0) {
            LOCK();
            plVar32 = plStack_3d8 + 1;
            lVar34 = *plVar32;
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (lVar34 == 0) {
              (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
              func_0x0412c2d0(plVar39);
            }
          }
          puVar21 = (undefined8 *)auStack_3f8._0_8_;
          while (puVar21 != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)*puVar21;
            if ((*(byte *)(puVar21 + 5) & 1) != 0) {
              func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
            }
            if ((*(byte *)(puVar21 + 2) & 1) != 0) {
              func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
            }
            func_0x0412a280(puVar21,0x40);
            puVar21 = puVar6;
          }
          goto LAB_0d7a33d2;
        }
        goto LAB_0d7a35ac;
      }
    }
    func_0x045fec3b(puVar43);
    (*(code *)(*ppppppplStack_328)[5])();
    func_0x0d78cf40(auStack_408,unaff_RBP);
    func_0x08b5b1d0(&uStack_1d8,auStack_108,auStack_408);
    plVar39 = plStack_3d8;
    *param_1 = (long ******)uStack_1d8;
    param_1[1] = (long ******)ppppppplStack_1d0;
    if (plStack_3d8 != (long *)0x0) {
      LOCK();
      plVar32 = plStack_3d8 + 1;
      lVar34 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_3d8 + 0x10))(plStack_3d8);
        func_0x0412c2d0(plVar39);
      }
    }
    puVar21 = (undefined8 *)auStack_3f8._0_8_;
    while (puVar21 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar21;
      if ((*(byte *)(puVar21 + 5) & 1) != 0) {
        func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar21 + 2) & 1) != 0) {
        func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar21,0x40);
      puVar21 = puVar6;
    }
LAB_0d7a33d2:
    ppppppplVar29 = (long *******)auStack_408._0_8_;
    uVar26 = auStack_408._8_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auStack_408._8_8_;
    auStack_408 = auVar19 << 0x40;
    if (ppppppplVar29 != (long *******)0x0) {
      uVar28 = uVar26 << 3;
LAB_0d7a33ee:
      func_0x0412a280(ppppppplVar29,uVar28);
    }
  }
  else {
    auVar84 = (**(code **)(*plVar39 + 0x30))(plVar39,auStack_318);
    lStack_238 = auVar84._0_8_;
    pthread_mutex_unlock(param_1);
    if ((auVar84._8_8_ & 1) == 0) goto LAB_0d7a3029;
    (*(code *)(*ppppppplVar29)[5])(ppppppplVar29);
    uVar26 = func_0x045fec3b(puVar43);
    uStack_1f0 = uVar26;
    func_0x0d78ad90(auStack_108);
    func_0x0412d680(param_1);
    lVar34 = func_0x0d7a5cc0(ppppppplVar35,uVar26,&uStack_1f0);
    unaff_RBP = ppppppplStack_330;
    func_0x0488b090(auStack_408,lVar34 + 0x20);
    func_0x0b5d1940(lVar34 + 0x20,auStack_108);
    func_0x0b5d1940(auStack_108,auStack_408);
    if (plStack_368 == alStack_388) goto LAB_0d7a35b1;
    lVar34 = 0x28;
    if (plStack_368 != (long *)0x0) goto LAB_0d7a35b6;
LAB_0d7a35bc:
    plVar39 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar32 = plStack_3a8 + 1;
      lVar34 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar39);
      }
    }
    lVar34 = lStack_3e8;
    plVar39 = plStack_3d8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar32 = plStack_3b8 + 1;
      lVar2 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plStack_3b8);
        lVar34 = lStack_3e8;
        plVar39 = plStack_3d8;
      }
    }
    while (plVar39 != (long *)0x0) {
      plVar32 = (long *)*plVar39;
      lStack_3e8 = lVar34;
      if ((*(byte *)(plVar39 + 5) & 1) != 0) {
        func_0x0412a280(plVar39[7],plVar39[5] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(plVar39 + 2) & 1) != 0) {
        func_0x0412a280(plVar39[4],plVar39[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(plVar39,0x40);
      lVar34 = lStack_3e8;
      plVar39 = plVar32;
    }
    lStack_3e8 = 0;
    if (lVar34 != 0) {
      func_0x0412a280(lVar34,(long)plStack_3e0 << 3);
    }
    if ((auStack_408[0] & 1) != 0) {
      func_0x0412a280(auStack_3f8._0_8_,auStack_408._0_8_ & 0xfffffffffffffffe);
    }
    plVar39 = plStack_b8;
    auStack_408._8_8_ = plStack_b8;
    auStack_408._0_8_ = plStack_c0;
    if (plStack_b8 != (long *)0x0) {
      LOCK();
      plStack_b8[1] = plStack_b8[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plStack_c0 + 0x20))();
    if (plVar39 != (long *)0x0) {
      LOCK();
      plVar32 = plVar39 + 1;
      lVar34 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plVar39 + 0x10))(plVar39);
        func_0x0412c2d0(plVar39);
      }
    }
    pthread_mutex_unlock(param_1);
    ppppppplStack_220 = (long *******)&UNK_014405d9;
    uStack_218 = 0x11;
    uStack_210 = _DAT_0f778528;
    uStack_208 = 0xffffffff00000001;
    uStack_200 = 0;
    lStack_1f8 = 0;
    if (lStack_238 != 0) {
      lVar34 = lStack_238 * 1000000000;
      lStack_1f8 = func_0x0417cc60();
      lStack_1f8 = lStack_1f8 + lVar34;
    }
    uStack_1d8 = unaff_RBP;
    func_0x0488b090(apcStack_1c8,auStack_108);
    ppppppplVar29 = unaff_RBP + 0x13;
    uVar24 = (*(code *)unaff_RBP[0x13][9])(ppppppplVar29);
    auStack_258 = (undefined1  [16])0x0;
    auStack_408._0_8_ = uStack_1d8;
    puVar43 = auStack_3f8;
    func_0x0488b090(puVar43,apcStack_1c8);
    auStack_248 = (undefined1  [16])0x0;
    auStack_258 = (undefined1  [16])0x0;
    _auStack_2c8 = ZEXT816(0xf484898);
    plVar39 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar39 == (long *)0x0) {
LAB_0d7a3e6d:
      func_0x0eec74c0(0xd0,0);
    }
    *plVar39 = auStack_408._0_8_;
    func_0x0488b090(plVar39 + 2,puVar43);
    plStack_2c0 = plVar39;
    func_0x048a88e0(auStack_428,ppppppplVar29,&ppppppplStack_220,auStack_248,uVar24,auStack_2c8);
    param_1 = ppppppplStack_338;
    if (auStack_2c8 != (undefined1  [8])0x0) {
      (**(code **)((long)auStack_2c8 + 8))(auStack_2c8);
    }
    uVar26 = auStack_248._8_8_;
    if ((long *)auStack_248._8_8_ != (long *)0x0) {
      LOCK();
      plVar39 = (long *)(auStack_248._8_8_ + 8);
      lVar34 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
        func_0x0412c2d0(uVar26);
      }
    }
    ppppppplStack_1e8 = (long *******)auStack_428;
    pppppplStack_1e0 = pppppplStack_420;
    if (pppppplStack_420 != (long ******)0x0) {
      LOCK();
      pppppplStack_420[1] = (long *****)((long)pppppplStack_420[1] + 1);
      UNLOCK();
    }
    iVar25 = *(int *)(unaff_RBP + 0x23);
    if (iVar25 != 1) {
      if (iVar25 == 3) {
        *(undefined4 *)((long)auStack_428 + 0x30) = 0;
      }
      else if (iVar25 == 2) {
        (*(code *)(*(long *******)auStack_428)[2])();
        goto LAB_0d7a3968;
      }
      ppppppplStack_438 = (long *******)auStack_428;
      pppppplStack_430 = pppppplStack_420;
      if (pppppplStack_420 != (long ******)0x0) {
        LOCK();
        pppppplStack_420[1] = (long *****)((long)pppppplStack_420[1] + 1);
        UNLOCK();
      }
      (*(code *)(*ppppppplVar29)[5])(ppppppplVar29,&ppppppplStack_438,0);
      pppppplVar5 = pppppplStack_430;
      if (pppppplStack_430 != (long ******)0x0) {
        LOCK();
        pppppplVar31 = pppppplStack_430 + 1;
        ppppplVar3 = *pppppplVar31;
        *pppppplVar31 = (long *****)((long)*pppppplVar31 + -1);
        UNLOCK();
        if (ppppplVar3 == (long *****)0x0) {
          (*(code *)(*pppppplStack_430)[2])(pppppplStack_430);
          func_0x0412c2d0(pppppplVar5);
        }
      }
    }
LAB_0d7a3968:
    pppppplVar5 = pppppplStack_1e0;
    if (pppppplStack_1e0 != (long ******)0x0) {
      LOCK();
      pppppplVar31 = pppppplStack_1e0 + 1;
      ppppplVar3 = *pppppplVar31;
      *pppppplVar31 = (long *****)((long)*pppppplVar31 + -1);
      UNLOCK();
      if (ppppplVar3 == (long *****)0x0) {
        (*(code *)(*pppppplStack_1e0)[2])(pppppplStack_1e0);
        func_0x0412c2d0(pppppplVar5);
      }
    }
    plStack_278 = (long *)pppppplStack_420;
    lStack_280 = (long)auStack_428 + 0x70;
    if (auStack_428 == (undefined1  [8])0x0) {
      lStack_280 = 0;
    }
    _auStack_428 = (undefined1  [16])0x0;
    auStack_48._0_16_ = (undefined1  [16])0x0;
    func_0x048a8a80(&ppppppplStack_438,&lStack_280);
    plVar39 = plStack_278;
    ppppppplStack_328 = ppppppplStack_438;
    pppppplStack_320 = pppppplStack_430;
    ppppppplStack_438 = (long *******)0x0;
    pppppplStack_430 = (long ******)0x0;
    if (plStack_278 != (long *)0x0) {
      LOCK();
      plVar32 = plStack_278 + 1;
      lVar34 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_278 + 0x10))(plStack_278);
        func_0x0412c2d0(plVar39);
      }
    }
    uVar26 = auStack_48._8_8_;
    if ((long *)auStack_48._8_8_ != (long *)0x0) {
      LOCK();
      plVar39 = (long *)(auStack_48._8_8_ + 8);
      lVar34 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*(long *)auStack_48._8_8_ + 0x10))(auStack_48._8_8_);
        func_0x0412c2d0(uVar26);
      }
    }
    pppppplVar5 = pppppplStack_420;
    if (pppppplStack_420 != (long ******)0x0) {
      LOCK();
      plVar39 = (long *)(pppppplStack_420 + 1);
      lVar34 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)((long)*pppppplStack_420 + 0x10))(pppppplStack_420);
        func_0x0412c2d0(pppppplVar5);
      }
    }
    if (plStack_358 == alStack_378) {
      lVar34 = 0x20;
LAB_0d7a3aaa:
      (**(code **)(*plStack_358 + lVar34))();
    }
    else {
      lVar34 = 0x28;
      if (plStack_358 != (long *)0x0) goto LAB_0d7a3aaa;
    }
    if (plStack_398 != (long *)0x0) {
      LOCK();
      plVar39 = plStack_398 + 1;
      lVar34 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_398 + 0x10))(plStack_398);
        func_0x0412c2d0(plStack_398);
      }
    }
    plVar39 = plStack_3d8;
    puVar21 = puStack_3c8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar32 = plStack_3a8 + 1;
      lVar34 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plStack_3a8);
        plVar39 = plStack_3d8;
        puVar21 = puStack_3c8;
      }
    }
    while (puVar21 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar21;
      plStack_3d8 = plVar39;
      if ((*(byte *)(puVar21 + 5) & 1) != 0) {
        func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar21 + 2) & 1) != 0) {
        func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar21,0x40);
      plVar39 = plStack_3d8;
      puVar21 = puVar6;
    }
    plStack_3d8 = (long *)0x0;
    if (plVar39 != (long *)0x0) {
      func_0x0412a280(plVar39,lStack_3d0 << 3);
    }
    if ((auStack_3f8[0] & 1) != 0) {
      func_0x0412a280(lStack_3e8,auStack_3f8._0_8_ & 0xfffffffffffffffe);
    }
    uVar26 = auStack_258._8_8_;
    if ((long *)auStack_258._8_8_ != (long *)0x0) {
      LOCK();
      plVar39 = (long *)(auStack_258._8_8_ + 8);
      lVar34 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*(long *)auStack_258._8_8_ + 0x10))(auStack_258._8_8_);
        func_0x0412c2d0(uVar26);
      }
    }
    *param_1 = (long ******)ppppppplStack_328;
    param_1[1] = pppppplStack_320;
    if (plStack_128 == alStack_148) {
      lVar34 = 0x20;
LAB_0d7a3c0b:
      (**(code **)(*plStack_128 + lVar34))();
    }
    else {
      lVar34 = 0x28;
      if (plStack_128 != (long *)0x0) goto LAB_0d7a3c0b;
    }
    if (plStack_168 != (long *)0x0) {
      LOCK();
      plVar39 = plStack_168 + 1;
      lVar34 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        func_0x0412c2d0(plStack_168);
      }
    }
    lVar34 = lStack_1a8;
    puVar21 = puStack_198;
    if (plStack_178 != (long *)0x0) {
      LOCK();
      plVar39 = plStack_178 + 1;
      lVar2 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        func_0x0412c2d0(plStack_178);
        lVar34 = lStack_1a8;
        puVar21 = puStack_198;
      }
    }
    while (puVar21 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar21;
      lStack_1a8 = lVar34;
      if ((*(byte *)(puVar21 + 5) & 1) != 0) {
        func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar21 + 2) & 1) != 0) {
        func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar21,0x40);
      lVar34 = lStack_1a8;
      puVar21 = puVar6;
    }
    lStack_1a8 = 0;
    if (lVar34 != 0) {
      func_0x0412a280(lVar34,lStack_1a0 << 3);
    }
    if (((ulong)apcStack_1c8[0] & 1) != 0) {
      func_0x0412a280(uStack_1b8,(ulong)apcStack_1c8[0] & 0xfffffffffffffffe);
    }
    if (plStack_68 == alStack_88) {
      lVar34 = 0x20;
LAB_0d7a3d41:
      (**(code **)(*plStack_68 + lVar34))();
    }
    else {
      lVar34 = 0x28;
      if (plStack_68 != (long *)0x0) goto LAB_0d7a3d41;
    }
    if (plStack_a8 != (long *)0x0) {
      LOCK();
      plVar39 = plStack_a8 + 1;
      lVar34 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        func_0x0412c2d0(plStack_a8);
      }
    }
    lVar34 = lStack_e8;
    puVar21 = puStack_d8;
    if (plStack_b8 != (long *)0x0) {
      LOCK();
      plVar39 = plStack_b8 + 1;
      lVar2 = *plVar39;
      *plVar39 = *plVar39 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        func_0x0412c2d0(plStack_b8);
        lVar34 = lStack_e8;
        puVar21 = puStack_d8;
      }
    }
    while (puVar21 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar21;
      lStack_e8 = lVar34;
      if ((*(byte *)(puVar21 + 5) & 1) != 0) {
        func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar21 + 2) & 1) != 0) {
        func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar21,0x40);
      lVar34 = lStack_e8;
      puVar21 = puVar6;
    }
    lStack_e8 = 0;
    if (lVar34 != 0) {
      func_0x0412a280(lVar34,lStack_e0 << 3);
    }
    if (((ulong)auStack_108 & 1) != 0) {
      uVar28 = (ulong)auStack_108 & 0xfffffffffffffffe;
      ppppppplVar29 = ppppppplStack_f8;
      goto LAB_0d7a33ee;
    }
  }
  plVar39 = plStack_2e8;
  if (plStack_2e8 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_2e8 + 1;
    lVar34 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
      func_0x0412c2d0(plVar39);
    }
  }
  puVar21 = (undefined8 *)auStack_308._0_8_;
  while (puVar21 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar21;
    if ((*(byte *)(puVar21 + 5) & 1) != 0) {
      func_0x0412a280(puVar21[7],puVar21[5] & 0xfffffffffffffffe);
    }
    if ((*(byte *)(puVar21 + 2) & 1) != 0) {
      func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar21,0x40);
    puVar21 = puVar6;
  }
  lVar34 = auStack_318._0_8_;
  uVar28 = auStack_318._8_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = auStack_318._8_8_;
  auStack_318 = auVar20 << 0x40;
joined_r0x0d7a344b:
  if (lVar34 != 0) {
    func_0x0412a280(lVar34,uVar28 << 3);
  }
  ppppppplVar29 = ppppppplStack_270;
  uVar26 = uStack_268;
  if (plStack_228 != (long *)0x0) {
    LOCK();
    plVar39 = plStack_228 + 1;
    lVar34 = *plVar39;
    *plVar39 = *plVar39 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      func_0x0412c2d0(plStack_228);
      ppppppplVar29 = ppppppplStack_270;
      uVar26 = uStack_268;
    }
  }
joined_r0x0d7a3555:
  if (cStack_260 == '\x01') {
    ppppppplStack_270 = ppppppplVar29;
    uStack_268 = uVar26;
    uVar33 = func_0x045fec3b(uVar26);
    func_0x0412d680(ppppppplVar29 + 0xe);
    func_0x0d7a63b0(ppppppplVar29 + 9,uVar33);
    pthread_mutex_unlock(ppppppplVar29 + 0xe);
    func_0x045feb13(uVar26);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
