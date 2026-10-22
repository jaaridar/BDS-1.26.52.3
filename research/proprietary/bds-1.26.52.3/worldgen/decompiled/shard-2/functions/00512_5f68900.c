/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6068900 (ELF vaddr 0x5f68900)
 * Label: caller-of-callee
 * Body:  [[06068900, 06068fe2] [06068ff0, 060690d0] [060690e0, 06069112] [06069120, 06069215] [06069220, 060693bc] [060693c0, 060694c4] [060694d0, 06069567] [06069570, 060695b4] [060695c0, 06069813] [06069820, 0606a150] [0606a160, 0606a340] [0606a350, 0606a5cb] [0606a5d0, 0606a87d] [0606a880, 0606ab72] [0606ab80, 0606ad17] [0606ad23, 0606ad34] [0606af45, 0606af71] [0606afab, 0606afdc]]
 * Ghidra: FUN_06068900
 */


/* WARNING: Removing unreachable block (ram,0x06069c00) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06068900(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,byte *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  code *pcVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  uint *puVar16;
  undefined *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  ulong unaff_RBP;
  undefined1 auVar32 [8];
  undefined8 *puVar33;
  undefined1 auVar34 [8];
  byte *pbVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [8];
  ulong uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  char cStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long *plStack_188;
  undefined1 uStack_179;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  int iStack_158;
  undefined1 uStack_154;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  ulong uStack_130;
  long *plStack_128;
  ulong uStack_120;
  ulong uStack_118;
  byte *pbStack_110;
  long *plStack_108;
  long *plStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [16];
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  byte bStack_64;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  byte bStack_3c;
  undefined1 uStack_38;
  
  pcVar10 = (code *)param_3[7];
  plStack_188 = param_2;
  uStack_b8 = param_4;
  if (pcVar10 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar36 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar36 = (undefined *)param_3[7] == &UNK_0606c090;
    }
    param_3[2] = (long)&UNK_0606c230;
    *(undefined4 *)(param_3 + 4) = 0x4b50f853;
    param_3[3] = (long)&UNK_0606c4f0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x28);
      param_2 = plStack_188;
    }
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    *(undefined4 *)(plVar18 + 4) = 0x3f800000;
    *param_3 = (long)plVar18;
    pcVar10 = (code *)&UNK_0606c090;
    param_3[7] = (long)&UNK_0606c090;
    if (bVar36) {
      lVar21 = param_3[6];
    }
    else {
      lVar21 = 0;
    }
    param_3[6] = lVar21;
    cVar8 = '\x01';
    plVar11 = plVar18;
LAB_06068a1d:
    puStack_98 = &UNK_0f012348;
    if (plVar11 == (long *)0x0) goto LAB_06068a22;
  }
  else {
    cVar8 = *(char *)((long)param_3 + 0x24);
    plVar18 = (long *)*param_3;
    plVar11 = plVar18;
    if (cVar8 == '\x02') {
      plVar11 = param_3;
    }
    if ((int)param_3[4] == 0x4b50f853) goto LAB_06068a1d;
LAB_06068a22:
    puStack_98 = &UNK_0f012348;
    lVar21 = param_3[5];
    lVar14 = param_3[6];
    if (lVar14 == 0) {
      (*pcVar10)(0,param_3,0);
      lVar14 = param_3[6];
      cVar8 = *(char *)((long)param_3 + 0x24);
      plVar18 = (long *)*param_3;
    }
    if (cVar8 == '\x02') {
      plVar18 = param_3;
    }
    plVar11 = (long *)func_0x0488e200(lVar21,lVar14,0x4b50f853,plVar18);
  }
  uStack_58 = *(undefined8 *)param_5;
  uStack_50 = *(undefined8 *)(param_5 + 8);
  plVar18 = *(long **)(param_5 + 0x10);
  uStack_80 = uStack_58;
  uStack_78 = uStack_50;
  if (plVar18 == (long *)0x0) {
    plVar18 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0);
    uStack_58 = *(undefined8 *)param_5;
    uStack_50 = *(undefined8 *)(param_5 + 8);
    plVar18 = *(long **)(param_5 + 0x10);
  }
  uStack_68 = *(undefined4 *)(param_5 + 0x18);
  bStack_64 = param_5[0x1c];
  uStack_60 = 1;
  puStack_a0 = &UNK_0f011c18;
  if (plVar18 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar18 + 0x30))(plVar18,1);
  }
  uStack_40 = *(undefined4 *)(param_5 + 0x18);
  bStack_3c = param_5[0x1c];
  uStack_38 = 1;
  bVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  if (bVar7 == 1) {
    uVar12 = (**(code **)(*param_2 + 0xa8))(param_2);
    if ((*(long **)(param_5 + 0x10) != (long *)0x0) &&
       (uVar13 = (**(code **)(**(long **)(param_5 + 0x10) + 0x10))(), uVar13 < uVar12)) {
      uStack_a8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*(undefined8 *)param_5,0x40,&uStack_a8);
      if ((uStack_a8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a8 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&uStack_1f8,*(undefined8 *)param_5);
    if (uVar12 == 0) {
      return;
    }
    plStack_128 = plVar11 + 2;
    uStack_f0 = 0;
    uStack_f8 = uVar12;
    pbStack_c0 = param_5;
LAB_06068cef:
    uVar13 = uStack_1f8;
    uVar1 = auStack_1f0._0_4_;
    if ((uint)auStack_1f0._0_4_ <= *(uint *)(uStack_1f8 + 0x2b0) &&
        *(uint *)(uStack_1f8 + 0x2b0) != 0xffffffff) {
      return;
    }
    auVar39 = (**(code **)(*plStack_188 + 0xc0))();
    puVar33 = puStack_70;
    auStack_d0 = auVar39;
    if (puStack_70 != (undefined8 *)0x0) {
      lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar21 == 0) {
        func_0x048b0de0(&uStack_178,&uStack_179);
        _DAT_0f54fd90 = (undefined4)uStack_178;
        uRam000000000f54fd94 = uStack_178._4_4_;
        uVar4 = (undefined4)uStack_170;
        uVar5 = uStack_170._4_4_;
        uStack_178 = (long *)0x0;
        uStack_170 = (long *)0x0;
        plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar4;
        uRam000000000f54fd9c = uVar5;
        if (plVar18 != (long *)0x0) {
          LOCK();
          plVar20 = plVar18 + 1;
          lVar21 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar21 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            FUN_0412c2d0(plVar18);
          }
        }
        plVar18 = uStack_170;
        if (uStack_170 != (long *)0x0) {
          LOCK();
          plVar20 = uStack_170 + 1;
          lVar21 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar21 == 0) {
            (**(code **)(*uStack_170 + 0x10))(uStack_170);
            FUN_0412c2d0(plVar18);
          }
        }
        lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar12 = uStack_f8;
      }
      puStack_1b8 = (undefined8 *)&UNK_05ea5bd0;
      uStack_1a8 = 0x989eedf9;
      pcStack_1b0 = (code *)0x0;
      cStack_1a4 = '\x04';
      auStack_1c8 = (undefined1  [8])auStack_d0;
      uStack_198 = 0;
      puStack_190 = &UNK_05ea5bb0;
      lStack_1a0 = lVar21;
      (**(code **)*puVar33)(puVar33,auStack_1c8,uStack_80);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      uVar13 = uStack_1f8;
      uVar1 = auStack_1f0._0_4_;
    }
    uVar6 = auStack_d0._8_8_;
    uVar23 = auStack_d0._0_8_;
    puVar15 = (ulong *)(ulong)uVar1;
    if ((*(uint *)(uVar13 + 0x2b0) != 0xffffffff) && (uVar1 <= *(uint *)(uVar13 + 0x2b0)))
    goto LAB_06068ce3;
    uVar2 = *(undefined8 *)param_5;
    pbStack_110 = (byte *)0x0;
    if (auStack_d0._0_8_ == 0) {
      param_5 = (byte *)((auStack_d0._8_8_ & 0x7f) << 0x30);
    }
    else {
      lVar21 = auStack_d0._8_8_ + 9;
      puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && puVar15 == (ulong *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *puVar15 = uVar6;
      func_0x0eee2f00(puVar15 + 1,uVar23,uVar6);
      *(undefined1 *)((long)(puVar15 + 1) + uVar6) = 0;
      param_5 = (byte *)((ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pbStack_110 = param_5;
    puVar16 = (uint *)func_0x0ed6d180(uVar2,&pbStack_110,0);
    if (((ulong)pbStack_110 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pbStack_110 & 0xff00ffffffffffff) - 8);
    }
    plVar18 = (long *)auStack_d0._8_8_;
    uVar23 = auStack_d0._0_8_;
    pbStack_110 = (byte *)0x0;
    if ((ulong)auStack_d0._8_8_ < (long *)0xfffffffffffffff8) {
      if ((ulong)auStack_d0._8_8_ < (long *)0x17) {
        uStack_178 = (long *)CONCAT71(uStack_178._1_7_,auStack_d0[8] * '\x02');
        puVar17 = (undefined *)((long)&uStack_178 + 1);
        if ((long *)auStack_d0._8_8_ != (long *)0x0) goto LAB_06069040;
      }
      else {
        uVar12 = (auStack_d0._8_8_ | 7) + 1;
        if ((auStack_d0._8_8_ | 7) == 0x17) {
          uVar12 = 0x1a;
        }
        puVar17 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (puVar17 == (undefined *)0x0) {
          func_0x0eec74c0(uVar12,0);
        }
        uStack_178 = (long *)(uVar12 | 1);
        uStack_170 = plVar18;
        puStack_168 = puVar17;
LAB_06069040:
        func_0x0eee2ee0(puVar17,uVar23,plVar18);
      }
      puVar17[(long)plVar18] = 0;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      puStack_1b8 = (undefined8 *)0x0;
      *plVar18 = 0;
      plVar18[1] = 0;
      plVar18[2] = 0;
      uStack_130 = CONCAT71(uStack_130._1_7_,(undefined1)uStack_178) & 0xffffffffffffff01;
      auStack_1c8 = (undefined1  [8])plVar18;
      uStack_1c0 = plVar11;
      if (((ulong)uStack_178 & 1) == 0) {
        plVar18[5] = (long)puStack_168;
        *(undefined4 *)(plVar18 + 3) = (undefined4)uStack_178;
        *(undefined4 *)((long)plVar18 + 0x1c) = uStack_178._4_4_;
        *(undefined4 *)(plVar18 + 4) = (undefined4)uStack_170;
        *(undefined4 *)((long)plVar18 + 0x24) = uStack_170._4_4_;
      }
      else {
        func_0x0412e5e0(plVar18 + 3,puStack_168,uStack_170);
      }
      plVar18[6] = 0;
      bVar7 = *(byte *)(plVar18 + 3);
      if ((bVar7 & 1) == 0) {
        if (bVar7 >> 1 != 0) goto LAB_0606912d;
LAB_06069220:
        uVar12 = 0;
      }
      else {
        if (plVar18[4] == 0) goto LAB_06069220;
LAB_0606912d:
        if ((bVar7 & 1) == 0) {
          pbVar35 = (byte *)((long)plVar18 + 0x19);
          if (pbVar35 != (byte *)0x0) goto LAB_0606914f;
          goto LAB_06069220;
        }
        pbVar35 = (byte *)plVar18[5];
        if (pbVar35 == (byte *)0x0) goto LAB_06069220;
LAB_0606914f:
        if (*pbVar35 == 0) goto LAB_06069220;
        uVar13 = func_0x0eee2e90(pbVar35);
        uVar12 = 0xcbf29ce484222325;
        if (uVar13 != 0) {
          if (7 < uVar13) {
            uVar28 = uVar13 & 0xfffffffffffffff8;
            do {
              uVar12 = (((((((uVar12 * 0x100000001b3 ^ (ulong)*pbVar35) * 0x100000001b3 ^
                            (ulong)pbVar35[1]) * 0x100000001b3 ^ (ulong)pbVar35[2]) * 0x100000001b3
                          ^ (ulong)pbVar35[3]) * 0x100000001b3 ^ (ulong)pbVar35[4]) * 0x100000001b3
                        ^ (ulong)pbVar35[5]) * 0x100000001b3 ^ (ulong)pbVar35[6]) * 0x100000001b3 ^
                       (ulong)pbVar35[7];
              pbVar35 = pbVar35 + 8;
              uVar28 = uVar28 - 8;
            } while (uVar28 != 0);
          }
          if ((uVar13 & 7) != 0) {
            uVar28 = 0;
            do {
              uVar12 = uVar12 * 0x100000001b3 ^ (ulong)pbVar35[uVar28];
              uVar28 = uVar28 + 1;
            } while (((uint)uVar13 & 7) != uVar28);
          }
        }
      }
      auVar34 = auStack_1c8;
      plVar18[2] = uVar12;
      plVar18[7] = 0;
      plVar18[8] = 0;
      puStack_1b8 = (undefined8 *)CONCAT71(puStack_1b8._1_7_,1);
      plVar18[1] = uVar12;
      uVar12 = *(ulong *)((long)auStack_1c8 + 0x10);
      *(ulong *)((long)auStack_1c8 + 8) = uVar12;
      uVar13 = plVar11[1];
      if (uVar13 != 0) {
        uVar28 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
        uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar28 >> 0x38 < 2) {
          uVar30 = uVar13 - 1 & uVar12;
          puVar33 = *(undefined8 **)(*plVar11 + uVar30 * 8);
        }
        else {
          uVar30 = uVar12;
          if (uVar13 <= uVar12) {
            if ((uVar12 | uVar13) >> 0x20 == 0) {
              uVar30 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
              puVar33 = *(undefined8 **)(*plVar11 + uVar30 * 8);
              goto joined_r0x0606930a;
            }
            uVar30 = uVar12 % uVar13;
          }
          puVar33 = *(undefined8 **)(*plVar11 + uVar30 * 8);
        }
joined_r0x0606930a:
        if ((puVar33 != (undefined8 *)0x0) &&
           (auVar32 = (undefined1  [8])*puVar33, auVar32 != (undefined1  [8])0x0)) {
          plVar18 = (long *)((long)auStack_1c8 + 0x10);
          uStack_120 = (long)auStack_1c8 + 0x19;
          plStack_100 = plVar18;
          if ((byte)(uVar28 >> 0x38) < 2) {
            plVar31 = (long *)(uVar13 - 1);
            plStack_108 = plVar31;
            do {
              if (*(ulong *)((long)auVar32 + 8) == uVar12) {
                if (*(ulong *)((long)auVar32 + 0x10) == uVar12) {
                  plVar20 = (long *)((long)auVar32 + 0x10);
                  if ((*(long **)((long)auVar32 + 0x30) == plVar18) &&
                     (*(long **)((long)auVar34 + 0x30) == plVar20)) goto LAB_060699db;
                  bVar7 = *(byte *)((long)auVar32 + 0x18);
                  if ((bVar7 & 1) == 0) {
                    uVar28 = (ulong)(bVar7 >> 1);
                    uVar22 = (ulong)*(byte *)((long)auVar34 + 0x18);
                    if ((*(byte *)((long)auVar34 + 0x18) & 1) == 0) goto LAB_060694ba;
LAB_060694e8:
                    if (uVar28 != *(ulong *)((long)auVar34 + 0x20)) goto LAB_0606946c;
                  }
                  else {
                    uVar28 = *(ulong *)((long)auVar32 + 0x20);
                    uVar22 = (ulong)*(byte *)((long)auVar34 + 0x18);
                    if ((*(byte *)((long)auVar34 + 0x18) & 1) != 0) goto LAB_060694e8;
LAB_060694ba:
                    if (uVar28 != uVar22 >> 1) goto LAB_0606946c;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar21 = (long)auVar32 + 0x19;
                  }
                  else {
                    lVar21 = *(long *)((long)auVar32 + 0x28);
                  }
                  uVar28 = uStack_120;
                  if ((uVar22 & 1) != 0) {
                    uVar28 = *(ulong *)((long)auVar34 + 0x28);
                  }
                  iVar9 = func_0x0eee3000(lVar21,uVar28);
                  plVar18 = plStack_100;
                  plVar31 = plStack_108;
                  if (iVar9 == 0) goto LAB_06069a31;
                }
LAB_0606946c:
                *(long *)((long)auVar32 + 0x30) = 0;
              }
              else if ((*(ulong *)((long)auVar32 + 8) & (ulong)plVar31) != uVar30) break;
              auVar32 = *(undefined1 (*) [8])auVar32;
            } while (auVar32 != (undefined1  [8])0x0);
          }
          else {
            do {
              uVar28 = *(ulong *)((long)auVar32 + 8);
              if (uVar28 == uVar12) {
                if (*(ulong *)((long)auVar32 + 0x10) == uVar12) {
                  plVar20 = (long *)((long)auVar32 + 0x10);
                  if ((*(long **)((long)auVar32 + 0x30) == plVar18) &&
                     (*(long **)((long)auVar34 + 0x30) == plVar20)) goto LAB_060699db;
                  bVar7 = *(byte *)((long)auVar32 + 0x18);
                  if ((bVar7 & 1) == 0) {
                    uVar28 = (ulong)(bVar7 >> 1);
                    uVar22 = (ulong)*(byte *)((long)auVar34 + 0x18);
                    if ((*(byte *)((long)auVar34 + 0x18) & 1) == 0) goto LAB_060693b2;
LAB_060693f1:
                    if (uVar28 != *(ulong *)((long)auVar34 + 0x20)) goto LAB_06069364;
                  }
                  else {
                    uVar28 = *(ulong *)((long)auVar32 + 0x20);
                    uVar22 = (ulong)*(byte *)((long)auVar34 + 0x18);
                    if ((*(byte *)((long)auVar34 + 0x18) & 1) != 0) goto LAB_060693f1;
LAB_060693b2:
                    if (uVar28 != uVar22 >> 1) goto LAB_06069364;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar21 = (long)auVar32 + 0x19;
                  }
                  else {
                    lVar21 = *(long *)((long)auVar32 + 0x28);
                  }
                  uVar28 = uStack_120;
                  if ((uVar22 & 1) != 0) {
                    uVar28 = *(ulong *)((long)auVar34 + 0x28);
                  }
                  iVar9 = func_0x0eee3000(lVar21,uVar28);
                  plVar18 = plStack_100;
                  if (iVar9 == 0) goto LAB_06069a31;
                }
LAB_06069364:
                *(long *)((long)auVar32 + 0x30) = 0;
              }
              else {
                if (uVar13 <= uVar28) {
                  if ((uVar28 | uVar13) >> 0x20 == 0) {
                    if ((uVar28 & 0xffffffff) % (uVar13 & 0xffffffff) == uVar30) goto LAB_0606936c;
                    break;
                  }
                  uVar28 = uVar28 % uVar13;
                }
                if (uVar28 != uVar30) break;
              }
LAB_0606936c:
              auVar32 = *(undefined1 (*) [8])auVar32;
            } while (auVar32 != (undefined1  [8])0x0);
          }
        }
      }
      if (-1 < (long)uVar13) {
        fVar38 = (float)(long)uVar13;
        fVar37 = *(float *)(plVar11 + 4);
        if (uVar13 == 0) goto LAB_060695de;
LAB_060695d1:
        if (fVar38 * fVar37 < (float)(plVar11[3] + 1)) goto LAB_060695de;
        goto LAB_06069760;
      }
      fVar38 = (float)uVar13;
      fVar37 = *(float *)(plVar11 + 4);
      if (uVar13 != 0) goto LAB_060695d1;
LAB_060695de:
      uVar12 = 1;
      if (2 < uVar13) {
        uVar12 = (ulong)((uVar13 & uVar13 - 1) != 0);
      }
      uVar12 = uVar13 * 2 | uVar12;
      fVar37 = (float)func_0x0eee3ab0((float)(plVar11[3] + 1) / fVar37);
      uVar28 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
      if (uVar28 < uVar12) {
        uVar28 = uVar12;
      }
      uVar12 = 2;
      if ((uVar28 == 1) || (uVar12 = uVar28, (uVar28 & uVar28 - 1) == 0)) {
        bVar36 = uVar12 < uVar13;
        if (uVar12 <= uVar13) goto LAB_06069669;
LAB_06069648:
        func_0x05e92d70(plVar11,uVar12);
      }
      else {
        uVar12 = func_0x0412c3f0();
        uVar13 = plVar11[1];
        bVar36 = uVar12 < uVar13;
        if (uVar13 < uVar12) goto LAB_06069648;
LAB_06069669:
        if (bVar36) {
          fVar37 = (float)func_0x0eee3ab0((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
          uVar28 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
          if ((uVar13 < 3) ||
             (uVar30 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
             uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333),
             1 < (byte)(((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar28 = func_0x0412c3f0(uVar28);
          }
          else if (1 < uVar28) {
            lVar21 = 0x3f;
            if (uVar28 - 1 != 0) {
              for (; uVar28 - 1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar28 = 1L << (-((byte)lVar21 ^ 0x3f) & 0x3f);
          }
          if (uVar12 <= uVar28) {
            uVar12 = uVar28;
          }
          if (uVar12 < uVar13) goto LAB_06069648;
        }
      }
LAB_06069760:
      uVar12 = plVar11[1];
      uVar13 = *(ulong *)((long)auVar34 + 8);
      uVar28 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
      uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar28 >> 0x38 < 2) {
        uVar13 = uVar13 & uVar12 - 1;
        lVar21 = *plVar11;
        plVar18 = *(long **)(lVar21 + uVar13 * 8);
        if (plVar18 != (long *)0x0) goto LAB_0606984d;
LAB_060697de:
        *(long *)auVar34 = *plStack_128;
        *plStack_128 = (long)auVar34;
        *(long **)(lVar21 + uVar13 * 8) = plStack_128;
        if (*(long *)auVar34 != 0) {
          uVar13 = *(ulong *)(*(long *)auVar34 + 8);
          if ((byte)(uVar28 >> 0x38) < 2) {
            *(undefined1 (*) [8])(lVar21 + (uVar13 & uVar12 - 1) * 8) = auVar34;
          }
          else {
            if (uVar12 <= uVar13) {
              if ((uVar13 | uVar12) >> 0x20 == 0) {
                *(undefined1 (*) [8])(lVar21 + ((uVar13 & 0xffffffff) % (uVar12 & 0xffffffff)) * 8)
                     = auVar34;
                goto LAB_06069856;
              }
              uVar13 = uVar13 % uVar12;
            }
            *(undefined1 (*) [8])(lVar21 + uVar13 * 8) = auVar34;
          }
        }
      }
      else {
        if (uVar13 < uVar12) {
LAB_06069840:
          lVar21 = *plVar11;
          plVar18 = *(long **)(lVar21 + uVar13 * 8);
        }
        else {
          if ((uVar13 | uVar12) >> 0x20 != 0) {
            uVar13 = uVar13 % uVar12;
            goto LAB_06069840;
          }
          uVar13 = (uVar13 & 0xffffffff) % (uVar12 & 0xffffffff);
          lVar21 = *plVar11;
          plVar18 = *(long **)(lVar21 + uVar13 * 8);
        }
        if (plVar18 == (long *)0x0) goto LAB_060697de;
LAB_0606984d:
        *(long *)auVar34 = *plVar18;
        *plVar18 = (long)auVar34;
      }
LAB_06069856:
      plVar11[3] = plVar11[3] + 1;
      auVar32 = auVar34;
      if (((ulong)uStack_178 & 1) != 0) goto LAB_06069869;
      goto LAB_06069882;
    }
    FUN_04882e30();
    goto LAB_0606acc6;
  }
  if ((bVar7 & 2) == 0) {
    lVar21 = param_3[5];
    lVar14 = func_0x048b2190(lVar21);
    plVar18 = *(long **)(lVar14 + 0x78);
    if (plVar18 == (long *)0x0) {
LAB_06068c54:
      if (*(code **)(lVar14 + 0x30) == (code *)0x0) {
        puStack_168 = &UNK_0488e0b0;
        iStack_158 = 0x48b5725f;
        pcStack_160 = (code *)0x0;
        uStack_154 = 0;
        uStack_178 = (long *)0x0;
        uStack_148 = 0;
        puStack_140 = (undefined *)0x0;
        lStack_150 = lVar21;
        goto LAB_06069c59;
      }
      (**(code **)(lVar14 + 0x30))(&uStack_178,lVar21);
      if (iStack_158 != -0x3677df2f) goto LAB_06069c59;
LAB_06069caf:
      plVar18 = (long *)&UNK_0133e465;
      uVar12 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar27 = *plVar18;
      if (lVar27 == 0 || lVar27 == plVar18[1]) goto LAB_06068c54;
      lVar25 = 0;
      bVar36 = false;
      do {
        lVar26 = lVar27;
        if (lVar25 != 0) {
          lVar26 = lVar25;
        }
        bVar3 = lVar25 != 0;
        if (*(long *)(lVar27 + 8) != 0) {
          lVar26 = lVar25;
          bVar3 = bVar36;
        }
        lVar27 = lVar27 + 0x20;
        lVar25 = lVar26;
        bVar36 = bVar3;
      } while (lVar27 != plVar18[1]);
      if (bVar3 || lVar26 == 0) goto LAB_06068c54;
      (**(code **)(lVar26 + 0x18))(&uStack_178,lVar21,0);
      if (iStack_158 == -0x3677df2f) goto LAB_06069caf;
LAB_06069c59:
      func_0x05ea6440(auStack_1c8,&uStack_178);
      puVar17 = puStack_190;
      if ((puStack_190 != (undefined *)0x0) && ((byte)(cStack_1a4 - 1U) < 2)) {
        func_0x048b0900(&uStack_178,auStack_1c8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (puVar17 != (undefined *)0x0) goto LAB_06069caf;
      plVar18 = (long *)&UNK_01411d3a;
      uVar12 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar12 < 0xfffffffffffffff8) {
      if (uVar12 < 0x17) {
        uVar13 = uStack_1f8 >> 8;
        uStack_1f8 = CONCAT71((int7)uVar13,(char)uVar12 * '\x02');
        uVar28 = (long)&uStack_1f8 + 1;
        if (uVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_1f8._1_1_ = 0;
          goto joined_r0x06069d61;
        }
      }
      else {
        uVar13 = 0x1a;
        if ((uVar12 | 7) != 0x17) {
          uVar13 = (uVar12 | 7) + 1;
        }
        uVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (uVar28 == 0) {
          func_0x0eec74c0(uVar13,0);
        }
        uStack_1f8 = uVar13 | 1;
        auStack_1f0 = (undefined1  [8])uVar12;
        uStack_1e8 = uVar28;
      }
      func_0x0eee2f00(uVar28,plVar18,uVar12);
      *(undefined1 *)(uVar28 + uVar12) = 0;
joined_r0x06069d61:
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(&uStack_178);
      }
      uVar12 = uStack_1f8;
      puVar15 = (ulong *)(uStack_1f8 & 0xff);
      auVar34 = auStack_1f0;
      if ((uStack_1f8 & 1) == 0) {
        auVar34 = (undefined1  [8])(uStack_1f8 >> 1 & 0x7f);
      }
      plVar18 = (long *)((long)auVar34 + 0xc);
      if (plVar18 < (long *)0xfffffffffffffff8) {
        uVar23 = *(undefined8 *)param_5;
        if (plVar18 < (long *)0x17) {
          uStack_1c0 = (long *)0x0;
          puStack_1b8 = (undefined8 *)0x0;
          auStack_1c8._1_7_ = 0;
          auStack_1c8[0] = (char)plVar18 * '\x02';
        }
        else {
          uVar13 = 0x1a;
          if (((ulong)plVar18 | 7) != 0x17) {
            uVar13 = ((ulong)plVar18 | 7) + 1;
          }
          puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
          if (puStack_1b8 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar13,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar13 | 1);
          uStack_1c0 = plVar18;
        }
        lVar21 = (long)puStack_1b8 + 0xc;
        bVar36 = ((ulong)auStack_1c8 & 1) == 0;
        puVar33 = puStack_1b8;
        if (bVar36) {
          puVar33 = (undefined8 *)(auStack_1c8 + 1);
        }
        *puVar33 = 0x6465746365707865;
        *(undefined4 *)(puVar33 + 1) = 0x206e6120;
        lVar14 = (long)&uStack_1c0 + 5;
        if (!bVar36) {
          lVar14 = lVar21;
        }
        if (auVar34 != (undefined1  [8])0x0) {
          uVar13 = uStack_1e8;
          if ((uVar12 & 1) == 0) {
            uVar13 = (long)&uStack_1f8 + 1;
          }
          func_0x0eee2ee0(lVar14,uVar13,auVar34);
        }
        *(undefined1 *)(lVar14 + (long)auVar34) = 0;
        plVar18 = (long *)((ulong)auStack_1c8 >> 1 & 0x7f);
        puVar33 = (undefined8 *)(auStack_1c8 + 1);
        if (((ulong)auStack_1c8 & 1) != 0) {
          plVar18 = uStack_1c0;
          puVar33 = puStack_1b8;
        }
        uStack_118 = 0;
        if (puVar33 == (undefined8 *)0x0) {
          uStack_118 = (ulong)((uint)plVar18 & 0x7f) << 0x30;
        }
        else {
          lVar21 = (long)plVar18 + 9;
          puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && puVar19 == (undefined8 *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *puVar19 = plVar18;
          func_0x0eee2f00(puVar19 + 1,puVar33,plVar18);
          *(undefined1 *)((long)(puVar19 + 1) + (long)plVar18) = 0;
          uStack_118 = (ulong)(puVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar23,8,&uStack_118);
        if ((uStack_118 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
        }
        uStack_118 = 0;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        if ((uVar12 & 1) != 0) {
          func_0x0412a280(uStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0606acc6:
      uVar23 = FUN_04882e30();
      uVar23 = func_0x04882e20(uVar23);
      uVar23 = func_0x04882e20(uVar23);
      uVar23 = func_0x04882e20(uVar23);
      func_0x0ee386e0(&uStack_b0);
      uVar23 = func_0x0eee2d70(uVar23);
      if ((*param_5 & 1) != 0) {
        func_0x0412a280(plVar18[5],plVar18[3] & 0xfffffffffffffffe);
      }
      func_0x05d85c00(&uStack_178);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (((ulong)auStack_1f0 & 1) != 0) {
        func_0x0412a280(plStack_1e0,(ulong)auStack_1f0 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_188 + 0xd0))();
      func_0x0ed6d560(puVar15);
      uVar23 = func_0x0eee2d70(uVar23);
      uVar23 = func_0x04882e20(uVar23);
      func_0x04882e20(uVar23);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar12 = FUN_04882e30();
LAB_06069fc4:
    fVar37 = (float)uVar12;
LAB_06069fdc:
    fVar37 = (float)func_0x0eee3ab0(fVar37 / *(float *)(plVar11 + 4));
    plVar20 = (long *)((long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37);
    if ((param_2 < (long *)0x3) ||
       (uVar12 = (long)param_2 - ((ulong)param_2 >> 1 & 0x5555555555555555),
       uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
       1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar20 = (long *)func_0x0412c3f0(plVar20);
    }
    else if ((long *)0x1 < plVar20) {
      lVar21 = 0x3f;
      if ((undefined *)((long)plVar20 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar20 + -1) >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      plVar20 = (long *)(1L << (-((byte)lVar21 ^ 0x3f) & 0x3f));
    }
    if (plVar18 <= plVar20) {
      plVar18 = plVar20;
    }
    if (param_2 <= plVar18) goto LAB_0606a0a2;
  }
  else {
    unaff_RBP = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if ((*(long **)(param_5 + 0x10) != (long *)0x0) &&
       (uVar12 = (**(code **)(**(long **)(param_5 + 0x10) + 0x10))(), uVar12 < unaff_RBP)) {
      uStack_b0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*(undefined8 *)param_5,0x40,&uStack_b0);
      if ((uStack_b0 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b0 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar37 = (float)func_0x0eee3ab0((float)unaff_RBP / *(float *)(plVar11 + 4));
    plVar20 = (long *)((long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37);
    plVar18 = (long *)0x2;
    if ((plVar20 == (long *)0x1) ||
       (plVar18 = plVar20, ((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0)) {
      param_2 = (long *)plVar11[1];
      bVar36 = plVar18 < param_2;
      if (plVar18 <= param_2) goto LAB_06069c1b;
    }
    else {
      plVar18 = (long *)func_0x0412c3f0();
      param_2 = (long *)plVar11[1];
      bVar36 = plVar18 < param_2;
      if (plVar18 <= param_2) {
LAB_06069c1b:
        if (!bVar36) goto LAB_0606a0a2;
        uVar12 = plVar11[3];
        if ((long)uVar12 < 0) goto LAB_06069fc4;
        fVar37 = (float)(long)uVar12;
        goto LAB_06069fdc;
      }
    }
  }
  func_0x05e92d70(plVar11,plVar18);
LAB_0606a0a2:
  func_0x0ed6d600(auStack_d0,*(undefined8 *)param_5);
  if (unaff_RBP == 0) {
    return;
  }
  uStack_130 = 0x1b0000014af0d9;
  uStack_f8 = 0x38000001448967;
  plStack_100 = (long *)0x3a000001208ef5;
  plStack_88 = plVar11 + 2;
  uVar12 = 0;
  plVar18 = plStack_188;
  uStack_f0 = unaff_RBP;
  pbStack_c0 = param_5;
LAB_0606a180:
  if ((*(uint *)(auStack_d0._0_8_ + 0x2b0) != 0xffffffff) &&
     ((uint)auStack_d0._8_4_ <= *(uint *)(auStack_d0._0_8_ + 0x2b0))) {
    return;
  }
  puVar16 = *(uint **)param_5;
  func_0x0ed6d4a0(puVar16,uVar12);
  (**(code **)(*plVar18 + 200))(plVar18,uVar12);
  cVar8 = (**(code **)(*plVar18 + 0x18))(plVar18);
  if ((cVar8 != '\x01') || (lVar21 = (**(code **)(*plVar18 + 0xa8))(plVar18), lVar21 == 2)) {
    cVar8 = (**(code **)(*plVar18 + 0xb8))(plVar18,&UNK_013aac9a,3);
    if (cVar8 == '\0') {
      uStack_e0 = uStack_f8;
      func_0x0ed5ffe0(*(undefined8 *)param_5,8,&uStack_e0);
      if ((uStack_e0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e0 & 0xff00ffffffffffff) - 8);
      }
      uStack_e0 = 0;
      goto LAB_0606ab20;
    }
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1f8 = 0;
    auStack_1f0 = (undefined1  [8])0x0;
    plStack_1d8 = (long *)0x0;
    lStack_1a0 = param_3[5];
    puStack_1b8 = (undefined8 *)&UNK_05e9f930;
    uStack_1a8 = 0xc98820d1;
    pcStack_1b0 = (code *)0x0;
    cStack_1a4 = '\x03';
    auStack_1c8 = (undefined1  [8])&uStack_1f8;
    uStack_198 = 0;
    puStack_190 = &UNK_05e9f910;
    func_0x0ed75bc0(&puStack_98,plVar18,auStack_1c8,uStack_b8,&uStack_80);
    (**(code **)(*plVar18 + 0xd0))(plVar18);
    cVar8 = (**(code **)(*plVar18 + 0xb8))(plVar18,&UNK_0138e8dd,5);
    uVar13 = uStack_1f8;
    if (cVar8 != '\0') {
      uVar28 = plVar11[1];
      if (uVar28 != 0) {
        uVar30 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
        uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333);
        uVar30 = ((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar30 >> 0x38 < 2) {
          uStack_200 = uVar28 - 1 & uStack_1f8;
        }
        else {
          uStack_200 = uStack_1f8;
          if (uVar28 <= uStack_1f8) {
            if ((uStack_1f8 | uVar28) >> 0x20 == 0) {
              uStack_200 = (uStack_1f8 & 0xffffffff) % (uVar28 & 0xffffffff);
            }
            else {
              uStack_200 = uStack_1f8 % uVar28;
            }
          }
        }
        puVar33 = *(undefined8 **)(*plVar11 + uStack_200 * 8);
        if ((puVar33 != (undefined8 *)0x0) && (plVar20 = (long *)*puVar33, plVar20 != (long *)0x0))
        {
          plStack_128 = plStack_1e0;
          uVar22 = uStack_1e8;
          if (((ulong)auStack_1f0 & 1) == 0) {
            plStack_128 = (long *)(auStack_1f0 + 1);
            uVar22 = (ulong)auStack_1f0 >> 1 & 0x7f;
          }
          plStack_108 = plStack_1d8;
          plVar18 = plStack_1d8;
          uStack_120 = uVar22;
          if ((byte)(uVar30 >> 0x38) < 2) {
            uVar30 = uVar28 - 1;
            uStack_90 = uVar30;
            do {
              if (plVar20[1] == uVar13) {
                if (plVar20[2] == uVar13) {
                  plVar31 = plVar20 + 2;
                  if (plVar18 == plVar31 && (undefined8 *)plVar20[6] == &uStack_1f8)
                  goto LAB_0606aa35;
                  bVar7 = *(byte *)(plVar20 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar29 = (ulong)(bVar7 >> 1);
                  }
                  else {
                    uVar29 = plVar20[4];
                  }
                  if (uVar29 == uVar22) {
                    if ((bVar7 & 1) == 0) {
                      lVar21 = (long)plVar20 + 0x19;
                    }
                    else {
                      lVar21 = plVar20[5];
                    }
                    iVar9 = func_0x0eee3000(lVar21,plStack_128,uVar22);
                    uVar30 = uStack_90;
                    plVar18 = plStack_108;
                    uVar22 = uStack_120;
                    if (iVar9 == 0) goto LAB_0606ac37;
                  }
                }
                plVar20[6] = 0;
              }
              else if ((plVar20[1] & uVar30) != uStack_200) break;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              uVar30 = plVar20[1];
              if (uVar30 == uVar13) {
                if (plVar20[2] == uVar13) {
                  plVar31 = plVar20 + 2;
                  if (plVar18 == plVar31 && (undefined8 *)plVar20[6] == &uStack_1f8)
                  goto LAB_0606aa35;
                  bVar7 = *(byte *)(plVar20 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar30 = (ulong)(bVar7 >> 1);
                  }
                  else {
                    uVar30 = plVar20[4];
                  }
                  if (uVar30 == uVar22) {
                    if ((bVar7 & 1) == 0) {
                      lVar21 = (long)plVar20 + 0x19;
                    }
                    else {
                      lVar21 = plVar20[5];
                    }
                    iVar9 = func_0x0eee3000(lVar21,plStack_128,uVar22);
                    plVar18 = plStack_108;
                    uVar22 = uStack_120;
                    if (iVar9 == 0) goto LAB_0606ac37;
                  }
                }
                plVar20[6] = 0;
              }
              else {
                if (uVar28 <= uVar30) {
                  if ((uVar30 | uVar28) >> 0x20 == 0) {
                    if ((uVar30 & 0xffffffff) % (uVar28 & 0xffffffff) == uStack_200)
                    goto LAB_0606a57d;
                    break;
                  }
                  uVar30 = uVar30 % uVar28;
                }
                if (uVar30 != uStack_200) break;
              }
LAB_0606a57d:
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      puStack_168 = (undefined *)0x0;
      *plVar18 = 0;
      plVar18[1] = uVar13;
      plVar18[2] = 0;
      plVar18[3] = 0;
      plVar18[4] = 0;
      plVar18[5] = 0;
      plVar18[6] = 0;
      uStack_178 = plVar18;
      uStack_170 = plVar11;
      if (plVar18 + 2 != &uStack_1f8) {
        if (((ulong)auStack_1f0 & 1) == 0) {
          plVar18[5] = (long)plStack_1e0;
          plVar18[3] = (long)auStack_1f0;
          plVar18[4] = uStack_1e8;
        }
        else {
          func_0x04885070(plVar18 + 3,plStack_1e0,uStack_1e8);
        }
      }
      plVar18[2] = uStack_1f8;
      plVar18[7] = 0;
      plVar18[8] = 0;
      puStack_168 = (undefined *)CONCAT71(puStack_168._1_7_,1);
      if ((long)uVar28 < 0) {
        fVar38 = (float)uVar28;
        fVar37 = *(float *)(plVar11 + 4);
        if (uVar28 != 0) goto LAB_0606a752;
LAB_0606a763:
        uVar30 = 1;
        if (2 < uVar28) {
          uVar30 = (ulong)((uVar28 & uVar28 - 1) != 0);
        }
        uVar30 = uVar28 * 2 | uVar30;
        fVar37 = (float)func_0x0eee3ab0((float)(plVar11[3] + 1) / fVar37);
        uVar28 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
        if (uVar28 < uVar30) {
          uVar28 = uVar30;
        }
        uVar30 = 2;
        if ((uVar28 == 1) || (uVar30 = uVar28, (uVar28 & uVar28 - 1) == 0)) {
          uVar28 = plVar11[1];
          bVar36 = uVar30 < uVar28;
          if (uVar30 <= uVar28) goto LAB_0606a8c1;
LAB_0606a7dc:
          func_0x05e92d70(plVar11,uVar30);
        }
        else {
          uVar30 = func_0x0412c3f0();
          uVar28 = plVar11[1];
          bVar36 = uVar30 < uVar28;
          if (uVar28 < uVar30) goto LAB_0606a7dc;
LAB_0606a8c1:
          if (bVar36) {
            fVar37 = (float)func_0x0eee3ab0((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
            uVar22 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
            if ((uVar28 < 3) ||
               (uVar29 = uVar28 - (uVar28 >> 1 & 0x5555555555555555),
               uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
               1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar22 = func_0x0412c3f0(uVar22);
            }
            else if (1 < uVar22) {
              lVar21 = 0x3f;
              if (uVar22 - 1 != 0) {
                for (; uVar22 - 1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              uVar22 = 1L << (-((byte)lVar21 ^ 0x3f) & 0x3f);
            }
            if (uVar30 <= uVar22) {
              uVar30 = uVar22;
            }
            if (uVar30 < uVar28) goto LAB_0606a7dc;
          }
        }
        uVar28 = plVar11[1];
        if ((uVar28 & uVar28 - 1) == 0) {
          uVar30 = uVar13 & uVar28 - 1;
        }
        else {
          uVar30 = uVar13;
          if (uVar28 <= uVar13) {
            if ((uVar13 | uVar28) >> 0x20 == 0) {
              uVar30 = (uVar13 & 0xffffffff) % (uVar28 & 0xffffffff);
            }
            else {
              uVar30 = uVar13 % uVar28;
            }
          }
        }
      }
      else {
        fVar38 = (float)(long)uVar28;
        fVar37 = *(float *)(plVar11 + 4);
        if (uVar28 == 0) goto LAB_0606a763;
LAB_0606a752:
        uVar30 = uStack_200;
        if (fVar38 * fVar37 < (float)(plVar11[3] + 1)) goto LAB_0606a763;
      }
      lVar21 = *plVar11;
      plVar18 = *(long **)(lVar21 + uVar30 * 8);
      if (plVar18 == (long *)0x0) {
        *uStack_178 = *plStack_88;
        *plStack_88 = (long)uStack_178;
        *(long **)(lVar21 + uVar30 * 8) = plStack_88;
        if (*uStack_178 != 0) {
          uVar13 = *(ulong *)(*uStack_178 + 8);
          if ((uVar28 & uVar28 - 1) == 0) {
            *(long **)(lVar21 + (uVar13 & uVar28 - 1) * 8) = uStack_178;
          }
          else {
            if (uVar28 <= uVar13) {
              if ((uVar13 | uVar28) >> 0x20 == 0) {
                *(long **)(lVar21 + ((uVar13 & 0xffffffff) % (uVar28 & 0xffffffff)) * 8) =
                     uStack_178;
                goto LAB_0606aa2c;
              }
              uVar13 = uVar13 % uVar28;
            }
            *(long **)(lVar21 + uVar13 * 8) = uStack_178;
          }
        }
      }
      else {
        *uStack_178 = *plVar18;
        *plVar18 = (long)uStack_178;
      }
LAB_0606aa2c:
      plVar11[3] = plVar11[3] + 1;
      plVar20 = uStack_178;
      goto LAB_0606aa35;
    }
    uStack_e8 = (ulong)plStack_100;
    func_0x0ed5ffe0(*(undefined8 *)param_5,8,&uStack_e8);
    if ((uStack_e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_e8 = 0;
    goto LAB_0606aaf1;
  }
  uStack_d8 = uStack_130;
  func_0x0ed5ffe0(*(undefined8 *)param_5,8,&uStack_d8);
  if ((uStack_d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
  }
  uStack_d8 = 0;
  goto LAB_0606ab20;
LAB_060699db:
  bVar7 = *(byte *)((long)auVar34 + 0x18);
  cVar8 = (char)uStack_130;
  goto joined_r0x060699ed;
LAB_06069a31:
  *(long **)((long)auVar32 + 0x30) = plStack_100;
  *(long **)((long)auVar34 + 0x30) = plVar20;
  bVar7 = *(byte *)((long)auVar34 + 0x18);
  cVar8 = (char)uStack_130;
joined_r0x060699ed:
  if ((bVar7 & 1) != 0) {
    func_0x0412a280(*(long *)((long)auVar34 + 0x28),
                    *(ulong *)((long)auVar34 + 0x18) & 0xfffffffffffffffe);
  }
  func_0x0412a280(auVar34,0x48);
  if (cVar8 != '\0') {
LAB_06069869:
    func_0x0412a280(puStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
  }
LAB_06069882:
  plVar18 = plStack_188;
  auStack_1c8 = (undefined1  [8])((long)auVar32 + 0x38);
  lStack_1a0 = param_3[5];
  puStack_1b8 = (undefined8 *)&UNK_05dbbd80;
  uStack_1a8 = 0xdcaa237f;
  pcStack_1b0 = (code *)0x0;
  cStack_1a4 = '\x03';
  uStack_198 = 0;
  puStack_190 = &UNK_05dbbd60;
  func_0x0ed75bc0(&puStack_a0,plStack_188,auStack_1c8,uStack_b8,&uStack_58);
  param_5 = pbStack_c0;
  uVar12 = uStack_f8;
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  lVar21 = *(long *)(puVar16 + 2);
  uVar1 = *(uint *)(lVar21 + 0x1c + (ulong)*puVar16 * 0x20);
  *puVar16 = uVar1;
  if (puVar16[0x48] == 0) {
    uVar24 = puVar16[4];
  }
  else if ((*(uint *)(*(long *)(puVar16 + 0x46) + 0x18 + (ulong)(puVar16[0x48] - 1) * 0x30) == uVar1
           ) || (uVar24 = puVar16[4], uVar1 != uVar24 - 1)) goto LAB_06068ccf;
  lVar14 = lVar21 + (ulong)uVar24 * 0x20;
  uVar13 = (ulong)*(uint *)(lVar21 + -0x10 + (ulong)uVar24 * 0x20);
  if (uVar13 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(auStack_1c8,lVar14 + -0x18);
    uVar24 = puVar16[4];
  }
  *(undefined4 *)(lVar14 + -0x10) = 0xffffffff;
  puVar16[4] = uVar24 - 1;
LAB_06068ccf:
  (**(code **)(*plVar18 + 0xd0))(plVar18);
LAB_06068ce3:
  uStack_f0 = uStack_f0 + 1;
  if (uStack_f0 == uVar12) {
    return;
  }
  goto LAB_06068cef;
LAB_0606ac37:
  plVar20[6] = (long)&uStack_1f8;
  plStack_1d8 = plVar31;
LAB_0606aa35:
  plVar18 = plStack_188;
  uStack_178 = plVar20 + 7;
  lStack_150 = param_3[5];
  puStack_168 = &UNK_05dbbd80;
  iStack_158 = -0x2355dc81;
  pcStack_160 = (code *)0x0;
  uStack_154 = 3;
  uStack_148 = 0;
  puStack_140 = &UNK_05dbbd60;
  func_0x0ed75bc0(&puStack_a0,plStack_188,&uStack_178,uStack_b8,&uStack_58);
  (**(code **)(*plVar18 + 0xd0))(plVar18);
  param_5 = pbStack_c0;
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(&uStack_178);
  }
LAB_0606aaf1:
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  if (((ulong)auStack_1f0 & 1) != 0) {
    func_0x0412a280(plStack_1e0,(ulong)auStack_1f0 & 0xfffffffffffffffe);
  }
LAB_0606ab20:
  (**(code **)(*plVar18 + 0xd0))(plVar18);
  lVar21 = *(long *)(puVar16 + 2);
  uVar1 = *(uint *)(lVar21 + 0x1c + (ulong)*puVar16 * 0x20);
  *puVar16 = uVar1;
  if (puVar16[0x48] == 0) {
    uVar24 = puVar16[4];
  }
  else if ((*(uint *)(*(long *)(puVar16 + 0x46) + 0x18 + (ulong)(puVar16[0x48] - 1) * 0x30) == uVar1
           ) || (uVar24 = puVar16[4], uVar1 != uVar24 - 1)) goto LAB_0606a16c;
  lVar14 = lVar21 + (ulong)uVar24 * 0x20;
  uVar13 = (ulong)*(uint *)(lVar21 + -0x10 + (ulong)uVar24 * 0x20);
  if (uVar13 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(auStack_1c8,lVar14 + -0x18);
    uVar24 = puVar16[4];
  }
  *(undefined4 *)(lVar14 + -0x10) = 0xffffffff;
  puVar16[4] = uVar24 - 1;
LAB_0606a16c:
  uVar12 = (ulong)((int)uVar12 + 1);
  if (uStack_f0 <= uVar12) {
    return;
  }
  goto LAB_0606a180;
}


