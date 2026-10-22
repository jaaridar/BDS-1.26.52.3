/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6dbbb0 (ELF vaddr 0xb5dbbb0)
 * Label: caller-of-callee
 * Body:  [[0b6dbbb0, 0b6dcfb6] [0b6dd204, 0b6dd243]]
 * Ghidra: FUN_0b6dbbb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b6dbbb0(long *******param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *******ppppppplVar2;
  long *****ppppplVar3;
  long ***ppplVar4;
  code *pcVar5;
  long *******ppppppplVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *******ppppppplVar18;
  uint uVar19;
  ulong uVar20;
  long ******pppppplVar21;
  int extraout_EDX;
  char *pcVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [12];
  uint *puStack_428;
  uint *puStack_420;
  long lStack_418;
  byte bStack_410;
  undefined7 uStack_40f;
  ulong uStack_408;
  undefined7 *puStack_400;
  int iStack_3f8;
  undefined4 uStack_3f4;
  undefined *puStack_3f0;
  long *******ppppppplStack_3e8;
  long *******ppppppplStack_3e0;
  undefined *puStack_3d8;
  ulong uStack_3d0;
  long *******ppppppplStack_3c8;
  long *******ppppppplStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  long alStack_3a8 [4];
  long *plStack_388;
  uint uStack_378;
  uint uStack_374;
  uint uStack_370;
  uint uStack_36c;
  undefined8 uStack_368;
  undefined1 auStack_358 [8];
  long *******ppppppplStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  long alStack_338 [4];
  long *plStack_318;
  byte bStack_300;
  undefined7 uStack_2ff;
  ulong uStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  float fStack_2cc;
  long *******ppppppplStack_2c8;
  long *plStack_2c0;
  long *******ppppppplStack_2b8;
  long *plStack_2b0;
  long alStack_2a8 [4];
  long *plStack_288;
  ulong uStack_278;
  ulong uStack_270;
  int iStack_268;
  ulong uStack_264;
  int iStack_25c;
  ulong uStack_258;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 uStack_23c;
  long *******ppppppplStack_238;
  undefined8 uStack_230;
  long alStack_228 [4];
  long *plStack_208;
  byte *pbStack_1f0;
  ulong uStack_1e8;
  undefined7 *puStack_1e0;
  ulong uStack_1d8;
  undefined7 *puStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  char cStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long alStack_138 [4];
  long *plStack_118;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  long alStack_e8 [4];
  long *plStack_c8;
  undefined1 auStack_ac [48];
  undefined1 uStack_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  plVar14 = (long *)param_3[4];
  if (plVar14 == (long *)0x0) {
    plStack_288 = (long *)0x0;
  }
  else if (plVar14 == param_3) {
    plStack_288 = alStack_2a8;
    (**(code **)(*plVar14 + 0x18))();
  }
  else {
    plStack_288 = (long *)(**(code **)(*plVar14 + 0x10))();
  }
  ppppppplStack_3e8 = (long *******)((ulong)ppppppplStack_3e8 & 0xffffffffffffff00);
  uStack_3d0 = uStack_3d0 & 0xffffffffffffff00;
  if (((param_2[1] == 0) || ((*(uint *)(param_2 + 2) & 0x3ffff) == 0x3ffff)) ||
     (plVar14 = (long *)func_0x0412c300(), plVar14 == (long *)0x0)) {
LAB_0b6dbcdf:
  }
  else {
    ppppppplVar18 = (long *******)*param_2;
    if (ppppppplVar18 != (long *******)0x0) {
      uVar19 = *(uint *)(param_2 + 2);
      uVar20 = (ulong)((uVar19 & 0x3ffff) >> 0xb);
      if (((uVar20 < (ulong)((long)ppppppplVar18[0x1c] - (long)ppppppplVar18[0x1b] >> 3)) &&
          (ppppplVar3 = ppppppplVar18[0x1b][uVar20], ppppplVar3 != (long *****)0x0)) &&
         ((uVar23 = *(uint *)((long)ppppplVar3 + (ulong)(uVar19 & 0x7ff) * 4),
          (uVar19 & 0xfffc0000 ^ uVar23) < 0x3ffff &&
          ((long ******)(ulong)(uVar23 & 0x3ffff) < ppppppplVar18[0x23])))) {
        ppppppplStack_3e0 = ppppppplVar18 + 5;
        puStack_3d8 = (undefined *)CONCAT44(puStack_3d8._4_4_,uVar19);
        uStack_3d0 = CONCAT71(uStack_3d0._1_7_,1);
        ppppppplStack_3e8 = ppppppplVar18;
      }
    }
    LOCK();
    plVar16 = plVar14 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_0b6dbcdf;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
  }
  if ((char)uStack_3d0 == '\0') goto LAB_0b6dbf96;
  pppppplVar21 = ppppppplStack_3e0[7] +
                 ((int)((ulong)((long)ppppppplStack_3e0[8] - (long)ppppppplStack_3e0[7]) >> 3) - 1U
                 & 0xf95d258f);
  do {
    ppppplVar3 = *pppppplVar21;
    if (ppppplVar3 == (long *****)0xffffffffffffffff) goto LAB_0b6dbf96;
    pppppplVar21 = ppppppplStack_3e0[10] + (long)ppppplVar3 * 4;
  } while (*(int *)(ppppppplStack_3e0[10] + (long)ppppplVar3 * 4 + 1) != -0x6a2da71);
  if ((pppppplVar21 == ppppppplStack_3e0[0xb]) ||
     (ppppplVar3 = pppppplVar21[2], ppppplVar3 == (long *****)0x0)) goto LAB_0b6dbf96;
  uVar20 = (ulong)(((uint)puStack_3d8 & 0x3ffff) >> 0xb);
  if (((ulong)((long)ppppplVar3[2] - (long)ppppplVar3[1] >> 3) <= uVar20) ||
     (((ppplVar4 = ppppplVar3[1][uVar20], ppplVar4 == (long ***)0x0 ||
       (0x3fffe < ((uint)puStack_3d8 & 0xfffc0000 ^
                  *(uint *)((long)ppplVar4 + (ulong)((uint)puStack_3d8 & 0x7ff) * 4)))) ||
      (plVar14 = (long *)func_0x0b40c890(&ppppppplStack_3e8,1), plVar14 == (long *)0x0))))
  goto LAB_0b6dbf96;
  (**(code **)(*plVar14 + 0x7a0))(&pcStack_2e8,plVar14);
  if ((pcStack_2e8 == (char *)0x0) &&
     (cVar12 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
     cVar12 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*pcStack_2e8 == '\0') &&
     (cVar12 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
     cVar12 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar15 = (**(code **)(*plStack_2d8 + 0x30))();
  plVar14 = (long *)func_0x05fa6970(uVar15);
  if (plVar14 == (long *)0x0) {
    if (plStack_288 != (long *)0x0) {
      ppppppplStack_3e8 = (long *******)((ulong)ppppppplStack_3e8 & 0xffffffffffffff00);
      (**(code **)(*plStack_288 + 0x30))(plStack_288,&ppppppplStack_3e8);
    }
  }
  else {
    if ((pcStack_2e8 == (char *)0x0) &&
       (cVar12 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013fab0f),
       cVar12 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*pcStack_2e8 == '\0') &&
       (cVar12 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013fab0f),
       cVar12 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar15 = (**(code **)(*plStack_2d8 + 0x30))();
    plVar16 = (long *)func_0x05f95d30(uVar15);
    if (plVar16 == (long *)0x0) {
      if (plStack_288 != (long *)0x0) {
        ppppppplStack_3e8 = (long *******)((ulong)ppppppplStack_3e8 & 0xffffffffffffff00);
        (**(code **)(*plStack_288 + 0x30))(plStack_288,&ppppppplStack_3e8);
      }
    }
    else {
      uStack_278 = (**(code **)(*plVar16 + 0x2c0))(plVar16);
      if ((DAT_0f7b8fb8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f7b8fb8), iVar13 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      if (((ulong)param_1[0xb] & 1) == 0) {
        uStack_348 = (long *******)param_1[0xd];
        auStack_358 = (undefined1  [8])param_1[0xb];
        ppppppplStack_350 = (long *******)param_1[0xc];
      }
      else {
        func_0x0412e5e0(auStack_358,param_1[0xd],param_1[0xc]);
      }
      ppppppplStack_3e8 = (long *******)(auStack_358 + 1);
      ppppppplStack_3e0 = (long *******)((ulong)auStack_358 >> 1 & 0x7f);
      if (((ulong)auStack_358 & 1) != 0) {
        ppppppplStack_3e0 = ppppppplStack_350;
        ppppppplStack_3e8 = uStack_348;
      }
      puStack_3d8 = &UNK_01487f17;
      uStack_3d0 = 9;
      func_0x048ad670(&bStack_410,&ppppppplStack_3e8,2,0x2f);
      if (((ulong)auStack_358 & 1) != 0) {
        func_0x0412a280(uStack_348,(ulong)auStack_358 & 0xfffffffffffffffe);
      }
      uStack_1c8 = (ulong)(bStack_410 >> 1);
      puStack_1d0 = &uStack_40f;
      if ((bStack_410 & 1) != 0) {
        uStack_1c8 = uStack_408;
        puStack_1d0 = puStack_400;
      }
      cVar12 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&puStack_1d0);
      if (cVar12 == '\0') {
        ppppppplStack_3e8 = (long *******)&UNK_012664f6;
        ppppppplStack_3e0 = (long *******)&DAT_00000018;
        plVar14 = (long *)param_4[4];
        if (plVar14 == (long *)0x0) {
LAB_0b6dcf99:
          func_0x04891200();
LAB_0b6dcf9e:
          uVar15 = func_0x04891200();
          func_0x041084d6(&DAT_0f7b8fb8);
          func_0x05f983c0(&pcStack_2e8);
          lVar17 = 0x20;
          if ((plStack_288 == alStack_2a8) || (lVar17 = 0x28, plStack_288 != (long *)0x0)) {
            (**(code **)(*plStack_288 + lVar17))();
          }
          func_0x0eee2d70(uVar15);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*plVar14 + 0x30))(plVar14,&ppppppplStack_3e8);
        if (plStack_288 != (long *)0x0) {
          ppppppplStack_3e8 = (long *******)CONCAT71(ppppppplStack_3e8._1_7_,1);
          (**(code **)(*plStack_288 + 0x30))(plStack_288,&ppppppplStack_3e8);
        }
      }
      else {
        puStack_428 = (uint *)0x0;
        puStack_420 = (uint *)0x0;
        bVar24 = (bStack_410 & 1) != 0;
        puStack_1e0 = &uStack_40f;
        if (bVar24) {
          puStack_1e0 = puStack_400;
        }
        lStack_418 = 0;
        uStack_1d8 = (ulong)(bStack_410 >> 1);
        if (bVar24) {
          uStack_1d8 = uStack_408;
        }
        (**(code **)(_DAT_0f7b8f98 + 0xb8))(auStack_1c0,&DAT_0f7b8f98,&puStack_428,&puStack_1e0);
        if (puStack_428 == puStack_420) {
          ppppppplStack_3e8 = (long *******)&UNK_012664f6;
          ppppppplStack_3e0 = (long *******)&DAT_00000018;
          plVar14 = (long *)param_4[4];
          if (plVar14 == (long *)0x0) goto LAB_0b6dcf9e;
          (**(code **)(*plVar14 + 0x30))(plVar14,&ppppppplStack_3e8);
          if (plStack_288 != (long *)0x0) {
            ppppppplStack_3e8 = (long *******)CONCAT71(ppppppplStack_3e8._1_7_,1);
            (**(code **)(*plStack_288 + 0x30))(plStack_288,&ppppppplStack_3e8);
          }
        }
        else {
          ppppppplVar18 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
          if (ppppppplVar18 == (long *******)0x0) {
            func_0x0eec74c0(0x60,0);
          }
          ppppppplStack_2c8 = ppppppplVar18 + 1;
          ppppppplVar18[1] = (long ******)0x0;
          ppppppplVar18[2] = (long ******)0x0;
          *ppppppplVar18 = (long ******)&UNK_0f2d1ba0;
          ppppppplVar18[4] = (long ******)0x0;
          ppppppplVar18[5] = (long ******)0x0;
          ppppppplVar18[6] = (long ******)0x0;
          ppppppplVar18[7] = (long ******)0x0;
          ppppppplVar18[8] = (long ******)0x0;
          ppppppplVar18[9] = (long ******)0x0;
          ppppppplVar18[10] = (long ******)0x0;
          ppppppplVar18[0xb] = (long ******)0x0;
          plVar16 = (long *)param_4[4];
          if (plVar16 == (long *)0x0) {
            ppppppplStack_3c8 = (long *******)0x0;
          }
          else {
            ppppppplStack_3c8 = (long *******)&ppppppplStack_3e8;
            if (plVar16 == param_4) {
              (**(code **)(*plVar16 + 0x18))(plVar16,ppppppplStack_3c8);
            }
            else {
              ppppppplStack_3c8 = (long *******)(**(code **)(*plVar16 + 0x10))();
            }
          }
          ppppppplVar6 = ppppppplVar18 + 4;
          func_0x0b72cbf0(&ppppppplStack_3e8,ppppppplVar18 + 6);
          if ((long ********)ppppppplStack_3c8 == &ppppppplStack_3e8) {
            lVar17 = 0x20;
LAB_0b6dc2ed:
            (**(code **)((long)*ppppppplStack_3c8 + lVar17))();
          }
          else {
            lVar17 = 0x28;
            if (ppppppplStack_3c8 != (long *******)0x0) goto LAB_0b6dc2ed;
          }
          ppppppplVar18[4] =
               (long ******)(((long)puStack_420 - (long)puStack_428 >> 3) * -0x5555555555555555);
          LOCK();
          ppppppplVar18[1] = (long ******)((long)ppppppplVar18[1] + 1);
          UNLOCK();
          plVar16 = (long *)param_3[4];
          ppppppplStack_238 = ppppppplVar6;
          uStack_230 = ppppppplVar18;
          if (plVar16 == (long *)0x0) {
            plStack_208 = (long *)0x0;
          }
          else if (plVar16 == param_3) {
            plStack_208 = alStack_228;
            (**(code **)(*plVar16 + 0x18))();
          }
          else {
            plStack_208 = (long *)(**(code **)(*plVar16 + 0x10))();
          }
          LOCK();
          ppppppplVar18[1] = (long ******)((long)ppppppplVar18[1] + 1);
          UNLOCK();
          uStack_348 = ppppppplStack_238;
          uStack_340 = (undefined4)uStack_230;
          uStack_33c = uStack_230._4_4_;
          if (uStack_230 != (long *******)0x0) {
            LOCK();
            uStack_230[1] = (long ******)((long)uStack_230[1] + 1);
            UNLOCK();
          }
          auStack_358 = (undefined1  [8])ppppppplVar6;
          ppppppplStack_350 = ppppppplVar18;
          plVar16 = plVar14;
          if (plStack_208 == (long *)0x0) {
            plStack_318 = (long *)0x0;
            puVar7 = puStack_428;
            puVar8 = puStack_420;
            plVar1 = plStack_2c0;
          }
          else if (plStack_208 == alStack_228) {
            plStack_318 = alStack_338;
            (**(code **)(*plStack_208 + 0x18))();
            puVar7 = puStack_428;
            puVar8 = puStack_420;
            plVar1 = plStack_2c0;
          }
          else {
            plStack_318 = (long *)(**(code **)(*plStack_208 + 0x10))();
            puVar7 = puStack_428;
            puVar8 = puStack_420;
            plVar1 = plStack_2c0;
          }
          for (; plStack_2c0 = plVar16, puVar10 = puStack_420, puVar7 != puStack_420;
              puVar7 = puVar7 + 6) {
            bVar24 = ((byte)*puVar7 & 1) != 0;
            pbStack_1f0 = (byte *)((long)puVar7 + 1);
            if (bVar24) {
              pbStack_1f0 = *(byte **)(puVar7 + 4);
            }
            uStack_1e8 = (ulong)(byte)((byte)*puVar7 >> 1);
            if (bVar24) {
              uStack_1e8 = *(ulong *)(puVar7 + 2);
            }
            puStack_420 = puVar8;
            func_0x05ff17b0(&bStack_300,&pbStack_1f0);
            if ((bStack_300 & 1) == 0) {
              uVar20 = (ulong)(bStack_300 >> 1);
              if (4 < uVar20) goto LAB_0b6dc481;
LAB_0b6dc6fb:
              if (((*(long *******)auStack_358 == (long ******)0x0) ||
                  (pppppplVar21 = (long ******)((long)*(long *******)auStack_358 + -1),
                  *(long *******)auStack_358 = pppppplVar21, pppppplVar21 == (long ******)0x0)) &&
                 (*(char *)(uStack_348 + 1) == '\0')) {
                if (plStack_318 != (long *)0x0) {
                  ppppppplStack_3e8 = (long *******)CONCAT71(ppppppplStack_3e8._1_7_,1);
                  (**(code **)(*plStack_318 + 0x30))(plStack_318,&ppppppplStack_3e8);
                }
                *(undefined1 *)(uStack_348 + 1) = 1;
                ppppppplStack_3e8 = (long *******)&UNK_012664f6;
                ppppppplStack_3e0 = (long *******)&DAT_00000018;
                pppppplVar21 = uStack_348[6];
                if (pppppplVar21 == (long ******)0x0) {
                  func_0x04891200();
LAB_0b6dcf94:
                  func_0x04891200();
                  goto LAB_0b6dcf99;
                }
                (*(code *)(*pppppplVar21)[6])(pppppplVar21,&ppppppplStack_3e8);
              }
            }
            else {
              uVar20 = uStack_2f8;
              if (uStack_2f8 < 5) goto LAB_0b6dc6fb;
LAB_0b6dc481:
              pcVar22 = pcStack_2f0;
              if ((bStack_300 & 1) == 0) {
                pcVar22 = (char *)&uStack_2ff;
              }
              if (*pcVar22 != '(') goto LAB_0b6dc6fb;
              ppppppplStack_3e8 = (long *******)((ulong)ppppppplStack_3e8 & 0xffffffff00000000);
              uStack_270 = uStack_270 & 0xffffffff00000000;
              iStack_3f8 = 0;
              pcVar9 = pcStack_2f0;
              if ((bStack_300 & 1) == 0) {
                pcVar9 = (char *)&uStack_2ff;
              }
              pcVar22 = pcVar22 + (uVar20 - 1);
              auVar27 = func_0x0b71c300(pcVar9 + 1,pcVar22,&ppppppplStack_3e8);
              if ((auVar27._8_4_ != 0) || (*auVar27._0_8_ != ',')) goto LAB_0b6dc6fb;
              auVar27 = func_0x0b71c300(auVar27._0_8_ + 1,pcVar22,&uStack_270);
              if ((auVar27._8_4_ != 0) ||
                 ((*auVar27._0_8_ != ',' ||
                  (func_0x0b71c300(auVar27._0_8_ + 1,pcVar22,&iStack_3f8), extraout_EDX != 0))))
              goto LAB_0b6dc6fb;
              fStack_2cc = (float)iStack_3f8;
              fVar25 = (float)func_0x0eee4390();
              fVar26 = (float)func_0x0eee4390(fStack_2cc);
              uStack_23c = 0;
              uStack_240 = 0;
              uVar19 = ((int)fVar25 >> 4) - _DAT_0f72b588;
              uStack_270 = (ulong)uVar19;
              iStack_268 = ((int)fVar26 >> 4) - _DAT_0f72b58c;
              uVar23 = ((int)fVar25 >> 4) + _DAT_0f72b588;
              uStack_264 = (ulong)uVar23;
              iStack_25c = ((int)fVar26 >> 4) + _DAT_0f72b58c;
              uVar19 = (uVar23 - uVar19) + 1;
              iStack_250 = (iStack_25c - iStack_268) + 1;
              uStack_258 = (ulong)uVar19 | 0x100000000;
              iStack_24c = uVar19 * iStack_250;
              uStack_244 = 0x10;
              iStack_248 = iStack_24c;
              (**(code **)(*plVar14 + 0x10))(&iStack_3f8,plVar14,&uStack_270);
              ppppppplStack_2b8 = (long *******)0x0;
              plStack_2b0 = (long *)0x0;
              if ((puStack_3f0 == (undefined *)0x0) ||
                 (plStack_2b0 = (long *)func_0x0412c300(), plStack_2b0 == (long *)0x0)) {
                pppppplVar21 = *(long *******)auStack_358;
                plVar16 = (long *)0x0;
joined_r0x0b6dc795:
                if (((pppppplVar21 != (long ******)0x0) &&
                    (*(long *******)auStack_358 = (long ******)((long)pppppplVar21 + -1),
                    (long ******)((long)pppppplVar21 + -1) != (long ******)0x0)) ||
                   (*(char *)(uStack_348 + 1) != '\0')) goto LAB_0b6dcbbf;
                if (plStack_318 != (long *)0x0) {
                  ppppppplStack_3e8._1_7_ = (undefined7)((ulong)ppppppplStack_3e8 >> 8);
                  ppppppplStack_3e8 = (long *******)CONCAT71(ppppppplStack_3e8._1_7_,1);
                  (**(code **)(*plStack_318 + 0x30))(plStack_318,&ppppppplStack_3e8);
                }
                *(undefined1 *)(uStack_348 + 1) = 1;
                ppppppplStack_3e8 = (long *******)&UNK_012664f6;
                ppppppplStack_3e0 = (long *******)&DAT_00000018;
                pppppplVar21 = uStack_348[6];
                if (pppppplVar21 != (long ******)0x0) {
                  (*(code *)(*pppppplVar21)[6])(pppppplVar21,&ppppppplStack_3e8);
                  goto LAB_0b6dcbbf;
                }
                goto LAB_0b6dcf94;
              }
              ppppppplVar6 = (long *******)CONCAT44(uStack_3f4,iStack_3f8);
              ppppppplStack_2b8 = ppppppplVar6;
              if (ppppppplVar6 == (long *******)0x0) {
                pppppplVar21 = *(long *******)auStack_358;
                plVar16 = plStack_2b0;
                plVar14 = plStack_2c0;
                goto joined_r0x0b6dc795;
              }
              puStack_3d8 = puStack_3f0;
              if (puStack_3f0 != (undefined *)0x0) {
                LOCK();
                *(long *)(puStack_3f0 + 0x10) = *(long *)(puStack_3f0 + 0x10) + 1;
                UNLOCK();
              }
              uStack_3d0 = uStack_278;
              ppppppplStack_3c8 = (long *******)auStack_358;
              ppppppplStack_3c0 = ppppppplStack_350;
              if (ppppppplStack_350 != (long *******)0x0) {
                LOCK();
                ppppppplStack_350[1] = (long ******)((long)ppppppplStack_350[1] + 1);
                UNLOCK();
              }
              uStack_3b8 = (undefined4)uStack_348;
              uStack_3b4 = uStack_348._4_4_;
              uStack_3b0 = uStack_340;
              uStack_3ac = uStack_33c;
              if (CONCAT44(uStack_33c,uStack_340) != 0) {
                LOCK();
                plVar14 = (long *)(CONCAT44(uStack_33c,uStack_340) + 8);
                *plVar14 = *plVar14 + 1;
                UNLOCK();
              }
              ppppppplStack_3e0 = ppppppplVar6;
              ppppppplStack_3e8 = param_1;
              if (plStack_318 == (long *)0x0) {
                plStack_388 = (long *)0x0;
              }
              else if (plStack_318 == alStack_338) {
                plStack_388 = alStack_3a8;
                (**(code **)(*plStack_318 + 0x18))();
              }
              else {
                plStack_388 = (long *)(**(code **)(*plStack_318 + 0x10))();
              }
              if ((*puVar7 & 1) == 0) {
                uStack_368 = *(undefined8 *)(puVar7 + 4);
                uStack_378 = *puVar7;
                uStack_374 = puVar7[1];
                uStack_370 = puVar7[2];
                uStack_36c = puVar7[3];
              }
              else {
                func_0x0412e5e0(&uStack_378,*(undefined8 *)(puVar7 + 4),*(undefined8 *)(puVar7 + 2))
                ;
              }
              func_0x0b6dd330(&lStack_178,&ppppppplStack_3e8);
              plStack_c8 = (long *)0x0;
              plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
              if (plVar14 == (long *)0x0) {
                func_0x0eec74c0(0xa0,0);
              }
              *plVar14 = (long)&UNK_0f2d1bf0;
              plVar14[2] = lStack_178;
              plVar14[3] = lStack_170;
              plVar14[4] = lStack_168;
              lStack_170 = 0;
              lStack_168 = 0;
              plVar14[5] = lStack_160;
              plVar14[6] = lStack_158;
              plVar14[7] = (long)plStack_150;
              lStack_158 = 0;
              plStack_150 = (long *)0x0;
              *(undefined4 *)(plVar14 + 8) = (undefined4)uStack_148;
              *(undefined4 *)((long)plVar14 + 0x44) = uStack_148._4_4_;
              *(undefined4 *)(plVar14 + 9) = (undefined4)uStack_140;
              *(undefined4 *)((long)plVar14 + 0x4c) = uStack_140._4_4_;
              uStack_148 = 0;
              uStack_140 = (long *)0x0;
              if (plStack_118 == (long *)0x0) {
                plVar14[0xe] = 0;
              }
              else if (plStack_118 == alStack_138) {
                plVar14[0xe] = (long)(plVar14 + 10);
                (**(code **)(*plStack_118 + 0x18))();
              }
              else {
                plVar14[0xe] = (long)plStack_118;
                plStack_118 = (long *)0x0;
              }
              if ((uStack_108 & 1) == 0) {
                plVar14[0x12] = lStack_f8;
                *(uint *)(plVar14 + 0x10) = uStack_108;
                *(undefined4 *)((long)plVar14 + 0x84) = uStack_104;
                *(undefined4 *)(plVar14 + 0x11) = uStack_100;
                *(undefined4 *)((long)plVar14 + 0x8c) = uStack_fc;
              }
              else {
                func_0x0412e5e0(plVar14 + 0x10,lStack_f8,CONCAT44(uStack_fc,uStack_100));
              }
              plVar14[0x13] = 0;
              auStack_ac[0] = 0;
              uStack_7c = 0;
              plStack_c8 = plVar14;
              func_0x064bdfa0(auStack_78,ppppppplVar6,alStack_e8,auStack_ac);
              if (pcStack_58 != (code *)0x0) {
                (*pcStack_58)(auStack_70);
              }
              plVar14 = plStack_2c0;
              if (plStack_c8 == alStack_e8) {
                lVar17 = 0x20;
LAB_0b6dca35:
                (**(code **)(*plStack_c8 + lVar17))();
              }
              else {
                lVar17 = 0x28;
                if (plStack_c8 != (long *)0x0) goto LAB_0b6dca35;
              }
              if ((uStack_108 & 1) != 0) {
                func_0x0412a280(lStack_f8,CONCAT44(uStack_104,uStack_108) & 0xfffffffffffffffe);
              }
              if (plStack_118 == alStack_138) {
                lVar17 = 0x20;
LAB_0b6dca84:
                (**(code **)(*plStack_118 + lVar17))();
              }
              else {
                lVar17 = 0x28;
                if (plStack_118 != (long *)0x0) goto LAB_0b6dca84;
              }
              plVar16 = uStack_140;
              if (uStack_140 != (long *)0x0) {
                LOCK();
                plVar1 = uStack_140 + 1;
                lVar17 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*uStack_140 + 0x10))(uStack_140);
                  FUN_0412c2d0(plVar16);
                }
              }
              plVar16 = plStack_150;
              if (plStack_150 != (long *)0x0) {
                LOCK();
                plVar1 = plStack_150 + 1;
                lVar17 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*plStack_150 + 0x10))(plStack_150);
                  FUN_0412c2d0(plVar16);
                }
              }
              if (lStack_168 != 0) {
                FUN_0412c2d0();
              }
              if ((uStack_378 & 1) != 0) {
                func_0x0412a280(uStack_368,CONCAT44(uStack_374,uStack_378) & 0xfffffffffffffffe);
              }
              if (plStack_388 == alStack_3a8) {
                lVar17 = 0x20;
LAB_0b6dcb45:
                (**(code **)(*plStack_388 + lVar17))();
              }
              else {
                lVar17 = 0x28;
                if (plStack_388 != (long *)0x0) goto LAB_0b6dcb45;
              }
              plVar16 = (long *)CONCAT44(uStack_3ac,uStack_3b0);
              if (plVar16 != (long *)0x0) {
                LOCK();
                plVar1 = plVar16 + 1;
                lVar17 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  FUN_0412c2d0(plVar16);
                }
              }
              ppppppplVar6 = ppppppplStack_3c0;
              if (ppppppplStack_3c0 != (long *******)0x0) {
                LOCK();
                ppppppplVar2 = ppppppplStack_3c0 + 1;
                pppppplVar21 = *ppppppplVar2;
                *ppppppplVar2 = (long ******)((long)*ppppppplVar2 + -1);
                UNLOCK();
                if (pppppplVar21 == (long ******)0x0) {
                  (*(code *)(*ppppppplStack_3c0)[2])(ppppppplStack_3c0);
                  FUN_0412c2d0(ppppppplVar6);
                }
              }
              plVar16 = plStack_2b0;
              if (puStack_3d8 != (undefined *)0x0) {
                FUN_0412c2d0();
                plVar16 = plStack_2b0;
              }
LAB_0b6dcbbf:
              if (plVar16 != (long *)0x0) {
                LOCK();
                plVar1 = plVar16 + 1;
                lVar17 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  FUN_0412c2d0(plVar16);
                }
              }
              if (puStack_3f0 != (undefined *)0x0) {
                FUN_0412c2d0();
              }
            }
            if ((bStack_300 & 1) != 0) {
              func_0x0412a280(pcStack_2f0,CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
            }
            plVar16 = plStack_2c0;
            puVar8 = puStack_420;
            plVar1 = plStack_2c0;
            puStack_420 = puVar10;
          }
          plStack_2c0 = plVar1;
          if (plStack_318 == alStack_338) {
            lVar17 = 0x20;
LAB_0b6dcc8d:
            puStack_420 = puVar8;
            (**(code **)(*plStack_318 + lVar17))();
          }
          else {
            lVar17 = 0x28;
            puStack_420 = puVar8;
            if (plStack_318 != (long *)0x0) goto LAB_0b6dcc8d;
          }
          plVar14 = (long *)CONCAT44(uStack_33c,uStack_340);
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar16 = plVar14 + 1;
            lVar17 = *plVar16;
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (lVar17 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              FUN_0412c2d0(plVar14);
            }
          }
          ppppppplVar6 = ppppppplStack_350;
          if (ppppppplStack_350 != (long *******)0x0) {
            LOCK();
            ppppppplVar2 = ppppppplStack_350 + 1;
            pppppplVar21 = *ppppppplVar2;
            *ppppppplVar2 = (long ******)((long)*ppppppplVar2 + -1);
            UNLOCK();
            if (pppppplVar21 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_350)[2])(ppppppplStack_350);
              FUN_0412c2d0(ppppppplVar6);
            }
          }
          if (plStack_208 == alStack_228) {
            lVar17 = 0x20;
LAB_0b6dcd19:
            (**(code **)(*plStack_208 + lVar17))();
          }
          else {
            lVar17 = 0x28;
            if (plStack_208 != (long *)0x0) goto LAB_0b6dcd19;
          }
          ppppppplVar6 = uStack_230;
          if (uStack_230 != (long *******)0x0) {
            LOCK();
            ppppppplVar2 = uStack_230 + 1;
            pppppplVar21 = *ppppppplVar2;
            *ppppppplVar2 = (long ******)((long)*ppppppplVar2 + -1);
            UNLOCK();
            if (pppppplVar21 == (long ******)0x0) {
              (*(code *)(*uStack_230)[2])(uStack_230);
              FUN_0412c2d0(ppppppplVar6);
            }
          }
          LOCK();
          pppppplVar21 = *ppppppplStack_2c8;
          *ppppppplStack_2c8 = (long ******)((long)*ppppppplStack_2c8 + -1);
          UNLOCK();
          if (pppppplVar21 == (long ******)0x0) {
            (*(code *)(*ppppppplVar18)[2])(ppppppplVar18);
            FUN_0412c2d0(ppppppplVar18);
          }
        }
        lVar17 = lStack_198;
        if (cStack_180 == '\0') {
          if (lStack_198 != 0) {
            while (lVar17 != lStack_190) {
              func_0x048b3e80(lStack_190 + -0x40);
              lStack_190 = lStack_190 + -0x40;
            }
            lStack_190 = lVar17;
            func_0x0412a280(lStack_198,lStack_188 - lStack_198);
          }
          lVar11 = lStack_1b0;
          lVar17 = lStack_1a8;
          if (lStack_1b0 != 0) {
            for (; lVar11 != lVar17; lVar17 = lVar17 + -0x50) {
              if ((*(char *)(lVar17 + -8) == '\x01') && ((*(byte *)(lVar17 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar17 + -0x20),
                                *(ulong *)(lVar17 + -0x30) & 0xfffffffffffffffe);
              }
            }
            lStack_1a8 = lVar11;
            func_0x0412a280(lStack_1b0,lStack_1a0 - lStack_1b0);
          }
        }
        puVar8 = puStack_428;
        puVar7 = puStack_420;
        if (puStack_428 != (uint *)0x0) {
          for (; puVar8 != puVar7; puVar7 = puVar7 + -6) {
            if ((puVar7[-6] & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(puVar7 + -2),
                              *(ulong *)(puVar7 + -6) & 0xfffffffffffffffe);
            }
          }
          puStack_420 = puVar8;
          func_0x0412a280(puStack_428,lStack_418 - (long)puStack_428);
        }
      }
      if ((bStack_410 & 1) != 0) {
        func_0x0412a280(puStack_400,CONCAT71(uStack_40f,bStack_410) & 0xfffffffffffffffe);
      }
    }
  }
  plVar14 = plStack_2e0;
  pcStack_2e8 = (char *)0x0;
  plStack_2e0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar16 = plVar14 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0412c2d0(plVar14);
    }
    plVar14 = plStack_2e0;
    plStack_2d8 = (long *)0x0;
    if (plStack_2e0 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_2e0 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
        FUN_0412c2d0(plVar14);
      }
    }
  }
LAB_0b6dbf96:
  if (plStack_288 == alStack_2a8) {
    lVar17 = 0x20;
  }
  else {
    lVar17 = 0x28;
    if (plStack_288 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*plStack_288 + lVar17))();
  return;
}


