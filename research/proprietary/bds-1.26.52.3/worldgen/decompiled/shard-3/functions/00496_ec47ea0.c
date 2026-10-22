/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed47ea0 (ELF vaddr 0xec47ea0)
 * Label: caller-of-callee
 * Body:  [[0ed47ea0, 0ed4855c] [0ed48560, 0ed48718] [0ed48720, 0ed48e86] [0ed48e90, 0ed49094] [0ed490a0, 0ed49293] [0ed492a0, 0ed49348] [0ed49350, 0ed4982a] [0ed49830, 0ed499bf] [0ed49be4, 0ed49c10] [0ed49c4a, 0ed49c78]]
 * Ghidra: FUN_0ed47ea0
 */


/* WARNING: Removing unreachable block (ram,0x0ed4892f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ed47ea0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  long *plVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  undefined *puVar17;
  long lVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  undefined8 *puVar33;
  ulong *unaff_R12;
  undefined8 *unaff_R15;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  long *plStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  char cStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  long *plStack_180;
  undefined1 uStack_171;
  undefined8 *puStack_170;
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
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  ulong uStack_90;
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
  
  pcVar12 = (code *)param_3[7];
  plStack_180 = param_2;
  uStack_d8 = param_4;
  if (pcVar12 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar34 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar34 = (undefined *)param_3[7] == &UNK_0ed4b410;
    }
    param_3[2] = (long)&UNK_0ed4b5b0;
    *(undefined4 *)(param_3 + 4) = 0x53b6811d;
    param_3[3] = (long)&UNK_0ed4b730;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar22 == (long *)0x0) {
      FUN_0eec74c0(0x28);
      param_2 = plStack_180;
    }
    plVar22[2] = 0;
    plVar22[3] = 0;
    *plVar22 = 0;
    plVar22[1] = 0;
    *(undefined4 *)(plVar22 + 4) = 0x3f800000;
    *param_3 = (long)plVar22;
    pcVar12 = (code *)&UNK_0ed4b410;
    param_3[7] = (long)&UNK_0ed4b410;
    if (bVar34) {
      lVar18 = param_3[6];
    }
    else {
      lVar18 = 0;
    }
    param_3[6] = lVar18;
    cVar10 = '\x01';
    plStack_1f0 = plVar22;
LAB_0ed47fbf:
    puStack_b0 = &UNK_0ef44b00;
    if (plStack_1f0 == (long *)0x0) goto LAB_0ed47fc7;
  }
  else {
    cVar10 = *(char *)((long)param_3 + 0x24);
    plVar22 = (long *)*param_3;
    plStack_1f0 = plVar22;
    if (cVar10 == '\x02') {
      plStack_1f0 = param_3;
    }
    if ((int)param_3[4] == 0x53b6811d) goto LAB_0ed47fbf;
LAB_0ed47fc7:
    puStack_b0 = &UNK_0ef44b00;
    lVar18 = param_3[5];
    lVar15 = param_3[6];
    if (lVar15 == 0) {
      (*pcVar12)(0,param_3,0);
      lVar15 = param_3[6];
      cVar10 = *(char *)((long)param_3 + 0x24);
      plVar22 = (long *)*param_3;
    }
    if (cVar10 == '\x02') {
      plVar22 = param_3;
    }
    plStack_1f0 = (long *)func_0x0488e200(lVar18,lVar15,0x53b6811d,plVar22);
  }
  uStack_58 = *param_5;
  uStack_50 = param_5[1];
  plVar22 = (long *)param_5[2];
  uStack_80 = uStack_58;
  uStack_78 = uStack_50;
  if (plVar22 == (long *)0x0) {
    plVar22 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0);
    uStack_58 = *param_5;
    uStack_50 = param_5[1];
    plVar22 = (long *)param_5[2];
  }
  puVar33 = param_5 + 3;
  uStack_68 = *(undefined4 *)(param_5 + 3);
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_b8 = &UNK_0f4e2920;
  if (plVar22 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar22 + 0x30))(plVar22,1);
  }
  uStack_40 = *(undefined4 *)puVar33;
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if (bVar9 == 1) {
    uVar13 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar14 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar14 < uVar13)) {
      uStack_c8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_c8);
      if ((uStack_c8 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
      return;
    }
    func_0x0ed6d600(&uStack_1e8,*param_5);
    if (uVar13 == 0) {
      return;
    }
    uVar14 = 0;
    puStack_170 = param_5;
    plStack_128 = param_3;
    uStack_120 = uVar13;
    do {
      unaff_R12 = uStack_1e8;
      uVar32 = (uint)uStack_1e0;
      if ((uint)uStack_1e0 <= (uint)uStack_1e8[0x56] && (uint)uStack_1e8[0x56] != 0xffffffff) {
        return;
      }
      auVar37 = (**(code **)(*plStack_180 + 0xc0))();
      puVar33 = puStack_70;
      auStack_f0 = auVar37;
      if (puStack_70 != (undefined8 *)0x0) {
        lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (lVar18 == 0) {
          func_0x048b0de0(&uStack_168,&uStack_171);
          _DAT_0f54fd90 = (undefined4)uStack_168;
          uRam000000000f54fd94 = uStack_168._4_4_;
          uVar6 = (undefined4)uStack_160;
          uVar7 = uStack_160._4_4_;
          uStack_168 = (long *)0x0;
          uStack_160 = (long *)0x0;
          plVar22 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar6;
          uRam000000000f54fd9c = uVar7;
          if (plVar22 != (long *)0x0) {
            LOCK();
            plVar2 = plVar22 + 1;
            lVar18 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar18 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
              func_0x0412c2d0(plVar22);
            }
          }
          plVar22 = uStack_160;
          if (uStack_160 != (long *)0x0) {
            LOCK();
            plVar2 = uStack_160 + 1;
            lVar18 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar18 == 0) {
              (**(code **)(*uStack_160 + 0x10))(uStack_160);
              func_0x0412c2d0(plVar22);
            }
          }
          lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_1b8 = (undefined8 *)&UNK_05ea5bd0;
        uStack_1a8 = 0x989eedf9;
        pcStack_1b0 = (code *)0x0;
        cStack_1a4 = '\x04';
        auStack_1c8 = (undefined1  [8])auStack_f0;
        uStack_198 = 0;
        puStack_190 = (undefined8 *)&UNK_05ea5bb0;
        lStack_1a0 = lVar18;
        (**(code **)*puVar33)(puVar33,auStack_1c8,uStack_80);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        unaff_R12 = uStack_1e8;
        uVar32 = (uint)uStack_1e0;
      }
      uVar8 = auStack_f0._8_8_;
      uVar24 = auStack_f0._0_8_;
      if (((uint)unaff_R12[0x56] == 0xffffffff) || ((uint)unaff_R12[0x56] < uVar32)) {
        uVar1 = *param_5;
        uStack_110 = 0;
        if (auStack_f0._0_8_ == 0) {
          uStack_110 = (auStack_f0._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar18 = auStack_f0._8_8_ + 9;
          unaff_R12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && unaff_R12 == (ulong *)0x0) {
            FUN_0eec74c0(lVar18,8);
          }
          *unaff_R12 = uVar8;
          func_0x0eee2f00(unaff_R12 + 1,uVar24,uVar8);
          *(undefined1 *)((long)unaff_R12 + uVar8 + 8) = 0;
          uStack_110 = (ulong)(unaff_R12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar16 = (uint *)func_0x0ed6d180(uVar1,&uStack_110,0);
        if ((uStack_110 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8);
        }
        uVar8 = auStack_f0._8_8_;
        uVar24 = auStack_f0._0_8_;
        uStack_110 = 0;
        if (0xfffffffffffffff7 < (ulong)auStack_f0._8_8_) {
          func_0x04882e30();
          goto LAB_0ed49951;
        }
        if ((ulong)auStack_f0._8_8_ < 0x17) {
          auStack_1c8[0] = auStack_f0[8] * '\x02';
          puVar17 = auStack_1c8 + 1;
          plVar22 = plStack_128;
          if (auStack_f0._8_8_ != 0) goto LAB_0ed485b3;
        }
        else {
          uVar13 = (auStack_f0._8_8_ | 7) + 1;
          if ((auStack_f0._8_8_ | 7) == 0x17) {
            uVar13 = 0x1a;
          }
          puVar17 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
          if (puVar17 == (undefined *)0x0) {
            FUN_0eec74c0(uVar13,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar13 | 1);
          uStack_1c0 = uVar8;
          puStack_1b8 = (undefined8 *)puVar17;
LAB_0ed485b3:
          plVar22 = plStack_128;
          func_0x0eee2ee0(puVar17,uVar24,uVar8);
        }
        puVar17[uVar8] = 0;
        uStack_168 = (long *)0x0;
        uStack_160 = (long *)0x0;
        puStack_158 = (undefined *)0x0;
        lVar18 = func_0x0ed4ade0(plStack_1f0,auStack_1c8,auStack_1c8,&uStack_168);
        plVar5 = uStack_168;
        plVar2 = uStack_160;
        if (uStack_168 != (long *)0x0) {
          for (; plVar5 != plVar2; plVar2 = plVar2 + -3) {
            if ((*(byte *)(plVar2 + -3) & 1) != 0) {
              func_0x0412a280(plVar2[-1],plVar2[-3] & 0xfffffffffffffffe);
            }
          }
          uStack_160 = plVar5;
          func_0x0412a280(plVar5,(long)puStack_158 - (long)plVar5);
        }
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        auStack_1c8 = (undefined1  [8])(lVar18 + 0x28);
        lStack_1a0 = plVar22[5];
        puStack_1b8 = (undefined8 *)&UNK_0ed40260;
        uStack_1a8 = 0x796598b3;
        pcStack_1b0 = (code *)0x0;
        cStack_1a4 = '\x03';
        uStack_198 = 0;
        puStack_190 = (undefined8 *)&UNK_0ed40180;
        func_0x0ed75bc0(&puStack_b8,plStack_180,auStack_1c8,uStack_d8,&uStack_58);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        lVar18 = *(long *)(puVar16 + 2);
        uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puVar16 * 0x20);
        *puVar16 = uVar32;
        if (puVar16[0x48] == 0) {
          uVar25 = puVar16[4];
LAB_0ed4874e:
          lVar15 = lVar18 + (ulong)uVar25 * 0x20;
          uVar13 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar25 * 0x20);
          if (uVar13 != 0xffffffff) {
            (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(auStack_1c8,lVar15 + -0x18);
            uVar25 = puVar16[4];
          }
          *(undefined4 *)(lVar15 + -0x10) = 0xffffffff;
          puVar16[4] = uVar25 - 1;
        }
        else if ((*(uint *)(*(long *)(puVar16 + 0x46) + 0x18 + (ulong)(puVar16[0x48] - 1) * 0x30) !=
                  uVar32) && (uVar25 = puVar16[4], uVar32 == uVar25 - 1)) goto LAB_0ed4874e;
        (**(code **)(*plStack_180 + 0xd0))();
        param_5 = puStack_170;
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == uStack_120) {
        return;
      }
    } while( true );
  }
  if ((bVar9 & 2) == 0) {
    lVar18 = param_3[5];
    lVar15 = func_0x048b2190(lVar18);
    plVar22 = *(long **)(lVar15 + 0x78);
    if (plVar22 == (long *)0x0) {
LAB_0ed481f4:
      if (*(code **)(lVar15 + 0x30) == (code *)0x0) {
        puStack_158 = &UNK_0488e0b0;
        iStack_148 = 0x48b5725f;
        pcStack_150 = (code *)0x0;
        uStack_144 = 0;
        uStack_168 = (long *)0x0;
        uStack_138 = 0;
        puStack_130 = (undefined *)0x0;
        lStack_140 = lVar18;
        goto LAB_0ed48990;
      }
      (**(code **)(lVar15 + 0x30))(&uStack_168,lVar18);
      if (iStack_148 != -0x5db38b49) goto LAB_0ed48990;
LAB_0ed489e3:
      param_2 = (long *)&UNK_0133e465;
      uVar13 = strlen(&UNK_0133e465);
    }
    else {
      lVar29 = *plVar22;
      if (lVar29 == 0 || lVar29 == plVar22[1]) goto LAB_0ed481f4;
      lVar26 = 0;
      bVar34 = false;
      do {
        lVar27 = lVar29;
        if (lVar26 != 0) {
          lVar27 = lVar26;
        }
        bVar3 = lVar26 != 0;
        if (*(long *)(lVar29 + 8) != 0) {
          lVar27 = lVar26;
          bVar3 = bVar34;
        }
        lVar29 = lVar29 + 0x20;
        lVar26 = lVar27;
        bVar34 = bVar3;
      } while (lVar29 != plVar22[1]);
      if (bVar3 || lVar27 == 0) goto LAB_0ed481f4;
      (**(code **)(lVar27 + 0x18))(&uStack_168,lVar18,0);
      if (iStack_148 == -0x5db38b49) goto LAB_0ed489e3;
LAB_0ed48990:
      func_0x0488e290(auStack_1c8,&uStack_168);
      puVar33 = puStack_190;
      if ((puStack_190 != (undefined8 *)0x0) && ((byte)(cStack_1a4 - 1U) < 2)) {
        func_0x048b0900(&uStack_168,auStack_1c8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (puVar33 != (undefined8 *)0x0) goto LAB_0ed489e3;
      param_2 = (long *)&UNK_01411d3a;
      uVar13 = strlen(&UNK_01411d3a);
    }
    if (uVar13 < 0xfffffffffffffff8) {
      if (uVar13 < 0x17) {
        uVar14 = (ulong)uStack_1e8 >> 8;
        uStack_1e8 = (ulong *)CONCAT71((int7)uVar14,(char)uVar13 * '\x02');
        lVar18 = (long)&uStack_1e8 + 1;
        if (uVar13 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_1e8._1_1_ = 0;
          goto joined_r0x0ed48a95;
        }
      }
      else {
        uVar14 = 0x1a;
        if ((uVar13 | 7) != 0x17) {
          uVar14 = (uVar13 | 7) + 1;
        }
        lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
        if (lVar18 == 0) {
          FUN_0eec74c0(uVar14,0);
        }
        unaff_R12 = (ulong *)(uVar14 | 1);
        uStack_1e8 = unaff_R12;
        uStack_1e0 = uVar13;
        lStack_1d8 = lVar18;
      }
      func_0x0eee2f00(lVar18,param_2,uVar13);
      *(undefined1 *)(lVar18 + uVar13) = 0;
joined_r0x0ed48a95:
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(&uStack_168);
      }
      puVar4 = uStack_1e8;
      uVar13 = uStack_1e0;
      if (((ulong)uStack_1e8 & 1) == 0) {
        uVar13 = (ulong)uStack_1e8 >> 1 & 0x7f;
      }
      uVar14 = uVar13 + 0xc;
      if (uVar14 < 0xfffffffffffffff8) {
        uVar24 = *param_5;
        if (uVar14 < 0x17) {
          uStack_1c0 = 0;
          puStack_1b8 = (undefined8 *)0x0;
          auStack_1c8._1_7_ = 0;
          auStack_1c8[0] = (char)uVar14 * '\x02';
        }
        else {
          uVar21 = 0x1a;
          if ((uVar14 | 7) != 0x17) {
            uVar21 = (uVar14 | 7) + 1;
          }
          puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
          if (puStack_1b8 == (undefined8 *)0x0) {
            FUN_0eec74c0(uVar21,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar21 | 1);
          uStack_1c0 = uVar14;
        }
        lVar18 = (long)puStack_1b8 + 0xc;
        bVar34 = ((ulong)auStack_1c8 & 1) == 0;
        puVar33 = puStack_1b8;
        if (bVar34) {
          puVar33 = (undefined8 *)(auStack_1c8 + 1);
        }
        *puVar33 = 0x6465746365707865;
        *(undefined4 *)(puVar33 + 1) = 0x206e6120;
        lVar15 = (long)&uStack_1c0 + 5;
        if (!bVar34) {
          lVar15 = lVar18;
        }
        if (uVar13 != 0) {
          lVar18 = lStack_1d8;
          if (((ulong)puVar4 & 1) == 0) {
            lVar18 = (long)&uStack_1e8 + 1;
          }
          func_0x0eee2ee0(lVar15,lVar18,uVar13);
        }
        *(undefined1 *)(lVar15 + uVar13) = 0;
        uVar13 = (ulong)auStack_1c8 >> 1 & 0x7f;
        puVar33 = (undefined8 *)(auStack_1c8 + 1);
        if (((ulong)auStack_1c8 & 1) != 0) {
          uVar13 = uStack_1c0;
          puVar33 = puStack_1b8;
        }
        uStack_118 = 0;
        if (puVar33 == (undefined8 *)0x0) {
          uStack_118 = (ulong)((uint)uVar13 & 0x7f) << 0x30;
        }
        else {
          lVar18 = uVar13 + 9;
          puVar19 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && puVar19 == (ulong *)0x0) {
            FUN_0eec74c0(lVar18,8);
          }
          *puVar19 = uVar13;
          func_0x0eee2f00(puVar19 + 1,puVar33,uVar13);
          *(undefined1 *)((long)puVar19 + uVar13 + 8) = 0;
          uStack_118 = (ulong)(puVar19 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar24,8,&uStack_118);
        if ((uStack_118 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
        }
        uStack_118 = 0;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar4 & 1) == 0) {
          return;
        }
        func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
        return;
      }
LAB_0ed49951:
      uVar24 = func_0x04882e30();
      uVar24 = func_0x04882e20(uVar24);
      uVar24 = func_0x04882e20(uVar24);
      uVar24 = func_0x04882e20(uVar24);
      func_0x0ee386e0(&uStack_d0);
      uVar24 = func_0x0eee2d70(uVar24);
      uVar24 = func_0x04882e20(uVar24);
      plVar22 = uStack_168;
      uStack_168 = (long *)0x0;
      if (plVar22 != (long *)0x0) {
        func_0x0c93cb20(&uStack_160);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (((ulong)uStack_1e8 & 1) != 0) {
        func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_180 + 0xd0))();
      func_0x0ed6d560(unaff_R12);
      uVar24 = func_0x0eee2d70(uVar24);
      uVar24 = func_0x04882e20(uVar24);
      func_0x04882e20(uVar24);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar13 = func_0x04882e30();
LAB_0ed48cf8:
    fVar35 = (float)uVar13;
LAB_0ed48d10:
    fVar35 = (float)func_0x0eee3ab0(fVar35 / *(float *)(plStack_1f0 + 4));
    puVar20 = (undefined8 *)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35);
    if ((puVar33 < (undefined8 *)0x3) ||
       (uVar13 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555),
       uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333),
       1 < (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      puVar20 = (undefined8 *)func_0x0412c3f0(puVar20);
    }
    else if ((undefined8 *)0x1 < puVar20) {
      lVar18 = 0x3f;
      if ((undefined *)((long)puVar20 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)puVar20 + -1) >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      puVar20 = (undefined8 *)(1L << (-((byte)lVar18 ^ 0x3f) & 0x3f));
    }
    if (unaff_R15 <= puVar20) {
      unaff_R15 = puVar20;
    }
    if (puVar33 <= unaff_R15) goto LAB_0ed48dd9;
  }
  else {
    uStack_c0 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar13 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar13 < uStack_c0)) {
      uStack_d0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_d0);
      if ((uStack_d0 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d0 & 0xff00ffffffffffff) - 8);
      return;
    }
    fVar35 = (float)func_0x0eee3ab0((float)uStack_c0 / *(float *)(plStack_1f0 + 4));
    puVar33 = (undefined8 *)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35);
    unaff_R15 = (undefined8 *)0x2;
    if ((puVar33 == (undefined8 *)0x1) ||
       (unaff_R15 = puVar33, ((ulong)puVar33 & (ulong)((long)puVar33 + -1)) == 0)) {
      puVar33 = (undefined8 *)plStack_1f0[1];
      bVar34 = unaff_R15 < puVar33;
      if (unaff_R15 <= puVar33) {
LAB_0ed4894e:
        if (!bVar34) goto LAB_0ed48dd9;
        uVar13 = plStack_1f0[3];
        if ((long)uVar13 < 0) goto LAB_0ed48cf8;
        fVar35 = (float)(long)uVar13;
        goto LAB_0ed48d10;
      }
    }
    else {
      unaff_R15 = (undefined8 *)func_0x0412c3f0();
      puVar33 = (undefined8 *)plStack_1f0[1];
      bVar34 = unaff_R15 < puVar33;
      if (unaff_R15 <= puVar33) goto LAB_0ed4894e;
    }
  }
  func_0x0c93c250(plStack_1f0,unaff_R15);
LAB_0ed48dd9:
  plStack_128 = param_3;
  func_0x0ed6d600(auStack_f0,*param_5);
  if (uStack_c0 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    plStack_a0 = plStack_1f0 + 2;
    uVar14 = 0;
    uVar13 = uStack_c0;
    puStack_170 = param_5;
    do {
      if ((*(uint *)(auStack_f0._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_f0._8_4_ <= *(uint *)(auStack_f0._0_8_ + 0x2b0))) {
        return;
      }
      puVar16 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar16,uVar14);
      (**(code **)(*param_2 + 200))(param_2,uVar14);
      cVar10 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar10 == '\x01') && (lVar18 = (**(code **)(*param_2 + 0xa8))(param_2), lVar18 != 2)) {
        uStack_f8 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_f8);
        if ((uStack_f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_f8 & 0xff00ffffffffffff) - 8);
        }
        uStack_f8 = 0;
      }
      else {
        cVar10 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar10 == '\0') {
          uStack_100 = uStack_88;
          func_0x0ed5ffe0(*param_5,8,&uStack_100);
          if ((uStack_100 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_100 = 0;
        }
        else {
          uStack_1e8 = (ulong *)0x0;
          uStack_1e0 = 0;
          lStack_1d8 = 0;
          lStack_1a0 = plStack_128[5];
          puStack_1b8 = (undefined8 *)&UNK_048b1ea0;
          uStack_1a8 = 0xa24c74b7;
          pcStack_1b0 = (code *)0x0;
          cStack_1a4 = '\x03';
          auStack_1c8 = (undefined1  [8])&uStack_1e8;
          uStack_198 = 0;
          puStack_190 = (undefined8 *)&UNK_048b1e80;
          func_0x0ed75bc0(&puStack_b0,param_2,auStack_1c8,uStack_d8,&uStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar10 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar10 == '\0') {
            uStack_108 = uStack_98;
            func_0x0ed5ffe0(*param_5,8,&uStack_108);
            if ((uStack_108 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
            }
            uStack_108 = 0;
          }
          else {
            uVar13 = (ulong)uStack_1e8 >> 1 & 0x7f;
            lVar18 = (long)&uStack_1e8 + 1;
            if (((ulong)uStack_1e8 & 1) != 0) {
              uVar13 = uStack_1e0;
              lVar18 = lStack_1d8;
            }
            uVar21 = FUN_04883620(&uStack_168,lVar18,uVar13);
            uVar13 = plStack_1f0[1];
            if (uVar13 != 0) {
              uVar30 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
              uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333);
              uVar30 = ((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar30 >> 0x38 < 2) {
                uVar23 = uVar13 - 1 & uVar21;
              }
              else {
                uVar23 = uVar21;
                if (uVar13 <= uVar21) {
                  if ((uVar21 | uVar13) >> 0x20 == 0) {
                    uVar23 = (uVar21 & 0xffffffff) % (uVar13 & 0xffffffff);
                  }
                  else {
                    uVar23 = uVar21 % uVar13;
                  }
                }
              }
              puVar33 = *(undefined8 **)(*plStack_1f0 + uVar23 * 8);
              uStack_120 = uVar23;
              if ((puVar33 != (undefined8 *)0x0) &&
                 (plVar22 = (long *)*puVar33, plVar22 != (long *)0x0)) {
                lStack_e0 = lStack_1d8;
                uVar31 = uStack_1e0;
                if (((ulong)uStack_1e8 & 1) == 0) {
                  lStack_e0 = (long)&uStack_1e8 + 1;
                  uVar31 = (ulong)uStack_1e8 >> 1 & 0x7f;
                }
                if ((byte)(uVar30 >> 0x38) < 2) {
                  uVar30 = uVar13 - 1;
                  uStack_a8 = uVar30;
                  do {
                    if (plVar22[1] == uVar21) {
                      bVar9 = *(byte *)(plVar22 + 2);
                      if ((bVar9 & 1) == 0) {
                        uVar28 = (ulong)(bVar9 >> 1);
                      }
                      else {
                        uVar28 = plVar22[3];
                      }
                      if (uVar28 == uVar31) {
                        if ((bVar9 & 1) == 0) {
                          lVar18 = (long)plVar22 + 0x11;
                        }
                        else {
                          lVar18 = plVar22[4];
                        }
                        iVar11 = func_0x0eee3000(lVar18,lStack_e0,uVar31);
                        uVar30 = uStack_a8;
                        uVar23 = uStack_120;
                        if (iVar11 == 0) goto LAB_0ed496d5;
                      }
                    }
                    else if ((plVar22[1] & uVar30) != uVar23) break;
                    plVar22 = (long *)*plVar22;
                  } while (plVar22 != (long *)0x0);
                }
                else {
                  do {
                    uVar30 = plVar22[1];
                    if (uVar30 == uVar21) {
                      bVar9 = *(byte *)(plVar22 + 2);
                      if ((bVar9 & 1) == 0) {
                        uVar30 = (ulong)(bVar9 >> 1);
                      }
                      else {
                        uVar30 = plVar22[3];
                      }
                      if (uVar30 == uVar31) {
                        if ((bVar9 & 1) == 0) {
                          lVar18 = (long)plVar22 + 0x11;
                        }
                        else {
                          lVar18 = plVar22[4];
                        }
                        iVar11 = func_0x0eee3000(lVar18,lStack_e0,uVar31);
                        uVar23 = uStack_120;
                        if (iVar11 == 0) goto LAB_0ed496d5;
                      }
                    }
                    else {
                      if (uVar13 <= uVar30) {
                        if ((uVar30 | uVar13) >> 0x20 == 0) {
                          uVar30 = (uVar30 & 0xffffffff) % (uVar13 & 0xffffffff);
                        }
                        else {
                          uVar30 = uVar30 % uVar13;
                        }
                      }
                      if (uVar30 != uVar23) break;
                    }
                    plVar22 = (long *)*plVar22;
                  } while (plVar22 != (long *)0x0);
                }
              }
            }
            plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
            if (plVar22 == (long *)0x0) {
              FUN_0eec74c0(0x40,0);
            }
            uStack_160 = plStack_1f0;
            puStack_158 = (undefined *)0x0;
            *plVar22 = 0;
            plVar22[1] = uVar21;
            uStack_168 = plVar22;
            if (((ulong)uStack_1e8 & 1) == 0) {
              plVar22[4] = lStack_1d8;
              plVar22[2] = (long)uStack_1e8;
              plVar22[3] = uStack_1e0;
            }
            else {
              func_0x0412e5e0(plVar22 + 2,lStack_1d8,uStack_1e0);
            }
            plVar22[5] = 0;
            plVar22[6] = 0;
            plVar22[7] = 0;
            puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
            if ((long)uVar13 < 0) {
              fVar36 = (float)uVar13;
              fVar35 = *(float *)(plStack_1f0 + 4);
              if (uVar13 != 0) goto LAB_0ed494b4;
LAB_0ed494c5:
              uVar30 = 1;
              if (2 < uVar13) {
                uVar30 = (ulong)((uVar13 & uVar13 - 1) != 0);
              }
              uVar30 = uVar13 * 2 | uVar30;
              fVar35 = (float)func_0x0eee3ab0((float)(plStack_1f0[3] + 1) / fVar35);
              uVar13 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
              if (uVar13 < uVar30) {
                uVar13 = uVar30;
              }
              uVar30 = 2;
              if ((uVar13 == 1) || (uVar30 = uVar13, (uVar13 & uVar13 - 1) == 0)) {
                uVar13 = plStack_1f0[1];
                bVar34 = uVar30 < uVar13;
                if (uVar30 <= uVar13) goto LAB_0ed4955f;
LAB_0ed49537:
                func_0x0c93c250(plStack_1f0,uVar30);
              }
              else {
                uVar30 = func_0x0412c3f0();
                uVar13 = plStack_1f0[1];
                bVar34 = uVar30 < uVar13;
                if (uVar13 < uVar30) goto LAB_0ed49537;
LAB_0ed4955f:
                if (bVar34) {
                  fVar35 = (float)func_0x0eee3ab0((float)(ulong)plStack_1f0[3] /
                                                  *(float *)(plStack_1f0 + 4));
                  uVar23 = (long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35;
                  if ((uVar13 < 3) ||
                     (uVar31 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
                     uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333),
                     1 < (byte)(((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar23 = func_0x0412c3f0(uVar23);
                  }
                  else if (1 < uVar23) {
                    lVar18 = 0x3f;
                    if (uVar23 - 1 != 0) {
                      for (; uVar23 - 1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                      }
                    }
                    uVar23 = 1L << (-((byte)lVar18 ^ 0x3f) & 0x3f);
                  }
                  if (uVar30 <= uVar23) {
                    uVar30 = uVar23;
                  }
                  if (uVar30 < uVar13) goto LAB_0ed49537;
                }
              }
              uVar13 = plStack_1f0[1];
              if ((uVar13 & uVar13 - 1) == 0) {
                uVar30 = uVar21 & uVar13 - 1;
              }
              else {
                uVar30 = uVar21;
                if (uVar13 <= uVar21) {
                  if ((uVar21 | uVar13) >> 0x20 == 0) {
                    uVar30 = (uVar21 & 0xffffffff) % (uVar13 & 0xffffffff);
                  }
                  else {
                    uVar30 = uVar21 % uVar13;
                  }
                }
              }
            }
            else {
              fVar36 = (float)(long)uVar13;
              fVar35 = *(float *)(plStack_1f0 + 4);
              if (uVar13 == 0) goto LAB_0ed494c5;
LAB_0ed494b4:
              uVar30 = uStack_120;
              if (fVar36 * fVar35 < (float)(plStack_1f0[3] + 1)) goto LAB_0ed494c5;
            }
            lVar18 = *plStack_1f0;
            plVar22 = *(long **)(lVar18 + uVar30 * 8);
            if (plVar22 == (long *)0x0) {
              *uStack_168 = *plStack_a0;
              *plStack_a0 = (long)uStack_168;
              *(long **)(lVar18 + uVar30 * 8) = plStack_a0;
              if (*uStack_168 != 0) {
                uVar21 = *(ulong *)(*uStack_168 + 8);
                if ((uVar13 & uVar13 - 1) == 0) {
                  *(long **)(lVar18 + (uVar21 & uVar13 - 1) * 8) = uStack_168;
                }
                else {
                  if (uVar13 <= uVar21) {
                    if ((uVar21 | uVar13) >> 0x20 == 0) {
                      *(long **)(lVar18 + ((uVar21 & 0xffffffff) % (uVar13 & 0xffffffff)) * 8) =
                           uStack_168;
                      goto LAB_0ed496cc;
                    }
                    uVar21 = uVar21 % uVar13;
                  }
                  *(long **)(lVar18 + uVar21 * 8) = uStack_168;
                }
              }
            }
            else {
              *uStack_168 = *plVar22;
              *plVar22 = (long)uStack_168;
            }
LAB_0ed496cc:
            plStack_1f0[3] = plStack_1f0[3] + 1;
            plVar22 = uStack_168;
LAB_0ed496d5:
            param_5 = puStack_170;
            param_2 = plStack_180;
            uStack_168 = plVar22 + 5;
            lStack_140 = plStack_128[5];
            puStack_158 = &UNK_0ed40260;
            iStack_148 = 0x796598b3;
            pcStack_150 = (code *)0x0;
            uStack_144 = 3;
            uStack_138 = 0;
            puStack_130 = &UNK_0ed40180;
            func_0x0ed75bc0(&puStack_b8,plStack_180,&uStack_168,uStack_d8,&uStack_58);
            (**(code **)(*param_2 + 0xd0))(param_2);
            uVar13 = uStack_c0;
            if (pcStack_150 != (code *)0x0) {
              (*pcStack_150)(&uStack_168);
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
      lVar18 = *(long *)(puVar16 + 2);
      uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puVar16 * 0x20);
      *puVar16 = uVar32;
      if (puVar16[0x48] == 0) {
        uVar25 = puVar16[4];
LAB_0ed49835:
        lVar15 = lVar18 + (ulong)uVar25 * 0x20;
        uVar21 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar25 * 0x20);
        if (uVar21 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar21 * 8))(auStack_1c8,lVar15 + -0x18);
          uVar25 = puVar16[4];
        }
        *(undefined4 *)(lVar15 + -0x10) = 0xffffffff;
        puVar16[4] = uVar25 - 1;
      }
      else if ((*(uint *)(*(long *)(puVar16 + 0x46) + 0x18 + (ulong)(puVar16[0x48] - 1) * 0x30) !=
                uVar32) && (uVar25 = puVar16[4], uVar32 == uVar25 - 1)) goto LAB_0ed49835;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (uVar14 < uVar13);
  }
  return;
}


