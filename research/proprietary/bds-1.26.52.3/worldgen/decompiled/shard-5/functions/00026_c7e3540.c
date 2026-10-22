/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8e3540 (ELF vaddr 0xc7e3540)
 * Label: caller-of-callee
 * Body:  [[0c8e3540, 0c8e36f3] [0c8e3700, 0c8e38d8] [0c8e38e0, 0c8e391d] [0c8e3920, 0c8e3b89] [0c8e3b90, 0c8e3ba3] [0c8e3bb0, 0c8e3eed] [0c8e3ef0, 0c8e413e] [0c8e41fb, 0c8e420c] [0c8e4222, 0c8e4234] [0c8e4240, 0c8e4262]]
 * Ghidra: FUN_0c8e3540
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8e3540(long param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  long ******pppppplVar5;
  char *pcVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [8];
  char cVar11;
  byte bVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  byte *pbVar15;
  undefined8 uVar16;
  ulong uVar17;
  byte *pbVar18;
  long ******pppppplVar19;
  long *****ppppplVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 uStack_35b;
  byte bStack_35a;
  byte bStack_359;
  long *******appppppplStack_358 [2];
  code *pcStack_348;
  code *pcStack_340;
  int iStack_338;
  char cStack_334;
  byte *pbStack_330;
  long lStack_328;
  code *pcStack_320;
  undefined1 auStack_318 [8];
  long lStack_310;
  long lStack_308;
  undefined1 auStack_300 [16];
  long lStack_2f0;
  char cStack_2e8;
  long ******pppppplStack_2d8;
  byte *pbStack_2d0;
  undefined1 *apuStack_2c8 [2];
  undefined *puStack_2b8;
  code *pcStack_2b0;
  undefined4 uStack_2a8;
  char cStack_2a4;
  byte *pbStack_2a0;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long ******pppppplStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  byte *pbStack_240;
  undefined8 uStack_238;
  long ******pppppplStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  undefined1 auStack_218 [8];
  long *****appppplStack_210 [8];
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
  
  pppppplVar5 = *(long *******)(param_1 + 8);
  uStack_238 = *(undefined8 *)(param_1 + 0x10);
  bStack_359 = *(byte *)(param_1 + 0x18);
  uStack_248 = *(undefined8 *)(param_1 + 0x20);
  uStack_268 = 0;
  lStack_260 = 0;
  lStack_278 = 0;
  uStack_270 = 0;
  auStack_288 = (undefined1  [16])0x0;
  pbVar15 = (byte *)0x0;
  func_0x0eee2dd0(auStack_218,0,0x1e0);
  pbStack_220 = &UNK_0f3e38f8;
  func_0x0eee2dd0(appppplStack_210,0,0x148);
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
  bStack_35a = 0;
  uStack_35b = 0;
  pbVar22 = *(byte **)(param_2 + 0x18);
  pbVar21 = *(byte **)(param_2 + 0x20);
  pbStack_240 = param_2;
  if (pbVar22 != pbVar21) {
    pbStack_228 = param_2 + 0x18;
    pppppplStack_230 = pppppplVar5 + 1;
    do {
      bVar25 = (*pbVar22 & 1) != 0;
      pbVar18 = pbVar22 + 1;
      if (bVar25) {
        pbVar18 = *(byte **)(pbVar22 + 0x10);
      }
      uVar17 = (ulong)(*pbVar22 >> 1);
      if (bVar25) {
        uVar17 = *(ulong *)(pbVar22 + 8);
      }
      func_0x0ed5eaa0(appppppplStack_358,pbStack_228,pbVar18,uVar17);
      pppppplVar13 = (long ******)func_0x0c8e5090(pppppplVar5,pbVar22);
      if (pppppplVar13 == pppppplStack_230) {
        iVar23 = 3;
      }
      else {
        if (pppppplVar13[0xc] == (long *****)0x0) {
          uVar16 = func_0x04891200();
          uVar16 = func_0x04882e20(uVar16);
          uVar16 = func_0x04882e20(uVar16);
          func_0x0c8e47a0(pbStack_250);
          if (pcStack_340 != (code *)0x0) {
            (*pcStack_340)(appppppplStack_358);
          }
          func_0x0c8e47d0(&pbStack_220);
          func_0x0c8e4820(auStack_288);
          func_0x0eee2d70(uVar16);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (*(code *)(*pppppplVar13[0xc])[6])(&pppppplStack_258);
        if ((pppppplStack_258 == (long ******)0x0) ||
           (cVar11 = (*(code *)(*pppppplStack_258)[2])
                               (pppppplStack_258,appppppplStack_358,uStack_238),
           pbVar18 = pbStack_330, cVar11 == '\0')) {
          auVar3[0xf] = 0;
          auVar3._0_15_ = stack0xfffffffffffffce9;
          _auStack_318 = auVar3 << 8;
          cStack_2e8 = '\0';
          iVar23 = 1;
          pbVar15 = pbStack_250;
        }
        else {
          if ((*pbVar22 & 1) != 0) {
            lVar24 = *(long *)(pbVar22 + 8);
            if (lVar24 == 0x18) {
              pcVar6 = *(char **)(pbVar22 + 0x10);
              uVar16 = *(undefined8 *)(pcVar6 + 0x10);
              auVar28[0] = -(*pcVar6 == DAT_01e0ccf0);
              auVar28[1] = -(pcVar6[1] == UNK_01e0ccf1);
              auVar28[2] = -(pcVar6[2] == UNK_01e0ccf2);
              auVar28[3] = -(pcVar6[3] == UNK_01e0ccf3);
              auVar28[4] = -(pcVar6[4] == UNK_01e0ccf4);
              auVar28[5] = -(pcVar6[5] == UNK_01e0ccf5);
              auVar28[6] = -(pcVar6[6] == UNK_01e0ccf6);
              auVar28[7] = -(pcVar6[7] == UNK_01e0ccf7);
              auVar28[8] = -(pcVar6[8] == UNK_01e0ccf8);
              auVar28[9] = -(pcVar6[9] == UNK_01e0ccf9);
              auVar28[10] = -(pcVar6[10] == UNK_01e0ccfa);
              auVar28[0xb] = -(pcVar6[0xb] == UNK_01e0ccfb);
              auVar28[0xc] = -(pcVar6[0xc] == UNK_01e0ccfc);
              auVar28[0xd] = -(pcVar6[0xd] == UNK_01e0ccfd);
              auVar28[0xe] = -(pcVar6[0xe] == UNK_01e0ccfe);
              auVar28[0xf] = -(pcVar6[0xf] == UNK_01e0ccff);
              auVar33[0] = -(DAT_01e0cd00 == (char)uVar16);
              auVar33[1] = -(UNK_01e0cd01 == (char)((ulong)uVar16 >> 8));
              auVar33[2] = -(UNK_01e0cd02 == (char)((ulong)uVar16 >> 0x10));
              auVar33[3] = -(UNK_01e0cd03 == (char)((ulong)uVar16 >> 0x18));
              auVar33[4] = -(UNK_01e0cd04 == (char)((ulong)uVar16 >> 0x20));
              auVar33[5] = -(UNK_01e0cd05 == (char)((ulong)uVar16 >> 0x28));
              auVar33[6] = -(UNK_01e0cd06 == (char)((ulong)uVar16 >> 0x30));
              auVar33[7] = -(UNK_01e0cd07 == (char)((ulong)uVar16 >> 0x38));
              auVar33[8] = 0xff;
              auVar33[9] = 0xff;
              auVar33[10] = 0xff;
              auVar33[0xb] = 0xff;
              auVar33[0xc] = 0xff;
              auVar33[0xd] = 0xff;
              auVar33[0xe] = 0xff;
              auVar33[0xf] = 0xff;
              auVar28 = auVar28 & auVar33;
              if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
                ppppppplVar14 = appppppplStack_358[0];
                if (cStack_334 == '\x02') {
                  ppppppplVar14 = (long *******)appppppplStack_358;
                }
                if (ppppppplVar14 == (long *******)0x0 || iStack_338 != 0x5eeee7aa) {
                  if (lStack_328 == 0) {
                    (*pcStack_320)(0,appppppplStack_358,0);
                  }
                  ppppppplVar14 = appppppplStack_358[0];
                  if (cStack_334 == '\x02') {
                    ppppppplVar14 = (long *******)appppppplStack_358;
                  }
                  ppppppplVar14 =
                       (long *******)func_0x0488e200(pbVar18,lStack_328,0x5eeee7aa,ppppppplVar14);
                  pbVar15 = pbVar18;
                }
                if (ppppppplVar14[1] != ppppppplVar14[2]) {
                  pppppplVar13 = ppppppplVar14[1] + 2;
                  do {
                    bVar12 = *(byte *)(pppppplVar13 + -2);
                    if ((bVar12 & 1) == 0) {
                      if (bVar12 >> 1 == 0x10) goto LAB_0c8e3b9a;
                    }
                    else if (pppppplVar13[-1] == (long *****)0x10) {
LAB_0c8e3b9a:
                      if ((bVar12 & 1) == 0) {
                        ppppplVar20 = (long *****)((long)pppppplVar13 + -0xf);
                      }
                      else {
                        ppppplVar20 = *pppppplVar13;
                      }
                      auVar29[0] = -(*(char *)ppppplVar20 == DAT_014eaeb0);
                      auVar29[1] = -(*(char *)((long)ppppplVar20 + 1) == UNK_014eaeb1);
                      auVar29[2] = -(*(char *)((long)ppppplVar20 + 2) == UNK_014eaeb2);
                      auVar29[3] = -(*(char *)((long)ppppplVar20 + 3) == UNK_014eaeb3);
                      auVar29[4] = -(*(char *)((long)ppppplVar20 + 4) == UNK_014eaeb4);
                      auVar29[5] = -(*(char *)((long)ppppplVar20 + 5) == UNK_014eaeb5);
                      auVar29[6] = -(*(char *)((long)ppppplVar20 + 6) == UNK_014eaeb6);
                      auVar29[7] = -(*(char *)((long)ppppplVar20 + 7) == UNK_014eaeb7);
                      auVar29[8] = -(*(char *)(ppppplVar20 + 1) == UNK_014eaeb8);
                      auVar29[9] = -(*(char *)((long)ppppplVar20 + 9) == UNK_014eaeb9);
                      auVar29[10] = -(*(char *)((long)ppppplVar20 + 10) == UNK_014eaeba);
                      auVar29[0xb] = -(*(char *)((long)ppppplVar20 + 0xb) == UNK_014eaebb);
                      auVar29[0xc] = -(*(char *)((long)ppppplVar20 + 0xc) == UNK_014eaebc);
                      auVar29[0xd] = -(*(char *)((long)ppppplVar20 + 0xd) == UNK_014eaebd);
                      auVar29[0xe] = -(*(char *)((long)ppppplVar20 + 0xe) == UNK_014eaebe);
                      auVar29[0xf] = -(*(char *)((long)ppppplVar20 + 0xf) == UNK_014eaebf);
                      if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
                        bStack_35a = 1;
                      }
                    }
                    pppppplVar19 = pppppplVar13 + 5;
                    pppppplVar13 = pppppplVar13 + 7;
                  } while (pppppplVar19 != ppppppplVar14[2]);
                }
              }
            }
            else if (lVar24 == 0x1c) {
              pcVar6 = *(char **)(pbVar22 + 0x10);
              auVar3 = *(undefined1 (*) [16])(pcVar6 + 0xc);
              auVar27[0] = -(*pcVar6 == DAT_01e44d00);
              auVar27[1] = -(pcVar6[1] == UNK_01e44d01);
              auVar27[2] = -(pcVar6[2] == UNK_01e44d02);
              auVar27[3] = -(pcVar6[3] == UNK_01e44d03);
              auVar27[4] = -(pcVar6[4] == UNK_01e44d04);
              auVar27[5] = -(pcVar6[5] == UNK_01e44d05);
              auVar27[6] = -(pcVar6[6] == UNK_01e44d06);
              auVar27[7] = -(pcVar6[7] == UNK_01e44d07);
              auVar27[8] = -(pcVar6[8] == UNK_01e44d08);
              auVar27[9] = -(pcVar6[9] == UNK_01e44d09);
              auVar27[10] = -(pcVar6[10] == UNK_01e44d0a);
              auVar27[0xb] = -(pcVar6[0xb] == UNK_01e44d0b);
              auVar27[0xc] = -(pcVar6[0xc] == DAT_01e44d0c);
              auVar27[0xd] = -(pcVar6[0xd] == UNK_01e44d0d);
              auVar27[0xe] = -(pcVar6[0xe] == UNK_01e44d0e);
              auVar27[0xf] = -(pcVar6[0xf] == UNK_01e44d0f);
              auVar32[0] = -(DAT_01e44d0c == auVar3[0]);
              auVar32[1] = -(UNK_01e44d0d == auVar3[1]);
              auVar32[2] = -(UNK_01e44d0e == auVar3[2]);
              auVar32[3] = -(UNK_01e44d0f == auVar3[3]);
              auVar32[4] = -(UNK_01e44d10 == auVar3[4]);
              auVar32[5] = -(UNK_01e44d11 == auVar3[5]);
              auVar32[6] = -(UNK_01e44d12 == auVar3[6]);
              auVar32[7] = -(UNK_01e44d13 == auVar3[7]);
              auVar32[8] = -(UNK_01e44d14 == auVar3[8]);
              auVar32[9] = -(UNK_01e44d15 == auVar3[9]);
              auVar32[10] = -(UNK_01e44d16 == auVar3[10]);
              auVar32[0xb] = -(UNK_01e44d17 == auVar3[0xb]);
              auVar32[0xc] = -(UNK_01e44d18 == auVar3[0xc]);
              auVar32[0xd] = -(UNK_01e44d19 == auVar3[0xd]);
              auVar32[0xe] = -(UNK_01e44d1a == auVar3[0xe]);
              auVar32[0xf] = -(UNK_01e44d1b == auVar3[0xf]);
              auVar27 = auVar27 & auVar32;
              if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
                uStack_35b = 1;
              }
            }
            else if (lVar24 == 0x19) {
              pcVar6 = *(char **)(pbVar22 + 0x10);
              auVar3 = *(undefined1 (*) [16])(pcVar6 + 9);
              auVar26[0] = -(*pcVar6 == DAT_01df4730);
              auVar26[1] = -(pcVar6[1] == UNK_01df4731);
              auVar26[2] = -(pcVar6[2] == UNK_01df4732);
              auVar26[3] = -(pcVar6[3] == UNK_01df4733);
              auVar26[4] = -(pcVar6[4] == UNK_01df4734);
              auVar26[5] = -(pcVar6[5] == UNK_01df4735);
              auVar26[6] = -(pcVar6[6] == UNK_01df4736);
              auVar26[7] = -(pcVar6[7] == UNK_01df4737);
              auVar26[8] = -(pcVar6[8] == UNK_01df4738);
              auVar26[9] = -(pcVar6[9] == DAT_01df4739);
              auVar26[10] = -(pcVar6[10] == UNK_01df473a);
              auVar26[0xb] = -(pcVar6[0xb] == UNK_01df473b);
              auVar26[0xc] = -(pcVar6[0xc] == UNK_01df473c);
              auVar26[0xd] = -(pcVar6[0xd] == UNK_01df473d);
              auVar26[0xe] = -(pcVar6[0xe] == UNK_01df473e);
              auVar26[0xf] = -(pcVar6[0xf] == UNK_01df473f);
              auVar31[0] = -(DAT_01df4739 == auVar3[0]);
              auVar31[1] = -(UNK_01df473a == auVar3[1]);
              auVar31[2] = -(UNK_01df473b == auVar3[2]);
              auVar31[3] = -(UNK_01df473c == auVar3[3]);
              auVar31[4] = -(UNK_01df473d == auVar3[4]);
              auVar31[5] = -(UNK_01df473e == auVar3[5]);
              auVar31[6] = -(UNK_01df473f == auVar3[6]);
              auVar31[7] = -(UNK_01df4740 == auVar3[7]);
              auVar31[8] = -(UNK_01df4741 == auVar3[8]);
              auVar31[9] = -(UNK_01df4742 == auVar3[9]);
              auVar31[10] = -(UNK_01df4743 == auVar3[10]);
              auVar31[0xb] = -(UNK_01df4744 == auVar3[0xb]);
              auVar31[0xc] = -(UNK_01df4745 == auVar3[0xc]);
              auVar31[0xd] = -(UNK_01df4746 == auVar3[0xd]);
              auVar31[0xe] = -(UNK_01df4747 == auVar3[0xe]);
              auVar31[0xf] = -(UNK_01df4748 == auVar3[0xf]);
              auVar26 = auVar26 & auVar31;
              if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
                ppppppplVar14 = appppppplStack_358[0];
                if (cStack_334 == '\x02') {
                  ppppppplVar14 = (long *******)appppppplStack_358;
                }
                if (ppppppplVar14 == (long *******)0x0 || iStack_338 != 0x54699842) {
                  if (pcStack_320 != (code *)0x0) {
                    if (lStack_328 == 0) {
                      (*pcStack_320)(0,appppppplStack_358,0);
                    }
                    ppppppplVar14 = appppppplStack_358[0];
                    if (cStack_334 == '\x02') {
                      ppppppplVar14 = (long *******)appppppplStack_358;
                    }
                    ppppppplVar14 =
                         (long *******)func_0x0488e200(pbVar18,lStack_328,0x54699842,ppppppplVar14);
                    pbVar15 = pbVar18;
                    if (ppppppplVar14 != (long *******)0x0) goto LAB_0c8e3a47;
                  }
                  pbVar18 = pbStack_330;
                  ppppppplVar14 = appppppplStack_358[0];
                  if (cStack_334 == '\x02') {
                    ppppppplVar14 = (long *******)appppppplStack_358;
                  }
                  if ((iStack_338 == -0x65a1c94) && (ppppppplVar14 != (long *******)0x0)) {
LAB_0c8e3c8d:
                    if (uStack_38 == 1) {
                      uVar4 = *(uint *)(ppppppplVar14 + 0x3c);
                      if ((ulong)uStack_40 == 0xffffffff) {
                        if (uVar4 == 0xffffffff) goto LAB_0c8e379f;
                      }
                      else if (uVar4 == 0xffffffff) {
                        (**(code **)(&UNK_0f3e34e0 + (ulong)uStack_40 * 8))
                                  (&pppppplStack_2d8,appppplStack_210);
                        goto LAB_0c8e3cd5;
                      }
                      pppppplStack_2d8 = appppplStack_210;
                      (**(code **)(&UNK_0f3e3518 + (ulong)uVar4 * 8))
                                (&pppppplStack_2d8,pppppplStack_2d8,ppppppplVar14 + 2);
                    }
                    else {
                      func_0x0c8e8300(&pbStack_220,ppppppplVar14);
                    }
                  }
                  else {
                    if (pcStack_320 != (code *)0x0) {
                      if (lStack_328 == 0) {
                        (*pcStack_320)(0,appppppplStack_358,0);
                      }
                      ppppppplVar14 = appppppplStack_358[0];
                      if (cStack_334 == '\x02') {
                        ppppppplVar14 = (long *******)appppppplStack_358;
                      }
                      ppppppplVar14 =
                           (long *******)
                           func_0x0488e200(pbVar18,lStack_328,0xf9a5e36c,ppppppplVar14);
                      pbVar15 = pbVar18;
                      if (ppppppplVar14 != (long *******)0x0) goto LAB_0c8e3c8d;
                    }
                    FUN_05862b30(1,3,5,&UNK_0135210b);
                  }
                }
                else {
LAB_0c8e3a47:
                  if (uStack_38 == 0) {
                    uVar4 = *(uint *)(ppppppplVar14 + 0x3c);
                    if ((ulong)uStack_40 == 0xffffffff) {
                      if (uVar4 != 0xffffffff) goto LAB_0c8e3d03;
                    }
                    else if (uVar4 == 0xffffffff) {
                      (**(code **)(&UNK_0f3e34e0 + (ulong)uStack_40 * 8))
                                (&pppppplStack_2d8,appppplStack_210);
LAB_0c8e3cd5:
                      uStack_40 = 0xffffffff;
                    }
                    else {
LAB_0c8e3d03:
                      pppppplStack_2d8 = appppplStack_210;
                      (**(code **)(&UNK_0f3e3518 + (ulong)uVar4 * 8))
                                (&pppppplStack_2d8,pppppplStack_2d8,ppppppplVar14 + 2);
                    }
                  }
                  else {
                    func_0x0c8e5180(&pbStack_220,ppppppplVar14);
                  }
                }
              }
            }
          }
LAB_0c8e379f:
          if (pbStack_250 != (byte *)0x0) {
            LOCK();
            *(long *)(pbStack_250 + 8) = *(long *)(pbStack_250 + 8) + 1;
            UNLOCK();
          }
          pppppplStack_2d8 = pppppplStack_258;
          pbStack_2d0 = pbStack_250;
          if (pppppplStack_258 == (long ******)0x0) {
            func_0x04890760();
            goto LAB_0c8e4114;
          }
          puStack_2b8 = &UNK_0488e0b0;
          uStack_2a8 = 0x48b5725f;
          pcStack_2b0 = (code *)0x0;
          cStack_2a4 = '\0';
          apuStack_2c8[0] = (undefined1 *)0x0;
          (*pcStack_348)(4,appppppplStack_358,apuStack_2c8);
          pbStack_2a0 = pbStack_330;
          auStack_298._8_8_ = pcStack_320;
          auStack_298._0_8_ = lStack_328;
          uVar4 = (uint)(cStack_2a4 == '\0' && cStack_334 != '\0');
          auVar30._0_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auVar30._4_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auVar30._8_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auVar30._12_4_ = (int)(uVar4 << 0x1f) >> 0x1f;
          auStack_298 = ~auVar30 & auStack_298;
          func_0x0c8e4350(auStack_288,&pppppplStack_2d8);
          if (pcStack_2b0 != (code *)0x0) {
            (*pcStack_2b0)(apuStack_2c8);
          }
          pbVar15 = pbStack_2d0;
          if (pbStack_2d0 != (byte *)0x0) {
            LOCK();
            pbVar18 = pbStack_2d0 + 8;
            lVar24 = *(long *)pbVar18;
            *(long *)pbVar18 = *(long *)pbVar18 + -1;
            UNLOCK();
            if (lVar24 == 0) {
              (**(code **)(*(long *)pbStack_2d0 + 0x10))(pbStack_2d0);
              func_0x0412c2d0(pbVar15);
            }
          }
          iVar23 = 0;
          pbVar15 = pbStack_250;
        }
        pbStack_250 = pbVar15;
        if (pbVar15 != (byte *)0x0) {
          LOCK();
          pbVar18 = pbVar15 + 8;
          lVar24 = *(long *)pbVar18;
          *(long *)pbVar18 = *(long *)pbVar18 + -1;
          UNLOCK();
          if (lVar24 == 0) {
            (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
            func_0x0412c2d0(pbVar15);
          }
        }
      }
      if (pcStack_340 != (code *)0x0) {
        (*pcStack_340)(appppppplStack_358);
      }
      if ((iVar23 != 3) && (iVar23 != 0)) goto LAB_0c8e3e7f;
      pbVar22 = pbVar22 + 0x18;
    } while (pbVar22 != pbVar21);
    pbVar15 = (byte *)(ulong)uStack_38;
    pbStack_2d0 = &bStack_35a;
    apuStack_2c8[0] = &uStack_35b;
    if (uStack_38 == 0xffffffff) {
      pppppplStack_2d8 = pppppplVar5;
      func_0x04931450();
    }
  }
  apuStack_2c8[0] = &uStack_35b;
  pbStack_2d0 = &bStack_35a;
  appppppplStack_358[0] = &pppppplStack_2d8;
  pppppplStack_2d8 = pppppplVar5;
  cVar11 = (**(code **)(&UNK_0f3e35d0 + (long)pbVar15 * 8))(appppppplStack_358,&pbStack_220);
  if (cVar11 == '\0') {
    auVar9[0xf] = 0;
    auVar9._0_15_ = stack0xfffffffffffffce9;
    _auStack_318 = auVar9 << 8;
  }
  else {
    _auStack_318 = auStack_288;
    lStack_308 = lStack_278;
    auStack_288 = (undefined1  [16])0x0;
    lStack_278 = 0;
    auStack_300._8_8_ = uStack_268;
    auStack_300._0_8_ = uStack_270;
    lStack_2f0 = lStack_260;
    uStack_270 = 0;
    uStack_268 = 0;
    lStack_260 = 0;
  }
  cStack_2e8 = cVar11 != '\0';
LAB_0c8e3e7f:
  pbVar21 = pbStack_240;
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f3e3550 + (ulong)uStack_38 * 8))(&pppppplStack_2d8,&pbStack_220);
  }
  pbStack_220 = (byte *)&uStack_270;
  func_0x09f90d70(&pbStack_220);
  uVar16 = auStack_288._0_8_;
  if (auStack_288._0_8_ != 0) {
    for (lVar24 = auStack_288._8_8_; uVar16 != lVar24; lVar24 = lVar24 + -0x50) {
      if (*(code **)(lVar24 + -0x28) != (code *)0x0) {
        (**(code **)(lVar24 + -0x28))(lVar24 + -0x40);
      }
      plVar7 = *(long **)(lVar24 + -0x48);
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
    }
    auStack_288._8_8_ = uVar16;
    func_0x0412a280(auStack_288._0_8_,lStack_278 - auStack_288._0_8_);
  }
  if (cStack_2e8 == '\x01') {
    pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (pbVar15 == (byte *)0x0) {
LAB_0c8e4114:
      func_0x0eec74c0(0x30,0);
    }
    *(undefined1 (*) [8])pbVar15 = auStack_318;
    *(long *)(pbVar15 + 8) = lStack_310;
    *(long *)(pbVar15 + 0x10) = lStack_308;
    _auStack_318 = (undefined1  [16])0x0;
    lStack_308 = 0;
    *(undefined8 *)(pbVar15 + 0x18) = auStack_300._0_8_;
    *(undefined8 *)(pbVar15 + 0x20) = auStack_300._8_8_;
    *(long *)(pbVar15 + 0x28) = lStack_2f0;
    auStack_300 = (undefined1  [16])0x0;
    lStack_2f0 = 0;
    pbStack_220 = pbVar15;
    bVar12 = func_0x0c8ea3e0(uStack_248,pbVar21,pbVar21,&pbStack_220);
    pbVar22 = pbStack_220;
    pbStack_220 = (byte *)0x0;
    if (pbVar22 != (byte *)0x0) {
      func_0x09f90cb0(&pbStack_220);
    }
    if (((bVar12 | bStack_359) & 1) == 0) {
      if ((*pbVar21 & 1) == 0) {
        pbStack_220 = pbVar21 + 1;
      }
      else {
        pbStack_220 = *(byte **)(pbVar21 + 0x10);
      }
      func_0x09b479d0(1,3,5,&UNK_011ae64a,&pbStack_220);
    }
  }
  if (cStack_2e8 == '\x01') {
    pbStack_220 = auStack_300;
    func_0x09f90d70(&pbStack_220);
    auVar10 = auStack_318;
    if (auStack_318 != (undefined1  [8])0x0) {
      for (lVar24 = lStack_310; auVar10 != (undefined1  [8])lVar24; lVar24 = lVar24 + -0x50) {
        if (*(code **)(lVar24 + -0x28) != (code *)0x0) {
          (**(code **)(lVar24 + -0x28))(lVar24 + -0x40);
        }
        plVar7 = *(long **)(lVar24 + -0x48);
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            func_0x0412c2d0(plVar7);
          }
        }
      }
      lStack_310 = (long)auVar10;
      func_0x0412a280(auStack_318,lStack_308 - (long)auStack_318);
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
