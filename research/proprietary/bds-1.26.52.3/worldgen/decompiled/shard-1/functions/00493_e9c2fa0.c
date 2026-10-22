/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeac2fa0 (ELF vaddr 0xe9c2fa0)
 * Label: caller-of-callee
 * Body:  [[0eac2fa0, 0eac3656] [0eac3660, 0eac3f66] [0eac3f70, 0eac4173] [0eac4180, 0eac41ee] [0eac41f0, 0eac441a] [0eac4420, 0eac489a] [0eac48a0, 0eac4a46] [0eac4a4c, 0eac4a5b] [0eac4c5c, 0eac4c88] [0eac4cc2, 0eac4f42] [0eac4f50, 0eac5129] [0eac5130, 0eac5185] [0eac5190, 0eac52dc] [0eac52e0, 0eac54a7]]
 * Ghidra: FUN_0eac2fa0
 */


/* WARNING: Removing unreachable block (ram,0x0eac3a1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eac2fa0(undefined8 param_1,ulong *param_2,ulong *param_3,undefined8 param_4,ulong *param_5
                 )

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined **ppuVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *extraout_RDX;
  uint uVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  undefined **ppuVar32;
  ulong *puVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined *puStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  code *pcStack_298;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  uint uStack_260;
  undefined8 *apuStack_258 [2];
  undefined *puStack_248;
  code *pcStack_240;
  undefined4 uStack_238;
  undefined1 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  uint *puStack_1f0;
  ulong *puStack_1e0;
  undefined8 uStack_1d8;
  ulong *puStack_1d0;
  ulong uStack_1c8;
  ulong *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  code *pcStack_1a0;
  undefined4 uStack_198;
  char cStack_194;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  undefined1 uStack_169;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  int iStack_138;
  undefined1 uStack_134;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 auStack_f8 [16];
  ulong uStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  
  pcVar7 = (code *)param_3[7];
  puStack_178 = param_2;
  uStack_d0 = param_4;
  if (pcVar7 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar34 = false;
    }
    else {
      puStack_1f0 = (uint *)0xeac301d;
      (*(code *)param_3[3])(param_3);
      bVar34 = (undefined *)param_3[7] == &UNK_0eac6220;
    }
    param_3[2] = (ulong)&UNK_0eac63c0;
    *(undefined4 *)(param_3 + 4) = 0xa9caeda;
    param_3[3] = (ulong)&UNK_0eac6500;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    puStack_1f0 = (uint *)0xeac306d;
    puVar9 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (puVar9 == (ulong *)0x0) {
      puStack_1f0 = (uint *)0xeac49be;
      func_0x0eec74c0(0x28);
      param_2 = puStack_178;
    }
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 4) = 0x3f800000;
    *param_3 = (ulong)puVar9;
    pcVar7 = (code *)&UNK_0eac6220;
    param_3[7] = (ulong)&UNK_0eac6220;
    if (bVar34) {
      uVar31 = param_3[6];
    }
    else {
      uVar31 = 0;
    }
    param_3[6] = uVar31;
    cVar5 = '\x01';
    puVar8 = puVar9;
LAB_0eac30c7:
    puStack_b0 = &UNK_0ef44b00;
    if (puVar8 == (ulong *)0x0) goto LAB_0eac30cc;
  }
  else {
    cVar5 = *(char *)((long)param_3 + 0x24);
    puVar9 = (ulong *)*param_3;
    puVar8 = puVar9;
    if (cVar5 == '\x02') {
      puVar8 = param_3;
    }
    if ((int)param_3[4] == 0xa9caeda) goto LAB_0eac30c7;
LAB_0eac30cc:
    puStack_b0 = &UNK_0ef44b00;
    uVar31 = param_3[5];
    uVar14 = param_3[6];
    if (uVar14 == 0) {
      puStack_1f0 = (uint *)0xeac30e7;
      (*pcVar7)(0,param_3,0);
      uVar14 = param_3[6];
      cVar5 = *(char *)((long)param_3 + 0x24);
      puVar9 = (ulong *)*param_3;
    }
    if (cVar5 == '\x02') {
      puVar9 = param_3;
    }
    puStack_1f0 = (uint *)0xeac310a;
    puVar8 = (ulong *)FUN_0488e200(uVar31,uVar14,&UNK_0a9caeda,puVar9);
  }
  puVar24 = (undefined8 *)*param_5;
  uStack_50 = param_5[1];
  plVar29 = (long *)param_5[2];
  puStack_80 = puVar24;
  uStack_78 = uStack_50;
  if (plVar29 == (long *)0x0) {
    plVar29 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_1f0 = (uint *)0xeac3135;
    puStack_70 = (undefined8 *)(**(code **)(*plVar29 + 0x30))(plVar29,0);
    puVar24 = (undefined8 *)*param_5;
    uStack_50 = param_5[1];
    plVar29 = (long *)param_5[2];
  }
  puVar9 = param_5 + 3;
  uStack_68 = (undefined4)param_5[3];
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_b8 = &UNK_0f4d5188;
  puStack_58 = puVar24;
  if (plVar29 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    puStack_1f0 = (uint *)0xeac31a0;
    uStack_48 = (**(code **)(*plVar29 + 0x30))(plVar29,1);
  }
  uStack_40 = (undefined4)*puVar9;
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  puStack_1f0 = (uint *)0xeac31d1;
  bVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  puStack_1e0 = puVar8;
  if (bVar4 == 1) {
    puStack_1f0 = (uint *)0xeac31ea;
    puVar9 = (ulong *)(**(code **)(*param_2 + 0xa8))(param_2);
    if ((long *)param_5[2] != (long *)0x0) {
      puStack_1f0 = (uint *)0xeac3200;
      puVar8 = (ulong *)(**(code **)(*(long *)param_5[2] + 0x10))();
      if (puVar8 < puVar9) {
        uStack_c0 = 0x34000001208ec0;
        puStack_1f0 = (uint *)0xeac3247;
        func_0x0ed5ffe0(*param_5,0x40,&uStack_c0);
        if ((uStack_c0 >> 0x37 & 1) == 0) {
          return;
        }
        puStack_1f0 = (uint *)0xeac3272;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
        return;
      }
    }
    puStack_1f0 = (uint *)0xeac3349;
    puStack_d8 = param_5;
    func_0x0ed6d600(&uStack_1d8,*param_5);
    if (puVar9 == (ulong *)0x0) {
      return;
    }
    puVar8 = (ulong *)0x0;
    puStack_1c0 = puVar9;
    puStack_118 = param_3;
    do {
      puVar10 = uStack_1d8;
      uVar28 = (uint)puStack_1d0;
      uVar22 = (uint)uStack_1d8[0x56];
      puVar24 = (undefined8 *)CONCAT71((int7)((ulong)puVar24 >> 8),uVar22 != 0xffffffff);
      if ((uint)puStack_1d0 <= uVar22 && uVar22 != 0xffffffff) {
        return;
      }
      puStack_1f0 = (uint *)0xeac33be;
      auVar37 = (**(code **)(*puStack_178 + 0xc0))();
      puVar25 = puStack_70;
      auStack_f8 = auVar37;
      if (puStack_70 != (undefined8 *)0x0) {
        uVar31 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (uVar31 == 0) {
          puStack_1f0 = (uint *)0xeac3401;
          func_0x048b0de0(&uStack_158,&uStack_169);
          _DAT_0f54fd90 = (undefined4)uStack_158;
          uRam000000000f54fd94 = uStack_158._4_4_;
          uVar2 = (undefined4)uStack_150;
          uVar3 = uStack_150._4_4_;
          uStack_158 = (ulong *)0x0;
          uStack_150 = (ulong *)0x0;
          plVar29 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar2;
          uRam000000000f54fd9c = uVar3;
          if (plVar29 != (long *)0x0) {
            LOCK();
            plVar20 = plVar29 + 1;
            lVar13 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              puStack_1f0 = (uint *)0xeac3442;
              (**(code **)(*plVar29 + 0x10))(plVar29);
              puStack_1f0 = (uint *)0xeac344a;
              func_0x0412c2d0(plVar29);
            }
          }
          puVar10 = uStack_150;
          if (uStack_150 != (ulong *)0x0) {
            LOCK();
            puVar33 = uStack_150 + 1;
            uVar31 = *puVar33;
            *puVar33 = *puVar33 - 1;
            UNLOCK();
            if (uVar31 == 0) {
              puStack_1f0 = (uint *)0xeac3472;
              (**(code **)(*uStack_150 + 0x10))(uStack_150);
              puStack_1f0 = (uint *)0xeac347a;
              func_0x0412c2d0(puVar10);
            }
          }
          uVar31 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_1a8 = (undefined8 *)&UNK_05ea5bd0;
        uStack_198 = 0x989eedf9;
        pcStack_1a0 = (code *)0x0;
        cStack_194 = '\x04';
        puVar24 = (undefined8 *)auStack_f8;
        uStack_188 = 0;
        puStack_180 = (ulong *)&UNK_05ea5bb0;
        puStack_1f0 = (uint *)0xeac34e0;
        auStack_1b8 = (undefined1  [8])puVar24;
        uStack_190 = uVar31;
        (**(code **)*puVar25)(puVar25,auStack_1b8,puStack_80);
        if (pcStack_1a0 != (code *)0x0) {
          puStack_1f0 = (uint *)0xeac34f1;
          (*pcStack_1a0)(auStack_1b8);
        }
        puVar10 = uStack_1d8;
        uVar28 = (uint)puStack_1d0;
      }
      uVar18 = auStack_f8._8_8_;
      uVar17 = auStack_f8._0_8_;
      if (((uint)puVar10[0x56] == 0xffffffff) || ((uint)puVar10[0x56] < uVar28)) {
        uVar31 = *puStack_d8;
        uStack_160 = 0;
        if (auStack_f8._0_8_ == 0) {
          uStack_160 = (auStack_f8._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar13 = auStack_f8._8_8_ + 9;
          puStack_1f0 = (uint *)0xeac3557;
          puVar10 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
          puVar24 = (undefined8 *)
                    CONCAT71((int7)((ulong)puVar24 >> 8),lVar13 == 0 || puVar10 != (ulong *)0x0);
          if (lVar13 != 0 && puVar10 == (ulong *)0x0) {
            puStack_1f0 = (uint *)0xeac388b;
            func_0x0eec74c0(lVar13,8);
          }
          *puVar10 = uVar18;
          puStack_1f0 = (uint *)0xeac3586;
          memcpy(puVar10 + 1,uVar17,uVar18);
          *(undefined1 *)((long)(puVar10 + 1) + uVar18) = 0;
          uStack_160 = (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puStack_1f0 = (uint *)0xeac35d6;
        puVar11 = (uint *)func_0x0ed6d180(uVar31,&uStack_160,0);
        param_5 = puStack_1e0;
        if ((uStack_160 & 0x80000000000000) != 0) {
          puStack_1f0 = (uint *)0xeac3617;
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_160 & 0xff00ffffffffffff) - 8);
        }
        param_3 = (ulong *)auStack_f8._8_8_;
        uVar17 = auStack_f8._0_8_;
        uStack_160 = 0;
        if ((ulong *)0xfffffffffffffff7 < (ulong)auStack_f8._8_8_) {
          puStack_1f0 = (uint *)0xeac4a03;
          func_0x04882e30();
          goto LAB_0eac4a03;
        }
        if ((ulong)auStack_f8._8_8_ < (ulong *)0x17) {
          auStack_1b8[0] = auStack_f8[8] * '\x02';
          puVar12 = auStack_1b8 + 1;
          if ((ulong *)auStack_f8._8_8_ != (ulong *)0x0) goto LAB_0eac36b0;
        }
        else {
          uVar31 = (auStack_f8._8_8_ | 7) + 1;
          if ((auStack_f8._8_8_ | 7) == 0x17) {
            uVar31 = 0x1a;
          }
          puStack_1f0 = (uint *)0xeac368c;
          puVar12 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
          if (puVar12 == (undefined *)0x0) {
            puStack_1f0 = (uint *)0xeac389a;
            func_0x0eec74c0(uVar31,0);
          }
          auStack_1b8 = (undefined1  [8])(uVar31 | 1);
          uStack_1b0 = param_3;
          param_5 = puStack_1e0;
          puStack_1a8 = (undefined8 *)puVar12;
LAB_0eac36b0:
          puStack_1f0 = (uint *)0xeac36be;
          func_0x0eee2ee0(puVar12,uVar17,param_3);
        }
        puVar12[(long)param_3] = 0;
        uStack_158 = (ulong *)0x0;
        uStack_150 = (ulong *)0x0;
        puStack_148 = (undefined *)0x0;
        puStack_1f0 = (uint *)0xeac36f2;
        lVar13 = func_0x0eac5c20(param_5,auStack_1b8,auStack_1b8,&uStack_158);
        puVar33 = uStack_158;
        puVar9 = puStack_1c0;
        puVar10 = uStack_150;
        if (uStack_158 != (ulong *)0x0) {
          for (; puVar33 != puVar10; puVar10 = puVar10 + -5) {
            if ((puVar10[-4] & 1) != 0) {
              puStack_1f0 = (uint *)0xeac3845;
              func_0x0412a280(puVar10[-2],puVar10[-4] & 0xfffffffffffffffe);
            }
          }
          uStack_150 = puVar33;
          puStack_1f0 = (uint *)0xeac3733;
          func_0x0412a280(puVar33,(long)puStack_148 - (long)puVar33);
        }
        if (((ulong)auStack_1b8 & 1) != 0) {
          puStack_1f0 = (uint *)0xeac374d;
          func_0x0412a280(puStack_1a8,(ulong)auStack_1b8 & 0xfffffffffffffffe);
        }
        puVar10 = puStack_178;
        auStack_1b8 = (undefined1  [8])(lVar13 + 0x28);
        uStack_190 = puStack_118[5];
        puStack_1a8 = (undefined8 *)&UNK_0ea265b0;
        uStack_198 = 0xa2c042ce;
        pcStack_1a0 = (code *)0x0;
        cStack_194 = '\x03';
        uStack_188 = 0;
        puStack_180 = (ulong *)&UNK_0ea264d0;
        puStack_1f0 = (uint *)0xeac37c8;
        func_0x0ed75bc0(&puStack_b8,puStack_178,auStack_1b8,uStack_d0,&puStack_58);
        if (pcStack_1a0 != (code *)0x0) {
          puStack_1f0 = (uint *)0xeac37d9;
          (*pcStack_1a0)(auStack_1b8);
        }
        lVar13 = *(long *)(puVar11 + 2);
        uVar22 = *(uint *)(lVar13 + 0x1c + (ulong)*puVar11 * 0x20);
        *puVar11 = uVar22;
        if (puVar11[0x48] == 0) {
          puVar24 = (undefined8 *)(ulong)puVar11[4];
LAB_0eac384a:
          uVar22 = (uint)puVar24;
          lVar30 = lVar13 + (long)puVar24 * 0x20;
          uVar31 = (ulong)*(uint *)(lVar13 + -0x10 + (long)puVar24 * 0x20);
          if (uVar31 != 0xffffffff) {
            puStack_1f0 = (uint *)0xeac3879;
            (**(code **)(&UNK_0f4e40d0 + uVar31 * 8))(auStack_1b8,lVar30 + -0x18);
            uVar22 = puVar11[4];
          }
          *(undefined4 *)(lVar30 + -0x10) = 0xffffffff;
          puVar24 = (undefined8 *)(ulong)(uVar22 - 1);
          puVar11[4] = uVar22 - 1;
        }
        else {
          puVar24 = (undefined8 *)((ulong)(puVar11[0x48] - 1) * 0x30);
          if ((*(uint *)(*(long *)(puVar11 + 0x46) + 0x18 + (long)puVar24) != uVar22) &&
             (puVar24 = (undefined8 *)(ulong)puVar11[4], uVar22 == puVar11[4] - 1))
          goto LAB_0eac384a;
        }
        puStack_1f0 = (uint *)0xeac337f;
        (**(code **)(*puVar10 + 0xd0))(puVar10);
      }
      puVar8 = (ulong *)((long)puVar8 + 1);
      if (puVar8 == puVar9) {
        return;
      }
    } while( true );
  }
  if ((bVar4 & 2) == 0) {
    uVar31 = param_3[5];
    puStack_1f0 = (uint *)0xeac328f;
    lVar13 = func_0x048b2190(uVar31);
    plVar29 = *(long **)(lVar13 + 0x78);
    puVar24 = (undefined8 *)0x0;
    if (plVar29 == (long *)0x0) {
LAB_0eac3304:
      if (*(code **)(lVar13 + 0x30) == (code *)0x0) {
        puStack_148 = &UNK_0488e0b0;
        iStack_138 = 0x48b5725f;
        pcStack_140 = (code *)0x0;
        uStack_134 = 0;
        uStack_158 = (ulong *)0x0;
        uStack_128 = 0;
        puStack_120 = (undefined *)0x0;
        uStack_130 = uVar31;
        goto LAB_0eac3a78;
      }
      puStack_1f0 = (uint *)0xeac331e;
      (**(code **)(lVar13 + 0x30))(&uStack_158,uVar31);
      if (iStack_138 != -0x5db38b49) goto LAB_0eac3a78;
LAB_0eac3acb:
      puVar33 = (ulong *)&UNK_0133e465;
      puStack_1f0 = (uint *)0xeac3ada;
      puVar10 = (ulong *)func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      puVar25 = (undefined8 *)*plVar29;
      puVar19 = (undefined8 *)plVar29[1];
      puVar24 = (undefined8 *)CONCAT71((int7)((ulong)plVar29 >> 8),puVar25 == puVar19);
      if (puVar25 == (undefined8 *)0x0 || puVar25 == puVar19) goto LAB_0eac3304;
      puVar23 = (undefined8 *)0x0;
      bVar34 = false;
      do {
        puVar24 = puVar25;
        if (puVar23 != (undefined8 *)0x0) {
          puVar24 = puVar23;
        }
        bVar1 = puVar23 != (undefined8 *)0x0;
        if (puVar25[1] != 0) {
          puVar24 = puVar23;
          bVar1 = bVar34;
        }
        puVar25 = puVar25 + 4;
        puVar23 = puVar24;
        bVar34 = bVar1;
      } while (puVar25 != puVar19);
      if (bVar1 || puVar24 == (undefined8 *)0x0) goto LAB_0eac3304;
      puStack_1f0 = (uint *)0xeac3a6b;
      (*(code *)puVar24[3])(&uStack_158,uVar31,0);
      if (iStack_138 == -0x5db38b49) goto LAB_0eac3acb;
LAB_0eac3a78:
      puStack_1f0 = (uint *)0xeac3a8a;
      func_0x0488e290(auStack_1b8,&uStack_158);
      puVar9 = puStack_180;
      if ((puStack_180 != (ulong *)0x0) && ((byte)(cStack_194 - 1U) < 2)) {
        puStack_1f0 = (uint *)0xeac3ab1;
        func_0x048b0900(&uStack_158,auStack_1b8);
      }
      if (pcStack_1a0 != (code *)0x0) {
        puStack_1f0 = (uint *)0xeac3ac2;
        (*pcStack_1a0)(auStack_1b8);
      }
      if (puVar9 != (ulong *)0x0) goto LAB_0eac3acb;
      puVar33 = (ulong *)&UNK_01411d3a;
      puStack_1f0 = (uint *)0xeac3dd1;
      puVar10 = (ulong *)func_0x0eee2e90(&UNK_01411d3a);
    }
    if (puVar10 < (ulong *)0xfffffffffffffff8) {
      if (puVar10 < (ulong *)0x17) {
        uVar31 = (ulong)uStack_1d8 >> 8;
        uStack_1d8 = (ulong *)CONCAT71((int7)uVar31,(char)puVar10 * '\x02');
        uVar31 = (long)&uStack_1d8 + 1;
        if (puVar10 != (ulong *)0x0) goto LAB_0eac3b5f;
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_1d8._1_1_ = 0;
      }
      else {
        puVar24 = (undefined8 *)(((ulong)puVar10 | 7) + 1);
        puVar25 = (undefined8 *)0x1a;
        if (((ulong)puVar10 | 7) != 0x17) {
          puVar25 = puVar24;
        }
        puStack_1f0 = (uint *)0xeac3b40;
        uVar31 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,puVar25);
        if (uVar31 == 0) {
          puStack_1f0 = (uint *)0xeac49ea;
          func_0x0eec74c0(puVar25,0);
        }
        param_3 = (ulong *)((ulong)puVar25 | 1);
        uStack_1d8 = param_3;
        puStack_1d0 = puVar10;
        uStack_1c8 = uVar31;
LAB_0eac3b5f:
        puStack_1f0 = (uint *)0xeac3b6d;
        memcpy(uVar31,puVar33,puVar10);
        *(undefined1 *)(uVar31 + (long)puVar10) = 0;
      }
      if (pcStack_140 != (code *)0x0) {
        puStack_1f0 = (uint *)0xeac3b89;
        (*pcStack_140)(&uStack_158);
      }
      puVar9 = uStack_1d8;
      puVar11 = (uint *)((ulong)uStack_1d8 & 0xff);
      puVar8 = puStack_1d0;
      if (((ulong)uStack_1d8 & 1) == 0) {
        puVar8 = (ulong *)((ulong)uStack_1d8 >> 1 & 0x7f);
      }
      uVar31 = (long)puVar8 + 0xc;
      if (uVar31 < 0xfffffffffffffff8) {
        uVar14 = *param_5;
        if (uVar31 < 0x17) {
          uStack_1b0 = (ulong *)0x0;
          puStack_1a8 = (undefined8 *)0x0;
          auStack_1b8._1_7_ = 0;
          auStack_1b8[0] = (char)uVar31 * '\x02';
        }
        else {
          uVar26 = 0x1a;
          if ((uVar31 | 7) != 0x17) {
            uVar26 = (uVar31 | 7) + 1;
          }
          puStack_1f0 = (uint *)0xeac3c05;
          puStack_1a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
          if (puStack_1a8 == (undefined8 *)0x0) {
            puStack_1f0 = (uint *)0xeac49f9;
            func_0x0eec74c0(uVar26,0);
          }
          auStack_1b8 = (undefined1  [8])(uVar26 | 1);
          uStack_1b0 = (ulong *)uVar31;
        }
        lVar13 = (long)puStack_1a8 + 0xc;
        bVar34 = ((ulong)auStack_1b8 & 1) == 0;
        puVar24 = puStack_1a8;
        if (bVar34) {
          puVar24 = (undefined8 *)(auStack_1b8 + 1);
        }
        *puVar24 = 0x6465746365707865;
        *(undefined4 *)(puVar24 + 1) = 0x206e6120;
        lVar30 = (long)&uStack_1b0 + 5;
        if (!bVar34) {
          lVar30 = lVar13;
        }
        if (puVar8 != (ulong *)0x0) {
          uVar31 = uStack_1c8;
          if (((ulong)puVar9 & 1) == 0) {
            uVar31 = (long)&uStack_1d8 + 1;
          }
          puStack_1f0 = (uint *)0xeac3c78;
          func_0x0eee2ee0(lVar30,uVar31,puVar8);
        }
        *(undefined1 *)(lVar30 + (long)puVar8) = 0;
        uVar31 = (ulong)auStack_1b8 >> 1 & 0x7f;
        puVar24 = (undefined8 *)(auStack_1b8 + 1);
        if (((ulong)auStack_1b8 & 1) != 0) {
          uVar31 = (ulong)uStack_1b0;
          puVar24 = puStack_1a8;
        }
        uStack_168 = 0;
        if (puVar24 == (undefined8 *)0x0) {
          uStack_168 = (ulong)((uint)uVar31 & 0x7f) << 0x30;
        }
        else {
          lVar13 = uVar31 + 9;
          puStack_1f0 = (uint *)0xeac3cd1;
          puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
          if (lVar13 != 0 && puVar8 == (ulong *)0x0) {
            puStack_1f0 = (uint *)0xeac49db;
            func_0x0eec74c0(lVar13,8);
          }
          *puVar8 = uVar31;
          puStack_1f0 = (uint *)0xeac3d01;
          memcpy(puVar8 + 1,puVar24,uVar31);
          *(undefined1 *)((long)puVar8 + uVar31 + 8) = 0;
          uStack_168 = (ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puStack_1f0 = (uint *)0xeac3d55;
        func_0x0ed5ffe0(uVar14,8,&uStack_168);
        if ((uStack_168 & 0x80000000000000) != 0) {
          puStack_1f0 = (uint *)0xeac3d7a;
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_168 & 0xff00ffffffffffff) - 8);
        }
        uStack_168 = 0;
        if (((ulong)auStack_1b8 & 1) != 0) {
          puStack_1f0 = (uint *)0xeac3da0;
          func_0x0412a280(puStack_1a8,(ulong)auStack_1b8 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar9 & 1) == 0) {
          return;
        }
        puStack_1f0 = (uint *)0xeac3dbd;
        func_0x0412a280(uStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
        return;
      }
LAB_0eac4a03:
      puStack_1f0 = (uint *)0xeac4a08;
      uVar17 = func_0x04882e30();
      puStack_1f0 = (uint *)0xeac4a10;
      uVar17 = func_0x04882e20(uVar17);
      puStack_1f0 = (uint *)0xeac4a18;
      uVar17 = func_0x04882e20(uVar17);
      puStack_1f0 = (uint *)0xeac4a20;
      uVar17 = func_0x04882e20(uVar17);
      puStack_1f0 = (uint *)0xeac4a30;
      func_0x0ee386e0(&uStack_c8);
      puStack_1f0 = (uint *)0xeac4a38;
      uVar17 = _Unwind_Resume(uVar17);
      puStack_1f0 = (uint *)0xeac4a40;
      uVar17 = func_0x04882e20(uVar17);
      puStack_1f0 = (uint *)0xeac4a57;
      puVar9 = puVar10;
      func_0x0eabf970(1);
      if (pcStack_1a0 != (code *)0x0) {
        puStack_1f0 = (uint *)0xeac4c6d;
        (*pcStack_1a0)(auStack_1b8);
      }
      if (((ulong)uStack_1d8 & 1) != 0) {
        puVar9 = (ulong *)((ulong)uStack_1d8 & 0xfffffffffffffffe);
        puStack_1f0 = (uint *)0xeac4c87;
        func_0x0412a280(uStack_1c8);
      }
      puStack_1f0 = (uint *)0xeac4cd0;
      (**(code **)(*puStack_178 + 0xd0))();
      puStack_1f0 = (uint *)0xeac4cd8;
      func_0x0ed6d560(param_3);
      puStack_1f0 = (uint *)0xeac4ce0;
      uVar18 = _Unwind_Resume(uVar17);
      puStack_1f0 = (uint *)0xeac4ce8;
      uVar18 = func_0x04882e20(uVar18);
      puStack_1f0 = (uint *)0xeac4cf0;
      func_0x04882e20(uVar18);
      puStack_270 = &UNK_0ef44b00;
      cVar5 = *(char *)((long)extraout_RDX + 0x24);
      puVar25 = (undefined8 *)*extraout_RDX;
      puVar19 = puVar25;
      if (cVar5 == '\x02') {
        puVar19 = extraout_RDX;
      }
      uStack_218 = uVar17;
      puStack_210 = param_3;
      puStack_208 = param_5;
      puStack_200 = puVar8;
      puStack_1f8 = puVar10;
      puStack_1f0 = puVar11;
      if (puVar19 == (undefined8 *)0x0 || *(int *)(extraout_RDX + 4) != 0xa9caeda) {
        uVar17 = extraout_RDX[5];
        lVar13 = extraout_RDX[6];
        if (lVar13 == 0) {
          (*(code *)extraout_RDX[7])(0,extraout_RDX,0);
          lVar13 = extraout_RDX[6];
          cVar5 = *(char *)((long)extraout_RDX + 0x24);
          puVar25 = (undefined8 *)*extraout_RDX;
        }
        if (cVar5 == '\x02') {
          puVar25 = extraout_RDX;
        }
        puVar19 = (undefined8 *)FUN_0488e200(uVar17,lVar13,&UNK_0a9caeda,puVar25);
      }
      puStack_2b8 = &UNK_0f4d5188;
      cVar5 = (**(code **)(*puVar9 + 0xa8))(puVar9);
      if (cVar5 == '\0') {
        uStack_2c0 = 0x170000014ad768;
        func_0x0ed5ffe0(*puVar24,8,&uStack_2c0);
        if ((uStack_2c0 >> 0x37 & 1) == 0) {
          return;
        }
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
        return;
      }
      if (cVar5 != '\x01') {
        cVar5 = (**(code **)(*puVar9 + 0xb0))(puVar9,1,puVar19[3]);
        if (cVar5 != '\x02') {
          uStack_2c8 = 0x170000014ad768;
          func_0x0ed5ffe0(*puVar24,8,&uStack_2c8);
          if ((uStack_2c8 >> 0x37 & 1) == 0) {
            return;
          }
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
          return;
        }
        func_0x0ed6d600(&lStack_268,*puVar24);
        puVar19 = puVar19 + 2;
        do {
          puVar19 = (undefined8 *)*puVar19;
          if (puVar19 == (undefined8 *)0x0) break;
          cVar5 = (**(code **)(*puVar9 + 0xa8))(puVar9);
          if (cVar5 == '\0') {
            uStack_2d8 = 0x15000001391736;
            func_0x0ed5ffe0(*puVar24,8,&uStack_2d8);
            if ((uStack_2d8 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_2d8 & 0xff00ffffffffffff) - 8);
            }
            uStack_2d8 = 0;
            uVar22 = *(uint *)(lStack_268 + 0x2b0);
          }
          else {
            cVar5 = (**(code **)(*puVar9 + 0x98))(puVar9,&UNK_013aac9a,3);
            if (cVar5 == '\0') {
              uStack_2e8 = 0x190000011b97a8;
              func_0x0ed5ffe0(*puVar24,8,&uStack_2e8);
              if ((uStack_2e8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
              }
              uStack_2e8 = 0;
            }
            else {
              plStack_2b0 = puVar19 + 2;
              uStack_288 = extraout_RDX[5];
              puStack_2a0 = &UNK_048b1ea0;
              uStack_290 = 0xa24c74b7;
              pcStack_298 = (code *)0x0;
              uStack_28c = 4;
              uStack_280 = 0;
              puStack_278 = &UNK_048b1e80;
              (**(code **)(puStack_270 + 0x38))(&puStack_270,puVar9,&plStack_2b0,puVar24);
              (**(code **)(*puVar9 + 0xa0))(puVar9);
              if ((*(uint *)(lStack_268 + 0x2b0) == 0xffffffff) ||
                 (*(uint *)(lStack_268 + 0x2b0) < uStack_260)) {
                cVar5 = (**(code **)(*puVar9 + 0x98))(puVar9,&UNK_0138e8dd,5);
                if (cVar5 == '\0') {
                  uStack_2e0 = 0x1b000001208f30;
                  func_0x0ed5ffe0(*puVar24,8,&uStack_2e0);
                  if ((uStack_2e0 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
                  }
                  uStack_2e0 = 0;
                }
                else {
                  uStack_230 = extraout_RDX[5];
                  apuStack_258[0] = puVar19 + 5;
                  puStack_248 = &UNK_0ea265b0;
                  uStack_238 = 0xa2c042ce;
                  pcStack_240 = (code *)0x0;
                  uStack_234 = 4;
                  uStack_228 = 0;
                  puStack_220 = &UNK_0ea264d0;
                  (**(code **)(puStack_2b8 + 0x38))(&puStack_2b8,puVar9,apuStack_258,puVar24);
                  (**(code **)(*puVar9 + 0xa0))(puVar9);
                  if (pcStack_240 != (code *)0x0) {
                    (*pcStack_240)(apuStack_258);
                  }
                }
              }
              if (pcStack_298 != (code *)0x0) {
                (*pcStack_298)(&plStack_2b0);
              }
            }
            (**(code **)(*puVar9 + 0xb8))(puVar9);
            uVar22 = *(uint *)(lStack_268 + 0x2b0);
          }
        } while ((uVar22 == 0xffffffff) || (uVar22 < uStack_260));
        goto LAB_0eac5454;
      }
      plVar29 = (long *)extraout_RDX[5];
      if (DAT_0f768458 == '\0') {
        iVar6 = func_0x04108328(&DAT_0f768458);
        if (iVar6 != 0) {
          func_0x0ea263c0();
          func_0x0410844d(&DAT_0f768458);
        }
      }
      plVar20 = (long *)(*plVar29 +
                        (ulong)((int)((ulong)(plVar29[1] - *plVar29) >> 3) - 1U & _DAT_0f768444) * 8
                        );
      do {
        lVar13 = *plVar20;
        if (lVar13 == -1) goto LAB_0eac4e19;
        plVar20 = (long *)(plVar29[3] + lVar13 * 0x18);
      } while (*(uint *)(plVar29[3] + 8 + lVar13 * 0x18) != _DAT_0f768444);
      if (plVar20 == (long *)plVar29[4]) {
LAB_0eac4e19:
        plStack_2b0 = (long *)0x0;
        plStack_2a8 = (long *)0x0;
        func_0x048b1dc0(&plStack_2b0);
        plVar20 = plStack_2b0;
        plVar29 = plStack_2a8;
        if (plStack_2b0 == (long *)0x0) goto LAB_0eac4e40;
LAB_0eac529c:
        if ((int)plVar20[0xc] == -0x2b3da790) goto LAB_0eac52a5;
LAB_0eac52b3:
        ppuVar21 = (undefined **)0x0;
      }
      else {
        plVar20 = (long *)plVar20[2];
        if (plVar20 != (long *)0x0) goto LAB_0eac529c;
LAB_0eac4e40:
        plVar20 = (long *)FUN_048aead0(plVar29);
        if ((int)plVar20[0xc] != -0x2b3da790) goto LAB_0eac52b3;
LAB_0eac52a5:
        if ((undefined8 *)plVar20[0xd] == (undefined8 *)0x0) goto LAB_0eac52b3;
        ppuVar21 = *(undefined ***)plVar20[0xd];
      }
      ppuVar32 = &puStack_2b8;
      if (ppuVar21 != (undefined **)0x0) {
        ppuVar32 = ppuVar21;
      }
      plVar29 = (long *)puVar19[2];
      if (plVar29 != (long *)0x0) {
        do {
          bVar34 = (*(byte *)(plVar29 + 2) & 1) != 0;
          lVar13 = (long)plVar29 + 0x11;
          if (bVar34) {
            lVar13 = plVar29[4];
          }
          uVar31 = (ulong)(*(byte *)(plVar29 + 2) >> 1);
          if (bVar34) {
            uVar31 = plVar29[3];
          }
          cVar5 = (**(code **)(*puVar9 + 0x98))(puVar9,lVar13,uVar31);
          if (cVar5 == '\0') {
            uStack_2d0 = 0x170000014ad768;
            func_0x0ed5ffe0(*puVar24,8,&uStack_2d0);
            if ((uStack_2d0 >> 0x37 & 1) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_2d0 & 0xff00ffffffffffff) - 8);
            }
            uStack_2d0 = 0;
            break;
          }
          puStack_2a0 = &UNK_0ea265b0;
          uStack_290 = 0xa2c042ce;
          pcStack_298 = (code *)0x0;
          uStack_28c = 4;
          plStack_2b0 = plVar29 + 5;
          uStack_288 = extraout_RDX[5];
          uStack_280 = 0;
          puStack_278 = &UNK_0ea264d0;
          (**(code **)(*ppuVar32 + 0x38))(ppuVar32,puVar9,&plStack_2b0,puVar24);
          (**(code **)(*puVar9 + 0xa0))(puVar9);
          if (pcStack_298 != (code *)0x0) {
            (*pcStack_298)(&plStack_2b0);
          }
          plVar29 = (long *)*plVar29;
        } while (plVar29 != (long *)0x0);
      }
LAB_0eac5454:
      (**(code **)(*puVar9 + 0xb8))(puVar9);
      return;
    }
    puStack_1f0 = (uint *)0xeac3de0;
    uVar31 = func_0x04882e30();
    puVar8 = param_5;
    param_5 = puVar33;
LAB_0eac3de0:
    fVar35 = (float)uVar31;
LAB_0eac3df8:
    puStack_1f0 = (uint *)0xeac3e03;
    fVar35 = (float)func_0x0eee3ab0(fVar35 / *(float *)(puVar8 + 4));
    puVar10 = (ulong *)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35);
    if ((puVar9 < (ulong *)0x3) ||
       (uVar31 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555),
       uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333),
       1 < (byte)(((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      puStack_1f0 = (uint *)0xeac3ead;
      puVar10 = (ulong *)FUN_0412c3f0(puVar10);
    }
    else if ((ulong *)0x1 < puVar10) {
      lVar13 = 0x3f;
      if ((long)puVar10 - 1U != 0) {
        for (; (long)puVar10 - 1U >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      puVar10 = (ulong *)(1L << (-((byte)lVar13 ^ 0x3f) & 0x3f));
    }
    if (param_2 <= puVar10) {
      param_2 = puVar10;
    }
    if (puVar9 <= param_2) goto LAB_0eac3ebd;
  }
  else {
    puStack_1f0 = (uint *)0xeac38b2;
    puVar9 = (ulong *)(**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if ((long *)param_5[2] != (long *)0x0) {
      puStack_1f0 = (uint *)0xeac38c4;
      puVar10 = (ulong *)(**(code **)(*(long *)param_5[2] + 0x10))();
      if (puVar10 < puVar9) {
        uStack_c8 = 0x34000001208ec0;
        puStack_1f0 = (uint *)0xeac3907;
        func_0x0ed5ffe0(*param_5,0x40,&uStack_c8);
        if ((uStack_c8 >> 0x37 & 1) == 0) {
          return;
        }
        puStack_1f0 = (uint *)0xeac3932;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
        return;
      }
    }
    puStack_1f0 = (uint *)0xeac3965;
    fVar35 = (float)func_0x0eee3ab0((float)puVar9 / *(float *)(puVar8 + 4));
    puVar10 = (ulong *)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35);
    param_2 = (ulong *)0x2;
    puStack_1c0 = puVar9;
    if ((puVar10 == (ulong *)0x1) || (param_2 = puVar10, ((ulong)puVar10 & (long)puVar10 - 1U) == 0)
       ) {
      puVar9 = (ulong *)puVar8[1];
      bVar34 = param_2 < puVar9;
      if (param_2 <= puVar9) goto LAB_0eac3a3b;
    }
    else {
      puStack_1f0 = (uint *)0xeac3a26;
      param_2 = (ulong *)FUN_0412c3f0();
      puVar9 = (ulong *)puVar8[1];
      bVar34 = param_2 < puVar9;
      if (param_2 <= puVar9) {
LAB_0eac3a3b:
        if (!bVar34) goto LAB_0eac3ebd;
        uVar31 = puVar8[3];
        if ((long)uVar31 < 0) goto LAB_0eac3de0;
        fVar35 = (float)(long)uVar31;
        goto LAB_0eac3df8;
      }
    }
  }
  puStack_1f0 = (uint *)0xeac39bd;
  func_0x0eac0260(puVar8,param_2);
LAB_0eac3ebd:
  puStack_1f0 = (uint *)0xeac3ed5;
  puStack_118 = param_3;
  func_0x0ed6d600(auStack_f8,*param_5);
  if (puStack_1c0 != (ulong *)0x0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    puStack_a0 = puVar8 + 2;
    puVar33 = (ulong *)0x0;
    puVar9 = puStack_1c0;
    puVar10 = puStack_178;
    puStack_d8 = param_5;
    do {
      if ((*(uint *)(auStack_f8._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_f8._8_4_ <= *(uint *)(auStack_f8._0_8_ + 0x2b0))) {
        return;
      }
      puVar11 = (uint *)*param_5;
      puStack_1f0 = (uint *)0xeac3fc0;
      func_0x0ed6d4a0(puVar11,puVar33);
      puStack_1f0 = (uint *)0xeac3fcf;
      (**(code **)(*puVar10 + 200))(puVar10,puVar33);
      puStack_1f0 = (uint *)0xeac3fd8;
      cVar5 = (**(code **)(*puVar10 + 0x18))(puVar10);
      if (cVar5 == '\x01') {
        puStack_1f0 = (uint *)0xeac3fe8;
        lVar13 = (**(code **)(*puVar10 + 0xa8))(puVar10);
        if (lVar13 == 2) goto LAB_0eac3ff2;
        uStack_100 = uStack_90;
        puStack_1f0 = (uint *)0xeac4215;
        func_0x0ed5ffe0(*param_5,8,&uStack_100);
        if ((uStack_100 & 0x80000000000000) != 0) {
          puStack_1f0 = (uint *)0xeac424e;
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8);
        }
        uStack_100 = 0;
      }
      else {
LAB_0eac3ff2:
        puStack_1f0 = (uint *)0xeac400a;
        cVar5 = (**(code **)(*puVar10 + 0xb8))(puVar10,&UNK_013aac9a,3);
        if (cVar5 == '\0') {
          uStack_108 = uStack_88;
          puStack_1f0 = (uint *)0xeac41a5;
          func_0x0ed5ffe0(*param_5,8,&uStack_108);
          if ((uStack_108 & 0x80000000000000) != 0) {
            puStack_1f0 = (uint *)0xeac41de;
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_108 = 0;
        }
        else {
          uStack_1d8 = (ulong *)0x0;
          puStack_1d0 = (ulong *)0x0;
          uStack_1c8 = 0;
          uStack_190 = puStack_118[5];
          puStack_1a8 = (undefined8 *)&UNK_048b1ea0;
          uStack_198 = 0xa24c74b7;
          pcStack_1a0 = (code *)0x0;
          cStack_194 = '\x03';
          auStack_1b8 = (undefined1  [8])&uStack_1d8;
          uStack_188 = 0;
          puStack_180 = (ulong *)&UNK_048b1e80;
          puStack_1f0 = (uint *)0xeac409a;
          func_0x0ed75bc0(&puStack_b0,puVar10,auStack_1b8,uStack_d0,&puStack_80);
          puStack_1f0 = (uint *)0xeac40a6;
          (**(code **)(*puVar10 + 0xd0))(puVar10);
          puStack_1f0 = (uint *)0xeac40be;
          cVar5 = (**(code **)(*puVar10 + 0xb8))(puVar10,&UNK_0138e8dd,5);
          if (cVar5 == '\0') {
            uStack_110 = uStack_98;
            puStack_1f0 = (uint *)0xeac4284;
            func_0x0ed5ffe0(*param_5,8,&uStack_110);
            if ((uStack_110 & 0x80000000000000) != 0) {
              puStack_1f0 = (uint *)0xeac42bd;
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8);
            }
            uStack_110 = 0;
          }
          else {
            puVar9 = (ulong *)((ulong)uStack_1d8 >> 1 & 0x7f);
            uVar31 = (long)&uStack_1d8 + 1;
            if (((ulong)uStack_1d8 & 1) != 0) {
              puVar9 = puStack_1d0;
              uVar31 = uStack_1c8;
            }
            puStack_1f0 = (uint *)0xeac40f2;
            uVar14 = func_0x04883620(&uStack_158,uVar31,puVar9);
            uVar31 = puVar8[1];
            if (uVar31 != 0) {
              uVar26 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
              uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
              uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar26 >> 0x38 < 2) {
                uVar16 = uVar31 - 1 & uVar14;
              }
              else {
                uVar16 = uVar14;
                if (uVar31 <= uVar14) {
                  if ((uVar14 | uVar31) >> 0x20 == 0) {
                    uVar16 = (uVar14 & 0xffffffff) % (uVar31 & 0xffffffff);
                  }
                  else {
                    uVar16 = uVar14 % uVar31;
                  }
                }
              }
              puVar24 = *(undefined8 **)(*puVar8 + uVar16 * 8);
              uStack_e0 = uVar16;
              if ((puVar24 != (undefined8 *)0x0) &&
                 (puVar15 = (ulong *)*puVar24, puVar15 != (ulong *)0x0)) {
                uStack_e8 = uStack_1c8;
                puVar9 = puStack_1d0;
                if (((ulong)uStack_1d8 & 1) == 0) {
                  uStack_e8 = (long)&uStack_1d8 + 1;
                  puVar9 = (ulong *)((ulong)uStack_1d8 >> 1 & 0x7f);
                }
                if ((byte)(uVar26 >> 0x38) < 2) {
                  uVar26 = uVar31 - 1;
                  uStack_a8 = uVar26;
                  do {
                    if (puVar15[1] == uVar14) {
                      bVar4 = (byte)puVar15[2];
                      if ((bVar4 & 1) == 0) {
                        puVar8 = (ulong *)(ulong)(bVar4 >> 1);
                      }
                      else {
                        puVar8 = (ulong *)puVar15[3];
                      }
                      if (puVar8 == puVar9) {
                        if ((bVar4 & 1) == 0) {
                          uVar26 = (long)puVar15 + 0x11;
                        }
                        else {
                          uVar26 = puVar15[4];
                        }
                        puStack_1f0 = (uint *)0xeac43cc;
                        iVar6 = func_0x0eee3000(uVar26,uStack_e8,puVar9);
                        uVar26 = uStack_a8;
                        uVar16 = uStack_e0;
                        puVar8 = puStack_1e0;
                        if (iVar6 == 0) goto LAB_0eac474e;
                      }
                    }
                    else {
                      puVar8 = puStack_1e0;
                      if ((puVar15[1] & uVar26) != uVar16) break;
                    }
                    puVar15 = (ulong *)*puVar15;
                    puVar8 = puStack_1e0;
                  } while (puVar15 != (ulong *)0x0);
                }
                else {
                  do {
                    uVar26 = puVar15[1];
                    if (uVar26 == uVar14) {
                      bVar4 = (byte)puVar15[2];
                      if ((bVar4 & 1) == 0) {
                        puVar8 = (ulong *)(ulong)(bVar4 >> 1);
                      }
                      else {
                        puVar8 = (ulong *)puVar15[3];
                      }
                      if (puVar8 == puVar9) {
                        if ((bVar4 & 1) == 0) {
                          uVar26 = (long)puVar15 + 0x11;
                        }
                        else {
                          uVar26 = puVar15[4];
                        }
                        puStack_1f0 = (uint *)0xeac4461;
                        iVar6 = func_0x0eee3000(uVar26,uStack_e8,puVar9);
                        uVar16 = uStack_e0;
                        puVar8 = puStack_1e0;
                        if (iVar6 == 0) goto LAB_0eac474e;
                      }
                    }
                    else {
                      if (uVar31 <= uVar26) {
                        if ((uVar26 | uVar31) >> 0x20 == 0) {
                          uVar26 = (uVar26 & 0xffffffff) % (uVar31 & 0xffffffff);
                        }
                        else {
                          uVar26 = uVar26 % uVar31;
                        }
                      }
                      puVar8 = puStack_1e0;
                      if (uVar26 != uVar16) break;
                    }
                    puVar15 = (ulong *)*puVar15;
                    puVar8 = puStack_1e0;
                  } while (puVar15 != (ulong *)0x0);
                }
              }
            }
            puStack_1f0 = (uint *)0xeac449d;
            puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
            if (puVar15 == (ulong *)0x0) {
              puStack_1f0 = (uint *)0xeac4995;
              func_0x0eec74c0(0x40,0);
            }
            *puVar15 = 0;
            puVar15[1] = uVar14;
            if (((ulong)uStack_1d8 & 1) == 0) {
              puVar15[4] = uStack_1c8;
              puVar15[2] = (ulong)uStack_1d8;
              puVar15[3] = (ulong)puStack_1d0;
            }
            else {
              puStack_1f0 = (uint *)0xeac44e4;
              func_0x0412e5e0(puVar15 + 2,uStack_1c8,puStack_1d0);
            }
            puVar15[5] = 0;
            puVar15[6] = 0;
            puVar15[7] = 0;
            if ((long)uVar31 < 0) {
              fVar36 = (float)uVar31;
              fVar35 = *(float *)(puVar8 + 4);
              if (uVar31 != 0) goto LAB_0eac455b;
LAB_0eac456c:
              uVar26 = 1;
              if (2 < uVar31) {
                uVar26 = (ulong)((uVar31 & uVar31 - 1) != 0);
              }
              uVar26 = uVar31 * 2 | uVar26;
              puStack_1f0 = (uint *)0xeac4592;
              fVar35 = (float)func_0x0eee3ab0((float)(puVar8[3] + 1) / fVar35);
              uVar31 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
              if (uVar31 < uVar26) {
                uVar31 = uVar26;
              }
              uVar26 = 2;
              if ((uVar31 == 1) || (uVar26 = uVar31, (uVar31 & uVar31 - 1) == 0)) {
                uVar31 = puStack_1e0[1];
                bVar34 = uVar26 < uVar31;
                if (uVar26 <= uVar31) goto LAB_0eac4606;
LAB_0eac45de:
                puStack_1f0 = (uint *)0xeac45eb;
                func_0x0eac0260(puStack_1e0,uVar26);
              }
              else {
                puStack_1f0 = (uint *)0xeac45f5;
                uVar26 = FUN_0412c3f0();
                uVar31 = puStack_1e0[1];
                bVar34 = uVar26 < uVar31;
                if (uVar31 < uVar26) goto LAB_0eac45de;
LAB_0eac4606:
                if (bVar34) {
                  puStack_1f0 = (uint *)0xeac464b;
                  fVar35 = (float)func_0x0eee3ab0((float)puStack_1e0[3] /
                                                  *(float *)(puStack_1e0 + 4));
                  uVar16 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
                  if ((uVar31 < 3) ||
                     (uVar27 = uVar31 - (uVar31 >> 1 & 0x5555555555555555),
                     uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333),
                     1 < (byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    puStack_1f0 = (uint *)0xeac46f5;
                    uVar16 = FUN_0412c3f0(uVar16);
                  }
                  else if (1 < uVar16) {
                    lVar13 = 0x3f;
                    if (uVar16 - 1 != 0) {
                      for (; uVar16 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                      }
                    }
                    uVar16 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
                  }
                  if (uVar26 <= uVar16) {
                    uVar26 = uVar16;
                  }
                  if (uVar26 < uVar31) goto LAB_0eac45de;
                }
              }
              uVar31 = puStack_1e0[1];
              puVar8 = puStack_1e0;
              if ((uVar31 & uVar31 - 1) == 0) {
                uVar26 = uVar14 & uVar31 - 1;
                goto LAB_0eac472b;
              }
              uVar26 = uVar14;
              if (uVar14 < uVar31) goto LAB_0eac472b;
              if ((uVar14 | uVar31) >> 0x20 != 0) {
                uVar26 = uVar14 % uVar31;
                uVar14 = *puStack_1e0;
                puVar9 = *(ulong **)(uVar14 + uVar26 * 8);
                goto joined_r0x0eac48fd;
              }
              uVar26 = (uVar14 & 0xffffffff) % (uVar31 & 0xffffffff);
              uVar14 = *puStack_1e0;
              puVar9 = *(ulong **)(uVar14 + uVar26 * 8);
              if (puVar9 == (ulong *)0x0) goto LAB_0eac4903;
LAB_0eac4741:
              *puVar15 = *puVar9;
              *puVar9 = (ulong)puVar15;
            }
            else {
              fVar36 = (float)(long)uVar31;
              fVar35 = *(float *)(puVar8 + 4);
              if (uVar31 == 0) goto LAB_0eac456c;
LAB_0eac455b:
              uVar26 = uStack_e0;
              if (fVar36 * fVar35 < (float)(puVar8[3] + 1)) goto LAB_0eac456c;
LAB_0eac472b:
              uVar14 = *puVar8;
              puVar9 = *(ulong **)(uVar14 + uVar26 * 8);
joined_r0x0eac48fd:
              if (puVar9 != (ulong *)0x0) goto LAB_0eac4741;
LAB_0eac4903:
              *puVar15 = *puStack_a0;
              *puStack_a0 = (ulong)puVar15;
              *(ulong **)(uVar14 + uVar26 * 8) = puStack_a0;
              if (*puVar15 != 0) {
                uVar26 = *(ulong *)(*puVar15 + 8);
                if ((uVar31 & uVar31 - 1) == 0) {
                  *(ulong **)(uVar14 + (uVar26 & uVar31 - 1) * 8) = puVar15;
                }
                else {
                  if (uVar31 <= uVar26) {
                    if ((uVar26 | uVar31) >> 0x20 == 0) {
                      *(ulong **)(uVar14 + ((uVar26 & 0xffffffff) % (uVar31 & 0xffffffff)) * 8) =
                           puVar15;
                      goto LAB_0eac474a;
                    }
                    uVar26 = uVar26 % uVar31;
                  }
                  *(ulong **)(uVar14 + uVar26 * 8) = puVar15;
                }
              }
            }
LAB_0eac474a:
            puVar8[3] = puVar8[3] + 1;
LAB_0eac474e:
            puVar10 = puStack_178;
            puVar9 = puStack_1c0;
            uStack_158 = puVar15 + 5;
            uStack_130 = puStack_118[5];
            puStack_148 = &UNK_0ea265b0;
            iStack_138 = -0x5d3fbd32;
            pcStack_140 = (code *)0x0;
            uStack_134 = 3;
            uStack_128 = 0;
            puStack_120 = &UNK_0ea264d0;
            puStack_1f0 = (uint *)0xeac47e4;
            func_0x0ed75bc0(&puStack_b8,puStack_178,&uStack_158,uStack_d0,&puStack_58);
            param_5 = puStack_d8;
            puStack_1f0 = (uint *)0xeac47f8;
            (**(code **)(*puVar10 + 0xd0))(puVar10);
            if (pcStack_140 != (code *)0x0) {
              puStack_1f0 = (uint *)0xeac480f;
              (*pcStack_140)(&uStack_158);
            }
          }
          if (pcStack_1a0 != (code *)0x0) {
            puStack_1f0 = (uint *)0xeac4820;
            (*pcStack_1a0)(auStack_1b8);
          }
          if (((ulong)uStack_1d8 & 1) != 0) {
            puStack_1f0 = (uint *)0xeac483a;
            func_0x0412a280(uStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
          }
        }
      }
      puStack_1f0 = (uint *)0xeac484c;
      (**(code **)(*puVar10 + 0xd0))(puVar10);
      lVar13 = *(long *)(puVar11 + 2);
      uVar22 = *(uint *)(lVar13 + 0x1c + (ulong)*puVar11 * 0x20);
      *puVar11 = uVar22;
      if (puVar11[0x48] == 0) {
        uVar28 = puVar11[4];
LAB_0eac48a5:
        lVar30 = lVar13 + (ulong)uVar28 * 0x20;
        uVar31 = (ulong)*(uint *)(lVar13 + -0x10 + (ulong)uVar28 * 0x20);
        if (uVar31 != 0xffffffff) {
          puStack_1f0 = (uint *)0xeac48d4;
          (**(code **)(&UNK_0f4e40d0 + uVar31 * 8))(auStack_1b8,lVar30 + -0x18);
          uVar28 = puVar11[4];
        }
        *(undefined4 *)(lVar30 + -0x10) = 0xffffffff;
        puVar11[4] = uVar28 - 1;
        puVar9 = puStack_1c0;
      }
      else if ((*(uint *)(*(long *)(puVar11 + 0x46) + 0x18 + (ulong)(puVar11[0x48] - 1) * 0x30) !=
                uVar22) && (uVar28 = puVar11[4], uVar22 == uVar28 - 1)) goto LAB_0eac48a5;
      puVar33 = (ulong *)(ulong)((int)puVar33 + 1);
    } while (puVar33 < puVar9);
  }
  return;
}


