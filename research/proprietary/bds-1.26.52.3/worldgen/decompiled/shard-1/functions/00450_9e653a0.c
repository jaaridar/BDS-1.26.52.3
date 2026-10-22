/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f653a0 (ELF vaddr 0x9e653a0)
 * Label: caller-of-callee
 * Body:  [[09f653a0, 09f658dc] [09f658e0, 09f6788d] [09f678e2, 09f67923] [09f67caa, 09f67ce1]]
 * Ghidra: FUN_09f653a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_09f653a0(long *******param_1,undefined8 param_2,undefined8 param_3,long *******param_4)

{
  long *plVar1;
  long *****ppppplVar2;
  char *pcVar3;
  long ****pppplVar4;
  byte bVar5;
  uint uVar6;
  long *****ppppplVar7;
  long ******pppppplVar8;
  long ***ppplVar9;
  byte *pbVar10;
  code *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long *******ppppppplVar27;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  byte *pbVar30;
  long lVar31;
  long ******pppppplVar32;
  long *******unaff_R12;
  long *******ppppppplVar33;
  undefined *puVar34;
  long *******unaff_R13;
  undefined *puVar35;
  byte *pbVar36;
  uint uVar37;
  undefined *puVar38;
  bool bVar39;
  float fVar40;
  undefined1 auVar41 [16];
  long *******ppppppplStack_328;
  long *******ppppppplStack_320;
  long *******ppppppplStack_318;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  long *******ppppppplStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *plStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long *plStack_248;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  long ******pppppplStack_228;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  long ******pppppplStack_1b0;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  long *aplStack_198 [4];
  long **pplStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long alStack_138 [4];
  long *plStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long ******apppppplStack_f8 [4];
  long *******ppppppplStack_d8;
  long alStack_c8 [4];
  long *plStack_a8;
  long alStack_98 [4];
  long *plStack_78;
  long alStack_68 [4];
  long *plStack_48;
  
  cVar17 = func_0x0c98c1b0();
  if (cVar17 == '\0') {
    return 0;
  }
  if ((param_1[0x62] == (long ******)0x0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b6dd1),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  ppppppplStack_2e0 = param_4;
  if ((*(char *)param_1[0x62] == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b6dd1),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (*(code *)(*param_1[100])[2])(&uStack_2d8);
  ppppppplVar29 = uStack_2d8;
  if (uStack_2d8 != (long *******)0x0) {
    func_0x09f64fd0(uStack_2d8);
    if ((DAT_0f5a4878 == '\0') && (iVar18 = func_0x04108328(&DAT_0f5a4878), iVar18 != 0)) {
      func_0x06e30f20(0xf5a4860);
      func_0x0410844d(&DAT_0f5a4878);
    }
    ppppppplVar33 = ppppppplVar29 + 5;
    unaff_R12 = (long *******)0xffffffff;
    pppppplVar25 = ppppppplVar29[5] +
                   ((int)((ulong)((long)ppppppplVar29[6] - (long)ppppppplVar29[5]) >> 3) - 1U &
                   _DAT_0f5a4864);
    ppppppplStack_290 = ppppppplVar29 + 8;
    do {
      ppppplVar7 = *pppppplVar25;
      if (ppppplVar7 == (long *****)0xffffffffffffffff) goto LAB_09f6551c;
      pppppplVar25 = ppppppplVar29[8] + (long)ppppplVar7 * 6;
    } while (*(uint *)(ppppppplVar29[8] + (long)ppppplVar7 * 6 + 1) != _DAT_0f5a4864);
    if ((((pppppplVar25 == ppppppplVar29[9]) || (*(char *)((long)pppppplVar25 + 0x2c) == '\x04')) ||
        (*(int *)(pppppplVar25 + 5) != 0x2410b419)) || (pppppplVar25[2] == (long *****)0x0)) {
LAB_09f6551c:
      if ((DAT_0f5a4878 == '\0') && (iVar18 = func_0x04108328(&DAT_0f5a4878), iVar18 != 0)) {
        func_0x06e30f20(0xf5a4860);
        func_0x0410844d(&DAT_0f5a4878);
      }
      uVar6 = _DAT_0f5a4864;
      uVar37 = (int)((ulong)((long)ppppppplVar29[6] - (long)ppppppplVar29[5]) >> 3) - 1U &
               _DAT_0f5a4864;
      ppppppplVar27 = (long *******)(ppppppplVar29[5] + uVar37);
      pppppplVar25 = ppppppplVar29[8];
      ppppppplVar28 = ppppppplVar27;
      do {
        pppppplVar26 = *ppppppplVar28;
        if (pppppplVar26 == (long ******)0xffffffffffffffff) {
          unaff_R12 = (long *******)ppppppplVar29[9];
          goto LAB_09f6559a;
        }
        ppppppplVar28 = (long *******)(pppppplVar25 + (long)pppppplVar26 * 6);
      } while (*(uint *)(pppppplVar25 + (long)pppppplVar26 * 6 + 1) != _DAT_0f5a4864);
      unaff_R12 = (long *******)ppppppplVar29[9];
      if (ppppppplVar28 == unaff_R12) {
LAB_09f6559a:
        ppppppplStack_1f8 = ppppppplVar33;
        if (unaff_R12 < ppppppplVar29[10]) {
          *unaff_R12 = *ppppppplVar27;
          *(uint *)(unaff_R12 + 1) = uVar6;
          unaff_R12[2] = (long ******)0x0;
          unaff_R12[3] = (long ******)&UNK_09f96d80;
          *(undefined4 *)(unaff_R12 + 5) = 0x2410b419;
          unaff_R12[4] = (long ******)&UNK_09f97620;
          *(char *)((long)unaff_R12 + 0x2c) = '\x01';
          unaff_R13 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
          if (unaff_R13 == (long *******)0x0) {
            func_0x0eec74c0(0x98,0);
          }
          *unaff_R13 = (long ******)0x0;
          unaff_R13[1] = (long ******)0x0;
          unaff_R13[8] = (long ******)0x0;
          unaff_R13[9] = (long ******)0x0;
          unaff_R13[10] = (long ******)0x0;
          unaff_R13[0xb] = (long ******)0x0;
          unaff_R13[0xc] = (long ******)0x0;
          unaff_R13[0xd] = (long ******)0x0;
          unaff_R13[0x10] = (long ******)0x0;
          unaff_R13[0x11] = (long ******)0x0;
          unaff_R13[6] = (long ******)0x0;
          unaff_R13[7] = (long ******)0x0;
          unaff_R13[2] = (long ******)0x0;
          unaff_R13[3] = (long ******)0x0;
          unaff_R13[4] = (long ******)0x0;
          unaff_R13[5] = (long ******)0x0;
          unaff_R13[0xe] = (long ******)0x0;
          unaff_R13[0xf] = (long ******)0x0;
          unaff_R13[0x12] = (long ******)0x0;
          unaff_R13[1] = (long ******)(unaff_R13 + 2);
          *(undefined4 *)(unaff_R13 + 8) = 0x3f800000;
          unaff_R13[9] = (long ******)0x0;
          unaff_R13[10] = (long ******)0x0;
          unaff_R13[0xb] = (long ******)0x0;
          unaff_R13[0xc] = (long ******)0x0;
          *(undefined4 *)(unaff_R13 + 0xd) = 0x3f800000;
          *(undefined4 *)(unaff_R13 + 0x12) = 0x3f800000;
          unaff_R12[2] = (long ******)unaff_R13;
          ppppppplVar33 = unaff_R12 + 6;
          ppppppplVar29[9] = (long ******)ppppppplVar33;
        }
        else {
          pppppplVar26 = (long ******)((long)unaff_R12 - (long)pppppplVar25);
          uVar19 = ((long)pppppplVar26 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar19) {
            func_0x049dc2c0();
LAB_09f6786e:
            uVar21 = func_0x04882eb0();
            ppppppplVar29[9] = pppppplVar26;
            func_0x0495e910(&uStack_2d8);
            uVar21 = _Unwind_Resume(uVar21);
            func_0x04894d10(&ppppppplStack_328);
            uVar21 = func_0x04882e20(uVar21);
            func_0x049858d0(&pppppplStack_238);
            uVar21 = _Unwind_Resume(uVar21);
            func_0x0412a280(uVar6,0x40);
            (*(code *)(*pppppplVar26)[1])(pppppplVar26);
            uVar21 = _Unwind_Resume(uVar21);
            if (lStack_1a0 == 0) {
              _Unwind_Resume(uVar21);
            }
            func_0x0412c2d0();
            _Unwind_Resume(uVar21);
            pcVar11 = (code *)swi(3);
            uVar21 = (*pcVar11)();
            return uVar21;
          }
          lVar31 = (long)ppppppplVar29[10] - (long)pppppplVar25 >> 4;
          uVar12 = lVar31 * 0x5555555555555556;
          if (uVar19 < uVar12) {
            uVar19 = uVar12;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar31 * -0x5555555555555555)) {
            uVar19 = 0x555555555555555;
          }
          ppppppplStack_308 = ppppppplStack_290;
          if (uVar19 == 0) {
            ppppppplStack_328 = (long *******)0x0;
          }
          else {
            ppppppplStack_298 = ppppppplVar27;
            if (0x555555555555555 < uVar19) goto LAB_09f6786e;
            lStack_1b8 = uVar19 * 0x30;
            ppppppplStack_328 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            ppppppplVar27 = ppppppplStack_298;
            if (ppppppplStack_328 == (long *******)0x0) {
              func_0x0eec74c0(lStack_1b8,0);
              ppppppplStack_328 = (long *******)0x0;
              ppppppplVar27 = ppppppplStack_298;
            }
          }
          ppppppplStack_320 = (long *******)((long)ppppppplStack_328 + (long)pppppplVar26);
          ppppppplStack_310 = ppppppplStack_328 + uVar19 * 6;
          *(long *******)((long)ppppppplStack_328 + (long)pppppplVar26) = *ppppppplVar27;
          *(uint *)((long)(ppppppplStack_328 + 1) + (long)pppppplVar26) = uVar6;
          pcVar3 = (char *)((long)(ppppppplStack_328 + 2) + (long)pppppplVar26);
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3[4] = '\0';
          pcVar3[5] = '\0';
          pcVar3[6] = '\0';
          pcVar3[7] = '\0';
          *(undefined **)((long)(ppppppplStack_328 + 3) + (long)pppppplVar26) = &UNK_09f96d80;
          pcVar3 = (char *)((long)(ppppppplStack_328 + 5) + (long)pppppplVar26);
          pcVar3[0] = '\x19';
          pcVar3[1] = -0x4c;
          pcVar3[2] = '\x10';
          pcVar3[3] = '$';
          *(undefined **)((long)(ppppppplStack_328 + 4) + (long)pppppplVar26) = &UNK_09f97620;
          ((char *)((long)ppppppplStack_328 + 0x2c))[(long)pppppplVar26] = '\x01';
          ppppppplStack_318 = ppppppplStack_320;
          ppppppplStack_298 = ppppppplStack_320;
          pppppplVar25 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
          if (pppppplVar25 == (long ******)0x0) {
            func_0x0eec74c0(0x98,0);
          }
          *pppppplVar25 = (long *****)0x0;
          pppppplVar25[1] = (long *****)0x0;
          pppppplVar25[8] = (long *****)0x0;
          pppppplVar25[9] = (long *****)0x0;
          pppppplVar25[10] = (long *****)0x0;
          pppppplVar25[0xb] = (long *****)0x0;
          pppppplVar25[0xc] = (long *****)0x0;
          pppppplVar25[0xd] = (long *****)0x0;
          pppppplVar25[0x10] = (long *****)0x0;
          pppppplVar25[0x11] = (long *****)0x0;
          pppppplVar25[6] = (long *****)0x0;
          pppppplVar25[7] = (long *****)0x0;
          pppppplVar25[2] = (long *****)0x0;
          pppppplVar25[3] = (long *****)0x0;
          pppppplVar25[4] = (long *****)0x0;
          pppppplVar25[5] = (long *****)0x0;
          pppppplVar25[0xe] = (long *****)0x0;
          pppppplVar25[0xf] = (long *****)0x0;
          pppppplVar25[0x12] = (long *****)0x0;
          pppppplVar25[1] = (long *****)(pppppplVar25 + 2);
          *(undefined4 *)(pppppplVar25 + 8) = 0x3f800000;
          pppppplVar25[9] = (long *****)0x0;
          pppppplVar25[10] = (long *****)0x0;
          pppppplVar25[0xb] = (long *****)0x0;
          pppppplVar25[0xc] = (long *****)0x0;
          *(undefined4 *)(pppppplVar25 + 0xd) = 0x3f800000;
          *(undefined4 *)(pppppplVar25 + 0x12) = 0x3f800000;
          ppppppplStack_298[2] = pppppplVar25;
          ppppppplStack_318 = ppppppplStack_298 + 6;
          func_0x049dc0d0(ppppppplStack_290,&ppppppplStack_328);
          unaff_R13 = ppppppplStack_320;
          ppppppplVar33 = (long *******)ppppppplVar29[9];
          while (ppppppplVar27 = ppppppplStack_318, unaff_R13 != ppppppplVar27) {
            ppppppplStack_318 = ppppppplVar27 + -6;
            if (ppppppplVar27[-2] != (long ******)0x0) {
              (*(code *)ppppppplVar27[-2])(ppppppplVar27 + -4);
            }
          }
          ppppppplStack_318 = ppppppplVar27;
          if (ppppppplStack_328 != (long *******)0x0) {
            func_0x0412a280(ppppppplStack_328,(long)ppppppplStack_310 - (long)ppppppplStack_328);
          }
        }
        ppppppplVar29[9] = (long ******)ppppppplVar33;
        unaff_R12 = (long *******)
                    (((long)ppppppplVar33 - (long)ppppppplVar29[8] >> 4) * -0x5555555555555555);
        pppppplVar25 = ppppppplVar29[5];
        pppppplVar25[uVar37] = (long *****)((long)unaff_R12 + -1);
        lVar31 = (long)ppppppplVar29[6] - (long)pppppplVar25;
        fVar40 = (float)(ulong)(lVar31 >> 3) * *(float *)(ppppppplVar29 + 0xb);
        uVar19 = (ulong)fVar40;
        ppppppplVar29 =
             (long *******)((long)(fVar40 - _DAT_01198778) & (long)uVar19 >> 0x3f | uVar19);
        if (ppppppplVar29 <= unaff_R12 && (long)unaff_R12 - (long)ppppppplVar29 != 0) {
          func_0x049dc2d0(ppppppplStack_1f8,lVar31 >> 2);
        }
      }
    }
  }
  ppppppplVar29 = uStack_2d0;
  if (uStack_2d0 != (long *******)0x0) {
    LOCK();
    ppppppplVar33 = uStack_2d0 + 1;
    pppppplVar25 = *ppppppplVar33;
    *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + -1);
    UNLOCK();
    if (pppppplVar25 == (long ******)0x0) {
      (*(code *)(*uStack_2d0)[2])(uStack_2d0);
      func_0x0412c2d0(uStack_2d0);
    }
  }
  func_0x0cc41ed0(&DAT_0f6ff9e0);
  uStack_2d0 = (long *******)0x0;
  pppppplVar25 = param_1[0x7a];
  if (pppppplVar25 == (long ******)0x0) goto LAB_09f6772d;
  uStack_2d8 = (long *******)pppppplVar25[1];
  ppppplVar7 = pppppplVar25[2];
  if (ppppplVar7 != (long *****)0x0) {
    LOCK();
    ppppplVar7[1] = (long ****)((long)ppppplVar7[1] + 1);
    UNLOCK();
    uStack_2d0 = (long *******)ppppplVar7;
  }
  if (uStack_2d8 == (long *******)0x0) goto LAB_09f6772d;
  ppppppplStack_2c8 = (long *******)param_1[0x7b];
  if (*(char *)uStack_2d8 == '\0') goto LAB_09f6772d;
  plVar20 = (long *)(*(code *)**ppppppplStack_2c8)();
  aplStack_198[0] = (long *)0x0;
  ppppppplStack_328 = (long *******)&UNK_0f1f8d30;
  ppppppplStack_320 = (long *******)&UNK_09f68a70;
  ppppppplStack_318 = (long *******)0x0;
  ppppppplStack_310 = param_1;
  (**(code **)(*plVar20 + 0x10))(&uStack_268,plVar20,&ppppppplStack_328,0,aplStack_198,0);
  unaff_R13 = ppppppplStack_2e0;
  if (ppppppplStack_328 != (long *******)0x0) {
    (*(code *)ppppppplStack_328[1])(&ppppppplStack_328);
  }
  ppppppplVar29 = param_1 + 0xfb;
  if ((long *******)&uStack_268 != ppppppplVar29) {
    if (param_1[0xfc] == (long ******)0x0) {
      pppppplVar25 = (long ******)0x0;
    }
    else {
      plVar20 = (long *)func_0x0412c300();
      ppppppplStack_320 = (long *******)plVar20;
      if (plVar20 != (long *)0x0) {
        ppppppplStack_328 = (long *******)*ppppppplVar29;
        if (ppppppplStack_328 != (long *******)0x0) {
          (*(code *)(*ppppppplStack_328[5])[2])();
        }
        LOCK();
        plVar1 = plVar20 + 1;
        lVar31 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      pppppplVar25 = param_1[0xfc];
    }
    uVar13 = (undefined4)uStack_268;
    uVar14 = uStack_268._4_4_;
    uVar15 = (undefined4)uStack_260;
    uVar16 = uStack_260._4_4_;
    uStack_268 = (long *******)0x0;
    uStack_260 = 0;
    *(undefined4 *)ppppppplVar29 = uVar13;
    *(undefined4 *)((long)param_1 + 0x7dc) = uVar14;
    *(undefined4 *)(param_1 + 0xfc) = uVar15;
    *(undefined4 *)((long)param_1 + 0x7e4) = uVar16;
    if (pppppplVar25 != (long ******)0x0) {
      func_0x0412c2d0();
    }
  }
  if (uStack_260 != 0) {
    plVar20 = (long *)func_0x0412c300();
    ppppppplStack_320 = (long *******)plVar20;
    if (plVar20 != (long *)0x0) {
      ppppppplStack_328 = uStack_268;
      if (uStack_268 != (long *******)0x0) {
        (*(code *)(*uStack_268[5])[2])();
      }
      LOCK();
      plVar1 = plVar20 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    if (uStack_260 != 0) {
      func_0x0412c2d0();
    }
  }
  plVar20 = aplStack_198[0];
  aplStack_198[0] = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
  }
  ppppplVar7 = (long *****)uStack_2d0;
  uStack_2d8 = (long *******)0x0;
  uStack_2d0 = (long *******)0x0;
  if (ppppplVar7 != (long *****)0x0) {
    LOCK();
    ppppplVar2 = ppppplVar7 + 1;
    pppplVar4 = *ppppplVar2;
    *ppppplVar2 = (long ****)((long)*ppppplVar2 + -1);
    UNLOCK();
    if (pppplVar4 == (long ****)0x0) {
      (*(code *)(*ppppplVar7)[2])(ppppplVar7);
      func_0x0412c2d0(ppppplVar7);
    }
    ppppplVar7 = (long *****)uStack_2d0;
    ppppppplStack_2c8 = (long *******)0x0;
    if (uStack_2d0 != (long *******)0x0) {
      LOCK();
      ppppplVar2 = (long *****)(uStack_2d0 + 1);
      pppplVar4 = *ppppplVar2;
      *ppppplVar2 = (long ****)((long)*ppppplVar2 + -1);
      UNLOCK();
      if (pppplVar4 == (long ****)0x0) {
        (*(code *)(*uStack_2d0)[2])(uStack_2d0);
        func_0x0412c2d0(ppppplVar7);
      }
    }
  }
  uVar21 = (*(code *)(*param_1)[0xb9])(param_1);
  ppppppplStack_320 = (long *******)0x0;
  pppppplVar25 = param_1[0x7a];
  if (pppppplVar25 == (long ******)0x0) goto LAB_09f6772d;
  ppppppplStack_328 = (long *******)pppppplVar25[1];
  ppppppplVar33 = (long *******)pppppplVar25[2];
  if (ppppppplVar33 != (long *******)0x0) {
    LOCK();
    ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
    UNLOCK();
    ppppppplStack_320 = ppppppplVar33;
  }
  if (ppppppplStack_328 == (long *******)0x0) goto LAB_09f6772d;
  ppppppplStack_318 = (long *******)param_1[0x7b];
  if (*(char *)ppppppplStack_328 == '\0') goto LAB_09f6772d;
  func_0x0d18df60(uVar21);
  ppppppplStack_328 = (long *******)0x0;
  ppppppplStack_320 = (long *******)0x0;
  if (ppppppplVar33 != (long *******)0x0) {
    LOCK();
    ppppppplVar29 = ppppppplVar33 + 1;
    pppppplVar25 = *ppppppplVar29;
    *ppppppplVar29 = (long ******)((long)*ppppppplVar29 + -1);
    UNLOCK();
    if (pppppplVar25 == (long ******)0x0) {
      (*(code *)(*ppppppplVar33)[2])(ppppppplVar33);
      func_0x0412c2d0(ppppppplVar33);
    }
    ppppppplVar29 = ppppppplStack_320;
    ppppppplStack_318 = (long *******)0x0;
    if (ppppppplStack_320 != (long *******)0x0) {
      LOCK();
      plVar20 = (long *)(ppppppplStack_320 + 1);
      lVar31 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)((long)*ppppppplStack_320 + 0x10))(ppppppplStack_320);
        func_0x0412c2d0(ppppppplVar29);
      }
    }
  }
  plVar20 = (long *)(*(code *)(*param_1[0x102])[3])();
  uStack_268 = (long *******)0x0;
  ppppppplStack_328 = (long *******)&UNK_0f1f8d48;
  ppppppplStack_320 = (long *******)&UNK_09f68ac0;
  ppppppplStack_318 = (long *******)0x0;
  ppppppplStack_310 = param_1;
  (**(code **)(*plVar20 + 0x10))(&uStack_2d8,plVar20,&ppppppplStack_328,0,&uStack_268,0);
  if (ppppppplStack_328 != (long *******)0x0) {
    (*(code *)ppppppplStack_328[1])(&ppppppplStack_328);
  }
  ppppppplVar29 = param_1 + 0x103;
  if ((long *******)&uStack_2d8 != ppppppplVar29) {
    if (param_1[0x104] == (long ******)0x0) {
      pppppplVar25 = (long ******)0x0;
    }
    else {
      plVar20 = (long *)func_0x0412c300();
      ppppppplStack_320 = (long *******)plVar20;
      if (plVar20 != (long *)0x0) {
        ppppppplStack_328 = (long *******)*ppppppplVar29;
        if (ppppppplStack_328 != (long *******)0x0) {
          (*(code *)(*ppppppplStack_328[5])[2])();
        }
        LOCK();
        plVar1 = plVar20 + 1;
        lVar31 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      pppppplVar25 = param_1[0x104];
    }
    uVar13 = (undefined4)uStack_2d8;
    uVar14 = uStack_2d8._4_4_;
    uVar15 = (undefined4)uStack_2d0;
    uVar16 = uStack_2d0._4_4_;
    uStack_2d8 = (long *******)0x0;
    uStack_2d0 = (long *******)0x0;
    *(undefined4 *)ppppppplVar29 = uVar13;
    *(undefined4 *)((long)param_1 + 0x81c) = uVar14;
    *(undefined4 *)(param_1 + 0x104) = uVar15;
    *(undefined4 *)((long)param_1 + 0x824) = uVar16;
    if (pppppplVar25 != (long ******)0x0) {
      func_0x0412c2d0();
    }
  }
  if (uStack_2d0 != (long *******)0x0) {
    plVar20 = (long *)func_0x0412c300();
    ppppppplStack_320 = (long *******)plVar20;
    if (plVar20 != (long *)0x0) {
      ppppppplStack_328 = uStack_2d8;
      if (uStack_2d8 != (long *******)0x0) {
        (*(code *)(*uStack_2d8[5])[2])();
      }
      LOCK();
      plVar1 = plVar20 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    if (uStack_2d0 != (long *******)0x0) {
      func_0x0412c2d0();
    }
  }
  pppppplVar25 = (long ******)uStack_268;
  uStack_268 = (long *******)0x0;
  if (pppppplVar25 != (long ******)0x0) {
    (*(code *)(*pppppplVar25)[1])();
  }
  func_0x09e04720(param_1[0x102],param_1 + 0x105);
  func_0x09e04930(param_1[0x102],param_1[0xb2][1]);
  uVar21 = (*(code *)(*param_1)[0x163])(param_1);
  func_0x0c949f50(uVar21,param_1[0xb2][1]);
  func_0x0c902da0(param_1[0xdb],param_1[0x102] + 5);
  pppppplVar25 = param_1[0xeb];
  ppppppplStack_320 = (long *******)0x0;
  pppppplVar26 = param_1[0x7a];
  if (pppppplVar26 == (long ******)0x0) goto LAB_09f6772d;
  ppppppplStack_328 = (long *******)pppppplVar26[1];
  ppppppplVar33 = (long *******)pppppplVar26[2];
  if (ppppppplVar33 != (long *******)0x0) {
    LOCK();
    ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
    UNLOCK();
    ppppppplStack_320 = ppppppplVar33;
  }
  if (ppppppplStack_328 == (long *******)0x0) goto LAB_09f6772d;
  ppppppplStack_318 = (long *******)param_1[0x7b];
  if (*(char *)ppppppplStack_328 == '\0') goto LAB_09f6772d;
  func_0x0c8f3fb0(pppppplVar25);
  ppppppplStack_328 = (long *******)0x0;
  ppppppplStack_320 = (long *******)0x0;
  if (ppppppplVar33 != (long *******)0x0) {
    LOCK();
    ppppppplVar29 = ppppppplVar33 + 1;
    pppppplVar25 = *ppppppplVar29;
    *ppppppplVar29 = (long ******)((long)*ppppppplVar29 + -1);
    UNLOCK();
    if (pppppplVar25 == (long ******)0x0) {
      (*(code *)(*ppppppplVar33)[2])(ppppppplVar33);
      func_0x0412c2d0(ppppppplVar33);
    }
    ppppppplVar29 = ppppppplStack_320;
    ppppppplStack_318 = (long *******)0x0;
    if (ppppppplStack_320 != (long *******)0x0) {
      LOCK();
      plVar20 = (long *)(ppppppplStack_320 + 1);
      lVar31 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)((long)*ppppppplStack_320 + 0x10))(ppppppplStack_320);
        func_0x0412c2d0(ppppppplVar29);
      }
    }
  }
  func_0x0c93ffd0(param_1 + 0x115,param_1[0xcc]);
  func_0x0c8f55b0(param_1[0xff],param_1[0x83]);
  func_0x0c8f5790(param_1[0xff],param_1[0x102] + 5);
  pppppplVar25 = param_1[0xf];
  if (pppppplVar25 != (long ******)0x0) {
    pppppplVar26 = param_1[0xff];
    uVar21 = (*(code *)(*param_1)[0xab])(param_1);
    func_0x0c8f62c0(pppppplVar26,uVar21);
    func_0x0c8f5e20(param_1[0xff],pppppplVar25);
  }
  func_0x0412d550(0xf5a3610);
  LOCK();
  _DAT_0f5a36e0 = _DAT_0f5a36e0 + 1;
  UNLOCK();
  func_0x0412d610(0xf5a3610);
  plVar20 = _DAT_0f5a36f8;
  pbVar36 = _DAT_0f5a36f0;
  if ((_DAT_0f5a36f0 == (byte *)0x0) || (*_DAT_0f5a36f0 != 1)) {
    ppppppplStack_328 = (long *******)0x0;
    ppppppplStack_320 = (long *******)((ulong)ppppppplStack_320._1_7_ << 8);
    func_0x0eee02f0(0xf5a3610);
  }
  else {
    bVar5 = 1;
    if (_DAT_0f5a36f8 != (long *)0x0) {
      LOCK();
      _DAT_0f5a36f8[1] = _DAT_0f5a36f8[1] + 1;
      UNLOCK();
      bVar5 = *pbVar36;
    }
    ppppppplStack_328 = (long *******)0xf5a3610;
    ppppppplStack_320 = (long *******)CONCAT71(ppppppplStack_320._1_7_,1);
    ppppppplStack_318 = (long *******)pbVar36;
    ppppppplStack_310 = (long *******)plVar20;
    ppppppplStack_308 = _DAT_0f5a3700;
    if ((bVar5 & 1) != 0) {
      func_0x0cb2bbd0(_DAT_0f5a3700,param_1);
    }
    ppppppplStack_318 = (long *******)0x0;
    ppppppplStack_310 = (long *******)0x0;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar1 = plVar20 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
      ppppppplVar29 = ppppppplStack_310;
      ppppppplStack_308 = (long *******)0x0;
      if (ppppppplStack_310 != (long *******)0x0) {
        LOCK();
        ppppppplVar33 = ppppppplStack_310 + 1;
        pppppplVar25 = *ppppppplVar33;
        *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + -1);
        UNLOCK();
        if (pppppplVar25 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_310)[2])(ppppppplStack_310);
          func_0x0412c2d0(ppppppplVar29);
        }
      }
    }
  }
  if ((char)ppppppplStack_320 == '\x01') {
    func_0x0eee02f0(ppppppplStack_328);
  }
  (*(code *)(*param_1)[0x189])(auStack_1a8,param_1);
  uVar21 = (*(code *)(*param_1)[0x123])(param_1);
  func_0x0c5389b0(auStack_1a8,uVar21,unaff_R13);
  if (lStack_1a0 != 0) {
    func_0x0412c2d0();
  }
  pppppplVar25 = param_1[0xe6];
  uVar6 = *(uint *)*unaff_R13;
  uVar21 = (*(code *)(*param_1)[0x4e])(param_1);
  func_0x0ca247e0(pppppplVar25,param_1,uVar6 & 1,uVar21);
  ppppppplVar29 = (long *******)(*param_1[0xe8])[2];
  unaff_R13 = (long *******)(*(code *)(*param_1)[0xab])(param_1);
  unaff_R12 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2b8);
  if (unaff_R12 == (long *******)0x0) goto LAB_09f67732;
  do {
    ppppppplStack_320 = (long *******)0x0;
    pppppplVar25 = param_1[0x82];
    uStack_2d8 = ppppppplVar29;
    if (pppppplVar25 != (long ******)0x0) {
      ppppppplStack_328 = (long *******)pppppplVar25[1];
      ppppppplVar33 = (long *******)pppppplVar25[2];
      if (ppppppplVar33 != (long *******)0x0) {
        LOCK();
        ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
        UNLOCK();
        ppppppplStack_320 = ppppppplVar33;
      }
      if ((ppppppplStack_328 != (long *******)0x0) &&
         (ppppppplStack_318 = (long *******)param_1[0x83], *(char *)ppppppplStack_328 != '\0')) {
        func_0x0d080530(unaff_R12,&uStack_2d8,unaff_R13,&ppppppplStack_328);
        ppppppplVar33 = ppppppplStack_320;
        ppppppplStack_328 = (long *******)0x0;
        ppppppplStack_320 = (long *******)0x0;
        if (ppppppplVar33 != (long *******)0x0) {
          LOCK();
          ppppppplVar27 = ppppppplVar33 + 1;
          pppppplVar25 = *ppppppplVar27;
          *ppppppplVar27 = (long ******)((long)*ppppppplVar27 + -1);
          UNLOCK();
          if (pppppplVar25 == (long ******)0x0) {
            (*(code *)(*ppppppplVar33)[2])(ppppppplVar33);
            func_0x0412c2d0(ppppppplVar33);
          }
          ppppppplVar33 = ppppppplStack_320;
          ppppppplStack_318 = (long *******)0x0;
          if (ppppppplStack_320 != (long *******)0x0) {
            LOCK();
            plVar20 = (long *)(ppppppplStack_320 + 1);
            lVar31 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)((long)*ppppppplStack_320 + 0x10))(ppppppplStack_320);
              func_0x0412c2d0(ppppppplVar33);
            }
          }
        }
        uVar21 = (*(code *)(*param_1)[0x149])(param_1);
        (*(code *)(*unaff_R12)[0xe])(unaff_R12,uVar21);
        if (param_1[0xf] != (long ******)0x0) {
          func_0x0d083aa0(unaff_R12);
        }
        ppppppplStack_320 = (long *******)0x0;
        pppppplVar25 = param_1[0x7a];
        if (pppppplVar25 != (long ******)0x0) {
          ppppppplStack_328 = (long *******)pppppplVar25[1];
          unaff_R13 = (long *******)pppppplVar25[2];
          if (unaff_R13 != (long *******)0x0) {
            LOCK();
            unaff_R13[1] = (long ******)((long)unaff_R13[1] + 1);
            UNLOCK();
            ppppppplStack_320 = unaff_R13;
          }
          if ((ppppppplStack_328 != (long *******)0x0) &&
             (ppppppplStack_318 = (long *******)param_1[0x7b], *(char *)ppppppplStack_328 != '\0'))
          {
            func_0x0d083e20(unaff_R12);
            ppppppplStack_328 = (long *******)0x0;
            ppppppplStack_320 = (long *******)0x0;
            if (unaff_R13 != (long *******)0x0) {
              LOCK();
              ppppppplVar29 = unaff_R13 + 1;
              pppppplVar25 = *ppppppplVar29;
              *ppppppplVar29 = (long ******)((long)*ppppppplVar29 + -1);
              UNLOCK();
              if (pppppplVar25 == (long ******)0x0) {
                (*(code *)(*unaff_R13)[2])(unaff_R13);
                func_0x0412c2d0(unaff_R13);
              }
              ppppppplVar29 = ppppppplStack_320;
              ppppppplStack_318 = (long *******)0x0;
              if (ppppppplStack_320 != (long *******)0x0) {
                LOCK();
                ppppppplVar33 = ppppppplStack_320 + 1;
                pppppplVar25 = *ppppppplVar33;
                *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + -1);
                UNLOCK();
                if (pppppplVar25 == (long ******)0x0) {
                  (*(code *)(*ppppppplStack_320)[2])(ppppppplStack_320);
                  func_0x0412c2d0(ppppppplVar29);
                }
              }
            }
            pppppplVar25 = param_1[0x8a];
            param_1[0x8a] = (long ******)unaff_R12;
            if (pppppplVar25 != (long ******)0x0) {
              (*(code *)(*pppppplVar25)[1])();
            }
            pppppplVar25 = param_1[0xe8];
            puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
            if (puVar22 == (undefined8 *)0x0) {
              func_0x0eec74c0(8,0);
            }
            *puVar22 = &UNK_0f1e1e70;
            puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
            if (puVar23 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x40,0);
            }
            *puVar23 = &UNK_0f1e52d8;
            auVar41 = func_0x0eeda000(0);
            *(undefined1 (*) [16])(puVar23 + 1) = auVar41;
            *puVar23 = &UNK_0f1e5408;
            puVar23[3] = param_1;
            if ((_DAT_0f776b30 & 1) == 0) {
              puVar23[6] = _DAT_0f776b40;
              uVar15 = uRam000000000f776b3c;
              uVar14 = _DAT_0f776b38;
              uVar13 = uRam000000000f776b34;
              *(uint *)(puVar23 + 4) = _DAT_0f776b30;
              *(undefined4 *)((long)puVar23 + 0x24) = uVar13;
              *(undefined4 *)(puVar23 + 5) = uVar14;
              *(undefined4 *)((long)puVar23 + 0x2c) = uVar15;
            }
            else {
              func_0x0412e5e0(puVar23 + 4,_DAT_0f776b40,CONCAT44(uRam000000000f776b3c,_DAT_0f776b38)
                             );
            }
            *(undefined1 *)(puVar23 + 7) = 1;
            *(undefined4 *)((long)puVar23 + 0x3c) = 0;
            lVar24 = (*(code *)(*param_1)[0x158])(param_1);
            lVar31 = 0;
            if (0x1d < (int)((ulong)(*(long *)(lVar24 + 0x20) - *(long *)(lVar24 + 0x18)) >> 4) *
                       -0x11111111) {
              lVar31 = *(long *)(lVar24 + 0x18) + 0x1b30;
            }
            plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
            if (plVar20 == (long *)0x0) {
              func_0x0eec74c0(0xb8,0);
            }
            *plVar20 = (long)&UNK_0f1e1ee8;
            plVar20[1] = lVar31;
            *(undefined1 *)(plVar20 + 2) = 0;
            plVar20[3] = 0;
            *(undefined4 *)(plVar20 + 4) = 0;
            plVar20[5] = 0;
            plVar20[6] = 0;
            plVar20[7] = 0;
            plVar20[8] = 0;
            plVar20[9] = 0;
            plVar20[10] = 0;
            plVar20[0xb] = 0;
            *(undefined4 *)(plVar20 + 0xc) = 0x3f800000;
            plVar20[0xd] = (long)puVar22;
            plVar20[0xe] = (long)puVar23;
            plVar20[0xf] = 0;
            plVar20[0x10] = 0;
            plVar20[0x11] = 0;
            plVar20[0x12] = 0;
            *(undefined4 *)(plVar20 + 0x13) = 0x3f800000;
            plVar20[0x14] = 0;
            plVar20[0x15] = 0;
            plVar20[0x16] = 0;
            plStack_2a0 = plVar20;
            func_0x0c960fa0(pppppplVar25,&plStack_2a0);
            plVar20 = plStack_2a0;
            plStack_2a0 = (long *)0x0;
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 8))();
            }
            uVar21 = (*(code *)(*param_1)[0xab])(param_1);
            pppppplVar25 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x120);
            if (pppppplVar25 == (long ******)0x0) {
              func_0x0eec74c0(0x120,0);
            }
            func_0x0c94dcc0(pppppplVar25,uVar21);
            pppppplVar26 = param_1[0xe9];
            param_1[0xe9] = pppppplVar25;
            if (pppppplVar26 != (long ******)0x0) {
              (*(code *)(*pppppplVar26)[1])();
            }
            lVar31 = (*(code *)(*param_1)[0xad])(param_1);
            if (*(char *)(lVar31 + 0x18) == '\x01') {
              pppppplVar25 = param_1[0xe9];
              if (*(char *)((long)pppppplVar25 + 0x39) == '\x01') {
                *(undefined2 *)(pppppplVar25 + 7) = 0;
                if (*(char *)((long)pppppplVar25 + 0x71) != '\x01') goto LAB_09f665b5;
LAB_09f66610:
                *(undefined2 *)(pppppplVar25 + 0xe) = 0;
                cVar17 = *(char *)((long)pppppplVar25 + 0xa9);
              }
              else {
                if (*(char *)((long)pppppplVar25 + 0x71) == '\x01') goto LAB_09f66610;
LAB_09f665b5:
                cVar17 = *(char *)((long)pppppplVar25 + 0xa9);
              }
              if (cVar17 == '\x01') {
                *(undefined2 *)(pppppplVar25 + 0x15) = 1;
              }
            }
            if (param_1[0xf] != (long ******)0x0) {
              func_0x0c94e710(param_1[0xe9]);
            }
            lVar31 = (*(code *)(*param_1)[0xad])(param_1);
            puVar34 = (undefined *)(lVar31 + 0x50);
            puVar35 = puVar34;
            if ((*(char *)(lVar31 + 0x77) == '\0') &&
               (((puVar38 = (undefined *)(lVar31 + 0x70), *(char *)(lVar31 + 0x68) != '\0' ||
                 (puVar35 = puVar38, (*(byte *)(lVar31 + 0x56) & 1) != 0)) &&
                (cVar17 = FUN_04fa7a10(puVar38,puVar34), puVar35 = puVar34, cVar17 != '\0')))) {
              puVar35 = puVar38;
            }
            if (((puVar35[6] | puVar35[0x18]) & 1) == 0) {
              puVar35 = &DAT_0f72b850;
            }
            if (((DAT_0f5a2978 == '\0') && (puVar35[0x18] == '\0')) &&
               (((DAT_0f5a2966 & 1) == 0 ||
                ((puVar35[7] != '\0' || (cVar17 = FUN_04fa7a10(puVar35,0xf5a2960), cVar17 == '\0')))
                ))) {
              pppppplVar25 = param_1[0x1f];
              pppppplVar26 = param_1[0x31];
              uStack_108 = *(undefined4 *)(param_1 + 0x30);
              uStack_104 = *(undefined4 *)((long)param_1 + 0x184);
              uStack_100 = *(undefined4 *)(param_1 + 0x31);
              uStack_fc = *(undefined4 *)((long)param_1 + 0x18c);
              if (pppppplVar26 != (long ******)0x0) {
                LOCK();
                pppppplVar26[2] = (long *****)((long)pppppplVar26[2] + 1);
                UNLOCK();
              }
              func_0x0ca19d20(pppppplVar25,&uStack_108);
              if (pppppplVar26 != (long ******)0x0) {
                func_0x0412c2d0(pppppplVar26);
              }
              pppppplVar25 = param_1[0x21];
              func_0x0ca164b0(&ppppppplStack_328);
              func_0x07750bf0(pppppplVar25);
              *pppppplVar25 = (long *****)ppppppplStack_328;
              pppppplVar25[1] = (long *****)ppppppplStack_320;
              pppppplVar25[2] = (long *****)ppppppplStack_318;
              ppppppplStack_328 = (long *******)0x0;
              ppppppplStack_320 = (long *******)0x0;
              ppppppplStack_318 = (long *******)0x0;
              uStack_2d8 = (long *******)&ppppppplStack_328;
              func_0x07750710(&uStack_2d8);
            }
            pppppplStack_1b0 = param_1[0x2b];
            pppppplVar25 = param_1[0x2a];
            pppppplVar26 = param_1[0xe4];
            lVar31 = (*(code *)(*param_1)[0xad])(param_1);
            puVar34 = (undefined *)(lVar31 + 0x50);
            puVar35 = puVar34;
            if ((*(char *)(lVar31 + 0x77) == '\0') &&
               (((puVar38 = (undefined *)(lVar31 + 0x70), *(char *)(lVar31 + 0x68) != '\0' ||
                 (puVar35 = puVar38, (*(byte *)(lVar31 + 0x56) & 1) != 0)) &&
                (cVar17 = FUN_04fa7a10(puVar38,puVar34), puVar35 = puVar34, cVar17 != '\0')))) {
              puVar35 = puVar38;
            }
            ppppppplVar29 = ppppppplStack_2e0;
            puVar34 = &DAT_0f72b850;
            if (((puVar35[6] | puVar35[0x18]) & 1) != 0) {
              puVar34 = puVar35;
            }
            func_0x0bfbd760(pppppplVar25,pppppplVar26,&pppppplStack_1b0,puVar34,ppppppplStack_2e0);
            func_0x0bc1fcb0(param_1[0x2c],param_1[0xe4]);
            pppppplVar25 = param_1[0x46];
            pppppplVar26 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
            if (pppppplVar26 == (long ******)0x0) {
              func_0x0eec74c0(0x68,0);
            }
            pppppplVar26[1] = (long *****)0x0;
            pppppplVar26[2] = (long *****)0x0;
            *pppppplVar26 = (long *****)&UNK_0f1f8c70;
            pppppplVar8 = pppppplVar26 + 3;
            func_0x0c919770(pppppplVar8,param_1,pppppplVar25);
            if (pppppplVar26[4] == (long *****)0x0) {
              LOCK();
              pppppplVar26[1] = (long *****)((long)pppppplVar26[1] + 1);
              UNLOCK();
              LOCK();
              pppppplVar26[2] = (long *****)((long)pppppplVar26[2] + 1);
              UNLOCK();
              pppppplVar26[3] = (long *****)pppppplVar8;
              pppppplVar26[4] = (long *****)pppppplVar26;
LAB_09f6683b:
              pppppplVar25 = pppppplVar26 + 1;
              LOCK();
              ppppplVar7 = *pppppplVar25;
              *pppppplVar25 = (long *****)((long)*pppppplVar25 + -1);
              UNLOCK();
              if (ppppplVar7 == (long *****)0x0) {
                (*(code *)(*pppppplVar26)[2])(pppppplVar26);
                func_0x0412c2d0(pppppplVar26);
              }
            }
            else if (pppppplVar26[4][1] == (long ****)0xffffffffffffffff) {
              LOCK();
              pppppplVar26[1] = (long *****)((long)pppppplVar26[1] + 1);
              UNLOCK();
              LOCK();
              pppppplVar26[2] = (long *****)((long)pppppplVar26[2] + 1);
              UNLOCK();
              pppppplVar26[3] = (long *****)pppppplVar8;
              pppppplVar26[4] = (long *****)pppppplVar26;
              func_0x0412c2d0();
              goto LAB_09f6683b;
            }
            param_1[0xec] = pppppplVar8;
            unaff_R12 = (long *******)param_1[0xed];
            param_1[0xed] = pppppplVar26;
            if (unaff_R12 != (long *******)0x0) {
              LOCK();
              ppppppplVar33 = unaff_R12 + 1;
              pppppplVar25 = *ppppppplVar33;
              *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + -1);
              UNLOCK();
              if (pppppplVar25 == (long ******)0x0) {
                (*(code *)(*unaff_R12)[2])(unaff_R12);
                func_0x0412c2d0(unaff_R12);
              }
            }
            lVar31 = (*(code *)(*param_1)[0x11b])(param_1);
            if (lVar31 != 0) {
              unaff_R12 = (long *******)(*(code *)(*param_1)[0x1f])(param_1);
              pppppplStack_218 = param_1[0x18];
              pppppplStack_210 = param_1[0x19];
              if (param_1[0x19] != (long ******)0x0) {
                LOCK();
                pppppplVar25 = param_1[0x19] + 1;
                *pppppplVar25 = (long *****)((long)*pppppplVar25 + 1);
                UNLOCK();
              }
              pppppplStack_208 = param_1[0x1a];
              uVar21 = (*(code *)(*param_1)[0x4e])(param_1);
              func_0x0cb1e250(unaff_R12,lVar31,ppppppplVar29,&pppppplStack_218,uVar21);
              pppppplVar25 = pppppplStack_210;
              pppppplStack_218 = (long ******)0x0;
              pppppplStack_210 = (long ******)0x0;
              if (pppppplVar25 == (long ******)0x0) {
                pppppplStack_208 = (long ******)0x0;
              }
              else {
                LOCK();
                pppppplVar26 = pppppplVar25 + 1;
                ppppplVar7 = *pppppplVar26;
                *pppppplVar26 = (long *****)((long)*pppppplVar26 + -1);
                UNLOCK();
                if (ppppplVar7 == (long *****)0x0) {
                  (*(code *)(*pppppplVar25)[2])(pppppplVar25);
                  func_0x0412c2d0(pppppplVar25);
                }
                pppppplVar25 = pppppplStack_210;
                pppppplStack_208 = (long ******)0x0;
                if (pppppplStack_210 != (long ******)0x0) {
                  LOCK();
                  plVar20 = (long *)(pppppplStack_210 + 1);
                  lVar24 = *plVar20;
                  *plVar20 = *plVar20 + -1;
                  UNLOCK();
                  if (lVar24 == 0) {
                    (**(code **)((long)*pppppplStack_210 + 0x10))(pppppplStack_210);
                    func_0x0412c2d0(pppppplVar25);
                  }
                }
              }
              (*(code *)(*param_1)[0x12a])(&uStack_2d8,param_1);
              ppppppplStack_328 = (long *******)((ulong)ppppppplStack_328 & 0xffffffffffffff00);
              ppppppplStack_310 = (long *******)((ulong)ppppppplStack_310 & 0xffffffffffffff00);
              if (((uStack_2d0 != (long *******)0x0) &&
                  (((uint)ppppppplStack_2c8 & 0x3ffff) != 0x3ffff)) &&
                 (plVar20 = (long *)func_0x0412c300(), plVar20 != (long *)0x0)) {
                if (uStack_2d8 != (long *******)0x0) {
                  uVar19 = (ulong)(((uint)ppppppplStack_2c8 & 0x3ffff) >> 0xb);
                  if (((uVar19 < (ulong)((long)uStack_2d8[0x1c] - (long)uStack_2d8[0x1b] >> 3)) &&
                      (ppppplVar7 = uStack_2d8[0x1b][uVar19], ppppplVar7 != (long *****)0x0)) &&
                     ((uVar6 = *(uint *)((long)ppppplVar7 +
                                        (ulong)((uint)ppppppplStack_2c8 & 0x7ff) * 4),
                      ((uint)ppppppplStack_2c8 & 0xfffc0000 ^ uVar6) < 0x3ffff &&
                      ((long ******)(ulong)(uVar6 & 0x3ffff) < uStack_2d8[0x23])))) {
                    ppppppplStack_328 = uStack_2d8;
                    ppppppplStack_320 = uStack_2d8 + 5;
                    ppppppplStack_318 =
                         (long *******)CONCAT44(ppppppplStack_318._4_4_,(uint)ppppppplStack_2c8);
                    ppppppplStack_310 = (long *******)CONCAT71(ppppppplStack_310._1_7_,1);
                  }
                }
                LOCK();
                plVar1 = plVar20 + 1;
                lVar24 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar24 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  func_0x0412c2d0(plVar20);
                }
              }
              if (uStack_2d0 != (long *******)0x0) {
                func_0x0412c2d0();
              }
              if ((char)ppppppplStack_310 == '\x01') {
                uVar6 = (uint)ppppppplStack_318;
                lVar24 = func_0x0741d930(ppppppplStack_320,0xd73ab3e2);
                uVar6 = *(uint *)(*(long *)(*(long *)(lVar24 + 8) + (ulong)((uVar6 & 0x3f800) >> 8))
                                 + (ulong)(uVar6 & 0x7ff) * 4);
                lVar24 = *(long *)(*(long *)(lVar24 + 0x50) + (ulong)((uVar6 & 0x3ff80) >> 4));
                uVar21 = (*(code *)(*param_1)[0x194])(param_1);
                pppppplStack_238 = param_1[0x18];
                pppppplStack_230 = param_1[0x19];
                if (param_1[0x19] != (long ******)0x0) {
                  LOCK();
                  pppppplVar25 = param_1[0x19] + 1;
                  *pppppplVar25 = (long *****)((long)*pppppplVar25 + 1);
                  UNLOCK();
                }
                pppppplStack_228 = param_1[0x1a];
                func_0x07225930((ulong)(uVar6 & 0x7f) * 0x98 + lVar24,&ppppppplStack_328,uVar21,
                                lVar31,&pppppplStack_238);
                pppppplVar25 = pppppplStack_230;
                pppppplStack_238 = (long ******)0x0;
                pppppplStack_230 = (long ******)0x0;
                if (pppppplVar25 == (long ******)0x0) {
                  pppppplStack_228 = (long ******)0x0;
                }
                else {
                  LOCK();
                  pppppplVar26 = pppppplVar25 + 1;
                  ppppplVar7 = *pppppplVar26;
                  *pppppplVar26 = (long *****)((long)*pppppplVar26 + -1);
                  UNLOCK();
                  if (ppppplVar7 == (long *****)0x0) {
                    (*(code *)(*pppppplVar25)[2])(pppppplVar25);
                    func_0x0412c2d0(pppppplVar25);
                  }
                  pppppplVar25 = pppppplStack_230;
                  pppppplStack_228 = (long ******)0x0;
                  if (pppppplStack_230 != (long ******)0x0) {
                    LOCK();
                    plVar20 = (long *)(pppppplStack_230 + 1);
                    lVar24 = *plVar20;
                    *plVar20 = *plVar20 + -1;
                    UNLOCK();
                    if (lVar24 == 0) {
                      (**(code **)((long)*pppppplStack_230 + 0x10))(pppppplStack_230);
                      func_0x0412c2d0(pppppplVar25);
                    }
                  }
                }
                uVar6 = (uint)ppppppplStack_318;
                lVar24 = func_0x08a99c90(ppppppplStack_320,0x2e0151a7);
                uVar6 = *(uint *)(*(long *)(*(long *)(lVar24 + 8) + (ulong)((uVar6 & 0x3f800) >> 8))
                                 + (ulong)(uVar6 & 0x7ff) * 4);
                lVar24 = *(long *)(*(long *)(lVar24 + 0x50) + (ulong)((uVar6 & 0x3ff80) >> 4));
                uVar21 = (*(code *)(*param_1)[0x194])(param_1);
                func_0x07231f10((ulong)((uVar6 & 0x7f) * 0x60) + lVar24,lVar31,uVar21);
                pppppplVar26 = ppppppplStack_320[7];
                iVar18 = (int)((ulong)((long)ppppppplStack_320[8] - (long)pppppplVar26) >> 3);
                pppppplVar25 = pppppplVar26 + (iVar18 - 1U & 0x3ce7ae43);
                pppppplVar8 = ppppppplStack_320[10];
                do {
                  ppppplVar7 = *pppppplVar25;
                  if (ppppplVar7 == (long *****)0xffffffffffffffff) {
                    pppppplVar32 = ppppppplStack_320[0xb];
                    goto LAB_09f66d22;
                  }
                  pppppplVar25 = pppppplVar8 + (long)ppppplVar7 * 4;
                } while (*(int *)(pppppplVar8 + (long)ppppplVar7 * 4 + 1) != 0x3ce7ae43);
                pppppplVar32 = ppppppplStack_320[0xb];
                if ((pppppplVar25 == pppppplVar32) ||
                   (ppppplVar7 = pppppplVar25[2], ppppplVar7 == (long *****)0x0)) {
LAB_09f66d22:
                  lVar31 = 0;
                }
                else {
                  uVar19 = (ulong)(((uint)ppppppplStack_318 & 0x3ffff) >> 0xb);
                  if (((ulong)((long)ppppplVar7[2] - (long)ppppplVar7[1] >> 3) <= uVar19) ||
                     ((ppplVar9 = ppppplVar7[1][uVar19], ppplVar9 == (long ***)0x0 ||
                      (uVar6 = *(uint *)((long)ppplVar9 +
                                        (ulong)((uint)ppppppplStack_318 & 0x7ff) * 4),
                      0x3fffe < ((uint)ppppppplStack_318 & 0xfffc0000 ^ uVar6)))))
                  goto LAB_09f66d22;
                  lVar31 = (ulong)((uVar6 & 0x7f) * 0x28) +
                           *(long *)((long)ppppplVar7[10] + (ulong)((uVar6 & 0x3ff80) >> 4));
                }
                pppppplVar26 = pppppplVar26 + (iVar18 - 1U & 0x62a984b0);
                do {
                  ppppplVar7 = *pppppplVar26;
                  if (ppppplVar7 == (long *****)0xffffffffffffffff) {
                    return 0;
                  }
                  pppppplVar26 = pppppplVar8 + (long)ppppplVar7 * 4;
                } while (*(int *)(pppppplVar8 + (long)ppppplVar7 * 4 + 1) != 0x62a984b0);
                if (pppppplVar26 == pppppplVar32) {
                  return 0;
                }
                ppppplVar7 = pppppplVar26[2];
                if (ppppplVar7 == (long *****)0x0) {
                  return 0;
                }
                uVar19 = (ulong)(((uint)ppppppplStack_318 & 0x3ffff) >> 0xb);
                if ((ulong)((long)ppppplVar7[2] - (long)ppppplVar7[1] >> 3) <= uVar19) {
                  return 0;
                }
                ppplVar9 = ppppplVar7[1][uVar19];
                if (ppplVar9 == (long ***)0x0) {
                  return 0;
                }
                uVar6 = *(uint *)((long)ppplVar9 + (ulong)((uint)ppppppplStack_318 & 0x7ff) * 4);
                unaff_R12 = (long *******)(ulong)uVar6;
                if (0x3fffe < ((uint)ppppppplStack_318 & 0xfffc0000 ^ uVar6)) {
                  return 0;
                }
                if (lVar31 == 0) {
                  return 0;
                }
                ppppppplStack_2e0 =
                     *(long ********)((long)ppppplVar7[10] + (ulong)((uVar6 & 0x3ff80) >> 4));
                if (ppppppplStack_2e0 == (long *******)0x0) {
                  return 0;
                }
                uVar21 = (*(code *)(*param_1)[0xad])(param_1);
                uVar21 = func_0x0d213190(uVar21);
                func_0x0caabad0(uVar21);
                puVar22 = (undefined8 *)(*(code *)(*param_1)[0x1f])(param_1);
                pbVar36 = (byte *)*puVar22;
                pbVar10 = (byte *)puVar22[1];
                if (pbVar36 != pbVar10) {
                  unaff_R12 = ppppppplStack_2e0 + (ulong)(uVar6 & 0x7f) * 5;
                  do {
                    bVar39 = (*pbVar36 & 1) != 0;
                    pbVar30 = pbVar36 + 1;
                    if (bVar39) {
                      pbVar30 = *(byte **)(pbVar36 + 0x10);
                    }
                    uVar19 = (ulong)(*pbVar36 >> 1);
                    if (bVar39) {
                      uVar19 = *(ulong *)(pbVar36 + 8);
                    }
                    func_0x0caaab20(lVar31,unaff_R12,pbVar30,uVar19,puVar22);
                    pbVar36 = pbVar36 + 0x110;
                  } while (pbVar36 != pbVar10);
                }
              }
            }
            uVar21 = (*(code *)(*param_1)[0x18c])(param_1);
            ppppppplVar29 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
            if (ppppppplVar29 == (long *******)0x0) {
              func_0x0eec74c0(0x50,0);
            }
            func_0x0d196540(ppppppplVar29,uVar21);
            pppppplVar25 = param_1[0xf4];
            param_1[0xf4] = (long ******)ppppppplVar29;
            if (pppppplVar25 != (long ******)0x0) {
              func_0x0d196cf0(pppppplVar25);
              func_0x0412a280(pppppplVar25,0x50);
              ppppppplVar29 = (long *******)param_1[0xf4];
            }
            uVar21 = (*(code *)(*param_1)[0xab])(param_1);
            func_0x0d1970c0(ppppppplVar29,uVar21);
            if (param_1[0xf] != (long ******)0x0) {
              func_0x0d197610(param_1[0xf4]);
            }
            (*(code *)(*param_1)[0x19c])(param_1);
            unaff_R13 = (long *******)param_1[1];
            ppppppplVar33 = (long *******)param_1[2];
            if (ppppppplVar33 != (long *******)0x0) {
              LOCK();
              ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
              UNLOCK();
            }
            if (unaff_R13 != (long *******)0x0) {
              uStack_1d8 = 0;
              plStack_1d0 = (long *)0x0;
              uStack_1c8 = 0;
              ppppppplStack_1f0 = unaff_R13;
              ppppppplStack_1e8 = ppppppplVar33;
              ppppppplStack_1e0 = param_1;
              if (*(char *)unaff_R13 != '\0') {
                ppppppplVar27 =
                     (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
                if (ppppppplVar27 == (long *******)0x0) {
                  func_0x0eec74c0(0x280,0);
                }
                ppppppplVar29 = ppppppplVar27;
                ppppppplStack_288 = unaff_R13;
                ppppppplStack_280 = ppppppplVar33;
                ppppppplStack_278 = param_1;
                if (ppppppplVar33 == (long *******)0x0) {
                  if (*(char *)unaff_R13 != '\0') {
                    *ppppppplVar27 = (long ******)unaff_R13;
                    ppppppplVar27[1] = (long ******)0x0;
                    ppppppplVar27[2] = (long ******)param_1;
                    ppppppplStack_2b8 = (long *******)0x0;
                    cVar17 = *(char *)unaff_R13;
joined_r0x09f67089:
                    uStack_2d0 = (long *******)0x0;
                    uStack_2d8 = (long *******)&UNK_09f68eb0;
                    ppppppplStack_2c8 = ppppppplVar27;
                    ppppppplStack_2c0 = unaff_R13;
                    ppppppplStack_2b0 = param_1;
                    if (cVar17 != '\0') {
                      uStack_2d0 = (long *******)0x0;
                      uStack_2d8 = (long *******)&UNK_09f68eb0;
                      ppppppplStack_308 = (long *******)0x0;
                      ppppppplStack_2e0 = ppppppplVar27;
                      unaff_R12 = (long *******)
                                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                      if (unaff_R12 == (long *******)0x0) {
                        func_0x0eec74c0(0x38,0);
                      }
                      *unaff_R12 = (long ******)&UNK_0f1f8d70;
                      unaff_R12[1] = (long ******)&UNK_09f68eb0;
                      unaff_R12[2] = (long ******)0x0;
                      unaff_R12[3] = (long ******)ppppppplVar27;
                      unaff_R12[4] = (long ******)unaff_R13;
                      unaff_R12[5] = (long ******)ppppppplVar33;
                      if (ppppppplVar33 != (long *******)0x0) {
                        LOCK();
                        ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
                        UNLOCK();
                      }
                      unaff_R12[6] = (long ******)param_1;
                      if (*(char *)unaff_R13 != '\0') {
                        ppppppplStack_290 = ppppppplVar27 + 4;
                        plStack_248 = (long *)0x0;
                        pplStack_178 = (long **)0x0;
                        plStack_48 = (long *)0x0;
                        ppppppplStack_308 = unaff_R12;
                        func_0x09a26e20(ppppppplStack_290,0x14,&ppppppplStack_328,&uStack_268,
                                        aplStack_198,alStack_68);
                        if (plStack_48 == alStack_68) {
                          lVar31 = 0x20;
LAB_09f6727b:
                          (**(code **)(*plStack_48 + lVar31))();
                          if (pplStack_178 != aplStack_198) goto LAB_09f671a2;
LAB_09f67292:
                          lVar31 = 0x20;
LAB_09f6729c:
                          (**(code **)((long)*pplStack_178 + lVar31))();
                          if (plStack_248 != &uStack_268) goto LAB_09f671c6;
LAB_09f672b3:
                          lVar31 = 0x20;
LAB_09f672b8:
                          (**(code **)(*plStack_248 + lVar31))();
                          if ((long ********)ppppppplStack_308 != &ppppppplStack_328)
                          goto LAB_09f671e2;
LAB_09f672cc:
                          lVar31 = 0x20;
LAB_09f672d1:
                          (**(code **)((long)*ppppppplStack_308 + lVar31))();
                          if (ppppppplVar33 != (long *******)0x0) goto LAB_09f67200;
LAB_09f672e7:
                          ppppppplStack_2b8 = (long *******)0x0;
                          ppppppplStack_2c0 = (long *******)0x0;
                          unaff_R12 = (long *******)&ppppppplStack_328;
                          ppppppplStack_2b0 = (long *******)0x0;
                        }
                        else {
                          lVar31 = 0x28;
                          if (plStack_48 != (long *)0x0) goto LAB_09f6727b;
                          if (pplStack_178 == aplStack_198) goto LAB_09f67292;
LAB_09f671a2:
                          lVar31 = 0x28;
                          if (pplStack_178 != (long **)0x0) goto LAB_09f6729c;
                          if (plStack_248 == &uStack_268) goto LAB_09f672b3;
LAB_09f671c6:
                          lVar31 = 0x28;
                          if (plStack_248 != (long *)0x0) goto LAB_09f672b8;
                          if ((long ********)ppppppplStack_308 == &ppppppplStack_328)
                          goto LAB_09f672cc;
LAB_09f671e2:
                          lVar31 = 0x28;
                          if (ppppppplStack_308 != (long *******)0x0) goto LAB_09f672d1;
                          if (ppppppplVar33 == (long *******)0x0) goto LAB_09f672e7;
LAB_09f67200:
                          ppppppplStack_2b8 = (long *******)0x0;
                          ppppppplStack_2c0 = (long *******)0x0;
                          LOCK();
                          ppppppplVar29 = ppppppplVar33 + 1;
                          pppppplVar25 = *ppppppplVar29;
                          *ppppppplVar29 = (long ******)((long)*ppppppplVar29 + -1);
                          UNLOCK();
                          if (pppppplVar25 == (long ******)0x0) {
                            (*(code *)(*ppppppplVar33)[2])(ppppppplVar33);
                            func_0x0412c2d0(ppppppplVar33);
                          }
                          unaff_R12 = ppppppplStack_2b8;
                          ppppppplStack_2b0 = (long *******)0x0;
                          if (ppppppplStack_2b8 != (long *******)0x0) {
                            LOCK();
                            ppppppplVar29 = ppppppplStack_2b8 + 1;
                            pppppplVar25 = *ppppppplVar29;
                            *ppppppplVar29 = (long ******)((long)*ppppppplVar29 + -1);
                            UNLOCK();
                            if (pppppplVar25 == (long ******)0x0) {
                              (*(code *)(*ppppppplStack_2b8)[2])(ppppppplStack_2b8);
                              func_0x0412c2d0(unaff_R12);
                            }
                          }
                        }
                        ppppppplVar29 = ppppppplStack_278;
                        unaff_R13 = ppppppplStack_280;
                        ppppppplVar28 = ppppppplStack_288;
                        puStack_168 = &UNK_09f69170;
                        uStack_160 = 0;
                        ppppppplStack_150 = ppppppplStack_288;
                        ppppppplStack_148 = ppppppplStack_280;
                        if (ppppppplStack_280 != (long *******)0x0) {
                          LOCK();
                          ppppppplStack_280[1] = (long ******)((long)ppppppplStack_280[1] + 1);
                          UNLOCK();
                        }
                        ppppppplStack_140 = ppppppplStack_278;
                        ppppppplStack_158 = ppppppplVar27;
                        if ((ppppppplStack_288 != (long *******)0x0) &&
                           (*(char *)ppppppplStack_288 != '\0')) {
                          ppppppplStack_d8 = (long *******)0x0;
                          unaff_R12 = (long *******)
                                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                          if (unaff_R12 == (long *******)0x0) {
                            func_0x0eec74c0(0x38,0);
                          }
                          *unaff_R12 = (long ******)&UNK_0f1f8d70;
                          unaff_R12[1] = (long ******)&UNK_09f69170;
                          unaff_R12[2] = (long ******)0x0;
                          unaff_R12[3] = (long ******)ppppppplStack_2e0;
                          unaff_R12[4] = (long ******)ppppppplVar28;
                          unaff_R12[5] = (long ******)unaff_R13;
                          if (unaff_R13 != (long *******)0x0) {
                            LOCK();
                            unaff_R13[1] = (long ******)((long)unaff_R13[1] + 1);
                            UNLOCK();
                          }
                          unaff_R12[6] = (long ******)ppppppplVar29;
                          if (*(char *)ppppppplVar28 != '\0') break;
                        }
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
                  UNLOCK();
                  if (*(char *)unaff_R13 != '\0') {
                    *ppppppplVar27 = (long ******)unaff_R13;
                    ppppppplVar27[1] = (long ******)ppppppplVar33;
                    LOCK();
                    ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
                    UNLOCK();
                    ppppppplVar27[2] = (long ******)param_1;
                    if ((*ppppppplVar27 != (long ******)0x0) && (((ulong)**ppppppplVar27 & 1) != 0))
                    {
                      LOCK();
                      ppppppplVar33[1] = (long ******)((long)ppppppplVar33[1] + 1);
                      UNLOCK();
                      cVar17 = *(char *)unaff_R13;
                      ppppppplStack_2b8 = ppppppplVar33;
                      goto joined_r0x09f67089;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_09f6772d:
    func_0x04890760();
LAB_09f67732:
    func_0x0eec74c0(0x2b8,0);
  } while( true );
  plStack_118 = (long *)0x0;
  plStack_78 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  ppppppplStack_d8 = unaff_R12;
  func_0x09a26e20(ppppppplStack_2e0 + 0x2a,1,apppppplStack_f8,alStack_138,alStack_98,alStack_c8);
  if (plStack_a8 == alStack_c8) {
    lVar31 = 0x20;
LAB_09f674c7:
    (**(code **)(*plStack_a8 + lVar31))();
    if (plStack_78 != alStack_98) goto LAB_09f67475;
LAB_09f674da:
    lVar31 = 0x20;
LAB_09f674df:
    (**(code **)(*plStack_78 + lVar31))();
    if (plStack_118 != alStack_138) goto LAB_09f6748c;
LAB_09f674f2:
    lVar31 = 0x20;
LAB_09f674fa:
    (**(code **)(*plStack_118 + lVar31))();
    if (ppppppplStack_d8 != apppppplStack_f8) goto LAB_09f674ae;
LAB_09f67515:
    lVar31 = 0x20;
  }
  else {
    lVar31 = 0x28;
    if (plStack_a8 != (long *)0x0) goto LAB_09f674c7;
    if (plStack_78 == alStack_98) goto LAB_09f674da;
LAB_09f67475:
    lVar31 = 0x28;
    if (plStack_78 != (long *)0x0) goto LAB_09f674df;
    if (plStack_118 == alStack_138) goto LAB_09f674f2;
LAB_09f6748c:
    lVar31 = 0x28;
    if (plStack_118 != (long *)0x0) goto LAB_09f674fa;
    if (ppppppplStack_d8 == apppppplStack_f8) goto LAB_09f67515;
LAB_09f674ae:
    lVar31 = 0x28;
    if (ppppppplStack_d8 == (long *******)0x0) goto LAB_09f67520;
  }
  (**(code **)((long)*ppppppplStack_d8 + lVar31))();
LAB_09f67520:
  ppppppplVar29 = ppppppplStack_2e0;
  ppppppplStack_150 = (long *******)0x0;
  ppppppplStack_148 = (long *******)0x0;
  if (unaff_R13 != (long *******)0x0) {
    LOCK();
    ppppppplVar27 = unaff_R13 + 1;
    pppppplVar25 = *ppppppplVar27;
    *ppppppplVar27 = (long ******)((long)*ppppppplVar27 + -1);
    UNLOCK();
    if (pppppplVar25 == (long ******)0x0) {
      (*(code *)(*unaff_R13)[2])(unaff_R13);
      func_0x0412c2d0(unaff_R13);
    }
    ppppppplVar27 = ppppppplStack_148;
    ppppppplStack_140 = (long *******)0x0;
    if (ppppppplStack_148 != (long *******)0x0) {
      LOCK();
      plVar20 = (long *)(ppppppplStack_148 + 1);
      lVar31 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)((long)*ppppppplStack_148 + 0x10))(ppppppplStack_148);
        func_0x0412c2d0(ppppppplVar27);
      }
    }
  }
  ppppppplStack_288 = (long *******)0x0;
  ppppppplStack_280 = (long *******)0x0;
  if (ppppppplVar33 != (long *******)0x0) {
    LOCK();
    ppppppplVar27 = ppppppplVar33 + 1;
    pppppplVar25 = *ppppppplVar27;
    *ppppppplVar27 = (long ******)((long)*ppppppplVar27 + -1);
    UNLOCK();
    if (pppppplVar25 == (long ******)0x0) {
      (*(code *)(*ppppppplVar33)[2])(ppppppplVar33);
      func_0x0412c2d0(ppppppplVar33);
    }
    ppppppplVar33 = ppppppplStack_280;
    ppppppplStack_278 = (long *******)0x0;
    if (ppppppplStack_280 != (long *******)0x0) {
      LOCK();
      plVar20 = (long *)(ppppppplStack_280 + 1);
      lVar31 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)((long)*ppppppplStack_280 + 0x10))(ppppppplStack_280);
        func_0x0412c2d0(ppppppplVar33);
      }
    }
  }
  pppppplVar25 = param_1[0x120];
  param_1[0x120] = (long ******)ppppppplVar29;
  if (pppppplVar25 != (long ******)0x0) {
    func_0x09f96c80();
  }
  ppppppplVar29 = ppppppplStack_1e8;
  ppppppplStack_1f0 = (long *******)0x0;
  ppppppplStack_1e8 = (long *******)0x0;
  if (ppppppplVar29 == (long *******)0x0) {
    ppppppplStack_1e0 = (long *******)0x0;
  }
  else {
    LOCK();
    ppppppplVar33 = ppppppplVar29 + 1;
    pppppplVar25 = *ppppppplVar33;
    *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + -1);
    UNLOCK();
    if (pppppplVar25 == (long ******)0x0) {
      (*(code *)(*ppppppplVar29)[2])(ppppppplVar29);
      func_0x0412c2d0(ppppppplVar29);
    }
    ppppppplVar29 = ppppppplStack_1e8;
    ppppppplStack_1e0 = (long *******)0x0;
    if (ppppppplStack_1e8 != (long *******)0x0) {
      LOCK();
      plVar20 = (long *)(ppppppplStack_1e8 + 1);
      lVar31 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)((long)*ppppppplStack_1e8 + 0x10))(ppppppplStack_1e8);
        func_0x0412c2d0(ppppppplVar29);
      }
    }
  }
  plVar20 = plStack_1d0;
  uStack_1d8 = 0;
  plStack_1d0 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar1 = plVar20 + 1;
    lVar31 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    plVar20 = plStack_1d0;
    uStack_1c8 = 0;
    if (plStack_1d0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1d0 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        func_0x0412c2d0(plVar20);
      }
    }
  }
  return 1;
}


