/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83f79b0 (ELF vaddr 0x82f79b0)
 * Label: caller-of-callee
 * Body:  [[083f79b0, 083f8031] [083f8040, 083f9461] [083f9470, 083fac9a] [083faca0, 083feff1] [083ff000, 083ff791] [083ff7a0, 083ffb4a] [083ffb50, 08400b81] [08400b90, 08401901] [08401910, 084020d1] [084020e0, 0840248a] [08402490, 08402c6a] [08402c70, 08405b05]]
 * Ghidra: FUN_083f79b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083f79b0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  bool bVar16;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1f4;
  undefined2 uStack_1f3;
  undefined1 uStack_1f1;
  undefined1 uStack_1f0;
  undefined2 uStack_1ef;
  undefined1 uStack_1ed;
  undefined1 uStack_1ec;
  undefined1 uStack_1eb;
  undefined1 uStack_1ea;
  undefined1 uStack_1e9;
  long *plStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined4 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined2 uStack_178;
  undefined2 uStack_176;
  uint uStack_174;
  uint uStack_170;
  undefined1 uStack_16c;
  undefined *puStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined1 auStack_68 [56];
  
  if ((DAT_0f5d2950 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2950), iVar6 != 0)) {
    func_0x084a8190();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d28d0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2950);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d28d0 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083f7a20;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d28d0 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083f7a20:
    puVar8 = &DAT_0f5d28d0;
    if (iRam000000000f5d2930 != -0x2b3da790) goto LAB_083f7a8d;
LAB_083f7a4b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083f7a8d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084a85b0(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083f7a4b;
LAB_083f7a8d:
    func_0x084a85b0(&puStack_168,param_1,&UNK_01433b47,0xb);
  }
  if ((char)puStack_138 == '\0') {
    uStack_268._4_4_ = (uint)((ulong)uStack_268 >> 0x20);
    uStack_2a8._4_4_ = (uint)((ulong)uStack_2a8 >> 0x20);
    uStack_2b8._4_4_ = (undefined4)((ulong)uStack_2b8 >> 0x20);
    uStack_228._4_4_ = (undefined4)((ulong)uStack_228 >> 0x20);
    if ((DAT_0f5d2970 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2970), iVar6 != 0)) {
      func_0x084a82a0();
      func_0x0410844d(&DAT_0f5d2970);
    }
    puVar8 = puStack_168;
    uStack_140 = (undefined *)0xbf27393500000001;
    if ((DAT_0f5d2950 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2950), iVar6 != 0)) {
      func_0x084a8190();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d28d0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2950);
    }
    uStack_230 = (long **)(puVar8 + 0x18);
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d28d0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f7b50;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d28d0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f7b50:
      puStack_238 = &DAT_0f5d28d0;
    }
    else {
      puStack_238 = (undefined *)plVar9[2];
    }
    func_0x0ed621a0(&puStack_238,uStack_140._4_4_);
    puStack_238 = (undefined *)CONCAT62(puStack_238._2_6_,1);
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,uStack_140._4_4_);
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    uStack_1f8 = 0x6863411c;
    uStack_1f4 = 0x69;
    uStack_1f3 = 0x7665;
    uStack_1f1 = 0x65;
    uStack_1f0 = 0x6d;
    uStack_1ef = 0x6e65;
    uStack_1ed = 0x74;
    uStack_1ec = 0x20;
    uStack_1eb = 0x49;
    uStack_1ea = 0x44;
    uStack_1e9 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0x3f600000;
    uStack_230 = &plStack_160;
    func_0x048afb10(&lStack_1e0,8);
    uStack_188 = 0;
    lStack_180 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_178 = 0xff00;
    uStack_174 = uStack_174 & 0xffffff00;
    uStack_170 = uStack_170 & 0xffffff00;
    uStack_16c = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ef820;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8._4_4_ << 0x20);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07baeef0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_07baacd0;
    uStack_278 = &UNK_084a90c0;
    uStack_270 = &UNK_084a9220;
    uStack_268 = (long *)((ulong)uStack_268._4_4_ << 0x20);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    pplVar3 = uStack_230;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    lVar14 = lStack_218;
    plVar1 = plStack_220;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    uStack_2b0 = plVar9 + 3;
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar14;
    plVar9[7] = (long)puStack_200;
    plVar9[5] = (long)puStack_210;
    plVar9[6] = (long)puStack_208;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    plVar9[10] = (long)plStack_1e8;
    plVar9[8] = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
    plVar9[9] = CONCAT17(uStack_1e9,
                         CONCAT16(uStack_1ea,
                                  CONCAT15(uStack_1eb,
                                           CONCAT14(uStack_1ec,
                                                    CONCAT13(uStack_1ed,
                                                             CONCAT21(uStack_1ef,uStack_1f0))))));
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f3 = 0;
    uStack_1f1 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1eb = 0;
    uStack_1ea = 0;
    uStack_1e9 = 0;
    plStack_1e8 = (long *)0x0;
    plVar9[0xb] = lStack_1e0;
    plVar9[0xc] = (long)uStack_1d8;
    plVar9[0xd] = uStack_1d0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    plVar9[0xe] = lStack_1c8;
    plVar9[0xf] = lStack_1c0;
    plVar9[0x10] = lStack_1b8;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_1b0;
    plVar9[0x12] = lStack_1a8;
    plVar9[0x13] = lStack_1a0;
    plVar9[0x14] = lStack_198;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    plVar9[0x17] = lStack_180;
    *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_190;
    *(undefined4 *)((long)plVar9 + 0xac) = uStack_190._4_4_;
    *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_188;
    *(undefined4 *)((long)plVar9 + 0xb4) = uStack_188._4_4_;
    uStack_190 = 0;
    uStack_188 = 0;
    lStack_180 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_174._1_3_));
    plVar9[0x18] = CONCAT44(uStack_174,CONCAT22(uStack_176,uStack_178));
    uStack_e8 = (undefined *)0x0;
    uStack_e0 = (long *)0x0;
    uStack_2a8 = plVar9;
    func_0x048afd20(pplVar3,&uStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2a8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        func_0x0412c2d0(plVar9);
      }
    }
    puVar8 = puStack_168;
    plVar9 = pplVar3[2];
    iVar6 = *(int *)((long)pplVar3 + 0x1c);
    if (iVar6 == 2) {
      piVar12 = *(int **)(plVar9[0xf] + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(pplVar3 + 3)) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      for (; *(long **)(piVar12 + 0xc) != pplVar3[1]; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_083f804a:
      piVar12[4] = piVar12[4] | (int)puStack_238 << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar12 = *(int **)(plVar9[0xf] + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != *(int *)(pplVar3 + 3)) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_083f804a;
      }
      if (iVar6 == 0) {
        *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | (int)puStack_238 << 0x10;
      }
    }
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2950 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2950), iVar7 != 0)) {
      func_0x084a8190();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d28d0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2950);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d28d0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f80d0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d28d0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f80d0:
      puVar15 = &DAT_0f5d28d0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01419737),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 5;
  }
  if ((DAT_0f5d2a08 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2a08), iVar6 != 0)) {
    func_0x084a9740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2988,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2a08);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2988 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083f81d0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2988 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083f81d0:
    puVar8 = &DAT_0f5d2988;
    if (iRam000000000f5d29e8 != -0x2b3da790) goto LAB_083f823d;
LAB_083f81fb:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083f823d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084a9c20(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083f81fb;
LAB_083f823d:
    func_0x084a9c20(&puStack_168,param_1,&UNK_0147eab5,0xb);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084aa780(&puStack_238,&puStack_168,&UNK_013e5508,0x14);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ee2f8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07920050;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651f3e0;
    uStack_278 = &UNK_084aad90;
    uStack_270 = &UNK_084aaef0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084aaa90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2a08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2a08), iVar7 != 0)) {
      func_0x084a9740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2988,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2a08);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2988 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f8420;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2988 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f8420:
      puVar15 = &DAT_0f5d2988;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014b4232),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084aa780(&puStack_238,&puStack_168,&UNK_01363531,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ef900;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07bb5190;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_07bb0e40;
    uStack_278 = &UNK_084ab0c0;
    uStack_270 = &UNK_084ab220;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084aaa90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2a08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2a08), iVar7 != 0)) {
      func_0x084a9740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2988,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2a08);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2988 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f8670;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2988 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f8670:
      puVar15 = &DAT_0f5d2988;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014b4232),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 5;
    func_0x084aa780(&puStack_238,&puStack_168,&UNK_01398147,0x16);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084ab690;
    uStack_270 = &UNK_084ab7f0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084aaa90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2a08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2a08), iVar7 != 0)) {
      func_0x084a9740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2988,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2a08);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2988 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f88c0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2988 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f88c0:
      puVar15 = &DAT_0f5d2988;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014b4232),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084aa780(&puStack_238,&puStack_168,&UNK_0137cac1,0x19);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084ab9d0;
    uStack_270 = &UNK_084abb30;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084aaa90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2a08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2a08), iVar7 != 0)) {
      func_0x084a9740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2988,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2a08);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2988 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f8b10;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2988 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f8b10:
      puVar15 = &DAT_0f5d2988;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014b4232),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084aa780(&puStack_238,&puStack_168,&UNK_0147eac1,0x17);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f012438;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_05fc5e00;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_05dcda00;
    uStack_278 = &UNK_084abd10;
    uStack_270 = &UNK_084abe70;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084aaa90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2a08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2a08), iVar7 != 0)) {
      func_0x084a9740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2988,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2a08);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2988 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f8d60;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2988 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f8d60:
      puVar15 = &DAT_0f5d2988;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014b4232),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d2ac0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2ac0), iVar6 != 0)) {
    func_0x084ac110();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2a40,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2ac0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2a40 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083f8e60;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2a40 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083f8e60:
    puVar8 = &DAT_0f5d2a40;
    if (iRam000000000f5d2aa0 != -0x2b3da790) goto LAB_083f8ecd;
LAB_083f8e8b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083f8ecd;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084ac530(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083f8e8b;
LAB_083f8ecd:
    func_0x084ac530(&puStack_168,param_1,&UNK_0132bc80,0xd);
  }
  if ((char)puStack_138 == '\0') {
    if ((DAT_0f5d2ae0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2ae0), iVar6 != 0)) {
      func_0x084ac220();
      func_0x0410844d(&DAT_0f5d2ae0);
    }
    puVar8 = puStack_168;
    uStack_140 = (undefined *)0x681c8adc00000001;
    if ((DAT_0f5d2ac0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2ac0), iVar6 != 0)) {
      func_0x084ac110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2a40,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2ac0);
    }
    uStack_230 = (long **)(puVar8 + 0x18);
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2a40 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f8f90;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2a40 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f8f90:
      puStack_238 = &DAT_0f5d2a40;
    }
    else {
      puStack_238 = (undefined *)plVar9[2];
    }
    func_0x0ed621a0(&puStack_238,uStack_140._4_4_);
    puStack_238 = (undefined *)CONCAT62(puStack_238._2_6_,1);
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,uStack_140._4_4_);
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    uStack_1f8 = 0x6d694418;
    uStack_1f4 = 0x65;
    uStack_1f3 = 0x736e;
    uStack_1f1 = 0x69;
    uStack_1f0 = 0x6f;
    uStack_1ef = 0x206e;
    uStack_1ed = 0x49;
    uStack_1ec = 0x44;
    uStack_1eb = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0x3f600000;
    uStack_230 = &plStack_160;
    func_0x048afb10(&lStack_1e0,8);
    uStack_188 = 0;
    lStack_180 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_178 = 0xff00;
    uStack_174 = uStack_174 & 0xffffff00;
    uStack_170 = uStack_170 & 0xffffff00;
    uStack_16c = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084ad040;
    uStack_270 = &UNK_084ad1a0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    pplVar3 = uStack_230;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    lVar14 = lStack_218;
    plVar1 = plStack_220;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    uStack_2b0 = plVar9 + 3;
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar14;
    plVar9[7] = (long)puStack_200;
    plVar9[5] = (long)puStack_210;
    plVar9[6] = (long)puStack_208;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    plVar9[10] = (long)plStack_1e8;
    plVar9[8] = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
    plVar9[9] = CONCAT17(uStack_1e9,
                         CONCAT16(uStack_1ea,
                                  CONCAT15(uStack_1eb,
                                           CONCAT14(uStack_1ec,
                                                    CONCAT13(uStack_1ed,
                                                             CONCAT21(uStack_1ef,uStack_1f0))))));
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f3 = 0;
    uStack_1f1 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1eb = 0;
    uStack_1ea = 0;
    uStack_1e9 = 0;
    plStack_1e8 = (long *)0x0;
    plVar9[0xb] = lStack_1e0;
    plVar9[0xc] = (long)uStack_1d8;
    plVar9[0xd] = uStack_1d0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    plVar9[0xe] = lStack_1c8;
    plVar9[0xf] = lStack_1c0;
    plVar9[0x10] = lStack_1b8;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_1b0;
    plVar9[0x12] = lStack_1a8;
    plVar9[0x13] = lStack_1a0;
    plVar9[0x14] = lStack_198;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    plVar9[0x17] = lStack_180;
    *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_190;
    *(undefined4 *)((long)plVar9 + 0xac) = uStack_190._4_4_;
    *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_188;
    *(undefined4 *)((long)plVar9 + 0xb4) = uStack_188._4_4_;
    uStack_190 = 0;
    uStack_188 = 0;
    lStack_180 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_174._1_3_));
    plVar9[0x18] = CONCAT44(uStack_174,CONCAT22(uStack_176,uStack_178));
    uStack_e8 = (undefined *)0x0;
    uStack_e0 = (long *)0x0;
    uStack_2a8 = plVar9;
    func_0x048afd20(pplVar3,&uStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2a8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        func_0x0412c2d0(plVar9);
      }
    }
    puVar8 = puStack_168;
    plVar9 = pplVar3[2];
    iVar6 = *(int *)((long)pplVar3 + 0x1c);
    if (iVar6 == 2) {
      piVar12 = *(int **)(plVar9[0xf] + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(pplVar3 + 3)) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      for (; *(long **)(piVar12 + 0xc) != pplVar3[1]; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_083f947a:
      piVar12[4] = piVar12[4] | (int)puStack_238 << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar12 = *(int **)(plVar9[0xf] + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != *(int *)(pplVar3 + 3)) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_083f947a;
      }
      if (iVar6 == 0) {
        *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | (int)puStack_238 << 0x10;
      }
    }
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2ac0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2ac0), iVar7 != 0)) {
      func_0x084ac110();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2a40,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2ac0);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2a40 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f9500;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2a40 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f9500:
      puVar15 = &DAT_0f5d2a40;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011a38b8),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d2b78 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2b78), iVar6 != 0)) {
    func_0x084ad430();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2af8,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2b78);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2af8 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083f9600;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2af8 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083f9600:
    puVar8 = &DAT_0f5d2af8;
    if (iRam000000000f5d2b58 != -0x2b3da790) goto LAB_083f966d;
LAB_083f962b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083f966d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084ad850(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083f962b;
LAB_083f966d:
    func_0x084ad850(&puStack_168,param_1,&UNK_014cf68b,10);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084ae360(&puStack_238,&puStack_168,&UNK_011f3ae9);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084ae970;
    uStack_270 = &UNK_084aead0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084ae670(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2b78 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2b78), iVar7 != 0)) {
      func_0x084ad430();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2af8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2b78);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2af8 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f9840;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2af8 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f9840:
      puVar15 = &DAT_0f5d2af8;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0147ec41),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084ae360(&puStack_238,&puStack_168,&UNK_0149baed);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084aeca0;
    uStack_270 = &UNK_084aee00;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084ae670(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2b78 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2b78), iVar7 != 0)) {
      func_0x084ad430();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2af8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2b78);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2af8 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f9a90;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2af8 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f9a90:
      puVar15 = &DAT_0f5d2af8;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0147ec41),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d2c30 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2c30), iVar6 != 0)) {
    func_0x084af0a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2c30);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083f9b90;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2bb0 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083f9b90:
    puVar8 = &DAT_0f5d2bb0;
    if (iRam000000000f5d2c10 != -0x2b3da790) goto LAB_083f9bfd;
LAB_083f9bbb:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083f9bfd;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084af760(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083f9bbb;
LAB_083f9bfd:
    func_0x084af760(&puStack_168,param_1,&UNK_014b1850,9);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084b02d0(&puStack_238,&puStack_168,&UNK_01278ae1,0x13);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ee2f8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07920050;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651f3e0;
    uStack_278 = &UNK_084b08e0;
    uStack_270 = &UNK_084b0a40;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b05e0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2c30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2c30), iVar7 != 0)) {
      func_0x084af0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2c30);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083f9de0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2bb0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083f9de0:
      puVar15 = &DAT_0f5d2bb0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0139825f),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b02d0(&puStack_238,&puStack_168,&UNK_014645f7,0xf);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ee2f8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07920050;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651f3e0;
    uStack_278 = &UNK_084b0c10;
    uStack_270 = &UNK_084b0d70;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b05e0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2c30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2c30), iVar7 != 0)) {
      func_0x084af0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2c30);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fa030;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2bb0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fa030:
      puVar15 = &DAT_0f5d2bb0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0139825f),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b02d0(&puStack_238,&puStack_168,&UNK_012a9f91,0x1d);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ea308;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_078a5e10;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_078a1c00;
    uStack_278 = &UNK_084b0f50;
    uStack_270 = &UNK_084b10b0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b05e0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2c30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2c30), iVar7 != 0)) {
      func_0x084af0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2c30);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fa280;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2bb0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fa280:
      puVar15 = &DAT_0f5d2bb0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0139825f),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 5;
    func_0x084b02d0(&puStack_238,&puStack_168,&UNK_0139815e,0xd);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b1290;
    uStack_270 = &UNK_084b13f0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b05e0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2c30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2c30), iVar7 != 0)) {
      func_0x084af0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2c30);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fa4d0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2bb0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fa4d0:
      puVar15 = &DAT_0f5d2bb0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0139825f),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b02d0(&puStack_238,&puStack_168,&UNK_013b2c41,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b15d0;
    uStack_270 = &UNK_084b1730;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b05e0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2c30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2c30), iVar7 != 0)) {
      func_0x084af0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2c30);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fa720;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2bb0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fa720:
      puVar15 = &DAT_0f5d2bb0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0139825f),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b02d0(&puStack_238,&puStack_168,&UNK_01363542,0xb);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_048b3f30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_048b2190;
    uStack_278 = &UNK_084b1910;
    uStack_270 = &UNK_084b1ae0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b05e0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    uStack_298 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    uStack_270 = (undefined *)0x0;
    uStack_268 = (long *)0x0;
    puStack_280 = (undefined1 *)0x0;
    uStack_278 = (undefined *)0x0;
    puStack_290 = (undefined *)0x0;
    puStack_288 = (undefined1 *)0x0;
    uStack_240 = 0;
    uStack_2b0 = (long *)0xffffffffffffffff;
    uStack_2a8 = (long *)0x0;
    uStack_2a0 = 0xff;
    uStack_2b8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_298);
    puStack_290 = (undefined *)func_0x041681f0(&uStack_298,0xf547a30);
    puStack_288 = (undefined1 *)func_0x041681f0(&uStack_298,0xf547770);
    puStack_280 = (undefined1 *)0x0;
    uStack_278 = (undefined *)0x0;
    uStack_270 = (undefined *)0x0;
    uStack_268 = (long *)0x0;
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_2b0 = (long *)0x80;
    uStack_230 = (long **)0x80;
    uStack_228 = uStack_2a8;
    plStack_220 = (long *)CONCAT71(plStack_220._1_7_,(undefined1)uStack_2a0);
    puStack_238 = &UNK_0f4e3c70;
    func_0x04167a20(&lStack_218,&uStack_298);
    puStack_210 = puStack_290;
    puStack_208 = puStack_288;
    puStack_200 = puStack_280;
    uStack_1f8 = (undefined4)uStack_278;
    uStack_1f4 = (undefined1)((ulong)uStack_278 >> 0x20);
    uStack_1f3 = (undefined2)((ulong)uStack_278 >> 0x28);
    uStack_1f1 = (undefined1)((ulong)uStack_278 >> 0x38);
    uStack_1f0 = SUB81(uStack_270,0);
    uStack_1ef = (undefined2)((ulong)uStack_270 >> 8);
    uStack_1ed = (undefined1)((ulong)uStack_270 >> 0x18);
    uStack_1ec = (undefined1)((ulong)uStack_270 >> 0x20);
    uStack_1eb = (undefined1)((ulong)uStack_270 >> 0x28);
    uStack_1ea = (undefined1)((ulong)uStack_270 >> 0x30);
    uStack_1e9 = (undefined1)((ulong)uStack_270 >> 0x38);
    plStack_1e8 = uStack_268;
    if (uStack_268 != (long *)0x0) {
      LOCK();
      uStack_268[1] = uStack_268[1] + 1;
      UNLOCK();
    }
    lStack_1e0 = lStack_260;
    if (((ulong)uStack_258 & 1) == 0) {
      lStack_1c8 = uStack_248;
      uStack_1d8 = uStack_258;
      uStack_1d0 = uStack_250;
    }
    else {
      func_0x0412e5e0(&uStack_1d8,uStack_248,uStack_250);
    }
    lStack_1c0 = uStack_240;
    if (iVar6 == 4) {
      if ((DAT_0f5d2c30 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2c30), iVar6 != 0)) {
        func_0x084af0a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
        func_0x0410844d(&DAT_0f5d2c30);
      }
      plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
      do {
        lVar14 = *plVar9;
        if (lVar14 == -1) goto LAB_083fab88;
        plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5d2bb0 + 4));
      if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fab88:
        puVar15 = &DAT_0f5d2bb0;
      }
      else {
        puVar15 = (undefined *)plVar9[2];
      }
      puVar8 = (undefined *)func_0x048b1040(puVar8 + 0x18,puVar15,uVar4,1);
      if (puVar8 == (undefined *)0x0) {
        uStack_e8 = (undefined *)0x0;
        uStack_e0 = (long *)0x0;
        func_0x048b10d0(&uStack_e8);
        puVar15 = *(undefined **)(uStack_e8 + 0x38);
        puVar8 = uStack_e8;
        if (puVar15 == (undefined *)0x0) goto LAB_083fac6c;
LAB_083fac91:
        do {
          puVar8 = puVar15;
          puVar15 = *(undefined **)(puVar8 + 0x38);
          if (*(undefined **)(puVar8 + 0x38) == (undefined *)0x0) {
            uStack_e8 = (undefined *)0x0;
            uStack_e0 = (long *)0x0;
            func_0x048b10d0(&uStack_e8);
            puVar15 = uStack_e8;
          }
        } while (puVar15 != (undefined *)0x0);
      }
      else {
        puVar15 = *(undefined **)(puVar8 + 0x38);
        if (*(undefined **)(puVar8 + 0x38) != (undefined *)0x0) goto LAB_083fac91;
LAB_083fac6c:
        uStack_e8 = (undefined *)0x0;
        uStack_e0 = (long *)0x0;
        func_0x048b10d0(&uStack_e8);
        puVar15 = uStack_e8;
        if (uStack_e8 != (undefined *)0x0) goto LAB_083fac91;
      }
      lVar14 = *(long *)(puVar8 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
LAB_083facf4:
      *(undefined1 *)(puVar10 + 3) = plStack_220._0_1_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_230;
      *(undefined4 *)((long)puVar10 + 0xc) = uStack_230._4_4_;
      *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_228;
      *(undefined4 *)((long)puVar10 + 0x14) = uStack_228._4_4_;
      *puVar10 = &UNK_0f4e3c70;
      func_0x04167a20(puVar10 + 4,&lStack_218);
      puVar10[5] = puStack_210;
      puVar10[6] = puStack_208;
      puVar10[7] = puStack_200;
      puVar10[8] = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
      puVar10[9] = CONCAT17(uStack_1e9,
                            CONCAT16(uStack_1ea,
                                     CONCAT15(uStack_1eb,
                                              CONCAT14(uStack_1ec,
                                                       CONCAT13(uStack_1ed,
                                                                CONCAT21(uStack_1ef,uStack_1f0))))))
      ;
      puVar10[10] = plStack_1e8;
      uStack_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1eb = 0;
      uStack_1ea = 0;
      uStack_1e9 = 0;
      plStack_1e8 = (long *)0x0;
      puVar10[0xb] = lStack_1e0;
      puVar10[0xe] = lStack_1c8;
      *(undefined4 *)(puVar10 + 0xc) = (undefined4)uStack_1d8;
      *(undefined4 *)((long)puVar10 + 100) = uStack_1d8._4_4_;
      *(undefined4 *)(puVar10 + 0xd) = (undefined4)uStack_1d0;
      *(undefined4 *)((long)puVar10 + 0x6c) = uStack_1d0._4_4_;
      uStack_1d8 = (long *)0x0;
      uStack_1d0 = 0;
      lStack_1c8 = 0;
      puVar10[0xf] = lStack_1c0;
      plVar9 = *(long **)(lVar14 + 8);
      *(undefined8 **)(lVar14 + 8) = puVar10;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x28))();
      }
    }
    else if (iVar6 == 1) {
      if ((DAT_0f5d2c30 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2c30), iVar6 != 0)) {
        func_0x084af0a0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2bb0,0xf53dab8);
        func_0x0410844d(&DAT_0f5d2c30);
      }
      plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f5d2bb0 + 4)) * 8);
      do {
        lVar14 = *plVar9;
        if (lVar14 == -1) goto LAB_083fab08;
        plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5d2bb0 + 4));
      if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fab08:
        puVar15 = &DAT_0f5d2bb0;
      }
      else {
        puVar15 = (undefined *)plVar9[2];
      }
      puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
      if (puVar8 == (undefined *)0x0) {
        uStack_e8 = (undefined *)0x0;
        uStack_e0 = (long *)0x0;
        FUN_048b0d20(&uStack_e8);
        puVar8 = uStack_e8;
      }
      lVar14 = *(long *)(puVar8 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      goto LAB_083facf4;
    }
    puStack_238 = &UNK_0f4e3c70;
    if (((ulong)uStack_1d8 & 1) != 0) {
      func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&lStack_218);
    uStack_2b8 = &UNK_0f4e3c70;
    if (((ulong)uStack_258 & 1) != 0) {
      func_0x0412a280(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_268;
    if (uStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_268 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_268 + 0x10))(uStack_268);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_298);
  }
  if ((DAT_0f5d2ce8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2ce8), iVar6 != 0)) {
    func_0x084b1d80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2c68,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2ce8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2c68 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083faed0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2c68 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083faed0:
    puVar8 = &DAT_0f5d2c68;
    if (iRam000000000f5d2cc8 != -0x2b3da790) goto LAB_083faf3d;
LAB_083faefb:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083faf3d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084b21d0(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083faefb;
LAB_083faf3d:
    func_0x084b21d0(&puStack_168,param_1,&UNK_013caf35,0xc);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084b2cf0(&puStack_238,&puStack_168,&UNK_01291a32,0xe);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f012080;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_05dd3ca0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_05dd3990;
    uStack_278 = &UNK_084b32a0;
    uStack_270 = &UNK_084b3400;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b2fa0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2ce8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2ce8), iVar7 != 0)) {
      func_0x084b1d80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2c68,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2ce8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2c68 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fb120;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2c68 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fb120:
      puVar15 = &DAT_0f5d2c68;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012aa0c4),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b2cf0(&puStack_238,&puStack_168,&UNK_01278af5,0xd);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0c2a88;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0729f0a0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651e820;
    uStack_278 = &UNK_084b35e0;
    uStack_270 = &UNK_084b3740;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b2fa0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2ce8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2ce8), iVar7 != 0)) {
      func_0x084b1d80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2c68,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2ce8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2c68 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fb370;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2c68 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fb370:
      puVar15 = &DAT_0f5d2c68;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012aa0c4),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b2cf0(&puStack_238,&puStack_168,&UNK_01346eab,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0c2a88;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0729f0a0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651e820;
    uStack_278 = &UNK_084b3910;
    uStack_270 = &UNK_084b3a70;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b2fa0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2ce8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2ce8), iVar7 != 0)) {
      func_0x084b1d80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2c68,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2ce8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2c68 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fb5c0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2c68 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fb5c0:
      puVar15 = &DAT_0f5d2c68;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012aa0c4),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d2da0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2da0), iVar6 != 0)) {
    func_0x084b3d10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2d20,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2da0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2d20 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083fb6c0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2d20 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083fb6c0:
    puVar8 = &DAT_0f5d2d20;
    if (iRam000000000f5d2d80 != -0x2b3da790) goto LAB_083fb72d;
LAB_083fb6eb:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083fb72d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084b4140(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083fb6eb;
LAB_083fb72d:
    func_0x084b4140(&puStack_168,param_1,&UNK_012406b0,10);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084b4c50(&puStack_238,&puStack_168,&UNK_01278ae1,0x13);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b5200;
    uStack_270 = &UNK_084b5360;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b4f00(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2da0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2da0), iVar7 != 0)) {
      func_0x084b3d10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2d20,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2da0);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2d20 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fb910;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2d20 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fb910:
      puVar15 = &DAT_0f5d2d20;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0125e187),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b4c50(&puStack_238,&puStack_168,&UNK_011f3afd,0x16);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b5530;
    uStack_270 = &UNK_084b5690;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b4f00(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2da0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2da0), iVar7 != 0)) {
      func_0x084b3d10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2d20,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2da0);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2d20 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fbb60;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2d20 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fbb60:
      puVar15 = &DAT_0f5d2d20;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0125e187),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b4c50(&puStack_238,&puStack_168,&UNK_0139815e,0xd);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b5870;
    uStack_270 = &UNK_084b59d0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b4f00(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2da0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2da0), iVar7 != 0)) {
      func_0x084b3d10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2d20,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2da0);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2d20 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fbdb0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2d20 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fbdb0:
      puVar15 = &DAT_0f5d2d20;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0125e187),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b4c50(&puStack_238,&puStack_168,&UNK_01291a41,0xd);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_04906f70;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_04906c50;
    uStack_278 = &UNK_084b5bb0;
    uStack_270 = &UNK_084b5d10;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b4f00(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2da0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2da0), iVar7 != 0)) {
      func_0x084b3d10();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2d20,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2da0);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2d20 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fc000;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2d20 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fc000:
      puVar15 = &DAT_0f5d2d20;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0125e187),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d2e58 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2e58), iVar6 != 0)) {
    func_0x084b5fb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2dd8,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2e58);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2dd8 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083fc100;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2dd8 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083fc100:
    puVar8 = &DAT_0f5d2dd8;
    if (iRam000000000f5d2e38 != -0x2b3da790) goto LAB_083fc16d;
LAB_083fc12b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083fc16d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084b6480(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083fc12b;
LAB_083fc16d:
    func_0x084b6480(&puStack_168,param_1,&UNK_0120e0fe,10);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084b6fe0(&puStack_238,&puStack_168,&UNK_011f3b14,0xd);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ee2f8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07920050;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651f3e0;
    uStack_278 = &UNK_084b7590;
    uStack_270 = &UNK_084b76f0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b7290(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2e58 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2e58), iVar7 != 0)) {
      func_0x084b5fb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2dd8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2e58);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2dd8 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fc350;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2dd8 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fc350:
      puVar15 = &DAT_0f5d2dd8;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013cb1c7),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b6fe0(&puStack_238,&puStack_168,&UNK_0132bc8e,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b78d0;
    uStack_270 = &UNK_084b7a30;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b7290(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2e58 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2e58), iVar7 != 0)) {
      func_0x084b5fb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2dd8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2e58);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2dd8 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fc5a0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2dd8 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fc5a0:
      puVar15 = &DAT_0f5d2dd8;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013cb1c7),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b6fe0(&puStack_238,&puStack_168,&UNK_01310c87,9);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b7c00;
    uStack_270 = &UNK_084b7d60;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b7290(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2e58 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2e58), iVar7 != 0)) {
      func_0x084b5fb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2dd8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2e58);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2dd8 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fc7f0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2dd8 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fc7f0:
      puVar15 = &DAT_0f5d2dd8;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013cb1c7),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d2f10 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2f10), iVar6 != 0)) {
    func_0x084b8000();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2e90,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2f10);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2e90 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083fc8f0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2e90 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083fc8f0:
    puVar8 = &DAT_0f5d2e90;
    if (iRam000000000f5d2ef0 != -0x2b3da790) goto LAB_083fc95d;
LAB_083fc91b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083fc95d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084b8720(&uStack_e8,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083fc91b;
LAB_083fc95d:
    func_0x084b8720(&uStack_e8,param_1,&UNK_01346eb6,0xc);
  }
  if (cStack_b8 == '\0') {
    uStack_118._4_4_ = (uint)((ulong)uStack_118 >> 0x20);
    func_0x084b9290(&puStack_238,&uStack_e8,&UNK_01417a76,0xd);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b9840;
    uStack_270 = &UNK_084b99a0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b9540(&puStack_238);
    uVar4 = uStack_bc;
    iVar6 = iStack_c0;
    puVar8 = uStack_e8;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2f10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2f10), iVar7 != 0)) {
      func_0x084b8000();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2e90,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2f10);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2e90 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fcb40;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2e90 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fcb40:
      puVar15 = &DAT_0f5d2e90;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013ff4ed),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b9290(&puStack_238,&uStack_e8,&UNK_013e551d,0xb);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084b9b80;
    uStack_270 = &UNK_084b9ce0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b9540(&puStack_238);
    uVar4 = uStack_bc;
    iVar6 = iStack_c0;
    puVar8 = uStack_e8;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2f10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2f10), iVar7 != 0)) {
      func_0x084b8000();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2e90,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2f10);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2e90 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fcd90;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2e90 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fcd90:
      puVar15 = &DAT_0f5d2e90;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013ff4ed),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084b9290(&puStack_238,&uStack_e8,&UNK_0144dbbe,0xc);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_048b3f30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_048b2190;
    uStack_278 = &UNK_084b9ec0;
    uStack_270 = &UNK_084ba080;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b9540(&puStack_238);
    puStack_138 = (undefined1 *)CONCAT71(puStack_138._1_7_,cStack_b8);
    uStack_158 = (long *)CONCAT44(uStack_d4,uStack_d8);
    puStack_168 = uStack_e8;
    plStack_160 = uStack_e0;
    func_0x048b0bc0(&plStack_220);
    lStack_218 = 0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1eb = 0;
    uStack_1ea = 0;
    uStack_1e9 = 0;
    plStack_1e8 = (long *)0x0;
    puStack_200 = (undefined1 *)0x0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f3 = 0;
    uStack_1f1 = 0;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    lStack_1c0 = 0;
    uStack_230 = (long **)0xffffffffffffffff;
    uStack_228 = (long *)0x0;
    plStack_220 = (long *)0xff;
    puStack_238 = &UNK_0f4e3c70;
    func_0x041679a0(&lStack_218);
    puStack_210 = (undefined *)func_0x041681f0(&lStack_218,0xf547a30);
    puStack_208 = (undefined1 *)func_0x041681f0(&lStack_218,0xf547770);
    puStack_200 = (undefined1 *)0x0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f3 = 0;
    uStack_1f1 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1eb = 0;
    uStack_1ea = 0;
    uStack_1e9 = 0;
    plStack_1e8 = (long *)0x0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    uStack_230 = (long **)0x200;
    uStack_2b0 = (long *)0x200;
    uStack_2a8 = uStack_228;
    uStack_2a0 = CONCAT71(uStack_2a0._1_7_,plStack_220._0_1_);
    uStack_2b8 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_298,&lStack_218);
    puStack_290 = puStack_210;
    puStack_288 = puStack_208;
    puStack_280 = puStack_200;
    uStack_278 = (undefined *)
                 CONCAT44(CONCAT13(uStack_1f1,CONCAT21(uStack_1f3,uStack_1f4)),uStack_1f8);
    uStack_270 = (undefined *)
                 CONCAT44(CONCAT13(uStack_1e9,CONCAT12(uStack_1ea,CONCAT11(uStack_1eb,uStack_1ec))),
                          CONCAT13(uStack_1ed,CONCAT21(uStack_1ef,uStack_1f0)));
    uStack_268 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      LOCK();
      plStack_1e8[1] = plStack_1e8[1] + 1;
      UNLOCK();
    }
    lStack_260 = lStack_1e0;
    if (((ulong)uStack_1d8 & 1) == 0) {
      uStack_248 = lStack_1c8;
      uStack_258 = uStack_1d8;
      uStack_250 = uStack_1d0;
    }
    else {
      func_0x0412e5e0(&uStack_258,lStack_1c8,uStack_1d0);
    }
    uStack_240 = lStack_1c0;
    func_0x08408e20(&uStack_a8,&puStack_168,&uStack_2b8);
    uStack_2b8 = &UNK_0f4e3c70;
    if (((ulong)uStack_258 & 1) != 0) {
      func_0x0412a280(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_268;
    if (uStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_268 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_268 + 0x10))(uStack_268);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_298);
    puStack_238 = &UNK_0f4e3c70;
    if (((ulong)uStack_1d8 & 1) != 0) {
      func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&lStack_218);
    func_0x084b9290(&puStack_238,&uStack_e8,&UNK_0137cadb,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    puStack_168 = (undefined *)CONCAT44(puStack_168._4_4_,(undefined4)uStack_228);
    plStack_160 = (long *)0x0;
    uStack_158 = (long *)((ulong)uStack_158 & 0xffffffff00000000);
    uStack_150 = 1;
    uStack_148 = 0;
    uStack_140 = &UNK_048b3f30;
    puStack_138 = &SUB_048b06d0;
    puStack_130 = &SUB_048b2190;
    puStack_128 = &UNK_084ba250;
    puStack_120 = &UNK_084ba420;
    uStack_118 = (long *)((ulong)uStack_118._4_4_ << 0x20);
    lStack_110 = 0;
    plStack_108 = (long *)0x0;
    FUN_048b05a0(uStack_230,&puStack_168);
    plVar9 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_108 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084b9540(&puStack_238);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    iStack_80 = iStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = (undefined4)uStack_e8;
    uStack_a4 = uStack_e8._4_4_;
    uStack_a0 = (undefined4)uStack_e0;
    uStack_9c = uStack_e0._4_4_;
    func_0x048b0bc0(&plStack_220);
    uStack_148 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    lStack_110 = 0;
    plStack_108 = (long *)0x0;
    puStack_120 = (undefined *)0x0;
    uStack_118 = (long *)0x0;
    puStack_130 = (undefined1 *)0x0;
    puStack_128 = (undefined *)0x0;
    uStack_140 = (undefined *)0x0;
    puStack_138 = (undefined1 *)0x0;
    uStack_f0 = 0;
    plStack_160 = (long *)0xffffffffffffffff;
    uStack_158 = (long *)0x0;
    uStack_150 = 0xff;
    puStack_168 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_148);
    uStack_140 = (undefined *)func_0x041681f0(&uStack_148,0xf547a30);
    puStack_138 = (undefined1 *)func_0x041681f0(&uStack_148,0xf547770);
    puStack_130 = (undefined1 *)0x0;
    puStack_128 = (undefined *)0x0;
    puStack_120 = (undefined *)0x0;
    uStack_118 = (long *)0x0;
    lStack_110 = 0;
    plStack_108 = (long *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    plStack_160 = (long *)0x800;
    uStack_230 = (long **)0x800;
    uStack_228 = uStack_158;
    plStack_220 = (long *)CONCAT71(plStack_220._1_7_,(undefined1)uStack_150);
    puStack_238 = &UNK_0f4e3c70;
    func_0x04167a20(&lStack_218,&uStack_148);
    puStack_210 = uStack_140;
    puStack_208 = puStack_138;
    puStack_200 = puStack_130;
    uStack_1f8 = puStack_128._0_4_;
    uStack_1f4 = (undefined1)((ulong)puStack_128 >> 0x20);
    uStack_1f3 = (undefined2)((ulong)puStack_128 >> 0x28);
    uStack_1f1 = (undefined1)((ulong)puStack_128 >> 0x38);
    uStack_1f0 = SUB81(puStack_120,0);
    uStack_1ef = (undefined2)((ulong)puStack_120 >> 8);
    uStack_1ed = (undefined1)((ulong)puStack_120 >> 0x18);
    uStack_1ec = (undefined1)((ulong)puStack_120 >> 0x20);
    uStack_1eb = (undefined1)((ulong)puStack_120 >> 0x28);
    uStack_1ea = (undefined1)((ulong)puStack_120 >> 0x30);
    uStack_1e9 = (undefined1)((ulong)puStack_120 >> 0x38);
    plStack_1e8 = uStack_118;
    if (uStack_118 != (long *)0x0) {
      LOCK();
      uStack_118[1] = uStack_118[1] + 1;
      UNLOCK();
    }
    lStack_1e0 = lStack_110;
    if (((ulong)plStack_108 & 1) == 0) {
      lStack_1c8 = uStack_f8;
      uStack_1d8 = plStack_108;
      uStack_1d0 = uStack_100;
    }
    else {
      func_0x0412e5e0(&uStack_1d8,uStack_f8,uStack_100);
    }
    lStack_1c0 = uStack_f0;
    func_0x08408e20(auStack_68,&uStack_a8,&puStack_238);
    puStack_238 = &UNK_0f4e3c70;
    if (((ulong)uStack_1d8 & 1) != 0) {
      func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&lStack_218);
    puStack_168 = &UNK_0f4e3c70;
    if (((ulong)plStack_108 & 1) != 0) {
      func_0x0412a280(uStack_f8,(ulong)plStack_108 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_118;
    if (uStack_118 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_118 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_118 + 0x10))(uStack_118);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_148);
  }
  if ((DAT_0f5d2fc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d2fc8), iVar6 != 0)) {
    func_0x084ba6c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2f48,0xf53dab8);
    func_0x0410844d(&DAT_0f5d2fc8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d2f48 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083fd6c0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2f48 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083fd6c0:
    puVar8 = &DAT_0f5d2f48;
    if (iRam000000000f5d2fa8 != -0x2b3da790) goto LAB_083fd72d;
LAB_083fd6eb:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083fd72d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084bab10(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083fd6eb;
LAB_083fd72d:
    func_0x084bab10(&puStack_168,param_1,&UNK_01243f38,7);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084bb630(&puStack_238,&puStack_168,&UNK_0139816c,0x16);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084bbc40;
    uStack_270 = &UNK_084bbda0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084bb940(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2fc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2fc8), iVar7 != 0)) {
      func_0x084ba6c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2f48,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2fc8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2f48 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fd910;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2f48 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fd910:
      puVar15 = &DAT_0f5d2f48;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012c42a1),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084bb630(&puStack_238,&puStack_168,&UNK_011d9fec,0x19);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084bbf70;
    uStack_270 = &UNK_084bc0d0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084bb940(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2fc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2fc8), iVar7 != 0)) {
      func_0x084ba6c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2f48,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2fc8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2f48 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fdb60;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2f48 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fdb60:
      puVar15 = &DAT_0f5d2f48;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012c42a1),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084bb630(&puStack_238,&puStack_168,&UNK_01346ec3,0x10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f012438;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_05fc5e00;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_05dcda00;
    uStack_278 = &UNK_084bc2b0;
    uStack_270 = &UNK_084bc410;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084bb940(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d2fc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d2fc8), iVar7 != 0)) {
      func_0x084ba6c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d2f48,0xf53dab8);
      func_0x0410844d(&DAT_0f5d2fc8);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d2f48 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fddb0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d2f48 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fddb0:
      puVar15 = &DAT_0f5d2f48;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012c42a1),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d3080 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d3080), iVar6 != 0)) {
    func_0x084bc6b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3000,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3080);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d3000 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083fdeb0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3000 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083fdeb0:
    puVar8 = &DAT_0f5d3000;
    if (iRam000000000f5d3060 != -0x2b3da790) goto LAB_083fdf1d;
LAB_083fdedb:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083fdf1d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084bcaf0(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083fdedb;
LAB_083fdf1d:
    func_0x084bcaf0(&puStack_168,param_1,&UNK_0141967b,0xf);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084bd600(&puStack_238,&puStack_168,&UNK_0144dbcb,0x16);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ef9e0;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07bb99e0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_07bb5800;
    uStack_278 = &UNK_084bdbb0;
    uStack_270 = &UNK_084bdd10;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084bd8b0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3080 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3080), iVar7 != 0)) {
      func_0x084bc6b0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3000,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3080);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3000 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fe100;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3000 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fe100:
      puVar15 = &DAT_0f5d3000;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01434056),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 5;
    func_0x084bd600(&puStack_238,&puStack_168,&UNK_0147ead9,7);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0c2a88;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0729f0a0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651e820;
    uStack_278 = &UNK_084be180;
    uStack_270 = &UNK_084be2e0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084bd8b0(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3080 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3080), iVar7 != 0)) {
      func_0x084bc6b0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3000,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3080);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3000 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fe350;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3000 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fe350:
      puVar15 = &DAT_0f5d3000;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01434056),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d3138 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d3138), iVar6 != 0)) {
    func_0x084be570();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d30b8,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3138);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d30b8 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083fe450;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d30b8 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083fe450:
    puVar8 = &DAT_0f5d30b8;
    if (iRam000000000f5d3118 != -0x2b3da790) goto LAB_083fe4bd;
LAB_083fe47b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083fe4bd;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084be9b0(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083fe47b;
LAB_083fe4bd:
    func_0x084be9b0(&puStack_168,param_1,&UNK_011be6f2,0xd);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084bf4c0(&puStack_238,&puStack_168,&UNK_0144dbcb,0x16);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ef9e0;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_07bb99e0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_07bb5800;
    uStack_278 = &UNK_084bfa70;
    uStack_270 = &UNK_084bfbd0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084bf770(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3138 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3138), iVar7 != 0)) {
      func_0x084be570();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d30b8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3138);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d30b8 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fe6a0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d30b8 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fe6a0:
      puVar15 = &DAT_0f5d30b8;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012aa165),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 5;
    func_0x084bf4c0(&puStack_238,&puStack_168,&UNK_0147ead9,7);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0c2a88;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0729f0a0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651e820;
    uStack_278 = &UNK_084bfdb0;
    uStack_270 = &UNK_084bff10;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084bf770(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3138 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3138), iVar7 != 0)) {
      func_0x084be570();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d30b8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3138);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d30b8 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fe8f0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d30b8 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fe8f0:
      puVar15 = &DAT_0f5d30b8;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012aa165),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d31f0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d31f0), iVar6 != 0)) {
    func_0x084c01a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3170,0xf53dab8);
    func_0x0410844d(&DAT_0f5d31f0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d3170 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083fe9f0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3170 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083fe9f0:
    puVar8 = &DAT_0f5d3170;
    if (iRam000000000f5d31d0 != -0x2b3da790) goto LAB_083fea5d;
LAB_083fea1b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083fea5d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084c05c0(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083fea1b;
LAB_083fea5d:
    func_0x084c05c0(&puStack_168,param_1,&UNK_012c3f5e,8);
  }
  if ((char)puStack_138 == '\0') {
    if ((DAT_0f5d3210 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d3210), iVar6 != 0)) {
      func_0x084c02b0();
      func_0x0410844d(&DAT_0f5d3210);
    }
    puVar8 = puStack_168;
    uStack_140 = (undefined *)0x7a86dff00000001;
    if ((DAT_0f5d31f0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d31f0), iVar6 != 0)) {
      func_0x084c01a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3170,0xf53dab8);
      func_0x0410844d(&DAT_0f5d31f0);
    }
    uStack_230 = (long **)(puVar8 + 0x18);
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3170 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083feb20;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3170 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083feb20:
      puStack_238 = &DAT_0f5d3170;
    }
    else {
      puStack_238 = (undefined *)plVar9[2];
    }
    func_0x0ed621a0(&puStack_238,uStack_140._4_4_);
    puStack_238 = (undefined *)CONCAT62(puStack_238._2_6_,1);
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,uStack_140._4_4_);
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    uStack_1f8 = 0x6574490e;
    uStack_1f4 = 0x6d;
    uStack_1f3 = 0x4920;
    uStack_1f1 = 100;
    uStack_1f0 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0x3f600000;
    uStack_230 = &plStack_160;
    func_0x048afb10(&lStack_1e0,8);
    uStack_188 = 0;
    lStack_180 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_178 = 0xff00;
    uStack_174 = uStack_174 & 0xffffff00;
    uStack_170 = uStack_170 & 0xffffff00;
    uStack_16c = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0c2a88;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0729f0a0;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &UNK_0651e820;
    uStack_278 = &UNK_084c10d0;
    uStack_270 = &UNK_084c1230;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    pplVar3 = uStack_230;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    lVar14 = lStack_218;
    plVar1 = plStack_220;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    uStack_2b0 = plVar9 + 3;
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar14;
    plVar9[7] = (long)puStack_200;
    plVar9[5] = (long)puStack_210;
    plVar9[6] = (long)puStack_208;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    plVar9[10] = (long)plStack_1e8;
    plVar9[8] = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
    plVar9[9] = CONCAT17(uStack_1e9,
                         CONCAT16(uStack_1ea,
                                  CONCAT15(uStack_1eb,
                                           CONCAT14(uStack_1ec,
                                                    CONCAT13(uStack_1ed,
                                                             CONCAT21(uStack_1ef,uStack_1f0))))));
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f3 = 0;
    uStack_1f1 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1eb = 0;
    uStack_1ea = 0;
    uStack_1e9 = 0;
    plStack_1e8 = (long *)0x0;
    plVar9[0xb] = lStack_1e0;
    plVar9[0xc] = (long)uStack_1d8;
    plVar9[0xd] = uStack_1d0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    plVar9[0xe] = lStack_1c8;
    plVar9[0xf] = lStack_1c0;
    plVar9[0x10] = lStack_1b8;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_1b0;
    plVar9[0x12] = lStack_1a8;
    plVar9[0x13] = lStack_1a0;
    plVar9[0x14] = lStack_198;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    plVar9[0x17] = lStack_180;
    *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_190;
    *(undefined4 *)((long)plVar9 + 0xac) = uStack_190._4_4_;
    *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_188;
    *(undefined4 *)((long)plVar9 + 0xb4) = uStack_188._4_4_;
    uStack_190 = 0;
    uStack_188 = 0;
    lStack_180 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_174._1_3_));
    plVar9[0x18] = CONCAT44(uStack_174,CONCAT22(uStack_176,uStack_178));
    uStack_e8 = (undefined *)0x0;
    uStack_e0 = (long *)0x0;
    uStack_2a8 = plVar9;
    func_0x048afd20(pplVar3,&uStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2a8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        func_0x0412c2d0(plVar9);
      }
    }
    puVar8 = puStack_168;
    plVar9 = pplVar3[2];
    iVar6 = *(int *)((long)pplVar3 + 0x1c);
    if (iVar6 == 2) {
      piVar12 = *(int **)(plVar9[0xf] + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(pplVar3 + 3)) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      for (; *(long **)(piVar12 + 0xc) != pplVar3[1]; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_083ff00a:
      piVar12[4] = piVar12[4] | (int)puStack_238 << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar12 = *(int **)(plVar9[0xf] + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != *(int *)(pplVar3 + 3)) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_083ff00a;
      }
      if (iVar6 == 0) {
        *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | (int)puStack_238 << 0x10;
      }
    }
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d31f0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d31f0), iVar7 != 0)) {
      func_0x084c01a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3170,0xf53dab8);
      func_0x0410844d(&DAT_0f5d31f0);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3170 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083ff090;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3170 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083ff090:
      puVar15 = &DAT_0f5d3170;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0125e224),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d32a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d32a8), iVar6 != 0)) {
    func_0x084c14c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3228,0xf53dab8);
    func_0x0410844d(&DAT_0f5d32a8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d3228 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083ff190;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3228 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083ff190:
    puVar8 = &DAT_0f5d3228;
    if (iRam000000000f5d3288 != -0x2b3da790) goto LAB_083ff1fd;
LAB_083ff1bb:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083ff1fd;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084c1ac0(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083ff1bb;
LAB_083ff1fd:
    func_0x084c1ac0(&puStack_168,param_1,&UNK_011be700,0xf);
  }
  if ((char)puStack_138 == '\0') {
    if ((DAT_0f5d32c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d32c8), iVar6 != 0)) {
      func_0x084c15d0();
      func_0x0410844d(&DAT_0f5d32c8);
    }
    puVar8 = puStack_168;
    uStack_140 = (undefined *)0x23523dee00000001;
    if ((DAT_0f5d32a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d32a8), iVar6 != 0)) {
      func_0x084c14c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3228,0xf53dab8);
      func_0x0410844d(&DAT_0f5d32a8);
    }
    uStack_230 = (long **)(puVar8 + 0x18);
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3228 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083ff2c0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3228 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083ff2c0:
      puStack_238 = &DAT_0f5d3228;
    }
    else {
      puStack_238 = (undefined *)plVar9[2];
    }
    func_0x0ed621a0(&puStack_238,uStack_140._4_4_);
    puStack_238 = (undefined *)CONCAT62(puStack_238._2_6_,1);
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,uStack_140._4_4_);
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    uStack_1f8 = 0x65764514;
    uStack_1f4 = 0x6e;
    uStack_1f3 = 0x2074;
    uStack_1f1 = 0x4e;
    uStack_1f0 = 0x61;
    uStack_1ef = 0x656d;
    uStack_1ed = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0x3f600000;
    uStack_230 = &plStack_160;
    func_0x048afb10(&lStack_1e0,8);
    uStack_188 = 0;
    lStack_180 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_178 = 0xff00;
    uStack_174 = uStack_174 & 0xffffff00;
    uStack_170 = uStack_170 & 0xffffff00;
    uStack_16c = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_048b3f30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_048b2190;
    uStack_278 = &UNK_084c2620;
    uStack_270 = &UNK_084c27e0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    pplVar3 = uStack_230;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    lVar14 = lStack_218;
    plVar1 = plStack_220;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    uStack_2b0 = plVar9 + 3;
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar14;
    plVar9[7] = (long)puStack_200;
    plVar9[5] = (long)puStack_210;
    plVar9[6] = (long)puStack_208;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    plVar9[10] = (long)plStack_1e8;
    plVar9[8] = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
    plVar9[9] = CONCAT17(uStack_1e9,
                         CONCAT16(uStack_1ea,
                                  CONCAT15(uStack_1eb,
                                           CONCAT14(uStack_1ec,
                                                    CONCAT13(uStack_1ed,
                                                             CONCAT21(uStack_1ef,uStack_1f0))))));
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f3 = 0;
    uStack_1f1 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1eb = 0;
    uStack_1ea = 0;
    uStack_1e9 = 0;
    plStack_1e8 = (long *)0x0;
    plVar9[0xb] = lStack_1e0;
    plVar9[0xc] = (long)uStack_1d8;
    plVar9[0xd] = uStack_1d0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    plVar9[0xe] = lStack_1c8;
    plVar9[0xf] = lStack_1c0;
    plVar9[0x10] = lStack_1b8;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_1b0;
    plVar9[0x12] = lStack_1a8;
    plVar9[0x13] = lStack_1a0;
    plVar9[0x14] = lStack_198;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    plVar9[0x17] = lStack_180;
    *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_190;
    *(undefined4 *)((long)plVar9 + 0xac) = uStack_190._4_4_;
    *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_188;
    *(undefined4 *)((long)plVar9 + 0xb4) = uStack_188._4_4_;
    uStack_190 = 0;
    uStack_188 = 0;
    lStack_180 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_174._1_3_));
    plVar9[0x18] = CONCAT44(uStack_174,CONCAT22(uStack_176,uStack_178));
    uStack_e8 = (undefined *)0x0;
    uStack_e0 = (long *)0x0;
    uStack_2a8 = plVar9;
    func_0x048afd20(pplVar3,&uStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2a8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        func_0x0412c2d0(plVar9);
      }
    }
    puVar8 = puStack_168;
    plVar9 = pplVar3[2];
    iVar6 = *(int *)((long)pplVar3 + 0x1c);
    if (iVar6 == 2) {
      piVar12 = *(int **)(plVar9[0xf] + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(pplVar3 + 3)) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      for (; *(long **)(piVar12 + 0xc) != pplVar3[1]; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_083ff7aa:
      piVar12[4] = piVar12[4] | (int)puStack_238 << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar12 = *(int **)(plVar9[0xf] + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != *(int *)(pplVar3 + 3)) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_083ff7aa;
      }
      if (iVar6 == 0) {
        *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | (int)puStack_238 << 0x10;
      }
    }
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    uStack_298 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    uStack_270 = (undefined *)0x0;
    uStack_268 = (long *)0x0;
    puStack_280 = (undefined1 *)0x0;
    uStack_278 = (undefined *)0x0;
    puStack_290 = (undefined *)0x0;
    puStack_288 = (undefined1 *)0x0;
    uStack_240 = 0;
    uStack_2b0 = (long *)0xffffffffffffffff;
    uStack_2a8 = (long *)0x0;
    uStack_2a0 = 0xff;
    uStack_2b8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_298);
    puStack_290 = (undefined *)func_0x041681f0(&uStack_298,0xf547a30);
    puStack_288 = (undefined1 *)func_0x041681f0(&uStack_298,0xf547770);
    puStack_280 = (undefined1 *)0x0;
    uStack_278 = (undefined *)0x0;
    uStack_270 = (undefined *)0x0;
    uStack_268 = (long *)0x0;
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_2b0 = (long *)0x100;
    uStack_230 = (long **)0x100;
    uStack_228 = uStack_2a8;
    plStack_220 = (long *)CONCAT71(plStack_220._1_7_,(undefined1)uStack_2a0);
    puStack_238 = &UNK_0f4e3c70;
    func_0x04167a20(&lStack_218,&uStack_298);
    puStack_210 = puStack_290;
    puStack_208 = puStack_288;
    puStack_200 = puStack_280;
    uStack_1f8 = (undefined4)uStack_278;
    uStack_1f4 = (undefined1)((ulong)uStack_278 >> 0x20);
    uStack_1f3 = (undefined2)((ulong)uStack_278 >> 0x28);
    uStack_1f1 = (undefined1)((ulong)uStack_278 >> 0x38);
    uStack_1f0 = SUB81(uStack_270,0);
    uStack_1ef = (undefined2)((ulong)uStack_270 >> 8);
    uStack_1ed = (undefined1)((ulong)uStack_270 >> 0x18);
    uStack_1ec = (undefined1)((ulong)uStack_270 >> 0x20);
    uStack_1eb = (undefined1)((ulong)uStack_270 >> 0x28);
    uStack_1ea = (undefined1)((ulong)uStack_270 >> 0x30);
    uStack_1e9 = (undefined1)((ulong)uStack_270 >> 0x38);
    plStack_1e8 = uStack_268;
    if (uStack_268 != (long *)0x0) {
      LOCK();
      uStack_268[1] = uStack_268[1] + 1;
      UNLOCK();
    }
    lStack_1e0 = lStack_260;
    if (((ulong)uStack_258 & 1) == 0) {
      lStack_1c8 = uStack_248;
      uStack_1d8 = uStack_258;
      uStack_1d0 = uStack_250;
    }
    else {
      func_0x0412e5e0(&uStack_1d8,uStack_248,uStack_250);
    }
    lStack_1c0 = uStack_240;
    if (iVar6 == 4) {
      if ((DAT_0f5d32a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d32a8), iVar6 != 0)) {
        func_0x084c14c0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3228,0xf53dab8);
        func_0x0410844d(&DAT_0f5d32a8);
      }
      plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f5d3228 + 4)) * 8);
      do {
        lVar14 = *plVar9;
        if (lVar14 == -1) goto LAB_083ffa38;
        plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5d3228 + 4));
      if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083ffa38:
        puVar15 = &DAT_0f5d3228;
      }
      else {
        puVar15 = (undefined *)plVar9[2];
      }
      puVar8 = (undefined *)func_0x048b1040(puVar8 + 0x18,puVar15,uVar4,1);
      if (puVar8 == (undefined *)0x0) {
        uStack_e8 = (undefined *)0x0;
        uStack_e0 = (long *)0x0;
        func_0x048b10d0(&uStack_e8);
        puVar15 = *(undefined **)(uStack_e8 + 0x38);
        puVar8 = uStack_e8;
        if (puVar15 == (undefined *)0x0) goto LAB_083ffb1c;
LAB_083ffb41:
        do {
          puVar8 = puVar15;
          puVar15 = *(undefined **)(puVar8 + 0x38);
          if (*(undefined **)(puVar8 + 0x38) == (undefined *)0x0) {
            uStack_e8 = (undefined *)0x0;
            uStack_e0 = (long *)0x0;
            func_0x048b10d0(&uStack_e8);
            puVar15 = uStack_e8;
          }
        } while (puVar15 != (undefined *)0x0);
      }
      else {
        puVar15 = *(undefined **)(puVar8 + 0x38);
        if (*(undefined **)(puVar8 + 0x38) != (undefined *)0x0) goto LAB_083ffb41;
LAB_083ffb1c:
        uStack_e8 = (undefined *)0x0;
        uStack_e0 = (long *)0x0;
        func_0x048b10d0(&uStack_e8);
        puVar15 = uStack_e8;
        if (uStack_e8 != (undefined *)0x0) goto LAB_083ffb41;
      }
      lVar14 = *(long *)(puVar8 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
LAB_083ffba4:
      *(undefined1 *)(puVar10 + 3) = plStack_220._0_1_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_230;
      *(undefined4 *)((long)puVar10 + 0xc) = uStack_230._4_4_;
      *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_228;
      *(undefined4 *)((long)puVar10 + 0x14) = uStack_228._4_4_;
      *puVar10 = &UNK_0f4e3c70;
      func_0x04167a20(puVar10 + 4,&lStack_218);
      puVar10[5] = puStack_210;
      puVar10[6] = puStack_208;
      puVar10[7] = puStack_200;
      puVar10[8] = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
      puVar10[9] = CONCAT17(uStack_1e9,
                            CONCAT16(uStack_1ea,
                                     CONCAT15(uStack_1eb,
                                              CONCAT14(uStack_1ec,
                                                       CONCAT13(uStack_1ed,
                                                                CONCAT21(uStack_1ef,uStack_1f0))))))
      ;
      puVar10[10] = plStack_1e8;
      uStack_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1eb = 0;
      uStack_1ea = 0;
      uStack_1e9 = 0;
      plStack_1e8 = (long *)0x0;
      puVar10[0xb] = lStack_1e0;
      puVar10[0xe] = lStack_1c8;
      *(undefined4 *)(puVar10 + 0xc) = (undefined4)uStack_1d8;
      *(undefined4 *)((long)puVar10 + 100) = uStack_1d8._4_4_;
      *(undefined4 *)(puVar10 + 0xd) = (undefined4)uStack_1d0;
      *(undefined4 *)((long)puVar10 + 0x6c) = uStack_1d0._4_4_;
      uStack_1d8 = (long *)0x0;
      uStack_1d0 = 0;
      lStack_1c8 = 0;
      puVar10[0xf] = lStack_1c0;
      plVar9 = *(long **)(lVar14 + 8);
      *(undefined8 **)(lVar14 + 8) = puVar10;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x28))();
      }
    }
    else if (iVar6 == 1) {
      if ((DAT_0f5d32a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d32a8), iVar6 != 0)) {
        func_0x084c14c0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3228,0xf53dab8);
        func_0x0410844d(&DAT_0f5d32a8);
      }
      plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f5d3228 + 4)) * 8);
      do {
        lVar14 = *plVar9;
        if (lVar14 == -1) goto LAB_083ff9b8;
        plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
      } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) !=
               *(uint *)(_DAT_0f5d3228 + 4));
      if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083ff9b8:
        puVar15 = &DAT_0f5d3228;
      }
      else {
        puVar15 = (undefined *)plVar9[2];
      }
      puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
      if (puVar8 == (undefined *)0x0) {
        uStack_e8 = (undefined *)0x0;
        uStack_e0 = (long *)0x0;
        FUN_048b0d20(&uStack_e8);
        puVar8 = uStack_e8;
      }
      lVar14 = *(long *)(puVar8 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      goto LAB_083ffba4;
    }
    puStack_238 = &UNK_0f4e3c70;
    if (((ulong)uStack_1d8 & 1) != 0) {
      func_0x0412a280(lStack_1c8,(ulong)uStack_1d8 & 0xfffffffffffffffe);
    }
    plVar9 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1e8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&lStack_218);
    uStack_2b8 = &UNK_0f4e3c70;
    if (((ulong)uStack_258 & 1) != 0) {
      func_0x0412a280(uStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_268;
    if (uStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_268 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_268 + 0x10))(uStack_268);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_298);
  }
  if ((DAT_0f5d3360 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d3360), iVar6 != 0)) {
    func_0x084c2a70();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d32e0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3360);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d32e0 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_083ffd80;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d32e0 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_083ffd80:
    puVar8 = &DAT_0f5d32e0;
    if (iRam000000000f5d3340 != -0x2b3da790) goto LAB_083ffded;
LAB_083ffdab:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_083ffded;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084c2ec0(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_083ffdab;
LAB_083ffded:
    func_0x084c2ec0(&puStack_168,param_1,&UNK_014b40a1,10);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084c39e0(&puStack_238,&puStack_168,&UNK_011da006,0xc);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084c3f90;
    uStack_270 = &UNK_084c40f0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084c3c90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3360 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3360), iVar7 != 0)) {
      func_0x084c2a70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d32e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3360);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d32e0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_083fffd0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d32e0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_083fffd0:
      puVar15 = &DAT_0f5d32e0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0132bd68),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084c39e0(&puStack_238,&puStack_168,&UNK_013ff3a4,0xb);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084c42c0;
    uStack_270 = &UNK_084c4420;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084c3c90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3360 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3360), iVar7 != 0)) {
      func_0x084c2a70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d32e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3360);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d32e0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_08400220;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d32e0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_08400220:
      puVar15 = &DAT_0f5d32e0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0132bd68),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084c39e0(&puStack_238,&puStack_168,&UNK_011ba979,7);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_04906f70;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_04906c50;
    uStack_278 = &UNK_084c4600;
    uStack_270 = &UNK_084c4760;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084c3c90(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3360 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3360), iVar7 != 0)) {
      func_0x084c2a70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d32e0,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3360);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d32e0 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_08400470;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d32e0 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_08400470:
      puVar15 = &DAT_0f5d32e0;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0132bd68),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d3418 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d3418), iVar6 != 0)) {
    func_0x084c4a00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3398,0xf53dab8);
    func_0x0410844d(&DAT_0f5d3418);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d3398 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_08400570;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3398 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_08400570:
    puVar8 = &DAT_0f5d3398;
    if (iRam000000000f5d33f8 != -0x2b3da790) goto LAB_084005dd;
LAB_0840059b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_084005dd;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084c4e20(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0840059b;
LAB_084005dd:
    func_0x084c4e20(&puStack_168,param_1,&UNK_012daf6f,0xe);
  }
  if ((char)puStack_138 == '\0') {
    if ((DAT_0f5d3438 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d3438), iVar6 != 0)) {
      func_0x084c4b10();
      func_0x0410844d(&DAT_0f5d3438);
    }
    puVar8 = puStack_168;
    uStack_140 = (undefined *)0x9a82a49b00000001;
    if ((DAT_0f5d3418 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d3418), iVar6 != 0)) {
      func_0x084c4a00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3398,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3418);
    }
    uStack_230 = (long **)(puVar8 + 0x18);
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3398 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_084006a0;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3398 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_084006a0:
      puStack_238 = &DAT_0f5d3398;
    }
    else {
      puStack_238 = (undefined *)plVar9[2];
    }
    func_0x0ed621a0(&puStack_238,uStack_140._4_4_);
    puStack_238 = (undefined *)CONCAT62(puStack_238._2_6_,1);
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,uStack_140._4_4_);
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    uStack_1f8 = 0x6465521c;
    uStack_1f4 = 0x73;
    uStack_1f3 = 0x6f74;
    uStack_1f1 = 0x6e;
    uStack_1f0 = 0x65;
    uStack_1ef = 0x4c20;
    uStack_1ed = 0x65;
    uStack_1ec = 0x76;
    uStack_1eb = 0x65;
    uStack_1ea = 0x6c;
    uStack_1e9 = 0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0x3f600000;
    uStack_230 = &plStack_160;
    func_0x048afb10(&lStack_1e0,8);
    uStack_188 = 0;
    lStack_180 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_178 = 0xff00;
    uStack_174 = uStack_174 & 0xffffff00;
    uStack_170 = uStack_170 & 0xffffff00;
    uStack_16c = 0;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084c5930;
    uStack_270 = &UNK_084c5a90;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    pplVar3 = uStack_230;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,_DAT_0f550a0c);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    lVar14 = lStack_218;
    plVar1 = plStack_220;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&UNK_0ef439d0;
    uStack_2b0 = plVar9 + 3;
    plStack_220 = (long *)0x0;
    lStack_218 = 0;
    plVar9[3] = (long)plVar1;
    plVar9[4] = lVar14;
    plVar9[7] = (long)puStack_200;
    plVar9[5] = (long)puStack_210;
    plVar9[6] = (long)puStack_208;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined1 *)0x0;
    puStack_200 = (undefined1 *)0x0;
    plVar9[10] = (long)plStack_1e8;
    plVar9[8] = CONCAT17(uStack_1f1,CONCAT25(uStack_1f3,CONCAT14(uStack_1f4,uStack_1f8)));
    plVar9[9] = CONCAT17(uStack_1e9,
                         CONCAT16(uStack_1ea,
                                  CONCAT15(uStack_1eb,
                                           CONCAT14(uStack_1ec,
                                                    CONCAT13(uStack_1ed,
                                                             CONCAT21(uStack_1ef,uStack_1f0))))));
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f3 = 0;
    uStack_1f1 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1eb = 0;
    uStack_1ea = 0;
    uStack_1e9 = 0;
    plStack_1e8 = (long *)0x0;
    plVar9[0xb] = lStack_1e0;
    plVar9[0xc] = (long)uStack_1d8;
    plVar9[0xd] = uStack_1d0;
    lStack_1e0 = 0;
    uStack_1d8 = (long *)0x0;
    uStack_1d0 = 0;
    plVar9[0xe] = lStack_1c8;
    plVar9[0xf] = lStack_1c0;
    plVar9[0x10] = lStack_1b8;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    *(undefined4 *)(plVar9 + 0x11) = uStack_1b0;
    plVar9[0x12] = lStack_1a8;
    plVar9[0x13] = lStack_1a0;
    plVar9[0x14] = lStack_198;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    plVar9[0x17] = lStack_180;
    *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_190;
    *(undefined4 *)((long)plVar9 + 0xac) = uStack_190._4_4_;
    *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_188;
    *(undefined4 *)((long)plVar9 + 0xb4) = uStack_188._4_4_;
    uStack_190 = 0;
    uStack_188 = 0;
    lStack_180 = 0;
    *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_174._1_3_));
    plVar9[0x18] = CONCAT44(uStack_174,CONCAT22(uStack_176,uStack_178));
    uStack_e8 = (undefined *)0x0;
    uStack_e0 = (long *)0x0;
    uStack_2a8 = plVar9;
    func_0x048afd20(pplVar3,&uStack_2b8);
    plVar9 = uStack_2a8;
    if (uStack_2a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2a8 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_2a8 + 0x10))(uStack_2a8);
        func_0x0412c2d0(plVar9);
      }
    }
    plVar9 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        func_0x0412c2d0(plVar9);
      }
    }
    puVar8 = puStack_168;
    plVar9 = pplVar3[2];
    iVar6 = *(int *)((long)pplVar3 + 0x1c);
    if (iVar6 == 2) {
      piVar12 = *(int **)(plVar9[0xf] + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != *(int *)(pplVar3 + 3)) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      for (; *(long **)(piVar12 + 0xc) != pplVar3[1]; piVar12 = *(int **)(piVar12 + 0xe)) {
      }
LAB_08400b9a:
      piVar12[4] = piVar12[4] | (int)puStack_238 << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar12 = *(int **)(plVar9[0xf] + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != *(int *)(pplVar3 + 3)) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_08400b9a;
      }
      if (iVar6 == 0) {
        *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | (int)puStack_238 << 0x10;
      }
    }
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d3418 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d3418), iVar7 != 0)) {
      func_0x084c4a00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3398,0xf53dab8);
      func_0x0410844d(&DAT_0f5d3418);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3398 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_08400c20;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3398 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_08400c20:
      puVar15 = &DAT_0f5d3398;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013470c3),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
  }
  if ((DAT_0f5d34d0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5d34d0), iVar6 != 0)) {
    func_0x084c5d20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3450,0xf53dab8);
    func_0x0410844d(&DAT_0f5d34d0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d3450 + 4)) * 8);
  do {
    lVar14 = *plVar9;
    if (lVar14 == -1) goto LAB_08400d20;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3450 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_08400d20:
    puVar8 = &DAT_0f5d3450;
    if (iRam000000000f5d34b0 != -0x2b3da790) goto LAB_08400d8d;
LAB_08400d4b:
    lVar14 = *(long *)(puVar8 + 0x68);
    if (lVar14 == 0) goto LAB_08400d8d;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar13 = lVar14 + 9;
    if (bVar16) {
      lVar13 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x084c6150(&puStack_168,param_1,lVar13,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_08400d4b;
LAB_08400d8d:
    func_0x084c6150(&puStack_168,param_1,&UNK_0139481c,0xc);
  }
  if ((char)puStack_138 == '\0') {
    func_0x084c6c60(&puStack_238,&puStack_168,&UNK_0147ead9,7);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ce8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_0490ce30;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_0490cb20;
    uStack_278 = &UNK_084c7270;
    uStack_270 = &UNK_084c73d0;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084c6f70(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d34d0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d34d0), iVar7 != 0)) {
      func_0x084c5d20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d3450,0xf53dab8);
      func_0x0410844d(&DAT_0f5d34d0);
    }
    plVar9 = (long *)(*(long *)(puVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar8 + 0x20) - *(long *)(puVar8 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5d3450 + 4)) * 8);
    do {
      lVar14 = *plVar9;
      if (lVar14 == -1) goto LAB_08400f70;
      plVar9 = (long *)(*(long *)(puVar8 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar8 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5d3450 + 4)
            );
    if (plVar9 == *(long **)(puVar8 + 0x38)) {
LAB_08400f70:
      puVar15 = &DAT_0f5d3450;
    }
    else {
      puVar15 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0141983b),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar8 = (undefined *)func_0x048b0c90(puVar8 + 0x18,puVar15,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_238 = (undefined *)0x0;
      uStack_230 = (long **)0x0;
      FUN_048b0d20(&puStack_238);
      puVar8 = puStack_238;
    }
    *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 1;
    func_0x084c6c60(&puStack_238,&puStack_168,&UNK_0141968b,0x1e);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef46ef8;
    if (plStack_220 != (long *)0x0) {
      lVar14 = *plStack_220;
      plStack_220 = plVar9;
      (**(code **)(lVar14 + 8))();
      plVar9 = plStack_220;
    }
    plStack_220 = plVar9;
    uStack_2b8 = (undefined *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_228);
    uStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)((ulong)uStack_2a8 & 0xffffffff00000000);
    uStack_2a0 = 1;
    uStack_298 = 0;
    puStack_290 = &UNK_04906f70;
    puStack_288 = &SUB_048b06d0;
    puStack_280 = &SUB_04906c50;
    uStack_278 = &UNK_084c75a0;
    uStack_270 = &UNK_084c7700;
    uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
    lStack_260 = 0;
    uStack_258 = (long *)0x0;
    FUN_048b05a0(uStack_230,&uStack_2b8);
    plVar9 = uStack_258;
    if (uStack_258 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_258 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_258 + 0x10))(uStack_258);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x084c6f70(&puStack_238);
    puVar8 = puStack_168;
    iVar6 = (int)uStack_140;
    uVar4 = uStack_140._4_4_;
    func_0x048b0bc0(&plStack_220);
    if ((DAT_0f5d34d0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5d34d0), iVar7 != 0)) {
      func_0x084c5d20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x1291a5a  Player Waxed or Unwaxed Copper Block ID
 * 0x1291a6a  Unwaxed Copper Block ID
 * 0x1310c91  CodeBuilder Runtime Action
 * 0x1310c9b  r Runtime Action
 */
