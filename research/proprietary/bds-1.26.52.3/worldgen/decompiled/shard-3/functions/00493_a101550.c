/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa201550 (ELF vaddr 0xa101550)
 * Label: caller-of-callee
 * Body:  [[0a201550, 0a201894] [0a2018a0, 0a20298c] [0a202990, 0a202ca5] [0a202cb0, 0a202ff5] [0a203000, 0a203054] [0a203060, 0a203736] [0a203740, 0a20378b] [0a203790, 0a20386e] [0a203870, 0a2038b7] [0a2038c0, 0a203cb6]]
 * Ghidra: FUN_0a201550
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0a201550(undefined8 *param_1,code *param_2,undefined8 *param_3,code *param_4,long *param_5,
            code *param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 extraout_DL;
  long *plVar17;
  long *plVar18;
  code *pcVar19;
  code *pcVar20;
  long lVar21;
  ulong uVar22;
  code *unaff_R12;
  code *pcVar23;
  code *pcVar24;
  long *plVar25;
  bool bVar26;
  float fVar27;
  undefined1 auVar28 [16];
  code *pcStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  char cStack_380;
  long *plStack_378;
  ulong uStack_370;
  code *pcStack_368;
  uint uStack_360;
  undefined4 uStack_35c;
  ulong uStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  char cStack_328;
  undefined1 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  code *pcStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  code *pcStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  code *pcStack_2b0;
  undefined8 *puStack_2a8;
  code *pcStack_2a0;
  long *plStack_298;
  uint uStack_290;
  undefined8 uStack_288;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined8 *puStack_278;
  undefined8 *******pppppppuStack_270;
  undefined4 *puStack_268;
  code *pcStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  long *plStack_248;
  undefined *puStack_240;
  long lStack_238;
  code *pcStack_230;
  code *pcStack_228;
  long *plStack_220;
  code *pcStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  code *pcStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  code *pcStack_a0;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  (**(code **)(*(long *)param_3[2] + 0x10))(&uStack_3c8);
  uVar2 = *(undefined1 *)(param_3 + 3);
  uVar3 = param_3[4];
  uVar14 = *(undefined4 *)(param_3 + 5);
  param_1[1] = *param_3;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar14;
  param_1[5] = uStack_3c8;
  *(int *)(param_1 + 6) = (int)uStack_3c0;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_3b8;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_3b8._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_3b0;
  *(undefined4 *)((long)param_1 + 0x44) = uStack_3b0._4_4_;
  if (uStack_3c8 == (undefined8 *******)0x0) {
    *(undefined1 *)(param_1 + 9) = 1;
    *param_1 = &UNK_0f20c390;
  }
  else {
    iVar6 = *(int *)((long)uStack_3c8 + 8);
    lVar12 = (long)*uStack_3c8;
    if (lVar12 == 0 || iVar6 != (int)uStack_3c0) {
      *(undefined1 *)(param_1 + 9) = 1;
      *param_1 = &UNK_0f20c390;
    }
    else {
      func_0x0d8568b0(lVar12,param_1[7]);
      *(undefined1 *)(param_1 + 9) = 1;
      *param_1 = &UNK_0f20c390;
      if (uStack_3c8 == (undefined8 *******)0x0) goto LAB_0a20164a;
      iVar6 = *(int *)((long)uStack_3c8 + 8);
      lVar12 = (long)*uStack_3c8;
    }
    if (lVar12 != 0 && iVar6 == (int)uStack_3c0) {
      func_0x0d8569b0(lVar12,uStack_3b8,(ulong)uStack_3b0 & 0xffffffff);
    }
  }
LAB_0a20164a:
  puStack_2a8 = param_1;
  if (param_2[0x8e] == (code)0x1) {
    pcVar24 = (code *)(*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 5);
    unaff_R12 = (code *)(ulong)*(ushort *)(param_2 + 0x8c);
    if (unaff_R12 <= pcVar24) {
      puStack_268 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_268 == (undefined4 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar3 = _UNK_0129621f;
      puStack_278 = (undefined8 *)0x21;
      pppppppuStack_270 = (undefined8 *******)0x1b;
      *(ulong *)((long)puStack_268 + 0xb) =
           CONCAT35(_UNK_0129621c,CONCAT41(_UNK_01296218,DAT_01296217));
      *(undefined8 *)((long)puStack_268 + 0x13) = uVar3;
      uVar5 = _UNK_01296218;
      uVar4 = _UNK_01296214;
      uVar14 = _UNK_01296210;
      *puStack_268 = _DAT_0129620c;
      puStack_268[1] = uVar14;
      puStack_268[2] = uVar4;
      puStack_268[3] = uVar5;
      *(undefined1 *)((long)puStack_268 + 0x1b) = 0;
      pcStack_2e8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (pcStack_2e8 == (code *)0x0) {
        FUN_0eec74c0(0x38,0);
      }
      uVar3 = _UNK_012ae34b;
      uStack_2f8 = (code *)0x39;
      uStack_2f0 = (code *)0x33;
      *(undefined8 *)((long)pcStack_2e8 + 0x20) = _DAT_012ae343;
      *(undefined8 *)((long)pcStack_2e8 + 0x28) = uVar3;
      uVar3 = _UNK_012ae33b;
      *(undefined8 *)((long)pcStack_2e8 + 0x10) = _DAT_012ae333;
      *(undefined8 *)((long)pcStack_2e8 + 0x18) = uVar3;
      uVar5 = _UNK_012ae32f;
      uVar4 = _UNK_012ae32b;
      uVar14 = _UNK_012ae327;
      *(undefined4 *)pcStack_2e8 = _DAT_012ae323;
      *(undefined4 *)((long)pcStack_2e8 + 4) = uVar14;
      *(undefined4 *)((long)pcStack_2e8 + 8) = uVar4;
      *(undefined4 *)((long)pcStack_2e8 + 0xc) = uVar5;
      *(undefined4 *)((long)pcStack_2e8 + 0x2f) = 0x2e646564;
      *(undefined1 *)((long)pcStack_2e8 + 0x33) = 0;
      func_0x0d858ce0(&uStack_3c8,&puStack_278,&uStack_2f8);
      if (((ulong)uStack_2f8 & 1) != 0) {
        func_0x0412a280(pcStack_2e8,(ulong)uStack_2f8 & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_278 & 1) != 0) {
        func_0x0412a280(puStack_268,(ulong)puStack_278 & 0xfffffffffffffffe);
      }
      lVar12 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      uStack_318 = unaff_R12;
      uStack_310 = pcVar24;
      if (lVar12 == 0) {
        func_0x048b0de0(&uStack_2f8,&uStack_1b0);
        _DAT_0f54fd90 = (undefined4)uStack_2f8;
        uRam000000000f54fd94 = uStack_2f8._4_4_;
        uVar14 = (undefined4)uStack_2f0;
        uVar4 = uStack_2f0._4_4_;
        uStack_2f8 = (code *)0x0;
        uStack_2f0 = (code *)0x0;
        plVar25 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar14;
        uRam000000000f54fd9c = uVar4;
        if (plVar25 != (long *)0x0) {
          LOCK();
          plVar18 = plVar25 + 1;
          lVar12 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            func_0x0412c2d0(plVar25);
          }
        }
        plVar25 = (long *)uStack_2f0;
        if (uStack_2f0 != (code *)0x0) {
          LOCK();
          plVar18 = (long *)((long)uStack_2f0 + 8);
          lVar12 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*(long *)uStack_2f0 + 0x10))(uStack_2f0);
            func_0x0412c2d0(plVar25);
          }
        }
        lVar12 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      }
      puStack_278 = (undefined8 *)0x0;
      puStack_268 = (undefined4 *)&UNK_0a253480;
      uStack_258 = 0xea1648de;
      pcStack_260 = (code *)&UNK_0a253450;
      uStack_254 = CONCAT31(uStack_254._1_3_,1);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
      if (puVar9 == (undefined8 *)0x0) {
        FUN_0eec74c0(0xc0,0);
      }
      puVar10 = puStack_2a8;
      puVar9[2] = uStack_3b8;
      *puVar9 = uStack_3c8;
      puVar9[1] = uStack_3c0;
      uStack_3c8 = (undefined8 *******)0x0;
      uStack_3c0 = (code *)0x0;
      uStack_3b8 = (code *)0x0;
      puVar9[5] = plStack_3a0;
      *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_3b0;
      *(undefined4 *)((long)puVar9 + 0x1c) = uStack_3b0._4_4_;
      *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_3a8;
      *(undefined4 *)((long)puVar9 + 0x24) = uStack_3a8._4_4_;
      uStack_3b0 = (code *)0x0;
      uStack_3a8 = (code *)0x0;
      plStack_3a0 = (long *)0x0;
      *(undefined1 *)(puVar9 + 6) = 0;
      *(undefined1 *)(puVar9 + 9) = 0;
      if (cStack_380 == '\x01') {
        puVar9[8] = plStack_388;
        *(int *)(puVar9 + 6) = (int)uStack_398;
        *(undefined4 *)((long)puVar9 + 0x34) = uStack_398._4_4_;
        *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_390;
        *(undefined4 *)((long)puVar9 + 0x3c) = uStack_390._4_4_;
        uStack_398 = 0;
        uStack_390 = 0;
        plStack_388 = (long *)0x0;
        *(undefined1 *)(puVar9 + 9) = 1;
      }
      *(undefined1 *)(puVar9 + 10) = 0;
      *(undefined1 *)(puVar9 + 0xd) = 0;
      if ((char)uStack_360 == '\x01') {
        puVar9[0xc] = pcStack_368;
        puVar9[10] = plStack_378;
        puVar9[0xb] = uStack_370;
        plStack_378 = (long *)0x0;
        uStack_370 = 0;
        pcStack_368 = (code *)0x0;
        *(undefined1 *)(puVar9 + 0xd) = 1;
      }
      puVar9[0xe] = uStack_358;
      puVar9[0xf] = lStack_350;
      puVar9[0x10] = lStack_348;
      uStack_358 = 0;
      lStack_350 = 0;
      lStack_348 = 0;
      *(undefined1 *)(puVar9 + 0x11) = 0;
      *(undefined1 *)(puVar9 + 0x14) = 0;
      if (cStack_328 == '\x01') {
        puVar9[0x13] = uStack_330;
        *(undefined4 *)(puVar9 + 0x11) = (undefined4)uStack_340;
        *(undefined4 *)((long)puVar9 + 0x8c) = uStack_340._4_4_;
        *(undefined4 *)(puVar9 + 0x12) = (undefined4)uStack_338;
        *(undefined4 *)((long)puVar9 + 0x94) = uStack_338._4_4_;
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_330 = 0;
        *(undefined1 *)(puVar9 + 0x14) = 1;
      }
      *(undefined1 *)(puVar9 + 0x15) = uStack_320;
      *(undefined4 *)(puVar9 + 0x16) = (undefined4)uStack_318;
      *(undefined4 *)((long)puVar9 + 0xb4) = uStack_318._4_4_;
      *(undefined4 *)(puVar9 + 0x17) = (undefined4)uStack_310;
      *(undefined4 *)((long)puVar9 + 0xbc) = uStack_310._4_4_;
      plStack_248 = (long *)0x0;
      puStack_240 = &UNK_0a253370;
      puStack_278 = puVar9;
      uStack_250 = lVar12;
      func_0x0d81d7e0(auStack_78,puStack_2a8,&puStack_278);
      if (pcStack_260 != (code *)0x0) {
        (*pcStack_260)(&puStack_278);
      }
      if (pcStack_58 != (code *)0x0) {
        (*pcStack_58)(auStack_70);
      }
      func_0x048fb670(&uStack_3c8);
      return puVar10;
    }
  }
  func_0x0a1efc40(&puStack_278,param_2 + 0x58,param_4,1);
  puVar9 = puStack_2a8;
  if ((char)puStack_278 == '\x01') {
    if (uStack_250._4_1_ == '\x02') {
      pppppppuStack_270 = &pppppppuStack_270;
    }
    pcStack_2e8 = pcStack_260;
    pcStack_2e0 = (code *)0x0;
    uStack_2d8._0_5_ = CONCAT14(4,(undefined4)uStack_250);
    uStack_3b8 = pcStack_260;
    uStack_3b0 = (code *)0x0;
    uStack_3a8._0_5_ = CONCAT14(4,(undefined4)uStack_250);
    uStack_2f8 = (code *)0x0;
    uStack_2c8 = 0;
    plStack_2d0 = plStack_248;
    plStack_3a0 = plStack_248;
    uStack_398 = (ulong)puStack_240;
    uStack_2c0 = 0;
    uStack_390 = lStack_238;
    uStack_3c8 = pppppppuStack_270;
    func_0x0d81d7e0(auStack_c0,puStack_2a8,&uStack_3c8);
    if (uStack_3b0 != (code *)0x0) {
      (*uStack_3b0)(&uStack_3c8);
    }
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(auStack_b8);
    }
    if (pcStack_2e0 != (code *)0x0) {
      (*pcStack_2e0)(&uStack_2f8);
    }
LAB_0a203944:
    pcVar24 = (code *)CONCAT44(uStack_254,uStack_258);
joined_r0x0a20394f:
    if (pcVar24 != (code *)0x0) {
      (*pcVar24)(&pppppppuStack_270);
    }
    return puVar9;
  }
  pcStack_300 = (code *)(param_1 + 7);
  pcVar24 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  pcVar19 = pcVar24;
  pcStack_3d8 = param_6;
  if (pcVar24 == (code *)0x0) goto LAB_0a203b96;
  while( true ) {
    *(long *)(pcVar19 + 8) = 0;
    *(long *)(pcVar19 + 0x10) = 0;
    *(undefined **)pcVar19 = &UNK_0f20ca18;
    *(long *)(pcVar19 + 0x30) = 0;
    *(long *)(pcVar19 + 0x38) = 0;
    *(long *)(pcVar19 + 0x40) = 0;
    *(long *)(pcVar19 + 0x48) = 0;
    *(long *)(pcVar19 + 0x50) = 0;
    *(long *)(pcVar19 + 0x58) = 0;
    *(undefined **)(pcVar19 + 0x18) = &UNK_0f20c1a0;
    *(undefined4 *)(pcVar19 + 0xac) = 0;
    *(long *)(pcVar19 + 0x68) = 0;
    *(long *)(pcVar19 + 0x70) = 0;
    *(long *)(pcVar19 + 0x78) = 0;
    *(long *)(pcVar19 + 0x80) = 0;
    *(long *)(pcVar19 + 0x88) = 0;
    *(long *)(pcVar19 + 0x90) = 0;
    *(long *)(pcVar19 + 0x98) = 0;
    *(long *)(pcVar19 + 0xa0) = 0;
    pcVar19[0xa8] = (code)0x0;
    *(long *)(pcVar19 + 0x60) = 0x2d;
    LOCK();
    *(long *)(pcVar19 + 8) = *(long *)(pcVar19 + 8) + 1;
    UNLOCK();
    LOCK();
    *(long *)(pcVar19 + 0x10) = *(long *)(pcVar19 + 0x10) + 1;
    UNLOCK();
    pcVar24 = pcVar19 + 0x18;
    *(code **)(pcVar19 + 0x20) = pcVar24;
    *(code **)(pcVar19 + 0x28) = pcVar19;
    LOCK();
    pcVar20 = pcVar19 + 8;
    lVar12 = *(long *)pcVar20;
    *(long *)pcVar20 = *(long *)pcVar20 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)pcVar19 + 0x10))(pcVar19);
      func_0x0412c2d0(pcVar19);
    }
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    uStack_3c8 = (undefined8 *******)0x0;
    uStack_3c0 = (code *)0x0;
    uStack_3b8 = (code *)0x0;
    pcVar20 = pcVar19;
    pcStack_218 = param_4;
    if ((char)param_5[3] == '\x01') {
      unaff_R12 = (code *)*param_5;
      param_5 = (long *)param_5[1];
      pcVar20 = (code *)((long)param_5 - (long)unaff_R12);
      if (pcVar20 != (code *)0x0) {
        if (0x2e8ba2e8ba2e8ba < (ulong)(((long)pcVar20 >> 3) * 0x2e8ba2e8ba2e8ba3))
        goto LAB_0a203c41;
        pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pcVar20);
        if (pcVar7 == (code *)0x0) {
          FUN_0eec74c0(pcVar20,0);
        }
        pcVar20 = pcVar20 + (long)pcVar7;
        uStack_3c8 = (undefined8 *******)pcVar7;
        uStack_3c0 = pcVar7;
        uStack_3b8 = pcVar20;
        uStack_3c0 = (code *)func_0x0a217ac0(&uStack_3c8,unaff_R12,param_5,pcVar7);
      }
    }
    pcStack_2a0 = pcVar24;
    func_0x0a1eb380(&lStack_e8,&uStack_3c8,param_2 + 0x98);
    pcVar24 = (code *)uStack_3c8;
    if (uStack_3c8 != (undefined8 *******)0x0) {
      if (uStack_3c8 != (undefined8 *******)uStack_3c0) {
        unaff_R12 = (code *)0xffffffff;
        pcVar20 = (code *)&uStack_2f8;
        pcVar7 = uStack_3c0;
        do {
          if ((ulong)*(uint *)(pcVar7 + -8) != 0xffffffff) {
            (**(code **)(&UNK_0f20c3e0 + (ulong)*(uint *)(pcVar7 + -8) * 8))(pcVar20,pcVar7 + -0x40)
            ;
          }
          *(undefined4 *)(pcVar7 + -8) = 0xffffffff;
          if (((byte)pcVar7[-0x58] & 1) != 0) {
            func_0x0412a280(*(long *)(pcVar7 + -0x48),
                            *(ulong *)(pcVar7 + -0x58) & 0xfffffffffffffffe);
          }
          pcVar7 = pcVar7 + -0x58;
        } while (pcVar7 != pcVar24);
      }
      uStack_3c0 = pcVar24;
      func_0x0412a280(uStack_3c8,(long)uStack_3b8 - (long)uStack_3c8);
    }
    param_5 = _DAT_0f658328;
    pcStack_2b0 = pcVar19 + 8;
    puVar9 = *(undefined8 **)pcStack_3d8;
    if ((puVar9 != (undefined8 *)0x0) &&
       (plVar25 = (long *)*puVar9,
       plVar25 != (long *)0x0 && *(int *)(puVar9 + 1) == *(int *)(pcStack_3d8 + 8))) break;
    plStack_298 = _DAT_0f658328;
    param_4 = (code *)(ulong)_DAT_0f658330;
    uStack_290 = _DAT_0f658330;
    uStack_288 = (code *)CONCAT44(uRam000000000f65833c,_DAT_0f658338);
    uStack_280 = uRam000000000f658340;
    uStack_27c = uRam000000000f658344;
    if (_DAT_0f658328 == (long *)0x0) {
      param_5 = (long *)0x0;
    }
    else if (*_DAT_0f658328 != 0 && *(uint *)(_DAT_0f658328 + 1) == _DAT_0f658330) {
      func_0x0d8568b0(*_DAT_0f658328,uStack_288);
    }
    puVar9 = *(undefined8 **)(param_2 + 0x30);
    puVar10 = *(undefined8 **)(param_2 + 0x38);
    if (puVar10 <= puVar9) goto LAB_0a20281d;
LAB_0a201f7f:
    *puVar9 = param_5;
    *(int *)(puVar9 + 1) = (int)param_4;
    *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_288;
    *(undefined4 *)((long)puVar9 + 0x14) = uStack_288._4_4_;
    *(uint *)(puVar9 + 3) = uStack_280;
    *(undefined4 *)((long)puVar9 + 0x1c) = uStack_27c;
    if ((param_5 != (long *)0x0) && (*param_5 != 0 && (int)param_5[1] == (int)param_4)) {
      func_0x0d8568b0(*param_5,puVar9[2]);
    }
    pcVar20 = (code *)(puVar9 + 4);
    *(code **)(param_2 + 0x30) = pcVar20;
    param_4 = pcStack_218;
    unaff_R12 = pcStack_2b0;
LAB_0a202a0b:
    puVar9 = puStack_2a8;
    *(code **)(param_2 + 0x30) = pcVar20;
    pcStack_3d8 = *(code **)(param_2 + 200);
    if (pcVar19 != (code *)0x0) {
      LOCK();
      *(long *)unaff_R12 = *(long *)unaff_R12 + 1;
      UNLOCK();
    }
    func_0x048997c0(&lStack_110,&lStack_e8);
    pcVar24 = pcStack_300;
    plVar18 = *(long **)(param_2 + 0x50);
    if (plVar18 != (long *)0x0) {
      if (pcVar19 != (code *)0x0) {
        LOCK();
        *(long *)unaff_R12 = *(long *)unaff_R12 + 1;
        UNLOCK();
      }
      func_0x048997c0(&uStack_1b0,&lStack_110);
      uStack_3c0 = (code *)puVar9[1];
      uStack_3b8 = (code *)CONCAT71(uStack_3b8._1_7_,*(undefined1 *)(puVar9 + 2));
      uStack_3b0 = (code *)puVar9[3];
      uStack_3a8 = (code *)CONCAT44(uStack_3a8._4_4_,*(undefined4 *)(puVar9 + 4));
      uStack_3c8 = (undefined8 *******)&UNK_0f040e20;
      plStack_3a0 = (long *)((ulong)plStack_3a0 & 0xffffffffffffff00);
      cStack_380 = '\0';
      if (*(char *)(puVar9 + 9) == '\x01') {
        plStack_3a0 = (long *)puVar9[5];
        uStack_398 = CONCAT44(uStack_398._4_4_,*(int *)(puVar9 + 6));
        uStack_390 = *(long *)pcVar24;
        plStack_388 = *(long **)(pcVar24 + 8);
        if ((plStack_3a0 != (long *)0x0) &&
           (*plStack_3a0 != 0 && (int)plStack_3a0[1] == *(int *)(puVar9 + 6))) {
          func_0x0d8568b0(*plStack_3a0,uStack_390);
        }
        cStack_380 = '\x01';
      }
      uStack_3c8 = (undefined8 *******)&UNK_0f20c390;
      plStack_378 = plStack_298;
      uStack_370 = CONCAT44(uStack_370._4_4_,uStack_290);
      pcStack_368 = uStack_288;
      uStack_360 = uStack_280;
      uStack_35c = uStack_27c;
      if ((plStack_298 != (long *)0x0) &&
         (*plStack_298 != 0 && *(uint *)(plStack_298 + 1) == uStack_290)) {
        func_0x0d8568b0(*plStack_298,uStack_288);
      }
      pcVar24 = pcStack_2a0;
      if (((byte)*param_4 & 1) == 0) {
        lStack_348 = *(long *)(param_4 + 0x10);
        uStack_358 = *(ulong *)param_4;
        lStack_350 = *(long *)(param_4 + 8);
      }
      else {
        func_0x0412e5e0(&uStack_358,*(long *)(param_4 + 0x10),*(long *)(param_4 + 8));
      }
      pcStack_300 = pcStack_3d8 + 8;
      uVar16 = ((ulong)(uint)((int)pcVar24 * 8) + 8 ^ (ulong)pcVar24 >> 0x20) * -0x622015f714c7d297;
      uVar16 = (uVar16 >> 0x2f ^ (ulong)pcVar24 >> 0x20 ^ uVar16) * -0x622015f714c7d297;
      plVar25 = (long *)((uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297);
      plVar15 = *(long **)(pcStack_3d8 + 0x10);
      plStack_220 = plVar18;
      if (plVar15 != (long *)0x0) {
        uVar16 = (long)plVar15 - ((ulong)plVar15 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
        uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar16 >> 0x38 < 2) {
          plVar18 = (long *)((long)plVar15 - 1U & (ulong)plVar25);
        }
        else {
          plVar18 = plVar25;
          if (plVar15 <= plVar25) {
            plVar18 = (long *)((ulong)plVar25 % (ulong)plVar15);
          }
        }
        plVar8 = *(long **)(*(long *)pcStack_300 + (long)plVar18 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          if ((byte)(uVar16 >> 0x38) < 2) {
            do {
              if ((long *)plVar8[1] == plVar25) {
                if ((code *)plVar8[2] == pcVar24) goto LAB_0a203283;
              }
              else if ((long *)((ulong)plVar8[1] & (long)plVar15 - 1U) != plVar18) break;
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          else {
            do {
              plVar17 = (long *)plVar8[1];
              if (plVar17 == plVar25) {
                if ((code *)plVar8[2] == pcVar24) goto LAB_0a203283;
              }
              else {
                if (plVar15 <= plVar17) {
                  if (((ulong)plVar17 | (ulong)plVar15) >> 0x20 == 0) {
                    if ((long *)(((ulong)plVar17 & 0xffffffff) % ((ulong)plVar15 & 0xffffffff)) ==
                        plVar18) goto LAB_0a20306a;
                    break;
                  }
                  plVar17 = (long *)((ulong)plVar17 % (ulong)plVar15);
                }
                if (plVar17 != plVar18) break;
              }
LAB_0a20306a:
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
      }
      param_4 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
      if (param_4 == (code *)0x0) {
        FUN_0eec74c0(0xa0,0);
      }
      uStack_2f0 = pcStack_300;
      pcStack_2e8 = (code *)0x1;
      *(long *)param_4 = 0;
      *(long **)(param_4 + 8) = plVar25;
      *(code **)(param_4 + 0x10) = pcVar24;
      *(code **)(param_4 + 0x20) = uStack_3c0;
      param_4[0x28] = uStack_3b8._0_1_;
      *(code **)(param_4 + 0x30) = uStack_3b0;
      *(undefined4 *)(param_4 + 0x38) = (undefined4)uStack_3a8;
      uStack_3b0 = (code *)0x0;
      uStack_3a8 = (code *)((ulong)uStack_3a8 & 0xffffffff00000000);
      uStack_3c0 = (code *)0x0;
      uStack_3b8 = (code *)((ulong)uStack_3b8 & 0xffffffffffffff00);
      *(undefined **)(param_4 + 0x18) = &UNK_0f040e20;
      param_4[0x40] = (code)0x0;
      param_4[0x60] = (code)0x0;
      if (cStack_380 == '\x01') {
        *(long **)(param_4 + 0x40) = plStack_3a0;
        *(int *)(param_4 + 0x48) = (int)uStack_398;
        *(long *)(param_4 + 0x50) = uStack_390;
        *(long **)(param_4 + 0x58) = plStack_388;
        plStack_3a0 = (long *)0x0;
        uStack_398 = uStack_398 & 0xffffffff00000000;
        uStack_390 = 0xffffffffffffff;
        plStack_388 = (long *)((ulong)plStack_388 & 0xffffffffffffff00);
        param_4[0x60] = (code)0x1;
      }
      *(undefined **)(param_4 + 0x18) = &UNK_0f20c390;
      *(long **)(param_4 + 0x68) = plStack_378;
      *(int *)(param_4 + 0x70) = (int)uStack_370;
      *(code **)(param_4 + 0x78) = pcStack_368;
      *(long *)(param_4 + 0x80) = CONCAT44(uStack_35c,uStack_360);
      plStack_378 = (long *)0x0;
      uStack_370 = uStack_370 & 0xffffffff00000000;
      pcStack_368 = (code *)0xffffffffffffff;
      uStack_360 = uStack_360 & 0xffffff00;
      *(long *)(param_4 + 0x98) = lStack_348;
      *(ulong *)(param_4 + 0x88) = uStack_358;
      *(long *)(param_4 + 0x90) = lStack_350;
      uStack_358 = 0;
      lStack_350 = 0;
      lStack_348 = 0;
      if ((long)plVar15 < 0) {
        fVar27 = *(float *)(pcStack_3d8 + 0x28);
      }
      else {
        fVar27 = *(float *)(pcStack_3d8 + 0x28);
      }
      uStack_2f8 = param_4;
      if ((plVar15 != (long *)0x0) &&
         ((float)(*(long *)(pcStack_3d8 + 0x20) + 1) <= (float)plVar15 * fVar27)) goto LAB_0a203255;
      uVar16 = 1;
      if ((long *)0x2 < plVar15) {
        uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
      }
      pcVar7 = (code *)(uVar16 | (long)plVar15 * 2);
      fVar27 = (float)func_0x0eee3ab0((float)(*(long *)(pcStack_3d8 + 0x20) + 1) / fVar27);
      pcVar24 = pcStack_2a0;
      pcVar20 = (code *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27);
      if (pcVar20 < pcVar7) {
        pcVar20 = pcVar7;
      }
      unaff_R12 = (code *)0x2;
      if ((pcVar20 == (code *)0x1) ||
         (unaff_R12 = pcVar20, ((ulong)pcVar20 & (ulong)(pcVar20 + -1)) == 0)) {
        pcVar20 = *(code **)(pcStack_3d8 + 0x10);
        bVar26 = unaff_R12 < pcVar20;
        param_2 = unaff_R12;
        if (unaff_R12 <= pcVar20) goto LAB_0a2030cc;
      }
      else {
        unaff_R12 = (code *)func_0x0412c3f0();
        pcVar20 = *(code **)(pcStack_3d8 + 0x10);
        bVar26 = unaff_R12 < pcVar20;
        param_2 = unaff_R12;
        if (unaff_R12 <= pcVar20) {
LAB_0a2030cc:
          if (!bVar26) goto LAB_0a20322e;
          fVar27 = (float)func_0x0eee3ab0((float)*(ulong *)(pcStack_3d8 + 0x20) /
                                          *(float *)(pcStack_3d8 + 0x28));
          unaff_R12 = (code *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27)
          ;
          if ((pcVar20 < (code *)0x3) ||
             (uVar16 = (long)pcVar20 - ((ulong)pcVar20 >> 1 & 0x5555555555555555),
             uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
             1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            unaff_R12 = (code *)func_0x0412c3f0(unaff_R12);
          }
          else if ((code *)0x1 < unaff_R12) {
            lVar12 = 0x3f;
            if (unaff_R12 + -1 != (code *)0x0) {
              for (; (ulong)(unaff_R12 + -1) >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            unaff_R12 = (code *)(1L << (-((byte)lVar12 ^ 0x3f) & 0x3f));
          }
          if (unaff_R12 < param_2) {
            unaff_R12 = param_2;
          }
          if (pcVar20 <= unaff_R12) goto LAB_0a20322e;
          if (unaff_R12 == (code *)0x0) {
            lVar12 = *(long *)pcStack_300;
            *(long *)pcStack_300 = 0;
            if (lVar12 != 0) {
              func_0x0412a280(lVar12,*(long *)(pcStack_3d8 + 0x10) << 3);
            }
            *(long *)(pcStack_3d8 + 0x10) = 0;
            goto LAB_0a20322e;
          }
        }
      }
      if ((ulong)unaff_R12 >> 0x3d != 0) {
        do {
          func_0x04882eb0();
LAB_0a203c50:
          iVar6 = func_0x04108328(&DAT_0f658638);
          if (iVar6 != 0) {
            func_0x0a216c90();
            func_0x0410844d(&DAT_0f658638);
          }
LAB_0a202124:
          uStack_2f8 = unaff_R12 + 0x18;
          *(long *)(unaff_R12 + 0x40) = 0;
          *(long *)(unaff_R12 + 0x48) = 0;
          *(long *)(unaff_R12 + 0x30) = 0;
          *(long *)(unaff_R12 + 0x38) = 0;
          *(long *)(unaff_R12 + 0x20) = 0;
          *(long *)(unaff_R12 + 0x28) = 0;
          *(undefined **)(unaff_R12 + 0x50) = &DAT_0f658620;
          unaff_R12[0x58] = (code)0x1;
          *(long *)(unaff_R12 + 0x60) = 0xffffffff;
          *(undefined **)(unaff_R12 + 0x18) = &UNK_0f20ef80;
          *(long *)(unaff_R12 + 0x68) = 0;
          *(long *)(unaff_R12 + 0x70) = 0;
          *(long *)(unaff_R12 + 0x78) = 0;
          uStack_2f0 = unaff_R12;
          func_0x065bf170(plStack_2b8,&uStack_1b0,&uStack_2f8);
          uStack_3b8 = (code *)&UNK_065bf690;
          uStack_3b0 = (code *)0x0;
          uStack_3a8 = (code *)CONCAT35(uStack_3a8._5_3_,0x3145ad657);
          uStack_3c8 = (undefined8 *******)pcVar20;
          (**(code **)(*(long *)uStack_2f8 + 0x28))(uStack_2f8,&uStack_3c8);
          if (uStack_3b0 != (code *)0x0) {
            (*uStack_3b0)(&uStack_3c8);
          }
          pcVar20 = uStack_2f0;
          pcVar7 = uStack_2f8;
          if (uStack_2f0 != (code *)0x0) {
            LOCK();
            pcVar1 = uStack_2f0 + 8;
            lVar12 = *(long *)pcVar1;
            *(long *)pcVar1 = *(long *)pcVar1 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*(long *)uStack_2f0 + 0x10))(uStack_2f0);
              func_0x0412c2d0(pcVar20);
            }
          }
LAB_0a202245:
          auVar28 = func_0x0d8547a0(pcVar7,pcVar24,0,0);
          lStack_150 = auVar28._8_8_;
          uStack_140 = auVar28._0_8_;
          lStack_158 = lStack_150 + -1;
          pcStack_148 = pcVar7;
          puVar9 = (undefined8 *)func_0x0a256090(pcVar7);
          if (pcVar19 == (code *)0x0) {
            *puVar9 = 0;
            *(undefined4 *)(puVar9 + 1) = 0;
            puVar9[2] = 0xffffffffffffff;
            *(undefined1 *)(puVar9 + 3) = 0;
            puVar9[4] = param_4;
            puVar9[5] = 0;
          }
          else {
            LOCK();
            *(long *)(pcVar19 + 8) = *(long *)(pcVar19 + 8) + 1;
            UNLOCK();
            *puVar9 = 0;
            *(undefined4 *)(puVar9 + 1) = 0;
            puVar9[2] = 0xffffffffffffff;
            *(undefined1 *)(puVar9 + 3) = 0;
            puVar9[4] = param_4;
            puVar9[5] = pcVar19;
            LOCK();
            *(long *)(pcVar19 + 8) = *(long *)(pcVar19 + 8) + 1;
            UNLOCK();
          }
          puStack_210 = puVar9 + 5;
          puVar10 = *(undefined8 **)pcStack_3d8;
          puVar9[6] = puVar10;
          iVar6 = *(int *)(pcStack_3d8 + 8);
          *(int *)(puVar9 + 7) = iVar6;
          plVar18 = _DAT_0f658210;
          if ((puVar10 == (undefined8 *)0x0) ||
             (pcVar20 = (code *)*puVar10, pcVar20 == (code *)0x0 || *(int *)(puVar10 + 1) != iVar6))
          {
            puVar9[8] = _DAT_0f658210;
            iVar6 = _DAT_0f658218;
            *(int *)(puVar9 + 9) = _DAT_0f658218;
            uVar5 = uRam000000000f65822c;
            uVar4 = uRam000000000f658228;
            uVar14 = uRam000000000f658224;
            *(undefined4 *)(puVar9 + 10) = _DAT_0f658220;
            *(undefined4 *)((long)puVar9 + 0x54) = uVar14;
            *(undefined4 *)(puVar9 + 0xb) = uVar4;
            *(undefined4 *)((long)puVar9 + 0x5c) = uVar5;
            if ((plVar18 != (long *)0x0) && (*plVar18 != 0 && (int)plVar18[1] == iVar6)) {
              func_0x0d8568b0(*plVar18,puVar9[10]);
            }
          }
          else {
            uStack_2f0 = pcVar20 + 0x10;
            uStack_3c8 = (undefined8 *******)((ulong)uStack_3c8 & 0xffffffffffff0000);
            uStack_3c0 = (code *)&UNK_0a24ad10;
            uStack_3b8 = (code *)&UNK_0a24af00;
            plStack_388 = (long *)0x0;
            plStack_378 = (long *)0x0;
            uStack_370 = 0x100000028;
            pcStack_368 = (code *)0x0;
            uStack_2f8 = (code *)&UNK_0f20e870;
            uStack_2d8 = (code *)&uStack_2f8;
            func_0x065bdd40(&uStack_2f8,&uStack_3a8);
            if (uStack_2d8 == (code *)&uStack_2f8) {
              lVar12 = 0x20;
LAB_0a20243e:
              (**(code **)(*(long *)uStack_2d8 + lVar12))();
            }
            else {
              lVar12 = 0x28;
              if (uStack_2d8 != (code *)0x0) goto LAB_0a20243e;
            }
            plStack_2b8 = (long *)func_0x0d856c70(pcVar20,&uStack_3c8);
            pcVar7 = pcStack_368;
            pcStack_368 = (code *)0x0;
            if (pcVar7 != (code *)0x0) {
              (**(code **)(*(long *)pcVar7 + 8))();
            }
            if (plStack_388 == &uStack_3a8) {
              lVar12 = 0x20;
LAB_0a20249c:
              (**(code **)(*plStack_388 + lVar12))();
            }
            else {
              lVar12 = 0x28;
              if (plStack_388 != (long *)0x0) goto LAB_0a20249c;
            }
            if ((int)plStack_2b8 != -1) {
              uStack_1b0 = CONCAT44(uStack_1b0._4_4_,0x41be2550);
              plVar18 = (long *)(*(long *)(pcVar20 + 0x70) +
                                (ulong)((int)((ulong)(*(long *)(pcVar20 + 0x78) -
                                                     *(long *)(pcVar20 + 0x70)) >> 3) - 1U &
                                       0x41be2550) * 8);
              do {
                if (*plVar18 == -1) {
                  plVar18 = *(long **)(pcVar20 + 0x90);
                  plVar15 = plVar18;
                  goto LAB_0a20252e;
                }
                lVar12 = *plVar18 * 0x20;
                plVar18 = (long *)(*(long *)(pcVar20 + 0x88) + lVar12);
              } while (*(int *)(*(long *)(pcVar20 + 0x88) + 8 + lVar12) != 0x41be2550);
              plVar15 = *(long **)(pcVar20 + 0x90);
LAB_0a20252e:
              pcStack_228 = pcVar20;
              if (plVar18 == plVar15) {
                pcStack_230 = pcVar20 + 0x38;
                pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                if (pcVar7 == (code *)0x0) {
                  FUN_0eec74c0(0x80,0);
                }
                *(long *)(pcVar7 + 8) = 0;
                *(long *)(pcVar7 + 0x10) = 0;
                *(undefined **)pcVar7 = &UNK_0f20e8f0;
                if ((DAT_0f654820 == '\0') && (iVar6 = func_0x04108328(&DAT_0f654820), iVar6 != 0))
                {
                  func_0x0a174670(0xf654808);
                  func_0x0410844d(&DAT_0f654820);
                }
                uStack_2f8 = pcVar7 + 0x18;
                *(long *)(pcVar7 + 0x40) = 0;
                *(long *)(pcVar7 + 0x48) = 0;
                *(long *)(pcVar7 + 0x30) = 0;
                *(long *)(pcVar7 + 0x38) = 0;
                *(long *)(pcVar7 + 0x20) = 0;
                *(long *)(pcVar7 + 0x28) = 0;
                *(long *)(pcVar7 + 0x50) = 0xf654808;
                pcVar7[0x58] = (code)0x1;
                *(long *)(pcVar7 + 0x60) = 0xffffffff;
                *(undefined **)(pcVar7 + 0x18) = &UNK_0f20e940;
                *(long *)(pcVar7 + 0x68) = 0;
                *(long *)(pcVar7 + 0x70) = 0;
                *(long *)(pcVar7 + 0x78) = 0;
                uStack_2f0 = pcVar7;
                func_0x065bf170(pcVar20 + 0x70,&uStack_1b0,&uStack_2f8);
                uStack_3b8 = (code *)&UNK_065bf690;
                uStack_3b0 = (code *)0x0;
                uStack_3a8 = (code *)CONCAT35(uStack_3a8._5_3_,0x3145ad657);
                uStack_3c8 = (undefined8 *******)pcStack_230;
                (**(code **)(*(long *)uStack_2f8 + 0x28))(uStack_2f8,&uStack_3c8);
                if (uStack_3b0 != (code *)0x0) {
                  (*uStack_3b0)(&uStack_3c8);
                }
                pcVar7 = uStack_2f0;
                pcVar20 = uStack_2f8;
                if (uStack_2f0 != (code *)0x0) {
                  LOCK();
                  pcVar1 = uStack_2f0 + 8;
                  lVar12 = *(long *)pcVar1;
                  *(long *)pcVar1 = *(long *)pcVar1 + -1;
                  UNLOCK();
                  if (lVar12 == 0) {
                    (**(code **)(*(long *)uStack_2f0 + 0x10))(uStack_2f0);
                    func_0x0412c2d0(pcVar7);
                  }
                }
              }
              else {
                pcVar20 = (code *)plVar18[2];
              }
              auVar28 = func_0x0d8547a0(pcVar20,plStack_2b8,0,0);
              lStack_160 = auVar28._8_8_;
              pcStack_230 = auVar28._0_8_;
              lStack_168 = lStack_160 + -1;
              pcStack_170 = pcVar20;
              puVar10 = (undefined8 *)func_0x0a24d180(pcVar20);
              *puVar10 = 0;
              *(undefined4 *)(puVar10 + 1) = 0;
              puVar10[2] = 0xffffffffffffff;
              *(undefined1 *)(puVar10 + 3) = 0;
              func_0x0a11aed0();
              func_0x0a806780(&uStack_3c8,&DAT_0f653a88,pcStack_3d8);
              puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
              if (puVar11 == (undefined4 *)0x0) {
                FUN_0eec74c0(0x18,0);
              }
              *puVar11 = (undefined4)uStack_3c8;
              puVar11[1] = uStack_3c8._4_4_;
              puVar11[2] = (int)uStack_3c0;
              puVar11[3] = uStack_3c0._4_4_;
              *(code **)(puVar11 + 4) = uStack_3b8;
              puVar10[4] = puVar11;
              pcVar20 = pcStack_228;
            }
            lVar12 = *(long *)(pcVar20 + 8);
            if (lVar12 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(undefined4 *)(lVar12 + 8);
            }
            plVar18 = (long *)(*(long *)(pcVar20 + 0x70) +
                              (ulong)((int)((ulong)(*(long *)(pcVar20 + 0x78) -
                                                   *(long *)(pcVar20 + 0x70)) >> 3) - 1U &
                                     0x41be2550) * 8);
            do {
              if (*plVar18 == -1) {
                plVar18 = *(long **)(pcVar20 + 0x90);
                break;
              }
              lVar13 = *plVar18 * 0x20;
              plVar18 = (long *)(*(long *)(pcVar20 + 0x88) + lVar13);
            } while (*(int *)(*(long *)(pcVar20 + 0x88) + 8 + lVar13) != 0x41be2550);
            uVar16 = *(ulong *)(*(long *)(*(long *)(plVar18[2] + 8) +
                                         ((ulong)plStack_2b8 >> 0xc & 0xfffff) * 8) +
                               (ulong)((uint)plStack_2b8 & 0xfff) * 8);
            lVar13 = *(long *)(*(long *)(plVar18[2] + 0x50) + (uVar16 >> 7 & 0x1ffffff) * 8);
            uVar16 = (ulong)((uint)uVar16 & 0x7f);
            *(long *)(lVar13 + uVar16 * 0x28) = lVar12;
            *(undefined4 *)(lVar13 + 8 + uVar16 * 0x28) = uVar14;
            *(long **)(lVar13 + 0x10 + uVar16 * 0x28) = plStack_2b8;
            *(undefined1 *)(lVar13 + 0x18 + uVar16 * 0x28) = extraout_DL;
            lVar12 = *(long *)(pcVar20 + 8);
            if (lVar12 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(undefined4 *)(lVar12 + 8);
            }
            puVar9[8] = lVar12;
            *(undefined4 *)(puVar9 + 9) = uVar14;
            puVar9[10] = plStack_2b8;
            *(undefined1 *)(puVar9 + 0xb) = extraout_DL;
          }
          puVar9[0xc] = *(undefined8 *)(param_2 + 0x7c);
          puVar9[0xd] = *(long *)(param_2 + 0x90);
          unaff_R12 = (code *)((ulong)plStack_220 & 0xff);
          if (pcVar19 != (code *)0x0) {
            LOCK();
            lVar12 = *(long *)pcStack_2b0;
            *(long *)pcStack_2b0 = *(long *)pcStack_2b0 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*(long *)pcVar19 + 0x10))(pcVar19);
              func_0x0412c2d0(pcVar19);
              pcVar20 = pcVar19;
            }
          }
LAB_0a202732:
          lVar12 = plVar25[1];
          if (lVar12 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)(lVar12 + 8);
          }
          plVar18 = (long *)(plVar25[0xe] +
                            (ulong)((int)((ulong)(plVar25[0xf] - plVar25[0xe]) >> 3) - 1U &
                                   0xed041e09) * 8);
          do {
            if (*plVar18 == -1) {
              plVar18 = (long *)plVar25[0x12];
              break;
            }
            lVar13 = *plVar18 * 0x20;
            plVar18 = (long *)(plVar25[0x11] + lVar13);
          } while (*(int *)(plVar25[0x11] + 8 + lVar13) != -0x12fbe1f7);
          uVar16 = *(ulong *)(*(long *)(*(long *)(plVar18[2] + 8) +
                                       ((ulong)pcVar24 >> 0xc & 0xfffff) * 8) +
                             (ulong)((uint)pcVar24 & 0xfff) * 8);
          lVar13 = *(long *)(*(long *)(plVar18[2] + 0x50) + (uVar16 >> 7 & 0x1ffffff) * 8);
          lVar21 = (ulong)((uint)uVar16 & 0x7f) * 0x70;
          *(long *)(lVar13 + lVar21) = lVar12;
          *(undefined4 *)(lVar13 + 8 + lVar21) = uVar14;
          *(code **)(lVar13 + 0x10 + lVar21) = pcVar24;
          *(char *)(lVar13 + 0x18 + lVar21) = (char)unaff_R12;
          param_5 = (long *)plVar25[1];
          if (param_5 == (long *)0x0) {
            param_4 = (code *)0x0;
          }
          else {
            param_4 = (code *)(ulong)*(uint *)(param_5 + 1);
          }
          uStack_290 = (uint)param_4;
          uStack_280 = CONCAT31(uStack_280._1_3_,(char)unaff_R12);
          puVar9 = *(undefined8 **)(param_2 + 0x30);
          puVar10 = *(undefined8 **)(param_2 + 0x38);
          plStack_298 = param_5;
          uStack_288 = pcVar24;
          if (puVar9 < puVar10) goto LAB_0a201f7f;
LAB_0a20281d:
          pcVar24 = (code *)((long)puVar9 - *(long *)(param_2 + 0x28));
          pcVar7 = (code *)(((long)pcVar24 >> 5) + 1);
          if ((ulong)pcVar7 >> 0x3b == 0) {
            uVar16 = (long)puVar10 - *(long *)(param_2 + 0x28);
            unaff_R12 = (code *)((long)uVar16 >> 4);
            if (unaff_R12 <= pcVar7) {
              unaff_R12 = pcVar7;
            }
            pcStack_3d8 = param_2 + 0x28;
            if (0x7fffffffffffffdf < uVar16) {
              unaff_R12 = (code *)0x7ffffffffffffff;
            }
            uStack_3a8 = pcStack_3d8;
            if (unaff_R12 == (code *)0x0) {
              pcVar7 = (code *)0x0;
              goto LAB_0a2028b3;
            }
            plVar25 = param_5;
            if (unaff_R12 < (code *)0x800000000000000) goto code_r0x0a202883;
          }
          else {
            func_0x0a21b8e0();
LAB_0a203c41:
            func_0x0a217ab0();
            plVar25 = param_5;
          }
          func_0x04882eb0();
        } while( true );
      }
      lVar12 = (long)unaff_R12 * 8;
      lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
      if (lVar13 == 0) {
        FUN_0eec74c0(lVar12,0);
      }
      lVar21 = *(long *)pcStack_300;
      *(long *)pcStack_300 = lVar13;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,*(long *)(pcStack_3d8 + 0x10) << 3);
        lVar13 = *(long *)(pcStack_3d8 + 8);
      }
      *(code **)(pcStack_3d8 + 0x10) = unaff_R12;
      func_0x0eee2dd0(lVar13,0,lVar12);
      plVar18 = *(long **)(pcStack_3d8 + 0x18);
      pcVar24 = pcStack_2a0;
      if (plVar18 != (long *)0x0) {
        pcVar7 = (code *)plVar18[1];
        pcVar20 = unaff_R12 + -1;
        if (((ulong)unaff_R12 & (ulong)pcVar20) == 0) {
          *(code **)(lVar13 + ((ulong)pcVar7 & (ulong)pcVar20) * 8) = pcStack_3d8 + 0x18;
          uVar16 = (ulong)pcVar7 & (ulong)pcVar20;
          while (plVar15 = plVar18, plVar18 = (long *)*plVar15, plVar18 != (long *)0x0) {
            uVar22 = plVar18[1] & (ulong)pcVar20;
            if (uVar22 != uVar16) {
              if (*(long *)(lVar13 + uVar22 * 8) == 0) {
                *(long **)(lVar13 + uVar22 * 8) = plVar15;
                uVar16 = uVar22;
              }
              else {
                *plVar15 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar13 + uVar22 * 8);
                **(long **)(lVar13 + uVar22 * 8) = (long)plVar18;
                plVar18 = plVar15;
              }
            }
          }
        }
        else {
          if (unaff_R12 <= pcVar7) {
            if (((ulong)pcVar7 | (ulong)unaff_R12) >> 0x20 == 0) {
              pcVar7 = (code *)(((ulong)pcVar7 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff));
            }
            else {
              pcVar7 = (code *)((ulong)pcVar7 % (ulong)unaff_R12);
            }
          }
          *(code **)(lVar13 + (long)pcVar7 * 8) = pcStack_3d8 + 0x18;
          plVar15 = (long *)*plVar18;
          while (plVar15 != (long *)0x0) {
            pcVar20 = (code *)plVar15[1];
            if (unaff_R12 <= pcVar20) {
              if (((ulong)pcVar20 | (ulong)unaff_R12) >> 0x20 == 0) {
                pcVar20 = (code *)(((ulong)pcVar20 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff));
              }
              else {
                pcVar20 = (code *)((ulong)pcVar20 % (ulong)unaff_R12);
              }
            }
            if (pcVar20 != pcVar7) {
              if (*(long *)(lVar13 + (long)pcVar20 * 8) == 0) {
                *(long **)(lVar13 + (long)pcVar20 * 8) = plVar18;
                pcVar7 = pcVar20;
              }
              else {
                *plVar18 = *plVar15;
                *plVar15 = **(long **)(lVar13 + (long)pcVar20 * 8);
                **(undefined8 **)(lVar13 + (long)pcVar20 * 8) = plVar15;
                plVar15 = plVar18;
              }
            }
            plVar18 = plVar15;
            plVar15 = (long *)*plVar18;
          }
        }
      }
LAB_0a20322e:
      plVar15 = *(long **)(pcStack_3d8 + 0x10);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar18 = (long *)((ulong)plVar25 & (long)plVar15 - 1U);
      }
      else {
        plVar18 = plVar25;
        if (plVar15 <= plVar25) {
          plVar18 = (long *)((ulong)plVar25 % (ulong)plVar15);
        }
      }
LAB_0a203255:
      lVar12 = *(long *)pcStack_300;
      plVar25 = *(long **)(lVar12 + (long)plVar18 * 8);
      if (plVar25 == (long *)0x0) {
        *(long *)param_4 = *(long *)(pcStack_3d8 + 0x18);
        *(code **)(pcStack_3d8 + 0x18) = param_4;
        *(code **)(lVar12 + (long)plVar18 * 8) = pcStack_3d8 + 0x18;
        if (*(long *)param_4 != 0) {
          plVar25 = *(long **)(*(long *)param_4 + 8);
          if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
            *(code **)(lVar12 + ((ulong)plVar25 & (long)plVar15 - 1U) * 8) = param_4;
          }
          else {
            if (plVar15 <= plVar25) {
              if (((ulong)plVar25 | (ulong)plVar15) >> 0x20 == 0) {
                *(code **)(lVar12 + (((ulong)plVar25 & 0xffffffff) % ((ulong)plVar15 & 0xffffffff))
                                    * 8) = param_4;
                goto LAB_0a203277;
              }
              plVar25 = (long *)((ulong)plVar25 % (ulong)plVar15);
            }
            *(code **)(lVar12 + (long)plVar25 * 8) = param_4;
          }
        }
      }
      else {
        *(long *)param_4 = *plVar25;
        *plVar25 = (long)param_4;
      }
LAB_0a203277:
      *(long *)(pcStack_3d8 + 0x20) = *(long *)(pcStack_3d8 + 0x20) + 1;
LAB_0a203283:
      pcVar20 = pcStack_2b0;
      if ((uStack_358 & 1) != 0) {
        func_0x0412a280(lStack_348,uStack_358 & 0xfffffffffffffffe);
      }
      plVar25 = plStack_220;
      if (plStack_378 != (long *)0x0) {
        if (*plStack_378 != 0 && (int)plStack_378[1] == (int)uStack_370) {
          func_0x0d8569b0(*plStack_378,pcStack_368,uStack_360);
        }
      }
      uStack_3c8 = (undefined8 *******)&UNK_0f040e20;
      if ((cStack_380 == '\x01') && (plStack_3a0 != (long *)0x0)) {
        if (*plStack_3a0 != 0 && (int)plStack_3a0[1] == (int)uStack_398) {
          func_0x0d8569b0(*plStack_3a0,uStack_390,(ulong)plStack_388 & 0xffffffff);
        }
      }
      if (pcVar19 != (code *)0x0) {
        LOCK();
        *(long *)pcVar20 = *(long *)pcVar20 + 1;
        UNLOCK();
      }
      func_0x0d789dc0(&uStack_1e8,pcVar24,pcStack_218,&uStack_1b0);
      uStack_2f8 = (code *)&UNK_012e27bf;
      uStack_2f0 = (code *)0x149;
      pcStack_2e8 = _DAT_0f778528;
      pcStack_2e0 = (code *)0xffffffff00000001;
      uStack_2d8 = (code *)((ulong)uStack_2d8 & 0xffffffffffffff00);
      plStack_2d0 = (long *)0x0;
      uStack_188 = (undefined4)uStack_1e8;
      uStack_184 = uStack_1e8._4_4_;
      uStack_180 = (undefined4)uStack_1e0;
      uStack_17c = uStack_1e0._4_4_;
      uStack_1e8 = 0;
      uStack_1e0 = (long *)0x0;
      if (pcVar19 != (code *)0x0) {
        LOCK();
        *(long *)pcVar20 = *(long *)pcVar20 + 1;
        UNLOCK();
      }
      uStack_128 = 0;
      plStack_120 = (long *)0x0;
      uStack_3c8 = (undefined8 *******)&UNK_0f20c3b8;
      uStack_3c0 = pcStack_3d8;
      uStack_3b8 = pcVar24;
      uStack_3b0 = pcVar19;
      func_0x0a213420(&plStack_1d0,plVar25,&uStack_2f8,&uStack_188,0,&uStack_3c8);
      if (uStack_3c8 != (undefined8 *******)0x0) {
        (*(code *)uStack_3c8[1])(&uStack_3c8);
      }
      plVar18 = (long *)CONCAT44(uStack_17c,uStack_180);
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar15 = plVar18 + 1;
        lVar12 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
      plStack_138 = plStack_1d0;
      plStack_130 = plStack_1c8;
      if (plStack_1c8 != (long *)0x0) {
        LOCK();
        plStack_1c8[1] = plStack_1c8[1] + 1;
        UNLOCK();
      }
      iVar6 = (int)plVar25[0x10];
      if (iVar6 != 1) {
        if (iVar6 == 3) {
          *(undefined4 *)(plStack_1d0 + 6) = 0;
        }
        else if (iVar6 == 2) {
          (**(code **)(*plStack_1d0 + 0x10))();
          goto LAB_0a20354c;
        }
        plStack_1c0 = plStack_1d0;
        plStack_1b8 = plStack_1c8;
        if (plStack_1c8 != (long *)0x0) {
          LOCK();
          plStack_1c8[1] = plStack_1c8[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar25 + 0x28))(plVar25,&plStack_1c0,0);
        plVar25 = plStack_1b8;
        if (plStack_1b8 != (long *)0x0) {
          LOCK();
          plVar18 = plStack_1b8 + 1;
          lVar12 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
            func_0x0412c2d0(plVar25);
          }
        }
      }
LAB_0a20354c:
      plVar25 = plStack_130;
      if (plStack_130 != (long *)0x0) {
        LOCK();
        plVar18 = plStack_130 + 1;
        lVar12 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_130 + 0x10))(plStack_130);
          func_0x0412c2d0(plVar25);
        }
      }
      plVar25 = plStack_120;
      if (plStack_120 != (long *)0x0) {
        LOCK();
        plVar18 = plStack_120 + 1;
        lVar12 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_120 + 0x10))(plStack_120);
          func_0x0412c2d0(plVar25);
        }
      }
      plVar25 = uStack_1e0;
      if (uStack_1e0 != (long *)0x0) {
        LOCK();
        plVar18 = uStack_1e0 + 1;
        lVar12 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*uStack_1e0 + 0x10))(uStack_1e0);
          func_0x0412c2d0(plVar25);
        }
      }
      if (pcVar19 != (code *)0x0) {
        LOCK();
        lVar12 = *(long *)pcVar20;
        *(long *)pcVar20 = *(long *)pcVar20 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcVar19 + 0x10))(pcVar19);
          func_0x0412c2d0(pcVar19);
        }
      }
      lVar12 = uStack_1b0;
      puVar9 = puStack_1a0;
      if (plStack_1c8 != (long *)0x0) {
        LOCK();
        plVar25 = plStack_1c8 + 1;
        lVar13 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          func_0x0412c2d0(plStack_1c8);
          lVar12 = uStack_1b0;
          puVar9 = puStack_1a0;
        }
      }
      while (puVar9 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar9;
        uStack_1b0 = lVar12;
        if ((*(byte *)(puVar9 + 5) & 1) != 0) {
          func_0x0412a280(puVar9[7],puVar9[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar9 + 2) & 1) != 0) {
          func_0x0412a280(puVar9[4],puVar9[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar9,0x40);
        lVar12 = uStack_1b0;
        puVar9 = puVar10;
      }
      uStack_1b0 = 0;
      if (lVar12 != 0) {
        func_0x0412a280(lVar12,lStack_1a8 << 3);
      }
      lVar12 = lStack_110;
      puVar9 = puStack_100;
      if (pcVar19 != (code *)0x0) {
        LOCK();
        lVar13 = *(long *)pcVar20;
        *(long *)pcVar20 = *(long *)pcVar20 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*(long *)pcVar19 + 0x10))(pcVar19);
          func_0x0412c2d0(pcVar19);
          lVar12 = lStack_110;
          puVar9 = puStack_100;
        }
      }
      while (puVar9 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar9;
        lStack_110 = lVar12;
        if ((*(byte *)(puVar9 + 5) & 1) != 0) {
          func_0x0412a280(puVar9[7],puVar9[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar9 + 2) & 1) != 0) {
          func_0x0412a280(puVar9[4],puVar9[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar9,0x40);
        lVar12 = lStack_110;
        puVar9 = puVar10;
      }
      lStack_110 = 0;
      if (lVar12 != 0) {
        func_0x0412a280(lVar12,lStack_108 << 3);
      }
      if (pcVar19 != (code *)0x0) {
        LOCK();
        lVar12 = *(long *)pcVar20;
        *(long *)pcVar20 = *(long *)pcVar20 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcVar19 + 0x10))(pcVar19);
          func_0x0412c2d0(pcVar19);
        }
      }
      lVar12 = lStack_e8;
      puVar9 = puStack_d8;
      if ((plStack_298 != (long *)0x0) &&
         (*plStack_298 != 0 && *(uint *)(plStack_298 + 1) == uStack_290)) {
        func_0x0d8569b0(*plStack_298,uStack_288,uStack_280);
        lVar12 = lStack_e8;
        puVar9 = puStack_d8;
      }
      while (puVar9 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar9;
        lStack_e8 = lVar12;
        if ((*(byte *)(puVar9 + 5) & 1) != 0) {
          func_0x0412a280(puVar9[7],puVar9[5] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(puVar9 + 2) & 1) != 0) {
          func_0x0412a280(puVar9[4],puVar9[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar9,0x40);
        lVar12 = lStack_e8;
        puVar9 = puVar10;
      }
      lStack_e8 = 0;
      if (lVar12 != 0) {
        func_0x0412a280(lVar12,lStack_e0 << 3);
      }
      lVar12 = lStack_208;
      if (lStack_208 != 0) {
        if (lStack_208 != lStack_200) {
          lVar13 = lStack_200;
          do {
            if ((ulong)*(uint *)(lVar13 + -8) != 0xffffffff) {
              (**(code **)(&UNK_0f20c3e0 + (ulong)*(uint *)(lVar13 + -8) * 8))
                        (&uStack_3c8,lVar13 + -0x40);
            }
            *(undefined4 *)(lVar13 + -8) = 0xffffffff;
            if ((*(byte *)(lVar13 + -0x58) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar13 + -0x48),
                              *(ulong *)(lVar13 + -0x58) & 0xfffffffffffffffe);
            }
            lVar13 = lVar13 + -0x58;
          } while (lVar13 != lVar12);
        }
        lStack_200 = lVar12;
        func_0x0412a280(lStack_208,lStack_1f8 - lStack_208);
      }
      puVar9 = puStack_2a8;
      if (pcVar19 != (code *)0x0) {
        LOCK();
        lVar12 = *(long *)pcVar20;
        *(long *)pcVar20 = *(long *)pcVar20 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcVar19 + 0x10))(pcVar19);
          func_0x0412c2d0(pcVar19);
          pcVar24 = (code *)CONCAT44(uStack_254,uStack_258);
          goto joined_r0x0a20394f;
        }
      }
      goto LAB_0a203944;
    }
    func_0x04890760();
    param_2 = (code *)0x0;
LAB_0a203b96:
    FUN_0eec74c0(0xb0,0);
    pcVar19 = pcVar24;
  }
  uStack_2f0 = (code *)(plVar25 + 2);
  uStack_3c8 = (undefined8 *******)((ulong)uStack_3c8 & 0xffffffffffff0000);
  uStack_3c0 = (code *)&UNK_0a253fc0;
  uStack_3b8 = (code *)&UNK_0a2541b0;
  plStack_388 = (long *)0x0;
  plStack_378 = (long *)0x0;
  uStack_370 = 0x100000070;
  pcStack_368 = (code *)0x0;
  uStack_2f8 = (code *)&UNK_0f20eeb0;
  pcVar20 = (code *)&uStack_2f8;
  uStack_2d8 = pcVar20;
  func_0x065bdd40(pcVar20,&uStack_3a8);
  param_4 = pcStack_2a0;
  if (uStack_2d8 == pcVar20) {
    lVar12 = 0x20;
LAB_0a201fe5:
    (**(code **)(*(long *)uStack_2d8 + lVar12))();
  }
  else {
    lVar12 = 0x28;
    if (uStack_2d8 != (code *)0x0) goto LAB_0a201fe5;
  }
  auVar28 = func_0x0d856c70(plVar25,&uStack_3c8);
  pcVar7 = pcStack_368;
  pcVar24 = auVar28._0_8_;
  unaff_R12 = (code *)(auVar28._8_8_ & 0xffffffff);
  pcStack_368 = (code *)0x0;
  if (pcVar7 != (code *)0x0) {
    (**(code **)(*(long *)pcVar7 + 8))();
  }
  if (plStack_388 == &uStack_3a8) {
    lVar12 = 0x20;
  }
  else {
    lVar12 = 0x28;
    plVar18 = plStack_2b8;
    plVar15 = plStack_220;
    if (plStack_388 == (long *)0x0) goto joined_r0x0a20203a;
  }
  (**(code **)(*plStack_388 + lVar12))();
  plVar18 = plStack_2b8;
  plVar15 = plStack_220;
joined_r0x0a20203a:
  plStack_2b8 = plVar18;
  plStack_220 = plVar15;
  if (auVar28._0_4_ == -1) goto LAB_0a202732;
  pcVar20 = (code *)(plVar25 + 7);
  uStack_1b0._4_4_ = (undefined4)((ulong)uStack_1b0 >> 0x20);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,0xed041e09);
  plStack_2b8 = plVar25 + 0xe;
  plVar8 = (long *)(plVar25[0xe] +
                   (ulong)((int)((ulong)(plVar25[0xf] - plVar25[0xe]) >> 3) - 1U & 0xed041e09) * 8);
  do {
    plStack_220._1_7_ = (undefined7)((ulong)plVar15 >> 8);
    if (*plVar8 == -1) goto LAB_0a2020d7;
    lVar12 = *plVar8 * 0x20;
    plVar8 = (long *)(plVar25[0x11] + lVar12);
  } while (*(int *)(plVar25[0x11] + 8 + lVar12) != -0x12fbe1f7);
  plStack_220 = (long *)CONCAT71(plStack_220._1_7_,(char)unaff_R12);
  if (plVar8 != (long *)plVar25[0x12]) {
    pcVar7 = (code *)plVar8[2];
    plStack_2b8 = plVar18;
    goto LAB_0a202245;
  }
LAB_0a2020d7:
  plStack_220 = (long *)CONCAT71(plStack_220._1_7_,(char)unaff_R12);
  unaff_R12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (unaff_R12 == (code *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  *(long *)(unaff_R12 + 8) = 0;
  *(long *)(unaff_R12 + 0x10) = 0;
  *(undefined **)unaff_R12 = &UNK_0f20ef30;
  if (DAT_0f658638 == '\0') goto LAB_0a203c50;
  goto LAB_0a202124;
code_r0x0a202883:
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)unaff_R12 << 5);
  if (pcVar7 == (code *)0x0) {
    FUN_0eec74c0((long)unaff_R12 << 5,0);
    pcVar7 = (code *)0x0;
  }
LAB_0a2028b3:
  pcVar20 = pcVar7 + (long)pcVar24;
  pcVar23 = pcVar7 + (long)unaff_R12 * 0x20;
  *(long **)(pcVar7 + (long)pcVar24) = param_5;
  *(int *)(pcVar7 + 8 + (long)pcVar24) = (int)param_4;
  pcVar1 = pcVar7 + 0x10 + (long)pcVar24;
  *(undefined4 *)pcVar1 = (undefined4)uStack_288;
  *(undefined4 *)(pcVar1 + 4) = uStack_288._4_4_;
  *(uint *)(pcVar1 + 8) = uStack_280;
  *(undefined4 *)(pcVar1 + 0xc) = uStack_27c;
  uStack_3c8 = (undefined8 *******)pcVar7;
  uStack_3c0 = pcVar20;
  uStack_3b8 = pcVar20;
  uStack_3b0 = pcVar23;
  if ((param_5 != (long *)0x0) && (*param_5 != 0 && (int)param_5[1] == (int)param_4)) {
    func_0x0d8568b0(*param_5,*(undefined8 *)(pcVar7 + (long)pcVar24 + 0x10));
  }
  param_5 = *(long **)(param_2 + 0x28);
  plVar25 = *(long **)(param_2 + 0x30);
  pcVar24 = pcVar20 + ((long)param_5 - (long)plVar25);
  if ((long)param_5 - (long)plVar25 != 0) {
    lVar12 = 0;
    do {
      *(undefined8 *)(pcVar24 + lVar12) = *(undefined8 *)((long)param_5 + lVar12);
      *(undefined4 *)(pcVar24 + lVar12 + 8) = *(undefined4 *)((long)param_5 + lVar12 + 8);
      puVar11 = (undefined4 *)((long)param_5 + lVar12 + 0x10);
      uVar14 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      pcVar7 = pcVar24 + lVar12 + 0x10;
      *(undefined4 *)pcVar7 = *puVar11;
      *(undefined4 *)(pcVar7 + 4) = uVar14;
      *(undefined4 *)(pcVar7 + 8) = uVar4;
      *(undefined4 *)(pcVar7 + 0xc) = uVar5;
      *(undefined8 *)((long)param_5 + lVar12) = 0;
      *(undefined4 *)((long)param_5 + lVar12 + 8) = 0;
      *(undefined8 *)((long)param_5 + lVar12 + 0x10) = 0xffffffffffffff;
      *(undefined1 *)((long)param_5 + lVar12 + 0x18) = 0;
      lVar13 = lVar12 + 0x20;
      lVar12 = lVar12 + 0x20;
    } while ((long *)((long)param_5 + lVar13) != plVar25);
    do {
      plVar18 = (long *)*param_5;
      if ((plVar18 != (long *)0x0) && (*plVar18 != 0 && (int)plVar18[1] == (int)param_5[1])) {
        func_0x0d8569b0(*plVar18,param_5[2],(int)param_5[3]);
      }
      param_5 = param_5 + 4;
    } while (param_5 != plVar25);
    param_5 = *(long **)pcStack_3d8;
  }
  param_4 = pcStack_218;
  unaff_R12 = pcStack_2b0;
  pcVar20 = pcVar20 + 0x20;
  *(code **)(param_2 + 0x28) = pcVar24;
  *(code **)(param_2 + 0x30) = pcVar20;
  lVar12 = *(long *)(param_2 + 0x38);
  *(code **)(param_2 + 0x38) = pcVar23;
  if (param_5 != (long *)0x0) {
    func_0x0412a280(param_5,lVar12 - (long)param_5);
  }
  goto LAB_0a202a0b;
}



/* ---- referenced strings ----
 * 0x129620c  WebSocketLimitExceededError
 * 0x1296217  mitExceededError
 * 0x12ae323  Maximum concurrent web socket connections exceeded.
 * 0x12ae333  nt web socket connections exceeded.
 * 0x12ae343  nnections exceeded.
 */
