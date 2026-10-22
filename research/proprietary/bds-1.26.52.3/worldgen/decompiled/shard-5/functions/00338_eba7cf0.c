/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeca7cf0 (ELF vaddr 0xeba7cf0)
 * Label: caller-of-callee
 * Body:  [[0eca7cf0, 0eca7f41] [0eca7f50, 0eca841c] [0eca8420, 0eca8451] [0eca8460, 0eca9180] [0eca9190, 0eca9572]]
 * Ghidra: FUN_0eca7cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eca7cf0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined *puVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_2f8 [16];
  undefined *puStack_2e8;
  code *pcStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined1 *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  undefined4 uStack_288;
  undefined2 uStack_284;
  ulong uStack_280;
  ulong uStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  code *pcStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  char cStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  code *pcStack_218;
  int iStack_210;
  undefined4 uStack_20c;
  char cStack_208;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  undefined8 *puStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char cStack_118;
  ulong uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  ulong uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_48;
  ulong uStack_40;
  
  func_0x0da63570();
  if ((DAT_0f772720 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772720), iVar7 != 0)) {
    func_0x0ece2340();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7726a0,0xf53dab8);
    FUN_0410844d(&DAT_0f772720);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7726a0 + 4)) * 8);
  do {
    lVar12 = *plVar13;
    if (lVar12 == -1) goto LAB_0eca7d70;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f7726a0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eca7d70:
    puVar9 = &DAT_0f7726a0;
    if (iRam000000000f772700 != -0x2b3da790) goto LAB_0eca7dc8;
LAB_0eca7d9b:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0eca7dc8;
    bVar24 = (*(byte *)(lVar12 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar12 + 9);
    if (bVar24) {
      puVar9 = *(undefined **)(lVar12 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar24) {
      uVar16 = *(ulong *)(lVar12 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0eca7d9b;
LAB_0eca7dc8:
    puVar9 = &UNK_01425a49;
    uVar16 = 0x1c;
  }
  func_0x0ece2ad0(&puStack_238,param_1,puVar9,uVar16);
  uVar16 = param_1 + 0x18;
  lStack_240 = param_1;
  if (cStack_208 == '\0') {
    uStack_280 = param_1 + 0x18;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0xd,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xd,8);
    }
    puVar9 = puStack_238;
    *puVar10 = 4;
    *(undefined4 *)(puVar10 + 1) = 0x61746562;
    *(undefined1 *)((long)puVar10 + 0xc) = 0;
    if ((DAT_0f772720 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772720), iVar7 != 0)) {
      func_0x0ece2340();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7726a0,0xf53dab8);
      FUN_0410844d(&DAT_0f772720);
    }
    uVar23 = (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plVar13 = (long *)(*(long *)(puVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7726a0 + 4)) * 8);
    do {
      lVar12 = *plVar13;
      if (lVar12 == -1) goto LAB_0eca7ec0;
      plVar13 = (long *)(*(long *)(puVar9 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f7726a0 + 4)
            );
    if (plVar13 == *(long **)(puVar9 + 0x38)) {
LAB_0eca7ec0:
      puVar20 = &DAT_0f7726a0;
    }
    else {
      puVar20 = (undefined *)plVar13[2];
    }
    for (pbVar11 = *(byte **)(puStack_238 + 0x50); pbVar11 != *(byte **)(puStack_238 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1d) goto LAB_0eca7f5a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1d) {
LAB_0eca7f5a:
        if ((bVar3 & 1) == 0) {
          pbVar17 = pbVar11 + 1;
        }
        else {
          pbVar17 = *(byte **)(pbVar11 + 0x10);
        }
        auVar25[0] = -(*pbVar17 == DAT_014e1c20);
        auVar25[1] = -(pbVar17[1] == DAT_014e1c20._1_1_);
        auVar25[2] = -(pbVar17[2] == DAT_014e1c20._2_1_);
        auVar25[3] = -(pbVar17[3] == DAT_014e1c20._3_1_);
        auVar25[4] = -(pbVar17[4] == DAT_014e1c20._4_1_);
        auVar25[5] = -(pbVar17[5] == DAT_014e1c20._5_1_);
        auVar25[6] = -(pbVar17[6] == DAT_014e1c20._6_1_);
        auVar25[7] = -(pbVar17[7] == DAT_014e1c20._7_1_);
        auVar25[8] = -(pbVar17[8] == DAT_014e1c20._8_1_);
        auVar25[9] = -(pbVar17[9] == DAT_014e1c20._9_1_);
        auVar25[10] = -(pbVar17[10] == DAT_014e1c20._10_1_);
        auVar25[0xb] = -(pbVar17[0xb] == DAT_014e1c20._11_1_);
        auVar25[0xc] = -(pbVar17[0xc] == DAT_014e1c20._12_1_);
        auVar25[0xd] = -(pbVar17[0xd] == DAT_014e1c20._13_1_);
        auVar25[0xe] = -(pbVar17[0xe] == DAT_014e1c20._14_1_);
        auVar25[0xf] = -(pbVar17[0xf] == DAT_014e1c20._15_1_);
        auVar26[0] = -(pbVar17[0xd] == DAT_014e80e0);
        auVar26[1] = -(pbVar17[0xe] == DAT_014e80e0._1_1_);
        auVar26[2] = -(pbVar17[0xf] == DAT_014e80e0._2_1_);
        auVar26[3] = -(pbVar17[0x10] == DAT_014e80e0._3_1_);
        auVar26[4] = -(pbVar17[0x11] == DAT_014e80e0._4_1_);
        auVar26[5] = -(pbVar17[0x12] == DAT_014e80e0._5_1_);
        auVar26[6] = -(pbVar17[0x13] == DAT_014e80e0._6_1_);
        auVar26[7] = -(pbVar17[0x14] == DAT_014e80e0._7_1_);
        auVar26[8] = -(pbVar17[0x15] == DAT_014e80e0._8_1_);
        auVar26[9] = -(pbVar17[0x16] == DAT_014e80e0._9_1_);
        auVar26[10] = -(pbVar17[0x17] == DAT_014e80e0._10_1_);
        auVar26[0xb] = -(pbVar17[0x18] == DAT_014e80e0._11_1_);
        auVar26[0xc] = -(pbVar17[0x19] == DAT_014e80e0._12_1_);
        auVar26[0xd] = -(pbVar17[0x1a] == DAT_014e80e0._13_1_);
        auVar26[0xe] = -(pbVar17[0x1b] == DAT_014e80e0._14_1_);
        auVar26[0xf] = -(pbVar17[0x1c] == DAT_014e80e0._15_1_);
        auVar26 = auVar26 & auVar25;
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(puStack_238 + 0x58)) {
LAB_0eca7f84:
      uVar6 = uStack_20c;
      if (iStack_210 == 0) {
        if (((puVar20 == (undefined *)0x0) || (*(int *)(puVar20 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar20 + 0x68) == 0)) goto LAB_0eca8023;
        lVar12 = *(long *)(puVar20 + 0x68) + 0x38;
      }
      else {
        if (puVar20 == (undefined *)0x0) {
          puVar20 = (undefined *)func_0x048aead0(puVar9 + 0x18);
        }
        lVar12 = func_0x048b0c90(puVar9 + 0x18,puVar20,uVar6,1);
        if (lVar12 == 0) {
          auStack_2f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_2f8);
          lVar12 = auStack_2f8._0_8_;
          if (auStack_2f8._0_8_ == 0) goto LAB_0eca8023;
        }
        if ((*(int *)(lVar12 + 0x50) == -0x45dcb126) && (*(long *)(lVar12 + 0x58) != 0)) {
          lVar12 = *(long *)(lVar12 + 0x58) + 0x40;
        }
        else {
LAB_0eca8023:
          lVar12 = 0;
        }
      }
      uStack_278 = 0;
      puStack_268 = &UNK_05ead3e0;
      uStack_258 = 0x7fe5f144;
      pcStack_260 = (code *)&UNK_05ead970;
      uStack_254 = CONCAT31(uStack_254._1_3_,1);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      auVar25 = auStack_2d8;
      *puVar10 = 0x1270f270f270f;
      puVar10[1] = uVar23;
      puVar10[2] = 0;
      pcStack_2e0 = (code *)&UNK_05ead3e0;
      auStack_2d8._8_4_ = 0x7fe5f144;
      auStack_2d8._0_8_ = &UNK_05ead970;
      auStack_2d8._13_3_ = auVar25._13_3_;
      auStack_2d8[0xc] = 1;
      uStack_278 = 0;
      auStack_2f8._8_8_ = puVar10;
      auStack_2f8._0_8_ = &UNK_0daac7f0;
      puStack_138 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_138 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar15 = _UNK_014590aa;
      uStack_148 = 0x21;
      puStack_140 = (undefined1 *)0x1d;
      *(ulong *)((long)puStack_138 + 0xd) = CONCAT53(_UNK_014590a5,_DAT_014590a2);
      *(undefined8 *)((long)puStack_138 + 0x15) = uVar15;
      uVar15 = CONCAT35(_DAT_014590a2,_UNK_0145909d);
      *puStack_138 = _DAT_01459095;
      puStack_138[1] = uVar15;
      *(undefined1 *)((long)puStack_138 + 0x1d) = 0;
      lVar12 = func_0x048b5060(lVar12,&uStack_148);
      *(undefined **)(lVar12 + 0x20) = &UNK_0daac7f0;
      pcVar19 = (code *)&UNK_05ead970;
      if ((undefined1 *)(lVar12 + 0x20) != auStack_2f8) {
        puVar18 = (undefined8 *)(lVar12 + 0x28);
        if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0eca8198:
          auStack_2f8._8_8_ = 0;
          *puVar18 = puVar10;
        }
        else {
          (**(code **)(lVar12 + 0x40))(puVar18);
          if (auStack_2d8[0xc] != '\0') {
            if (auStack_2d8[0xc] != '\x02') {
              puVar10 = (undefined8 *)auStack_2f8._8_8_;
              goto LAB_0eca8198;
            }
            (*pcStack_2e0)(5,auStack_2f8 + 8,puVar18);
          }
        }
        *(code **)(lVar12 + 0x38) = pcStack_2e0;
        *(undefined8 *)(lVar12 + 0x40) = auStack_2d8._0_8_;
        *(undefined4 *)(lVar12 + 0x48) = auStack_2d8._8_4_;
        *(char *)(lVar12 + 0x4c) = auStack_2d8[0xc];
        pcVar19 = (code *)auStack_2d8._0_8_;
      }
      if ((uStack_148 & 1) != 0) {
        func_0x0412a280(puStack_138,uStack_148 & 0xfffffffffffffffe);
        pcVar19 = (code *)auStack_2d8._0_8_;
      }
      param_1 = lStack_240;
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)(auStack_2f8 + 8);
      }
      if (pcStack_260 != (code *)0x0) {
        (*pcStack_260)(&uStack_278);
      }
      uVar23 = 0;
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f561458 == '\0') && (iVar8 = func_0x04108328(&DAT_0f561458), iVar8 != 0)) {
        func_0x05eada10(0xf561440);
        FUN_0410844d(&DAT_0f561458);
      }
      param_1 = lStack_240;
      if (iVar7 == _DAT_0f561444) goto LAB_0eca7f84;
    }
    puStack_2e8 = (undefined *)CONCAT44(uStack_224,uStack_228);
    auStack_2d8._8_4_ = iStack_210;
    auStack_2d8._0_8_ = pcStack_218;
    auStack_2d8._12_4_ = uStack_20c;
    pcStack_2e0 = uStack_220;
    auStack_2f8._8_8_ = puStack_230;
    auStack_2f8._0_8_ = puStack_238;
    if ((DAT_0f772740 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772740), iVar7 != 0)) {
      func_0x0ece2450();
      FUN_0410844d(&DAT_0f772740);
    }
    if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
      func_0x0daab910(0xf733290);
      FUN_0410844d(&DAT_0f7332a8);
    }
    uStack_278 = CONCAT44(uStack_278._4_4_,_DAT_0f733294);
    puStack_270 = &SUB_0daab720;
    puStack_268 = &UNK_0ece3520;
    func_0x05da1460(auStack_2f8 + 8);
    uVar16 = uStack_280;
    if ((uVar23 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar23 & 0xff00ffffffffffff) - 8);
      uVar16 = uStack_280;
    }
  }
  lVar12 = func_0x0b0f5850(uVar16);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar24 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar22 = lVar12 + 9;
    if (bVar24) {
      lVar22 = *(long *)(lVar12 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar24) {
      uVar16 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ece3530(&uStack_278,param_1,lVar22,uVar16);
  }
  else {
    func_0x0ece3530(&uStack_278,param_1,&UNK_01471fe1,0xe);
  }
  if (cStack_248 != '\0') {
    return;
  }
  func_0x05d54750(&uStack_168,&UNK_0f299920);
  uStack_284 = 0x746e;
  uStack_288 = 0x656d7563;
  uStack_150 = uStack_160;
  uStack_48 = uStack_168;
  uStack_40 = uStack_160;
  uStack_160 = 0;
  uStack_280 = uStack_158;
  uStack_158 = 0;
  lVar22 = uStack_278 + 0x18;
  lVar12 = func_0x0b0f5850(lVar22);
  pbVar17 = *(byte **)(uStack_278 + 0x58);
  for (pbVar11 = *(byte **)(uStack_278 + 0x50); pbVar11 != pbVar17; pbVar11 = pbVar11 + 0x38) {
    bVar3 = *pbVar11;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x24) goto LAB_0eca846a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x24) {
LAB_0eca846a:
      if ((bVar3 & 1) == 0) {
        pbVar21 = pbVar11 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar11 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar21,0x24);
      if (iVar7 == 0) break;
    }
  }
  uVar16 = uStack_280;
  if (pbVar11 == pbVar17) {
LAB_0eca84a0:
    if (iStack_250 == 0) {
      if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
      goto LAB_0eca851c;
      lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
    }
    else {
      puVar9 = (undefined *)func_0x048b0c90(lVar22,lVar12,uStack_24c,1);
      if (puVar9 == (undefined *)0x0) {
        puStack_238 = (undefined *)0x0;
        puStack_230 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_238);
        puVar9 = puStack_238;
        if (puStack_238 == (undefined *)0x0) goto LAB_0eca851c;
      }
      if ((*(int *)(puVar9 + 0x50) == -0x45dcb126) && (*(long *)(puVar9 + 0x58) != 0)) {
        lVar12 = *(long *)(puVar9 + 0x58) + 0x40;
      }
      else {
LAB_0eca851c:
        lVar12 = 0;
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auStack_2f8._8_8_;
    auStack_2f8 = auVar4 << 0x40;
    puStack_2e8 = &UNK_048b4ab0;
    pcStack_2e0 = (code *)&UNK_048b49f0;
    auStack_2d8._0_5_ = 0x1d33bd9c5;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar10 = 0x6f44726f7463411a;
    *(undefined4 *)(puVar10 + 1) = uStack_288;
    *(undefined2 *)((long)puVar10 + 0xc) = uStack_284;
    *(undefined2 *)((long)puVar10 + 0xe) = 0;
    puVar10[2] = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    *(undefined2 *)(puVar10 + 3) = 0x802;
    puVar10[4] = uStack_48;
    puVar10[5] = uStack_40;
    puVar10[6] = uStack_280;
    puStack_238 = &UNK_048b46e0;
    uStack_220 = (code *)&UNK_048b4ab0;
    pcStack_218 = (code *)&UNK_048b49f0;
    iStack_210 = -0x2cc4263b;
    uStack_20c = CONCAT31(uStack_20c._1_3_,1);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auStack_2f8._8_8_;
    auStack_2f8 = auVar5 << 0x40;
    puStack_230 = puVar10;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar15 = _UNK_014518c1;
    uStack_148 = 0x29;
    puStack_140 = (undefined1 *)0x24;
    puVar10[2] = _DAT_014518b9;
    puVar10[3] = uVar15;
    uVar15 = _UNK_014518b1;
    *puVar10 = _DAT_014518a9;
    puVar10[1] = uVar15;
    *(undefined4 *)(puVar10 + 4) = 0x5d797472;
    *(undefined1 *)((long)puVar10 + 0x24) = 0;
    puStack_138 = puVar10;
    lVar12 = func_0x048b5060(lVar12,&uStack_148);
    *(undefined **)(lVar12 + 0x20) = &UNK_048b46e0;
    pcVar19 = (code *)&UNK_048b49f0;
    if ((undefined **)(lVar12 + 0x20) != &puStack_238) {
      puVar10 = (undefined8 *)(lVar12 + 0x28);
      if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0eca86f3:
        puVar18 = puStack_230;
        puStack_230 = (undefined8 *)0x0;
        *puVar10 = puVar18;
      }
      else {
        (**(code **)(lVar12 + 0x40))(puVar10);
        if ((char)uStack_20c != '\0') {
          if ((char)uStack_20c != '\x02') goto LAB_0eca86f3;
          (*uStack_220)(5,&puStack_230,puVar10);
        }
      }
      *(code **)(lVar12 + 0x38) = uStack_220;
      *(code **)(lVar12 + 0x40) = pcStack_218;
      *(int *)(lVar12 + 0x48) = iStack_210;
      *(char *)(lVar12 + 0x4c) = (char)uStack_20c;
      pcVar19 = pcStack_218;
    }
    if ((uStack_148 & 1) != 0) {
      func_0x0412a280(puStack_138,uStack_148 & 0xfffffffffffffffe);
      pcVar19 = pcStack_218;
    }
    if (pcVar19 != (code *)0x0) {
      (*pcVar19)(&puStack_230);
    }
    if (pcStack_2e0 != (code *)0x0) {
      (*pcStack_2e0)(auStack_2f8);
    }
    uStack_150 = 0;
    uVar16 = 0;
  }
  else {
    iVar7 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    if (iVar7 == _DAT_0f550754) goto LAB_0eca84a0;
  }
  cStack_98 = cStack_248;
  uStack_a8 = CONCAT44(uStack_254,uStack_258);
  uStack_a0 = CONCAT44(uStack_24c,iStack_250);
  puStack_b8 = puStack_268;
  pcStack_b0 = pcStack_260;
  uStack_c8 = uStack_278;
  puStack_c0 = puStack_270;
  func_0x0ece3e70(&puStack_238,&uStack_c8,&UNK_011ea907,0xb,1);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f4e6600;
  if (uStack_220 != (code *)0x0) {
    lVar12 = *(long *)uStack_220;
    uStack_220 = (code *)plVar13;
    (**(code **)(lVar12 + 8))();
    plVar13 = (long *)uStack_220;
  }
  uStack_220 = (code *)plVar13;
  auStack_2f8._0_4_ = uStack_228;
  auStack_2f8._8_8_ = 0;
  puStack_2e8 = (undefined *)((ulong)puStack_2e8 & 0xffffffff00000000);
  pcStack_2e0 = (code *)0x1;
  auStack_2d8 = ZEXT816(0x7cf8580) << 0x40;
  puStack_2c8 = &SUB_048b06d0;
  puStack_2c0 = &UNK_07cf8590;
  puStack_2b8 = &UNK_0ece4370;
  puStack_2b0 = &UNK_0ece45b0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  func_0x048b05a0(puStack_230,auStack_2f8);
  plVar13 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_298 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ece4070(&puStack_238);
  cStack_58 = cStack_98;
  uStack_68 = uStack_a8;
  uStack_60 = uStack_a0;
  puStack_78 = puStack_b8;
  pcStack_70 = pcStack_b0;
  uStack_88 = uStack_c8;
  puStack_80 = puStack_c0;
  func_0x048b0bc0(&uStack_220);
  func_0x0ece3e70(&puStack_238,&uStack_88,&UNK_011ed181,10,0);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f4e0a98;
  if (uStack_220 != (code *)0x0) {
    lVar12 = *(long *)uStack_220;
    uStack_220 = (code *)plVar13;
    (**(code **)(lVar12 + 8))();
    plVar13 = (long *)uStack_220;
  }
  uStack_220 = (code *)plVar13;
  auStack_2f8._0_4_ = uStack_228;
  auStack_2f8._8_8_ = 0;
  puStack_2e8 = (undefined *)((ulong)puStack_2e8 & 0xffffffff00000000);
  pcStack_2e0 = (code *)0x1;
  auStack_2d8 = ZEXT816(0xece49b0) << 0x40;
  puStack_2c8 = &SUB_048b06d0;
  puStack_2c0 = &UNK_0ece2280;
  puStack_2b8 = &UNK_0ece4a70;
  puStack_2b0 = &UNK_0ece4db0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  func_0x048b05a0(puStack_230,auStack_2f8);
  plVar13 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_298 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ece4070(&puStack_238);
  cStack_d8 = cStack_58;
  uStack_e8 = uStack_68;
  uStack_e0 = uStack_60;
  puStack_f8 = puStack_78;
  pcStack_f0 = pcStack_70;
  uStack_108 = uStack_88;
  puStack_100 = puStack_80;
  func_0x048b0bc0(&uStack_220);
  func_0x0ece3a70(&puStack_238,uStack_108 + 0x18);
  if (uStack_220._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != (int)uStack_220) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    puVar10 = *(undefined8 **)(piVar14 + 0xc);
    while (puVar10 != puStack_230) {
      piVar14 = *(int **)(piVar14 + 0xe);
      puVar10 = *(undefined8 **)(piVar14 + 0xc);
    }
LAB_0eca8b4f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_220._4_4_ == 1) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x48);
      iVar7 = *piVar14;
      while (iVar7 != (int)uStack_220) {
        piVar14 = piVar14 + 0x1a;
        iVar7 = *piVar14;
      }
      goto LAB_0eca8b4f;
    }
    if (uStack_220._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_224,uStack_228) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0ece3e70(&puStack_238,&uStack_108,&DAT_0145f58d,0x10,0x10);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f4e0b10;
  if (uStack_220 != (code *)0x0) {
    lVar12 = *(long *)uStack_220;
    uStack_220 = (code *)plVar13;
    (**(code **)(lVar12 + 8))();
    plVar13 = (long *)uStack_220;
  }
  uStack_220 = (code *)plVar13;
  auStack_2f8._0_4_ = uStack_228;
  auStack_2f8._8_8_ = 0;
  puStack_2e8 = (undefined *)((ulong)puStack_2e8 & 0xffffffff00000000);
  pcStack_2e0 = (code *)0x1;
  auStack_2d8 = ZEXT816(0xeceb840) << 0x40;
  puStack_2c8 = &SUB_048b06d0;
  puStack_2c0 = &UNK_0ece95a0;
  puStack_2b8 = &UNK_0eceb900;
  puStack_2b0 = &UNK_0ecebad0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  func_0x048b05a0(puStack_230,auStack_2f8);
  plVar13 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_298 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ece4070(&puStack_238);
  cStack_118 = cStack_d8;
  uStack_128 = uStack_e8;
  uStack_120 = uStack_e0;
  puStack_138 = (undefined8 *)puStack_f8;
  pcStack_130 = pcStack_f0;
  uStack_148 = uStack_108;
  puStack_140 = puStack_100;
  func_0x048b0bc0(&uStack_220);
  func_0x0ece3e70(&puStack_238,&uStack_148,&UNK_01416889,6,0);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f4e6600;
  if (uStack_220 != (code *)0x0) {
    lVar12 = *(long *)uStack_220;
    uStack_220 = (code *)plVar13;
    (**(code **)(lVar12 + 8))();
    plVar13 = (long *)uStack_220;
  }
  uStack_220 = (code *)plVar13;
  auStack_2f8._0_4_ = uStack_228;
  auStack_2f8._8_8_ = 0;
  puStack_2e8 = (undefined *)((ulong)puStack_2e8 & 0xffffffff00000000);
  pcStack_2e0 = (code *)0x1;
  auStack_2d8 = ZEXT816(0x7cf8580) << 0x40;
  puStack_2c8 = &SUB_048b06d0;
  puStack_2c0 = &UNK_07cf8590;
  puStack_2b8 = &UNK_0ecebf50;
  puStack_2b0 = &UNK_0ecec1a0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  func_0x048b05a0(puStack_230,auStack_2f8);
  plVar13 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_298 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ece4070(&puStack_238);
  func_0x048b0bc0(&uStack_220);
  if ((uVar16 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar16 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_150 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_150 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_158 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_158 & 0xff00ffffffffffff) - 8);
  }
  uStack_158 = 0;
  if ((uStack_160 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_160 & 0xff00ffffffffffff) - 8);
  }
  uStack_160 = 0;
  func_0x0e6c8ad0(lStack_240);
  func_0x0ece3e70(&puStack_238,&uStack_278,&UNK_011ccec2,5,0);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f492920;
  if (uStack_220 != (code *)0x0) {
    lVar12 = *(long *)uStack_220;
    uStack_220 = (code *)plVar13;
    (**(code **)(lVar12 + 8))();
    plVar13 = (long *)uStack_220;
  }
  uStack_220 = (code *)plVar13;
  auStack_2f8._0_4_ = uStack_228;
  auStack_2f8._8_8_ = 0;
  puStack_2e8 = (undefined *)((ulong)puStack_2e8 & 0xffffffff00000000);
  pcStack_2e0 = (code *)0x1;
  auStack_2d8 = ZEXT816(0xdad3780) << 0x40;
  puStack_2c8 = &SUB_048b06d0;
  puStack_2c0 = &UNK_0dad3440;
  puStack_2b8 = &UNK_0ecec380;
  puStack_2b0 = &UNK_0ecec5a0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  func_0x048b05a0(puStack_230,auStack_2f8);
  plVar13 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_298 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ece4070(&puStack_238);
  uVar16 = uStack_278;
  func_0x048b0bc0(&uStack_220);
  lVar12 = uVar16 + 0x18;
  uVar15 = func_0x0b0f5850(lVar12);
  if (iStack_250 == 1) {
    puVar9 = (undefined *)func_0x048b0c90(lVar12,uVar15,uStack_24c,1);
    if (puVar9 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      puStack_230 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_238);
      puVar9 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar9 + 0x58) + 0xa9) = 4;
    goto LAB_0eca921e;
  }
  puVar9 = (undefined *)FUN_048b1040(lVar12,uVar15,uStack_24c,1);
  if (puVar9 == (undefined *)0x0) {
    puStack_238 = (undefined *)0x0;
    puStack_230 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_238);
    puVar20 = *(undefined **)(puStack_238 + 0x38);
    puVar9 = puStack_238;
    if (puVar20 == (undefined *)0x0) goto LAB_0eca914f;
LAB_0eca9177:
    do {
      puVar9 = puVar20;
      puVar20 = *(undefined **)(puVar9 + 0x38);
      if (*(undefined **)(puVar9 + 0x38) == (undefined *)0x0) {
        puStack_238 = (undefined *)0x0;
        puStack_230 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_238);
        puVar20 = puStack_238;
      }
    } while (puVar20 != (undefined *)0x0);
  }
  else {
    puVar20 = *(undefined **)(puVar9 + 0x38);
    if (puVar20 != (undefined *)0x0) goto LAB_0eca9177;
LAB_0eca914f:
    puStack_238 = (undefined *)0x0;
    puStack_230 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_238);
    puVar20 = puStack_238;
    if (puStack_238 != (undefined *)0x0) goto LAB_0eca9177;
  }
  *(undefined1 *)(*(long *)(puVar9 + 0x48) + 0x10) = 4;
  if ((puVar9[0x12] & 2) != 0) {
    uVar15 = func_0x0b0f5850(lVar12);
    puVar9 = (undefined *)FUN_048b1040(lVar12,uVar15,0xbf75c8f8,1);
    if (puVar9 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      puStack_230 = (undefined8 *)0x0;
      func_0x048b10d0(&puStack_238);
      puVar9 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar9 + 0x48) + 8) = 4;
  }
LAB_0eca921e:
  func_0x0ece3e70(&puStack_238,&uStack_278,&UNK_014d7499,8,0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f4e6600;
  if (uStack_220 != (code *)0x0) {
    lVar12 = *(long *)uStack_220;
    uStack_220 = (code *)puVar10;
    (**(code **)(lVar12 + 8))();
    puVar10 = (undefined8 *)uStack_220;
  }
  uStack_220 = (code *)puVar10;
  auStack_2f8._0_4_ = uStack_228;
  auStack_2f8._8_8_ = 0;
  puStack_2e8 = (undefined *)((ulong)puStack_2e8 & 0xffffffff00000000);
  pcStack_2e0 = (code *)0x1;
  auStack_2d8 = ZEXT816(0x7cf8580) << 0x40;
  puStack_2c8 = &SUB_048b06d0;
  puStack_2c0 = &UNK_07cf8590;
  puStack_2b8 = &UNK_0ecec780;
  puStack_2b0 = &UNK_0ecec9d0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  func_0x048b05a0(puStack_230,auStack_2f8);
  plVar13 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_298 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ece4070(&puStack_238);
  func_0x048b0bc0(&uStack_220);
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x1459095  [__dev_aid:actor_def_version]
 * 0x14590a2  tor_def_version]
 * 0x14e80e0  tor_def_version]
 */
