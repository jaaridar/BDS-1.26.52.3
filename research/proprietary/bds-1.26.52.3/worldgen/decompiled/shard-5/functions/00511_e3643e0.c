/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4643e0 (ELF vaddr 0xe3643e0)
 * Label: caller-of-callee
 * Body:  [[0e4643e0, 0e4647ae] [0e4647b0, 0e464ac5] [0e464ad0, 0e464ba6] [0e464bb0, 0e464d78] [0e464d80, 0e464df7] [0e464e00, 0e464e19] [0e464e20, 0e464ec0] [0e464ed0, 0e464ee6] [0e464ef0, 0e464f39] [0e464f40, 0e4651a3] [0e4651b0, 0e465a70] [0e465a80, 0e465c83] [0e465c90, 0e465f2c] [0e465f30, 0e4663ea] [0e4663f0, 0e46655e] [0e466787, 0e4667b3] [0e4667ed, 0e46681b]]
 * Ghidra: FUN_0e4643e0
 */


/* WARNING: Removing unreachable block (ram,0x0e465529) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e4643e0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auVar3 [8];
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  long *unaff_RBP;
  long *plVar32;
  undefined8 *puVar33;
  undefined1 auVar34 [8];
  bool bVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 uStack_1e9;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  char cStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  int iStack_158;
  undefined1 uStack_154;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long *plStack_130;
  ulong uStack_128;
  ulong uStack_120;
  uint *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [16];
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  
  pcVar10 = (code *)param_3[7];
  uStack_b0 = param_4;
  if (pcVar10 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar35 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar35 = (undefined *)param_3[7] == &UNK_0e467840;
    }
    param_3[2] = (long)&UNK_0e4679e0;
    *(undefined4 *)(param_3 + 4) = 0x6c827d60;
    param_3[3] = (long)&UNK_0e467bf0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x28);
    }
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    *(undefined4 *)(plVar18 + 4) = 0x3f800000;
    *param_3 = (long)plVar18;
    pcVar10 = (code *)&UNK_0e467840;
    param_3[7] = (long)&UNK_0e467840;
    if (bVar35) {
      lVar19 = param_3[6];
    }
    else {
      lVar19 = 0;
    }
    param_3[6] = lVar19;
    cVar8 = '\x01';
    plVar11 = plVar18;
LAB_0e464502:
    puStack_90 = &UNK_0f351458;
    if (plVar11 == (long *)0x0) goto LAB_0e464507;
  }
  else {
    cVar8 = *(char *)((long)param_3 + 0x24);
    plVar18 = (long *)*param_3;
    plVar11 = plVar18;
    if (cVar8 == '\x02') {
      plVar11 = param_3;
    }
    if ((int)param_3[4] == 0x6c827d60) goto LAB_0e464502;
LAB_0e464507:
    puStack_90 = &UNK_0f351458;
    lVar19 = param_3[5];
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
    plVar11 = (long *)func_0x0488e200(lVar19,lVar14,0x6c827d60,plVar18);
  }
  uStack_58 = *param_5;
  uStack_50 = param_5[1];
  plVar18 = (long *)param_5[2];
  uStack_80 = uStack_58;
  uStack_78 = uStack_50;
  if (plVar18 == (long *)0x0) {
    plVar18 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0);
    uStack_58 = *param_5;
    uStack_50 = param_5[1];
    plVar18 = (long *)param_5[2];
  }
  uStack_68 = *(undefined4 *)(param_5 + 3);
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_98 = &UNK_0ef46ce8;
  if (plVar18 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar18 + 0x30))(plVar18,1);
  }
  uStack_40 = *(undefined4 *)(param_5 + 3);
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  plStack_180 = param_2;
  puStack_f8 = param_5;
  if (bVar7 == 1) {
    uVar12 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar13 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar13 < uVar12)) {
      uStack_a0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_a0);
      if ((uStack_a0 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a0 & 0xff00ffffffffffff) - 8);
      return;
    }
    func_0x0ed6d600(&uStack_1e8,*param_5);
    if (uVar12 == 0) {
      return;
    }
    plStack_c0 = plVar11 + 2;
    uStack_128 = 0;
    plStack_130 = param_3;
    uStack_f0 = uVar12;
LAB_0e4647e2:
    plVar18 = uStack_1e8;
    uVar31 = (uint)uStack_1e0;
    if ((uint)uStack_1e0 <= *(uint *)(uStack_1e8 + 0x56) &&
        *(uint *)(uStack_1e8 + 0x56) != 0xffffffff) {
      return;
    }
    auVar38 = (**(code **)(*param_2 + 0xc0))(param_2);
    puVar33 = puStack_70;
    auStack_d0 = auVar38;
    if (puStack_70 != (undefined8 *)0x0) {
      lVar19 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar19 == 0) {
        func_0x048b0de0(&uStack_178,&uStack_1e9);
        _DAT_0f54fd90 = (undefined4)uStack_178;
        uRam000000000f54fd94 = uStack_178._4_4_;
        uVar5 = (undefined4)uStack_170;
        uVar6 = uStack_170._4_4_;
        uStack_178 = (long *)0x0;
        uStack_170 = (long *)0x0;
        plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar5;
        uRam000000000f54fd9c = uVar6;
        if (plVar18 != (long *)0x0) {
          LOCK();
          plVar32 = plVar18 + 1;
          lVar19 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            func_0x0412c2d0(plVar18);
          }
        }
        plVar18 = uStack_170;
        if (uStack_170 != (long *)0x0) {
          LOCK();
          plVar32 = uStack_170 + 1;
          lVar19 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*uStack_170 + 0x10))(uStack_170);
            func_0x0412c2d0(plVar18);
          }
        }
        lVar19 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        param_2 = plStack_180;
      }
      puStack_1b8 = (undefined8 *)&UNK_05ea5bd0;
      uStack_1a8 = 0x989eedf9;
      pcStack_1b0 = (code *)0x0;
      cStack_1a4 = '\x04';
      auStack_1c8 = (undefined1  [8])auStack_d0;
      uStack_198 = 0;
      puStack_190 = &UNK_05ea5bb0;
      lStack_1a0 = lVar19;
      (**(code **)*puVar33)(puVar33,auStack_1c8,uStack_80);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      plVar18 = uStack_1e8;
      uVar31 = (uint)uStack_1e0;
    }
    uVar22 = auStack_d0._8_8_;
    param_3 = (long *)auStack_d0._0_8_;
    if ((*(uint *)(plVar18 + 0x56) != 0xffffffff) && (uVar31 <= *(uint *)(plVar18 + 0x56)))
    goto LAB_0e4647d1;
    uVar1 = *param_5;
    uStack_100 = 0;
    if ((long *)auStack_d0._0_8_ == (long *)0x0) {
      uStack_100 = (auStack_d0._8_8_ & 0x7f) << 0x30;
    }
    else {
      lVar19 = auStack_d0._8_8_ + 9;
      puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
      if (lVar19 != 0 && puVar15 == (ulong *)0x0) {
        func_0x0eec74c0(lVar19,8);
      }
      *puVar15 = uVar22;
      func_0x0eee2f00(puVar15 + 1,param_3,uVar22);
      *(undefined1 *)((long)(puVar15 + 1) + uVar22) = 0;
      uStack_100 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar16 = (uint *)func_0x0ed6d180(uVar1,&uStack_100,0);
    if ((uStack_100 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8);
    }
    uVar1 = auStack_d0._8_8_;
    uVar22 = auStack_d0._0_8_;
    uStack_100 = 0;
    puStack_118 = puVar16;
    if ((ulong)auStack_d0._8_8_ < (long *)0xfffffffffffffff8) {
      if ((ulong)auStack_d0._8_8_ < (long *)0x17) {
        uStack_178 = (long *)CONCAT71(uStack_178._1_7_,auStack_d0[8] * '\x02');
        puVar17 = (undefined *)((long)&uStack_178 + 1);
        if ((long *)auStack_d0._8_8_ != (long *)0x0) goto LAB_0e464b28;
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
        uStack_170 = (long *)uVar1;
        puStack_168 = puVar17;
LAB_0e464b28:
        func_0x0eee2ee0(puVar17,uVar22,uVar1);
      }
      puVar17[uVar1] = 0;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_1b8 = (undefined8 *)0x0;
      *plVar18 = 0;
      plVar18[1] = 0;
      uVar4 = (byte)uStack_178;
      auStack_1c8 = (undefined1  [8])plVar18;
      uStack_1c0 = plVar11;
      if (((ulong)uStack_178 & 1) == 0) {
        plVar18[4] = (long)puStack_168;
        *(undefined4 *)(plVar18 + 2) = (undefined4)uStack_178;
        *(undefined4 *)((long)plVar18 + 0x14) = uStack_178._4_4_;
        *(undefined4 *)(plVar18 + 3) = (undefined4)uStack_170;
        *(undefined4 *)((long)plVar18 + 0x1c) = uStack_170._4_4_;
      }
      else {
        func_0x0412e5e0(plVar18 + 2,puStack_168,uStack_170);
      }
      uStack_120 = CONCAT71(uStack_120._1_7_,uVar4) & 0xffffffffffffff01;
      *(undefined4 *)(plVar18 + 5) = 0;
      puStack_1b8 = (undefined8 *)CONCAT71(puStack_1b8._1_7_,1);
      bVar35 = (*(byte *)(plVar18 + 2) & 1) != 0;
      lVar19 = (long)plVar18 + 0x11;
      if (bVar35) {
        lVar19 = plVar18[4];
      }
      uVar12 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
      if (bVar35) {
        uVar12 = plVar18[3];
      }
      lVar19 = func_0x04883620(&uStack_1e9,lVar19,uVar12);
      auVar34 = auStack_1c8;
      plVar18[1] = lVar19;
      uStack_110 = (long)auStack_1c8 + 0x11;
      bVar35 = (*(byte *)((long)auStack_1c8 + 0x10) & 1) == 0;
      lVar19 = *(long *)((long)auStack_1c8 + 0x20);
      if (bVar35) {
        lVar19 = uStack_110;
      }
      uVar12 = (ulong)(*(byte *)((long)auStack_1c8 + 0x10) >> 1);
      if (!bVar35) {
        uVar12 = *(ulong *)((long)auStack_1c8 + 0x18);
      }
      uVar13 = func_0x04883620(&uStack_1e9,lVar19,uVar12);
      *(ulong *)((long)auVar34 + 8) = uVar13;
      uVar12 = plVar11[1];
      if (uVar12 != 0) {
        uVar28 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
        uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar28 >> 0x38 < 2) {
          uVar29 = uVar12 - 1 & uVar13;
        }
        else {
          uVar29 = uVar13;
          if (uVar12 <= uVar13) {
            if ((uVar13 | uVar12) >> 0x20 == 0) {
              uVar29 = (uVar13 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar29 = uVar13 % uVar12;
            }
          }
        }
        puVar33 = *(undefined8 **)(*plVar11 + uVar29 * 8);
        if ((puVar33 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar33, plVar18 != (long *)0x0))
        {
          if ((*(byte *)((long)auVar34 + 0x10) & 1) == 0) {
            uVar21 = (ulong)(*(byte *)((long)auVar34 + 0x10) >> 1);
          }
          else {
            uVar21 = *(ulong *)((long)auVar34 + 0x18);
            uStack_110 = *(long *)((long)auVar34 + 0x20);
          }
          if ((byte)(uVar28 >> 0x38) < 2) {
            uVar28 = uVar12 - 1;
            uStack_b8 = uVar28;
            do {
              if (plVar18[1] == uVar13) {
                bVar7 = *(byte *)(plVar18 + 2);
                if ((bVar7 & 1) == 0) {
                  uVar30 = (ulong)(bVar7 >> 1);
                }
                else {
                  uVar30 = plVar18[3];
                }
                if (uVar30 == uVar21) {
                  if ((bVar7 & 1) == 0) {
                    lVar19 = (long)plVar18 + 0x11;
                  }
                  else {
                    lVar19 = plVar18[4];
                  }
                  iVar9 = func_0x0eee3000(lVar19,uStack_110,uVar21);
                  uVar28 = uStack_b8;
                  if (iVar9 == 0) goto LAB_0e464e51;
                }
              }
              else if ((plVar18[1] & uVar28) != uVar29) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar28 = plVar18[1];
              if (uVar28 == uVar13) {
                bVar7 = *(byte *)(plVar18 + 2);
                if ((bVar7 & 1) == 0) {
                  uVar28 = (ulong)(bVar7 >> 1);
                }
                else {
                  uVar28 = plVar18[3];
                }
                if (uVar28 == uVar21) {
                  if ((bVar7 & 1) == 0) {
                    lVar19 = (long)plVar18 + 0x11;
                  }
                  else {
                    lVar19 = plVar18[4];
                  }
                  iVar9 = func_0x0eee3000(lVar19,uStack_110,uVar21);
                  if (iVar9 == 0) goto LAB_0e464e51;
                }
              }
              else {
                if (uVar12 <= uVar28) {
                  if ((uVar28 | uVar12) >> 0x20 == 0) {
                    uVar28 = (uVar28 & 0xffffffff) % (uVar12 & 0xffffffff);
                  }
                  else {
                    uVar28 = uVar28 % uVar12;
                  }
                }
                if (uVar28 != uVar29) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      param_5 = puStack_f8;
      plVar32 = plStack_130;
      if (-1 < (long)uVar12) {
        fVar37 = (float)(long)uVar12;
        fVar36 = *(float *)(plVar11 + 4);
        if (uVar12 == 0) goto LAB_0e464f65;
LAB_0e464f58:
        if (fVar37 * fVar36 < (float)(plVar11[3] + 1)) goto LAB_0e464f65;
        goto LAB_0e4650f0;
      }
      fVar37 = (float)uVar12;
      fVar36 = *(float *)(plVar11 + 4);
      if (uVar12 != 0) goto LAB_0e464f58;
LAB_0e464f65:
      uVar13 = 1;
      if (2 < uVar12) {
        uVar13 = (ulong)((uVar12 & uVar12 - 1) != 0);
      }
      uVar13 = uVar12 * 2 | uVar13;
      fVar36 = (float)func_0x0eee3ab0((float)(plVar11[3] + 1) / fVar36);
      uVar28 = (long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36;
      if (uVar28 < uVar13) {
        uVar28 = uVar13;
      }
      uVar13 = 2;
      if ((uVar28 == 1) || (uVar13 = uVar28, (uVar28 & uVar28 - 1) == 0)) {
        bVar35 = uVar13 < uVar12;
        if (uVar13 <= uVar12) goto LAB_0e464fef;
LAB_0e464fce:
        func_0x07241520(plVar11,uVar13);
      }
      else {
        uVar13 = func_0x0412c3f0();
        uVar12 = plVar11[1];
        bVar35 = uVar13 < uVar12;
        if (uVar12 < uVar13) goto LAB_0e464fce;
LAB_0e464fef:
        if (bVar35) {
          fVar36 = (float)func_0x0eee3ab0((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
          uVar28 = (long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36;
          if ((uVar12 < 3) ||
             (uVar29 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
             uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
             1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar28 = func_0x0412c3f0(uVar28);
          }
          else if (1 < uVar28) {
            lVar19 = 0x3f;
            if (uVar28 - 1 != 0) {
              for (; uVar28 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar28 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
          }
          if (uVar13 <= uVar28) {
            uVar13 = uVar28;
          }
          if (uVar13 < uVar12) goto LAB_0e464fce;
        }
      }
LAB_0e4650f0:
      uVar12 = plVar11[1];
      uVar13 = *(ulong *)((long)auVar34 + 8);
      uVar28 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
      uVar28 = ((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar28 >> 0x38 < 2) {
        uVar13 = uVar13 & uVar12 - 1;
        lVar19 = *plVar11;
        plVar18 = *(long **)(lVar19 + uVar13 * 8);
        if (plVar18 != (long *)0x0) goto LAB_0e4651dd;
LAB_0e46516e:
        *(long *)auVar34 = *plStack_c0;
        *plStack_c0 = (long)auVar34;
        *(long **)(lVar19 + uVar13 * 8) = plStack_c0;
        if (*(long *)auVar34 != 0) {
          uVar13 = *(ulong *)(*(long *)auVar34 + 8);
          if ((byte)(uVar28 >> 0x38) < 2) {
            *(undefined1 (*) [8])(lVar19 + (uVar13 & uVar12 - 1) * 8) = auVar34;
          }
          else {
            if (uVar12 <= uVar13) {
              if ((uVar13 | uVar12) >> 0x20 == 0) {
                *(undefined1 (*) [8])(lVar19 + ((uVar13 & 0xffffffff) % (uVar12 & 0xffffffff)) * 8)
                     = auVar34;
                goto LAB_0e4651e6;
              }
              uVar13 = uVar13 % uVar12;
            }
            *(undefined1 (*) [8])(lVar19 + uVar13 * 8) = auVar34;
          }
        }
      }
      else {
        if (uVar13 < uVar12) {
LAB_0e4651d0:
          lVar19 = *plVar11;
          plVar18 = *(long **)(lVar19 + uVar13 * 8);
        }
        else {
          if ((uVar13 | uVar12) >> 0x20 != 0) {
            uVar13 = uVar13 % uVar12;
            goto LAB_0e4651d0;
          }
          uVar13 = (uVar13 & 0xffffffff) % (uVar12 & 0xffffffff);
          lVar19 = *plVar11;
          plVar18 = *(long **)(lVar19 + uVar13 * 8);
        }
        if (plVar18 == (long *)0x0) goto LAB_0e46516e;
LAB_0e4651dd:
        *(long *)auVar34 = *plVar18;
        *plVar18 = (long)auVar34;
      }
LAB_0e4651e6:
      plVar11[3] = plVar11[3] + 1;
      bVar7 = (byte)uStack_178 & 1;
      puVar16 = puStack_118;
      goto LAB_0e4651fe;
    }
    func_0x04882e30();
    goto LAB_0e46650b;
  }
  if ((bVar7 & 2) == 0) {
    lVar19 = param_3[5];
    lVar14 = func_0x048b2190(lVar19);
    plVar18 = *(long **)(lVar14 + 0x78);
    if (plVar18 == (long *)0x0) {
LAB_0e464744:
      if (*(code **)(lVar14 + 0x30) == (code *)0x0) {
        puStack_168 = &UNK_0488e0b0;
        iStack_158 = 0x48b5725f;
        pcStack_160 = (code *)0x0;
        uStack_154 = 0;
        uStack_178 = (long *)0x0;
        uStack_148 = 0;
        puStack_140 = (undefined *)0x0;
        lStack_150 = lVar19;
        goto LAB_0e465588;
      }
      (**(code **)(lVar14 + 0x30))(&uStack_178,lVar19);
      if (iStack_158 != -0x44166d6f) goto LAB_0e465588;
LAB_0e4655db:
      plVar18 = (long *)&UNK_0133e465;
      uVar12 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar27 = *plVar18;
      if (lVar27 == 0 || lVar27 == plVar18[1]) goto LAB_0e464744;
      lVar24 = 0;
      bVar35 = false;
      do {
        lVar25 = lVar27;
        if (lVar24 != 0) {
          lVar25 = lVar24;
        }
        bVar2 = lVar24 != 0;
        if (*(long *)(lVar27 + 8) != 0) {
          lVar25 = lVar24;
          bVar2 = bVar35;
        }
        lVar27 = lVar27 + 0x20;
        lVar24 = lVar25;
        bVar35 = bVar2;
      } while (lVar27 != plVar18[1]);
      if (bVar2 || lVar25 == 0) goto LAB_0e464744;
      (**(code **)(lVar25 + 0x18))(&uStack_178,lVar19,0);
      if (iStack_158 == -0x44166d6f) goto LAB_0e4655db;
LAB_0e465588:
      func_0x0c0faf50(auStack_1c8,&uStack_178);
      puVar17 = puStack_190;
      if ((puStack_190 != (undefined *)0x0) && ((byte)(cStack_1a4 - 1U) < 2)) {
        func_0x048b0900(&uStack_178,auStack_1c8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (puVar17 != (undefined *)0x0) goto LAB_0e4655db;
      plVar18 = (long *)&UNK_01411d3a;
      uVar12 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar12 < 0xfffffffffffffff8) {
      if (uVar12 < 0x17) {
        uVar13 = (ulong)uStack_1e8 >> 8;
        uStack_1e8 = (long *)CONCAT71((int7)uVar13,(char)uVar12 * '\x02');
        uVar28 = (long)&uStack_1e8 + 1;
        if (uVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_1e8._1_1_ = 0;
          goto joined_r0x0e46568d;
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
        param_3 = (long *)(uVar13 | 1);
        uStack_1e8 = param_3;
        uStack_1e0 = uVar12;
        uStack_1d8 = uVar28;
      }
      func_0x0eee2f00(uVar28,plVar18,uVar12);
      *(undefined1 *)(uVar28 + uVar12) = 0;
joined_r0x0e46568d:
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(&uStack_178);
      }
      plVar18 = uStack_1e8;
      uVar12 = uStack_1e0;
      if (((ulong)uStack_1e8 & 1) == 0) {
        uVar12 = (ulong)uStack_1e8 >> 1 & 0x7f;
      }
      uVar13 = uVar12 + 0xc;
      if (uVar13 < 0xfffffffffffffff8) {
        uVar22 = *param_5;
        if (uVar13 < 0x17) {
          uStack_1c0 = (long *)0x0;
          puStack_1b8 = (undefined8 *)0x0;
          auStack_1c8._1_7_ = 0;
          auStack_1c8[0] = (char)uVar13 * '\x02';
        }
        else {
          uVar28 = 0x1a;
          if ((uVar13 | 7) != 0x17) {
            uVar28 = (uVar13 | 7) + 1;
          }
          puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
          if (puStack_1b8 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar28,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar28 | 1);
          uStack_1c0 = (long *)uVar13;
        }
        lVar19 = (long)puStack_1b8 + 0xc;
        bVar35 = ((ulong)auStack_1c8 & 1) == 0;
        puVar33 = puStack_1b8;
        if (bVar35) {
          puVar33 = (undefined8 *)(auStack_1c8 + 1);
        }
        *puVar33 = 0x6465746365707865;
        *(undefined4 *)(puVar33 + 1) = 0x206e6120;
        lVar14 = (long)&uStack_1c0 + 5;
        if (!bVar35) {
          lVar14 = lVar19;
        }
        if (uVar12 != 0) {
          uVar13 = uStack_1d8;
          if (((ulong)plVar18 & 1) == 0) {
            uVar13 = (long)&uStack_1e8 + 1;
          }
          func_0x0eee2ee0(lVar14,uVar13,uVar12);
        }
        *(undefined1 *)(lVar14 + uVar12) = 0;
        uVar12 = (ulong)auStack_1c8 >> 1 & 0x7f;
        puVar33 = (undefined8 *)(auStack_1c8 + 1);
        if (((ulong)auStack_1c8 & 1) != 0) {
          uVar12 = (ulong)uStack_1c0;
          puVar33 = puStack_1b8;
        }
        uStack_108 = 0;
        if (puVar33 == (undefined8 *)0x0) {
          uStack_108 = (ulong)((uint)uVar12 & 0x7f) << 0x30;
        }
        else {
          lVar19 = uVar12 + 9;
          puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
          if (lVar19 != 0 && puVar15 == (ulong *)0x0) {
            func_0x0eec74c0(lVar19,8);
          }
          *puVar15 = uVar12;
          func_0x0eee2f00(puVar15 + 1,puVar33,uVar12);
          *(undefined1 *)((long)puVar15 + uVar12 + 8) = 0;
          uStack_108 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar22,8,&uStack_108);
        if ((uStack_108 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
        }
        uStack_108 = 0;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        if (((ulong)plVar18 & 1) == 0) {
          return;
        }
        func_0x0412a280(uStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
        return;
      }
LAB_0e46650b:
      uVar22 = func_0x04882e30();
      uVar22 = func_0x04882e20(uVar22);
      uVar22 = func_0x04882e20(uVar22);
      uVar22 = func_0x04882e20(uVar22);
      FUN_0ee386e0(&uStack_a8);
      uVar22 = func_0x0eee2d70(uVar22);
      uVar22 = func_0x04882e20(uVar22);
      func_0x07241d20(&uStack_178);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (((ulong)uStack_1e8 & 1) != 0) {
        func_0x0412a280(uStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_180 + 0xd0))();
      func_0x0ed6d560(param_3);
      uVar22 = func_0x0eee2d70(uVar22);
      uVar22 = func_0x04882e20(uVar22);
      func_0x04882e20(uVar22);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar12 = func_0x04882e30();
    plVar32 = plVar11;
LAB_0e4658f0:
    fVar36 = (float)uVar12;
LAB_0e465908:
    fVar36 = (float)func_0x0eee3ab0(fVar36 / *(float *)(unaff_RBP + 4));
    plVar20 = (long *)((long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36);
    if ((plVar32 < (long *)0x3) ||
       (uVar12 = (long)plVar32 - ((ulong)plVar32 >> 1 & 0x5555555555555555),
       uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
       1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar20 = (long *)func_0x0412c3f0(plVar20);
    }
    else if ((long *)0x1 < plVar20) {
      lVar19 = 0x3f;
      if ((long)plVar20 - 1U != 0) {
        for (; (long)plVar20 - 1U >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      plVar20 = (long *)(1L << (-((byte)lVar19 ^ 0x3f) & 0x3f));
    }
    if (plVar18 <= plVar20) {
      plVar18 = plVar20;
    }
    if (plVar32 <= plVar18) goto LAB_0e4659cc;
  }
  else {
    uVar12 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar13 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar13 < uVar12)) {
      uStack_a8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_a8);
      if ((uStack_a8 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a8 & 0xff00ffffffffffff) - 8);
      return;
    }
    fVar36 = (float)func_0x0eee3ab0((float)uVar12 / *(float *)(plVar11 + 4));
    plVar32 = (long *)((long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36);
    plVar18 = (long *)0x2;
    unaff_RBP = plVar11;
    uStack_f0 = uVar12;
    if ((plVar32 == (long *)0x1) || (plVar18 = plVar32, ((ulong)plVar32 & (long)plVar32 - 1U) == 0))
    {
      plVar32 = (long *)plVar11[1];
      bVar35 = plVar18 < plVar32;
      if (plVar18 <= plVar32) {
LAB_0e46554b:
        if (!bVar35) goto LAB_0e4659cc;
        uVar12 = plVar11[3];
        if ((long)uVar12 < 0) goto LAB_0e4658f0;
        fVar36 = (float)(long)uVar12;
        goto LAB_0e465908;
      }
    }
    else {
      plVar18 = (long *)func_0x0412c3f0();
      plVar32 = (long *)plVar11[1];
      bVar35 = plVar18 < plVar32;
      if (plVar18 <= plVar32) goto LAB_0e46554b;
    }
  }
  func_0x07241520(unaff_RBP,plVar18);
LAB_0e4659cc:
  plStack_130 = param_3;
  func_0x0ed6d600(auStack_d0,*param_5);
  if (uStack_f0 != 0) {
    puStack_118 = (uint *)0x1b0000014af0d9;
    uStack_110 = 0x38000001448967;
    uStack_b8 = 0x3a000001208ef5;
    plStack_c0 = plVar11 + 2;
    uVar13 = 0;
    uVar12 = uStack_f0;
    do {
      if ((*(uint *)(auStack_d0._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_d0._8_4_ <= *(uint *)(auStack_d0._0_8_ + 0x2b0))) {
        return;
      }
      puVar16 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar16,uVar13);
      (**(code **)(*param_2 + 200))(param_2,uVar13);
      cVar8 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar8 == '\x01') && (lVar19 = (**(code **)(*param_2 + 0xa8))(param_2), lVar19 != 2)) {
        uStack_d8 = (ulong)puStack_118;
        func_0x0ed5ffe0(*param_5,8,&uStack_d8);
        if ((uStack_d8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d8 & 0xff00ffffffffffff) - 8);
        }
        uStack_d8 = 0;
      }
      else {
        cVar8 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar8 == '\0') {
          uStack_e0 = uStack_110;
          func_0x0ed5ffe0(*param_5,8,&uStack_e0);
          if ((uStack_e0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e0 & 0xff00ffffffffffff) - 8);
          }
          uStack_e0 = 0;
        }
        else {
          uStack_1e8 = (long *)0x0;
          uStack_1e0 = 0;
          uStack_1d8 = 0;
          lStack_1a0 = plStack_130[5];
          puStack_1b8 = (undefined8 *)&UNK_0c0f54e0;
          uStack_1a8 = 0xbbe99291;
          pcStack_1b0 = (code *)0x0;
          cStack_1a4 = '\x03';
          auStack_1c8 = (undefined1  [8])&uStack_1e8;
          uStack_198 = 0;
          puStack_190 = &UNK_0c0f54c0;
          func_0x0ed75bc0(&puStack_90,param_2,auStack_1c8,uStack_b0,&uStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar8 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar8 == '\0') {
            uStack_e8 = uStack_b8;
            func_0x0ed5ffe0(*param_5,8,&uStack_e8);
            if ((uStack_e8 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_e8 & 0xff00ffffffffffff) - 8);
            }
            uStack_e8 = 0;
          }
          else {
            uVar28 = (ulong)uStack_1e8 >> 1 & 0x7f;
            uVar12 = (long)&uStack_1e8 + 1;
            if (((ulong)uStack_1e8 & 1) != 0) {
              uVar28 = uStack_1e0;
              uVar12 = uStack_1d8;
            }
            uVar28 = func_0x04883620(&uStack_178,uVar12,uVar28);
            uVar12 = plVar11[1];
            if (uVar12 != 0) {
              uVar29 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
              uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333);
              uVar29 = ((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar29 >> 0x38 < 2) {
                uVar21 = uVar12 - 1 & uVar28;
              }
              else {
                uVar21 = uVar28;
                if (uVar12 <= uVar28) {
                  if ((uVar28 | uVar12) >> 0x20 == 0) {
                    uVar21 = (uVar28 & 0xffffffff) % (uVar12 & 0xffffffff);
                  }
                  else {
                    uVar21 = uVar28 % uVar12;
                  }
                }
              }
              puVar33 = *(undefined8 **)(*plVar11 + uVar21 * 8);
              uStack_128 = uVar21;
              if ((puVar33 != (undefined8 *)0x0) &&
                 (plVar18 = (long *)*puVar33, plVar18 != (long *)0x0)) {
                uStack_120 = uStack_1d8;
                uVar30 = uStack_1e0;
                if (((ulong)uStack_1e8 & 1) == 0) {
                  uStack_120 = (long)&uStack_1e8 + 1;
                  uVar30 = (ulong)uStack_1e8 >> 1 & 0x7f;
                }
                if ((byte)(uVar29 >> 0x38) < 2) {
                  uVar29 = uVar12 - 1;
                  uStack_88 = uVar29;
                  do {
                    if (plVar18[1] == uVar28) {
                      bVar7 = *(byte *)(plVar18 + 2);
                      if ((bVar7 & 1) == 0) {
                        uVar26 = (ulong)(bVar7 >> 1);
                      }
                      else {
                        uVar26 = plVar18[3];
                      }
                      if (uVar26 == uVar30) {
                        if ((bVar7 & 1) == 0) {
                          lVar19 = (long)plVar18 + 0x11;
                        }
                        else {
                          lVar19 = plVar18[4];
                        }
                        iVar9 = func_0x0eee3000(lVar19,uStack_120,uVar30);
                        uVar29 = uStack_88;
                        uVar21 = uStack_128;
                        if (iVar9 == 0) goto LAB_0e46629a;
                      }
                    }
                    else if ((plVar18[1] & uVar29) != uVar21) break;
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
                else {
                  do {
                    uVar29 = plVar18[1];
                    if (uVar29 == uVar28) {
                      bVar7 = *(byte *)(plVar18 + 2);
                      if ((bVar7 & 1) == 0) {
                        uVar29 = (ulong)(bVar7 >> 1);
                      }
                      else {
                        uVar29 = plVar18[3];
                      }
                      if (uVar29 == uVar30) {
                        if ((bVar7 & 1) == 0) {
                          lVar19 = (long)plVar18 + 0x11;
                        }
                        else {
                          lVar19 = plVar18[4];
                        }
                        iVar9 = func_0x0eee3000(lVar19,uStack_120,uVar30);
                        uVar21 = uStack_128;
                        if (iVar9 == 0) goto LAB_0e46629a;
                      }
                    }
                    else {
                      if (uVar12 <= uVar29) {
                        if ((uVar29 | uVar12) >> 0x20 == 0) {
                          uVar29 = (uVar29 & 0xffffffff) % (uVar12 & 0xffffffff);
                        }
                        else {
                          uVar29 = uVar29 % uVar12;
                        }
                      }
                      if (uVar29 != uVar21) break;
                    }
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
              }
            }
            plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
            if (plVar18 == (long *)0x0) {
              func_0x0eec74c0(0x30,0);
            }
            puStack_168 = (undefined *)0x0;
            *plVar18 = 0;
            plVar18[1] = uVar28;
            uStack_178 = plVar18;
            uStack_170 = plVar11;
            if (((ulong)uStack_1e8 & 1) == 0) {
              plVar18[4] = uStack_1d8;
              plVar18[2] = (long)uStack_1e8;
              plVar18[3] = uStack_1e0;
            }
            else {
              func_0x0412e5e0(plVar18 + 2,uStack_1d8,uStack_1e0);
            }
            *(undefined4 *)(plVar18 + 5) = 0;
            puStack_168 = (undefined *)CONCAT71(puStack_168._1_7_,1);
            if ((long)uVar12 < 0) {
              fVar37 = (float)uVar12;
              fVar36 = *(float *)(plVar11 + 4);
              if (uVar12 != 0) goto LAB_0e466084;
LAB_0e466095:
              uVar29 = 1;
              if (2 < uVar12) {
                uVar29 = (ulong)((uVar12 & uVar12 - 1) != 0);
              }
              uVar29 = uVar12 * 2 | uVar29;
              fVar36 = (float)func_0x0eee3ab0((float)(plVar11[3] + 1) / fVar36);
              uVar12 = (long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36;
              if (uVar12 < uVar29) {
                uVar12 = uVar29;
              }
              uVar29 = 2;
              if ((uVar12 == 1) || (uVar29 = uVar12, (uVar12 & uVar12 - 1) == 0)) {
                uVar12 = plVar11[1];
                bVar35 = uVar29 < uVar12;
                if (uVar29 <= uVar12) goto LAB_0e46612b;
LAB_0e466105:
                func_0x07241520(plVar11,uVar29);
              }
              else {
                uVar29 = func_0x0412c3f0();
                uVar12 = plVar11[1];
                bVar35 = uVar29 < uVar12;
                if (uVar12 < uVar29) goto LAB_0e466105;
LAB_0e46612b:
                if (bVar35) {
                  fVar36 = (float)func_0x0eee3ab0((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4)
                                                 );
                  uVar21 = (long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36;
                  if ((uVar12 < 3) ||
                     (uVar30 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
                     uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333),
                     1 < (byte)(((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar21 = func_0x0412c3f0(uVar21);
                  }
                  else if (1 < uVar21) {
                    lVar19 = 0x3f;
                    if (uVar21 - 1 != 0) {
                      for (; uVar21 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                      }
                    }
                    uVar21 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
                  }
                  if (uVar29 <= uVar21) {
                    uVar29 = uVar21;
                  }
                  if (uVar29 < uVar12) goto LAB_0e466105;
                }
              }
              uVar12 = plVar11[1];
              if ((uVar12 & uVar12 - 1) == 0) {
                uVar29 = uVar28 & uVar12 - 1;
              }
              else {
                uVar29 = uVar28;
                if (uVar12 <= uVar28) {
                  if ((uVar28 | uVar12) >> 0x20 == 0) {
                    uVar29 = (uVar28 & 0xffffffff) % (uVar12 & 0xffffffff);
                  }
                  else {
                    uVar29 = uVar28 % uVar12;
                  }
                }
              }
            }
            else {
              fVar37 = (float)(long)uVar12;
              fVar36 = *(float *)(plVar11 + 4);
              if (uVar12 == 0) goto LAB_0e466095;
LAB_0e466084:
              uVar29 = uStack_128;
              if (fVar37 * fVar36 < (float)(plVar11[3] + 1)) goto LAB_0e466095;
            }
            lVar19 = *plVar11;
            plVar18 = *(long **)(lVar19 + uVar29 * 8);
            if (plVar18 == (long *)0x0) {
              *uStack_178 = *plStack_c0;
              *plStack_c0 = (long)uStack_178;
              *(long **)(lVar19 + uVar29 * 8) = plStack_c0;
              if (*uStack_178 != 0) {
                uVar28 = *(ulong *)(*uStack_178 + 8);
                if ((uVar12 & uVar12 - 1) == 0) {
                  *(long **)(lVar19 + (uVar28 & uVar12 - 1) * 8) = uStack_178;
                }
                else {
                  if (uVar12 <= uVar28) {
                    if ((uVar28 | uVar12) >> 0x20 == 0) {
                      *(long **)(lVar19 + ((uVar28 & 0xffffffff) % (uVar12 & 0xffffffff)) * 8) =
                           uStack_178;
                      goto LAB_0e466292;
                    }
                    uVar28 = uVar28 % uVar12;
                  }
                  *(long **)(lVar19 + uVar28 * 8) = uStack_178;
                }
              }
            }
            else {
              *uStack_178 = *plVar18;
              *plVar18 = (long)uStack_178;
            }
LAB_0e466292:
            plVar11[3] = plVar11[3] + 1;
            plVar18 = uStack_178;
LAB_0e46629a:
            param_2 = plStack_180;
            uStack_178 = plVar18 + 5;
            lStack_150 = plStack_130[5];
            puStack_168 = &UNK_0490c9f0;
            iStack_158 = -0x6a1681a2;
            pcStack_160 = (code *)0x0;
            uStack_154 = 3;
            uStack_148 = 0;
            puStack_140 = &UNK_0490c9d0;
            func_0x0ed75bc0(&puStack_98,plStack_180,&uStack_178,uStack_b0,&uStack_58);
            uVar12 = uStack_f0;
            (**(code **)(*param_2 + 0xd0))(param_2);
            param_5 = puStack_f8;
            if (pcStack_160 != (code *)0x0) {
              (*pcStack_160)(&uStack_178);
            }
          }
          if (pcStack_1b0 != (code *)0x0) {
            (*pcStack_1b0)(auStack_1c8);
          }
          if (((ulong)uStack_1e8 & 1) != 0) {
            func_0x0412a280(uStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
          }
        }
      }
      (**(code **)(*param_2 + 0xd0))(param_2);
      lVar19 = *(long *)(puVar16 + 2);
      uVar31 = *(uint *)(lVar19 + 0x1c + (ulong)*puVar16 * 0x20);
      *puVar16 = uVar31;
      if (puVar16[0x48] == 0) {
        uVar23 = puVar16[4];
LAB_0e4663f5:
        lVar14 = lVar19 + (ulong)uVar23 * 0x20;
        uVar28 = (ulong)*(uint *)(lVar19 + -0x10 + (ulong)uVar23 * 0x20);
        if (uVar28 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar28 * 8))(auStack_1c8,lVar14 + -0x18);
          uVar23 = puVar16[4];
        }
        *(undefined4 *)(lVar14 + -0x10) = 0xffffffff;
        puVar16[4] = uVar23 - 1;
      }
      else if ((*(uint *)(*(long *)(puVar16 + 0x46) + 0x18 + (ulong)(puVar16[0x48] - 1) * 0x30) !=
                uVar31) && (uVar23 = puVar16[4], uVar31 == uVar23 - 1)) goto LAB_0e4663f5;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < uVar12);
  }
  return;
LAB_0e464e51:
  param_5 = puStack_f8;
  puVar16 = puStack_118;
  plVar32 = plStack_130;
  auVar3 = auStack_1c8;
  auStack_1c8 = (undefined1  [8])0x0;
  bVar7 = (byte)uStack_120;
  auVar34 = (undefined1  [8])plVar18;
  if (auVar3 != (undefined1  [8])0x0) {
    if (((char)puStack_1b8 == '\x01') && ((*(byte *)((long)auVar3 + 0x10) & 1) != 0)) {
      func_0x0412a280(*(long *)((long)auVar3 + 0x20),
                      *(ulong *)((long)auVar3 + 0x10) & 0xfffffffffffffffe);
    }
    func_0x0412a280(auVar3,0x30);
  }
LAB_0e4651fe:
  if (bVar7 != 0) {
    func_0x0412a280(puStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
  }
  param_2 = plStack_180;
  auStack_1c8 = (undefined1  [8])((long)auVar34 + 0x28);
  lStack_1a0 = plVar32[5];
  puStack_1b8 = (undefined8 *)&UNK_0490c9f0;
  uStack_1a8 = 0x95e97e5e;
  pcStack_1b0 = (code *)0x0;
  cStack_1a4 = '\x03';
  uStack_198 = 0;
  puStack_190 = &UNK_0490c9d0;
  func_0x0ed75bc0(&puStack_98,plStack_180,auStack_1c8,uStack_b0,&uStack_58);
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  lVar19 = *(long *)(puVar16 + 2);
  uVar31 = *(uint *)(lVar19 + 0x1c + (ulong)*puVar16 * 0x20);
  *puVar16 = uVar31;
  if (puVar16[0x48] == 0) {
    uVar23 = puVar16[4];
  }
  else if ((*(uint *)(*(long *)(puVar16 + 0x46) + 0x18 + (ulong)(puVar16[0x48] - 1) * 0x30) ==
            uVar31) || (uVar23 = puVar16[4], uVar31 != uVar23 - 1)) goto LAB_0e4647bd;
  lVar14 = lVar19 + (ulong)uVar23 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar19 + -0x10 + (ulong)uVar23 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_1c8,lVar14 + -0x18);
    uVar23 = puVar16[4];
  }
  *(undefined4 *)(lVar14 + -0x10) = 0xffffffff;
  puVar16[4] = uVar23 - 1;
LAB_0e4647bd:
  (**(code **)(*param_2 + 0xd0))(param_2);
LAB_0e4647d1:
  uStack_128 = uStack_128 + 1;
  if (uStack_128 == uStack_f0) {
    return;
  }
  goto LAB_0e4647e2;
}


