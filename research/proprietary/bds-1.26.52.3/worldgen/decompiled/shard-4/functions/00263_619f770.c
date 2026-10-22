/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629f770 (ELF vaddr 0x619f770)
 * Label: caller-of-callee
 * Body:  [[0629f770, 062a098a] [062a0990, 062a0ae3] [062a0af0, 062a0c3d] [062a0c40, 062a1084] [062a1090, 062a1174] [062a128b, 062a134c]]
 * Ghidra: FUN_0629f770
 */


/* WARNING: Possible PIC construction at 0x0629f96b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0629f970) */
/* WARNING: Removing unreachable block (ram,0x062a05fb) */
/* WARNING: Removing unreachable block (ram,0x062a05bc) */
/* WARNING: Removing unreachable block (ram,0x062a05d3) */
/* WARNING: Removing unreachable block (ram,0x062a05b1) */
/* WARNING: Removing unreachable block (ram,0x062a02dd) */
/* WARNING: Removing unreachable block (ram,0x062a02f9) */
/* WARNING: Removing unreachable block (ram,0x062a030c) */
/* WARNING: Removing unreachable block (ram,0x062a0321) */
/* WARNING: Removing unreachable block (ram,0x062a0334) */
/* WARNING: Removing unreachable block (ram,0x062a0349) */
/* WARNING: Removing unreachable block (ram,0x062a0805) */
/* WARNING: Removing unreachable block (ram,0x062a05de) */
/* WARNING: Removing unreachable block (ram,0x062a05f5) */
/* WARNING: Removing unreachable block (ram,0x062a0616) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0629f770(undefined8 *param_1,long *param_2,byte *param_3)

{
  char *pcVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  int iVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  ulong uVar28;
  char *pcVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined1 (*pauVar33) [16];
  byte *pbVar34;
  byte *pbVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [16];
  ulong *puVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  undefined1 *puStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  char *pcStack_250;
  undefined1 auStack_248 [24];
  undefined8 uStack_230;
  ulong uStack_228;
  long lStack_220;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  char cStack_1d8;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  char cStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  ulong uStack_128;
  byte *pbStack_118;
  ulong uStack_110;
  undefined1 auStack_108 [16];
  long lStack_f8;
  undefined1 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  char cStack_d8;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined1 auStack_a8 [16];
  char *pcStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [16];
  char cStack_68;
  byte *pbStack_58;
  ulong uStack_50;
  long *plStack_48;
  byte *pbStack_40;
  undefined1 auStack_38 [8];
  
  puVar30 = (undefined8 *)auStack_278;
  if ((param_3[0x18] & 1) == 0) {
    lStack_b8 = *(long *)(param_3 + 0x28);
    uStack_c8 = *(ulong *)(param_3 + 0x18);
    uStack_c0 = *(ulong *)(param_3 + 0x20);
  }
  else {
    uStack_280 = 0x629f7dd;
    func_0x0412e5e0(&uStack_c8,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  }
  bVar20 = (byte)uStack_c8 & 1;
  uVar22 = uStack_c0;
  if ((uStack_c8 & 1) == 0) {
    uVar22 = (ulong)((byte)uStack_c8 >> 1);
  }
  if (uVar22 < 5) goto LAB_062a1044;
  lVar31 = lStack_b8;
  if (bVar20 == 0) {
    lVar31 = (long)&uStack_c8 + 1;
  }
  if (*(char *)(lVar31 + -1 + uVar22) != 'n' || *(int *)(lVar31 + -5 + uVar22) != 0x6f736a2e)
  goto LAB_062a1044;
  pbStack_58 = (byte *)*param_2;
  plVar3 = (long *)param_2[1];
  pbStack_40 = (byte *)param_2[2];
  auStack_248._0_16_ = (undefined1  [16])0x0;
  pbVar35 = param_3 + 1;
  pbVar34 = *(byte **)(param_3 + 0x10);
  uVar22 = *(ulong *)(param_3 + 8);
  if ((*param_3 & 1) == 0) {
    pbVar34 = pbVar35;
    uVar22 = (ulong)(*param_3 >> 1);
  }
  if (DAT_0f7b8fb8 == '\0') {
    uStack_280 = 0x62a10ff;
    iVar21 = FUN_04108328(&DAT_0f7b8fb8);
    if (iVar21 != 0) {
      uStack_280 = 0x62a1113;
      func_0x0ee5ea20(&DAT_0f7b8f98);
      uStack_280 = 0x62a112d;
      __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      uStack_280 = 0x62a1139;
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  uStack_280 = 0x629f8b9;
  pbStack_118 = pbVar34;
  uStack_110 = uVar22;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(auStack_218,&DAT_0f7b8f98,&pbStack_118,auStack_248,0x121,0);
  cStack_188 = cStack_1d8;
  if (cStack_1d8 == '\0') {
    uStack_1c8 = auStack_218._0_8_;
    puStack_1c0 = (undefined *)auStack_218._8_8_;
    lStack_1b8 = auStack_208._0_8_;
    lStack_1b0 = auStack_208._8_8_;
    lStack_1a8 = lStack_1f8;
    lStack_1a0 = auStack_1f0._0_8_;
    lStack_198 = auStack_1f0._8_8_;
    lStack_190 = lStack_1e0;
    puVar32 = &uStack_1c8;
    puVar30 = &uStack_280;
    uStack_280 = 0x629f970;
    goto SUB_062a12c0;
  }
  auStack_278 = (undefined1  [16])0x0;
  puStack_268 = (undefined1 *)0x0;
  uStack_50 = 0;
  uVar26 = auStack_248._0_8_;
  lVar31 = *(long *)(auStack_248._0_8_ + 0x18);
  plStack_48 = plVar3;
  if (lVar31 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = lVar31 + 8;
    uStack_280 = 0x629f910;
    func_0x0412d770(lVar24);
  }
  uStack_280 = 0x629fa44;
  (**(code **)(*(long *)uVar26 + 0x78))(&pbStack_118,uVar26,&uStack_50);
  if (lVar31 != 0) {
    uStack_280 = 0x629fa51;
    func_0x0412d790(lVar24);
  }
  cStack_1d8 = cStack_d8;
  if (cStack_d8 == '\0') {
    auStack_218._8_8_ = uStack_110;
    auStack_218._0_8_ = pbStack_118;
    auStack_208._0_8_ = auStack_108._0_8_;
    auStack_208._8_8_ = auStack_108._8_8_;
    lStack_1f8 = lStack_f8;
    auStack_1f0._0_8_ = puStack_f0;
    auStack_1f0._8_8_ = lStack_e8;
    lStack_1e0 = lStack_e0;
    uStack_280 = 0x629fafb;
    func_0x062a1380(auStack_218);
    auStack_138._8_8_ = lStack_1e0;
    auStack_138._0_8_ = auStack_1f0._8_8_;
    auStack_148._8_8_ = auStack_1f0._0_8_;
    auStack_148._0_8_ = lStack_1f8;
    auStack_158._8_8_ = auStack_208._8_8_;
    auStack_158._0_8_ = auStack_208._0_8_;
    pbStack_118 = (byte *)auStack_218._0_8_;
    uStack_110 = auStack_218._8_8_;
    auStack_208 = (undefined1  [16])0x0;
    lStack_1f8 = 0;
    auStack_1f0 = (undefined1  [16])0x0;
    lStack_1e0 = 0;
    auStack_108 = (undefined1  [16])0x0;
    lStack_f8 = 0;
    puStack_f0 = (undefined1 *)0x0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    uStack_128 = uStack_128 & 0xffffffffffffff00;
    auStack_168 = auStack_218;
    uStack_280 = 0x629fbad;
    func_0x048e6d60(&pbStack_118);
joined_r0x0629fbb5:
    if (cStack_1d8 == '\0') {
      uVar26 = auStack_1f0._0_8_;
      if (auStack_1f0._0_8_ != 0) {
        lVar31 = auStack_1f0._8_8_;
        while (uVar26 != lVar31) {
          lVar31 = lVar31 + -0x40;
          uStack_280 = 0x62a0bfc;
          FUN_048b3e80(lVar31);
        }
        auStack_1f0._8_8_ = uVar26;
        uStack_280 = 0x62a0c21;
        func_0x0412a280(auStack_1f0._0_8_,lStack_1e0 - auStack_1f0._0_8_);
      }
      uVar26 = auStack_208._0_8_;
      if (auStack_208._0_8_ != 0) {
        for (lVar31 = auStack_208._8_8_; uVar26 != lVar31; lVar31 = lVar31 + -0x50) {
          if ((*(char *)(lVar31 + -8) == '\x01') && ((*(byte *)(lVar31 + -0x30) & 1) != 0)) {
            uStack_280 = 0x62a0c68;
            func_0x0412a280(*(undefined8 *)(lVar31 + -0x20),
                            *(ulong *)(lVar31 + -0x30) & 0xfffffffffffffffe);
          }
        }
        auStack_208._8_8_ = uVar26;
        uStack_280 = 0x62a0cce;
        func_0x0412a280(auStack_208._0_8_,lStack_1f8 - auStack_208._0_8_);
      }
    }
    if ((auStack_278[0] & 1) != 0) {
      uStack_280 = 0x62a0ce6;
      func_0x0412a280(puStack_268,auStack_278._0_8_ & 0xfffffffffffffffe);
    }
    lVar31 = lStack_1a0;
    if (cStack_188 == '\0') {
      if (lStack_1a0 != 0) {
        while (lVar31 != lStack_198) {
          uStack_280 = 0x62a0d2c;
          FUN_048b3e80(lStack_198 + -0x40);
          lStack_198 = lStack_198 + -0x40;
        }
        lStack_198 = lVar31;
        uStack_280 = 0x62a0d51;
        func_0x0412a280(lStack_1a0,lStack_190 - lStack_1a0);
      }
      lVar24 = lStack_1b8;
      lVar31 = lStack_1b0;
      if (lStack_1b8 != 0) {
        for (; lVar24 != lVar31; lVar31 = lVar31 + -0x50) {
          if ((*(char *)(lVar31 + -8) == '\x01') && ((*(byte *)(lVar31 + -0x30) & 1) != 0)) {
            uStack_280 = 0x62a0d98;
            func_0x0412a280(*(undefined8 *)(lVar31 + -0x20),
                            *(ulong *)(lVar31 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_1b0 = lVar24;
        uStack_280 = 0x62a0dba;
        func_0x0412a280(lStack_1b8,lStack_1a8 - lStack_1b8);
      }
    }
    if (auStack_248._0_8_ != 0) {
      uStack_280 = 0x62a0dd8;
      func_0x0ee56810(&uStack_1c8,auStack_248);
      lVar31 = lStack_1a0;
      if (cStack_188 == '\0') {
        lVar24 = lStack_198;
        if (lStack_1a0 != 0) {
          while (lVar31 != lVar24) {
            uStack_280 = 0x62a0e1c;
            FUN_048b3e80(lVar24 + -0x40);
            lVar24 = lVar24 + -0x40;
          }
          lStack_198 = lVar31;
          uStack_280 = 0x62a0e41;
          func_0x0412a280(lStack_1a0,lStack_190 - lStack_1a0);
        }
        lVar24 = lStack_1b8;
        lVar31 = lStack_1b0;
        if (lStack_1b8 != 0) {
          for (; lVar24 != lVar31; lVar31 = lVar31 + -0x50) {
            if ((*(char *)(lVar31 + -8) == '\x01') && ((*(byte *)(lVar31 + -0x30) & 1) != 0)) {
              uStack_280 = 0x62a0e88;
              func_0x0412a280(*(undefined8 *)(lVar31 + -0x20),
                              *(ulong *)(lVar31 + -0x30) & 0xfffffffffffffffe);
            }
          }
          lStack_1b0 = lVar24;
          uStack_280 = 0x62a0eaa;
          func_0x0412a280(lStack_1b8,lStack_1a8 - lStack_1b8);
        }
      }
    }
    uVar26 = auStack_248._8_8_;
    auStack_248._8_8_ = 0;
    if ((long *)uVar26 != (long *)0x0) {
      uStack_280 = 0x62a0ec3;
      (**(code **)(*(long *)uVar26 + 8))();
    }
    uVar26 = auStack_248._0_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auStack_248._8_8_;
    auStack_248._0_16_ = auVar15 << 0x40;
    if ((long *)uVar26 != (long *)0x0) {
      uStack_280 = 0x62a0edc;
      (**(code **)(*(long *)uVar26 + 8))();
    }
    uStack_1c8 = 0x85eaac5f456d7e;
    puStack_1c0 = &UNK_0140f690;
    lStack_1b8 = 1;
    lStack_1b0 = CONCAT44(lStack_1b0._4_4_,0x33f);
    if ((byte)uStack_128 == 0) {
      auStack_218 = (undefined1  [16])0x0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = auStack_208._8_8_;
      auStack_208 = auVar16 << 0x40;
      uStack_280 = 0x62a0f57;
      func_0x0eedeb80(2,0x2d,auStack_168,auStack_218,&uStack_1c8);
      if ((auStack_218[0] & 1) != 0) {
        uStack_280 = 0x62a0f71;
        func_0x0412a280(auStack_208._0_8_,auStack_218._0_8_ & 0xfffffffffffffffe);
      }
    }
    if (((byte)uStack_128 & 1) == 0) {
      uVar26 = auStack_148._8_8_;
      if (auStack_148._8_8_ != 0) {
        lVar31 = auStack_138._0_8_;
        if (auStack_148._8_8_ != auStack_138._0_8_) {
          do {
            lVar31 = lVar31 + -0x40;
            uStack_280 = 0x62a0fac;
            FUN_048b3e80(lVar31);
          } while (lVar31 != uVar26);
        }
        auStack_138._0_8_ = uVar26;
        uStack_280 = 0x62a0fd1;
        func_0x0412a280(auStack_148._8_8_,auStack_138._8_8_ - auStack_148._8_8_);
      }
      uVar26 = auStack_158._0_8_;
      if (auStack_158._0_8_ != 0) {
        for (lVar31 = auStack_158._8_8_; uVar26 != lVar31; lVar31 = lVar31 + -0x50) {
          if ((*(char *)(lVar31 + -8) == '\x01') && ((*(byte *)(lVar31 + -0x30) & 1) != 0)) {
            uStack_280 = 0x62a1018;
            func_0x0412a280(*(undefined8 *)(lVar31 + -0x20),
                            *(ulong *)(lVar31 + -0x30) & 0xfffffffffffffffe);
          }
        }
        auStack_158._8_8_ = uVar26;
        uStack_280 = 0x62a103a;
        func_0x0412a280(auStack_158._0_8_,auStack_148._0_8_ - auStack_158._0_8_);
      }
    }
    bVar20 = (byte)uStack_c8 & 1;
LAB_062a1044:
    if (bVar20 != 0) {
      uStack_280 = 0x62a1061;
      func_0x0412a280(lStack_b8,uStack_c8 & 0xfffffffffffffffe);
    }
    *(undefined1 *)(param_1 + 8) = 1;
    return param_1;
  }
  if ((auStack_278[0] & 1) == 0) {
    lVar31 = uStack_50 - (auStack_278[0] >> 1);
    if (uStack_50 < auStack_278[0] >> 1 || lVar31 == 0) goto LAB_0629fa8a;
LAB_0629fbd0:
    uStack_280 = 0x629fbda;
    func_0x0412ffc0(auStack_278,lVar31,0);
  }
  else {
    lVar31 = uStack_50 - auStack_278._8_8_;
    if ((ulong)auStack_278._8_8_ <= uStack_50 && lVar31 != 0) goto LAB_0629fbd0;
LAB_0629fa8a:
    if ((auStack_278[0] & 1) == 0) {
      auStack_278[0] = (char)uStack_50 * '\x02';
      puVar27 = auStack_278 + 1;
    }
    else {
      auStack_278._8_8_ = uStack_50;
      puVar27 = puStack_268;
    }
    puVar27[uStack_50] = 0;
  }
  if ((*param_3 & 1) != 0) {
    pbVar35 = *(byte **)(param_3 + 0x10);
  }
  uStack_280 = 0x629fbfc;
  uVar22 = func_0x0eee2e90(pbVar35);
  if (uVar22 < 0xfffffffffffffff8) {
    if (uVar22 < 0x17) {
      uStack_180 = CONCAT71(uStack_180._1_7_,(char)uVar22 * '\x02');
      lVar31 = (long)&uStack_180 + 1;
      if (uVar22 != 0) goto LAB_0629fc7e;
    }
    else {
      uVar28 = 0x1a;
      if ((uVar22 | 7) != 0x17) {
        uVar28 = (uVar22 | 7) + 1;
      }
      uStack_280 = 0x629fc56;
      lVar31 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
      if (lVar31 == 0) {
        uStack_280 = 0x62a10b0;
        func_0x0eec74c0(uVar28,0);
      }
      uStack_180 = uVar28 | 1;
      uStack_178 = uVar22;
      lStack_170 = lVar31;
LAB_0629fc7e:
      uStack_280 = 0x629fc8c;
      memmove(lVar31,pbVar35,uVar22);
    }
    *(undefined1 *)(lVar31 + uVar22) = 0;
    if ((*pbStack_58 & 1) == 0) {
      uVar22 = (ulong)(*pbStack_58 >> 1);
    }
    else {
      uVar22 = *(ulong *)(pbStack_58 + 8);
    }
    uVar28 = uStack_178;
    if ((uStack_180 & 1) == 0) {
      uVar28 = (uStack_180 & 0xff) >> 1;
    }
    uVar36 = uVar28 - uVar22;
    if (uVar28 < uVar22) goto LAB_062a1143;
    lVar31 = lStack_170;
    if ((uStack_180 & 1) == 0) {
      lVar31 = (long)&uStack_180 + 1;
    }
    if (0xfffffffffffffff7 < uVar36) goto LAB_062a1148;
    if (uVar36 < 0x17) {
      uStack_230 = CONCAT71(uStack_230._1_7_,(char)uVar36 * '\x02');
      lVar24 = (long)&uStack_230 + 1;
      if (uVar28 != uVar22) goto LAB_0629fd63;
    }
    else {
      uVar28 = 0x1a;
      if ((uVar36 | 7) != 0x17) {
        uVar28 = (uVar36 | 7) + 1;
      }
      uStack_280 = 0x629fd44;
      lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
      if (lVar24 == 0) {
        uStack_280 = 0x62a10bf;
        func_0x0eec74c0(uVar28,0);
      }
      uStack_230 = uVar28 | 1;
      uStack_228 = uVar36;
      lStack_220 = lVar24;
LAB_0629fd63:
      uStack_280 = 0x629fd74;
      memmove(lVar24,lVar31 + uVar22,uVar36);
    }
    *(undefined1 *)(lVar24 + uVar36) = 0;
    puVar27 = puStack_268;
    if ((auStack_278[0] & 1) == 0) {
      puVar27 = auStack_278 + 1;
    }
    uStack_280 = 0x629fdad;
    func_0x0ee768f0(auStack_a8,auStack_248._0_8_,puVar27,uStack_50,auStack_38);
    cStack_d8 = cStack_68;
    if (cStack_68 == '\0') {
      auStack_108._8_8_ = CONCAT71(uStack_8f,bStack_90);
      pbStack_118 = (byte *)auStack_a8._0_8_;
      uStack_110 = auStack_a8._8_8_;
      auStack_108._0_8_ = pcStack_98;
      lStack_f8 = uStack_88;
      puStack_f0 = puStack_80;
      lStack_e8 = auStack_78._0_8_;
      lStack_e0 = auStack_78._8_8_;
      uStack_280 = 0x629fe6d;
      func_0x062a1440(&pbStack_118);
      auStack_138._8_8_ = lStack_e0;
      auStack_138._0_8_ = lStack_e8;
      auStack_148._8_8_ = puStack_f0;
      auStack_148._0_8_ = lStack_f8;
      auStack_158._8_8_ = auStack_108._8_8_;
      auStack_158._0_8_ = auStack_108._0_8_;
      auStack_a8._8_8_ = uStack_110;
      auStack_a8._0_8_ = pbStack_118;
      auStack_108 = (undefined1  [16])0x0;
      lStack_f8 = 0;
      puStack_f0 = (undefined1 *)0x0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      pcStack_98 = (char *)0x0;
      bStack_90 = 0;
      uStack_8f = 0;
      uStack_88 = 0;
      puStack_80 = (undefined1 *)0x0;
      auStack_78 = (undefined1  [16])0x0;
      uStack_128 = uStack_128 & 0xffffffffffffff00;
      auStack_168._8_8_ = uStack_110;
      auStack_168._0_8_ = pbStack_118;
      uStack_280 = 0x629ff28;
      func_0x048e6d60(auStack_a8);
      puVar27 = puStack_f0;
joined_r0x0629ff30:
      puStack_f0 = puVar27;
      if (cStack_d8 == '\0') {
        lVar31 = lStack_e8;
        if (puVar27 != (undefined1 *)0x0) {
          while (puVar27 != (undefined1 *)lVar31) {
            uStack_280 = 0x62a0a9c;
            FUN_048b3e80(lVar31 + -0x40);
            lVar31 = lVar31 + -0x40;
          }
          uStack_280 = 0x62a0ac1;
          lStack_e8 = (long)puVar27;
          func_0x0412a280(puStack_f0,lStack_e0 - (long)puStack_f0);
        }
        uVar26 = auStack_108._0_8_;
        if (auStack_108._0_8_ != 0) {
          for (lVar31 = auStack_108._8_8_; uVar26 != lVar31; lVar31 = lVar31 + -0x50) {
            if ((*(char *)(lVar31 + -8) == '\x01') && ((*(byte *)(lVar31 + -0x30) & 1) != 0)) {
              uStack_280 = 0x62a0b18;
              func_0x0412a280(*(undefined8 *)(lVar31 + -0x20),
                              *(ulong *)(lVar31 + -0x30) & 0xfffffffffffffffe);
            }
          }
          auStack_108._8_8_ = uVar26;
          uStack_280 = 0x62a0b3a;
          func_0x0412a280(auStack_108._0_8_,lStack_f8 - auStack_108._0_8_);
        }
      }
      if ((uStack_230 & 1) != 0) {
        uStack_280 = 0x62a0c7d;
        func_0x0412a280(lStack_220,uStack_230 & 0xfffffffffffffffe);
      }
      if ((uStack_180 & 1) != 0) {
        uStack_280 = 0x62a0ca4;
        func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
      }
      goto joined_r0x0629fbb5;
    }
    uVar22 = uStack_230 >> 1 & 0x7f;
    lVar31 = (long)&uStack_230 + 1;
    if ((uStack_230 & 1) != 0) {
      uVar22 = uStack_228;
      lVar31 = lStack_220;
    }
    uVar28 = uVar22 - 1;
    do {
      if (uVar28 == 0xffffffffffffffff) {
        uVar36 = 0xfffffffffffffffe;
        break;
      }
      uVar36 = uVar28 - 1;
      pcVar1 = (char *)(lVar31 + uVar28);
      uVar28 = uVar36;
    } while (*pcVar1 != '.');
    if (uVar22 == 0) goto LAB_062a114d;
    lVar31 = (long)&uStack_230 + 2;
    if ((uStack_230 & 1) != 0) {
      lVar31 = lStack_220 + 1;
    }
    uVar28 = uVar22 - 1;
    if (uVar36 <= uVar22 - 1) {
      uVar28 = uVar36;
    }
    if (0xfffffffffffffff7 < uVar28) goto LAB_062a1152;
    pcVar1 = (char *)((long)&uStack_260 + 1);
    if (uVar28 < 0x17) {
      uStack_260 = CONCAT71(uStack_260._1_7_,(char)uVar28 * '\x02');
      pcVar29 = pcVar1;
      if (uVar28 != 0) goto LAB_0629ffd6;
    }
    else {
      uVar22 = 0x1a;
      if ((uVar28 | 7) != 0x17) {
        uVar22 = (uVar28 | 7) + 1;
      }
      uStack_280 = 0x629ffb7;
      pcVar29 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
      if (pcVar29 == (char *)0x0) {
        uStack_280 = 0x62a10df;
        func_0x0eec74c0(uVar22,0);
      }
      uStack_260 = uVar22 | 1;
      uStack_258 = uVar28;
      pcStack_250 = pcVar29;
LAB_0629ffd6:
      uStack_280 = 0x629ffe4;
      memmove(pcVar29,lVar31,uVar28);
    }
    pcVar29[uVar28] = '\0';
    plVar3 = plStack_48;
    uVar22 = uStack_260 >> 1 & 0x7f;
    if ((uStack_260 & 1) != 0) {
      uVar22 = uStack_258;
      pcVar1 = pcStack_250;
    }
    if (uVar22 != 0) {
      pcVar29 = pcVar1;
      if (7 < uVar22) {
        if (uVar22 < 0x20) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar22 & 0xffffffffffffffe0;
          uVar36 = 0;
          do {
            pcVar29 = pcVar1 + uVar36;
            cVar6 = pcVar29[1];
            cVar7 = pcVar29[2];
            cVar8 = pcVar29[3];
            cVar9 = pcVar29[4];
            cVar10 = pcVar29[5];
            cVar11 = pcVar29[6];
            cVar12 = pcVar29[7];
            cVar13 = pcVar29[8];
            cVar39 = DAT_014e11e0;
            cVar40 = DAT_014e11e0._1_1_;
            cVar41 = DAT_014e11e0._2_1_;
            cVar42 = DAT_014e11e0._3_1_;
            cVar43 = DAT_014e11e0._4_1_;
            cVar44 = DAT_014e11e0._5_1_;
            cVar45 = DAT_014e11e0._6_1_;
            cVar46 = DAT_014e11e0._7_1_;
            if (*pcVar29 == cVar39) {
              pcVar1[uVar36] = ':';
            }
            if (cVar6 == cVar40) {
              pcVar1[uVar36 + 1] = ':';
            }
            if (cVar7 == cVar41) {
              pcVar1[uVar36 + 2] = ':';
            }
            if (cVar8 == cVar42) {
              pcVar1[uVar36 + 3] = ':';
            }
            if (cVar9 == cVar43) {
              pcVar1[uVar36 + 4] = ':';
            }
            if (cVar10 == cVar44) {
              pcVar1[uVar36 + 5] = ':';
            }
            if (cVar11 == cVar45) {
              pcVar1[uVar36 + 6] = ':';
            }
            if (cVar12 == cVar46) {
              pcVar1[uVar36 + 7] = ':';
            }
            if (cVar13 == DAT_014e11e0._8_1_) {
              pcVar1[uVar36 + 8] = ':';
            }
            pcVar29 = pcVar1 + uVar36 + 0x10;
            cVar6 = *pcVar29;
            cVar7 = pcVar29[1];
            cVar8 = pcVar29[2];
            cVar9 = pcVar29[3];
            cVar10 = pcVar29[4];
            cVar11 = pcVar29[5];
            cVar13 = pcVar29[6];
            cVar14 = pcVar29[7];
            if (cVar12 == cVar46) {
              pcVar1[uVar36 + 0xf] = ':';
            }
            if (cVar6 == cVar39) {
              pcVar1[uVar36 + 0x10] = ':';
            }
            if (cVar7 == cVar40) {
              pcVar1[uVar36 + 0x11] = ':';
            }
            if (cVar8 == cVar41) {
              pcVar1[uVar36 + 0x12] = ':';
            }
            if (cVar9 == cVar42) {
              pcVar1[uVar36 + 0x13] = ':';
            }
            if (cVar10 == cVar43) {
              pcVar1[uVar36 + 0x14] = ':';
            }
            if (cVar11 == cVar44) {
              pcVar1[uVar36 + 0x15] = ':';
            }
            if (cVar13 == cVar45) {
              pcVar1[uVar36 + 0x16] = ':';
            }
            if (cVar14 == cVar46) {
              pcVar1[uVar36 + 0x17] = ':';
            }
            if (cVar6 == cVar39) {
              pcVar1[uVar36 + 0x18] = ':';
            }
            if (cVar7 == cVar40) {
              pcVar1[uVar36 + 0x19] = ':';
            }
            if (cVar8 == cVar41) {
              pcVar1[uVar36 + 0x1a] = ':';
            }
            if (cVar9 == cVar42) {
              pcVar1[uVar36 + 0x1b] = ':';
            }
            if (cVar10 == cVar43) {
              pcVar1[uVar36 + 0x1c] = ':';
            }
            if (cVar11 == cVar44) {
              pcVar1[uVar36 + 0x1d] = ':';
            }
            if (cVar13 == cVar45) {
              pcVar1[uVar36 + 0x1e] = ':';
            }
            if (cVar14 == cVar46) {
              pcVar1[uVar36 + 0x1f] = ':';
            }
            uVar36 = uVar36 + 0x20;
          } while (uVar28 != uVar36);
          if (uVar22 == uVar28) goto LAB_062a062f;
          if ((uVar22 & 0x18) == 0) {
            pcVar29 = pcVar1 + uVar28;
            goto LAB_062a1080;
          }
        }
        uVar36 = uVar22 & 0xfffffffffffffff8;
        pcVar29 = pcVar1 + uVar36;
        do {
          uVar2 = *(ulong *)(pcVar1 + uVar28);
          auVar47._8_8_ = 0;
          auVar47._0_8_ = uVar2;
          if ((char)uVar2 == (char)_DAT_014ea110) {
            pcVar1[uVar28] = ':';
          }
          auVar48[0] = -(DAT_014ea500 == '\0');
          auVar48[1] = -((char)uVar2 == UNK_014ea501);
          auVar48[2] = -((char)(uVar2 >> 8) == UNK_014ea502);
          auVar48[3] = -((char)(uVar2 >> 0x10) == UNK_014ea503);
          auVar48[4] = -(UNK_014ea504 == '\0');
          auVar48[5] = -((char)(uVar2 >> 0x20) == UNK_014ea505);
          auVar48[6] = -((char)(uVar2 >> 0x28) == UNK_014ea506);
          auVar48[7] = -((char)(uVar2 >> 0x30) == UNK_014ea507);
          auVar48[8] = -(UNK_014ea508 == '\0');
          auVar48[9] = -(UNK_014ea509 == '\0');
          auVar48[10] = -(UNK_014ea50a == '\0');
          auVar48[0xb] = -(UNK_014ea50b == '\0');
          auVar48[0xc] = -(UNK_014ea50c == '\0');
          auVar48[0xd] = -(UNK_014ea50d == '\0');
          auVar48[0xe] = -(UNK_014ea50e == '\0');
          auVar48[0xf] = -(UNK_014ea50f == '\0');
          if ((auVar48[2] & 1) != 0) {
            pcVar1[uVar28 + 1] = ':';
          }
          auVar47 = pshuflw(auVar48,auVar47,0x55);
          if (auVar47[4] == UNK_014ea514) {
            pcVar1[uVar28 + 2] = ':';
          }
          if ((char)(uVar2 >> 0x18) == UNK_014e7826) {
            pcVar1[uVar28 + 3] = ':';
          }
          uVar28 = uVar28 + 8;
        } while (uVar36 != uVar28);
        if (uVar22 == uVar36) goto LAB_062a062f;
      }
LAB_062a1080:
      do {
        if (*pcVar29 == '-') {
          *pcVar29 = ':';
        }
        pcVar29 = pcVar29 + 1;
      } while (pcVar29 != pcVar1 + uVar22);
    }
LAB_062a062f:
    if ((uStack_260 & 1) == 0) {
      pcStack_98 = pcStack_250;
      auStack_a8._8_8_ = uStack_258;
      auStack_a8._0_8_ = uStack_260;
    }
    else {
      uStack_280 = 0x62a0669;
      func_0x0412e5e0(auStack_a8,pcStack_250,uStack_258);
    }
    if ((auStack_278[0] & 1) == 0) {
      puStack_80 = puStack_268;
      uStack_8f = auStack_278._1_7_;
      uStack_88 = auStack_278._8_8_;
      bStack_90 = auStack_278[0];
    }
    else {
      uStack_280 = 0x62a069a;
      func_0x0412e5e0(&bStack_90,puStack_268,auStack_278._8_8_);
    }
    pauVar23 = (undefined1 (*) [16])plVar3[1];
    bVar20 = *pbStack_40;
    if (pauVar23 == (undefined1 (*) [16])0x0) {
      pauVar33 = (undefined1 (*) [16])(plVar3 + 1);
      pauVar37 = pauVar33;
    }
    else {
      do {
        while (pauVar33 = pauVar23, bVar20 < (byte)pauVar33[2][0]) {
          pauVar23 = *(undefined1 (**) [16])*pauVar33;
          pauVar37 = pauVar33;
          if (*(undefined1 (**) [16])*pauVar33 == (undefined1 (*) [16])0x0) goto LAB_062a06e0;
        }
        if (bVar20 <= (byte)pauVar33[2][0]) goto LAB_062a074f;
        pauVar23 = *(undefined1 (**) [16])(*pauVar33 + 8);
      } while (*(undefined1 (**) [16])(*pauVar33 + 8) != (undefined1 (*) [16])0x0);
      pauVar37 = (undefined1 (*) [16])(*pauVar33 + 8);
    }
LAB_062a06e0:
    uStack_280 = 0x62a06f6;
    pauVar23 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (pauVar23 == (undefined1 (*) [16])0x0) {
      uStack_280 = 0x62a10d0;
      func_0x0eec74c0(0x40,0);
    }
    plVar3 = plStack_48;
    pauVar23[2][0] = bVar20;
    *(undefined1 (*) [16])(pauVar23[2] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar23[3] + 8) = 0;
    *pauVar23 = (undefined1  [16])0x0;
    *(undefined1 (**) [16])pauVar23[1] = pauVar33;
    *(undefined1 (**) [16])*pauVar37 = pauVar23;
    if (*(long *)*plStack_48 != 0) {
      *plStack_48 = *(long *)*plStack_48;
    }
    uStack_280 = 0x62a0746;
    func_0x048bed00(plStack_48[1],pauVar23);
    plVar3[2] = plVar3[2] + 1;
    pauVar33 = pauVar23;
LAB_062a074f:
    puVar32 = *(undefined8 **)pauVar33[3];
    if (puVar32 < *(undefined8 **)(pauVar33[3] + 8)) {
      puVar32[2] = pcStack_98;
      *puVar32 = auStack_a8._0_8_;
      puVar32[1] = auStack_a8._8_8_;
      auStack_a8 = (undefined1  [16])0x0;
      pcStack_98 = (char *)0x0;
      puVar32[5] = puStack_80;
      puVar32[3] = CONCAT71(uStack_8f,bStack_90);
      puVar32[4] = uStack_88;
      bStack_90 = 0;
      uStack_8f = 0;
      uStack_88 = 0;
      puStack_80 = (undefined1 *)0x0;
      *(undefined8 **)pauVar33[3] = puVar32 + 6;
      auStack_138 = (undefined1  [16])0x0;
      auStack_148 = (undefined1  [16])0x0;
      auStack_158 = (undefined1  [16])0x0;
      auStack_168 = (undefined1  [16])0x0;
      uStack_128 = 1;
joined_r0x062a0a5e:
      puVar27 = puStack_f0;
      if ((uStack_260 & 1) != 0) {
        uStack_280 = 0x62a0b9a;
        func_0x0412a280(pcStack_250,uStack_260 & 0xfffffffffffffffe);
        puVar27 = puStack_f0;
      }
      goto joined_r0x0629ff30;
    }
    lVar31 = (long)puVar32 - *(long *)(pauVar33[2] + 8);
    uVar22 = (lVar31 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar22) goto LAB_062a1157;
    lVar24 = (long)*(undefined8 **)(pauVar33[3] + 8) - *(long *)(pauVar33[2] + 8) >> 4;
    uVar28 = lVar24 * 0x5555555555555556;
    if (uVar22 < uVar28) {
      uVar22 = uVar28;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
      uVar22 = 0x555555555555555;
    }
    if (uVar22 < 0x555555555555556) {
      uStack_280 = 0x62a088b;
      lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22 * 0x30);
      if (lVar24 == 0) {
        uStack_280 = 0x62a10ee;
        func_0x0eec74c0(uVar22 * 0x30,0);
      }
      *(char **)(lVar24 + 0x10 + lVar31) = pcStack_98;
      *(undefined8 *)(lVar24 + lVar31) = auStack_a8._0_8_;
      ((undefined8 *)(lVar24 + lVar31))[1] = auStack_a8._8_8_;
      auStack_a8 = (undefined1  [16])0x0;
      pcStack_98 = (char *)0x0;
      *(undefined1 **)(lVar24 + 0x28 + lVar31) = puStack_80;
      puVar32 = (undefined8 *)(lVar24 + 0x18 + lVar31);
      *puVar32 = CONCAT71(uStack_8f,bStack_90);
      puVar32[1] = uStack_88;
      bStack_90 = 0;
      uStack_8f = 0;
      uStack_88 = 0;
      puStack_80 = (undefined1 *)0x0;
      pbStack_58 = (byte *)(lVar24 + 0x30 + lVar31);
      puVar38 = *(ulong **)(pauVar33[2] + 8);
      puVar4 = *(ulong **)pauVar33[3];
      lVar31 = ((long)puVar38 - (long)puVar4) + lVar24 + lVar31;
      if ((long)puVar38 - (long)puVar4 != 0) {
        lVar25 = 0;
        do {
          *(undefined8 *)(lVar31 + 0x10 + lVar25) = *(undefined8 *)((long)puVar38 + lVar25 + 0x10);
          uVar26 = *(undefined8 *)((byte *)((long)puVar38 + lVar25) + 8);
          *(undefined8 *)(lVar31 + lVar25) = *(undefined8 *)((long)puVar38 + lVar25);
          ((undefined8 *)(lVar31 + lVar25))[1] = uVar26;
          *(undefined1 (*) [16])((long)puVar38 + lVar25) = (undefined1  [16])0x0;
          pbVar35 = (byte *)((long)puVar38 + lVar25 + 0x10);
          pbVar35[0] = 0;
          pbVar35[1] = 0;
          pbVar35[2] = 0;
          pbVar35[3] = 0;
          pbVar35[4] = 0;
          pbVar35[5] = 0;
          pbVar35[6] = 0;
          pbVar35[7] = 0;
          *(undefined8 *)(lVar31 + 0x28 + lVar25) = *(undefined8 *)((long)puVar38 + lVar25 + 0x28);
          pbVar35 = (byte *)((long)puVar38 + lVar25 + 0x18);
          uVar26 = *(undefined8 *)(pbVar35 + 8);
          puVar32 = (undefined8 *)(lVar31 + 0x18 + lVar25);
          *puVar32 = *(undefined8 *)pbVar35;
          puVar32[1] = uVar26;
          *(undefined1 (*) [16])((long)puVar38 + lVar25 + 0x18) = (undefined1  [16])0x0;
          pbVar35 = (byte *)((long)puVar38 + lVar25 + 0x28);
          pbVar35[0] = 0;
          pbVar35[1] = 0;
          pbVar35[2] = 0;
          pbVar35[3] = 0;
          pbVar35[4] = 0;
          pbVar35[5] = 0;
          pbVar35[6] = 0;
          pbVar35[7] = 0;
          lVar17 = lVar25 + 0x30;
          lVar25 = lVar25 + 0x30;
        } while ((ulong *)((long)puVar38 + lVar17) != puVar4);
        do {
          if ((puVar38[3] & 1) == 0) {
            bVar20 = (byte)*puVar38;
          }
          else {
            uStack_280 = 0x62a09b9;
            func_0x0412a280(puVar38[5],puVar38[3] & 0xfffffffffffffffe);
            bVar20 = (byte)*puVar38;
          }
          if ((bVar20 & 1) != 0) {
            uStack_280 = 0x62a09cf;
            func_0x0412a280(puVar38[2],*puVar38 & 0xfffffffffffffffe);
          }
          puVar38 = puVar38 + 6;
        } while (puVar38 != puVar4);
        puVar38 = *(ulong **)(pauVar33[2] + 8);
      }
      pbVar35 = pbStack_58;
      *(long *)(pauVar33[2] + 8) = lVar31;
      *(byte **)pauVar33[3] = pbStack_58;
      lVar31 = *(long *)(pauVar33[3] + 8);
      *(ulong *)(pauVar33[3] + 8) = uVar22 * 0x30 + lVar24;
      if (puVar38 != (ulong *)0x0) {
        uStack_280 = 0x62a09fd;
        func_0x0412a280(puVar38,lVar31 - (long)puVar38);
      }
      *(byte **)pauVar33[3] = pbVar35;
      auStack_138 = (undefined1  [16])0x0;
      auStack_148 = (undefined1  [16])0x0;
      auStack_158 = (undefined1  [16])0x0;
      auStack_168 = (undefined1  [16])0x0;
      uStack_128 = 1;
      if ((bStack_90 & 1) == 0) {
      }
      else {
        uStack_280 = 0x62a0b55;
        func_0x0412a280(puStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
      }
      if ((auStack_a8[0] & 1) != 0) {
        uStack_280 = 0x62a0b7c;
        func_0x0412a280(pcStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
      }
      goto joined_r0x062a0a5e;
    }
  }
  else {
    uStack_280 = 0x62a1143;
    func_0x04882e30();
LAB_062a1143:
    uStack_280 = 0x62a1148;
    func_0x04882ee0();
LAB_062a1148:
    uStack_280 = 0x62a114d;
    func_0x04882e30();
LAB_062a114d:
    uStack_280 = 0x62a1152;
    func_0x04882ee0();
LAB_062a1152:
    uStack_280 = 0x62a1157;
    func_0x04882e30();
LAB_062a1157:
    uStack_280 = 0x62a115c;
    func_0x062a1690();
  }
  uStack_280 = 0x62a1161;
  param_1 = (undefined8 *)func_0x04882eb0();
  uStack_280 = 0x62a1170;
  func_0x041084d6(&DAT_0f7b8fb8);
  uStack_280 = 0x62a1295;
  func_0x048f9be0(auStack_248);
  if ((uStack_c8 & 1) != 0) {
    uStack_280 = 0x62a12b8;
    func_0x0412a280(lStack_b8,uStack_c8 & 0xfffffffffffffffe);
  }
  uStack_280 = 0x62a12c0;
  puVar32 = param_1;
  func_0x0eee2d70();
SUB_062a12c0:
  uVar19 = _UNK_0f023f68;
  uVar18 = _UNK_0f023f58;
  uVar26 = _DAT_0f023f50;
  *(undefined8 **)((long)puVar30 + -8) = param_1;
  *(undefined8 *)((long)puVar30 + -0x48) = _DAT_0f023f60;
  *(undefined8 *)((long)puVar30 + -0x40) = _UNK_0f023f68;
  *(undefined8 *)((long)puVar30 + -0x58) = _DAT_0f023f50;
  *(undefined8 *)((long)puVar30 + -0x50) = _UNK_0f023f58;
  *(undefined1 *)((long)puVar30 + -0x38) = 0;
  *(undefined1 *)((long)puVar30 + -0x10) = 0;
  puVar5 = (undefined8 *)puVar32[3];
  if (puVar5 < (undefined8 *)puVar32[4]) {
    puVar5[2] = _DAT_0f023f60;
    puVar5[3] = uVar19;
    *puVar5 = uVar26;
    puVar5[1] = uVar18;
    *(undefined1 *)(puVar5 + 4) = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar32[3] = puVar5 + 10;
  }
  else {
    *(undefined8 *)((long)puVar30 + -0x60) = 0x62a131f;
    uVar26 = func_0x0489d2c0(puVar32 + 2,(undefined1 *)((long)puVar30 + -0x58));
    bVar20 = *(byte *)((long)puVar30 + -0x10);
    puVar32[3] = uVar26;
    if (((bVar20 & 1) != 0) && ((*(byte *)((long)puVar30 + -0x38) & 1) != 0)) {
      *(undefined8 *)((long)puVar30 + -0x60) = 0x62a1344;
      func_0x0412a280(*(undefined8 *)((long)puVar30 + -0x28),
                      *(ulong *)((long)puVar30 + -0x38) & 0xfffffffffffffffe);
      return puVar32;
    }
  }
  return puVar32;
}


