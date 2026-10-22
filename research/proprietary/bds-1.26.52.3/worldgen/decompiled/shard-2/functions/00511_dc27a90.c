/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdd27a90 (ELF vaddr 0xdc27a90)
 * Label: caller-of-callee
 * Body:  [[0dd27a90, 0dd28134] [0dd28140, 0dd289e9] [0dd289f0, 0dd28bfd] [0dd28c00, 0dd28c6e] [0dd28c70, 0dd28eb8] [0dd28ec0, 0dd2939b] [0dd293a0, 0dd2950b] [0dd29714, 0dd29740] [0dd2977a, 0dd297ab]]
 * Ghidra: FUN_0dd27a90
 */


/* WARNING: Removing unreachable block (ram,0x0dd28496) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dd27a90(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

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
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long *unaff_R15;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  long *plStack_1f8;
  undefined1 uStack_1e9;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  char cStack_1a4;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  int iStack_168;
  undefined1 uStack_164;
  long lStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long *plStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long *plStack_128;
  long *plStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [16];
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
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
  uStack_d0 = param_4;
  if (pcVar8 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar29 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_0dd21750;
    }
    param_3[2] = (long)&UNK_0dd218f0;
    *(undefined4 *)(param_3 + 4) = 0xfccf926c;
    param_3[3] = (long)&UNK_0dd21f20;
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
    pcVar8 = (code *)&UNK_0dd21750;
    param_3[7] = (long)&UNK_0dd21750;
    if (bVar29) {
      lVar14 = param_3[6];
    }
    else {
      lVar14 = 0;
    }
    param_3[6] = lVar14;
    cVar6 = '\x01';
    plStack_1f8 = plVar9;
LAB_0dd27bb7:
    puStack_a8 = &UNK_0ef44b00;
    if (plStack_1f8 == (long *)0x0) goto LAB_0dd27bbe;
  }
  else {
    cVar6 = *(char *)((long)param_3 + 0x24);
    plVar9 = (long *)*param_3;
    plStack_1f8 = plVar9;
    if (cVar6 == '\x02') {
      plStack_1f8 = param_3;
    }
    if ((int)param_3[4] == -0x3306d94) goto LAB_0dd27bb7;
LAB_0dd27bbe:
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
    plStack_1f8 = (long *)func_0x0488e200(lVar14,lVar10,0xfccf926c,plVar9);
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
  puStack_b0 = &UNK_0f49bf30;
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
  plStack_128 = param_2;
  if (bVar5 == 1) {
    plStack_120 = param_3;
    param_3 = (long *)(**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (plVar9 = (long *)(**(code **)(*(long *)param_5[2] + 0x10))(), plVar9 < param_3)) {
      uStack_c0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_c0);
      if ((uStack_c0 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_140 = param_5;
    func_0x0ed6d600(&uStack_1e8,*param_5);
    plVar9 = uStack_1e8;
    do {
      if (param_3 == (long *)0x0) {
        return;
      }
      uVar24 = (uint)uStack_1e0;
      if ((uint)uStack_1e0 <= *(uint *)(plVar9 + 0x56) && *(uint *)(plVar9 + 0x56) != 0xffffffff) {
        return;
      }
      uStack_1e8 = plVar9;
      auVar32 = (**(code **)(*param_2 + 0xc0))(param_2);
      puVar27 = puStack_70;
      auStack_100 = auVar32;
      if (puStack_70 != (undefined8 *)0x0) {
        uVar28 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (uVar28 == 0) {
          func_0x048b0de0(&uStack_188,&uStack_1e9);
          _DAT_0f54fd90 = (undefined4)uStack_188;
          uRam000000000f54fd94 = uStack_188._4_4_;
          uVar2 = (undefined4)uStack_180;
          uVar3 = uStack_180._4_4_;
          uStack_188 = (long *)0x0;
          uStack_180 = (long *)0x0;
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
              FUN_0412c2d0(plVar9);
            }
          }
          plVar9 = uStack_180;
          if (uStack_180 != (long *)0x0) {
            LOCK();
            plVar25 = uStack_180 + 1;
            lVar14 = *plVar25;
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (lVar14 == 0) {
              (**(code **)(*uStack_180 + 0x10))(uStack_180);
              FUN_0412c2d0(plVar9);
            }
          }
          uVar28 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_1b8 = (undefined8 *)&UNK_05ea5bd0;
        uStack_1a8 = 0x989eedf9;
        pcStack_1b0 = (code *)0x0;
        cStack_1a4 = '\x04';
        auStack_1c8 = (undefined1  [8])auStack_100;
        uStack_198 = 0;
        plStack_190 = (long *)&UNK_05ea5bb0;
        uStack_1a0 = uVar28;
        (**(code **)*puVar27)(puVar27,auStack_1c8,lStack_80);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        plVar9 = uStack_1e8;
        uVar24 = (uint)uStack_1e0;
      }
      uVar4 = auStack_100._8_8_;
      uVar17 = auStack_100._0_8_;
      if ((*(uint *)(plVar9 + 0x56) == 0xffffffff) || (*(uint *)(plVar9 + 0x56) < uVar24)) {
        lVar14 = *plStack_140;
        uStack_130 = 0;
        if (auStack_100._0_8_ == 0) {
          uStack_130 = (auStack_100._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar10 = auStack_100._8_8_ + 9;
          puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
          if (lVar10 != 0 && puVar11 == (ulong *)0x0) {
            func_0x0eec74c0(lVar10,8);
          }
          *puVar11 = uVar4;
          func_0x0eee2f00(puVar11 + 1,uVar17,uVar4);
          *(undefined1 *)((long)(puVar11 + 1) + uVar4) = 0;
          uStack_130 = (ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar12 = (uint *)func_0x0ed6d180(lVar14,&uStack_130,0);
        if ((uStack_130 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_130 & 0xff00ffffffffffff) - 8);
        }
        uVar4 = auStack_100._8_8_;
        uVar17 = auStack_100._0_8_;
        uStack_130 = 0;
        if ((long *)0xfffffffffffffff7 < (ulong)auStack_100._8_8_) {
          FUN_04882e30();
          goto LAB_0dd294bb;
        }
        if ((ulong)auStack_100._8_8_ < (long *)0x17) {
          uStack_188 = (long *)CONCAT71(uStack_188._1_7_,auStack_100[8] * '\x02');
          puVar13 = (undefined *)((long)&uStack_188 + 1);
          if ((long *)auStack_100._8_8_ != (long *)0x0) goto LAB_0dd28193;
        }
        else {
          uVar28 = (auStack_100._8_8_ | 7) + 1;
          if ((auStack_100._8_8_ | 7) == 0x17) {
            uVar28 = 0x1a;
          }
          puVar13 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
          if (puVar13 == (undefined *)0x0) {
            func_0x0eec74c0(uVar28,0);
          }
          uStack_188 = (long *)(uVar28 | 1);
          uStack_180 = (long *)uVar4;
          puStack_178 = puVar13;
LAB_0dd28193:
          func_0x0eee2ee0(puVar13,uVar17,uVar4);
        }
        puVar13[uVar4] = 0;
        auStack_1c8 = (undefined1  [8])0x0;
        uStack_1c0 = 0;
        puStack_1b8 = (undefined8 *)0x0;
        uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
        lVar14 = func_0x0dd2dbb0(plStack_1f8,&uStack_188,&uStack_188,auStack_1c8);
        param_2 = plStack_128;
        if ((uStack_1a0 & 0xffffffff) != 0xffffffff) {
          (**(code **)(&UNK_0f49bd38 + (uStack_1a0 & 0xffffffff) * 8))(&uStack_1e9,auStack_1c8);
        }
        if (((ulong)uStack_188 & 1) != 0) {
          func_0x0412a280(puStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
        }
        auStack_1c8 = (undefined1  [8])(lVar14 + 0x28);
        uStack_1a0 = plStack_120[5];
        puStack_1b8 = (undefined8 *)&UNK_0dd24cf0;
        uStack_1a8 = 0xd4dd019c;
        pcStack_1b0 = (code *)0x0;
        cStack_1a4 = '\x03';
        uStack_198 = 0;
        plStack_190 = (long *)&UNK_0dd24c10;
        func_0x0ed75bc0(&puStack_b0,param_2,auStack_1c8,uStack_d0,&lStack_58);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        lVar14 = *(long *)(puVar12 + 2);
        uVar24 = *(uint *)(lVar14 + 0x1c + (ulong)*puVar12 * 0x20);
        *puVar12 = uVar24;
        if (puVar12[0x48] == 0) {
          uVar18 = puVar12[4];
LAB_0dd282e9:
          lVar10 = lVar14 + (ulong)uVar18 * 0x20;
          uVar28 = (ulong)*(uint *)(lVar14 + -0x10 + (ulong)uVar18 * 0x20);
          if (uVar28 != 0xffffffff) {
            (**(code **)(&UNK_0f4e40d0 + uVar28 * 8))(auStack_1c8,lVar10 + -0x18);
            uVar18 = puVar12[4];
          }
          *(undefined4 *)(lVar10 + -0x10) = 0xffffffff;
          puVar12[4] = uVar18 - 1;
        }
        else if ((*(uint *)(*(long *)(puVar12 + 0x46) + 0x18 + (ulong)(puVar12[0x48] - 1) * 0x30) !=
                  uVar24) && (uVar18 = puVar12[4], uVar24 == uVar18 - 1)) goto LAB_0dd282e9;
        (**(code **)(*param_2 + 0xd0))(param_2);
      }
      param_3 = (long *)((long)param_3 + -1);
      plVar9 = uStack_1e8;
    } while( true );
  }
  if ((bVar5 & 2) == 0) {
    lVar14 = param_3[5];
    lVar10 = func_0x048b2190(lVar14);
    plVar9 = *(long **)(lVar10 + 0x78);
    if (plVar9 == (long *)0x0) {
LAB_0dd27e04:
      if (*(code **)(lVar10 + 0x30) == (code *)0x0) {
        puStack_178 = &UNK_0488e0b0;
        iStack_168 = 0x48b5725f;
        pcStack_170 = (code *)0x0;
        uStack_164 = 0;
        uStack_188 = (long *)0x0;
        uStack_158 = 0;
        puStack_150 = (undefined *)0x0;
        lStack_160 = lVar14;
        goto LAB_0dd28507;
      }
      (**(code **)(lVar10 + 0x30))(&uStack_188,lVar14);
      if (iStack_168 != -0x5db38b49) goto LAB_0dd28507;
LAB_0dd28554:
      plVar9 = (long *)&UNK_0133e465;
      uVar28 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar21 = *plVar9;
      if (lVar21 == 0 || lVar21 == plVar9[1]) goto LAB_0dd27e04;
      lVar19 = 0;
      bVar29 = false;
      do {
        lVar20 = lVar21;
        if (lVar19 != 0) {
          lVar20 = lVar19;
        }
        bVar1 = lVar19 != 0;
        if (*(long *)(lVar21 + 8) != 0) {
          lVar20 = lVar19;
          bVar1 = bVar29;
        }
        lVar21 = lVar21 + 0x20;
        lVar19 = lVar20;
        bVar29 = bVar1;
      } while (lVar21 != plVar9[1]);
      if (bVar1 || lVar20 == 0) goto LAB_0dd27e04;
      (**(code **)(lVar20 + 0x18))(&uStack_188,lVar14,0);
      if (iStack_168 == -0x5db38b49) goto LAB_0dd28554;
LAB_0dd28507:
      func_0x0488e290(auStack_1c8,&uStack_188);
      plVar25 = plStack_190;
      if ((plStack_190 != (long *)0x0) && ((byte)(cStack_1a4 - 1U) < 2)) {
        func_0x048b0900(&uStack_188,auStack_1c8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (plVar25 != (long *)0x0) goto LAB_0dd28554;
      plVar9 = (long *)&UNK_01411d3a;
      uVar28 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar28 < 0xfffffffffffffff8) {
      if (uVar28 < 0x17) {
        uVar15 = (ulong)uStack_1e8 >> 8;
        uStack_1e8 = (long *)CONCAT71((int7)uVar15,(char)uVar28 * '\x02');
        lVar14 = (long)&uStack_1e8 + 1;
        if (uVar28 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_1e8._1_1_ = 0;
          goto joined_r0x0dd28606;
        }
      }
      else {
        uVar15 = 0x1a;
        if ((uVar28 | 7) != 0x17) {
          uVar15 = (uVar28 | 7) + 1;
        }
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        param_3 = (long *)(uVar15 | 1);
        uStack_1e8 = param_3;
        uStack_1e0 = uVar28;
        lStack_1d8 = lVar14;
      }
      func_0x0eee2f00(lVar14,plVar9,uVar28);
      *(undefined1 *)(lVar14 + uVar28) = 0;
joined_r0x0dd28606:
      if (pcStack_170 != (code *)0x0) {
        (*pcStack_170)(&uStack_188);
      }
      plVar9 = uStack_1e8;
      uVar28 = uStack_1e0;
      if (((ulong)uStack_1e8 & 1) == 0) {
        uVar28 = (ulong)uStack_1e8 >> 1 & 0x7f;
      }
      uVar15 = uVar28 + 0xc;
      if (uVar15 < 0xfffffffffffffff8) {
        lVar14 = *param_5;
        if (uVar15 < 0x17) {
          uStack_1c0 = 0;
          puStack_1b8 = (undefined8 *)0x0;
          auStack_1c8._1_7_ = 0;
          auStack_1c8[0] = (char)uVar15 * '\x02';
        }
        else {
          uVar16 = 0x1a;
          if ((uVar15 | 7) != 0x17) {
            uVar16 = (uVar15 | 7) + 1;
          }
          puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
          if (puStack_1b8 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar16,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar16 | 1);
          uStack_1c0 = uVar15;
        }
        lVar10 = (long)puStack_1b8 + 0xc;
        bVar29 = ((ulong)auStack_1c8 & 1) == 0;
        puVar27 = puStack_1b8;
        if (bVar29) {
          puVar27 = (undefined8 *)(auStack_1c8 + 1);
        }
        *puVar27 = 0x6465746365707865;
        *(undefined4 *)(puVar27 + 1) = 0x206e6120;
        lVar21 = (long)&uStack_1c0 + 5;
        if (!bVar29) {
          lVar21 = lVar10;
        }
        if (uVar28 != 0) {
          lVar10 = lStack_1d8;
          if (((ulong)plVar9 & 1) == 0) {
            lVar10 = (long)&uStack_1e8 + 1;
          }
          func_0x0eee2ee0(lVar21,lVar10,uVar28);
        }
        *(undefined1 *)(lVar21 + uVar28) = 0;
        uVar28 = (ulong)auStack_1c8 >> 1 & 0x7f;
        puVar27 = (undefined8 *)(auStack_1c8 + 1);
        if (((ulong)auStack_1c8 & 1) != 0) {
          uVar28 = uStack_1c0;
          puVar27 = puStack_1b8;
        }
        uStack_138 = 0;
        if (puVar27 == (undefined8 *)0x0) {
          uStack_138 = (ulong)((uint)uVar28 & 0x7f) << 0x30;
        }
        else {
          lVar10 = uVar28 + 9;
          puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar10,8);
          if (lVar10 != 0 && puVar11 == (ulong *)0x0) {
            func_0x0eec74c0(lVar10,8);
          }
          *puVar11 = uVar28;
          func_0x0eee2f00(puVar11 + 1,puVar27,uVar28);
          *(undefined1 *)((long)puVar11 + uVar28 + 8) = 0;
          uStack_138 = (ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar14,8,&uStack_138);
        if ((uStack_138 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_138 & 0xff00ffffffffffff) - 8);
        }
        uStack_138 = 0;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        if (((ulong)plVar9 & 1) == 0) {
          return;
        }
        func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
        return;
      }
LAB_0dd294bb:
      uVar17 = FUN_04882e30();
      uVar17 = func_0x04882e20(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      func_0x0ee386e0(&uStack_c8);
      uVar17 = func_0x0eee2d70(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      func_0x0dd197b0(&uStack_188);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (((ulong)uStack_1e8 & 1) != 0) {
        func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_128 + 0xd0))();
      func_0x0ed6d560(param_3);
      uVar17 = func_0x0eee2d70(uVar17);
      uVar17 = func_0x04882e20(uVar17);
      func_0x04882e20(uVar17);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar28 = FUN_04882e30();
    param_2 = param_5;
    param_5 = plVar9;
LAB_0dd28866:
    fVar30 = (float)uVar28;
LAB_0dd2887e:
    fVar30 = (float)func_0x0eee3ab0(fVar30 / *(float *)(plStack_1f8 + 4));
    plVar9 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
    if ((plVar25 < (long *)0x3) ||
       (uVar28 = (long)plVar25 - ((ulong)plVar25 >> 1 & 0x5555555555555555),
       uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
       1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
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
    if (plVar25 <= unaff_R15) goto LAB_0dd28946;
  }
  else {
    uVar28 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar15 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar15 < uVar28)) {
      uStack_c8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_c8);
      if ((uStack_c8 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
      return;
    }
    fVar30 = (float)func_0x0eee3ab0((float)uVar28 / *(float *)(plStack_1f8 + 4));
    plVar9 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
    unaff_R15 = (long *)0x2;
    if ((plVar9 != (long *)0x1) &&
       (unaff_R15 = plVar9, ((ulong)plVar9 & (ulong)((long)plVar9 + -1)) != 0)) {
      unaff_R15 = (long *)func_0x0412c3f0();
    }
    plVar25 = (long *)plStack_1f8[1];
    uStack_d8 = uVar28;
    if (unaff_R15 <= plVar25) {
      if (plVar25 <= unaff_R15) goto LAB_0dd28946;
      uVar28 = plStack_1f8[3];
      if ((long)uVar28 < 0) goto LAB_0dd28866;
      fVar30 = (float)(long)uVar28;
      goto LAB_0dd2887e;
    }
  }
  func_0x0dd19830(plStack_1f8,unaff_R15);
LAB_0dd28946:
  plStack_120 = param_3;
  func_0x0ed6d600(auStack_100,*param_5);
  if (uStack_d8 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    plStack_a0 = plStack_1f8 + 2;
    uVar15 = 0;
    uVar28 = uStack_d8;
    do {
      if ((*(uint *)(auStack_100._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_100._8_4_ <= *(uint *)(auStack_100._0_8_ + 0x2b0))) {
        return;
      }
      puVar12 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar12,uVar15);
      (**(code **)(*param_2 + 200))(param_2,uVar15);
      cVar6 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar6 == '\x01') && (lVar14 = (**(code **)(*param_2 + 0xa8))(param_2), lVar14 != 2)) {
        uStack_108 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_108);
        if ((uStack_108 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
        }
        uStack_108 = 0;
      }
      else {
        cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar6 == '\0') {
          uStack_110 = uStack_88;
          func_0x0ed5ffe0(*param_5,8,&uStack_110);
          if ((uStack_110 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_110 = 0;
        }
        else {
          uStack_1e8 = (long *)0x0;
          uStack_1e0 = 0;
          lStack_1d8 = 0;
          uStack_1a0 = plStack_120[5];
          puStack_1b8 = (undefined8 *)&UNK_048b1ea0;
          uStack_1a8 = 0xa24c74b7;
          pcStack_1b0 = (code *)0x0;
          cStack_1a4 = '\x03';
          auStack_1c8 = (undefined1  [8])&uStack_1e8;
          uStack_198 = 0;
          plStack_190 = (long *)&UNK_048b1e80;
          func_0x0ed75bc0(&puStack_a8,param_2,auStack_1c8,uStack_d0,&lStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar6 == '\0') {
            uStack_118 = uStack_98;
            func_0x0ed5ffe0(*param_5,8,&uStack_118);
            if ((uStack_118 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
            }
            uStack_118 = 0;
          }
          else {
            uVar28 = (ulong)uStack_1e8 >> 1 & 0x7f;
            lVar14 = (long)&uStack_1e8 + 1;
            if (((ulong)uStack_1e8 & 1) != 0) {
              uVar28 = uStack_1e0;
              lVar14 = lStack_1d8;
            }
            uVar16 = func_0x04883620(&uStack_188,lVar14,uVar28);
            uVar28 = plStack_1f8[1];
            if (uVar28 != 0) {
              uVar22 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
              uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
              uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar22 >> 0x38 < 2) {
                uVar23 = uVar28 - 1 & uVar16;
              }
              else {
                uVar23 = uVar16;
                if (uVar28 <= uVar16) {
                  if ((uVar16 | uVar28) >> 0x20 == 0) {
                    uVar23 = (uVar16 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar23 = uVar16 % uVar28;
                  }
                }
              }
              puVar27 = *(undefined8 **)(*plStack_1f8 + uVar23 * 8);
              uStack_e0 = uVar23;
              if ((puVar27 != (undefined8 *)0x0) &&
                 (plVar9 = (long *)*puVar27, plVar9 != (long *)0x0)) {
                lStack_f0 = lStack_1d8;
                uVar26 = uStack_1e0;
                if (((ulong)uStack_1e8 & 1) == 0) {
                  lStack_f0 = (long)&uStack_1e8 + 1;
                  uVar26 = (ulong)uStack_1e8 >> 1 & 0x7f;
                }
                uStack_b8 = uVar26;
                if ((byte)(uVar22 >> 0x38) < 2) {
                  plStack_140 = param_5;
                  do {
                    if (plVar9[1] == uVar16) {
                      bVar5 = *(byte *)(plVar9 + 2);
                      if ((bVar5 & 1) == 0) {
                        uVar22 = (ulong)(bVar5 >> 1);
                      }
                      else {
                        uVar22 = plVar9[3];
                      }
                      if (uVar22 == uVar26) {
                        if ((bVar5 & 1) == 0) {
                          lVar14 = (long)plVar9 + 0x11;
                        }
                        else {
                          lVar14 = plVar9[4];
                        }
                        iVar7 = func_0x0eee3000(lVar14,lStack_f0,uVar26);
                        uVar23 = uStack_e0;
                        uVar26 = uStack_b8;
                        param_5 = plStack_140;
                        if (iVar7 == 0) goto LAB_0dd29250;
                      }
                    }
                    else {
                      param_5 = plStack_140;
                      if ((plVar9[1] & uVar28 - 1) != uVar23) break;
                    }
                    plVar9 = (long *)*plVar9;
                    param_5 = plStack_140;
                  } while (plVar9 != (long *)0x0);
                }
                else {
                  do {
                    uVar22 = plVar9[1];
                    if (uVar22 == uVar16) {
                      bVar5 = *(byte *)(plVar9 + 2);
                      if ((bVar5 & 1) == 0) {
                        uVar22 = (ulong)(bVar5 >> 1);
                      }
                      else {
                        uVar22 = plVar9[3];
                      }
                      if (uVar22 == uVar26) {
                        if ((bVar5 & 1) == 0) {
                          lVar14 = (long)plVar9 + 0x11;
                        }
                        else {
                          lVar14 = plVar9[4];
                        }
                        iVar7 = func_0x0eee3000(lVar14,lStack_f0,uVar26);
                        uVar23 = uStack_e0;
                        uVar26 = uStack_b8;
                        if (iVar7 == 0) goto LAB_0dd29250;
                      }
                    }
                    else {
                      if (uVar28 <= uVar22) {
                        if ((uVar22 | uVar28) >> 0x20 == 0) {
                          uVar22 = (uVar22 & 0xffffffff) % (uVar28 & 0xffffffff);
                        }
                        else {
                          uVar22 = uVar22 % uVar28;
                        }
                      }
                      if (uVar22 != uVar23) break;
                    }
                    plVar9 = (long *)*plVar9;
                  } while (plVar9 != (long *)0x0);
                }
              }
            }
            uStack_e8 = uVar16;
            plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
            if (plVar9 == (long *)0x0) {
              func_0x0eec74c0(0x58,0);
            }
            uStack_180 = plStack_1f8;
            puStack_178 = (undefined *)0x0;
            *plVar9 = 0;
            plVar9[1] = uStack_e8;
            uStack_188 = plVar9;
            if (((ulong)uStack_1e8 & 1) == 0) {
              plVar9[4] = lStack_1d8;
              plVar9[2] = (long)uStack_1e8;
              plVar9[3] = uStack_1e0;
            }
            else {
              func_0x0412e5e0(plVar9 + 2,lStack_1d8,uStack_1e0);
            }
            plVar9[5] = 0;
            plVar9[6] = 0;
            plVar9[7] = 0;
            *(undefined4 *)(plVar9 + 10) = 0;
            puStack_178 = (undefined *)CONCAT71(puStack_178._1_7_,1);
            if ((long)uVar28 < 0) {
              fVar31 = (float)uVar28;
              fVar30 = *(float *)(plStack_1f8 + 4);
              if (uVar28 != 0) goto LAB_0dd2903d;
LAB_0dd2904a:
              uVar16 = 1;
              if (2 < uVar28) {
                uVar16 = (ulong)((uVar28 & uVar28 - 1) != 0);
              }
              uVar16 = uVar28 * 2 | uVar16;
              fVar30 = (float)func_0x0eee3ab0((float)(plStack_1f8[3] + 1) / fVar30);
              uVar28 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
              if (uVar28 < uVar16) {
                uVar28 = uVar16;
              }
              uVar16 = 2;
              if ((uVar28 == 1) || (uVar16 = uVar28, (uVar28 & uVar28 - 1) == 0)) {
                uVar28 = plStack_1f8[1];
                bVar29 = uVar16 < uVar28;
                if (uVar16 <= uVar28) goto LAB_0dd290e1;
LAB_0dd290bb:
                func_0x0dd19830(plStack_1f8,uVar16);
              }
              else {
                uVar16 = func_0x0412c3f0();
                uVar28 = plStack_1f8[1];
                bVar29 = uVar16 < uVar28;
                if (uVar28 < uVar16) goto LAB_0dd290bb;
LAB_0dd290e1:
                if (bVar29) {
                  fVar30 = (float)func_0x0eee3ab0((float)(ulong)plStack_1f8[3] /
                                                  *(float *)(plStack_1f8 + 4));
                  uVar22 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
                  if ((uVar28 < 3) ||
                     (uVar23 = uVar28 - (uVar28 >> 1 & 0x5555555555555555),
                     uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333),
                     1 < (byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar22 = func_0x0412c3f0(uVar22);
                  }
                  else if (1 < uVar22) {
                    lVar14 = 0x3f;
                    if (uVar22 - 1 != 0) {
                      for (; uVar22 - 1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    uVar22 = 1L << (-((byte)lVar14 ^ 0x3f) & 0x3f);
                  }
                  if (uVar16 <= uVar22) {
                    uVar16 = uVar22;
                  }
                  if (uVar16 < uVar28) goto LAB_0dd290bb;
                }
              }
              uVar28 = plStack_1f8[1];
              if ((uVar28 & uVar28 - 1) == 0) {
                uVar16 = uStack_e8 & uVar28 - 1;
              }
              else {
                uVar16 = uStack_e8;
                if (uVar28 <= uStack_e8) {
                  if ((uStack_e8 | uVar28) >> 0x20 == 0) {
                    uVar16 = (uStack_e8 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar16 = uStack_e8 % uVar28;
                  }
                }
              }
            }
            else {
              fVar31 = (float)(long)uVar28;
              fVar30 = *(float *)(plStack_1f8 + 4);
              if (uVar28 == 0) goto LAB_0dd2904a;
LAB_0dd2903d:
              uVar16 = uStack_e0;
              if (fVar31 * fVar30 < (float)(plStack_1f8[3] + 1)) goto LAB_0dd2904a;
            }
            lVar14 = *plStack_1f8;
            plVar25 = *(long **)(lVar14 + uVar16 * 8);
            if (plVar25 == (long *)0x0) {
              *plVar9 = *plStack_a0;
              *plStack_a0 = (long)plVar9;
              *(long **)(lVar14 + uVar16 * 8) = plStack_a0;
              if (*plVar9 != 0) {
                uVar16 = *(ulong *)(*plVar9 + 8);
                if ((uVar28 & uVar28 - 1) == 0) {
                  *(long **)(lVar14 + (uVar16 & uVar28 - 1) * 8) = plVar9;
                }
                else {
                  if (uVar28 <= uVar16) {
                    if ((uVar16 | uVar28) >> 0x20 == 0) {
                      *(long **)(lVar14 + ((uVar16 & 0xffffffff) % (uVar28 & 0xffffffff)) * 8) =
                           plVar9;
                      goto LAB_0dd29248;
                    }
                    uVar16 = uVar16 % uVar28;
                  }
                  *(long **)(lVar14 + uVar16 * 8) = plVar9;
                }
              }
            }
            else {
              *plVar9 = *plVar25;
              *plVar25 = (long)plVar9;
            }
LAB_0dd29248:
            plStack_1f8[3] = plStack_1f8[3] + 1;
LAB_0dd29250:
            param_2 = plStack_128;
            uStack_188 = plVar9 + 5;
            lStack_160 = plStack_120[5];
            puStack_178 = &UNK_0dd24cf0;
            iStack_168 = -0x2b22fe64;
            pcStack_170 = (code *)0x0;
            uStack_164 = 3;
            uStack_158 = 0;
            puStack_150 = &UNK_0dd24c10;
            func_0x0ed75bc0(&puStack_b0,plStack_128,&uStack_188,uStack_d0,&lStack_58);
            uVar28 = uStack_d8;
            (**(code **)(*param_2 + 0xd0))(param_2);
            if (pcStack_170 != (code *)0x0) {
              (*pcStack_170)(&uStack_188);
            }
          }
          if (pcStack_1b0 != (code *)0x0) {
            (*pcStack_1b0)(auStack_1c8);
          }
          if (((ulong)uStack_1e8 & 1) != 0) {
            func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
          }
        }
      }
      (**(code **)(*param_2 + 0xd0))(param_2);
      lVar14 = *(long *)(puVar12 + 2);
      uVar24 = *(uint *)(lVar14 + 0x1c + (ulong)*puVar12 * 0x20);
      *puVar12 = uVar24;
      if (puVar12[0x48] == 0) {
        uVar18 = puVar12[4];
LAB_0dd293a5:
        lVar10 = lVar14 + (ulong)uVar18 * 0x20;
        uVar28 = (ulong)*(uint *)(lVar14 + -0x10 + (ulong)uVar18 * 0x20);
        if (uVar28 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar28 * 8))(auStack_1c8,lVar10 + -0x18);
          uVar18 = puVar12[4];
        }
        *(undefined4 *)(lVar10 + -0x10) = 0xffffffff;
        puVar12[4] = uVar18 - 1;
        uVar28 = uStack_d8;
      }
      else if ((*(uint *)(*(long *)(puVar12 + 0x46) + 0x18 + (ulong)(puVar12[0x48] - 1) * 0x30) !=
                uVar24) && (uVar18 = puVar12[4], uVar24 == uVar18 - 1)) goto LAB_0dd293a5;
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (uVar15 < uVar28);
  }
  return;
}


