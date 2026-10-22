/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdfa0df0 (ELF vaddr 0xdea0df0)
 * Label: caller-of-callee
 * Body:  [[0dfa0df0, 0dfa14a0] [0dfa14b0, 0dfa1f94] [0dfa1fa0, 0dfa200e] [0dfa2010, 0dfa2193] [0dfa21a0, 0dfa2254] [0dfa2260, 0dfa272b] [0dfa2730, 0dfa289e] [0dfa2ab0, 0dfa2adc] [0dfa2b16, 0dfa2b44]]
 * Ghidra: FUN_0dfa0df0
 */


/* WARNING: Removing unreachable block (ram,0x0dfa181b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dfa0df0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  uint *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long *plVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long *unaff_R15;
  bool bVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  long *plStack_1e8;
  undefined1 uStack_1d9;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  code *pcStack_1a0;
  undefined4 uStack_198;
  char cStack_194;
  ulong uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  int iStack_148;
  undefined1 uStack_144;
  long lStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long *plStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long *plStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  
  pcVar8 = (code *)param_3[7];
  uStack_c8 = param_4;
  if (pcVar8 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0df997f0;
    }
    param_3[2] = (long)FUN_0df99990;
    *(undefined4 *)(param_3 + 4) = 0x8a65180f;
    param_3[3] = (long)&UNK_0df9a7d0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x28);
      unaff_R15 = param_5;
    }
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    *(undefined4 *)(plVar9 + 4) = 0x3f800000;
    *param_3 = (long)plVar9;
    pcVar8 = (code *)&UNK_0df997f0;
    param_3[7] = (long)&UNK_0df997f0;
    if (bVar28) {
      lVar14 = param_3[6];
    }
    else {
      lVar14 = 0;
    }
    param_3[6] = lVar14;
    cVar6 = '\x01';
    plStack_1e8 = plVar9;
LAB_0dfa0f17:
    puStack_a8 = &UNK_0ef44b00;
    if (plStack_1e8 == (long *)0x0) goto LAB_0dfa0f1e;
  }
  else {
    cVar6 = *(char *)((long)param_3 + 0x24);
    plVar9 = (long *)*param_3;
    plStack_1e8 = plVar9;
    if (cVar6 == '\x02') {
      plStack_1e8 = param_3;
    }
    if ((int)param_3[4] == -0x759ae7f1) goto LAB_0dfa0f17;
LAB_0dfa0f1e:
    puStack_a8 = &UNK_0ef44b00;
    lVar14 = param_3[5];
    lVar10 = param_3[6];
    if (lVar10 == 0) {
      (*pcVar8)(0,param_3,0);
      lVar10 = param_3[6];
      cVar6 = *(char *)((long)param_3 + 0x24);
      plVar9 = (long *)*param_3;
    }
    if (cVar6 == '\x02') {
      plVar9 = param_3;
    }
    plStack_1e8 = (long *)func_0x0488e200(lVar14,lVar10,0x8a65180f,plVar9);
  }
  lStack_58 = *param_5;
  lStack_50 = param_5[1];
  plVar9 = (long *)param_5[2];
  lStack_80 = lStack_58;
  lStack_78 = lStack_50;
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0);
    lStack_58 = *param_5;
    lStack_50 = param_5[1];
    plVar9 = (long *)param_5[2];
  }
  plVar25 = param_5 + 3;
  uStack_68 = (undefined4)param_5[3];
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_b0 = &UNK_0f4a81f0;
  if (plVar9 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar9 + 0x30))(plVar9,1);
  }
  uStack_40 = (undefined4)*plVar25;
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  if (bVar5 == 1) {
    plStack_110 = param_3;
    param_3 = (long *)(**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (plVar9 = (long *)(**(code **)(*(long *)param_5[2] + 0x10))(), plVar9 < param_3)) {
      uStack_b8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_b8);
      if ((uStack_b8 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_128 = param_5;
    func_0x0ed6d600(&uStack_1d8,*param_5);
    plStack_170 = param_2;
    plVar9 = uStack_1d8;
    do {
      if (param_3 == (long *)0x0) {
        return;
      }
      uVar24 = (uint)uStack_1d0;
      if ((uint)uStack_1d0 <= *(uint *)(plVar9 + 0x56) && *(uint *)(plVar9 + 0x56) != 0xffffffff) {
        return;
      }
      uStack_1d8 = plVar9;
      auVar31 = (**(code **)(*param_2 + 0xc0))(param_2);
      puVar26 = puStack_70;
      auStack_f0 = auVar31;
      if (puStack_70 != (undefined8 *)0x0) {
        uVar27 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (uVar27 == 0) {
          func_0x048b0de0(&uStack_168,&uStack_1d9);
          _DAT_0f54fd90 = (undefined4)uStack_168;
          uRam000000000f54fd94 = uStack_168._4_4_;
          uVar2 = (undefined4)uStack_160;
          uVar3 = uStack_160._4_4_;
          uStack_168 = (long *)0x0;
          uStack_160 = (long *)0x0;
          plVar9 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar2;
          uRam000000000f54fd9c = uVar3;
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar25 = plVar9 + 1;
            lVar14 = *plVar25;
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              func_0x0412c2d0(plVar9);
            }
          }
          plVar9 = uStack_160;
          if (uStack_160 != (long *)0x0) {
            LOCK();
            plVar25 = uStack_160 + 1;
            lVar14 = *plVar25;
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*uStack_160 + 0x10))(uStack_160);
              func_0x0412c2d0(plVar9);
            }
          }
          uVar27 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_1a8 = (undefined8 *)&UNK_05ea5bd0;
        uStack_198 = 0x989eedf9;
        pcStack_1a0 = (code *)0x0;
        cStack_194 = '\x04';
        auStack_1b8 = (undefined1  [8])auStack_f0;
        uStack_188 = 0;
        plStack_180 = (long *)&UNK_05ea5bb0;
        uStack_190 = uVar27;
        (**(code **)*puVar26)(puVar26,auStack_1b8,lStack_80);
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(auStack_1b8);
        }
        plVar9 = uStack_1d8;
        uVar24 = (uint)uStack_1d0;
      }
      uVar4 = auStack_f0._8_8_;
      uVar17 = auStack_f0._0_8_;
      if ((*(uint *)(plVar9 + 0x56) == 0xffffffff) || (*(uint *)(plVar9 + 0x56) < uVar24)) {
        lVar14 = *plStack_128;
        uStack_118 = 0;
        if (auStack_f0._0_8_ == 0) {
          uStack_118 = (auStack_f0._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar10 = auStack_f0._8_8_ + 9;
          puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
          if (lVar10 != 0 && puVar11 == (ulong *)0x0) {
            func_0x0eec74c0(lVar10,8);
          }
          *puVar11 = uVar4;
          func_0x0eee2f00(puVar11 + 1,uVar17,uVar4);
          *(undefined1 *)((long)(puVar11 + 1) + uVar4) = 0;
          uStack_118 = (ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar12 = (uint *)func_0x0ed6d180(lVar14,&uStack_118,0);
        if ((uStack_118 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
        }
        uVar4 = auStack_f0._8_8_;
        uVar17 = auStack_f0._0_8_;
        uStack_118 = 0;
        if ((long *)0xfffffffffffffff7 < (ulong)auStack_f0._8_8_) {
          func_0x04882e30();
          goto LAB_0dfa284b;
        }
        if ((ulong)auStack_f0._8_8_ < (long *)0x17) {
          uStack_168 = (long *)CONCAT71(uStack_168._1_7_,auStack_f0[8] * '\x02');
          puVar13 = (undefined *)((long)&uStack_168 + 1);
          if ((long *)auStack_f0._8_8_ != (long *)0x0) goto LAB_0dfa1504;
        }
        else {
          uVar27 = (auStack_f0._8_8_ | 7) + 1;
          if ((auStack_f0._8_8_ | 7) == 0x17) {
            uVar27 = 0x1a;
          }
          puVar13 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27);
          if (puVar13 == (undefined *)0x0) {
            func_0x0eec74c0(uVar27,0);
          }
          uStack_168 = (long *)(uVar27 | 1);
          uStack_160 = (long *)uVar4;
          puStack_158 = puVar13;
LAB_0dfa1504:
          func_0x0eee2ee0(puVar13,uVar17,uVar4);
        }
        puVar13[uVar4] = 0;
        uStack_1b0 = 0;
        puStack_1a8 = (undefined8 *)0x0;
        pcStack_1a0 = (code *)0x0;
        uStack_190 = uStack_190 & 0xffffffff00000000;
        lVar14 = func_0x0dfa85f0(plStack_1e8,&uStack_168,&uStack_168,auStack_1b8);
        if ((uStack_190 & 0xffffffff) != 0xffffffff) {
          (**(code **)(&UNK_0f4a8018 + (uStack_190 & 0xffffffff) * 8))(&uStack_1d9,&uStack_1b0);
        }
        if (((ulong)uStack_168 & 1) != 0) {
          func_0x0412a280(puStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
        }
        auStack_1b8 = (undefined1  [8])(lVar14 + 0x28);
        uStack_190 = plStack_110[5];
        puStack_1a8 = (undefined8 *)&UNK_0df9d010;
        uStack_198 = 0xcb1b0905;
        pcStack_1a0 = (code *)0x0;
        cStack_194 = '\x03';
        uStack_188 = 0;
        plStack_180 = (long *)&UNK_0df9cf30;
        func_0x0ed75bc0(&puStack_b0,plStack_170,auStack_1b8,uStack_c8,&lStack_58);
        if (pcStack_1a0 != (code *)0x0) {
          (*pcStack_1a0)(auStack_1b8);
        }
        lVar14 = *(long *)(puVar12 + 2);
        uVar24 = *(uint *)(lVar14 + 0x1c + (ulong)*puVar12 * 0x20);
        *puVar12 = uVar24;
        if (puVar12[0x48] == 0) {
          uVar18 = puVar12[4];
LAB_0dfa166b:
          lVar10 = lVar14 + (ulong)uVar18 * 0x20;
          uVar27 = (ulong)*(uint *)(lVar14 + -0x10 + (ulong)uVar18 * 0x20);
          if (uVar27 != 0xffffffff) {
            (**(code **)(&UNK_0f4e40d0 + uVar27 * 8))(auStack_1b8,lVar10 + -0x18);
            uVar18 = puVar12[4];
          }
          *(undefined4 *)(lVar10 + -0x10) = 0xffffffff;
          puVar12[4] = uVar18 - 1;
        }
        else if ((*(uint *)(*(long *)(puVar12 + 0x46) + 0x18 + (ulong)(puVar12[0x48] - 1) * 0x30) !=
                  uVar24) && (uVar18 = puVar12[4], uVar24 == uVar18 - 1)) goto LAB_0dfa166b;
        param_2 = plStack_170;
        (**(code **)(*plStack_170 + 0xd0))(plStack_170);
      }
      param_3 = (long *)((long)param_3 + -1);
      plVar9 = uStack_1d8;
    } while( true );
  }
  if ((bVar5 & 2) == 0) {
    lVar14 = param_3[5];
    lVar10 = func_0x048b2190(lVar14);
    plVar9 = *(long **)(lVar10 + 0x78);
    if (plVar9 == (long *)0x0) {
LAB_0dfa1154:
      if (*(code **)(lVar10 + 0x30) == (code *)0x0) {
        puStack_158 = &UNK_0488e0b0;
        iStack_148 = 0x48b5725f;
        pcStack_150 = (code *)0x0;
        uStack_144 = 0;
        uStack_168 = (long *)0x0;
        uStack_138 = 0;
        puStack_130 = (undefined *)0x0;
        lStack_140 = lVar14;
        goto LAB_0dfa188f;
      }
      (**(code **)(lVar10 + 0x30))(&uStack_168,lVar14);
      if (iStack_148 != -0x5db38b49) goto LAB_0dfa188f;
LAB_0dfa18e2:
      plVar9 = (long *)&UNK_0133e465;
      uVar27 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar21 = *plVar9;
      if (lVar21 == 0 || lVar21 == plVar9[1]) goto LAB_0dfa1154;
      lVar19 = 0;
      bVar28 = false;
      do {
        lVar20 = lVar21;
        if (lVar19 != 0) {
          lVar20 = lVar19;
        }
        bVar1 = lVar19 != 0;
        if (*(long *)(lVar21 + 8) != 0) {
          lVar20 = lVar19;
          bVar1 = bVar28;
        }
        lVar21 = lVar21 + 0x20;
        lVar19 = lVar20;
        bVar28 = bVar1;
      } while (lVar21 != plVar9[1]);
      if (bVar1 || lVar20 == 0) goto LAB_0dfa1154;
      (**(code **)(lVar20 + 0x18))(&uStack_168,lVar14,0);
      if (iStack_148 == -0x5db38b49) goto LAB_0dfa18e2;
LAB_0dfa188f:
      func_0x0488e290(auStack_1b8,&uStack_168);
      plVar25 = plStack_180;
      if ((plStack_180 != (long *)0x0) && ((byte)(cStack_194 - 1U) < 2)) {
        func_0x048b0900(&uStack_168,auStack_1b8);
      }
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(auStack_1b8);
      }
      if (plVar25 != (long *)0x0) goto LAB_0dfa18e2;
      plVar9 = (long *)&UNK_01411d3a;
      uVar27 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar27 < 0xfffffffffffffff8) {
      if (uVar27 < 0x17) {
        uVar15 = (ulong)uStack_1d8 >> 8;
        uStack_1d8 = (long *)CONCAT71((int7)uVar15,(char)uVar27 * '\x02');
        lVar14 = (long)&uStack_1d8 + 1;
        if (uVar27 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_1d8._1_1_ = 0;
          goto joined_r0x0dfa1994;
        }
      }
      else {
        uVar15 = 0x1a;
        if ((uVar27 | 7) != 0x17) {
          uVar15 = (uVar27 | 7) + 1;
        }
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        param_3 = (long *)(uVar15 | 1);
        uStack_1d8 = param_3;
        uStack_1d0 = uVar27;
        lStack_1c8 = lVar14;
      }
      func_0x0eee2f00(lVar14,plVar9,uVar27);
      *(undefined1 *)(lVar14 + uVar27) = 0;
joined_r0x0dfa1994:
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(&uStack_168);
      }
      plVar9 = uStack_1d8;
      uVar27 = uStack_1d0;
      if (((ulong)uStack_1d8 & 1) == 0) {
        uVar27 = (ulong)uStack_1d8 >> 1 & 0x7f;
      }
      uVar15 = uVar27 + 0xc;
      if (uVar15 < 0xfffffffffffffff8) {
        lVar14 = *param_5;
        if (uVar15 < 0x17) {
          uStack_1b0 = 0;
          puStack_1a8 = (undefined8 *)0x0;
          auStack_1b8._1_7_ = 0;
          auStack_1b8[0] = (char)uVar15 * '\x02';
        }
        else {
          uVar22 = 0x1a;
          if ((uVar15 | 7) != 0x17) {
            uVar22 = (uVar15 | 7) + 1;
          }
          puStack_1a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
          if (puStack_1a8 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar22,0);
          }
          auStack_1b8 = (undefined1  [8])(uVar22 | 1);
          uStack_1b0 = uVar15;
        }
        lVar10 = (long)puStack_1a8 + 0xc;
        bVar28 = ((ulong)auStack_1b8 & 1) == 0;
        puVar26 = puStack_1a8;
        if (bVar28) {
          puVar26 = (undefined8 *)(auStack_1b8 + 1);
        }
        *puVar26 = 0x6465746365707865;
        *(undefined4 *)(puVar26 + 1) = 0x206e6120;
        lVar21 = (long)&uStack_1b0 + 5;
        if (!bVar28) {
          lVar21 = lVar10;
        }
        if (uVar27 != 0) {
          lVar10 = lStack_1c8;
          if (((ulong)plVar9 & 1) == 0) {
            lVar10 = (long)&uStack_1d8 + 1;
          }
          func_0x0eee2ee0(lVar21,lVar10,uVar27);
        }
        *(undefined1 *)(lVar21 + uVar27) = 0;
        uVar27 = (ulong)auStack_1b8 >> 1 & 0x7f;
        puVar26 = (undefined8 *)(auStack_1b8 + 1);
        if (((ulong)auStack_1b8 & 1) != 0) {
          uVar27 = uStack_1b0;
          puVar26 = puStack_1a8;
        }
        uStack_120 = 0;
        if (puVar26 == (undefined8 *)0x0) {
          uStack_120 = (ulong)((uint)uVar27 & 0x7f) << 0x30;
        }
        else {
          lVar10 = uVar27 + 9;
          puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
          if (lVar10 != 0 && puVar11 == (ulong *)0x0) {
            func_0x0eec74c0(lVar10,8);
          }
          *puVar11 = uVar27;
          func_0x0eee2f00(puVar11 + 1,puVar26,uVar27);
          *(undefined1 *)((long)puVar11 + uVar27 + 8) = 0;
          uStack_120 = (ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar14,8,&uStack_120);
        if ((uStack_120 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
        }
        uStack_120 = 0;
        if (((ulong)auStack_1b8 & 1) != 0) {
          func_0x0412a280(puStack_1a8,(ulong)auStack_1b8 & 0xfffffffffffffffe);
        }
        if (((ulong)plVar9 & 1) == 0) {
          return;
        }
        func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
        return;
      }
LAB_0dfa284b:
      uVar17 = func_0x04882e30();
      uVar17 = func_0x04882e20(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      FUN_0ee386e0(&uStack_c0);
      uVar17 = func_0x0eee2d70(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      func_0x0df978c0(&uStack_168);
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(auStack_1b8);
      }
      if (((ulong)uStack_1d8 & 1) != 0) {
        func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_170 + 0xd0))();
      func_0x0ed6d560(param_3);
      uVar17 = func_0x0eee2d70(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      func_0x04882e20(uVar17);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar27 = func_0x04882e30();
    param_2 = param_5;
    param_5 = plVar9;
LAB_0dfa1bf7:
    fVar29 = (float)uVar27;
LAB_0dfa1c0f:
    fVar29 = (float)func_0x0eee3ab0(fVar29 / *(float *)(plStack_1e8 + 4));
    plVar9 = (long *)((long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29);
    if ((plVar25 < (long *)0x3) ||
       (uVar27 = (long)plVar25 - ((ulong)plVar25 >> 1 & 0x5555555555555555),
       uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333),
       1 < (byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar9 = (long *)func_0x0412c3f0(plVar9);
    }
    else if ((long *)0x1 < plVar9) {
      lVar14 = 0x3f;
      if ((undefined *)((long)plVar9 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar9 + -1) >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      plVar9 = (long *)(1L << (-((byte)lVar14 ^ 0x3f) & 0x3f));
    }
    if (unaff_R15 <= plVar9) {
      unaff_R15 = plVar9;
    }
    if (plVar25 <= unaff_R15) goto LAB_0dfa1cd7;
  }
  else {
    uVar27 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar15 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar15 < uVar27)) {
      uStack_c0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_c0);
      if ((uStack_c0 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
      return;
    }
    fVar29 = (float)func_0x0eee3ab0((float)uVar27 / *(float *)(plStack_1e8 + 4));
    plVar9 = (long *)((long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29);
    unaff_R15 = (long *)0x2;
    if ((plVar9 != (long *)0x1) &&
       (unaff_R15 = plVar9, ((ulong)plVar9 & (ulong)((long)plVar9 + -1)) != 0)) {
      unaff_R15 = (long *)func_0x0412c3f0();
    }
    plVar25 = (long *)plStack_1e8[1];
    uStack_d0 = uVar27;
    if (unaff_R15 <= plVar25) {
      if (plVar25 <= unaff_R15) goto LAB_0dfa1cd7;
      uVar27 = plStack_1e8[3];
      if ((long)uVar27 < 0) goto LAB_0dfa1bf7;
      fVar29 = (float)(long)uVar27;
      goto LAB_0dfa1c0f;
    }
  }
  func_0x0df97940(plStack_1e8,unaff_R15);
LAB_0dfa1cd7:
  plStack_110 = param_3;
  func_0x0ed6d600(auStack_f0,*param_5);
  if (uStack_d0 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    plStack_a0 = plStack_1e8 + 2;
    uVar15 = 0;
    uVar27 = uStack_d0;
    plStack_170 = param_2;
    do {
      if ((*(uint *)(auStack_f0._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_f0._8_4_ <= *(uint *)(auStack_f0._0_8_ + 0x2b0))) {
        return;
      }
      puVar12 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar12,uVar15);
      (**(code **)(*param_2 + 200))(param_2,uVar15);
      cVar6 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar6 == '\x01') && (lVar14 = (**(code **)(*param_2 + 0xa8))(param_2), lVar14 != 2)) {
        uStack_f8 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_f8);
        if ((uStack_f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_f8 & 0xff00ffffffffffff) - 8);
        }
        uStack_f8 = 0;
      }
      else {
        cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar6 == '\0') {
          uStack_100 = uStack_88;
          func_0x0ed5ffe0(*param_5,8,&uStack_100);
          if ((uStack_100 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_100 = 0;
        }
        else {
          uStack_1d8 = (long *)0x0;
          uStack_1d0 = 0;
          lStack_1c8 = 0;
          uStack_190 = plStack_110[5];
          puStack_1a8 = (undefined8 *)&UNK_048b1ea0;
          uStack_198 = 0xa24c74b7;
          pcStack_1a0 = (code *)0x0;
          cStack_194 = '\x03';
          auStack_1b8 = (undefined1  [8])&uStack_1d8;
          uStack_188 = 0;
          plStack_180 = (long *)&UNK_048b1e80;
          func_0x0ed75bc0(&puStack_a8,param_2,auStack_1b8,uStack_c8,&lStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar6 == '\0') {
            uStack_108 = uStack_98;
            func_0x0ed5ffe0(*param_5,8,&uStack_108);
            if ((uStack_108 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
            }
            uStack_108 = 0;
          }
          else {
            uVar27 = (ulong)uStack_1d8 >> 1 & 0x7f;
            lVar14 = (long)&uStack_1d8 + 1;
            if (((ulong)uStack_1d8 & 1) != 0) {
              uVar27 = uStack_1d0;
              lVar14 = lStack_1c8;
            }
            uStack_1c0 = func_0x04883620(&uStack_168,lVar14,uVar27);
            uVar27 = plStack_1e8[1];
            if (uVar27 != 0) {
              uVar22 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
              uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
              uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar22 >> 0x38 < 2) {
                uVar16 = uVar27 - 1 & uStack_1c0;
              }
              else {
                uVar16 = uStack_1c0;
                if (uVar27 <= uStack_1c0) {
                  if ((uStack_1c0 | uVar27) >> 0x20 == 0) {
                    uVar16 = (uStack_1c0 & 0xffffffff) % (uVar27 & 0xffffffff);
                  }
                  else {
                    uVar16 = uStack_1c0 % uVar27;
                  }
                }
              }
              puVar26 = *(undefined8 **)(*plStack_1e8 + uVar16 * 8);
              uStack_d8 = uVar16;
              if ((puVar26 != (undefined8 *)0x0) &&
                 (plVar9 = (long *)*puVar26, plVar9 != (long *)0x0)) {
                lStack_e0 = lStack_1c8;
                uVar23 = uStack_1d0;
                if (((ulong)uStack_1d8 & 1) == 0) {
                  lStack_e0 = (long)&uStack_1d8 + 1;
                  uVar23 = (ulong)uStack_1d8 >> 1 & 0x7f;
                }
                if ((byte)(uVar22 >> 0x38) < 2) {
                  plStack_128 = param_5;
                  do {
                    if (plVar9[1] == uStack_1c0) {
                      bVar5 = *(byte *)(plVar9 + 2);
                      if ((bVar5 & 1) == 0) {
                        uVar22 = (ulong)(bVar5 >> 1);
                      }
                      else {
                        uVar22 = plVar9[3];
                      }
                      if (uVar22 == uVar23) {
                        if ((bVar5 & 1) == 0) {
                          lVar14 = (long)plVar9 + 0x11;
                        }
                        else {
                          lVar14 = plVar9[4];
                        }
                        iVar7 = func_0x0eee3000(lVar14,lStack_e0,uVar23);
                        uVar16 = uStack_d8;
                        param_5 = plStack_128;
                        if (iVar7 == 0) goto LAB_0dfa25d6;
                      }
                    }
                    else {
                      param_5 = plStack_128;
                      if ((plVar9[1] & uVar27 - 1) != uVar16) break;
                    }
                    plVar9 = (long *)*plVar9;
                    param_5 = plStack_128;
                  } while (plVar9 != (long *)0x0);
                }
                else {
                  do {
                    uVar22 = plVar9[1];
                    if (uVar22 == uStack_1c0) {
                      bVar5 = *(byte *)(plVar9 + 2);
                      if ((bVar5 & 1) == 0) {
                        uVar22 = (ulong)(bVar5 >> 1);
                      }
                      else {
                        uVar22 = plVar9[3];
                      }
                      if (uVar22 == uVar23) {
                        if ((bVar5 & 1) == 0) {
                          lVar14 = (long)plVar9 + 0x11;
                        }
                        else {
                          lVar14 = plVar9[4];
                        }
                        iVar7 = func_0x0eee3000(lVar14,lStack_e0,uVar23);
                        uVar16 = uStack_d8;
                        if (iVar7 == 0) goto LAB_0dfa25d6;
                      }
                    }
                    else {
                      if (uVar27 <= uVar22) {
                        if ((uVar22 | uVar27) >> 0x20 == 0) {
                          uVar22 = (uVar22 & 0xffffffff) % (uVar27 & 0xffffffff);
                        }
                        else {
                          uVar22 = uVar22 % uVar27;
                        }
                      }
                      if (uVar22 != uVar16) break;
                    }
                    plVar9 = (long *)*plVar9;
                  } while (plVar9 != (long *)0x0);
                }
              }
            }
            plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
            if (plVar9 == (long *)0x0) {
              func_0x0eec74c0(0x58,0);
            }
            uStack_160 = plStack_1e8;
            puStack_158 = (undefined *)0x0;
            *plVar9 = 0;
            plVar9[1] = uStack_1c0;
            uStack_168 = plVar9;
            if (((ulong)uStack_1d8 & 1) == 0) {
              plVar9[4] = lStack_1c8;
              plVar9[2] = (long)uStack_1d8;
              plVar9[3] = uStack_1d0;
            }
            else {
              func_0x0412e5e0(plVar9 + 2,lStack_1c8,uStack_1d0);
            }
            plVar9[6] = 0;
            plVar9[7] = 0;
            plVar9[8] = 0;
            *(undefined4 *)(plVar9 + 10) = 0;
            puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
            if ((long)uVar27 < 0) {
              fVar30 = (float)uVar27;
              fVar29 = *(float *)(plStack_1e8 + 4);
              if (uVar27 != 0) goto LAB_0dfa23d0;
LAB_0dfa23dd:
              uVar22 = 1;
              if (2 < uVar27) {
                uVar22 = (ulong)((uVar27 & uVar27 - 1) != 0);
              }
              uVar22 = uVar27 * 2 | uVar22;
              fVar29 = (float)func_0x0eee3ab0((float)(plStack_1e8[3] + 1) / fVar29);
              uVar27 = (long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29;
              if (uVar27 < uVar22) {
                uVar27 = uVar22;
              }
              uVar22 = 2;
              if ((uVar27 == 1) || (uVar22 = uVar27, (uVar27 & uVar27 - 1) == 0)) {
                uVar27 = plStack_1e8[1];
                bVar28 = uVar22 < uVar27;
                if (uVar22 <= uVar27) goto LAB_0dfa2474;
LAB_0dfa244e:
                func_0x0df97940(plStack_1e8,uVar22);
              }
              else {
                uVar22 = func_0x0412c3f0();
                uVar27 = plStack_1e8[1];
                bVar28 = uVar22 < uVar27;
                if (uVar27 < uVar22) goto LAB_0dfa244e;
LAB_0dfa2474:
                if (bVar28) {
                  fVar29 = (float)func_0x0eee3ab0((float)(ulong)plStack_1e8[3] /
                                                  *(float *)(plStack_1e8 + 4));
                  uVar16 = (long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29;
                  if ((uVar27 < 3) ||
                     (uVar23 = uVar27 - (uVar27 >> 1 & 0x5555555555555555),
                     uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333),
                     1 < (byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar16 = func_0x0412c3f0(uVar16);
                  }
                  else if (1 < uVar16) {
                    lVar14 = 0x3f;
                    if (uVar16 - 1 != 0) {
                      for (; uVar16 - 1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    uVar16 = 1L << (-((byte)lVar14 ^ 0x3f) & 0x3f);
                  }
                  if (uVar22 <= uVar16) {
                    uVar22 = uVar16;
                  }
                  if (uVar22 < uVar27) goto LAB_0dfa244e;
                }
              }
              uVar27 = plStack_1e8[1];
              if ((uVar27 & uVar27 - 1) == 0) {
                uVar22 = uStack_1c0 & uVar27 - 1;
              }
              else {
                uVar22 = uStack_1c0;
                if (uVar27 <= uStack_1c0) {
                  if ((uStack_1c0 | uVar27) >> 0x20 == 0) {
                    uVar22 = (uStack_1c0 & 0xffffffff) % (uVar27 & 0xffffffff);
                  }
                  else {
                    uVar22 = uStack_1c0 % uVar27;
                  }
                }
              }
            }
            else {
              fVar30 = (float)(long)uVar27;
              fVar29 = *(float *)(plStack_1e8 + 4);
              if (uVar27 == 0) goto LAB_0dfa23dd;
LAB_0dfa23d0:
              uVar22 = uStack_d8;
              if (fVar30 * fVar29 < (float)(plStack_1e8[3] + 1)) goto LAB_0dfa23dd;
            }
            lVar14 = *plStack_1e8;
            plVar25 = *(long **)(lVar14 + uVar22 * 8);
            if (plVar25 == (long *)0x0) {
              *plVar9 = *plStack_a0;
              *plStack_a0 = (long)plVar9;
              *(long **)(lVar14 + uVar22 * 8) = plStack_a0;
              if (*plVar9 != 0) {
                uVar22 = *(ulong *)(*plVar9 + 8);
                if ((uVar27 & uVar27 - 1) == 0) {
                  *(long **)(lVar14 + (uVar22 & uVar27 - 1) * 8) = plVar9;
                }
                else {
                  if (uVar27 <= uVar22) {
                    if ((uVar22 | uVar27) >> 0x20 == 0) {
                      *(long **)(lVar14 + ((uVar22 & 0xffffffff) % (uVar27 & 0xffffffff)) * 8) =
                           plVar9;
                      goto LAB_0dfa25ce;
                    }
                    uVar22 = uVar22 % uVar27;
                  }
                  *(long **)(lVar14 + uVar22 * 8) = plVar9;
                }
              }
            }
            else {
              *plVar9 = *plVar25;
              *plVar25 = (long)plVar9;
            }
LAB_0dfa25ce:
            plStack_1e8[3] = plStack_1e8[3] + 1;
LAB_0dfa25d6:
            param_2 = plStack_170;
            uStack_168 = plVar9 + 5;
            lStack_140 = plStack_110[5];
            puStack_158 = &UNK_0df9d010;
            iStack_148 = -0x34e4f6fb;
            pcStack_150 = (code *)0x0;
            uStack_144 = 3;
            uStack_138 = 0;
            puStack_130 = &UNK_0df9cf30;
            func_0x0ed75bc0(&puStack_b0,plStack_170,&uStack_168,uStack_c8,&lStack_58);
            uVar27 = uStack_d0;
            (**(code **)(*param_2 + 0xd0))(param_2);
            if (pcStack_150 != (code *)0x0) {
              (*pcStack_150)(&uStack_168);
            }
          }
          if (pcStack_1a0 != (code *)0x0) {
            (*pcStack_1a0)(auStack_1b8);
          }
          if (((ulong)uStack_1d8 & 1) != 0) {
            func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
          }
        }
      }
      (**(code **)(*param_2 + 0xd0))(param_2);
      lVar14 = *(long *)(puVar12 + 2);
      uVar24 = *(uint *)(lVar14 + 0x1c + (ulong)*puVar12 * 0x20);
      *puVar12 = uVar24;
      if (puVar12[0x48] == 0) {
        uVar18 = puVar12[4];
LAB_0dfa2735:
        lVar10 = lVar14 + (ulong)uVar18 * 0x20;
        uVar27 = (ulong)*(uint *)(lVar14 + -0x10 + (ulong)uVar18 * 0x20);
        if (uVar27 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar27 * 8))(auStack_1b8,lVar10 + -0x18);
          uVar18 = puVar12[4];
        }
        *(undefined4 *)(lVar10 + -0x10) = 0xffffffff;
        puVar12[4] = uVar18 - 1;
        uVar27 = uStack_d0;
      }
      else if ((*(uint *)(*(long *)(puVar12 + 0x46) + 0x18 + (ulong)(puVar12[0x48] - 1) * 0x30) !=
                uVar24) && (uVar18 = puVar12[4], uVar24 == uVar18 - 1)) goto LAB_0dfa2735;
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (uVar15 < uVar27);
  }
  return;
}


