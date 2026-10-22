/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb83e690 (ELF vaddr 0xb73e690)
 * Label: caller-of-callee
 * Body:  [[0b83e690, 0b83fd94] [0b83fda0, 0b83fdae] [0b83fdb2, 0b83fdd4] [0b83feb2, 0b83febf] [0b83fffb, 0b840020] [0b840058, 0b840087]]
 * Ghidra: FUN_0b83e690
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b83e690(long *param_1,undefined8 param_2,long *param_3,long *param_4,int param_5)

{
  undefined8 *******pppppppuVar1;
  uint *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *******pppppppuVar13;
  long *plVar14;
  long *plVar15;
  undefined8 ******ppppppuVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined8 ******ppppppuVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 *puVar22;
  long *plVar23;
  uint *puVar24;
  long *plVar25;
  undefined8 ***pppuVar26;
  ulong uVar27;
  undefined8 ******ppppppuVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  undefined8 ****ppppuVar31;
  long lVar32;
  undefined8 *****pppppuVar33;
  undefined8 ******ppppppuVar34;
  ulong uVar35;
  undefined8 ******ppppppuVar36;
  undefined8 ***pppuVar37;
  long *in_FS_OFFSET;
  bool bVar38;
  float fVar39;
  undefined1 auStack_328 [4];
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 *****pppppuStack_318;
  undefined8 ******ppppppuStack_310;
  uint uStack_308;
  int iStack_304;
  undefined8 *****pppppuStack_300;
  byte bStack_2f8;
  undefined6 uStack_2f7;
  undefined1 uStack_2f1;
  undefined1 uStack_2f0;
  undefined6 uStack_2ef;
  undefined1 uStack_2e9;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 *****pppppuStack_2d8;
  undefined1 uStack_2d0;
  undefined8 *****pppppuStack_2c8;
  undefined4 uStack_2c0;
  undefined8 ******ppppppuStack_2b8;
  int iStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  char cStack_298;
  byte bStack_290;
  undefined4 uStack_28f;
  undefined4 uStack_28b;
  undefined4 uStack_287;
  undefined4 uStack_283;
  undefined4 uStack_27f;
  undefined3 uStack_27b;
  code *pcStack_278;
  uint *puStack_250;
  undefined8 *******apppppppuStack_248 [2];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int iStack_228;
  char cStack_224;
  long lStack_220;
  long lStack_218;
  code *pcStack_210;
  undefined8 ******ppppppuStack_208;
  undefined8 *******pppppppuStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1c8;
  uint uStack_1b8;
  char cStack_158;
  undefined4 uStack_157;
  undefined1 uStack_153;
  undefined1 uStack_152;
  undefined1 auStack_150 [24];
  code *pcStack_138;
  undefined1 uStack_110;
  undefined4 uStack_10f;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 auStack_108 [16];
  code *pcStack_f8;
  code *pcStack_f0;
  ulong uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 auStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  undefined4 uStack_90;
  char cStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *****pppppuStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  
  if (param_5 != 3) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x05d84ba0(param_1);
    return param_1;
  }
  apppppppuStack_248[0] = (undefined8 *******)0x0;
  uStack_238 = (undefined4)param_3[2];
  uStack_234 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_230 = (undefined4)param_3[3];
  uStack_22c = *(undefined4 *)((long)param_3 + 0x1c);
  iStack_228 = (int)param_3[4];
  cStack_224 = *(char *)((long)param_3 + 0x24);
  if (cStack_224 != '\0') {
    if (cStack_224 == '\x02') {
      (*(code *)param_3[2])(5,param_3,apppppppuStack_248);
    }
    else {
      apppppppuStack_248[0] = (undefined8 *******)*param_3;
      *param_3 = 0;
    }
  }
  lVar21 = param_3[5];
  lStack_218 = param_3[6];
  param_3[6] = 0;
  pcStack_210 = (code *)param_3[7];
  param_3[7] = 0;
  lStack_220 = lVar21;
  if (cStack_224 != '\x04') {
    pppppppuVar13 = apppppppuStack_248[0];
    if (cStack_224 == '\x02') {
      pppppppuVar13 = apppppppuStack_248;
    }
    if ((iStack_228 == 0x33982960) && (pppppppuVar13 != (undefined8 *******)0x0)) {
LAB_0b83e7f4:
      if ((int)param_4[4] != -0x6bf40450) {
        func_0x06613950(&ppppppuStack_208,param_4);
        lVar21 = lStack_1d0;
        if ((lStack_1d0 != 0) && ((byte)(uStack_1e8._4_1_ - 1U) < 2)) {
          func_0x048b0900(param_4,&ppppppuStack_208);
        }
        if ((code *)CONCAT44(uStack_1ec,uStack_1f0) != (code *)0x0) {
          (*(code *)CONCAT44(uStack_1ec,uStack_1f0))(&ppppppuStack_208);
        }
        if (lVar21 == 0) goto LAB_0b83e85e;
      }
      if (*(char *)((long)param_4 + 0x24) != '\x04') {
        puVar2 = (uint *)(param_4 + 8);
        if ((int)param_4[0xc] != -0x5db38b49) {
          func_0x0488e290(&ppppppuStack_208,puVar2);
          lVar21 = lStack_1d0;
          if ((lStack_1d0 != 0) && ((byte)(uStack_1e8._4_1_ - 1U) < 2)) {
            func_0x048b0900(puVar2,&ppppppuStack_208);
          }
          if ((code *)CONCAT44(uStack_1ec,uStack_1f0) != (code *)0x0) {
            (*(code *)CONCAT44(uStack_1ec,uStack_1f0))(&ppppppuStack_208);
          }
          if (lVar21 == 0) goto LAB_0b83e85e;
        }
        plVar23 = param_4 + 0x10;
        if ((int)param_4[0x14] != -0x15d0e63a) {
          func_0x0b840370(&ppppppuStack_208,plVar23);
          if ((lStack_1d0 != 0) && ((byte)(uStack_1e8._4_1_ - 1U) < 2)) {
            func_0x048b0900(plVar23,&ppppppuStack_208);
          }
          if ((code *)CONCAT44(uStack_1ec,uStack_1f0) != (code *)0x0) {
            (*(code *)CONCAT44(uStack_1ec,uStack_1f0))(&ppppppuStack_208);
          }
          if (lStack_1d0 == 0) goto LAB_0b83e85e;
        }
        lStack_c0 = lStack_220;
        cVar7 = *(char *)((long)param_4 + 0x24);
        plVar25 = (long *)*param_4;
        plVar14 = plVar25;
        if (cVar7 == '\x02') {
          plVar14 = param_4;
        }
        if (plVar14 == (long *)0x0 || (int)param_4[4] != -0x6bf40450) {
          lVar21 = param_4[5];
          lVar32 = param_4[6];
          if (lVar32 == 0) {
            (*(code *)param_4[7])(0,param_4,0);
            lVar32 = param_4[6];
            cVar7 = *(char *)((long)param_4 + 0x24);
            plVar25 = (long *)*param_4;
          }
          if (cVar7 == '\x02') {
            plVar25 = param_4;
          }
          plVar14 = (long *)FUN_0488e200(lVar21,lVar32,0x940bfbb0,plVar25);
        }
        cVar7 = *(char *)((long)param_4 + 100);
        puVar24 = (uint *)param_4[8];
        puStack_250 = puVar24;
        if (cVar7 == '\x02') {
          puStack_250 = puVar2;
        }
        if (puStack_250 == (uint *)0x0 || (int)param_4[0xc] != -0x5db38b49) {
          lVar21 = param_4[0xd];
          lVar32 = param_4[0xe];
          if (lVar32 == 0) {
            (*(code *)param_4[0xf])(0,puVar2,0);
            lVar32 = param_4[0xe];
            cVar7 = *(char *)((long)param_4 + 100);
            puVar24 = (uint *)param_4[8];
          }
          if (cVar7 == '\x02') {
            puVar24 = puVar2;
          }
          puStack_250 = (uint *)FUN_0488e200(lVar21,lVar32,0xa24c74b7,puVar24);
        }
        cVar7 = *(char *)((long)param_4 + 0xa4);
        plVar25 = (long *)param_4[0x10];
        plVar15 = plVar25;
        if (cVar7 == '\x02') {
          plVar15 = plVar23;
        }
        if (plVar15 == (long *)0x0 || (int)param_4[0x14] != -0x15d0e63a) {
          lVar21 = param_4[0x15];
          lVar32 = param_4[0x16];
          if (lVar32 == 0) {
            (*(code *)param_4[0x17])(0,plVar23,0);
            lVar32 = param_4[0x16];
            cVar7 = *(char *)((long)param_4 + 0xa4);
            plVar25 = (long *)param_4[0x10];
          }
          if (cVar7 == '\x02') {
            plVar25 = plVar23;
          }
          plVar15 = (long *)FUN_0488e200(lVar21,lVar32,0xea2f19c6,plVar25);
        }
        (**(code **)(*(long *)plVar14[2] + 0x10))(&ppppppuStack_208);
        pppppuStack_2d8 = (undefined8 *****)*plVar14;
        uStack_2d0 = (undefined1)plVar14[3];
        pppppuStack_2c8 = (undefined8 *****)plVar14[4];
        uStack_2c0 = (undefined4)plVar14[5];
        ppppppuStack_2b8 = ppppppuStack_208;
        iStack_2b0 = (int)pppppppuStack_200;
        uStack_2a8 = (undefined4)uStack_1f8;
        uStack_2a4 = uStack_1f8._4_4_;
        uStack_2a0 = uStack_1f0;
        uStack_29c = uStack_1ec;
        if (ppppppuStack_208 == (undefined8 ******)0x0) {
          cStack_298 = '\x01';
          puStack_2e0 = &UNK_0f2d5d40;
        }
        else {
          iVar12 = *(int *)(ppppppuStack_208 + 1);
          pppppuVar33 = *ppppppuStack_208;
          if (pppppuVar33 != (undefined8 *****)0x0 && iVar12 == (int)pppppppuStack_200) {
            func_0x0d8568b0(pppppuVar33,uStack_1f8);
            cStack_298 = '\x01';
            puStack_2e0 = &UNK_0f2d5d40;
            if (ppppppuStack_208 == (undefined8 ******)0x0) goto LAB_0b83ec3c;
            iVar12 = *(int *)(ppppppuStack_208 + 1);
            pppppuVar33 = *ppppppuStack_208;
          }
          cStack_298 = '\x01';
          puStack_2e0 = &UNK_0f2d5d40;
          if (pppppuVar33 != (undefined8 *****)0x0 && iVar12 == (int)pppppppuStack_200) {
            func_0x0d8569b0(pppppuVar33,uStack_1f8,uStack_1f0);
          }
        }
LAB_0b83ec3c:
        if (*(char *)(pppppppuVar13 + 0xe) == '\0') {
          bStack_290 = 0x26;
          uStack_28f = _DAT_01488080;
          uStack_28b = _UNK_01488084;
          uStack_287 = _UNK_01488088;
          uStack_283 = CONCAT13(0x61,(int3)_UNK_0148808c);
          uStack_27f = 0x656c62;
          cStack_158 = '\n';
          uStack_157 = _DAT_013f776f;
          uStack_153 = DAT_013f7773;
          uStack_152 = 0;
          func_0x0d858ce0(&ppppppuStack_208,&cStack_158,&bStack_290);
          func_0x05e91e00(&uStack_110,&ppppppuStack_208);
          func_0x0d81d7e0(&cStack_158,&puStack_2e0,&uStack_110);
          if (pcStack_f8 != (code *)0x0) {
            (*pcStack_f8)(&uStack_110);
          }
          if (pcStack_138 != (code *)0x0) {
            (*pcStack_138)(auStack_150);
          }
          func_0x048fb670(&ppppppuStack_208);
          if ((bStack_290 & 1) != 0) {
            func_0x0412a280(CONCAT35(uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)),
                            CONCAT35((undefined3)uStack_28b,CONCAT41(uStack_28f,bStack_290)) &
                            0xfffffffffffffffe);
          }
          func_0x0b78e110(auStack_b8,&puStack_2e0);
        }
        else {
          lVar21 = *in_FS_OFFSET;
          if (*(char *)(lVar21 + -0x58) == '\0') {
            func_0x0ee49c60(lVar21 + -0xa40);
            *(undefined1 *)(lVar21 + -0x58) = 1;
          }
          lVar21 = lVar21 + -0xa40;
          iStack_304 = 0;
          uVar8 = func_0x0ee4a030(lVar21,0);
          uVar9 = func_0x0ee4a030(lVar21,0);
          uVar10 = func_0x0ee4a030(lVar21,0);
          uVar11 = func_0x0ee4a030(lVar21,0);
          uStack_1d8 = uVar10 >> 0x10 & 0x3fff | 0x8000;
          uStack_1b8 = uVar11 & 0xffff;
          ppppppuStack_208 = (undefined8 ******)CONCAT44(ppppppuStack_208._4_4_,uVar8);
          uStack_1f8 = CONCAT44(uStack_1f8._4_4_,uVar9 >> 0x10);
          uStack_1e8 = (undefined8 ******)
                       (CONCAT44(uStack_1e8._4_4_,uVar9) & 0xffffffff00000fff | 0x4000);
          uStack_1c8 = (undefined4)(CONCAT44(uVar10,uVar11) >> 0x10);
          func_0x0470d9a0(auStack_328,&UNK_01287ba2,0x28,0x122112,&ppppppuStack_208);
          if ((((char)plVar15[1] == '\x01') && (*(char *)((long)plVar15 + 4) == '\x01')) &&
             (iStack_304 = (int)*plVar15, iStack_304 < 0)) {
            puVar18 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
            if (puVar18 == (undefined4 *)0x0) {
              func_0x0eec74c0(0x30,0);
            }
            uVar20 = _UNK_0139fee7;
            uStack_283._3_1_ = (byte)puVar18;
            uStack_27f = (undefined4)((ulong)puVar18 >> 8);
            uStack_27b = (undefined3)((ulong)puVar18 >> 0x28);
            bStack_290 = 0x31;
            uStack_28f = 0;
            uStack_28b = 0x2b000000;
            uStack_287 = 0;
            uStack_283 = (uint)uStack_283._3_1_ << 0x18;
            *(ulong *)((long)puVar18 + 0x1b) = CONCAT35(_UNK_0139fee4,_DAT_0139fedf);
            *(undefined8 *)((long)puVar18 + 0x23) = uVar20;
            uVar20 = CONCAT53(_DAT_0139fedf,_UNK_0139fedc);
            *(undefined8 *)(puVar18 + 4) = _DAT_0139fed4;
            *(undefined8 *)(puVar18 + 6) = uVar20;
            uVar6 = _UNK_0139fed0;
            uVar5 = _UNK_0139fecc;
            uVar8 = _UNK_0139fec8;
            *puVar18 = _DAT_0139fec4;
            puVar18[1] = uVar8;
            puVar18[2] = uVar5;
            puVar18[3] = uVar6;
            *(undefined1 *)((long)puVar18 + 0x2b) = 0;
            cStack_158 = '\n';
            uStack_157 = _DAT_013f776f;
            uStack_153 = DAT_013f7773;
            uStack_152 = 0;
            func_0x0d858ce0(&ppppppuStack_208,&cStack_158,&bStack_290);
            func_0x05e91e00(&uStack_110,&ppppppuStack_208);
            func_0x0d81d7e0(&cStack_158,&puStack_2e0,&uStack_110);
            if (pcStack_f8 != (code *)0x0) {
              (*pcStack_f8)(&uStack_110);
            }
            if (pcStack_138 != (code *)0x0) {
              (*pcStack_138)(auStack_150);
            }
            func_0x048fb670(&ppppppuStack_208);
            if ((bStack_290 & 1) != 0) {
              func_0x0412a280(CONCAT35(uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)),
                              CONCAT35((undefined3)uStack_28b,CONCAT41(uStack_28f,bStack_290)) &
                              0xfffffffffffffffe);
            }
            func_0x0b78e110(auStack_b8,&puStack_2e0);
          }
          else {
            bVar38 = ((uint)auStack_328 & 1) == 0;
            pppppuStack_300 = (undefined8 *****)(auStack_328 + 1);
            pppppuVar33 = pppppuStack_318;
            if (bVar38) {
              pppppuVar33 = pppppuStack_300;
            }
            uVar17 = (ulong)(auStack_328[0] >> 1);
            if (!bVar38) {
              uVar17 = CONCAT44(uStack_31c,uStack_320);
            }
            ppppppuVar16 = (undefined8 ******)func_0x04883620(&ppppppuStack_208,pppppuVar33,uVar17);
            pppppppuVar1 = pppppppuVar13 + 9;
            ppppppuVar34 = pppppppuVar13[10];
            if (ppppppuVar34 != (undefined8 ******)0x0) {
              uVar17 = (long)ppppppuVar34 - ((ulong)ppppppuVar34 >> 1 & 0x5555555555555555);
              uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
              uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar17 >> 0x38 < 2) {
                ppppppuVar19 = (undefined8 ******)((long)ppppppuVar34 - 1U & (ulong)ppppppuVar16);
              }
              else {
                ppppppuVar19 = ppppppuVar16;
                if (ppppppuVar34 <= ppppppuVar16) {
                  if (((ulong)ppppppuVar16 | (ulong)ppppppuVar34) >> 0x20 == 0) {
                    ppppppuVar19 = (undefined8 ******)
                                   (((ulong)ppppppuVar16 & 0xffffffff) %
                                   ((ulong)ppppppuVar34 & 0xffffffff));
                  }
                  else {
                    ppppppuVar19 = (undefined8 ******)((ulong)ppppppuVar16 % (ulong)ppppppuVar34);
                  }
                }
              }
              ppppppuStack_310 = ppppppuVar19;
              if (((*pppppppuVar1)[(long)ppppppuVar19] != (undefined8 *****)0x0) &&
                 (ppppuVar31 = *(*pppppppuVar1)[(long)ppppppuVar19],
                 ppppuVar31 != (undefined8 ****)0x0)) {
                uStack_308 = (uint)auStack_328 & 0xff;
                if (((uint)auStack_328 & 1) == 0) {
                  pppuVar37 = (undefined8 ***)(ulong)(auStack_328[0] >> 1);
                }
                else {
                  pppuVar37 = (undefined8 ***)CONCAT44(uStack_31c,uStack_320);
                  pppppuStack_300 = pppppuStack_318;
                }
                if ((byte)(uVar17 >> 0x38) < 2) {
                  uVar17 = (long)ppppppuVar34 - 1;
                  uStack_c8 = uVar17;
                  do {
                    if ((undefined8 ******)ppppuVar31[1] == ppppppuVar16) {
                      bVar3 = *(byte *)(ppppuVar31 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppuVar26 = (undefined8 ***)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppuVar26 = ppppuVar31[3];
                      }
                      if (pppuVar26 == pppuVar37) {
                        if ((bVar3 & 1) == 0) {
                          pppuVar26 = (undefined8 ***)((long)ppppuVar31 + 0x11);
                        }
                        else {
                          pppuVar26 = ppppuVar31[4];
                        }
                        iVar12 = func_0x0eee3000(pppuVar26,pppppuStack_300,pppuVar37);
                        uVar17 = uStack_c8;
                        ppppppuVar19 = ppppppuStack_310;
                        uVar9 = uStack_308;
                        if (iVar12 == 0) goto LAB_0b83f6aa;
                      }
                    }
                    else if ((undefined8 ******)((ulong)ppppuVar31[1] & uVar17) != ppppppuVar19)
                    break;
                    ppppuVar31 = (undefined8 ****)*ppppuVar31;
                  } while (ppppuVar31 != (undefined8 ****)0x0);
                }
                else {
                  do {
                    ppppppuVar29 = (undefined8 ******)ppppuVar31[1];
                    if (ppppppuVar29 == ppppppuVar16) {
                      bVar3 = *(byte *)(ppppuVar31 + 2);
                      if ((bVar3 & 1) == 0) {
                        pppuVar26 = (undefined8 ***)(ulong)(bVar3 >> 1);
                      }
                      else {
                        pppuVar26 = ppppuVar31[3];
                      }
                      if (pppuVar26 == pppuVar37) {
                        if ((bVar3 & 1) == 0) {
                          pppuVar26 = (undefined8 ***)((long)ppppuVar31 + 0x11);
                        }
                        else {
                          pppuVar26 = ppppuVar31[4];
                        }
                        iVar12 = func_0x0eee3000(pppuVar26,pppppuStack_300,pppuVar37);
                        ppppppuVar19 = ppppppuStack_310;
                        uVar9 = uStack_308;
                        if (iVar12 == 0) goto LAB_0b83f6aa;
                      }
                    }
                    else {
                      if (ppppppuVar34 <= ppppppuVar29) {
                        if (((ulong)ppppppuVar29 | (ulong)ppppppuVar34) >> 0x20 == 0) {
                          ppppppuVar29 = (undefined8 ******)
                                         (((ulong)ppppppuVar29 & 0xffffffff) %
                                         ((ulong)ppppppuVar34 & 0xffffffff));
                        }
                        else {
                          ppppppuVar29 = (undefined8 ******)
                                         ((ulong)ppppppuVar29 % (ulong)ppppppuVar34);
                        }
                      }
                      if (ppppppuVar29 != ppppppuVar19) break;
                    }
                    ppppuVar31 = (undefined8 ****)*ppppuVar31;
                  } while (ppppuVar31 != (undefined8 ****)0x0);
                }
              }
            }
            ppppppuVar19 = (undefined8 ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
            if (ppppppuVar19 == (undefined8 ******)0x0) {
              func_0x0eec74c0(0x78,0);
            }
            ppppppuStack_208 = ppppppuVar19;
            pppppppuStack_200 = pppppppuVar1;
            uStack_1f8 = 0;
            *ppppppuVar19 = (undefined8 *****)0x0;
            ppppppuVar19[1] = ppppppuVar16;
            if (((uint)auStack_328 & 1) == 0) {
              ppppppuVar19[4] = pppppuStack_318;
              ppppppuVar19[2] = (undefined8 *****)CONCAT44(uStack_324,auStack_328);
              ppppppuVar19[3] = (undefined8 *****)CONCAT44(uStack_31c,uStack_320);
            }
            else {
              func_0x0412e5e0(ppppppuVar19 + 2,pppppuStack_318,CONCAT44(uStack_31c,uStack_320));
            }
            ppppppuVar19[6] = pppppuStack_2d8;
            *(undefined1 *)(ppppppuVar19 + 7) = uStack_2d0;
            ppppppuVar19[8] = pppppuStack_2c8;
            *(undefined4 *)(ppppppuVar19 + 9) = uStack_2c0;
            ppppppuVar19[5] = (undefined8 *****)&UNK_0f040e20;
            *(undefined1 *)(ppppppuVar19 + 10) = 0;
            *(undefined1 *)(ppppppuVar19 + 0xe) = 0;
            if (cStack_298 == '\x01') {
              ppppppuVar19[10] = ppppppuStack_2b8;
              *(int *)(ppppppuVar19 + 0xb) = iStack_2b0;
              *(undefined4 *)(ppppppuVar19 + 0xc) = uStack_2a8;
              *(undefined4 *)((long)ppppppuVar19 + 100) = uStack_2a4;
              *(undefined4 *)(ppppppuVar19 + 0xd) = uStack_2a0;
              *(undefined4 *)((long)ppppppuVar19 + 0x6c) = uStack_29c;
              if ((ppppppuStack_2b8 != (undefined8 ******)0x0) &&
                 (*ppppppuStack_2b8 != (undefined8 *****)0x0 &&
                  *(int *)(ppppppuStack_2b8 + 1) == iStack_2b0)) {
                func_0x0d8568b0(*ppppppuStack_2b8,ppppppuVar19[0xc]);
              }
              *(undefined1 *)(ppppppuVar19 + 0xe) = 1;
            }
            ppppppuVar19[5] = (undefined8 *****)&UNK_0f2d5d40;
            uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
            if ((ppppppuVar34 == (undefined8 ******)0x0) ||
               (ppppppuVar29 = ppppppuStack_310,
               (float)ppppppuVar34 * *(float *)(pppppppuVar13 + 0xd) <
               (float)((long)pppppppuVar13[0xc] + 1))) {
              uVar17 = 1;
              if ((undefined8 ******)0x2 < ppppppuVar34) {
                uVar17 = (ulong)(((ulong)ppppppuVar34 & (long)ppppppuVar34 - 1U) != 0);
              }
              ppppppuVar29 = (undefined8 ******)(uVar17 | (long)ppppppuVar34 * 2);
              ppppppuStack_310 = ppppppuVar16;
              fVar39 = (float)func_0x0eee3ab0((float)((long)pppppppuVar13[0xc] + 1) /
                                              *(float *)(pppppppuVar13 + 0xd));
              ppppppuVar34 = (undefined8 ******)
                             ((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
              if (ppppppuVar34 < ppppppuVar29) {
                ppppppuVar34 = ppppppuVar29;
              }
              ppppppuVar16 = (undefined8 ******)0x2;
              if ((ppppppuVar34 != (undefined8 ******)0x1) &&
                 (ppppppuVar16 = ppppppuVar34, ((ulong)ppppppuVar34 & (long)ppppppuVar34 - 1U) != 0)
                 ) {
                ppppppuVar16 = (undefined8 ******)FUN_0412c3f0();
              }
              ppppppuVar34 = pppppppuVar13[10];
              if (ppppppuVar34 < ppppppuVar16) {
LAB_0b83f419:
                if ((ulong)ppppppuVar16 >> 0x3d != 0) {
                  uVar20 = func_0x04882eb0();
                  uVar20 = func_0x04882e20(uVar20);
                  uVar20 = func_0x04882e20(uVar20);
                  uVar20 = func_0x04882e20(uVar20);
                  if (pcStack_f8 != (code *)0x0) {
                    (*pcStack_f8)(&uStack_110);
                  }
                  func_0x048fb670(&ppppppuStack_208);
                  if ((bStack_290 & 1) != 0) {
                    func_0x0412a280(CONCAT35(uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)),
                                    CONCAT35((undefined3)uStack_28b,CONCAT41(uStack_28f,bStack_290))
                                    & 0xfffffffffffffffe);
                  }
                  if (((uint)auStack_328 & 1) != 0) {
                    func_0x0412a280(pppppuStack_318,
                                    CONCAT44(uStack_324,auStack_328) & 0xfffffffffffffffe);
                  }
                  func_0x06518ad0(&puStack_2e0);
                  if ((code *)CONCAT44(uStack_22c,uStack_230) != (code *)0x0) {
                    (*(code *)CONCAT44(uStack_22c,uStack_230))(apppppppuStack_248);
                  }
                  uVar20 = _Unwind_Resume(uVar20);
                  uVar20 = func_0x04882e20(uVar20);
                  func_0x04882e20(uVar20);
                  pcVar4 = (code *)swi(3);
                  plVar23 = (long *)(*pcVar4)();
                  return plVar23;
                }
                lVar21 = (long)ppppppuVar16 * 8;
                ppppppuVar34 = (undefined8 ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar21);
                if (ppppppuVar34 == (undefined8 ******)0x0) {
                  func_0x0eec74c0(lVar21,0);
                }
                ppppppuVar29 = *pppppppuVar1;
                *pppppppuVar1 = ppppppuVar34;
                if (ppppppuVar29 != (undefined8 ******)0x0) {
                  func_0x0412a280(ppppppuVar29,(long)pppppppuVar13[10] << 3);
                  ppppppuVar34 = pppppppuVar13[9];
                }
                pppppppuVar13[10] = ppppppuVar16;
                func_0x0eee2dd0(ppppppuVar34,0,lVar21);
                ppppppuVar29 = pppppppuVar13[0xb];
                if (ppppppuVar29 != (undefined8 ******)0x0) {
                  ppppppuVar28 = (undefined8 ******)ppppppuVar29[1];
                  uVar17 = (long)ppppppuVar16 - 1;
                  if (((ulong)ppppppuVar16 & uVar17) == 0) {
                    ppppppuVar34[(ulong)ppppppuVar28 & uVar17] = pppppppuVar13 + 0xb;
                    uVar27 = (ulong)ppppppuVar28 & uVar17;
                    while (ppppppuVar16 = ppppppuVar29,
                          ppppppuVar29 = (undefined8 ******)*ppppppuVar16,
                          ppppppuVar29 != (undefined8 ******)0x0) {
                      uVar35 = (ulong)ppppppuVar29[1] & uVar17;
                      if (uVar35 != uVar27) {
                        if (ppppppuVar34[uVar35] == (undefined8 *****)0x0) {
                          ppppppuVar34[uVar35] = ppppppuVar16;
                          uVar27 = uVar35;
                        }
                        else {
                          *ppppppuVar16 = *ppppppuVar29;
                          *ppppppuVar29 = (undefined8 *****)*ppppppuVar34[uVar35];
                          *ppppppuVar34[uVar35] = ppppppuVar29;
                          ppppppuVar29 = ppppppuVar16;
                        }
                      }
                    }
                  }
                  else {
                    if (ppppppuVar16 <= ppppppuVar28) {
                      if (((ulong)ppppppuVar28 | (ulong)ppppppuVar16) >> 0x20 == 0) {
                        ppppppuVar28 = (undefined8 ******)
                                       (((ulong)ppppppuVar28 & 0xffffffff) %
                                       ((ulong)ppppppuVar16 & 0xffffffff));
                      }
                      else {
                        ppppppuVar28 = (undefined8 ******)
                                       ((ulong)ppppppuVar28 % (ulong)ppppppuVar16);
                      }
                    }
                    ppppppuVar34[(long)ppppppuVar28] = pppppppuVar13 + 0xb;
                    ppppppuVar36 = (undefined8 ******)*ppppppuVar29;
                    while (ppppppuVar36 != (undefined8 ******)0x0) {
                      ppppppuVar30 = (undefined8 ******)ppppppuVar36[1];
                      if (ppppppuVar16 <= ppppppuVar30) {
                        if (((ulong)ppppppuVar30 | (ulong)ppppppuVar16) >> 0x20 == 0) {
                          ppppppuVar30 = (undefined8 ******)
                                         (((ulong)ppppppuVar30 & 0xffffffff) %
                                         ((ulong)ppppppuVar16 & 0xffffffff));
                        }
                        else {
                          ppppppuVar30 = (undefined8 ******)
                                         ((ulong)ppppppuVar30 % (ulong)ppppppuVar16);
                        }
                      }
                      if (ppppppuVar30 != ppppppuVar28) {
                        if (ppppppuVar34[(long)ppppppuVar30] == (undefined8 *****)0x0) {
                          ppppppuVar34[(long)ppppppuVar30] = ppppppuVar29;
                          ppppppuVar28 = ppppppuVar30;
                        }
                        else {
                          *ppppppuVar29 = *ppppppuVar36;
                          *ppppppuVar36 = (undefined8 *****)*ppppppuVar34[(long)ppppppuVar30];
                          *ppppppuVar34[(long)ppppppuVar30] = ppppppuVar36;
                          ppppppuVar36 = ppppppuVar29;
                        }
                      }
                      ppppppuVar29 = ppppppuVar36;
                      ppppppuVar36 = (undefined8 ******)*ppppppuVar29;
                    }
                  }
                }
              }
              else if (ppppppuVar16 < ppppppuVar34) {
                fVar39 = (float)func_0x0eee3ab0((float)pppppppuVar13[0xc] /
                                                *(float *)(pppppppuVar13 + 0xd));
                ppppppuVar29 = (undefined8 ******)
                               ((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39
                               );
                if ((ppppppuVar34 < (undefined8 ******)0x3) ||
                   (uVar17 = (long)ppppppuVar34 - ((ulong)ppppppuVar34 >> 1 & 0x5555555555555555),
                   uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
                   1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  ppppppuVar29 = (undefined8 ******)FUN_0412c3f0(ppppppuVar29);
                }
                else if ((undefined8 ******)0x1 < ppppppuVar29) {
                  lVar21 = 0x3f;
                  if ((long)ppppppuVar29 - 1U != 0) {
                    for (; (long)ppppppuVar29 - 1U >> lVar21 == 0; lVar21 = lVar21 + -1) {
                    }
                  }
                  ppppppuVar29 = (undefined8 ******)(1L << (-((byte)lVar21 ^ 0x3f) & 0x3f));
                }
                if (ppppppuVar29 < ppppppuVar16) {
                  ppppppuVar29 = ppppppuVar16;
                }
                if (ppppppuVar29 < ppppppuVar34) {
                  ppppppuVar16 = ppppppuVar29;
                  if (ppppppuVar29 != (undefined8 ******)0x0) goto LAB_0b83f419;
                  ppppppuVar34 = *pppppppuVar1;
                  *pppppppuVar1 = (undefined8 ******)0x0;
                  if (ppppppuVar34 != (undefined8 ******)0x0) {
                    func_0x0412a280(ppppppuVar34,(long)pppppppuVar13[10] << 3);
                  }
                  pppppppuVar13[10] = (undefined8 ******)0x0;
                }
              }
              ppppppuVar34 = pppppppuVar13[10];
              if (((ulong)ppppppuVar34 & (long)ppppppuVar34 - 1U) == 0) {
                ppppppuVar29 = (undefined8 ******)
                               ((ulong)ppppppuStack_310 & (long)ppppppuVar34 - 1U);
              }
              else {
                ppppppuVar29 = ppppppuStack_310;
                if (ppppppuVar34 <= ppppppuStack_310) {
                  if (((ulong)ppppppuStack_310 | (ulong)ppppppuVar34) >> 0x20 == 0) {
                    ppppppuVar29 = (undefined8 ******)
                                   (((ulong)ppppppuStack_310 & 0xffffffff) %
                                   ((ulong)ppppppuVar34 & 0xffffffff));
                  }
                  else {
                    ppppppuVar29 = (undefined8 ******)
                                   ((ulong)ppppppuStack_310 % (ulong)ppppppuVar34);
                  }
                }
              }
            }
            ppppppuVar16 = *pppppppuVar1;
            pppppuVar33 = ppppppuVar16[(long)ppppppuVar29];
            if (pppppuVar33 == (undefined8 *****)0x0) {
              *ppppppuVar19 = pppppppuVar13[0xb];
              pppppppuVar13[0xb] = ppppppuVar19;
              ppppppuVar16[(long)ppppppuVar29] = pppppppuVar13 + 0xb;
              if (*ppppppuVar19 != (undefined8 *****)0x0) {
                ppppppuVar29 = (undefined8 ******)(*ppppppuVar19)[1];
                if (((ulong)ppppppuVar34 & (long)ppppppuVar34 - 1U) == 0) {
                  ppppppuVar16[(ulong)ppppppuVar29 & (long)ppppppuVar34 - 1U] = ppppppuVar19;
                }
                else {
                  if (ppppppuVar34 <= ppppppuVar29) {
                    if (((ulong)ppppppuVar29 | (ulong)ppppppuVar34) >> 0x20 == 0) {
                      ppppppuVar16
                      [((ulong)ppppppuVar29 & 0xffffffff) % ((ulong)ppppppuVar34 & 0xffffffff)] =
                           ppppppuVar19;
                      goto LAB_0b83f6a1;
                    }
                    ppppppuVar29 = (undefined8 ******)((ulong)ppppppuVar29 % (ulong)ppppppuVar34);
                  }
                  ppppppuVar16[(long)ppppppuVar29] = ppppppuVar19;
                }
              }
            }
            else {
              *ppppppuVar19 = (undefined8 *****)*pppppuVar33;
              *pppppuVar33 = ppppppuVar19;
            }
LAB_0b83f6a1:
            pppppppuVar13[0xc] = (undefined8 ******)((long)pppppppuVar13[0xc] + 1);
            uVar9 = (uint)auStack_328 & 0xff;
LAB_0b83f6aa:
            puStack_70 = &UNK_0f029d80;
            if ((uVar9 & 1) == 0) {
              pppppuStack_58 = pppppuStack_318;
              uStack_68 = (uint)auStack_328;
              uStack_64 = uStack_324;
              uStack_60 = uStack_320;
              uStack_5c = uStack_31c;
            }
            else {
              func_0x0412e5e0(&uStack_68,pppppuStack_318,CONCAT44(uStack_31c,uStack_320));
            }
            if ((*puStack_250 & 1) == 0) {
              uStack_40 = *(undefined8 *)(puStack_250 + 4);
              uStack_50 = *puStack_250;
              uStack_4c = puStack_250[1];
              uStack_48 = puStack_250[2];
              uStack_44 = puStack_250[3];
            }
            else {
              func_0x0412e5e0(&uStack_50,*(undefined8 *)(puStack_250 + 4),
                              *(undefined8 *)(puStack_250 + 2));
            }
            iStack_38 = iStack_304;
            ppppppuVar34 = *pppppppuVar13;
            if ((DAT_0f6baf20 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6baf20), iVar12 != 0)) {
              _DAT_0f6baef0 = &UNK_0f2e0480;
              _DAT_0f6baf10 = (long *)&DAT_0f6baef0;
              func_0x0eee2f40(&UNK_062619b0,&DAT_0f6baef0,0xf53dab8);
              func_0x0410844d(&DAT_0f6baf20);
            }
            uVar20 = _DAT_0f543830;
            if (_DAT_0f6baf10 == (long *)0x0) {
              uStack_1e8 = (undefined8 ******)0x0;
            }
            else if (_DAT_0f6baf10 == (long *)&DAT_0f6baef0) {
              uStack_1e8 = &ppppppuStack_208;
              (**(code **)(_DAT_0f6baef0 + 0x18))(&DAT_0f6baef0);
            }
            else {
              uStack_1e8 = (undefined8 ******)(**(code **)(*_DAT_0f6baf10 + 0x10))();
            }
            uVar20 = (*(code *)(*ppppppuVar34)[9])(ppppppuVar34,uVar20,&ppppppuStack_208);
            if ((undefined8 *******)uStack_1e8 == &ppppppuStack_208) {
              lVar21 = 0x20;
LAB_0b83f809:
              (**(code **)((long)*uStack_1e8 + lVar21))();
            }
            else {
              lVar21 = 0x28;
              if (uStack_1e8 != (undefined8 ******)0x0) goto LAB_0b83f809;
            }
            (*(code *)(*ppppppuVar34)[10])(&cStack_158,ppppppuVar34,&puStack_70,uVar20);
            if (cStack_158 == '\x01') {
              lVar21 = func_0x0b83c140(pppppppuVar1,auStack_328);
              if ((lVar21 != 0) &&
                 (func_0x0b83c3c0(&ppppppuStack_208,pppppppuVar1,lVar21),
                 ppppppuVar34 = ppppppuStack_208, ppppppuStack_208 != (undefined8 ******)0x0)) {
                if ((char)uStack_1f8 == '\x01') {
                  ppppppuStack_208[5] = (undefined8 *****)&UNK_0f040e20;
                  if (((*(char *)(ppppppuStack_208 + 0xe) == '\x01') &&
                      (pppppuVar33 = ppppppuStack_208[10], pppppuVar33 != (undefined8 *****)0x0)) &&
                     (*pppppuVar33 != (undefined8 ****)0x0 &&
                      *(int *)(pppppuVar33 + 1) == *(int *)(ppppppuStack_208 + 0xb))) {
                    func_0x0d8569b0(*pppppuVar33,ppppppuStack_208[0xc],
                                    *(undefined4 *)(ppppppuStack_208 + 0xd));
                  }
                  ppppppuVar34[5] = (undefined8 *****)&UNK_0f486ba0;
                  if (((ulong)ppppppuVar34[2] & 1) != 0) {
                    func_0x0412a280(ppppppuVar34[4],(ulong)ppppppuVar34[2] & 0xfffffffffffffffe);
                  }
                }
                func_0x0412a280(ppppppuVar34,0x78);
              }
              bStack_2f8 = 0x1c;
              uStack_2f7 = 0x6e7265746e69;
              uStack_2f1 = 0x61;
              uStack_2f0 = 0x6c;
              uStack_2ef = 0x726f7272652d;
              uStack_2e9 = 0;
              uStack_110 = 10;
              uStack_10f = _DAT_013f776f;
              uStack_10b = DAT_013f7773;
              uStack_10a = 0;
              func_0x0d858ce0(&ppppppuStack_208,&uStack_110,&bStack_2f8);
              func_0x05e91e00(&bStack_290,&ppppppuStack_208);
              func_0x0d81d7e0(&uStack_110,&puStack_2e0,&bStack_290);
              if (pcStack_278 != (code *)0x0) {
                (*pcStack_278)(&bStack_290);
              }
              if (pcStack_f0 != (code *)0x0) {
                (*pcStack_f0)(auStack_108);
              }
              func_0x048fb670(&ppppppuStack_208);
              if ((bStack_2f8 & 1) != 0) {
                func_0x0412a280(uStack_2e8,
                                CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,bStack_2f8)) &
                                0xfffffffffffffffe);
              }
            }
            func_0x0b78e110(auStack_b8,&puStack_2e0);
            if (pcStack_138 != (code *)0x0) {
              (*pcStack_138)(auStack_150);
            }
            puStack_70 = &UNK_0f029d80;
            if ((uStack_50 & 1) != 0) {
              func_0x0412a280(uStack_40,CONCAT44(uStack_4c,uStack_50) & 0xfffffffffffffffe);
            }
            if ((uStack_68 & 1) != 0) {
              func_0x0412a280(pppppuStack_58,CONCAT44(uStack_64,uStack_68) & 0xfffffffffffffffe);
            }
          }
          if (((uint)auStack_328 & 1) != 0) {
            func_0x0412a280(pppppuStack_318,CONCAT44(uStack_324,auStack_328) & 0xfffffffffffffffe);
          }
        }
        puStack_2e0 = &UNK_0f040e20;
        if (((cStack_298 == '\x01') && (ppppppuStack_2b8 != (undefined8 ******)0x0)) &&
           (*ppppppuStack_2b8 != (undefined8 *****)0x0 &&
            *(int *)(ppppppuStack_2b8 + 1) == iStack_2b0)) {
          func_0x0d8569b0(*ppppppuStack_2b8,CONCAT44(uStack_2a4,uStack_2a8),uStack_2a0);
        }
        *param_1 = 0;
        param_1[2] = (long)&UNK_0b840780;
        *(undefined4 *)(param_1 + 4) = 0x86a5a28a;
        param_1[3] = (long)&UNK_0b840a60;
        *(undefined1 *)((long)param_1 + 0x24) = 1;
        puVar22 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puVar22 == (undefined1 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        uVar20 = auStack_b0[0];
        *puVar22 = auStack_b8[0];
        *(undefined8 *)(puVar22 + 8) = 0;
        *(code **)(puVar22 + 0x18) = pcStack_a0;
        *(code **)(puVar22 + 0x20) = pcStack_98;
        *(undefined4 *)(puVar22 + 0x28) = uStack_90;
        puVar22[0x2c] = cStack_8c;
        if (cStack_8c != '\0') {
          if (cStack_8c == '\x02') {
            (*pcStack_a0)(5,auStack_b0);
          }
          else {
            auStack_b0[0] = 0;
            *(undefined8 *)(puVar22 + 8) = uVar20;
          }
        }
        uVar20 = uStack_78;
        uVar8 = (undefined4)uStack_80;
        uVar5 = uStack_80._4_4_;
        uStack_80 = 0;
        *(undefined4 *)(puVar22 + 0x30) = uStack_88;
        *(undefined4 *)(puVar22 + 0x34) = uStack_84;
        *(undefined4 *)(puVar22 + 0x38) = uVar8;
        *(undefined4 *)(puVar22 + 0x3c) = uVar5;
        uStack_78 = 0;
        *(undefined8 *)(puVar22 + 0x40) = uVar20;
        *param_1 = (long)puVar22;
        param_1[5] = lStack_c0;
        param_1[6] = 0;
        param_1[7] = (long)&UNK_0b840610;
        if (pcStack_98 != (code *)0x0) {
          (*pcStack_98)(auStack_b0);
        }
        goto LAB_0b83e896;
      }
    }
    else if (pcStack_210 != (code *)0x0) {
      if (lStack_218 == 0) {
        (*pcStack_210)(0,apppppppuStack_248,0);
      }
      pppppppuVar13 = apppppppuStack_248[0];
      if (cStack_224 == '\x02') {
        pppppppuVar13 = apppppppuStack_248;
      }
      pppppppuVar13 = (undefined8 *******)FUN_0488e200(lVar21,lStack_218,0x33982960,pppppppuVar13);
      if (pppppppuVar13 != (undefined8 *******)0x0) goto LAB_0b83e7f4;
    }
  }
LAB_0b83e85e:
  param_1[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[5] = lStack_220;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_0b83e896:
  if ((code *)CONCAT44(uStack_22c,uStack_230) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_22c,uStack_230))(apppppppuStack_248);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x139fec4  maxTriangleCount must be a positive integer
 * 0x139fed4   must be a positive integer
 * 0x139fedf  positive integer
 * 0x13f776f  Error
 * 0x1488080  service-unavailable
 */
