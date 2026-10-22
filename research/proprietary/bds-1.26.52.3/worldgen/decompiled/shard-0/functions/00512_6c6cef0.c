/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d6cef0 (ELF vaddr 0x6c6cef0)
 * Label: caller-of-callee
 * Body:  [[06d6cef0, 06d6cfb9] [06d6cfc0, 06d6d244] [06d6d250, 06d6d383] [06d6d390, 06d6d6e2] [06d6d6f0, 06d6d8f8] [06d6d900, 06d6dbde] [06d6dbe0, 06d6dc06] [06d6dc10, 06d6dc4d] [06d6dc50, 06d6dc5b] [06d6dc60, 06d6dc9a] [06d6dca0, 06d6dcc1] [06d6dcd0, 06d6dd13] [06d6dd20, 06d6dd2b] [06d6dd30, 06d6dd69] [06d6dd70, 06d6dd90] [06d6dda0, 06d6dea3] [06d6deb0, 06d6e0a9] [06d6e0b0, 06d6e23a] [06d6e648, 06d6e698]]
 * Ghidra: FUN_06d6cef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06d6cef0(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,long *param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulong *puVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  uint *puVar26;
  bool bVar27;
  float fVar28;
  byte bStack_1a8;
  undefined2 uStack_1a7;
  undefined1 uStack_1a5;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  byte bStack_1a0;
  undefined2 uStack_19f;
  undefined1 uStack_19d;
  undefined1 uStack_19c;
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  byte bStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined4 uStack_15f;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  ulong uStack_148;
  ulong uStack_140;
  undefined4 *puStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulong uStack_118;
  ulong uStack_110;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined1 uStack_ef;
  undefined6 uStack_ee;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  uint *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  byte bStack_98;
  undefined1 auStack_97 [7];
  ulong uStack_90;
  undefined1 *puStack_88;
  long *plStack_80;
  undefined8 auStack_78 [2];
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  ulong uStack_40;
  byte *pbStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bStack_f0 = 0;
  uStack_ef = 0;
  uStack_110 = param_3;
  plStack_80 = param_5;
  uStack_40 = param_4;
  if (param_3 != param_4) {
    puVar26 = (uint *)(param_2 + 0x280);
    lStack_50 = param_2 + 0x2d8;
    lStack_48 = param_2 + 0x2c0;
    lStack_58 = param_2 + 0x2f0;
    lStack_60 = param_2 + 0x308;
    lStack_68 = param_2 + 800;
    uStack_a0 = 0;
    puStack_170 = param_1;
    puStack_b0 = puVar26;
    lStack_a8 = param_2;
    do {
      func_0x04863060(auStack_c0,0);
      uVar19 = uStack_110;
      auStack_78[0] = *(undefined8 *)(uStack_110 + 0x30);
      uVar1 = *(uint *)(uStack_110 + 0x38);
      bStack_168 = 0x18;
      uStack_167 = 0x252d6d252d5925;
      uStack_160 = 100;
      uStack_15f = 0x5a542554;
      uStack_15b = 0;
      uStack_108 = uStack_108 & 0xffffff00;
      uStack_100 = uStack_100 & 0xffffff00;
      bStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      uStack_1a1 = 0;
      bStack_1a0 = 0;
      uStack_19f = 0;
      uStack_19d = 0;
      lStack_198 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_19c = 1;
      uStack_19b = 0;
      uStack_19a = 0;
      uStack_190 = 1;
      uStack_188 = 0xffffffff;
      lVar13 = func_0x0eee3bc0(auStack_78,&bStack_1a8);
      puVar22 = (ulong *)&bStack_1a8;
      if (lVar13 == 0) {
        puVar22 = (ulong *)&UNK_01e7a0d0;
      }
      uStack_148 = *puVar22;
      uStack_140 = puVar22[1];
      puStack_138 = (undefined4 *)puVar22[2];
      uStack_130 = (int)puVar22[3];
      uStack_12c = *(undefined4 *)((long)puVar22 + 0x1c);
      uStack_128 = (int)puVar22[4];
      uStack_124 = *(undefined4 *)((long)puVar22 + 0x24);
      uStack_120 = (int)puVar22[5];
      uStack_11c = *(undefined4 *)((long)puVar22 + 0x2c);
      uStack_118 = puVar22[6];
      func_0x0ee161c0(&bStack_d8,&uStack_148,&bStack_168,&uStack_108);
      if ((char)uStack_100 == '\x01') {
        func_0x04167a40(&uStack_108);
      }
      if ((bStack_168 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
      }
      bStack_1a8 = 6;
      uStack_1a5 = 0x72;
      uStack_1a7 = 0x6576;
      uStack_1a4 = 0;
      uStack_148 = CONCAT35(uStack_148._5_3_,0x302e3406);
      func_0x048631d0(&bStack_168,&uStack_148);
      uVar14 = func_0x04864970(auStack_c0,&bStack_1a8);
      func_0x04863790(uVar14,&bStack_168);
      FUN_04863610(&bStack_168);
      if ((uStack_148 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_138,uStack_148 & 0xfffffffffffffffe);
      }
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 8;
      uStack_1a7 = 0x6974;
      uStack_1a5 = 0x6d;
      uStack_1a4 = 0x65;
      uStack_1a3 = 0;
      func_0x048631d0(&uStack_148,&bStack_d8);
      uVar14 = func_0x04864970(auStack_c0,&bStack_1a8);
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 8;
      uStack_1a7 = 0x616e;
      uStack_1a5 = 0x6d;
      uStack_1a4 = 0x65;
      uStack_1a3 = 0;
      if ((*puVar26 & 1) == 0) {
        uStack_f8 = *(undefined8 *)(puVar26 + 4);
        uStack_108 = *puVar26;
        uStack_104 = puVar26[1];
        uStack_100 = puVar26[2];
        uStack_fc = puVar26[3];
      }
      else {
        FUN_0412e5e0(&uStack_108,*(undefined8 *)(lStack_a8 + 0x290),
                     *(undefined8 *)(lStack_a8 + 0x288));
      }
      puVar15 = (undefined8 *)func_0x0412f8c0(&uStack_108,&UNK_01254f0f,1);
      uStack_158 = puVar15[2];
      uVar14 = puVar15[1];
      bStack_168 = (byte)*puVar15;
      uStack_167 = (undefined7)((ulong)*puVar15 >> 8);
      uStack_160 = (undefined1)uVar14;
      uStack_15f = (undefined4)((ulong)uVar14 >> 8);
      uStack_15b = (undefined1)((ulong)uVar14 >> 0x28);
      uStack_15a = (undefined2)((ulong)uVar14 >> 0x30);
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      bVar27 = (*(byte *)(uVar19 + 8) & 1) != 0;
      lVar13 = uVar19 + 9;
      if (bVar27) {
        lVar13 = *(long *)(uVar19 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(uVar19 + 8) >> 1);
      if (bVar27) {
        uVar17 = *(ulong *)(uVar19 + 0x10);
      }
      puVar22 = (ulong *)func_0x0412f8c0(&bStack_168,lVar13,uVar17);
      puStack_138 = (undefined4 *)puVar22[2];
      uStack_148 = *puVar22;
      uStack_140 = puVar22[1];
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      if ((bStack_1a8 & 1) == 0) {
        if (bStack_1a8 >> 1 != 0) goto LAB_06d6d39b;
LAB_06d6d310:
        if ((uStack_148 & 1) == 0) goto LAB_06d6d31b;
LAB_06d6d3e3:
        thunk_FUN_0ee326a0(puStack_138,uStack_148 & 0xfffffffffffffffe);
        if ((bStack_168 & 1) != 0) goto LAB_06d6d401;
LAB_06d6d326:
        if ((uStack_108 & 1) == 0) goto LAB_06d6d334;
LAB_06d6d422:
        thunk_FUN_0ee326a0(uStack_f8,CONCAT44(uStack_104,uStack_108) & 0xfffffffffffffffe);
        if ((bStack_1a8 & 1) != 0) goto LAB_06d6d445;
LAB_06d6d33e:
        if ((uVar1 & 0x200) == 0) goto LAB_06d6d34a;
LAB_06d6d463:
        bStack_1a8 = 8;
        uStack_1a7 = 0x4b69;
        uStack_1a5 = 0x65;
        uStack_1a4 = 0x79;
        uStack_1a3 = 0;
        func_0x048631d0(&uStack_148,0xf5a2f50);
        uVar14 = func_0x04864970(auStack_c0,&bStack_1a8);
      }
      else {
        if (CONCAT26(uStack_19a,
                     CONCAT15(uStack_19b,
                              CONCAT14(uStack_19c,
                                       CONCAT13(uStack_19d,CONCAT21(uStack_19f,bStack_1a0))))) == 0)
        goto LAB_06d6d310;
LAB_06d6d39b:
        func_0x048631d0(auStack_78,&uStack_148);
        uVar14 = func_0x04864970(auStack_c0,&bStack_1a8);
        func_0x04863790(uVar14,auStack_78);
        FUN_04863610(auStack_78);
        if ((uStack_148 & 1) != 0) goto LAB_06d6d3e3;
LAB_06d6d31b:
        if ((bStack_168 & 1) == 0) goto LAB_06d6d326;
LAB_06d6d401:
        thunk_FUN_0ee326a0(uStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
        if ((uStack_108 & 1) != 0) goto LAB_06d6d422;
LAB_06d6d334:
        if ((bStack_1a8 & 1) == 0) goto LAB_06d6d33e;
LAB_06d6d445:
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
        if ((uVar1 & 0x200) != 0) goto LAB_06d6d463;
LAB_06d6d34a:
        bStack_1a8 = 8;
        uStack_1a7 = 0x4b69;
        uStack_1a5 = 0x65;
        uStack_1a4 = 0x79;
        uStack_1a3 = 0;
        func_0x048631d0(&uStack_148,0xf5a2f10);
        uVar14 = func_0x04864970(auStack_c0,&bStack_1a8);
      }
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      if ((bStack_d8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
      }
      func_0x04863060(&uStack_108,0);
      func_0x04863060(&bStack_168,0);
      lVar13 = lStack_48;
      bStack_1a8 = 6;
      uStack_1a5 = 0x76;
      uStack_1a7 = 0x6e65;
      uStack_1a4 = 0;
      uStack_148 = 0x6873696c6275500e;
      uStack_140 = uStack_140 & 0xffffffffffffff00;
      func_0x048631d0(&bStack_d8,&uStack_148);
      uVar14 = func_0x04864970(&bStack_168,&bStack_1a8);
      func_0x04863790(uVar14,&bStack_d8);
      FUN_04863610(&bStack_d8);
      if ((uStack_148 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_138,uStack_148 & 0xfffffffffffffffe);
      }
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 4;
      uStack_1a7 = 0x6469;
      uStack_1a5 = 0;
      func_0x048631d0(&uStack_148,lStack_50);
      uVar14 = func_0x04864970(&bStack_168,&bStack_1a8);
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 0xc;
      uStack_1a3 = 0x6c;
      uStack_1a2 = 0x65;
      uStack_1a7 = 0x6f6c;
      uStack_1a5 = 99;
      uStack_1a4 = 0x61;
      uStack_1a1 = 0;
      func_0x048631d0(&uStack_148,lVar13);
      uVar14 = func_0x04864970(&bStack_168,&bStack_1a8);
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 8;
      uStack_1a7 = 0x616e;
      uStack_1a5 = 0x6d;
      uStack_1a4 = 0x65;
      uStack_1a3 = 0;
      puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar16 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar6 = _UNK_014630c4;
      uVar5 = _UNK_014630c0;
      uVar4 = _UNK_014630bc;
      uStack_148 = 0x21;
      uStack_140 = 0x18;
      *puVar16 = _DAT_014630b8;
      puVar16[1] = uVar4;
      puVar16[2] = uVar5;
      puVar16[3] = uVar6;
      *(undefined8 *)(puVar16 + 4) = 0x7265767265532e6b;
      *(undefined1 *)(puVar16 + 6) = 0;
      puStack_138 = puVar16;
      if ((bStack_1a8 & 1) == 0) {
        if (bStack_1a8 >> 1 != 0) goto LAB_06d6d6ff;
      }
      else if (CONCAT26(uStack_19a,
                        CONCAT15(uStack_19b,
                                 CONCAT14(uStack_19c,
                                          CONCAT13(uStack_19d,CONCAT21(uStack_19f,bStack_1a0))))) !=
               0) {
LAB_06d6d6ff:
        func_0x048631d0(&bStack_d8,&uStack_148);
        uVar14 = func_0x04864970(&bStack_168,&bStack_1a8);
        func_0x04863790(uVar14,&bStack_d8);
        FUN_04863610(&bStack_d8);
      }
      if ((uStack_148 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_138,uStack_148 & 0xfffffffffffffffe);
      }
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 6;
      uStack_1a5 = 0x72;
      uStack_1a7 = 0x6576;
      uStack_1a4 = 0;
      func_0x048631d0(&uStack_148,lStack_58);
      uVar14 = func_0x04864970(&bStack_168,&bStack_1a8);
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 6;
      uStack_1a5 = 0x70;
      uStack_1a7 = 0x7061;
      uStack_1a4 = 0;
      uVar14 = func_0x04864970(&uStack_108,&bStack_1a8);
      func_0x04863740(uVar14,&bStack_168);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      FUN_04863610(&bStack_168);
      func_0x04863060(&bStack_d8,0);
      bStack_1a8 = 0xc;
      uStack_1a3 = 0x6c;
      uStack_1a2 = 0x65;
      uStack_1a7 = 0x6f6c;
      uStack_1a5 = 99;
      uStack_1a4 = 0x61;
      uStack_1a1 = 0;
      func_0x048631d0(&uStack_148,lVar13);
      uVar14 = func_0x04864970(&bStack_d8,&bStack_1a8);
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 8;
      uStack_1a7 = 0x616e;
      uStack_1a5 = 0x6d;
      uStack_1a4 = 0x65;
      uStack_1a3 = 0;
      func_0x048631d0(&uStack_148,lStack_60);
      uVar14 = func_0x04864970(&bStack_d8,&bStack_1a8);
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      if ((*(byte *)(lStack_a8 + 800) & 1) == 0) {
        if (*(byte *)(lStack_a8 + 800) >> 1 != 0) goto LAB_06d6d907;
      }
      else if (*(long *)(lStack_a8 + 0x328) != 0) {
LAB_06d6d907:
        bStack_1a8 = 6;
        uStack_1a5 = 0x72;
        uStack_1a7 = 0x6576;
        uStack_1a4 = 0;
        func_0x048631d0(&uStack_148,lStack_68);
        uVar14 = func_0x04864970(&bStack_d8,&bStack_1a8);
        func_0x04863790(uVar14,&uStack_148);
        FUN_04863610(&uStack_148);
        if ((bStack_1a8 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_198,
                             CONCAT17(uStack_1a1,
                                      CONCAT16(uStack_1a2,
                                               CONCAT15(uStack_1a3,
                                                        CONCAT14(uStack_1a4,
                                                                 CONCAT13(uStack_1a5,
                                                                          CONCAT21(uStack_1a7,
                                                                                   bStack_1a8))))))
                             & 0xfffffffffffffffe);
        }
      }
      bStack_1a8 = 4;
      uStack_1a7 = 0x736f;
      uStack_1a5 = 0;
      uVar14 = func_0x04864970(&uStack_108,&bStack_1a8);
      func_0x04863740(uVar14,&bStack_d8);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      FUN_04863610(&bStack_d8);
      func_0x04863060(&bStack_d8,0);
      bStack_1a8 = 0x14;
      uStack_1a7 = 0x7665;
      uStack_1a5 = 0x65;
      uStack_1a4 = 0x6e;
      uStack_1a3 = 0x74;
      uStack_1a2 = 0x46;
      uStack_1a1 = 0x6c;
      bStack_1a0 = 0x61;
      uStack_19f = 0x7367;
      uStack_19d = 0;
      func_0x04863100(&uStack_148,0x200000);
      uVar14 = func_0x04864970(&bStack_d8,&bStack_1a8);
      func_0x04863790(uVar14,&uStack_148);
      FUN_04863610(&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      bStack_1a8 = 6;
      uStack_1a5 = 99;
      uStack_1a7 = 0x7475;
      uStack_1a4 = 0;
      uVar14 = func_0x04864970(&uStack_108,&bStack_1a8);
      func_0x04863740(uVar14,&bStack_d8);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      FUN_04863610(&bStack_d8);
      bStack_1a8 = 6;
      uStack_1a5 = 0x74;
      uStack_1a7 = 0x7865;
      uStack_1a4 = 0;
      uVar14 = func_0x04864970(auStack_c0,&bStack_1a8);
      func_0x04863740(uVar14,&uStack_108);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      FUN_04863610(&uStack_108);
      if ((DAT_0f5a3408 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5a3408), iVar12 != 0)) {
        bStack_1a8 = 0xfe;
        uStack_1a7 = 0x30de;
        uStack_1a5 = 1;
        uStack_1a4 = 0;
        uStack_1a3 = 0;
        uStack_1a2 = 0;
        uStack_1a1 = 0;
        func_0x06d6bd00(&DAT_0f5a33f0,&bStack_1a8,1);
        func_0x0eee2f40(&UNK_06d6bdc0,&DAT_0f5a33f0,0xf53dab8);
        func_0x0410844d(&DAT_0f5a3408);
      }
      func_0x04863060(&uStack_148,0);
      func_0x04863060(&bStack_d8,0);
      puVar20 = _DAT_0f5a33f0;
      puVar3 = _DAT_0f5a33f8;
      for (puVar15 = *(undefined8 **)(uStack_110 + 0x80); _DAT_0f5a33f0 = puVar20,
          _DAT_0f5a33f8 = puVar3, puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
        if (puVar20 == puVar3) {
LAB_06d6dc10:
          if (puVar20 == puVar3) goto LAB_06d6dca0;
        }
        else {
          if ((*(byte *)(puVar15 + 5) & 1) == 0) {
            lVar13 = (long)puVar15 + 0x29;
            uVar19 = (ulong)(*(byte *)(puVar15 + 5) >> 1);
          }
          else {
            lVar13 = puVar15[7];
            uVar19 = puVar15[6];
          }
          do {
            uVar14 = *puVar20;
            uVar17 = func_0x0eee2e90(uVar14);
            if (uVar17 == uVar19) {
              if (uVar17 == 0xffffffffffffffff) {
                func_0x04882ee0();
                goto LAB_06d6e21d;
              }
              iVar12 = func_0x0eee3000(lVar13,uVar14,uVar17);
              if (iVar12 == 0) goto LAB_06d6dc10;
            }
            puVar20 = puVar20 + 1;
          } while (puVar20 != puVar3);
LAB_06d6dca0:
          uVar14 = func_0x04864970(&bStack_d8,puVar15 + 5);
          func_0x04863740(uVar14,puVar15 + 8);
        }
        puVar20 = _DAT_0f5a33f0;
        puVar3 = _DAT_0f5a33f8;
      }
      pbVar23 = *(byte **)(uStack_110 + 0x98);
      pbStack_38 = *(byte **)(uStack_110 + 0xa0);
      if (pbVar23 != pbStack_38) {
        do {
          puVar15 = _DAT_0f5a33f8;
          puVar20 = _DAT_0f5a33f0;
          if (_DAT_0f5a33f0 == _DAT_0f5a33f8) {
LAB_06d6dcd0:
            if (puVar20 == puVar15) goto LAB_06d6dd70;
          }
          else {
            if ((*pbVar23 & 1) == 0) {
              pbVar21 = pbVar23 + 1;
              uVar19 = (ulong)(*pbVar23 >> 1);
            }
            else {
              pbVar21 = *(byte **)(pbVar23 + 0x10);
              uVar19 = *(ulong *)(pbVar23 + 8);
            }
            do {
              uVar14 = *puVar20;
              uVar17 = func_0x0eee2e90(uVar14);
              if (uVar17 == uVar19) {
                if (uVar17 == 0xffffffffffffffff) {
LAB_06d6e21d:
                  uVar14 = func_0x04882ee0();
                  func_0x041084d6(&DAT_0f5a3408);
                  puVar15 = puStack_170;
                  FUN_04863610(auStack_c0);
                  if ((bStack_f0 & 1) != 0) {
                    thunk_FUN_0ee326a0(puStack_e0,
                                       CONCAT62(uStack_ee,CONCAT11(uStack_ef,bStack_f0)) &
                                       0xfffffffffffffffe);
                  }
                  func_0x04886070(puVar15);
                  uVar14 = func_0x0eee2d70(uVar14);
                  uVar14 = FUN_04882e20(uVar14);
                  FUN_04882e20(uVar14);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar12 = func_0x0eee3000(pbVar21,uVar14,uVar17);
                if (iVar12 == 0) goto LAB_06d6dcd0;
              }
              puVar20 = puVar20 + 1;
            } while (puVar20 != puVar15);
LAB_06d6dd70:
            uVar14 = func_0x04864970(&bStack_d8,pbVar23);
            func_0x04863740(uVar14,pbVar23 + 0x18);
          }
          pbVar23 = pbVar23 + 0x30;
        } while (pbVar23 != pbStack_38);
      }
      param_1 = puStack_170;
      *(long *)(lStack_a8 + 0x2b0) = *(long *)(lStack_a8 + 0x2b0) + 1;
      func_0x04863100(&bStack_1a8);
      puVar26 = puStack_b0;
      uVar14 = func_0x04864680(&bStack_d8,&UNK_01343b6a);
      uVar19 = uStack_110;
      func_0x04863790(uVar14,&bStack_1a8);
      FUN_04863610(&bStack_1a8);
      func_0x06d6cd60(&bStack_d8,uVar19 + 0x40);
      func_0x06d0e320(&bStack_1a8,uVar19);
      func_0x06d6cd60(&bStack_d8,&bStack_1a8);
      bStack_168 = (byte)&uStack_190;
      uStack_167 = (undefined7)((ulong)&uStack_190 >> 8);
      func_0x06d71ad0(&bStack_168);
      uVar10 = uStack_1a3;
      uVar9 = uStack_1a4;
      uVar8 = uStack_1a5;
      uVar7 = uStack_1a7;
      bVar11 = bStack_1a8;
      lVar13 = CONCAT17(uStack_1a1,
                        CONCAT16(uStack_1a2,
                                 CONCAT15(uStack_1a3,
                                          CONCAT14(uStack_1a4,
                                                   CONCAT13(uStack_1a5,
                                                            CONCAT21(uStack_1a7,bStack_1a8))))));
      if (lVar13 != 0) {
        lVar25 = CONCAT26(uStack_19a,
                          CONCAT15(uStack_19b,
                                   CONCAT14(uStack_19c,
                                            CONCAT13(uStack_19d,CONCAT21(uStack_19f,bStack_1a0)))));
        lVar24 = lVar13;
        if (lVar13 != lVar25) {
          do {
            if ((*(byte *)(lVar25 + -0x18) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar25 + -8),
                                 *(ulong *)(lVar25 + -0x18) & 0xfffffffffffffffe);
            }
            lVar25 = lVar25 + -0x18;
          } while (lVar25 != lVar13);
          lVar24 = CONCAT17(uStack_1a1,
                            CONCAT16(uStack_1a2,
                                     CONCAT15(uStack_1a3,
                                              CONCAT14(uStack_1a4,
                                                       CONCAT13(uStack_1a5,
                                                                CONCAT21(uStack_1a7,bStack_1a8))))))
          ;
        }
        bStack_1a0 = bVar11;
        uStack_19f = uVar7;
        uStack_19d = uVar8;
        uStack_19c = uVar9;
        uStack_19b = uVar10;
        uStack_19a = (undefined2)((ulong)lVar13 >> 0x30);
        thunk_FUN_0ee326a0(lVar24,lStack_198 - lVar24);
        puVar26 = puStack_b0;
      }
      bStack_1a8 = 0x14;
      uStack_1a7 = 0x7250;
      uStack_1a5 = 0x6f;
      uStack_1a4 = 0x70;
      uStack_1a3 = 0x65;
      uStack_1a2 = 0x72;
      uStack_1a1 = 0x74;
      bStack_1a0 = 0x69;
      uStack_19f = 0x7365;
      uStack_19d = 0;
      uVar14 = func_0x04864970(&uStack_148,&bStack_1a8);
      func_0x04863740(uVar14,&bStack_d8);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      if (*(long *)(uStack_110 + 0xb8) != *(long *)(uStack_110 + 0xb0)) {
        func_0x04863060(&bStack_168,0);
        lVar13 = *(long *)(uStack_110 + 0xb8);
        if (*(long *)(uStack_110 + 0xb0) != lVar13) {
          lVar25 = *(long *)(uStack_110 + 0xb0) + 0x18;
          do {
            if (*(int *)(lVar25 + 0x14) == 4) {
              if (*(int *)(lVar25 + 0x10) == 0) {
                func_0x048630e0(&bStack_1a8,0);
              }
              else {
                fVar28 = (float)func_0x04863f80(0,lVar25);
                func_0x04863110(SUB84((double)(fVar28 / (float)*(int *)(lVar25 + 0x10)),0),
                                &bStack_1a8);
              }
            }
            else {
              func_0x04863480(&bStack_1a8,lVar25);
            }
            uVar14 = func_0x04864970(&bStack_168,lVar25 + -0x18);
            func_0x04863790(uVar14);
            FUN_04863610(&bStack_1a8);
            lVar24 = lVar25 + 0x18;
            lVar25 = lVar25 + 0x30;
          } while (lVar24 != lVar13);
        }
        bStack_1a8 = 0x18;
        uStack_1a7 = 0x654d;
        uStack_1a5 = 0x61;
        uStack_1a4 = 0x73;
        uStack_1a3 = 0x75;
        uStack_1a2 = 0x72;
        uStack_1a1 = 0x65;
        bStack_1a0 = 0x6d;
        uStack_19f = 0x6e65;
        uStack_19d = 0x74;
        uStack_19c = 0x73;
        uStack_19b = 0;
        uVar14 = func_0x04864970(&uStack_148,&bStack_1a8);
        func_0x04863740(uVar14,&bStack_168);
        puVar26 = puStack_b0;
        if ((bStack_1a8 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_198,
                             CONCAT17(uStack_1a1,
                                      CONCAT16(uStack_1a2,
                                               CONCAT15(uStack_1a3,
                                                        CONCAT14(uStack_1a4,
                                                                 CONCAT13(uStack_1a5,
                                                                          CONCAT21(uStack_1a7,
                                                                                   bStack_1a8))))))
                             & 0xfffffffffffffffe);
        }
        FUN_04863610(&bStack_168);
      }
      bStack_1a8 = 8;
      uStack_1a7 = 0x6164;
      uStack_1a5 = 0x74;
      uStack_1a4 = 0x61;
      uStack_1a3 = 0;
      uVar14 = func_0x04864970(auStack_c0,&bStack_1a8);
      func_0x04863740(uVar14,&uStack_148);
      if ((bStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,
                           CONCAT17(uStack_1a1,
                                    CONCAT16(uStack_1a2,
                                             CONCAT15(uStack_1a3,
                                                      CONCAT14(uStack_1a4,
                                                               CONCAT13(uStack_1a5,
                                                                        CONCAT21(uStack_1a7,
                                                                                 bStack_1a8)))))) &
                           0xfffffffffffffffe);
      }
      FUN_04863610(&bStack_d8);
      FUN_04863610(&uStack_148);
      func_0x0b63d650(&bStack_98,auStack_c0);
      FUN_04863610(auStack_c0);
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 0x30))(plStack_80,uStack_110 + 8,&bStack_98);
      }
      uVar19 = (ulong)(bStack_98 >> 1);
      puVar18 = auStack_97;
      if ((bStack_98 & 1) != 0) {
        uVar19 = uStack_90;
        puVar18 = puStack_88;
      }
      func_0x0412f8c0(&bStack_f0,puVar18,uVar19);
      uStack_a0 = uStack_a0 + 1;
      if ((9 < uStack_a0) || (((bStack_f0 & 1) != 0 && (9999 < uStack_e8)))) {
        func_0x057d8ed0(param_1);
        if ((bStack_f0 & 1) == 0) {
          bStack_f0 = 0;
          puVar18 = &uStack_ef;
        }
        else {
          uStack_e8 = 0;
          puVar18 = puStack_e0;
        }
        *puVar18 = 0;
        uStack_a0 = 0;
      }
      if ((bStack_98 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_88);
      }
      uStack_110 = uStack_110 + 0x100;
      param_4 = uStack_e8;
    } while (uStack_110 != uStack_40);
  }
  bVar11 = bStack_f0 & 1;
  uVar19 = (ulong)(bStack_f0 >> 1);
  if (bVar11 != 0) {
    uVar19 = param_4;
  }
  if (uVar19 != 0) {
    func_0x057d8ed0(param_1,&bStack_f0);
    if ((bStack_f0 & 1) == 0) {
      bStack_f0 = 0;
      puVar18 = &uStack_ef;
    }
    else {
      uStack_e8 = 0;
      puVar18 = puStack_e0;
    }
    *puVar18 = 0;
    bVar11 = bStack_f0 & 1;
  }
  if (bVar11 != 0) {
    thunk_FUN_0ee326a0(puStack_e0,
                       CONCAT62(uStack_ee,CONCAT11(uStack_ef,bStack_f0)) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14630b8  Minecraft.Bedrock.Server
 */
