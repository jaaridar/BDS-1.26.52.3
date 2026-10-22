/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc044f50 (ELF vaddr 0xbf44f50)
 * Label: caller-of-callee
 * Body:  [[0c044f50, 0c0455f6] [0c045600, 0c045642] [0c045650, 0c046066] [0c046070, 0c046905] [0c046910, 0c046f22]]
 * Ghidra: FUN_0c044f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c044f50(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong unaff_R12;
  ulong *puVar22;
  ulong unaff_R15;
  ulong uVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  long lStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [8];
  ulong uStack_260;
  ulong uStack_258;
  code *pcStack_250;
  code *pcStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  char cStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  char cStack_218;
  undefined8 *puStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  char cStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 *puStack_1b8;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long *plStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  undefined7 uStack_e7;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong auStack_90 [2];
  undefined *puStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 *puStack_38;
  
  func_0x0eb69b50();
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  cStack_1f0 = '\0';
  uVar23 = param_3[3];
  if ((char)uVar23 == '\x01') {
    uStack_208 = *param_3;
    uStack_200 = 0;
    unaff_R12 = param_3[1];
    if ((unaff_R12 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((unaff_R12 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,unaff_R12 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      unaff_R12 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1f8 = 0;
    unaff_R15 = param_3[2];
    uStack_200 = unaff_R12;
    if ((unaff_R15 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((unaff_R15 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,unaff_R15 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      unaff_R15 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1f0 = '\x01';
    uStack_1f8 = unaff_R15;
  }
  puStack_210 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_210 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar14 = _UNK_012ffed1;
  *puStack_210 = _DAT_012ffec9;
  puStack_210[1] = uVar14;
  puStack_210[2] = 0x2e746e656e6f706d;
  *(undefined1 *)(puStack_210 + 3) = 0;
  uStack_230 = uStack_230 & 0xffffffffffffff00;
  cStack_218 = '\0';
  if ((char)uVar23 != '\0') {
    uStack_230 = uStack_208;
    uStack_228 = 0;
    if ((unaff_R12 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((unaff_R12 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,unaff_R12 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      unaff_R12 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_220 = 0;
    uStack_228 = unaff_R12;
    if ((unaff_R15 & 0x80000000000000) != 0) {
      lVar12 = *(long *)((unaff_R15 & 0xff00ffffffffffff) - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,unaff_R15 & 0xff00ffffffffffff,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      unaff_R15 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_218 = '\x01';
    uStack_220 = unaff_R15;
  }
  lVar11 = func_0x0c068ba0(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar24 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar12 = lVar11 + 9;
    if (bVar24) {
      lVar12 = *(long *)(lVar11 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar24) {
      uVar23 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0c069d90(auStack_268,param_1,lVar12,uVar23,1);
  }
  else {
    func_0x0c069d90(auStack_268,param_1,0,0,1);
  }
  if (cStack_238 == '\0') {
    if ((DAT_0f6d3270 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d3270), iVar9 != 0)) {
      func_0x0ee25020(0xf6d3248,&DAT_011fddb3);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d3248,0xf53dab8);
      func_0x0410844d(&DAT_0f6d3270);
    }
    uVar23 = (ulong)(DAT_0f6d3250 >> 1);
    lVar11 = 0xf6d3251;
    if ((DAT_0f6d3250 & 1) != 0) {
      uVar23 = _DAT_0f6d3258;
      lVar11 = _DAT_0f6d3260;
    }
    func_0x0c06a780(&uStack_1e8,auStack_268,lVar11,uVar23,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f34ebb8;
    if (uStack_1d0 != (long *)0x0) {
      lVar11 = *uStack_1d0;
      uStack_1d0 = plVar10;
      (**(code **)(lVar11 + 8))();
      plVar10 = uStack_1d0;
    }
    uStack_1d0 = plVar10;
    uStack_2d0 = (undefined4)lStack_1d8;
    lStack_2c8 = 0;
    uStack_2c0 = 0;
    plStack_2b8 = (long *)0x1;
    uStack_2b0 = 0;
    uStack_2a8 = &UNK_0c0a9280;
    puStack_2a0 = &SUB_048b06d0;
    puStack_298 = &UNK_0c0a8fa0;
    puStack_290 = &UNK_0c0a9340;
    puStack_288 = &UNK_0c0a95b0;
    uStack_280 = 0;
    auStack_278 = (undefined1  [16])0x0;
    func_0x048b05a0(lStack_1e0,&uStack_2d0);
    uVar14 = auStack_278._8_8_;
    if ((long *)auStack_278._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_278._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
        FUN_0412c2d0(uVar14);
      }
    }
    iVar9 = *(int *)(lStack_1e0 + 0x1c);
    if (iVar9 == 2) {
      piVar19 = *(int **)(*(long *)(*(long *)(lStack_1e0 + 0x10) + 0x78) + 0x60);
      iVar9 = *piVar19;
      while (iVar9 != *(int *)(lStack_1e0 + 0x18)) {
        piVar19 = piVar19 + 0x16;
        iVar9 = *piVar19;
      }
      lVar11 = *(long *)(piVar19 + 0xc);
      while (lVar11 != *(long *)(lStack_1e0 + 8)) {
        piVar19 = *(int **)(piVar19 + 0xe);
        lVar11 = *(long *)(piVar19 + 0xc);
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar19 = *(int **)(*(long *)(*(long *)(lStack_1e0 + 0x10) + 0x78) + 0x48);
      iVar9 = *piVar19;
      while (iVar9 != *(int *)(lStack_1e0 + 0x18)) {
        piVar19 = piVar19 + 0x1a;
        iVar9 = *piVar19;
      }
      *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      puVar1 = (uint *)(*(long *)(lStack_1e0 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&uStack_1e8);
    func_0x048b0bc0(&uStack_1d0);
  }
  if ((DAT_0f6d3270 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d3270), iVar9 != 0)) {
    func_0x0ee25020(0xf6d3248,&DAT_011fddb3);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3248,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3270);
  }
  uVar23 = (ulong)(DAT_0f6d3250 >> 1);
  lVar11 = 0xf6d3251;
  if ((DAT_0f6d3250 & 1) != 0) {
    uVar23 = _DAT_0f6d3258;
    lVar11 = _DAT_0f6d3260;
  }
  lVar12 = func_0x0c0a8880(param_1 + 0x18);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar24 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar11 = lVar12 + 9;
    if (bVar24) {
      lVar11 = *(long *)(lVar12 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar24) {
      uVar23 = *(ulong *)(lVar12 + 0x10);
    }
  }
  func_0x0c0a9a00(&uStack_2d0,param_1,lVar11,uVar23);
  lVar12 = CONCAT44(uStack_2cc,uStack_2d0) + 0x18;
  lVar11 = func_0x0c0a8880(lVar12);
  pbVar3 = *(byte **)(CONCAT44(uStack_2cc,uStack_2d0) + 0x58);
  for (pbVar20 = *(byte **)(CONCAT44(uStack_2cc,uStack_2d0) + 0x50); pbVar20 != pbVar3;
      pbVar20 = pbVar20 + 0x38) {
    bVar2 = *pbVar20;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c04565a;
    }
    else if (*(long *)(pbVar20 + 8) == 0x1a) {
LAB_0c04565a:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar20 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar20 + 0x10);
      }
      auVar25[0] = -(*pbVar21 == DAT_014eaba0);
      auVar25[1] = -(pbVar21[1] == DAT_014eaba0._1_1_);
      auVar25[2] = -(pbVar21[2] == DAT_014eaba0._2_1_);
      auVar25[3] = -(pbVar21[3] == DAT_014eaba0._3_1_);
      auVar25[4] = -(pbVar21[4] == DAT_014eaba0._4_1_);
      auVar25[5] = -(pbVar21[5] == DAT_014eaba0._5_1_);
      auVar25[6] = -(pbVar21[6] == DAT_014eaba0._6_1_);
      auVar25[7] = -(pbVar21[7] == DAT_014eaba0._7_1_);
      auVar25[8] = -(pbVar21[8] == DAT_014eaba0._8_1_);
      auVar25[9] = -(pbVar21[9] == DAT_014eaba0._9_1_);
      auVar25[10] = -(pbVar21[10] == DAT_014eaba0._10_1_);
      auVar25[0xb] = -(pbVar21[0xb] == DAT_014eaba0._11_1_);
      auVar25[0xc] = -(pbVar21[0xc] == DAT_014eaba0._12_1_);
      auVar25[0xd] = -(pbVar21[0xd] == DAT_014eaba0._13_1_);
      auVar25[0xe] = -(pbVar21[0xe] == DAT_014eaba0._14_1_);
      auVar25[0xf] = -(pbVar21[0xf] == DAT_014eaba0._15_1_);
      auVar26[0] = -(pbVar21[10] == DAT_014e4ff0);
      auVar26[1] = -(pbVar21[0xb] == DAT_014e4ff0._1_1_);
      auVar26[2] = -(pbVar21[0xc] == DAT_014e4ff0._2_1_);
      auVar26[3] = -(pbVar21[0xd] == DAT_014e4ff0._3_1_);
      auVar26[4] = -(pbVar21[0xe] == DAT_014e4ff0._4_1_);
      auVar26[5] = -(pbVar21[0xf] == DAT_014e4ff0._5_1_);
      auVar26[6] = -(pbVar21[0x10] == DAT_014e4ff0._6_1_);
      auVar26[7] = -(pbVar21[0x11] == DAT_014e4ff0._7_1_);
      auVar26[8] = -(pbVar21[0x12] == DAT_014e4ff0._8_1_);
      auVar26[9] = -(pbVar21[0x13] == DAT_014e4ff0._9_1_);
      auVar26[10] = -(pbVar21[0x14] == DAT_014e4ff0._10_1_);
      auVar26[0xb] = -(pbVar21[0x15] == DAT_014e4ff0._11_1_);
      auVar26[0xc] = -(pbVar21[0x16] == DAT_014e4ff0._12_1_);
      auVar26[0xd] = -(pbVar21[0x17] == DAT_014e4ff0._13_1_);
      auVar26[0xe] = -(pbVar21[0x18] == DAT_014e4ff0._14_1_);
      auVar26[0xf] = -(pbVar21[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar20 == pbVar3) {
LAB_0c045693:
    if ((int)uStack_2a8 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0c04570a;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auStack_268 = (undefined1  [8])func_0x048b0c90(lVar12,lVar11,uStack_2a8._4_4_,1);
      if (auStack_268 == (undefined1  [8])0x0) {
        _auStack_268 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_268);
        if (auStack_268 == (undefined1  [8])0x0) goto LAB_0c04570a;
      }
      if ((*(int *)((long)auStack_268 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_268 + 0x58) != 0)) {
        lVar11 = *(long *)((long)auStack_268 + 0x58) + 0x40;
      }
      else {
LAB_0c04570a:
        lVar11 = 0;
      }
    }
    puStack_80 = &UNK_0488e0b0;
    uStack_70 = 0x48b5725f;
    pcStack_78 = (code *)0x0;
    uStack_6c = 0;
    auStack_90[0] = 0;
    _auStack_268 = (undefined1  [16])0x0;
    pcStack_250 = (code *)&UNK_0488e0b0;
    pcStack_248 = (code *)0x0;
    uStack_240 = 0x48b5725f;
    uStack_23c = uStack_23c & 0xffffff00;
    puStack_d0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_d0 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar14 = _UNK_013bbadf;
    uStack_e0 = 0x21;
    uStack_d8 = 0x1a;
    *(ulong *)((long)puStack_d0 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_d0 + 0x12) = uVar14;
    uVar14 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_d0 = _DAT_013bbacd;
    puStack_d0[1] = uVar14;
    *(undefined1 *)((long)puStack_d0 + 0x1a) = 0;
    lVar11 = FUN_048b5060(lVar11,&uStack_e0);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_268) {
      pcVar13 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar22 = (ulong *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar22);
        if ((char)uStack_23c != '\0') {
          if ((char)uStack_23c == '\x02') {
            (*pcStack_250)(5,&uStack_260,puVar22);
          }
          else {
            uVar23 = uStack_260;
            uStack_260 = 0;
            *puVar22 = uVar23;
          }
        }
      }
      *(code **)(lVar11 + 0x38) = pcStack_250;
      *(code **)(lVar11 + 0x40) = pcStack_248;
      *(undefined4 *)(lVar11 + 0x48) = uStack_240;
      *(char *)(lVar11 + 0x4c) = (char)uStack_23c;
      pcVar13 = pcStack_248;
    }
    if ((uStack_e0 & 1) != 0) {
      func_0x0412a280(puStack_d0,uStack_e0 & 0xfffffffffffffffe);
      pcVar13 = pcStack_248;
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(&uStack_260);
    }
    if (pcStack_78 != (code *)0x0) {
      (*pcStack_78)(auStack_90);
    }
  }
  else {
    iVar9 = *(int *)(pbVar20 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar9 == _DAT_0f550ac4) goto LAB_0c045693;
  }
  puStack_1b8 = puStack_2a0;
  uStack_1e8 = CONCAT44(uStack_2cc,uStack_2d0);
  lStack_1d8 = CONCAT44(uStack_2bc,uStack_2c0);
  uStack_1c8 = uStack_2b0;
  puStack_1c0 = uStack_2a8;
  uStack_1d0 = plStack_2b8;
  lStack_1e0 = lStack_2c8;
  auVar4[0xf] = 0;
  auVar4._0_15_ = stack0xfffffffffffffd99;
  _auStack_268 = auVar4 << 8;
  pcStack_250 = (code *)((ulong)pcStack_250 & 0xffffffffffffff00);
  if (cStack_218 == '\x01') {
    uStack_260 = 0;
    auStack_268 = (undefined1  [8])uStack_230;
    auVar25 = _auStack_268;
    uStack_260 = uStack_228;
    if ((uStack_228 & 0x80000000000000) != 0) {
      uVar23 = uStack_228 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar23 - 8);
      lVar11 = lVar12 + 9;
      _auStack_268 = auVar25;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uStack_260 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_258 = 0;
    uVar23 = uStack_220;
    if ((uStack_220 & 0x80000000000000) != 0) {
      uVar23 = uStack_220 & 0xff00ffffffffffff;
      lVar12 = *(long *)(uVar23 - 8);
      lVar11 = lVar12 + 9;
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && plVar10 == (long *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *plVar10 = lVar12;
      func_0x0eee2f00(plVar10 + 1,uVar23,lVar12);
      *(undefined1 *)((long)plVar10 + lVar12 + 8) = 0;
      uVar23 = (ulong)(plVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_250 = (code *)CONCAT71(pcStack_250._1_7_,1);
    uStack_258 = uVar23;
  }
  func_0x0412e5e0(auStack_90,puStack_210,0x18);
  uStack_68 = uStack_1e8;
  uStack_60 = lStack_1e0;
  uStack_58 = lStack_1d8;
  pcStack_50 = (code *)uStack_1d0;
  uStack_48 = uStack_1c8;
  puStack_40 = puStack_1c0;
  puStack_38 = puStack_1b8;
  if ((auStack_90[0] & 1) != 0) {
    func_0x0412a280(puStack_80,auStack_90[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_250 == '\x01') {
    if ((uStack_258 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_258 & 0xff00ffffffffffff) - 8);
    }
    uStack_258 = 0;
    if ((uStack_260 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c0aa2b0(&uStack_1e8,&uStack_68,&UNK_01482f73,4,1);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f34f1f0;
  if (uStack_1d0 != (long *)0x0) {
    lVar11 = *uStack_1d0;
    uStack_1d0 = plVar10;
    (**(code **)(lVar11 + 8))();
    plVar10 = uStack_1d0;
  }
  uStack_1d0 = plVar10;
  uStack_2d0 = (undefined4)lStack_1d8;
  lStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x1;
  uStack_2b0 = 0;
  uStack_2a8 = &UNK_0c0a6cf0;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_08f2fd70;
  puStack_290 = &UNK_0c0aa7b0;
  puStack_288 = &UNK_0c0aa910;
  uStack_280 = 0;
  auStack_278 = ZEXT816(0);
  func_0x048b05a0(lStack_1e0,&uStack_2d0);
  uVar14 = auStack_278._8_8_;
  if ((long *)auStack_278._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_278._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
      FUN_0412c2d0(uVar14);
    }
  }
  func_0x0c0aa4b0(&uStack_1e8);
  cStack_e8 = puStack_38._0_1_;
  pcStack_f8 = (code *)uStack_48;
  uStack_f0 = puStack_40;
  uStack_108 = uStack_58;
  plStack_100 = (long *)pcStack_50;
  uStack_118 = uStack_68;
  uStack_110 = uStack_60;
  func_0x048b0bc0(&uStack_1d0);
  uStack_c8 = uStack_118;
  uStack_c0 = uStack_110;
  uStack_b8 = uStack_108;
  plStack_b0 = plStack_100;
  pcStack_a8 = pcStack_f8;
  uStack_a0 = uStack_f0;
  uStack_98 = CONCAT71(uStack_e7,cStack_e8);
  func_0x0c0a9f40(&uStack_1e8,uStack_118 + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x60);
    iVar9 = *piVar19;
    while (iVar9 != (int)uStack_1d0) {
      piVar19 = piVar19 + 0x16;
      iVar9 = *piVar19;
    }
    lVar11 = *(long *)(piVar19 + 0xc);
    while (lVar11 != lStack_1e0) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar11 = *(long *)(piVar19 + 0xc);
    }
LAB_0c045d8f:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar19 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x48);
      iVar9 = *piVar19;
      while (iVar9 != (int)uStack_1d0) {
        piVar19 = piVar19 + 0x1a;
        iVar9 = *piVar19;
      }
      goto LAB_0c045d8f;
    }
    if (uStack_1d0._4_4_ == 0) {
      *(uint *)(lStack_1d8 + 0x18) = *(uint *)(lStack_1d8 + 0x18) | 0x40000;
    }
  }
  func_0x0c0aa2b0(&uStack_1e8,&uStack_c8,&UNK_011e223d,10,0x10);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0ef46ce8;
  if (uStack_1d0 != (long *)0x0) {
    lVar11 = *uStack_1d0;
    uStack_1d0 = plVar10;
    (**(code **)(lVar11 + 8))();
    plVar10 = uStack_1d0;
  }
  uStack_1d0 = plVar10;
  uStack_2d0 = (undefined4)lStack_1d8;
  lStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x1;
  uStack_2b0 = 0;
  uStack_2a8 = &UNK_0490ce30;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_0490cb20;
  puStack_290 = &UNK_0c0aaaf0;
  puStack_288 = &UNK_0c0aac50;
  uStack_280 = 0;
  auStack_278 = ZEXT816(0);
  func_0x048b05a0(lStack_1e0,&uStack_2d0);
  uVar14 = auStack_278._8_8_;
  if ((long *)auStack_278._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_278._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
      FUN_0412c2d0(uVar14);
    }
  }
  func_0x0c0aa4b0(&uStack_1e8);
  uVar23 = uStack_c8;
  iVar9 = (int)uStack_a0;
  uVar6 = uStack_a0._4_4_;
  func_0x048b0bc0(&uStack_1d0);
  if (iVar9 == 4) {
    lVar11 = uVar23 + 0x18;
    uVar14 = func_0x0c0a8880(lVar11);
    uVar23 = func_0x048b1040(lVar11,uVar14,uVar6,1);
    if (uVar23 == 0) {
      uStack_1e8 = 0;
      lStack_1e0 = 0;
      func_0x048b10d0(&uStack_1e8);
      uVar17 = *(ulong *)(uStack_1e8 + 0x38);
      uVar23 = uStack_1e8;
      if (uVar17 == 0) goto LAB_0c046038;
LAB_0c04605d:
      do {
        uVar23 = uVar17;
        uVar17 = *(ulong *)(uVar23 + 0x38);
        if (*(ulong *)(uVar23 + 0x38) == 0) {
          uStack_1e8 = 0;
          lStack_1e0 = 0;
          func_0x048b10d0(&uStack_1e8);
          uVar17 = uStack_1e8;
        }
      } while (uVar17 != 0);
    }
    else {
      uVar17 = *(ulong *)(uVar23 + 0x38);
      if (*(ulong *)(uVar23 + 0x38) != 0) goto LAB_0c04605d;
LAB_0c046038:
      uStack_1e8 = 0;
      lStack_1e0 = 0;
      func_0x048b10d0(&uStack_1e8);
      uVar17 = uStack_1e8;
      if (uStack_1e8 != 0) goto LAB_0c04605d;
    }
    lVar11 = *(long *)(uVar23 + 0x48);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_0c0460c4:
    puVar15[1] = 0xffffffffffffffff;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 0xff;
    *puVar15 = &UNK_0f0edc68;
    uVar14 = _DAT_014f0238;
    puVar15[4] = 0;
    puVar15[5] = uVar14;
    puVar15[6] = 0;
    puVar15[7] = 0;
    plVar10 = *(long **)(lVar11 + 8);
    *(undefined8 **)(lVar11 + 8) = puVar15;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x28))();
    }
  }
  else if (iVar9 == 1) {
    lVar11 = uVar23 + 0x18;
    uVar14 = func_0x0c0a8880(lVar11);
    uVar23 = func_0x048b0c90(lVar11,uVar14,uVar6,1);
    if (uVar23 == 0) {
      uStack_1e8 = 0;
      lStack_1e0 = 0;
      func_0x048b0d20(&uStack_1e8);
      uVar23 = uStack_1e8;
    }
    lVar11 = *(long *)(uVar23 + 0x58);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0c0460c4;
  }
  puVar15 = puStack_210;
  if (cStack_218 == '\x01') {
    if ((uStack_220 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
    }
    uStack_220 = 0;
    if ((uStack_228 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_228 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar15,0x20);
  if (cStack_1f0 == '\x01') {
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1f8 = 0;
    if ((uStack_200 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
    }
    uStack_200 = 0;
  }
  if ((DAT_0f6d40f0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d40f0), iVar9 != 0)) {
    func_0x0c0a25d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d4070,0xf53dab8);
    func_0x0410844d(&DAT_0f6d40f0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d4070 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0c046290;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f6d4070 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0c046290:
    puVar16 = &DAT_0f6d4070;
    if (iRam000000000f6d40d0 != -0x2b3da790) goto LAB_0c0462fd;
LAB_0c0462bb:
    lVar11 = *(long *)(puVar16 + 0x68);
    if (lVar11 == 0) goto LAB_0c0462fd;
    bVar24 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar12 = lVar11 + 9;
    if (bVar24) {
      lVar12 = *(long *)(lVar11 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar24) {
      uVar23 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0c0a2af0(auStack_268,param_1,lVar12,uVar23);
  }
  else {
    puVar16 = (undefined *)plVar10[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0c0462bb;
LAB_0c0462fd:
    func_0x0c0a2af0(auStack_268,param_1,&UNK_011adb77,0x15);
  }
  if (cStack_238 != '\0') {
    return;
  }
  func_0x0c0a36a0(&uStack_1e8,auStack_268,&UNK_01482f73,4,1);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f34f1f0;
  if (uStack_1d0 != (long *)0x0) {
    lVar11 = *uStack_1d0;
    uStack_1d0 = plVar10;
    (**(code **)(lVar11 + 8))();
    plVar10 = uStack_1d0;
  }
  uStack_1d0 = plVar10;
  uStack_2d0 = (undefined4)lStack_1d8;
  lStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x1;
  uStack_2b0 = 0;
  uStack_2a8 = &UNK_0c0a6cf0;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_08f2fd70;
  puStack_290 = &UNK_0c0a6d00;
  puStack_288 = &UNK_0c0a6e60;
  uStack_280 = 0;
  auStack_278 = ZEXT816(0);
  func_0x048b05a0(lStack_1e0,&uStack_2d0);
  uVar14 = auStack_278._8_8_;
  if ((long *)auStack_278._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_278._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
      FUN_0412c2d0(uVar14);
    }
  }
  func_0x0c0a3960(&uStack_1e8);
  cStack_e8 = cStack_238;
  uStack_f0 = (undefined *)CONCAT44(uStack_23c,uStack_240);
  pcStack_f8 = pcStack_248;
  uStack_108 = uStack_258;
  plStack_100 = (long *)pcStack_250;
  uStack_118 = (ulong)auStack_268;
  uStack_110 = uStack_260;
  func_0x048b0bc0(&uStack_1d0);
  func_0x0c0a30e0(&uStack_1e8,uStack_118 + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x60);
    iVar9 = *piVar19;
    while (iVar9 != (int)uStack_1d0) {
      piVar19 = piVar19 + 0x16;
      iVar9 = *piVar19;
    }
    lVar11 = *(long *)(piVar19 + 0xc);
    while (lVar11 != lStack_1e0) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar11 = *(long *)(piVar19 + 0xc);
    }
LAB_0c04651f:
    *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar19 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x48);
      iVar9 = *piVar19;
      while (iVar9 != (int)uStack_1d0) {
        piVar19 = piVar19 + 0x1a;
        iVar9 = *piVar19;
      }
      goto LAB_0c04651f;
    }
    if (uStack_1d0._4_4_ == 0) {
      *(uint *)(lStack_1d8 + 0x18) = *(uint *)(lStack_1d8 + 0x18) | 0x40000;
    }
  }
  func_0x0c0a36a0(&uStack_1e8,&uStack_118,&UNK_011e223d,10,0x10);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0ef46ce8;
  if (uStack_1d0 != (long *)0x0) {
    lVar11 = *uStack_1d0;
    uStack_1d0 = plVar10;
    (**(code **)(lVar11 + 8))();
    plVar10 = uStack_1d0;
  }
  uStack_1d0 = plVar10;
  uStack_2d0 = (undefined4)lStack_1d8;
  lStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x1;
  uStack_2b0 = 0;
  uStack_2a8 = &UNK_0490ce30;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_0490cb20;
  puStack_290 = &UNK_0c0a7040;
  puStack_288 = &UNK_0c0a71a0;
  uStack_280 = 0;
  auStack_278 = ZEXT816(0);
  func_0x048b05a0(lStack_1e0,&uStack_2d0);
  uVar14 = auStack_278._8_8_;
  if ((long *)auStack_278._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_278._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
      FUN_0412c2d0(uVar14);
    }
  }
  func_0x0c0a3960(&uStack_1e8);
  cVar7 = cStack_e8;
  uVar14 = uStack_f0;
  uVar23 = uStack_118;
  uStack_68 = uStack_110;
  uStack_60 = uStack_108;
  uStack_58 = (ulong)plStack_100;
  pcStack_50 = pcStack_f8;
  iVar9 = (int)uStack_f0;
  uVar6 = uStack_f0._4_4_;
  func_0x048b0bc0(&uStack_1d0);
  if (iVar9 == 4) {
    if ((DAT_0f6d40f0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d40f0), iVar9 != 0)) {
      func_0x0c0a25d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d4070,0xf53dab8);
      func_0x0410844d(&DAT_0f6d40f0);
    }
    plVar10 = (long *)(*(long *)(uVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar23 + 0x20) - *(long *)(uVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d4070 + 4)) * 8);
    do {
      lVar11 = *plVar10;
      if (lVar11 == -1) goto LAB_0c046788;
      plVar10 = (long *)(*(long *)(uVar23 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(uVar23 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f6d4070 + 4)
            );
    if (plVar10 == *(long **)(uVar23 + 0x38)) {
LAB_0c046788:
      puVar16 = &DAT_0f6d4070;
    }
    else {
      puVar16 = (undefined *)plVar10[2];
    }
    uVar17 = func_0x048b1040(uVar23 + 0x18,puVar16,uVar6,1);
    if (uVar17 == 0) {
      uStack_1e8 = 0;
      lStack_1e0 = 0;
      func_0x048b10d0(&uStack_1e8);
      uVar18 = *(ulong *)(uStack_1e8 + 0x38);
      uVar17 = uStack_1e8;
      if (uVar18 == 0) goto LAB_0c0468d7;
LAB_0c0468fc:
      do {
        uVar17 = uVar18;
        uVar18 = *(ulong *)(uVar17 + 0x38);
        if (*(ulong *)(uVar17 + 0x38) == 0) {
          uStack_1e8 = 0;
          lStack_1e0 = 0;
          func_0x048b10d0(&uStack_1e8);
          uVar18 = uStack_1e8;
        }
      } while (uVar18 != 0);
    }
    else {
      uVar18 = *(ulong *)(uVar17 + 0x38);
      if (*(ulong *)(uVar17 + 0x38) != 0) goto LAB_0c0468fc;
LAB_0c0468d7:
      uStack_1e8 = 0;
      lStack_1e0 = 0;
      func_0x048b10d0(&uStack_1e8);
      uVar18 = uStack_1e8;
      if (uStack_1e8 != 0) goto LAB_0c0468fc;
    }
    lVar11 = *(long *)(uVar17 + 0x48);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_0c046964:
    puVar15[1] = 0xffffffffffffffff;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 0xff;
    *puVar15 = &UNK_0f0edc68;
    uVar5 = _DAT_014f0238;
    puVar15[4] = 0;
    puVar15[5] = uVar5;
    puVar15[6] = 0;
    *(undefined2 *)(puVar15 + 7) = 0;
    *(undefined4 *)((long)puVar15 + 0x3a) = 0;
    *(undefined2 *)((long)puVar15 + 0x3e) = 0;
    plVar10 = *(long **)(lVar11 + 8);
    *(undefined8 **)(lVar11 + 8) = puVar15;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x28))();
    }
  }
  else if (iVar9 == 1) {
    if ((DAT_0f6d40f0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d40f0), iVar9 != 0)) {
      func_0x0c0a25d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d4070,0xf53dab8);
      func_0x0410844d(&DAT_0f6d40f0);
    }
    plVar10 = (long *)(*(long *)(uVar23 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar23 + 0x20) - *(long *)(uVar23 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6d4070 + 4)) * 8);
    do {
      lVar11 = *plVar10;
      if (lVar11 == -1) goto LAB_0c046718;
      plVar10 = (long *)(*(long *)(uVar23 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(uVar23 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f6d4070 + 4)
            );
    if (plVar10 == *(long **)(uVar23 + 0x38)) {
LAB_0c046718:
      puVar16 = &DAT_0f6d4070;
    }
    else {
      puVar16 = (undefined *)plVar10[2];
    }
    uVar17 = func_0x048b0c90(uVar23 + 0x18,puVar16,uVar6,1);
    if (uVar17 == 0) {
      uStack_1e8 = 0;
      lStack_1e0 = 0;
      func_0x048b0d20(&uStack_1e8);
      uVar17 = uStack_1e8;
    }
    lVar11 = *(long *)(uVar17 + 0x58);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0c046964;
  }
  uStack_c8 = uVar23;
  uStack_c0 = uStack_68;
  uStack_b8 = uStack_60;
  plStack_b0 = (long *)uStack_58;
  pcStack_a8 = pcStack_50;
  uStack_a0 = (undefined *)uVar14;
  uStack_98 = CONCAT71(uStack_98._1_7_,cVar7);
  func_0x0c0a30e0(&uStack_1e8,uVar23 + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar19 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x60);
    iVar9 = *piVar19;
    while (iVar9 != (int)uStack_1d0) {
      piVar19 = piVar19 + 0x16;
      iVar9 = *piVar19;
    }
    lVar11 = *(long *)(piVar19 + 0xc);
    while (lVar11 != lStack_1e0) {
      piVar19 = *(int **)(piVar19 + 0xe);
      lVar11 = *(long *)(piVar19 + 0xc);
    }
  }
  else {
    if (uStack_1d0._4_4_ != 1) {
      if (uStack_1d0._4_4_ == 0) {
        *(uint *)(lStack_1d8 + 0x18) = *(uint *)(lStack_1d8 + 0x18) | 0x40000;
      }
      goto LAB_0c046a83;
    }
    piVar19 = *(int **)(*(long *)(lStack_1d8 + 0x78) + 0x48);
    iVar9 = *piVar19;
    while (iVar9 != (int)uStack_1d0) {
      piVar19 = piVar19 + 0x1a;
      iVar9 = *piVar19;
    }
  }
  *(byte *)((long)piVar19 + 0x12) = *(byte *)((long)piVar19 + 0x12) | 4;
LAB_0c046a83:
  func_0x0c0a36a0(&uStack_1e8,&uStack_c8,&UNK_013359b3,0x15,0x10);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0ef46ef8;
  if (uStack_1d0 != (long *)0x0) {
    lVar11 = *uStack_1d0;
    uStack_1d0 = puVar15;
    (**(code **)(lVar11 + 8))();
    puVar15 = uStack_1d0;
  }
  uStack_1d0 = puVar15;
  uStack_2d0 = (undefined4)lStack_1d8;
  lStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x1;
  uStack_2b0 = 0;
  uStack_2a8 = &UNK_04906f70;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &UNK_04906c50;
  puStack_290 = &UNK_0c0a7380;
  puStack_288 = &UNK_0c0a74e0;
  uStack_280 = 0;
  auStack_278 = ZEXT816(0);
  func_0x048b05a0(lStack_1e0,&uStack_2d0);
  uVar14 = auStack_278._8_8_;
  if ((long *)auStack_278._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_278._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_278._8_8_ + 0x10))(auStack_278._8_8_);
      FUN_0412c2d0(uVar14);
    }
  }
  func_0x0c0a3960(&uStack_1e8);
  func_0x048b0bc0(&uStack_1d0);
  return;
}



/* ---- referenced strings ----
 * 0x12ffec9  Wearable item component.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
