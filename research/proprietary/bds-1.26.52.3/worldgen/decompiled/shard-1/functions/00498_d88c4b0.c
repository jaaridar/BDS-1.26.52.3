/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd98c4b0 (ELF vaddr 0xd88c4b0)
 * Label: caller-of-callee
 * Body:  [[0d98c4b0, 0d98d453] [0d98d460, 0d98d67d] [0d98d680, 0d98d6ee] [0d98d6f0, 0d98d86e] [0d98d870, 0d98d91e] [0d98d920, 0d98ddfa] [0d98de00, 0d98df7e] [0d98e18d, 0d98e1bf] [0d98e1ff, 0d98e22b]]
 * Ghidra: FUN_0d98c4b0
 */


/* WARNING: Removing unreachable block (ram,0x0d98ceed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d98c4b0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

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
  undefined1 uStack_269;
  undefined8 uStack_268;
  long *plStack_260;
  long lStack_258;
  long *plStack_250;
  ulong uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  code *pcStack_220;
  int iStack_218;
  undefined1 uStack_214;
  long lStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  code *pcStack_150;
  undefined4 uStack_148;
  char cStack_144;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  uint uStack_b0;
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
  uStack_190 = param_4;
  if (pcVar8 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar30 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar30 = (undefined *)param_3[7] == &UNK_0d98f770;
    }
    param_3[2] = (long)&UNK_0d98f910;
    *(undefined4 *)(param_3 + 4) = 0x30c97b0;
    param_3[3] = (long)&UNK_0d98faf0;
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
    pcVar8 = (code *)&UNK_0d98f770;
    param_3[7] = (long)&UNK_0d98f770;
    if (bVar30) {
      lVar15 = param_3[6];
    }
    else {
      lVar15 = 0;
    }
    param_3[6] = lVar15;
    cVar6 = '\x01';
    plVar9 = plVar10;
LAB_0d98c5d2:
    puStack_170 = &UNK_0ef44b00;
    if (plVar9 == (long *)0x0) goto LAB_0d98c5d7;
  }
  else {
    cVar6 = *(char *)((long)param_3 + 0x24);
    plVar10 = (long *)*param_3;
    plVar9 = plVar10;
    if (cVar6 == '\x02') {
      plVar9 = param_3;
    }
    if ((int)param_3[4] == 0x30c97b0) goto LAB_0d98c5d2;
LAB_0d98c5d7:
    puStack_170 = &UNK_0ef44b00;
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
    plVar9 = (long *)FUN_0488e200(lVar15,lVar11,&UNK_030c97b0,plVar10);
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
  puStack_178 = &UNK_0f2ce5d8;
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
  plStack_250 = plVar9;
  if (bVar5 == 1) {
    plStack_1e0 = param_3;
    param_3 = (long *)(**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (plVar10 = (long *)(**(code **)(*(long *)param_5[2] + 0x10))(), plVar10 < param_3)) {
      uStack_180 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_180);
      if ((uStack_180 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_198 = param_5;
    func_0x0ed6d600(&uStack_268,*param_5);
    plStack_240 = param_2;
    plVar10 = uStack_268;
    do {
      if (param_3 == (long *)0x0) {
        return;
      }
      uVar25 = (uint)plStack_260;
      if ((uint)plStack_260 <= *(uint *)(plVar10 + 0x56) && *(uint *)(plVar10 + 0x56) != 0xffffffff)
      {
        return;
      }
      uStack_268 = plVar10;
      auVar33 = (**(code **)(*param_2 + 0xc0))(param_2);
      puVar27 = puStack_70;
      auStack_1c0 = auVar33;
      if (puStack_70 != (undefined8 *)0x0) {
        lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (lVar15 == 0) {
          func_0x048b0de0(&uStack_238,&uStack_269);
          _DAT_0f54fd90 = (undefined4)uStack_238;
          uRam000000000f54fd94 = uStack_238._4_4_;
          uVar2 = (undefined4)uStack_230;
          uVar3 = uStack_230._4_4_;
          uStack_238 = (long *)0x0;
          uStack_230 = (long *)0x0;
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
              func_0x0412c2d0(plVar10);
            }
          }
          plVar10 = uStack_230;
          if (uStack_230 != (long *)0x0) {
            LOCK();
            plVar9 = uStack_230 + 1;
            lVar15 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*uStack_230 + 0x10))(uStack_230);
              func_0x0412c2d0(plVar10);
            }
          }
          lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_158 = (undefined8 *)&UNK_05ea5bd0;
        uStack_148 = 0x989eedf9;
        pcStack_150 = (code *)0x0;
        cStack_144 = '\x04';
        auStack_168 = (undefined1  [8])auStack_1c0;
        uStack_138 = 0;
        plStack_130 = (long *)&UNK_05ea5bb0;
        lStack_140 = lVar15;
        (**(code **)*puVar27)(puVar27,auStack_168,lStack_80);
        if (pcStack_150 != (code *)0x0) {
          (*pcStack_150)(auStack_168);
        }
        plVar10 = uStack_268;
        uVar25 = (uint)plStack_260;
      }
      uVar4 = auStack_1c0._8_8_;
      uVar18 = auStack_1c0._0_8_;
      if ((*(uint *)(plVar10 + 0x56) == 0xffffffff) || (*(uint *)(plVar10 + 0x56) < uVar25)) {
        lVar15 = *plStack_198;
        uStack_1e8 = 0;
        if (auStack_1c0._0_8_ == 0) {
          uStack_1e8 = (auStack_1c0._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar11 = auStack_1c0._8_8_ + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
          if (lVar11 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar11,8);
          }
          *puVar12 = uVar4;
          memcpy(puVar12 + 1,uVar18,uVar4);
          *(undefined1 *)((long)(puVar12 + 1) + uVar4) = 0;
          uStack_1e8 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar13 = (uint *)func_0x0ed6d180(lVar15,&uStack_1e8,0);
        if ((uStack_1e8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
        }
        plVar10 = (long *)auStack_1c0._8_8_;
        uVar18 = auStack_1c0._0_8_;
        uStack_1e8 = 0;
        if ((long *)0xfffffffffffffff7 < (ulong)auStack_1c0._8_8_) {
          func_0x04882e30();
          goto LAB_0d98df2e;
        }
        if ((ulong)auStack_1c0._8_8_ < (long *)0x17) {
          uStack_238 = (long *)CONCAT71(uStack_238._1_7_,auStack_1c0[8] * '\x02');
          puVar14 = (undefined *)((long)&uStack_238 + 1);
          if ((long *)auStack_1c0._8_8_ != (long *)0x0) goto LAB_0d98cbab;
        }
        else {
          uVar28 = (auStack_1c0._8_8_ | 7) + 1;
          if ((auStack_1c0._8_8_ | 7) == 0x17) {
            uVar28 = 0x1a;
          }
          puVar14 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
          if (puVar14 == (undefined *)0x0) {
            func_0x0eec74c0(uVar28,0);
          }
          uStack_238 = (long *)(uVar28 | 1);
          uStack_230 = plVar10;
          puStack_228 = puVar14;
LAB_0d98cbab:
          func_0x0eee2ee0(puVar14,uVar18,plVar10);
        }
        puVar14[(long)plVar10] = 0;
        puStack_158 = (undefined8 *)0x0;
        pcStack_150 = (code *)0x0;
        auStack_168 = (undefined1  [8])0x0;
        uStack_160 = 0;
        uStack_148 = 0x3f800000;
        uStack_b0 = 2;
        lVar15 = func_0x0d98f160(plStack_250,&uStack_238,&uStack_238,auStack_168);
        param_2 = plStack_240;
        if ((ulong)uStack_b0 != 0xffffffff) {
          (**(code **)(&UNK_0f48a7c8 + (ulong)uStack_b0 * 8))(&uStack_269,auStack_168);
        }
        if (((ulong)uStack_238 & 1) != 0) {
          func_0x0412a280(puStack_228,(ulong)uStack_238 & 0xfffffffffffffffe);
        }
        auStack_168 = (undefined1  [8])(lVar15 + 0x28);
        lStack_140 = plStack_1e0[5];
        puStack_158 = (undefined8 *)&UNK_0b6acc00;
        uStack_148 = 0xa63e78c4;
        pcStack_150 = (code *)0x0;
        cStack_144 = '\x03';
        uStack_138 = 0;
        plStack_130 = (long *)&UNK_0b6acbe0;
        func_0x0ed75bc0(&puStack_178,param_2,auStack_168,uStack_190,&lStack_58);
        if (pcStack_150 != (code *)0x0) {
          (*pcStack_150)(auStack_168);
        }
        lVar15 = *(long *)(puVar13 + 2);
        uVar25 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
        *puVar13 = uVar25;
        if (puVar13[0x48] == 0) {
          uVar19 = puVar13[4];
LAB_0d98cd32:
          lVar11 = lVar15 + (ulong)uVar19 * 0x20;
          uVar28 = (ulong)*(uint *)(lVar15 + -0x10 + (ulong)uVar19 * 0x20);
          if (uVar28 != 0xffffffff) {
            (**(code **)(&UNK_0f4e40d0 + uVar28 * 8))(auStack_168,lVar11 + -0x18);
            uVar19 = puVar13[4];
          }
          *(undefined4 *)(lVar11 + -0x10) = 0xffffffff;
          puVar13[4] = uVar19 - 1;
        }
        else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                  uVar25) && (uVar19 = puVar13[4], uVar25 == uVar19 - 1)) goto LAB_0d98cd32;
        (**(code **)(*param_2 + 0xd0))(param_2);
      }
      param_3 = (long *)((long)param_3 + -1);
      plVar10 = uStack_268;
    } while( true );
  }
  if ((bVar5 & 2) == 0) {
    lVar15 = param_3[5];
    lVar11 = func_0x048b2190(lVar15);
    plVar10 = *(long **)(lVar11 + 0x78);
    if (plVar10 == (long *)0x0) {
LAB_0d98c814:
      if (*(code **)(lVar11 + 0x30) == (code *)0x0) {
        puStack_228 = &UNK_0488e0b0;
        iStack_218 = 0x48b5725f;
        pcStack_220 = (code *)0x0;
        uStack_214 = 0;
        uStack_238 = (long *)0x0;
        uStack_208 = 0;
        puStack_200 = (undefined *)0x0;
        lStack_210 = lVar15;
        goto LAB_0d98cf42;
      }
      (**(code **)(lVar11 + 0x30))(&uStack_238,lVar15);
      if (iStack_218 != -0x5db38b49) goto LAB_0d98cf42;
LAB_0d98cfa1:
      plVar29 = (long *)&UNK_0133e465;
      plVar10 = (long *)func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar22 = *plVar10;
      if (lVar22 == 0 || lVar22 == plVar10[1]) goto LAB_0d98c814;
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
      if (bVar1 || lVar21 == 0) goto LAB_0d98c814;
      (**(code **)(lVar21 + 0x18))(&uStack_238,lVar15,0);
      if (iStack_218 == -0x5db38b49) goto LAB_0d98cfa1;
LAB_0d98cf42:
      func_0x0488e290(auStack_168,&uStack_238);
      plVar26 = plStack_130;
      if ((plStack_130 != (long *)0x0) && ((byte)(cStack_144 - 1U) < 2)) {
        func_0x048b0900(&uStack_238,auStack_168);
      }
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(auStack_168);
      }
      if (plVar26 != (long *)0x0) goto LAB_0d98cfa1;
      plVar29 = (long *)&UNK_01411d3a;
      plVar10 = (long *)func_0x0eee2e90(&UNK_01411d3a);
    }
    if (plVar10 < (long *)0xfffffffffffffff8) {
      if (plVar10 < (long *)0x17) {
        uVar28 = (ulong)uStack_268 >> 8;
        uStack_268 = (long *)CONCAT71((int7)uVar28,(char)plVar10 * '\x02');
        lVar15 = (long)&uStack_268 + 1;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_268._1_1_ = 0;
          goto joined_r0x0d98d04d;
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
        uStack_268 = param_3;
        plStack_260 = plVar10;
        lStack_258 = lVar15;
      }
      memcpy(lVar15,plVar29,plVar10);
      *(undefined1 *)(lVar15 + (long)plVar10) = 0;
joined_r0x0d98d04d:
      if (pcStack_220 != (code *)0x0) {
        (*pcStack_220)(&uStack_238);
      }
      plVar9 = uStack_268;
      plVar26 = plStack_260;
      if (((ulong)uStack_268 & 1) == 0) {
        plVar26 = (long *)((ulong)uStack_268 >> 1 & 0x7f);
      }
      uVar28 = (long)plVar26 + 0xc;
      if (uVar28 < 0xfffffffffffffff8) {
        lVar15 = *param_5;
        if (uVar28 < 0x17) {
          uStack_160 = 0;
          puStack_158 = (undefined8 *)0x0;
          auStack_168._1_7_ = 0;
          auStack_168[0] = (char)uVar28 * '\x02';
        }
        else {
          uVar16 = 0x1a;
          if ((uVar28 | 7) != 0x17) {
            uVar16 = (uVar28 | 7) + 1;
          }
          puStack_158 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
          if (puStack_158 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar16,0);
          }
          auStack_168 = (undefined1  [8])(uVar16 | 1);
          uStack_160 = uVar28;
        }
        lVar11 = (long)puStack_158 + 0xc;
        bVar30 = ((ulong)auStack_168 & 1) == 0;
        puVar27 = puStack_158;
        if (bVar30) {
          puVar27 = (undefined8 *)(auStack_168 + 1);
        }
        *puVar27 = 0x6465746365707865;
        *(undefined4 *)(puVar27 + 1) = 0x206e6120;
        lVar22 = (long)&uStack_160 + 5;
        if (!bVar30) {
          lVar22 = lVar11;
        }
        if (plVar26 != (long *)0x0) {
          lVar11 = lStack_258;
          if (((ulong)plVar9 & 1) == 0) {
            lVar11 = (long)&uStack_268 + 1;
          }
          func_0x0eee2ee0(lVar22,lVar11,plVar26);
        }
        *(undefined1 *)(lVar22 + (long)plVar26) = 0;
        uVar28 = (ulong)auStack_168 >> 1 & 0x7f;
        puVar27 = (undefined8 *)(auStack_168 + 1);
        if (((ulong)auStack_168 & 1) != 0) {
          uVar28 = uStack_160;
          puVar27 = puStack_158;
        }
        uStack_1f0 = 0;
        if (puVar27 == (undefined8 *)0x0) {
          uStack_1f0 = (ulong)((uint)uVar28 & 0x7f) << 0x30;
        }
        else {
          lVar11 = uVar28 + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
          if (lVar11 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar11,8);
          }
          *puVar12 = uVar28;
          memcpy(puVar12 + 1,puVar27,uVar28);
          *(undefined1 *)((long)puVar12 + uVar28 + 8) = 0;
          uStack_1f0 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar15,8,&uStack_1f0);
        if ((uStack_1f0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f0 & 0xff00ffffffffffff) - 8);
        }
        uStack_1f0 = 0;
        if (((ulong)auStack_168 & 1) != 0) {
          func_0x0412a280(puStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        if (((ulong)plVar9 & 1) == 0) {
          return;
        }
        func_0x0412a280(lStack_258,(ulong)uStack_268 & 0xfffffffffffffffe);
        return;
      }
LAB_0d98df2e:
      uVar18 = func_0x04882e30();
      uVar18 = func_0x04882e20(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x0ee386e0(&uStack_188);
      uVar18 = _Unwind_Resume(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x06fe36e0(&uStack_238);
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(auStack_168);
      }
      if (((ulong)uStack_268 & 1) != 0) {
        func_0x0412a280(lStack_258,(ulong)uStack_268 & 0xfffffffffffffffe);
      }
      (**(code **)(*plVar10 + 0xd0))(plVar10);
      func_0x0ed6d560(param_3);
      uVar18 = _Unwind_Resume(uVar18);
      uVar18 = func_0x04882e20(uVar18);
      func_0x04882e20(uVar18);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar28 = func_0x04882e30();
    plVar9 = param_5;
    param_5 = plVar29;
LAB_0d98d2d7:
    fVar31 = (float)uVar28;
LAB_0d98d2ef:
    fVar31 = (float)func_0x0eee3ab0(fVar31 / *(float *)(plVar9 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    if ((plVar26 < (long *)0x3) ||
       (uVar28 = (long)plVar26 - ((ulong)plVar26 >> 1 & 0x5555555555555555),
       uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
       1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar10 = (long *)FUN_0412c3f0(plVar10);
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
    if (plVar26 <= param_3) goto LAB_0d98d3b4;
  }
  else {
    uVar28 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar16 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar16 < uVar28)) {
      uStack_188 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_188);
      if ((uStack_188 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_188 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_1e0 = param_3;
    fVar31 = (float)func_0x0eee3ab0((float)uVar28 / *(float *)(plVar9 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    param_3 = (long *)0x2;
    uStack_1a0 = uVar28;
    if ((plVar10 == (long *)0x1) || (param_3 = plVar10, ((ulong)plVar10 & (long)plVar10 - 1U) == 0))
    {
      plVar26 = (long *)plVar9[1];
      bVar30 = param_3 < plVar26;
      if (param_3 <= plVar26) {
LAB_0d98cf0b:
        if (!bVar30) goto LAB_0d98d3b4;
        uVar28 = plVar9[3];
        if ((long)uVar28 < 0) goto LAB_0d98d2d7;
        fVar31 = (float)(long)uVar28;
        goto LAB_0d98d2ef;
      }
    }
    else {
      param_3 = (long *)FUN_0412c3f0();
      plVar26 = (long *)plVar9[1];
      bVar30 = param_3 < plVar26;
      if (param_3 <= plVar26) goto LAB_0d98cf0b;
    }
  }
  func_0x06fe3760(plVar9,param_3);
LAB_0d98d3b4:
  func_0x0ed6d600(auStack_1c0,*param_5);
  if (uStack_1a0 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    plStack_a0 = plVar9 + 2;
    uVar16 = 0;
    uVar28 = uStack_1a0;
    plStack_198 = param_5;
    do {
      if ((*(uint *)(auStack_1c0._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_1c0._8_4_ <= *(uint *)(auStack_1c0._0_8_ + 0x2b0))) {
        return;
      }
      puVar13 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar13,uVar16);
      (**(code **)(*param_2 + 200))(param_2,uVar16);
      cVar6 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar6 == '\x01') && (lVar15 = (**(code **)(*param_2 + 0xa8))(param_2), lVar15 != 2)) {
        uStack_1c8 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_1c8);
        if ((uStack_1c8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1c8 = 0;
      }
      else {
        cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar6 == '\0') {
          uStack_1d0 = uStack_88;
          func_0x0ed5ffe0(*param_5,8,&uStack_1d0);
          if ((uStack_1d0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d0 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_1d0 = 0;
        }
        else {
          uStack_268 = (long *)0x0;
          plStack_260 = (long *)0x0;
          lStack_258 = 0;
          lStack_140 = plStack_1e0[5];
          puStack_158 = (undefined8 *)&UNK_048b1ea0;
          uStack_148 = 0xa24c74b7;
          pcStack_150 = (code *)0x0;
          cStack_144 = '\x03';
          auStack_168 = (undefined1  [8])&uStack_268;
          uStack_138 = 0;
          plStack_130 = (long *)&UNK_048b1e80;
          func_0x0ed75bc0(&puStack_170,param_2,auStack_168,uStack_190,&lStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar6 == '\0') {
            uStack_1d8 = uStack_98;
            func_0x0ed5ffe0(*param_5,8,&uStack_1d8);
            if ((uStack_1d8 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
            }
            uStack_1d8 = 0;
          }
          else {
            plVar10 = (long *)((ulong)uStack_268 >> 1 & 0x7f);
            lVar15 = (long)&uStack_268 + 1;
            if (((ulong)uStack_268 & 1) != 0) {
              plVar10 = plStack_260;
              lVar15 = lStack_258;
            }
            uStack_248 = func_0x04883620(&uStack_238,lVar15,plVar10);
            uVar28 = plVar9[1];
            if (uVar28 != 0) {
              uVar23 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
              uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar23 >> 0x38 < 2) {
                uVar17 = uVar28 - 1 & uStack_248;
              }
              else {
                uVar17 = uStack_248;
                if (uVar28 <= uStack_248) {
                  if ((uStack_248 | uVar28) >> 0x20 == 0) {
                    uVar17 = (uStack_248 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar17 = uStack_248 % uVar28;
                  }
                }
              }
              puVar27 = *(undefined8 **)(*plVar9 + uVar17 * 8);
              uStack_1a8 = uVar17;
              if ((puVar27 != (undefined8 *)0x0) &&
                 (plVar10 = (long *)*puVar27, plVar10 != (long *)0x0)) {
                lStack_1b0 = lStack_258;
                plVar26 = plStack_260;
                if (((ulong)uStack_268 & 1) == 0) {
                  lStack_1b0 = (long)&uStack_268 + 1;
                  plVar26 = (long *)((ulong)uStack_268 >> 1 & 0x7f);
                }
                if ((byte)(uVar23 >> 0x38) < 2) {
                  plStack_240 = param_2;
                  do {
                    if (plVar10[1] == uStack_248) {
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
                        iVar7 = func_0x0eee3000(lVar15,lStack_1b0,plVar26);
                        uVar17 = uStack_1a8;
                        plVar9 = plStack_250;
                        param_2 = plStack_240;
                        if (iVar7 == 0) goto LAB_0d98dcc8;
                      }
                    }
                    else {
                      plVar9 = plStack_250;
                      param_2 = plStack_240;
                      if ((plVar10[1] & uVar28 - 1) != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                    plVar9 = plStack_250;
                    param_2 = plStack_240;
                  } while (plVar10 != (long *)0x0);
                }
                else {
                  do {
                    uVar23 = plVar10[1];
                    if (uVar23 == uStack_248) {
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
                        iVar7 = func_0x0eee3000(lVar15,lStack_1b0,plVar26);
                        uVar17 = uStack_1a8;
                        plVar9 = plStack_250;
                        if (iVar7 == 0) goto LAB_0d98dcc8;
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
                      plVar9 = plStack_250;
                      if (uVar23 != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                    plVar9 = plStack_250;
                  } while (plVar10 != (long *)0x0);
                }
              }
            }
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe8);
            if (plVar10 == (long *)0x0) {
              func_0x0eec74c0(0xe8,0);
            }
            puStack_228 = (undefined *)0x0;
            *plVar10 = 0;
            plVar10[1] = uStack_248;
            uStack_238 = plVar10;
            uStack_230 = plVar9;
            if (((ulong)uStack_268 & 1) == 0) {
              plVar10[4] = lStack_258;
              plVar10[2] = (long)uStack_268;
              plVar10[3] = (long)plStack_260;
            }
            else {
              func_0x0412e5e0(plVar10 + 2,lStack_258,plStack_260);
            }
            plVar10[9] = 0;
            plVar10[10] = 0;
            plVar10[0x1b] = 0;
            plVar10[0x1c] = 0;
            plVar10[0x19] = 0;
            plVar10[0x1a] = 0;
            plVar10[0x17] = 0;
            plVar10[0x18] = 0;
            plVar10[0x15] = 0;
            plVar10[0x16] = 0;
            plVar10[0x13] = 0;
            plVar10[0x14] = 0;
            plVar10[0x11] = 0;
            plVar10[0x12] = 0;
            plVar10[0xf] = 0;
            plVar10[0x10] = 0;
            plVar10[0xd] = 0;
            plVar10[0xe] = 0;
            plVar10[0xb] = 0;
            plVar10[0xc] = 0;
            plVar10[7] = 0;
            plVar10[8] = 0;
            plVar10[5] = 0;
            plVar10[6] = 0;
            *(undefined4 *)(plVar10 + 9) = 0x3f800000;
            *(undefined4 *)(plVar10 + 0x1c) = 2;
            puStack_228 = (undefined *)CONCAT71(puStack_228._1_7_,1);
            if ((long)uVar28 < 0) {
              fVar32 = (float)uVar28;
              fVar31 = *(float *)(plVar9 + 4);
              if (uVar28 != 0) goto LAB_0d98dab8;
LAB_0d98dac9:
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
                uVar28 = plStack_250[1];
                bVar30 = uVar23 < uVar28;
                if (uVar23 <= uVar28) goto LAB_0d98db63;
LAB_0d98db3b:
                func_0x06fe3760(plStack_250,uVar23);
              }
              else {
                uVar23 = FUN_0412c3f0();
                uVar28 = plStack_250[1];
                bVar30 = uVar23 < uVar28;
                if (uVar28 < uVar23) goto LAB_0d98db3b;
LAB_0d98db63:
                if (bVar30) {
                  fVar31 = (float)func_0x0eee3ab0((float)(ulong)plStack_250[3] /
                                                  *(float *)(plStack_250 + 4));
                  uVar17 = (long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31;
                  if ((uVar28 < 3) ||
                     (uVar24 = uVar28 - (uVar28 >> 1 & 0x5555555555555555),
                     uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333),
                     1 < (byte)(((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar17 = FUN_0412c3f0(uVar17);
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
                  if (uVar23 < uVar28) goto LAB_0d98db3b;
                }
              }
              uVar28 = plStack_250[1];
              plVar9 = plStack_250;
              if ((uVar28 & uVar28 - 1) == 0) {
                uVar23 = uStack_248 & uVar28 - 1;
              }
              else {
                uVar23 = uStack_248;
                if (uVar28 <= uStack_248) {
                  if ((uStack_248 | uVar28) >> 0x20 == 0) {
                    uVar23 = (uStack_248 & 0xffffffff) % (uVar28 & 0xffffffff);
                  }
                  else {
                    uVar23 = uStack_248 % uVar28;
                  }
                }
              }
            }
            else {
              fVar32 = (float)(long)uVar28;
              fVar31 = *(float *)(plVar9 + 4);
              if (uVar28 == 0) goto LAB_0d98dac9;
LAB_0d98dab8:
              uVar23 = uStack_1a8;
              if (fVar32 * fVar31 < (float)(plVar9[3] + 1)) goto LAB_0d98dac9;
            }
            lVar15 = *plVar9;
            plVar10 = *(long **)(lVar15 + uVar23 * 8);
            if (plVar10 == (long *)0x0) {
              *uStack_238 = *plStack_a0;
              *plStack_a0 = (long)uStack_238;
              *(long **)(lVar15 + uVar23 * 8) = plStack_a0;
              if (*uStack_238 != 0) {
                uVar23 = *(ulong *)(*uStack_238 + 8);
                if ((uVar28 & uVar28 - 1) == 0) {
                  *(long **)(lVar15 + (uVar23 & uVar28 - 1) * 8) = uStack_238;
                }
                else {
                  if (uVar28 <= uVar23) {
                    if ((uVar23 | uVar28) >> 0x20 == 0) {
                      *(long **)(lVar15 + ((uVar23 & 0xffffffff) % (uVar28 & 0xffffffff)) * 8) =
                           uStack_238;
                      goto LAB_0d98dcc4;
                    }
                    uVar23 = uVar23 % uVar28;
                  }
                  *(long **)(lVar15 + uVar23 * 8) = uStack_238;
                }
              }
            }
            else {
              *uStack_238 = *plVar10;
              *plVar10 = (long)uStack_238;
            }
LAB_0d98dcc4:
            plVar9[3] = plVar9[3] + 1;
            plVar10 = uStack_238;
LAB_0d98dcc8:
            uStack_238 = plVar10 + 5;
            lStack_210 = plStack_1e0[5];
            puStack_228 = &UNK_0b6acc00;
            iStack_218 = -0x59c1873c;
            pcStack_220 = (code *)0x0;
            uStack_214 = 3;
            uStack_208 = 0;
            puStack_200 = &UNK_0b6acbe0;
            func_0x0ed75bc0(&puStack_178,param_2,&uStack_238,uStack_190,&lStack_58);
            param_5 = plStack_198;
            (**(code **)(*param_2 + 0xd0))(param_2);
            uVar28 = uStack_1a0;
            if (pcStack_220 != (code *)0x0) {
              (*pcStack_220)(&uStack_238);
            }
          }
          if (pcStack_150 != (code *)0x0) {
            (*pcStack_150)(auStack_168);
          }
          if (((ulong)uStack_268 & 1) != 0) {
            func_0x0412a280(lStack_258,(ulong)uStack_268 & 0xfffffffffffffffe);
          }
        }
      }
      (**(code **)(*param_2 + 0xd0))(param_2);
      lVar15 = *(long *)(puVar13 + 2);
      uVar25 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
      *puVar13 = uVar25;
      if (puVar13[0x48] == 0) {
        uVar19 = puVar13[4];
LAB_0d98de05:
        lVar11 = lVar15 + (ulong)uVar19 * 0x20;
        uVar28 = (ulong)*(uint *)(lVar15 + -0x10 + (ulong)uVar19 * 0x20);
        if (uVar28 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar28 * 8))(auStack_168,lVar11 + -0x18);
          uVar19 = puVar13[4];
        }
        *(undefined4 *)(lVar11 + -0x10) = 0xffffffff;
        puVar13[4] = uVar19 - 1;
        uVar28 = uStack_1a0;
      }
      else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                uVar25) && (uVar19 = puVar13[4], uVar25 == uVar19 - 1)) goto LAB_0d98de05;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < uVar28);
  }
  return;
}


