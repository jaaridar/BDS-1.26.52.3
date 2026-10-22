/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5e5bb0 (ELF vaddr 0xe4e5bb0)
 * Label: caller-of-callee
 * Body:  [[0e5e5bb0, 0e5e625a] [0e5e6260, 0e5e6afb] [0e5e6b00, 0e5e6d0a] [0e5e6d10, 0e5e6d7e] [0e5e6d80, 0e5e6f05] [0e5e6f10, 0e5e6fbc] [0e5e6fc0, 0e5e748a] [0e5e7490, 0e5e760e] [0e5e7805, 0e5e7831] [0e5e786b, 0e5e7897]]
 * Ghidra: FUN_0e5e5bb0
 */


/* WARNING: Removing unreachable block (ram,0x0e5e6597) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e5e5bb0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  uint *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 *puVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  char cStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  ulong uStack_180;
  undefined1 uStack_171;
  long *plStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  int iStack_138;
  undefined1 uStack_134;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long *plStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
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
  
  pcVar9 = (code *)param_3[7];
  uStack_c8 = param_4;
  if (pcVar9 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar30 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar30 = (undefined *)param_3[7] == &UNK_0e5e9010;
    }
    param_3[2] = (long)&UNK_0e5e91b0;
    *(undefined4 *)(param_3 + 4) = 0x588f64f6;
    param_3[3] = (long)&UNK_0e5e93d0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x28);
    }
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    *(undefined4 *)(plVar10 + 4) = 0x3f800000;
    *param_3 = (long)plVar10;
    pcVar9 = (code *)&UNK_0e5e9010;
    param_3[7] = (long)&UNK_0e5e9010;
    if (bVar30) {
      lVar15 = param_3[6];
    }
    else {
      lVar15 = 0;
    }
    param_3[6] = lVar15;
    cVar7 = '\x01';
    plStack_1f0 = plVar10;
LAB_0e5e5cd9:
    puStack_a8 = &UNK_0ef44b00;
    if (plStack_1f0 == (long *)0x0) goto LAB_0e5e5ce1;
  }
  else {
    cVar7 = *(char *)((long)param_3 + 0x24);
    plVar10 = (long *)*param_3;
    plStack_1f0 = plVar10;
    if (cVar7 == '\x02') {
      plStack_1f0 = param_3;
    }
    if ((int)param_3[4] == 0x588f64f6) goto LAB_0e5e5cd9;
LAB_0e5e5ce1:
    puStack_a8 = &UNK_0ef44b00;
    lVar15 = param_3[5];
    lVar11 = param_3[6];
    if (lVar11 == 0) {
      (*pcVar9)(0,param_3,0);
      lVar11 = param_3[6];
      cVar7 = *(char *)((long)param_3 + 0x24);
      plVar10 = (long *)*param_3;
    }
    if (cVar7 == '\x02') {
      plVar10 = param_3;
    }
    plStack_1f0 = (long *)func_0x0488e200(lVar15,lVar11,0x588f64f6,plVar10);
  }
  uStack_58 = *param_5;
  uStack_50 = param_5[1];
  plVar10 = (long *)param_5[2];
  uStack_80 = uStack_58;
  uStack_78 = uStack_50;
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0);
    uStack_58 = *param_5;
    uStack_50 = param_5[1];
    plVar10 = (long *)param_5[2];
  }
  plVar27 = param_5 + 3;
  uStack_68 = *(undefined4 *)(param_5 + 3);
  uStack_64 = *(undefined *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_b0 = &UNK_0f4c2190;
  if (plVar10 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar10 + 0x30))(plVar10,1);
  }
  uStack_40 = (undefined4)*plVar27;
  uStack_3c = *(undefined *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  if (bVar6 == 1) {
    plStack_118 = param_3;
    param_3 = (long *)(**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (plVar10 = (long *)(**(code **)(*(long *)param_5[2] + 0x10))(), plVar10 < param_3)) {
      uStack_b8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_b8);
      if ((uStack_b8 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
      return;
    }
    puStack_d0 = param_5;
    func_0x0ed6d600(&uStack_1e8,*param_5);
    plStack_170 = param_2;
    plVar10 = uStack_1e8;
    do {
      if (param_3 == (long *)0x0) {
        return;
      }
      uVar26 = (uint)plStack_1e0;
      if ((uint)plStack_1e0 <= *(uint *)(plVar10 + 0x56) && *(uint *)(plVar10 + 0x56) != 0xffffffff)
      {
        return;
      }
      uStack_1e8 = plVar10;
      auVar33 = (**(code **)(*param_2 + 0xc0))(param_2);
      puVar29 = puStack_70;
      auStack_f8 = auVar33;
      if (puStack_70 != (undefined8 *)0x0) {
        lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (lVar15 == 0) {
          func_0x048b0de0(&uStack_158,&uStack_171);
          _DAT_0f54fd90 = (undefined4)uStack_158;
          uRam000000000f54fd94 = uStack_158._4_4_;
          uVar3 = (undefined4)uStack_150;
          uVar4 = uStack_150._4_4_;
          uStack_158 = (long *)0x0;
          uStack_150 = (long *)0x0;
          plVar10 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar3;
          uRam000000000f54fd9c = uVar4;
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar27 = plVar10 + 1;
            lVar15 = *plVar27;
            *plVar27 = *plVar27 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              func_0x0412c2d0(plVar10);
            }
          }
          plVar10 = uStack_150;
          if (uStack_150 != (long *)0x0) {
            LOCK();
            plVar27 = uStack_150 + 1;
            lVar15 = *plVar27;
            *plVar27 = *plVar27 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*uStack_150 + 0x10))(uStack_150);
              func_0x0412c2d0(plVar10);
            }
          }
          lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_1b8 = (undefined8 *)&UNK_05ea5bd0;
        uStack_1a8 = 0x989eedf9;
        pcStack_1b0 = (code *)0x0;
        cStack_1a4 = '\x04';
        auStack_1c8 = (undefined1  [8])auStack_f8;
        uStack_198 = 0;
        plStack_190 = (long *)&UNK_05ea5bb0;
        lStack_1a0 = lVar15;
        (**(code **)*puVar29)(puVar29,auStack_1c8,uStack_80);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        plVar10 = uStack_1e8;
        uVar26 = (uint)plStack_1e0;
      }
      uVar5 = auStack_f8._8_8_;
      uVar18 = auStack_f8._0_8_;
      if ((*(uint *)(plVar10 + 0x56) == 0xffffffff) || (*(uint *)(plVar10 + 0x56) < uVar26)) {
        uVar1 = *puStack_d0;
        uStack_160 = 0;
        if (auStack_f8._0_8_ == 0) {
          uStack_160 = (auStack_f8._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar15 = auStack_f8._8_8_ + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
          if (lVar15 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar15,8);
          }
          *puVar12 = uVar5;
          func_0x0eee2f00(puVar12 + 1,uVar18,uVar5);
          *(undefined1 *)((long)(puVar12 + 1) + uVar5) = 0;
          uStack_160 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar13 = (uint *)func_0x0ed6d180(uVar1,&uStack_160,0);
        if ((uStack_160 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_160 & 0xff00ffffffffffff) - 8);
        }
        plVar10 = (long *)auStack_f8._8_8_;
        uVar18 = auStack_f8._0_8_;
        uStack_160 = 0;
        if ((long *)0xfffffffffffffff7 < (ulong)auStack_f8._8_8_) {
          func_0x04882e30();
          goto LAB_0e5e75bb;
        }
        if ((ulong)auStack_f8._8_8_ < (long *)0x17) {
          auStack_1c8[0] = auStack_f8[8] * '\x02';
          puVar14 = auStack_1c8 + 1;
          if ((long *)auStack_f8._8_8_ != (long *)0x0) goto LAB_0e5e62ab;
        }
        else {
          uVar28 = (auStack_f8._8_8_ | 7) + 1;
          if ((auStack_f8._8_8_ | 7) == 0x17) {
            uVar28 = 0x1a;
          }
          puVar14 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
          if (puVar14 == (undefined *)0x0) {
            func_0x0eec74c0(uVar28,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar28 | 1);
          uStack_1c0 = plVar10;
          puStack_1b8 = (undefined8 *)puVar14;
LAB_0e5e62ab:
          memmove(puVar14,uVar18,plVar10);
        }
        puVar14[(long)plVar10] = 0;
        uStack_158 = (long *)0x0;
        lVar15 = func_0x0e5e8a00(plStack_1f0,auStack_1c8,auStack_1c8,&uStack_158);
        param_2 = plStack_170;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        auStack_1c8 = (undefined1  [8])(lVar15 + 0x28);
        lStack_1a0 = plStack_118[5];
        puStack_1b8 = (undefined8 *)&UNK_05fb2500;
        uStack_1a8 = 0xfce8f05e;
        pcStack_1b0 = (code *)0x0;
        cStack_1a4 = '\x03';
        uStack_198 = 0;
        plStack_190 = (long *)&UNK_05fb24e0;
        func_0x0ed75bc0(&puStack_b0,param_2,auStack_1c8,uStack_c8,&uStack_58);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        lVar15 = *(long *)(puVar13 + 2);
        uVar26 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
        *puVar13 = uVar26;
        if (puVar13[0x48] == 0) {
          uVar19 = puVar13[4];
LAB_0e5e63df:
          lVar11 = lVar15 + (ulong)uVar19 * 0x20;
          uVar28 = (ulong)*(uint *)(lVar15 + -0x10 + (ulong)uVar19 * 0x20);
          if (uVar28 != 0xffffffff) {
            (**(code **)(&UNK_0f4e40d0 + uVar28 * 8))(auStack_1c8,lVar11 + -0x18);
            uVar19 = puVar13[4];
          }
          *(undefined4 *)(lVar11 + -0x10) = 0xffffffff;
          puVar13[4] = uVar19 - 1;
        }
        else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                  uVar26) && (uVar19 = puVar13[4], uVar26 == uVar19 - 1)) goto LAB_0e5e63df;
        (**(code **)(*param_2 + 0xd0))(param_2);
      }
      param_3 = (long *)((long)param_3 + -1);
      plVar10 = uStack_1e8;
    } while( true );
  }
  if ((bVar6 & 2) == 0) {
    lVar15 = param_3[5];
    lVar11 = func_0x048b2190(lVar15);
    plVar10 = *(long **)(lVar11 + 0x78);
    if (plVar10 == (long *)0x0) {
LAB_0e5e5f14:
      if (*(code **)(lVar11 + 0x30) == (code *)0x0) {
        puStack_148 = &UNK_0488e0b0;
        iStack_138 = 0x48b5725f;
        pcStack_140 = (code *)0x0;
        uStack_134 = 0;
        uStack_158 = (long *)0x0;
        uStack_128 = 0;
        puStack_120 = (undefined *)0x0;
        lStack_130 = lVar15;
        goto LAB_0e5e660e;
      }
      (**(code **)(lVar11 + 0x30))(&uStack_158,lVar15);
      if (iStack_138 != -0x5db38b49) goto LAB_0e5e660e;
LAB_0e5e6661:
      puVar29 = (undefined8 *)&UNK_0133e465;
      plVar10 = (long *)func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar23 = *plVar10;
      if (lVar23 == 0 || lVar23 == plVar10[1]) goto LAB_0e5e5f14;
      lVar20 = 0;
      bVar30 = false;
      do {
        lVar21 = lVar23;
        if (lVar20 != 0) {
          lVar21 = lVar20;
        }
        bVar2 = lVar20 != 0;
        if (*(long *)(lVar23 + 8) != 0) {
          lVar21 = lVar20;
          bVar2 = bVar30;
        }
        lVar23 = lVar23 + 0x20;
        lVar20 = lVar21;
        bVar30 = bVar2;
      } while (lVar23 != plVar10[1]);
      if (bVar2 || lVar21 == 0) goto LAB_0e5e5f14;
      (**(code **)(lVar21 + 0x18))(&uStack_158,lVar15,0);
      if (iStack_138 == -0x5db38b49) goto LAB_0e5e6661;
LAB_0e5e660e:
      func_0x0488e290(auStack_1c8,&uStack_158);
      plVar27 = plStack_190;
      if ((plStack_190 != (long *)0x0) && ((byte)(cStack_1a4 - 1U) < 2)) {
        func_0x048b0900(&uStack_158,auStack_1c8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (plVar27 != (long *)0x0) goto LAB_0e5e6661;
      puVar29 = (undefined8 *)&UNK_01411d3a;
      plVar10 = (long *)func_0x0eee2e90(&UNK_01411d3a);
    }
    if (plVar10 < (long *)0xfffffffffffffff8) {
      if (plVar10 < (long *)0x17) {
        uVar28 = (ulong)uStack_1e8 >> 8;
        uStack_1e8 = (long *)CONCAT71((int7)uVar28,(char)plVar10 * '\x02');
        lVar15 = (long)&uStack_1e8 + 1;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_1e8._1_1_ = 0;
          goto joined_r0x0e5e6713;
        }
      }
      else {
        uVar28 = 0x1a;
        if (((ulong)plVar10 | 7) != 0x17) {
          uVar28 = ((ulong)plVar10 | 7) + 1;
        }
        lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
        if (lVar15 == 0) {
          func_0x0eec74c0(uVar28,0);
        }
        param_3 = (long *)(uVar28 | 1);
        uStack_1e8 = param_3;
        plStack_1e0 = plVar10;
        lStack_1d8 = lVar15;
      }
      func_0x0eee2f00(lVar15,puVar29,plVar10);
      *(undefined1 *)(lVar15 + (long)plVar10) = 0;
joined_r0x0e5e6713:
      if (pcStack_140 != (code *)0x0) {
        (*pcStack_140)(&uStack_158);
      }
      plVar27 = uStack_1e8;
      plVar22 = plStack_1e0;
      if (((ulong)uStack_1e8 & 1) == 0) {
        plVar22 = (long *)((ulong)uStack_1e8 >> 1 & 0x7f);
      }
      uVar28 = (long)plVar22 + 0xc;
      if (uVar28 < 0xfffffffffffffff8) {
        uVar18 = *param_5;
        if (uVar28 < 0x17) {
          uStack_1c0 = (long *)0x0;
          puStack_1b8 = (undefined8 *)0x0;
          auStack_1c8._1_7_ = 0;
          auStack_1c8[0] = (char)uVar28 * '\x02';
        }
        else {
          uVar16 = 0x1a;
          if ((uVar28 | 7) != 0x17) {
            uVar16 = (uVar28 | 7) + 1;
          }
          puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
          if (puStack_1b8 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar16,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar16 | 1);
          uStack_1c0 = (long *)uVar28;
        }
        lVar15 = (long)puStack_1b8 + 0xc;
        bVar30 = ((ulong)auStack_1c8 & 1) == 0;
        puVar29 = puStack_1b8;
        if (bVar30) {
          puVar29 = (undefined8 *)(auStack_1c8 + 1);
        }
        *puVar29 = 0x6465746365707865;
        *(undefined4 *)(puVar29 + 1) = 0x206e6120;
        lVar11 = (long)&uStack_1c0 + 5;
        if (!bVar30) {
          lVar11 = lVar15;
        }
        if (plVar22 != (long *)0x0) {
          lVar15 = lStack_1d8;
          if (((ulong)plVar27 & 1) == 0) {
            lVar15 = (long)&uStack_1e8 + 1;
          }
          memmove(lVar11,lVar15,plVar22);
        }
        *(undefined1 *)(lVar11 + (long)plVar22) = 0;
        uVar28 = (ulong)auStack_1c8 >> 1 & 0x7f;
        puVar29 = (undefined8 *)(auStack_1c8 + 1);
        if (((ulong)auStack_1c8 & 1) != 0) {
          uVar28 = (ulong)uStack_1c0;
          puVar29 = puStack_1b8;
        }
        uStack_168 = 0;
        if (puVar29 == (undefined8 *)0x0) {
          uStack_168 = (ulong)((uint)uVar28 & 0x7f) << 0x30;
        }
        else {
          lVar15 = uVar28 + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
          if (lVar15 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar15,8);
          }
          *puVar12 = uVar28;
          func_0x0eee2f00(puVar12 + 1,puVar29,uVar28);
          *(undefined1 *)((long)puVar12 + uVar28 + 8) = 0;
          uStack_168 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar18,8,&uStack_168);
        if ((uStack_168 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_168 & 0xff00ffffffffffff) - 8);
        }
        uStack_168 = 0;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        if (((ulong)plVar27 & 1) == 0) {
          return;
        }
        func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
        return;
      }
LAB_0e5e75bb:
      uVar18 = func_0x04882e30();
      uVar18 = func_0x04882e20(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x0ee386e0(&uStack_c0);
      uVar18 = func_0x0eee2d70(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x0d294820(&uStack_158);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (((ulong)uStack_1e8 & 1) != 0) {
        func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
      }
      (**(code **)(*plVar10 + 0xd0))(plVar10);
      func_0x0ed6d560(param_3);
      uVar18 = func_0x0eee2d70(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x04882e20(uVar18);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar28 = func_0x04882e30();
    param_5 = puVar29;
LAB_0e5e6976:
    fVar31 = (float)uVar28;
LAB_0e5e698e:
    fVar31 = (float)func_0x0eee3ab0(fVar31 / *(float *)(plStack_1f0 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    if ((plVar27 < (long *)0x3) ||
       (uVar28 = (long)plVar27 - ((ulong)plVar27 >> 1 & 0x5555555555555555),
       uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
       1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar10 = (long *)func_0x0412c3f0(plVar10);
    }
    else if ((long *)0x1 < plVar10) {
      lVar15 = 0x3f;
      if ((long)plVar10 - 1U != 0) {
        for (; (long)plVar10 - 1U >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      plVar10 = (long *)(1L << (-((byte)lVar15 ^ 0x3f) & 0x3f));
    }
    if (param_3 <= plVar10) {
      param_3 = plVar10;
    }
    if (plVar27 <= param_3) goto LAB_0e5e6a57;
  }
  else {
    uVar28 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar16 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar16 < uVar28)) {
      uStack_c0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_c0);
      if ((uStack_c0 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_118 = param_3;
    fVar31 = (float)func_0x0eee3ab0((float)uVar28 / *(float *)(plStack_1f0 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    param_3 = (long *)0x2;
    if ((plVar10 != (long *)0x1) && (param_3 = plVar10, ((ulong)plVar10 & (long)plVar10 - 1U) != 0))
    {
      param_3 = (long *)func_0x0412c3f0();
    }
    plVar27 = (long *)plStack_1f0[1];
    uStack_d8 = uVar28;
    if (param_3 <= plVar27) {
      if (plVar27 <= param_3) goto LAB_0e5e6a57;
      uVar28 = plStack_1f0[3];
      if ((long)uVar28 < 0) goto LAB_0e5e6976;
      fVar31 = (float)(long)uVar28;
      goto LAB_0e5e698e;
    }
  }
  func_0x0d294870(plStack_1f0,param_3);
LAB_0e5e6a57:
  func_0x0ed6d600(auStack_f8,*param_5);
  if (uStack_d8 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    plStack_a0 = plStack_1f0 + 2;
    uVar16 = 0;
    uVar28 = uStack_d8;
    puStack_d0 = param_5;
    do {
      if ((*(uint *)(auStack_f8._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_f8._8_4_ <= *(uint *)(auStack_f8._0_8_ + 0x2b0))) {
        return;
      }
      puVar13 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar13,uVar16);
      (**(code **)(*param_2 + 200))(param_2,uVar16);
      cVar7 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar7 == '\x01') && (lVar15 = (**(code **)(*param_2 + 0xa8))(param_2), lVar15 != 2)) {
        uStack_100 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_100);
        if ((uStack_100 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8);
        }
        uStack_100 = 0;
      }
      else {
        cVar7 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar7 == '\0') {
          uStack_108 = uStack_88;
          func_0x0ed5ffe0(*param_5,8,&uStack_108);
          if ((uStack_108 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_108 = 0;
        }
        else {
          uStack_1e8 = (long *)0x0;
          plStack_1e0 = (long *)0x0;
          lStack_1d8 = 0;
          lStack_1a0 = plStack_118[5];
          puStack_1b8 = (undefined8 *)&UNK_048b1ea0;
          uStack_1a8 = 0xa24c74b7;
          pcStack_1b0 = (code *)0x0;
          cStack_1a4 = '\x03';
          auStack_1c8 = (undefined1  [8])&uStack_1e8;
          uStack_198 = 0;
          plStack_190 = (long *)&UNK_048b1e80;
          func_0x0ed75bc0(&puStack_a8,param_2,auStack_1c8,uStack_c8,&uStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar7 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar7 == '\0') {
            uStack_110 = uStack_98;
            func_0x0ed5ffe0(*param_5,8,&uStack_110);
            if ((uStack_110 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8);
            }
            uStack_110 = 0;
          }
          else {
            plVar10 = (long *)((ulong)uStack_1e8 >> 1 & 0x7f);
            lVar15 = (long)&uStack_1e8 + 1;
            if (((ulong)uStack_1e8 & 1) != 0) {
              plVar10 = plStack_1e0;
              lVar15 = lStack_1d8;
            }
            uStack_180 = func_0x04883620(&uStack_158,lVar15,plVar10);
            uVar28 = plStack_1f0[1];
            if (uVar28 != 0) {
              uVar24 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
              uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
              uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar24 >> 0x38 < 2) {
                uVar17 = uVar28 - 1 & uStack_180;
              }
              else {
                uVar17 = uStack_180;
                if (uVar28 <= uStack_180) {
                  if ((uStack_180 | uVar28) >> 0x20 == 0) {
                    uVar17 = (uStack_180 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar17 = uStack_180 % uVar28;
                  }
                }
              }
              puVar29 = *(undefined8 **)(*plStack_1f0 + uVar17 * 8);
              uStack_e0 = uVar17;
              if ((puVar29 != (undefined8 *)0x0) &&
                 (plVar10 = (long *)*puVar29, plVar10 != (long *)0x0)) {
                lStack_e8 = lStack_1d8;
                plVar27 = plStack_1e0;
                if (((ulong)uStack_1e8 & 1) == 0) {
                  lStack_e8 = (long)&uStack_1e8 + 1;
                  plVar27 = (long *)((ulong)uStack_1e8 >> 1 & 0x7f);
                }
                if ((byte)(uVar24 >> 0x38) < 2) {
                  plStack_170 = param_2;
                  do {
                    if (plVar10[1] == uStack_180) {
                      bVar6 = *(byte *)(plVar10 + 2);
                      if ((bVar6 & 1) == 0) {
                        plVar22 = (long *)(ulong)(bVar6 >> 1);
                      }
                      else {
                        plVar22 = (long *)plVar10[3];
                      }
                      if (plVar22 == plVar27) {
                        if ((bVar6 & 1) == 0) {
                          lVar15 = (long)plVar10 + 0x11;
                        }
                        else {
                          lVar15 = plVar10[4];
                        }
                        iVar8 = bcmp(lVar15,lStack_e8,plVar27);
                        uVar17 = uStack_e0;
                        param_2 = plStack_170;
                        if (iVar8 == 0) goto LAB_0e5e7337;
                      }
                    }
                    else {
                      param_2 = plStack_170;
                      if ((plVar10[1] & uVar28 - 1) != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                    param_2 = plStack_170;
                  } while (plVar10 != (long *)0x0);
                }
                else {
                  do {
                    uVar24 = plVar10[1];
                    if (uVar24 == uStack_180) {
                      bVar6 = *(byte *)(plVar10 + 2);
                      if ((bVar6 & 1) == 0) {
                        plVar22 = (long *)(ulong)(bVar6 >> 1);
                      }
                      else {
                        plVar22 = (long *)plVar10[3];
                      }
                      if (plVar22 == plVar27) {
                        if ((bVar6 & 1) == 0) {
                          lVar15 = (long)plVar10 + 0x11;
                        }
                        else {
                          lVar15 = plVar10[4];
                        }
                        iVar8 = bcmp(lVar15,lStack_e8,plVar27);
                        uVar17 = uStack_e0;
                        if (iVar8 == 0) goto LAB_0e5e7337;
                      }
                    }
                    else {
                      if (uVar28 <= uVar24) {
                        if ((uVar24 | uVar28) >> 0x20 == 0) {
                          uVar24 = (uVar24 & 0xffffffff) % (uVar28 & 0xffffffff);
                        }
                        else {
                          uVar24 = uVar24 % uVar28;
                        }
                      }
                      if (uVar24 != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                  } while (plVar10 != (long *)0x0);
                }
              }
            }
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
            if (plVar10 == (long *)0x0) {
              func_0x0eec74c0(0x30,0);
            }
            uStack_150 = plStack_1f0;
            puStack_148 = (undefined *)0x0;
            *plVar10 = 0;
            plVar10[1] = uStack_180;
            uStack_158 = plVar10;
            if (((ulong)uStack_1e8 & 1) == 0) {
              plVar10[4] = lStack_1d8;
              plVar10[2] = (long)uStack_1e8;
              plVar10[3] = (long)plStack_1e0;
            }
            else {
              func_0x0412e5e0(plVar10 + 2,lStack_1d8,plStack_1e0);
            }
            plVar10[5] = 0;
            puStack_148 = (undefined *)CONCAT71(puStack_148._1_7_,1);
            if ((long)uVar28 < 0) {
              fVar32 = (float)uVar28;
              fVar31 = *(float *)(plStack_1f0 + 4);
              if (uVar28 != 0) goto LAB_0e5e7121;
LAB_0e5e712e:
              uVar24 = 1;
              if (2 < uVar28) {
                uVar24 = (ulong)((uVar28 & uVar28 - 1) != 0);
              }
              uVar24 = uVar28 * 2 | uVar24;
              fVar31 = (float)func_0x0eee3ab0((float)(plStack_1f0[3] + 1) / fVar31);
              uVar28 = (long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31;
              if (uVar28 < uVar24) {
                uVar28 = uVar24;
              }
              uVar24 = 2;
              if ((uVar28 == 1) || (uVar24 = uVar28, (uVar28 & uVar28 - 1) == 0)) {
                uVar28 = plStack_1f0[1];
                bVar30 = uVar24 < uVar28;
                if (uVar24 <= uVar28) goto LAB_0e5e71c8;
LAB_0e5e71a0:
                func_0x0d294870(plStack_1f0,uVar24);
              }
              else {
                uVar24 = func_0x0412c3f0();
                uVar28 = plStack_1f0[1];
                bVar30 = uVar24 < uVar28;
                if (uVar28 < uVar24) goto LAB_0e5e71a0;
LAB_0e5e71c8:
                if (bVar30) {
                  fVar31 = (float)func_0x0eee3ab0((float)(ulong)plStack_1f0[3] /
                                                  *(float *)(plStack_1f0 + 4));
                  uVar17 = (long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31;
                  if ((uVar28 < 3) ||
                     (uVar25 = uVar28 - (uVar28 >> 1 & 0x5555555555555555),
                     uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
                     1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar17 = func_0x0412c3f0(uVar17);
                  }
                  else if (1 < uVar17) {
                    lVar15 = 0x3f;
                    if (uVar17 - 1 != 0) {
                      for (; uVar17 - 1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                      }
                    }
                    uVar17 = 1L << (-((byte)lVar15 ^ 0x3f) & 0x3f);
                  }
                  if (uVar24 <= uVar17) {
                    uVar24 = uVar17;
                  }
                  if (uVar24 < uVar28) goto LAB_0e5e71a0;
                }
              }
              uVar28 = plStack_1f0[1];
              if ((uVar28 & uVar28 - 1) == 0) {
                uVar24 = uStack_180 & uVar28 - 1;
              }
              else {
                uVar24 = uStack_180;
                if (uVar28 <= uStack_180) {
                  if ((uStack_180 | uVar28) >> 0x20 == 0) {
                    uVar24 = (uStack_180 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar24 = uStack_180 % uVar28;
                  }
                }
              }
            }
            else {
              fVar32 = (float)(long)uVar28;
              fVar31 = *(float *)(plStack_1f0 + 4);
              if (uVar28 == 0) goto LAB_0e5e712e;
LAB_0e5e7121:
              uVar24 = uStack_e0;
              if (fVar32 * fVar31 < (float)(plStack_1f0[3] + 1)) goto LAB_0e5e712e;
            }
            lVar15 = *plStack_1f0;
            plVar10 = *(long **)(lVar15 + uVar24 * 8);
            if (plVar10 == (long *)0x0) {
              *uStack_158 = *plStack_a0;
              *plStack_a0 = (long)uStack_158;
              *(long **)(lVar15 + uVar24 * 8) = plStack_a0;
              if (*uStack_158 != 0) {
                uVar24 = *(ulong *)(*uStack_158 + 8);
                if ((uVar28 & uVar28 - 1) == 0) {
                  *(long **)(lVar15 + (uVar24 & uVar28 - 1) * 8) = uStack_158;
                }
                else {
                  if (uVar28 <= uVar24) {
                    if ((uVar24 | uVar28) >> 0x20 == 0) {
                      *(long **)(lVar15 + ((uVar24 & 0xffffffff) % (uVar28 & 0xffffffff)) * 8) =
                           uStack_158;
                      goto LAB_0e5e732e;
                    }
                    uVar24 = uVar24 % uVar28;
                  }
                  *(long **)(lVar15 + uVar24 * 8) = uStack_158;
                }
              }
            }
            else {
              *uStack_158 = *plVar10;
              *plVar10 = (long)uStack_158;
            }
LAB_0e5e732e:
            plStack_1f0[3] = plStack_1f0[3] + 1;
            plVar10 = uStack_158;
LAB_0e5e7337:
            uStack_158 = plVar10 + 5;
            lStack_130 = plStack_118[5];
            puStack_148 = &UNK_05fb2500;
            iStack_138 = -0x3170fa2;
            pcStack_140 = (code *)0x0;
            uStack_134 = 3;
            uStack_128 = 0;
            puStack_120 = &UNK_05fb24e0;
            func_0x0ed75bc0(&puStack_b0,param_2,&uStack_158,uStack_c8,&uStack_58);
            param_5 = puStack_d0;
            (**(code **)(*param_2 + 0xd0))(param_2);
            uVar28 = uStack_d8;
            if (pcStack_140 != (code *)0x0) {
              (*pcStack_140)(&uStack_158);
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
      lVar15 = *(long *)(puVar13 + 2);
      uVar26 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
      *puVar13 = uVar26;
      if (puVar13[0x48] == 0) {
        uVar19 = puVar13[4];
LAB_0e5e7495:
        lVar11 = lVar15 + (ulong)uVar19 * 0x20;
        uVar28 = (ulong)*(uint *)(lVar15 + -0x10 + (ulong)uVar19 * 0x20);
        if (uVar28 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar28 * 8))(auStack_1c8,lVar11 + -0x18);
          uVar19 = puVar13[4];
        }
        *(undefined4 *)(lVar11 + -0x10) = 0xffffffff;
        puVar13[4] = uVar19 - 1;
        uVar28 = uStack_d8;
      }
      else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                uVar26) && (uVar19 = puVar13[4], uVar26 == uVar19 - 1)) goto LAB_0e5e7495;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < uVar28);
  }
  return;
}


