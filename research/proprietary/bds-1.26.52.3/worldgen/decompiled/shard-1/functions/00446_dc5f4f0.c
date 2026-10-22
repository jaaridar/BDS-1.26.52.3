/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdd5f4f0 (ELF vaddr 0xdc5f4f0)
 * Label: caller-of-callee
 * Body:  [[0dd5f4f0, 0dd5fbe9] [0dd5fbf0, 0dd5fd2e] [0dd5fd30, 0dd5fd5c] [0dd5fd60, 0dd5fe44] [0dd5fe50, 0dd60119] [0dd60120, 0dd6022c] [0dd60230, 0dd6028d] [0dd60290, 0dd602a6] [0dd602b0, 0dd602fc] [0dd60300, 0dd60536] [0dd60540, 0dd60f34] [0dd60f40, 0dd61138] [0dd61140, 0dd611b3] [0dd611c0, 0dd613cd] [0dd613d0, 0dd61709] [0dd61710, 0dd619e2] [0dd619f0, 0dd61b6e] [0dd61b7a, 0dd61b88] [0dd61db3, 0dd61de5] [0dd61e25, 0dd61e53]]
 * Ghidra: FUN_0dd5f4f0
 */


/* WARNING: Removing unreachable block (ram,0x0dd609c0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dd5f4f0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  byte *pbVar29;
  uint uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong *unaff_R13;
  long *plVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  long *plStack_318;
  undefined1 auStack_308 [4];
  undefined4 uStack_304;
  undefined8 uStack_300;
  long *plStack_2f8;
  ulong uStack_2f0;
  long *plStack_2e8;
  ulong uStack_2d8;
  ulong uStack_2d0;
  long *plStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  code *pcStack_2a0;
  int iStack_298;
  undefined1 uStack_294;
  long lStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  long *plStack_260;
  ulong *puStack_258;
  long *plStack_250;
  ulong *puStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  long lStack_218;
  uint uStack_210;
  ulong uStack_208;
  undefined1 auStack_200 [16];
  long *plStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  code *pcStack_1c0;
  undefined4 uStack_1b8;
  char cStack_1b4;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  uint uStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  byte bStack_108;
  undefined1 uStack_107;
  undefined6 uStack_106;
  long lStack_100;
  long lStack_f8;
  char cStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long *plStack_88;
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
  
  pcVar11 = (code *)param_3[7];
  uStack_228 = param_4;
  if (pcVar11 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar34 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar34 = (undefined *)param_3[7] == &UNK_0dd633a0;
    }
    param_3[2] = (long)&UNK_0dd63540;
    *(undefined4 *)(param_3 + 4) = 0xb2550960;
    param_3[3] = (long)&UNK_0dd63780;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0x28);
    }
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    *(undefined4 *)(plVar16 + 4) = 0x3f800000;
    *param_3 = (long)plVar16;
    pcVar11 = (code *)&UNK_0dd633a0;
    param_3[7] = (long)&UNK_0dd633a0;
    if (bVar34) {
      lVar19 = param_3[6];
    }
    else {
      lVar19 = 0;
    }
    param_3[6] = lVar19;
    cVar9 = '\x01';
    plStack_318 = plVar16;
LAB_0dd5f61c:
    puStack_1e0 = &UNK_0f012348;
    if (plStack_318 == (long *)0x0) goto LAB_0dd5f623;
  }
  else {
    cVar9 = *(char *)((long)param_3 + 0x24);
    plVar16 = (long *)*param_3;
    plStack_318 = plVar16;
    if (cVar9 == '\x02') {
      plStack_318 = param_3;
    }
    if ((int)param_3[4] == -0x4daaf6a0) goto LAB_0dd5f61c;
LAB_0dd5f623:
    puStack_1e0 = &UNK_0f012348;
    lVar19 = param_3[5];
    lVar14 = param_3[6];
    if (lVar14 == 0) {
      (*pcVar11)(0,param_3,0);
      lVar14 = param_3[6];
      cVar9 = *(char *)((long)param_3 + 0x24);
      plVar16 = (long *)*param_3;
    }
    if (cVar9 == '\x02') {
      plVar16 = param_3;
    }
    plStack_318 = (long *)FUN_0488e200(lVar19,lVar14,0xb2550960,plVar16);
  }
  uStack_58 = *param_5;
  uStack_50 = param_5[1];
  plVar16 = (long *)param_5[2];
  uStack_80 = uStack_58;
  uStack_78 = uStack_50;
  if (plVar16 == (long *)0x0) {
    plVar16 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0);
    uStack_58 = *param_5;
    uStack_50 = param_5[1];
    plVar16 = (long *)param_5[2];
  }
  uStack_68 = *(undefined4 *)(param_5 + 3);
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_1e8 = &UNK_0f49d0b0;
  if (plVar16 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar16 + 0x30))(plVar16,1);
  }
  uStack_40 = *(undefined4 *)(param_5 + 3);
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar8 = (**(code **)(*param_2 + 0x18))(param_2);
  puStack_2c0 = param_5;
  if (bVar8 == 1) {
    uVar12 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar13 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar13 < uVar12)) {
      uStack_208 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_208);
      if ((uStack_208 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&lStack_218,*param_5);
    if (uVar12 == 0) {
      return;
    }
    plStack_260 = plStack_318 + 2;
    uStack_2d0 = 0;
    uStack_2d8 = uVar12;
    plStack_2c8 = param_3;
LAB_0dd5f8e9:
    uVar30 = uStack_210;
    lVar19 = lStack_218;
    if (uStack_210 <= *(uint *)(lStack_218 + 0x2b0) && *(uint *)(lStack_218 + 0x2b0) != 0xffffffff)
    {
      return;
    }
    auVar37 = (**(code **)(*param_2 + 0xc0))();
    puVar32 = puStack_70;
    auStack_200 = auVar37;
    if (puStack_70 != (undefined8 *)0x0) {
      lVar19 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar19 == 0) {
        func_0x048b0de0(&uStack_2b8,auStack_308);
        _DAT_0f54fd90 = (undefined4)uStack_2b8;
        uRam000000000f54fd94 = uStack_2b8._4_4_;
        uVar4 = (undefined4)uStack_2b0;
        uVar5 = uStack_2b0._4_4_;
        uStack_2b8 = (long *)0x0;
        uStack_2b0 = (long *)0x0;
        plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar4;
        uRam000000000f54fd9c = uVar5;
        if (plVar16 != (long *)0x0) {
          LOCK();
          plVar17 = plVar16 + 1;
          lVar19 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            func_0x0412c2d0(plVar16);
          }
        }
        plVar16 = uStack_2b0;
        if (uStack_2b0 != (long *)0x0) {
          LOCK();
          plVar17 = uStack_2b0 + 1;
          lVar19 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*uStack_2b0 + 0x10))(uStack_2b0);
            func_0x0412c2d0(plVar16);
          }
        }
        lVar19 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar12 = uStack_2d8;
      }
      puStack_1c8 = (undefined8 *)&UNK_05ea5bd0;
      uStack_1b8 = 0x989eedf9;
      pcStack_1c0 = (code *)0x0;
      cStack_1b4 = '\x04';
      auStack_1d8 = (undefined1  [8])auStack_200;
      uStack_1a8 = 0;
      puStack_1a0 = &UNK_05ea5bb0;
      lStack_1b0 = lVar19;
      (**(code **)*puVar32)(puVar32,auStack_1d8,uStack_80);
      lVar19 = lStack_218;
      uVar30 = uStack_210;
      if (pcStack_1c0 != (code *)0x0) {
        (*pcStack_1c0)(auStack_1d8);
        lVar19 = lStack_218;
        uVar30 = uStack_210;
      }
    }
    uVar6 = auStack_200._8_8_;
    uVar20 = auStack_200._0_8_;
    if ((*(uint *)(lVar19 + 0x2b0) != 0xffffffff) && (uVar30 <= *(uint *)(lVar19 + 0x2b0)))
    goto LAB_0dd5f8dd;
    uVar1 = *puStack_2c0;
    uStack_268 = 0;
    if (auStack_200._0_8_ == 0) {
      uStack_268 = (auStack_200._8_8_ & 0x7f) << 0x30;
    }
    else {
      lVar19 = auStack_200._8_8_ + 9;
      unaff_R13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
      if (lVar19 != 0 && unaff_R13 == (ulong *)0x0) {
        func_0x0eec74c0(lVar19,8);
      }
      *unaff_R13 = uVar6;
      memcpy(unaff_R13 + 1,uVar20,uVar6);
      *(byte *)((long)unaff_R13 + uVar6 + 8) = 0;
      uStack_268 = (ulong)(unaff_R13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar15 = (ulong *)func_0x0ed6d180(uVar1,&uStack_268,0);
    if ((uStack_268 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
    }
    uVar12 = auStack_200._8_8_;
    uVar20 = auStack_200._0_8_;
    uStack_268 = 0;
    puStack_248 = puVar15;
    if ((ulong)auStack_200._8_8_ < 0xfffffffffffffff8) {
      if ((ulong)auStack_200._8_8_ < 0x17) {
        _auStack_308 = CONCAT71(stack0xfffffffffffffcf9,auStack_200[8] * '\x02');
        plVar16 = (long *)(auStack_308 + 1);
        if (auStack_200._8_8_ != 0) goto LAB_0dd5fc37;
      }
      else {
        uVar13 = (auStack_200._8_8_ | 7) + 1;
        if ((auStack_200._8_8_ | 7) == 0x17) {
          uVar13 = 0x1a;
        }
        plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (plVar16 == (long *)0x0) {
          func_0x0eec74c0(uVar13,0);
        }
        _auStack_308 = uVar13 | 1;
        uStack_300 = uVar12;
        plStack_2f8 = plVar16;
LAB_0dd5fc37:
        func_0x0eee2ee0(plVar16,uVar20,uVar12);
      }
      *(undefined1 *)((long)plVar16 + uVar12) = 0;
      puStack_1c8 = (undefined8 *)0x0;
      pcStack_1c0 = (code *)0x0;
      auStack_1d8 = (undefined1  [8])0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0x3f800000;
      uStack_120 = 2;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      cStack_e8 = '\0';
      lStack_b0 = 0;
      lStack_a8 = 0;
      uStack_c0 = 0;
      lStack_b8 = 0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      lStack_e0 = 0;
      uStack_d8 = 0;
      lStack_a0 = 0x500000005;
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x178);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x178,0);
      }
      uStack_2b0 = plStack_318;
      puStack_2a8 = (undefined *)0x0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[2] = 0;
      uStack_2b8 = plVar16;
      if ((_auStack_308 & 1) == 0) {
        plVar16[5] = (long)plStack_2f8;
        *(undefined1 (*) [4])(plVar16 + 3) = auStack_308;
        *(undefined4 *)((long)plVar16 + 0x1c) = uStack_304;
        *(undefined4 *)(plVar16 + 4) = (undefined4)uStack_300;
        *(undefined4 *)((long)plVar16 + 0x24) = uStack_300._4_4_;
      }
      else {
        func_0x0412e5e0(plVar16 + 3,plStack_2f8,uStack_300);
      }
      plVar16[6] = 0;
      bVar8 = *(byte *)(plVar16 + 3);
      if ((bVar8 & 1) == 0) {
        if (bVar8 >> 1 != 0) goto LAB_0dd5fd6d;
LAB_0dd5fe50:
        uVar12 = 0;
      }
      else {
        if (plVar16[4] == 0) goto LAB_0dd5fe50;
LAB_0dd5fd6d:
        if ((bVar8 & 1) == 0) {
          pbVar29 = (byte *)((long)plVar16 + 0x19);
          if (pbVar29 != (byte *)0x0) goto LAB_0dd5fd8c;
          goto LAB_0dd5fe50;
        }
        pbVar29 = (byte *)plVar16[5];
        if (pbVar29 == (byte *)0x0) goto LAB_0dd5fe50;
LAB_0dd5fd8c:
        if (*pbVar29 == 0) goto LAB_0dd5fe50;
        uVar13 = func_0x0eee2e90(pbVar29);
        uVar12 = 0xcbf29ce484222325;
        if (uVar13 != 0) {
          if (7 < uVar13) {
            uVar27 = uVar13 & 0xfffffffffffffff8;
            do {
              uVar12 = (((((((uVar12 * 0x100000001b3 ^ (ulong)*pbVar29) * 0x100000001b3 ^
                            (ulong)pbVar29[1]) * 0x100000001b3 ^ (ulong)pbVar29[2]) * 0x100000001b3
                          ^ (ulong)pbVar29[3]) * 0x100000001b3 ^ (ulong)pbVar29[4]) * 0x100000001b3
                        ^ (ulong)pbVar29[5]) * 0x100000001b3 ^ (ulong)pbVar29[6]) * 0x100000001b3 ^
                       (ulong)pbVar29[7];
              pbVar29 = pbVar29 + 8;
              uVar27 = uVar27 - 8;
            } while (uVar27 != 0);
          }
          if ((uVar13 & 7) != 0) {
            uVar27 = 0;
            do {
              uVar12 = uVar12 * 0x100000001b3 ^ (ulong)pbVar29[uVar27];
              uVar27 = uVar27 + 1;
            } while (((uint)uVar13 & 7) != uVar27);
          }
        }
      }
      uVar30 = uStack_120;
      plVar16[2] = uVar12;
      *(undefined1 *)(plVar16 + 7) = 0;
      *(undefined4 *)(plVar16 + 0x1e) = 0xffffffff;
      if ((ulong)uStack_120 != 0xffffffff) {
        plStack_88 = plVar16 + 7;
        (**(code **)(&UNK_0f49d1a0 + (ulong)uStack_120 * 8))(&plStack_88,auStack_1d8);
        *(uint *)(plVar16 + 0x1e) = uVar30;
      }
      *(undefined4 *)(plVar16 + 0x1f) = uStack_118;
      *(undefined1 *)((long)plVar16 + 0xfc) = uStack_114;
      *(undefined1 *)(plVar16 + 0x20) = 0;
      *(undefined1 *)(plVar16 + 0x25) = 0;
      if (cStack_e8 == '\x01') {
        plVar16[0x24] = 0;
        plVar16[0x23] = lStack_f8;
        plVar16[0x21] = CONCAT62(uStack_106,CONCAT11(uStack_107,bStack_108));
        plVar16[0x22] = lStack_100;
        bStack_108 = 0;
        uStack_107 = 0;
        plVar16[0x20] = CONCAT71(uStack_10f,uStack_110);
        *(undefined1 *)(plVar16 + 0x25) = 1;
      }
      plVar16[0x2a] = 0;
      plVar16[0x29] = lStack_c8;
      plVar16[0x27] = uStack_d8;
      plVar16[0x28] = lStack_d0;
      uStack_d8 = uStack_d8 & 0xffffffffffff0000;
      plVar16[0x26] = lStack_e0;
      plVar16[0x2b] = lStack_b8;
      plVar16[0x2c] = lStack_b0;
      plVar16[0x2d] = lStack_a8;
      lStack_b8 = 0;
      lStack_b0 = 0;
      lStack_a8 = 0;
      plVar16[0x2e] = lStack_a0;
      puStack_2a8 = (undefined *)CONCAT71(puStack_2a8._1_7_,1);
      uVar12 = plVar16[2];
      plVar16[1] = uVar12;
      uVar13 = plStack_318[1];
      if (uVar13 != 0) {
        uVar27 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
        uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar27 >> 0x38 < 2) {
          uVar31 = uVar13 - 1 & uVar12;
        }
        else {
          uVar31 = uVar12;
          if (uVar13 <= uVar12) {
            if ((uVar12 | uVar13) >> 0x20 == 0) {
              uVar31 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
            }
            else {
              uVar31 = uVar12 % uVar13;
            }
          }
        }
        puVar32 = *(undefined8 **)(*plStack_318 + uVar31 * 8);
        if ((puVar32 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar32, plVar17 != (long *)0x0))
        {
          plVar18 = plVar16 + 2;
          puStack_258 = (ulong *)((long)plVar16 + 0x19);
          plStack_250 = plVar18;
          if ((byte)(uVar27 >> 0x38) < 2) {
            uVar27 = uVar13 - 1;
            uStack_278 = uVar27;
            do {
              if (plVar17[1] == uVar12) {
                if (plVar17[2] == uVar12) {
                  plVar33 = plVar17 + 2;
                  if (((long *)plVar17[6] == plVar18) && ((long *)plVar16[6] == plVar33))
                  goto LAB_0dd60800;
                  bVar8 = *(byte *)(plVar17 + 3);
                  if ((bVar8 & 1) == 0) {
                    uVar28 = (ulong)(bVar8 >> 1);
                    uVar24 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) != 0) goto LAB_0dd60247;
LAB_0dd60222:
                    if (uVar28 != uVar24 >> 1) goto LAB_0dd601cd;
                  }
                  else {
                    uVar28 = plVar17[4];
                    uVar24 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) == 0) goto LAB_0dd60222;
LAB_0dd60247:
                    if (uVar28 != plVar16[4]) goto LAB_0dd601cd;
                  }
                  if ((bVar8 & 1) == 0) {
                    lVar19 = (long)plVar17 + 0x19;
                  }
                  else {
                    lVar19 = plVar17[5];
                  }
                  puVar15 = puStack_258;
                  if ((uVar24 & 1) != 0) {
                    puVar15 = (ulong *)plVar16[5];
                  }
                  iVar10 = func_0x0eee3000(lVar19,puVar15);
                  plVar18 = plStack_250;
                  uVar27 = uStack_278;
                  if (iVar10 == 0) goto LAB_0dd607ed;
                }
LAB_0dd601cd:
                plVar17[6] = 0;
              }
              else if ((plVar17[1] & uVar27) != uVar31) break;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              uVar27 = plVar17[1];
              if (uVar27 == uVar12) {
                if (plVar17[2] == uVar12) {
                  plVar33 = plVar17 + 2;
                  if (((long *)plVar17[6] == plVar18) && ((long *)plVar16[6] == plVar33))
                  goto LAB_0dd60800;
                  bVar8 = *(byte *)(plVar17 + 3);
                  if ((bVar8 & 1) == 0) {
                    uVar27 = (ulong)(bVar8 >> 1);
                    uVar28 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) != 0) goto LAB_0dd60150;
LAB_0dd6010f:
                    if (uVar27 != uVar28 >> 1) goto LAB_0dd600ba;
                  }
                  else {
                    uVar27 = plVar17[4];
                    uVar28 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) == 0) goto LAB_0dd6010f;
LAB_0dd60150:
                    if (uVar27 != plVar16[4]) goto LAB_0dd600ba;
                  }
                  if ((bVar8 & 1) == 0) {
                    lVar19 = (long)plVar17 + 0x19;
                  }
                  else {
                    lVar19 = plVar17[5];
                  }
                  puVar15 = puStack_258;
                  if ((uVar28 & 1) != 0) {
                    puVar15 = (ulong *)plVar16[5];
                  }
                  iVar10 = func_0x0eee3000(lVar19,puVar15);
                  plVar18 = plStack_250;
                  if (iVar10 == 0) goto LAB_0dd607ed;
                }
LAB_0dd600ba:
                plVar17[6] = 0;
              }
              else {
                if (uVar13 <= uVar27) {
                  if ((uVar27 | uVar13) >> 0x20 == 0) {
                    if ((uVar27 & 0xffffffff) % (uVar13 & 0xffffffff) == uVar31) goto LAB_0dd600c3;
                    break;
                  }
                  uVar27 = uVar27 % uVar13;
                }
                if (uVar27 != uVar31) break;
              }
LAB_0dd600c3:
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      plVar18 = plStack_2c8;
      uVar12 = uStack_2d8;
      if ((long)uVar13 < 0) {
        fVar36 = (float)uVar13;
        fVar35 = *(float *)(plStack_318 + 4);
        if (uVar13 == 0) goto LAB_0dd60326;
LAB_0dd60319:
        if (fVar36 * fVar35 < (float)(plStack_318[3] + 1)) goto LAB_0dd60326;
        goto LAB_0dd604c0;
      }
      fVar36 = (float)(long)uVar13;
      fVar35 = *(float *)(plStack_318 + 4);
      if (uVar13 != 0) goto LAB_0dd60319;
LAB_0dd60326:
      uVar27 = 1;
      if (2 < uVar13) {
        uVar27 = (ulong)((uVar13 & uVar13 - 1) != 0);
      }
      uVar27 = uVar13 * 2 | uVar27;
      fVar35 = (float)func_0x0eee3ab0((float)(plStack_318[3] + 1) / fVar35);
      uVar31 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
      if (uVar31 < uVar27) {
        uVar31 = uVar27;
      }
      uVar27 = 2;
      if ((uVar31 == 1) || (uVar27 = uVar31, (uVar31 & uVar31 - 1) == 0)) {
        bVar34 = uVar27 < uVar13;
        if (uVar27 <= uVar13) goto LAB_0dd603b9;
LAB_0dd60393:
        func_0x0dd5dc90(plStack_318,uVar27);
      }
      else {
        uVar27 = FUN_0412c3f0();
        uVar13 = plStack_318[1];
        bVar34 = uVar27 < uVar13;
        if (uVar13 < uVar27) goto LAB_0dd60393;
LAB_0dd603b9:
        if (bVar34) {
          fVar35 = (float)func_0x0eee3ab0((float)(ulong)plStack_318[3] / *(float *)(plStack_318 + 4)
                                         );
          uVar31 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
          if ((uVar13 < 3) ||
             (uVar28 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
             uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
             1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar31 = FUN_0412c3f0(uVar31);
          }
          else if (1 < uVar31) {
            lVar19 = 0x3f;
            if (uVar31 - 1 != 0) {
              for (; uVar31 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar31 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
          }
          if (uVar27 <= uVar31) {
            uVar27 = uVar31;
          }
          if (uVar27 < uVar13) goto LAB_0dd60393;
        }
      }
LAB_0dd604c0:
      uVar13 = plStack_318[1];
      uVar27 = plVar16[1];
      uVar31 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333);
      uVar31 = ((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar31 >> 0x38 < 2) {
        uVar27 = uVar27 & uVar13 - 1;
      }
      else if (uVar13 <= uVar27) {
        if ((uVar27 | uVar13) >> 0x20 == 0) {
          uVar27 = (uVar27 & 0xffffffff) % (uVar13 & 0xffffffff);
        }
        else {
          uVar27 = uVar27 % uVar13;
        }
      }
      lVar19 = *plStack_318;
      plVar17 = *(long **)(lVar19 + uVar27 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar16 = *plStack_260;
        *plStack_260 = (long)plVar16;
        *(long **)(lVar19 + uVar27 * 8) = plStack_260;
        if (*plVar16 != 0) {
          uVar27 = *(ulong *)(*plVar16 + 8);
          if ((byte)(uVar31 >> 0x38) < 2) {
            *(long **)(lVar19 + (uVar27 & uVar13 - 1) * 8) = plVar16;
          }
          else {
            if (uVar13 <= uVar27) {
              if ((uVar27 | uVar13) >> 0x20 == 0) {
                *(long **)(lVar19 + ((uVar27 & 0xffffffff) % (uVar13 & 0xffffffff)) * 8) = plVar16;
                goto LAB_0dd6058e;
              }
              uVar27 = uVar27 % uVar13;
            }
            *(long **)(lVar19 + uVar27 * 8) = plVar16;
          }
        }
      }
      else {
        *plVar16 = *plVar17;
        *plVar17 = (long)plVar16;
      }
LAB_0dd6058e:
      plStack_318[3] = plStack_318[3] + 1;
      plVar17 = plVar16;
      goto LAB_0dd60596;
    }
    func_0x04882e30();
    goto LAB_0dd61b1d;
  }
  if ((bVar8 & 2) == 0) {
    lVar19 = param_3[5];
    lVar14 = func_0x048b2190(lVar19);
    plVar16 = *(long **)(lVar14 + 0x78);
    if (plVar16 == (long *)0x0) {
LAB_0dd5f854:
      if (*(code **)(lVar14 + 0x30) == (code *)0x0) {
        puStack_2a8 = &UNK_0488e0b0;
        iStack_298 = 0x48b5725f;
        pcStack_2a0 = (code *)0x0;
        uStack_294 = 0;
        uStack_2b8 = (long *)0x0;
        uStack_288 = 0;
        puStack_280 = (undefined *)0x0;
        lStack_290 = lVar19;
        goto LAB_0dd60a18;
      }
      (**(code **)(lVar14 + 0x30))(&uStack_2b8,lVar19);
      if (iStack_298 != -0x3677df2f) goto LAB_0dd60a18;
LAB_0dd60a77:
      plVar16 = (long *)&UNK_0133e465;
      uVar12 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar26 = *plVar16;
      if (lVar26 == 0 || lVar26 == plVar16[1]) goto LAB_0dd5f854;
      lVar22 = 0;
      bVar34 = false;
      do {
        lVar23 = lVar26;
        if (lVar22 != 0) {
          lVar23 = lVar22;
        }
        bVar3 = lVar22 != 0;
        if (*(long *)(lVar26 + 8) != 0) {
          lVar23 = lVar22;
          bVar3 = bVar34;
        }
        lVar26 = lVar26 + 0x20;
        lVar22 = lVar23;
        bVar34 = bVar3;
      } while (lVar26 != plVar16[1]);
      if (bVar3 || lVar23 == 0) goto LAB_0dd5f854;
      (**(code **)(lVar23 + 0x18))(&uStack_2b8,lVar19,0);
      if (iStack_298 == -0x3677df2f) goto LAB_0dd60a77;
LAB_0dd60a18:
      func_0x05ea6440(auStack_1d8,&uStack_2b8);
      puVar7 = puStack_1a0;
      if ((puStack_1a0 != (undefined *)0x0) && ((byte)(cStack_1b4 - 1U) < 2)) {
        func_0x048b0900(&uStack_2b8,auStack_1d8);
      }
      if (pcStack_1c0 != (code *)0x0) {
        (*pcStack_1c0)(auStack_1d8);
      }
      if (puVar7 != (undefined *)0x0) goto LAB_0dd60a77;
      plVar16 = (long *)&UNK_01411d3a;
      uVar12 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar12 < 0xfffffffffffffff8) {
      if (uVar12 < 0x17) {
        stack0xfffffffffffffcf9 = (undefined7)(_auStack_308 >> 8);
        _auStack_308 = CONCAT71(stack0xfffffffffffffcf9,(char)uVar12 * '\x02');
        plVar17 = (long *)(auStack_308 + 1);
        if (uVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          auStack_308[1] = 0;
          goto joined_r0x0dd60b23;
        }
      }
      else {
        uVar13 = 0x1a;
        if ((uVar12 | 7) != 0x17) {
          uVar13 = (uVar12 | 7) + 1;
        }
        plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (plVar17 == (long *)0x0) {
          func_0x0eec74c0(uVar13,0);
        }
        _auStack_308 = uVar13 | 1;
        uStack_300 = uVar12;
        plStack_2f8 = plVar17;
      }
      memcpy(plVar17,plVar16,uVar12);
      *(undefined1 *)((long)plVar17 + uVar12) = 0;
joined_r0x0dd60b23:
      if (pcStack_2a0 != (code *)0x0) {
        (*pcStack_2a0)(&uStack_2b8);
      }
      uVar13 = _auStack_308;
      puVar15 = (ulong *)(_auStack_308 & 0xff);
      uVar27 = uStack_300;
      if ((_auStack_308 & 1) == 0) {
        uVar27 = _auStack_308 >> 1 & 0x7f;
      }
      uVar12 = uVar27 + 0xc;
      if (uVar12 < 0xfffffffffffffff8) {
        uVar20 = *puStack_2c0;
        if (uVar12 < 0x17) {
          uStack_1d0 = 0;
          puStack_1c8 = (undefined8 *)0x0;
          auStack_1d8._1_7_ = 0;
          auStack_1d8[0] = (char)uVar12 * '\x02';
        }
        else {
          uVar31 = 0x1a;
          if ((uVar12 | 7) != 0x17) {
            uVar31 = (uVar12 | 7) + 1;
          }
          puStack_1c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
          if (puStack_1c8 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar31,0);
          }
          auStack_1d8 = (undefined1  [8])(uVar31 | 1);
          uStack_1d0 = uVar12;
        }
        lVar19 = (long)puStack_1c8 + 0xc;
        bVar34 = ((ulong)auStack_1d8 & 1) == 0;
        puVar32 = puStack_1c8;
        if (bVar34) {
          puVar32 = (undefined8 *)(auStack_1d8 + 1);
        }
        *puVar32 = 0x6465746365707865;
        *(undefined4 *)(puVar32 + 1) = 0x206e6120;
        lVar14 = (long)&uStack_1d0 + 5;
        if (!bVar34) {
          lVar14 = lVar19;
        }
        if (uVar27 != 0) {
          plVar16 = plStack_2f8;
          if ((uVar13 & 1) == 0) {
            plVar16 = (long *)(auStack_308 + 1);
          }
          func_0x0eee2ee0(lVar14,plVar16,uVar27);
        }
        *(undefined1 *)(lVar14 + uVar27) = 0;
        uVar12 = (ulong)auStack_1d8 >> 1 & 0x7f;
        puVar32 = (undefined8 *)(auStack_1d8 + 1);
        if (((ulong)auStack_1d8 & 1) != 0) {
          uVar12 = uStack_1d0;
          puVar32 = puStack_1c8;
        }
        uStack_270 = 0;
        if (puVar32 == (undefined8 *)0x0) {
          uStack_270 = (ulong)((uint)uVar12 & 0x7f) << 0x30;
        }
        else {
          lVar19 = uVar12 + 9;
          puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
          if (lVar19 != 0 && puVar15 == (ulong *)0x0) {
            func_0x0eec74c0(lVar19,8);
          }
          *puVar15 = uVar12;
          memcpy(puVar15 + 1,puVar32,uVar12);
          *(undefined1 *)((long)puVar15 + uVar12 + 8) = 0;
          uStack_270 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar20,8,&uStack_270);
        if ((uStack_270 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
        }
        uStack_270 = 0;
        if (((ulong)auStack_1d8 & 1) != 0) {
          func_0x0412a280(puStack_1c8,(ulong)auStack_1d8 & 0xfffffffffffffffe);
        }
        if ((uVar13 & 1) != 0) {
          func_0x0412a280(plStack_2f8,_auStack_308 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0dd61b1d:
      uVar20 = func_0x04882e30();
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x0ee386e0(&uStack_220);
      uVar20 = _Unwind_Resume(uVar20);
      if ((*unaff_R13 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar12 + 0x28),
                        *(ulong *)(uVar12 + 0x18) & 0xfffffffffffffffe);
      }
      func_0x0dd5cfd0(&uStack_2b8);
      if (pcStack_1c0 != (code *)0x0) {
        (*pcStack_1c0)(auStack_1d8);
      }
      if ((uStack_300 & 1) != 0) {
        func_0x0412a280(uStack_2f0,uStack_300 & 0xfffffffffffffffe);
      }
      (**(code **)(*param_2 + 0xd0))();
      func_0x0ed6d560(puVar15);
      uVar20 = _Unwind_Resume(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x04882e20(uVar20);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar12 = func_0x04882e30();
    plVar17 = param_2;
LAB_0dd60db1:
    fVar35 = (float)uVar12;
LAB_0dd60dc9:
    fVar35 = (float)func_0x0eee3ab0(fVar35 / *(float *)(plStack_318 + 4));
    plVar18 = (long *)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35);
    if ((plVar17 < (long *)0x3) ||
       (uVar12 = (long)plVar17 - ((ulong)plVar17 >> 1 & 0x5555555555555555),
       uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
       1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar18 = (long *)FUN_0412c3f0(plVar18);
    }
    else if ((long *)0x1 < plVar18) {
      lVar19 = 0x3f;
      if ((undefined *)((long)plVar18 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar18 + -1) >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      plVar18 = (long *)(1L << (-((byte)lVar19 ^ 0x3f) & 0x3f));
    }
    if (plVar16 <= plVar18) {
      plVar16 = plVar18;
    }
    if (plVar17 <= plVar16) goto LAB_0dd60e91;
  }
  else {
    unaff_R13 = (ulong *)(**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (puVar15 = (ulong *)(**(code **)(*(long *)param_5[2] + 0x10))(), puVar15 < unaff_R13)) {
      uStack_220 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_220);
      if ((uStack_220 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar35 = (float)func_0x0eee3ab0((float)unaff_R13 / *(float *)(plStack_318 + 4));
    plVar17 = (long *)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35);
    plVar16 = (long *)0x2;
    if ((plVar17 == (long *)0x1) ||
       (plVar16 = plVar17, ((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0)) {
      plVar17 = (long *)plStack_318[1];
      bVar34 = plVar16 < plVar17;
      if (plVar16 <= plVar17) goto LAB_0dd609da;
    }
    else {
      plVar16 = (long *)FUN_0412c3f0();
      plVar17 = (long *)plStack_318[1];
      bVar34 = plVar16 < plVar17;
      if (plVar16 <= plVar17) {
LAB_0dd609da:
        if (!bVar34) goto LAB_0dd60e91;
        uVar12 = plStack_318[3];
        if ((long)uVar12 < 0) goto LAB_0dd60db1;
        fVar35 = (float)(long)uVar12;
        goto LAB_0dd60dc9;
      }
    }
  }
  func_0x0dd5dc90(plStack_318,plVar16);
LAB_0dd60e91:
  plStack_2c8 = param_3;
  func_0x0ed6d600(&lStack_218,*param_5);
  if (unaff_R13 == (ulong *)0x0) {
    return;
  }
  uStack_2d8 = 0x1b0000014af0d9;
  puStack_248 = (ulong *)0x38000001448967;
  plStack_250 = (long *)0x3a000001208ef5;
  plStack_90 = plStack_318 + 2;
  puVar15 = (ulong *)0x0;
  puStack_258 = unaff_R13;
LAB_0dd60f60:
  if ((*(uint *)(lStack_218 + 0x2b0) != 0xffffffff) && (uStack_210 <= *(uint *)(lStack_218 + 0x2b0))
     ) {
    return;
  }
  puVar2 = (uint *)*param_5;
  func_0x0ed6d4a0(puVar2,puVar15);
  (**(code **)(*param_2 + 200))(param_2,puVar15);
  cVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((cVar9 != '\x01') || (lVar19 = (**(code **)(*param_2 + 0xa8))(param_2), lVar19 == 2)) {
    cVar9 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
    if (cVar9 == '\0') {
      uStack_238 = (ulong)puStack_248;
      func_0x0ed5ffe0(*puStack_2c0,8,&uStack_238);
      if ((uStack_238 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
      }
      uStack_238 = 0;
      goto LAB_0dd61990;
    }
    plStack_2f8 = (long *)0x0;
    uStack_2f0 = 0;
    _auStack_308 = 0;
    uStack_300 = 0;
    plStack_2e8 = (long *)0x0;
    lStack_1b0 = plStack_2c8[5];
    puStack_1c8 = (undefined8 *)&UNK_05e9f930;
    uStack_1b8 = 0xc98820d1;
    pcStack_1c0 = (code *)0x0;
    cStack_1b4 = '\x03';
    auStack_1d8 = (undefined1  [8])auStack_308;
    uStack_1a8 = 0;
    puStack_1a0 = &UNK_05e9f910;
    func_0x0ed75bc0(&puStack_1e0,param_2,auStack_1d8,uStack_228,&uStack_80);
    (**(code **)(*param_2 + 0xd0))(param_2);
    cVar9 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
    uVar12 = _auStack_308;
    if (cVar9 != '\0') {
      uVar13 = plStack_318[1];
      if (uVar13 != 0) {
        uVar27 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
        uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar27 >> 0x38 < 2) {
          uVar31 = uVar13 - 1 & _auStack_308;
        }
        else {
          uVar31 = _auStack_308;
          if (uVar13 <= _auStack_308) {
            if ((_auStack_308 | uVar13) >> 0x20 == 0) {
              uVar31 = (_auStack_308 & 0xffffffff) % (uVar13 & 0xffffffff);
            }
            else {
              uVar31 = _auStack_308 % uVar13;
            }
          }
        }
        puVar32 = *(undefined8 **)(*plStack_318 + uVar31 * 8);
        uStack_2d0 = uVar31;
        if ((puVar32 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar32, plVar16 != (long *)0x0))
        {
          uStack_278 = uStack_2f0;
          plVar17 = plStack_2f8;
          if ((uStack_300 & 1) == 0) {
            uStack_278 = (long)&uStack_300 + 1;
            plVar17 = (long *)(uStack_300 >> 1 & 0x7f);
          }
          plStack_1f0 = plStack_2e8;
          plVar18 = plStack_2e8;
          plStack_260 = plVar17;
          if ((byte)(uVar27 >> 0x38) < 2) {
            uVar27 = uVar13 - 1;
            uStack_98 = uVar27;
            do {
              if (plVar16[1] == uVar12) {
                if (plVar16[2] == uVar12) {
                  plVar33 = plVar16 + 2;
                  if (plVar18 == plVar33 && (undefined1 *)plVar16[6] == auStack_308)
                  goto LAB_0dd618b1;
                  bVar8 = *(byte *)(plVar16 + 3);
                  if ((bVar8 & 1) == 0) {
                    plVar25 = (long *)(ulong)(bVar8 >> 1);
                  }
                  else {
                    plVar25 = (long *)plVar16[4];
                  }
                  if (plVar25 == plVar17) {
                    if ((bVar8 & 1) == 0) {
                      lVar19 = (long)plVar16 + 0x19;
                    }
                    else {
                      lVar19 = plVar16[5];
                    }
                    iVar10 = func_0x0eee3000(lVar19,uStack_278,plVar17);
                    uVar27 = uStack_98;
                    uVar31 = uStack_2d0;
                    plVar18 = plStack_1f0;
                    plVar17 = plStack_260;
                    if (iVar10 == 0) goto LAB_0dd61a96;
                  }
                }
                plVar16[6] = 0;
              }
              else if ((plVar16[1] & uVar27) != uVar31) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              uVar27 = plVar16[1];
              if (uVar27 == uVar12) {
                if (plVar16[2] == uVar12) {
                  plVar33 = plVar16 + 2;
                  if (plVar18 == plVar33 && (undefined1 *)plVar16[6] == auStack_308)
                  goto LAB_0dd618b1;
                  bVar8 = *(byte *)(plVar16 + 3);
                  if ((bVar8 & 1) == 0) {
                    plVar25 = (long *)(ulong)(bVar8 >> 1);
                  }
                  else {
                    plVar25 = (long *)plVar16[4];
                  }
                  if (plVar25 == plVar17) {
                    if ((bVar8 & 1) == 0) {
                      lVar19 = (long)plVar16 + 0x19;
                    }
                    else {
                      lVar19 = plVar16[5];
                    }
                    iVar10 = func_0x0eee3000(lVar19,uStack_278,plVar17);
                    uVar31 = uStack_2d0;
                    plVar18 = plStack_1f0;
                    plVar17 = plStack_260;
                    if (iVar10 == 0) goto LAB_0dd61a96;
                  }
                }
                plVar16[6] = 0;
              }
              else {
                if (uVar13 <= uVar27) {
                  if ((uVar27 | uVar13) >> 0x20 == 0) {
                    if ((uVar27 & 0xffffffff) % (uVar13 & 0xffffffff) == uVar31) goto LAB_0dd61381;
                    break;
                  }
                  uVar27 = uVar27 % uVar13;
                }
                if (uVar27 != uVar31) break;
              }
LAB_0dd61381:
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
      }
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x178);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x178,0);
      }
      uStack_2b0 = plStack_318;
      puStack_2a8 = (undefined *)0x0;
      *plVar16 = 0;
      plVar16[1] = uVar12;
      plVar16[2] = 0;
      plVar16[3] = 0;
      plVar16[4] = 0;
      plVar16[5] = 0;
      plVar16[6] = 0;
      uStack_2b8 = plVar16;
      if (plVar16 + 2 != (long *)auStack_308) {
        if ((uStack_300 & 1) == 0) {
          plVar16[5] = uStack_2f0;
          plVar16[3] = uStack_300;
          plVar16[4] = (long)plStack_2f8;
        }
        else {
          func_0x04885070(plVar16 + 3,uStack_2f0,plStack_2f8);
        }
      }
      plVar16[2] = _auStack_308;
      plVar16[0xb] = 0;
      plVar16[0xc] = 0;
      plVar16[0x1d] = 0;
      plVar16[0x1e] = 0;
      plVar16[7] = 0;
      plVar16[8] = 0;
      plVar16[9] = 0;
      plVar16[10] = 0;
      plVar16[0xd] = 0;
      plVar16[0xe] = 0;
      plVar16[0xf] = 0;
      plVar16[0x10] = 0;
      plVar16[0x11] = 0;
      plVar16[0x12] = 0;
      plVar16[0x13] = 0;
      plVar16[0x14] = 0;
      plVar16[0x15] = 0;
      plVar16[0x16] = 0;
      plVar16[0x17] = 0;
      plVar16[0x18] = 0;
      plVar16[0x19] = 0;
      plVar16[0x1a] = 0;
      plVar16[0x1b] = 0;
      plVar16[0x1c] = 0;
      plVar16[0x1f] = 0;
      plVar16[0x20] = 0;
      plVar16[0x21] = 0;
      plVar16[0x22] = 0;
      plVar16[0x23] = 0;
      plVar16[0x24] = 0;
      plVar16[0x25] = 0;
      *(undefined4 *)(plVar16 + 0xb) = 0x3f800000;
      *(undefined4 *)(plVar16 + 0x1e) = 2;
      plVar16[0x2c] = 0;
      plVar16[0x2d] = 0;
      plVar16[0x2a] = 0;
      plVar16[0x2b] = 0;
      plVar16[0x28] = 0;
      plVar16[0x29] = 0;
      plVar16[0x26] = 0;
      plVar16[0x27] = 0;
      plVar16[0x2e] = 0x500000005;
      puStack_2a8 = (undefined *)CONCAT71(puStack_2a8._1_7_,1);
      if ((long)uVar13 < 0) {
        fVar36 = (float)uVar13;
        fVar35 = *(float *)(plStack_318 + 4);
        if (uVar13 != 0) goto LAB_0dd615e1;
LAB_0dd615f2:
        uVar27 = 1;
        if (2 < uVar13) {
          uVar27 = (ulong)((uVar13 & uVar13 - 1) != 0);
        }
        uVar27 = uVar13 * 2 | uVar27;
        fVar35 = (float)func_0x0eee3ab0((float)(plStack_318[3] + 1) / fVar35);
        uVar13 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
        if (uVar13 < uVar27) {
          uVar13 = uVar27;
        }
        uVar27 = 2;
        if ((uVar13 == 1) || (uVar27 = uVar13, (uVar13 & uVar13 - 1) == 0)) {
          uVar13 = plStack_318[1];
          bVar34 = uVar27 < uVar13;
          if (uVar27 <= uVar13) goto LAB_0dd61750;
LAB_0dd6166b:
          func_0x0dd5dc90(plStack_318,uVar27);
        }
        else {
          uVar27 = FUN_0412c3f0();
          uVar13 = plStack_318[1];
          bVar34 = uVar27 < uVar13;
          if (uVar13 < uVar27) goto LAB_0dd6166b;
LAB_0dd61750:
          if (bVar34) {
            fVar35 = (float)func_0x0eee3ab0((float)(ulong)plStack_318[3] /
                                            *(float *)(plStack_318 + 4));
            uVar31 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
            if ((uVar13 < 3) ||
               (uVar28 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
               uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
               1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar31 = FUN_0412c3f0(uVar31);
            }
            else if (1 < uVar31) {
              lVar19 = 0x3f;
              if (uVar31 - 1 != 0) {
                for (; uVar31 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              uVar31 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
            }
            if (uVar27 <= uVar31) {
              uVar27 = uVar31;
            }
            if (uVar27 < uVar13) goto LAB_0dd6166b;
          }
        }
        uVar13 = plStack_318[1];
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar27 = uVar12 & uVar13 - 1;
        }
        else {
          uVar27 = uVar12;
          if (uVar13 <= uVar12) {
            if ((uVar12 | uVar13) >> 0x20 == 0) {
              uVar27 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
            }
            else {
              uVar27 = uVar12 % uVar13;
            }
          }
        }
      }
      else {
        fVar36 = (float)(long)uVar13;
        fVar35 = *(float *)(plStack_318 + 4);
        if (uVar13 == 0) goto LAB_0dd615f2;
LAB_0dd615e1:
        uVar27 = uStack_2d0;
        if (fVar36 * fVar35 < (float)(plStack_318[3] + 1)) goto LAB_0dd615f2;
      }
      lVar19 = *plStack_318;
      plVar17 = *(long **)(lVar19 + uVar27 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar16 = *plStack_90;
        *plStack_90 = (long)plVar16;
        *(long **)(lVar19 + uVar27 * 8) = plStack_90;
        if (*plVar16 != 0) {
          uVar12 = *(ulong *)(*plVar16 + 8);
          if ((uVar13 & uVar13 - 1) == 0) {
            *(long **)(lVar19 + (uVar12 & uVar13 - 1) * 8) = plVar16;
          }
          else {
            if (uVar13 <= uVar12) {
              if ((uVar12 | uVar13) >> 0x20 == 0) {
                *(long **)(lVar19 + ((uVar12 & 0xffffffff) % (uVar13 & 0xffffffff)) * 8) = plVar16;
                goto LAB_0dd618a9;
              }
              uVar12 = uVar12 % uVar13;
            }
            *(long **)(lVar19 + uVar12 * 8) = plVar16;
          }
        }
      }
      else {
        *plVar16 = *plVar17;
        *plVar17 = (long)plVar16;
      }
LAB_0dd618a9:
      plStack_318[3] = plStack_318[3] + 1;
      goto LAB_0dd618b1;
    }
    uStack_240 = (ulong)plStack_250;
    func_0x0ed5ffe0(*puStack_2c0,8,&uStack_240);
    if ((uStack_240 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_240 & 0xff00ffffffffffff) - 8);
    }
    uStack_240 = 0;
    goto LAB_0dd6195d;
  }
  uStack_230 = uStack_2d8;
  func_0x0ed5ffe0(*puStack_2c0,8,&uStack_230);
  if ((uStack_230 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_230 & 0xff00ffffffffffff) - 8);
  }
  uStack_230 = 0;
  goto LAB_0dd61990;
LAB_0dd607ed:
  plVar17[6] = (long)plStack_250;
  plVar16[6] = (long)plVar33;
LAB_0dd60800:
  uVar12 = uStack_2d8;
  func_0x0dd5bf60();
  func_0x0412a280(plVar16,0x178);
  plVar18 = plStack_2c8;
LAB_0dd60596:
  uStack_2b8 = &lStack_b8;
  func_0x054761f0(&uStack_2b8);
  if ((uStack_d8 & 1) != 0) {
    func_0x0412a280(lStack_c8,uStack_d8 & 0xfffffffffffffffe);
  }
  if ((cStack_e8 == '\x01') && ((bStack_108 & 1) != 0)) {
    func_0x0412a280(lStack_f8,
                    CONCAT62(uStack_106,CONCAT11(uStack_107,bStack_108)) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_120 != 0xffffffff) {
    (**(code **)(&UNK_0f49cf60 + (ulong)uStack_120 * 8))(&uStack_2b8,auStack_1d8);
  }
  if ((_auStack_308 & 1) != 0) {
    func_0x0412a280(plStack_2f8,_auStack_308 & 0xfffffffffffffffe);
  }
  auStack_1d8 = (undefined1  [8])(plVar17 + 7);
  lStack_1b0 = plVar18[5];
  puStack_1c8 = (undefined8 *)&UNK_0dc72190;
  uStack_1b8 = 0xd9138a1e;
  pcStack_1c0 = (code *)0x0;
  cStack_1b4 = '\x03';
  uStack_1a8 = 0;
  puStack_1a0 = &UNK_0dc72170;
  func_0x0ed75bc0(&puStack_1e8,param_2,auStack_1d8,uStack_228,&uStack_58);
  unaff_R13 = puStack_248;
  if (pcStack_1c0 != (code *)0x0) {
    (*pcStack_1c0)(auStack_1d8);
  }
  uVar13 = unaff_R13[1];
  uVar30 = *(uint *)(uVar13 + 0x1c + (ulong)(uint)*unaff_R13 * 0x20);
  *(uint *)unaff_R13 = uVar30;
  if ((uint)unaff_R13[0x24] == 0) {
    uVar21 = (uint)unaff_R13[2];
  }
  else if ((*(uint *)(unaff_R13[0x23] + 0x18 + (ulong)((uint)unaff_R13[0x24] - 1) * 0x30) == uVar30)
          || (uVar21 = (uint)unaff_R13[2], uVar30 != uVar21 - 1)) goto LAB_0dd5f8cc;
  lVar19 = uVar13 + (ulong)uVar21 * 0x20;
  uVar13 = (ulong)*(uint *)((uVar13 - 0x10) + (ulong)uVar21 * 0x20);
  if (uVar13 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(auStack_1d8,lVar19 + -0x18);
    uVar21 = (uint)unaff_R13[2];
  }
  *(undefined4 *)(lVar19 + -0x10) = 0xffffffff;
  *(uint *)(unaff_R13 + 2) = uVar21 - 1;
LAB_0dd5f8cc:
  (**(code **)(*param_2 + 0xd0))(param_2);
LAB_0dd5f8dd:
  uStack_2d0 = uStack_2d0 + 1;
  if (uStack_2d0 == uVar12) {
    return;
  }
  goto LAB_0dd5f8e9;
LAB_0dd61a96:
  plVar16[6] = (long)auStack_308;
  plStack_2e8 = plVar33;
LAB_0dd618b1:
  uStack_2b8 = plVar16 + 7;
  lStack_290 = plStack_2c8[5];
  puStack_2a8 = &UNK_0dc72190;
  iStack_298 = -0x26ec75e2;
  pcStack_2a0 = (code *)0x0;
  uStack_294 = 3;
  uStack_288 = 0;
  puStack_280 = &UNK_0dc72170;
  func_0x0ed75bc0(&puStack_1e8,param_2,&uStack_2b8,uStack_228,&uStack_58);
  (**(code **)(*param_2 + 0xd0))(param_2);
  unaff_R13 = puStack_258;
  if (pcStack_2a0 != (code *)0x0) {
    (*pcStack_2a0)(&uStack_2b8);
  }
LAB_0dd6195d:
  if (pcStack_1c0 != (code *)0x0) {
    (*pcStack_1c0)(auStack_1d8);
  }
  if ((uStack_300 & 1) != 0) {
    func_0x0412a280(uStack_2f0,uStack_300 & 0xfffffffffffffffe);
  }
LAB_0dd61990:
  (**(code **)(*param_2 + 0xd0))(param_2);
  lVar19 = *(long *)(puVar2 + 2);
  uVar30 = *(uint *)(lVar19 + 0x1c + (ulong)*puVar2 * 0x20);
  *puVar2 = uVar30;
  if (puVar2[0x48] == 0) {
    uVar21 = puVar2[4];
  }
  else if ((*(uint *)(*(long *)(puVar2 + 0x46) + 0x18 + (ulong)(puVar2[0x48] - 1) * 0x30) == uVar30)
          || (uVar21 = puVar2[4], uVar30 != uVar21 - 1)) goto LAB_0dd60f4f;
  lVar14 = lVar19 + (ulong)uVar21 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar19 + -0x10 + (ulong)uVar21 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_1d8,lVar14 + -0x18);
    uVar21 = puVar2[4];
  }
  *(undefined4 *)(lVar14 + -0x10) = 0xffffffff;
  puVar2[4] = uVar21 - 1;
LAB_0dd60f4f:
  puVar15 = (ulong *)(ulong)((int)puVar15 + 1);
  param_5 = puStack_2c0;
  if (unaff_R13 <= puVar15) {
    return;
  }
  goto LAB_0dd60f60;
}


