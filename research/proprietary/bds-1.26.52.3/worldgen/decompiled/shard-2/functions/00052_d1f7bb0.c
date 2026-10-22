/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f7bb0
 * Label: string:Failed to parse jigsaw structure template pool '%s'.
 * Body:  [[0d1f7bb0, 0d1f7f0e] [0d1f7f70, 0d1f7f9d] [0d1f7fa0, 0d1f8750] [0d1f8760, 0d1f89a3] [0d1f89b0, 0d1f89d9] [0d1f89e0, 0d1f8b19] [0d1f8b20, 0d1f8fb6] [0d1f8fe6, 0d1f8ff4] [0d1f8fff, 0d1f9022] [0d1f9068, 0d1f9072] [0d1f9076, 0d1f9084] [0d1f90b1, 0d1f90bf] [0d1f9277, 0d1f92a3] [0d1f92ca, 0d1f92f4] [0d1f93c1, 0d1f93e6] [0d1f93ea, 0d1f9418] [0d1f942e, 0d1f9447] [0d1f945b, 0d1f947d]]
 * Ghidra: FUN_0d1f7bb0
 */


/* WARNING: Removing unreachable block (ram,0x0d1f8410) */
/* WARNING: Removing unreachable block (ram,0x0d1f8421) */
/* WARNING: Removing unreachable block (ram,0x0d1f8469) */
/* WARNING: Removing unreachable block (ram,0x0d1f8470) */
/* WARNING: Removing unreachable block (ram,0x0d1f8477) */
/* WARNING: Removing unreachable block (ram,0x0d1f8460) */
/* WARNING: Removing unreachable block (ram,0x0d1f848a) */
/* WARNING: Removing unreachable block (ram,0x0d1f8ee1) */
/* WARNING: Removing unreachable block (ram,0x0d1f8ef3) */
/* WARNING: Removing unreachable block (ram,0x0d1f8400) */
/* WARNING: Removing unreachable block (ram,0x0d1f8429) */
/* WARNING: Removing unreachable block (ram,0x0d1f844e) */
/* WARNING: Removing unreachable block (ram,0x0d1f845e) */
/* WARNING: Removing unreachable block (ram,0x0d1f8492) */
/* WARNING: Removing unreachable block (ram,0x0d1f8f5a) */
/* WARNING: Removing unreachable block (ram,0x0d1f8f6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1f7bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 long param_10,long param_11,ulong param_12,long param_13,long param_14,
                 long param_15,byte param_16,byte param_17,undefined8 param_18,undefined8 param_19,
                 undefined8 param_20,undefined8 param_21,undefined1 param_22 [16],uint *param_23,
                 undefined1 param_24 [16],long param_25,byte param_26,undefined8 param_27,
                 ulong param_28,undefined8 param_29,long param_30,long param_31,ulong param_32,
                 long param_33,long param_34,long param_35,byte param_36,undefined8 param_37,
                 undefined8 param_38,undefined8 param_39,undefined1 param_40 [16],uint *param_41,
                 undefined1 param_42 [16],long param_43,char param_44,undefined8 param_45,
                 undefined1 param_46 [16],undefined1 param_47 [16],undefined1 param_48 [16],
                 undefined1 param_49 [16],ulong param_50,undefined8 param_51,undefined8 param_52,
                 undefined8 param_53,undefined8 param_54,undefined8 param_55,long param_56,
                 long param_57,long param_58,long param_59,long param_60)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  char *in_RAX;
  char *pcVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  char cVar19;
  long lVar20;
  long *unaff_RBP;
  undefined8 *unaff_R14;
  ulong uVar21;
  undefined2 in_FS;
  long in_stack_000001f8;
  long *in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined1 *in_stack_00000258;
  byte in_stack_00000260;
  undefined7 in_stack_00000261;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  char in_stack_00000280;
  undefined1 in_stack_00000288 [16];
  long *plVar22;
  byte in_stack_000002c0;
  undefined7 in_stack_000002c1;
  undefined8 in_stack_000002d0;
  byte in_stack_000002e0;
  undefined7 in_stack_000002e1;
  undefined8 in_stack_000002f0;
  byte in_stack_00000330;
  undefined7 in_stack_00000331;
  long in_stack_00000340;
  long in_stack_00000348;
  long in_stack_00000350;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000368;
  byte in_stack_00000370;
  undefined7 in_stack_00000371;
  undefined8 in_stack_00000380;
  ulong *in_stack_000003c8;
  ulong *in_stack_000003d0;
  long in_stack_000003e8;
  long in_stack_000003f0;
  long in_stack_000003f8;
  long in_stack_00000400;
  long in_stack_00000408;
  long in_stack_00000410;
  char in_stack_00000418;
  byte in_stack_00000460;
  undefined7 in_stack_00000461;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined4 in_stack_00000480;
  undefined4 in_stack_00000484;
  undefined4 in_stack_00000488;
  undefined4 in_stack_0000048c;
  undefined8 in_stack_00000490;
  long in_stack_00000498;
  ulong in_stack_000008e0;
  undefined7 uVar18;
  
  cVar19 = (char)param_4;
  in_RAX[0xf] = in_RAX[0xf] + cVar19;
  cVar13 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar13;
  in_RAX[0xf] = in_RAX[0xf] + cVar19;
  *(undefined2 *)(param_5 + param_4 * 8) = in_FS;
  *in_RAX = *in_RAX + cVar13;
  in_RAX[-0x77] = in_RAX[-0x77] + cVar19;
  cVar2 = *in_RAX;
  uVar18 = (undefined7)((ulong)in_RAX >> 8);
  pcVar14 = (char *)CONCAT71(uVar18,cVar13 + cVar2);
  pcVar14[-0x77] = pcVar14[-0x77] + cVar19;
  *(undefined2 *)(pcVar14 + param_4) = in_FS;
  pcVar14 = (char *)(CONCAT71(uVar18,cVar13 + cVar2 + *pcVar14) + -0x73);
  *pcVar14 = *pcVar14 + cVar19;
  func_0x0470d9a0(&param_8,param_2,0x70,0xd,&stack0x00000200);
  if ((param_28 & 1) != 0) {
    func_0x0412a280(param_30,param_28 & 0xfffffffffffffffe);
  }
  (**(code **)(*unaff_RBP + 0x940))();
  if (((uint)param_8 & 1) != 0) {
    func_0x0412a280(param_10,CONCAT44(param_8._4_4_,(uint)param_8) & 0xfffffffffffffffe);
  }
  param_20 = CONCAT71(in_stack_00000461,in_stack_00000460);
  param_26 = '\0';
  param_22._8_8_ = in_stack_00000478;
  param_22._0_8_ = in_stack_00000470;
  param_23 = (uint *)CONCAT44(in_stack_00000484,in_stack_00000480);
  param_24._4_4_ = in_stack_0000048c;
  param_24._0_4_ = in_stack_00000488;
  param_24._8_8_ = in_stack_00000490;
  param_21 = in_stack_00000468;
  param_25 = in_stack_00000498;
  if (in_stack_00000358 != 0) {
    while (in_stack_00000358 != in_stack_00000360) {
      in_stack_00000360 = in_stack_00000360 + -0x40;
      func_0x048b3e80(in_stack_00000360);
    }
    func_0x0412a280(in_stack_00000358,in_stack_00000368 - in_stack_00000358);
  }
  if (in_stack_00000340 != 0) {
    for (; in_stack_00000340 != in_stack_00000348; in_stack_00000348 = in_stack_00000348 + -0x50) {
      if ((*(char *)(in_stack_00000348 + -8) == '\x01') &&
         ((*(byte *)(in_stack_00000348 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000348 + -0x20),
                        *(ulong *)(in_stack_00000348 + -0x30) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(in_stack_00000340,in_stack_00000350 - in_stack_00000340);
  }
  uVar17 = param_42._0_8_;
  if (param_44 == '\0') {
    if (param_42._0_8_ != 0) {
      lVar20 = param_42._8_8_;
      while (uVar17 != lVar20) {
        lVar20 = lVar20 + -0x40;
        func_0x048b3e80(lVar20);
      }
      param_42._8_8_ = uVar17;
      func_0x0412a280(param_42._0_8_,param_43 - param_42._0_8_);
    }
    uVar17 = param_40._0_8_;
    if (param_40._0_8_ != 0) {
      for (lVar20 = param_40._8_8_; uVar17 != lVar20; lVar20 = lVar20 + -0x50) {
        if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                          *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
        }
      }
      param_40._8_8_ = uVar17;
      func_0x0412a280(uVar17,(long)param_41 - uVar17);
    }
  }
  if ((in_stack_000002e0 & 1) != 0) {
    func_0x0412a280(in_stack_000002f0,
                    CONCAT71(in_stack_000002e1,in_stack_000002e0) & 0xfffffffffffffffe);
  }
  puVar16 = param_23;
  lVar20 = _UNK_0f45ad40;
  uVar8 = _UNK_0f45ad34;
  uVar7 = _UNK_0f45ad30;
  uVar6 = _UNK_0f45ad2c;
  uVar5 = _DAT_0f45ad28;
  param_44 = param_26;
  if (param_26 == '\0') {
    uVar17 = param_22._8_8_;
    param_38 = param_20;
    param_39 = param_21;
    param_40._0_8_ = param_22._0_8_;
    param_40._0_8_ = param_22._0_8_;
    param_40._8_8_ = param_22._8_8_;
    param_41 = param_23;
    param_22 = ZEXT816(0);
    param_23 = (uint *)0x0;
    param_42._0_8_ = param_24._0_8_;
    param_42._8_8_ = param_24._8_8_;
    param_43 = param_25;
    param_24 = ZEXT816(0);
    param_25 = 0;
    param_10 = _DAT_0f45ad38;
    param_11 = _UNK_0f45ad40;
    param_8._0_4_ = _DAT_0f45ad28;
    param_8._4_4_ = _UNK_0f45ad2c;
    param_9._0_4_ = _UNK_0f45ad30;
    param_9._4_4_ = _UNK_0f45ad34;
    param_12 = param_12 & 0xffffffffffffff00;
    param_17 = 0;
    if ((ulong)uVar17 < puVar16) {
      *(long *)(uVar17 + 0x10) = _DAT_0f45ad38;
      *(long *)(uVar17 + 0x18) = lVar20;
      *(uint *)uVar17 = uVar5;
      *(uint *)(uVar17 + 4) = uVar6;
      *(uint *)(uVar17 + 8) = uVar7;
      *(uint *)(uVar17 + 0xc) = uVar8;
      *(undefined1 *)(uVar17 + 0x20) = 0;
      *(undefined1 *)(uVar17 + 0x48) = 0;
      puVar16 = (uint *)(uVar17 + 0x50);
    }
    else {
      param_40._8_8_ = func_0x0489d2c0(param_40,&param_8);
      puVar16 = (uint *)param_40._8_8_;
      if (((param_17 & 1) != 0) && ((param_12 & 1) != 0)) {
        func_0x0412a280(param_14,param_12 & 0xfffffffffffffffe);
        puVar16 = (uint *)param_40._8_8_;
      }
    }
    param_49._8_8_ = param_43;
    param_49._0_8_ = param_42._8_8_;
    param_48._8_8_ = param_42._0_8_;
    param_48._0_8_ = param_41;
    param_47._0_8_ = param_40._0_8_;
    param_40 = (undefined1  [16])0x0;
    param_41 = (uint *)0x0;
    param_42 = (undefined1  [16])0x0;
    param_43 = 0;
    param_50 = param_50 & 0xffffffffffffff00;
    param_46._8_8_ = param_39;
    param_46._0_8_ = param_38;
    param_47._8_8_ = puVar16;
  }
  else {
    if (unaff_RBP != (long *)0x0) {
      func_0x0eede540(&param_28,&param_54);
      func_0x0470d9a0(&param_8,&UNK_0125032a,0x4f,0xd,&stack0x00000200);
      if ((param_28 & 1) != 0) {
        func_0x0412a280(param_30,param_28 & 0xfffffffffffffffe);
      }
      (**(code **)(*unaff_RBP + 0x940))();
      if (((uint)param_8 & 1) != 0) {
        func_0x0412a280(param_10,CONCAT44(param_8._4_4_,(uint)param_8) & 0xfffffffffffffffe);
      }
    }
    if (0xfffffffffffffff7 < in_stack_000008e0) {
      uVar17 = func_0x04882e30();
      if ((in_stack_00000370 & 1) != 0) {
        func_0x0412a280(in_stack_00000380,
                        CONCAT71(in_stack_00000371,in_stack_00000370) & 0xfffffffffffffffe);
      }
      func_0x048e6d60(&stack0x00000200);
      func_0x0ee38090(&param_8);
      if (param_44 == '\0') {
        func_0x05ff1910(&param_38);
      }
      if (param_26 == '\0') {
        func_0x05ff1910(&param_20);
      }
      if ((in_stack_00000260 & 1) != 0) {
        func_0x0412a280(in_stack_000003c8[2],*in_stack_000003c8 & 0xfffffffffffffffe);
      }
      func_0x048e6d60(&param_54);
      if (in_stack_00000418 == '\0') {
        func_0x05ff1910(&stack0x000003d8);
      }
      if ((in_stack_000002c0 & 1) != 0) {
        func_0x0412a280(in_stack_000002d0,
                        CONCAT71(in_stack_000002c1,in_stack_000002c0) & 0xfffffffffffffffe);
      }
      if (((byte)param_51 & 1) != 0) {
        func_0x0412a280(in_stack_000003d0[2],*in_stack_000003d0 & 0xfffffffffffffffe);
      }
      func_0x0488d780(&stack0x000002a0);
      func_0x0489d550(&stack0x00000278);
      func_0x0eee2d70(uVar17);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (in_stack_000008e0 < 0x17) {
      uVar21 = CONCAT71((int7)((ulong)in_stack_00000248 >> 8),(char)in_stack_000008e0 * '\x02');
      puVar15 = &stack0x00000249;
      if (in_stack_000008e0 != 0) goto LAB_0d1f81b6;
    }
    else {
      uVar21 = 0x1a;
      if ((in_stack_000008e0 | 7) != 0x17) {
        uVar21 = (in_stack_000008e0 | 7) + 1;
      }
      puVar15 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
      if (puVar15 == (undefined1 *)0x0) {
        func_0x0eec74c0(uVar21,0);
      }
      uVar21 = uVar21 | 1;
      in_stack_00000258 = puVar15;
LAB_0d1f81b6:
      func_0x0eee2f00(puVar15,&stack0x000004e0,in_stack_000008e0);
    }
    puVar15[in_stack_000008e0] = 0;
    func_0x09b9ee60(&param_8,&stack0x00000248);
    if ((uVar21 & 1) != 0) {
      func_0x0412a280(in_stack_00000258,uVar21 & 0xfffffffffffffffe);
    }
    if (param_16 == 0) {
      func_0x0489ad20(&stack0x00000210,param_10,param_11,
                      (param_11 - param_10 >> 4) * -0x3333333333333333);
      func_0x05d8b660(&stack0x00000228,param_13,param_14,param_14 - param_13 >> 6);
      if (unaff_RBP != (long *)0x0) {
        func_0x0eede540(&stack0x00000460,&param_54);
        func_0x0eede540(&stack0x00000330,&stack0x00000200);
        func_0x0470d9a0(&stack0x00000370,&UNK_01338661,0x7c,0xdd,&stack0x00000420);
        if ((in_stack_00000330 & 1) != 0) {
          func_0x0412a280(in_stack_00000340,
                          CONCAT71(in_stack_00000331,in_stack_00000330) & 0xfffffffffffffffe);
        }
        if ((in_stack_00000460 & 1) != 0) {
          func_0x0412a280(in_stack_00000470,
                          CONCAT71(in_stack_00000461,in_stack_00000460) & 0xfffffffffffffffe);
        }
        (**(code **)(*unaff_RBP + 0x940))();
        if ((in_stack_00000370 & 1) != 0) {
          func_0x0412a280(in_stack_00000380,
                          CONCAT71(in_stack_00000371,in_stack_00000370) & 0xfffffffffffffffe);
        }
      }
    }
    param_36 = param_16;
    if ((param_16 & 1) == 0) {
      param_28 = CONCAT44(param_8._4_4_,(uint)param_8);
      param_29 = CONCAT44(param_9._4_4_,(uint)param_9);
      param_30 = param_10;
      param_31 = param_11;
      param_32 = param_12;
      param_10 = 0;
      param_11 = 0;
      param_12 = 0;
      param_33 = param_13;
      param_34 = param_14;
      param_35 = param_15;
      param_13 = 0;
      param_14 = 0;
      param_15 = 0;
      func_0x0d224980(&param_28);
      param_49._8_8_ = param_35;
      param_49._0_8_ = param_34;
      param_48._8_8_ = param_33;
      param_48._0_8_ = param_32;
      param_47._0_8_ = param_30;
      param_47._8_4_ = (undefined4)param_31;
      param_47._12_4_ = param_31._4_4_;
      param_30 = 0;
      param_31 = 0;
      param_32 = 0;
      param_33 = 0;
      param_34 = 0;
      param_35 = 0;
      param_50 = param_50 & 0xffffffffffffff00;
      param_46._8_4_ = (undefined4)param_29;
      param_46._0_8_ = param_28;
      param_46._12_4_ = param_29._4_4_;
      func_0x048e6d60(&stack0x000004a0);
    }
    else {
      param_49 = (undefined1  [16])0x0;
      param_48 = (undefined1  [16])0x0;
      param_47 = (undefined1  [16])0x0;
      param_46 = (undefined1  [16])0x0;
      param_50 = 1;
    }
    lVar20 = param_33;
    if ((param_36 & 1) == 0) {
      lVar4 = param_34;
      if (param_33 != 0) {
        while (lVar20 != lVar4) {
          func_0x048b3e80(lVar4 + -0x40);
          lVar4 = lVar4 + -0x40;
        }
        param_34 = lVar20;
        func_0x0412a280(param_33,param_35 - param_33);
      }
      lVar4 = param_30;
      lVar20 = param_31;
      if (param_30 != 0) {
        for (; lVar4 != lVar20; lVar20 = lVar20 + -0x50) {
          if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                            *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
          }
        }
        param_31 = lVar4;
        func_0x0412a280(param_30,param_32 - param_30);
      }
    }
    lVar20 = param_13;
    if (param_16 == 0) {
      lVar4 = param_14;
      if (param_13 != 0) {
        while (lVar20 != lVar4) {
          func_0x048b3e80(lVar4 + -0x40);
          lVar4 = lVar4 + -0x40;
        }
        param_14 = lVar20;
        func_0x0412a280(param_13,param_15 - param_13);
      }
      lVar4 = param_10;
      lVar20 = param_11;
      if (param_10 != 0) {
        for (; lVar4 != lVar20; lVar20 = lVar20 + -0x50) {
          if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                            *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
          }
        }
        param_11 = lVar4;
        func_0x0412a280(param_10,param_12 - param_10);
      }
    }
  }
  uVar17 = param_42._0_8_;
  if (param_44 == '\0') {
    if (param_42._0_8_ != 0) {
      lVar20 = param_42._8_8_;
      while (uVar17 != lVar20) {
        lVar20 = lVar20 + -0x40;
        func_0x048b3e80(lVar20);
      }
      param_42._8_8_ = uVar17;
      func_0x0412a280(param_42._0_8_,param_43 - param_42._0_8_);
    }
    uVar17 = param_40._0_8_;
    if (param_40._0_8_ != 0) {
      for (lVar20 = param_40._8_8_; uVar17 != lVar20; lVar20 = lVar20 + -0x50) {
        if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                          *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
        }
      }
      param_40._8_8_ = uVar17;
      func_0x0412a280(param_40._0_8_,(long)param_41 - param_40._0_8_);
    }
  }
  uVar17 = param_24._0_8_;
  if (param_26 == '\0') {
    if (param_24._0_8_ != 0) {
      lVar20 = param_24._8_8_;
      while (uVar17 != lVar20) {
        lVar20 = lVar20 + -0x40;
        func_0x048b3e80(lVar20);
      }
      param_24._8_8_ = uVar17;
      func_0x0412a280(param_24._0_8_,param_25 - param_24._0_8_);
    }
    uVar17 = param_22._0_8_;
    if (param_22._0_8_ != 0) {
      for (lVar20 = param_22._8_8_; uVar17 != lVar20; lVar20 = lVar20 + -0x50) {
        if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                          *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
        }
      }
      param_22._8_8_ = uVar17;
      func_0x0412a280(uVar17,(long)param_23 - uVar17);
    }
  }
  if ((in_stack_00000260 & 1) != 0) {
    func_0x0412a280(in_stack_00000270,
                    CONCAT71(in_stack_00000261,in_stack_00000260) & 0xfffffffffffffffe);
  }
  lVar4 = param_59;
  lVar20 = param_60;
  if (param_59 != 0) {
    while (lVar4 != lVar20) {
      func_0x048b3e80(lVar20 + -0x40);
      lVar20 = lVar20 + -0x40;
    }
    param_60 = lVar4;
    func_0x0412a280(param_59,in_stack_000001f8 - param_59);
  }
  lVar4 = param_56;
  lVar20 = param_57;
  if (param_56 != 0) {
    for (; lVar4 != lVar20; lVar20 = lVar20 + -0x50) {
      if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                        *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
      }
    }
    param_57 = lVar4;
    func_0x0412a280(param_56,param_58 - param_56);
  }
  if (in_stack_00000418 == '\0') {
    if (in_stack_00000400 != 0) {
      while (in_stack_00000400 != in_stack_00000408) {
        in_stack_00000408 = in_stack_00000408 + -0x40;
        func_0x048b3e80(in_stack_00000408);
      }
      func_0x0412a280(in_stack_00000400,in_stack_00000410 - in_stack_00000400);
    }
    if (in_stack_000003e8 != 0) {
      for (; in_stack_000003e8 != in_stack_000003f0; in_stack_000003f0 = in_stack_000003f0 + -0x50)
      {
        if ((*(char *)(in_stack_000003f0 + -8) == '\x01') &&
           ((*(byte *)(in_stack_000003f0 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_000003f0 + -0x20),
                          *(ulong *)(in_stack_000003f0 + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_000003e8,in_stack_000003f8 - in_stack_000003e8);
    }
  }
  if ((in_stack_000002c0 & 1) != 0) {
    func_0x0412a280(in_stack_000002d0,
                    CONCAT71(in_stack_000002c1,in_stack_000002c0) & 0xfffffffffffffffe);
  }
  lVar20 = _UNK_0f45ad80;
  uVar8 = _UNK_0f45ad74;
  uVar7 = _UNK_0f45ad70;
  uVar6 = _UNK_0f45ad6c;
  uVar5 = _DAT_0f45ad68;
  param_26 = (byte)param_50;
  if ((byte)param_50 == 0) {
    uVar17 = param_47._8_8_;
    param_20 = param_46._0_8_;
    param_21 = param_46._8_8_;
    param_22._0_8_ = param_47._0_8_;
    param_22._0_8_ = param_47._0_8_;
    param_22._8_8_ = param_47._8_8_;
    uVar10 = param_48._0_8_;
    param_23 = (uint *)param_48._0_8_;
    param_47 = ZEXT816(0);
    param_24._0_8_ = param_48._8_8_;
    param_24._8_8_ = param_49._0_8_;
    param_25 = param_49._8_8_;
    param_48 = ZEXT816(0);
    param_49 = ZEXT816(0);
    param_10 = _DAT_0f45ad78;
    param_11 = _UNK_0f45ad80;
    param_8._0_4_ = _DAT_0f45ad68;
    param_8._4_4_ = _UNK_0f45ad6c;
    param_9._0_4_ = _UNK_0f45ad70;
    param_9._4_4_ = _UNK_0f45ad74;
    param_12 = param_12 & 0xffffffffffffff00;
    param_17 = 0;
    if ((ulong)uVar17 < (ulong)uVar10) {
      *(long *)(uVar17 + 0x10) = _DAT_0f45ad78;
      *(long *)(uVar17 + 0x18) = lVar20;
      *(uint *)uVar17 = uVar5;
      *(uint *)(uVar17 + 4) = uVar6;
      *(uint *)(uVar17 + 8) = uVar7;
      *(uint *)(uVar17 + 0xc) = uVar8;
      *(undefined1 *)(uVar17 + 0x20) = 0;
      *(undefined1 *)(uVar17 + 0x48) = 0;
      puVar16 = (uint *)(uVar17 + 0x50);
    }
    else {
      param_22._8_8_ = func_0x0489d2c0(param_22,&param_8);
      puVar16 = (uint *)param_22._8_8_;
      if (((param_17 & 1) != 0) && ((param_12 & 1) != 0)) {
        func_0x0412a280(param_14,param_12 & 0xfffffffffffffffe);
        puVar16 = (uint *)param_22._8_8_;
      }
    }
    uVar12 = param_25;
    uVar11 = param_24._8_8_;
    uVar10 = param_24._0_8_;
    puVar9 = param_23;
    uVar17 = param_22._0_8_;
    param_22 = (undefined1  [16])0x0;
    param_23 = (uint *)0x0;
    param_24 = (undefined1  [16])0x0;
    param_25 = 0;
    *unaff_R14 = param_20;
    unaff_R14[1] = param_21;
    *(undefined1 *)(unaff_R14 + 8) = 0;
    unaff_R14[2] = uVar17;
    unaff_R14[3] = puVar16;
    unaff_R14[4] = puVar9;
    unaff_R14[5] = uVar10;
    unaff_R14[6] = uVar11;
    unaff_R14[7] = uVar12;
    if ((param_26 & 1) != 0) goto LAB_0d1f8d8a;
  }
  else {
    *(undefined1 *)(unaff_R14 + 8) = 1;
    *(undefined1 *)unaff_R14 = 1;
    if ((param_50 & 1) != 0) goto LAB_0d1f8d8a;
  }
  uVar17 = param_24._0_8_;
  if (param_24._0_8_ != 0) {
    lVar20 = param_24._8_8_;
    while (uVar17 != lVar20) {
      lVar20 = lVar20 + -0x40;
      func_0x048b3e80(lVar20);
    }
    param_24._8_8_ = uVar17;
    func_0x0412a280(param_24._0_8_,param_25 - param_24._0_8_);
  }
  uVar17 = param_22._0_8_;
  if (param_22._0_8_ != 0) {
    for (lVar20 = param_22._8_8_; uVar17 != lVar20; lVar20 = lVar20 + -0x50) {
      if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                        *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
      }
    }
    param_22._8_8_ = uVar17;
    func_0x0412a280(param_22._0_8_,(long)param_23 - param_22._0_8_);
  }
LAB_0d1f8d8a:
  if ((byte)param_50 == '\0') {
    uVar17 = param_48._8_8_;
    if (param_48._8_8_ != 0) {
      lVar20 = param_49._0_8_;
      if (param_48._8_8_ != param_49._0_8_) {
        do {
          lVar20 = lVar20 + -0x40;
          func_0x048b3e80(lVar20);
        } while (lVar20 != uVar17);
      }
      param_49._0_8_ = uVar17;
      func_0x0412a280(param_48._8_8_,param_49._8_8_ - param_48._8_8_);
    }
    uVar17 = param_47._0_8_;
    if (param_47._0_8_ != 0) {
      for (lVar20 = param_47._8_8_; uVar17 != lVar20; lVar20 = lVar20 + -0x50) {
        if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                          *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
        }
      }
      param_47._8_8_ = uVar17;
      func_0x0412a280(param_47._0_8_,param_48._0_8_ - param_47._0_8_);
    }
  }
  if (((byte)param_51 & 1) != 0) {
    func_0x0412a280(param_53,CONCAT71(param_51._1_7_,(byte)param_51) & 0xfffffffffffffffe);
  }
  if (param_7._7_1_ == '\0') {
    LOCK();
    plVar22 = in_stack_00000240 + 1;
    lVar20 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*in_stack_00000240 + 0x10))(in_stack_00000240);
      func_0x0412c2d0(in_stack_00000240);
    }
  }
  plVar22 = in_stack_00000288._8_8_;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar1 = plVar22 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  if (in_stack_00000280 == '\x01') {
    func_0x0eee02f0(in_stack_00000278);
  }
  return;
}


