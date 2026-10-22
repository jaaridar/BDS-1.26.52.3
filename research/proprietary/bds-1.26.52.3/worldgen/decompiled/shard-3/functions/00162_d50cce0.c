/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd60cce0 (ELF vaddr 0xd50cce0)
 * Label: caller-of-callee
 * Body:  [[0d60cce0, 0d60d232] [0d60d240, 0d60d2c7] [0d60d2d0, 0d60d532] [0d60d540, 0d60d592] [0d60d5a0, 0d60d722] [0d60d730, 0d60d7d0] [0d60d7e0, 0d60d8b5] [0d60d8c0, 0d60d9f8] [0d60da00, 0d60daab] [0d60dab0, 0d60db02] [0d60db10, 0d60de00] [0d60de10, 0d60de62] [0d60de70, 0d60e028] [0d60e030, 0d60e0f2] [0d60e100, 0d60e1c9] [0d60e1d0, 0d60e381] [0d60e390, 0d60e3e8] [0d60e3f0, 0d60e497] [0d60e4a0, 0d60e4e6] [0d60e4f0, 0d60e6c9] [0d60e6d0, 0d60e972] [0d60e980, 0d60ead9] [0d60eae0, 0d60ebc1] [0d60ebd0, 0d60ec26] [0d60ec30, 0d60eceb] [0d60ecf0, 0d60ed42] [0d60ed50, 0d60ee12] [0d60ee20, 0d60eef9] [0d60ef00, 0d60ef45] [0d60ef50, 0d60efd4] [0d60efe0, 0d60f037] [0d60f040, 0d60f264] [0d60f270, 0d60f2c2] [0d60f2d0, 0d60f416] [0d60f45c, 0d60f480] [0d60f689, 0d60f696] [0d60fa0d, 0d60fa4c]]
 * Ghidra: FUN_0d60cce0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d60cce0(undefined8 param_1,int *******param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [8];
  code *pcVar2;
  ulong uVar3;
  short sVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined6 uVar7;
  undefined8 *******pppppppuVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int *******pppppppiVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  int ******ppppppiVar17;
  long *plVar18;
  int ******ppppppiVar19;
  int ******ppppppiVar20;
  undefined8 *******pppppppuVar21;
  undefined1 auVar22 [8];
  ulong uVar23;
  int *******pppppppiVar24;
  int *******pppppppiVar25;
  undefined8 ******ppppppuVar26;
  int ******ppppppiVar27;
  int *******pppppppiVar28;
  long lVar29;
  undefined8 *******pppppppuVar30;
  long lVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bStack_208;
  undefined1 uStack_207;
  undefined2 uStack_206;
  undefined1 uStack_204;
  undefined2 uStack_203;
  undefined1 uStack_201;
  undefined1 uStack_200;
  undefined4 uStack_1ff;
  undefined1 uStack_1fb;
  undefined1 uStack_1fa;
  undefined1 uStack_1f9;
  int *******pppppppiStack_1f8;
  int *******pppppppiStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1d8 [8];
  int *******pppppppiStack_1d0;
  int *******pppppppiStack_1c8;
  undefined8 uStack_1b8;
  int *******pppppppiStack_1b0;
  int *******pppppppiStack_1a8;
  int *******pppppppiStack_198;
  int *******pppppppiStack_190;
  int *******pppppppiStack_188;
  undefined1 uStack_180;
  int *******pppppppiStack_178;
  int *******pppppppiStack_170;
  int *******pppppppiStack_168;
  undefined8 uStack_158;
  int *******pppppppiStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  int ******ppppppiStack_140;
  int *******pppppppiStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int *******apppppppiStack_118 [2];
  int *******pppppppiStack_108;
  int *******pppppppiStack_100;
  int *******apppppppiStack_f8 [2];
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined6 uStack_de;
  int *******pppppppiStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  int *******pppppppiStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  int *******pppppppiStack_a8;
  int *******pppppppiStack_a0;
  int *******pppppppiStack_98;
  int *******pppppppiStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  long lStack_78;
  undefined *puStack_70;
  int *******apppppppiStack_68 [2];
  int *******pppppppiStack_58;
  long lStack_50;
  int *******pppppppiStack_48;
  int *******pppppppiStack_40;
  int *******pppppppiStack_38;
  
  bStack_e8 = 0x10;
  uStack_e7 = 0x7461646174656d;
  uStack_e0 = 0x61;
  uStack_df = 0;
  ppppppiVar19 = param_2[1];
  uStack_158 = param_4;
  lStack_50 = param_3;
  pppppppiStack_40 = param_2;
  if (ppppppiVar19 < param_2[2]) {
    ppppppiVar19[2] = (int *****)pppppppiStack_d8;
    *ppppppiVar19 = (int *****)0x7461646174656d10;
    ppppppiVar19[1] = (int *****)CONCAT62(uStack_de,0x61);
    param_2[1] = ppppppiVar19 + 3;
  }
  else {
    ppppppiVar19 = (int ******)func_0x04909a40(param_2,&bStack_e8);
    param_2[1] = ppppppiVar19;
    if ((bStack_e8 & 1) != 0) {
      func_0x0412a280(pppppppiStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
    }
  }
  bStack_e8 = 0x10;
  uStack_e7 = 0x7461646174656d;
  uStack_e0 = 0x61;
  uStack_df = 0;
  cVar9 = func_0x04864290(param_1);
  if (cVar9 == '\0') {
    bVar10 = 1;
    pppppppiVar13 = (int *******)&DAT_0f54fc40;
  }
  else {
    pppppppiVar13 = (int *******)func_0x04864990(param_1,&bStack_e8);
    bVar10 = func_0x04864260(pppppppiVar13);
    bVar10 = bVar10 ^ 1;
  }
  if ((bStack_e8 & 1) != 0) {
    func_0x0412a280(pppppppiStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
  }
  if (bVar10 == 0) goto LAB_0d60f36e;
  cVar9 = func_0x04864290(pppppppiVar13);
  if (cVar9 == '\0') {
    func_0x0d5ef090(auStack_1d8,param_2);
    pppppppiStack_198 = (int *******)0x0;
    pppppppiStack_190 = (int *******)0x0;
    pppppppiStack_188 = (int *******)0x0;
    pppppppiStack_1b0 = (int *******)((ulong)pppppppiStack_1b0 & 0xffffffffffffff00);
    uStack_1b8 = (int *******)&pppppppiStack_198;
    pppppppiStack_178 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppiStack_178 == (int *******)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    pppppppiStack_188 = pppppppiStack_178 + 3;
    bStack_208 = (byte)&pppppppiStack_198;
    uStack_207 = (undefined1)((ulong)&pppppppiStack_198 >> 8);
    uStack_206 = (undefined2)((ulong)&pppppppiStack_198 >> 0x10);
    uStack_204 = (undefined1)((ulong)&pppppppiStack_198 >> 0x20);
    uStack_203 = (undefined2)((ulong)&pppppppiStack_198 >> 0x28);
    uStack_201 = (undefined1)((ulong)&pppppppiStack_198 >> 0x38);
    uStack_200 = SUB81(&pppppppiStack_150,0);
    uStack_1ff = (undefined4)((ulong)&pppppppiStack_150 >> 8);
    uStack_1fb = (undefined1)((ulong)&pppppppiStack_150 >> 0x28);
    uStack_1fa = (undefined1)((ulong)&pppppppiStack_150 >> 0x30);
    uStack_1f9 = (undefined1)((ulong)&pppppppiStack_150 >> 0x38);
    pppppppiStack_1f8 = (int *******)&pppppppiStack_178;
    pppppppiStack_1f0 = (int *******)((ulong)pppppppiStack_1f0 & 0xffffffffffffff00);
    uVar23 = (ulong)auStack_1d8 & 1;
    pppppppiStack_198 = pppppppiStack_178;
    pppppppiStack_150 = pppppppiStack_178;
    if (((ulong)auStack_1d8 & 1) == 0) {
      pppppppiStack_178[2] = (int ******)pppppppiStack_1c8;
      *pppppppiStack_178 = (int ******)auStack_1d8;
      pppppppiStack_178[1] = (int ******)pppppppiStack_1d0;
    }
    else {
      pppppppiStack_190 = pppppppiStack_178;
      func_0x0412e5e0(pppppppiStack_178,pppppppiStack_1c8,pppppppiStack_1d0);
    }
    pppppppiStack_190 = pppppppiStack_178 + 3;
    bStack_e8 = 0xa0;
    uStack_e7 = 0xf47cc;
    uStack_e0 = 0;
    uStack_df = 0;
    uStack_de = 0;
    pppppppiStack_d8 = (int *******)0x0;
    uStack_d0 = 0;
    func_0x0488f040(&uStack_e0,pppppppiStack_198,pppppppiStack_190,
                    ((long)pppppppiStack_190 - (long)pppppppiStack_198 >> 3) * -0x5555555555555555);
    uStack_c8 = 0x200000009;
    bStack_e8 = 0x78;
    uStack_e7 = 0xf47b7;
    func_0x0d5eed10(uStack_158,&bStack_e8);
    bStack_e8 = 0xa0;
    uStack_e7 = 0xf47cc;
    pppppppiVar13 = (int *******)CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0));
    if (pppppppiVar13 != (int *******)0x0) {
      pppppppiVar25 = pppppppiVar13;
      pppppppiVar24 = pppppppiStack_d8;
      if (pppppppiVar13 != pppppppiStack_d8) {
        do {
          if (((ulong)pppppppiVar24[-3] & 1) != 0) {
            func_0x0412a280(pppppppiVar24[-1],(ulong)pppppppiVar24[-3] & 0xfffffffffffffffe);
          }
          pppppppiVar24 = pppppppiVar24 + -3;
        } while (pppppppiVar24 != pppppppiVar13);
        pppppppiVar25 = (int *******)CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0));
      }
      pppppppiStack_d8 = pppppppiVar13;
      func_0x0412a280(pppppppiVar25,uStack_d0 - (long)pppppppiVar25);
    }
    pppppppiVar25 = pppppppiStack_198;
    pppppppiVar13 = pppppppiStack_190;
    if (pppppppiStack_198 != (int *******)0x0) {
      for (; pppppppiVar25 != pppppppiVar13; pppppppiVar13 = pppppppiVar13 + -3) {
        if (((ulong)pppppppiVar13[-3] & 1) != 0) {
          func_0x0412a280(pppppppiVar13[-1],(ulong)pppppppiVar13[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppiStack_190 = pppppppiVar25;
      func_0x0412a280(pppppppiStack_198,(long)pppppppiStack_188 - (long)pppppppiStack_198);
    }
    if (uVar23 != 0) {
      func_0x0412a280(pppppppiStack_1c8,(ulong)auStack_1d8 & 0xfffffffffffffffe);
    }
    goto LAB_0d60f36e;
  }
  pppppppuStack_88 = &pppppppuStack_80;
  pppppppuStack_80 = (undefined8 *******)0x0;
  lStack_78 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  uStack_de = 0;
  pppppppiStack_d8 = (int *******)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  pppppppiStack_c0 = (int *******)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pppppppiStack_a8 = (int *******)0x0;
  pppppppiStack_a0 = (int *******)0x0;
  pppppppiStack_98 = (int *******)0x0;
  pppppppiStack_90 = (int *******)0x0;
  pppppppiStack_198 = (int *******)CONCAT35(pppppppiStack_198._5_3_,0x6c727506);
  func_0x0d6050c0(&bStack_208,pppppppiVar13,&pppppppiStack_198,param_2,uStack_158,1);
  if ((uStack_d0 & 1) != 0) {
    func_0x0412a280(pppppppiStack_c0,uStack_d0 & 0xfffffffffffffffe);
  }
  pppppppiStack_c0 = pppppppiStack_1f8;
  uStack_d0 = CONCAT17(uStack_201,
                       CONCAT25(uStack_203,
                                CONCAT14(uStack_204,
                                         CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))));
  uStack_c8 = CONCAT17(uStack_1f9,
                       CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
  bStack_208 = 0;
  uStack_207 = 0;
  if (((ulong)pppppppiStack_198 & 1) != 0) {
    func_0x0412a280(pppppppiStack_188,(ulong)pppppppiStack_198 & 0xfffffffffffffffe);
  }
  pppppppiStack_198 = (int *******)0x65736e6563696c0e;
  pppppppiStack_190 = (int *******)((ulong)pppppppiStack_190 & 0xffffffffffffff00);
  func_0x0d6050c0(&bStack_208,pppppppiVar13,&pppppppiStack_198,param_2,uStack_158,1);
  if ((uStack_b8 & 1) != 0) {
    func_0x0412a280(pppppppiStack_a8,uStack_b8 & 0xfffffffffffffffe);
  }
  pppppppiStack_a8 = pppppppiStack_1f8;
  uStack_b8 = CONCAT17(uStack_201,
                       CONCAT25(uStack_203,
                                CONCAT14(uStack_204,
                                         CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))));
  bStack_208 = 0;
  uStack_207 = 0;
  if (((ulong)pppppppiStack_198 & 1) != 0) {
    func_0x0412a280(pppppppiStack_188,(ulong)pppppppiStack_198 & 0xfffffffffffffffe);
  }
  bStack_208 = 0x18;
  uStack_207 = 0x70;
  uStack_206 = 0x6f72;
  uStack_204 = 100;
  uStack_203 = 0x6375;
  uStack_201 = 0x74;
  uStack_200 = 0x5f;
  uStack_1ff = 0x65707974;
  uStack_1fb = 0;
  ppppppiVar19 = param_2[1];
  apppppppiStack_f8[0] = param_2;
  if (ppppppiVar19 < param_2[2]) {
    ppppppiVar19[2] = (int *****)pppppppiStack_1f8;
    *ppppppiVar19 = (int *****)0x746375646f727018;
    ppppppiVar19[1] = (int *****)CONCAT17(uStack_1f9,CONCAT16(uStack_1fa,0x657079745f));
    ppppppiVar19 = ppppppiVar19 + 3;
    param_2[1] = ppppppiVar19;
  }
  else {
    ppppppiVar19 = (int ******)func_0x04909a40(param_2,&bStack_208);
  }
  param_2[1] = ppppppiVar19;
  if ((bStack_208 & 1) != 0) {
    func_0x0412a280(pppppppiStack_1f8,
                    CONCAT17(uStack_201,
                             CONCAT25(uStack_203,
                                      CONCAT14(uStack_204,
                                               CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_208 = 0x18;
  uStack_207 = 0x70;
  uStack_206 = 0x6f72;
  uStack_204 = 100;
  uStack_203 = 0x6375;
  uStack_201 = 0x74;
  uStack_200 = 0x5f;
  uStack_1ff = 0x65707974;
  uStack_1fb = 0;
  func_0x0d6050c0(auStack_1d8,pppppppiVar13,&bStack_208,param_2,uStack_158,1);
  if ((bStack_208 & 1) != 0) {
    func_0x0412a280(pppppppiStack_1f8,
                    CONCAT17(uStack_201,
                             CONCAT25(uStack_203,
                                      CONCAT14(uStack_204,
                                               CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))
                                     )) & 0xfffffffffffffffe);
  }
  if (((ulong)auStack_1d8 & 1) == 0) {
    pppppppiVar25 = (int *******)((ulong)auStack_1d8 >> 1 & 0x7f);
    if (pppppppiVar25 != (int *******)0x0) goto LAB_0d60d273;
LAB_0d60d426:
    if (((ulong)pppppppiStack_a0 & 1) != 0) {
      func_0x0412a280(pppppppiStack_90,(ulong)pppppppiStack_a0 & 0xfffffffffffffffe);
    }
    ppppppiVar19 = param_2[1];
    bVar10 = *(byte *)(ppppppiVar19 + -3);
    pppppppiStack_a0 = (int *******)auStack_1d8;
    pppppppiStack_98 = pppppppiStack_1d0;
    pppppppiStack_90 = pppppppiStack_1c8;
  }
  else {
    pppppppiVar25 = pppppppiStack_1d0;
    if (pppppppiStack_1d0 == (int *******)0x0) goto LAB_0d60d426;
LAB_0d60d273:
    if (pppppppiVar25 == (int *******)0x5) {
      pppppppiVar25 = pppppppiStack_1c8;
      if (((ulong)auStack_1d8 & 1) == 0) {
        pppppppiVar25 = (int *******)(auStack_1d8 + 1);
      }
      if (*(char *)((long)pppppppiVar25 + 4) == DAT_011b4e05 &&
          *(int *)pppppppiVar25 == _DAT_011b4e01) goto LAB_0d60d426;
    }
    func_0x0d5ef090(&pppppppiStack_178,param_2);
    uStack_1b8 = (int *******)0x0;
    pppppppiStack_1b0 = (int *******)0x0;
    pppppppiStack_1a8 = (int *******)0x0;
    uStack_148 = 0;
    pppppppiStack_150 = (int *******)&uStack_1b8;
    pppppppiStack_138 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppiStack_138 == (int *******)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    pppppppiStack_1a8 = pppppppiStack_138 + 3;
    pppppppiStack_190 = (int *******)apppppppiStack_118;
    pppppppiStack_188 = (int *******)&pppppppiStack_138;
    uStack_180 = 0;
    uVar23 = (ulong)pppppppiStack_178 & 1;
    uStack_1b8 = pppppppiStack_138;
    pppppppiStack_198 = (int *******)&uStack_1b8;
    apppppppiStack_118[0] = pppppppiStack_138;
    if (((ulong)pppppppiStack_178 & 1) == 0) {
      pppppppiStack_138[2] = (int ******)pppppppiStack_168;
      *pppppppiStack_138 = (int ******)pppppppiStack_178;
      pppppppiStack_138[1] = (int ******)pppppppiStack_170;
    }
    else {
      pppppppiStack_1b0 = pppppppiStack_138;
      func_0x0412e5e0(pppppppiStack_138,pppppppiStack_168,pppppppiStack_170);
    }
    pppppppiStack_1b0 = pppppppiStack_138 + 3;
    bStack_208 = 0xa0;
    uStack_207 = 0xcc;
    uStack_206 = 0xf47;
    uStack_204 = 0;
    uStack_203 = 0;
    uStack_201 = 0;
    uStack_200 = 0;
    uStack_1ff = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    pppppppiStack_1f8 = (int *******)0x0;
    pppppppiStack_1f0 = (int *******)0x0;
    func_0x0488f040(&uStack_200,uStack_1b8,pppppppiStack_1b0,
                    ((long)pppppppiStack_1b0 - (long)uStack_1b8 >> 3) * -0x5555555555555555);
    puStack_1e8 = (undefined1 *)0x20000000c;
    bStack_208 = 0x78;
    uStack_207 = 0xb7;
    uStack_206 = 0xf47;
    uStack_204 = 0;
    uStack_203 = 0;
    uStack_201 = 0;
    func_0x0d5eed10(uStack_158,&bStack_208);
    bStack_208 = 0xa0;
    uStack_207 = 0xcc;
    uStack_206 = 0xf47;
    uStack_204 = 0;
    uStack_203 = 0;
    uStack_201 = 0;
    pppppppiVar25 =
         (int *******)
         CONCAT17(uStack_1f9,
                  CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
    if (pppppppiVar25 != (int *******)0x0) {
      pppppppiVar24 = pppppppiVar25;
      pppppppiVar28 = pppppppiStack_1f8;
      if (pppppppiVar25 != pppppppiStack_1f8) {
        do {
          if (((ulong)pppppppiVar28[-3] & 1) != 0) {
            func_0x0412a280(pppppppiVar28[-1],(ulong)pppppppiVar28[-3] & 0xfffffffffffffffe);
          }
          pppppppiVar28 = pppppppiVar28 + -3;
        } while (pppppppiVar28 != pppppppiVar25);
        pppppppiVar24 =
             (int *******)
             CONCAT17(uStack_1f9,
                      CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
      }
      pppppppiStack_1f8 = pppppppiVar25;
      func_0x0412a280(pppppppiVar24,(long)pppppppiStack_1f0 - (long)pppppppiVar24);
    }
    pppppppiVar24 = uStack_1b8;
    pppppppiVar25 = pppppppiStack_1b0;
    if (uStack_1b8 != (int *******)0x0) {
      for (; pppppppiVar24 != pppppppiVar25; pppppppiVar25 = pppppppiVar25 + -3) {
        if (((ulong)pppppppiVar25[-3] & 1) != 0) {
          func_0x0412a280(pppppppiVar25[-1],(ulong)pppppppiVar25[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppiStack_1b0 = pppppppiVar24;
      func_0x0412a280(uStack_1b8,(long)pppppppiStack_1a8 - (long)uStack_1b8);
    }
    if (uVar23 == 0) {
      if (((ulong)auStack_1d8 & 1) != 0) goto LAB_0d60dd25;
LAB_0d60d5ed:
      ppppppiVar19 = param_2[1];
      bVar10 = *(byte *)(ppppppiVar19 + -3);
    }
    else {
      func_0x0412a280(pppppppiStack_168,(ulong)pppppppiStack_178 & 0xfffffffffffffffe);
      if (((ulong)auStack_1d8 & 1) == 0) goto LAB_0d60d5ed;
LAB_0d60dd25:
      func_0x0412a280(pppppppiStack_1c8,(ulong)auStack_1d8 & 0xfffffffffffffffe);
      ppppppiVar19 = param_2[1];
      bVar10 = *(byte *)(ppppppiVar19 + -3);
    }
  }
  ppppppiVar20 = ppppppiVar19 + -3;
  if ((bVar10 & 1) != 0) {
    func_0x0412a280(ppppppiVar19[-1],(ulong)ppppppiVar19[-3] & 0xfffffffffffffffe);
  }
  param_2[1] = ppppppiVar20;
  bStack_208 = 0xe;
  uStack_207 = 0x61;
  uStack_206 = 0x7475;
  uStack_204 = 0x68;
  uStack_203 = 0x726f;
  uStack_201 = 0x73;
  uStack_200 = 0;
  apppppppiStack_68[0] = param_2;
  if (ppppppiVar20 < param_2[2]) {
    ppppppiVar20[2] = (int *****)pppppppiStack_1f8;
    *ppppppiVar20 = (int *****)0x73726f687475610e;
    ppppppiVar20[1] =
         (int *****)
         ((ulong)CONCAT16(uStack_1f9,CONCAT15(uStack_1fa,CONCAT14(uStack_1fb,uStack_1ff))) << 8);
    param_2[1] = ppppppiVar19;
    param_2[1] = ppppppiVar19;
  }
  else {
    ppppppiVar19 = (int ******)func_0x04909a40(param_2,&bStack_208);
    param_2[1] = ppppppiVar19;
    if ((bStack_208 & 1) != 0) {
      func_0x0412a280(pppppppiStack_1f8,
                      CONCAT17(uStack_201,
                               CONCAT25(uStack_203,
                                        CONCAT14(uStack_204,
                                                 CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  bStack_208 = 0xe;
  uStack_207 = 0x61;
  uStack_206 = 0x7475;
  uStack_204 = 0x68;
  uStack_203 = 0x726f;
  uStack_201 = 0x73;
  uStack_200 = 0;
  cVar9 = func_0x04864290(pppppppiVar13);
  if (cVar9 == '\0') {
    puVar14 = &DAT_0f54fc40;
  }
  else {
    puVar14 = (undefined *)func_0x04864990(pppppppiVar13,&bStack_208);
    func_0x04864260(puVar14);
  }
  if ((bStack_208 & 1) != 0) {
    func_0x0412a280(pppppppiStack_1f8,
                    CONCAT17(uStack_201,
                             CONCAT25(uStack_203,
                                      CONCAT14(uStack_204,
                                               CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))
                                     )) & 0xfffffffffffffffe);
  }
  cVar9 = func_0x04864270(puVar14);
  uStack_128 = pppppppiVar13;
  pppppppiStack_100 = param_2;
  if (cVar9 == '\0') {
    func_0x0d5ef090(&uStack_1b8,param_2);
    auStack_1d8 = (undefined1  [8])0x0;
    pppppppiStack_1d0 = (int *******)0x0;
    pppppppiStack_1c8 = (int *******)0x0;
    pppppppiStack_178 = (int *******)auStack_1d8;
    pppppppiStack_170 = (int *******)((ulong)pppppppiStack_170 & 0xffffffffffffff00);
    pppppppiVar13 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (pppppppiVar13 == (int *******)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    pppppppiStack_1c8 = pppppppiVar13 + 3;
    pppppppiStack_198 = (int *******)auStack_1d8;
    pppppppiStack_190 = (int *******)&pppppppiStack_138;
    pppppppiStack_188 = (int *******)&pppppppiStack_150;
    uStack_180 = 0;
    uVar23 = (ulong)uStack_1b8 & 1;
    auStack_1d8 = (undefined1  [8])pppppppiVar13;
    pppppppiStack_150 = pppppppiVar13;
    pppppppiStack_138 = pppppppiVar13;
    if (((ulong)uStack_1b8 & 1) == 0) {
      pppppppiVar13[2] = (int ******)pppppppiStack_1a8;
      *pppppppiVar13 = (int ******)uStack_1b8;
      pppppppiVar13[1] = (int ******)pppppppiStack_1b0;
    }
    else {
      pppppppiStack_1d0 = pppppppiVar13;
      func_0x0412e5e0(pppppppiVar13,pppppppiStack_1a8,pppppppiStack_1b0);
    }
    pppppppiStack_1d0 = pppppppiStack_150 + 3;
    bStack_208 = 0xa0;
    uStack_207 = 0xcc;
    uStack_206 = 0xf47;
    uStack_204 = 0;
    uStack_203 = 0;
    uStack_201 = 0;
    uStack_200 = 0;
    uStack_1ff = 0;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    pppppppiStack_1f8 = (int *******)0x0;
    pppppppiStack_1f0 = (int *******)0x0;
    func_0x0488f040(&uStack_200,auStack_1d8,pppppppiStack_1d0,
                    ((long)pppppppiStack_1d0 - (long)auStack_1d8 >> 3) * -0x5555555555555555);
    puStack_1e8 = (undefined1 *)0x200000009;
    bStack_208 = 0x78;
    uStack_207 = 0xb7;
    uStack_206 = 0xf47;
    uStack_204 = 0;
    uStack_203 = 0;
    uStack_201 = 0;
    func_0x0d5eed10(uStack_158,&bStack_208);
    bStack_208 = 0xa0;
    uStack_207 = 0xcc;
    uStack_206 = 0xf47;
    uStack_204 = 0;
    uStack_203 = 0;
    uStack_201 = 0;
    pppppppiVar13 =
         (int *******)
         CONCAT17(uStack_1f9,
                  CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
    if (pppppppiVar13 != (int *******)0x0) {
      pppppppiVar25 = pppppppiVar13;
      pppppppiVar24 = pppppppiStack_1f8;
      if (pppppppiVar13 != pppppppiStack_1f8) {
        do {
          if (((ulong)pppppppiVar24[-3] & 1) != 0) {
            func_0x0412a280(pppppppiVar24[-1],(ulong)pppppppiVar24[-3] & 0xfffffffffffffffe);
          }
          pppppppiVar24 = pppppppiVar24 + -3;
        } while (pppppppiVar24 != pppppppiVar13);
        pppppppiVar25 =
             (int *******)
             CONCAT17(uStack_1f9,
                      CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
      }
      pppppppiStack_1f8 = pppppppiVar13;
      func_0x0412a280(pppppppiVar25,(long)pppppppiStack_1f0 - (long)pppppppiVar25);
    }
    auVar22 = auStack_1d8;
    pppppppiVar13 = pppppppiStack_1d0;
    if (auStack_1d8 != (undefined1  [8])0x0) {
      for (; auVar22 != (undefined1  [8])pppppppiVar13; pppppppiVar13 = pppppppiVar13 + -3) {
        if (((ulong)pppppppiVar13[-3] & 1) != 0) {
          func_0x0412a280(pppppppiVar13[-1],(ulong)pppppppiVar13[-3] & 0xfffffffffffffffe);
        }
      }
      pppppppiStack_1d0 = (int *******)auVar22;
      func_0x0412a280(auStack_1d8,(long)pppppppiStack_1c8 - (long)auStack_1d8);
    }
    if (uVar23 != 0) {
      func_0x0412a280(pppppppiStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x04865530(&pppppppiStack_150,puVar14);
    func_0x048655b0(&pppppppiStack_138,puVar14);
    while( true ) {
      cVar9 = func_0x04862c80(&pppppppiStack_150,&pppppppiStack_138);
      if (cVar9 != '\0') break;
      uVar15 = func_0x04862b80(&pppppppiStack_150);
      cVar9 = func_0x04865490(uVar15);
      if (cVar9 == '\0') {
        func_0x0d5ef090(&uStack_1b8,param_2);
        auStack_1d8 = (undefined1  [8])0x0;
        pppppppiStack_1d0 = (int *******)0x0;
        pppppppiStack_1c8 = (int *******)0x0;
        pppppppiStack_178 = (int *******)auStack_1d8;
        pppppppiStack_170 = (int *******)((ulong)pppppppiStack_170 & 0xffffffffffffff00);
        pppppppiVar13 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (pppppppiVar13 == (int *******)0x0) {
          FUN_0eec74c0(0x18,0);
        }
        pppppppiVar25 = uStack_1b8;
        pppppppiStack_1c8 = pppppppiVar13 + 3;
        pppppppiStack_198 = (int *******)auStack_1d8;
        pppppppiStack_190 = (int *******)apppppppiStack_f8;
        pppppppiStack_188 = (int *******)apppppppiStack_118;
        uStack_180 = 0;
        auStack_1d8 = (undefined1  [8])pppppppiVar13;
        apppppppiStack_118[0] = pppppppiVar13;
        apppppppiStack_f8[0] = pppppppiVar13;
        if (((ulong)uStack_1b8 & 1) == 0) {
          pppppppiVar13[2] = (int ******)pppppppiStack_1a8;
          *pppppppiVar13 = (int ******)uStack_1b8;
          pppppppiVar13[1] = (int ******)pppppppiStack_1b0;
        }
        else {
          pppppppiStack_1d0 = pppppppiVar13;
          func_0x0412e5e0(pppppppiVar13,pppppppiStack_1a8,pppppppiStack_1b0);
        }
        pppppppiStack_1d0 = apppppppiStack_118[0] + 3;
        bStack_208 = 0xa0;
        uStack_207 = 0xcc;
        uStack_206 = 0xf47;
        uStack_204 = 0;
        uStack_203 = 0;
        uStack_201 = 0;
        uStack_200 = 0;
        uStack_1ff = 0;
        uStack_1fb = 0;
        uStack_1fa = 0;
        uStack_1f9 = 0;
        pppppppiStack_1f8 = (int *******)0x0;
        pppppppiStack_1f0 = (int *******)0x0;
        func_0x0488f040(&uStack_200,auStack_1d8,pppppppiStack_1d0,
                        ((long)pppppppiStack_1d0 - (long)auStack_1d8 >> 3) * -0x5555555555555555);
        puStack_1e8 = (undefined1 *)0x200000009;
        bStack_208 = 0x78;
        uStack_207 = 0xb7;
        uStack_206 = 0xf47;
        uStack_204 = 0;
        uStack_203 = 0;
        uStack_201 = 0;
        func_0x0d5eed10(uStack_158,&bStack_208);
        bStack_208 = 0xa0;
        uStack_207 = 0xcc;
        uStack_206 = 0xf47;
        uStack_204 = 0;
        uStack_203 = 0;
        uStack_201 = 0;
        pppppppiVar13 =
             (int *******)
             CONCAT17(uStack_1f9,
                      CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
        if (pppppppiVar13 != (int *******)0x0) {
          pppppppiVar24 = pppppppiVar13;
          pppppppiVar28 = pppppppiStack_1f8;
          if (pppppppiVar13 != pppppppiStack_1f8) {
            do {
              if (((ulong)pppppppiVar28[-3] & 1) != 0) {
                func_0x0412a280(pppppppiVar28[-1],(ulong)pppppppiVar28[-3] & 0xfffffffffffffffe);
              }
              pppppppiVar28 = pppppppiVar28 + -3;
            } while (pppppppiVar28 != pppppppiVar13);
            pppppppiVar24 =
                 (int *******)
                 CONCAT17(uStack_1f9,
                          CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))))
            ;
          }
          pppppppiStack_1f8 = pppppppiVar13;
          func_0x0412a280(pppppppiVar24,(long)pppppppiStack_1f0 - (long)pppppppiVar24);
        }
        auVar22 = auStack_1d8;
        pppppppiVar13 = pppppppiStack_1d0;
        pppppppiVar24 = uStack_1b8;
        pppppppiVar28 = pppppppiStack_1a8;
        if (auStack_1d8 != (undefined1  [8])0x0) {
          for (; auVar22 != (undefined1  [8])pppppppiVar13; pppppppiVar13 = pppppppiVar13 + -3) {
            if (((ulong)pppppppiVar13[-3] & 1) != 0) {
              func_0x0412a280(pppppppiVar13[-1],(ulong)pppppppiVar13[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppiStack_1d0 = (int *******)auVar22;
          func_0x0412a280(auStack_1d8,(long)pppppppiStack_1c8 - (long)auStack_1d8);
          pppppppiVar24 = uStack_1b8;
          pppppppiVar28 = pppppppiStack_1a8;
        }
      }
      else {
        pppppppiStack_198 = (int *******)((ulong)pppppppiStack_198 & 0xffffffffffff0000);
        FUN_04863cb0(&bStack_208,uVar15,&pppppppiStack_198);
        pppppppiVar25 = (int *******)CONCAT62(uStack_de,CONCAT11(uStack_df,uStack_e0));
        if (pppppppiVar25 < pppppppiStack_d8) {
          pppppppiVar25[2] = (int ******)pppppppiStack_1f8;
          *pppppppiVar25 =
               (int ******)
               CONCAT17(uStack_201,
                        CONCAT25(uStack_203,
                                 CONCAT14(uStack_204,
                                          CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))));
          pppppppiVar25[1] =
               (int ******)
               CONCAT17(uStack_1f9,
                        CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
          bStack_208 = 0;
          uStack_207 = 0;
          uStack_206 = 0;
          uStack_204 = 0;
          uStack_203 = 0;
          uStack_201 = 0;
          uStack_200 = 0;
          uStack_1ff = 0;
          uStack_1fb = 0;
          uStack_1fa = 0;
          uStack_1f9 = 0;
          pppppppiStack_1f8 = (int *******)0x0;
          pppppppiVar25 = pppppppiVar25 + 3;
        }
        else {
          lVar29 = CONCAT71(uStack_e7,bStack_e8);
          lVar31 = (long)pppppppiVar25 - lVar29;
          uVar23 = (lVar31 >> 3) * -0x5555555555555555 + 1;
          pppppppiVar13 = pppppppiStack_d8;
          if (0xaaaaaaaaaaaaaaa < uVar23) goto LAB_0d60f3fb;
          pppppppiVar13 = (int *******)((long)pppppppiStack_d8 - lVar29);
          uVar3 = ((long)pppppppiVar13 >> 3) * 0x5555555555555556;
          if (uVar23 < uVar3) {
            uVar23 = uVar3;
          }
          if (0x555555555555554 < (ulong)(((long)pppppppiVar13 >> 3) * -0x5555555555555555)) {
            uVar23 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar23) goto LAB_0d60f3f6;
          lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0x18);
          if (lVar16 == 0) {
            FUN_0eec74c0(uVar23 * 0x18,0);
          }
          pppppppiVar24 = (int *******)(lVar16 + uVar23 * 0x18);
          *(int ********)(lVar16 + 0x10 + lVar31) = pppppppiStack_1f8;
          *(undefined8 *)(lVar16 + lVar31) =
               CONCAT17(uStack_201,
                        CONCAT25(uStack_203,
                                 CONCAT14(uStack_204,
                                          CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))));
          ((undefined8 *)(lVar16 + lVar31))[1] =
               CONCAT17(uStack_1f9,
                        CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
          bStack_208 = 0;
          uStack_207 = 0;
          uStack_206 = 0;
          uStack_204 = 0;
          uStack_203 = 0;
          uStack_201 = 0;
          uStack_200 = 0;
          uStack_1ff = 0;
          uStack_1fb = 0;
          uStack_1fa = 0;
          uStack_1f9 = 0;
          pppppppiStack_1f8 = (int *******)0x0;
          pppppppiVar25 = (int *******)(lVar16 + 0x18 + lVar31);
          func_0x0eee2f00(lVar16,lVar29,lVar31);
          bStack_e8 = (byte)lVar16;
          uStack_e7 = (undefined7)((ulong)lVar16 >> 8);
          uStack_e0 = SUB81(pppppppiVar25,0);
          uVar5 = uStack_e0;
          uStack_df = (undefined1)((ulong)pppppppiVar25 >> 8);
          uVar6 = uStack_df;
          uStack_de = (undefined6)((ulong)pppppppiVar25 >> 0x10);
          uVar7 = uStack_de;
          param_2 = pppppppiStack_100;
          pppppppiStack_d8 = pppppppiVar24;
          if (lVar29 != 0) {
            func_0x0412a280(lVar29,pppppppiVar13);
            param_2 = pppppppiStack_100;
            pppppppiVar24 = pppppppiStack_198;
            pppppppiVar28 = pppppppiStack_188;
            uStack_e0 = uVar5;
            uStack_df = uVar6;
            uStack_de = uVar7;
            pppppppiVar25 = pppppppiStack_198;
            if ((bStack_208 & 1) != 0) {
              func_0x0412a280(pppppppiStack_1f8,
                              CONCAT17(uStack_201,
                                       CONCAT25(uStack_203,
                                                CONCAT14(uStack_204,
                                                         CONCAT22(uStack_206,
                                                                  CONCAT11(uStack_207,bStack_208))))
                                      ) & 0xfffffffffffffffe);
              pppppppiVar24 = pppppppiStack_198;
              pppppppiVar28 = pppppppiStack_188;
              pppppppiVar25 = pppppppiStack_198;
            }
            goto joined_r0x0d60db57;
          }
        }
        uStack_e0 = SUB81(pppppppiVar25,0);
        uStack_df = (undefined1)((ulong)pppppppiVar25 >> 8);
        uStack_de = (undefined6)((ulong)pppppppiVar25 >> 0x10);
        pppppppiVar24 = pppppppiStack_198;
        pppppppiVar28 = pppppppiStack_188;
        pppppppiVar25 = pppppppiStack_198;
      }
joined_r0x0d60db57:
      if (((ulong)pppppppiVar25 & 1) != 0) {
        func_0x0412a280(pppppppiVar28,(ulong)pppppppiVar24 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(&pppppppiStack_150);
    }
    func_0x04862b40(&pppppppiStack_138);
    func_0x04862b40(&pppppppiStack_150);
  }
  ppppppiVar20 = param_2[1];
  ppppppiVar19 = ppppppiVar20 + -3;
  if (((ulong)ppppppiVar20[-3] & 1) != 0) {
    func_0x0412a280(ppppppiVar20[-1],(ulong)ppppppiVar20[-3] & 0xfffffffffffffffe);
  }
  param_2[1] = ppppppiVar19;
  bStack_208 = 0x1c;
  uStack_207 = 0x67;
  uStack_206 = 0x6e65;
  uStack_204 = 0x65;
  uStack_203 = 0x6172;
  uStack_201 = 0x74;
  uStack_200 = 0x65;
  uStack_1ff = 0x69775f64;
  uStack_1fb = 0x74;
  uStack_1fa = 0x68;
  uStack_1f9 = 0;
  pppppppiStack_48 = param_2;
  if (ppppppiVar19 < param_2[2]) {
    ppppppiVar20[-1] = (int *****)pppppppiStack_1f8;
    *ppppppiVar19 = (int *****)0x746172656e65671c;
    ppppppiVar20[-2] = (int *****)0x687469775f6465;
    param_2[1] = ppppppiVar20;
    param_2[1] = ppppppiVar20;
    pppppppiVar13 = uStack_128;
  }
  else {
    ppppppiVar19 = (int ******)func_0x04909a40(param_2,&bStack_208);
    pppppppiVar13 = uStack_128;
    param_2[1] = ppppppiVar19;
    if ((bStack_208 & 1) != 0) {
      func_0x0412a280(pppppppiStack_1f8,
                      CONCAT17(uStack_201,
                               CONCAT25(uStack_203,
                                        CONCAT14(uStack_204,
                                                 CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)
                                                         )))) & 0xfffffffffffffffe);
    }
  }
  bStack_208 = 0x1c;
  uStack_207 = 0x67;
  uStack_206 = 0x6e65;
  uStack_204 = 0x65;
  uStack_203 = 0x6172;
  uStack_201 = 0x74;
  uStack_200 = 0x65;
  uStack_1ff = 0x69775f64;
  uStack_1fb = 0x74;
  uStack_1fa = 0x68;
  uStack_1f9 = 0;
  cVar9 = func_0x04864290(pppppppiVar13);
  if (cVar9 == '\0') {
    bVar10 = 1;
    puVar14 = &DAT_0f54fc40;
  }
  else {
    puVar14 = (undefined *)func_0x04864990(pppppppiVar13,&bStack_208);
    bVar10 = func_0x04864260(puVar14);
    bVar10 = bVar10 ^ 1;
  }
  if ((bStack_208 & 1) != 0) {
    func_0x0412a280(pppppppiStack_1f8,
                    CONCAT17(uStack_201,
                             CONCAT25(uStack_203,
                                      CONCAT14(uStack_204,
                                               CONCAT22(uStack_206,CONCAT11(uStack_207,bStack_208)))
                                     )) & 0xfffffffffffffffe);
  }
  if (bVar10 != 0) {
    puStack_70 = puVar14;
    cVar9 = func_0x04864290();
    if (cVar9 == '\0') {
      func_0x0d5ef090(&uStack_1b8,param_2);
      auStack_1d8 = (undefined1  [8])0x0;
      pppppppiStack_1d0 = (int *******)0x0;
      pppppppiStack_1c8 = (int *******)0x0;
      pppppppiStack_178 = (int *******)auStack_1d8;
      pppppppiStack_170 = (int *******)((ulong)pppppppiStack_170 & 0xffffffffffffff00);
      pppppppiVar13 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (pppppppiVar13 == (int *******)0x0) {
        FUN_0eec74c0(0x18,0);
      }
      pppppppiStack_1c8 = pppppppiVar13 + 3;
      pppppppiStack_198 = (int *******)auStack_1d8;
      pppppppiStack_190 = (int *******)&pppppppiStack_138;
      pppppppiStack_188 = (int *******)&pppppppiStack_150;
      uStack_180 = 0;
      uVar23 = (ulong)uStack_1b8 & 1;
      auStack_1d8 = (undefined1  [8])pppppppiVar13;
      pppppppiStack_150 = pppppppiVar13;
      pppppppiStack_138 = pppppppiVar13;
      if (((ulong)uStack_1b8 & 1) == 0) {
        pppppppiVar13[2] = (int ******)pppppppiStack_1a8;
        *pppppppiVar13 = (int ******)uStack_1b8;
        pppppppiVar13[1] = (int ******)pppppppiStack_1b0;
      }
      else {
        pppppppiStack_1d0 = pppppppiVar13;
        func_0x0412e5e0(pppppppiVar13,pppppppiStack_1a8,pppppppiStack_1b0);
      }
      pppppppiStack_1d0 = pppppppiStack_150 + 3;
      bStack_208 = 0xa0;
      uStack_207 = 0xcc;
      uStack_206 = 0xf47;
      uStack_204 = 0;
      uStack_203 = 0;
      uStack_201 = 0;
      uStack_200 = 0;
      uStack_1ff = 0;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      pppppppiStack_1f8 = (int *******)0x0;
      pppppppiStack_1f0 = (int *******)0x0;
      func_0x0488f040(&uStack_200,auStack_1d8,pppppppiStack_1d0,
                      ((long)pppppppiStack_1d0 - (long)auStack_1d8 >> 3) * -0x5555555555555555);
      puStack_1e8 = (undefined1 *)0x200000009;
      bStack_208 = 0x78;
      uStack_207 = 0xb7;
      uStack_206 = 0xf47;
      uStack_204 = 0;
      uStack_203 = 0;
      uStack_201 = 0;
      func_0x0d5eed10(uStack_158,&bStack_208);
      bStack_208 = 0xa0;
      uStack_207 = 0xcc;
      uStack_206 = 0xf47;
      uStack_204 = 0;
      uStack_203 = 0;
      uStack_201 = 0;
      pppppppiVar13 =
           (int *******)
           CONCAT17(uStack_1f9,
                    CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
      if (pppppppiVar13 != (int *******)0x0) {
        pppppppiVar25 = pppppppiVar13;
        pppppppiVar24 = pppppppiStack_1f8;
        if (pppppppiVar13 != pppppppiStack_1f8) {
          do {
            if (((ulong)pppppppiVar24[-3] & 1) != 0) {
              func_0x0412a280(pppppppiVar24[-1],(ulong)pppppppiVar24[-3] & 0xfffffffffffffffe);
            }
            pppppppiVar24 = pppppppiVar24 + -3;
          } while (pppppppiVar24 != pppppppiVar13);
          pppppppiVar25 =
               (int *******)
               CONCAT17(uStack_1f9,
                        CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
        }
        pppppppiStack_1f8 = pppppppiVar13;
        func_0x0412a280(pppppppiVar25,(long)pppppppiStack_1f0 - (long)pppppppiVar25);
      }
      auVar22 = auStack_1d8;
      pppppppiVar13 = pppppppiStack_1d0;
      if (auStack_1d8 != (undefined1  [8])0x0) {
        for (; auVar22 != (undefined1  [8])pppppppiVar13; pppppppiVar13 = pppppppiVar13 + -3) {
          if (((ulong)pppppppiVar13[-3] & 1) != 0) {
            func_0x0412a280(pppppppiVar13[-1],(ulong)pppppppiVar13[-3] & 0xfffffffffffffffe);
          }
        }
        pppppppiStack_1d0 = (int *******)auVar22;
        func_0x0412a280(auStack_1d8,(long)pppppppiStack_1c8 - (long)auStack_1d8);
      }
      if (uVar23 != 0) {
        func_0x0412a280(pppppppiStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
      }
    }
    else {
      func_0x04865530(apppppppiStack_118,puStack_70);
      while( true ) {
        func_0x048655b0(&bStack_208,puStack_70);
        cVar9 = func_0x04862c80(apppppppiStack_118,&bStack_208);
        func_0x04862b40(&bStack_208);
        if (cVar9 != '\0') break;
        auStack_1d8 = (undefined1  [8])0x0;
        pppppppiStack_1d0 = (int *******)0x0;
        pppppppiStack_1c8 = (int *******)0x0;
        uVar15 = func_0x04862b80(apppppppiStack_118);
        cVar9 = func_0x04864270(uVar15);
        if (cVar9 == '\0') {
          func_0x0d5ef090(&pppppppiStack_178,param_2);
          uStack_1b8 = (int *******)0x0;
          pppppppiStack_1b0 = (int *******)0x0;
          pppppppiStack_1a8 = (int *******)0x0;
          pppppppiStack_150 = (int *******)&uStack_1b8;
          uStack_148 = 0;
          pppppppiVar13 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
          if (pppppppiVar13 == (int *******)0x0) {
            FUN_0eec74c0(0x18,0);
          }
          pppppppiStack_1a8 = pppppppiVar13 + 3;
          pppppppiStack_198 = (int *******)&uStack_1b8;
          pppppppiStack_190 = (int *******)apppppppiStack_f8;
          pppppppiStack_188 = (int *******)&pppppppiStack_138;
          uStack_180 = 0;
          uVar23 = (ulong)pppppppiStack_178 & 1;
          uStack_1b8 = pppppppiVar13;
          pppppppiStack_138 = pppppppiVar13;
          apppppppiStack_f8[0] = pppppppiVar13;
          if (((ulong)pppppppiStack_178 & 1) == 0) {
            pppppppiVar13[2] = (int ******)pppppppiStack_168;
            *pppppppiVar13 = (int ******)pppppppiStack_178;
            pppppppiVar13[1] = (int ******)pppppppiStack_170;
          }
          else {
            pppppppiStack_1b0 = pppppppiVar13;
            func_0x0412e5e0(pppppppiVar13,pppppppiStack_168,pppppppiStack_170);
          }
          pppppppiStack_1b0 = pppppppiStack_138 + 3;
          bStack_208 = 0xa0;
          uStack_207 = 0xcc;
          uStack_206 = 0xf47;
          uStack_204 = 0;
          uStack_203 = 0;
          uStack_201 = 0;
          uStack_200 = 0;
          uStack_1ff = 0;
          uStack_1fb = 0;
          uStack_1fa = 0;
          uStack_1f9 = 0;
          pppppppiStack_1f8 = (int *******)0x0;
          pppppppiStack_1f0 = (int *******)0x0;
          func_0x0488f040(&uStack_200,uStack_1b8,pppppppiStack_1b0,
                          ((long)pppppppiStack_1b0 - (long)uStack_1b8 >> 3) * -0x5555555555555555);
          puStack_1e8 = (undefined1 *)0x200000009;
          bStack_208 = 0x78;
          uStack_207 = 0xb7;
          uStack_206 = 0xf47;
          uStack_204 = 0;
          uStack_203 = 0;
          uStack_201 = 0;
          func_0x0d5eed10(uStack_158,&bStack_208);
          bStack_208 = 0xa0;
          uStack_207 = 0xcc;
          uStack_206 = 0xf47;
          uStack_204 = 0;
          uStack_203 = 0;
          uStack_201 = 0;
          pppppppiVar13 =
               (int *******)
               CONCAT17(uStack_1f9,
                        CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
          if (pppppppiVar13 != (int *******)0x0) {
            pppppppiVar25 = pppppppiVar13;
            pppppppiVar24 = pppppppiStack_1f8;
            if (pppppppiVar13 != pppppppiStack_1f8) {
              do {
                if (((ulong)pppppppiVar24[-3] & 1) != 0) {
                  func_0x0412a280(pppppppiVar24[-1],(ulong)pppppppiVar24[-3] & 0xfffffffffffffffe);
                }
                pppppppiVar24 = pppppppiVar24 + -3;
              } while (pppppppiVar24 != pppppppiVar13);
              pppppppiVar25 =
                   (int *******)
                   CONCAT17(uStack_1f9,
                            CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))
                                    ));
            }
            pppppppiStack_1f8 = pppppppiVar13;
            func_0x0412a280(pppppppiVar25,(long)pppppppiStack_1f0 - (long)pppppppiVar25);
          }
          pppppppiVar25 = uStack_1b8;
          pppppppiVar13 = pppppppiStack_1b0;
          if (uStack_1b8 != (int *******)0x0) {
            for (; pppppppiVar25 != pppppppiVar13; pppppppiVar13 = pppppppiVar13 + -3) {
              if (((ulong)pppppppiVar13[-3] & 1) != 0) {
                func_0x0412a280(pppppppiVar13[-1],(ulong)pppppppiVar13[-3] & 0xfffffffffffffffe);
              }
            }
            pppppppiStack_1b0 = pppppppiVar25;
            func_0x0412a280(uStack_1b8,(long)pppppppiStack_1a8 - (long)uStack_1b8);
          }
          if (uVar23 != 0) {
            func_0x0412a280(pppppppiStack_168,(ulong)pppppppiStack_178 & 0xfffffffffffffffe);
          }
        }
        else {
          uVar15 = func_0x04862b80(apppppppiStack_118);
          func_0x04865530(apppppppiStack_f8,uVar15);
          func_0x048655b0(apppppppiStack_68,uVar15);
LAB_0d60e122:
          pppppppiVar13 = (int *******)apppppppiStack_f8;
          cVar9 = func_0x04862c80(pppppppiVar13,apppppppiStack_68);
          if (cVar9 == '\0') {
            uVar15 = func_0x04862b80(apppppppiStack_f8);
            uStack_1b8 = (int *******)0x0;
            pppppppiStack_1b0 = (int *******)0x0;
            pppppppiStack_1a8 = (int *******)0x0;
            func_0x0ee36b90(uVar15,&uStack_1b8,1);
            pppppppiVar24 = pppppppiStack_1b0;
            pppppppiVar25 = pppppppiStack_1d0;
            if (uStack_1b8._6_1_ != '\0') {
              pppppppiStack_108 = (int *******)auStack_1d8;
              if (auStack_1d8 != (undefined1  [8])pppppppiStack_1d0) {
                auVar22 = auStack_1d8;
                if (uStack_1b8._7_1_ == '\0') {
                  pppppppiVar13 = (int *******)((ulong)pppppppiStack_1b0 & 0xff00ffffffffffff);
                  uVar23 = (ulong)pppppppiStack_1b0 >> 0x30;
                  sVar4 = uStack_1b8._4_2_;
                  uStack_128 = uStack_1b8;
                  uStack_120 = pppppppiStack_1b0;
                  do {
                    if (*(char *)((long)auVar22 + 7) == '\0') {
                      ppppppiVar19 = *(int *******)((long)auVar22 + 8);
                      if (((ulong)ppppppiVar19 & 0x80000000000000) == 0) {
                        ppppppiVar20 = (int ******)
                                       (ulong)((ushort)((ulong)ppppppiVar19 >> 0x30) & 0x7f);
                      }
                      else {
                        ppppppiVar20 = *(int *******)
                                        (((ulong)ppppppiVar19 & 0xff00ffffffffffff) - 8);
                      }
                      ppppppiVar17 = (int ******)(ulong)((ushort)uVar23 & 0x7f);
                      if (((ulong)pppppppiVar24 & 0x80000000000000) != 0) {
                        ppppppiVar17 = pppppppiVar13[-1];
                      }
                      if (ppppppiVar20 == ppppppiVar17) {
                        ppppppiVar20 = *(int *******)auVar22;
                        auVar33._0_2_ = -(ushort)((short)ppppppiVar20 == (short)uStack_128);
                        auVar33._2_2_ =
                             -(ushort)((short)((ulong)ppppppiVar20 >> 0x10) == uStack_128._2_2_);
                        auVar33._4_2_ =
                             -(ushort)((short)((ulong)ppppppiVar20 >> 0x20) == uStack_128._4_2_);
                        auVar33._6_2_ =
                             -(ushort)((short)((ulong)ppppppiVar20 >> 0x30) == uStack_128._6_2_);
                        auVar33._8_2_ = -(ushort)((short)uStack_120 == 0);
                        auVar33._10_2_ = -(ushort)(uStack_120._2_2_ == 0);
                        auVar33._12_2_ = -(ushort)(uStack_120._4_2_ == 0);
                        auVar33._14_2_ = -(ushort)(uStack_120._6_2_ == 0);
                        auVar33 = pshuflw(auVar33,auVar33,0x50);
                        auVar34._0_4_ = auVar33._0_4_;
                        auVar34._4_4_ = auVar34._0_4_;
                        auVar34._8_4_ = auVar33._4_4_;
                        auVar34._12_4_ = auVar33._4_4_;
                        uVar11 = movmskpd((int)ppppppiVar17,auVar34);
                        if (((((uVar11 & 1) != 0) && ((byte)((byte)uVar11 >> 1) != 0)) &&
                            (*(short *)((long)auVar22 + 4) == sVar4)) &&
                           (iVar12 = func_0x0eee3000((ulong)ppppppiVar19 & 0xff00ffffffffffff,
                                                     pppppppiVar13), iVar12 == 0))
                        goto LAB_0d60e575;
                      }
                    }
                    auVar22 = (undefined1  [8])((long)auVar22 + 0x18);
                  } while (auVar22 != (undefined1  [8])pppppppiVar25);
                }
                else {
                  do {
                    if (*(char *)((long)auVar22 + 7) != '\0') goto LAB_0d60e575;
                    auVar22 = (undefined1  [8])((long)auVar22 + 0x18);
                  } while (auVar22 != (undefined1  [8])pppppppiStack_1d0);
                }
              }
              goto LAB_0d60e580;
            }
            func_0x0d5ef090(&pppppppiStack_150,param_2);
            pppppppiStack_178 = (int *******)0x0;
            pppppppiStack_170 = (int *******)0x0;
            pppppppiStack_168 = (int *******)0x0;
            pppppppiStack_138 = (int *******)&pppppppiStack_178;
            uStack_130 = 0;
            pppppppiVar13 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (pppppppiVar13 == (int *******)0x0) {
              FUN_0eec74c0(0x18,0);
            }
            pppppppiStack_168 = pppppppiVar13 + 3;
            pppppppiStack_198 = (int *******)&pppppppiStack_178;
            pppppppiStack_190 = (int *******)&pppppppiStack_38;
            pppppppiStack_188 = (int *******)&pppppppiStack_58;
            uStack_180 = 0;
            uVar23 = (ulong)pppppppiStack_150 & 1;
            pppppppiStack_178 = pppppppiVar13;
            pppppppiStack_58 = pppppppiVar13;
            pppppppiStack_38 = pppppppiVar13;
            if (((ulong)pppppppiStack_150 & 1) == 0) {
              pppppppiVar13[2] = ppppppiStack_140;
              *pppppppiVar13 = (int ******)pppppppiStack_150;
              pppppppiVar13[1] = (int ******)CONCAT71(uStack_147,uStack_148);
            }
            else {
              pppppppiStack_170 = pppppppiVar13;
              func_0x0412e5e0(pppppppiVar13,ppppppiStack_140,CONCAT71(uStack_147,uStack_148));
            }
            pppppppiStack_170 = pppppppiStack_58 + 3;
            bStack_208 = 0xa0;
            uStack_207 = 0xcc;
            uStack_206 = 0xf47;
            uStack_204 = 0;
            uStack_203 = 0;
            uStack_201 = 0;
            uStack_200 = 0;
            uStack_1ff = 0;
            uStack_1fb = 0;
            uStack_1fa = 0;
            uStack_1f9 = 0;
            pppppppiStack_1f8 = (int *******)0x0;
            pppppppiStack_1f0 = (int *******)0x0;
            func_0x0488f040(&uStack_200,pppppppiStack_178,pppppppiStack_170,
                            ((long)pppppppiStack_170 - (long)pppppppiStack_178 >> 3) *
                            -0x5555555555555555);
            puStack_1e8 = (undefined1 *)0x20000001c;
            bStack_208 = 0x78;
            uStack_207 = 0xb7;
            uStack_206 = 0xf47;
            uStack_204 = 0;
            uStack_203 = 0;
            uStack_201 = 0;
            func_0x0d604f40(uStack_158,&bStack_208);
            bStack_208 = 0xa0;
            uStack_207 = 0xcc;
            uStack_206 = 0xf47;
            uStack_204 = 0;
            uStack_203 = 0;
            uStack_201 = 0;
            pppppppiVar13 =
                 (int *******)
                 CONCAT17(uStack_1f9,
                          CONCAT16(uStack_1fa,CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))))
            ;
            if (pppppppiVar13 != (int *******)0x0) {
              pppppppiVar25 = pppppppiVar13;
              pppppppiVar24 = pppppppiStack_1f8;
              if (pppppppiVar13 != pppppppiStack_1f8) {
                do {
                  if (((ulong)pppppppiVar24[-3] & 1) != 0) {
                    func_0x0412a280(pppppppiVar24[-1],(ulong)pppppppiVar24[-3] & 0xfffffffffffffffe)
                    ;
                  }
                  pppppppiVar24 = pppppppiVar24 + -3;
                } while (pppppppiVar24 != pppppppiVar13);
                pppppppiVar25 =
                     (int *******)
                     CONCAT17(uStack_1f9,
                              CONCAT16(uStack_1fa,
                                       CONCAT15(uStack_1fb,CONCAT41(uStack_1ff,uStack_200))));
              }
              pppppppiStack_1f8 = pppppppiVar13;
              func_0x0412a280(pppppppiVar25,(long)pppppppiStack_1f0 - (long)pppppppiVar25);
            }
            pppppppiVar25 = pppppppiStack_178;
            pppppppiVar13 = pppppppiStack_170;
            if (pppppppiStack_178 != (int *******)0x0) {
              for (; pppppppiVar25 != pppppppiVar13; pppppppiVar13 = pppppppiVar13 + -3) {
                if (((ulong)pppppppiVar13[-3] & 1) != 0) {
                  func_0x0412a280(pppppppiVar13[-1],(ulong)pppppppiVar13[-3] & 0xfffffffffffffffe);
                }
              }
              pppppppiStack_170 = pppppppiVar25;
              func_0x0412a280(pppppppiStack_178,(long)pppppppiStack_168 - (long)pppppppiStack_178);
            }
            auVar1 = auStack_1d8;
            if (uVar23 != 0) {
              func_0x0412a280(ppppppiStack_140,(ulong)pppppppiStack_150 & 0xfffffffffffffffe);
              auVar1 = auStack_1d8;
            }
            goto LAB_0d60ea17;
          }
          func_0x04862b40(apppppppiStack_68);
          func_0x04862b40(apppppppiStack_f8);
          if (auStack_1d8 != (undefined1  [8])pppppppiStack_1d0) {
            uVar23 = ((long)pppppppiStack_1d0 - (long)auStack_1d8 >> 3) * -0x5555555555555555;
            lVar29 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            func_0x0d637c00(auStack_1d8,pppppppiStack_1d0,((uint)lVar29 ^ 0x3f) * 2 ^ 0x7e,1);
          }
        }
        uVar15 = func_0x04862ca0(apppppppiStack_118);
        pppppppiVar13 = (int *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (pppppppiVar13 == (int *******)0x0) {
          FUN_0eec74c0(0x50,0);
        }
        ppppppiVar19 = (int ******)strlen(uVar15);
        uStack_128 = pppppppiVar13;
        if ((int ******)0xfffffffffffffff7 < ppppppiVar19) {
LAB_0d60f3f1:
          func_0x04882e30();
LAB_0d60f3f6:
          func_0x04882eb0();
LAB_0d60f3fb:
          uVar15 = func_0x0488efe0();
          func_0x0488eff0(&pppppppiStack_198);
          pppppppiStack_1d0 = pppppppiVar13;
          func_0x0488ef50(&pppppppiStack_178);
          func_0x0412a280(pppppppiStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
          func_0x0d6241a0(&pppppppiStack_48);
          func_0x0d5f4670(&bStack_e8);
          func_0x0d6241a0(&pppppppiStack_40);
          uVar15 = func_0x0eee2d70(uVar15);
          uVar15 = func_0x04882e20(uVar15);
          func_0x04882e20(uVar15);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (ppppppiVar19 < (int ******)0x17) {
          *(char *)(pppppppiVar13 + 4) = (char)ppppppiVar19 * '\x02';
          ppppppiVar20 = (int ******)((long)pppppppiVar13 + 0x21);
          if (ppppppiVar19 != (int ******)0x0) goto LAB_0d60ee68;
        }
        else {
          uVar23 = ((ulong)ppppppiVar19 | 7) + 1;
          if (((ulong)ppppppiVar19 | 7) == 0x17) {
            uVar23 = 0x1a;
          }
          ppppppiVar20 = (int ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
          if (ppppppiVar20 == (int ******)0x0) {
            FUN_0eec74c0(uVar23,0);
          }
          pppppppiVar13[6] = ppppppiVar20;
          pppppppiVar13[4] = (int ******)(uVar23 | 1);
          pppppppiVar13[5] = ppppppiVar19;
LAB_0d60ee68:
          func_0x0eee2ee0(ppppppiVar20,uVar15,ppppppiVar19);
        }
        *(undefined1 *)((long)ppppppiVar20 + (long)ppppppiVar19) = 0;
        pppppppiVar13[7] = (int ******)0x0;
        pppppppiVar13[8] = (int ******)0x0;
        pppppppiVar13[9] = (int ******)0x0;
        func_0x0d632d60(pppppppiVar13 + 7,auStack_1d8,pppppppiStack_1d0,
                        ((long)pppppppiStack_1d0 - (long)auStack_1d8 >> 3) * -0x5555555555555555);
        pppppppuVar30 = &pppppppuStack_80;
        pppppppuVar21 = pppppppuVar30;
        if (pppppppuStack_80 != (undefined8 *******)0x0) {
          bVar32 = (*(byte *)(uStack_128 + 4) & 1) != 0;
          ppppppiVar19 = (int ******)((long)uStack_128 + 0x21);
          if (bVar32) {
            ppppppiVar19 = uStack_128[6];
          }
          pppppppuVar8 = pppppppuStack_80;
          ppppppiVar20 = (int ******)(ulong)(*(byte *)(uStack_128 + 4) >> 1);
          if (bVar32) {
            ppppppiVar20 = uStack_128[5];
          }
          do {
            while( true ) {
              pppppppuVar30 = pppppppuVar8;
              bVar32 = (*(byte *)(pppppppuVar30 + 4) & 1) != 0;
              ppppppuVar26 = (undefined8 ******)((long)pppppppuVar30 + 0x21);
              if (bVar32) {
                ppppppuVar26 = pppppppuVar30[6];
              }
              ppppppiVar17 = (int ******)(ulong)(*(byte *)(pppppppuVar30 + 4) >> 1);
              if (bVar32) {
                ppppppiVar17 = (int ******)pppppppuVar30[5];
              }
              ppppppiVar27 = ppppppiVar20;
              if (ppppppiVar17 < ppppppiVar20) {
                ppppppiVar27 = ppppppiVar17;
              }
              iVar12 = func_0x0eee2ff0(ppppppiVar19,ppppppuVar26,ppppppiVar27);
              if (iVar12 != 0) break;
              if (ppppppiVar17 <= ppppppiVar20) goto LAB_0d60ef55;
LAB_0d60ef00:
              pppppppuVar8 = (undefined8 *******)*pppppppuVar30;
              pppppppuVar21 = pppppppuVar30;
              if ((undefined8 *******)*pppppppuVar30 == (undefined8 *******)0x0) goto LAB_0d60ef7d;
            }
            if (iVar12 < 0) goto LAB_0d60ef00;
LAB_0d60ef55:
            iVar12 = func_0x0eee2ff0(ppppppuVar26,ppppppiVar19,ppppppiVar27);
            if (iVar12 == 0) {
              if (ppppppiVar20 <= ppppppiVar17) goto LAB_0d60efe0;
            }
            else if (-1 < iVar12) {
LAB_0d60efe0:
              func_0x0d6331f0(1,uStack_128);
              goto LAB_0d60f004;
            }
            pppppppuVar8 = (undefined8 *******)pppppppuVar30[1];
          } while ((undefined8 *******)pppppppuVar30[1] != (undefined8 *******)0x0);
          pppppppuVar21 = pppppppuVar30 + 1;
        }
LAB_0d60ef7d:
        *uStack_128 = (int ******)0x0;
        uStack_128[1] = (int ******)0x0;
        uStack_128[2] = (int ******)pppppppuVar30;
        *pppppppuVar21 = uStack_128;
        if ((undefined8 *******)*pppppppuStack_88 != (undefined8 *******)0x0) {
          pppppppuStack_88 = (undefined8 *******)*pppppppuStack_88;
        }
        func_0x048bed00(pppppppuStack_80);
        lStack_78 = lStack_78 + 1;
LAB_0d60f004:
        param_2 = pppppppiStack_100;
        auVar22 = auStack_1d8;
        pppppppiVar13 = pppppppiStack_1d0;
        if (auStack_1d8 != (undefined1  [8])0x0) {
          for (; auVar22 != (undefined1  [8])pppppppiVar13; pppppppiVar13 = pppppppiVar13 + -3) {
            if (((ulong)pppppppiVar13[-1] & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)pppppppiVar13[-1] & 0xff00ffffffffffff) - 8);
            }
            pppppppiVar13[-1] = (int ******)0x0;
            if (((ulong)pppppppiVar13[-2] & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)pppppppiVar13[-2] & 0xff00ffffffffffff) - 8);
            }
            pppppppiVar13[-2] = (int ******)0x0;
          }
          pppppppiStack_1d0 = (int *******)auVar22;
          func_0x0412a280(auStack_1d8,(long)pppppppiStack_1c8 - (long)auStack_1d8);
        }
        func_0x04862ba0(apppppppiStack_118);
      }
      func_0x04862b40(apppppppiStack_118);
    }
  }
  ppppppiVar19 = param_2[1];
  if (((ulong)ppppppiVar19[-3] & 1) != 0) {
    func_0x0412a280(ppppppiVar19[-1],(ulong)ppppppiVar19[-3] & 0xfffffffffffffffe);
  }
  param_2[1] = ppppppiVar19 + -3;
  func_0x0d5f7230(lStack_50 + 0x260,&bStack_e8);
  func_0x0d5f4670(&bStack_e8);
LAB_0d60f36e:
  ppppppiVar19 = param_2[1];
  if (((ulong)ppppppiVar19[-3] & 1) != 0) {
    func_0x0412a280(ppppppiVar19[-1],(ulong)ppppppiVar19[-3] & 0xfffffffffffffffe);
  }
  param_2[1] = ppppppiVar19 + -3;
  return;
LAB_0d60e575:
  auVar1 = auStack_1d8;
  if ((undefined1  [8])pppppppiVar25 == auVar22) {
LAB_0d60e580:
    if (pppppppiVar25 < pppppppiStack_1c8) {
      *pppppppiVar25 = (int ******)uStack_1b8;
      pppppppiVar25[1] = (int ******)0x0;
      pppppppiVar13 = pppppppiStack_1b0;
      if (((ulong)pppppppiStack_1b0 & 0x80000000000000) != 0) {
        uVar23 = (ulong)pppppppiStack_1b0 & 0xff00ffffffffffff;
        lVar31 = *(long *)(uVar23 - 8);
        lVar29 = lVar31 + 9;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
        if (lVar29 != 0 && plVar18 == (long *)0x0) {
          FUN_0eec74c0(lVar29,8);
        }
        *plVar18 = lVar31;
        func_0x0eee2f00(plVar18 + 1,uVar23,lVar31);
        *(undefined1 *)((long)plVar18 + lVar31 + 8) = 0;
        pppppppiVar13 = (int *******)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      pppppppiVar25[1] = (int ******)pppppppiVar13;
      pppppppiVar25[2] = (int ******)0x0;
      pppppppiVar13 = pppppppiStack_1a8;
      if (((ulong)pppppppiStack_1a8 & 0x80000000000000) != 0) {
        uVar23 = (ulong)pppppppiStack_1a8 & 0xff00ffffffffffff;
        lVar31 = *(long *)(uVar23 - 8);
        lVar29 = lVar31 + 9;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
        if (lVar29 != 0 && plVar18 == (long *)0x0) {
          FUN_0eec74c0(lVar29,8);
        }
        *plVar18 = lVar31;
        func_0x0eee2f00(plVar18 + 1,uVar23,lVar31);
        *(undefined1 *)((long)plVar18 + lVar31 + 8) = 0;
        pppppppiVar13 = (int *******)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      pppppppiVar25[2] = (int ******)pppppppiVar13;
      auVar1 = auStack_1d8;
      pppppppiStack_1d0 = pppppppiVar25 + 3;
    }
    else {
      lVar29 = (long)pppppppiVar25 - (long)pppppppiStack_108;
      uVar23 = (lVar29 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar23) {
        func_0x0d633120();
LAB_0d60f3ec:
        func_0x04882eb0();
        goto LAB_0d60f3f1;
      }
      lVar31 = (long)pppppppiStack_1c8 - (long)pppppppiStack_108 >> 3;
      uVar3 = lVar31 * 0x5555555555555556;
      if (uVar23 < uVar3) {
        uVar23 = uVar3;
      }
      if (0x555555555555554 < (ulong)(lVar31 * -0x5555555555555555)) {
        uVar23 = 0xaaaaaaaaaaaaaaa;
      }
      puStack_1e8 = auStack_1d8;
      if (uVar23 == 0) {
        lVar31 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar23) goto LAB_0d60f3ec;
        lVar31 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0x18);
        if (lVar31 == 0) {
          FUN_0eec74c0(uVar23 * 0x18,0);
          lVar31 = 0;
        }
      }
      bStack_208 = (byte)lVar31;
      uStack_207 = (undefined1)((ulong)lVar31 >> 8);
      uStack_206 = (undefined2)((ulong)lVar31 >> 0x10);
      uStack_204 = (undefined1)((ulong)lVar31 >> 0x20);
      uStack_203 = (undefined2)((ulong)lVar31 >> 0x28);
      uStack_201 = (undefined1)((ulong)lVar31 >> 0x38);
      pppppppiStack_1f8 = (int *******)(lVar31 + lVar29);
      uStack_200 = SUB81(pppppppiStack_1f8,0);
      uStack_1ff = (undefined4)((ulong)pppppppiStack_1f8 >> 8);
      uStack_1fb = (undefined1)((ulong)pppppppiStack_1f8 >> 0x28);
      uStack_1fa = (undefined1)((ulong)pppppppiStack_1f8 >> 0x30);
      uStack_1f9 = (undefined1)((ulong)pppppppiStack_1f8 >> 0x38);
      pppppppiStack_1f0 = (int *******)(lVar31 + uVar23 * 0x18);
      *(int ********)(lVar31 + lVar29) = uStack_1b8;
      *(undefined8 *)(lVar31 + 8 + lVar29) = 0;
      pppppppiVar13 = pppppppiStack_1f8;
      pppppppiVar25 = pppppppiStack_1b0;
      uStack_128 = pppppppiStack_1f0;
      if (((ulong)pppppppiStack_1b0 & 0x80000000000000) != 0) {
        uVar23 = (ulong)pppppppiStack_1b0 & 0xff00ffffffffffff;
        lVar31 = *(long *)(uVar23 - 8);
        lVar29 = lVar31 + 9;
        pppppppiStack_108 = pppppppiStack_1f8;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
        if (lVar29 != 0 && plVar18 == (long *)0x0) {
          FUN_0eec74c0(lVar29,8);
        }
        *plVar18 = lVar31;
        func_0x0eee2f00(plVar18 + 1,uVar23,lVar31);
        *(undefined1 *)((long)plVar18 + lVar31 + 8) = 0;
        pppppppiVar25 = (int *******)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        pppppppiVar13 = pppppppiStack_108;
      }
      pppppppiVar13[1] = (int ******)pppppppiVar25;
      pppppppiVar13[2] = (int ******)0x0;
      pppppppiVar25 = pppppppiStack_1a8;
      if (((ulong)pppppppiStack_1a8 & 0x80000000000000) != 0) {
        uVar23 = (ulong)pppppppiStack_1a8 & 0xff00ffffffffffff;
        lVar31 = *(long *)(uVar23 - 8);
        lVar29 = lVar31 + 9;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar29,8);
        if (lVar29 != 0 && plVar18 == (long *)0x0) {
          FUN_0eec74c0(lVar29,8);
        }
        *plVar18 = lVar31;
        func_0x0eee2f00(plVar18 + 1,uVar23,lVar31);
        *(undefined1 *)((long)plVar18 + lVar31 + 8) = 0;
        pppppppiVar25 = (int *******)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      pppppppiVar24 = pppppppiStack_1d0;
      pppppppiVar13[2] = (int ******)pppppppiVar25;
      auVar1 = (undefined1  [8])
               ((long)pppppppiVar13 + ((long)auStack_1d8 - (long)pppppppiStack_1d0));
      if ((long)auStack_1d8 - (long)pppppppiStack_1d0 != 0) {
        lVar29 = 0;
        do {
          *(undefined8 *)((long)auVar1 + lVar29) = *(undefined8 *)((long)auStack_1d8 + lVar29);
          *(undefined8 *)((long)auVar1 + lVar29 + 8) = 0;
          *(undefined8 *)((long)auVar1 + lVar29 + 8) =
               *(undefined8 *)((long)auStack_1d8 + lVar29 + 8);
          *(undefined8 *)((long)auStack_1d8 + lVar29 + 8) = 0;
          *(undefined8 *)((long)auVar1 + lVar29 + 0x10) = 0;
          *(undefined8 *)((long)auVar1 + lVar29 + 0x10) =
               *(undefined8 *)((long)auStack_1d8 + lVar29 + 0x10);
          *(undefined8 *)((long)auStack_1d8 + lVar29 + 0x10) = 0;
          lVar31 = lVar29 + 0x18;
          lVar29 = lVar29 + 0x18;
          auVar22 = auStack_1d8;
        } while ((int *******)((long)auStack_1d8 + lVar31) != pppppppiStack_1d0);
        do {
          if (((ulong)*(int *******)((long)auVar22 + 0x10) & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,
                       ((ulong)*(int *******)((long)auVar22 + 0x10) & 0xff00ffffffffffff) - 8);
          }
          *(int *******)((long)auVar22 + 0x10) = (int ******)0x0;
          if (((ulong)*(int *******)((long)auVar22 + 8) & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,
                       ((ulong)*(int *******)((long)auVar22 + 8) & 0xff00ffffffffffff) - 8);
          }
          *(int *******)((long)auVar22 + 8) = (int ******)0x0;
          auVar22 = (undefined1  [8])((long)auVar22 + 0x18);
        } while (auVar22 != (undefined1  [8])pppppppiVar24);
      }
      pppppppiVar25 = pppppppiStack_1c8;
      pppppppiVar13 = pppppppiVar13 + 3;
      pppppppiStack_1c8 = uStack_128;
      pppppppiStack_1d0 = pppppppiVar13;
      if (auStack_1d8 != (undefined1  [8])0x0) {
        lVar29 = (long)pppppppiVar25 - (long)auStack_1d8;
        pppppppiVar25 = (int *******)auStack_1d8;
        auStack_1d8 = auVar1;
        func_0x0412a280(pppppppiVar25,lVar29);
        auVar1 = auStack_1d8;
        pppppppiStack_1d0 = pppppppiVar13;
      }
    }
  }
LAB_0d60ea17:
  auStack_1d8 = auVar1;
  if (((ulong)pppppppiStack_1a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppiStack_1a8 & 0xff00ffffffffffff) - 8);
  }
  pppppppiStack_1a8 = (int *******)0x0;
  if (((ulong)pppppppiStack_1b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppiStack_1b0 & 0xff00ffffffffffff) - 8);
  }
  func_0x04862ba0(apppppppiStack_f8);
  param_2 = pppppppiStack_100;
  goto LAB_0d60e122;
}



/* ---- referenced strings ----
 * 0x11b4e01  addon
 */
