/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdf4ddb0 (ELF vaddr 0xde4ddb0)
 * Label: caller-of-callee
 * Body:  [[0df4ddb0, 0df4e455] [0df4e460, 0df4ed76] [0df4ed80, 0df4ef9e] [0df4efa0, 0df4f00e] [0df4f010, 0df4f18c] [0df4f190, 0df4f244] [0df4f250, 0df4f76a] [0df4f770, 0df4f8e8] [0df4faea, 0df4fb1a] [0df4fb5a, 0df4fb88]]
 * Ghidra: FUN_0df4ddb0
 */


/* WARNING: Removing unreachable block (ram,0x0df4e817) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0df4ddb0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

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
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long *plVar27;
  undefined8 *puVar28;
  ulong uVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined8 uStack_258;
  ulong uStack_250;
  long lStack_248;
  long *plStack_240;
  ulong uStack_238;
  undefined1 uStack_229;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  code *pcStack_210;
  int iStack_208;
  undefined1 uStack_204;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined8 uStack_11e;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  uStack_180 = param_4;
  if (pcVar8 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar30 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar30 = (undefined *)param_3[7] == &UNK_0df51470;
    }
    param_3[2] = (long)&UNK_0df51610;
    *(undefined4 *)(param_3 + 4) = 0x1bb9c548;
    param_3[3] = (long)&UNK_0df51820;
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
    pcVar8 = (code *)&UNK_0df51470;
    param_3[7] = (long)&UNK_0df51470;
    if (bVar30) {
      lVar15 = param_3[6];
    }
    else {
      lVar15 = 0;
    }
    param_3[6] = lVar15;
    cVar6 = '\x01';
    plVar9 = plVar10;
LAB_0df4ded2:
    puStack_a8 = &UNK_0ef44b00;
    if (plVar9 == (long *)0x0) goto LAB_0df4ded7;
  }
  else {
    cVar6 = *(char *)((long)param_3 + 0x24);
    plVar10 = (long *)*param_3;
    plVar9 = plVar10;
    if (cVar6 == '\x02') {
      plVar9 = param_3;
    }
    if ((int)param_3[4] == 0x1bb9c548) goto LAB_0df4ded2;
LAB_0df4ded7:
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
    plVar9 = (long *)func_0x0488e200(lVar15,lVar11,0x1bb9c548,plVar10);
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
  plVar27 = param_5 + 3;
  uStack_68 = (undefined4)param_5[3];
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_b0 = &UNK_0f4a6a30;
  if (plVar10 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = (**(code **)(*plVar10 + 0x30))(plVar10,1);
  }
  uStack_40 = (undefined4)*plVar27;
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  bVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  plStack_240 = plVar9;
  if (bVar5 == 1) {
    plStack_1c8 = param_3;
    param_3 = (long *)(**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (plVar10 = (long *)(**(code **)(*(long *)param_5[2] + 0x10))(), plVar10 < param_3)) {
      uStack_170 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_170);
      if ((uStack_170 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_170 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_1e8 = param_5;
    func_0x0ed6d600(&uStack_258,*param_5);
    plStack_1e0 = param_2;
    plVar10 = uStack_258;
    do {
      if (param_3 == (long *)0x0) {
        return;
      }
      uVar26 = (uint)uStack_250;
      if ((uint)uStack_250 <= *(uint *)(plVar10 + 0x56) && *(uint *)(plVar10 + 0x56) != 0xffffffff)
      {
        return;
      }
      uStack_258 = plVar10;
      auVar33 = (**(code **)(*param_2 + 0xc0))(param_2);
      puVar28 = puStack_70;
      auStack_1a8 = auVar33;
      if (puStack_70 != (undefined8 *)0x0) {
        lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (lVar15 == 0) {
          func_0x048b0de0(&uStack_228,&uStack_229);
          _DAT_0f54fd90 = (undefined4)uStack_228;
          uRam000000000f54fd94 = uStack_228._4_4_;
          uVar2 = (undefined4)uStack_220;
          uVar3 = uStack_220._4_4_;
          uStack_228 = (long *)0x0;
          uStack_220 = (long *)0x0;
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
          plVar10 = uStack_220;
          if (uStack_220 != (long *)0x0) {
            LOCK();
            plVar9 = uStack_220 + 1;
            lVar15 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*uStack_220 + 0x10))(uStack_220);
              func_0x0412c2d0(plVar10);
            }
          }
          lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        puStack_158 = (undefined8 *)&UNK_05ea5bd0;
        pcStack_150 = (code *)0x0;
        uStack_148 = CONCAT35(uStack_148._5_3_,0x4989eedf9);
        auStack_168 = (undefined1  [8])auStack_1a8;
        uStack_138 = 0;
        plStack_130 = (long *)&UNK_05ea5bb0;
        lStack_140 = lVar15;
        (**(code **)*puVar28)(puVar28,auStack_168,lStack_80);
        if (pcStack_150 != (code *)0x0) {
          (*pcStack_150)(auStack_168);
        }
        plVar10 = uStack_258;
        uVar26 = (uint)uStack_250;
      }
      uVar4 = auStack_1a8._8_8_;
      uVar19 = auStack_1a8._0_8_;
      if ((*(uint *)(plVar10 + 0x56) == 0xffffffff) || (*(uint *)(plVar10 + 0x56) < uVar26)) {
        lVar15 = *plStack_1e8;
        uStack_1d0 = 0;
        if (auStack_1a8._0_8_ == 0) {
          uStack_1d0 = (auStack_1a8._8_8_ & 0x7f) << 0x30;
        }
        else {
          lVar11 = auStack_1a8._8_8_ + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
          if (lVar11 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar11,8);
          }
          *puVar12 = uVar4;
          func_0x0eee2f00(puVar12 + 1,uVar19,uVar4);
          *(undefined1 *)((long)(puVar12 + 1) + uVar4) = 0;
          uStack_1d0 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puVar13 = (uint *)func_0x0ed6d180(lVar15,&uStack_1d0,0);
        if ((uStack_1d0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d0 & 0xff00ffffffffffff) - 8);
        }
        uVar4 = auStack_1a8._8_8_;
        uVar19 = auStack_1a8._0_8_;
        uStack_1d0 = 0;
        if ((long *)0xfffffffffffffff7 < (ulong)auStack_1a8._8_8_) {
          func_0x04882e30();
          goto LAB_0df4f898;
        }
        if ((ulong)auStack_1a8._8_8_ < (long *)0x17) {
          uStack_228 = (long *)CONCAT71(uStack_228._1_7_,auStack_1a8[8] * '\x02');
          puVar14 = (undefined *)((long)&uStack_228 + 1);
          if ((long *)auStack_1a8._8_8_ != (long *)0x0) goto LAB_0df4e4ab;
        }
        else {
          uVar29 = (auStack_1a8._8_8_ | 7) + 1;
          if ((auStack_1a8._8_8_ | 7) == 0x17) {
            uVar29 = 0x1a;
          }
          puVar14 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29);
          if (puVar14 == (undefined *)0x0) {
            func_0x0eec74c0(uVar29,0);
          }
          uStack_228 = (long *)(uVar29 | 1);
          uStack_220 = (long *)uVar4;
          puStack_218 = puVar14;
LAB_0df4e4ab:
          func_0x0eee2ee0(puVar14,uVar19,uVar4);
        }
        puVar14[uVar4] = 0;
        auStack_168._0_4_ = 0x3f800000;
        pcStack_150 = (code *)0x0;
        uStack_160 = 0;
        puStack_158 = (undefined8 *)0x0;
        lStack_140 = 0;
        uStack_148 = 0xffff;
        uStack_138 = CONCAT44(uStack_138._4_4_,3);
        uStack_120 = 0;
        uStack_11e = 0;
        plStack_130 = (long *)0x0;
        uStack_128 = 0;
        uStack_126 = 0;
        uStack_100 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0xffff;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        lVar15 = func_0x0df50d40(plStack_240,&uStack_228,&uStack_228,auStack_168);
        func_0x0bf5d6d0(auStack_168);
        param_2 = plStack_1e0;
        if (((ulong)uStack_228 & 1) != 0) {
          func_0x0412a280(puStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
        }
        auStack_168 = (undefined1  [8])(lVar15 + 0x28);
        lStack_140 = plStack_1c8[5];
        puStack_158 = (undefined8 *)&UNK_0df46480;
        pcStack_150 = (code *)0x0;
        uStack_148 = CONCAT35(uStack_148._5_3_,0x3eca31b50);
        uStack_138 = 0;
        plStack_130 = (long *)&UNK_0df463a0;
        func_0x0ed75bc0(&puStack_b0,param_2,auStack_168,uStack_180,&lStack_58);
        if (pcStack_150 != (code *)0x0) {
          (*pcStack_150)(auStack_168);
        }
        lVar15 = *(long *)(puVar13 + 2);
        uVar26 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
        *puVar13 = uVar26;
        if (puVar13[0x48] == 0) {
          uVar20 = puVar13[4];
LAB_0df4e65c:
          lVar11 = lVar15 + (ulong)uVar20 * 0x20;
          uVar29 = (ulong)*(uint *)(lVar15 + -0x10 + (ulong)uVar20 * 0x20);
          if (uVar29 != 0xffffffff) {
            (**(code **)(&UNK_0f4e40d0 + uVar29 * 8))(auStack_168,lVar11 + -0x18);
            uVar20 = puVar13[4];
          }
          *(undefined4 *)(lVar11 + -0x10) = 0xffffffff;
          puVar13[4] = uVar20 - 1;
        }
        else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                  uVar26) && (uVar20 = puVar13[4], uVar26 == uVar20 - 1)) goto LAB_0df4e65c;
        (**(code **)(*param_2 + 0xd0))(param_2);
      }
      param_3 = (long *)((long)param_3 + -1);
      plVar10 = uStack_258;
    } while( true );
  }
  if ((bVar5 & 2) == 0) {
    lVar15 = param_3[5];
    lVar11 = func_0x048b2190(lVar15);
    plVar10 = *(long **)(lVar11 + 0x78);
    if (plVar10 == (long *)0x0) {
LAB_0df4e114:
      if (*(code **)(lVar11 + 0x30) == (code *)0x0) {
        puStack_218 = &UNK_0488e0b0;
        iStack_208 = 0x48b5725f;
        pcStack_210 = (code *)0x0;
        uStack_204 = 0;
        uStack_228 = (long *)0x0;
        uStack_1f8 = 0;
        puStack_1f0 = (undefined *)0x0;
        lStack_200 = lVar15;
        goto LAB_0df4e86c;
      }
      (**(code **)(lVar11 + 0x30))(&uStack_228,lVar15);
      if (iStack_208 != -0x5db38b49) goto LAB_0df4e86c;
LAB_0df4e8cb:
      plVar10 = (long *)&UNK_0133e465;
      uVar29 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar23 = *plVar10;
      if (lVar23 == 0 || lVar23 == plVar10[1]) goto LAB_0df4e114;
      lVar21 = 0;
      bVar30 = false;
      do {
        lVar22 = lVar23;
        if (lVar21 != 0) {
          lVar22 = lVar21;
        }
        bVar1 = lVar21 != 0;
        if (*(long *)(lVar23 + 8) != 0) {
          lVar22 = lVar21;
          bVar1 = bVar30;
        }
        lVar23 = lVar23 + 0x20;
        lVar21 = lVar22;
        bVar30 = bVar1;
      } while (lVar23 != plVar10[1]);
      if (bVar1 || lVar22 == 0) goto LAB_0df4e114;
      (**(code **)(lVar22 + 0x18))(&uStack_228,lVar15,0);
      if (iStack_208 == -0x5db38b49) goto LAB_0df4e8cb;
LAB_0df4e86c:
      func_0x0488e290(auStack_168,&uStack_228);
      plVar27 = plStack_130;
      if ((plStack_130 != (long *)0x0) && ((byte)(uStack_148._4_1_ - 1U) < 2)) {
        func_0x048b0900(&uStack_228,auStack_168);
      }
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(auStack_168);
      }
      if (plVar27 != (long *)0x0) goto LAB_0df4e8cb;
      plVar10 = (long *)&UNK_01411d3a;
      uVar29 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar29 < 0xfffffffffffffff8) {
      if (uVar29 < 0x17) {
        uVar16 = (ulong)uStack_258 >> 8;
        uStack_258 = (long *)CONCAT71((int7)uVar16,(char)uVar29 * '\x02');
        lVar15 = (long)&uStack_258 + 1;
        if (uVar29 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_258._1_1_ = 0;
          goto joined_r0x0df4e975;
        }
      }
      else {
        uVar16 = 0x1a;
        if ((uVar29 | 7) != 0x17) {
          uVar16 = (uVar29 | 7) + 1;
        }
        lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
        if (lVar15 == 0) {
          func_0x0eec74c0(uVar16,0);
        }
        param_3 = (long *)(uVar16 | 1);
        uStack_258 = param_3;
        uStack_250 = uVar29;
        lStack_248 = lVar15;
      }
      func_0x0eee2f00(lVar15,plVar10,uVar29);
      *(undefined1 *)(lVar15 + uVar29) = 0;
joined_r0x0df4e975:
      if (pcStack_210 != (code *)0x0) {
        (*pcStack_210)(&uStack_228);
      }
      plVar10 = uStack_258;
      uVar29 = uStack_250;
      if (((ulong)uStack_258 & 1) == 0) {
        uVar29 = (ulong)uStack_258 >> 1 & 0x7f;
      }
      uVar16 = uVar29 + 0xc;
      if (uVar16 < 0xfffffffffffffff8) {
        lVar15 = *param_5;
        if (uVar16 < 0x17) {
          uStack_160 = 0;
          puStack_158 = (undefined8 *)0x0;
          auStack_168._1_7_ = 0;
          auStack_168[0] = (char)uVar16 * '\x02';
        }
        else {
          uVar24 = 0x1a;
          if ((uVar16 | 7) != 0x17) {
            uVar24 = (uVar16 | 7) + 1;
          }
          puStack_158 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
          if (puStack_158 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar24,0);
          }
          auStack_168 = (undefined1  [8])(uVar24 | 1);
          uStack_160 = uVar16;
        }
        lVar11 = (long)puStack_158 + 0xc;
        bVar30 = ((ulong)auStack_168 & 1) == 0;
        puVar28 = puStack_158;
        if (bVar30) {
          puVar28 = (undefined8 *)(auStack_168 + 1);
        }
        *puVar28 = 0x6465746365707865;
        *(undefined4 *)(puVar28 + 1) = 0x206e6120;
        lVar23 = (long)&uStack_160 + 5;
        if (!bVar30) {
          lVar23 = lVar11;
        }
        if (uVar29 != 0) {
          lVar11 = lStack_248;
          if (((ulong)plVar10 & 1) == 0) {
            lVar11 = (long)&uStack_258 + 1;
          }
          func_0x0eee2ee0(lVar23,lVar11,uVar29);
        }
        *(undefined1 *)(lVar23 + uVar29) = 0;
        uVar29 = (ulong)auStack_168 >> 1 & 0x7f;
        puVar28 = (undefined8 *)(auStack_168 + 1);
        if (((ulong)auStack_168 & 1) != 0) {
          uVar29 = uStack_160;
          puVar28 = puStack_158;
        }
        uStack_1d8 = 0;
        if (puVar28 == (undefined8 *)0x0) {
          uStack_1d8 = (ulong)((uint)uVar29 & 0x7f) << 0x30;
        }
        else {
          lVar11 = uVar29 + 9;
          puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
          if (lVar11 != 0 && puVar12 == (ulong *)0x0) {
            func_0x0eec74c0(lVar11,8);
          }
          *puVar12 = uVar29;
          func_0x0eee2f00(puVar12 + 1,puVar28,uVar29);
          *(undefined1 *)((long)puVar12 + uVar29 + 8) = 0;
          uStack_1d8 = (ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(lVar15,8,&uStack_1d8);
        if ((uStack_1d8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1d8 = 0;
        if (((ulong)auStack_168 & 1) != 0) {
          func_0x0412a280(puStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        if (((ulong)plVar10 & 1) == 0) {
          return;
        }
        func_0x0412a280(lStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
        return;
      }
LAB_0df4f898:
      uVar19 = func_0x04882e30();
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      FUN_0ee386e0(&uStack_178);
      uVar19 = func_0x0eee2d70(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      func_0x0cc9c890(&uStack_228);
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(auStack_168);
      }
      if (((ulong)uStack_258 & 1) != 0) {
        func_0x0412a280(lStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_1e0 + 0xd0))();
      func_0x0ed6d560(param_3);
      uVar19 = func_0x0eee2d70(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      func_0x04882e20(uVar19);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar29 = func_0x04882e30();
    plVar9 = param_5;
    param_5 = plVar10;
LAB_0df4ebfd:
    fVar31 = (float)uVar29;
LAB_0df4ec15:
    fVar31 = (float)func_0x0eee3ab0(fVar31 / *(float *)(plVar9 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    if ((plVar27 < (long *)0x3) ||
       (uVar29 = (long)plVar27 - ((ulong)plVar27 >> 1 & 0x5555555555555555),
       uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
       1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
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
    if (plVar27 <= param_3) goto LAB_0df4ecda;
  }
  else {
    uVar29 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar16 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar16 < uVar29)) {
      uStack_178 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_178);
      if ((uStack_178 >> 0x37 & 1) == 0) {
        return;
      }
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_178 & 0xff00ffffffffffff) - 8);
      return;
    }
    plStack_1c8 = param_3;
    fVar31 = (float)func_0x0eee3ab0((float)uVar29 / *(float *)(plVar9 + 4));
    plVar10 = (long *)((long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31);
    param_3 = (long *)0x2;
    uStack_188 = uVar29;
    if ((plVar10 == (long *)0x1) || (param_3 = plVar10, ((ulong)plVar10 & (long)plVar10 - 1U) == 0))
    {
      plVar27 = (long *)plVar9[1];
      bVar30 = param_3 < plVar27;
      if (param_3 <= plVar27) {
LAB_0df4e835:
        if (!bVar30) goto LAB_0df4ecda;
        uVar29 = plVar9[3];
        if ((long)uVar29 < 0) goto LAB_0df4ebfd;
        fVar31 = (float)(long)uVar29;
        goto LAB_0df4ec15;
      }
    }
    else {
      param_3 = (long *)func_0x0412c3f0();
      plVar27 = (long *)plVar9[1];
      bVar30 = param_3 < plVar27;
      if (param_3 <= plVar27) goto LAB_0df4e835;
    }
  }
  func_0x0cca02c0(plVar9,param_3);
LAB_0df4ecda:
  func_0x0ed6d600(auStack_1a8,*param_5);
  if (uStack_188 != 0) {
    uStack_90 = 0x1b0000014af0d9;
    uStack_88 = 0x38000001448967;
    uStack_98 = 0x3a000001208ef5;
    plStack_a0 = plVar9 + 2;
    uVar16 = 0;
    uVar29 = uStack_188;
    plStack_1e0 = param_2;
    do {
      if ((*(uint *)(auStack_1a8._0_8_ + 0x2b0) != 0xffffffff) &&
         ((uint)auStack_1a8._8_4_ <= *(uint *)(auStack_1a8._0_8_ + 0x2b0))) {
        return;
      }
      puVar13 = (uint *)*param_5;
      func_0x0ed6d4a0(puVar13,uVar16);
      (**(code **)(*param_2 + 200))(param_2,uVar16);
      cVar6 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((cVar6 == '\x01') && (lVar15 = (**(code **)(*param_2 + 0xa8))(param_2), lVar15 != 2)) {
        uStack_1b0 = uStack_90;
        func_0x0ed5ffe0(*param_5,8,&uStack_1b0);
        if ((uStack_1b0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b0 & 0xff00ffffffffffff) - 8);
        }
        uStack_1b0 = 0;
      }
      else {
        cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
        if (cVar6 == '\0') {
          uStack_1b8 = uStack_88;
          func_0x0ed5ffe0(*param_5,8,&uStack_1b8);
          if ((uStack_1b8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_1b8 = 0;
        }
        else {
          uStack_258 = (long *)0x0;
          uStack_250 = 0;
          lStack_248 = 0;
          lStack_140 = plStack_1c8[5];
          puStack_158 = (undefined8 *)&UNK_048b1ea0;
          pcStack_150 = (code *)0x0;
          uStack_148 = CONCAT35(uStack_148._5_3_,0x3a24c74b7);
          uStack_138 = 0;
          plStack_130 = (long *)&UNK_048b1e80;
          auStack_168 = (undefined1  [8])&uStack_258;
          func_0x0ed75bc0(&puStack_a8,param_2,auStack_168,uStack_180,&lStack_80);
          (**(code **)(*param_2 + 0xd0))(param_2);
          cVar6 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
          if (cVar6 == '\0') {
            uStack_1c0 = uStack_98;
            func_0x0ed5ffe0(*param_5,8,&uStack_1c0);
            if ((uStack_1c0 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
            }
            uStack_1c0 = 0;
          }
          else {
            uVar29 = (ulong)uStack_258 >> 1 & 0x7f;
            lVar15 = (long)&uStack_258 + 1;
            if (((ulong)uStack_258 & 1) != 0) {
              uVar29 = uStack_250;
              lVar15 = lStack_248;
            }
            uStack_238 = func_0x04883620(&uStack_228,lVar15,uVar29);
            uVar29 = plVar9[1];
            if (uVar29 != 0) {
              uVar24 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
              uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
              uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar24 >> 0x38 < 2) {
                uVar17 = uVar29 - 1 & uStack_238;
              }
              else {
                uVar17 = uStack_238;
                if (uVar29 <= uStack_238) {
                  if ((uStack_238 | uVar29) >> 0x20 == 0) {
                    uVar17 = (uStack_238 & 0xffffffff) % (uVar29 & 0xffffffff);
                  }
                  else {
                    uVar17 = uStack_238 % uVar29;
                  }
                }
              }
              puVar28 = *(undefined8 **)(*plVar9 + uVar17 * 8);
              uStack_190 = uVar17;
              if ((puVar28 != (undefined8 *)0x0) &&
                 (plVar10 = (long *)*puVar28, plVar10 != (long *)0x0)) {
                lStack_198 = lStack_248;
                uVar18 = uStack_250;
                if (((ulong)uStack_258 & 1) == 0) {
                  lStack_198 = (long)&uStack_258 + 1;
                  uVar18 = (ulong)uStack_258 >> 1 & 0x7f;
                }
                if ((byte)(uVar24 >> 0x38) < 2) {
                  plStack_1e8 = param_5;
                  do {
                    if (plVar10[1] == uStack_238) {
                      bVar5 = *(byte *)(plVar10 + 2);
                      if ((bVar5 & 1) == 0) {
                        uVar24 = (ulong)(bVar5 >> 1);
                      }
                      else {
                        uVar24 = plVar10[3];
                      }
                      if (uVar24 == uVar18) {
                        if ((bVar5 & 1) == 0) {
                          lVar15 = (long)plVar10 + 0x11;
                        }
                        else {
                          lVar15 = plVar10[4];
                        }
                        iVar7 = func_0x0eee3000(lVar15,lStack_198,uVar18);
                        uVar17 = uStack_190;
                        plVar9 = plStack_240;
                        param_5 = plStack_1e8;
                        if (iVar7 == 0) goto LAB_0df4f63a;
                      }
                    }
                    else {
                      plVar9 = plStack_240;
                      param_5 = plStack_1e8;
                      if ((plVar10[1] & uVar29 - 1) != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                    plVar9 = plStack_240;
                    param_5 = plStack_1e8;
                  } while (plVar10 != (long *)0x0);
                }
                else {
                  do {
                    uVar24 = plVar10[1];
                    if (uVar24 == uStack_238) {
                      bVar5 = *(byte *)(plVar10 + 2);
                      if ((bVar5 & 1) == 0) {
                        uVar24 = (ulong)(bVar5 >> 1);
                      }
                      else {
                        uVar24 = plVar10[3];
                      }
                      if (uVar24 == uVar18) {
                        if ((bVar5 & 1) == 0) {
                          lVar15 = (long)plVar10 + 0x11;
                        }
                        else {
                          lVar15 = plVar10[4];
                        }
                        iVar7 = func_0x0eee3000(lVar15,lStack_198,uVar18);
                        uVar17 = uStack_190;
                        plVar9 = plStack_240;
                        if (iVar7 == 0) goto LAB_0df4f63a;
                      }
                    }
                    else {
                      if (uVar29 <= uVar24) {
                        if ((uVar24 | uVar29) >> 0x20 == 0) {
                          uVar24 = (uVar24 & 0xffffffff) % (uVar29 & 0xffffffff);
                        }
                        else {
                          uVar24 = uVar24 % uVar29;
                        }
                      }
                      plVar9 = plStack_240;
                      if (uVar24 != uVar17) break;
                    }
                    plVar10 = (long *)*plVar10;
                    plVar9 = plStack_240;
                  } while (plVar10 != (long *)0x0);
                }
              }
            }
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd8);
            if (plVar10 == (long *)0x0) {
              func_0x0eec74c0(0xd8,0);
            }
            puStack_218 = (undefined *)0x0;
            *plVar10 = 0;
            plVar10[1] = uStack_238;
            uStack_228 = plVar10;
            uStack_220 = plVar9;
            if (((ulong)uStack_258 & 1) == 0) {
              plVar10[4] = lStack_248;
              plVar10[2] = (long)uStack_258;
              plVar10[3] = uStack_250;
            }
            else {
              func_0x0412e5e0(plVar10 + 2,lStack_248,uStack_250);
            }
            uVar24 = uStack_238;
            plVar10[5] = 0;
            plVar10[6] = 0;
            plVar10[7] = 0;
            plVar10[8] = 0;
            plVar10[9] = 0;
            plVar10[10] = 0;
            plVar10[0xb] = 0;
            plVar10[0xc] = 0;
            plVar10[0xd] = 0;
            plVar10[0xe] = 0;
            plVar10[0xf] = 0;
            plVar10[0x10] = 0;
            plVar10[0x11] = 0;
            plVar10[0x12] = 0;
            plVar10[0x13] = 0;
            plVar10[0x14] = 0;
            *(undefined4 *)(plVar10 + 5) = 0x3f800000;
            plVar10[6] = 0;
            plVar10[7] = 0;
            plVar10[8] = 0;
            *(undefined2 *)(plVar10 + 9) = 0xffff;
            *(undefined4 *)(plVar10 + 0xb) = 3;
            plVar10[0xc] = 0;
            plVar10[0xd] = 0;
            *(undefined8 *)((long)plVar10 + 0x6a) = 0;
            *(undefined8 *)((long)plVar10 + 0x72) = 0;
            plVar10[0x10] = 0;
            plVar10[0x11] = 0;
            plVar10[0x12] = 0;
            *(undefined2 *)(plVar10 + 0x13) = 0xffff;
            plVar10[0x19] = 0;
            plVar10[0x1a] = 0;
            plVar10[0x17] = 0;
            plVar10[0x18] = 0;
            plVar10[0x15] = 0;
            plVar10[0x16] = 0;
            puStack_218 = (undefined *)CONCAT71(puStack_218._1_7_,1);
            if ((long)uVar29 < 0) {
              fVar32 = (float)uVar29;
              fVar31 = *(float *)(plVar9 + 4);
              if (uVar29 != 0) goto LAB_0df4f42b;
LAB_0df4f43c:
              uVar17 = 1;
              if (2 < uVar29) {
                uVar17 = (ulong)((uVar29 & uVar29 - 1) != 0);
              }
              uVar17 = uVar29 * 2 | uVar17;
              fVar31 = (float)func_0x0eee3ab0((float)(plVar9[3] + 1) / fVar31);
              uVar29 = (long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31;
              if (uVar29 < uVar17) {
                uVar29 = uVar17;
              }
              uVar17 = 2;
              if ((uVar29 == 1) || (uVar17 = uVar29, (uVar29 & uVar29 - 1) == 0)) {
                uVar29 = plStack_240[1];
                bVar30 = uVar17 < uVar29;
                if (uVar17 <= uVar29) goto LAB_0df4f4d6;
LAB_0df4f4ae:
                func_0x0cca02c0(plStack_240,uVar17);
              }
              else {
                uVar17 = func_0x0412c3f0();
                uVar29 = plStack_240[1];
                bVar30 = uVar17 < uVar29;
                if (uVar29 < uVar17) goto LAB_0df4f4ae;
LAB_0df4f4d6:
                if (bVar30) {
                  fVar31 = (float)func_0x0eee3ab0((float)(ulong)plStack_240[3] /
                                                  *(float *)(plStack_240 + 4));
                  uVar18 = (long)(fVar31 - _DAT_01198778) & (long)fVar31 >> 0x3f | (long)fVar31;
                  if ((uVar29 < 3) ||
                     (uVar25 = uVar29 - (uVar29 >> 1 & 0x5555555555555555),
                     uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
                     1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38))) {
                    uVar18 = func_0x0412c3f0(uVar18);
                  }
                  else if (1 < uVar18) {
                    lVar15 = 0x3f;
                    if (uVar18 - 1 != 0) {
                      for (; uVar18 - 1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                      }
                    }
                    uVar18 = 1L << (-((byte)lVar15 ^ 0x3f) & 0x3f);
                  }
                  if (uVar17 <= uVar18) {
                    uVar17 = uVar18;
                  }
                  if (uVar17 < uVar29) goto LAB_0df4f4ae;
                }
              }
              uVar29 = plStack_240[1];
              plVar9 = plStack_240;
              if ((uVar29 & uVar29 - 1) == 0) {
                uVar17 = uVar24 & uVar29 - 1;
              }
              else {
                uVar17 = uVar24;
                if (uVar29 <= uVar24) {
                  if ((uVar24 | uVar29) >> 0x20 == 0) {
                    uVar17 = (uVar24 & 0xffffffff) % (uVar29 & 0xffffffff);
                  }
                  else {
                    uVar17 = uVar24 % uVar29;
                  }
                }
              }
            }
            else {
              fVar32 = (float)(long)uVar29;
              fVar31 = *(float *)(plVar9 + 4);
              if (uVar29 == 0) goto LAB_0df4f43c;
LAB_0df4f42b:
              uVar17 = uStack_190;
              if (fVar32 * fVar31 < (float)(plVar9[3] + 1)) goto LAB_0df4f43c;
            }
            lVar15 = *plVar9;
            plVar10 = *(long **)(lVar15 + uVar17 * 8);
            if (plVar10 == (long *)0x0) {
              *uStack_228 = *plStack_a0;
              *plStack_a0 = (long)uStack_228;
              *(long **)(lVar15 + uVar17 * 8) = plStack_a0;
              if (*uStack_228 != 0) {
                uVar24 = *(ulong *)(*uStack_228 + 8);
                if ((uVar29 & uVar29 - 1) == 0) {
                  *(long **)(lVar15 + (uVar24 & uVar29 - 1) * 8) = uStack_228;
                }
                else {
                  if (uVar29 <= uVar24) {
                    if ((uVar24 | uVar29) >> 0x20 == 0) {
                      *(long **)(lVar15 + ((uVar24 & 0xffffffff) % (uVar29 & 0xffffffff)) * 8) =
                           uStack_228;
                      goto LAB_0df4f636;
                    }
                    uVar24 = uVar24 % uVar29;
                  }
                  *(long **)(lVar15 + uVar24 * 8) = uStack_228;
                }
              }
            }
            else {
              *uStack_228 = *plVar10;
              *plVar10 = (long)uStack_228;
            }
LAB_0df4f636:
            plVar9[3] = plVar9[3] + 1;
            plVar10 = uStack_228;
LAB_0df4f63a:
            param_2 = plStack_1e0;
            uStack_228 = plVar10 + 5;
            lStack_200 = plStack_1c8[5];
            puStack_218 = &UNK_0df46480;
            iStack_208 = -0x135ce4b0;
            pcStack_210 = (code *)0x0;
            uStack_204 = 3;
            uStack_1f8 = 0;
            puStack_1f0 = &UNK_0df463a0;
            func_0x0ed75bc0(&puStack_b0,plStack_1e0,&uStack_228,uStack_180,&lStack_58);
            uVar29 = uStack_188;
            (**(code **)(*param_2 + 0xd0))(param_2);
            if (pcStack_210 != (code *)0x0) {
              (*pcStack_210)(&uStack_228);
            }
          }
          if (pcStack_150 != (code *)0x0) {
            (*pcStack_150)(auStack_168);
          }
          if (((ulong)uStack_258 & 1) != 0) {
            func_0x0412a280(lStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
          }
        }
      }
      (**(code **)(*param_2 + 0xd0))(param_2);
      lVar15 = *(long *)(puVar13 + 2);
      uVar26 = *(uint *)(lVar15 + 0x1c + (ulong)*puVar13 * 0x20);
      *puVar13 = uVar26;
      if (puVar13[0x48] == 0) {
        uVar20 = puVar13[4];
LAB_0df4f775:
        lVar11 = lVar15 + (ulong)uVar20 * 0x20;
        uVar29 = (ulong)*(uint *)(lVar15 + -0x10 + (ulong)uVar20 * 0x20);
        if (uVar29 != 0xffffffff) {
          (**(code **)(&UNK_0f4e40d0 + uVar29 * 8))(auStack_168,lVar11 + -0x18);
          uVar20 = puVar13[4];
        }
        *(undefined4 *)(lVar11 + -0x10) = 0xffffffff;
        puVar13[4] = uVar20 - 1;
        uVar29 = uStack_188;
      }
      else if ((*(uint *)(*(long *)(puVar13 + 0x46) + 0x18 + (ulong)(puVar13[0x48] - 1) * 0x30) !=
                uVar26) && (uVar20 = puVar13[4], uVar26 == uVar20 - 1)) goto LAB_0df4f775;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < uVar29);
  }
  return;
}


