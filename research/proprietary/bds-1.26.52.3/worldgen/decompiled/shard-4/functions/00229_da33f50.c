/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb33f50 (ELF vaddr 0xda33f50)
 * Label: caller-of-callee
 * Body:  [[0db33f50, 0db34711] [0db34720, 0db34b03]]
 * Ghidra: FUN_0db33f50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db33f50(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined8 uStack_298;
  undefined4 *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined6 uStack_24e;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined4 uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined1 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined1 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long lStack_118;
  undefined4 auStack_110 [2];
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_30;
  uint7 uStack_2f;
  
  func_0x0e0e1950();
  func_0x0d89f0d0(param_1);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar5[1] = -1;
  plVar5[2] = 0;
  *(undefined1 *)(plVar5 + 3) = 4;
  *plVar5 = (long)&UNK_0f137860;
  *(undefined8 *)((long)plVar5 + 0x1c) = _DAT_014e7950;
  *(undefined8 *)((long)plVar5 + 0x24) = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  plVar6[1] = -1;
  plVar6[2] = 0;
  *(undefined1 *)(plVar6 + 3) = 4;
  *plVar6 = (long)&UNK_0f48a698;
  plVar6[5] = -1;
  plVar6[6] = 0;
  *(undefined1 *)(plVar6 + 7) = 4;
  plVar6[4] = (long)&UNK_0f0edc68;
  lVar7 = _DAT_014f0238;
  plVar6[8] = 0;
  plVar6[9] = lVar7;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  *(undefined1 *)(plVar6 + 0xc) = 1;
  *(undefined1 *)(plVar6 + 0xd) = 0;
  *(undefined1 *)(plVar6 + 0x15) = 0;
  plVar6[0x16] = 0;
  lVar7 = func_0x0db73140(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar14 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar13 = lVar7 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar7 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0db738f0(&uStack_60,param_1,lVar13,uVar12);
    uStack_148 = uStack_60;
    uStack_144 = uStack_5c;
    uStack_140 = uStack_58;
    uStack_13c = uStack_54;
    uStack_138 = uStack_50;
    uStack_134 = uStack_4c;
    uStack_130 = uStack_48;
    uStack_12c = uStack_44;
    uStack_128 = uStack_40;
    uStack_124 = uStack_3c;
  }
  else {
    func_0x0db738f0(&uStack_60,param_1,&DAT_01370215,0x1e);
    uStack_148 = uStack_60;
    uStack_144 = uStack_5c;
    uStack_140 = uStack_58;
    uStack_13c = uStack_54;
    uStack_138 = uStack_50;
    uStack_134 = uStack_4c;
    uStack_130 = uStack_48;
    uStack_12c = uStack_44;
    uStack_128 = uStack_40;
    uStack_124 = uStack_3c;
  }
  if (cStack_30 == '\0') {
    uStack_100._4_4_ = (uint)((ulong)uStack_100 >> 0x20);
    uStack_298._4_4_ = (undefined4)((ulong)uStack_298 >> 0x20);
    lStack_118 = (ulong)uStack_2f << 8;
    if ((DAT_0f736f68 == '\0') && (iVar4 = FUN_04108328(&DAT_0f736f68), iVar4 != 0)) {
      func_0x0db73330(0xf736f50);
      func_0x0410844d(&DAT_0f736f68);
    }
    if ((DAT_0f736df8 == '\0') && (iVar4 = FUN_04108328(&DAT_0f736df8), iVar4 != 0)) {
      func_0x0db74330(0xf736de0);
      func_0x0410844d(&DAT_0f736df8);
    }
    uStack_298 = CONCAT44(uStack_298._4_4_,_DAT_0f736de4);
    puStack_290 = (undefined4 *)&SUB_0db74240;
    puStack_288 = &UNK_0db74320;
    func_0x05da1460(&uStack_140);
    lVar7 = func_0x0db74240(CONCAT44(uStack_144,uStack_148) + 0x18);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0db73e30(&uStack_298,CONCAT44(uStack_144,uStack_148) + 0x18);
      if (uStack_280._4_4_ == 2) {
        piVar8 = *(int **)(*(long *)(puStack_288 + 0x78) + 0x60);
        iVar4 = *piVar8;
        while (iVar4 != (int)uStack_280) {
          piVar8 = piVar8 + 0x16;
          iVar4 = *piVar8;
        }
        puVar2 = *(undefined1 **)(piVar8 + 0xc);
        while ((undefined4 *)puVar2 != puStack_290) {
          piVar8 = *(int **)(piVar8 + 0xe);
          puVar2 = *(undefined1 **)(piVar8 + 0xc);
        }
      }
      else {
        if (uStack_280._4_4_ != 1) {
          if (uStack_280._4_4_ == 0) {
            *(uint *)(puStack_288 + 0x18) = *(uint *)(puStack_288 + 0x18) | 0x40000;
          }
          goto LAB_0db34203;
        }
        piVar8 = *(int **)(*(long *)(puStack_288 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != (int)uStack_280) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
LAB_0db34203:
    lStack_198 = lStack_118;
    uStack_1a8 = uStack_128;
    uStack_1a4 = uStack_124;
    uStack_1b8 = uStack_138;
    uStack_1b4 = uStack_134;
    uStack_1b0 = uStack_130;
    uStack_1ac = uStack_12c;
    uStack_1c8 = uStack_148;
    uStack_1c4 = uStack_144;
    uStack_1c0 = uStack_140;
    uStack_1bc = uStack_13c;
    if ((DAT_0f736f68 == '\0') && (iVar4 = FUN_04108328(&DAT_0f736f68), iVar4 != 0)) {
      func_0x0db73330(0xf736f50);
      func_0x0410844d(&DAT_0f736f68);
    }
    uStack_1a0 = 0x2fa0fd0d00000001;
    lVar7 = CONCAT44(uStack_1c4,uStack_1c8) + 0x18;
    uStack_298 = func_0x0db73140(lVar7);
    puStack_290 = (undefined4 *)lVar7;
    func_0x0ed621a0(&uStack_298,uStack_1a0._4_4_);
    puStack_290 = &uStack_1c0;
    uStack_298 = CONCAT62(uStack_298._2_6_,1);
    puStack_288 = (undefined *)CONCAT44(puStack_288._4_4_,uStack_1a0._4_4_);
    uStack_280 = (long *)0x0;
    lStack_278 = 0;
    lStack_270 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    uStack_258 = 0x10;
    uStack_257 = 0x6f697461727564;
    uStack_250 = 0x6e;
    uStack_24f = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    lStack_230 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    uStack_210 = 0x3f600000;
    func_0x048afb10(&lStack_240,8);
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1f8 = 0;
    uStack_1f0 = 0;
    lStack_208 = 0;
    lStack_200 = 0;
    uStack_1d8 = 0xff00;
    uStack_1d4 = uStack_1d4 & 0xffffff00;
    uStack_1d0 = uStack_1d0 & 0xffffff00;
    uStack_1cc = 0;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f497d90;
    if (uStack_280 != (long *)0x0) {
      lVar7 = *uStack_280;
      uStack_280 = puVar9;
      (**(code **)(lVar7 + 8))();
      puVar9 = uStack_280;
    }
    uStack_280 = puVar9;
    auStack_110[0] = puStack_288._0_4_;
    plStack_108 = (long *)0x0;
    uStack_100 = (long *)((ulong)uStack_100._4_4_ << 0x20);
    uStack_f8 = 1;
    uStack_f0 = 0;
    puStack_e8 = &UNK_0db75fb0;
    puStack_e0 = &SUB_048b06d0;
    puStack_d8 = &UNK_0db75660;
    puStack_d0 = &UNK_0db75fc0;
    puStack_c8 = &UNK_0db76130;
    uStack_c0 = 0;
    uStack_b8 = 0;
    plStack_b0 = (long *)0x0;
    func_0x048b05a0(puStack_290,auStack_110);
    plVar10 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        func_0x0412c2d0(plVar10);
      }
    }
    puVar3 = puStack_290;
    if ((DAT_0f550a20 == '\0') && (iVar4 = FUN_04108328(&DAT_0f550a20), iVar4 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_110[0] = _DAT_0f550a0c;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar7 = lStack_278;
    puVar9 = uStack_280;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0ef439d0;
    plStack_108 = plVar10 + 3;
    uStack_280 = (long *)0x0;
    lStack_278 = 0;
    plVar10[3] = (long)puVar9;
    plVar10[4] = lVar7;
    plVar10[7] = lStack_260;
    plVar10[5] = lStack_270;
    plVar10[6] = lStack_268;
    lStack_270 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    plVar10[10] = lStack_248;
    plVar10[8] = CONCAT71(uStack_257,uStack_258);
    plVar10[9] = CONCAT62(uStack_24e,CONCAT11(uStack_24f,uStack_250));
    uStack_258 = 0;
    uStack_257 = 0;
    uStack_250 = 0;
    uStack_24f = 0;
    uStack_24e = 0;
    lStack_248 = 0;
    plVar10[0xb] = lStack_240;
    plVar10[0xc] = lStack_238;
    plVar10[0xd] = lStack_230;
    lStack_240 = 0;
    lStack_238 = 0;
    lStack_230 = 0;
    plVar10[0xe] = lStack_228;
    plVar10[0xf] = lStack_220;
    plVar10[0x10] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    *(undefined4 *)(plVar10 + 0x11) = uStack_210;
    plVar10[0x12] = lStack_208;
    plVar10[0x13] = lStack_200;
    plVar10[0x14] = lStack_1f8;
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    plVar10[0x17] = lStack_1e0;
    *(undefined4 *)(plVar10 + 0x15) = (undefined4)uStack_1f0;
    *(undefined4 *)((long)plVar10 + 0xac) = uStack_1f0._4_4_;
    *(undefined4 *)(plVar10 + 0x16) = (undefined4)uStack_1e8;
    *(undefined4 *)((long)plVar10 + 0xb4) = uStack_1e8._4_4_;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    lStack_1e0 = 0;
    *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_1cc,CONCAT43(uStack_1d0,uStack_1d4._1_3_));
    plVar10[0x18] = CONCAT44(uStack_1d4,CONCAT22(uStack_1d6,uStack_1d8));
    uStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    uStack_100 = plVar10;
    func_0x048afd20(puVar3,auStack_110);
    plVar10 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_100 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_a0 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        func_0x0412c2d0(plVar10);
      }
    }
    lVar7 = *(long *)(puVar3 + 4);
    iVar4 = puVar3[7];
    if (iVar4 == 2) {
      piVar8 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != puVar3[6]) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar3 + 2); piVar8 = *(int **)(piVar8 + 0xe)) {
      }
LAB_0db3472a:
      piVar8[4] = piVar8[4] | (int)uStack_298 << 0x10;
    }
    else {
      if (iVar4 == 1) {
        piVar8 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != puVar3[6]) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
        goto LAB_0db3472a;
      }
      if (iVar4 == 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | (int)uStack_298 << 0x10;
      }
    }
    uStack_158 = (undefined1)lStack_198;
    uStack_168 = uStack_1a8;
    uStack_164 = uStack_1a4;
    iStack_160 = (int)uStack_1a0;
    uStack_15c = uStack_1a0._4_4_;
    uStack_178 = uStack_1b8;
    uStack_174 = uStack_1b4;
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    func_0x048b0bc0(&uStack_280);
    if (iStack_160 == 1) {
      lVar7 = CONCAT44(uStack_184,uStack_188) + 0x18;
      uVar11 = func_0x0db73140(lVar7);
      lVar7 = FUN_048b0c90(lVar7,uVar11,uStack_15c,1);
      if (lVar7 == 0) {
        uStack_298 = 0;
        puStack_290 = (undefined4 *)0x0;
        func_0x048b0d20(&uStack_298);
        lVar7 = uStack_298;
      }
      *(undefined1 *)(*(long *)(lVar7 + 0x58) + 0xa9) = 4;
    }
    else {
      lVar7 = func_0x0db76310(&uStack_188);
      *(undefined1 *)(*(long *)(lVar7 + 0x48) + 0x10) = 4;
      if ((*(byte *)(lVar7 + 0x12) & 2) != 0) {
        lVar7 = CONCAT44(uStack_184,uStack_188) + 0x18;
        uVar11 = func_0x0db73140(lVar7);
        lVar7 = func_0x048b1040(lVar7,uVar11,0xbf75c8f8,1);
        if (lVar7 == 0) {
          uStack_298 = 0;
          puStack_290 = (undefined4 *)0x0;
          func_0x048b10d0(&uStack_298);
          lVar7 = uStack_298;
        }
        *(undefined1 *)(*(long *)(lVar7 + 0x48) + 8) = 4;
      }
    }
    uStack_78 = uStack_168;
    uStack_74 = uStack_164;
    iStack_70 = iStack_160;
    uStack_6c = uStack_15c;
    uStack_68 = uStack_158;
    uStack_88 = uStack_178;
    uStack_84 = uStack_174;
    uStack_80 = uStack_170;
    uStack_7c = uStack_16c;
    uStack_98 = uStack_188;
    uStack_94 = uStack_184;
    uStack_90 = uStack_180;
    uStack_8c = uStack_17c;
    if (iStack_160 == 4) {
      lVar7 = func_0x0db76310(&uStack_98);
      lVar7 = *(long *)(lVar7 + 0x48);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
    }
    else {
      if (iStack_160 != 1) goto LAB_0db34902;
      lVar7 = CONCAT44(uStack_184,uStack_188) + 0x18;
      uVar11 = func_0x0db73140(lVar7);
      lVar7 = FUN_048b0c90(lVar7,uVar11,uStack_6c,1);
      if (lVar7 == 0) {
        uStack_298 = 0;
        puStack_290 = (undefined4 *)0x0;
        func_0x048b0d20(&uStack_298);
        lVar7 = uStack_298;
      }
      lVar7 = *(long *)(lVar7 + 0x58);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
    }
    puVar9[1] = 0xffffffffffffffff;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 4;
    *puVar9 = &UNK_0f497d10;
    puVar9[4] = plVar5;
    puVar9[5] = plVar6;
    plVar5 = *(long **)(lVar7 + 8);
    *(undefined8 **)(lVar7 + 8) = puVar9;
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
LAB_0db34902:
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}


