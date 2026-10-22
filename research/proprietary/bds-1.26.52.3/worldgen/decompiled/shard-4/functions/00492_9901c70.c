/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9a01c70 (ELF vaddr 0x9901c70)
 * Label: caller-of-callee
 * Body:  [[09a01c70, 09a030a1] [09a030b0, 09a06cac]]
 * Ghidra: FUN_09a01c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09a01c70(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  undefined4 auStack_258 [2];
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  byte bStack_1f0;
  undefined1 uStack_1ef;
  undefined2 uStack_1ee;
  undefined1 uStack_1ec;
  undefined1 uStack_1eb;
  undefined2 uStack_1ea;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined1 uStack_1e6;
  undefined1 uStack_1e5;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined2 uStack_19f;
  undefined1 uStack_19d;
  undefined4 uStack_19c;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  uint uStack_12c;
  uint uStack_128;
  undefined1 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  char cStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  char cStack_38;
  
  if ((DAT_0f642ce0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642ce0), iVar6 != 0)) {
    func_0x09a39220();
    __cxa_atexit(&UNK_048ae800,&DAT_0f642c60,0xf53dab8);
    func_0x0410844d(&DAT_0f642ce0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f642c60 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a01ce0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f642c60 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a01ce0:
    puVar7 = &DAT_0f642c60;
    if (iRam000000000f642cc0 != -0x2b3da790) goto LAB_09a01d4d;
LAB_09a01d0b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a01d4d;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a3e990(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a01d0b;
LAB_09a01d4d:
    func_0x09a3e990(&uStack_120,param_1,&UNK_0132ffe7,0xf);
  }
  if (cStack_f0 == '\0') {
    uStack_248._4_4_ = (uint)((ulong)uStack_248 >> 0x20);
    func_0x09a3f500(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248._4_4_ << 0x20);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a3fa80;
    puStack_210 = &UNK_09a3fc40;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a3f780(&bStack_1f0);
    cStack_78 = cStack_f0;
    uStack_88 = uStack_100;
    uStack_84 = uStack_fc;
    uStack_80 = (undefined4)uStack_f8;
    uStack_7c = uStack_f8._4_4_;
    uStack_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_a8 = CONCAT44(uStack_11c,uStack_120);
    uStack_a0 = (long *)CONCAT44(uStack_114,uStack_118);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a3f500(&bStack_1f0,&uStack_a8,&UNK_01410553,5);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f4e6600;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_07cf8580;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_07cf8590;
    puStack_218 = &UNK_09a3fe10;
    puStack_210 = &UNK_09a40050;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a3f780(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  func_0x0d8a3a20(param_1);
  bStack_1f0 = 0x10;
  uStack_1ef = 0x70;
  uStack_1ee = 0x6f72;
  uStack_1ec = 0x74;
  uStack_1eb = 0x6f;
  uStack_1ea = 0x6f63;
  uStack_1e8 = 0x6c;
  uStack_1e7 = 0;
  if ((DAT_0f642948 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642948), iVar6 != 0)) {
    func_0x09a33d90();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6428c8,0xf53dab8);
    func_0x0410844d(&DAT_0f642948);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6428c8 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a02090;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f6428c8 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a02090:
    puVar7 = &DAT_0f6428c8;
    if (iRam000000000f642928 != -0x2b3da790) goto LAB_09a020f0;
LAB_09a020bb:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a020f0;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a40230(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a020bb;
LAB_09a020f0:
    func_0x09a40230(&uStack_120,param_1,&uStack_1ef,8);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a40db0(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a41370;
    puStack_210 = &UNK_09a41540;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a41070(&bStack_1f0);
    cStack_38 = cStack_f0;
    uStack_48 = uStack_100;
    uStack_44 = uStack_fc;
    uStack_40 = (undefined4)uStack_f8;
    uStack_3c = uStack_f8._4_4_;
    uStack_58 = uStack_110;
    uStack_54 = uStack_10c;
    uStack_50 = uStack_108;
    uStack_4c = uStack_104;
    uStack_68 = uStack_120;
    uStack_64 = uStack_11c;
    uStack_60 = uStack_118;
    uStack_5c = uStack_114;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a40db0(&bStack_1f0,&uStack_68,&UNK_013236a8,7,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ce8;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_0490ce30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_0490cb20;
    puStack_218 = &UNK_09a41720;
    puStack_210 = &UNK_09a41880;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a41070(&bStack_1f0);
    cStack_b8 = cStack_38;
    uStack_c8 = uStack_48;
    uStack_c4 = uStack_44;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    uStack_d8 = uStack_58;
    uStack_d4 = uStack_54;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
    uStack_e8 = uStack_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a40db0(&bStack_1f0,&uStack_e8,&DAT_01255e8f,0x12,0);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f009778;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_05d9faa0;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_05d9f760;
    puStack_218 = &UNK_09a41a60;
    puStack_210 = &UNK_09a41bd0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a41070(&bStack_1f0);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
    uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a40db0(&bStack_1f0,&uStack_a8,&UNK_012fa75c,8,0);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0123c0;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_05e08030;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_05e07cf0;
    puStack_218 = &UNK_09a41db0;
    puStack_210 = &UNK_09a41f60;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a41070(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  bStack_1f0 = 0x20;
  uStack_1ef = (undefined1)_DAT_014d31a8;
  uStack_1ee = (undefined2)((uint)_DAT_014d31a8 >> 8);
  uStack_1ec = (undefined1)((uint)_DAT_014d31a8 >> 0x18);
  uStack_1eb = (undefined1)_UNK_014d31ac;
  uStack_1ea = (undefined2)((uint)_UNK_014d31ac >> 8);
  uStack_1e8 = (undefined1)((uint)_UNK_014d31ac >> 0x18);
  uStack_1e7 = (undefined1)_UNK_014d31b0;
  uStack_1e6 = (undefined1)((uint)_UNK_014d31b0 >> 8);
  uStack_1e5 = (undefined1)((uint)_UNK_014d31b0 >> 0x10);
  uStack_1e4 = (undefined1)((uint)_UNK_014d31b0 >> 0x18);
  uStack_1e3 = (undefined1)_UNK_014d31b4;
  uStack_1e2 = (undefined1)((uint)_UNK_014d31b4 >> 8);
  uStack_1e1 = (undefined1)((uint)_UNK_014d31b4 >> 0x10);
  uStack_1e0 = (undefined1)((uint)_UNK_014d31b4 >> 0x18);
  uStack_1df = 0;
  if ((DAT_0f642a00 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642a00), iVar6 != 0)) {
    func_0x09a350d0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f642980,0xf53dab8);
    func_0x0410844d(&DAT_0f642a00);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f642980 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a02710;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f642980 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a02710:
    puVar7 = &DAT_0f642980;
    if (iRam000000000f6429e0 != -0x2b3da790) goto LAB_09a02770;
LAB_09a0273b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a02770;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a42140(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a0273b;
LAB_09a02770:
    func_0x09a42140(&uStack_120,param_1,&uStack_1ef,0x10);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a42cc0(&bStack_1f0,&uStack_120,&UNK_011d1a27,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a43270;
    puStack_210 = &UNK_09a43440;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a42f70(&bStack_1f0);
    cStack_78 = cStack_f0;
    uStack_88 = uStack_100;
    uStack_84 = uStack_fc;
    uStack_80 = (undefined4)uStack_f8;
    uStack_7c = uStack_f8._4_4_;
    uStack_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_a8 = CONCAT44(uStack_11c,uStack_120);
    uStack_a0 = (long *)CONCAT44(uStack_114,uStack_118);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a42cc0(&bStack_1f0,&uStack_a8,&UNK_0141cb60,0xe);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a43620;
    puStack_210 = &UNK_09a437f0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a42f70(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  func_0x0d8a3a20(param_1);
  bStack_1f0 = 0x1a;
  uStack_1ef = 0x73;
  uStack_1ee = 0x6174;
  uStack_1ec = 0x72;
  uStack_1eb = 0x74;
  uStack_1ea = 0x7250;
  uStack_1e8 = 0x6f;
  uStack_1e7 = 0x66;
  uStack_1e6 = 0x69;
  uStack_1e5 = 0x6c;
  uStack_1e4 = 0x65;
  uStack_1e3 = 0x72;
  uStack_1e2 = 0;
  if ((DAT_0f642ab8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642ab8), iVar6 != 0)) {
    func_0x09a36190();
    __cxa_atexit(&UNK_048ae800,&DAT_0f642a38,0xf53dab8);
    func_0x0410844d(&DAT_0f642ab8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f642a38 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a02ac0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f642a38 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a02ac0:
    puVar7 = &DAT_0f642a38;
    if (iRam000000000f642a98 != -0x2b3da790) goto LAB_09a02b20;
LAB_09a02aeb:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a02b20;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a439d0(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a02aeb;
LAB_09a02b20:
    func_0x09a439d0(&uStack_120,param_1,&uStack_1ef,0xd);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    if ((DAT_0f642a20 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642a20), iVar6 != 0)) {
      func_0x09a36050();
      func_0x0410844d(&DAT_0f642a20);
    }
    uStack_f8 = 0x9deeae900000001;
    lVar3 = CONCAT44(uStack_11c,uStack_120);
    if ((DAT_0f642ab8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642ab8), iVar6 != 0)) {
      func_0x09a36190();
      __cxa_atexit(&UNK_048ae800,&DAT_0f642a38,0xf53dab8);
      func_0x0410844d(&DAT_0f642ab8);
    }
    lVar12 = lVar3 + 0x18;
    plVar8 = (long *)(*(long *)(lVar3 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f642a38 + 4)) * 8);
    do {
      lVar4 = *plVar8;
      if (lVar4 == -1) goto LAB_09a02bf0;
      plVar8 = (long *)(*(long *)(lVar3 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f642a38 + 4));
    if (plVar8 == *(long **)(lVar3 + 0x38)) {
LAB_09a02bf0:
      puVar7 = &DAT_0f642a38;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    bStack_1f0 = (byte)puVar7;
    uStack_1ef = (undefined1)((ulong)puVar7 >> 8);
    uStack_1ee = (undefined2)((ulong)puVar7 >> 0x10);
    uStack_1ec = (undefined1)((ulong)puVar7 >> 0x20);
    uStack_1eb = (undefined1)((ulong)puVar7 >> 0x28);
    uStack_1ea = (undefined2)((ulong)puVar7 >> 0x30);
    uStack_1e8 = (undefined1)lVar12;
    uStack_1e7 = (undefined1)((ulong)lVar12 >> 8);
    uStack_1e6 = (undefined1)((ulong)lVar12 >> 0x10);
    uStack_1e5 = (undefined1)((ulong)lVar12 >> 0x18);
    uStack_1e4 = (undefined1)((ulong)lVar12 >> 0x20);
    uStack_1e3 = (undefined1)((ulong)lVar12 >> 0x28);
    uStack_1e2 = (undefined1)((ulong)lVar12 >> 0x30);
    uStack_1e1 = (undefined1)((ulong)lVar12 >> 0x38);
    func_0x0ed621a0(&bStack_1f0,uStack_f8._4_4_);
    bStack_1f0 = 1;
    uStack_1ef = 0;
    uStack_1e8 = SUB81(&uStack_118,0);
    uStack_1e7 = (undefined1)((ulong)&uStack_118 >> 8);
    uStack_1e6 = (undefined1)((ulong)&uStack_118 >> 0x10);
    uStack_1e5 = (undefined1)((ulong)&uStack_118 >> 0x18);
    uStack_1e4 = (undefined1)((ulong)&uStack_118 >> 0x20);
    uStack_1e3 = (undefined1)((ulong)&uStack_118 >> 0x28);
    uStack_1e2 = (undefined1)((ulong)&uStack_118 >> 0x30);
    uStack_1e1 = (undefined1)((ulong)&uStack_118 >> 0x38);
    uStack_1e0 = (undefined1)((ulong)uStack_f8 >> 0x20);
    uStack_1df = (undefined1)((ulong)uStack_f8 >> 0x28);
    uStack_1de = (undefined1)((ulong)uStack_f8 >> 0x30);
    uStack_1dd = (undefined1)((ulong)uStack_f8 >> 0x38);
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0x24;
    uStack_1af = _DAT_01255e8f;
    uStack_1ab = _UNK_01255e93;
    uStack_1a7 = _UNK_01255e97;
    uStack_1a3 = _UNK_01255e9b;
    uStack_19f = 0x6469;
    uStack_19d = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    uStack_168 = 0x3f600000;
    func_0x048afb10(&lStack_198,8);
    uStack_140 = 0;
    lStack_138 = 0;
    lStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    uStack_130 = 0xff00;
    uStack_12c = uStack_12c & 0xffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    uStack_124 = 0;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0ef42d08;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = puVar9;
      (**(code **)(lVar3 + 8))();
      puVar9 = uStack_1d8;
    }
    uStack_1d8 = puVar9;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b06c0;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b02c0;
    puStack_218 = &UNK_09a44540;
    puStack_210 = &UNK_09a446a0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    lVar3 = CONCAT17(uStack_1e1,
                     CONCAT16(uStack_1e2,
                              CONCAT15(uStack_1e3,
                                       CONCAT14(uStack_1e4,
                                                CONCAT13(uStack_1e5,
                                                         CONCAT12(uStack_1e6,
                                                                  CONCAT11(uStack_1e7,uStack_1e8))))
                                      )));
    if ((DAT_0f550a20 == '\0') && (iVar6 = FUN_04108328(&DAT_0f550a20), iVar6 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_258[0] = _DAT_0f550a0c;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar12 = lStack_1d0;
    puVar9 = uStack_1d8;
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef439d0;
    plStack_250 = plVar8 + 3;
    uStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    plVar8[3] = (long)puVar9;
    plVar8[4] = lVar12;
    plVar8[7] = lStack_1b8;
    plVar8[5] = lStack_1c8;
    plVar8[6] = lStack_1c0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    plVar8[10] = CONCAT44(uStack_19c,CONCAT13(uStack_19d,CONCAT21(uStack_19f,uStack_1a3._3_1_)));
    plVar8[8] = CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,uStack_1b0));
    plVar8[9] = CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,uStack_1ab._3_1_));
    uStack_1b0 = 0;
    uStack_1af = 0;
    uStack_1ab = 0;
    uStack_1a7 = 0;
    uStack_1a3 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    plVar8[0xb] = lStack_198;
    plVar8[0xc] = lStack_190;
    plVar8[0xd] = lStack_188;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    plVar8[0xe] = lStack_180;
    plVar8[0xf] = lStack_178;
    plVar8[0x10] = lStack_170;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    *(undefined4 *)(plVar8 + 0x11) = uStack_168;
    plVar8[0x12] = lStack_160;
    plVar8[0x13] = lStack_158;
    plVar8[0x14] = lStack_150;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    plVar8[0x17] = lStack_138;
    *(undefined4 *)(plVar8 + 0x15) = (undefined4)uStack_148;
    *(undefined4 *)((long)plVar8 + 0xac) = uStack_148._4_4_;
    *(undefined4 *)(plVar8 + 0x16) = (undefined4)uStack_140;
    *(undefined4 *)((long)plVar8 + 0xb4) = uStack_140._4_4_;
    uStack_148 = 0;
    uStack_140 = 0;
    lStack_138 = 0;
    *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_124,CONCAT43(uStack_128,uStack_12c._1_3_));
    plVar8[0x18] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
    uStack_a8 = 0;
    uStack_a0 = (long *)0x0;
    uStack_248 = plVar8;
    func_0x048afd20(lVar3,auStack_258);
    plVar8 = uStack_248;
    if (uStack_248 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_248 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_248 + 0x10))(uStack_248);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = uStack_a0;
    if (uStack_a0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_a0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
        func_0x0412c2d0(plVar8);
      }
    }
    lVar12 = *(long *)(lVar3 + 0x10);
    iVar6 = *(int *)(lVar3 + 0x1c);
    uVar5 = CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)) << 0x10;
    if (iVar6 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != *(int *)(lVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(lVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe)) {
      }
LAB_09a030ba:
      piVar10[4] = piVar10[4] | uVar5;
    }
    else {
      if (iVar6 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != *(int *)(lVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_09a030ba;
      }
      if (iVar6 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | uVar5;
      }
    }
    func_0x048b0bc0(&uStack_1d8);
  }
  func_0x0d8a3a20(param_1);
  bStack_1f0 = 0x18;
  uStack_1ef = 0x73;
  uStack_1ee = 0x6f74;
  uStack_1ec = 0x70;
  uStack_1eb = 0x50;
  uStack_1ea = 0x6f72;
  uStack_1e8 = 0x66;
  uStack_1e7 = 0x69;
  uStack_1e6 = 0x6c;
  uStack_1e5 = 0x65;
  uStack_1e4 = 0x72;
  uStack_1e3 = 0;
  if ((DAT_0f642b70 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642b70), iVar6 != 0)) {
    func_0x09a37340();
    __cxa_atexit(&UNK_048ae800,&DAT_0f642af0,0xf53dab8);
    func_0x0410844d(&DAT_0f642b70);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f642af0 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a03150;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f642af0 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a03150:
    puVar7 = &DAT_0f642af0;
    if (iRam000000000f642b50 != -0x2b3da790) goto LAB_09a031b0;
LAB_09a0317b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a031b0;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a44880(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a0317b;
LAB_09a031b0:
    func_0x09a44880(&uStack_120,param_1,&uStack_1ef,0xc);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a453f0(&bStack_1f0,&uStack_120,&DAT_01255e8f,0x12);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef42d08;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b06c0;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b02c0;
    puStack_218 = &UNK_09a459a0;
    puStack_210 = &UNK_09a45b00;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a456a0(&bStack_1f0);
    cStack_78 = cStack_f0;
    uStack_88 = uStack_100;
    uStack_84 = uStack_fc;
    uStack_80 = (undefined4)uStack_f8;
    uStack_7c = uStack_f8._4_4_;
    uStack_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_a8 = CONCAT44(uStack_11c,uStack_120);
    uStack_a0 = (long *)CONCAT44(uStack_114,uStack_118);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a453f0(&bStack_1f0,&uStack_a8,&UNK_0127c142,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a45ce0;
    puStack_210 = &UNK_09a45eb0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a456a0(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  bStack_1f0 = 0x20;
  uStack_1ef = (undefined1)_DAT_012c7a42;
  uStack_1ee = (undefined2)((uint)_DAT_012c7a42 >> 8);
  uStack_1ec = (undefined1)((uint)_DAT_012c7a42 >> 0x18);
  uStack_1eb = (undefined1)_UNK_012c7a46;
  uStack_1ea = (undefined2)((uint)_UNK_012c7a46 >> 8);
  uStack_1e8 = (undefined1)((uint)_UNK_012c7a46 >> 0x18);
  uStack_1e7 = (undefined1)_UNK_012c7a4a;
  uStack_1e6 = (undefined1)((uint)_UNK_012c7a4a >> 8);
  uStack_1e5 = (undefined1)((uint)_UNK_012c7a4a >> 0x10);
  uStack_1e4 = (undefined1)((uint)_UNK_012c7a4a >> 0x18);
  uStack_1e3 = (undefined1)_UNK_012c7a4e;
  uStack_1e2 = (undefined1)((uint)_UNK_012c7a4e >> 8);
  uStack_1e1 = (undefined1)((uint)_UNK_012c7a4e >> 0x10);
  uStack_1e0 = (undefined1)((uint)_UNK_012c7a4e >> 0x18);
  uStack_1df = 0;
  if ((DAT_0f642c28 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642c28), iVar6 != 0)) {
    func_0x09a38800();
    __cxa_atexit(&UNK_048ae800,&DAT_0f642ba8,0xf53dab8);
    func_0x0410844d(&DAT_0f642c28);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f642ba8 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a03500;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f642ba8 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a03500:
    puVar7 = &DAT_0f642ba8;
    if (iRam000000000f642c08 != -0x2b3da790) goto LAB_09a03560;
LAB_09a0352b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a03560;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a46090(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a0352b;
LAB_09a03560:
    func_0x09a46090(&uStack_120,param_1,&uStack_1ef,0x10);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a46680(&bStack_1f0,CONCAT44(uStack_11c,uStack_120) + 0x18);
    if (uStack_1d8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                             CONCAT13(uStack_1dd,
                                                      CONCAT12(uStack_1de,
                                                               CONCAT11(uStack_1df,uStack_1e0)))) +
                                   0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_1d8) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar3 = *(long *)(piVar10 + 0xc);
      while (lVar3 != CONCAT17(uStack_1e1,
                               CONCAT16(uStack_1e2,
                                        CONCAT15(uStack_1e3,
                                                 CONCAT14(uStack_1e4,
                                                          CONCAT13(uStack_1e5,
                                                                   CONCAT12(uStack_1e6,
                                                                            CONCAT11(uStack_1e7,
                                                                                     uStack_1e8)))))
                                       ))) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar3 = *(long *)(piVar10 + 0xc);
      }
LAB_09a0360f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_1d8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                               CONCAT13(uStack_1dd,
                                                        CONCAT12(uStack_1de,
                                                                 CONCAT11(uStack_1df,uStack_1e0))))
                                     + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_1d8) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_09a0360f;
      }
      if (uStack_1d8._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1dc,
                                   CONCAT13(uStack_1dd,
                                            CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x09a46c60(&bStack_1f0,&uStack_120,&UNK_0119a8fa,0xb,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ce8;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_0490ce30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_0490cb20;
    puStack_218 = &UNK_09a47220;
    puStack_210 = &UNK_09a47380;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a46f20(&bStack_1f0);
    cStack_b8 = cStack_f0;
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    uStack_c0 = (undefined4)uStack_f8;
    uStack_bc = uStack_f8._4_4_;
    uStack_d8 = uStack_110;
    uStack_d4 = uStack_10c;
    uStack_d0 = uStack_108;
    uStack_cc = uStack_104;
    uStack_e8 = uStack_120;
    uStack_e4 = uStack_11c;
    uStack_e0 = uStack_118;
    uStack_dc = uStack_114;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a46680(&bStack_1f0,CONCAT44(uStack_e4,uStack_e8) + 0x18);
    if (uStack_1d8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                             CONCAT13(uStack_1dd,
                                                      CONCAT12(uStack_1de,
                                                               CONCAT11(uStack_1df,uStack_1e0)))) +
                                   0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_1d8) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar3 = *(long *)(piVar10 + 0xc);
      while (lVar3 != CONCAT17(uStack_1e1,
                               CONCAT16(uStack_1e2,
                                        CONCAT15(uStack_1e3,
                                                 CONCAT14(uStack_1e4,
                                                          CONCAT13(uStack_1e5,
                                                                   CONCAT12(uStack_1e6,
                                                                            CONCAT11(uStack_1e7,
                                                                                     uStack_1e8)))))
                                       ))) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar3 = *(long *)(piVar10 + 0xc);
      }
LAB_09a0384f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_1d8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                               CONCAT13(uStack_1dd,
                                                        CONCAT12(uStack_1de,
                                                                 CONCAT11(uStack_1df,uStack_1e0))))
                                     + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != (int)uStack_1d8) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_09a0384f;
      }
      if (uStack_1d8._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1dc,
                                   CONCAT13(uStack_1dd,
                                            CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x09a46c60(&bStack_1f0,&uStack_e8,&UNK_012a2167,7,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a47560;
    puStack_210 = &UNK_09a47730;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a46f20(&bStack_1f0);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
    uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a46c60(&bStack_1f0,&uStack_a8,&UNK_011d1a2f,4,0);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f1cf288;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_09a48790;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_09a48450;
    puStack_218 = &UNK_09a487a0;
    puStack_210 = &UNK_09a488f0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a46f20(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  bStack_1f0 = 0x14;
  uStack_1ef = 0x53;
  uStack_1ee = 0x6174;
  uStack_1ec = 0x74;
  uStack_1eb = 0x45;
  uStack_1ea = 0x6576;
  uStack_1e8 = 0x6e;
  uStack_1e7 = 0x74;
  uStack_1e6 = 0x32;
  uStack_1e5 = 0;
  if ((DAT_0f6427d8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6427d8), iVar6 != 0)) {
    func_0x09a307b0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f642758,0xf53dab8);
    func_0x0410844d(&DAT_0f6427d8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f642758 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a03b70;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f642758 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a03b70:
    puVar7 = &DAT_0f642758;
    if (iRam000000000f6427b8 != -0x2b3da790) goto LAB_09a03bd0;
LAB_09a03b9b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a03bd0;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a48e60(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a03b9b;
LAB_09a03bd0:
    func_0x09a48e60(&uStack_120,param_1,&uStack_1ef,10);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a499f0(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a49f70;
    puStack_210 = &UNK_09a4a140;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a49c70(&bStack_1f0);
    cStack_b8 = cStack_f0;
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    uStack_c0 = (undefined4)uStack_f8;
    uStack_bc = uStack_f8._4_4_;
    uStack_d8 = uStack_110;
    uStack_d4 = uStack_10c;
    uStack_d0 = uStack_108;
    uStack_cc = uStack_104;
    uStack_e8 = uStack_120;
    uStack_e4 = uStack_11c;
    uStack_e0 = uStack_118;
    uStack_dc = uStack_114;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a499f0(&bStack_1f0,&uStack_e8,&UNK_011a7694,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f01ae00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_06046510;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_0602fbb0;
    puStack_218 = &UNK_09a4a320;
    puStack_210 = &UNK_09a4a480;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a49c70(&bStack_1f0);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
    uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a499f0(&bStack_1f0,&uStack_a8,&UNK_013f6543,5);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f1cd960;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_09a4e430;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_09a4cec0;
    puStack_218 = &UNK_09a4e4f0;
    puStack_210 = &UNK_09a4e7f0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a49c70(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  func_0x09a0fb20(param_1);
  bStack_1f0 = 0x16;
  uStack_1ef = 0x53;
  uStack_1ee = 0x6863;
  uStack_1ec = 0x65;
  uStack_1eb = 0x6d;
  uStack_1ea = 0x4561;
  uStack_1e8 = 0x76;
  uStack_1e7 = 0x65;
  uStack_1e6 = 0x6e;
  uStack_1e5 = 0x74;
  uStack_1e4 = 0;
  if ((DAT_0f642890 == '\0') && (iVar6 = FUN_04108328(&DAT_0f642890), iVar6 != 0)) {
    func_0x09a326e0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f642810,0xf53dab8);
    func_0x0410844d(&DAT_0f642890);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f642810 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a04090;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f642810 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a04090:
    puVar7 = &DAT_0f642810;
    if (iRam000000000f642870 != -0x2b3da790) goto LAB_09a040f0;
LAB_09a040bb:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a040f0;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a4ec70(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a040bb;
LAB_09a040f0:
    func_0x09a4ec70(&uStack_120,param_1,&uStack_1ef,0xb);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a4f800(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a4fdb0;
    puStack_210 = &UNK_09a4ff80;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a4fab0(&bStack_1f0);
    cStack_78 = cStack_f0;
    uStack_88 = uStack_100;
    uStack_84 = uStack_fc;
    uStack_80 = (undefined4)uStack_f8;
    uStack_7c = uStack_f8._4_4_;
    uStack_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_a8 = CONCAT44(uStack_11c,uStack_120);
    uStack_a0 = (long *)CONCAT44(uStack_114,uStack_118);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a4f800(&bStack_1f0,&uStack_a8,&UNK_012e14ac,0xb);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f1cdb50;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_09a53910;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_09a52600;
    puStack_218 = &UNK_09a539d0;
    puStack_210 = &UNK_09a53cd0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a4fab0(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  bStack_1f0 = 0x1e;
  uStack_1ef = 0x50;
  uStack_1ee = 0x6f72;
  uStack_1ec = 0x66;
  uStack_1eb = 0x69;
  uStack_1ea = 0x656c;
  uStack_1e8 = 0x72;
  uStack_1e7 = 0x43;
  uStack_1e6 = 0x61;
  uStack_1e5 = 0x70;
  uStack_1e4 = 0x74;
  uStack_1e3 = 0x75;
  uStack_1e2 = 0x72;
  uStack_1e1 = 0x65;
  uStack_1e0 = 0;
  if ((DAT_0f643278 == '\0') && (iVar6 = FUN_04108328(&DAT_0f643278), iVar6 != 0)) {
    func_0x09a54210();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6431f8,0xf53dab8);
    func_0x0410844d(&DAT_0f643278);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6431f8 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a04440;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f6431f8 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a04440:
    puVar7 = &DAT_0f6431f8;
    if (iRam000000000f643258 != -0x2b3da790) goto LAB_09a044a0;
LAB_09a0446b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a044a0;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a549c0(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a0446b;
LAB_09a044a0:
    func_0x09a549c0(&uStack_120,param_1,&uStack_1ef,0xf);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a55550(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a55b00;
    puStack_210 = &UNK_09a55cd0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a55800(&bStack_1f0);
    cStack_b8 = cStack_f0;
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    uStack_c0 = (undefined4)uStack_f8;
    uStack_bc = uStack_f8._4_4_;
    uStack_d8 = uStack_110;
    uStack_d4 = uStack_10c;
    uStack_d0 = uStack_108;
    uStack_cc = uStack_104;
    uStack_e8 = uStack_120;
    uStack_e4 = uStack_11c;
    uStack_e0 = uStack_118;
    uStack_dc = uStack_114;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a55550(&bStack_1f0,&uStack_e8,&UNK_012fa765,0x11);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a55eb0;
    puStack_210 = &UNK_09a56080;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a55800(&bStack_1f0);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
    uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a55550(&bStack_1f0,&uStack_a8,&UNK_014b7d9d,0xc);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a56260;
    puStack_210 = &UNK_09a56430;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a55800(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  bStack_1f0 = 0x22;
  uStack_1ef = (undefined1)_DAT_0122c725;
  uStack_1ee = (undefined2)((uint)_DAT_0122c725 >> 8);
  uStack_1ec = (undefined1)((uint)_DAT_0122c725 >> 0x18);
  uStack_1eb = (undefined1)_UNK_0122c729;
  uStack_1ea = (undefined2)((uint)_UNK_0122c729 >> 8);
  uStack_1e8 = (undefined1)((uint)_UNK_0122c729 >> 0x18);
  uStack_1e7 = (undefined1)_UNK_0122c72d;
  uStack_1e6 = (undefined1)((uint)_UNK_0122c72d >> 8);
  uStack_1e5 = (undefined1)((uint)_UNK_0122c72d >> 0x10);
  uStack_1e4 = (undefined1)((uint)_UNK_0122c72d >> 0x18);
  uStack_1e3 = (undefined1)_UNK_0122c731;
  uStack_1e2 = (undefined1)((uint)_UNK_0122c731 >> 8);
  uStack_1e1 = (undefined1)((uint)_UNK_0122c731 >> 0x10);
  uStack_1e0 = (undefined1)((uint)_UNK_0122c731 >> 0x18);
  uStack_1df = 0x74;
  uStack_1de = 0;
  if ((DAT_0f643330 == '\0') && (iVar6 = FUN_04108328(&DAT_0f643330), iVar6 != 0)) {
    func_0x09a566d0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6432b0,0xf53dab8);
    func_0x0410844d(&DAT_0f643330);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6432b0 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a04920;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f6432b0 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a04920:
    puVar7 = &DAT_0f6432b0;
    if (iRam000000000f643310 != -0x2b3da790) goto LAB_09a04980;
LAB_09a0494b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a04980;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a56e80(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a0494b;
LAB_09a04980:
    func_0x09a56e80(&uStack_120,param_1,&uStack_1ef,0x11);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a57a10(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a57fc0;
    puStack_210 = &UNK_09a58190;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a57cc0(&bStack_1f0);
    cStack_b8 = cStack_f0;
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    uStack_c0 = (undefined4)uStack_f8;
    uStack_bc = uStack_f8._4_4_;
    uStack_d8 = uStack_110;
    uStack_d4 = uStack_10c;
    uStack_d0 = uStack_108;
    uStack_cc = uStack_104;
    uStack_e8 = uStack_120;
    uStack_e4 = uStack_11c;
    uStack_e0 = uStack_118;
    uStack_dc = uStack_114;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a57a10(&bStack_1f0,&uStack_e8,&UNK_0139bdd9,8);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ce8;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_0490ce30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_0490cb20;
    puStack_218 = &UNK_09a58370;
    puStack_210 = &UNK_09a584d0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a57cc0(&bStack_1f0);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
    uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a57a10(&bStack_1f0,&uStack_a8,&UNK_01374325,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a586b0;
    puStack_210 = &UNK_09a58880;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a57cc0(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  bStack_1f0 = 0x14;
  uStack_1ef = 0x50;
  uStack_1ee = 0x6972;
  uStack_1ec = 0x6e;
  uStack_1eb = 0x74;
  uStack_1ea = 0x7645;
  uStack_1e8 = 0x65;
  uStack_1e7 = 0x6e;
  uStack_1e6 = 0x74;
  uStack_1e5 = 0;
  if ((DAT_0f6433e8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6433e8), iVar6 != 0)) {
    func_0x09a58b20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f643368,0xf53dab8);
    func_0x0410844d(&DAT_0f6433e8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f643368 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a04e20;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f643368 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a04e20:
    puVar7 = &DAT_0f643368;
    if (iRam000000000f6433c8 != -0x2b3da790) goto LAB_09a04e80;
LAB_09a04e4b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a04e80;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a592d0(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a04e4b;
LAB_09a04e80:
    func_0x09a592d0(&uStack_120,param_1,&uStack_1ef,10);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a59e70(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a5a420;
    puStack_210 = &UNK_09a5a5f0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5a120(&bStack_1f0);
    cStack_b8 = cStack_f0;
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    uStack_c0 = (undefined4)uStack_f8;
    uStack_bc = uStack_f8._4_4_;
    uStack_d8 = uStack_110;
    uStack_d4 = uStack_10c;
    uStack_d0 = uStack_108;
    uStack_cc = uStack_104;
    uStack_e8 = uStack_120;
    uStack_e4 = uStack_11c;
    uStack_e0 = uStack_118;
    uStack_dc = uStack_114;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a59e70(&bStack_1f0,&uStack_e8,&UNK_0139bdd9,8);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ce8;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_0490ce30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_0490cb20;
    puStack_218 = &UNK_09a5a7d0;
    puStack_210 = &UNK_09a5a930;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5a120(&bStack_1f0);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
    uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a59e70(&bStack_1f0,&uStack_a8,&UNK_01374325,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a5ab10;
    puStack_210 = &UNK_09a5ace0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5a120(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  if ((DAT_0f6434a0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6434a0), iVar6 != 0)) {
    func_0x09a5af80();
    __cxa_atexit(&UNK_048ae800,&DAT_0f643420,0xf53dab8);
    func_0x0410844d(&DAT_0f6434a0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f643420 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a05300;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f643420 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a05300:
    puVar7 = &DAT_0f643420;
    if (iRam000000000f643480 != -0x2b3da790) goto LAB_09a0536d;
LAB_09a0532b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a0536d;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a5b630(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a0532b;
LAB_09a0536d:
    func_0x09a5b630(&uStack_120,param_1,&UNK_011c2807,0xe);
  }
  if (cStack_f0 == '\0') {
    func_0x09a5c190(&bStack_1f0,&uStack_120,&UNK_01410416,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a5c740;
    puStack_210 = &UNK_09a5c900;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5c440(&bStack_1f0);
    cStack_78 = cStack_f0;
    uStack_88 = uStack_100;
    uStack_84 = uStack_fc;
    uStack_80 = (undefined4)uStack_f8;
    uStack_7c = uStack_f8._4_4_;
    uStack_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_a8 = CONCAT44(uStack_11c,uStack_120);
    uStack_a0 = (long *)CONCAT44(uStack_114,uStack_118);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a5c190(&bStack_1f0,&uStack_a8,&UNK_01450e5f,0xb);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a5cad0;
    puStack_210 = &UNK_09a5cca0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5c440(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  bStack_1f0 = 0x1a;
  uStack_1ef = 0x50;
  uStack_1ee = 0x6f72;
  uStack_1ec = 0x74;
  uStack_1eb = 0x6f;
  uStack_1ea = 0x6f63;
  uStack_1e8 = 0x6c;
  uStack_1e7 = 0x45;
  uStack_1e6 = 0x76;
  uStack_1e5 = 0x65;
  uStack_1e4 = 0x6e;
  uStack_1e3 = 0x74;
  uStack_1e2 = 0;
  if ((DAT_0f643558 == '\0') && (iVar6 = FUN_04108328(&DAT_0f643558), iVar6 != 0)) {
    func_0x09a5cf40();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6434d8,0xf53dab8);
    func_0x0410844d(&DAT_0f643558);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6434d8 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a056a0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f6434d8 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a056a0:
    puVar7 = &DAT_0f6434d8;
    if (iRam000000000f643538 != -0x2b3da790) goto LAB_09a05700;
LAB_09a056cb:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a05700;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a5dca0(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a056cb;
LAB_09a05700:
    func_0x09a5dca0(&uStack_120,param_1,&uStack_1ef,0xd);
    if ((bStack_1f0 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_1dc,
                               CONCAT13(uStack_1dd,
                                        CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))),
                      CONCAT26(uStack_1ea,
                               CONCAT15(uStack_1eb,
                                        CONCAT14(uStack_1ec,
                                                 CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,bStack_1f0)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  if (cStack_f0 == '\0') {
    func_0x09a5e840(&bStack_1f0,&uStack_120,&UNK_0142a5c6,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_048b3f30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_048b2190;
    puStack_218 = &UNK_09a5edf0;
    puStack_210 = &UNK_09a5efc0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5eaf0(&bStack_1f0);
    cStack_38 = cStack_f0;
    uStack_48 = uStack_100;
    uStack_44 = uStack_fc;
    uStack_40 = (undefined4)uStack_f8;
    uStack_3c = uStack_f8._4_4_;
    uStack_58 = uStack_110;
    uStack_54 = uStack_10c;
    uStack_50 = uStack_108;
    uStack_4c = uStack_104;
    uStack_68 = uStack_120;
    uStack_64 = uStack_11c;
    uStack_60 = uStack_118;
    uStack_5c = uStack_114;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a5e840(&bStack_1f0,&uStack_68,&UNK_013236a8,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ce8;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_0490ce30;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_0490cb20;
    puStack_218 = &UNK_09a5f1a0;
    puStack_210 = &UNK_09a5f300;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5eaf0(&bStack_1f0);
    cStack_b8 = cStack_38;
    uStack_c8 = uStack_48;
    uStack_c4 = uStack_44;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    uStack_d8 = uStack_58;
    uStack_d4 = uStack_54;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
    uStack_e8 = uStack_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a5e840(&bStack_1f0,&uStack_e8,&UNK_013673f6,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f1cdf00;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_09a62d60;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_09a61620;
    puStack_218 = &UNK_09a62e20;
    puStack_210 = &UNK_09a630f0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5eaf0(&bStack_1f0);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
    uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
    func_0x048b0bc0(&uStack_1d8);
    func_0x09a5e840(&bStack_1f0,&uStack_a8,&UNK_011a7699,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_1d8 != (long *)0x0) {
      lVar3 = *uStack_1d8;
      uStack_1d8 = plVar8;
      (**(code **)(lVar3 + 8))();
      plVar8 = uStack_1d8;
    }
    uStack_1d8 = plVar8;
    auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_04906f70;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_04906c50;
    puStack_218 = &UNK_09a63570;
    puStack_210 = &UNK_09a636d0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
                    ,auStack_258);
    plVar8 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x09a5eaf0(&bStack_1f0);
    func_0x048b0bc0(&uStack_1d8);
  }
  if ((DAT_0f6437e0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6437e0), iVar6 != 0)) {
    func_0x09a63970();
    __cxa_atexit(&UNK_048ae800,&DAT_0f643760,0xf53dab8);
    func_0x0410844d(&DAT_0f6437e0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f643760 + 4)) * 8);
  do {
    lVar3 = *plVar8;
    if (lVar3 == -1) goto LAB_09a05cf0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f643760 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_09a05cf0:
    puVar7 = &DAT_0f643760;
    if (iRam000000000f6437c0 != -0x2b3da790) goto LAB_09a05d5d;
LAB_09a05d1b:
    lVar3 = *(long *)(puVar7 + 0x68);
    if (lVar3 == 0) goto LAB_09a05d5d;
    bVar13 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar12 = lVar3 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar3 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x09a64010(&uStack_120,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_09a05d1b;
LAB_09a05d5d:
    func_0x09a64010(&uStack_120,param_1,&UNK_0127c150,0x11);
  }
  if (cStack_f0 != '\0') {
    return;
  }
  func_0x09a64600(&bStack_1f0,CONCAT44(uStack_11c,uStack_120) + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                           CONCAT13(uStack_1dd,
                                                    CONCAT12(uStack_1de,
                                                             CONCAT11(uStack_1df,uStack_1e0)))) +
                                 0x78) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != (int)uStack_1d8) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    lVar3 = *(long *)(piVar10 + 0xc);
    while (lVar3 != CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
          ) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar3 = *(long *)(piVar10 + 0xc);
    }
LAB_09a05e4f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_1d8._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                             CONCAT13(uStack_1dd,
                                                      CONCAT12(uStack_1de,
                                                               CONCAT11(uStack_1df,uStack_1e0)))) +
                                   0x78) + 0x48);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_1d8) {
        piVar10 = piVar10 + 0x1a;
        iVar6 = *piVar10;
      }
      goto LAB_09a05e4f;
    }
    if (uStack_1d8._4_4_ == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_1dc,
                                 CONCAT13(uStack_1dd,
                                          CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))) +
                       0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x09a64bd0(&bStack_1f0,&uStack_120,&UNK_0119a8fa,0xb,0x10);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef46ce8;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = plVar8;
    (**(code **)(lVar3 + 8))();
    plVar8 = uStack_1d8;
  }
  uStack_1d8 = plVar8;
  auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_0490ce30;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_0490cb20;
  puStack_218 = &UNK_09a65190;
  puStack_210 = &UNK_09a652f0;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(CONCAT17(uStack_1e1,
                           CONCAT16(uStack_1e2,
                                    CONCAT15(uStack_1e3,
                                             CONCAT14(uStack_1e4,
                                                      CONCAT13(uStack_1e5,
                                                               CONCAT12(uStack_1e6,
                                                                        CONCAT11(uStack_1e7,
                                                                                 uStack_1e8))))))),
                  auStack_258);
  plVar8 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x09a64e90(&bStack_1f0);
  cStack_38 = cStack_f0;
  uStack_48 = uStack_100;
  uStack_44 = uStack_fc;
  uStack_40 = (undefined4)uStack_f8;
  uStack_3c = uStack_f8._4_4_;
  uStack_58 = uStack_110;
  uStack_54 = uStack_10c;
  uStack_50 = uStack_108;
  uStack_4c = uStack_104;
  uStack_68 = uStack_120;
  uStack_64 = uStack_11c;
  uStack_60 = uStack_118;
  uStack_5c = uStack_114;
  func_0x048b0bc0(&uStack_1d8);
  func_0x09a64600(&bStack_1f0,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                           CONCAT13(uStack_1dd,
                                                    CONCAT12(uStack_1de,
                                                             CONCAT11(uStack_1df,uStack_1e0)))) +
                                 0x78) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != (int)uStack_1d8) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    lVar3 = *(long *)(piVar10 + 0xc);
    while (lVar3 != CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
          ) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar3 = *(long *)(piVar10 + 0xc);
    }
LAB_09a0608f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_1d8._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                             CONCAT13(uStack_1dd,
                                                      CONCAT12(uStack_1de,
                                                               CONCAT11(uStack_1df,uStack_1e0)))) +
                                   0x78) + 0x48);
      iVar6 = *piVar10;
      while (iVar6 != (int)uStack_1d8) {
        piVar10 = piVar10 + 0x1a;
        iVar6 = *piVar10;
      }
      goto LAB_09a0608f;
    }
    if (uStack_1d8._4_4_ == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_1dc,
                                 CONCAT13(uStack_1dd,
                                          CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))) +
                       0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x09a64bd0(&bStack_1f0,&uStack_68,&UNK_012f24dc,7,0x10);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef46ef8;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = plVar8;
    (**(code **)(lVar3 + 8))();
    plVar8 = uStack_1d8;
  }
  uStack_1d8 = plVar8;
  auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_04906f70;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_04906c50;
  puStack_218 = &UNK_09a654d0;
  puStack_210 = &UNK_09a65630;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(CONCAT17(uStack_1e1,
                           CONCAT16(uStack_1e2,
                                    CONCAT15(uStack_1e3,
                                             CONCAT14(uStack_1e4,
                                                      CONCAT13(uStack_1e5,
                                                               CONCAT12(uStack_1e6,
                                                                        CONCAT11(uStack_1e7,
                                                                                 uStack_1e8))))))),
                  auStack_258);
  plVar8 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x09a64e90(&bStack_1f0);
  cStack_b8 = cStack_38;
  uStack_c8 = uStack_48;
  uStack_c4 = uStack_44;
  uStack_c0 = uStack_40;
  uStack_bc = uStack_3c;
  uStack_d8 = uStack_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  uStack_e8 = uStack_68;
  uStack_e4 = uStack_64;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  func_0x048b0bc0(&uStack_1d8);
  func_0x09a64600(&bStack_1f0,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                           CONCAT13(uStack_1dd,
                                                    CONCAT12(uStack_1de,
                                                             CONCAT11(uStack_1df,uStack_1e0)))) +
                                 0x78) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != (int)uStack_1d8) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    lVar3 = *(long *)(piVar10 + 0xc);
    while (lVar3 != CONCAT17(uStack_1e1,
                             CONCAT16(uStack_1e2,
                                      CONCAT15(uStack_1e3,
                                               CONCAT14(uStack_1e4,
                                                        CONCAT13(uStack_1e5,
                                                                 CONCAT12(uStack_1e6,
                                                                          CONCAT11(uStack_1e7,
                                                                                   uStack_1e8)))))))
          ) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar3 = *(long *)(piVar10 + 0xc);
    }
  }
  else {
    if (uStack_1d8._4_4_ != 1) {
      if (uStack_1d8._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_1dc,
                                   CONCAT13(uStack_1dd,
                                            CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
      goto LAB_09a062c3;
    }
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_1dc,
                                           CONCAT13(uStack_1dd,
                                                    CONCAT12(uStack_1de,
                                                             CONCAT11(uStack_1df,uStack_1e0)))) +
                                 0x78) + 0x48);
    iVar6 = *piVar10;
    while (iVar6 != (int)uStack_1d8) {
      piVar10 = piVar10 + 0x1a;
      iVar6 = *piVar10;
    }
  }
  *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
LAB_09a062c3:
  func_0x09a64bd0(&bStack_1f0,&uStack_e8,&UNK_014b7daa,0x10,0x10);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef44b00;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = plVar8;
    (**(code **)(lVar3 + 8))();
    plVar8 = uStack_1d8;
  }
  uStack_1d8 = plVar8;
  auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_048b3f30;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_048b2190;
  puStack_218 = &UNK_09a65810;
  puStack_210 = &UNK_09a659e0;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(CONCAT17(uStack_1e1,
                           CONCAT16(uStack_1e2,
                                    CONCAT15(uStack_1e3,
                                             CONCAT14(uStack_1e4,
                                                      CONCAT13(uStack_1e5,
                                                               CONCAT12(uStack_1e6,
                                                                        CONCAT11(uStack_1e7,
                                                                                 uStack_1e8))))))),
                  auStack_258);
  plVar8 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x09a64e90(&bStack_1f0);
  cStack_78 = cStack_b8;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  uStack_98 = uStack_d8;
  uStack_94 = uStack_d4;
  uStack_90 = uStack_d0;
  uStack_8c = uStack_cc;
  uStack_a8 = CONCAT44(uStack_e4,uStack_e8);
  uStack_a0 = (long *)CONCAT44(uStack_dc,uStack_e0);
  func_0x048b0bc0(&uStack_1d8);
  func_0x09a64bd0(&bStack_1f0,&uStack_a8,&UNK_011d1a2f,4,0);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f1cf288;
  if (uStack_1d8 != (long *)0x0) {
    lVar3 = *uStack_1d8;
    uStack_1d8 = puVar9;
    (**(code **)(lVar3 + 8))();
    puVar9 = uStack_1d8;
  }
  uStack_1d8 = puVar9;
  auStack_258[0] = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_09a48790;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &UNK_09a48450;
  puStack_218 = &UNK_09a65bc0;
  puStack_210 = &UNK_09a65d10;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(CONCAT17(uStack_1e1,
                           CONCAT16(uStack_1e2,
                                    CONCAT15(uStack_1e3,
                                             CONCAT14(uStack_1e4,
                                                      CONCAT13(uStack_1e5,
                                                               CONCAT12(uStack_1e6,
                                                                        CONCAT11(uStack_1e7,
                                                                                 uStack_1e8))))))),
                  auStack_258);
  plVar8 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x09a64e90(&bStack_1f0);
  func_0x048b0bc0(&uStack_1d8);
  return;
}



/* ---- referenced strings ----
 * 0x122c725  NotificationEvent
 * 0x1255e8f  target_module_uuid
 * 0x12c7a42  debugger-request
 * 0x14d31a8  minecraftCommand
 */
