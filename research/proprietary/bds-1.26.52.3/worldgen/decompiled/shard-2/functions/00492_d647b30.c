/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd747b30 (ELF vaddr 0xd647b30)
 * Label: caller-of-callee
 * Body:  [[0d747b30, 0d7481d5] [0d7481e0, 0d748aa9] [0d748ab0, 0d748cb6] [0d748cc0, 0d748d2e] [0d748d30, 0d748ead] [0d748eb0, 0d748f5e] [0d748f60, 0d74941a] [0d749420, 0d749599] [0d7497bb, 0d7497e5] [0d74981f, 0d74984b]]
 * Ghidra: FUN_0d747b30
 */


/* WARNING: Removing unreachable block (ram,0x0d74856a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d747b30(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

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
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long *plVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  code *pcStack_1b0;
  uint uStack_1a8;
  char cStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  ulong uStack_180;
  undefined1 uStack_171;
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
  ulong uStack_128;
  ulong uStack_120;
  long *plStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
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
      bVar30 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar30 = (undefined *)param_3[7] == &UNK_0d74aff0;
    }
    param_3[2] = (long)&UNK_0d74b190;
    *(undefined4 *)(param_3 + 4) = 0xe5924a39;
    param_3[3] = (long)&UNK_0d74b3c0;
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
    pcVar8 = (code *)&UNK_0d74aff0;
    param_3[7] = (long)&UNK_0d74aff0;
    if (bVar30) {
      lVar15 = param_3[6];
    }
    else {
      lVar15 = 0;
    }
    param_3[6] = lVar15;
    cVar6 = '\x01';
    plVar9 = plVar10;
LAB_0d747c52:
    puStack_a8 = &UNK_0ef44b00;
    if (plVar9 == (long *)0x0) goto LAB_0d747c57;
  }
  else {
    cVar6 = *(char *)((long)param_3 + 0x24);
    plVar10 = (long *)*param_3;
    plVar9 = plVar10;
    if (cVar6 == '\x02') {
      plVar9 = param_3;
    }
    if ((int)param_3[4] == -0x1a6db5c7) goto LAB_0d747c52;
LAB_0d747c57:
    puStack_a8 = &UNK_0ef44b00;
    lVar15 = param_3[5];
    lVar11 = param_3[6];
    if (lVar11 == 0) {
      (*pcVar8)(0,param_3,0);
      lVar11 = param_3[6];
      cVar6 = *(char *)((long)param_3 + 0x24);
      plVar10 = (long *)*param_3;
    }
    if (cVar6 == '\x02') {
      plVar10 = param_3;
    }
    plVar9 = (long *)func_0x0488e200(lVar15,lVar11,0xe5924a39,plVar10);
  }
  lStack_58 = *param_5;
  lStack_50 = param_5[1];
  plVar10 = (long *)param_5[2];
  lStack_80 = lStack_58;
  lStack_78 = lStack_50;
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_70 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0);
    lStack_58 = *param_5;
    lStack_50 = param_5[1];
    plVar10 = (long *)param_5[2];
  }
  plVar26 = param_5 + 3;
  uStack_68 = (undefined4)param_5[3];
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_b0 = &UNK_0f4810c0;
  if (plVar10 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar10 + 0x30))(plVar10,1);
  }
  uStack_40 = (undefined4)*plVar26;
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  plStack_1d0 = plVar9;
  if (bVar5 == 1) {
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
    plStack_d0 = param_5;
    func_0x0ed6d600(&uStack_1e8,*param_5);
    plStack_170 = param_2;
    plVar10 = uStack_1e8;
    do {
      if (param_3 == (long *)0x0) {
        return;
      }
      uVar25 = (uint)plStack_1e0;
      if ((uint)plStack_1e0 <= *(uint *)(plVar10 + 0x56) && *(uint *)(plVar10 + 0x56) != 0xffffffff)
      {
        return;
      }
      uStack_1e8 = plVar10;
      auVar33 = (**(code **)(*param_2 + 0xc0))(param_2);
      puVar27 = puStack_70;
      auStack_f8 = auVar33;
      if (puStack_70 != (undefined8 *)0x0) {
        lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (lVar15 == 0) {
          func_0x048b0de0(&uStack_168,&uStack_171);
          _DAT_0f54fd90 = (undefined4)uStack_168;
          uRam000000000f54fd94 = uStack_168._4_4_;
          uVar2 = (undefined4)uStack_160;
          uVar3 = uStack_160._4_4_;
          uStack_168 = (long *)0x0;
          uStack_160 = (long *)0x0;
          plVar10 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar2;
          uRam000000000f54fd9c = uVar3;
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar9 = plVar10 + 1;
            lVar15 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              FUN_0412c2d0(plVar10);
            }
          }
          plVar10 = uStack_160;
          if (uStack_160 != (long *)0x0) {
            LOCK();
            plVar9 = uStack_160 + 1;
            lVar15 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*uStack_160 + 0x10))(uStack_160);
              FUN_0412c2d0(plVar10);
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
        (**(code **)*puVar27)(puVar27,auStack_1c8,lStack_80);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        plVar10 = uStack_1e8;
        uVar25 = (uint)plStack_1e0;
      }
      uVar4 = auStack_f8._8_8_;
      uVar18 = auStack_f8._0_8_;
      if ((*(uint *)(plVar10 + 0x56) == 0xffffffff) || (*(uint *)(plVar10 + 0x56) < uVar25)) {
        lVar15 = *plStack_d0;
        uStack_120 = 0;
        if (auStack_f8._0_8_ == 0) {
          uStack_120 = (auStack_f8._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar11 = auStack_f8._8_8_ + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
          if (lVar11 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar11,8);
          }
          *puVar12 = uVar4;
          func_0x0eee2f00(puVar12 + 1,uVar18,uVar4);
          *(undefined1 *)((long)(puVar12 + 1) + uVar4) = 0;
          uStack_120 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar13 = (uint *)func_0x0ed6d180(lVar15,&uStack_120,0);
        if ((uStack_120 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
        }
        plVar10 = (long *)auStack_f8._8_8_;
        uVar18 = auStack_f8._0_8_;
        uStack_120 = 0;
        if ((long *)0xfffffffffffffff7 < (ulong)auStack_f8._8_8_) {
          FUN_04882e30();
          goto LAB_0d749546;
        }
        if ((ulong)auStack_f8._8_8_ < (long *)0x17) {
          uStack_168 = (long *)CONCAT71(uStack_168._1_7_,auStack_f8[8] * '\x02');
          puVar14 = (undefined *)((long)&uStack_168 + 1);
          if ((long *)auStack_f8._8_8_ != (long *)0x0) goto LAB_0d748234;
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
          uStack_168 = (long *)(uVar28 | 1);
          uStack_160 = plVar10;
          puStack_158 = puVar14;
LAB_0d748234:
          func_0x0eee2ee0(puVar14,uVar18,plVar10);
        }
        puVar14[(long)plVar10] = 0;
        auStack_1c8 = (undefined1  [8])((ulong)auStack_1c8 & 0xffffffffffff0000);
        uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
        uStack_1a8 = uStack_1a8 & 0xffffff00;
        lVar15 = func_0x0d74a9c0(plStack_1d0,&uStack_168,&uStack_168,auStack_1c8);
        param_2 = plStack_170;
        if (((char)uStack_1a8 == '\x01') && ((uStack_1c0 & 1) != 0)) {
          func_0x0412a280(pcStack_1b0,uStack_1c0 & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_168 & 1) != 0) {
          func_0x0412a280(puStack_158,(ulong)uStack_168 & 0xfffffffffffffffe);
        }
        auStack_1c8 = (undefined1  [8])(lVar15 + 0x28);
        lStack_1a0 = plStack_118[5];
        puStack_1b8 = (undefined8 *)&UNK_0d740000;
        uStack_1a8 = 0xd53e22df;
        pcStack_1b0 = (code *)0x0;
        cStack_1a4 = '\x03';
        uStack_198 = 0;
        plStack_190 = (long *)&UNK_0d73ff20;
        func_0x0ed75bc0(&puStack_b0,param_2,auStack_1c8,uStack_c8,&lStack_58);
        if (pcStack_1b0 != (code *)0x0) {
          (*pcStack_1b0)(auStack_1c8);
        }
        lVar15 = *(long *)(puVar13 + 2);
        uVar25 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
        *puVar13 = uVar25;
        if (puVar13[0x48] == 0) {
          uVar19 = puVar13[4];
LAB_0d74838f:
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
                  uVar25) && (uVar19 = puVar13[4], uVar25 == uVar19 - 1)) goto LAB_0d74838f;
        (**(code **)(*param_2 + 0xd0))(param_2);
      }
      param_3 = (long *)((long)param_3 + -1);
      plVar10 = uStack_1e8;
    } while( true );
  }
  if ((bVar5 & 2) == 0) {
    lVar15 = param_3[5];
    lVar11 = func_0x048b2190(lVar15);
    plVar10 = *(long **)(lVar11 + 0x78);
    if (plVar10 == (long *)0x0) {
LAB_0d747e94:
      if (*(code **)(lVar11 + 0x30) == (code *)0x0) {
        puStack_158 = &UNK_0488e0b0;
        iStack_148 = 0x48b5725f;
        pcStack_150 = (code *)0x0;
        uStack_144 = 0;
        uStack_168 = (long *)0x0;
        uStack_138 = 0;
        puStack_130 = (undefined *)0x0;
        lStack_140 = lVar15;
        goto LAB_0d7485c9;
      }
      (**(code **)(lVar11 + 0x30))(&uStack_168,lVar15);
      if (iStack_148 != -0x5db38b49) goto LAB_0d7485c9;
LAB_0d74861c:
      plVar29 = (long *)&UNK_0133e465;
      plVar10 = (long *)func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar22 = *plVar10;
      if (lVar22 == 0 || lVar22 == plVar10[1]) goto LAB_0d747e94;
      lVar20 = 0;
      bVar30 = false;
      do {
        lVar21 = lVar22;
        if (lVar20 != 0) {
          lVar21 = lVar20;
        }
        bVar1 = lVar20 != 0;
        if (*(long *)(lVar22 + 8) != 0) {
          lVar21 = lVar20;
          bVar1 = bVar30;
        }
        lVar22 = lVar22 + 0x20;
        lVar20 = lVar21;
        bVar30 = bVar1;
      } while (lVar22 != plVar10[1]);
      if (bVar1 || lVar21 == 0) goto LAB_0d747e94;
      (**(code **)(lVar21 + 0x18))(&uStack_168,lVar15,0);
      if (iStack_148 == -0x5db38b49) goto LAB_0d74861c;
LAB_0d7485c9:
      func_0x0488e290(auStack_1c8,&uStack_168);
      plVar26 = plStack_190;
      if ((plStack_190 != (long *)0x0) && ((byte)(cStack_1a4 - 1U) < 2)) {
        func_0x048b0900(&uStack_168,auStack_1c8);
      }
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c8);
      }
      if (plVar26 != (long *)0x0) goto LAB_0d74861c;
      plVar29 = (long *)&UNK_01411d3a;
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
          goto joined_r0x0d7486cc;
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
      func_0x0eee2f00(lVar15,plVar29,plVar10);
      *(undefined1 *)(lVar15 + (long)plVar10) = 0;
joined_r0x0d7486cc:
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(&uStack_168);
      }
      plVar9 = uStack_1e8;
      plVar26 = plStack_1e0;
      if (((ulong)uStack_1e8 & 1) == 0) {
        plVar26 = (long *)((ulong)uStack_1e8 >> 1 & 0x7f);
      }
      uVar28 = (long)plVar26 + 0xc;
      if (uVar28 < 0xfffffffffffffff8) {
        lVar15 = *param_5;
        if (uVar28 < 0x17) {
          uStack_1c0 = 0;
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
          uStack_1c0 = uVar28;
        }
        lVar11 = (long)puStack_1b8 + 0xc;
        bVar30 = ((ulong)auStack_1c8 & 1) == 0;
        puVar27 = puStack_1b8;
        if (bVar30) {
          puVar27 = (undefined8 *)(auStack_1c8 + 1);
        }
        *puVar27 = 0x6465746365707865;
        *(undefined4 *)(puVar27 + 1) = 0x206e6120;
        lVar22 = (long)&uStack_1c0 + 5;
        if (!bVar30) {
          lVar22 = lVar11;
        }
        if (plVar26 != (long *)0x0) {
          lVar11 = lStack_1d8;
          if (((ulong)plVar9 & 1) == 0) {
            lVar11 = (long)&uStack_1e8 + 1;
          }
          func_0x0eee2ee0(lVar22,lVar11,plVar26);
        }
        *(undefined1 *)(lVar22 + (long)plVar26) = 0;
        uVar28 = (ulong)auStack_1c8 >> 1 & 0x7f;
        puVar27 = (undefined8 *)(auStack_1c8 + 1);
        if (((ulong)auStack_1c8 & 1) != 0) {
          uVar28 = uStack_1c0;
          puVar27 = puStack_1b8;
        }
        uStack_128 = 0;
        if (puVar27 == (undefined8 *)0x0) {
          uStack_128 = (ulong)((uint)uVar28 & 0x7f) << 0x30;
        }
        else {
          lVar11 = uVar28 + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
          if (lVar11 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar11,8);
          }
          *puVar12 = uVar28;
          func_0x0eee2f00(puVar12 + 1,puVar27,uVar28);
          *(undefined1 *)((long)puVar12 + uVar28 + 8) = 0;
          uStack_128 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar15,8,&uStack_128);
        if ((uStack_128 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
        }
        uStack_128 = 0;
        if (((ulong)auStack_1c8 & 1) != 0) {
          func_0x0412a280(puStack_1b8,(ulong)auStack_1c8 & 0xfffffffffffffffe);
        }
        if (((ulong)plVar9 & 1) == 0) {
          return;
        }
        func_0x0412a280(lStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
        return;
      }
LAB_0d749546:
      uVar18 = FUN_04882e30();
      uVar18 = func_0x04882e20(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x0ee386e0(&uStack_c0);
      uVar18 = func_0x0eee2d70(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x0d723720(&uStack_168);
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
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar28 = FUN_04882e30();
    plVar9 = param_5;
    param_5 = plVar29;
LAB_0d74892d:
    fVar31 = (float)uVar28;
LAB_0d748945:
    fVar31 = (float)func_0x0eee3ab0(fVar31 / *(float *)(plVar9 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    if ((plVar26 < (long *)0x3) ||
       (uVar28 = (long)plVar26 - ((ulong)plVar26 >> 1 & 0x5555555555555555),
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
    if (plVar26 <= param_3) goto LAB_0d748a0a;
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
    fVar31 = (float)func_0x0eee3ab0((float)uVar28 / *(float *)(plVar9 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    param_3 = (long *)0x2;
    uStack_d8 = uVar28;
    if ((plVar10 == (long *)0x1) || (param_3 = plVar10, ((ulong)plVar10 & (long)plVar10 - 1U) == 0))
    {
      plVar26 = (long *)plVar9[1];
      bVar30 = param_3 < plVar26;
      if (param_3 <= plVar26) {
LAB_0d74858c:
        if (!bVar30) goto LAB_0d748a0a;
        uVar28 = plVar9[3];
        if ((long)uVar28 < 0) goto LAB_0d74892d;
        fVar31 = (float)(long)uVar28;
        goto LAB_0d748945;
      }
    }
    else {
      param_3 = (long *)func_0x0412c3f0();
      plVar26 = (long *)plVar9[1];
      bVar30 = param_3 < plVar26;
      if (param_3 <= plVar26) goto LAB_0d74858c;
    }
  }
  func_0x0d722f30(plVar9,param_3);
LAB_0d748a0a:
  func_0x0ed6d600(auStack_f8,*param_5);
  if (uStack_d8 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    plStack_a0 = plVar9 + 2;
    uVar16 = 0;
    uVar28 = uStack_d8;
    plStack_d0 = param_5;
    do {
      if ((*(uint *)(auStack_f8._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_f8._8_4_ <= *(uint *)(auStack_f8._0_8_ + 0x2b0))) {
        return;
      }
      puVar13 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar13,uVar16);
      (**(code **)(*param_2 + 200))(param_2,uVar16);
      cVar6 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar6 == '\x01') && (lVar15 = (**(code **)(*param_2 + 0xa8))(param_2), lVar15 != 2)) {
        uStack_100 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_100);
        if ((uStack_100 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_100 & 0xff00ffffffffffff) - 8);
        }
        uStack_100 = 0;
      }
      else {
        cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar6 == '\0') {
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
          uStack_198 = 0;
          plStack_190 = (long *)&UNK_048b1e80;
          auStack_1c8 = (undefined1  [8])&uStack_1e8;
          func_0x0ed75bc0(&puStack_a8,param_2,auStack_1c8,uStack_c8,&lStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar6 == '\0') {
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
            uStack_180 = func_0x04883620(&uStack_168,lVar15,plVar10);
            uVar28 = plVar9[1];
            if (uVar28 != 0) {
              uVar23 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
              uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar23 >> 0x38 < 2) {
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
              puVar27 = *(undefined8 **)(*plVar9 + uVar17 * 8);
              uStack_e0 = uVar17;
              if ((puVar27 != (undefined8 *)0x0) &&
                 (plVar10 = (long *)*puVar27, plVar10 != (long *)0x0)) {
                lStack_e8 = lStack_1d8;
                plVar26 = plStack_1e0;
                if (((ulong)uStack_1e8 & 1) == 0) {
                  lStack_e8 = (long)&uStack_1e8 + 1;
                  plVar26 = (long *)((ulong)uStack_1e8 >> 1 & 0x7f);
                }
                if ((byte)(uVar23 >> 0x38) < 2) {
                  plStack_170 = param_2;
                  do {
                    if (plVar10[1] == uStack_180) {
                      bVar5 = *(byte *)(plVar10 + 2);
                      if ((bVar5 & 1) == 0) {
                        plVar9 = (long *)(ulong)(bVar5 >> 1);
                      }
                      else {
                        plVar9 = (long *)plVar10[3];
                      }
                      if (plVar9 == plVar26) {
                        if ((bVar5 & 1) == 0) {
                          lVar15 = (long)plVar10 + 0x11;
                        }
                        else {
                          lVar15 = plVar10[4];
                        }
                        iVar7 = func_0x0eee3000(lVar15,lStack_e8,plVar26);
                        uVar17 = uStack_e0;
                        plVar9 = plStack_1d0;
                        param_2 = plStack_170;
                        if (iVar7 == 0) goto LAB_0d7492d2;
                      }
                    }
                    else {
                      plVar9 = plStack_1d0;
                      param_2 = plStack_170;
                      if ((plVar10[1] & uVar28 - 1) != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                    plVar9 = plStack_1d0;
                    param_2 = plStack_170;
                  } while (plVar10 != (long *)0x0);
                }
                else {
                  do {
                    uVar23 = plVar10[1];
                    if (uVar23 == uStack_180) {
                      bVar5 = *(byte *)(plVar10 + 2);
                      if ((bVar5 & 1) == 0) {
                        plVar9 = (long *)(ulong)(bVar5 >> 1);
                      }
                      else {
                        plVar9 = (long *)plVar10[3];
                      }
                      if (plVar9 == plVar26) {
                        if ((bVar5 & 1) == 0) {
                          lVar15 = (long)plVar10 + 0x11;
                        }
                        else {
                          lVar15 = plVar10[4];
                        }
                        iVar7 = func_0x0eee3000(lVar15,lStack_e8,plVar26);
                        uVar17 = uStack_e0;
                        plVar9 = plStack_1d0;
                        if (iVar7 == 0) goto LAB_0d7492d2;
                      }
                    }
                    else {
                      if (uVar28 <= uVar23) {
                        if ((uVar23 | uVar28) >> 0x20 == 0) {
                          uVar23 = (uVar23 & 0xffffffff) % (uVar28 & 0xffffffff);
                        }
                        else {
                          uVar23 = uVar23 % uVar28;
                        }
                      }
                      plVar9 = plStack_1d0;
                      if (uVar23 != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                    plVar9 = plStack_1d0;
                  } while (plVar10 != (long *)0x0);
                }
              }
            }
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
            if (plVar10 == (long *)0x0) {
              func_0x0eec74c0(0x50,0);
            }
            puStack_158 = (undefined *)0x0;
            *plVar10 = 0;
            plVar10[1] = uStack_180;
            uStack_168 = plVar10;
            uStack_160 = plVar9;
            if (((ulong)uStack_1e8 & 1) == 0) {
              plVar10[4] = lStack_1d8;
              plVar10[2] = (long)uStack_1e8;
              plVar10[3] = (long)plStack_1e0;
            }
            else {
              func_0x0412e5e0(plVar10 + 2,lStack_1d8,plStack_1e0);
            }
            plVar10[7] = 0;
            plVar10[8] = 0;
            plVar10[5] = 0;
            plVar10[6] = 0;
            plVar10[9] = 0;
            puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
            if ((long)uVar28 < 0) {
              fVar32 = (float)uVar28;
              fVar31 = *(float *)(plVar9 + 4);
              if (uVar28 != 0) goto LAB_0d7490bf;
LAB_0d7490d0:
              uVar23 = 1;
              if (2 < uVar28) {
                uVar23 = (ulong)((uVar28 & uVar28 - 1) != 0);
              }
              uVar23 = uVar28 * 2 | uVar23;
              fVar31 = (float)func_0x0eee3ab0((float)(plVar9[3] + 1) / fVar31);
              uVar28 = (long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31;
              if (uVar28 < uVar23) {
                uVar28 = uVar23;
              }
              uVar23 = 2;
              if ((uVar28 == 1) || (uVar23 = uVar28, (uVar28 & uVar28 - 1) == 0)) {
                uVar28 = plStack_1d0[1];
                bVar30 = uVar23 < uVar28;
                if (uVar23 <= uVar28) goto LAB_0d74916a;
LAB_0d749142:
                func_0x0d722f30(plStack_1d0,uVar23);
              }
              else {
                uVar23 = func_0x0412c3f0();
                uVar28 = plStack_1d0[1];
                bVar30 = uVar23 < uVar28;
                if (uVar28 < uVar23) goto LAB_0d749142;
LAB_0d74916a:
                if (bVar30) {
                  fVar31 = (float)func_0x0eee3ab0((float)(ulong)plStack_1d0[3] /
                                                  *(float *)(plStack_1d0 + 4));
                  uVar17 = (long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31;
                  if ((uVar28 < 3) ||
                     (uVar24 = uVar28 - (uVar28 >> 1 & 0x5555555555555555),
                     uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333),
                     1 < (byte)(((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
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
                  if (uVar23 <= uVar17) {
                    uVar23 = uVar17;
                  }
                  if (uVar23 < uVar28) goto LAB_0d749142;
                }
              }
              uVar28 = plStack_1d0[1];
              plVar9 = plStack_1d0;
              if ((uVar28 & uVar28 - 1) == 0) {
                uVar23 = uStack_180 & uVar28 - 1;
              }
              else {
                uVar23 = uStack_180;
                if (uVar28 <= uStack_180) {
                  if ((uStack_180 | uVar28) >> 0x20 == 0) {
                    uVar23 = (uStack_180 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar23 = uStack_180 % uVar28;
                  }
                }
              }
            }
            else {
              fVar32 = (float)(long)uVar28;
              fVar31 = *(float *)(plVar9 + 4);
              if (uVar28 == 0) goto LAB_0d7490d0;
LAB_0d7490bf:
              uVar23 = uStack_e0;
              if (fVar32 * fVar31 < (float)(plVar9[3] + 1)) goto LAB_0d7490d0;
            }
            lVar15 = *plVar9;
            plVar10 = *(long **)(lVar15 + uVar23 * 8);
            if (plVar10 == (long *)0x0) {
              *uStack_168 = *plStack_a0;
              *plStack_a0 = (long)uStack_168;
              *(long **)(lVar15 + uVar23 * 8) = plStack_a0;
              if (*uStack_168 != 0) {
                uVar23 = *(ulong *)(*uStack_168 + 8);
                if ((uVar28 & uVar28 - 1) == 0) {
                  *(long **)(lVar15 + (uVar23 & uVar28 - 1) * 8) = uStack_168;
                }
                else {
                  if (uVar28 <= uVar23) {
                    if ((uVar23 | uVar28) >> 0x20 == 0) {
                      *(long **)(lVar15 + ((uVar23 & 0xffffffff) % (uVar28 & 0xffffffff)) * 8) =
                           uStack_168;
                      goto LAB_0d7492ce;
                    }
                    uVar23 = uVar23 % uVar28;
                  }
                  *(long **)(lVar15 + uVar23 * 8) = uStack_168;
                }
              }
            }
            else {
              *uStack_168 = *plVar10;
              *plVar10 = (long)uStack_168;
            }
LAB_0d7492ce:
            plVar9[3] = plVar9[3] + 1;
            plVar10 = uStack_168;
LAB_0d7492d2:
            uStack_168 = plVar10 + 5;
            lStack_140 = plStack_118[5];
            puStack_158 = &UNK_0d740000;
            iStack_148 = -0x2ac1dd21;
            pcStack_150 = (code *)0x0;
            uStack_144 = 3;
            uStack_138 = 0;
            puStack_130 = &UNK_0d73ff20;
            func_0x0ed75bc0(&puStack_b0,param_2,&uStack_168,uStack_c8,&lStack_58);
            param_5 = plStack_d0;
            (**(code **)(*param_2 + 0xd0))(param_2);
            uVar28 = uStack_d8;
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
      lVar15 = *(long *)(puVar13 + 2);
      uVar25 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
      *puVar13 = uVar25;
      if (puVar13[0x48] == 0) {
        uVar19 = puVar13[4];
LAB_0d749425:
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
                uVar25) && (uVar19 = puVar13[4], uVar25 == uVar19 - 1)) goto LAB_0d749425;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < uVar28);
  }
  return;
}


