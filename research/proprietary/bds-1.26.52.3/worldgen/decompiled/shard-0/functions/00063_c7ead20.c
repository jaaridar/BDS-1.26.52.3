/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8ead20 (ELF vaddr 0xc7ead20)
 * Label: string:The SurfaceBuilderComponent could not be resolved.
 * Body:  [[0c8ead20, 0c8eaed6] [0c8eaee0, 0c8eb098] [0c8eb0a0, 0c8eb0e3] [0c8eb0f0, 0c8eb369] [0c8eb370, 0c8eb399] [0c8eb3a0, 0c8eb3b3] [0c8eb3c0, 0c8eb64e] [0c8eb650, 0c8eb6cd] [0c8eb6d0, 0c8eb72d] [0c8eb730, 0c8ebbb3] [0c8ebbc0, 0c8ebcb8] [0c8ebcc0, 0c8ebd0b] [0c8ebd10, 0c8ebf48] [0c8ebf50, 0c8ec124] [0c8ec130, 0c8ec210] [0c8ec38d, 0c8ec39e] [0c8ec3b4, 0c8ec3c9] [0c8ec3d5, 0c8ec3f7]]
 * Ghidra: FUN_0c8ead20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8ead20(long param_1,code ****param_2)

{
  long *plVar1;
  code **ppcVar2;
  undefined1 auVar3 [16];
  code cVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [8];
  char cVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  undefined8 *******pppppppuVar18;
  code ****ppppcVar19;
  undefined8 uVar20;
  code ***pppcVar21;
  undefined8 ******ppppppuVar22;
  undefined8 ******ppppppuVar23;
  undefined8 *****pppppuVar24;
  code ****ppppcVar25;
  code ****ppppcVar26;
  code ****ppppcVar27;
  ulong uVar28;
  code ****ppppcVar29;
  code *pcVar30;
  long lVar31;
  code ****ppppcVar32;
  long lVar33;
  code ***pppcVar34;
  bool bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 uStack_39b;
  undefined1 uStack_39a;
  byte bStack_399;
  undefined1 auStack_398 [16];
  code ***pppcStack_388;
  code ***pppcStack_380;
  code ****ppppcStack_378;
  code ***pppcStack_370;
  undefined4 uStack_368;
  char cStack_364;
  code ****ppppcStack_360;
  undefined1 auStack_358 [16];
  code ****ppppcStack_348;
  undefined1 auStack_340 [16];
  undefined8 *******apppppppuStack_330 [2];
  code *pcStack_320;
  code *pcStack_318;
  int iStack_310;
  char cStack_30c;
  code ****ppppcStack_308;
  long lStack_300;
  code *pcStack_2f8;
  code ****ppppcStack_2f0;
  code ***pppcStack_2e8;
  code ****ppppcStack_2e0;
  undefined1 auStack_2d8 [16];
  code ***pppcStack_2c8;
  code ****ppppcStack_2c0;
  code ****ppppcStack_2b8;
  code ****ppppcStack_2b0;
  code ****ppppcStack_2a0;
  undefined1 auStack_298 [8];
  code ***pppcStack_290;
  code ***pppcStack_288;
  undefined1 auStack_280 [16];
  code ****ppppcStack_270;
  char cStack_268;
  code ****ppppcStack_260;
  undefined1 (*pauStack_258) [16];
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  ulong uStack_238;
  code ***pppcStack_230;
  undefined8 uStack_228;
  code ****ppppcStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [64];
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  uint uStack_40;
  uint uStack_38;
  
  lVar33 = *(long *)(param_1 + 8);
  ppppcStack_260 = *(code *****)(param_1 + 0x10);
  bStack_399 = *(byte *)(param_1 + 0x18);
  uStack_228 = *(undefined8 *)(param_1 + 0x20);
  ppppcStack_2b8 = (code ****)0x0;
  ppppcStack_2b0 = (code ****)0x0;
  pppcStack_2c8 = (code ***)0x0;
  ppppcStack_2c0 = (code ****)0x0;
  auStack_2d8 = (undefined1  [16])0x0;
  ppppcVar19 = (code ****)0x0;
  func_0x0eee2dd0(auStack_218,0,0x1e0);
  ppppcStack_220 = (code ****)&UNK_0f3e38f8;
  func_0x0eee2dd0(auStack_210,0,0x148);
  uStack_1d0 = 0x3f800000;
  auStack_1c8 = (undefined1  [16])0x0;
  auStack_1b8 = (undefined1  [16])0x0;
  auStack_1a8 = (undefined1  [16])0x0;
  uStack_198 = 0;
  uStack_190 = 0x3f800000;
  auStack_188 = (undefined1  [16])0x0;
  auStack_178 = (undefined1  [16])0x0;
  auStack_168 = (undefined1  [16])0x0;
  uStack_158 = 0;
  uStack_150 = 0x3f800000;
  auStack_148 = (undefined1  [16])0x0;
  auStack_138 = (undefined1  [16])0x0;
  auStack_128 = (undefined1  [16])0x0;
  uStack_118 = 0;
  uStack_110 = 0x3f800000;
  auStack_e8 = (undefined1  [16])0x0;
  auStack_f8 = (undefined1  [16])0x0;
  auStack_108 = (undefined1  [16])0x0;
  uStack_d8 = 0;
  uStack_d0 = 0x3f800000;
  uStack_38 = 0;
  uStack_39a = 0;
  uStack_39b = 0;
  ppppcVar25 = (code ****)param_2[3];
  ppppcVar29 = (code ****)param_2[4];
  ppppcStack_2a0 = param_2;
  if (ppppcVar25 == ppppcVar29) {
LAB_0c8eb5cd:
    auStack_398._8_8_ = &uStack_39a;
    auStack_398._0_8_ = lVar33;
  }
  else {
    ppppcStack_2f0 = param_2 + 3;
    pauStack_258 = (undefined1 (*) [16])(lVar33 + 8);
    do {
      bVar35 = ((byte)*(code *)ppppcVar25 & 1) != 0;
      pppcVar34 = (code ***)((long)ppppcVar25 + 1);
      if (bVar35) {
        pppcVar34 = ppppcVar25[2];
      }
      pppcVar21 = (code ***)(ulong)((byte)*(code *)ppppcVar25 >> 1);
      if (bVar35) {
        pppcVar21 = ppppcVar25[1];
      }
      func_0x0ed5eaa0(apppppppuStack_330,ppppcStack_2f0,pppcVar34,pppcVar21);
      pauVar17 = (undefined1 (*) [16])func_0x0c8e5090(lVar33,ppppcVar25);
      if (pauVar17 == pauStack_258) {
        iVar16 = 3;
      }
      else {
        if (*(long **)pauVar17[6] == (long *)0x0) {
          func_0x04891200();
          goto LAB_0c8ec1e0;
        }
        (**(code **)(**(long **)pauVar17[6] + 0x30))(&pppcStack_2e8);
        if ((pppcStack_2e8 == (code ***)0x0) ||
           (cVar13 = (*(*pppcStack_2e8)[2])(pppcStack_2e8,apppppppuStack_330,ppppcStack_260),
           ppppcVar32 = ppppcStack_308, cVar13 == '\0')) {
          auVar3[0xf] = 0;
          auVar3._0_15_ = stack0xfffffffffffffd69;
          _auStack_298 = auVar3 << 8;
          cStack_268 = '\0';
          iVar16 = 1;
          ppppcVar19 = ppppcStack_2e0;
        }
        else {
          if (((ulong)*ppppcVar25 & 1) != 0) {
            pppcVar34 = ppppcVar25[1];
            if (pppcVar34 == (code ***)0x18) {
              pppcVar34 = ppppcVar25[2];
              ppcVar2 = pppcVar34[2];
              auVar38[0] = -(*(code *)pppcVar34 == DAT_01e0ccf0);
              auVar38[1] = -(*(code *)((long)pppcVar34 + 1) == UNK_01e0ccf1);
              auVar38[2] = -(*(code *)((long)pppcVar34 + 2) == UNK_01e0ccf2);
              auVar38[3] = -(*(code *)((long)pppcVar34 + 3) == UNK_01e0ccf3);
              auVar38[4] = -(*(code *)((long)pppcVar34 + 4) == UNK_01e0ccf4);
              auVar38[5] = -(*(code *)((long)pppcVar34 + 5) == UNK_01e0ccf5);
              auVar38[6] = -(*(code *)((long)pppcVar34 + 6) == UNK_01e0ccf6);
              auVar38[7] = -(*(code *)((long)pppcVar34 + 7) == UNK_01e0ccf7);
              auVar38[8] = -(*(code *)(pppcVar34 + 1) == UNK_01e0ccf8);
              auVar38[9] = -(*(code *)((long)pppcVar34 + 9) == UNK_01e0ccf9);
              auVar38[10] = -(*(code *)((long)pppcVar34 + 10) == UNK_01e0ccfa);
              auVar38[0xb] = -(*(code *)((long)pppcVar34 + 0xb) == UNK_01e0ccfb);
              auVar38[0xc] = -(*(code *)((long)pppcVar34 + 0xc) == UNK_01e0ccfc);
              auVar38[0xd] = -(*(code *)((long)pppcVar34 + 0xd) == UNK_01e0ccfd);
              auVar38[0xe] = -(*(code *)((long)pppcVar34 + 0xe) == UNK_01e0ccfe);
              auVar38[0xf] = -(*(code *)((long)pppcVar34 + 0xf) == UNK_01e0ccff);
              auVar44[0] = -(DAT_01e0cd00 == (char)ppcVar2);
              auVar44[1] = -(UNK_01e0cd01 == (char)((ulong)ppcVar2 >> 8));
              auVar44[2] = -(UNK_01e0cd02 == (char)((ulong)ppcVar2 >> 0x10));
              auVar44[3] = -(UNK_01e0cd03 == (char)((ulong)ppcVar2 >> 0x18));
              auVar44[4] = -(UNK_01e0cd04 == (char)((ulong)ppcVar2 >> 0x20));
              auVar44[5] = -(UNK_01e0cd05 == (char)((ulong)ppcVar2 >> 0x28));
              auVar44[6] = -(UNK_01e0cd06 == (char)((ulong)ppcVar2 >> 0x30));
              auVar44[7] = -(UNK_01e0cd07 == (char)((ulong)ppcVar2 >> 0x38));
              auVar44[8] = 0xff;
              auVar44[9] = 0xff;
              auVar44[10] = 0xff;
              auVar44[0xb] = 0xff;
              auVar44[0xc] = 0xff;
              auVar44[0xd] = 0xff;
              auVar44[0xe] = 0xff;
              auVar44[0xf] = 0xff;
              auVar38 = auVar38 & auVar44;
              if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
                pppppppuVar18 = apppppppuStack_330[0];
                if (cStack_30c == '\x02') {
                  pppppppuVar18 = apppppppuStack_330;
                }
                if (pppppppuVar18 == (undefined8 *******)0x0 || iStack_310 != 0x5eeee7aa) {
                  if (lStack_300 == 0) {
                    (*pcStack_2f8)(0,apppppppuStack_330,0);
                  }
                  pppppppuVar18 = apppppppuStack_330[0];
                  if (cStack_30c == '\x02') {
                    pppppppuVar18 = apppppppuStack_330;
                  }
                  pppppppuVar18 =
                       (undefined8 *******)
                       func_0x0488e200(ppppcVar32,lStack_300,0x5eeee7aa,pppppppuVar18);
                  ppppcVar19 = ppppcVar32;
                }
                if (pppppppuVar18[1] != pppppppuVar18[2]) {
                  ppppppuVar22 = pppppppuVar18[1] + 2;
                  do {
                    bVar14 = *(byte *)(ppppppuVar22 + -2);
                    if ((bVar14 & 1) == 0) {
                      if (bVar14 >> 1 == 0x10) goto LAB_0c8eb3aa;
                    }
                    else if (ppppppuVar22[-1] == (undefined8 *****)0x10) {
LAB_0c8eb3aa:
                      if ((bVar14 & 1) == 0) {
                        pppppuVar24 = (undefined8 *****)((long)ppppppuVar22 + -0xf);
                      }
                      else {
                        pppppuVar24 = *ppppppuVar22;
                      }
                      auVar39[0] = -(*(char *)pppppuVar24 == DAT_014eaeb0);
                      auVar39[1] = -(*(char *)((long)pppppuVar24 + 1) == UNK_014eaeb1);
                      auVar39[2] = -(*(char *)((long)pppppuVar24 + 2) == UNK_014eaeb2);
                      auVar39[3] = -(*(char *)((long)pppppuVar24 + 3) == UNK_014eaeb3);
                      auVar39[4] = -(*(char *)((long)pppppuVar24 + 4) == UNK_014eaeb4);
                      auVar39[5] = -(*(char *)((long)pppppuVar24 + 5) == UNK_014eaeb5);
                      auVar39[6] = -(*(char *)((long)pppppuVar24 + 6) == UNK_014eaeb6);
                      auVar39[7] = -(*(char *)((long)pppppuVar24 + 7) == UNK_014eaeb7);
                      auVar39[8] = -(*(char *)(pppppuVar24 + 1) == UNK_014eaeb8);
                      auVar39[9] = -(*(char *)((long)pppppuVar24 + 9) == UNK_014eaeb9);
                      auVar39[10] = -(*(char *)((long)pppppuVar24 + 10) == UNK_014eaeba);
                      auVar39[0xb] = -(*(char *)((long)pppppuVar24 + 0xb) == UNK_014eaebb);
                      auVar39[0xc] = -(*(char *)((long)pppppuVar24 + 0xc) == UNK_014eaebc);
                      auVar39[0xd] = -(*(char *)((long)pppppuVar24 + 0xd) == UNK_014eaebd);
                      auVar39[0xe] = -(*(char *)((long)pppppuVar24 + 0xe) == UNK_014eaebe);
                      auVar39[0xf] = -(*(char *)((long)pppppuVar24 + 0xf) == UNK_014eaebf);
                      if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar39[0xf] >> 7) << 0xf) == 0xffff) {
                        uStack_39a = 1;
                      }
                    }
                    ppppppuVar23 = ppppppuVar22 + 5;
                    ppppppuVar22 = ppppppuVar22 + 7;
                  } while (ppppppuVar23 != pppppppuVar18[2]);
                }
              }
            }
            else if (pppcVar34 == (code ***)0x1c) {
              pppcVar34 = ppppcVar25[2];
              auVar3 = *(undefined1 (*) [16])((long)pppcVar34 + 0xc);
              auVar37[0] = -(*(code *)pppcVar34 == DAT_01e44d00);
              auVar37[1] = -(*(code *)((long)pppcVar34 + 1) == UNK_01e44d01);
              auVar37[2] = -(*(code *)((long)pppcVar34 + 2) == UNK_01e44d02);
              auVar37[3] = -(*(code *)((long)pppcVar34 + 3) == UNK_01e44d03);
              auVar37[4] = -(*(code *)((long)pppcVar34 + 4) == UNK_01e44d04);
              auVar37[5] = -(*(code *)((long)pppcVar34 + 5) == UNK_01e44d05);
              auVar37[6] = -(*(code *)((long)pppcVar34 + 6) == UNK_01e44d06);
              auVar37[7] = -(*(code *)((long)pppcVar34 + 7) == UNK_01e44d07);
              auVar37[8] = -(*(code *)(pppcVar34 + 1) == UNK_01e44d08);
              auVar37[9] = -(*(code *)((long)pppcVar34 + 9) == UNK_01e44d09);
              auVar37[10] = -(*(code *)((long)pppcVar34 + 10) == UNK_01e44d0a);
              auVar37[0xb] = -(*(code *)((long)pppcVar34 + 0xb) == UNK_01e44d0b);
              auVar37[0xc] = -(*(code *)((long)pppcVar34 + 0xc) == DAT_01e44d0c);
              auVar37[0xd] = -(*(code *)((long)pppcVar34 + 0xd) == UNK_01e44d0d);
              auVar37[0xe] = -(*(code *)((long)pppcVar34 + 0xe) == UNK_01e44d0e);
              auVar37[0xf] = -(*(code *)((long)pppcVar34 + 0xf) == UNK_01e44d0f);
              auVar43[0] = -(DAT_01e44d0c == auVar3[0]);
              auVar43[1] = -(UNK_01e44d0d == auVar3[1]);
              auVar43[2] = -(UNK_01e44d0e == auVar3[2]);
              auVar43[3] = -(UNK_01e44d0f == auVar3[3]);
              auVar43[4] = -(UNK_01e44d10 == auVar3[4]);
              auVar43[5] = -(UNK_01e44d11 == auVar3[5]);
              auVar43[6] = -(UNK_01e44d12 == auVar3[6]);
              auVar43[7] = -(UNK_01e44d13 == auVar3[7]);
              auVar43[8] = -(UNK_01e44d14 == auVar3[8]);
              auVar43[9] = -(UNK_01e44d15 == auVar3[9]);
              auVar43[10] = -(UNK_01e44d16 == auVar3[10]);
              auVar43[0xb] = -(UNK_01e44d17 == auVar3[0xb]);
              auVar43[0xc] = -(UNK_01e44d18 == auVar3[0xc]);
              auVar43[0xd] = -(UNK_01e44d19 == auVar3[0xd]);
              auVar43[0xe] = -(UNK_01e44d1a == auVar3[0xe]);
              auVar43[0xf] = -(UNK_01e44d1b == auVar3[0xf]);
              auVar37 = auVar37 & auVar43;
              if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
                uStack_39b = 1;
              }
            }
            else if (pppcVar34 == (code ***)0x19) {
              pppcVar34 = ppppcVar25[2];
              auVar3 = *(undefined1 (*) [16])((long)pppcVar34 + 9);
              auVar36[0] = -(*(code *)pppcVar34 == DAT_01df4730);
              auVar36[1] = -(*(code *)((long)pppcVar34 + 1) == UNK_01df4731);
              auVar36[2] = -(*(code *)((long)pppcVar34 + 2) == UNK_01df4732);
              auVar36[3] = -(*(code *)((long)pppcVar34 + 3) == UNK_01df4733);
              auVar36[4] = -(*(code *)((long)pppcVar34 + 4) == UNK_01df4734);
              auVar36[5] = -(*(code *)((long)pppcVar34 + 5) == UNK_01df4735);
              auVar36[6] = -(*(code *)((long)pppcVar34 + 6) == UNK_01df4736);
              auVar36[7] = -(*(code *)((long)pppcVar34 + 7) == UNK_01df4737);
              auVar36[8] = -(*(code *)(pppcVar34 + 1) == UNK_01df4738);
              auVar36[9] = -(*(code *)((long)pppcVar34 + 9) == DAT_01df4739);
              auVar36[10] = -(*(code *)((long)pppcVar34 + 10) == UNK_01df473a);
              auVar36[0xb] = -(*(code *)((long)pppcVar34 + 0xb) == UNK_01df473b);
              auVar36[0xc] = -(*(code *)((long)pppcVar34 + 0xc) == UNK_01df473c);
              auVar36[0xd] = -(*(code *)((long)pppcVar34 + 0xd) == UNK_01df473d);
              auVar36[0xe] = -(*(code *)((long)pppcVar34 + 0xe) == UNK_01df473e);
              auVar36[0xf] = -(*(code *)((long)pppcVar34 + 0xf) == UNK_01df473f);
              auVar42[0] = -(DAT_01df4739 == auVar3[0]);
              auVar42[1] = -(UNK_01df473a == auVar3[1]);
              auVar42[2] = -(UNK_01df473b == auVar3[2]);
              auVar42[3] = -(UNK_01df473c == auVar3[3]);
              auVar42[4] = -(UNK_01df473d == auVar3[4]);
              auVar42[5] = -(UNK_01df473e == auVar3[5]);
              auVar42[6] = -(UNK_01df473f == auVar3[6]);
              auVar42[7] = -(UNK_01df4740 == auVar3[7]);
              auVar42[8] = -(UNK_01df4741 == auVar3[8]);
              auVar42[9] = -(UNK_01df4742 == auVar3[9]);
              auVar42[10] = -(UNK_01df4743 == auVar3[10]);
              auVar42[0xb] = -(UNK_01df4744 == auVar3[0xb]);
              auVar42[0xc] = -(UNK_01df4745 == auVar3[0xc]);
              auVar42[0xd] = -(UNK_01df4746 == auVar3[0xd]);
              auVar42[0xe] = -(UNK_01df4747 == auVar3[0xe]);
              auVar42[0xf] = -(UNK_01df4748 == auVar3[0xf]);
              auVar36 = auVar36 & auVar42;
              if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
                pppppppuVar18 = apppppppuStack_330[0];
                if (cStack_30c == '\x02') {
                  pppppppuVar18 = apppppppuStack_330;
                }
                if (pppppppuVar18 == (undefined8 *******)0x0 || iStack_310 != 0x54699842) {
                  if (pcStack_2f8 != (code *)0x0) {
                    if (lStack_300 == 0) {
                      (*pcStack_2f8)(0,apppppppuStack_330,0);
                    }
                    pppppppuVar18 = apppppppuStack_330[0];
                    if (cStack_30c == '\x02') {
                      pppppppuVar18 = apppppppuStack_330;
                    }
                    pppppppuVar18 =
                         (undefined8 *******)
                         func_0x0488e200(ppppcVar32,lStack_300,0x54699842,pppppppuVar18);
                    ppppcVar19 = ppppcVar32;
                    if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_0c8eb23c;
                  }
                  ppppcVar32 = ppppcStack_308;
                  pppppppuVar18 = apppppppuStack_330[0];
                  if (cStack_30c == '\x02') {
                    pppppppuVar18 = apppppppuStack_330;
                  }
                  if ((iStack_310 == -0x65a1c94) && (pppppppuVar18 != (undefined8 *******)0x0)) {
LAB_0c8eb4af:
                    if (uStack_38 == 1) {
                      uVar15 = *(uint *)(pppppppuVar18 + 0x3c);
                      if ((ulong)uStack_40 == 0xffffffff) {
                        if (uVar15 == 0xffffffff) goto LAB_0c8eaf80;
                      }
                      else if (uVar15 == 0xffffffff) {
                        (**(code **)(&UNK_0f3e34e0 + (ulong)uStack_40 * 8))(auStack_398,auStack_210)
                        ;
                        goto LAB_0c8eb4f4;
                      }
                      auStack_398._0_8_ = auStack_210;
                      (**(code **)(&UNK_0f3e3518 + (ulong)uVar15 * 8))
                                (auStack_398,auStack_210,pppppppuVar18 + 2);
                    }
                    else {
                      func_0x0c8e8300(&ppppcStack_220,pppppppuVar18);
                    }
                  }
                  else {
                    if (pcStack_2f8 != (code *)0x0) {
                      if (lStack_300 == 0) {
                        (*pcStack_2f8)(0,apppppppuStack_330,0);
                      }
                      pppppppuVar18 = apppppppuStack_330[0];
                      if (cStack_30c == '\x02') {
                        pppppppuVar18 = apppppppuStack_330;
                      }
                      pppppppuVar18 =
                           (undefined8 *******)
                           func_0x0488e200(ppppcVar32,lStack_300,0xf9a5e36c,pppppppuVar18);
                      ppppcVar19 = ppppcVar32;
                      if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_0c8eb4af;
                    }
                    func_0x05862b30(1,3,5,&UNK_0135210b);
                  }
                }
                else {
LAB_0c8eb23c:
                  if (uStack_38 == 0) {
                    uVar15 = *(uint *)(pppppppuVar18 + 0x3c);
                    if ((ulong)uStack_40 == 0xffffffff) {
                      if (uVar15 != 0xffffffff) goto LAB_0c8eb522;
                    }
                    else if (uVar15 == 0xffffffff) {
                      (**(code **)(&UNK_0f3e34e0 + (ulong)uStack_40 * 8))(auStack_398,auStack_210);
LAB_0c8eb4f4:
                      uStack_40 = 0xffffffff;
                    }
                    else {
LAB_0c8eb522:
                      auStack_398._0_8_ = auStack_210;
                      (**(code **)(&UNK_0f3e3518 + (ulong)uVar15 * 8))
                                (auStack_398,auStack_210,pppppppuVar18 + 2);
                    }
                  }
                  else {
                    func_0x0c8e5180(&ppppcStack_220,pppppppuVar18);
                  }
                }
              }
            }
          }
LAB_0c8eaf80:
          if (ppppcStack_2e0 != (code ****)0x0) {
            LOCK();
            ppppcStack_2e0[1] = (code ***)((long)ppppcStack_2e0[1] + 1);
            UNLOCK();
          }
          auStack_398._8_8_ = ppppcStack_2e0;
          auStack_398._0_8_ = pppcStack_2e8;
          if (pppcStack_2e8 == (code ***)0x0) goto LAB_0c8ec1c5;
          ppppcStack_378 = (code ****)&UNK_0488e0b0;
          uStack_368 = 0x48b5725f;
          pppcStack_370 = (code ***)0x0;
          cStack_364 = '\0';
          pppcStack_388 = (code ***)0x0;
          (*pcStack_320)(4,apppppppuStack_330,&pppcStack_388);
          ppppcStack_360 = ppppcStack_308;
          auVar7._8_8_ = pcStack_2f8;
          auVar7._0_8_ = lStack_300;
          uVar15 = (uint)(cStack_364 == '\0' && cStack_30c != '\0');
          auVar40._0_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
          auVar40._4_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
          auVar40._8_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
          auVar40._12_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
          auStack_358 = ~auVar40 & auVar7;
          func_0x0c8e4350(auStack_2d8,auStack_398);
          if (pppcStack_370 != (code ***)0x0) {
            (*(code *)pppcStack_370)(&pppcStack_388);
          }
          uVar20 = auStack_398._8_8_;
          if ((long *)auStack_398._8_8_ != (long *)0x0) {
            LOCK();
            plVar5 = (long *)(auStack_398._8_8_ + 8);
            lVar31 = *plVar5;
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)(*(long *)auStack_398._8_8_ + 0x10))(auStack_398._8_8_);
              func_0x0412c2d0(uVar20);
            }
          }
          iVar16 = 0;
          ppppcVar19 = ppppcStack_2e0;
        }
        ppppcStack_2e0 = ppppcVar19;
        if (ppppcVar19 != (code ****)0x0) {
          LOCK();
          ppppcVar32 = ppppcVar19 + 1;
          pppcVar34 = *ppppcVar32;
          *ppppcVar32 = (code ***)((long)*ppppcVar32 - 1);
          UNLOCK();
          if (pppcVar34 == (code ***)0x0) {
            (*(code *)(*ppppcVar19)[2])(ppppcVar19);
            func_0x0412c2d0(ppppcVar19);
          }
        }
      }
      if (pcStack_318 != (code *)0x0) {
        (*pcStack_318)(apppppppuStack_330);
      }
      param_2 = ppppcStack_2a0;
      if ((iVar16 != 3) && (iVar16 != 0)) goto LAB_0c8ebed9;
      ppppcVar25 = ppppcVar25 + 3;
    } while (ppppcVar25 != ppppcVar29);
    ppppcVar19 = (code ****)(ulong)uStack_38;
    auStack_398._8_8_ = &uStack_39a;
    auStack_398._0_8_ = lVar33;
    pppcStack_388 = (code ***)&uStack_39b;
    if (uStack_38 == 0xffffffff) {
      func_0x04931450();
      goto LAB_0c8eb5cd;
    }
  }
  pppcStack_388 = (code ***)&uStack_39b;
  apppppppuStack_330[0] = (undefined8 *******)auStack_398;
  cVar13 = (**(code **)(&UNK_0f3e36a8 + (long)ppppcVar19 * 8))(apppppppuStack_330,&ppppcStack_220);
  if (cVar13 == '\0') {
    auVar11[0xf] = 0;
    auVar11._0_15_ = stack0xfffffffffffffd69;
    _auStack_298 = auVar11 << 8;
    cStack_268 = '\0';
  }
  else {
    if (*(code *)(param_2 + 0xf) == (code)0x1) {
      pauVar17 = (undefined1 (*) [16])param_2[9];
      pauStack_258 = (undefined1 (*) [16])param_2[10];
      if (pauVar17 != pauStack_258) {
        ppppcStack_260 = param_2 + 9;
        ppppcStack_2f0 = (code ****)(lVar33 + 0x20);
        do {
          ppppcVar29 = ppppcStack_2f0;
          if (*(code *)(param_2 + 0xf) == (code)0x0) {
LAB_0c8ec1e0:
            func_0x048a88b0();
LAB_0c8ec1e5:
            func_0x04891200();
LAB_0c8ec1ea:
            func_0x0c8ec5d0();
LAB_0c8ec1ef:
            uVar20 = func_0x04882eb0();
            uVar20 = FUN_04882e20(uVar20);
            uVar20 = FUN_04882e20(uVar20);
            uVar20 = FUN_04882e20(uVar20);
            func_0x0c8e47a0(ppppcStack_2e0);
            if (pcStack_318 != (code *)0x0) {
              (*pcStack_318)(apppppppuStack_330);
            }
            func_0x0c8e47d0(&ppppcStack_220);
            func_0x0c8e4820(auStack_2d8);
            _Unwind_Resume(uVar20);
            pcVar30 = (code *)swi(3);
            (*pcVar30)();
            return;
          }
          bVar35 = ((*pauVar17)[0] & 1) == 0;
          ppppcVar25 = *(code *****)pauVar17[1];
          if (bVar35) {
            ppppcVar25 = (code ****)(*pauVar17 + 1);
          }
          uVar28 = (ulong)((byte)(*pauVar17)[0] >> 1);
          if (!bVar35) {
            uVar28 = *(ulong *)(*pauVar17 + 8);
          }
          func_0x0ed5eaa0(apppppppuStack_330,ppppcStack_260,ppppcVar25,uVar28);
          ppppcVar29 = (code ****)*ppppcVar29;
          if (ppppcVar29 != (code ****)0x0) {
            bVar35 = ((*pauVar17)[0] & 1) != 0;
            ppppcVar19 = (code ****)(*pauVar17 + 1);
            if (bVar35) {
              ppppcVar19 = *(code *****)pauVar17[1];
            }
            ppppcVar25 = ppppcStack_2f0;
            ppppcVar32 = (code ****)(ulong)((byte)(*pauVar17)[0] >> 1);
            if (bVar35) {
              ppppcVar32 = *(code *****)(*pauVar17 + 8);
            }
            do {
              bVar35 = ((byte)*(code *)(ppppcVar29 + 4) & 1) != 0;
              pppcVar34 = (code ***)((long)ppppcVar29 + 0x21);
              if (bVar35) {
                pppcVar34 = ppppcVar29[6];
              }
              ppppcVar27 = (code ****)(ulong)((byte)*(code *)(ppppcVar29 + 4) >> 1);
              if (bVar35) {
                ppppcVar27 = (code ****)ppppcVar29[5];
              }
              ppppcVar26 = ppppcVar27;
              if (ppppcVar32 < ppppcVar27) {
                ppppcVar26 = ppppcVar32;
              }
              uVar15 = func_0x0eee2ff0(pppcVar34,ppppcVar19,ppppcVar26);
              param_2 = ppppcStack_2a0;
              if (uVar15 == 0) {
                bVar35 = ppppcVar27 < ppppcVar32;
                uVar15 = (uint)bVar35 << 3;
              }
              else {
                bVar35 = SUB41(uVar15 >> 0x1f,0);
                uVar15 = uVar15 >> 0x1c & 0xfffffff8;
              }
              if (bVar35 == false) {
                ppppcVar25 = ppppcVar29;
              }
              ppppcVar29 = *(code *****)((long)ppppcVar29 + (ulong)uVar15);
            } while (ppppcVar29 != (code ****)0x0);
            if (ppppcVar25 != ppppcStack_2f0) {
              bVar35 = ((byte)*(code *)(ppppcVar25 + 4) & 1) != 0;
              pppcVar34 = (code ***)((long)ppppcVar25 + 0x21);
              if (bVar35) {
                pppcVar34 = ppppcVar25[6];
              }
              ppppcVar29 = (code ****)(ulong)((byte)*(code *)(ppppcVar25 + 4) >> 1);
              if (bVar35) {
                ppppcVar29 = (code ****)ppppcVar25[5];
              }
              ppppcVar27 = ppppcVar32;
              if (ppppcVar29 < ppppcVar32) {
                ppppcVar27 = ppppcVar29;
              }
              iVar16 = func_0x0eee2ff0(ppppcVar19,pppcVar34,ppppcVar27);
              if (iVar16 == 0) {
                if (ppppcVar29 <= ppppcVar32) goto LAB_0c8eb787;
              }
              else if (-1 < iVar16) {
LAB_0c8eb787:
                if (ppppcVar25[0xc] == (code ***)0x0) goto LAB_0c8ec1e5;
                (*(*ppppcVar25[0xc])[6])(&pppcStack_2e8);
                pppcVar34 = pppcStack_2e8;
                if (pppcStack_2e8 == (code ***)0x0) {
                  auVar10[0xf] = 0;
                  auVar10._0_15_ = stack0xfffffffffffffd69;
                  _auStack_298 = auVar10 << 8;
                  cStack_268 = '\0';
                }
                else {
                  if (((*pauVar17)[0] & 1) == 0) {
                    pppcStack_388 = *(code ****)pauVar17[1];
                    auStack_398 = *pauVar17;
                    auVar3 = auStack_358;
                    pppcStack_380 = pppcStack_2e8;
                    ppppcStack_378 = ppppcStack_2e0;
                  }
                  else {
                    func_0x0412e5e0(auStack_398,*(undefined8 *)pauVar17[1],
                                    *(undefined8 *)(*pauVar17 + 8));
                    auVar3 = auStack_358;
                    pppcStack_380 = pppcStack_2e8;
                    ppppcStack_378 = ppppcStack_2e0;
                  }
                  if (ppppcStack_378 != (code ****)0x0) {
                    LOCK();
                    ppppcStack_378[1] = (code ***)((long)ppppcStack_378[1] + 1);
                    UNLOCK();
                  }
                  auStack_358 = auVar3;
                  if (pppcStack_380 == (code ***)0x0) goto LAB_0c8ec1c5;
                  pppcStack_230 = pppcVar34;
                  ppppcStack_360 = (code ****)&UNK_0488e0b0;
                  auStack_358._12_4_ = auVar3._12_4_;
                  auStack_358._0_8_ = auVar3._0_8_;
                  auStack_358._8_4_ = 0x48b5725f;
                  auVar9._8_4_ = 0;
                  auVar9._0_8_ = auStack_358._8_8_;
                  auStack_358._0_12_ = auVar9 << 0x40;
                  auStack_358._13_3_ = auVar3._13_3_;
                  auStack_358[0xc] = (code)0x0;
                  pppcStack_370 = (code ***)0x0;
                  pppcStack_2e8 = pppcStack_380;
                  ppppcStack_2e0 = ppppcStack_378;
                  (*pcStack_320)(4,apppppppuStack_330,&pppcStack_370);
                  ppppcVar29 = ppppcStack_2b8;
                  ppppcVar25 = ppppcStack_2c0;
                  pppcVar34 = pppcStack_370;
                  ppppcStack_348 = ppppcStack_308;
                  auVar8._8_8_ = pcStack_2f8;
                  auVar8._0_8_ = lStack_300;
                  uVar15 = (uint)(auStack_358[0xc] == (code)0x0 && cStack_30c != '\0');
                  auVar41._0_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
                  auVar41._4_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
                  auVar41._8_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
                  auVar41._12_4_ = (int)(uVar15 << 0x1f) >> 0x1f;
                  auStack_340 = ~auVar41 & auVar8;
                  if (ppppcStack_2b8 < ppppcStack_2b0) {
                    ppppcStack_2b8[2] = pppcStack_388;
                    *ppppcStack_2b8 = (code ***)auStack_398._0_8_;
                    ppppcStack_2b8[1] = (code ***)auStack_398._8_8_;
                    auStack_398 = (undefined1  [16])0x0;
                    pppcStack_388 = (code ***)0x0;
                    ppppcStack_2b8[3] = pppcStack_380;
                    ppppcStack_2b8[4] = (code ***)ppppcStack_378;
                    if (ppppcStack_378 != (code ****)0x0) {
                      LOCK();
                      ppppcStack_378[1] = (code ***)((long)ppppcStack_378[1] + 1);
                      UNLOCK();
                      pppcStack_380 = ppppcStack_2b8[3];
                    }
                    if (pppcStack_380 == (code ***)0x0) goto LAB_0c8ec1c5;
                    ppppcStack_2b8[5] = (code ***)0x0;
                    ppppcStack_2b8[7] = (code ***)ppppcStack_360;
                    ppppcStack_2b8[8] = (code ***)auStack_358._0_8_;
                    *(undefined4 *)(ppppcStack_2b8 + 9) = auStack_358._8_4_;
                    *(code *)((long)ppppcStack_2b8 + 0x4c) = auStack_358[0xc];
                    if (auStack_358[0xc] != (code)0x0) {
                      if (auStack_358[0xc] == (code)0x2) {
                        (*(code *)ppppcStack_360)(5,&pppcStack_370);
                      }
                      else {
                        pppcStack_370 = (code ***)0x0;
                        ppppcStack_2b8[5] = pppcVar34;
                      }
                    }
                    uVar20 = auStack_340._8_8_;
                    ppppcVar29[10] = (code ***)ppppcStack_348;
                    ppppcVar29[0xb] = (code ***)auStack_340._0_8_;
                    auStack_340 = ZEXT816(0);
                    ppppcVar29[0xc] = (code ***)uVar20;
                    ppppcVar29 = ppppcVar29 + 0xd;
                    ppppcVar25 = ppppcStack_2c0;
                    ppppcVar19 = ppppcStack_2b0;
                  }
                  else {
                    ppppcVar19 = (code ****)((long)ppppcStack_2b8 - (long)ppppcStack_2c0);
                    uVar28 = ((long)ppppcVar19 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
                    if (0x276276276276276 < uVar28) goto LAB_0c8ec1ea;
                    lVar33 = (long)ppppcStack_2b0 - (long)ppppcStack_2c0 >> 3;
                    uVar6 = lVar33 * -0x6276276276276276;
                    uStack_238 = uVar28;
                    if (uVar28 < uVar6) {
                      uStack_238 = uVar6;
                    }
                    if (0x13b13b13b13b13a < (ulong)(lVar33 * 0x4ec4ec4ec4ec4ec5)) {
                      uStack_238 = 0x276276276276276;
                    }
                    if (uStack_238 == 0) {
                      lVar33 = 0;
                    }
                    else {
                      if (0x276276276276276 < uStack_238) goto LAB_0c8ec1ef;
                      lVar31 = uStack_238 * 0x68;
                      lVar33 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar31);
                      if (lVar33 == 0) {
                        FUN_0eec74c0(lVar31,0);
                        lVar33 = 0;
                      }
                    }
                    pppcVar34 = pppcStack_370;
                    pcVar30 = (code *)((long)ppppcVar19 + lVar33);
                    *(code ****)((long)ppppcVar19 + lVar33 + 0x10) = pppcStack_388;
                    *(undefined8 *)((long)ppppcVar19 + lVar33) = auStack_398._0_8_;
                    *(undefined8 *)((code *)((long)ppppcVar19 + lVar33) + 8) = auStack_398._8_8_;
                    auStack_398 = (undefined1  [16])0x0;
                    pppcStack_388 = (code ***)0x0;
                    *(code ****)((long)ppppcVar19 + lVar33 + 0x18) = pppcStack_380;
                    *(code *****)((long)ppppcVar19 + lVar33 + 0x20) = ppppcStack_378;
                    if (ppppcStack_378 != (code ****)0x0) {
                      LOCK();
                      ppppcStack_378[1] = (code ***)((long)ppppcStack_378[1] + 1);
                      UNLOCK();
                      pppcStack_380 = *(code ****)(pcVar30 + 0x18);
                    }
                    lStack_250 = lVar33;
                    if (pppcStack_380 == (code ***)0x0) goto LAB_0c8ec1c5;
                    *(undefined8 *)(pcVar30 + 0x28) = 0;
                    *(code *****)(pcVar30 + 0x38) = ppppcStack_360;
                    *(undefined8 *)(pcVar30 + 0x40) = auStack_358._0_8_;
                    *(undefined4 *)(pcVar30 + 0x48) = auStack_358._8_4_;
                    pcVar30[0x4c] = auStack_358[0xc];
                    if (auStack_358[0xc] != (code)0x0) {
                      if (auStack_358[0xc] == (code)0x2) {
                        (*(code *)ppppcStack_360)(5,&pppcStack_370);
                      }
                      else {
                        pppcStack_370 = (code ***)0x0;
                        *(code ****)(pcVar30 + 0x28) = pppcVar34;
                      }
                    }
                    ppppcVar19 = ppppcStack_2b8;
                    ppppcVar32 = ppppcStack_2c0;
                    uVar20 = auStack_340._8_8_;
                    *(code *****)(pcVar30 + 0x50) = ppppcStack_348;
                    *(undefined8 *)(pcVar30 + 0x58) = auStack_340._0_8_;
                    auStack_340 = ZEXT816(0);
                    *(undefined8 *)(pcVar30 + 0x60) = uVar20;
                    lStack_248 = (long)ppppcStack_2b8 - (long)ppppcStack_2c0;
                    pcStack_240 = pcVar30;
                    if (lStack_248 != 0) {
                      pcVar30 = (code *)((long)ppppcVar29 +
                                        lStack_250 + ((lStack_248 >> 3) * -8 - (long)ppppcVar25) +
                                        0x60);
                      ppppcVar29 = ppppcStack_2c0 + 5;
                      do {
                        *(code ****)(pcVar30 + -0x50) = ppppcVar29[-3];
                        pppcVar34 = ppppcVar29[-4];
                        *(code ****)(pcVar30 + -0x60) = ppppcVar29[-5];
                        *(code ****)(pcVar30 + -0x58) = pppcVar34;
                        *(undefined1 (*) [16])(ppppcVar29 + -5) = (undefined1  [16])0x0;
                        ppppcVar29[-3] = (code ***)0x0;
                        pppcVar34 = ppppcVar29[-2];
                        *(code ****)(pcVar30 + -0x48) = pppcVar34;
                        pppcVar21 = ppppcVar29[-1];
                        *(code ****)(pcVar30 + -0x40) = pppcVar21;
                        if (pppcVar21 != (code ***)0x0) {
                          LOCK();
                          pppcVar21[1] = (code **)((long)pppcVar21[1] + 1);
                          UNLOCK();
                          pppcVar34 = *(code ****)(pcVar30 + -0x48);
                        }
                        if (pppcVar34 == (code ***)0x0) goto LAB_0c8ec1c5;
                        *(ulong *)(pcVar30 + -0x38) = 0;
                        pppcVar21 = ppppcVar29[3];
                        pppcVar34 = ppppcVar29[2];
                        *(code ****)(pcVar30 + -0x28) = ppppcVar29[2];
                        *(code ****)(pcVar30 + -0x20) = pppcVar21;
                        *(undefined4 *)(pcVar30 + -0x18) = *(undefined4 *)(ppppcVar29 + 4);
                        cVar4 = *(code *)((long)ppppcVar29 + 0x24);
                        pcVar30[-0x14] = cVar4;
                        if (cVar4 != (code)0x0) {
                          if (cVar4 == (code)0x2) {
                            (*(code *)pppcVar34)(5,ppppcVar29);
                          }
                          else {
                            pppcVar34 = *ppppcVar29;
                            *ppppcVar29 = (code ***)0x0;
                            *(code ****)(pcVar30 + -0x38) = pppcVar34;
                          }
                        }
                        param_2 = ppppcStack_2a0;
                        pppcVar34 = ppppcVar29[6];
                        ppppcVar29[6] = (code ***)0x0;
                        *(code ****)(pcVar30 + -0x10) = ppppcVar29[5];
                        *(code ****)(pcVar30 + -8) = pppcVar34;
                        pppcVar34 = ppppcVar29[7];
                        ppppcVar29[7] = (code ***)0x0;
                        *(code ****)pcVar30 = pppcVar34;
                        pcVar30 = pcVar30 + 0x68;
                        ppppcVar25 = ppppcVar29 + 8;
                        ppppcVar29 = ppppcVar29 + 0xd;
                      } while (ppppcVar25 != ppppcVar19);
                      do {
                        if (ppppcVar32[8] != (code ***)0x0) {
                          (*(code *)ppppcVar32[8])(ppppcVar32 + 5);
                        }
                        pppcVar34 = ppppcVar32[4];
                        if (pppcVar34 == (code ***)0x0) {
LAB_0c8ebcf4:
                          cVar4 = *(code *)ppppcVar32;
                        }
                        else {
                          LOCK();
                          pppcVar21 = pppcVar34 + 1;
                          ppcVar2 = *pppcVar21;
                          *pppcVar21 = (code **)((long)*pppcVar21 + -1);
                          UNLOCK();
                          if (ppcVar2 != (code **)0x0) goto LAB_0c8ebcf4;
                          (*(*pppcVar34)[2])(pppcVar34);
                          func_0x0412c2d0(pppcVar34);
                          cVar4 = *(code *)ppppcVar32;
                        }
                        if (((byte)cVar4 & 1) != 0) {
                          func_0x0412a280(ppppcVar32[2],(ulong)*ppppcVar32 & 0xfffffffffffffffe);
                        }
                        ppppcVar32 = ppppcVar32 + 0xd;
                      } while (ppppcVar32 != ppppcVar19);
                    }
                    ppppcVar19 = (code ****)(lStack_250 + uStack_238 * 0x68);
                    ppppcVar29 = (code ****)(pcStack_240 + 0x68);
                    ppppcVar25 = (code ****)(pcStack_240 + -lStack_248);
                    if (ppppcStack_2c0 != (code ****)0x0) {
                      lVar33 = (long)ppppcStack_2b0 - (long)ppppcStack_2c0;
                      ppppcVar25 = ppppcStack_2c0;
                      ppppcStack_2c0 = (code ****)(pcStack_240 + -lStack_248);
                      ppppcStack_2b8 = ppppcVar29;
                      ppppcStack_2b0 = ppppcVar19;
                      func_0x0412a280(ppppcVar25,lVar33);
                      ppppcVar25 = ppppcStack_2c0;
                      ppppcVar19 = ppppcStack_2b0;
                    }
                  }
                  ppppcStack_2b0 = ppppcVar19;
                  ppppcStack_2c0 = ppppcVar25;
                  ppppcStack_2b8 = ppppcVar29;
                  if ((code *)auStack_358._0_8_ != (code *)0x0) {
                    (*(code *)auStack_358._0_8_)(&pppcStack_370);
                  }
                  pppcVar34 = pppcStack_230;
                  ppppcVar29 = ppppcStack_378;
                  if (ppppcStack_378 != (code ****)0x0) {
                    LOCK();
                    ppppcVar25 = ppppcStack_378 + 1;
                    pppcVar21 = *ppppcVar25;
                    *ppppcVar25 = (code ***)((long)*ppppcVar25 - 1);
                    UNLOCK();
                    if (pppcVar21 == (code ***)0x0) {
                      (*(code *)(*ppppcStack_378)[2])(ppppcStack_378);
                      func_0x0412c2d0(ppppcVar29);
                    }
                  }
                  if ((auStack_398[0] & 1) != 0) {
                    func_0x0412a280(pppcStack_388,auStack_398._0_8_ & 0xfffffffffffffffe);
                  }
                }
                ppppcVar29 = ppppcStack_2e0;
                if (ppppcStack_2e0 != (code ****)0x0) {
                  LOCK();
                  ppppcVar25 = ppppcStack_2e0 + 1;
                  pppcVar21 = *ppppcVar25;
                  *ppppcVar25 = (code ***)((long)*ppppcVar25 - 1);
                  UNLOCK();
                  if (pppcVar21 == (code ***)0x0) {
                    (*(code *)(*ppppcStack_2e0)[2])(ppppcStack_2e0);
                    func_0x0412c2d0(ppppcVar29);
                  }
                }
                if (pppcVar34 == (code ***)0x0) {
                  if (pcStack_318 != (code *)0x0) {
                    (*pcStack_318)(apppppppuStack_330);
                  }
                  goto LAB_0c8ebed9;
                }
              }
            }
          }
          if (pcStack_318 != (code *)0x0) {
            (*pcStack_318)(apppppppuStack_330);
          }
          pauVar17 = (undefined1 (*) [16])(pauVar17[1] + 8);
        } while (pauVar17 != pauStack_258);
      }
    }
    _auStack_298 = auStack_2d8;
    pppcStack_288 = pppcStack_2c8;
    auStack_2d8 = (undefined1  [16])0x0;
    pppcStack_2c8 = (code ***)0x0;
    auStack_280._8_8_ = ppppcStack_2b8;
    auStack_280._0_8_ = ppppcStack_2c0;
    ppppcStack_270 = ppppcStack_2b0;
    ppppcStack_2c0 = (code ****)0x0;
    ppppcStack_2b8 = (code ****)0x0;
    ppppcStack_2b0 = (code ****)0x0;
    cStack_268 = '\x01';
  }
LAB_0c8ebed9:
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f3e3550 + (ulong)uStack_38 * 8))(auStack_398,&ppppcStack_220);
  }
  ppppcStack_220 = (code ****)&ppppcStack_2c0;
  func_0x09f90d70(&ppppcStack_220);
  ppppcVar29 = ppppcStack_2a0;
  uVar20 = auStack_2d8._0_8_;
  if (auStack_2d8._0_8_ != 0) {
    for (lVar33 = auStack_2d8._8_8_; uVar20 != lVar33; lVar33 = lVar33 + -0x50) {
      if (*(code **)(lVar33 + -0x28) != (code *)0x0) {
        (**(code **)(lVar33 + -0x28))(lVar33 + -0x40);
      }
      plVar5 = *(long **)(lVar33 + -0x48);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar31 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          func_0x0412c2d0(plVar5);
        }
      }
    }
    auStack_2d8._8_8_ = uVar20;
    func_0x0412a280(auStack_2d8._0_8_,(long)pppcStack_2c8 - auStack_2d8._0_8_);
  }
  if (cStack_268 != '\x01') goto LAB_0c8ec0d7;
  ppppcVar19 = (code ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppppcVar19 == (code ****)0x0) goto LAB_0c8ec1ca;
  goto LAB_0c8ebfe6;
LAB_0c8ec1c5:
  func_0x04890760();
LAB_0c8ec1ca:
  FUN_0eec74c0(0x30,0);
LAB_0c8ebfe6:
  *ppppcVar19 = (code ***)auStack_298;
  ppppcVar19[1] = pppcStack_290;
  ppppcVar19[2] = pppcStack_288;
  _auStack_298 = (undefined1  [16])0x0;
  pppcStack_288 = (code ***)0x0;
  ppppcVar19[3] = (code ***)auStack_280._0_8_;
  ppppcVar19[4] = (code ***)auStack_280._8_8_;
  ppppcVar19[5] = (code ***)ppppcStack_270;
  auStack_280 = (undefined1  [16])0x0;
  ppppcStack_270 = (code ****)0x0;
  ppppcStack_220 = ppppcVar19;
  bVar14 = func_0x0c8ea3e0(uStack_228,ppppcVar29,ppppcVar29,&ppppcStack_220);
  ppppcVar25 = ppppcStack_220;
  ppppcStack_220 = (code ****)0x0;
  if (ppppcVar25 != (code ****)0x0) {
    func_0x09f90cb0(&ppppcStack_220);
  }
  if (((bVar14 | bStack_399) & 1) == 0) {
    if (((ulong)*ppppcVar29 & 1) == 0) {
      ppppcStack_220 = (code ****)((long)ppppcVar29 + 1);
    }
    else {
      ppppcStack_220 = (code ****)ppppcVar29[2];
    }
    func_0x09b479d0(1,3,5,&UNK_011ae64a,&ppppcStack_220);
  }
LAB_0c8ec0d7:
  if (cStack_268 == '\x01') {
    ppppcStack_220 = (code ****)auStack_280;
    func_0x09f90d70(&ppppcStack_220);
    auVar12 = auStack_298;
    if (auStack_298 != (undefined1  [8])0x0) {
      for (pppcVar34 = pppcStack_290; auVar12 != (undefined1  [8])pppcVar34;
          pppcVar34 = (code ***)((long)pppcVar34 + -0x50)) {
        if (*(code **)((long)pppcVar34 + -0x28) != (code *)0x0) {
          (**(code **)((long)pppcVar34 + -0x28))((long)pppcVar34 + -0x40);
        }
        plVar5 = *(long **)((long)pppcVar34 + -0x48);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar33 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar33 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
      }
      pppcStack_290 = (code ***)auVar12;
      func_0x0412a280(auStack_298,(long)pppcStack_288 - (long)auStack_298);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x14eaeb0  minecraft:nether
 * 0x1df4730  minecraft:surface_builder
 * 0x1df4739  :surface_builder
 * 0x1e0ccf0  minecraft:replace_biomes
 * 0x1e0cd00  e_biomes
 * 0x1e44d00  minecraft:subsurface_builder
 * 0x1e44d0c  bsurface_builder
 */
