/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5e9c570 (ELF vaddr 0x5d9c570)
 * Label: caller-of-callee
 * Body:  [[05e9c570, 05e9cc56] [05e9cc60, 05e9cd81] [05e9cd90, 05e9cdc1] [05e9cdd0, 05e9cec4] [05e9ced0, 05e9d1b9] [05e9d1c0, 05e9d2be] [05e9d2c0, 05e9d346] [05e9d350, 05e9d397] [05e9d3a0, 05e9d5f0] [05e9d600, 05e9df60] [05e9df70, 05e9e164] [05e9e170, 05e9e3db] [05e9e3e0, 05e9e6bc] [05e9e6c0, 05e9e9a2] [05e9e9b0, 05e9eb47] [05e9eb53, 05e9eb61] [05e9ed79, 05e9edab] [05e9edeb, 05e9ee19]]
 * Ghidra: FUN_05e9c570
 */


/* WARNING: Removing unreachable block (ram,0x05e9d9fd) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05e9c570(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,byte *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  code *pcVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  uint *puVar28;
  uint *puVar29;
  ulong uVar30;
  uint *puVar31;
  byte *pbVar32;
  ulong uVar33;
  long *plVar34;
  ulong unaff_RBP;
  long *plVar35;
  undefined8 *puVar36;
  long *plVar37;
  uint *puVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined8 uStack_258;
  undefined1 auStack_250 [4];
  undefined4 uStack_24c;
  ulong uStack_248;
  long *plStack_240;
  long *plStack_238;
  uint *puStack_230;
  long *plStack_228;
  ulong uStack_220;
  long *plStack_218;
  ulong uStack_210;
  ulong uStack_208;
  byte *pbStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  code *pcStack_1e0;
  int iStack_1d8;
  undefined1 uStack_1d4;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long *plStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 *puStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined1 uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  uint uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [16];
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
  
  pcVar12 = (code *)param_3[7];
  plStack_228 = param_2;
  uStack_d8 = param_4;
  if (pcVar12 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar39 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar39 = (undefined *)param_3[7] == &UNK_05ea0fa0;
    }
    param_3[2] = (long)&UNK_05ea1140;
    *(undefined4 *)(param_3 + 4) = 0x1eb92e5;
    param_3[3] = (long)&UNK_05ea16a0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar19 == (long *)0x0) {
      func_0x0eec74c0(0x28);
      param_2 = plStack_228;
    }
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    *(undefined4 *)(plVar19 + 4) = 0x3f800000;
    *param_3 = (long)plVar19;
    pcVar12 = (code *)&UNK_05ea0fa0;
    param_3[7] = (long)&UNK_05ea0fa0;
    if (bVar39) {
      lVar21 = param_3[6];
    }
    else {
      lVar21 = 0;
    }
    param_3[6] = lVar21;
    cVar10 = '\x01';
    plVar13 = plVar19;
LAB_05e9c68a:
    puStack_98 = &UNK_0f012348;
    if (plVar13 == (long *)0x0) goto LAB_05e9c68f;
  }
  else {
    cVar10 = *(char *)((long)param_3 + 0x24);
    plVar19 = (long *)*param_3;
    plVar13 = plVar19;
    if (cVar10 == '\x02') {
      plVar13 = param_3;
    }
    if ((int)param_3[4] == 0x1eb92e5) goto LAB_05e9c68a;
LAB_05e9c68f:
    puStack_98 = &UNK_0f012348;
    lVar21 = param_3[5];
    lVar16 = param_3[6];
    if (lVar16 == 0) {
      (*pcVar12)(0,param_3,0);
      lVar16 = param_3[6];
      cVar10 = *(char *)((long)param_3 + 0x24);
      plVar19 = (long *)*param_3;
    }
    if (cVar10 == '\x02') {
      plVar19 = param_3;
    }
    plVar13 = (long *)func_0x0488e200(lVar21,lVar16,&UNK_01eb92e5,plVar19);
  }
  uStack_58 = *(undefined8 *)param_5;
  uStack_50 = *(undefined8 *)(param_5 + 8);
  plVar19 = *(long **)(param_5 + 0x10);
  uStack_80 = uStack_58;
  uStack_78 = uStack_50;
  if (plVar19 == (long *)0x0) {
    plVar19 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar19 + 0x30))(plVar19,0);
    uStack_58 = *(undefined8 *)param_5;
    uStack_50 = *(undefined8 *)(param_5 + 8);
    plVar19 = *(long **)(param_5 + 0x10);
  }
  uStack_68 = *(undefined4 *)(param_5 + 0x18);
  bStack_64 = param_5[0x1c];
  uStack_60 = 1;
  puStack_a0 = &UNK_0f00e570;
  if (plVar19 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar19 + 0x30))(plVar19,1);
  }
  uStack_40 = *(undefined4 *)(param_5 + 0x18);
  bStack_3c = param_5[0x1c];
  uStack_38 = 1;
  bVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if (bVar9 == 1) {
    uVar14 = (**(code **)(*param_2 + 0xa8))(param_2);
    if ((*(long **)(param_5 + 0x10) != (long *)0x0) &&
       (uVar15 = (**(code **)(**(long **)(param_5 + 0x10) + 0x10))(), uVar15 < uVar14)) {
      uStack_b8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*(undefined8 *)param_5,0x40,&uStack_b8);
      if ((uStack_b8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&lStack_c8,*(undefined8 *)param_5);
    if (uVar14 == 0) {
      return;
    }
    plStack_218 = plVar13 + 2;
    uStack_198 = 0;
    uStack_1a0 = uVar14;
    pbStack_e0 = param_5;
LAB_05e9c965:
    uVar1 = uStack_c0;
    lVar21 = lStack_c8;
    if (uStack_c0 <= *(uint *)(lStack_c8 + 0x2b0) && *(uint *)(lStack_c8 + 0x2b0) != 0xffffffff) {
      return;
    }
    auVar42 = (**(code **)(*plStack_228 + 0xc0))();
    puVar36 = puStack_70;
    auStack_b0 = auVar42;
    if (puStack_70 != (undefined8 *)0x0) {
      lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar21 == 0) {
        func_0x048b0de0(&uStack_1f8,&uStack_258);
        _DAT_0f54fd90 = (undefined4)uStack_1f8;
        uRam000000000f54fd94 = uStack_1f8._4_4_;
        uVar5 = (undefined4)uStack_1f0;
        uVar6 = uStack_1f0._4_4_;
        uStack_1f8 = (long *)0x0;
        uStack_1f0 = (long *)0x0;
        plVar19 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar5;
        uRam000000000f54fd9c = uVar6;
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar20 = plVar19 + 1;
          lVar21 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar21 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            FUN_0412c2d0(plVar19);
          }
        }
        plVar19 = uStack_1f0;
        if (uStack_1f0 != (long *)0x0) {
          LOCK();
          plVar20 = uStack_1f0 + 1;
          lVar21 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar21 == 0) {
            (**(code **)(*uStack_1f0 + 0x10))(uStack_1f0);
            FUN_0412c2d0(plVar19);
          }
        }
        lVar21 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar14 = uStack_1a0;
      }
      puStack_168 = (undefined8 *)&UNK_05ea5bd0;
      pcStack_160 = (code *)0x0;
      uStack_158 = CONCAT35(uStack_158._5_3_,0x4989eedf9);
      auStack_178 = (undefined1  [8])auStack_b0;
      lStack_148 = 0;
      puStack_140 = &UNK_05ea5bb0;
      lStack_150 = lVar21;
      (**(code **)*puVar36)(puVar36,auStack_178,uStack_80);
      lVar21 = lStack_c8;
      uVar1 = uStack_c0;
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(auStack_178);
        lVar21 = lStack_c8;
        uVar1 = uStack_c0;
      }
    }
    uVar8 = auStack_b0._8_8_;
    uVar22 = auStack_b0._0_8_;
    puVar17 = (ulong *)(ulong)uVar1;
    if ((*(uint *)(lVar21 + 0x2b0) != 0xffffffff) && (uVar1 <= *(uint *)(lVar21 + 0x2b0)))
    goto LAB_05e9c959;
    uVar2 = *(undefined8 *)param_5;
    pbStack_200 = (byte *)0x0;
    if (auStack_b0._0_8_ == 0) {
      param_5 = (byte *)((auStack_b0._8_8_ & 0x7f) << 0x30);
    }
    else {
      lVar21 = auStack_b0._8_8_ + 9;
      puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && puVar17 == (ulong *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *puVar17 = uVar8;
      func_0x0eee2f00(puVar17 + 1,uVar22,uVar8);
      *(undefined1 *)((long)puVar17 + uVar8 + 8) = 0;
      param_5 = (byte *)((ulong)(puVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pbStack_200 = param_5;
    puVar18 = (uint *)func_0x0ed6d180(uVar2,&pbStack_200,0);
    if (((ulong)pbStack_200 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pbStack_200 & 0xff00ffffffffffff) - 8);
    }
    uVar14 = auStack_b0._8_8_;
    uVar22 = auStack_b0._0_8_;
    pbStack_200 = (byte *)0x0;
    puStack_230 = puVar18;
    if ((ulong)auStack_b0._8_8_ < 0xfffffffffffffff8) {
      if ((ulong)auStack_b0._8_8_ < 0x17) {
        uStack_258 = (uint *)CONCAT71(uStack_258._1_7_,auStack_b0[8] * '\x02');
        uVar27 = (long)&uStack_258 + 1;
        if (auStack_b0._8_8_ != 0) goto LAB_05e9cca7;
      }
      else {
        uVar15 = (auStack_b0._8_8_ | 7) + 1;
        if ((auStack_b0._8_8_ | 7) == 0x17) {
          uVar15 = 0x1a;
        }
        uVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (uVar27 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        uStack_258 = (uint *)(uVar15 | 1);
        _auStack_250 = uVar14;
        uStack_248 = uVar27;
LAB_05e9cca7:
        func_0x0eee2ee0(uVar27,uVar22,uVar14);
      }
      *(undefined1 *)(uVar27 + uVar14) = 0;
      lStack_148 = 0;
      puStack_140 = (undefined *)0x0;
      uStack_158 = 0;
      lStack_150 = 0;
      puStack_168 = (undefined8 *)0x0;
      pcStack_160 = (code *)0x0;
      auStack_178 = (undefined1  [8])0x0;
      uStack_170 = 0;
      uStack_138 = 0;
      uStack_100 = 0;
      lStack_f8 = 0;
      uStack_110 = 0;
      lStack_108 = 0;
      lStack_120 = 0;
      lStack_118 = 0;
      lStack_130 = 0;
      uStack_128 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0x3f800000;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
      puStack_1e8 = (undefined *)0x0;
      *plVar19 = 0;
      plVar19[1] = 0;
      plVar19[2] = 0;
      uVar4 = (undefined1)uStack_258;
      uStack_1f8 = plVar19;
      if (((ulong)uStack_258 & 1) == 0) {
        plVar19[5] = uStack_248;
        *(undefined4 *)(plVar19 + 3) = (undefined4)uStack_258;
        *(undefined4 *)((long)plVar19 + 0x1c) = uStack_258._4_4_;
        *(undefined1 (*) [4])(plVar19 + 4) = auStack_250;
        *(undefined4 *)((long)plVar19 + 0x24) = uStack_24c;
        uStack_1f0 = plVar13;
      }
      else {
        uStack_1f0 = plVar13;
        func_0x0412e5e0(plVar19 + 3,uStack_248,_auStack_250);
      }
      plVar19[6] = 0;
      bVar9 = *(byte *)(plVar19 + 3);
      if ((bVar9 & 1) == 0) {
        uStack_220 = CONCAT71(uStack_220._1_7_,uVar4) & 0xffffffffffffff01;
        if (bVar9 >> 1 != 0) goto LAB_05e9cde1;
LAB_05e9ced0:
        uVar14 = 0;
      }
      else {
        uStack_220 = CONCAT71(uStack_220._1_7_,uVar4) & 0xffffffffffffff01;
        if (plVar19[4] == 0) goto LAB_05e9ced0;
LAB_05e9cde1:
        if ((bVar9 & 1) == 0) {
          pbVar32 = (byte *)((long)plVar19 + 0x19);
          if (pbVar32 != (byte *)0x0) goto LAB_05e9ce00;
          goto LAB_05e9ced0;
        }
        pbVar32 = (byte *)plVar19[5];
        if (pbVar32 == (byte *)0x0) goto LAB_05e9ced0;
LAB_05e9ce00:
        if (*pbVar32 == 0) goto LAB_05e9ced0;
        uVar15 = func_0x0eee2e90(pbVar32);
        uVar14 = 0xcbf29ce484222325;
        if (uVar15 != 0) {
          if (7 < uVar15) {
            uVar27 = uVar15 & 0xfffffffffffffff8;
            do {
              uVar14 = (((((((uVar14 * 0x100000001b3 ^ (ulong)*pbVar32) * 0x100000001b3 ^
                            (ulong)pbVar32[1]) * 0x100000001b3 ^ (ulong)pbVar32[2]) * 0x100000001b3
                          ^ (ulong)pbVar32[3]) * 0x100000001b3 ^ (ulong)pbVar32[4]) * 0x100000001b3
                        ^ (ulong)pbVar32[5]) * 0x100000001b3 ^ (ulong)pbVar32[6]) * 0x100000001b3 ^
                       (ulong)pbVar32[7];
              pbVar32 = pbVar32 + 8;
              uVar27 = uVar27 - 8;
            } while (uVar27 != 0);
          }
          if ((uVar15 & 7) != 0) {
            uVar27 = 0;
            do {
              uVar14 = uVar14 * 0x100000001b3 ^ (ulong)pbVar32[uVar27];
              uVar27 = uVar27 + 1;
            } while (((uint)uVar15 & 7) != uVar27);
          }
        }
      }
      uVar15 = uStack_100;
      lVar21 = lStack_108;
      plVar20 = uStack_1f8;
      plVar19[2] = uVar14;
      plVar19[0xb] = 0;
      plVar19[10] = (long)pcStack_160;
      plVar19[8] = uStack_170;
      plVar19[9] = (long)puStack_168;
      uStack_170 = uStack_170 & 0xffffffffffff0000;
      plVar19[7] = (long)auStack_178;
      plVar19[0xe] = (long)puStack_140;
      plVar19[0xc] = lStack_150;
      plVar19[0xd] = lStack_148;
      lStack_150 = 0;
      lStack_148 = 0;
      puStack_140 = (undefined *)0x0;
      *(undefined1 *)(plVar19 + 0xf) = uStack_138;
      plVar19[0x14] = 0;
      plVar19[0x13] = lStack_118;
      plVar19[0x11] = uStack_128;
      plVar19[0x12] = lStack_120;
      uStack_128 = uStack_128 & 0xffffffffffff0000;
      plVar19[0x10] = lStack_130;
      lStack_108 = 0;
      plVar19[0x15] = lVar21;
      plVar19[0x16] = uStack_100;
      uStack_100 = 0;
      plVar19[0x17] = lStack_f8;
      plVar19[0x18] = lStack_f0;
      *(undefined4 *)(plVar19 + 0x19) = uStack_e8;
      if (lStack_f0 != 0) {
        uVar14 = *(ulong *)(lStack_f8 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar14 = uVar14 & uVar15 - 1;
        }
        else if (uVar15 <= uVar14) {
          if ((uVar14 | uVar15) >> 0x20 == 0) {
            uVar14 = (uVar14 & 0xffffffff) % (uVar15 & 0xffffffff);
          }
          else {
            uVar14 = uVar14 % uVar15;
          }
        }
        *(long **)(lVar21 + uVar14 * 8) = plVar19 + 0x17;
        lStack_f8 = 0;
        lStack_f0 = 0;
      }
      puStack_1e8 = (undefined *)CONCAT71(puStack_1e8._1_7_,1);
      plVar19[1] = plVar19[2];
      uVar14 = uStack_1f8[2];
      uStack_1f8[1] = uVar14;
      uVar15 = plVar13[1];
      if (uVar15 != 0) {
        uVar27 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
        uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar27 >> 0x38 < 2) {
          uVar33 = uVar15 - 1 & uVar14;
          puVar36 = *(undefined8 **)(*plVar13 + uVar33 * 8);
        }
        else {
          uVar33 = uVar14;
          if (uVar15 <= uVar14) {
            if ((uVar14 | uVar15) >> 0x20 == 0) {
              uVar33 = (uVar14 & 0xffffffff) % (uVar15 & 0xffffffff);
              puVar36 = *(undefined8 **)(*plVar13 + uVar33 * 8);
              goto joined_r0x05e9d327;
            }
            uVar33 = uVar14 % uVar15;
          }
          puVar36 = *(undefined8 **)(*plVar13 + uVar33 * 8);
        }
joined_r0x05e9d327:
        if ((puVar36 != (undefined8 *)0x0) && (plVar19 = (long *)*puVar36, plVar19 != (long *)0x0))
        {
          plVar34 = uStack_1f8 + 2;
          uStack_210 = (long)uStack_1f8 + 0x19;
          plStack_1a8 = plVar34;
          if ((byte)(uVar27 >> 0x38) < 2) {
            plVar35 = (long *)(uVar15 - 1);
            plStack_1b0 = plVar35;
            do {
              if (plVar19[1] == uVar14) {
                if (plVar19[2] == uVar14) {
                  plVar37 = plVar19 + 2;
                  if (((long *)plVar19[6] == plVar34) && ((long *)plVar20[6] == plVar37))
                  goto LAB_05e9d7cd;
                  bVar9 = *(byte *)(plVar19 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar27 = (ulong)(bVar9 >> 1);
                    uVar30 = (ulong)*(byte *)(plVar20 + 3);
                    if ((*(byte *)(plVar20 + 3) & 1) != 0) goto LAB_05e9d2d8;
LAB_05e9d2b4:
                    if (uVar27 != uVar30 >> 1) goto LAB_05e9d266;
                  }
                  else {
                    uVar27 = plVar19[4];
                    uVar30 = (ulong)*(byte *)(plVar20 + 3);
                    if ((*(byte *)(plVar20 + 3) & 1) == 0) goto LAB_05e9d2b4;
LAB_05e9d2d8:
                    if (uVar27 != plVar20[4]) goto LAB_05e9d266;
                  }
                  if ((bVar9 & 1) == 0) {
                    lVar21 = (long)plVar19 + 0x19;
                  }
                  else {
                    lVar21 = plVar19[5];
                  }
                  uVar27 = uStack_210;
                  if ((uVar30 & 1) != 0) {
                    uVar27 = plVar20[5];
                  }
                  iVar11 = func_0x0eee3000(lVar21,uVar27);
                  plVar34 = plStack_1a8;
                  plVar35 = plStack_1b0;
                  if (iVar11 == 0) goto LAB_05e9d834;
                }
LAB_05e9d266:
                plVar19[6] = 0;
              }
              else if ((plVar19[1] & (ulong)plVar35) != uVar33) break;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              uVar27 = plVar19[1];
              if (uVar27 == uVar14) {
                if (plVar19[2] == uVar14) {
                  plVar37 = plVar19 + 2;
                  if (((long *)plVar19[6] == plVar34) && ((long *)plVar20[6] == plVar37))
                  goto LAB_05e9d7cd;
                  bVar9 = *(byte *)(plVar19 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar27 = (ulong)(bVar9 >> 1);
                    uVar30 = (ulong)*(byte *)(plVar20 + 3);
                    if ((*(byte *)(plVar20 + 3) & 1) != 0) goto LAB_05e9d1f1;
LAB_05e9d1af:
                    if (uVar27 != uVar30 >> 1) goto LAB_05e9d161;
                  }
                  else {
                    uVar27 = plVar19[4];
                    uVar30 = (ulong)*(byte *)(plVar20 + 3);
                    if ((*(byte *)(plVar20 + 3) & 1) == 0) goto LAB_05e9d1af;
LAB_05e9d1f1:
                    if (uVar27 != plVar20[4]) goto LAB_05e9d161;
                  }
                  if ((bVar9 & 1) == 0) {
                    lVar21 = (long)plVar19 + 0x19;
                  }
                  else {
                    lVar21 = plVar19[5];
                  }
                  uVar27 = uStack_210;
                  if ((uVar30 & 1) != 0) {
                    uVar27 = plVar20[5];
                  }
                  iVar11 = func_0x0eee3000(lVar21,uVar27);
                  plVar34 = plStack_1a8;
                  if (iVar11 == 0) goto LAB_05e9d834;
                }
LAB_05e9d161:
                plVar19[6] = 0;
              }
              else {
                if (uVar15 <= uVar27) {
                  if ((uVar27 | uVar15) >> 0x20 == 0) {
                    if ((uVar27 & 0xffffffff) % (uVar15 & 0xffffffff) == uVar33) goto LAB_05e9d169;
                    break;
                  }
                  uVar27 = uVar27 % uVar15;
                }
                if (uVar27 != uVar33) break;
              }
LAB_05e9d169:
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
      }
      if ((long)uVar15 < 0) {
        fVar41 = (float)uVar15;
        fVar40 = *(float *)(plVar13 + 4);
        if (uVar15 == 0) goto LAB_05e9d3be;
LAB_05e9d3b1:
        if (fVar41 * fVar40 < (float)(plVar13[3] + 1)) goto LAB_05e9d3be;
        goto LAB_05e9d540;
      }
      fVar41 = (float)(long)uVar15;
      fVar40 = *(float *)(plVar13 + 4);
      if (uVar15 != 0) goto LAB_05e9d3b1;
LAB_05e9d3be:
      uVar14 = 1;
      if (2 < uVar15) {
        uVar14 = (ulong)((uVar15 & uVar15 - 1) != 0);
      }
      uVar14 = uVar15 * 2 | uVar14;
      fVar40 = (float)func_0x0eee3ab0((float)(plVar13[3] + 1) / fVar40);
      uVar27 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
      if (uVar27 < uVar14) {
        uVar27 = uVar14;
      }
      uVar14 = 2;
      if ((uVar27 == 1) || (uVar14 = uVar27, (uVar27 & uVar27 - 1) == 0)) {
        bVar39 = uVar14 < uVar15;
        if (uVar14 <= uVar15) goto LAB_05e9d449;
LAB_05e9d428:
        func_0x05d849c0(plVar13,uVar14);
      }
      else {
        uVar14 = func_0x0412c3f0();
        uVar15 = plVar13[1];
        bVar39 = uVar14 < uVar15;
        if (uVar15 < uVar14) goto LAB_05e9d428;
LAB_05e9d449:
        if (bVar39) {
          fVar40 = (float)func_0x0eee3ab0((float)(ulong)plVar13[3] / *(float *)(plVar13 + 4));
          uVar27 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
          if ((uVar15 < 3) ||
             (uVar33 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
             uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333),
             1 < (byte)(((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar27 = func_0x0412c3f0(uVar27);
          }
          else if (1 < uVar27) {
            lVar21 = 0x3f;
            if (uVar27 - 1 != 0) {
              for (; uVar27 - 1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar27 = 1L << (-((byte)lVar21 ^ 0x3f) & 0x3f);
          }
          if (uVar14 <= uVar27) {
            uVar14 = uVar27;
          }
          if (uVar14 < uVar15) goto LAB_05e9d428;
        }
      }
LAB_05e9d540:
      uVar14 = plVar13[1];
      uVar15 = plVar20[1];
      uVar27 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
      uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar27 >> 0x38 < 2) {
        uVar15 = uVar15 & uVar14 - 1;
        lVar21 = *plVar13;
        plVar19 = *(long **)(lVar21 + uVar15 * 8);
        if (plVar19 == (long *)0x0) goto LAB_05e9d5be;
LAB_05e9d62d:
        *plVar20 = *plVar19;
        *plVar19 = (long)plVar20;
      }
      else {
        if (uVar15 < uVar14) {
LAB_05e9d620:
          lVar21 = *plVar13;
          plVar19 = *(long **)(lVar21 + uVar15 * 8);
        }
        else {
          if ((uVar15 | uVar14) >> 0x20 != 0) {
            uVar15 = uVar15 % uVar14;
            goto LAB_05e9d620;
          }
          uVar15 = (uVar15 & 0xffffffff) % (uVar14 & 0xffffffff);
          lVar21 = *plVar13;
          plVar19 = *(long **)(lVar21 + uVar15 * 8);
        }
        if (plVar19 != (long *)0x0) goto LAB_05e9d62d;
LAB_05e9d5be:
        *plVar20 = *plStack_218;
        *plStack_218 = (long)plVar20;
        *(long **)(lVar21 + uVar15 * 8) = plStack_218;
        if (*plVar20 != 0) {
          uVar15 = *(ulong *)(*plVar20 + 8);
          if ((byte)(uVar27 >> 0x38) < 2) {
            *(long **)(lVar21 + (uVar15 & uVar14 - 1) * 8) = plVar20;
          }
          else {
            if (uVar14 <= uVar15) {
              if ((uVar15 | uVar14) >> 0x20 == 0) {
                *(long **)(lVar21 + ((uVar15 & 0xffffffff) % (uVar14 & 0xffffffff)) * 8) = plVar20;
                goto LAB_05e9d636;
              }
              uVar15 = uVar15 % uVar14;
            }
            *(long **)(lVar21 + uVar15 * 8) = plVar20;
          }
        }
      }
LAB_05e9d636:
      plVar13[3] = plVar13[3] + 1;
      uVar14 = (ulong)uStack_258 & 1;
      func_0x05d4e1c0(auStack_178);
      plVar19 = plVar20;
      if (uVar14 != 0) goto LAB_05e9d64e;
      goto LAB_05e9d661;
    }
    FUN_04882e30();
    goto LAB_05e9eaf6;
  }
  if ((bVar9 & 2) == 0) {
    lVar21 = param_3[5];
    lVar16 = func_0x048b2190(lVar21);
    plVar19 = *(long **)(lVar16 + 0x78);
    if (plVar19 == (long *)0x0) {
LAB_05e9c8c4:
      if (*(code **)(lVar16 + 0x30) == (code *)0x0) {
        puStack_1e8 = &UNK_0488e0b0;
        iStack_1d8 = 0x48b5725f;
        pcStack_1e0 = (code *)0x0;
        uStack_1d4 = 0;
        uStack_1f8 = (long *)0x0;
        uStack_1c8 = 0;
        puStack_1c0 = (undefined *)0x0;
        lStack_1d0 = lVar21;
        goto LAB_05e9da4f;
      }
      (**(code **)(lVar16 + 0x30))(&uStack_1f8,lVar21);
      if (iStack_1d8 != -0x3677df2f) goto LAB_05e9da4f;
LAB_05e9daae:
      plVar19 = (long *)&UNK_0133e465;
      uVar14 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar26 = *plVar19;
      if (lVar26 == 0 || lVar26 == plVar19[1]) goto LAB_05e9c8c4;
      lVar24 = 0;
      bVar39 = false;
      do {
        lVar25 = lVar26;
        if (lVar24 != 0) {
          lVar25 = lVar24;
        }
        bVar3 = lVar24 != 0;
        if (*(long *)(lVar26 + 8) != 0) {
          lVar25 = lVar24;
          bVar3 = bVar39;
        }
        lVar26 = lVar26 + 0x20;
        lVar24 = lVar25;
        bVar39 = bVar3;
      } while (lVar26 != plVar19[1]);
      if (bVar3 || lVar25 == 0) goto LAB_05e9c8c4;
      (**(code **)(lVar25 + 0x18))(&uStack_1f8,lVar21,0);
      if (iStack_1d8 == -0x3677df2f) goto LAB_05e9daae;
LAB_05e9da4f:
      func_0x05ea6440(auStack_178,&uStack_1f8);
      puVar7 = puStack_140;
      if ((puStack_140 != (undefined *)0x0) && ((byte)(uStack_158._4_1_ - 1U) < 2)) {
        func_0x048b0900(&uStack_1f8,auStack_178);
      }
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(auStack_178);
      }
      if (puVar7 != (undefined *)0x0) goto LAB_05e9daae;
      plVar19 = (long *)&UNK_01411d3a;
      uVar14 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar14 < 0xfffffffffffffff8) {
      if (uVar14 < 0x17) {
        uStack_258._1_7_ = (undefined7)((ulong)uStack_258 >> 8);
        uStack_258 = (uint *)CONCAT71(uStack_258._1_7_,(char)uVar14 * '\x02');
        uVar27 = (long)&uStack_258 + 1;
        if (uVar14 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_258._1_1_ = 0;
          goto joined_r0x05e9db60;
        }
      }
      else {
        uVar15 = 0x1a;
        if ((uVar14 | 7) != 0x17) {
          uVar15 = (uVar14 | 7) + 1;
        }
        uVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (uVar27 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        uStack_258 = (uint *)(uVar15 | 1);
        _auStack_250 = uVar14;
        uStack_248 = uVar27;
      }
      func_0x0eee2f00(uVar27,plVar19,uVar14);
      *(undefined1 *)(uVar27 + uVar14) = 0;
joined_r0x05e9db60:
      if (pcStack_1e0 != (code *)0x0) {
        (*pcStack_1e0)(&uStack_1f8);
      }
      puVar18 = uStack_258;
      puVar17 = (ulong *)((ulong)uStack_258 & 0xff);
      uVar15 = _auStack_250;
      if (((ulong)uStack_258 & 1) == 0) {
        uVar15 = (ulong)uStack_258 >> 1 & 0x7f;
      }
      uVar14 = uVar15 + 0xc;
      if (uVar14 < 0xfffffffffffffff8) {
        uVar22 = *(undefined8 *)param_5;
        if (uVar14 < 0x17) {
          uStack_170 = 0;
          puStack_168 = (undefined8 *)0x0;
          auStack_178._1_7_ = 0;
          auStack_178[0] = (char)uVar14 * '\x02';
        }
        else {
          uVar27 = 0x1a;
          if ((uVar14 | 7) != 0x17) {
            uVar27 = (uVar14 | 7) + 1;
          }
          puStack_168 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27);
          if (puStack_168 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar27,0);
          }
          auStack_178 = (undefined1  [8])(uVar27 | 1);
          uStack_170 = uVar14;
        }
        lVar21 = (long)puStack_168 + 0xc;
        bVar39 = ((ulong)auStack_178 & 1) == 0;
        puVar36 = puStack_168;
        if (bVar39) {
          puVar36 = (undefined8 *)(auStack_178 + 1);
        }
        *puVar36 = 0x6465746365707865;
        *(undefined4 *)(puVar36 + 1) = 0x206e6120;
        lVar16 = (long)&uStack_170 + 5;
        if (!bVar39) {
          lVar16 = lVar21;
        }
        if (uVar15 != 0) {
          uVar14 = uStack_248;
          if (((ulong)puVar18 & 1) == 0) {
            uVar14 = (long)&uStack_258 + 1;
          }
          func_0x0eee2ee0(lVar16,uVar14,uVar15);
        }
        *(undefined1 *)(lVar16 + uVar15) = 0;
        uVar14 = (ulong)auStack_178 >> 1 & 0x7f;
        puVar36 = (undefined8 *)(auStack_178 + 1);
        if (((ulong)auStack_178 & 1) != 0) {
          uVar14 = uStack_170;
          puVar36 = puStack_168;
        }
        uStack_208 = 0;
        if (puVar36 == (undefined8 *)0x0) {
          uStack_208 = (ulong)((uint)uVar14 & 0x7f) << 0x30;
        }
        else {
          lVar21 = uVar14 + 9;
          puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && puVar17 == (ulong *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *puVar17 = uVar14;
          func_0x0eee2f00(puVar17 + 1,puVar36,uVar14);
          *(undefined1 *)((long)puVar17 + uVar14 + 8) = 0;
          uStack_208 = (ulong)(puVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar22,8,&uStack_208);
        if ((uStack_208 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
        }
        uStack_208 = 0;
        if (((ulong)auStack_178 & 1) != 0) {
          func_0x0412a280(puStack_168,(ulong)auStack_178 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar18 & 1) != 0) {
          func_0x0412a280(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_05e9eaf6:
      uVar22 = FUN_04882e30();
      uVar22 = func_0x04882e20(uVar22);
      uVar22 = func_0x04882e20(uVar22);
      uVar22 = func_0x04882e20(uVar22);
      func_0x0ee386e0(&uStack_d0);
      uVar22 = func_0x0eee2d70(uVar22);
      if ((*param_5 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar14 + 0x28),
                        *(ulong *)(uVar14 + 0x18) & 0xfffffffffffffffe);
      }
      func_0x05d847f0(&uStack_1f8);
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(auStack_178);
      }
      if ((_auStack_250 & 1) != 0) {
        func_0x0412a280(plStack_240,_auStack_250 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_228 + 0xd0))();
      func_0x0ed6d560(puVar17);
      uVar22 = func_0x0eee2d70(uVar22);
      uVar22 = func_0x04882e20(uVar22);
      func_0x04882e20(uVar22);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar14 = FUN_04882e30();
LAB_05e9dddb:
    fVar40 = (float)uVar14;
LAB_05e9ddf3:
    fVar40 = (float)func_0x0eee3ab0(fVar40 / *(float *)(plVar13 + 4));
    plVar20 = (long *)((long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40);
    if ((param_2 < (long *)0x3) ||
       (uVar14 = (long)param_2 - ((ulong)param_2 >> 1 & 0x5555555555555555),
       uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333),
       1 < (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
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
    if (plVar19 <= plVar20) {
      plVar19 = plVar20;
    }
    if (param_2 <= plVar19) goto LAB_05e9deb9;
  }
  else {
    unaff_RBP = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if ((*(long **)(param_5 + 0x10) != (long *)0x0) &&
       (uVar14 = (**(code **)(**(long **)(param_5 + 0x10) + 0x10))(), uVar14 < unaff_RBP)) {
      uStack_d0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*(undefined8 *)param_5,0x40,&uStack_d0);
      if ((uStack_d0 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d0 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar40 = (float)func_0x0eee3ab0((float)unaff_RBP / *(float *)(plVar13 + 4));
    plVar20 = (long *)((long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40);
    plVar19 = (long *)0x2;
    if ((plVar20 == (long *)0x1) ||
       (plVar19 = plVar20, ((ulong)plVar20 & (ulong)((long)plVar20 + -1)) == 0)) {
      param_2 = (long *)plVar13[1];
      bVar39 = plVar19 < param_2;
      if (plVar19 <= param_2) goto LAB_05e9da14;
    }
    else {
      plVar19 = (long *)func_0x0412c3f0();
      param_2 = (long *)plVar13[1];
      bVar39 = plVar19 < param_2;
      if (plVar19 <= param_2) {
LAB_05e9da14:
        if (!bVar39) goto LAB_05e9deb9;
        uVar14 = plVar13[3];
        if ((long)uVar14 < 0) goto LAB_05e9dddb;
        fVar40 = (float)(long)uVar14;
        goto LAB_05e9ddf3;
      }
    }
  }
  func_0x05d849c0(plVar13,plVar19);
LAB_05e9deb9:
  func_0x0ed6d600(&lStack_c8,*(undefined8 *)param_5);
  if (unaff_RBP == 0) {
    return;
  }
  uStack_220 = 0x1b0000014af0d9;
  uStack_1a0 = 0x38000001448967;
  plStack_1a8 = (long *)0x3a000001208ef5;
  plStack_88 = plVar13 + 2;
  uVar14 = 0;
  plVar19 = plStack_228;
  uStack_198 = unaff_RBP;
  pbStack_e0 = param_5;
LAB_05e9df90:
  if ((*(uint *)(lStack_c8 + 0x2b0) != 0xffffffff) && (uStack_c0 <= *(uint *)(lStack_c8 + 0x2b0))) {
    return;
  }
  puVar18 = *(uint **)param_5;
  func_0x0ed6d4a0(puVar18,uVar14);
  (**(code **)(*plVar19 + 200))(plVar19,uVar14);
  cVar10 = (**(code **)(*plVar19 + 0x18))(plVar19);
  if ((cVar10 != '\x01') || (lVar21 = (**(code **)(*plVar19 + 0xa8))(plVar19), lVar21 == 2)) {
    cVar10 = (**(code **)(*plVar19 + 0xb8))(plVar19,&UNK_013aac9a,3);
    if (cVar10 == '\0') {
      uStack_188 = uStack_1a0;
      func_0x0ed5ffe0(*(undefined8 *)param_5,8,&uStack_188);
      if ((uStack_188 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_188 & 0xff00ffffffffffff) - 8);
      }
      uStack_188 = 0;
      goto LAB_05e9e950;
    }
    uStack_248 = 0;
    plStack_240 = (long *)0x0;
    uStack_258 = (uint *)0x0;
    _auStack_250 = 0;
    plStack_238 = (long *)0x0;
    lStack_150 = param_3[5];
    puStack_168 = (undefined8 *)&UNK_05e9f930;
    pcStack_160 = (code *)0x0;
    uStack_158 = CONCAT35(uStack_158._5_3_,0x3c98820d1);
    auStack_178 = (undefined1  [8])&uStack_258;
    lStack_148 = 0;
    puStack_140 = &UNK_05e9f910;
    func_0x0ed75bc0(&puStack_98,plVar19,auStack_178,uStack_d8,&uStack_80);
    (**(code **)(*plVar19 + 0xd0))(plVar19);
    cVar10 = (**(code **)(*plVar19 + 0xb8))(plVar19,&UNK_0138e8dd,5);
    puVar31 = uStack_258;
    if (cVar10 != '\0') {
      puVar38 = (uint *)plVar13[1];
      if (puVar38 != (uint *)0x0) {
        uVar15 = (long)puVar38 - ((ulong)puVar38 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          puVar28 = (uint *)((long)puVar38 - 1U & (ulong)uStack_258);
        }
        else {
          puVar28 = uStack_258;
          if (puVar38 <= uStack_258) {
            if (((ulong)uStack_258 | (ulong)puVar38) >> 0x20 == 0) {
              puVar28 = (uint *)(((ulong)uStack_258 & 0xffffffff) % ((ulong)puVar38 & 0xffffffff));
            }
            else {
              puVar28 = (uint *)((ulong)uStack_258 % (ulong)puVar38);
            }
          }
        }
        puVar36 = *(undefined8 **)(*plVar13 + (long)puVar28 * 8);
        puStack_230 = puVar28;
        if ((puVar36 != (undefined8 *)0x0) && (plVar20 = (long *)*puVar36, plVar20 != (long *)0x0))
        {
          plStack_218 = plStack_240;
          uVar27 = uStack_248;
          if ((_auStack_250 & 1) == 0) {
            plStack_218 = (long *)(auStack_250 + 1);
            uVar27 = _auStack_250 >> 1 & 0x7f;
          }
          plStack_1b0 = plStack_238;
          plVar19 = plStack_238;
          uStack_210 = uVar27;
          if ((byte)(uVar15 >> 0x38) < 2) {
            uVar15 = (long)puVar38 - 1;
            uStack_90 = uVar15;
            do {
              if ((uint *)plVar20[1] == puVar31) {
                if ((uint *)plVar20[2] == puVar31) {
                  plVar34 = plVar20 + 2;
                  if (plVar19 == plVar34 && (undefined8 *)plVar20[6] == &uStack_258)
                  goto LAB_05e9e86c;
                  bVar9 = *(byte *)(plVar20 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar33 = (ulong)(bVar9 >> 1);
                  }
                  else {
                    uVar33 = plVar20[4];
                  }
                  if (uVar33 == uVar27) {
                    if ((bVar9 & 1) == 0) {
                      lVar21 = (long)plVar20 + 0x19;
                    }
                    else {
                      lVar21 = plVar20[5];
                    }
                    iVar11 = func_0x0eee3000(lVar21,plStack_218,uVar27);
                    uVar15 = uStack_90;
                    puVar28 = puStack_230;
                    plVar19 = plStack_1b0;
                    uVar27 = uStack_210;
                    if (iVar11 == 0) goto LAB_05e9ea6a;
                  }
                }
                plVar20[6] = 0;
              }
              else if ((uint *)((ulong)plVar20[1] & uVar15) != puVar28) break;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              puVar29 = (uint *)plVar20[1];
              if (puVar29 == puVar31) {
                if ((uint *)plVar20[2] == puVar31) {
                  plVar34 = plVar20 + 2;
                  if (plVar19 == plVar34 && (undefined8 *)plVar20[6] == &uStack_258)
                  goto LAB_05e9e86c;
                  bVar9 = *(byte *)(plVar20 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar15 = (ulong)(bVar9 >> 1);
                  }
                  else {
                    uVar15 = plVar20[4];
                  }
                  if (uVar15 == uVar27) {
                    if ((bVar9 & 1) == 0) {
                      lVar21 = (long)plVar20 + 0x19;
                    }
                    else {
                      lVar21 = plVar20[5];
                    }
                    iVar11 = func_0x0eee3000(lVar21,plStack_218,uVar27);
                    puVar28 = puStack_230;
                    plVar19 = plStack_1b0;
                    uVar27 = uStack_210;
                    if (iVar11 == 0) goto LAB_05e9ea6a;
                  }
                }
                plVar20[6] = 0;
              }
              else {
                if (puVar38 <= puVar29) {
                  if (((ulong)puVar29 | (ulong)puVar38) >> 0x20 == 0) {
                    if ((uint *)(((ulong)puVar29 & 0xffffffff) % ((ulong)puVar38 & 0xffffffff)) ==
                        puVar28) goto LAB_05e9e38d;
                    break;
                  }
                  puVar29 = (uint *)((ulong)puVar29 % (ulong)puVar38);
                }
                if (puVar29 != puVar28) break;
              }
LAB_05e9e38d:
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
      puStack_1e8 = (undefined *)0x0;
      *plVar19 = 0;
      plVar19[1] = (long)puVar31;
      plVar19[2] = 0;
      plVar19[3] = 0;
      plVar19[4] = 0;
      plVar19[5] = 0;
      plVar19[6] = 0;
      uStack_1f8 = plVar19;
      uStack_1f0 = plVar13;
      if (plVar19 + 2 != &uStack_258) {
        if ((_auStack_250 & 1) == 0) {
          plVar19[5] = (long)plStack_240;
          plVar19[3] = _auStack_250;
          plVar19[4] = uStack_248;
        }
        else {
          func_0x04885070(plVar19 + 3,plStack_240,uStack_248);
        }
      }
      plVar19[2] = (long)uStack_258;
      plVar19[7] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar19[10] = 0;
      plVar19[0xb] = 0;
      plVar19[0xc] = 0;
      plVar19[0xd] = 0;
      plVar19[0xe] = 0;
      plVar19[0xf] = 0;
      plVar19[0x10] = 0;
      plVar19[0x11] = 0;
      plVar19[0x12] = 0;
      plVar19[0x13] = 0;
      plVar19[0x14] = 0;
      plVar19[0x15] = 0;
      plVar19[0x16] = 0;
      plVar19[0x17] = 0;
      plVar19[0x18] = 0;
      plVar19[0x19] = 0;
      *(undefined4 *)(plVar19 + 0x19) = 0x3f800000;
      puStack_1e8 = (undefined *)CONCAT71(puStack_1e8._1_7_,1);
      if ((long)puVar38 < 0) {
        fVar41 = (float)puVar38;
        fVar40 = *(float *)(plVar13 + 4);
        if (puVar38 != (uint *)0x0) goto LAB_05e9e599;
LAB_05e9e5aa:
        uVar15 = 1;
        if ((uint *)0x2 < puVar38) {
          uVar15 = (ulong)(((ulong)puVar38 & (long)puVar38 - 1U) != 0);
        }
        uVar15 = (long)puVar38 * 2 | uVar15;
        fVar40 = (float)func_0x0eee3ab0((float)(plVar13[3] + 1) / fVar40);
        uVar27 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
        if (uVar27 < uVar15) {
          uVar27 = uVar15;
        }
        uVar15 = 2;
        if ((uVar27 == 1) || (uVar15 = uVar27, (uVar27 & uVar27 - 1) == 0)) {
          uVar27 = plVar13[1];
          bVar39 = uVar15 < uVar27;
          if (uVar15 <= uVar27) goto LAB_05e9e700;
LAB_05e9e622:
          func_0x05d849c0(plVar13,uVar15);
        }
        else {
          uVar15 = func_0x0412c3f0();
          uVar27 = plVar13[1];
          bVar39 = uVar15 < uVar27;
          if (uVar27 < uVar15) goto LAB_05e9e622;
LAB_05e9e700:
          if (bVar39) {
            fVar40 = (float)func_0x0eee3ab0((float)(ulong)plVar13[3] / *(float *)(plVar13 + 4));
            uVar33 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
            if ((uVar27 < 3) ||
               (uVar30 = uVar27 - (uVar27 >> 1 & 0x5555555555555555),
               uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333),
               1 < (byte)(((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar33 = func_0x0412c3f0(uVar33);
            }
            else if (1 < uVar33) {
              lVar21 = 0x3f;
              if (uVar33 - 1 != 0) {
                for (; uVar33 - 1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              uVar33 = 1L << (-((byte)lVar21 ^ 0x3f) & 0x3f);
            }
            if (uVar15 <= uVar33) {
              uVar15 = uVar33;
            }
            if (uVar15 < uVar27) goto LAB_05e9e622;
          }
        }
        puVar38 = (uint *)plVar13[1];
        if (((ulong)puVar38 & (long)puVar38 - 1U) == 0) {
          puVar28 = (uint *)((ulong)puVar31 & (long)puVar38 - 1U);
        }
        else {
          puVar28 = puVar31;
          if (puVar38 <= puVar31) {
            if (((ulong)puVar31 | (ulong)puVar38) >> 0x20 == 0) {
              puVar28 = (uint *)(((ulong)puVar31 & 0xffffffff) % ((ulong)puVar38 & 0xffffffff));
            }
            else {
              puVar28 = (uint *)((ulong)puVar31 % (ulong)puVar38);
            }
          }
        }
      }
      else {
        fVar41 = (float)(long)puVar38;
        fVar40 = *(float *)(plVar13 + 4);
        if (puVar38 == (uint *)0x0) goto LAB_05e9e5aa;
LAB_05e9e599:
        puVar28 = puStack_230;
        if (fVar41 * fVar40 < (float)(plVar13[3] + 1)) goto LAB_05e9e5aa;
      }
      lVar21 = *plVar13;
      plVar19 = *(long **)(lVar21 + (long)puVar28 * 8);
      if (plVar19 == (long *)0x0) {
        *uStack_1f8 = *plStack_88;
        *plStack_88 = (long)uStack_1f8;
        *(long **)(lVar21 + (long)puVar28 * 8) = plStack_88;
        if (*uStack_1f8 != 0) {
          puVar31 = *(uint **)(*uStack_1f8 + 8);
          if (((ulong)puVar38 & (long)puVar38 - 1U) == 0) {
            *(long **)(lVar21 + ((ulong)puVar31 & (long)puVar38 - 1U) * 8) = uStack_1f8;
          }
          else {
            if (puVar38 <= puVar31) {
              if (((ulong)puVar31 | (ulong)puVar38) >> 0x20 == 0) {
                *(long **)(lVar21 + (((ulong)puVar31 & 0xffffffff) % ((ulong)puVar38 & 0xffffffff))
                                    * 8) = uStack_1f8;
                goto LAB_05e9e864;
              }
              puVar31 = (uint *)((ulong)puVar31 % (ulong)puVar38);
            }
            *(long **)(lVar21 + (long)puVar31 * 8) = uStack_1f8;
          }
        }
      }
      else {
        *uStack_1f8 = *plVar19;
        *plVar19 = (long)uStack_1f8;
      }
LAB_05e9e864:
      plVar13[3] = plVar13[3] + 1;
      plVar20 = uStack_1f8;
      goto LAB_05e9e86c;
    }
    uStack_190 = (ulong)plStack_1a8;
    func_0x0ed5ffe0(*(undefined8 *)param_5,8,&uStack_190);
    if ((uStack_190 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_190 & 0xff00ffffffffffff) - 8);
    }
    uStack_190 = 0;
    goto LAB_05e9e91c;
  }
  uStack_180 = uStack_220;
  func_0x0ed5ffe0(*(undefined8 *)param_5,8,&uStack_180);
  if ((uStack_180 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
  }
  uStack_180 = 0;
  goto LAB_05e9e950;
LAB_05e9d7cd:
  cVar10 = (char)uStack_220;
  func_0x05d4e1c0(plVar20 + 7);
  bVar9 = *(byte *)(plVar20 + 3);
  goto joined_r0x05e9d7e5;
LAB_05e9d834:
  cVar10 = (char)uStack_220;
  plVar19[6] = (long)plStack_1a8;
  plVar20[6] = (long)plVar37;
  func_0x05d4e1c0(plVar20 + 7);
  bVar9 = *(byte *)(plVar20 + 3);
joined_r0x05e9d7e5:
  if ((bVar9 & 1) != 0) {
    func_0x0412a280(plVar20[5],plVar20[3] & 0xfffffffffffffffe);
  }
  func_0x0412a280(plVar20,0xd0);
  func_0x05d4e1c0(auStack_178);
  if (cVar10 != '\0') {
LAB_05e9d64e:
    func_0x0412a280(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
  }
LAB_05e9d661:
  plVar20 = plStack_228;
  auStack_178 = (undefined1  [8])(plVar19 + 7);
  lStack_150 = param_3[5];
  puStack_168 = (undefined8 *)&UNK_05e93630;
  pcStack_160 = (code *)0x0;
  uStack_158 = CONCAT35(uStack_158._5_3_,0x310289199);
  lStack_148 = 0;
  puStack_140 = &UNK_05e93610;
  func_0x0ed75bc0(&puStack_a0,plStack_228,auStack_178,uStack_d8,&uStack_58);
  param_5 = pbStack_e0;
  uVar14 = uStack_1a0;
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(auStack_178);
  }
  lVar21 = *(long *)(puStack_230 + 2);
  uVar1 = *(uint *)(lVar21 + 0x1c + (ulong)*puStack_230 * 0x20);
  *puStack_230 = uVar1;
  if (puStack_230[0x48] == 0) {
    uVar23 = puStack_230[4];
  }
  else if ((*(uint *)(*(long *)(puStack_230 + 0x46) + 0x18 + (ulong)(puStack_230[0x48] - 1) * 0x30)
            == uVar1) || (uVar23 = puStack_230[4], uVar1 != uVar23 - 1)) goto LAB_05e9c945;
  lVar16 = lVar21 + (ulong)uVar23 * 0x20;
  uVar15 = (ulong)*(uint *)(lVar21 + -0x10 + (ulong)uVar23 * 0x20);
  if (uVar15 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar15 * 8))(auStack_178,lVar16 + -0x18);
    uVar23 = puStack_230[4];
  }
  *(undefined4 *)(lVar16 + -0x10) = 0xffffffff;
  puStack_230[4] = uVar23 - 1;
LAB_05e9c945:
  (**(code **)(*plVar20 + 0xd0))(plVar20);
LAB_05e9c959:
  uStack_198 = uStack_198 + 1;
  if (uStack_198 == uVar14) {
    return;
  }
  goto LAB_05e9c965;
LAB_05e9ea6a:
  plVar20[6] = (long)&uStack_258;
  plStack_238 = plVar34;
LAB_05e9e86c:
  plVar19 = plStack_228;
  uStack_1f8 = plVar20 + 7;
  lStack_1d0 = param_3[5];
  puStack_1e8 = &UNK_05e93630;
  iStack_1d8 = 0x10289199;
  pcStack_1e0 = (code *)0x0;
  uStack_1d4 = 3;
  uStack_1c8 = 0;
  puStack_1c0 = &UNK_05e93610;
  func_0x0ed75bc0(&puStack_a0,plStack_228,&uStack_1f8,uStack_d8,&uStack_58);
  (**(code **)(*plVar19 + 0xd0))(plVar19);
  param_5 = pbStack_e0;
  if (pcStack_1e0 != (code *)0x0) {
    (*pcStack_1e0)(&uStack_1f8);
  }
LAB_05e9e91c:
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(auStack_178);
  }
  if ((_auStack_250 & 1) != 0) {
    func_0x0412a280(plStack_240,_auStack_250 & 0xfffffffffffffffe);
  }
LAB_05e9e950:
  (**(code **)(*plVar19 + 0xd0))(plVar19);
  lVar21 = *(long *)(puVar18 + 2);
  uVar1 = *(uint *)(lVar21 + 0x1c + (ulong)*puVar18 * 0x20);
  *puVar18 = uVar1;
  if (puVar18[0x48] == 0) {
    uVar23 = puVar18[4];
  }
  else if ((*(uint *)(*(long *)(puVar18 + 0x46) + 0x18 + (ulong)(puVar18[0x48] - 1) * 0x30) == uVar1
           ) || (uVar23 = puVar18[4], uVar1 != uVar23 - 1)) goto LAB_05e9df7c;
  lVar16 = lVar21 + (ulong)uVar23 * 0x20;
  uVar15 = (ulong)*(uint *)(lVar21 + -0x10 + (ulong)uVar23 * 0x20);
  if (uVar15 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar15 * 8))(auStack_178,lVar16 + -0x18);
    uVar23 = puVar18[4];
  }
  *(undefined4 *)(lVar16 + -0x10) = 0xffffffff;
  puVar18[4] = uVar23 - 1;
LAB_05e9df7c:
  uVar14 = (ulong)((int)uVar14 + 1);
  if (uStack_198 <= uVar14) {
    return;
  }
  goto LAB_05e9df90;
}


