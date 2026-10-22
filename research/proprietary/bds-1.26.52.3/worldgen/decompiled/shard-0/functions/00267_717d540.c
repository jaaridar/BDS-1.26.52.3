/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x727d540 (ELF vaddr 0x717d540)
 * Label: caller-of-callee
 * Body:  [[0727d540, 0727d87a] [0727d880, 0727dc4a] [0727dc50, 0727dde4] [0727ddf0, 0727de32] [0727de40, 0727de85] [0727de90, 0727df62] [0727e07b, 0727e0d1]]
 * Ghidra: FUN_0727d540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0727d540(float *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  long lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char cVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  float *pfStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  long lStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  uVar14 = func_0x048648e0(*(undefined8 *)(param_2 + 0x40),&UNK_014cd4a1);
  fVar12 = (float)func_0x04863e00(uVar14,3);
  param_1[2] = fVar12;
  uVar14 = func_0x048648e0(*(undefined8 *)(param_2 + 0x40),&UNK_011f16fd);
  fVar12 = (float)func_0x04863f80(0,uVar14);
  param_1[1] = fVar12;
  uVar14 = func_0x048648e0(*(undefined8 *)(param_2 + 0x40),&UNK_01344237);
  fVar12 = (float)func_0x04863f80(0,uVar14);
  *param_1 = fVar12;
  lVar17 = *(long *)(param_1 + 4);
  if (lVar17 != *(long *)(param_1 + 6)) {
    lVar15 = *(long *)(param_1 + 6);
    do {
      lVar21 = lVar15 + -0x20;
      uStack_100 = (long *)(lVar15 + -0x18);
      func_0x054761f0(&uStack_100);
      lVar15 = lVar21;
    } while (lVar21 != lVar17);
  }
  *(long *)(param_1 + 6) = lVar17;
  cVar11 = func_0x04865100(*(undefined8 *)(param_2 + 0x40),&UNK_01463606);
  if (cVar11 != '\0') {
    uVar14 = func_0x04864680(*(undefined8 *)(param_2 + 0x40),&UNK_01463606);
    cVar11 = func_0x04864260(uVar14);
    if (cVar11 == '\0') {
      uVar13 = func_0x048641f0(uVar14);
      pfStack_160 = param_1 + 4;
      func_0x0727e0e0(param_1 + 4,uVar13);
      func_0x04865530(auStack_138,uVar14);
      func_0x048655b0(auStack_110,uVar14);
      lStack_168 = param_2;
      while (cVar11 = func_0x04862c80(auStack_138,auStack_110), cVar11 == '\0') {
        uVar14 = func_0x04862b80(auStack_138);
        func_0x04863110(SUB84((double)*param_1,0),&puStack_1b8);
        func_0x04864d90(&uStack_100,uVar14,&UNK_01275ea7,&puStack_1b8);
        uVar13 = func_0x04863f80(0,&uStack_100);
        lStack_170 = CONCAT44(lStack_170._4_4_,uVar13);
        FUN_04863610(&uStack_100);
        FUN_04863610(&puStack_1b8);
        func_0x04863060(&uStack_100,0);
        func_0x04864d90(auStack_148,uVar14,&UNK_01222d0e,&uStack_100);
        FUN_04863610(&uStack_100);
        lStack_1d8 = 0;
        puStack_1d0 = (undefined8 *)0x0;
        puStack_1c8 = (undefined8 *)0x0;
        cVar11 = func_0x04864260(auStack_148);
        if ((cVar11 == '\0') && (cVar11 = func_0x04864270(auStack_148), cVar11 != '\0')) {
          uVar13 = func_0x048641f0(auStack_148);
          func_0x0727e250(&lStack_1d8,uVar13);
          func_0x04865530(auStack_158,auStack_148);
          func_0x048655b0(auStack_120,auStack_148);
          while( true ) {
            cVar11 = func_0x04862c80(auStack_158,auStack_120);
            if (cVar11 != '\0') break;
            uVar14 = func_0x04862b80(auStack_158);
            lStack_e8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_100 = &uStack_100;
            uStack_d0 = func_0x0cc41880(0xf6ff9e0,&uStack_f8);
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_88 = 3;
            uStack_84 = 1;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            LOCK();
            uStack_60 = 0;
            UNLOCK();
            sVar5 = *(short *)(param_2 + 0x34);
            func_0x04863480(&puStack_1b8,uVar14);
            func_0x0b6c2e40(&puStack_1b8,(int)sVar5,&uStack_100);
            FUN_04863610(&puStack_1b8);
            func_0x0c6ecd40(&puStack_1b8,&uStack_100);
            if (puStack_1d0 < puStack_1c8) {
              puStack_1d0[2] = uStack_1a8;
              *puStack_1d0 = puStack_1b8;
              puStack_1d0[1] = uStack_1b0;
              puStack_1b8 = (undefined8 *)0x0;
              uStack_1b0 = 0;
              uStack_1a8 = 0;
              puStack_1d0[3] = plStack_1a0;
              puStack_1d0[4] = lStack_198;
              puStack_1d0[5] = lStack_190;
              if (lStack_190 == 0) {
                puStack_1d0[3] = puStack_1d0 + 4;
              }
              else {
                *(undefined8 **)(lStack_198 + 0x10) = puStack_1d0 + 4;
                plStack_1a0 = &lStack_198;
                lStack_198 = 0;
                lStack_190 = 0;
              }
              puStack_1d0[8] = uStack_178;
              *(undefined4 *)(puStack_1d0 + 6) = (undefined4)uStack_188;
              *(undefined4 *)((long)puStack_1d0 + 0x34) = uStack_188._4_4_;
              *(undefined4 *)(puStack_1d0 + 7) = (undefined4)uStack_180;
              *(undefined4 *)((long)puStack_1d0 + 0x3c) = uStack_180._4_4_;
              uStack_188 = 0;
              uStack_180 = 0;
              uStack_178 = 0;
              puStack_1d0 = puStack_1d0 + 9;
            }
            else {
              lVar17 = (long)puStack_1d0 - lStack_1d8;
              uVar23 = (lVar17 >> 3) * -0x71c71c71c71c71c7 + 1;
              if (0x38e38e38e38e38e < uVar23) {
                func_0x056be720();
LAB_0727df34:
                func_0x04882eb0();
                goto LAB_0727df39;
              }
              lVar15 = (long)puStack_1c8 - lStack_1d8 >> 3;
              uVar22 = lVar15 * 0x1c71c71c71c71c72;
              if (uVar23 < uVar22) {
                uVar23 = uVar22;
              }
              if (0x1c71c71c71c71c6 < (ulong)(lVar15 * -0x71c71c71c71c71c7)) {
                uVar23 = 0x38e38e38e38e38e;
              }
              plStack_38 = &lStack_1d8;
              if (uVar23 == 0) {
                lVar15 = 0;
              }
              else {
                if (0x38e38e38e38e38e < uVar23) goto LAB_0727df34;
                lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0x48);
                if (lVar15 == 0) {
                  func_0x0eec74c0(uVar23 * 0x48,0);
                  lVar15 = 0;
                }
              }
              lStack_50 = lVar15 + lVar17;
              puStack_40 = (undefined8 *)(lVar15 + uVar23 * 0x48);
              *(undefined8 *)(lVar15 + 0x10 + lVar17) = uStack_1a8;
              *(undefined8 *)(lVar15 + lVar17) = puStack_1b8;
              ((undefined8 *)(lVar15 + lVar17))[1] = uStack_1b0;
              puStack_1b8 = (undefined8 *)0x0;
              uStack_1b0 = 0;
              uStack_1a8 = 0;
              *(long **)(lVar15 + 0x18 + lVar17) = plStack_1a0;
              lVar21 = lVar15 + 0x20 + lVar17;
              *(long *)(lVar15 + 0x20 + lVar17) = lStack_198;
              *(long *)(lVar15 + 0x28 + lVar17) = lStack_190;
              if (lStack_190 == 0) {
                *(long *)(lStack_50 + 0x18) = lVar21;
              }
              else {
                *(long *)(lStack_198 + 0x10) = lVar21;
                plStack_1a0 = &lStack_198;
                lStack_198 = 0;
                lStack_190 = 0;
              }
              *(undefined8 *)(lStack_50 + 0x40) = uStack_178;
              *(undefined4 *)(lStack_50 + 0x30) = (undefined4)uStack_188;
              *(undefined4 *)(lStack_50 + 0x34) = uStack_188._4_4_;
              *(undefined4 *)(lStack_50 + 0x38) = (undefined4)uStack_180;
              *(undefined4 *)(lStack_50 + 0x3c) = uStack_180._4_4_;
              uStack_188 = 0;
              uStack_180 = 0;
              uStack_178 = 0;
              puStack_48 = (undefined8 *)(lStack_50 + 0x48);
              lVar21 = (lStack_1d8 - (long)puStack_1d0) + lStack_50;
              lStack_58 = lVar15;
              func_0x056be730(&lStack_1d8,lStack_1d8,puStack_1d0,lVar21);
              puVar2 = puStack_48;
              lVar17 = lStack_1d8;
              puStack_1d0 = puStack_48;
              puVar10 = puStack_40;
              if (lStack_1d8 != 0) {
                lVar15 = (long)puStack_1c8 - lStack_1d8;
                lStack_1d8 = lVar21;
                puStack_1c8 = puStack_40;
                thunk_FUN_0ee326a0(lVar17,lVar15);
                lVar21 = lStack_1d8;
                puVar10 = puStack_1c8;
              }
              puStack_1c8 = puVar10;
              lStack_1d8 = lVar21;
              puStack_1d0 = puVar2;
              if ((uStack_188 & 1) != 0) {
                thunk_FUN_0ee326a0(uStack_178,uStack_188 & 0xfffffffffffffffe);
              }
            }
            func_0x05476120(&plStack_1a0,lStack_198);
            if (((ulong)puStack_1b8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_1a8,(ulong)puStack_1b8 & 0xfffffffffffffffe);
            }
            func_0x04abe980(&uStack_100);
            func_0x04862ba0(auStack_158);
          }
          func_0x04862b40(auStack_120);
          func_0x04862b40(auStack_158);
        }
        uStack_100._0_5_ = CONCAT14(1,(undefined4)lStack_170);
        uStack_f8 = 0;
        uStack_f0 = 0;
        lStack_e8 = 0;
        func_0x07287af0(&uStack_f8,lStack_1d8,puStack_1d0,
                        ((long)puStack_1d0 - lStack_1d8 >> 3) * -0x71c71c71c71c71c7);
        plVar20 = *(long **)(param_1 + 6);
        if (plVar20 < *(long **)(param_1 + 8)) {
          *plVar20 = (long)uStack_100;
          plVar20[1] = 0;
          plVar20[2] = 0;
          plVar20[3] = 0;
          *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_f8;
          *(undefined4 *)((long)plVar20 + 0xc) = uStack_f8._4_4_;
          *(undefined4 *)(plVar20 + 2) = (undefined4)uStack_f0;
          *(undefined4 *)((long)plVar20 + 0x14) = uStack_f0._4_4_;
          plVar20[3] = lStack_e8;
          uStack_f8 = 0;
          uStack_f0 = 0;
          lStack_e8 = 0;
          plVar20 = plVar20 + 4;
        }
        else {
          lVar17 = (long)plVar20 - *(long *)pfStack_160;
          uVar23 = (lVar17 >> 5) + 1;
          if (0x7ffffffffffffff < uVar23) {
LAB_0727df39:
            func_0x07287a70();
LAB_0727df3e:
            uVar14 = func_0x04882eb0();
            func_0x04862b40(auStack_138);
            uVar14 = func_0x0eee2d70(uVar14);
            func_0x04862b40(auStack_158);
            uStack_100 = &lStack_1d8;
            func_0x054761f0(&uStack_100);
            FUN_04863610(auStack_148);
            func_0x04862b40(auStack_110);
            func_0x04862b40(auStack_138);
            func_0x0eee2d70(uVar14);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar16 = (long)*(long **)(param_1 + 8) - *(long *)pfStack_160;
          uVar22 = (long)uVar16 >> 4;
          if (uVar22 <= uVar23) {
            uVar22 = uVar23;
          }
          if (0x7fffffffffffffdf < uVar16) {
            uVar22 = 0x7ffffffffffffff;
          }
          if (0x7ffffffffffffff < uVar22) goto LAB_0727df3e;
          lVar21 = uVar22 * 0x20;
          lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar21);
          if (lVar15 == 0) {
            func_0x0eec74c0(lVar21,0);
          }
          *(long **)(lVar15 + lVar17) = uStack_100;
          puVar2 = (undefined8 *)(lVar15 + 8 + lVar17);
          *puVar2 = uStack_f8;
          puVar2[1] = uStack_f0;
          *(long *)(lVar15 + 0x18 + lVar17) = lStack_e8;
          uStack_f8 = 0;
          uStack_f0 = 0;
          lStack_e8 = 0;
          lVar19 = *(long *)(param_1 + 4);
          lVar6 = *(long *)(param_1 + 6);
          lVar1 = (lVar19 - lVar6) + lVar15 + lVar17;
          lStack_170 = lVar15;
          if (lVar19 - lVar6 != 0) {
            lVar15 = 0;
            do {
              *(undefined8 *)(lVar1 + lVar15) = *(undefined8 *)(lVar19 + lVar15);
              puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar15);
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar3 = (undefined4 *)(lVar19 + 8 + lVar15);
              uVar13 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              puVar4 = (undefined4 *)(lVar1 + 8 + lVar15);
              *puVar4 = *puVar3;
              puVar4[1] = uVar13;
              puVar4[2] = uVar8;
              puVar4[3] = uVar9;
              *(undefined8 *)(lVar1 + 0x18 + lVar15) = *(undefined8 *)(lVar19 + 0x18 + lVar15);
              puVar2 = (undefined8 *)(lVar19 + 8 + lVar15);
              *puVar2 = 0;
              puVar2[1] = 0;
              *(undefined8 *)(lVar19 + 0x18 + lVar15) = 0;
              lVar18 = lVar19 + lVar15;
              lVar15 = lVar15 + 0x20;
              lStack_128 = lVar17;
            } while (lVar18 + 0x20 != lVar6);
            do {
              lVar17 = *(long *)(lVar19 + 8);
              if (lVar17 != 0) {
                lVar15 = *(long *)(lVar19 + 0x10);
                lVar18 = lVar17;
                if (lVar17 != lVar15) {
                  do {
                    if ((*(byte *)(lVar15 + -0x18) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -8),
                                         *(ulong *)(lVar15 + -0x18) & 0xfffffffffffffffe);
                    }
                    func_0x05476120(lVar15 + -0x30,*(undefined8 *)(lVar15 + -0x28));
                    if ((*(byte *)(lVar15 + -0x48) & 1) != 0) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -0x38),
                                         *(ulong *)(lVar15 + -0x48) & 0xfffffffffffffffe);
                    }
                    lVar15 = lVar15 + -0x48;
                  } while (lVar15 != lVar17);
                  lVar18 = *(long *)(lVar19 + 8);
                }
                *(long *)(lVar19 + 0x10) = lVar17;
                thunk_FUN_0ee326a0(lVar18,*(long *)(lVar19 + 0x18) - lVar18);
              }
              lVar19 = lVar19 + 0x20;
            } while (lVar19 != lVar6);
            lVar19 = *(long *)pfStack_160;
            lVar17 = lStack_128;
          }
          plVar20 = (long *)(lVar17 + lStack_170 + 0x20);
          *(long *)(param_1 + 4) = lVar1;
          *(long **)(param_1 + 6) = plVar20;
          lVar17 = *(long *)(param_1 + 8);
          *(long *)(param_1 + 8) = lVar21 + lStack_170;
          param_2 = lStack_168;
          if (lVar19 != 0) {
            thunk_FUN_0ee326a0(lVar19,lVar17 - lVar19);
            param_2 = lStack_168;
          }
        }
        puStack_1b8 = &uStack_f8;
        *(long **)(param_1 + 6) = plVar20;
        func_0x054761f0(&puStack_1b8);
        uStack_100 = &lStack_1d8;
        func_0x054761f0(&uStack_100);
        FUN_04863610(auStack_148);
        func_0x04862ba0(auStack_138);
      }
      func_0x04862b40(auStack_110);
      func_0x04862b40(auStack_138);
    }
  }
  return;
}


