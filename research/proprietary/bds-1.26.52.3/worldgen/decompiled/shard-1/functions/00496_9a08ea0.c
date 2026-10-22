/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b08ea0 (ELF vaddr 0x9a08ea0)
 * Label: caller-of-callee
 * Body:  [[09b08ea0, 09b08fe0] [09b08ff0, 09b0902b] [09b09030, 09b09078] [09b09080, 09b09509] [09b09510, 09b095ad] [09b095b0, 09b09606] [09b09610, 09b09658] [09b09660, 09b09728] [09b09730, 09b0976e] [09b09770, 09b09795] [09b097a0, 09b098b4] [09b098c0, 09b09b7a] [09b09b80, 09b09bfa] [09b09c00, 09b09c5e] [09b09c60, 09b09c99] [09b09ca0, 09b09cfe] [09b09d00, 09b09d9a] [09b09da0, 09b09f99] [09b09fa0, 09b0a0c2] [09b0a0d0, 09b0a1ae] [09b0a1b0, 09b0a280] [09b0a290, 09b0a393] [09b0a3a0, 09b0a4ce] [09b0a4d0, 09b0a4e7] [09b0a4f0, 09b0a662] [09b0a670, 09b0a6ba] [09b0a6c0, 09b0a6c5] [09b0a6d0, 09b0a701] [09b0a710, 09b0a779] [09b0a780, 09b0a80d] [09b0a810, 09b0a91e] [09b0a920, 09b0a97e] [09b0a980, 09b0a9ec] [09b0a9f0, 09b0aa6a] [09b0aa70, 09b0aadd] [09b0aae0, 09b0aba6] [09b0abb0, 09b0af46] [09b0af50, 09b0b3d8] [09b0b3e0, 09b0b538] [09b0b540, 09b0b9e4] [09b0b9f0, 09b0ba0b] [09b0ba10, 09b0bcc1] [09b0bcd0, 09b0bfa1] [09b0bfb0, 09b0c010] [09b0c020, 09b0c0a6] [09b0c0dc, 09b0c0ec] [09b0c144, 09b0c27e] [09b0c353, 09b0c3e4]]
 * Ghidra: FUN_09b08ea0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09b08ea0(long param_1,ulong param_2,long *param_3)

{
  char *pcVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  long ****pppplVar6;
  code *pcVar7;
  undefined1 *puVar8;
  uint6 uVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long ******pppppplVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long *******ppppppplVar24;
  undefined8 uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  long *****ppppplVar29;
  long *******ppppppplVar30;
  long *******ppppppplVar31;
  ulong uVar32;
  byte bVar33;
  undefined1 *puVar34;
  ulong uVar35;
  long *****ppppplVar36;
  ulong uVar37;
  byte *pbVar38;
  long *****ppppplVar39;
  uint *puVar40;
  undefined8 *puVar41;
  long ******pppppplVar42;
  byte *pbVar43;
  undefined1 *puVar44;
  long ****pppplVar45;
  undefined1 *puVar46;
  long ******pppppplVar47;
  long lVar48;
  undefined1 *puVar49;
  long *******unaff_R15;
  bool bVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  ulong uStack_2e8;
  char cStack_2e0;
  long *******ppppppplStack_2d8;
  long *******ppppppplStack_2d0;
  long ******pppppplStack_2c8;
  code *pcStack_2c0;
  undefined4 uStack_2b8;
  char cStack_2b4;
  long ******pppppplStack_2b0;
  long ******pppppplStack_2a8;
  long ******pppppplStack_2a0;
  ulong uStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  long *******ppppppplStack_270;
  ulong uStack_268;
  long *******ppppppplStack_260;
  byte *pbStack_258;
  ulong uStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  char cStack_21c;
  long ******pppppplStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1e8;
  int iStack_1dc;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  long ******pppppplStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  ulong uStack_188;
  long *******ppppppplStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  long *******ppppppplStack_168;
  long ******pppppplStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  undefined8 uStack_148;
  long ******pppppplStack_140;
  long ******pppppplStack_138;
  long ******pppppplStack_130;
  long ******pppppplStack_128;
  long ******pppppplStack_120;
  long ******pppppplStack_118;
  long ******pppppplStack_110;
  long ******pppppplStack_108;
  char acStack_100 [8];
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  long ******pppppplStack_d0;
  byte bStack_c8;
  char cStack_c0;
  long lStack_40;
  long ******pppppplStack_38;
  
  pbVar38 = *(byte **)(param_1 + 8);
  pbVar43 = *(byte **)(param_1 + 0x10);
  uStack_298 = param_2;
  plStack_288 = param_3;
  if (pbVar38 != pbVar43) {
    ppppppplVar24 = (long *******)(param_1 + 0x20);
    ppppplVar29 = (long *****)(param_1 + 0x30);
    pbStack_278 = pbVar43;
LAB_09b08f58:
    bVar33 = *pbVar38;
    ppppppplVar30 = (long *******)(ulong)bVar33;
    ppppppplVar15 = *(long ********)(param_1 + 0x28);
    pbStack_258 = pbVar38;
    if (ppppppplVar15 != (long *******)0x0) {
      uVar35 = (long)ppppppplVar15 - ((ulong)ppppppplVar15 >> 1 & 0x5555555555555555);
      uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
      uVar35 = ((uVar35 >> 4) + uVar35 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar35 >> 0x38 < 2) {
        ppppppplVar14 = (long *******)(ulong)((uint)bVar33 & (int)ppppppplVar15 - 1U);
      }
      else {
        ppppppplVar14 = ppppppplVar30;
        if (ppppppplVar15 <= ppppppplVar30) {
          ppppppplVar14 = (long *******)(ulong)(byte)(bVar33 % (byte)ppppppplVar15);
        }
      }
      if (((*ppppppplVar24)[(long)ppppppplVar14] != (long *****)0x0) &&
         (ppppppplVar16 = (long *******)*(*ppppppplVar24)[(long)ppppppplVar14],
         ppppppplVar16 != (long *******)0x0)) {
        if ((byte)(uVar35 >> 0x38) < 2) {
          do {
            if ((long *******)ppppppplVar16[1] == ppppppplVar30) {
              if (*(byte *)(ppppppplVar16 + 2) == bVar33) goto LAB_09b0996f;
            }
            else if ((long *******)((ulong)ppppppplVar16[1] & (ulong)((long)ppppppplVar15 + -1)) !=
                     ppppppplVar14) break;
            ppppppplVar16 = (long *******)*ppppppplVar16;
          } while (ppppppplVar16 != (long *******)0x0);
        }
        else {
          do {
            ppppppplVar31 = (long *******)ppppppplVar16[1];
            if (ppppppplVar31 == ppppppplVar30) {
              if (*(byte *)(ppppppplVar16 + 2) == bVar33) goto LAB_09b0996f;
            }
            else {
              if (ppppppplVar15 <= ppppppplVar31) {
                if (((ulong)ppppppplVar31 | (ulong)ppppppplVar15) >> 0x20 == 0) {
                  if ((long *******)
                      (((ulong)ppppppplVar31 & 0xffffffff) % ((ulong)ppppppplVar15 & 0xffffffff)) ==
                      ppppppplVar14) goto LAB_09b0903a;
                  break;
                }
                ppppppplVar31 = (long *******)((ulong)ppppppplVar31 % (ulong)ppppppplVar15);
              }
              if (ppppppplVar31 != ppppppplVar14) break;
            }
LAB_09b0903a:
            ppppppplVar16 = (long *******)*ppppppplVar16;
          } while (ppppppplVar16 != (long *******)0x0);
        }
      }
    }
    uStack_268 = CONCAT71(uStack_268._1_7_,bVar33);
    ppppppplStack_270 = *(long ********)pbVar38;
    pppppplVar17 = *(long *******)(pbVar38 + 0x10);
    bVar33 = pbVar38[0x18];
    unaff_R15 = (long *******)(ulong)bVar33;
    pppppplStack_150 = (long ******)CONCAT71(pppppplStack_150._1_7_,bVar33);
    pppppplVar42 = *(long *******)(pbVar38 + 0x20);
    uVar11 = *(uint *)(pbVar38 + 0x28);
    ppppppplVar15 = (long *******)(ulong)uVar11;
    pppppplStack_140 = (long ******)CONCAT44(pppppplStack_140._4_4_,uVar11);
    pbVar38[0x20] = 0;
    pbVar38[0x21] = 0;
    pbVar38[0x22] = 0;
    pbVar38[0x23] = 0;
    pbVar38[0x24] = 0;
    pbVar38[0x25] = 0;
    pbVar38[0x26] = 0;
    pbVar38[0x27] = 0;
    pbVar38[0x28] = 0;
    pbVar38[0x29] = 0;
    pbVar38[0x2a] = 0;
    pbVar38[0x2b] = 0;
    pbVar38[0x10] = 0;
    pbVar38[0x11] = 0;
    pbVar38[0x12] = 0;
    pbVar38[0x13] = 0;
    pbVar38[0x14] = 0;
    pbVar38[0x15] = 0;
    pbVar38[0x16] = 0;
    pbVar38[0x17] = 0;
    pbVar38[0x18] = 0;
    pppppplStack_138 = (long ******)((ulong)pppppplStack_138 & 0xffffffffffffff00);
    uVar35 = (ulong)pppppplStack_118 >> 8;
    pppppplStack_118 = (long ******)((ulong)pppppplStack_118 & 0xffffffffffffff00);
    bVar3 = pbVar38[0x50];
    if (bVar3 == 1) {
      pppppplStack_138 = *(long *******)(pbVar38 + 0x30);
      pppppplStack_130 =
           (long ******)CONCAT44(pppppplStack_130._4_4_,*(undefined4 *)(pbVar38 + 0x38));
      pppppplStack_128 = *(long *******)(pbVar38 + 0x40);
      pppppplStack_120 = *(long *******)(pbVar38 + 0x48);
      pbVar38[0x30] = 0;
      pbVar38[0x31] = 0;
      pbVar38[0x32] = 0;
      pbVar38[0x33] = 0;
      pbVar38[0x34] = 0;
      pbVar38[0x35] = 0;
      pbVar38[0x36] = 0;
      pbVar38[0x37] = 0;
      pbVar38[0x38] = 0;
      pbVar38[0x39] = 0;
      pbVar38[0x3a] = 0;
      pbVar38[0x3b] = 0;
      pbVar38[0x40] = 0xff;
      pbVar38[0x41] = 0xff;
      pbVar38[0x42] = 0xff;
      pbVar38[0x43] = 0xff;
      pbVar38[0x44] = 0xff;
      pbVar38[0x45] = 0xff;
      pbVar38[0x46] = 0xff;
      pbVar38[0x47] = 0;
      pbVar38[0x48] = 0;
      pppppplStack_118 = (long ******)CONCAT71((int7)uVar35,1);
    }
    pppppplStack_160 = (long ******)&UNK_0f1a4b88;
    pppppplStack_110 = *(long *******)(pbVar38 + 0x58);
    pppppplStack_108 = *(long *******)(pbVar38 + 0x60);
    ppppppplStack_260 = ppppppplVar30;
    ppppppplStack_168 = ppppppplStack_270;
    pppppplStack_158 = pppppplVar17;
    uStack_148 = pppppplVar42;
    memcpy(acStack_100,pbVar38 + 0x68,0xba);
    ppppppplStack_1d8 = (long *******)0x0;
    ppppppplStack_1d0 = (long *******)0x0;
    ppppppplStack_1c8 = (long *******)0x0;
    ppppppplVar14 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x128);
    if (ppppppplVar14 == (long *******)0x0) {
      func_0x0eec74c0(0x128,0);
    }
    ppppppplVar30 = ppppppplStack_260;
    ppppppplStack_1c8 = ppppppplVar14 + 0x25;
    ppppppplStack_248 = (long *******)&ppppppplStack_1d8;
    ppppppplStack_240 = (long *******)&ppppppplStack_180;
    pppppplStack_238 = (long ******)&uStack_200;
    pppppplStack_230 = (long ******)((ulong)pppppplStack_230 & 0xffffffffffffff00);
    *ppppppplVar14 = (long ******)ppppppplStack_270;
    ppppppplVar14[2] = pppppplVar17;
    *(byte *)(ppppppplVar14 + 3) = bVar33;
    ppppppplVar14[4] = pppppplVar42;
    *(uint *)(ppppppplVar14 + 5) = uVar11;
    ppppppplVar14[1] = (long ******)&UNK_0f1a4bd8;
    *(char *)(ppppppplVar14 + 6) = '\0';
    *(char *)(ppppppplVar14 + 10) = '\0';
    uStack_200 = ppppppplVar14;
    ppppppplStack_1d8 = ppppppplVar14;
    ppppppplStack_1d0 = ppppppplVar14;
    ppppppplStack_180 = ppppppplVar14;
    if (bVar3 != 0) {
      ppppppplVar14[6] = pppppplStack_138;
      *(int *)(ppppppplVar14 + 7) = (int)pppppplStack_130;
      ppppppplVar14[8] = pppppplStack_128;
      ppppppplVar14[9] = pppppplStack_120;
      if ((pppppplStack_138 != (long ******)0x0) &&
         (*pppppplStack_138 != (long *****)0x0 &&
          *(int *)(pppppplStack_138 + 1) == (int)pppppplStack_130)) {
        unaff_R15 = ppppppplVar14 + 6;
        func_0x0d8568b0(*pppppplStack_138,ppppppplVar14[8]);
      }
      *(char *)(ppppppplVar14 + 10) = '\x01';
    }
    ppppppplVar14[1] = (long ******)&UNK_0f1a4b88;
    ppppppplVar14[0xb] = pppppplStack_110;
    ppppppplVar14[0xc] = pppppplStack_108;
    memcpy(ppppppplVar14 + 0xd,acStack_100,0xba);
    ppppppplVar16 = ppppppplStack_1d8;
    ppppppplVar14 = uStack_200;
    uVar35 = uStack_268;
    ppppppplStack_1d0 = uStack_200 + 0x25;
    cVar4 = (char)uStack_268;
    ppppppplStack_2d8 = (long *******)0x0;
    ppppppplStack_2d0 = (long *******)0x0;
    pppppplStack_2c8 = (long ******)0x0;
    lVar48 = (long)ppppppplStack_1d0 - (long)ppppppplStack_1d8;
    if (lVar48 != 0) {
      if ((ulong)((lVar48 >> 3) * 0x14c1bacf914c1bad) < 0xdd67c8a60dd67d) {
        ppppppplVar15 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar48);
        if (ppppppplVar15 == (long *******)0x0) {
          func_0x0eec74c0(lVar48,0);
        }
        pppppplStack_2c8 = (long ******)(lVar48 + (long)ppppppplVar15);
        ppppppplStack_248 = (long *******)&ppppppplStack_2d8;
        ppppppplStack_240 = (long *******)&ppppppplStack_180;
        pppppplStack_238 = (long ******)&uStack_200;
        pppppplStack_230 = (long ******)((ulong)pppppplStack_230 & 0xffffffffffffff00);
        ppppppplVar16 = ppppppplVar16 + 8;
        ppppppplStack_2d8 = ppppppplVar15;
        ppppppplStack_2d0 = ppppppplVar15;
        ppppppplStack_180 = ppppppplVar15;
        do {
          *ppppppplVar15 = ppppppplVar16[-8];
          ppppppplVar15[2] = ppppppplVar16[-6];
          *(char *)(ppppppplVar15 + 3) = *(char *)(ppppppplVar16 + -5);
          ppppppplVar15[4] = ppppppplVar16[-4];
          *(undefined4 *)(ppppppplVar15 + 5) = *(undefined4 *)(ppppppplVar16 + -3);
          ppppppplVar15[1] = (long ******)&UNK_0f1a4bd8;
          *(char *)(ppppppplVar15 + 6) = '\0';
          *(char *)(ppppppplVar15 + 10) = '\0';
          uStack_200 = ppppppplVar15;
          if (*(char *)(ppppppplVar16 + 2) == '\x01') {
            pppppplVar17 = ppppppplVar16[-2];
            ppppppplVar15[6] = pppppplVar17;
            iVar12 = *(int *)(ppppppplVar16 + -1);
            *(int *)(ppppppplVar15 + 7) = iVar12;
            pppppplVar42 = ppppppplVar16[1];
            ppppppplVar15[8] = *ppppppplVar16;
            ppppppplVar15[9] = pppppplVar42;
            if ((pppppplVar17 != (long ******)0x0) &&
               (*pppppplVar17 != (long *****)0x0 && *(int *)(pppppplVar17 + 1) == iVar12)) {
              func_0x0d8568b0(*pppppplVar17,ppppppplVar15[8]);
            }
            *(char *)(ppppppplVar15 + 10) = '\x01';
          }
          ppppppplVar30 = uStack_200;
          unaff_R15 = ppppppplVar16 + -8;
          ppppppplVar15[1] = (long ******)&UNK_0f1a4b88;
          pppppplVar17 = ppppppplVar16[4];
          ppppppplVar15[0xb] = ppppppplVar16[3];
          ppppppplVar15[0xc] = pppppplVar17;
          memcpy(ppppppplVar15 + 0xd,ppppppplVar16 + 5,0xba);
          ppppppplVar15 = ppppppplVar30 + 0x25;
          ppppppplVar16 = ppppppplVar16 + 0x25;
        } while (unaff_R15 != ppppppplVar14);
        ppppppplVar30 = (long *******)(uVar35 & 0xff);
        ppppppplStack_2d0 = ppppppplVar15;
        uStack_200 = ppppppplVar15;
        goto LAB_09b0951e;
      }
      func_0x09b22c10();
LAB_09b0c054:
      func_0x04882eb0();
      goto LAB_09b0c059;
    }
LAB_09b0951e:
    ppppppplVar15 = *(long ********)(param_1 + 0x28);
    if (ppppppplVar15 != (long *******)0x0) {
      uVar27 = (long)ppppppplVar15 - ((ulong)ppppppplVar15 >> 1 & 0x5555555555555555);
      uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
      uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar27 >> 0x38 < 2) {
        ppppppplVar14 = (long *******)(ulong)((uint)ppppppplVar30 & (int)ppppppplVar15 - 1U);
      }
      else {
        ppppppplVar14 = ppppppplVar30;
        if (ppppppplVar15 <= ppppppplVar30) {
          ppppppplVar14 =
               (long *******)(ulong)(byte)(((ushort)uVar35 & 0xff) % (ushort)(byte)ppppppplVar15);
        }
      }
      unaff_R15 = (long *******)&UNK_0f486ba0;
      if (((*ppppppplVar24)[(long)ppppppplVar14] != (long *****)0x0) &&
         (pppplVar45 = *(*ppppppplVar24)[(long)ppppppplVar14], pppplVar45 != (long ****)0x0)) {
        if ((byte)(uVar27 >> 0x38) < 2) {
          do {
            if ((long *******)pppplVar45[1] == ppppppplVar30) {
              if (*(char *)(pppplVar45 + 2) == cVar4) goto LAB_09b09bde;
            }
            else if ((long *******)((ulong)pppplVar45[1] & (ulong)((long)ppppppplVar15 - 1U)) !=
                     ppppppplVar14) break;
            pppplVar45 = (long ****)*pppplVar45;
          } while (pppplVar45 != (long ****)0x0);
        }
        else {
          do {
            ppppppplVar16 = (long *******)pppplVar45[1];
            if (ppppppplVar16 == ppppppplVar30) {
              if (*(char *)(pppplVar45 + 2) == cVar4) goto LAB_09b09bde;
            }
            else {
              if (ppppppplVar15 <= ppppppplVar16) {
                if (((ulong)ppppppplVar16 | (ulong)ppppppplVar15) >> 0x20 == 0) {
                  if ((long *******)
                      (((ulong)ppppppplVar16 & 0xffffffff) % ((ulong)ppppppplVar15 & 0xffffffff)) ==
                      ppppppplVar14) goto LAB_09b0961a;
                  break;
                }
                ppppppplVar16 = (long *******)((ulong)ppppppplVar16 % (ulong)ppppppplVar15);
              }
              if (ppppppplVar16 != ppppppplVar14) break;
            }
LAB_09b0961a:
            pppplVar45 = (long ****)*pppplVar45;
          } while (pppplVar45 != (long ****)0x0);
        }
      }
    }
    ppppppplVar16 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (ppppppplVar16 == (long *******)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    pppppplStack_238 = (long ******)0x1;
    *ppppppplVar16 = (long ******)0x0;
    ppppppplVar16[1] = (long ******)ppppppplVar30;
    *(char *)(ppppppplVar16 + 2) = cVar4;
    ppppppplVar16[3] = (long ******)ppppppplStack_2d8;
    ppppppplVar16[4] = (long ******)ppppppplStack_2d0;
    ppppppplVar16[5] = pppppplStack_2c8;
    ppppppplStack_2d8 = (long *******)0x0;
    ppppppplStack_2d0 = (long *******)0x0;
    pppppplStack_2c8 = (long ******)0x0;
    fVar51 = (float)(*(long *)(param_1 + 0x38) + 1);
    ppppppplStack_248 = ppppppplVar16;
    ppppppplStack_240 = ppppppplVar24;
    if ((long)ppppppplVar15 < 0) {
      fVar53 = (float)ppppppplVar15;
      fVar52 = *(float *)(param_1 + 0x40);
      if (ppppppplVar15 != (long *******)0x0) goto LAB_09b09785;
LAB_09b097a0:
      uVar35 = 1;
      if ((long *******)0x2 < ppppppplVar15) {
        uVar35 = (ulong)(((ulong)ppppppplVar15 & (ulong)((long)ppppppplVar15 - 1U)) != 0);
      }
      ppppppplVar15 = (long *******)((long)ppppppplVar15 * 2 | uVar35);
      fVar51 = (float)func_0x0eee3ab0(fVar51 / fVar52);
      ppppppplVar14 =
           (long *******)((long)(fVar51 - _DAT_01198778) & (long)fVar51 >> 0x3f | (long)fVar51);
      if (ppppppplVar14 < ppppppplVar15) {
        ppppppplVar14 = ppppppplVar15;
      }
      ppppppplVar15 = (long *******)0x2;
      if ((ppppppplVar14 == (long *******)0x1) ||
         (ppppppplVar15 = ppppppplVar14,
         ((ulong)ppppppplVar14 & (ulong)((long)ppppppplVar14 - 1U)) == 0)) {
        ppppppplVar14 = *(long ********)(param_1 + 0x28);
        bVar50 = ppppppplVar15 < ppppppplVar14;
        if (ppppppplVar15 <= ppppppplVar14) goto LAB_09b09921;
LAB_09b0981d:
        if ((ulong)ppppppplVar15 >> 0x3d != 0) goto LAB_09b0c054;
        lVar48 = (long)ppppppplVar15 * 8;
        pppppplVar17 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar48);
        if (pppppplVar17 == (long ******)0x0) {
          func_0x0eec74c0(lVar48,0);
        }
        pppppplVar42 = *ppppppplVar24;
        *ppppppplVar24 = pppppplVar17;
        if (pppppplVar42 != (long ******)0x0) {
          func_0x0412a280(pppppplVar42,*(long *)(param_1 + 0x28) << 3);
          pppppplVar17 = *(long *******)(param_1 + 0x20);
        }
        *(long ********)(param_1 + 0x28) = ppppppplVar15;
        func_0x0eee2dd0(pppppplVar17,0,lVar48);
        ppppplVar36 = *(long ******)(param_1 + 0x30);
        if (ppppplVar36 != (long *****)0x0) {
          ppppppplVar14 = (long *******)ppppplVar36[1];
          pcVar1 = (char *)((long)ppppppplVar15 - 1);
          if (((ulong)ppppppplVar15 & (ulong)pcVar1) == 0) {
            pppppplVar17[(ulong)ppppppplVar14 & (ulong)pcVar1] = ppppplVar29;
            uVar35 = (ulong)ppppppplVar14 & (ulong)pcVar1;
            while (ppppplVar39 = ppppplVar36, ppppplVar36 = (long *****)*ppppplVar39,
                  ppppplVar36 != (long *****)0x0) {
              uVar27 = (ulong)ppppplVar36[1] & (ulong)pcVar1;
              if (uVar27 != uVar35) {
                if (pppppplVar17[uVar27] == (long *****)0x0) {
                  pppppplVar17[uVar27] = ppppplVar39;
                  uVar35 = uVar27;
                }
                else {
                  *ppppplVar39 = *ppppplVar36;
                  *ppppplVar36 = *pppppplVar17[uVar27];
                  *pppppplVar17[uVar27] = (long ****)ppppplVar36;
                  ppppplVar36 = ppppplVar39;
                }
              }
            }
          }
          else {
            if (ppppppplVar15 <= ppppppplVar14) {
              if (((ulong)ppppppplVar14 | (ulong)ppppppplVar15) >> 0x20 == 0) {
                ppppppplVar14 =
                     (long *******)
                     (((ulong)ppppppplVar14 & 0xffffffff) % ((ulong)ppppppplVar15 & 0xffffffff));
              }
              else {
                ppppppplVar14 = (long *******)((ulong)ppppppplVar14 % (ulong)ppppppplVar15);
              }
            }
            pppppplVar17[(long)ppppppplVar14] = ppppplVar29;
            ppppplVar39 = (long *****)*ppppplVar36;
            while (ppppplVar39 != (long *****)0x0) {
              ppppppplVar31 = (long *******)ppppplVar39[1];
              if (ppppppplVar15 <= ppppppplVar31) {
                if (((ulong)ppppppplVar31 | (ulong)ppppppplVar15) >> 0x20 == 0) {
                  ppppppplVar31 =
                       (long *******)
                       (((ulong)ppppppplVar31 & 0xffffffff) % ((ulong)ppppppplVar15 & 0xffffffff));
                }
                else {
                  ppppppplVar31 = (long *******)((ulong)ppppppplVar31 % (ulong)ppppppplVar15);
                }
              }
              if (ppppppplVar31 != ppppppplVar14) {
                if (pppppplVar17[(long)ppppppplVar31] == (long *****)0x0) {
                  pppppplVar17[(long)ppppppplVar31] = ppppplVar36;
                  ppppppplVar14 = ppppppplVar31;
                }
                else {
                  *ppppplVar36 = *ppppplVar39;
                  *ppppplVar39 = *pppppplVar17[(long)ppppppplVar31];
                  *pppppplVar17[(long)ppppppplVar31] = (long ****)ppppplVar39;
                  ppppplVar39 = ppppplVar36;
                }
              }
              ppppplVar36 = ppppplVar39;
              ppppplVar39 = (long *****)*ppppplVar36;
            }
          }
        }
      }
      else {
        ppppppplVar15 = (long *******)FUN_0412c3f0();
        ppppppplVar14 = *(long ********)(param_1 + 0x28);
        bVar50 = ppppppplVar15 < ppppppplVar14;
        if (ppppppplVar14 < ppppppplVar15) goto LAB_09b0981d;
LAB_09b09921:
        if (bVar50) {
          fVar51 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x38) /
                                          *(float *)(param_1 + 0x40));
          ppppppplVar31 =
               (long *******)((long)(fVar51 - _DAT_01198778) & (long)fVar51 >> 0x3f | (long)fVar51);
          if ((ppppppplVar14 < (long *******)0x3) ||
             (uVar35 = (long)ppppppplVar14 - ((ulong)ppppppplVar14 >> 1 & 0x5555555555555555),
             uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333),
             1 < (byte)(((uVar35 >> 4) + uVar35 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            ppppppplVar31 = (long *******)FUN_0412c3f0(ppppppplVar31);
            if (ppppppplVar31 < ppppppplVar15) {
              ppppppplVar31 = ppppppplVar15;
            }
          }
          else {
            if ((long *******)0x1 < ppppppplVar31) {
              lVar48 = 0x3f;
              if ((char *)((long)ppppppplVar31 + -1) != (char *)0x0) {
                for (; (ulong)((long)ppppppplVar31 + -1) >> lVar48 == 0; lVar48 = lVar48 + -1) {
                }
              }
              ppppppplVar31 = (long *******)(1L << (-((byte)lVar48 ^ 0x3f) & 0x3f));
            }
            if (ppppppplVar31 < ppppppplVar15) {
              ppppppplVar31 = ppppppplVar15;
            }
          }
          ppppppplVar15 = ppppppplVar31;
          if (ppppppplVar15 < ppppppplVar14) {
            if (ppppppplVar15 != (long *******)0x0) goto LAB_09b0981d;
            pppppplVar17 = *ppppppplVar24;
            *ppppppplVar24 = (long ******)0x0;
            if (pppppplVar17 != (long ******)0x0) {
              func_0x0412a280(pppppplVar17,*(long *)(param_1 + 0x28) << 3);
            }
            *(undefined8 *)(param_1 + 0x28) = 0;
          }
        }
      }
      ppppppplVar15 = *(long ********)(param_1 + 0x28);
      if (((ulong)ppppppplVar15 & (ulong)((long)ppppppplVar15 - 1U)) == 0) {
        ppppppplVar14 = (long *******)(ulong)((uint)ppppppplVar30 & (int)ppppppplVar15 - 1U);
      }
      else {
        ppppppplVar14 = ppppppplVar30;
        if ((ppppppplVar15 <= ppppppplVar30) && (ppppppplVar15 <= ppppppplVar30)) {
          ppppppplVar14 =
               (long *******)
               (((ulong)ppppppplVar30 & 0xffffffff) % ((ulong)ppppppplVar15 & 0xffffffff));
        }
      }
    }
    else {
      fVar53 = (float)(long)ppppppplVar15;
      fVar52 = *(float *)(param_1 + 0x40);
      if (ppppppplVar15 == (long *******)0x0) goto LAB_09b097a0;
LAB_09b09785:
      if (fVar53 * fVar52 < fVar51) goto LAB_09b097a0;
    }
    pppppplVar17 = *ppppppplVar24;
    ppppplVar36 = pppppplVar17[(long)ppppppplVar14];
    if (ppppplVar36 == (long *****)0x0) {
      *ppppppplVar16 = (long ******)*ppppplVar29;
      *ppppplVar29 = (long ****)ppppppplVar16;
      pppppplVar17[(long)ppppppplVar14] = ppppplVar29;
      if (*ppppppplVar16 != (long ******)0x0) {
        ppppppplVar30 = (long *******)(*ppppppplVar16)[1];
        if (((ulong)ppppppplVar15 & (long)ppppppplVar15 - 1U) == 0) {
          pppppplVar17[(ulong)ppppppplVar30 & (ulong)((long)ppppppplVar15 - 1U)] =
               (long *****)ppppppplVar16;
        }
        else {
          if (ppppppplVar15 <= ppppppplVar30) {
            if (((ulong)ppppppplVar30 | (ulong)ppppppplVar15) >> 0x20 == 0) {
              pppppplVar17
              [((ulong)ppppppplVar30 & 0xffffffff) % ((ulong)ppppppplVar15 & 0xffffffff)] =
                   (long *****)ppppppplVar16;
              goto LAB_09b09bbf;
            }
            ppppppplVar30 = (long *******)((ulong)ppppppplVar30 % (ulong)ppppppplVar15);
          }
          pppppplVar17[(long)ppppppplVar30] = (long *****)ppppppplVar16;
        }
      }
    }
    else {
      *ppppppplVar16 = (long ******)*ppppplVar36;
      *ppppplVar36 = (long ****)ppppppplVar16;
    }
LAB_09b09bbf:
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
LAB_09b09bde:
    pbVar43 = pbStack_278;
    ppppppplVar30 = ppppppplStack_2d8;
    unaff_R15 = (long *******)&UNK_0f486ba0;
    ppppppplVar15 = ppppppplStack_2d0;
    if (ppppppplStack_2d8 != (long *******)0x0) {
      for (; ppppppplVar30 != ppppppplVar15; ppppppplVar15 = ppppppplVar15 + -0x25) {
        ppppppplVar15[-0x24] = (long ******)&UNK_0f1a4bd8;
        if (((*(char *)(ppppppplVar15 + -0x1b) == '\x01') &&
            (pppppplVar17 = ppppppplVar15[-0x1f], pppppplVar17 != (long ******)0x0)) &&
           (*pppppplVar17 != (long *****)0x0 &&
            *(int *)(pppppplVar17 + 1) == *(int *)(ppppppplVar15 + -0x1e))) {
          func_0x0d8569b0(*pppppplVar17,ppppppplVar15[-0x1d],*(undefined4 *)(ppppppplVar15 + -0x1c))
          ;
        }
        ppppppplVar15[-0x24] = (long ******)&UNK_0f486ba0;
      }
      ppppppplStack_2d0 = ppppppplVar30;
      func_0x0412a280(ppppppplStack_2d8,(long)pppppplStack_2c8 - (long)ppppppplStack_2d8);
    }
    ppppppplVar30 = ppppppplStack_1d8;
    ppppppplVar15 = ppppppplStack_1d0;
    if (ppppppplStack_1d8 != (long *******)0x0) {
      for (; ppppppplVar30 != ppppppplVar15; ppppppplVar15 = ppppppplVar15 + -0x25) {
        ppppppplVar15[-0x24] = (long ******)&UNK_0f1a4bd8;
        if (((*(char *)(ppppppplVar15 + -0x1b) == '\x01') &&
            (pppppplVar17 = ppppppplVar15[-0x1f], pppppplVar17 != (long ******)0x0)) &&
           (*pppppplVar17 != (long *****)0x0 &&
            *(int *)(pppppplVar17 + 1) == *(int *)(ppppppplVar15 + -0x1e))) {
          func_0x0d8569b0(*pppppplVar17,ppppppplVar15[-0x1d],*(undefined4 *)(ppppppplVar15 + -0x1c))
          ;
        }
        ppppppplVar15[-0x24] = (long ******)&UNK_0f486ba0;
      }
      ppppppplStack_1d0 = ppppppplVar30;
      func_0x0412a280(ppppppplStack_1d8,(long)ppppppplStack_1c8 - (long)ppppppplStack_1d8);
    }
    pppppplStack_160 = (long ******)&UNK_0f1a4bd8;
    if (((char)pppppplStack_118 == '\x01') && (pppppplStack_138 != (long ******)0x0)) {
      if (*pppppplStack_138 != (long *****)0x0 &&
          *(int *)(pppppplStack_138 + 1) == (int)pppppplStack_130) {
        func_0x0d8569b0(*pppppplStack_138,pppppplStack_128,(ulong)pppppplStack_120 & 0xffffffff);
      }
    }
    if (plStack_288 != (long *)0x0) {
      (**(code **)(*plStack_288 + 0x10))();
    }
    goto LAB_09b08f40;
  }
joined_r0x09b0a26b:
  for (; pbVar38 != pbVar43; pbVar43 = pbVar43 + -0x128) {
    *(undefined **)(pbVar43 + -0x120) = &UNK_0f1a4bd8;
    if (((pbVar43[-0xd8] == 1) && (plVar19 = *(long **)(pbVar43 + -0xf8), plVar19 != (long *)0x0))
       && (param_2 = uStack_298, *plVar19 != 0 && (int)plVar19[1] == *(int *)(pbVar43 + -0xf0))) {
      func_0x0d8569b0(*plVar19,*(undefined8 *)(pbVar43 + -0xe8),*(undefined4 *)(pbVar43 + -0xe0));
      param_2 = uStack_298;
    }
    *(undefined **)(pbVar43 + -0x120) = &UNK_0f486ba0;
  }
  *(byte **)(param_1 + 0x10) = pbVar38;
  uVar35 = 0;
  if ((long)param_2 < 1) {
    param_2 = uVar35;
  }
  lStack_40 = func_0x0417cc60();
  lStack_40 = param_2 * 1000 + lStack_40;
  puStack_1e8 = (undefined8 *)(param_1 + 0x30);
  uStack_298 = param_2;
  do {
    puVar21 = (undefined8 *)*puStack_1e8;
joined_r0x09b0a35e:
    if (puVar21 != (undefined8 *)0x0) {
      do {
        puVar49 = (undefined1 *)puVar21[3];
        puVar44 = (undefined1 *)puVar21[4];
        if (puVar49 != puVar44) {
LAB_09b0a3d0:
          do {
            if (((puVar49[0x120] == '\0') && (*(long *)(puVar49 + 0x10) != 0)) &&
               (((plVar19 = *(long **)(puVar49 + 0x20), plVar19 != (long *)0x0 &&
                 ((*plVar19 != 0 && ((int)plVar19[1] == *(int *)(puVar49 + 0x28))))) &&
                (puVar49[0x50] == '\x01')))) {
              uVar27 = *(ulong *)(puVar49 + 0x40);
              if ((((((uint)uVar27 != 0xffffffff) &&
                    (plVar19 = *(long **)(puVar49 + 0x30), plVar19 != (long *)0x0)) &&
                   (lVar48 = *plVar19, lVar48 != 0)) &&
                  ((int)plVar19[1] == *(int *)(puVar49 + 0x38))) &&
                 ((uVar27 != *(ulong *)(lVar48 + 0x138) ||
                  (puVar49[0x48] != *(char *)(lVar48 + 0x140))))) {
                uVar37 = uVar27 >> 0xc & 0xfffff;
                if (((uVar37 < (ulong)(*(long *)(lVar48 + 0xf0) - *(long *)(lVar48 + 0xe8) >> 3)) &&
                    ((lVar22 = *(long *)(*(long *)(lVar48 + 0xe8) + uVar37 * 8), lVar22 != 0 &&
                     (uVar37 = *(ulong *)(lVar22 + (ulong)((uint)uVar27 & 0xfff) * 8),
                     (uVar27 & 0xffffff00000000 ^ uVar37) < 0xffffffff)))) &&
                   ((uVar37 & 0xffffffff) < *(ulong *)(lVar48 + 0x128))) {
                  puVar49 = puVar49 + 0x128;
                  if (puVar49 == puVar44) break;
                  goto LAB_09b0a3d0;
                }
              }
            }
            puVar34 = puVar49 + 0x128;
            puVar46 = puVar49;
            puVar8 = puVar44;
            if (puVar34 != puVar44) {
              do {
                cVar4 = puVar34[-0xd8];
                puVar34[-0x128] = *puVar34;
                *(undefined4 *)(puVar34 + -0x124) = *(undefined4 *)(puVar34 + 4);
                *(undefined8 *)(puVar34 + -0x118) = *(undefined8 *)(puVar34 + 0x10);
                puVar34[-0x110] = puVar34[0x18];
                *(undefined8 *)(puVar34 + -0x108) = *(undefined8 *)(puVar34 + 0x20);
                *(undefined4 *)(puVar34 + -0x100) = *(undefined4 *)(puVar34 + 0x28);
                *(undefined8 *)(puVar34 + 0x20) = 0;
                *(undefined4 *)(puVar34 + 0x28) = 0;
                *(undefined8 *)(puVar34 + 0x10) = 0;
                puVar34[0x18] = 0;
                if (cVar4 == puVar34[0x50]) {
                  if (cVar4 != '\0') {
                    plVar19 = *(long **)(puVar34 + -0xf8);
                    if ((plVar19 != (long *)0x0) &&
                       (*plVar19 != 0 && (int)plVar19[1] == *(int *)(puVar34 + -0xf0))) {
                      func_0x0d8569b0(*plVar19,*(undefined8 *)(puVar34 + -0xe8),
                                      *(undefined4 *)(puVar34 + -0xe0));
                    }
                    *(undefined8 *)(puVar34 + -0xf8) = *(undefined8 *)(puVar34 + 0x30);
                    *(undefined4 *)(puVar34 + -0xf0) = *(undefined4 *)(puVar34 + 0x38);
                    *(undefined8 *)(puVar34 + -0xe8) = *(undefined8 *)(puVar34 + 0x40);
                    puVar34[-0xe0] = puVar34[0x48];
                    *(undefined8 *)(puVar34 + 0x30) = 0;
                    *(undefined4 *)(puVar34 + 0x38) = 0;
                    *(undefined8 *)(puVar34 + 0x40) = 0xffffffffffffff;
                    puVar34[0x48] = 0;
                  }
                }
                else if (cVar4 == '\0') {
                  *(undefined8 *)(puVar34 + -0xf8) = *(undefined8 *)(puVar34 + 0x30);
                  *(undefined4 *)(puVar34 + -0xf0) = *(undefined4 *)(puVar34 + 0x38);
                  *(undefined8 *)(puVar34 + -0xe8) = *(undefined8 *)(puVar34 + 0x40);
                  *(undefined8 *)(puVar34 + -0xe0) = *(undefined8 *)(puVar34 + 0x48);
                  *(undefined8 *)(puVar34 + 0x30) = 0;
                  *(undefined4 *)(puVar34 + 0x38) = 0;
                  *(undefined8 *)(puVar34 + 0x40) = 0xffffffffffffff;
                  puVar34[0x48] = 0;
                  puVar34[-0xd8] = 1;
                }
                else {
                  plVar19 = *(long **)(puVar34 + -0xf8);
                  if ((plVar19 != (long *)0x0) &&
                     (*plVar19 != 0 && (int)plVar19[1] == *(int *)(puVar34 + -0xf0))) {
                    func_0x0d8569b0(*plVar19,*(undefined8 *)(puVar34 + -0xe8),
                                    *(undefined4 *)(puVar34 + -0xe0));
                  }
                  puVar34[-0xd8] = 0;
                }
                *(undefined8 *)(puVar34 + -0xd0) = *(undefined8 *)(puVar34 + 0x58);
                *(undefined8 *)(puVar34 + -200) = *(undefined8 *)(puVar34 + 0x60);
                memcpy(puVar34 + -0xc0,puVar34 + 0x68,0xba);
                puVar34 = puVar34 + 0x128;
                puVar46 = puVar46 + 0x128;
              } while (puVar34 != puVar44);
              puVar8 = (undefined1 *)puVar21[4];
            }
            for (; puVar44 = puVar46, puVar44 != puVar8; puVar8 = puVar8 + -0x128) {
              *(undefined **)(puVar8 + -0x120) = &UNK_0f1a4bd8;
              if (((puVar8[-0xd8] == '\x01') &&
                  (plVar19 = *(long **)(puVar8 + -0xf8), plVar19 != (long *)0x0)) &&
                 (*plVar19 != 0 && (int)plVar19[1] == *(int *)(puVar8 + -0xf0))) {
                func_0x0d8569b0(*plVar19,*(undefined8 *)(puVar8 + -0xe8),
                                *(undefined4 *)(puVar8 + -0xe0));
              }
              *(undefined **)(puVar8 + -0x120) = &UNK_0f486ba0;
              puVar46 = puVar44;
            }
            puVar21[4] = puVar44;
          } while (puVar49 != puVar44);
          if (puVar44 != (undefined1 *)puVar21[3]) goto code_r0x09b0a3aa;
        }
        if (plStack_288 != (long *)0x0) {
          (**(code **)(*plStack_288 + 0x18))();
        }
        puVar5 = (undefined8 *)*puVar21;
        uVar27 = puVar21[1];
        uVar37 = *(ulong *)(param_1 + 0x28);
        uVar28 = uVar37 - (uVar37 >> 1 & 0x5555555555555555);
        uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
        uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar28 >> 0x38 < 2) {
          uVar27 = uVar27 & uVar37 - 1;
        }
        else if (uVar37 <= uVar27) {
          if ((uVar27 | uVar37) >> 0x20 == 0) {
            uVar27 = (uVar27 & 0xffffffff) % (uVar37 & 0xffffffff);
          }
          else {
            uVar27 = uVar27 % uVar37;
          }
        }
        lVar48 = *(long *)(param_1 + 0x20);
        puVar41 = *(undefined8 **)(lVar48 + uVar27 * 8);
        do {
          puVar18 = puVar41;
          puVar41 = (undefined8 *)*puVar18;
        } while ((undefined8 *)*puVar18 != puVar21);
        bVar33 = (byte)(uVar28 >> 0x38);
        puVar41 = puVar5;
        if (puVar18 == puStack_1e8) {
LAB_09b0a8a8:
          if (puVar5 == (undefined8 *)0x0) {
LAB_09b0a8f8:
            *(undefined8 *)(lVar48 + uVar27 * 8) = 0;
            puVar41 = (undefined8 *)*puVar21;
            goto LAB_09b0a903;
          }
          uVar28 = puVar5[1];
          if (bVar33 < 2) {
            uVar32 = uVar37 - 1 & uVar28;
          }
          else {
            uVar32 = uVar28;
            if (uVar37 <= uVar28) {
              if ((uVar28 | uVar37) >> 0x20 == 0) {
                uVar32 = (uVar28 & 0xffffffff) % (uVar37 & 0xffffffff);
              }
              else {
                uVar32 = uVar28 % uVar37;
              }
            }
          }
          if (uVar32 != uVar27) goto LAB_09b0a8f8;
LAB_09b0a90c:
          if (bVar33 < 2) {
            uVar28 = uVar28 & uVar37 - 1;
          }
          else if (uVar37 <= uVar28) {
            if ((uVar28 | uVar37) >> 0x20 == 0) {
              uVar28 = (uVar28 & 0xffffffff) % (uVar37 & 0xffffffff);
            }
            else {
              uVar28 = uVar28 % uVar37;
            }
          }
          if (uVar28 != uVar27) {
            *(undefined8 **)(lVar48 + uVar28 * 8) = puVar18;
            puVar41 = (undefined8 *)*puVar21;
          }
        }
        else {
          uVar28 = puVar18[1];
          if (bVar33 < 2) {
            uVar28 = uVar28 & uVar37 - 1;
          }
          else if (uVar37 <= uVar28) {
            if ((uVar28 | uVar37) >> 0x20 == 0) {
              uVar28 = (uVar28 & 0xffffffff) % (uVar37 & 0xffffffff);
            }
            else {
              uVar28 = uVar28 % uVar37;
            }
          }
          if (uVar28 != uVar27) goto LAB_09b0a8a8;
LAB_09b0a903:
          if (puVar41 != (undefined8 *)0x0) {
            uVar28 = puVar41[1];
            goto LAB_09b0a90c;
          }
          puVar41 = (undefined8 *)0x0;
        }
        *puVar18 = puVar41;
        *puVar21 = 0;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
        lVar48 = puVar21[3];
        if (lVar48 != 0) {
          lVar22 = puVar21[4];
          lVar23 = lVar48;
          if (lVar48 != lVar22) {
            do {
              *(undefined **)(lVar22 + -0x120) = &UNK_0f1a4bd8;
              if (((*(char *)(lVar22 + -0xd8) == '\x01') &&
                  (plVar19 = *(long **)(lVar22 + -0xf8), plVar19 != (long *)0x0)) &&
                 (*plVar19 != 0 && (int)plVar19[1] == *(int *)(lVar22 + -0xf0))) {
                func_0x0d8569b0(*plVar19,*(undefined8 *)(lVar22 + -0xe8),
                                *(undefined4 *)(lVar22 + -0xe0));
              }
              *(undefined **)(lVar22 + -0x120) = &UNK_0f486ba0;
              lVar22 = lVar22 + -0x128;
            } while (lVar22 != lVar48);
            lVar23 = puVar21[3];
          }
          puVar21[4] = lVar48;
          func_0x0412a280(lVar23,puVar21[5] - lVar23);
        }
        func_0x0412a280(puVar21,0x30);
        puVar21 = puVar5;
        if (puVar5 == (undefined8 *)0x0) break;
      } while( true );
    }
    uVar27 = *(ulong *)(param_1 + 0x38);
    if (uVar27 == 0) {
      return;
    }
    if ((uStack_298 | uVar27) >> 0x20 == 0) {
      uVar27 = (uStack_298 & 0xffffffff) / (uVar27 & 0xffffffff);
    }
    else {
      uVar27 = uStack_298 / uVar27;
    }
    uStack_250 = uVar27;
    plVar19 = plStack_288;
    for (puStack_290 = (undefined8 *)*puStack_1e8; puStack_290 != (undefined8 *)0x0;
        puStack_290 = (undefined8 *)*puStack_290) {
      uStack_2e8 = 0;
      do {
        puVar21 = puStack_290;
        lVar48 = puStack_290[3];
        lVar22 = puStack_290[4];
        uVar28 = (lVar22 - lVar48 >> 3) * 0x14c1bacf914c1bad;
        uVar37 = uVar28;
        if (lVar22 == lVar48) {
          uVar37 = 1;
        }
        uVar27 = uVar27 - uStack_2e8;
        if ((uVar27 | uVar37) >> 0x20 == 0) {
          pbStack_280 = (byte *)((uVar27 & 0xffffffff) / (uVar37 & 0xffffffff));
        }
        else {
          pbStack_280 = (byte *)(uVar27 / uVar37);
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19,*(undefined1 *)(puStack_290 + 2),uVar28);
          lVar48 = puVar21[3];
          lVar22 = puVar21[4];
        }
        uVar27 = uStack_250;
        if (lVar48 == lVar22) break;
        bVar33 = 0;
        pbVar38 = pbStack_280;
        lStack_190 = lVar22;
        do {
          if (*(char *)(lVar48 + 0x120) == '\0') {
            uStack_188 = *(long *)(lVar48 + 0x70) / 1000;
            pbStack_278 = (byte *)0x1;
            if (999 < *(long *)(lVar48 + 0x70)) {
              if (((ulong)pbVar38 | uStack_188) >> 0x20 == 0) {
                pbStack_278 = (byte *)(((ulong)pbVar38 & 0xffffffff) / (uStack_188 & 0xffffffff));
              }
              else {
                pbStack_278 = (byte *)((ulong)pbVar38 / uStack_188);
              }
            }
            iStack_1dc = (int)pbStack_278 + (uint)((int)pbStack_278 == 0);
            uStack_268 = lVar48 + 8;
            ppppppplStack_270 = (long *******)(lVar48 + 0x58);
            uVar11 = 0;
            pbStack_258 = (byte *)0x0;
LAB_09b0aca0:
            ppppppplStack_260 = (long *******)func_0x0417cc60();
            pppppplStack_1b0 = (long ******)0x0;
            uStack_1a8 = 0;
            pcStack_1c0 = (code *)0x0;
            ppppppplStack_1d0 = (long *******)0x0;
            uStack_1a0 = 0;
            ppppppplStack_1c8 = (long *******)&UNK_0488e0b0;
            uStack_1b8 = 0x48b5725f;
            ppppppplStack_1d8 = (long *******)0x0;
            plVar19 = _DAT_0f54fd98;
            if (_DAT_0f54fd90 == (long ******)0x0) {
              plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
              if (plVar19 == (long *)0x0) {
                func_0x0eec74c0(0x50,0);
              }
              plVar19[1] = 0;
              plVar19[2] = 0;
              *plVar19 = (long)&UNK_0ef44ab0;
              plVar19[3] = 0;
              plVar19[4] = 0;
              plVar19[5] = 0;
              plVar19[6] = 0;
              plVar19[7] = 0;
              plVar19[8] = 0;
              plVar19[9] = 0;
              *(undefined4 *)(plVar19 + 9) = 0x3f600000;
              puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
              if (puVar20 == (undefined4 *)0x0) {
                func_0x0eec74c0(0x40,0);
              }
              plVar19[3] = (long)puVar20;
              plVar19[4] = (long)(puVar20 + 0x10);
              plVar19[5] = (long)(puVar20 + 0x10);
              puVar20[0xc] = 0xffffffff;
              puVar20[0xd] = 0xffffffff;
              puVar20[0xe] = 0xffffffff;
              puVar20[0xf] = 0xffffffff;
              puVar20[8] = 0xffffffff;
              puVar20[9] = 0xffffffff;
              puVar20[10] = 0xffffffff;
              puVar20[0xb] = 0xffffffff;
              puVar20[4] = 0xffffffff;
              puVar20[5] = 0xffffffff;
              puVar20[6] = 0xffffffff;
              puVar20[7] = 0xffffffff;
              *puVar20 = 0xffffffff;
              puVar20[1] = 0xffffffff;
              puVar20[2] = 0xffffffff;
              puVar20[3] = 0xffffffff;
              lVar22 = plVar19[6];
              if (plVar19[7] - lVar22 != 0) {
                uVar35 = (plVar19[7] - lVar22 >> 3) * -0x5555555555555555;
                if (uVar35 < 2) {
                  uVar35 = 1;
                  uVar27 = 0;
                }
                else {
                  puVar40 = (uint *)(lVar22 + 0x20);
                  uVar27 = 0;
                  do {
                    uVar25 = *(undefined8 *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2);
                    *(ulong *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2) = uVar27;
                    *(undefined8 *)(puVar40 + -8) = uVar25;
                    uVar25 = *(undefined8 *)(puVar20 + (ulong)(*puVar40 & 7) * 2);
                    *(ulong *)(puVar20 + (ulong)(*puVar40 & 7) * 2) = uVar27 + 1;
                    *(undefined8 *)(puVar40 + -2) = uVar25;
                    uVar27 = uVar27 + 2;
                    puVar40 = puVar40 + 0xc;
                  } while (uVar27 != (uVar35 & 0xfffffffffffffffe));
                }
                if ((uVar35 & 1) != 0) {
                  uVar35 = (ulong)(*(uint *)(lVar22 + 8 + uVar27 * 0x18) & 7);
                  uVar25 = *(undefined8 *)(puVar20 + uVar35 * 2);
                  *(ulong *)(puVar20 + uVar35 * 2) = uVar27;
                  *(undefined8 *)(lVar22 + uVar27 * 0x18) = uVar25;
                }
              }
              plVar10 = _DAT_0f54fd98;
              pbVar38 = pbStack_280;
              _DAT_0f54fd90 = (long ******)(plVar19 + 3);
              if (_DAT_0f54fd98 != (long *)0x0) {
                LOCK();
                plVar2 = _DAT_0f54fd98 + 1;
                lVar22 = *plVar2;
                _DAT_0f54fd98 = plVar19;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                plVar19 = _DAT_0f54fd98;
                if (lVar22 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                  func_0x0412c2d0(plVar10);
                  pbVar38 = pbStack_280;
                  plVar19 = _DAT_0f54fd98;
                }
              }
            }
            _DAT_0f54fd98 = plVar19;
            pppppplStack_1b0 = _DAT_0f54fd90;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            func_0x0d81bf80(&ppppppplStack_248,uStack_268,&ppppppplStack_1d8,ppppppplStack_270);
            pppppplVar17 = pppppplStack_218;
            cStack_2e0 = (char)ppppppplStack_248;
            if ((char)ppppppplStack_248 == '\0') {
              pppppplVar42 = pppppplStack_38;
              if (pppppplStack_208 == (long ******)0x0) {
                if (_DAT_0f54fd90 == (long ******)0x0) {
                  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                  if (plVar19 == (long *)0x0) {
                    func_0x0eec74c0(0x50,0);
                  }
                  plVar19[1] = 0;
                  plVar19[2] = 0;
                  *plVar19 = (long)&UNK_0ef44ab0;
                  plVar19[3] = 0;
                  plVar19[4] = 0;
                  plVar19[5] = 0;
                  plVar19[6] = 0;
                  plVar19[7] = 0;
                  plVar19[8] = 0;
                  plVar19[9] = 0;
                  *(undefined4 *)(plVar19 + 9) = 0x3f600000;
                  puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                  if (puVar20 == (undefined4 *)0x0) {
                    func_0x0eec74c0(0x40,0);
                  }
                  plVar19[3] = (long)puVar20;
                  plVar19[4] = (long)(puVar20 + 0x10);
                  plVar19[5] = (long)(puVar20 + 0x10);
                  puVar20[0xc] = 0xffffffff;
                  puVar20[0xd] = 0xffffffff;
                  puVar20[0xe] = 0xffffffff;
                  puVar20[0xf] = 0xffffffff;
                  puVar20[8] = 0xffffffff;
                  puVar20[9] = 0xffffffff;
                  puVar20[10] = 0xffffffff;
                  puVar20[0xb] = 0xffffffff;
                  puVar20[4] = 0xffffffff;
                  puVar20[5] = 0xffffffff;
                  puVar20[6] = 0xffffffff;
                  puVar20[7] = 0xffffffff;
                  *puVar20 = 0xffffffff;
                  puVar20[1] = 0xffffffff;
                  puVar20[2] = 0xffffffff;
                  puVar20[3] = 0xffffffff;
                  lVar22 = plVar19[6];
                  if (plVar19[7] - lVar22 != 0) {
                    uVar35 = (plVar19[7] - lVar22 >> 3) * -0x5555555555555555;
                    if (uVar35 < 2) {
                      uVar35 = 1;
                      uVar27 = 0;
                    }
                    else {
                      puVar40 = (uint *)(lVar22 + 0x20);
                      uVar27 = 0;
                      do {
                        uVar25 = *(undefined8 *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2);
                        *(ulong *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2) = uVar27;
                        *(undefined8 *)(puVar40 + -8) = uVar25;
                        uVar25 = *(undefined8 *)(puVar20 + (ulong)(*puVar40 & 7) * 2);
                        *(ulong *)(puVar20 + (ulong)(*puVar40 & 7) * 2) = uVar27 + 1;
                        *(undefined8 *)(puVar40 + -2) = uVar25;
                        uVar27 = uVar27 + 2;
                        puVar40 = puVar40 + 0xc;
                      } while (uVar27 != (uVar35 & 0xfffffffffffffffe));
                    }
                    if ((uVar35 & 1) != 0) {
                      uVar35 = (ulong)(*(uint *)(lVar22 + 8 + uVar27 * 0x18) & 7);
                      uVar25 = *(undefined8 *)(puVar20 + uVar35 * 2);
                      *(ulong *)(puVar20 + uVar35 * 2) = uVar27;
                      *(undefined8 *)(lVar22 + uVar27 * 0x18) = uVar25;
                    }
                  }
                  plVar10 = _DAT_0f54fd98;
                  _DAT_0f54fd90 = (long ******)(plVar19 + 3);
                  if (_DAT_0f54fd98 != (long *)0x0) {
                    LOCK();
                    plVar2 = _DAT_0f54fd98 + 1;
                    lVar22 = *plVar2;
                    _DAT_0f54fd98 = plVar19;
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    plVar19 = _DAT_0f54fd98;
                    if (lVar22 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      func_0x0412c2d0(plVar10);
                      plVar19 = _DAT_0f54fd98;
                    }
                  }
                  _DAT_0f54fd98 = plVar19;
                  pppppplVar47 = (long ******)0x0;
                  pppppplVar17 = _DAT_0f54fd90;
                  pppppplVar42 = pppppplStack_38;
                  goto joined_r0x09b0b35e;
                }
                pppppplVar47 = (long ******)0x0;
                pppppplVar17 = _DAT_0f54fd90;
                plVar19 = _DAT_0f54fd98;
              }
              else {
                pppppplVar47 = pppppplStack_210;
                if (pppppplStack_210 == (long ******)0x0) {
                  (*(code *)pppppplStack_208)(0,&ppppppplStack_240,0);
                  pppppplVar47 = pppppplStack_210;
                  pppppplVar42 = pppppplStack_38;
                }
joined_r0x09b0b35e:
                pppppplStack_38 = pppppplVar17;
                pppppplVar17 = pppppplStack_38;
                plVar19 = _DAT_0f54fd98;
                if (_DAT_0f54fd90 == (long ******)0x0) {
                  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                  if (plVar19 == (long *)0x0) {
                    func_0x0eec74c0(0x50,0);
                  }
                  *(undefined1 (*) [16])(plVar19 + 1) = (undefined1  [16])0x0;
                  *plVar19 = (long)&UNK_0ef44ab0;
                  *(undefined1 (*) [16])(plVar19 + 3) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(plVar19 + 5) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(plVar19 + 7) = (undefined1  [16])0x0;
                  plVar19[9] = 0;
                  *(undefined4 *)(plVar19 + 9) = 0x3f600000;
                  puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                  if (puVar20 == (undefined4 *)0x0) {
                    func_0x0eec74c0(0x40,0);
                  }
                  plVar19[3] = (long)puVar20;
                  plVar19[4] = (long)(puVar20 + 0x10);
                  plVar19[5] = (long)(puVar20 + 0x10);
                  puVar20[0xc] = 0xffffffff;
                  puVar20[0xd] = 0xffffffff;
                  puVar20[0xe] = 0xffffffff;
                  puVar20[0xf] = 0xffffffff;
                  puVar20[8] = 0xffffffff;
                  puVar20[9] = 0xffffffff;
                  puVar20[10] = 0xffffffff;
                  puVar20[0xb] = 0xffffffff;
                  puVar20[4] = 0xffffffff;
                  puVar20[5] = 0xffffffff;
                  puVar20[6] = 0xffffffff;
                  puVar20[7] = 0xffffffff;
                  *puVar20 = 0xffffffff;
                  puVar20[1] = 0xffffffff;
                  puVar20[2] = 0xffffffff;
                  puVar20[3] = 0xffffffff;
                  lVar22 = plVar19[6];
                  if (plVar19[7] - lVar22 != 0) {
                    uVar35 = (plVar19[7] - lVar22 >> 3) * -0x5555555555555555;
                    if (uVar35 < 2) {
                      uVar35 = 1;
                      uVar27 = 0;
                    }
                    else {
                      puVar40 = (uint *)(lVar22 + 0x20);
                      uVar27 = 0;
                      do {
                        uVar25 = *(undefined8 *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2);
                        *(ulong *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2) = uVar27;
                        *(undefined8 *)(puVar40 + -8) = uVar25;
                        uVar25 = *(undefined8 *)(puVar20 + (ulong)(*puVar40 & 7) * 2);
                        *(ulong *)(puVar20 + (ulong)(*puVar40 & 7) * 2) = uVar27 + 1;
                        *(undefined8 *)(puVar40 + -2) = uVar25;
                        uVar27 = uVar27 + 2;
                        puVar40 = puVar40 + 0xc;
                      } while (uVar27 != (uVar35 & 0xfffffffffffffffe));
                    }
                    if ((uVar35 & 1) != 0) {
                      uVar35 = (ulong)(*(uint *)(lVar22 + 8 + uVar27 * 0x18) & 7);
                      uVar25 = *(undefined8 *)(puVar20 + uVar35 * 2);
                      *(ulong *)(puVar20 + uVar35 * 2) = uVar27;
                      *(undefined8 *)(lVar22 + uVar27 * 0x18) = uVar25;
                    }
                  }
                  plVar10 = _DAT_0f54fd98;
                  pppppplVar17 = pppppplStack_38;
                  _DAT_0f54fd90 = (long ******)(plVar19 + 3);
                  pppppplVar42 = pppppplStack_38;
                  if (_DAT_0f54fd98 != (long *)0x0) {
                    LOCK();
                    plVar2 = _DAT_0f54fd98 + 1;
                    lVar22 = *plVar2;
                    _DAT_0f54fd98 = plVar19;
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    plVar19 = _DAT_0f54fd98;
                    if (lVar22 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      func_0x0412c2d0(plVar10);
                      pppppplVar17 = pppppplStack_38;
                      plVar19 = _DAT_0f54fd98;
                      pppppplVar42 = pppppplStack_38;
                    }
                  }
                }
              }
              pppppplStack_38 = pppppplVar42;
              _DAT_0f54fd98 = plVar19;
              pppppplVar42 = _DAT_0f54fd90;
              if ((DAT_0f632ca0 == '\0') && (iVar12 = func_0x04108328(&DAT_0f632ca0), iVar12 != 0))
              {
                func_0x09643a20(&DAT_0f632c20);
                func_0x0eee2f40(&UNK_048ae800,&DAT_0f632c20,0xf53dab8);
                func_0x0410844d(&DAT_0f632ca0);
              }
              ppppplVar29 = *pppppplVar42 +
                            ((int)((ulong)((long)pppppplVar42[1] - (long)*pppppplVar42) >> 3) - 1U &
                            *(uint *)(_DAT_0f632c20 + 4));
              do {
                pppplVar45 = *ppppplVar29;
                if (pppplVar45 == (long ****)0xffffffffffffffff) {
                  pppplVar45 = (long ****)&DAT_0f632c20;
                  goto LAB_09b0b3f7;
                }
                ppppplVar29 = pppppplVar42[3] + (long)pppplVar45 * 3;
              } while (*(uint *)(pppppplVar42[3] + (long)pppplVar45 * 3 + 1) !=
                       *(uint *)(_DAT_0f632c20 + 4));
              pppplVar45 = (long ****)&DAT_0f632c20;
              if (ppppplVar29 != pppppplVar42[4]) {
                pppplVar45 = ppppplVar29[2];
              }
LAB_09b0b3f7:
              if (pppppplVar17 == pppppplVar42) {
                if (pppppplVar47 == (long ******)0x0) {
                  if ((DAT_0f550ab8 == '\0') &&
                     (iVar12 = func_0x04108328(&DAT_0f550ab8), iVar12 != 0)) {
                    func_0x048aebb0(&DAT_0f550a38);
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f550a38,0xf53dab8);
                    func_0x0410844d(&DAT_0f550ab8);
                  }
                  ppppplVar29 = *pppppplVar17 +
                                ((int)((ulong)((long)pppppplVar17[1] - (long)*pppppplVar17) >> 3) -
                                 1U & *(uint *)(_DAT_0f550a38 + 4));
                  do {
                    pppplVar6 = *ppppplVar29;
                    if (pppplVar6 == (long ****)0xffffffffffffffff) {
                      pppppplVar47 = (long ******)&DAT_0f550a38;
                      goto LAB_09b0b480;
                    }
                    ppppplVar29 = pppppplVar17[3] + (long)pppplVar6 * 3;
                  } while (*(uint *)(pppppplVar17[3] + (long)pppplVar6 * 3 + 1) !=
                           *(uint *)(_DAT_0f550a38 + 4));
                  pppppplVar47 = (long ******)&DAT_0f550a38;
                  if (ppppplVar29 != pppppplVar17[4]) {
                    pppppplVar47 = (long ******)ppppplVar29[2];
                  }
                }
LAB_09b0b480:
                iVar12 = *(int *)(pppppplVar47 + 1);
                if (pppplVar45 == (long ****)0x0) {
                  if ((DAT_0f550ab8 == '\0') &&
                     (iVar13 = func_0x04108328(&DAT_0f550ab8), iVar13 != 0)) {
                    func_0x048aebb0(&DAT_0f550a38);
                    func_0x0eee2f40(&UNK_048ae800,&DAT_0f550a38,0xf53dab8);
                    func_0x0410844d(&DAT_0f550ab8);
                  }
                  ppppplVar29 = *pppppplVar42 +
                                ((int)((ulong)((long)pppppplVar42[1] - (long)*pppppplVar42) >> 3) -
                                 1U & *(uint *)(_DAT_0f550a38 + 4));
                  do {
                    pppplVar45 = *ppppplVar29;
                    if (pppplVar45 == (long ****)0xffffffffffffffff) {
                      pppplVar45 = (long ****)&DAT_0f550a38;
                      goto LAB_09b0b510;
                    }
                    ppppplVar29 = pppppplVar42[3] + (long)pppplVar45 * 3;
                  } while (*(uint *)(pppppplVar42[3] + (long)pppplVar45 * 3 + 1) !=
                           *(uint *)(_DAT_0f550a38 + 4));
                  pppplVar45 = (long ****)&DAT_0f550a38;
                  if (ppppplVar29 != pppppplVar42[4]) {
                    pppplVar45 = ppppplVar29[2];
                  }
                }
LAB_09b0b510:
                if (iVar12 == *(int *)(pppplVar45 + 1)) {
                  pbVar38 = pbStack_280;
                  cStack_2e0 = (char)ppppppplStack_248;
                  goto LAB_09b0aee6;
                }
              }
              puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (puVar21 == (undefined8 *)0x0) {
                func_0x0eec74c0(0x30,0);
              }
              ppppppplVar24 = uStack_200;
              uVar25 = _UNK_014676e3;
              ppppppplStack_180 = (long *******)0x31;
              uStack_178 = 0x28;
              puVar21[2] = _DAT_014676db;
              puVar21[3] = uVar25;
              uVar25 = _UNK_014676d3;
              *puVar21 = _DAT_014676cb;
              puVar21[1] = uVar25;
              puVar21[4] = 0x213e543c746c7573;
              *(undefined1 *)(puVar21 + 5) = 0;
              uStack_200._0_5_ = CONCAT41(_DAT_013f776f,10);
              uVar9 = CONCAT15(DAT_013f7773,(undefined5)uStack_200);
              uStack_200._7_1_ = SUB81(ppppppplVar24,7);
              uStack_200._0_7_ = (uint7)uVar9;
              puStack_170 = puVar21;
              func_0x0d858ce0(&ppppppplStack_168,&uStack_200,&ppppppplStack_180);
              cStack_2e0 = '\x01';
              plVar19 = _DAT_0f54fd98;
              if (_DAT_0f54fd90 == (long ******)0x0) {
                plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
                if (plVar19 == (long *)0x0) {
                  func_0x0eec74c0(0x50,0);
                }
                *(undefined1 (*) [16])(plVar19 + 1) = (undefined1  [16])0x0;
                *plVar19 = (long)&UNK_0ef44ab0;
                *(undefined1 (*) [16])(plVar19 + 3) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(plVar19 + 5) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(plVar19 + 7) = (undefined1  [16])0x0;
                plVar19[9] = 0;
                *(undefined4 *)(plVar19 + 9) = 0x3f600000;
                puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                if (puVar20 == (undefined4 *)0x0) {
                  func_0x0eec74c0(0x40,0);
                }
                plVar19[3] = (long)puVar20;
                plVar19[4] = (long)(puVar20 + 0x10);
                plVar19[5] = (long)(puVar20 + 0x10);
                puVar20[0xc] = 0xffffffff;
                puVar20[0xd] = 0xffffffff;
                puVar20[0xe] = 0xffffffff;
                puVar20[0xf] = 0xffffffff;
                puVar20[8] = 0xffffffff;
                puVar20[9] = 0xffffffff;
                puVar20[10] = 0xffffffff;
                puVar20[0xb] = 0xffffffff;
                puVar20[4] = 0xffffffff;
                puVar20[5] = 0xffffffff;
                puVar20[6] = 0xffffffff;
                puVar20[7] = 0xffffffff;
                *puVar20 = 0xffffffff;
                puVar20[1] = 0xffffffff;
                puVar20[2] = 0xffffffff;
                puVar20[3] = 0xffffffff;
                lVar22 = plVar19[6];
                if (plVar19[7] - lVar22 != 0) {
                  uVar35 = (plVar19[7] - lVar22 >> 3) * -0x5555555555555555;
                  if (uVar35 < 2) {
                    uVar35 = 1;
                    uVar27 = 0;
                  }
                  else {
                    puVar40 = (uint *)(lVar22 + 0x20);
                    uVar27 = 0;
                    do {
                      uVar25 = *(undefined8 *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2);
                      *(ulong *)(puVar20 + (ulong)(puVar40[-6] & 7) * 2) = uVar27;
                      *(undefined8 *)(puVar40 + -8) = uVar25;
                      uVar25 = *(undefined8 *)(puVar20 + (ulong)(*puVar40 & 7) * 2);
                      *(ulong *)(puVar20 + (ulong)(*puVar40 & 7) * 2) = uVar27 + 1;
                      *(undefined8 *)(puVar40 + -2) = uVar25;
                      uVar27 = uVar27 + 2;
                      puVar40 = puVar40 + 0xc;
                    } while (uVar27 != (uVar35 & 0xfffffffffffffffe));
                  }
                  if ((uVar35 & 1) != 0) {
                    uVar35 = (ulong)(*(uint *)(lVar22 + 8 + uVar27 * 0x18) & 7);
                    uVar25 = *(undefined8 *)(puVar20 + uVar35 * 2);
                    *(ulong *)(puVar20 + uVar35 * 2) = uVar27;
                    *(undefined8 *)(lVar22 + uVar27 * 0x18) = uVar25;
                  }
                }
                plVar10 = _DAT_0f54fd98;
                _DAT_0f54fd90 = (long ******)(plVar19 + 3);
                if (_DAT_0f54fd98 != (long *)0x0) {
                  LOCK();
                  plVar2 = _DAT_0f54fd98 + 1;
                  lVar22 = *plVar2;
                  _DAT_0f54fd98 = plVar19;
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  plVar19 = _DAT_0f54fd98;
                  if (lVar22 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                    func_0x0412c2d0(plVar10);
                    plVar19 = _DAT_0f54fd98;
                  }
                }
              }
              _DAT_0f54fd98 = plVar19;
              pppppplVar17 = _DAT_0f54fd90;
              ppppppplStack_2d8 = (long *******)0x0;
              pppppplStack_2c8 = (long ******)&UNK_05e92080;
              uStack_2b8 = 0x6c5d863c;
              pcStack_2c0 = (code *)&UNK_05e921a0;
              cStack_2b4 = '\x01';
              ppppppplVar24 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
              if (ppppppplVar24 == (long *******)0x0) {
                func_0x0eec74c0(0xb0,0);
              }
              ppppppplVar24[2] = pppppplStack_158;
              *ppppppplVar24 = (long ******)ppppppplStack_168;
              ppppppplVar24[1] = pppppplStack_160;
              ppppppplStack_168 = (long *******)0x0;
              pppppplStack_160 = (long ******)0x0;
              pppppplStack_158 = (long ******)0x0;
              ppppppplVar24[5] = pppppplStack_140;
              ppppppplVar24[3] = pppppplStack_150;
              ppppppplVar24[4] = uStack_148;
              pppppplStack_150 = (long ******)0x0;
              uStack_148 = (long ******)0x0;
              pppppplStack_140 = (long ******)0x0;
              *(char *)(ppppppplVar24 + 6) = '\0';
              *(char *)(ppppppplVar24 + 9) = '\0';
              if ((char)pppppplStack_120 == '\x01') {
                ppppppplVar24[8] = pppppplStack_128;
                ppppppplVar24[6] = pppppplStack_138;
                ppppppplVar24[7] = pppppplStack_130;
                pppppplStack_138 = (long ******)0x0;
                pppppplStack_130 = (long ******)0x0;
                pppppplStack_128 = (long ******)0x0;
                *(char *)(ppppppplVar24 + 9) = '\x01';
              }
              *(char *)(ppppppplVar24 + 10) = '\0';
              *(char *)(ppppppplVar24 + 0xd) = '\0';
              if (acStack_100[0] == '\x01') {
                ppppppplVar24[0xc] = pppppplStack_108;
                ppppppplVar24[10] = pppppplStack_118;
                ppppppplVar24[0xb] = pppppplStack_110;
                pppppplStack_118 = (long ******)0x0;
                pppppplStack_110 = (long ******)0x0;
                pppppplStack_108 = (long ******)0x0;
                *(char *)(ppppppplVar24 + 0xd) = '\x01';
              }
              ppppppplVar24[0xe] = pppppplStack_f8;
              ppppppplVar24[0xf] = pppppplStack_f0;
              ppppppplVar24[0x10] = pppppplStack_e8;
              pppppplStack_f8 = (long ******)0x0;
              pppppplStack_f0 = (long ******)0x0;
              pppppplStack_e8 = (long ******)0x0;
              *(char *)(ppppppplVar24 + 0x11) = '\0';
              *(char *)(ppppppplVar24 + 0x14) = '\0';
              if (bStack_c8 == 1) {
                ppppppplVar24[0x13] = pppppplStack_d0;
                ppppppplVar24[0x11] = pppppplStack_e0;
                ppppppplVar24[0x12] = pppppplStack_d8;
                pppppplStack_e0 = (long ******)0x0;
                pppppplStack_d8 = (long ******)0x0;
                pppppplStack_d0 = (long ******)0x0;
                *(char *)(ppppppplVar24 + 0x14) = '\x01';
              }
              *(char *)(ppppppplVar24 + 0x15) = cStack_c0;
              pppppplStack_2b0 = pppppplVar17;
              pppppplStack_2a8 = (long ******)0x0;
              pppppplStack_2a0 = (long ******)&UNK_05e92060;
              ppppppplStack_2d8 = ppppppplVar24;
              if ((((bStack_c8 & 1) != 0) && (((ulong)pppppplStack_e0 & 1) != 0)) &&
                 (func_0x0412a280(pppppplStack_d0,(ulong)pppppplStack_e0 & 0xfffffffffffffffe),
                 pppppplVar42 = pppppplStack_f8, pppppplVar17 = pppppplStack_f0,
                 pppppplStack_f8 != (long ******)0x0)) {
                for (; pppppplVar42 != pppppplVar17; pppppplVar17 = pppppplVar17 + -7) {
                  if (((ulong)pppppplVar17[-4] & 1) == 0) {
                    bVar33 = *(byte *)(pppppplVar17 + -7);
                  }
                  else {
                    func_0x0412a280(pppppplVar17[-2],(ulong)pppppplVar17[-4] & 0xfffffffffffffffe);
                    bVar33 = *(byte *)(pppppplVar17 + -7);
                  }
                  if ((bVar33 & 1) != 0) {
                    func_0x0412a280(pppppplVar17[-5],(ulong)pppppplVar17[-7] & 0xfffffffffffffffe);
                  }
                }
                pppppplStack_f0 = pppppplVar42;
                func_0x0412a280(pppppplStack_f8,(long)pppppplStack_e8 - (long)pppppplStack_f8);
              }
              if ((acStack_100[0] == '\x01') && (((ulong)pppppplStack_118 & 1) != 0)) {
                func_0x0412a280(pppppplStack_108,(ulong)pppppplStack_118 & 0xfffffffffffffffe);
              }
              if (((char)pppppplStack_120 == '\x01') && (((ulong)pppppplStack_138 & 1) != 0)) {
                func_0x0412a280(pppppplStack_128,(ulong)pppppplStack_138 & 0xfffffffffffffffe);
              }
              if (((ulong)pppppplStack_150 & 1) != 0) {
                func_0x0412a280(pppppplStack_140,(ulong)pppppplStack_150 & 0xfffffffffffffffe);
              }
              if (((ulong)ppppppplStack_168 & 1) != 0) {
                func_0x0412a280(pppppplStack_158,(ulong)ppppppplStack_168 & 0xfffffffffffffffe);
              }
              func_0x0412a280(puVar21,0x30);
              pcVar7 = (code *)CONCAT44(uStack_224,uStack_228);
              pbVar38 = pbStack_280;
            }
            else {
LAB_09b0aee6:
              ppppppplVar24 = ppppppplStack_240;
              ppppppplStack_2d8 = (long *******)0x0;
              pcStack_2c0 = (code *)CONCAT44(uStack_224,uStack_228);
              pppppplStack_2c8 = pppppplStack_230;
              uStack_2b8 = uStack_220;
              cStack_2b4 = cStack_21c;
              if (cStack_21c != '\0') {
                if (cStack_21c == '\x02') {
                  (*(code *)pppppplStack_230)(5,&ppppppplStack_240,&ppppppplStack_2d8);
                }
                else {
                  ppppppplStack_240 = (long *******)0x0;
                  ppppppplStack_2d8 = ppppppplVar24;
                }
              }
              pppppplStack_2a0 = pppppplStack_208;
              pppppplStack_2a8 = pppppplStack_210;
              pppppplStack_210 = (long ******)0x0;
              pppppplStack_208 = (long ******)0x0;
              pcVar7 = (code *)CONCAT44(uStack_224,uStack_228);
              pppppplStack_2b0 = pppppplStack_218;
            }
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(&ppppppplStack_240);
            }
            if (pcStack_1c0 != (code *)0x0) {
              (*pcStack_1c0)(&ppppppplStack_1d8);
            }
            lVar22 = func_0x0417cc60();
            lVar22 = (lVar22 - (long)ppppppplStack_260) / 1000;
            pbStack_258 = pbStack_258 + lVar22;
            uStack_2e8 = uStack_2e8 + lVar22;
            uVar11 = uVar11 + 1;
            uVar26 = ((*(int *)(lVar48 + 0x68) + 1U) / 0x14) * -0x14 + *(int *)(lVar48 + 0x68) + 1;
            lVar23 = (*(long *)(lVar48 + 0x78) - *(long *)(lVar48 + 0x80 + (ulong)uVar26 * 8)) +
                     lVar22 * 1000;
            *(long *)(lVar48 + 0x78) = lVar23;
            *(long *)(lVar48 + 0x80 + (ulong)uVar26 * 8) = lVar22 * 1000;
            *(uint *)(lVar48 + 0x68) = uVar26;
            *(long *)(lVar48 + 0x70) = lVar23 / 0x14;
            if (cStack_2e0 == '\0') {
              pppppplStack_230 = (long ******)0x0;
              ppppppplVar24 = (long *******)&ppppppplStack_2d8;
              if (cStack_2b4 != '\x02') {
                ppppppplVar24 = ppppppplStack_2d8;
              }
              pppppplStack_238 = pppppplStack_2c8;
              cVar4 = (cStack_2b4 != '\0') * '\x03';
              if (cStack_2b4 == '\x04') {
                cVar4 = '\x04';
              }
              uStack_228 = uStack_2b8;
              uStack_224 = CONCAT31(uStack_224._1_3_,cVar4);
              ppppppplStack_168 = (long *******)0x0;
              pppppplStack_158 = pppppplStack_2c8;
              pppppplStack_150 = (long ******)0x0;
              uStack_148._0_5_ = CONCAT14(cVar4,uStack_2b8);
              ppppppplStack_248 = ppppppplVar24;
              if (cVar4 != '\0') {
                if (cVar4 == '\x02') {
                  (*(code *)pppppplStack_2c8)(5,&ppppppplStack_248,&ppppppplStack_168);
                }
                else {
                  ppppppplStack_248 = (long *******)0x0;
                  ppppppplStack_168 = ppppppplVar24;
                }
              }
              pppppplStack_140 = pppppplStack_2b0;
              pppppplStack_138 = pppppplStack_2a8;
              pppppplStack_130 = pppppplStack_2a0;
              if (pppppplStack_230 != (long ******)0x0) {
                (*(code *)pppppplStack_230)(&ppppppplStack_248);
              }
              pppppplVar17 = pppppplStack_140;
              ppppppplVar24 = ppppppplStack_168;
              if (uStack_148._4_1_ == '\x02') {
                ppppppplVar24 = (long *******)&ppppppplStack_168;
              }
              if (ppppppplVar24 == (long *******)0x0 || (int)uStack_148 != 0xac4c251) {
                if (pppppplStack_138 == (long ******)0x0) {
                  (*(code *)pppppplStack_130)(0,&ppppppplStack_168,0);
                }
                ppppppplVar24 = ppppppplStack_168;
                if (uStack_148._4_1_ == '\x02') {
                  ppppppplVar24 = (long *******)&ppppppplStack_168;
                }
                ppppppplVar24 =
                     (long *******)
                     FUN_0488e200(pppppplVar17,pppppplStack_138,&UNK_0ac4c251,ppppppplVar24);
              }
              if (pppppplStack_150 != (long ******)0x0) {
                (*(code *)pppppplStack_150)(&ppppppplStack_168);
              }
              pbVar43 = pbStack_278;
              if ((*(char *)ppppppplVar24 != '\0') || (*(char *)(lVar48 + 0x120) != '\0'))
              goto LAB_09b0bfb0;
              if (pcStack_2c0 != (code *)0x0) {
                (*pcStack_2c0)(&ppppppplStack_2d8);
              }
              if ((pbVar38 < pbStack_258) || ((uint)pbVar43 <= uVar11)) goto LAB_09b0bfc7;
              goto LAB_09b0aca0;
            }
LAB_09b0bfb0:
            *(undefined1 *)(lVar48 + 0x120) = 1;
            if (pcStack_2c0 != (code *)0x0) {
              (*pcStack_2c0)(&ppppppplStack_2d8);
            }
LAB_09b0bfc7:
            bVar33 = 1;
            if (plStack_288 != (long *)0x0) {
              (**(code **)(*plStack_288 + 0x28))
                        (plStack_288,*(undefined1 *)(puStack_290 + 2),iStack_1dc,uVar11,uStack_188,
                         pbVar38,pbStack_258);
            }
            uVar35 = 1;
            lVar22 = lStack_190;
            uVar27 = uStack_250;
          }
          lVar48 = lVar48 + 0x128;
        } while (lVar48 != lVar22);
        plVar19 = plStack_288;
      } while ((bool)(bVar33 & uStack_2e8 < uVar27));
    }
    if (uVar35 == 0) {
      return;
    }
    lVar48 = func_0x0417cc60();
    uVar35 = 1;
    if (lStack_40 <= lVar48) {
      return;
    }
  } while( true );
LAB_09b0996f:
  pppppplVar17 = ppppppplVar16[4];
  if (pppppplVar17 < ppppppplVar16[5]) {
    *pppppplVar17 = *(long ******)pbVar38;
    pppppplVar17[2] = *(long ******)(pbVar38 + 0x10);
    *(byte *)(pppppplVar17 + 3) = pbVar38[0x18];
    pppppplVar17[4] = *(long ******)(pbVar38 + 0x20);
    *(undefined4 *)(pppppplVar17 + 5) = *(undefined4 *)(pbVar38 + 0x28);
    pbVar38[0x20] = 0;
    pbVar38[0x21] = 0;
    pbVar38[0x22] = 0;
    pbVar38[0x23] = 0;
    pbVar38[0x24] = 0;
    pbVar38[0x25] = 0;
    pbVar38[0x26] = 0;
    pbVar38[0x27] = 0;
    pbVar38[0x28] = 0;
    pbVar38[0x29] = 0;
    pbVar38[0x2a] = 0;
    pbVar38[0x2b] = 0;
    pbVar38[0x10] = 0;
    pbVar38[0x11] = 0;
    pbVar38[0x12] = 0;
    pbVar38[0x13] = 0;
    pbVar38[0x14] = 0;
    pbVar38[0x15] = 0;
    pbVar38[0x16] = 0;
    pbVar38[0x17] = 0;
    pbVar38[0x18] = 0;
    pppppplVar17[1] = (long *****)&UNK_0f1a4bd8;
    *(undefined1 *)(pppppplVar17 + 6) = 0;
    *(undefined1 *)(pppppplVar17 + 10) = 0;
    if (pbVar38[0x50] == 1) {
      pppppplVar17[6] = *(long ******)(pbVar38 + 0x30);
      *(undefined4 *)(pppppplVar17 + 7) = *(undefined4 *)(pbVar38 + 0x38);
      ppppplVar36 = *(long ******)(pbVar38 + 0x48);
      pppppplVar17[8] = *(long ******)(pbVar38 + 0x40);
      pppppplVar17[9] = ppppplVar36;
      pbVar38[0x30] = 0;
      pbVar38[0x31] = 0;
      pbVar38[0x32] = 0;
      pbVar38[0x33] = 0;
      pbVar38[0x34] = 0;
      pbVar38[0x35] = 0;
      pbVar38[0x36] = 0;
      pbVar38[0x37] = 0;
      pbVar38[0x38] = 0;
      pbVar38[0x39] = 0;
      pbVar38[0x3a] = 0;
      pbVar38[0x3b] = 0;
      pbVar38[0x40] = 0xff;
      pbVar38[0x41] = 0xff;
      pbVar38[0x42] = 0xff;
      pbVar38[0x43] = 0xff;
      pbVar38[0x44] = 0xff;
      pbVar38[0x45] = 0xff;
      pbVar38[0x46] = 0xff;
      pbVar38[0x47] = 0;
      pbVar38[0x48] = 0;
      *(undefined1 *)(pppppplVar17 + 10) = 1;
    }
    pppppplVar17[1] = (long *****)&UNK_0f1a4b88;
    ppppplVar36 = *(long ******)(pbVar38 + 0x60);
    pppppplVar17[0xb] = *(long ******)(pbVar38 + 0x58);
    pppppplVar17[0xc] = ppppplVar36;
    memcpy(pppppplVar17 + 0xd,pbVar38 + 0x68,0xba);
    unaff_R15 = (long *******)(pppppplVar17 + 0x25);
    goto LAB_09b08f33;
  }
  ppppppplVar30 = (long *******)((long)pppppplVar17 - (long)ppppppplVar16[3]);
  ppppppplVar15 = (long *******)(((long)ppppppplVar30 >> 3) * 0x14c1bacf914c1bad + 1);
  if ((long *******)0xdd67c8a60dd67c < ppppppplVar15) {
LAB_09b0c059:
    func_0x09b22c10();
LAB_09b0c05e:
    uVar25 = func_0x04882eb0();
    uVar25 = func_0x04882e20(uVar25);
    uVar25 = func_0x04882e20(uVar25);
    if (*(char *)(ppppppplVar16 + 10) == '\x01') {
      func_0x0d85dec0(unaff_R15);
    }
    ppppppplVar16[1] = (long ******)&UNK_0f486ba0;
    func_0x09b22c20(&ppppppplStack_248);
    ppppppplStack_1d0 = ppppppplVar16;
    func_0x09b22cd0(&ppppppplStack_1d8,0);
    func_0x09b0c4c0(&ppppppplStack_168);
    uVar25 = _Unwind_Resume(uVar25);
    uVar25 = func_0x04882e20(uVar25);
    uVar25 = func_0x04882e20(uVar25);
    uVar25 = func_0x04882e20(uVar25);
    uVar25 = func_0x04882e20(uVar25);
    uVar25 = func_0x04882e20(uVar25);
    plVar19 = (long *)func_0x04882e20(uVar25);
    ppppppplStack_168 = ppppppplVar16;
    func_0x048b0f50(&ppppppplStack_168);
    pppppplVar17 = *unaff_R15;
    if (pppppplVar17 != (long ******)0x0) {
      ppppppplVar30[4] = pppppplVar17;
      func_0x0412a280(pppppplVar17,(long)ppppppplVar30[5] - (long)pppppplVar17);
    }
    func_0x0412c1f0(ppppppplVar30);
    func_0x0412a280(ppppppplVar30,0x50);
    uVar25 = func_0x04882e20(plVar19);
    uVar25 = func_0x04882e20(uVar25);
    uVar25 = func_0x04882e20(uVar25);
    ppppppplStack_168 = ppppppplVar30;
    func_0x048b0f50(&ppppppplStack_168);
    pppppplVar17 = *unaff_R15;
    if (pppppplVar17 != (long ******)0x0) {
      plVar19[4] = (long)pppppplVar17;
      func_0x0412a280(pppppplVar17,plVar19[5] - (long)pppppplVar17);
    }
    func_0x0412c1f0(plVar19);
    func_0x0412a280(plVar19,0x50);
    uVar25 = func_0x04882e20(uVar25);
    uStack_200 = ppppppplVar16;
    func_0x048b0f50(&uStack_200);
    pppppplVar17 = (long ******)*plVar19;
    if (pppppplVar17 != (long ******)0x0) {
      ppppppplVar15[4] = pppppplVar17;
      func_0x0412a280(pppppplVar17,(long)ppppppplVar15[5] - (long)pppppplVar17);
    }
    func_0x0412c1f0(ppppppplVar15);
    func_0x0412a280(ppppppplVar15,0x50);
    func_0x048fb670(&ppppppplStack_168);
    func_0x0412a280(ppppppplVar30,0x30);
    if ((code *)CONCAT44(uStack_224,uStack_228) != (code *)0x0) {
      (*(code *)CONCAT44(uStack_224,uStack_228))(&ppppppplStack_240);
    }
    if (pcStack_1c0 != (code *)0x0) goto LAB_09b0c3d9;
    do {
      do {
        uVar25 = _Unwind_Resume(uVar25);
        uVar25 = func_0x04882e20(uVar25);
        uVar25 = func_0x04882e20(uVar25);
        uVar25 = func_0x04882e20(uVar25);
        uVar25 = func_0x04882e20(uVar25);
        uVar25 = func_0x04882e20(uVar25);
        uVar25 = func_0x04882e20(uVar25);
      } while (pcStack_1c0 == (code *)0x0);
LAB_09b0c3d9:
      (*pcStack_1c0)(&ppppppplStack_1d8);
    } while( true );
  }
  lVar48 = (long)ppppppplVar16[5] - (long)ppppppplVar16[3] >> 3;
  ppppppplVar14 = (long *******)(lVar48 * 0x2983759f2298375a);
  if (ppppppplVar15 < ppppppplVar14) {
    ppppppplVar15 = ppppppplVar14;
  }
  if (0x6eb3e45306eb3d < (ulong)(lVar48 * 0x14c1bacf914c1bad)) {
    ppppppplVar15 = (long *******)0xdd67c8a60dd67c;
  }
  if (ppppppplVar15 == (long *******)0x0) {
LAB_09b09e8f:
    uVar35 = 0;
  }
  else {
    if ((long *******)0xdd67c8a60dd67c < ppppppplVar15) goto LAB_09b0c05e;
    uVar35 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)ppppppplVar15 * 0x128);
    if (uVar35 == 0) {
      func_0x0eec74c0((long)ppppppplVar15 * 0x128,0);
      goto LAB_09b09e8f;
    }
  }
  ppppppplVar14 = (long *******)(uVar35 + (long)ppppppplVar30);
  *(undefined8 *)(uVar35 + (long)ppppppplVar30) = *(undefined8 *)pbVar38;
  *(undefined8 *)(uVar35 + 0x10 + (long)ppppppplVar30) = *(undefined8 *)(pbVar38 + 0x10);
  *(byte *)(uVar35 + 0x18 + (long)ppppppplVar30) = pbVar38[0x18];
  *(undefined8 *)(uVar35 + 0x20 + (long)ppppppplVar30) = *(undefined8 *)(pbVar38 + 0x20);
  *(undefined4 *)(uVar35 + 0x28 + (long)ppppppplVar30) = *(undefined4 *)(pbVar38 + 0x28);
  pbVar38[0x20] = 0;
  pbVar38[0x21] = 0;
  pbVar38[0x22] = 0;
  pbVar38[0x23] = 0;
  pbVar38[0x24] = 0;
  pbVar38[0x25] = 0;
  pbVar38[0x26] = 0;
  pbVar38[0x27] = 0;
  pbVar38[0x28] = 0;
  pbVar38[0x29] = 0;
  pbVar38[0x2a] = 0;
  pbVar38[0x2b] = 0;
  pbVar38[0x10] = 0;
  pbVar38[0x11] = 0;
  pbVar38[0x12] = 0;
  pbVar38[0x13] = 0;
  pbVar38[0x14] = 0;
  pbVar38[0x15] = 0;
  pbVar38[0x16] = 0;
  pbVar38[0x17] = 0;
  pbVar38[0x18] = 0;
  *(undefined **)(uVar35 + 8 + (long)ppppppplVar30) = &UNK_0f1a4bd8;
  *(char *)(uVar35 + 0x30 + (long)ppppppplVar30) = '\0';
  *(char *)(uVar35 + 0x50 + (long)ppppppplVar30) = '\0';
  if (pbVar38[0x50] == 1) {
    ppppppplVar14[6] = *(long *******)(pbVar38 + 0x30);
    *(undefined4 *)(ppppppplVar14 + 7) = *(undefined4 *)(pbVar38 + 0x38);
    pppppplVar17 = *(long *******)(pbVar38 + 0x48);
    ppppppplVar14[8] = *(long *******)(pbVar38 + 0x40);
    ppppppplVar14[9] = pppppplVar17;
    pbVar38[0x30] = 0;
    pbVar38[0x31] = 0;
    pbVar38[0x32] = 0;
    pbVar38[0x33] = 0;
    pbVar38[0x34] = 0;
    pbVar38[0x35] = 0;
    pbVar38[0x36] = 0;
    pbVar38[0x37] = 0;
    pbVar38[0x38] = 0;
    pbVar38[0x39] = 0;
    pbVar38[0x3a] = 0;
    pbVar38[0x3b] = 0;
    pbVar38[0x40] = 0xff;
    pbVar38[0x41] = 0xff;
    pbVar38[0x42] = 0xff;
    pbVar38[0x43] = 0xff;
    pbVar38[0x44] = 0xff;
    pbVar38[0x45] = 0xff;
    pbVar38[0x46] = 0xff;
    pbVar38[0x47] = 0;
    pbVar38[0x48] = 0;
    *(char *)(ppppppplVar14 + 10) = '\x01';
  }
  ppppppplVar14[1] = (long ******)&UNK_0f1a4b88;
  pppppplVar17 = *(long *******)(pbVar38 + 0x60);
  ppppppplVar14[0xb] = *(long *******)(pbVar38 + 0x58);
  ppppppplVar14[0xc] = pppppplVar17;
  uStack_268 = uVar35;
  memcpy(ppppppplVar14 + 0xd,pbVar38 + 0x68,0xba);
  pppppplVar42 = ppppppplVar16[3];
  pppppplVar47 = ppppppplVar16[4];
  pppppplVar17 = (long ******)((long)ppppppplVar14 + ((long)pppppplVar42 - (long)pppppplVar47));
  ppppppplStack_260 = ppppppplVar14;
  if ((long)pppppplVar42 - (long)pppppplVar47 != 0) {
    lVar48 = 0x48;
    ppppppplStack_270 = ppppppplVar15;
    do {
      *(undefined8 *)((long)pppppplVar17 + lVar48 + -0x48) =
           *(undefined8 *)((long)pppppplVar42 + lVar48 + -0x48);
      *(undefined8 *)((long)pppppplVar17 + lVar48 + -0x38) =
           *(undefined8 *)((long)pppppplVar42 + lVar48 + -0x38);
      *(char *)((long)pppppplVar17 + lVar48 + -0x30) =
           *(char *)((long)pppppplVar42 + lVar48 + -0x30);
      *(undefined8 *)((long)pppppplVar17 + lVar48 + -0x28) =
           *(undefined8 *)((long)pppppplVar42 + lVar48 + -0x28);
      *(undefined4 *)((long)pppppplVar17 + lVar48 + -0x20) =
           *(undefined4 *)((long)pppppplVar42 + lVar48 + -0x20);
      *(undefined8 *)((long)pppppplVar42 + lVar48 + -0x28) = 0;
      *(undefined4 *)((long)pppppplVar42 + lVar48 + -0x20) = 0;
      *(undefined8 *)((long)pppppplVar42 + lVar48 + -0x38) = 0;
      *(undefined1 *)((long)pppppplVar42 + lVar48 + -0x30) = 0;
      *(undefined **)((long)pppppplVar17 + lVar48 + -0x40) = &UNK_0f1a4bd8;
      *(char *)((long)pppppplVar17 + lVar48 + -0x18) = '\0';
      *(char *)((long)pppppplVar17 + lVar48 + 8) = '\0';
      if (*(char *)((long)pppppplVar42 + lVar48 + 8) == '\x01') {
        *(undefined8 *)((long)pppppplVar17 + lVar48 + -0x18) =
             *(undefined8 *)((long)pppppplVar42 + lVar48 + -0x18);
        *(undefined4 *)((long)pppppplVar17 + lVar48 + -0x10) =
             *(undefined4 *)((long)pppppplVar42 + lVar48 + -0x10);
        puVar21 = (undefined8 *)((long)pppppplVar42 + lVar48 + -8);
        uVar25 = puVar21[1];
        pcVar1 = (char *)((long)pppppplVar17 + lVar48 + -8);
        *(undefined8 *)pcVar1 = *puVar21;
        *(undefined8 *)(pcVar1 + 8) = uVar25;
        *(undefined8 *)((long)pppppplVar42 + lVar48 + -0x18) = 0;
        *(undefined4 *)((long)pppppplVar42 + lVar48 + -0x10) = 0;
        *(undefined8 *)((long)pppppplVar42 + lVar48 + -8) = 0xffffffffffffff;
        *(undefined1 *)((long)pppppplVar42 + lVar48) = 0;
        *(char *)((long)pppppplVar17 + lVar48 + 8) = '\x01';
      }
      *(undefined **)((long)pppppplVar17 + lVar48 + -0x40) = &UNK_0f1a4b88;
      uVar25 = *(undefined8 *)((long)pppppplVar42 + lVar48 + 0x18);
      pcVar1 = (char *)((long)pppppplVar17 + lVar48 + 0x10);
      *(undefined8 *)pcVar1 = *(undefined8 *)((long)pppppplVar42 + lVar48 + 0x10);
      *(undefined8 *)(pcVar1 + 8) = uVar25;
      memcpy((char *)((long)pppppplVar17 + lVar48 + 0x20),(long)pppppplVar42 + lVar48 + 0x20,0xba);
      ppppppplVar15 = ppppppplStack_270;
      lVar22 = lVar48 + 0xe0;
      lVar48 = lVar48 + 0x128;
    } while ((long ******)((long)pppppplVar42 + lVar22) != pppppplVar47);
    do {
      pppppplVar42[1] = (long *****)&UNK_0f1a4bd8;
      if (((*(char *)(pppppplVar42 + 10) == '\x01') &&
          (ppppplVar36 = pppppplVar42[6], ppppplVar36 != (long *****)0x0)) &&
         (*ppppplVar36 != (long ****)0x0 && *(int *)(ppppplVar36 + 1) == *(int *)(pppppplVar42 + 7))
         ) {
        func_0x0d8569b0(*ppppplVar36,pppppplVar42[8],*(undefined4 *)(pppppplVar42 + 9));
      }
      pppppplVar42[1] = (long *****)&UNK_0f486ba0;
      pppppplVar42 = pppppplVar42 + 0x25;
    } while (pppppplVar42 != pppppplVar47);
    pppppplVar42 = ppppppplVar16[3];
  }
  unaff_R15 = ppppppplStack_260 + 0x25;
  ppppppplVar16[3] = pppppplVar17;
  ppppppplVar16[4] = (long ******)unaff_R15;
  pppppplVar17 = ppppppplVar16[5];
  ppppppplVar16[5] = (long ******)(uStack_268 + (long)ppppppplVar15 * 0x128);
  if (pppppplVar42 != (long ******)0x0) {
    func_0x0412a280(pppppplVar42,(long)pppppplVar17 - (long)pppppplVar42);
  }
LAB_09b08f33:
  ppppppplVar16[4] = (long ******)unaff_R15;
  pbVar43 = pbStack_278;
LAB_09b08f40:
  pbVar38 = pbStack_258 + 0x128;
  if (pbVar38 == pbVar43) goto LAB_09b0a25b;
  goto LAB_09b08f58;
LAB_09b0a25b:
  pbVar38 = *(byte **)(param_1 + 8);
  pbVar43 = *(byte **)(param_1 + 0x10);
  param_2 = uStack_298;
  goto joined_r0x09b0a26b;
code_r0x09b0a3aa:
  puVar21 = (undefined8 *)*puVar21;
  goto joined_r0x09b0a35e;
}



/* ---- referenced strings ----
 * 0x13f776f  Error
 * 0x14676cb  ResultAny is not same type as Result<T>!
 * 0x14676db   same type as Result<T>!
 */
