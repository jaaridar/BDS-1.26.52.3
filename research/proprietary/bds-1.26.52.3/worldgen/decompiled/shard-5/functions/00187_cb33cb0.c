/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc33cb0 (ELF vaddr 0xcb33cb0)
 * Label: caller-of-callee
 * Body:  [[0cc33cb0, 0cc3409a] [0cc340a0, 0cc3427c] [0cc34280, 0cc343e6] [0cc343f0, 0cc345b8] [0cc345c0, 0cc34627] [0cc34630, 0cc3466a] [0cc34670, 0cc3477a] [0cc34780, 0cc34859] [0cc34860, 0cc348f8] [0cc34900, 0cc34dae] [0cc34db0, 0cc34dfb] [0cc34e00, 0cc34ea0] [0cc34eb0, 0cc35014] [0cc35020, 0cc350e9] [0cc350f0, 0cc351db] [0cc351e0, 0cc35324] [0cc35330, 0cc3541a] [0cc35420, 0cc35442] [0cc35450, 0cc35713] [0cc35720, 0cc357a8] [0cc357b0, 0cc357ea] [0cc357f0, 0cc3585d] [0cc35860, 0cc35879] [0cc35880, 0cc358ac] [0cc358b0, 0cc35919] [0cc35920, 0cc35a7d] [0cc35a80, 0cc35ac5] [0cc35ad0, 0cc35af7] [0cc35b00, 0cc35cb8] [0cc35cc0, 0cc35d3a] [0cc35d40, 0cc35e0c] [0cc35e10, 0cc35f4d]]
 * Ghidra: FUN_0cc33cb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ******* FUN_0cc33cb0(ulong *******param_1,ulong *******param_2)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  char cVar10;
  undefined2 uVar11;
  int iVar12;
  ulong *******pppppppuVar13;
  ulong *****pppppuVar14;
  ulong *******pppppppuVar15;
  long lVar16;
  ulong ******ppppppuVar17;
  ulong ******ppppppuVar18;
  ulong ******ppppppuVar19;
  ulong ******ppppppuVar20;
  byte bVar21;
  undefined4 uVar22;
  ulong uVar23;
  ulong *******pppppppuVar24;
  ulong *****pppppuVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  ulong *****pppppuVar29;
  ulong uVar30;
  ulong *******pppppppuVar31;
  long lVar32;
  ulong *******pppppppuVar33;
  ulong ***pppuVar34;
  ulong ******ppppppuVar35;
  ulong *******pppppppuVar36;
  ulong *******pppppppuVar37;
  ulong *******pppppppuVar38;
  ulong ****ppppuVar39;
  ulong *******unaff_R14;
  ulong uVar40;
  ulong ****ppppuVar41;
  bool bVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  ulong ******ppppppuStack_248;
  ulong *******pppppppuStack_238;
  ulong *******pppppppuStack_230;
  ulong *******pppppppuStack_228;
  ulong *******pppppppuStack_218;
  ulong *******pppppppuStack_210;
  ulong *******pppppppuStack_208;
  ulong *******pppppppuStack_200;
  ulong *******pppppppuStack_1f8;
  ulong ******ppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  ulong ******ppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  ulong *******pppppppuStack_1d0;
  ulong *******pppppppuStack_1c8;
  ulong *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1a0;
  undefined4 *puStack_198;
  undefined4 *puStack_190;
  undefined4 *puStack_188;
  ulong *******pppppppuStack_178;
  ulong *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  ulong *****pppppuStack_140;
  ulong *****pppppuStack_138;
  ulong *****pppppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint uStack_100;
  ulong *****pppppuStack_f8;
  ulong *****pppppuStack_f0;
  ulong *****pppppuStack_e8;
  ulong *****pppppuStack_e0;
  ulong *****pppppuStack_d8;
  ulong *****pppppuStack_d0;
  byte bStack_c0;
  undefined7 uStack_bf;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  undefined *puStack_a8;
  ulong *******pppppppuStack_a0;
  undefined **ppuStack_88;
  ulong *******pppppppuStack_70;
  ulong *******pppppppuStack_68;
  ulong *******pppppppuStack_60;
  ulong uStack_58;
  ulong ******ppppppuStack_50;
  ulong *******pppppppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  *param_1 = (ulong ******)0x0;
  param_1[1] = (ulong ******)0x0;
  param_1[2] = (ulong ******)0x0;
  *(byte *)(param_1 + 3) = 5;
  *(byte *)(param_1 + 4) = 0;
  *(byte *)(param_1 + 7) = 0;
  *(byte *)(param_1 + 8) = 0;
  param_1[9] = (ulong ******)0x0;
  param_1[10] = (ulong ******)0x0;
  param_1[0xb] = (ulong ******)0x0;
  param_1[0xc] = (ulong ******)0x0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xe] = (ulong ******)0x0;
  param_1[0xf] = (ulong ******)0x0;
  param_1[0x10] = (ulong ******)0x0;
  param_1[0x11] = (ulong ******)0x0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x13] = (ulong ******)0x0;
  param_1[0x14] = (ulong ******)0x0;
  param_1[0x15] = (ulong ******)0x0;
  param_1[0x16] = (ulong ******)0x0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x18] = (ulong ******)0x0;
  param_1[0x19] = (ulong ******)0x0;
  param_1[0x1a] = (ulong ******)0x0;
  param_1[0x1b] = (ulong ******)0x0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(byte *)((long)param_1 + 0xea) = 0;
  *(byte *)(param_1 + 0x1e) = 0;
  *(byte *)(param_1 + 0x1f) = 0;
  *(byte *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(byte *)(param_1 + 0x26) = 0;
  *(byte *)(param_1 + 0x2f) = 0;
  param_1[0x3a] = (ulong ******)0x0;
  param_1[0x3b] = (ulong ******)0x0;
  param_1[0x38] = (ulong ******)0x0;
  param_1[0x39] = (ulong ******)0x0;
  param_1[0x36] = (ulong ******)0x0;
  param_1[0x37] = (ulong ******)0x0;
  param_1[0x34] = (ulong ******)0x0;
  param_1[0x35] = (ulong ******)0x0;
  param_1[0x32] = (ulong ******)0x0;
  param_1[0x33] = (ulong ******)0x0;
  param_1[0x30] = (ulong ******)0x0;
  param_1[0x31] = (ulong ******)0x0;
  param_1[0x3c] = (ulong ******)0x0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  param_1[0x3e] = (ulong ******)0x0;
  param_1[0x3f] = (ulong ******)0x0;
  param_1[0x40] = (ulong ******)0x0;
  pppppppuVar13 = param_2 + 10;
  if (param_1 != pppppppuVar13) {
    if (((ulong)*pppppppuVar13 & 1) == 0) {
      param_1[2] = param_2[0xc];
      uVar22 = *(undefined4 *)((long)param_2 + 0x54);
      uVar5 = *(undefined4 *)(param_2 + 0xb);
      uVar6 = *(undefined4 *)((long)param_2 + 0x5c);
      *(undefined4 *)param_1 = *(undefined4 *)pppppppuVar13;
      *(undefined4 *)((long)param_1 + 4) = uVar22;
      *(undefined4 *)(param_1 + 1) = uVar5;
      *(undefined4 *)((long)param_1 + 0xc) = uVar6;
    }
    else {
      func_0x04885070(param_1,param_2[0xc],param_2[0xb]);
      unaff_R14 = param_2;
    }
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_2 + 0x1c);
  if ((*(byte *)(param_2 + 0x19) & 1) == 0) {
    if (*(byte *)(param_2 + 0x19) >> 1 == 0) goto LAB_0cc33eae;
  }
  else if (param_2[0x1a] == (ulong ******)0x0) goto LAB_0cc33eae;
  unaff_R14 = param_1 + 4;
  pppppppuVar13 = param_2 + 0x19;
  if (*(byte *)(param_1 + 7) == 1) {
    if (((ulong)*unaff_R14 & 1) != 0) {
      func_0x0412a280(param_1[6],(ulong)param_1[4] & 0xfffffffffffffffe);
    }
    param_1[6] = param_2[0x1b];
    uVar22 = *(undefined4 *)((long)param_2 + 0xcc);
    uVar5 = *(undefined4 *)(param_2 + 0x1a);
    uVar6 = *(undefined4 *)((long)param_2 + 0xd4);
    *(undefined4 *)unaff_R14 = *(undefined4 *)pppppppuVar13;
    *(undefined4 *)((long)param_1 + 0x24) = uVar22;
    *(undefined4 *)(param_1 + 5) = uVar5;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar6;
    *(undefined2 *)(param_2 + 0x19) = 0;
  }
  else {
    param_1[6] = param_2[0x1b];
    ppppppuVar17 = param_2[0x1a];
    *unaff_R14 = *pppppppuVar13;
    param_1[5] = ppppppuVar17;
    *pppppppuVar13 = (ulong ******)0x0;
    param_2[0x1a] = (ulong ******)0x0;
    param_2[0x1b] = (ulong ******)0x0;
    *(byte *)(param_1 + 7) = 1;
  }
LAB_0cc33eae:
  *(byte *)(param_1 + 8) = *(byte *)((long)param_2 + 0xe1);
  ppppppuVar17 = param_2[0x16];
  ppppppuStack_50 = param_2[0x17];
  if (ppppppuVar17 != ppppppuStack_50) {
    pppppppuStack_70 = param_1 + 9;
    pppppppuStack_60 = param_1 + 0xe;
    pppppppuStack_68 = param_1 + 0x13;
    pppppppuStack_48 = (ulong *******)0x7fffffffffffffff;
    uStack_58 = 0x3fffffffffffffc0;
    do {
      ppppppuStack_248 = (ulong ******)ppppppuVar17[4];
      if (ppppppuStack_248 != (ulong ******)0x0) {
        cVar10 = *(char *)(ppppppuVar17 + 3);
        ppppppuStack_1f0 = ppppppuVar17;
        if (cVar10 == '\x01') {
          pppppppuStack_178 = (ulong *******)0x0;
          pppppppuStack_170 = (ulong *******)0x0;
          pppppppuStack_168 = (ulong *******)0x0;
          func_0x048ac710(&pppppppuStack_178,
                          (long)(int)((ulong)((long)ppppppuStack_248[2] - (long)ppppppuStack_248[1])
                                     >> 3));
          pppppuVar14 = ppppppuStack_248[1];
          if (0 < (int)((ulong)((long)ppppppuStack_248[2] - (long)pppppuVar14) >> 3)) {
            lVar32 = 0;
            do {
              ppppuVar39 = pppppuVar14[lVar32];
              bVar43 = true;
              if ((ppppuVar39 != (ulong ****)0x0) &&
                 (cVar10 = (*(code *)(*ppppuVar39)[6])(ppppuVar39), cVar10 == '\x01')) {
                bVar43 = *(char *)(ppppuVar39 + 1) == '\0';
              }
              pppppppuVar15 = pppppppuStack_168;
              pppppppuVar13 = pppppppuStack_170;
              if (pppppppuStack_170 == (ulong *******)((long)pppppppuStack_168 << 6)) {
                if ((long)((long)pppppppuStack_170 + 1) < 0) goto LAB_0cc35e78;
                unaff_R14 = pppppppuStack_48;
                if (pppppppuStack_170 < (ulong *******)0x3fffffffffffffff) {
                  unaff_R14 = (ulong *******)(((ulong)pppppppuStack_170 & uStack_58) + 0x40);
                  if (unaff_R14 < (ulong *******)((long)pppppppuStack_168 << 7)) {
                    unaff_R14 = (ulong *******)((long)pppppppuStack_168 << 7);
                  }
                  if (unaff_R14 <= pppppppuStack_170) goto LAB_0cc34464;
                  if ((long)unaff_R14 < 0) goto LAB_0cc35e78;
                }
                uVar23 = (ulong)((long)unaff_R14 + -1) >> 6;
                lVar16 = uVar23 * 8 + 8;
                pppppppuVar24 =
                     (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar16);
                if (pppppppuVar24 == (ulong *******)0x0) {
                  func_0x0eec74c0(lVar16,0);
                }
                pppppppuVar31 = pppppppuStack_178;
                if (pppppppuVar13 < (ulong *******)0x41) {
                  *pppppppuVar24 = (ulong ******)0x0;
                  if (pppppppuVar13 == (ulong *******)0x40 || ((ulong)pppppppuVar13 & 0x3f) != 0)
                  goto LAB_0cc343b3;
                }
                else {
                  pppppppuVar24[(ulong)((long)pppppppuVar13 - 1U) >> 6] = (ulong ******)0x0;
LAB_0cc343b3:
                  uVar28 = 0;
                  uVar30 = 0;
                  pppppppuVar33 = pppppppuVar24;
                  pppppppuVar36 = pppppppuStack_178;
                  pppppppuVar37 = pppppppuStack_178;
                  do {
                    uVar40 = 1L << ((byte)uVar28 & 0x3f);
                    if (((ulong)*pppppppuVar37 >> (uVar30 & 0x3f) & 1) == 0) {
                      ppppppuVar17 = (ulong ******)(~uVar40 & (ulong)*pppppppuVar33);
                    }
                    else {
                      ppppppuVar17 = (ulong ******)(uVar40 | (ulong)*pppppppuVar33);
                    }
                    iVar12 = (int)uVar30;
                    pppppppuVar38 = pppppppuVar37;
                    if (iVar12 == 0x3f) {
                      pppppppuVar38 = pppppppuVar37 + 1;
                      pppppppuVar36 = pppppppuVar37 + 1;
                    }
                    uVar4 = iVar12 + 1;
                    if (iVar12 == 0x3f) {
                      uVar4 = 0;
                    }
                    uVar30 = (ulong)uVar4;
                    *pppppppuVar33 = ppppppuVar17;
                    bVar42 = uVar28 == 0x3f;
                    pppppppuVar33 = pppppppuVar33 + bVar42;
                    uVar28 = uVar28 + 1;
                    pppppppuVar37 = pppppppuVar38;
                    if (bVar42) {
                      uVar28 = 0;
                      pppppppuVar37 = pppppppuVar36;
                    }
                  } while ((uVar4 != ((uint)pppppppuVar13 & 0x3f)) ||
                          (pppppppuVar37 != pppppppuStack_178 + ((ulong)pppppppuVar13 >> 6)));
                }
                unaff_R14 = (ulong *******)(uVar23 + 1);
                bVar42 = pppppppuStack_178 != (ulong *******)0x0;
                pppppppuStack_178 = pppppppuVar24;
                pppppppuStack_168 = unaff_R14;
                if (bVar42) {
                  func_0x0412a280(pppppppuVar31,(long)pppppppuVar15 << 3);
                  pppppppuVar13 = pppppppuStack_170;
                }
              }
LAB_0cc34464:
              pppppppuStack_170 = (ulong *******)((long)pppppppuVar13 + 1);
              uVar23 = (ulong)pppppppuVar13 >> 6;
              uVar30 = 1L << ((byte)pppppppuVar13 & 0x3f);
              if (bVar43) {
                ppppppuVar17 = (ulong ******)(~uVar30 & (ulong)pppppppuStack_178[uVar23]);
              }
              else {
                ppppppuVar17 = (ulong ******)(uVar30 | (ulong)pppppppuStack_178[uVar23]);
              }
              pppppppuStack_178[uVar23] = ppppppuVar17;
              lVar32 = lVar32 + 1;
              pppppuVar14 = ppppppuStack_248[1];
            } while (lVar32 < (int)((ulong)((long)ppppppuStack_248[2] - (long)pppppuVar14) >> 3));
          }
          func_0x0ccafbf0(pppppppuStack_60,ppppppuStack_1f0,ppppppuStack_1f0,&pppppppuStack_178);
          ppppppuVar17 = ppppppuStack_1f0;
          if (pppppppuStack_178 != (ulong *******)0x0) {
            lVar32 = (long)pppppppuStack_168 << 3;
            pppppppuVar13 = pppppppuStack_178;
LAB_0cc33f53:
            func_0x0412a280(pppppppuVar13,lVar32);
            ppppppuVar17 = ppppppuStack_1f0;
          }
        }
        else if (cVar10 == '\x03') {
          pppppppuStack_178 = (ulong *******)0x0;
          pppppppuStack_170 = (ulong *******)0x0;
          pppppppuStack_168 = (ulong *******)0x0;
          pppppuVar14 = ppppppuStack_248[1];
          uVar23 = (long)ppppppuStack_248[2] - (long)pppppuVar14;
          if ((uVar23 >> 3 & 0xffffffff) != 0) {
            if ((uVar23 & 0x400000000) != 0) goto LAB_0cc35ea5;
            lVar32 = (long)(int)(uVar23 >> 3);
            unaff_R14 = (ulong *******)(lVar32 * 4);
            pppppppuVar13 =
                 (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R14);
            if (pppppppuVar13 == (ulong *******)0x0) {
              func_0x0eec74c0(unaff_R14,0);
            }
            pppppppuStack_168 = (ulong *******)((long)pppppppuVar13 + lVar32 * 4);
            pppppuVar14 = ppppppuStack_248[1];
            uVar23 = (long)ppppppuStack_248[2] - (long)pppppuVar14;
            pppppppuStack_170 = pppppppuVar13;
          }
          pppppppuStack_178 = pppppppuStack_170;
          if (0 < (int)(uVar23 >> 3)) {
            lVar32 = 0;
            do {
              ppppuVar39 = pppppuVar14[lVar32];
              uVar22 = 0;
              if (ppppuVar39 != (ulong ****)0x0) {
                cVar10 = (*(code *)(*ppppuVar39)[6])(ppppuVar39);
                uVar22 = 0;
                if (cVar10 == '\x03') {
                  uVar22 = *(undefined4 *)(ppppuVar39 + 1);
                }
              }
              if (pppppppuStack_170 < pppppppuStack_168) {
                *(undefined4 *)pppppppuStack_170 = uVar22;
                pppppppuVar13 = (ulong *******)((long)pppppppuStack_170 + 4);
                unaff_R14 = pppppppuVar13;
              }
              else {
                unaff_R14 = (ulong *******)((long)pppppppuStack_170 - (long)pppppppuStack_178);
                uVar23 = ((long)unaff_R14 >> 2) + 1;
                if (0x3fffffffffffffff < uVar23) goto LAB_0cc35e82;
                ppppppuStack_1e0 = (ulong ******)CONCAT44(ppppppuStack_1e0._4_4_,uVar22);
                pppppppuStack_1e8 = pppppppuStack_178;
                uVar40 = (long)pppppppuStack_168 - (long)pppppppuStack_178;
                uVar30 = (long)uVar40 >> 1;
                if ((ulong)((long)uVar40 >> 1) <= uVar23) {
                  uVar30 = uVar23;
                }
                if (0x7ffffffffffffffb < uVar40) {
                  uVar30 = 0x3fffffffffffffff;
                }
                if (0x3fffffffffffffff < uVar30) goto LAB_0cc35e7d;
                lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 4);
                if (lVar16 == 0) {
                  func_0x0eec74c0(uVar30 * 4,0);
                }
                pppppppuVar15 = pppppppuStack_1e8;
                pppppppuStack_1a0 = (ulong *******)(uVar30 * 4 + lVar16);
                *(undefined4 *)(lVar16 + (long)unaff_R14) = ppppppuStack_1e0._0_4_;
                pppppppuVar13 = (ulong *******)((long)unaff_R14 + lVar16 + 4);
                pppppppuVar24 =
                     (ulong *******)((long)unaff_R14 + ((long)unaff_R14 >> 2) * -4 + lVar16);
                func_0x0eee2f00(pppppppuVar24,pppppppuStack_1e8,unaff_R14);
                pppppppuStack_168 = pppppppuStack_1a0;
                pppppppuStack_178 = pppppppuVar24;
                if (pppppppuVar15 != (ulong *******)0x0) {
                  pppppppuStack_170 = pppppppuVar13;
                  func_0x0412a280(pppppppuVar15,uVar40);
                }
              }
              lVar32 = lVar32 + 1;
              pppppuVar14 = ppppppuStack_248[1];
              pppppppuStack_170 = pppppppuVar13;
            } while (lVar32 < (int)((ulong)((long)ppppppuStack_248[2] - (long)pppppuVar14) >> 3));
          }
          func_0x0ccb0240(pppppppuStack_68,ppppppuStack_1f0,ppppppuStack_1f0,&pppppppuStack_178);
          ppppppuVar17 = ppppppuStack_1f0;
          pppppppuVar15 = pppppppuStack_168;
          pppppppuVar13 = pppppppuStack_178;
          pppppppuVar24 = pppppppuStack_178;
          if (pppppppuStack_178 != (ulong *******)0x0) {
LAB_0cc33f50:
            pppppppuStack_170 = pppppppuVar24;
            lVar32 = (long)pppppppuVar15 - (long)pppppppuVar13;
            goto LAB_0cc33f53;
          }
        }
        else if (cVar10 == '\b') {
          pppppppuStack_1d8 = (ulong *******)0x0;
          pppppppuStack_1d0 = (ulong *******)0x0;
          pppppppuStack_1c8 = (ulong *******)0x0;
          pppppuVar14 = ppppppuStack_248[1];
          uVar23 = (long)ppppppuStack_248[2] - (long)pppppuVar14;
          if ((uVar23 >> 3 & 0xffffffff) == 0) {
            iVar12 = (int)(uVar23 >> 3);
          }
          else {
            if ((uVar23 & 0x400000000) != 0) goto LAB_0cc35ea0;
            lVar16 = (long)(int)(uVar23 >> 3);
            lVar32 = lVar16 * 0x18;
            pppppppuVar13 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar32)
            ;
            if (pppppppuVar13 == (ulong *******)0x0) {
              func_0x0eec74c0(lVar32,0);
            }
            pppppppuStack_1c8 = pppppppuVar13 + lVar16 * 3;
            pppppuVar14 = ppppppuStack_248[1];
            iVar12 = (int)((ulong)((long)ppppppuStack_248[2] - (long)pppppuVar14) >> 3);
            pppppppuStack_1d8 = pppppppuVar13;
          }
          pppppppuStack_1d0 = pppppppuStack_1d8;
          if (0 < iVar12) {
            lVar32 = 0;
            pppppppuStack_1d0 = pppppppuStack_1d8;
            do {
              ppppuVar39 = pppppuVar14[lVar32];
              ppppuVar41 = (ulong ****)&UNK_01e79d90;
              if (ppppuVar39 != (ulong ****)0x0) {
                cVar10 = (*(code *)(*ppppuVar39)[6])(ppppuVar39);
                if (cVar10 == '\b') {
                  ppppuVar41 = ppppuVar39 + 1;
                }
                else {
                  ppppuVar41 = (ulong ****)&UNK_01e79d90;
                }
              }
              pppppppuVar15 = pppppppuStack_1d0;
              pppppppuVar13 = pppppppuStack_1d8;
              if (pppppppuStack_1d0 < pppppppuStack_1c8) {
                if (((ulong)*ppppuVar41 & 1) == 0) {
                  pppppppuStack_1d0[2] = (ulong ******)ppppuVar41[2];
                  uVar22 = *(undefined4 *)((long)ppppuVar41 + 4);
                  uVar5 = *(undefined4 *)(ppppuVar41 + 1);
                  uVar6 = *(undefined4 *)((long)ppppuVar41 + 0xc);
                  *(undefined4 *)pppppppuStack_1d0 = *(undefined4 *)ppppuVar41;
                  *(undefined4 *)((long)pppppppuStack_1d0 + 4) = uVar22;
                  *(undefined4 *)(pppppppuStack_1d0 + 1) = uVar5;
                  *(undefined4 *)((long)pppppppuStack_1d0 + 0xc) = uVar6;
                }
                else {
                  func_0x0412e5e0(pppppppuStack_1d0,ppppuVar41[2],ppppuVar41[1]);
                }
                pppppppuVar15 = pppppppuVar15 + 3;
                pppppppuVar31 = pppppppuStack_1d8;
                pppppppuVar24 = pppppppuStack_1c8;
              }
              else {
                unaff_R14 = (ulong *******)((long)pppppppuStack_1d0 - (long)pppppppuStack_1d8);
                uVar23 = ((long)unaff_R14 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar23) goto LAB_0cc35e87;
                lVar16 = (long)pppppppuStack_1c8 - (long)pppppppuStack_1d8 >> 3;
                uVar30 = lVar16 * 0x5555555555555556;
                if (uVar30 <= uVar23) {
                  uVar30 = uVar23;
                }
                if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
                  uVar30 = 0xaaaaaaaaaaaaaaa;
                }
                pppppppuStack_158 = (ulong *******)&pppppppuStack_1d8;
                if (uVar30 == 0) {
                  pppppppuVar15 = (ulong *******)0x0;
                }
                else {
                  if (0xaaaaaaaaaaaaaaa < uVar30) goto LAB_0cc35e91;
                  pppppppuVar15 =
                       (ulong *******)
                       (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0x18);
                  if (pppppppuVar15 == (ulong *******)0x0) {
                    func_0x0eec74c0(uVar30 * 0x18,0);
                    pppppppuVar15 = (ulong *******)0x0;
                  }
                }
                pppppppuStack_170 = (ulong *******)((long)pppppppuVar15 + (long)unaff_R14);
                pppppppuStack_160 = pppppppuVar15 + uVar30 * 3;
                pppppppuStack_178 = pppppppuVar15;
                pppppppuStack_168 = pppppppuStack_170;
                if (((ulong)*ppppuVar41 & 1) == 0) {
                  pppppppuStack_170[2] = (ulong ******)ppppuVar41[2];
                  uVar22 = *(undefined4 *)((long)ppppuVar41 + 4);
                  uVar5 = *(undefined4 *)(ppppuVar41 + 1);
                  uVar6 = *(undefined4 *)((long)ppppuVar41 + 0xc);
                  *(undefined4 *)pppppppuStack_170 = *(undefined4 *)ppppuVar41;
                  *(undefined4 *)((long)pppppppuStack_170 + 4) = uVar22;
                  *(undefined4 *)(pppppppuStack_170 + 1) = uVar5;
                  *(undefined4 *)((long)pppppppuStack_170 + 0xc) = uVar6;
                }
                else {
                  func_0x0412e5e0(pppppppuStack_170,ppppuVar41[2],ppppuVar41[1]);
                  unaff_R14 = (ulong *******)((long)pppppppuStack_1d0 - (long)pppppppuStack_1d8);
                  pppppppuVar13 = pppppppuStack_1d8;
                }
                pppppppuVar24 = pppppppuStack_160;
                pppppppuVar15 = pppppppuStack_168 + 3;
                pppppppuVar31 = (ulong *******)((long)pppppppuStack_170 - (long)unaff_R14);
                func_0x0eee2f00(pppppppuVar31,pppppppuVar13,unaff_R14);
                pppppppuVar13 = pppppppuStack_1d8;
                if (pppppppuStack_1d8 != (ulong *******)0x0) {
                  lVar16 = (long)pppppppuStack_1c8 - (long)pppppppuStack_1d8;
                  pppppppuStack_1d8 = pppppppuVar31;
                  pppppppuStack_1d0 = pppppppuVar15;
                  pppppppuStack_1c8 = pppppppuVar24;
                  func_0x0412a280(pppppppuVar13,lVar16);
                  pppppppuVar31 = pppppppuStack_1d8;
                  pppppppuVar24 = pppppppuStack_1c8;
                }
              }
              pppppppuStack_1c8 = pppppppuVar24;
              pppppppuStack_1d8 = pppppppuVar31;
              lVar32 = lVar32 + 1;
              pppppuVar14 = ppppppuStack_248[1];
              pppppppuStack_1d0 = pppppppuVar15;
            } while (lVar32 < (int)((ulong)((long)ppppppuStack_248[2] - (long)pppppuVar14) >> 3));
          }
          unaff_R14 = pppppppuStack_1d0;
          func_0x0c92e790(pppppppuStack_70,ppppppuStack_1f0,ppppppuStack_1f0,&pppppppuStack_1d8);
          pppppppuVar13 = pppppppuStack_1d8;
          ppppppuVar17 = ppppppuStack_1f0;
          pppppppuVar15 = pppppppuStack_1d0;
          if (pppppppuStack_1d8 != (ulong *******)0x0) {
            while (unaff_R14 = pppppppuVar15, pppppppuVar13 != unaff_R14) {
              if (((ulong)unaff_R14[-3] & 1) != 0) {
                func_0x0412a280(unaff_R14[-1],(ulong)unaff_R14[-3] & 0xfffffffffffffffe);
              }
              pppppppuVar15 = unaff_R14 + -3;
            }
            pppppppuStack_1d0 = pppppppuVar13;
            pppppppuVar15 = pppppppuStack_1c8;
            pppppppuVar13 = pppppppuStack_1d8;
            pppppppuVar24 = pppppppuStack_170;
            goto LAB_0cc33f50;
          }
        }
      }
      ppppppuVar17 = ppppppuVar17 + 5;
    } while (ppppppuVar17 != ppppppuStack_50);
  }
  unaff_R14 = param_2 + 0x1d;
  lVar32 = func_0x0cba57f0(unaff_R14,&UNK_01d48488);
  if (lVar32 != 0) {
    lVar16 = *(long *)(lVar32 + 0x28);
    plVar3 = *(long **)(lVar32 + 0x30);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar16 != 0) {
      *(undefined2 *)(param_1 + 0x1d) = 0x100;
      bVar26 = *(byte *)(lVar16 + 0x10);
      if (bVar26 != 0) {
        bVar21 = 0;
        do {
          iVar12 = 0;
          for (uVar28 = (uint)bVar26; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
            iVar12 = iVar12 + 1;
          }
          if (iVar12 == 0) {
            bVar27 = 1;
LAB_0cc34902:
            bVar21 = bVar21 | bVar27;
            *(byte *)(param_1 + 0x1d) = bVar21;
          }
          else if (iVar12 == 1) {
            bVar27 = 2;
            goto LAB_0cc34902;
          }
          bVar26 = bVar26 - 1 & bVar26;
        } while (bVar26 != 0);
      }
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar32 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  if (DAT_0f6fdbd8 == '\0') goto LAB_0cc35eaa;
LAB_0cc34962:
  lVar32 = func_0x0cba57f0(unaff_R14,0xf6fdbc0);
  if (lVar32 != 0) {
    lVar16 = *(long *)(lVar32 + 0x28);
    plVar3 = *(long **)(lVar32 + 0x30);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar16 != 0) {
      pppppppuVar13 = param_1 + 0x1f;
      if (*(byte *)(param_1 + 0x24) == 1) {
        pppppppuStack_178 = param_1 + 0x21;
        func_0x054761f0(&pppppppuStack_178);
      }
      param_1[0x21] = (ulong ******)0x0;
      param_1[0x22] = (ulong ******)0x0;
      *pppppppuVar13 = (ulong ******)0x0;
      param_1[0x20] = (ulong ******)0x0;
      param_1[0x23] = (ulong ******)0x0;
      *(byte *)(param_1 + 0x24) = 1;
      bVar43 = *(char *)(lVar16 + 8) != '\x01';
      if (bVar43) {
        cVar10 = *(char *)(lVar16 + 9);
      }
      else {
        *(byte *)pppppppuVar13 = 1;
        cVar10 = *(char *)(lVar16 + 9);
      }
      bVar26 = !bVar43;
      if (cVar10 == '\x01') {
        bVar26 = !bVar43 | 4;
        *(byte *)pppppppuVar13 = bVar26;
      }
      if (*(char *)(lVar16 + 10) == '\x01') {
        bVar26 = bVar26 | 2;
        *(byte *)pppppppuVar13 = bVar26;
        cVar10 = *(char *)(lVar16 + 0xb);
      }
      else {
        cVar10 = *(char *)(lVar16 + 0xb);
      }
      if (cVar10 == '\x01') {
        *(byte *)pppppppuVar13 = bVar26 | 8;
      }
      fVar44 = (float)func_0x0eee3b20(*(undefined4 *)(lVar16 + 0xc));
      *(byte *)(param_1 + 0x20) = 1;
      *(float *)((long)param_1 + 0xfc) = (float)(int)fVar44;
      func_0x05476090(param_1 + 0x21);
      ppppppuVar17 = *(ulong *******)(lVar16 + 0x18);
      param_1[0x21] = *(ulong *******)(lVar16 + 0x10);
      param_1[0x22] = ppppppuVar17;
      param_1[0x23] = *(ulong *******)(lVar16 + 0x20);
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(undefined8 *)(lVar16 + 0x20) = 0;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar32 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  if ((DAT_0f6fdbf8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6fdbf8), iVar12 != 0)) {
    func_0x04160690(0xf6fdbe0,&UNK_013525f8);
    func_0x0eee2f40(&SUB_0412ed50,0xf6fdbe0,0xf53dab8);
    FUN_0410844d(&DAT_0f6fdbf8);
  }
  lVar32 = func_0x0cba57f0(unaff_R14,0xf6fdbe0);
  if (lVar32 != 0) {
    lVar16 = *(long *)(lVar32 + 0x28);
    plVar3 = *(long **)(lVar32 + 0x30);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar16 != 0) {
      *(undefined2 *)(param_1 + 0x25) = 0x100;
      bVar26 = 2;
      if (*(char *)(lVar16 + 8) == '\x01') {
        *(byte *)(param_1 + 0x25) = 1;
        bVar26 = 3;
      }
      if (*(char *)(lVar16 + 9) == '\x01') {
        *(byte *)(param_1 + 0x25) = bVar26;
      }
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar32 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  lVar32 = func_0x0cba57f0(unaff_R14,&UNK_01d4a638);
  if (lVar32 != 0) {
    lVar16 = *(long *)(lVar32 + 0x28);
    plVar3 = *(long **)(lVar32 + 0x30);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar16 != 0) {
      pbVar2 = (byte *)((long)param_1 + 0xea);
      ((byte *)((long)param_1 + 0xee))[0] = 0;
      ((byte *)((long)param_1 + 0xee))[1] = 0;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      *(byte *)(param_1 + 0x1e) = 1;
      if (*(char *)(lVar16 + 8) == '\x01') {
        *pbVar2 = 1;
      }
      bVar26 = 6;
      if (*(byte *)(lVar16 + 9) < 6) {
        bVar26 = *(byte *)(lVar16 + 9);
      }
      *(ushort *)((long)param_1 + 0xec) = (ushort)bVar26;
      *(byte *)((long)param_1 + 0xee) = *(byte *)(lVar16 + 10);
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar32 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  if (*(byte *)(param_1 + 0x2f) == 1) {
    *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0xd);
    if (param_1 + 0x26 != param_2 + 0xd) {
      func_0x0490ae00(param_1 + 0x27,param_2[0xe],param_2[0xf],
                      ((long)param_2[0xf] - (long)param_2[0xe] >> 3) * -0x5555555555555555);
      func_0x05d96560(param_1 + 0x2a,param_2[0x11],param_2[0x12],
                      (long)param_2[0x12] - (long)param_2[0x11] >> 6);
    }
    *(undefined4 *)((long)param_1 + 0x16f) = *(undefined4 *)((long)param_2 + 0xa7);
    param_1[0x2d] = param_2[0x14];
  }
  else {
    func_0x0cbb61c0();
    *(byte *)(param_1 + 0x2f) = 1;
  }
  pppppppuStack_1d8 = (ulong *******)&UNK_0f3f9930;
  pppppppuStack_1d0 = param_1;
  pppppppuStack_1b8 = (ulong *******)&pppppppuStack_1d8;
  unaff_R14 = (ulong *******)param_2[0x2b];
  lVar32 = 0x20;
  if (unaff_R14 == (ulong *******)param_2[0x2c]) {
LAB_0cc34d4a:
    (**(code **)((long)*pppppppuStack_1b8 + lVar32))();
    pppppppuVar13 = (ulong *******)param_2[0x2c];
  }
  else {
    do {
      if (pppppppuStack_1b8 == (ulong *******)0x0) goto LAB_0cc35e8c;
      (*(code *)(*pppppppuStack_1b8)[6])(pppppppuStack_1b8,*unaff_R14);
      unaff_R14 = unaff_R14 + 2;
      pppppppuVar13 = (ulong *******)param_2[0x2c];
    } while (unaff_R14 != pppppppuVar13);
    if (((ulong ********)pppppppuStack_1b8 == &pppppppuStack_1d8) ||
       (lVar32 = 0x28, pppppppuStack_1b8 != (ulong *******)0x0)) goto LAB_0cc34d4a;
  }
  func_0x0cc31510(param_2[0x2b],pppppppuVar13,param_1 + 0x30,param_1 + 0x3e);
  puStack_198 = (undefined4 *)0x0;
  puStack_190 = (undefined4 *)0x0;
  puStack_188 = (undefined4 *)0x0;
  ppppppuVar17 = param_2[0x28];
  ppppppuVar35 = param_2[0x29];
  if (ppppppuVar17 != ppppppuVar35) {
    do {
      while (puVar7 = puStack_190, puStack_188 <= puStack_190) {
        puStack_190 = (undefined4 *)func_0x04909a40(&puStack_198);
        ppppppuVar17 = ppppppuVar17 + 5;
        if (ppppppuVar17 == ppppppuVar35) goto LAB_0cc34e1c;
      }
      if (((ulong)ppppppuVar17[1] & 1) == 0) {
        *(ulong ******)(puStack_190 + 4) = ppppppuVar17[3];
        uVar22 = *(undefined4 *)((long)ppppppuVar17 + 0xc);
        uVar5 = *(undefined4 *)(ppppppuVar17 + 2);
        uVar6 = *(undefined4 *)((long)ppppppuVar17 + 0x14);
        *puStack_190 = *(undefined4 *)(ppppppuVar17 + 1);
        puStack_190[1] = uVar22;
        puStack_190[2] = uVar5;
        puStack_190[3] = uVar6;
      }
      else {
        func_0x0412e5e0(puStack_190,ppppppuVar17[3],ppppppuVar17[2]);
      }
      puStack_190 = puVar7 + 6;
      ppppppuVar17 = ppppppuVar17 + 5;
    } while (ppppppuVar17 != ppppppuVar35);
  }
LAB_0cc34e1c:
  puStack_a8 = &UNK_013a11b5;
  pppppppuStack_a0 = (ulong *******)0xe;
  func_0x0cd2e190(&pppppppuStack_178,param_1 + 0x30,param_1[0x30],param_1[0x31],&puStack_a8,
                  &puStack_198);
  pppppppuVar13 = (ulong *******)param_2[0x2e];
  pppppppuStack_1e8 = (ulong *******)param_2[0x2f];
  if (pppppppuVar13 != pppppppuStack_1e8) {
    pppppppuStack_1a0 = param_1 + 0x36;
    do {
      pppppppuStack_178 = (ulong *******)0x0;
      pppppppuStack_170 = (ulong *******)0x0;
      pppppppuStack_168 = (ulong *******)0x0;
      pppppppuStack_160 = (ulong *******)CONCAT62(pppppppuStack_160._2_6_,0xffff);
      pppppppuStack_158 = (ulong *******)((ulong)pppppppuStack_158 & 0xffffffff00000000);
      uStack_120 = 0;
      uStack_118 = 0;
      pppppuStack_130 = (ulong *****)0x0;
      uStack_128 = 0;
      pppppuStack_140 = (ulong *****)0x0;
      pppppuStack_138 = (ulong *****)0x0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_110 = 0;
      puStack_a8 = &UNK_0f3f99b0;
      pppppppuStack_a0 = (ulong *******)&pppppppuStack_178;
      ppuStack_88 = &puStack_a8;
      unaff_R14 = (ulong *******)pppppppuVar13[10];
      lVar32 = 0x20;
      if (unaff_R14 == (ulong *******)pppppppuVar13[0xb]) {
LAB_0cc34fb3:
        (**(code **)(*ppuStack_88 + lVar32))();
      }
      else {
        do {
          if (ppuStack_88 == (undefined **)0x0) {
            func_0x04891200();
            goto LAB_0cc35e6e;
          }
          (**(code **)(*ppuStack_88 + 0x30))(ppuStack_88,*unaff_R14);
          unaff_R14 = unaff_R14 + 2;
        } while (unaff_R14 != (ulong *******)pppppppuVar13[0xb]);
        if ((ppuStack_88 == &puStack_a8) || (lVar32 = 0x28, ppuStack_88 != (undefined **)0x0))
        goto LAB_0cc34fb3;
      }
      func_0x0b5bf9a0(&bStack_c0,pppppppuVar13);
      if (*(int *)(pppppppuVar13 + 1) == 1) {
        uVar11 = 0xd;
        uVar9 = 0xd;
        if ((bStack_c0 & 1) == 0) goto LAB_0cc34ff9;
LAB_0cc35032:
        uVar11 = uVar9;
        bVar26 = bStack_c0;
        func_0x0412e5e0(&pppppppuStack_238,pppppppuStack_b0,pppppppuStack_b8);
      }
      else {
        uVar11 = 0xffff;
        if ((*(int *)(pppppppuVar13 + 1) == 0) && (*pppppppuVar13 != (ulong ******)0x0)) {
          uVar11 = (*(code *)(**pppppppuVar13)[7])();
        }
        uVar9 = uVar11;
        if ((bStack_c0 & 1) != 0) goto LAB_0cc35032;
LAB_0cc34ff9:
        pppppppuStack_228 = pppppppuStack_b0;
        pppppppuStack_238 = (ulong *******)CONCAT71(uStack_bf,bStack_c0);
        pppppppuStack_230 = pppppppuStack_b8;
        bVar26 = bStack_c0;
      }
      pppppppuStack_218 = pppppppuStack_238;
      pppppppuStack_210 = pppppppuStack_230;
      pppppppuStack_208 = pppppppuStack_228;
      pppppppuStack_200 = (ulong *******)CONCAT62(pppppppuStack_200._2_6_,uVar11);
      pppppppuStack_1f8 = (ulong *******)((ulong)pppppppuStack_1f8 & 0xffffffff00000000);
      if (((ulong)pppppppuStack_158 & 0xffffffff) == 0xffffffff) {
LAB_0cc35107:
        pppppppuStack_168 = pppppppuStack_208;
        pppppppuStack_170 = pppppppuStack_210;
        pppppppuStack_178 = pppppppuStack_218;
        pppppppuStack_218 = (ulong *******)0x0;
        pppppppuStack_210 = (ulong *******)0x0;
        pppppppuStack_208 = (ulong *******)0x0;
        pppppppuStack_160 = (ulong *******)CONCAT62(pppppppuStack_160._2_6_,uVar11);
        pppppppuStack_158 = (ulong *******)((ulong)pppppppuStack_158 & 0xffffffff00000000);
      }
      else {
        if ((int)pppppppuStack_158 != 0) {
          (**(code **)(&UNK_0f3f68f8 + ((ulong)pppppppuStack_158 & 0xffffffff) * 8))
                    (&pppppppuStack_238,&pppppppuStack_178);
          uVar11 = pppppppuStack_200._0_2_;
          goto LAB_0cc35107;
        }
        if (((ulong)pppppppuStack_178 & 1) != 0) {
          func_0x0412a280(pppppppuStack_168,(ulong)pppppppuStack_178 & 0xfffffffffffffffe);
          uVar11 = pppppppuStack_200._0_2_;
        }
        pppppppuStack_178 = pppppppuStack_218;
        pppppppuStack_218 = (ulong *******)((ulong)pppppppuStack_218 & 0xffffffffffff0000);
        pppppppuStack_160 = (ulong *******)CONCAT62(pppppppuStack_160._2_6_,uVar11);
        pppppppuStack_168 = pppppppuStack_208;
        pppppppuStack_170 = pppppppuStack_210;
      }
      if (((ulong)pppppppuStack_1f8 & 0xffffffff) != 0xffffffff) {
        (**(code **)(&UNK_0f3f68f8 + ((ulong)pppppppuStack_1f8 & 0xffffffff) * 8))
                  (&pppppppuStack_238,&pppppppuStack_218);
      }
      pppppppuStack_1f8 = (ulong *******)CONCAT44(pppppppuStack_1f8._4_4_,0xffffffff);
      if ((bVar26 & 1) != 0) {
        func_0x0412a280(pppppppuStack_b0,CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
      }
      func_0x0cc31510(pppppppuVar13[10],pppppppuVar13[0xb],&uStack_150,&uStack_120);
      ppppppuVar17 = pppppppuVar13[7];
      ppppppuVar35 = pppppppuVar13[8];
      if (ppppppuVar17 != ppppppuVar35) {
        pppppppuStack_238 = (ulong *******)0x0;
        pppppppuStack_230 = (ulong *******)0x0;
        pppppppuStack_228 = (ulong *******)0x0;
        ppppppuStack_1e0 = ppppppuVar35;
        do {
          while (pppppppuVar24 = pppppppuStack_230, pppppppuVar15 = pppppppuStack_238,
                ppppppuVar18 = ppppppuVar17 + 1, pppppppuStack_230 < pppppppuStack_228) {
            if (((ulong)*ppppppuVar18 & 1) == 0) {
              pppppppuStack_230[2] = (ulong ******)ppppppuVar17[3];
              uVar22 = *(undefined4 *)((long)ppppppuVar17 + 0xc);
              uVar5 = *(undefined4 *)(ppppppuVar17 + 2);
              uVar6 = *(undefined4 *)((long)ppppppuVar17 + 0x14);
              *(undefined4 *)pppppppuStack_230 = *(undefined4 *)ppppppuVar18;
              *(undefined4 *)((long)pppppppuStack_230 + 4) = uVar22;
              *(undefined4 *)(pppppppuStack_230 + 1) = uVar5;
              *(undefined4 *)((long)pppppppuStack_230 + 0xc) = uVar6;
            }
            else {
              func_0x0412e5e0(pppppppuStack_230,ppppppuVar17[3],ppppppuVar17[2]);
            }
            unaff_R14 = pppppppuVar24 + 3;
            ppppppuVar17 = ppppppuVar17 + 5;
            pppppppuStack_230 = unaff_R14;
            if (ppppppuVar17 == ppppppuVar35) goto LAB_0cc353b8;
          }
          lVar32 = (long)pppppppuStack_230 - (long)pppppppuStack_238;
          pppppppuVar24 = (ulong *******)((lVar32 >> 3) * -0x5555555555555555 + 1);
          if ((ulong *******)0xaaaaaaaaaaaaaaa < pppppppuVar24) goto LAB_0cc35e6e;
          lVar16 = (long)pppppppuStack_228 - (long)pppppppuStack_238 >> 3;
          unaff_R14 = (ulong *******)(lVar16 * 0x5555555555555556);
          if (unaff_R14 <= pppppppuVar24) {
            unaff_R14 = pppppppuVar24;
          }
          if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
            unaff_R14 = (ulong *******)0xaaaaaaaaaaaaaaa;
          }
          pppppppuStack_1f8 = (ulong *******)&pppppppuStack_238;
          ppppppuStack_248 = ppppppuVar18;
          if (unaff_R14 == (ulong *******)0x0) {
            ppppppuVar35 = (ulong ******)0x0;
          }
          else {
            if ((ulong *******)0xaaaaaaaaaaaaaaa < unaff_R14) goto LAB_0cc35e73;
            ppppppuVar35 = (ulong ******)
                           (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)unaff_R14 * 0x18)
            ;
            if (ppppppuVar35 == (ulong ******)0x0) {
              func_0x0eec74c0((long)unaff_R14 * 0x18,0);
              ppppppuVar35 = (ulong ******)0x0;
            }
          }
          pppppppuStack_210 = (ulong *******)((long)ppppppuVar35 + lVar32);
          pppppppuStack_200 = (ulong *******)(ppppppuVar35 + (long)unaff_R14 * 3);
          pppppppuStack_218 = (ulong *******)ppppppuVar35;
          pppppppuStack_208 = pppppppuStack_210;
          if (((ulong)*ppppppuVar18 & 1) == 0) {
            pppppppuStack_210[2] = (ulong ******)ppppppuVar17[3];
            uVar22 = *(undefined4 *)((long)ppppppuVar17 + 0xc);
            uVar5 = *(undefined4 *)(ppppppuVar17 + 2);
            uVar6 = *(undefined4 *)((long)ppppppuVar17 + 0x14);
            *(undefined4 *)pppppppuStack_210 = *(undefined4 *)ppppppuVar18;
            *(undefined4 *)((long)pppppppuStack_210 + 4) = uVar22;
            *(undefined4 *)(pppppppuStack_210 + 1) = uVar5;
            *(undefined4 *)((long)pppppppuStack_210 + 0xc) = uVar6;
          }
          else {
            func_0x0412e5e0(pppppppuStack_210,ppppppuVar17[3],ppppppuVar17[2]);
            lVar32 = (long)pppppppuStack_230 - (long)pppppppuStack_238;
            pppppppuVar15 = pppppppuStack_238;
          }
          pppppppuVar24 = pppppppuStack_200;
          unaff_R14 = pppppppuStack_208 + 3;
          pppppppuVar31 = (ulong *******)((long)pppppppuStack_210 - lVar32);
          func_0x0eee2f00(pppppppuVar31,pppppppuVar15,lVar32);
          pppppppuVar15 = pppppppuStack_238;
          if (pppppppuStack_238 != (ulong *******)0x0) {
            lVar32 = (long)pppppppuStack_228 - (long)pppppppuStack_238;
            pppppppuStack_238 = pppppppuVar31;
            pppppppuStack_230 = unaff_R14;
            pppppppuStack_228 = pppppppuVar24;
            func_0x0412a280(pppppppuVar15,lVar32);
            pppppppuVar31 = pppppppuStack_238;
            pppppppuVar24 = pppppppuStack_228;
          }
          pppppppuStack_228 = pppppppuVar24;
          pppppppuStack_238 = pppppppuVar31;
          ppppppuVar17 = ppppppuVar17 + 5;
          ppppppuVar35 = ppppppuStack_1e0;
          pppppppuStack_230 = unaff_R14;
        } while (ppppppuVar17 != ppppppuStack_1e0);
LAB_0cc353b8:
        puStack_40 = &UNK_013a11b5;
        uStack_38 = 0xe;
        func_0x0cd2e190(&pppppppuStack_218,&uStack_150,uStack_150,uStack_148,&puStack_40,
                        &pppppppuStack_238);
        pppppppuVar24 = pppppppuStack_238;
        pppppppuVar15 = pppppppuStack_230;
        if (pppppppuStack_238 != (ulong *******)0x0) {
          for (; pppppppuVar24 != pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -3) {
            if (((ulong)pppppppuVar15[-3] & 1) != 0) {
              func_0x0412a280(pppppppuVar15[-1],(ulong)pppppppuVar15[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppuStack_230 = pppppppuVar24;
          func_0x0412a280(pppppppuStack_238,(long)pppppppuStack_228 - (long)pppppppuStack_238);
        }
      }
      ppppppuVar17 = param_1[0x37];
      if (ppppppuVar17 < param_1[0x38]) {
        func_0x0cc937b0(ppppppuVar17,&pppppppuStack_178);
        ppppppuVar17 = ppppppuVar17 + 0xe;
      }
      else {
        lVar32 = (long)ppppppuVar17 - (long)*pppppppuStack_1a0;
        unaff_R14 = (ulong *******)((lVar32 >> 4) * 0x6db6db6db6db6db7 + 1);
        if ((ulong *******)0x249249249249249 < unaff_R14) goto LAB_0cc35e96;
        lVar16 = (long)param_1[0x38] - (long)*pppppppuStack_1a0 >> 4;
        pppppppuVar15 = (ulong *******)(lVar16 * -0x2492492492492492);
        if (unaff_R14 < pppppppuVar15) {
          unaff_R14 = pppppppuVar15;
        }
        if (0x124924924924923 < (ulong)(lVar16 * 0x6db6db6db6db6db7)) {
          unaff_R14 = (ulong *******)0x249249249249249;
        }
        pppppppuStack_1f8 = pppppppuStack_1a0;
        if (unaff_R14 == (ulong *******)0x0) {
          ppppppuVar17 = (ulong ******)0x0;
        }
        else {
          if ((ulong *******)0x249249249249249 < unaff_R14) goto LAB_0cc35e9b;
          ppppppuVar17 = (ulong ******)
                         (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)unaff_R14 * 0x70);
          if (ppppppuVar17 == (ulong ******)0x0) {
            func_0x0eec74c0((long)unaff_R14 * 0x70,0);
            ppppppuVar17 = (ulong ******)0x0;
          }
        }
        pppppppuStack_210 = (ulong *******)(lVar32 + (long)ppppppuVar17);
        pppppppuStack_200 = (ulong *******)(ppppppuVar17 + (long)unaff_R14 * 0xe);
        pppppppuStack_218 = (ulong *******)ppppppuVar17;
        pppppppuStack_208 = pppppppuStack_210;
        func_0x0cc937b0(pppppppuStack_210,&pppppppuStack_178);
        pppppppuStack_208 = pppppppuStack_208 + 0xe;
        func_0x0cc93980(pppppppuStack_1a0,&pppppppuStack_218);
        pppppppuVar15 = pppppppuStack_210;
        ppppppuVar17 = param_1[0x37];
        while (pppppppuVar15 != pppppppuStack_208) {
          pppppppuStack_208 = pppppppuStack_208 + -0xe;
          func_0x0cc33180();
        }
        if (pppppppuStack_218 != (ulong *******)0x0) {
          func_0x0412a280(pppppppuStack_218,(long)pppppppuStack_200 - (long)pppppppuStack_218);
        }
      }
      param_1[0x37] = ppppppuVar17;
      func_0x0cc33180(&pppppppuStack_178);
      pppppppuVar13 = pppppppuVar13 + 0xd;
      if (pppppppuVar13 == pppppppuStack_1e8) break;
    } while( true );
  }
  pppppppuVar13 = param_1 + 0x39;
  if (param_1[0x3c] != (ulong ******)0x0) {
    ppppppuVar17 = param_1[0x3b];
    while (ppppppuVar17 != (ulong ******)0x0) {
      ppppppuVar35 = (ulong ******)*ppppppuVar17;
      func_0x0bf5d6d0(ppppppuVar17 + 5);
      if (((ulong)ppppppuVar17[2] & 1) != 0) {
        func_0x0412a280(ppppppuVar17[4],(ulong)ppppppuVar17[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(ppppppuVar17,0xd8);
      ppppppuVar17 = ppppppuVar35;
    }
    param_1[0x3b] = (ulong ******)0x0;
    if (param_1[0x3a] != (ulong ******)0x0) {
      func_0x0eee2dd0(*pppppppuVar13,0,(long)param_1[0x3a] << 3);
    }
    param_1[0x3c] = (ulong ******)0x0;
  }
  ppppppuVar17 = param_2[0x33];
  if (ppppppuVar17 == (ulong ******)0x0) goto LAB_0cc35dee;
  pppppppuStack_1e8 = param_1 + 0x3b;
  do {
    func_0x0bf5cc90(&pppppppuStack_178,ppppppuVar17 + 5);
    pppppuVar14 = (ulong *****)((long)ppppppuVar17 + 0x11);
    bVar43 = (*(byte *)(ppppppuVar17 + 2) & 1) == 0;
    pppppuVar29 = ppppppuVar17[4];
    if (bVar43) {
      pppppuVar29 = pppppuVar14;
    }
    pppppuVar25 = (ulong *****)(ulong)(*(byte *)(ppppppuVar17 + 2) >> 1);
    if (!bVar43) {
      pppppuVar25 = ppppppuVar17[3];
    }
    ppppppuVar18 = (ulong ******)func_0x04883620(&pppppppuStack_218,pppppuVar29,pppppuVar25);
    ppppppuVar35 = param_1[0x3a];
    if (ppppppuVar35 != (ulong ******)0x0) {
      uVar23 = (long)ppppppuVar35 - ((ulong)ppppppuVar35 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
      uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar23 >> 0x38 < 2) {
        ppppppuStack_248 = (ulong ******)((ulong)((long)ppppppuVar35 - 1U) & (ulong)ppppppuVar18);
      }
      else {
        ppppppuStack_248 = ppppppuVar18;
        if (ppppppuVar35 <= ppppppuVar18) {
          if (((ulong)ppppppuVar18 | (ulong)ppppppuVar35) >> 0x20 == 0) {
            ppppppuStack_248 =
                 (ulong ******)
                 (((ulong)ppppppuVar18 & 0xffffffff) % ((ulong)ppppppuVar35 & 0xffffffff));
          }
          else {
            ppppppuStack_248 = (ulong ******)((ulong)ppppppuVar18 % (ulong)ppppppuVar35);
          }
        }
      }
      if (((*pppppppuVar13)[(long)ppppppuStack_248] != (ulong *****)0x0) &&
         (ppppuVar39 = *(*pppppppuVar13)[(long)ppppppuStack_248], ppppuVar39 != (ulong ****)0x0)) {
        if ((*(byte *)(ppppppuVar17 + 2) & 1) == 0) {
          pppppuVar29 = (ulong *****)(ulong)(*(byte *)(ppppppuVar17 + 2) >> 1);
        }
        else {
          pppppuVar29 = ppppppuVar17[3];
          pppppuVar14 = ppppppuVar17[4];
        }
        if ((byte)(uVar23 >> 0x38) < 2) {
          ppppppuVar19 = (ulong ******)((long)ppppppuVar35 + -1);
          ppppppuStack_1e0 = ppppppuVar19;
          do {
            if ((ulong ******)ppppuVar39[1] == ppppppuVar18) {
              bVar26 = *(byte *)(ppppuVar39 + 2);
              if ((bVar26 & 1) == 0) {
                pppppuVar25 = (ulong *****)(ulong)(bVar26 >> 1);
              }
              else {
                pppppuVar25 = (ulong *****)ppppuVar39[3];
              }
              if (pppppuVar25 == pppppuVar29) {
                if ((bVar26 & 1) == 0) {
                  pppuVar34 = (ulong ***)((long)ppppuVar39 + 0x11);
                }
                else {
                  pppuVar34 = ppppuVar39[4];
                }
                iVar12 = func_0x0eee3000(pppuVar34,pppppuVar14,pppppuVar29);
                ppppppuVar19 = ppppppuStack_1e0;
                if (iVar12 == 0) goto LAB_0cc35d1a;
              }
            }
            else if ((ulong ******)((ulong)ppppuVar39[1] & (ulong)ppppppuVar19) != ppppppuStack_248)
            break;
            ppppuVar39 = (ulong ****)*ppppuVar39;
          } while (ppppuVar39 != (ulong ****)0x0);
        }
        else {
          do {
            ppppppuVar19 = (ulong ******)ppppuVar39[1];
            if (ppppppuVar19 == ppppppuVar18) {
              bVar26 = *(byte *)(ppppuVar39 + 2);
              if ((bVar26 & 1) == 0) {
                pppppuVar25 = (ulong *****)(ulong)(bVar26 >> 1);
              }
              else {
                pppppuVar25 = (ulong *****)ppppuVar39[3];
              }
              if (pppppuVar25 == pppppuVar29) {
                if ((bVar26 & 1) == 0) {
                  pppuVar34 = (ulong ***)((long)ppppuVar39 + 0x11);
                }
                else {
                  pppuVar34 = ppppuVar39[4];
                }
                iVar12 = func_0x0eee3000(pppuVar34,pppppuVar14,pppppuVar29);
                if (iVar12 == 0) goto LAB_0cc35d1a;
              }
            }
            else {
              if (ppppppuVar35 <= ppppppuVar19) {
                if (((ulong)ppppppuVar19 | (ulong)ppppppuVar35) >> 0x20 == 0) {
                  ppppppuVar19 = (ulong ******)
                                 (((ulong)ppppppuVar19 & 0xffffffff) %
                                 ((ulong)ppppppuVar35 & 0xffffffff));
                }
                else {
                  ppppppuVar19 = (ulong ******)((ulong)ppppppuVar19 % (ulong)ppppppuVar35);
                }
              }
              if (ppppppuVar19 != ppppppuStack_248) break;
            }
            ppppuVar39 = (ulong ****)*ppppuVar39;
          } while (ppppuVar39 != (ulong ****)0x0);
        }
      }
    }
    ppppppuVar19 = (ulong ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd8);
    if (ppppppuVar19 == (ulong ******)0x0) {
      func_0x0eec74c0(0xd8,0);
    }
    pppppppuStack_208 = (ulong *******)0x0;
    *ppppppuVar19 = (ulong *****)0x0;
    ppppppuVar19[1] = (ulong *****)ppppppuVar18;
    pppppppuStack_218 = (ulong *******)ppppppuVar19;
    pppppppuStack_210 = pppppppuVar13;
    if (((ulong)ppppppuVar17[2] & 1) == 0) {
      ppppppuVar19[4] = ppppppuVar17[4];
      pppppuVar14 = ppppppuVar17[3];
      ppppppuVar19[2] = ppppppuVar17[2];
      ppppppuVar19[3] = pppppuVar14;
    }
    else {
      func_0x0412e5e0(ppppppuVar19 + 2,ppppppuVar17[4],ppppppuVar17[3]);
    }
    *(undefined4 *)(ppppppuVar19 + 5) = pppppppuStack_178._0_4_;
    *(undefined1 *)(ppppppuVar19 + 6) = 0;
    *(undefined4 *)(ppppppuVar19 + 10) = 0xffffffff;
    uVar22 = (undefined4)uStack_150;
    if ((uStack_150 & 0xffffffff) != 0xffffffff) {
      pppppppuStack_238 = (ulong *******)(ppppppuVar19 + 6);
      (**(code **)(&UNK_0f3f6928 + (uStack_150 & 0xffffffff) * 8))
                (&pppppppuStack_238,&pppppppuStack_170);
      *(undefined4 *)(ppppppuVar19 + 10) = uVar22;
    }
    uVar28 = uStack_100;
    *(undefined4 *)(ppppppuVar19 + 0xb) = (undefined4)uStack_148;
    ppppppuVar19[0xe] = pppppuStack_130;
    ppppppuVar19[0xc] = pppppuStack_140;
    ppppppuVar19[0xd] = pppppuStack_138;
    pppppuStack_140 = (ulong *****)0x0;
    pppppuStack_138 = (ulong *****)0x0;
    pppppuStack_130 = (ulong *****)0x0;
    *(undefined2 *)(ppppppuVar19 + 0xf) = (undefined2)uStack_128;
    *(undefined1 *)(ppppppuVar19 + 0x10) = 0;
    *(undefined4 *)(ppppppuVar19 + 0x14) = 0xffffffff;
    if ((ulong)uStack_100 != 0xffffffff) {
      pppppppuStack_238 = (ulong *******)(ppppppuVar19 + 0x10);
      (**(code **)(&UNK_0f3f6928 + (ulong)uStack_100 * 8))(&pppppppuStack_238,&uStack_120);
      *(uint *)(ppppppuVar19 + 0x14) = uVar28;
    }
    ppppppuVar19[0x15] = pppppuStack_f8;
    ppppppuVar19[0x16] = pppppuStack_f0;
    ppppppuVar19[0x17] = pppppuStack_e8;
    pppppuStack_f8 = (ulong *****)0x0;
    pppppuStack_f0 = (ulong *****)0x0;
    pppppuStack_e8 = (ulong *****)0x0;
    ppppppuVar19[0x18] = pppppuStack_e0;
    ppppppuVar19[0x19] = pppppuStack_d8;
    ppppppuVar19[0x1a] = pppppuStack_d0;
    pppppuStack_e0 = (ulong *****)0x0;
    pppppuStack_d8 = (ulong *****)0x0;
    pppppuStack_d0 = (ulong *****)0x0;
    pppppppuStack_208 = (ulong *******)CONCAT71(pppppppuStack_208._1_7_,1);
    if ((long)ppppppuVar35 < 0) {
      fVar45 = (float)ppppppuVar35;
      fVar44 = *(float *)(param_1 + 0x3d);
      if (ppppppuVar35 != (ulong ******)0x0) goto LAB_0cc35ae7;
LAB_0cc35b00:
      uVar23 = 1;
      if ((ulong ******)0x2 < ppppppuVar35) {
        uVar23 = (ulong)(((ulong)ppppppuVar35 & (ulong)((long)ppppppuVar35 - 1U)) != 0);
      }
      ppppppuVar19 = (ulong ******)((long)ppppppuVar35 * 2 | uVar23);
      fVar44 = (float)func_0x0eee3ab0((float)((long)param_1[0x3c] + 1) / fVar44);
      ppppppuVar35 = (ulong ******)
                     ((long)(fVar44 - _DAT_01198778) & (long)fVar44 >> 0x3f | (long)fVar44);
      if (ppppppuVar35 < ppppppuVar19) {
        ppppppuVar35 = ppppppuVar19;
      }
      ppppppuVar19 = (ulong ******)0x2;
      if ((ppppppuVar35 == (ulong ******)0x1) ||
         (ppppppuVar19 = ppppppuVar35, ((ulong)ppppppuVar35 & (long)ppppppuVar35 - 1U) == 0)) {
        ppppppuVar35 = param_1[0x3a];
        bVar43 = ppppppuVar19 < ppppppuVar35;
        if (ppppppuVar19 <= ppppppuVar35) goto LAB_0cc35b9d;
LAB_0cc35b73:
        func_0x0cca02c0(pppppppuVar13,ppppppuVar19);
      }
      else {
        ppppppuVar19 = (ulong ******)func_0x0412c3f0();
        ppppppuVar35 = param_1[0x3a];
        bVar43 = ppppppuVar19 < ppppppuVar35;
        if (ppppppuVar35 < ppppppuVar19) goto LAB_0cc35b73;
LAB_0cc35b9d:
        if (bVar43) {
          fVar44 = (float)func_0x0eee3ab0((float)param_1[0x3c] / *(float *)(param_1 + 0x3d));
          ppppppuVar20 = (ulong ******)
                         ((long)(fVar44 - _DAT_01198778) & (long)fVar44 >> 0x3f | (long)fVar44);
          if ((ppppppuVar35 < (ulong ******)0x3) ||
             (uVar23 = (long)ppppppuVar35 - ((ulong)ppppppuVar35 >> 1 & 0x5555555555555555),
             uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333),
             1 < (byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            ppppppuVar20 = (ulong ******)func_0x0412c3f0(ppppppuVar20);
          }
          else if ((ulong ******)0x1 < ppppppuVar20) {
            lVar32 = 0x3f;
            if ((long)ppppppuVar20 - 1U != 0) {
              for (; (long)ppppppuVar20 - 1U >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            ppppppuVar20 = (ulong ******)(1L << (-((byte)lVar32 ^ 0x3f) & 0x3f));
          }
          if (ppppppuVar19 <= ppppppuVar20) {
            ppppppuVar19 = ppppppuVar20;
          }
          if (ppppppuVar19 < ppppppuVar35) goto LAB_0cc35b73;
        }
      }
      ppppppuVar35 = param_1[0x3a];
      if (((ulong)ppppppuVar35 & (long)ppppppuVar35 - 1U) == 0) {
        ppppppuVar19 = (ulong ******)((ulong)ppppppuVar18 & (ulong)((long)ppppppuVar35 - 1U));
      }
      else {
        ppppppuVar19 = ppppppuVar18;
        if (ppppppuVar35 <= ppppppuVar18) {
          if (((ulong)ppppppuVar18 | (ulong)ppppppuVar35) >> 0x20 == 0) {
            ppppppuVar19 = (ulong ******)
                           (((ulong)ppppppuVar18 & 0xffffffff) % ((ulong)ppppppuVar35 & 0xffffffff))
            ;
          }
          else {
            ppppppuVar19 = (ulong ******)((ulong)ppppppuVar18 % (ulong)ppppppuVar35);
          }
        }
      }
    }
    else {
      fVar45 = (float)(long)ppppppuVar35;
      fVar44 = *(float *)(param_1 + 0x3d);
      if (ppppppuVar35 == (ulong ******)0x0) goto LAB_0cc35b00;
LAB_0cc35ae7:
      ppppppuVar19 = ppppppuStack_248;
      if (fVar45 * fVar44 < (float)((long)param_1[0x3c] + 1)) goto LAB_0cc35b00;
    }
    ppppppuVar18 = *pppppppuVar13;
    pppppuVar14 = ppppppuVar18[(long)ppppppuVar19];
    if (pppppuVar14 == (ulong *****)0x0) {
      *pppppppuStack_218 = *pppppppuStack_1e8;
      *pppppppuStack_1e8 = (ulong ******)pppppppuStack_218;
      ppppppuVar18[(long)ppppppuVar19] = (ulong *****)pppppppuStack_1e8;
      if (*pppppppuStack_218 != (ulong ******)0x0) {
        ppppppuVar19 = (ulong ******)(*pppppppuStack_218)[1];
        if (((ulong)ppppppuVar35 & (long)ppppppuVar35 - 1U) == 0) {
          ppppppuVar18[(ulong)ppppppuVar19 & (ulong)((long)ppppppuVar35 - 1U)] =
               (ulong *****)pppppppuStack_218;
        }
        else {
          if (ppppppuVar35 <= ppppppuVar19) {
            if (((ulong)ppppppuVar19 | (ulong)ppppppuVar35) >> 0x20 == 0) {
              ppppppuVar18[((ulong)ppppppuVar19 & 0xffffffff) % ((ulong)ppppppuVar35 & 0xffffffff)]
                   = (ulong *****)pppppppuStack_218;
              goto LAB_0cc35d0f;
            }
            ppppppuVar19 = (ulong ******)((ulong)ppppppuVar19 % (ulong)ppppppuVar35);
          }
          ppppppuVar18[(long)ppppppuVar19] = (ulong *****)pppppppuStack_218;
        }
      }
    }
    else {
      *pppppppuStack_218 = (ulong ******)*pppppuVar14;
      *pppppuVar14 = (ulong ****)pppppppuStack_218;
    }
LAB_0cc35d0f:
    param_1[0x3c] = (ulong ******)((long)param_1[0x3c] + 1);
LAB_0cc35d1a:
    func_0x0bf5d6d0(&pppppppuStack_178);
    ppppppuVar17 = (ulong ******)*ppppppuVar17;
    if (ppppppuVar17 == (ulong ******)0x0) {
LAB_0cc35dee:
      puVar8 = puStack_198;
      puVar7 = puStack_190;
      if (puStack_198 != (undefined4 *)0x0) {
        for (; puVar8 != puVar7; puVar7 = puVar7 + -6) {
          if ((*(byte *)(puVar7 + -6) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(puVar7 + -2),
                            *(ulong *)(puVar7 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_190 = puVar8;
        func_0x0412a280(puStack_198,(long)puStack_188 - (long)puStack_198);
      }
      return param_1;
    }
  } while( true );
LAB_0cc35e6e:
  func_0x0488efe0();
LAB_0cc35e73:
  FUN_04882eb0();
LAB_0cc35e78:
  func_0x048acb40();
LAB_0cc35e7d:
  FUN_04882eb0();
LAB_0cc35e82:
  func_0x04aa1da0();
LAB_0cc35e87:
  func_0x0488efe0();
LAB_0cc35e8c:
  func_0x04891200();
LAB_0cc35e91:
  FUN_04882eb0();
LAB_0cc35e96:
  func_0x0cc93b90();
LAB_0cc35e9b:
  FUN_04882eb0();
LAB_0cc35ea0:
  func_0x0488efe0();
LAB_0cc35ea5:
  func_0x04aa1da0();
LAB_0cc35eaa:
  iVar12 = func_0x04108328(&DAT_0f6fdbd8);
  if (iVar12 != 0) {
    func_0x04160690(0xf6fdbc0,&UNK_0148ae9b);
    func_0x0eee2f40(&SUB_0412ed50,0xf6fdbc0,0xf53dab8);
    FUN_0410844d(&DAT_0f6fdbd8);
  }
  goto LAB_0cc34962;
}


