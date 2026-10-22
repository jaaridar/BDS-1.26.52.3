/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9a81760 (ELF vaddr 0x9981760)
 * Label: caller-of-callee
 * Body:  [[09a81760, 09a8182c] [09a81830, 09a81856] [09a81860, 09a818db] [09a826dd, 09a82759]]
 * Ghidra: FUN_09a81760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09a81760(long param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  long lStack_458;
  undefined1 *puStack_450;
  undefined1 *puStack_448;
  code *pcStack_440;
  undefined1 auStack_410 [16];
  undefined1 auStack_400 [16];
  byte bStack_3f0;
  undefined1 uStack_3ef;
  undefined6 uStack_3ee;
  undefined8 uStack_3e0;
  undefined1 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  uint uStack_3c0;
  undefined4 uStack_3bc;
  char cStack_3b8;
  ulong uStack_328;
  long lStack_320;
  undefined4 uStack_314;
  undefined1 *puStack_310;
  long *plStack_308;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [24];
  code *pcStack_2e0;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [24];
  code *pcStack_298;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [24];
  code *pcStack_250;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [24];
  code *pcStack_208;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [24];
  code *pcStack_1c0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  code *pcStack_178;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [24];
  code *pcStack_130;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  code *pcStack_a0;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (uVar1 == 0) {
    return;
  }
  plStack_308 = (long *)(param_1 + 0x50);
  uVar16 = (ulong)param_2;
  uVar10 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar10 >> 0x38 < 2) {
    uVar13 = (ulong)(param_2 & (int)uVar1 - 1U);
  }
  else {
    uVar13 = uVar16;
    if (uVar1 <= uVar16) {
      uVar13 = (ulong)param_2 % (uVar1 & 0xffffffff);
    }
  }
  plVar14 = *(long **)(*plStack_308 + uVar13 * 8);
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (1 < (byte)(uVar10 >> 0x38)) {
    do {
      uVar10 = plVar14[1];
      if (uVar10 == uVar16) {
        if (*(uint *)(plVar14 + 2) == param_2) goto LAB_09a818ae;
      }
      else {
        if (uVar1 <= uVar10) {
          if ((uVar10 | uVar1) >> 0x20 == 0) {
            if ((uVar10 & 0xffffffff) % (uVar1 & 0xffffffff) != uVar13) {
              return;
            }
            goto LAB_09a81865;
          }
          uVar10 = uVar10 % uVar1;
        }
        if (uVar10 != uVar13) {
          return;
        }
      }
LAB_09a81865:
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar14[1] == uVar16) {
      if (*(uint *)(plVar14 + 2) == param_2) break;
    }
    else if ((plVar14[1] & uVar1 - 1) != uVar13) {
      return;
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_09a818ae:
  if (4 < *(uint *)(plVar14 + 0xd)) goto LAB_09a826dd;
  plStack_460 = plVar14 + 3;
  switch(*(uint *)(plVar14 + 0xd)) {
  case 0:
    cVar5 = func_0x04865440(param_3);
    if ((cVar5 != '\0') && (uVar9 = func_0x04863e30(param_3,0), uVar9 < 2)) {
      uVar8 = func_0x04863e30(param_3,0);
      plVar2 = (long *)plVar14[6];
      if ((plVar2 == (long *)0x0) || (*plVar2 == 0 || (int)plVar2[1] != (int)plVar14[7])) {
        func_0x0d857ff0(&lStack_458,0xf6440c0);
      }
      else {
        func_0x09ac7780(&lStack_458,*plVar2,0,uVar8);
      }
      func_0x09ab7020(&puStack_3d8,&lStack_458);
      func_0x0d81d5c0(auStack_78,plStack_460,&puStack_3d8);
      if ((code *)CONCAT44(uStack_3bc,uStack_3c0) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_3bc,uStack_3c0))(&puStack_3d8);
      }
      if (pcStack_58 != (code *)0x0) {
        (*pcStack_58)(auStack_70);
      }
code_r0x09a82665:
      func_0x0d85dec0(&lStack_458);
      goto LAB_09a826dd;
    }
    func_0x0a12c230(&puStack_3d8,2);
    func_0x09ab5fd0(&lStack_458,&puStack_3d8);
    func_0x0d81d7e0(auStack_c0,plStack_460,&lStack_458);
    if (pcStack_440 != (code *)0x0) {
      (*pcStack_440)(&lStack_458);
    }
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(auStack_b8);
    }
    break;
  case 1:
    cVar5 = func_0x04865440(param_3);
    if ((cVar5 != '\0') && (uVar9 = func_0x04863e30(param_3,0), uVar9 < 2)) {
      cVar5 = func_0x04863800(param_3);
      if (cVar5 == '\x05') {
        bVar7 = func_0x04863ff0();
        uVar9 = (uint)(bVar7 ^ 1);
      }
      else {
        uVar9 = func_0x04863e30(param_3,0);
      }
      plVar2 = (long *)plVar14[6];
      if ((plVar2 == (long *)0x0) || (*plVar2 == 0 || (int)plVar2[1] != (int)plVar14[7])) {
        func_0x0d857ff0(&lStack_458,0xf6440e8);
      }
      else {
        func_0x09ac7950(&lStack_458,*plVar2,0,uVar9);
      }
      func_0x09ab9f90(&puStack_3d8,&lStack_458);
      func_0x0d81d5c0(auStack_108,plStack_460,&puStack_3d8);
      if ((code *)CONCAT44(uStack_3bc,uStack_3c0) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_3bc,uStack_3c0))(&puStack_3d8);
      }
      if (pcStack_e8 != (code *)0x0) {
        (*pcStack_e8)(auStack_100);
      }
      goto code_r0x09a82665;
    }
    func_0x0a12c230(&puStack_3d8,2);
    func_0x09ab5fd0(&lStack_458,&puStack_3d8);
    func_0x0d81d7e0(auStack_150,plStack_460,&lStack_458);
    if (pcStack_440 != (code *)0x0) {
      (*pcStack_440)(&lStack_458);
    }
    if (pcStack_130 != (code *)0x0) {
      (*pcStack_130)(auStack_148);
    }
    break;
  case 2:
    cVar5 = func_0x04864270(param_3);
    if (cVar5 != '\0') {
      lStack_458 = 0;
      puStack_450 = (undefined1 *)0x0;
      puStack_448 = (undefined1 *)0x0;
      func_0x04865530(auStack_410,param_3);
      func_0x048655b0(auStack_400,param_3);
      while( true ) {
        cVar5 = func_0x04862c80(auStack_410,auStack_400);
        if (cVar5 != '\0') break;
        uVar12 = func_0x04862b80(auStack_410);
        cVar5 = func_0x04865410(uVar12);
        if (cVar5 == '\0') {
          cVar5 = func_0x04865470(uVar12);
          if (cVar5 == '\0') {
            cVar5 = func_0x04865490(uVar12);
            if (cVar5 == '\0') {
              func_0x04862b40(auStack_400);
              func_0x04862b40(auStack_410);
              func_0x09a84960(&lStack_458);
              goto code_r0x09a82529;
            }
            bStack_3f0 = 0;
            uStack_3ef = 0;
            func_0x04863cb0(&puStack_478,uVar12,&bStack_3f0);
            puVar17 = puStack_450;
            uStack_3c8 = uStack_468;
            puStack_3d8 = puStack_478;
            uStack_3d0 = uStack_470;
            puStack_478 = (undefined1 *)0x0;
            uStack_470 = 0;
            uStack_468 = 0;
            uStack_3c0 = 2;
            if (puStack_450 < puStack_448) {
              *puStack_450 = 0;
              *(undefined4 *)(puStack_450 + 0x18) = 0xffffffff;
              puStack_310 = puStack_450;
              (*_UNK_0f1d08a0)(&puStack_310,&puStack_3d8);
              *(undefined4 *)(puVar17 + 0x18) = 2;
              puStack_450 = puVar17 + 0x20;
            }
            else {
              puStack_450 = (undefined1 *)func_0x09aae9d0(&lStack_458,&puStack_3d8);
            }
            if ((ulong)uStack_3c0 != 0xffffffff) {
              (**(code **)(&UNK_0f1d0878 + (ulong)uStack_3c0 * 8))(&puStack_310,&puStack_3d8);
            }
            uStack_3c0 = 0xffffffff;
            if (((ulong)puStack_478 & 1) != 0) {
              func_0x0412a280(uStack_468,(ulong)puStack_478 & 0xfffffffffffffffe);
            }
            if ((bStack_3f0 & 1) != 0) {
              func_0x0412a280(uStack_3e0,
                              CONCAT62(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)) &
                              0xfffffffffffffffe);
            }
          }
          else {
            uVar8 = func_0x04863f80(0,uVar12);
            puVar17 = puStack_450;
            puStack_3d8 = (undefined1 *)CONCAT44(puStack_3d8._4_4_,uVar8);
            uStack_3c0 = 0;
            if (puStack_450 < puStack_448) {
              *puStack_450 = 0;
              *(undefined4 *)(puStack_450 + 0x18) = 0xffffffff;
              puStack_478 = puStack_450;
              (*_UNK_0f1d0890)(&puStack_478,&puStack_3d8);
              *(undefined4 *)(puVar17 + 0x18) = 0;
              puVar17 = puVar17 + 0x20;
            }
            else {
              lVar18 = (long)puStack_450 - lStack_458;
              uVar1 = (lVar18 >> 5) + 1;
              if (0x7ffffffffffffff < uVar1) goto code_r0x09a82764;
              uStack_328 = (long)puStack_448 - lStack_458;
              uVar10 = (long)uStack_328 >> 4;
              if ((ulong)((long)uStack_328 >> 4) <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7fffffffffffffdf < uStack_328) {
                uVar10 = 0x7ffffffffffffff;
              }
              lStack_320 = lStack_458;
              if (uVar10 == 0) {
                lVar11 = 0;
              }
              else {
                uStack_314 = uVar8;
                if (0x7ffffffffffffff < uVar10) goto code_r0x09a82769;
                lVar11 = func_0x0ee32660(uVar10 << 5);
                uVar8 = uStack_314;
              }
              lVar4 = lStack_320;
              *(undefined4 *)(lVar11 + lVar18) = uVar8;
              puVar15 = (undefined1 *)(uVar10 * 0x20 + lVar11);
              *(undefined4 *)(lVar11 + 0x18 + lVar18) = 0;
              puVar17 = (undefined1 *)(lVar11 + lVar18 + 0x20);
              lVar11 = lVar11 + lVar18 + (lVar18 >> 5) * -0x20;
              func_0x0eee2f00(lVar11,lStack_320,lVar18);
              lStack_458 = lVar11;
              puStack_448 = puVar15;
              if (lVar4 != 0) {
                puStack_450 = puVar17;
                func_0x0412a280(lVar4,uStack_328);
              }
            }
            puStack_450 = puVar17;
            if ((ulong)uStack_3c0 != 0xffffffff) {
              (**(code **)(&UNK_0f1d0878 + (ulong)uStack_3c0 * 8))(&puStack_478,&puStack_3d8);
            }
          }
        }
        else {
          uVar6 = func_0x04863ff0(uVar12,0);
          puVar17 = puStack_450;
          puStack_3d8 = (undefined1 *)CONCAT71(puStack_3d8._1_7_,uVar6);
          uStack_3c0 = 1;
          if (puStack_450 < puStack_448) {
            *puStack_450 = 0;
            *(undefined4 *)(puStack_450 + 0x18) = 0xffffffff;
            puStack_478 = puStack_450;
            (*_UNK_0f1d0898)(&puStack_478,&puStack_3d8);
            *(undefined4 *)(puVar17 + 0x18) = 1;
            puVar17 = puVar17 + 0x20;
          }
          else {
            lVar18 = (long)puStack_450 - lStack_458;
            uVar1 = (lVar18 >> 5) + 1;
            if (0x7ffffffffffffff < uVar1) {
              func_0x09aaeb60();
code_r0x09a8275f:
              func_0x04882eb0();
code_r0x09a82764:
              func_0x09aaeb60();
code_r0x09a82769:
              uVar12 = func_0x04882eb0();
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              if ((code *)CONCAT44(uStack_3bc,uStack_3c0) != (code *)0x0) {
                (*(code *)CONCAT44(uStack_3bc,uStack_3c0))(&puStack_3d8);
              }
              func_0x0d85dec0(&lStack_458);
              uVar12 = func_0x0eee2d70(uVar12);
              uVar12 = func_0x0eee2d70(uVar12);
              uVar12 = func_0x0eee2d70(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              func_0x0d85dec0(&puStack_3d8);
              func_0x09a84960(&lStack_458);
              uVar12 = func_0x0eee2d70(uVar12);
              func_0x09a84960(&lStack_458);
              uVar12 = func_0x0eee2d70(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              func_0x048fb670(&puStack_3d8);
              uVar12 = func_0x0eee2d70(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              uVar12 = func_0x04882e20(uVar12);
              func_0x0600ce90(&puStack_3d8);
              func_0x04862b40(auStack_400);
              func_0x04862b40(auStack_410);
              func_0x09a84960(&lStack_458);
              uVar12 = func_0x0eee2d70(uVar12);
              func_0x04862b40(auStack_400);
              func_0x04862b40(auStack_410);
              func_0x09a84df0(&lStack_458);
              func_0x0eee2d70(uVar12);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStack_328 = (long)puStack_448 - lStack_458;
            uVar10 = (long)uStack_328 >> 4;
            if ((ulong)((long)uStack_328 >> 4) <= uVar1) {
              uVar10 = uVar1;
            }
            if (0x7fffffffffffffdf < uStack_328) {
              uVar10 = 0x7ffffffffffffff;
            }
            lStack_320 = lStack_458;
            if (uVar10 == 0) {
              lVar11 = 0;
            }
            else {
              if (0x7ffffffffffffff < uVar10) goto code_r0x09a8275f;
              lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10 << 5);
              if (lVar11 == 0) {
                func_0x0eec74c0(uVar10 << 5,0);
                lVar11 = 0;
              }
            }
            lVar4 = lStack_320;
            *(undefined1 *)(lVar11 + lVar18) = uVar6;
            puVar15 = (undefined1 *)(uVar10 * 0x20 + lVar11);
            *(undefined4 *)(lVar11 + 0x18 + lVar18) = 1;
            puVar17 = (undefined1 *)(lVar11 + lVar18 + 0x20);
            lVar11 = lVar11 + lVar18 + (lVar18 >> 5) * -0x20;
            func_0x0eee2f00(lVar11,lStack_320,lVar18);
            lStack_458 = lVar11;
            puStack_448 = puVar15;
            if (lVar4 != 0) {
              puStack_450 = puVar17;
              func_0x0412a280(lVar4,uStack_328);
            }
          }
          puStack_450 = puVar17;
          if ((ulong)uStack_3c0 != 0xffffffff) {
            (**(code **)(&UNK_0f1d0878 + (ulong)uStack_3c0 * 8))(&puStack_478,&puStack_3d8);
          }
        }
        func_0x04862ba0(auStack_410);
      }
      func_0x04862b40(auStack_400);
      func_0x04862b40(auStack_410);
      func_0x09a845e0(&puStack_3d8,plVar14[6],(int)plVar14[7],0,&lStack_458);
      func_0x09a848f0(auStack_228,plStack_460,&puStack_3d8);
      if (pcStack_208 != (code *)0x0) {
        (*pcStack_208)(auStack_220);
      }
      func_0x0d85dec0(&puStack_3d8);
      func_0x09a84960(&lStack_458);
      goto LAB_09a826dd;
    }
code_r0x09a82529:
    func_0x0a12c230(&puStack_3d8,2);
    func_0x09ab5fd0(&lStack_458,&puStack_3d8);
    func_0x0d81d7e0(auStack_270,plStack_460,&lStack_458);
    if (pcStack_440 != (code *)0x0) {
      (*pcStack_440)(&lStack_458);
    }
    if (pcStack_250 != (code *)0x0) {
      (*pcStack_250)(auStack_268);
    }
    break;
  case 3:
    cVar5 = func_0x04864270(param_3);
    if (cVar5 != '\0') {
      lStack_458 = 0;
      puStack_450 = (undefined1 *)0x0;
      puStack_448 = (undefined1 *)0x0;
      func_0x04865530(auStack_410,param_3);
      func_0x048655b0(auStack_400,param_3);
      while (cVar5 = func_0x04862c80(auStack_410,auStack_400), cVar5 == '\0') {
        uVar12 = func_0x04862b80(auStack_410);
        cVar5 = func_0x04865410(uVar12);
        if (cVar5 == '\0') {
          cVar5 = func_0x04865470(uVar12);
          if (cVar5 == '\0') {
            cVar5 = func_0x04865490(uVar12);
            if (cVar5 == '\0') {
              cVar5 = func_0x04864260(uVar12);
              if (cVar5 == '\0') {
                func_0x04862b40(auStack_400);
                func_0x04862b40(auStack_410);
                func_0x09a84df0(&lStack_458);
                goto code_r0x09a8268f;
              }
              puStack_3d8 = (undefined1 *)((ulong)puStack_3d8 & 0xffffffffffffff00);
              cStack_3b8 = '\0';
              func_0x09a84a00(&lStack_458,&puStack_3d8);
              func_0x066cbef0(&puStack_3d8);
            }
            else {
              func_0x04160690(&bStack_3f0,&UNK_01254d89);
              func_0x04863cb0(&puStack_478,uVar12,&bStack_3f0);
              uStack_3c8 = uStack_468;
              puStack_3d8 = puStack_478;
              uStack_3d0 = uStack_470;
              puStack_478 = (undefined1 *)0x0;
              uStack_470 = 0;
              uStack_468 = 0;
              uStack_3c0 = 2;
              cStack_3b8 = '\x01';
              func_0x09a84a00(&lStack_458,&puStack_3d8);
              func_0x066cbef0(&puStack_3d8);
              if (((ulong)puStack_478 & 1) != 0) {
                func_0x0412a280(uStack_468,(ulong)puStack_478 & 0xfffffffffffffffe);
              }
              if ((bStack_3f0 & 1) != 0) {
                func_0x0412a280(uStack_3e0,
                                CONCAT62(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)) &
                                0xfffffffffffffffe);
              }
            }
          }
          else {
            uVar8 = func_0x04863f80(0,uVar12);
            puVar17 = puStack_450;
            puStack_3d8 = (undefined1 *)CONCAT44(puStack_3d8._4_4_,uVar8);
            uStack_3c0 = 0;
            cStack_3b8 = '\x01';
            if (puStack_450 < puStack_448) {
              *puStack_450 = 0;
              puStack_450[0x20] = 0;
              *(undefined4 *)(puStack_450 + 0x18) = 0xffffffff;
              puStack_478 = puStack_450;
              (*_UNK_0f1d0890)(&puStack_478,&puStack_3d8);
              *(undefined4 *)(puVar17 + 0x18) = 0;
              puVar17[0x20] = 1;
              puStack_450 = puVar17 + 0x28;
            }
            else {
              puStack_450 = (undefined1 *)func_0x09aaeb70(&lStack_458,&puStack_3d8);
            }
            if ((cStack_3b8 == '\x01') && ((ulong)uStack_3c0 != 0xffffffff)) {
              (**(code **)(&UNK_0f1d0878 + (ulong)uStack_3c0 * 8))(&puStack_478,&puStack_3d8);
            }
          }
        }
        else {
          uVar6 = func_0x04863ff0(uVar12,0);
          puVar17 = puStack_450;
          puStack_3d8 = (undefined1 *)CONCAT71(puStack_3d8._1_7_,uVar6);
          uStack_3c0 = 1;
          cStack_3b8 = '\x01';
          if (puStack_450 < puStack_448) {
            *puStack_450 = 0;
            puStack_450[0x20] = 0;
            *(undefined4 *)(puStack_450 + 0x18) = 0xffffffff;
            puStack_478 = puStack_450;
            (*_UNK_0f1d0898)(&puStack_478,&puStack_3d8);
            *(undefined4 *)(puVar17 + 0x18) = 1;
            puVar17[0x20] = 1;
            puStack_450 = puVar17 + 0x28;
          }
          else {
            puStack_450 = (undefined1 *)func_0x09aaeb70(&lStack_458,&puStack_3d8);
          }
          if ((cStack_3b8 == '\x01') && ((ulong)uStack_3c0 != 0xffffffff)) {
            (**(code **)(&UNK_0f1d0878 + (ulong)uStack_3c0 * 8))(&puStack_478,&puStack_3d8);
          }
        }
        func_0x04862ba0(auStack_410);
      }
      func_0x04862b40(auStack_400);
      func_0x04862b40(auStack_410);
      func_0x09a84a80(&puStack_3d8,plVar14[6],(int)plVar14[7],0,&lStack_458);
      func_0x09a84d80(auStack_2b8,plStack_460,&puStack_3d8);
      if (pcStack_298 != (code *)0x0) {
        (*pcStack_298)(auStack_2b0);
      }
      func_0x0d85dec0(&puStack_3d8);
      func_0x09a84df0(&lStack_458);
      goto LAB_09a826dd;
    }
code_r0x09a8268f:
    func_0x0a12c230(&puStack_3d8,2);
    func_0x09a84e80(auStack_300,plStack_460,&puStack_3d8);
    if (pcStack_2e0 != (code *)0x0) {
      (*pcStack_2e0)(auStack_2f8);
    }
    break;
  case 4:
    cVar5 = func_0x04865440(param_3);
    if (cVar5 != '\0') {
      func_0x04863e30(param_3,0);
      lVar18 = plVar14[6];
      lVar11 = plVar14[7];
      uVar8 = func_0x04863e30(param_3,0);
      func_0x09a84330(&puStack_3d8,lVar18,(int)lVar11,0,uVar8);
      func_0x09a84570(auStack_198,plStack_460,&puStack_3d8);
      if (pcStack_178 != (code *)0x0) {
        (*pcStack_178)(auStack_190);
      }
      func_0x0d85dec0(&puStack_3d8);
      goto LAB_09a826dd;
    }
    func_0x0a12c230(&puStack_3d8,2);
    func_0x09ab5fd0(&lStack_458,&puStack_3d8);
    func_0x0d81d7e0(auStack_1e0,plStack_460,&lStack_458);
    if (pcStack_440 != (code *)0x0) {
      (*pcStack_440)(&lStack_458);
    }
    if (pcStack_1c0 != (code *)0x0) {
      (*pcStack_1c0)(auStack_1d8);
    }
  }
  func_0x048fb670(&puStack_3d8);
LAB_09a826dd:
  func_0x09ab5d70(&puStack_3d8,plStack_308,plVar14);
  puVar17 = puStack_3d8;
  puStack_3d8 = (undefined1 *)0x0;
  if (puVar17 != (undefined1 *)0x0) {
    if (((char)uStack_3c8 == '\x01') && ((ulong)*(uint *)(puVar17 + 0x68) != 0xffffffff)) {
      (**(code **)(&UNK_0f1d0e28 + (ulong)*(uint *)(puVar17 + 0x68) * 8))
                (&lStack_458,puVar17 + 0x18);
    }
    func_0x0412a280(puVar17,0x120);
  }
  return;
}


