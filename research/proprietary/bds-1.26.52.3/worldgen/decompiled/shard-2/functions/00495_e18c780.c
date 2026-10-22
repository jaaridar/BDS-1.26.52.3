/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe28c780 (ELF vaddr 0xe18c780)
 * Label: caller-of-callee
 * Body:  [[0e28c780, 0e28ce51] [0e28ce60, 0e28cf17] [0e28cf20, 0e28d070] [0e28d080, 0e28d7c4] [0e28d7d0, 0e28d9e1] [0e28d9f0, 0e28da5e] [0e28da60, 0e28dbe1] [0e28dbf0, 0e28dc98] [0e28dca0, 0e28e16b] [0e28e170, 0e28e2e2] [0e28e4ef, 0e28e51b] [0e28e555, 0e28e58b]]
 * Ghidra: FUN_0e28c780
 */


/* WARNING: Removing unreachable block (ram,0x0e28d260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e28c780(undefined8 param_1,long *param_2,ulong *param_3,undefined8 param_4,long *param_5)

{
  bool bVar1;
  undefined1 auVar2 [8];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  undefined8 *puVar29;
  long *plVar30;
  long *unaff_R15;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  ulong *puStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 uStack_179;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  int iStack_158;
  undefined1 uStack_154;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [16];
  ulong uStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong *puStack_a0;
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
  
  pcVar9 = (code *)param_3[7];
  uStack_d8 = param_4;
  if (pcVar9 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar31 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar31 = (undefined *)param_3[7] == &UNK_0e28fab0;
    }
    param_3[2] = (ulong)&UNK_0e28fc50;
    *(undefined4 *)(param_3 + 4) = 0x7c9571b1;
    param_3[3] = (ulong)&UNK_0e28ff20;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    puVar18 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (puVar18 == (ulong *)0x0) {
      func_0x0eec74c0(0x28);
      unaff_R15 = param_5;
    }
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    *(undefined4 *)(puVar18 + 4) = 0x3f800000;
    *param_3 = (ulong)puVar18;
    pcVar9 = (code *)&UNK_0e28fab0;
    param_3[7] = (ulong)&UNK_0e28fab0;
    if (bVar31) {
      uVar10 = param_3[6];
    }
    else {
      uVar10 = 0;
    }
    param_3[6] = uVar10;
    cVar7 = '\x01';
    puStack_1f0 = puVar18;
LAB_0e28c8a9:
    puStack_b0 = &UNK_0ef44b00;
    if (puStack_1f0 == (ulong *)0x0) goto LAB_0e28c8b1;
  }
  else {
    cVar7 = *(char *)((long)param_3 + 0x24);
    puVar18 = (ulong *)*param_3;
    puStack_1f0 = puVar18;
    if (cVar7 == '\x02') {
      puStack_1f0 = param_3;
    }
    if ((int)param_3[4] == 0x7c9571b1) goto LAB_0e28c8a9;
LAB_0e28c8b1:
    puStack_b0 = &UNK_0ef44b00;
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    if (uVar11 == 0) {
      (*pcVar9)(0,param_3,0);
      uVar11 = param_3[6];
      cVar7 = *(char *)((long)param_3 + 0x24);
      puVar18 = (ulong *)*param_3;
    }
    if (cVar7 == '\x02') {
      puVar18 = param_3;
    }
    puStack_1f0 = (ulong *)func_0x0488e200(uVar10,uVar11,0x7c9571b1,puVar18);
  }
  lStack_58 = *param_5;
  lStack_50 = param_5[1];
  plVar30 = (long *)param_5[2];
  lStack_80 = lStack_58;
  lStack_78 = lStack_50;
  if (plVar30 == (long *)0x0) {
    plVar30 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar30 + 0x30))(plVar30,0);
    lStack_58 = *param_5;
    lStack_50 = param_5[1];
    plVar30 = (long *)param_5[2];
  }
  plVar28 = param_5 + 3;
  uStack_68 = (undefined4)param_5[3];
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_b8 = &UNK_0f4b3880;
  if (plVar30 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar30 + 0x30))(plVar30,1);
  }
  uStack_40 = (undefined4)*plVar28;
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  plStack_188 = param_2;
  puStack_d0 = param_3;
  if (bVar6 == 1) {
    uVar10 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar11 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar11 < uVar10)) {
      uStack_c0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_c0);
      if ((uStack_c0 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c0 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_e0 = param_5;
    func_0x0ed6d600(&uStack_1e8,*param_5);
    if (uVar10 == 0) {
      return;
    }
    uVar11 = 0;
    uStack_130 = uVar10;
    do {
      param_3 = uStack_1e8;
      uVar26 = (uint)uStack_1e0;
      if ((uint)uStack_1e0 <= (uint)uStack_1e8[0x56] && (uint)uStack_1e8[0x56] != 0xffffffff) {
        return;
      }
      auVar34 = (**(code **)(*param_2 + 0xc0))(param_2);
      puVar29 = puStack_70;
      auStack_100 = auVar34;
      if (puStack_70 != (undefined8 *)0x0) {
        uVar16 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (uVar16 == 0) {
          func_0x048b0de0(&uStack_178,&uStack_179);
          _DAT_0f54fd90 = (undefined4)uStack_178;
          uRam000000000f54fd94 = uStack_178._4_4_;
          uVar3 = (undefined4)uStack_170;
          uVar4 = uStack_170._4_4_;
          uStack_178 = (ulong *)0x0;
          uStack_170 = (ulong *)0x0;
          plVar30 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar3;
          uRam000000000f54fd9c = uVar4;
          if (plVar30 != (long *)0x0) {
            LOCK();
            plVar28 = plVar30 + 1;
            lVar12 = *plVar28;
            *plVar28 = *plVar28 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
              FUN_0412c2d0(plVar30);
            }
          }
          puVar18 = uStack_170;
          if (uStack_170 != (ulong *)0x0) {
            LOCK();
            puVar17 = uStack_170 + 1;
            uVar16 = *puVar17;
            *puVar17 = *puVar17 - 1;
            UNLOCK();
            if (uVar16 == 0) {
              (**(code **)(*uStack_170 + 0x10))(uStack_170);
              FUN_0412c2d0(puVar18);
            }
          }
          uVar16 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_1b8 = (undefined8 *)&UNK_05ea5bd0;
        pcStack_1b0 = (code *)0x0;
        uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x4989eedf9);
        auStack_1c8 = (undefined1  [8])auStack_100;
        uStack_198 = 0;
        plStack_190 = (long *)&UNK_05ea5bb0;
        uStack_1a0 = uVar16;
        (**(code **)*puVar29)(puVar29,auStack_1c8,lStack_80);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        param_3 = uStack_1e8;
        uVar26 = (uint)uStack_1e0;
      }
      uVar5 = auStack_100._8_8_;
      uVar20 = auStack_100._0_8_;
      if (((uint)param_3[0x56] == 0xffffffff) || ((uint)param_3[0x56] < uVar26)) {
        lVar12 = *plStack_e0;
        uStack_120 = 0;
        if (auStack_100._0_8_ == 0) {
          uStack_120 = (auStack_100._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar15 = auStack_100._8_8_ + 9;
          param_3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
          if (lVar15 != 0 && param_3 == (ulong *)0x0) {
            func_0x0eec74c0(lVar15,8);
          }
          *param_3 = uVar5;
          func_0x0eee2f00(param_3 + 1,uVar20,uVar5);
          *(undefined1 *)((long)(param_3 + 1) + uVar5) = 0;
          uStack_120 = (ulong)(param_3 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar13 = (uint *)func_0x0ed6d180(lVar12,&uStack_120,0);
        param_2 = plStack_188;
        if ((uStack_120 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
        }
        uVar5 = auStack_100._8_8_;
        uVar20 = auStack_100._0_8_;
        uStack_120 = 0;
        if ((ulong *)0xfffffffffffffff7 < (ulong)auStack_100._8_8_) {
          FUN_04882e30();
          goto LAB_0e28e28f;
        }
        if ((ulong)auStack_100._8_8_ < (ulong *)0x17) {
          uStack_178 = (ulong *)CONCAT71(uStack_178._1_7_,auStack_100[8] * '\x02');
          puVar14 = (undefined *)((long)&uStack_178 + 1);
          if ((ulong *)auStack_100._8_8_ != (ulong *)0x0) goto LAB_0e28ceb9;
        }
        else {
          uVar10 = (auStack_100._8_8_ | 7) + 1;
          if ((auStack_100._8_8_ | 7) == 0x17) {
            uVar10 = 0x1a;
          }
          puVar14 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
          if (puVar14 == (undefined *)0x0) {
            func_0x0eec74c0(uVar10,0);
          }
          uStack_178 = (ulong *)(uVar10 | 1);
          uStack_170 = (ulong *)uVar5;
          param_2 = plStack_188;
          puStack_168 = puVar14;
LAB_0e28ceb9:
          func_0x0eee2ee0(puVar14,uVar20,uVar5);
        }
        puVar14[uVar5] = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        puStack_1b8 = (undefined8 *)0x0;
        pcStack_1b0 = (code *)0x0;
        auStack_1c8 = (undefined1  [8])0x0;
        uStack_1c0 = 0;
        lVar15 = func_0x0e28f4c0(puStack_1f0,&uStack_178,&uStack_178,auStack_1c8);
        pcVar9 = pcStack_1b0;
        lVar12 = uStack_1a8;
        if (pcStack_1b0 != (code *)0x0) {
          while (pcVar9 != (code *)lVar12) {
            lVar27 = lVar12 + -0x40;
            puVar29 = (undefined8 *)(lVar12 + -0x28);
            lVar12 = lVar27;
            if ((code *)*puVar29 != (code *)0x0) {
              (*(code *)*puVar29)(lVar27);
            }
          }
          uStack_1a8 = (long)pcVar9;
          func_0x0412a280(pcStack_1b0,uStack_1a0 - (long)pcStack_1b0);
        }
        auVar2 = auStack_1c8;
        lVar12 = uStack_1c0;
        if (auStack_1c8 != (undefined1  [8])0x0) {
          for (; auVar2 != (undefined1  [8])lVar12; lVar12 = lVar12 + -0x18) {
            if ((*(byte *)(lVar12 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar12 + -8),
                              *(ulong *)(lVar12 + -0x18) & 0xfffffffffffffffe);
            }
          }
          uStack_1c0 = (ulong)auVar2;
          func_0x0412a280(auVar2,(long)puStack_1b8 - (long)auVar2);
        }
        if (((ulong)uStack_178 & 1) != 0) {
          func_0x0412a280(puStack_168,(ulong)uStack_178 & 0xfffffffffffffffe);
        }
        auStack_1c8 = (undefined1  [8])(lVar15 + 0x28);
        uStack_1a0 = puStack_d0[5];
        puStack_1b8 = (undefined8 *)&UNK_0e1d71e0;
        pcStack_1b0 = (code *)0x0;
        uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x3479c5db7);
        uStack_198 = 0;
        plStack_190 = (long *)&UNK_0e1d71c0;
        func_0x0ed75bc0(&puStack_b8,param_2,auStack_1c8,uStack_d8,&lStack_58);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        lVar12 = *(long *)(puVar13 + 2);
        uVar26 = *(uint *)(lVar12 + 0x1c + (ulong)*puVar13 * 0x20);
        *puVar13 = uVar26;
        if (puVar13[0x48] == 0) {
          uVar21 = puVar13[4];
LAB_0e28d0ad:
          lVar15 = lVar12 + (ulong)uVar21 * 0x20;
          uVar10 = (ulong)*(uint *)(lVar12 + -0x10 + (ulong)uVar21 * 0x20);
          if (uVar10 != 0xffffffff) {
            (**(code **)(&UNK_0f4e40d0 + uVar10 * 8))(auStack_1c8,lVar15 + -0x18);
            uVar21 = puVar13[4];
          }
          *(undefined4 *)(lVar15 + -0x10) = 0xffffffff;
          puVar13[4] = uVar21 - 1;
        }
        else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                  uVar26) && (uVar21 = puVar13[4], uVar26 == uVar21 - 1)) goto LAB_0e28d0ad;
        (**(code **)(*param_2 + 0xd0))(param_2);
        uVar10 = uStack_130;
      }
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar10) {
        return;
      }
    } while( true );
  }
  if ((bVar6 & 2) == 0) {
    uVar10 = param_3[5];
    lVar12 = func_0x048b2190(uVar10);
    plVar30 = *(long **)(lVar12 + 0x78);
    if (plVar30 == (long *)0x0) {
LAB_0e28caf4:
      if (*(code **)(lVar12 + 0x30) == (code *)0x0) {
        puStack_168 = &UNK_0488e0b0;
        iStack_158 = 0x48b5725f;
        pcStack_160 = (code *)0x0;
        uStack_154 = 0;
        uStack_178 = (ulong *)0x0;
        uStack_148 = 0;
        puStack_140 = (undefined *)0x0;
        uStack_150 = uVar10;
        goto LAB_0e28d2d7;
      }
      (**(code **)(lVar12 + 0x30))(&uStack_178,uVar10);
      if (iStack_158 != -0x5db38b49) goto LAB_0e28d2d7;
LAB_0e28d32a:
      plVar30 = (long *)&UNK_0133e465;
      uVar10 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar15 = *plVar30;
      if (lVar15 == 0 || lVar15 == plVar30[1]) goto LAB_0e28caf4;
      lVar27 = 0;
      bVar31 = false;
      do {
        lVar22 = lVar15;
        if (lVar27 != 0) {
          lVar22 = lVar27;
        }
        bVar1 = lVar27 != 0;
        if (*(long *)(lVar15 + 8) != 0) {
          lVar22 = lVar27;
          bVar1 = bVar31;
        }
        lVar15 = lVar15 + 0x20;
        lVar27 = lVar22;
        bVar31 = bVar1;
      } while (lVar15 != plVar30[1]);
      if (bVar1 || lVar22 == 0) goto LAB_0e28caf4;
      (**(code **)(lVar22 + 0x18))(&uStack_178,uVar10,0);
      if (iStack_158 == -0x5db38b49) goto LAB_0e28d32a;
LAB_0e28d2d7:
      func_0x0488e290(auStack_1c8,&uStack_178);
      plVar28 = plStack_190;
      if ((plStack_190 != (long *)0x0) && ((byte)(uStack_1a8._4_1_ - 1U) < 2)) {
        func_0x048b0900(&uStack_178,auStack_1c8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (plVar28 != (long *)0x0) goto LAB_0e28d32a;
      plVar30 = (long *)&UNK_01411d3a;
      uVar10 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar10 < 0xfffffffffffffff8) {
      if (uVar10 < 0x17) {
        uVar11 = (ulong)uStack_1e8 >> 8;
        uStack_1e8 = (ulong *)CONCAT71((int7)uVar11,(char)uVar10 * '\x02');
        uVar16 = (long)&uStack_1e8 + 1;
        if (uVar10 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_1e8._1_1_ = 0;
          goto joined_r0x0e28d3dc;
        }
      }
      else {
        uVar11 = 0x1a;
        if ((uVar10 | 7) != 0x17) {
          uVar11 = (uVar10 | 7) + 1;
        }
        uVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
        if (uVar16 == 0) {
          func_0x0eec74c0(uVar11,0);
        }
        param_3 = (ulong *)(uVar11 | 1);
        uStack_1e8 = param_3;
        uStack_1e0 = uVar10;
        uStack_1d8 = uVar16;
      }
      func_0x0eee2f00(uVar16,plVar30,uVar10);
      *(undefined1 *)(uVar16 + uVar10) = 0;
joined_r0x0e28d3dc:
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(&uStack_178);
      }
      puVar18 = uStack_1e8;
      uVar10 = uStack_1e0;
      if (((ulong)uStack_1e8 & 1) == 0) {
        uVar10 = (ulong)uStack_1e8 >> 1 & 0x7f;
      }
      uVar11 = uVar10 + 0xc;
      if (uVar11 < 0xfffffffffffffff8) {
        lVar12 = *param_5;
        if (uVar11 < 0x17) {
          uStack_1c0 = 0;
          puStack_1b8 = (undefined8 *)0x0;
          auStack_1c8._1_7_ = 0;
          auStack_1c8[0] = (char)uVar11 * '\x02';
        }
        else {
          uVar16 = 0x1a;
          if ((uVar11 | 7) != 0x17) {
            uVar16 = (uVar11 | 7) + 1;
          }
          puStack_1b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
          if (puStack_1b8 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar16,0);
          }
          auStack_1c8 = (undefined1  [8])(uVar16 | 1);
          uStack_1c0 = uVar11;
        }
        lVar15 = (long)puStack_1b8 + 0xc;
        bVar31 = ((ulong)auStack_1c8 & 1) == 0;
        puVar29 = puStack_1b8;
        if (bVar31) {
          puVar29 = (undefined8 *)(auStack_1c8 + 1);
        }
        *puVar29 = 0x6465746365707865;
        *(undefined4 *)(puVar29 + 1) = 0x206e6120;
        lVar27 = (long)&uStack_1c0 + 5;
        if (!bVar31) {
          lVar27 = lVar15;
        }
        if (uVar10 != 0) {
          uVar11 = uStack_1d8;
          if (((ulong)puVar18 & 1) == 0) {
            uVar11 = (long)&uStack_1e8 + 1;
          }
          func_0x0eee2ee0(lVar27,uVar11,uVar10);
        }
        *(undefined1 *)(lVar27 + uVar10) = 0;
        uVar10 = (ulong)auStack_1c8 >> 1 & 0x7f;
        puVar29 = (undefined8 *)(auStack_1c8 + 1);
        if (((ulong)auStack_1c8 & 1) != 0) {
          uVar10 = uStack_1c0;
          puVar29 = puStack_1b8;
        }
        uStack_128 = 0;
        if (puVar29 == (undefined8 *)0x0) {
          uStack_128 = (ulong)((uint)uVar10 & 0x7f) << 0x30;
        }
        else {
          lVar15 = uVar10 + 9;
          puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar15,8);
          if (lVar15 != 0 && puVar17 == (ulong *)0x0) {
            func_0x0eec74c0(lVar15,8);
          }
          *puVar17 = uVar10;
          func_0x0eee2f00(puVar17 + 1,puVar29,uVar10);
          *(undefined1 *)((long)puVar17 + uVar10 + 8) = 0;
          uStack_128 = (ulong)(puVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar12,8,&uStack_128);
        if ((uStack_128 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
        }
        uStack_128 = 0;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar18 & 1) == 0) {
          return;
        }
        func_0x0412a280(uStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
        return;
      }
LAB_0e28e28f:
      uVar20 = FUN_04882e30();
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x0ee386e0(&uStack_c8);
      uVar20 = func_0x0eee2d70(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x0b1151e0(&uStack_178);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (((ulong)uStack_1e8 & 1) != 0) {
        func_0x0412a280(uStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_188 + 0xd0))();
      func_0x0ed6d560(param_3);
      uVar20 = func_0x0eee2d70(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x04882e20(uVar20);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar10 = FUN_04882e30();
    param_2 = param_5;
    param_5 = plVar30;
LAB_0e28d63f:
    fVar32 = (float)uVar10;
LAB_0e28d657:
    fVar32 = (float)func_0x0eee3ab0(fVar32 / *(float *)(puStack_1f0 + 4));
    plVar30 = (long *)((long)(fVar32 - _DAT_01198778) & (long)fVar32 >> 0x3f | (long)fVar32);
    if ((plVar28 < (long *)0x3) ||
       (uVar10 = (long)plVar28 - ((ulong)plVar28 >> 1 & 0x5555555555555555),
       uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
       1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar30 = (long *)func_0x0412c3f0(plVar30);
    }
    else if ((long *)0x1 < plVar30) {
      lVar12 = 0x3f;
      if ((undefined *)((long)plVar30 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar30 + -1) >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      plVar30 = (long *)(1L << (-((byte)lVar12 ^ 0x3f) & 0x3f));
    }
    if (unaff_R15 <= plVar30) {
      unaff_R15 = plVar30;
    }
    if (plVar28 <= unaff_R15) goto LAB_0e28d720;
  }
  else {
    uVar10 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar11 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar11 < uVar10)) {
      uStack_c8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_c8);
      if ((uStack_c8 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_c8 & 0xff00ffffffffffff) - 8);
      return;
    }
    fVar32 = (float)func_0x0eee3ab0((float)uVar10 / *(float *)(puStack_1f0 + 4));
    plVar30 = (long *)((long)(fVar32 - _DAT_01198778) & (long)fVar32 >> 0x3f | (long)fVar32);
    unaff_R15 = (long *)0x2;
    if ((plVar30 != (long *)0x1) &&
       (unaff_R15 = plVar30, ((ulong)plVar30 & (ulong)((long)plVar30 + -1)) != 0)) {
      unaff_R15 = (long *)func_0x0412c3f0();
    }
    plVar28 = (long *)puStack_1f0[1];
    uStack_130 = uVar10;
    if (unaff_R15 <= plVar28) {
      if (plVar28 <= unaff_R15) goto LAB_0e28d720;
      uVar10 = puStack_1f0[3];
      if ((long)uVar10 < 0) goto LAB_0e28d63f;
      fVar32 = (float)(long)uVar10;
      goto LAB_0e28d657;
    }
  }
  func_0x0b115ae0(puStack_1f0,unaff_R15);
LAB_0e28d720:
  func_0x0ed6d600(auStack_100,*param_5);
  if (uStack_130 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    puStack_a0 = puStack_1f0 + 2;
    uVar11 = 0;
    uVar10 = uStack_130;
    plStack_e0 = param_5;
    do {
      if ((*(uint *)(auStack_100._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_100._8_4_ <= *(uint *)(auStack_100._0_8_ + 0x2b0))) {
        return;
      }
      puVar13 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar13,uVar11);
      (**(code **)(*param_2 + 200))(param_2,uVar11);
      cVar7 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar7 == '\x01') && (lVar12 = (**(code **)(*param_2 + 0xa8))(param_2), lVar12 != 2)) {
        uStack_108 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_108);
        if ((uStack_108 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
        }
        uStack_108 = 0;
      }
      else {
        cVar7 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar7 == '\0') {
          uStack_110 = uStack_88;
          func_0x0ed5ffe0(*param_5,8,&uStack_110);
          if ((uStack_110 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_110 = 0;
        }
        else {
          uStack_1e8 = (ulong *)0x0;
          uStack_1e0 = 0;
          uStack_1d8 = 0;
          uStack_1a0 = puStack_d0[5];
          puStack_1b8 = (undefined8 *)&UNK_048b1ea0;
          pcStack_1b0 = (code *)0x0;
          uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x3a24c74b7);
          auStack_1c8 = (undefined1  [8])&uStack_1e8;
          uStack_198 = 0;
          plStack_190 = (long *)&UNK_048b1e80;
          func_0x0ed75bc0(&puStack_b0,param_2,auStack_1c8,uStack_d8,&lStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar7 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar7 == '\0') {
            uStack_118 = uStack_98;
            func_0x0ed5ffe0(*param_5,8,&uStack_118);
            if ((uStack_118 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
            }
            uStack_118 = 0;
          }
          else {
            uVar16 = (ulong)uStack_1e8 >> 1 & 0x7f;
            uVar10 = (long)&uStack_1e8 + 1;
            if (((ulong)uStack_1e8 & 1) != 0) {
              uVar16 = uStack_1e0;
              uVar10 = uStack_1d8;
            }
            uVar16 = func_0x04883620(&uStack_178,uVar10,uVar16);
            uVar10 = puStack_1f0[1];
            if (uVar10 != 0) {
              uVar24 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
              uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
              uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar24 >> 0x38 < 2) {
                uVar19 = uVar10 - 1 & uVar16;
              }
              else {
                uVar19 = uVar16;
                if (uVar10 <= uVar16) {
                  if ((uVar16 | uVar10) >> 0x20 == 0) {
                    uVar19 = (uVar16 & 0xffffffff) % (uVar10 & 0xffffffff);
                  }
                  else {
                    uVar19 = uVar16 % uVar10;
                  }
                }
              }
              puVar29 = *(undefined8 **)(*puStack_1f0 + uVar19 * 8);
              uStack_e8 = uVar19;
              if ((puVar29 != (undefined8 *)0x0) &&
                 (puVar18 = (ulong *)*puVar29, puVar18 != (ulong *)0x0)) {
                uStack_f0 = uStack_1d8;
                uVar25 = uStack_1e0;
                if (((ulong)uStack_1e8 & 1) == 0) {
                  uStack_f0 = (long)&uStack_1e8 + 1;
                  uVar25 = (ulong)uStack_1e8 >> 1 & 0x7f;
                }
                if ((byte)(uVar24 >> 0x38) < 2) {
                  uVar24 = uVar10 - 1;
                  uStack_a8 = uVar24;
                  do {
                    if (puVar18[1] == uVar16) {
                      bVar6 = (byte)puVar18[2];
                      if ((bVar6 & 1) == 0) {
                        uVar23 = (ulong)(bVar6 >> 1);
                      }
                      else {
                        uVar23 = puVar18[3];
                      }
                      if (uVar23 == uVar25) {
                        if ((bVar6 & 1) == 0) {
                          uVar24 = (long)puVar18 + 0x11;
                        }
                        else {
                          uVar24 = puVar18[4];
                        }
                        iVar8 = func_0x0eee3000(uVar24,uStack_f0,uVar25);
                        uVar24 = uStack_a8;
                        uVar19 = uStack_e8;
                        if (iVar8 == 0) goto LAB_0e28e01e;
                      }
                    }
                    else if ((puVar18[1] & uVar24) != uVar19) break;
                    puVar18 = (ulong *)*puVar18;
                  } while (puVar18 != (ulong *)0x0);
                }
                else {
                  do {
                    uVar24 = puVar18[1];
                    if (uVar24 == uVar16) {
                      bVar6 = (byte)puVar18[2];
                      if ((bVar6 & 1) == 0) {
                        uVar24 = (ulong)(bVar6 >> 1);
                      }
                      else {
                        uVar24 = puVar18[3];
                      }
                      if (uVar24 == uVar25) {
                        if ((bVar6 & 1) == 0) {
                          uVar24 = (long)puVar18 + 0x11;
                        }
                        else {
                          uVar24 = puVar18[4];
                        }
                        iVar8 = func_0x0eee3000(uVar24,uStack_f0,uVar25);
                        uVar19 = uStack_e8;
                        if (iVar8 == 0) goto LAB_0e28e01e;
                      }
                    }
                    else {
                      if (uVar10 <= uVar24) {
                        if ((uVar24 | uVar10) >> 0x20 == 0) {
                          uVar24 = (uVar24 & 0xffffffff) % (uVar10 & 0xffffffff);
                        }
                        else {
                          uVar24 = uVar24 % uVar10;
                        }
                      }
                      if (uVar24 != uVar19) break;
                    }
                    puVar18 = (ulong *)*puVar18;
                  } while (puVar18 != (ulong *)0x0);
                }
              }
            }
            puVar18 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
            if (puVar18 == (ulong *)0x0) {
              func_0x0eec74c0(0x58,0);
            }
            uStack_170 = puStack_1f0;
            puStack_168 = (undefined *)0x0;
            *puVar18 = 0;
            puVar18[1] = uVar16;
            uStack_178 = puVar18;
            if (((ulong)uStack_1e8 & 1) == 0) {
              puVar18[4] = uStack_1d8;
              puVar18[2] = (ulong)uStack_1e8;
              puVar18[3] = uStack_1e0;
            }
            else {
              func_0x0412e5e0(puVar18 + 2,uStack_1d8,uStack_1e0);
            }
            puVar18[9] = 0;
            puVar18[10] = 0;
            puVar18[7] = 0;
            puVar18[8] = 0;
            puVar18[5] = 0;
            puVar18[6] = 0;
            puStack_168 = (undefined *)CONCAT71(puStack_168._1_7_,1);
            if ((long)uVar10 < 0) {
              fVar33 = (float)uVar10;
              fVar32 = *(float *)(puStack_1f0 + 4);
              if (uVar10 != 0) goto LAB_0e28de00;
LAB_0e28de11:
              uVar24 = 1;
              if (2 < uVar10) {
                uVar24 = (ulong)((uVar10 & uVar10 - 1) != 0);
              }
              uVar24 = uVar10 * 2 | uVar24;
              fVar32 = (float)func_0x0eee3ab0((float)(puStack_1f0[3] + 1) / fVar32);
              uVar10 = (long)(fVar32 - _DAT_01198778) & (long)fVar32 >> 0x3f | (long)fVar32;
              if (uVar10 < uVar24) {
                uVar10 = uVar24;
              }
              uVar24 = 2;
              if ((uVar10 == 1) || (uVar24 = uVar10, (uVar10 & uVar10 - 1) == 0)) {
                uVar10 = puStack_1f0[1];
                bVar31 = uVar24 < uVar10;
                if (uVar24 <= uVar10) goto LAB_0e28deab;
LAB_0e28de83:
                func_0x0b115ae0(puStack_1f0,uVar24);
              }
              else {
                uVar24 = func_0x0412c3f0();
                uVar10 = puStack_1f0[1];
                bVar31 = uVar24 < uVar10;
                if (uVar10 < uVar24) goto LAB_0e28de83;
LAB_0e28deab:
                if (bVar31) {
                  fVar32 = (float)func_0x0eee3ab0((float)puStack_1f0[3] /
                                                  *(float *)(puStack_1f0 + 4));
                  uVar19 = (long)(fVar32 - _DAT_01198778) & (long)fVar32 >> 0x3f | (long)fVar32;
                  if ((uVar10 < 3) ||
                     (uVar25 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
                     uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
                     1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar19 = func_0x0412c3f0(uVar19);
                  }
                  else if (1 < uVar19) {
                    lVar12 = 0x3f;
                    if (uVar19 - 1 != 0) {
                      for (; uVar19 - 1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                      }
                    }
                    uVar19 = 1L << (-((byte)lVar12 ^ 0x3f) & 0x3f);
                  }
                  if (uVar24 <= uVar19) {
                    uVar24 = uVar19;
                  }
                  if (uVar24 < uVar10) goto LAB_0e28de83;
                }
              }
              uVar10 = puStack_1f0[1];
              if ((uVar10 & uVar10 - 1) == 0) {
                uVar24 = uVar16 & uVar10 - 1;
              }
              else {
                uVar24 = uVar16;
                if (uVar10 <= uVar16) {
                  if ((uVar16 | uVar10) >> 0x20 == 0) {
                    uVar24 = (uVar16 & 0xffffffff) % (uVar10 & 0xffffffff);
                  }
                  else {
                    uVar24 = uVar16 % uVar10;
                  }
                }
              }
            }
            else {
              fVar33 = (float)(long)uVar10;
              fVar32 = *(float *)(puStack_1f0 + 4);
              if (uVar10 == 0) goto LAB_0e28de11;
LAB_0e28de00:
              uVar24 = uStack_e8;
              if (fVar33 * fVar32 < (float)(puStack_1f0[3] + 1)) goto LAB_0e28de11;
            }
            uVar16 = *puStack_1f0;
            puVar18 = *(ulong **)(uVar16 + uVar24 * 8);
            if (puVar18 == (ulong *)0x0) {
              *uStack_178 = *puStack_a0;
              *puStack_a0 = (ulong)uStack_178;
              *(ulong **)(uVar16 + uVar24 * 8) = puStack_a0;
              if (*uStack_178 != 0) {
                uVar24 = *(ulong *)(*uStack_178 + 8);
                if ((uVar10 & uVar10 - 1) == 0) {
                  *(ulong **)(uVar16 + (uVar24 & uVar10 - 1) * 8) = uStack_178;
                }
                else {
                  if (uVar10 <= uVar24) {
                    if ((uVar24 | uVar10) >> 0x20 == 0) {
                      *(ulong **)(uVar16 + ((uVar24 & 0xffffffff) % (uVar10 & 0xffffffff)) * 8) =
                           uStack_178;
                      goto LAB_0e28e015;
                    }
                    uVar24 = uVar24 % uVar10;
                  }
                  *(ulong **)(uVar16 + uVar24 * 8) = uStack_178;
                }
              }
            }
            else {
              *uStack_178 = *puVar18;
              *puVar18 = (ulong)uStack_178;
            }
LAB_0e28e015:
            puStack_1f0[3] = puStack_1f0[3] + 1;
            puVar18 = uStack_178;
LAB_0e28e01e:
            param_2 = plStack_188;
            uStack_178 = puVar18 + 5;
            uStack_150 = puStack_d0[5];
            puStack_168 = &UNK_0e1d71e0;
            iStack_158 = 0x479c5db7;
            pcStack_160 = (code *)0x0;
            uStack_154 = 3;
            uStack_148 = 0;
            puStack_140 = &UNK_0e1d71c0;
            func_0x0ed75bc0(&puStack_b8,plStack_188,&uStack_178,uStack_d8,&lStack_58);
            param_5 = plStack_e0;
            (**(code **)(*param_2 + 0xd0))(param_2);
            uVar10 = uStack_130;
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
      lVar12 = *(long *)(puVar13 + 2);
      uVar26 = *(uint *)(lVar12 + 0x1c + (ulong)*puVar13 * 0x20);
      *puVar13 = uVar26;
      if (puVar13[0x48] == 0) {
        uVar21 = puVar13[4];
LAB_0e28e175:
        lVar15 = lVar12 + (ulong)uVar21 * 0x20;
        uVar10 = (ulong)*(uint *)(lVar12 + -0x10 + (ulong)uVar21 * 0x20);
        if (uVar10 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar10 * 8))(auStack_1c8,lVar15 + -0x18);
          uVar21 = puVar13[4];
        }
        *(undefined4 *)(lVar15 + -0x10) = 0xffffffff;
        puVar13[4] = uVar21 - 1;
        uVar10 = uStack_130;
      }
      else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                uVar26) && (uVar21 = puVar13[4], uVar26 == uVar21 - 1)) goto LAB_0e28e175;
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar11 < uVar10);
  }
  return;
}


