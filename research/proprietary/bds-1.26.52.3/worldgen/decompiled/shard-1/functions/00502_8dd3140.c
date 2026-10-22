/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8ed3140 (ELF vaddr 0x8dd3140)
 * Label: caller-of-callee
 * Body:  [[08ed3140, 08ed53ee] [08ed544f, 08ed5477] [08ed54c1, 08ed54cb] [08ed54cf, 08ed54da] [08ed5544, 08ed5563] [08ed55d3, 08ed55eb] [08ed55f7, 08ed5612] [08ed564a, 08ed5679]]
 * Ghidra: FUN_08ed3140
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_08ed3140(long *param_1,undefined8 param_2,long *param_3,long *param_4,int param_5)

{
  undefined4 uVar1;
  long ****pppplVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *****ppppplVar13;
  ulong uVar14;
  long ****pppplVar15;
  undefined1 *puVar16;
  long lVar17;
  long *plVar18;
  byte *pbVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;
  long *******ppppppplVar29;
  long **pplVar30;
  long *****ppppplVar31;
  long ****pppplVar32;
  byte *pbVar33;
  byte bVar34;
  long **pplVar35;
  long ***ppplVar36;
  ulong uVar37;
  ulong uVar38;
  byte *pbVar39;
  long *****ppppplVar40;
  long *****ppppplVar41;
  long ****pppplVar42;
  long ******pppppplVar43;
  bool bVar44;
  float fVar45;
  long *******ppppppplStack_380;
  byte *pbStack_370;
  byte *pbStack_368;
  long *plStack_360;
  byte *pbStack_358;
  byte *pbStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  byte *pbStack_338;
  byte bStack_330;
  undefined8 uStack_328;
  int iStack_30c;
  long *plStack_308;
  long ******pppppplStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  byte *pbStack_2e8;
  code *pcStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined2 uStack_2a8;
  byte bStack_2a6;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  char cStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char cStack_268;
  undefined *puStack_260;
  long lStack_258;
  byte bStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  undefined4 uStack_240;
  long *plStack_238;
  int iStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  char cStack_218;
  long lStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  byte bStack_190;
  long lStack_188;
  undefined4 uStack_180;
  long *plStack_178;
  int iStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  char cStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long *******appppppplStack_138 [2];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  char cStack_114;
  long lStack_110;
  long lStack_108;
  code *pcStack_100;
  byte *pbStack_f8;
  long *plStack_f0;
  long lStack_e8;
  char acStack_e0 [8];
  undefined8 auStack_d8 [2];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  char cStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  byte bStack_88;
  long lStack_80;
  undefined4 uStack_78;
  long *plStack_70;
  int iStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 != 3) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x05d84ba0();
    return param_1;
  }
  appppppplStack_138[0] = (long *******)0x0;
  uStack_128 = (undefined4)param_3[2];
  uStack_124 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_120 = (undefined4)param_3[3];
  uStack_11c = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_118 = (int)param_3[4];
  cStack_114 = *(char *)((long)param_3 + 0x24);
  plStack_1f0 = param_1;
  if (cStack_114 != '\0') {
    if (cStack_114 == '\x02') {
      (*(code *)param_3[2])(5,param_3,appppppplStack_138);
    }
    else {
      appppppplStack_138[0] = (long *******)*param_3;
      *param_3 = 0;
    }
  }
  lVar17 = param_3[5];
  lStack_108 = param_3[6];
  param_3[6] = 0;
  pcStack_100 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_110 = lVar17;
  if (cStack_114 == '\x04') {
LAB_08ed322d:
    plStack_1f0[2] = (long)&UNK_0488e0b0;
    *(undefined4 *)(plStack_1f0 + 4) = 0x48b5725f;
    plStack_1f0[3] = 0;
    *(undefined1 *)((long)plStack_1f0 + 0x24) = 0;
    *plStack_1f0 = 0;
    plStack_1f0[5] = lStack_110;
    plStack_1f0[6] = 0;
    plStack_1f0[7] = 0;
    goto LAB_08ed326d;
  }
  ppppppplStack_380 = appppppplStack_138[0];
  if (cStack_114 == '\x02') {
    ppppppplStack_380 = (long *******)appppppplStack_138;
  }
  if ((iStack_118 != -0x2f2a3df7) || (ppppppplStack_380 == (long *******)0x0)) {
    if (pcStack_100 != (code *)0x0) {
      if (lStack_108 == 0) {
        (*pcStack_100)(0,appppppplStack_138,0);
      }
      ppppppplVar29 = appppppplStack_138[0];
      if (cStack_114 == '\x02') {
        ppppppplVar29 = (long *******)appppppplStack_138;
      }
      ppppppplStack_380 = (long *******)FUN_0488e200(lVar17,lStack_108,0xd0d5c209,ppppppplVar29);
      if (ppppppplStack_380 != (long *******)0x0) goto LAB_08ed3327;
    }
    goto LAB_08ed322d;
  }
LAB_08ed3327:
  if ((int)param_4[4] != -0x7f816619) {
    func_0x066c56d0(&uStack_2f8,param_4);
    lVar17 = lStack_2c0;
    if ((lStack_2c0 != 0) && ((byte)(uStack_2d8._4_1_ - 1U) < 2)) {
      func_0x048b0900(param_4,&uStack_2f8);
    }
    if (pcStack_2e0 != (code *)0x0) {
      (*pcStack_2e0)(&uStack_2f8);
    }
    if (lVar17 == 0) goto LAB_08ed322d;
  }
  pbVar33 = (byte *)(param_4 + 8);
  if ((int)param_4[0xc] != -0x6d9a1bd7) {
    func_0x08ed5800(&uStack_2f8,pbVar33);
    lVar17 = lStack_2c0;
    if ((lStack_2c0 != 0) && ((byte)(uStack_2d8._4_1_ - 1U) < 2)) {
      func_0x048b0900(pbVar33,&uStack_2f8);
    }
    if (pcStack_2e0 != (code *)0x0) {
      (*pcStack_2e0)(&uStack_2f8);
    }
    if (lVar17 == 0) goto LAB_08ed322d;
  }
  plVar26 = param_4 + 0x10;
  if ((int)param_4[0x14] != 0x465ffd35) {
    func_0x08ed5aa0(&uStack_2f8,plVar26);
    lVar17 = lStack_2c0;
    if ((lStack_2c0 != 0) && ((byte)(uStack_2d8._4_1_ - 1U) < 2)) {
      func_0x048b0900(plVar26,&uStack_2f8);
    }
    if (pcStack_2e0 != (code *)0x0) {
      (*pcStack_2e0)(&uStack_2f8);
    }
    if (lVar17 == 0) goto LAB_08ed322d;
  }
  lStack_e8 = lStack_110;
  cVar8 = *(char *)((long)param_4 + 0x24);
  plVar18 = (long *)*param_4;
  plVar11 = plVar18;
  if (cVar8 == '\x02') {
    plVar11 = param_4;
  }
  if (plVar11 == (long *)0x0 || (int)param_4[4] != -0x7f816619) {
    lVar17 = param_4[5];
    lVar20 = param_4[6];
    if (lVar20 == 0) {
      (*(code *)param_4[7])(0,param_4,0);
      lVar20 = param_4[6];
      cVar8 = *(char *)((long)param_4 + 0x24);
      plVar18 = (long *)*param_4;
    }
    if (cVar8 == '\x02') {
      plVar18 = param_4;
    }
    plVar11 = (long *)FUN_0488e200(lVar17,lVar20,0x807e99e7,plVar18);
  }
  cVar8 = *(char *)((long)param_4 + 100);
  pbVar39 = (byte *)param_4[8];
  pbStack_350 = pbVar39;
  if (cVar8 == '\x02') {
    pbStack_350 = pbVar33;
  }
  if (pbStack_350 == (byte *)0x0 || (int)param_4[0xc] != -0x6d9a1bd7) {
    lVar17 = param_4[0xd];
    lVar20 = param_4[0xe];
    if (lVar20 == 0) {
      (*(code *)param_4[0xf])(0,pbVar33,0);
      lVar20 = param_4[0xe];
      cVar8 = *(char *)((long)param_4 + 100);
      pbVar39 = (byte *)param_4[8];
    }
    if (cVar8 == '\x02') {
      pbVar39 = pbVar33;
    }
    pbStack_350 = (byte *)FUN_0488e200(lVar17,lVar20,0x9265e429,pbVar39);
  }
  cVar8 = *(char *)((long)param_4 + 0xa4);
  plVar18 = (long *)param_4[0x10];
  plVar12 = plVar18;
  if (cVar8 == '\x02') {
    plVar12 = plVar26;
  }
  if (plVar12 == (long *)0x0 || (int)param_4[0x14] != 0x465ffd35) {
    if ((code *)param_4[0x17] == (code *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
      lVar17 = param_4[0x15];
      lVar20 = param_4[0x16];
      if (lVar20 == 0) {
        (*(code *)param_4[0x17])(0,plVar26,0);
        lVar20 = param_4[0x16];
        cVar8 = *(char *)((long)param_4 + 0xa4);
        plVar18 = (long *)param_4[0x10];
      }
      if (cVar8 == '\x02') {
        plVar18 = plVar26;
      }
      plVar12 = (long *)FUN_0488e200(lVar17,lVar20,0x465ffd35,plVar18);
    }
  }
  lVar17 = plVar12[1];
  bVar34 = *(byte *)(plVar12 + 2);
  lVar20 = plVar12[3];
  uVar1 = (undefined4)plVar12[4];
  plStack_70 = (long *)((ulong)plStack_70 & 0xffffffffffffff00);
  uStack_50 = 0;
  cVar8 = (char)plVar12[9];
  lStack_90 = lVar17;
  bStack_88 = bVar34;
  lStack_80 = lVar20;
  uStack_78 = uVar1;
  if (cVar8 == '\x01') {
    plStack_70 = (long *)plVar12[5];
    iStack_30c = (int)plVar12[6];
    uStack_60 = (undefined4)plVar12[7];
    uStack_5c = *(undefined4 *)((long)plVar12 + 0x3c);
    uStack_58 = *(uint *)(plVar12 + 8);
    uStack_54 = *(undefined4 *)((long)plVar12 + 0x44);
    iStack_68 = iStack_30c;
    if ((plStack_70 != (long *)0x0) && (*plStack_70 != 0 && (int)plStack_70[1] == iStack_30c)) {
      func_0x0d8568b0(*plStack_70,plVar12[7]);
    }
    uStack_50 = 1;
  }
  pbVar33 = pbStack_350;
  lVar23 = plVar12[10];
  puStack_98 = &UNK_0f161070;
  uStack_40 = plVar12[0xb];
  uStack_38 = plVar12[0xc];
  plStack_178 = (long *)((ulong)plStack_178 & 0xffffffffffffff00);
  cStack_158 = '\0';
  plStack_308 = plVar11;
  lStack_198 = lVar17;
  bStack_190 = bVar34;
  lStack_188 = lVar20;
  uStack_180 = uVar1;
  lStack_48 = lVar23;
  if (cVar8 != '\0') {
    plStack_178 = plStack_70;
    iStack_170 = iStack_30c;
    uStack_168 = CONCAT44(uStack_5c,uStack_60);
    uStack_160 = uStack_58;
    uStack_15c = uStack_54;
    if ((plStack_70 != (long *)0x0) && (*plStack_70 != 0 && (int)plStack_70[1] == iStack_30c)) {
      func_0x0d8568b0(*plStack_70,uStack_168);
    }
    cStack_158 = '\x01';
  }
  puStack_1a0 = &UNK_0f161070;
  uStack_148 = (undefined4)uStack_40;
  uStack_144 = uStack_40._4_4_;
  uStack_140 = (undefined4)uStack_38;
  uStack_13c = uStack_38._4_4_;
  lStack_150 = lVar23;
  func_0x095e78f0(acStack_e0,pbVar33,0);
  uVar25 = auStack_d8[0];
  if (acStack_e0[0] != '\x01') {
    pppppplStack_300 = *ppppppplStack_380;
    if (*(int *)(pppppplStack_300 + 1) == 0) goto LAB_08ed3b69;
    if (*(int *)(pppppplStack_300 + 1) == 3) {
      pbVar39 = pbVar33 + 1;
      bVar44 = (*pbVar33 & 1) == 0;
      pbVar19 = *(byte **)(pbVar33 + 0x10);
      if (bVar44) {
        pbVar19 = pbVar39;
      }
      uVar14 = (ulong)(*pbVar33 >> 1);
      if (!bVar44) {
        uVar14 = *(ulong *)(pbVar33 + 8);
      }
      ppppplVar13 = (long *****)func_0x04883620(&uStack_2f8,pbVar19,uVar14);
      ppppplVar40 = pppppplStack_300[0xf];
      if (ppppplVar40 != (long *****)0x0) {
        uVar14 = (long)ppppplVar40 - ((ulong)ppppplVar40 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar14 >> 0x38 < 2) {
          ppppplVar41 = (long *****)((long)ppppplVar40 - 1U & (ulong)ppppplVar13);
        }
        else {
          ppppplVar41 = ppppplVar13;
          if (ppppplVar40 <= ppppplVar13) {
            if (((ulong)ppppplVar13 | (ulong)ppppplVar40) >> 0x20 == 0) {
              ppppplVar41 = (long *****)
                            (((ulong)ppppplVar13 & 0xffffffff) % ((ulong)ppppplVar40 & 0xffffffff));
            }
            else {
              ppppplVar41 = (long *****)((ulong)ppppplVar13 % (ulong)ppppplVar40);
            }
          }
        }
        if ((pppppplStack_300[0xe][(long)ppppplVar41] != (long ****)0x0) &&
           (ppplVar36 = *pppppplStack_300[0xe][(long)ppppplVar41], ppplVar36 != (long ***)0x0)) {
          if ((*pbVar33 & 1) == 0) {
            pplVar35 = (long **)(ulong)(*pbVar33 >> 1);
            pbVar19 = pbVar39;
          }
          else {
            pplVar35 = *(long ***)(pbVar33 + 8);
            pbVar19 = *(byte **)(pbVar33 + 0x10);
          }
          if ((byte)(uVar14 >> 0x38) < 2) {
            do {
              if (ppppplVar13 == (long *****)ppplVar36[1]) {
                bVar34 = *(byte *)(ppplVar36 + 2);
                if ((bVar34 & 1) == 0) {
                  pplVar30 = (long **)(ulong)(bVar34 >> 1);
                }
                else {
                  pplVar30 = ppplVar36[3];
                }
                if (pplVar30 == pplVar35) {
                  if ((bVar34 & 1) == 0) {
                    pplVar30 = (long **)((long)ppplVar36 + 0x11);
                  }
                  else {
                    pplVar30 = ppplVar36[4];
                  }
                  iVar10 = func_0x0eee3000(pplVar30,pbVar19,pplVar35);
                  if (iVar10 == 0) goto LAB_08ed3b51;
                }
              }
              else if ((long *****)((ulong)ppplVar36[1] & (long)ppppplVar40 - 1U) != ppppplVar41)
              break;
              ppplVar36 = (long ***)*ppplVar36;
            } while (ppplVar36 != (long ***)0x0);
          }
          else {
            do {
              ppppplVar31 = (long *****)ppplVar36[1];
              if (ppppplVar13 == ppppplVar31) {
                bVar34 = *(byte *)(ppplVar36 + 2);
                if ((bVar34 & 1) == 0) {
                  pplVar30 = (long **)(ulong)(bVar34 >> 1);
                }
                else {
                  pplVar30 = ppplVar36[3];
                }
                if (pplVar30 == pplVar35) {
                  if ((bVar34 & 1) == 0) {
                    pplVar30 = (long **)((long)ppplVar36 + 0x11);
                  }
                  else {
                    pplVar30 = ppplVar36[4];
                  }
                  iVar10 = func_0x0eee3000(pplVar30,pbVar19,pplVar35);
                  if (iVar10 == 0) goto LAB_08ed3b51;
                }
              }
              else {
                if (ppppplVar40 <= ppppplVar31) {
                  if (((ulong)ppppplVar31 | (ulong)ppppplVar40) >> 0x20 == 0) {
                    ppppplVar31 = (long *****)
                                  (((ulong)ppppplVar31 & 0xffffffff) %
                                  ((ulong)ppppplVar40 & 0xffffffff));
                  }
                  else {
                    ppppplVar31 = (long *****)((ulong)ppppplVar31 % (ulong)ppppplVar40);
                  }
                }
                if (ppppplVar31 != ppppplVar41) break;
              }
              ppplVar36 = (long ***)*ppplVar36;
            } while (ppplVar36 != (long ***)0x0);
          }
        }
      }
      goto LAB_08ed3e02;
    }
    pbStack_338 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (pbStack_338 == (byte *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    uVar25 = _UNK_011a586e;
    uStack_348 = (byte *)0x49;
    plStack_340 = (long *)0x46;
    *(undefined8 *)(pbStack_338 + 0x30) = _DAT_011a5866;
    *(undefined8 *)(pbStack_338 + 0x38) = uVar25;
    uVar25 = _UNK_011a585e;
    *(undefined8 *)(pbStack_338 + 0x20) = _DAT_011a5856;
    *(undefined8 *)(pbStack_338 + 0x28) = uVar25;
    uVar25 = _UNK_011a584e;
    *(undefined8 *)(pbStack_338 + 0x10) = _DAT_011a5846;
    *(undefined8 *)(pbStack_338 + 0x18) = uVar25;
    uVar7 = _UNK_011a5842;
    uVar6 = _UNK_011a583e;
    uVar1 = _UNK_011a583a;
    *(undefined4 *)pbStack_338 = _DAT_011a5836;
    *(undefined4 *)(pbStack_338 + 4) = uVar1;
    *(undefined4 *)(pbStack_338 + 8) = uVar6;
    *(undefined4 *)(pbStack_338 + 0xc) = uVar7;
    pbStack_338[0x3e] = 0x70;
    pbStack_338[0x3f] = 0x20;
    pbStack_338[0x40] = 0x65;
    pbStack_338[0x41] = 0x76;
    pbStack_338[0x42] = 0x65;
    pbStack_338[0x43] = 0x6e;
    pbStack_338[0x44] = 0x74;
    pbStack_338[0x45] = 0x2e;
    pbStack_338[0x46] = 0;
    func_0x0d858ce0(&uStack_2f8,&UNK_0192c3f0,&uStack_348);
    uStack_24c = 2;
    uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
    func_0x08ed1100(&uStack_1e0,&uStack_2f8);
    goto LAB_08ed3e85;
  }
  uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
  uStack_1e0 = 0;
  uStack_1d0 = (code *)CONCAT44(uStack_c4,uStack_c8);
  uStack_1c8 = (code *)CONCAT44(uStack_bc,uStack_c0);
  uStack_1c0._0_5_ = CONCAT14(cStack_b4,uStack_b8);
  if (cStack_b4 != '\0') {
    if (cStack_b4 == '\x02') {
      (*(code *)CONCAT44(uStack_c4,uStack_c8))(5,auStack_d8,&uStack_1e0);
    }
    else {
      auStack_d8[0] = 0;
      uStack_1e0 = uVar25;
    }
  }
  uStack_1a8 = uStack_a0;
  uStack_1b0 = uStack_a8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_1b8 = CONCAT44(uStack_ac,uStack_b0);
  goto LAB_08ed3eac;
LAB_08ed3b51:
  cVar9 = func_0x08e70060(pbVar33,ppplVar36[5] + 0xd);
  if (cVar9 == '\0') {
LAB_08ed3e02:
    bVar44 = (*pbVar33 & 1) != 0;
    pbStack_368 = pbVar39;
    if (bVar44) {
      pbStack_368 = *(byte **)(pbVar33 + 0x10);
    }
    plStack_360 = (long *)(ulong)(*pbVar33 >> 1);
    if (bVar44) {
      plStack_360 = *(long **)(pbVar33 + 8);
    }
    func_0x0470d9a0(&uStack_348,&UNK_01245a88,0x4e,0xd,&pbStack_368);
    func_0x0d858ce0(&uStack_2f8,&UNK_0192c3f0,&uStack_348);
    uStack_24c = 3;
    uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
    func_0x08ed1100(&uStack_1e0,&uStack_2f8);
    goto LAB_08ed3e85;
  }
LAB_08ed3b69:
  ppppplVar40 = pppppplStack_300[0xb];
  pbVar39 = pbVar33;
  if (ppppplVar40 != (long *****)0x0) {
    do {
      bVar44 = (*pbVar39 & 1) == 0;
      pbVar19 = *(byte **)(pbVar39 + 0x10);
      if (bVar44) {
        pbVar19 = pbVar33 + 1;
      }
      uVar14 = (ulong)(*pbVar39 >> 1);
      if (!bVar44) {
        uVar14 = *(ulong *)(pbVar39 + 8);
      }
      pppplVar15 = (long ****)func_0x04883620(&uStack_2f8,pbVar19,uVar14);
      pppplVar2 = ppppplVar40[0xe];
      if (pppplVar2 != (long ****)0x0) {
        uVar14 = (long)pppplVar2 - ((ulong)pppplVar2 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar14 >> 0x38 < 2) {
          pppplVar42 = (long ****)((long)pppplVar2 - 1U & (ulong)pppplVar15);
        }
        else {
          pppplVar42 = pppplVar15;
          if (pppplVar2 <= pppplVar15) {
            if (((ulong)pppplVar15 | (ulong)pppplVar2) >> 0x20 == 0) {
              pppplVar42 = (long ****)
                           (((ulong)pppplVar15 & 0xffffffff) % ((ulong)pppplVar2 & 0xffffffff));
            }
            else {
              pppplVar42 = (long ****)((ulong)pppplVar15 % (ulong)pppplVar2);
            }
          }
        }
        if ((ppppplVar40[0xd][(long)pppplVar42] != (long ***)0x0) &&
           (pplVar35 = *ppppplVar40[0xd][(long)pppplVar42], pplVar35 != (long **)0x0)) {
          if ((*pbStack_350 & 1) == 0) {
            plVar26 = (long *)(ulong)(*pbStack_350 >> 1);
            pbVar39 = pbVar33 + 1;
          }
          else {
            plVar26 = *(long **)(pbStack_350 + 8);
            pbVar39 = *(byte **)(pbStack_350 + 0x10);
          }
          if ((byte)(uVar14 >> 0x38) < 2) {
            do {
              if (pppplVar15 == (long ****)pplVar35[1]) {
                bVar34 = *(byte *)(pplVar35 + 2);
                if ((bVar34 & 1) == 0) {
                  plVar18 = (long *)(ulong)(bVar34 >> 1);
                }
                else {
                  plVar18 = pplVar35[3];
                }
                if (plVar18 == plVar26) {
                  if ((bVar34 & 1) == 0) {
                    plVar18 = (long *)((long)pplVar35 + 0x11);
                  }
                  else {
                    plVar18 = pplVar35[4];
                  }
                  iVar10 = func_0x0eee3000(plVar18,pbVar39,plVar26);
                  if (iVar10 == 0) goto LAB_08ed3d8d;
                }
              }
              else if ((long ****)((ulong)pplVar35[1] & (long)pppplVar2 - 1U) != pppplVar42) break;
              pplVar35 = (long **)*pplVar35;
            } while (pplVar35 != (long **)0x0);
          }
          else {
            do {
              pppplVar32 = (long ****)pplVar35[1];
              if (pppplVar15 == pppplVar32) {
                bVar34 = *(byte *)(pplVar35 + 2);
                if ((bVar34 & 1) == 0) {
                  plVar18 = (long *)(ulong)(bVar34 >> 1);
                }
                else {
                  plVar18 = pplVar35[3];
                }
                if (plVar18 == plVar26) {
                  if ((bVar34 & 1) == 0) {
                    plVar18 = (long *)((long)pplVar35 + 0x11);
                  }
                  else {
                    plVar18 = pplVar35[4];
                  }
                  iVar10 = func_0x0eee3000(plVar18,pbVar39,plVar26);
                  if (iVar10 == 0) goto LAB_08ed3d8d;
                }
              }
              else {
                if (pppplVar2 <= pppplVar32) {
                  if (((ulong)pppplVar32 | (ulong)pppplVar2) >> 0x20 == 0) {
                    pppplVar32 = (long ****)
                                 (((ulong)pppplVar32 & 0xffffffff) % ((ulong)pppplVar2 & 0xffffffff)
                                 );
                  }
                  else {
                    pppplVar32 = (long ****)((ulong)pppplVar32 % (ulong)pppplVar2);
                  }
                }
                if (pppplVar32 != pppplVar42) break;
              }
              pplVar35 = (long **)*pplVar35;
            } while (pplVar35 != (long **)0x0);
          }
        }
      }
      ppppplVar40 = (long *****)*ppppplVar40;
      pbVar39 = pbStack_350;
    } while (ppppplVar40 != (long *****)0x0);
  }
  uVar28 = (uint)((ulong)(*(long *)(pbVar39 + 0x40) - *(long *)(pbVar39 + 0x38)) >> 6);
  uVar27 = 0;
  if (pbVar39[0x50] != 0) {
    uVar27 = uVar28;
  }
  if (pbVar39[0x70] == 1) {
    uVar28 = uVar27 + (int)((ulong)(*(long *)(pbVar39 + 0x60) - *(long *)(pbVar39 + 0x58)) >> 6);
    if (8 < uVar28) goto LAB_08ed4157;
LAB_08ed40e7:
    pbStack_370 = pbVar39 + 1;
    bVar44 = (*pbVar39 & 1) == 0;
    pbVar33 = *(byte **)(pbVar39 + 0x10);
    if (bVar44) {
      pbVar33 = pbStack_370;
    }
    uVar14 = (ulong)(*pbVar39 >> 1);
    if (!bVar44) {
      uVar14 = *(ulong *)(pbVar39 + 8);
    }
    uVar37 = uVar14;
    if (uVar14 == 0) {
LAB_08ed4210:
      pbVar33 = (byte *)0x0;
      uVar38 = 0;
    }
    else {
      do {
        if (uVar37 == 0) goto LAB_08ed4210;
        uVar38 = uVar37 - 1;
        lVar17 = uVar37 - 1;
        uVar37 = uVar38;
      } while (pbVar33[lVar17] != 0x3a);
      if (uVar38 == 0xffffffffffffffff) goto LAB_08ed4210;
      if (uVar14 < uVar38) {
        uVar38 = uVar14;
      }
    }
    lVar17 = func_0x08e74460(pppppplStack_300,plStack_308 + 3,pbVar33,uVar38);
    pbStack_2e8 = (byte *)0x0;
    pcStack_2e0 = (code *)0x0;
    uStack_2f8 = (byte *)0x0;
    plStack_2f0 = (long *)0x0;
    uStack_2d8 = CONCAT44(uStack_2d8._4_4_,0x3f800000);
    if (pbVar39[0x50] == 1) {
      func_0x08e77b40(lVar17 + 0x18,&uStack_2f8,*(undefined8 *)(pbVar39 + 0x38),
                      *(undefined8 *)(pbVar39 + 0x40));
    }
    if (pbVar39[0x70] == 1) {
      func_0x08e77b40(lVar17 + 0x18,&uStack_2f8,*(undefined8 *)(pbVar39 + 0x58),
                      *(undefined8 *)(pbVar39 + 0x60));
    }
    pcVar5 = pcStack_2e0;
    if (pcStack_2e0 == (code *)0x0) {
      uStack_348 = (byte *)((ulong)uStack_348 & 0xffffffffffffff00);
      bStack_330 = 0;
      lVar20 = (long)uStack_2f8;
      pbVar39 = pbStack_2e8;
    }
    else {
      pbStack_368 = (byte *)0x0;
      plStack_360 = (long *)0x0;
      pbStack_358 = (byte *)0x0;
      if (pbStack_2e8 != (byte *)0x0) {
        pbVar39 = pbStack_2e8;
        do {
          bVar44 = (pbVar39[0x10] & 1) != 0;
          pbVar19 = pbVar39 + 0x11;
          if (bVar44) {
            pbVar19 = *(byte **)(pbVar39 + 0x20);
          }
          uVar14 = (ulong)(pbVar39[0x10] >> 1);
          if (bVar44) {
            uVar14 = *(ulong *)(pbVar39 + 0x18);
          }
          func_0x0412f8c0(&pbStack_368,pbVar19,uVar14);
          if (*(long *)pbVar39 == 0) break;
          func_0x0412f8c0(&pbStack_368,&UNK_0121f022,2);
          pbVar39 = *(byte **)pbVar39;
        } while (pbVar39 != (byte *)0x0);
      }
      bStack_330 = 1;
      uStack_348 = pbStack_368;
      plStack_340 = plStack_360;
      pbStack_338 = pbStack_358;
      lVar20 = (long)uStack_2f8;
      pbVar39 = pbStack_2e8;
    }
    while (pbVar39 != (byte *)0x0) {
      pbVar19 = *(byte **)pbVar39;
      uStack_2f8 = (byte *)lVar20;
      if ((pbVar39[0x10] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar39 + 0x20),
                        *(ulong *)(pbVar39 + 0x10) & 0xfffffffffffffffe);
      }
      func_0x0412a280(pbVar39,0x28);
      lVar20 = (long)uStack_2f8;
      pbVar39 = pbVar19;
    }
    uStack_2f8 = (byte *)0x0;
    if (lVar20 != 0) {
      func_0x0412a280(lVar20,(long)plStack_2f0 << 3);
    }
    if (pcVar5 == (code *)0x0) {
      func_0x08e75170(&uStack_2f8,lVar17,pbVar33,uVar38);
      pbVar33 = pbStack_350;
      if ((char)lStack_248 == '\x01') {
        uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
        func_0x08ed1100(&uStack_1e0,&uStack_2f8);
LAB_08ed44a6:
        if ((char)lStack_248 == '\x01') {
          func_0x048fb670(&uStack_2f8);
        }
        goto LAB_08ed3eac;
      }
      if (pbStack_350[0x50] == 1) {
        func_0x08e77c60(&uStack_2f8,*(undefined8 *)(pbStack_350 + 0x38),
                        *(undefined8 *)(pbStack_350 + 0x40));
        cVar9 = (char)lStack_248;
        if ((char)lStack_248 == '\0') goto LAB_08ed44ed;
LAB_08ed4514:
        if (cVar9 != '\0') {
          uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
          func_0x08ed1100(&uStack_1e0,&uStack_2f8);
          goto LAB_08ed44a6;
        }
      }
      else {
LAB_08ed44ed:
        if (pbVar33[0x70] == 1) {
          func_0x08e77c60(&uStack_2f8,*(undefined8 *)(pbVar33 + 0x58),
                          *(undefined8 *)(pbVar33 + 0x60));
          cVar9 = '\x01';
          if ((char)lStack_248 == '\x01') goto LAB_08ed4514;
        }
      }
      bVar44 = (*pbVar33 & 1) == 0;
      pbVar39 = *(byte **)(pbVar33 + 0x10);
      if (bVar44) {
        pbVar39 = pbStack_370;
      }
      plVar26 = (long *)(ulong)(*pbVar33 >> 1);
      if (!bVar44) {
        plVar26 = *(long **)(pbVar33 + 8);
      }
      if (plVar26 != (long *)0x0) {
        plVar18 = (long *)0x0;
        pbVar19 = pbVar39;
        do {
          plVar11 = plVar18;
          if (plVar26 == plVar11) goto LAB_08ed459b;
          pbVar21 = pbVar19 + -1;
          plVar18 = (long *)((long)plVar11 + 1);
          pbVar22 = pbVar19 + -1;
          pbVar19 = pbVar21;
        } while (pbVar22[(long)plVar26] != 0x3a);
        if ((long *)((long)plVar26 + 1) != plVar18) {
          if (plVar26 <= (long *)((long)plVar26 - (long)plVar18)) goto LAB_08ed53d9;
          pbVar39 = pbVar21 + (long)plVar26 + 1;
          plVar26 = plVar11;
        }
LAB_08ed459b:
        if (plVar26 < (long *)0xfffffffffffffff8) {
          if (plVar26 < (long *)0x17) {
            uStack_2f8 = (byte *)CONCAT71(uStack_2f8._1_7_,(char)plVar26 * '\x02');
            pbVar19 = (byte *)((long)&uStack_2f8 + 1);
            if (plVar26 == (long *)0x0) goto LAB_08ed45d5;
          }
          else {
            uVar14 = 0x1a;
            if (((ulong)plVar26 | 7) != 0x17) {
              uVar14 = ((ulong)plVar26 | 7) + 1;
            }
            pbVar19 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
            if (pbVar19 == (byte *)0x0) {
              func_0x0eec74c0(uVar14,0);
            }
            uStack_2f8 = (byte *)(uVar14 | 1);
            plStack_2f0 = plVar26;
            pbStack_2e8 = pbVar19;
          }
          func_0x0eee2ee0(pbVar19,pbVar39,plVar26);
          goto LAB_08ed463d;
        }
        func_0x04882e30();
LAB_08ed53d4:
        func_0x04882eb0();
LAB_08ed53d9:
        uVar25 = func_0x04882ef0(&UNK_01306d2f);
        uVar25 = func_0x04882e20(uVar25);
        if (((char)pcStack_2e0 == '\x01') && (((ulong)uStack_2f8 & 1) != 0)) {
          func_0x0412a280(pbStack_2e8,(ulong)uStack_2f8 & 0xfffffffffffffffe);
        }
        if ((bStack_330 == 1) && (((ulong)uStack_348 & 1) != 0)) {
          func_0x0412a280(pbStack_338,(ulong)uStack_348 & 0xfffffffffffffffe);
        }
        if ((code *)CONCAT44(uStack_bc,uStack_c0) != (code *)0x0) {
          (*(code *)CONCAT44(uStack_bc,uStack_c0))(auStack_d8);
        }
        func_0x0d814750(&puStack_1a0);
        func_0x0d814750(&puStack_98);
        if ((code *)CONCAT44(uStack_11c,uStack_120) != (code *)0x0) {
          (*(code *)CONCAT44(uStack_11c,uStack_120))(appppppplStack_138);
        }
        uVar25 = _Unwind_Resume(uVar25);
        uVar25 = func_0x04882e20(uVar25);
        func_0x04882e20(uVar25);
        pcVar5 = (code *)swi(3);
        plVar26 = (long *)(*pcVar5)();
        return plVar26;
      }
      uStack_2f8 = (byte *)((ulong)uStack_2f8._1_7_ << 8);
LAB_08ed45d5:
      pbVar19 = (byte *)((long)&uStack_2f8 + 1);
      plVar26 = (long *)0x0;
LAB_08ed463d:
      pbVar19[(long)plVar26] = 0;
      pppppplVar43 = pppppplStack_300 + 0x16;
      lVar20 = func_0x049216f0(pppppplVar43,&uStack_2f8);
      if (lVar20 == 0) {
        func_0x04907e30(pppppplVar43,&uStack_2f8);
        if (((ulong)uStack_2f8 & 1) == 0) {
          pbStack_338 = pbStack_2e8;
          uStack_348 = uStack_2f8;
          plStack_340 = plStack_2f0;
          bVar34 = 1;
        }
        else {
          bVar34 = 1;
          func_0x0412e5e0(&uStack_348,pbStack_2e8,plStack_2f0);
        }
      }
      else {
        pbStack_368 = pbStack_2e8;
        if (((ulong)uStack_2f8 & 1) == 0) {
          pbStack_368 = (byte *)((long)&uStack_2f8 + 1);
        }
        pbStack_f8 = pbStack_370;
        if ((*pbVar33 & 1) != 0) {
          pbStack_f8 = *(byte **)(pbVar33 + 0x10);
        }
        func_0x08e77f80(0,2,0x1c,&UNK_0144f937,&pbStack_368,&pbStack_f8);
        uStack_348 = (byte *)((ulong)uStack_348 & 0xffffffffffffff00);
        bVar34 = 0;
      }
      bStack_330 = bVar34;
      if (((ulong)uStack_2f8 & 1) != 0) {
        func_0x0412a280(pbStack_2e8,(ulong)uStack_2f8 & 0xfffffffffffffffe);
      }
      pbVar33 = pbStack_350;
      uStack_2f8 = (byte *)((ulong)uStack_2f8 & 0xffffffffffffff00);
      pcStack_2e0 = (code *)((ulong)pcStack_2e0 & 0xffffffffffffff00);
      if ((bStack_330 & 1) != 0) {
        if (((ulong)uStack_348 & 1) == 0) {
          pbStack_2e8 = pbStack_338;
          uStack_2f8 = uStack_348;
          plStack_2f0 = plStack_340;
        }
        else {
          func_0x0412e5e0(&uStack_2f8,pbStack_338,plStack_340);
        }
        pcStack_2e0 = (code *)CONCAT71(pcStack_2e0._1_7_,1);
      }
      func_0x08e75410(&uStack_2d8,pbVar33);
      lStack_258 = lStack_198;
      bStack_250 = bStack_190;
      lStack_248 = lStack_188;
      uStack_240 = uStack_180;
      lStack_188 = 0;
      uStack_180 = 0;
      lStack_198 = 0;
      bStack_190 = 0;
      plStack_238 = (long *)((ulong)plStack_238 & 0xffffffffffffff00);
      cStack_218 = cStack_158 == '\x01';
      if ((bool)cStack_218) {
        plStack_238 = plStack_178;
        iStack_230 = iStack_170;
        uStack_220 = CONCAT44(uStack_15c,uStack_160);
        uStack_228 = uStack_168;
        plStack_178 = (long *)0x0;
        iStack_170 = 0;
        uStack_168 = 0xffffffffffffff;
        uStack_160 = uStack_160 & 0xffffff00;
      }
      lStack_210 = lStack_150;
      lStack_150 = 0;
      puStack_260 = &UNK_0f161070;
      uStack_208 = uStack_148;
      uStack_204 = uStack_144;
      uStack_200 = uStack_140;
      uStack_1fc = uStack_13c;
      bVar44 = (*pbVar33 & 1) == 0;
      pbVar19 = *(byte **)(pbVar33 + 0x10);
      if (bVar44) {
        pbVar19 = pbStack_370;
      }
      uVar14 = (ulong)(*pbVar33 >> 1);
      if (!bVar44) {
        uVar14 = *(ulong *)(pbVar33 + 8);
      }
      pbVar21 = (byte *)func_0x04883620(&pbStack_368,pbVar19,uVar14);
      plStack_308 = (long *)(lVar17 + 0x40);
      pbVar19 = *(byte **)(lVar17 + 0x48);
      if (pbVar19 != (byte *)0x0) {
        uVar14 = (long)pbVar19 - ((ulong)pbVar19 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar14 >> 0x38 < 2) {
          pbVar39 = (byte *)((ulong)(pbVar19 + -1) & (ulong)pbVar21);
        }
        else {
          pbVar39 = pbVar21;
          if (pbVar19 <= pbVar21) {
            if (((ulong)pbVar21 | (ulong)pbVar19) >> 0x20 == 0) {
              pbVar39 = (byte *)(((ulong)pbVar21 & 0xffffffff) % ((ulong)pbVar19 & 0xffffffff));
            }
            else {
              pbVar39 = (byte *)((ulong)pbVar21 % (ulong)pbVar19);
            }
          }
        }
        plVar26 = *(long **)(*plStack_308 + (long)pbVar39 * 8);
        if ((plVar26 != (long *)0x0) &&
           (plVar26 = (long *)*plVar26, pbVar33 = pbStack_350, plVar26 != (long *)0x0)) {
          if ((*pbStack_350 & 1) == 0) {
            uVar37 = (ulong)(*pbStack_350 >> 1);
          }
          else {
            uVar37 = *(ulong *)(pbStack_350 + 8);
            pbStack_370 = *(byte **)(pbStack_350 + 0x10);
          }
          if ((byte)(uVar14 >> 0x38) < 2) {
            do {
              if ((byte *)plVar26[1] == pbVar21) {
                bVar34 = *(byte *)(plVar26 + 2);
                if ((bVar34 & 1) == 0) {
                  uVar14 = (ulong)(bVar34 >> 1);
                }
                else {
                  uVar14 = plVar26[3];
                }
                if (uVar14 == uVar37) {
                  if ((bVar34 & 1) == 0) {
                    lVar20 = (long)plVar26 + 0x11;
                  }
                  else {
                    lVar20 = plVar26[4];
                  }
                  iVar10 = func_0x0eee3000(lVar20,pbStack_370,uVar37);
                  if (iVar10 == 0) goto LAB_08ed51a9;
                }
              }
              else {
                pbVar33 = pbStack_350;
                if ((byte *)((ulong)plVar26[1] & (ulong)(pbVar19 + -1)) != pbVar39) break;
              }
              plVar26 = (long *)*plVar26;
              pbVar33 = pbStack_350;
            } while (plVar26 != (long *)0x0);
          }
          else {
            do {
              pbVar22 = (byte *)plVar26[1];
              if (pbVar22 == pbVar21) {
                bVar34 = *(byte *)(plVar26 + 2);
                if ((bVar34 & 1) == 0) {
                  uVar14 = (ulong)(bVar34 >> 1);
                }
                else {
                  uVar14 = plVar26[3];
                }
                if (uVar14 == uVar37) {
                  if ((bVar34 & 1) == 0) {
                    lVar20 = (long)plVar26 + 0x11;
                  }
                  else {
                    lVar20 = plVar26[4];
                  }
                  iVar10 = func_0x0eee3000(lVar20,pbStack_370,uVar37);
                  if (iVar10 == 0) goto LAB_08ed51a9;
                }
              }
              else {
                if (pbVar19 <= pbVar22) {
                  if (((ulong)pbVar22 | (ulong)pbVar19) >> 0x20 == 0) {
                    pbVar22 = (byte *)(((ulong)pbVar22 & 0xffffffff) % ((ulong)pbVar19 & 0xffffffff)
                                      );
                  }
                  else {
                    pbVar22 = (byte *)((ulong)pbVar22 % (ulong)pbVar19);
                  }
                }
                pbVar33 = pbStack_350;
                if (pbVar22 != pbVar39) break;
              }
              plVar26 = (long *)*plVar26;
              pbVar33 = pbStack_350;
            } while (plVar26 != (long *)0x0);
          }
        }
      }
      pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x128);
      if (pbVar22 == (byte *)0x0) {
        func_0x0eec74c0(0x128,0);
      }
      plStack_360 = plStack_308;
      pbStack_358 = (byte *)0x0;
      pbVar22[0] = 0;
      pbVar22[1] = 0;
      pbVar22[2] = 0;
      pbVar22[3] = 0;
      pbVar22[4] = 0;
      pbVar22[5] = 0;
      pbVar22[6] = 0;
      pbVar22[7] = 0;
      *(byte **)(pbVar22 + 8) = pbVar21;
      pbStack_368 = pbVar22;
      if ((*pbVar33 & 1) == 0) {
        *(undefined8 *)(pbVar22 + 0x20) = *(undefined8 *)(pbVar33 + 0x10);
        uVar25 = *(undefined8 *)(pbVar33 + 8);
        *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar33;
        *(undefined8 *)(pbVar22 + 0x18) = uVar25;
      }
      else {
        func_0x0412e5e0(pbVar22 + 0x10,*(undefined8 *)(pbVar33 + 0x10),*(undefined8 *)(pbVar33 + 8))
        ;
      }
      pbVar22[0x28] = 0;
      pbVar22[0x40] = 0;
      if ((char)pcStack_2e0 == '\x01') {
        *(byte **)(pbVar22 + 0x38) = pbStack_2e8;
        *(byte **)(pbVar22 + 0x28) = uStack_2f8;
        *(long **)(pbVar22 + 0x30) = plStack_2f0;
        uStack_2f8 = (byte *)0x0;
        plStack_2f0 = (long *)0x0;
        pbStack_2e8 = (byte *)0x0;
        pbVar22[0x40] = 1;
      }
      *(undefined8 *)(pbVar22 + 0x58) = uStack_2c8;
      *(undefined8 *)(pbVar22 + 0x48) = uStack_2d8;
      *(undefined8 *)(pbVar22 + 0x50) = uStack_2d0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      *(undefined8 *)(pbVar22 + 0x70) = uStack_2b0;
      *(long *)(pbVar22 + 0x60) = lStack_2c0;
      *(undefined8 *)(pbVar22 + 0x68) = uStack_2b8;
      lStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      *(undefined2 *)(pbVar22 + 0x78) = uStack_2a8;
      pbVar22[0x7a] = bStack_2a6;
      pbVar22[0x80] = 0;
      pbVar22[0x98] = 0;
      if (cStack_288 == '\x01') {
        *(undefined8 *)(pbVar22 + 0x80) = uStack_2a0;
        *(undefined8 *)(pbVar22 + 0x88) = uStack_298;
        *(undefined8 *)(pbVar22 + 0x90) = uStack_290;
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        pbVar22[0x98] = 1;
      }
      pbVar22[0xa0] = 0;
      pbVar22[0xb8] = 0;
      if (cStack_268 == '\x01') {
        *(undefined8 *)(pbVar22 + 0xa0) = uStack_280;
        *(undefined8 *)(pbVar22 + 0xa8) = uStack_278;
        *(undefined8 *)(pbVar22 + 0xb0) = uStack_270;
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        pbVar22[0xb8] = 1;
      }
      *(long *)(pbVar22 + 200) = lStack_258;
      pbVar22[0xd0] = bStack_250;
      *(long *)(pbVar22 + 0xd8) = lStack_248;
      *(undefined4 *)(pbVar22 + 0xe0) = uStack_240;
      lStack_248 = 0;
      uStack_240 = 0;
      lStack_258 = 0;
      bStack_250 = 0;
      *(undefined **)(pbVar22 + 0xc0) = &UNK_0f486b60;
      pbVar22[0xe8] = 0;
      pbVar22[0x108] = 0;
      if (cStack_218 == '\x01') {
        *(long **)(pbVar22 + 0xe8) = plStack_238;
        *(int *)(pbVar22 + 0xf0) = iStack_230;
        *(undefined8 *)(pbVar22 + 0xf8) = uStack_228;
        *(ulong *)(pbVar22 + 0x100) = uStack_220;
        plStack_238 = (long *)0x0;
        iStack_230 = 0;
        uStack_228 = 0xffffffffffffff;
        uStack_220 = uStack_220 & 0xffffffffffffff00;
        pbVar22[0x108] = 1;
      }
      *(long *)(pbVar22 + 0x110) = lStack_210;
      lStack_210 = 0;
      *(undefined **)(pbVar22 + 0xc0) = &UNK_0f161070;
      *(ulong *)(pbVar22 + 0x118) = CONCAT44(uStack_204,uStack_208);
      *(ulong *)(pbVar22 + 0x120) = CONCAT44(uStack_1fc,uStack_200);
      pbStack_358 = (byte *)CONCAT71(pbStack_358._1_7_,1);
      fVar45 = (float)(*(long *)(lVar17 + 0x58) + 1);
      if ((pbVar19 == (byte *)0x0) || ((float)pbVar19 * *(float *)(lVar17 + 0x60) < fVar45)) {
        uVar14 = 1;
        if ((byte *)0x2 < pbVar19) {
          uVar14 = (ulong)(((ulong)pbVar19 & (ulong)(pbVar19 + -1)) != 0);
        }
        uVar14 = uVar14 | (long)pbVar19 * 2;
        fVar45 = (float)func_0x0eee3ab0(fVar45 / *(float *)(lVar17 + 0x60));
        uVar37 = (long)(fVar45 - _DAT_01198778) & (long)fVar45 >> 0x3f | (long)fVar45;
        if (uVar37 < uVar14) {
          uVar37 = uVar14;
        }
        uVar14 = 2;
        if ((uVar37 != 1) && (uVar14 = uVar37, (uVar37 & uVar37 - 1) != 0)) {
          uVar14 = FUN_0412c3f0();
        }
        uVar37 = *(ulong *)(lVar17 + 0x48);
        if (uVar37 < uVar14) {
LAB_08ed4ee9:
          if (uVar14 >> 0x3d != 0) goto LAB_08ed53d4;
          lVar20 = uVar14 * 8;
          lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
          if (lVar23 == 0) {
            func_0x0eec74c0(lVar20,0);
          }
          lVar3 = *plStack_308;
          *plStack_308 = lVar23;
          if (lVar3 != 0) {
            func_0x0412a280(lVar3,*(long *)(lVar17 + 0x48) << 3);
            lVar23 = *(long *)(lVar17 + 0x40);
          }
          *(ulong *)(lVar17 + 0x48) = uVar14;
          func_0x0eee2dd0(lVar23,0,lVar20);
          plVar26 = *(long **)(lVar17 + 0x50);
          if (plVar26 != (long *)0x0) {
            uVar38 = plVar26[1];
            uVar37 = uVar14 - 1;
            if ((uVar14 & uVar37) == 0) {
              *(long *)(lVar23 + (uVar38 & uVar37) * 8) = lVar17 + 0x50;
              uVar14 = uVar38 & uVar37;
              while (plVar18 = plVar26, plVar26 = (long *)*plVar18, plVar26 != (long *)0x0) {
                uVar38 = plVar26[1] & uVar37;
                if (uVar38 != uVar14) {
                  if (*(long *)(lVar23 + uVar38 * 8) == 0) {
                    *(long **)(lVar23 + uVar38 * 8) = plVar18;
                    uVar14 = uVar38;
                  }
                  else {
                    *plVar18 = *plVar26;
                    *plVar26 = **(undefined8 **)(lVar23 + uVar38 * 8);
                    **(long **)(lVar23 + uVar38 * 8) = (long)plVar26;
                    plVar26 = plVar18;
                  }
                }
              }
            }
            else {
              if (uVar14 <= uVar38) {
                if ((uVar38 | uVar14) >> 0x20 == 0) {
                  uVar38 = (uVar38 & 0xffffffff) % (uVar14 & 0xffffffff);
                }
                else {
                  uVar38 = uVar38 % uVar14;
                }
              }
              *(long *)(lVar23 + uVar38 * 8) = lVar17 + 0x50;
              plVar18 = (long *)*plVar26;
              while (plVar18 != (long *)0x0) {
                uVar37 = plVar18[1];
                if (uVar14 <= uVar37) {
                  if ((uVar37 | uVar14) >> 0x20 == 0) {
                    uVar37 = (uVar37 & 0xffffffff) % (uVar14 & 0xffffffff);
                  }
                  else {
                    uVar37 = uVar37 % uVar14;
                  }
                }
                if (uVar37 != uVar38) {
                  if (*(long *)(lVar23 + uVar37 * 8) == 0) {
                    *(long **)(lVar23 + uVar37 * 8) = plVar26;
                    uVar38 = uVar37;
                  }
                  else {
                    *plVar26 = *plVar18;
                    *plVar18 = **(long **)(lVar23 + uVar37 * 8);
                    **(undefined8 **)(lVar23 + uVar37 * 8) = plVar18;
                    plVar18 = plVar26;
                  }
                }
                plVar26 = plVar18;
                plVar18 = (long *)*plVar26;
              }
            }
          }
        }
        else if (uVar14 < uVar37) {
          fVar45 = (float)func_0x0eee3ab0((float)*(ulong *)(lVar17 + 0x58) /
                                          *(float *)(lVar17 + 0x60));
          uVar38 = (long)(fVar45 - _DAT_01198778) & (long)fVar45 >> 0x3f | (long)fVar45;
          if ((uVar37 < 3) ||
             (uVar24 = uVar37 - (uVar37 >> 1 & 0x5555555555555555),
             uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333),
             1 < (byte)(((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar38 = FUN_0412c3f0(uVar38);
          }
          else if (1 < uVar38) {
            lVar20 = 0x3f;
            if (uVar38 - 1 != 0) {
              for (; uVar38 - 1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar38 = 1L << (-((byte)lVar20 ^ 0x3f) & 0x3f);
          }
          if (uVar38 < uVar14) {
            uVar38 = uVar14;
          }
          if (uVar38 < uVar37) {
            uVar14 = uVar38;
            if (uVar38 != 0) goto LAB_08ed4ee9;
            lVar20 = *plStack_308;
            *plStack_308 = 0;
            if (lVar20 != 0) {
              func_0x0412a280(lVar20,*(long *)(lVar17 + 0x48) << 3);
            }
            *(undefined8 *)(lVar17 + 0x48) = 0;
          }
        }
        pbVar19 = *(byte **)(lVar17 + 0x48);
        if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
          pbVar39 = (byte *)((ulong)pbVar21 & (ulong)(pbVar19 + -1));
        }
        else {
          pbVar39 = pbVar21;
          if (pbVar19 <= pbVar21) {
            if (((ulong)pbVar21 | (ulong)pbVar19) >> 0x20 == 0) {
              pbVar39 = (byte *)(((ulong)pbVar21 & 0xffffffff) % ((ulong)pbVar19 & 0xffffffff));
            }
            else {
              pbVar39 = (byte *)((ulong)pbVar21 % (ulong)pbVar19);
            }
          }
        }
      }
      lVar20 = *plStack_308;
      puVar4 = *(undefined8 **)(lVar20 + (long)pbVar39 * 8);
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined8 *)pbVar22 = *(undefined8 *)(lVar17 + 0x50);
        *(byte **)(lVar17 + 0x50) = pbVar22;
        *(long *)(lVar20 + (long)pbVar39 * 8) = lVar17 + 0x50;
        if (*(long *)pbVar22 != 0) {
          pbVar33 = *(byte **)(*(long *)pbVar22 + 8);
          if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
            *(byte **)(lVar20 + ((ulong)pbVar33 & (ulong)(pbVar19 + -1)) * 8) = pbVar22;
          }
          else {
            if (pbVar19 <= pbVar33) {
              if (((ulong)pbVar33 | (ulong)pbVar19) >> 0x20 == 0) {
                pbVar33 = (byte *)(((ulong)pbVar33 & 0xffffffff) % ((ulong)pbVar19 & 0xffffffff));
              }
              else {
                pbVar33 = (byte *)((ulong)pbVar33 % (ulong)pbVar19);
              }
            }
            *(byte **)(lVar20 + (long)pbVar33 * 8) = pbVar22;
          }
        }
      }
      else {
        *(undefined8 *)pbVar22 = *puVar4;
        *puVar4 = pbVar22;
      }
      *(long *)(lVar17 + 0x58) = *(long *)(lVar17 + 0x58) + 1;
LAB_08ed51a9:
      puStack_260 = &UNK_0f486b60;
      if (((cStack_218 == '\x01') && (plStack_238 != (long *)0x0)) &&
         (*plStack_238 != 0 && (int)plStack_238[1] == iStack_230)) {
        func_0x0d8569b0(*plStack_238,uStack_228,uStack_220 & 0xffffffff);
      }
      puStack_260 = &UNK_0f486ba0;
      func_0x08ebb530(&uStack_2d8);
      if (((char)pcStack_2e0 == '\x01') && (((ulong)uStack_2f8 & 1) != 0)) {
        func_0x0412a280(pbStack_2e8,(ulong)uStack_2f8 & 0xfffffffffffffffe);
      }
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = (code *)0x0;
      uStack_1c8 = (code *)0x0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      func_0x05d84ba0(&uStack_1e0);
    }
    else {
      pbStack_f8 = (byte *)((long)&uStack_348 + 1);
      plStack_f0 = (long *)((ulong)uStack_348 >> 1 & 0x7f);
      if (((ulong)uStack_348 & 1) != 0) {
        plStack_f0 = plStack_340;
        pbStack_f8 = pbStack_338;
      }
      func_0x0470d9a0(&pbStack_368,&UNK_011db9d5,0x39,0xd,&pbStack_f8);
      func_0x0d858ce0(&uStack_2f8,&UNK_0192c3f0,&pbStack_368);
      uStack_24c = 5;
      uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
      func_0x08ed1100(&uStack_1e0,&uStack_2f8);
      func_0x048fb670(&uStack_2f8);
      if (((ulong)pbStack_368 & 1) != 0) {
        func_0x0412a280(pbStack_358,(ulong)pbStack_368 & 0xfffffffffffffffe);
      }
    }
    pbVar33 = uStack_348;
    pbVar39 = pbStack_338;
    if (bStack_330 != 1) goto LAB_08ed3eac;
  }
  else {
    if (uVar27 < 9) goto LAB_08ed40e7;
LAB_08ed4157:
    bVar44 = (*pbVar39 & 1) != 0;
    uStack_348 = pbVar39 + 1;
    if (bVar44) {
      uStack_348 = *(byte **)(pbVar39 + 0x10);
    }
    plStack_340 = (long *)(ulong)(*pbVar39 >> 1);
    if (bVar44) {
      plStack_340 = *(long **)(pbVar39 + 8);
    }
    pbStack_338 = (byte *)CONCAT44(pbStack_338._4_4_,uVar28);
    uStack_328 = 8;
    func_0x0470d9a0(&pbStack_368,&UNK_0137e44e,0x3b,0x42d,&uStack_348);
    func_0x0d858ce0(&uStack_2f8,&UNK_0192c3f0,&pbStack_368);
    uStack_24c = 1;
    uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
    func_0x08ed1100(&uStack_1e0,&uStack_2f8);
    func_0x048fb670(&uStack_2f8);
    pbVar33 = pbStack_368;
    pbVar39 = pbStack_358;
  }
  goto joined_r0x08ed41f9;
LAB_08ed3d8d:
  pbStack_368 = pbVar39;
  plStack_360 = plVar26;
  func_0x0470d9a0(&uStack_348,&UNK_011a587d,0x2b,0xd,&pbStack_368);
  func_0x0d858ce0(&uStack_2f8,&UNK_0192c3f0,&uStack_348);
  uStack_24c = 0;
  uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
  func_0x08ed1100(&uStack_1e0,&uStack_2f8);
LAB_08ed3e85:
  func_0x048fb670(&uStack_2f8);
  pbVar33 = uStack_348;
  pbVar39 = pbStack_338;
joined_r0x08ed41f9:
  if (((ulong)pbVar33 & 1) != 0) {
    func_0x0412a280(pbVar39,(ulong)pbVar33 & 0xfffffffffffffffe);
  }
LAB_08ed3eac:
  if ((code *)CONCAT44(uStack_bc,uStack_c0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_bc,uStack_c0))(auStack_d8);
  }
  puStack_1a0 = &UNK_0f486b60;
  if (((cStack_158 == '\x01') && (plStack_178 != (long *)0x0)) &&
     (*plStack_178 != 0 && (int)plStack_178[1] == iStack_170)) {
    func_0x0d8569b0(*plStack_178,uStack_168,uStack_160);
  }
  *plStack_1f0 = 0;
  plStack_1f0[2] = (long)&UNK_08ed5eb0;
  *(undefined4 *)(plStack_1f0 + 4) = 0xd83742bc;
  plStack_1f0[3] = (long)&UNK_08ed6190;
  *(undefined1 *)((long)plStack_1f0 + 0x24) = 1;
  puVar16 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar16 == (undefined1 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar25 = uStack_1e0;
  *puVar16 = (undefined1)uStack_1e8;
  *(undefined8 *)(puVar16 + 8) = 0;
  *(code **)(puVar16 + 0x18) = uStack_1d0;
  *(code **)(puVar16 + 0x20) = uStack_1c8;
  *(undefined4 *)(puVar16 + 0x28) = (undefined4)uStack_1c0;
  puVar16[0x2c] = uStack_1c0._4_1_;
  if (uStack_1c0._4_1_ != '\0') {
    if (uStack_1c0._4_1_ == '\x02') {
      (*uStack_1d0)(5,&uStack_1e0);
    }
    else {
      uStack_1e0 = 0;
      *(undefined8 *)(puVar16 + 8) = uVar25;
    }
  }
  uVar25 = uStack_1a8;
  uVar1 = (undefined4)uStack_1b0;
  uVar6 = uStack_1b0._4_4_;
  uStack_1b0 = 0;
  *(undefined4 *)(puVar16 + 0x30) = (undefined4)uStack_1b8;
  *(undefined4 *)(puVar16 + 0x34) = uStack_1b8._4_4_;
  *(undefined4 *)(puVar16 + 0x38) = uVar1;
  *(undefined4 *)(puVar16 + 0x3c) = uVar6;
  uStack_1a8 = 0;
  *(undefined8 *)(puVar16 + 0x40) = uVar25;
  *plStack_1f0 = (long)puVar16;
  plStack_1f0[5] = lStack_e8;
  plStack_1f0[6] = 0;
  plStack_1f0[7] = (long)&UNK_08ed5d40;
  if (uStack_1c8 != (code *)0x0) {
    (*uStack_1c8)(&uStack_1e0);
  }
  puStack_98 = &UNK_0f486b60;
  if (((cVar8 != '\0') && (plStack_70 != (long *)0x0)) &&
     (*plStack_70 != 0 && (int)plStack_70[1] == iStack_30c)) {
    func_0x0d8569b0(*plStack_70,CONCAT44(uStack_5c,uStack_60),uStack_58);
  }
LAB_08ed326d:
  if ((code *)CONCAT44(uStack_11c,uStack_120) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_11c,uStack_120))(appppppplStack_138);
  }
  return plStack_1f0;
}



/* ---- referenced strings ----
 * 0x11a5836  Custom Command registration failed outside of the ModuleStartup event.
 * 0x11a5846  egistration failed outside of the ModuleStartup event.
 * 0x11a5856  ed outside of the ModuleStartup event.
 * 0x11a5866  e ModuleStartup event.
 */
